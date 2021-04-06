#ifndef __GM
#define __GM

#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <variant>
#include <algorithm>

#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/properties.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/graph/depth_first_search.hpp>

#include "parsetree.hpp"
#include "contextmanager.hpp"

using namespace std;

namespace pt = boost::property_tree;

class AchieveCondition {
    public:
        bool has_forAll_expr;
        
        string get_iterated_var() {
            if(has_forAll_expr) {
                return iterated_var;
            } else {
                return "";
            }
        }
        string get_iteration_var() {
            if(has_forAll_expr) {
                return iteration_var;
            } else {
                return "";
            }
        }
        string get_forAll_condition() {
            if(has_forAll_expr) {
                return forAll_condition;
            } else {
                return "";
            }
        }
        string get_condition() {
            if(!has_forAll_expr) {
                return condition;
            } else {
                return "";
            }
        }

        void set_iterated_var(string ivar) {
            iterated_var = ivar;
        }
        void set_iteration_var(string itvar) {
            iteration_var = itvar;
        }
        void set_forAll_condition(string f_cond) {
            forAll_condition = f_cond;
        }
        void set_condition(string cond) {
            condition = cond;
        }

    private:
        string iterated_var;
        string iteration_var;
        string forAll_condition;
        string condition;
};

class FailureCondition {
    public:
        string condition;
};

struct IterationRule {
    string iterated_var;
    string iteration_var;
    pair<string,string> result_var;
    string result_init;
    string end_loop;
};

struct QueriedProperty {
    string queried_var;
    pair<string,string> query_var;
    vector<string> query;
};

struct VertexData {
    int parent;
    vector<int> children;
    string id;
    string text;
    string type;
    map<string,variant<string,Context,QueriedProperty,AchieveCondition,FailureCondition,IterationRule,vector<pair<string,string>>>> custom_props;
    int x;
    int y;
    bool periodic; 
    float period;
    float deadline;
    bool group = true;
    bool divisible = true;
    bool fixed_robot_num = true;
    variant<int,pair<int,int>> robot_num;
};

struct EdgeData {
    string id;
    string type;
    string source;
    string target;
};

typedef boost::adjacency_list<boost::vecS,boost::vecS,
                                boost::directedS,
                                VertexData,
                                EdgeData> GMGraph;

class DFSVisitor : public boost::default_dfs_visitor {
  public:
    DFSVisitor() : vv(new std::vector<int>()) {}

    void discover_vertex(int v, const GMGraph &gm) const {
        vv->push_back(v);
        return;
    }

    std::vector<int> &GetVector() const { return *vv; }

  private:
    boost::shared_ptr<std::vector<int> > vv;
};

vector<int> get_dfs_gm_nodes(GMGraph gm);

void check_gm_validity(GMGraph gm);

vector<pair<int,VertexData>> parse_gm_nodes(pt::ptree nodes);

vector<pair<pair<int,int>, EdgeData>> parse_gm_edges(pt::ptree links, GMGraph& gm, vector<pair<int,VertexData>> vertex);

GMGraph graph_from_property_tree(pt::ptree root);

void check_undefined_number_of_robots(GMGraph& gm, vector<task> abstract_tasks, vector<sort_definition> sort_definitions);

string get_node_name(string node_text);
string parse_gm_var_type(string var_type);

vector<pair<string,string>> parse_vars(string var_decl);
vector<pair<string,string>> parse_var_mapping(string text);

vector<string> parse_forAll_expr(string expr);

IterationRule parse_iterate_expr(string expr);

AchieveCondition parse_achieve_condition(string cond);

QueriedProperty parse_select_expr(string expr);

pair<string,string> parse_at_text(string text);
pair<string,string> parse_goal_text(string text);

pair<int,int> parse_robot_number(string text);

void analyze_custom_props(map<string,string> custom_props, VertexData& v);

int find_gm_node_by_id(string id, GMGraph gm);

void print_gm_nodes_info(GMGraph gm);
void print_gm_var_map_info(map<string, variant<pair<string,string>,pair<vector<string>,string>>> gm_var_map);
void print_gm(GMGraph gm);

struct sort_by_id {
    inline bool operator() (const pair<int,VertexData> v1, const pair<int,VertexData> v2) {
        string v1_id = get_node_name(v1.second.text);
        string v2_id = get_node_name(v2.second.text);

        bool v1_goal, v2_goal;
        v1_goal = (v1_id.rfind("G",0) == 0);
        v2_goal = (v2_id.rfind("G",0) == 0);

        if(v1_goal && !v2_goal) {
            return true;
        } else if(!v1_goal && v2_goal) {
            return false;
        } else {
            if(v1_goal && v2_goal) {
                v1_id = v1_id.substr(1);
                v2_id = v2_id.substr(1);

                int v1_i, v2_i;
                v1_i = std::stoi(v1_id);
                v2_i = std::stoi(v2_id);

                return v1_i < v2_i;
            } else {
                v1_id = v1_id.substr(2);
                v2_id = v2_id.substr(2);

                int v1_i, v2_i;
                v1_i = std::stoi(v1_id);
                v2_i = std::stoi(v2_id);

                return v1_i < v2_i;
            }
        }
    }
};

struct sort_edges {
    inline bool operator() (const pair<pair<int,int>, EdgeData> e1, const pair<pair<int,int>, EdgeData> e2) {
        if(e1.first.first == e2.first.first) {
            return e1.first.second < e2.first.second;
        } else {
            return e1.first.first < e2.first.first;
        }
    }
};

#endif
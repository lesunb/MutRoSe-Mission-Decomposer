/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_ISAQUE_MUTROSE_MISSION_DECOMPOSER_BUILD_SRC_HDDL_HDDL_HPP_INCLUDED
# define YY_YY_HOME_ISAQUE_MUTROSE_MISSION_DECOMPOSER_BUILD_SRC_HDDL_HDDL_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    KEY_TYPES = 258,               /* KEY_TYPES  */
    KEY_DEFINE = 259,              /* KEY_DEFINE  */
    KEY_DOMAIN = 260,              /* KEY_DOMAIN  */
    KEY_PROBLEM = 261,             /* KEY_PROBLEM  */
    KEY_REQUIREMENTS = 262,        /* KEY_REQUIREMENTS  */
    KEY_PREDICATES = 263,          /* KEY_PREDICATES  */
    KEY_FUNCTIONS = 264,           /* KEY_FUNCTIONS  */
    KEY_TASK = 265,                /* KEY_TASK  */
    KEY_CONSTANTS = 266,           /* KEY_CONSTANTS  */
    KEY_ACTION = 267,              /* KEY_ACTION  */
    KEY_PARAMETERS = 268,          /* KEY_PARAMETERS  */
    KEY_PRECONDITION = 269,        /* KEY_PRECONDITION  */
    KEY_EFFECT = 270,              /* KEY_EFFECT  */
    KEY_METHOD = 271,              /* KEY_METHOD  */
    KEY_GOAL = 272,                /* KEY_GOAL  */
    KEY_INIT = 273,                /* KEY_INIT  */
    KEY_OBJECTS = 274,             /* KEY_OBJECTS  */
    KEY_HTN = 275,                 /* KEY_HTN  */
    KEY_TIHTN = 276,               /* KEY_TIHTN  */
    KEY_MIMIZE = 277,              /* KEY_MIMIZE  */
    KEY_METRIC = 278,              /* KEY_METRIC  */
    KEY_AND = 279,                 /* KEY_AND  */
    KEY_OR = 280,                  /* KEY_OR  */
    KEY_NOT = 281,                 /* KEY_NOT  */
    KEY_IMPLY = 282,               /* KEY_IMPLY  */
    KEY_FORALL = 283,              /* KEY_FORALL  */
    KEY_EXISTS = 284,              /* KEY_EXISTS  */
    KEY_WHEN = 285,                /* KEY_WHEN  */
    KEY_INCREASE = 286,            /* KEY_INCREASE  */
    KEY_DECREASE = 287,            /* KEY_DECREASE  */
    KEY_ASSIGN = 288,              /* KEY_ASSIGN  */
    KEY_TYPEOF = 289,              /* KEY_TYPEOF  */
    KEY_CAUSAL_LINKS = 290,        /* KEY_CAUSAL_LINKS  */
    KEY_CONSTRAINTS = 291,         /* KEY_CONSTRAINTS  */
    KEY_ORDER = 292,               /* KEY_ORDER  */
    KEY_ORDER_TASKS = 293,         /* KEY_ORDER_TASKS  */
    KEY_TASKS = 294,               /* KEY_TASKS  */
    KEY_REWARDS = 295,             /* KEY_REWARDS  */
    KEY_REWARD_CHANGE = 296,       /* KEY_REWARD_CHANGE  */
    KEY_CAPABILITIES = 297,        /* KEY_CAPABILITIES  */
    KEY_REQUIRED_CAPABILITIES = 298, /* KEY_REQUIRED_CAPABILITIES  */
    KEY_RELIABILITY = 299,         /* KEY_RELIABILITY  */
    KEY_PROBABILISTIC = 300,       /* KEY_PROBABILISTIC  */
    KEY_GREATER = 301,             /* KEY_GREATER  */
    NAME = 302,                    /* NAME  */
    REQUIRE_NAME = 303,            /* REQUIRE_NAME  */
    VAR_NAME = 304,                /* VAR_NAME  */
    FLOAT = 305,                   /* FLOAT  */
    INT = 306                      /* INT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 34 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"

	bool bval;
	int ival;
	float fval;
	char *sval;
	std::vector<std::string>* vstring;
	var_declaration* vardecl;
	predicate_definition* preddecl;
	general_formula* formula;
	std::vector<predicate_definition*>* preddecllist;
	std::vector<general_formula*>* formulae;
	var_and_const* varandconst;
	sub_task* subtask;
	std::vector<sub_task*>* subtasks;
	std::pair<bool,std::vector<sub_task*>*>* osubtasks;
	parsed_task_network* tasknetwork;
	std::pair<string,string>* spair;
	std::vector<std::pair<string,string>*>* spairlist;
	//std::pair<string,float>* reliabilityinst;
	std::vector<std::pair<ground_literal,float>>* prob_vec;
	literal* lit;

#line 138 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_HOME_ISAQUE_MUTROSE_MISSION_DECOMPOSER_BUILD_SRC_HDDL_HDDL_HPP_INCLUDED  */

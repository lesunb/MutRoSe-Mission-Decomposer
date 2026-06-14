/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"

	#include <cstdio>
	#include <iostream>
	#include <vector>
	#include <cassert>
	#include <string.h>
	#include <algorithm>
	#include "utils/parsetree.hpp"
	#include "utils/domain.hpp"
	#include "utils/cwa.hpp"
	
	using namespace std;

	extern bool mdp;
	extern bool has_forall;
	extern bool has_when;
	extern bool has_capabilities_definitions;
	
	// Declare stuff from Flex that Bison needs to know about:
	extern int yylex();
	extern int yyparse();
	extern FILE *yyin;
	char* current_parser_file_name;
	
	void yyerror(const char *s);

#line 98 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "hddl.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_KEY_TYPES = 3,                  /* KEY_TYPES  */
  YYSYMBOL_KEY_DEFINE = 4,                 /* KEY_DEFINE  */
  YYSYMBOL_KEY_DOMAIN = 5,                 /* KEY_DOMAIN  */
  YYSYMBOL_KEY_PROBLEM = 6,                /* KEY_PROBLEM  */
  YYSYMBOL_KEY_REQUIREMENTS = 7,           /* KEY_REQUIREMENTS  */
  YYSYMBOL_KEY_PREDICATES = 8,             /* KEY_PREDICATES  */
  YYSYMBOL_KEY_FUNCTIONS = 9,              /* KEY_FUNCTIONS  */
  YYSYMBOL_KEY_TASK = 10,                  /* KEY_TASK  */
  YYSYMBOL_KEY_CONSTANTS = 11,             /* KEY_CONSTANTS  */
  YYSYMBOL_KEY_ACTION = 12,                /* KEY_ACTION  */
  YYSYMBOL_KEY_PARAMETERS = 13,            /* KEY_PARAMETERS  */
  YYSYMBOL_KEY_PRECONDITION = 14,          /* KEY_PRECONDITION  */
  YYSYMBOL_KEY_EFFECT = 15,                /* KEY_EFFECT  */
  YYSYMBOL_KEY_METHOD = 16,                /* KEY_METHOD  */
  YYSYMBOL_KEY_GOAL = 17,                  /* KEY_GOAL  */
  YYSYMBOL_KEY_INIT = 18,                  /* KEY_INIT  */
  YYSYMBOL_KEY_OBJECTS = 19,               /* KEY_OBJECTS  */
  YYSYMBOL_KEY_HTN = 20,                   /* KEY_HTN  */
  YYSYMBOL_KEY_TIHTN = 21,                 /* KEY_TIHTN  */
  YYSYMBOL_KEY_MIMIZE = 22,                /* KEY_MIMIZE  */
  YYSYMBOL_KEY_METRIC = 23,                /* KEY_METRIC  */
  YYSYMBOL_KEY_AND = 24,                   /* KEY_AND  */
  YYSYMBOL_KEY_OR = 25,                    /* KEY_OR  */
  YYSYMBOL_KEY_NOT = 26,                   /* KEY_NOT  */
  YYSYMBOL_KEY_IMPLY = 27,                 /* KEY_IMPLY  */
  YYSYMBOL_KEY_FORALL = 28,                /* KEY_FORALL  */
  YYSYMBOL_KEY_EXISTS = 29,                /* KEY_EXISTS  */
  YYSYMBOL_KEY_WHEN = 30,                  /* KEY_WHEN  */
  YYSYMBOL_KEY_INCREASE = 31,              /* KEY_INCREASE  */
  YYSYMBOL_KEY_DECREASE = 32,              /* KEY_DECREASE  */
  YYSYMBOL_KEY_ASSIGN = 33,                /* KEY_ASSIGN  */
  YYSYMBOL_KEY_TYPEOF = 34,                /* KEY_TYPEOF  */
  YYSYMBOL_KEY_CAUSAL_LINKS = 35,          /* KEY_CAUSAL_LINKS  */
  YYSYMBOL_KEY_CONSTRAINTS = 36,           /* KEY_CONSTRAINTS  */
  YYSYMBOL_KEY_ORDER = 37,                 /* KEY_ORDER  */
  YYSYMBOL_KEY_ORDER_TASKS = 38,           /* KEY_ORDER_TASKS  */
  YYSYMBOL_KEY_TASKS = 39,                 /* KEY_TASKS  */
  YYSYMBOL_KEY_REWARDS = 40,               /* KEY_REWARDS  */
  YYSYMBOL_KEY_REWARD_CHANGE = 41,         /* KEY_REWARD_CHANGE  */
  YYSYMBOL_KEY_CAPABILITIES = 42,          /* KEY_CAPABILITIES  */
  YYSYMBOL_KEY_REQUIRED_CAPABILITIES = 43, /* KEY_REQUIRED_CAPABILITIES  */
  YYSYMBOL_KEY_RELIABILITY = 44,           /* KEY_RELIABILITY  */
  YYSYMBOL_KEY_PROBABILISTIC = 45,         /* KEY_PROBABILISTIC  */
  YYSYMBOL_KEY_GREATER = 46,               /* KEY_GREATER  */
  YYSYMBOL_NAME = 47,                      /* NAME  */
  YYSYMBOL_REQUIRE_NAME = 48,              /* REQUIRE_NAME  */
  YYSYMBOL_VAR_NAME = 49,                  /* VAR_NAME  */
  YYSYMBOL_FLOAT = 50,                     /* FLOAT  */
  YYSYMBOL_INT = 51,                       /* INT  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* '='  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_document = 58,                  /* document  */
  YYSYMBOL_domain = 59,                    /* domain  */
  YYSYMBOL_domain_defs = 60,               /* domain_defs  */
  YYSYMBOL_problem = 61,                   /* problem  */
  YYSYMBOL_problem_defs = 62,              /* problem_defs  */
  YYSYMBOL_p_object_declaration = 63,      /* p_object_declaration  */
  YYSYMBOL_p_init = 64,                    /* p_init  */
  YYSYMBOL_init_el = 65,                   /* init_el  */
  YYSYMBOL_prob_list = 66,                 /* prob_list  */
  YYSYMBOL_p_goal = 67,                    /* p_goal  */
  YYSYMBOL_htn_type = 68,                  /* htn_type  */
  YYSYMBOL_69_parameters_option = 69,      /* parameters-option  */
  YYSYMBOL_p_htn = 70,                     /* p_htn  */
  YYSYMBOL_p_constraint = 71,              /* p_constraint  */
  YYSYMBOL_p_metric = 72,                  /* p_metric  */
  YYSYMBOL_metric_f_exp = 73,              /* metric_f_exp  */
  YYSYMBOL_domain_symbol = 74,             /* domain_symbol  */
  YYSYMBOL_require_def = 75,               /* require_def  */
  YYSYMBOL_require_defs = 76,              /* require_defs  */
  YYSYMBOL_type_def = 77,                  /* type_def  */
  YYSYMBOL_type_def_list = 78,             /* type_def_list  */
  YYSYMBOL_rewards_def = 79,               /* rewards_def  */
  YYSYMBOL_rewards_def_list = 80,          /* rewards_def_list  */
  YYSYMBOL_capabilities_def = 81,          /* capabilities_def  */
  YYSYMBOL_capabilities_def_list = 82,     /* capabilities_def_list  */
  YYSYMBOL_const_def = 83,                 /* const_def  */
  YYSYMBOL_constant_declaration_list = 84, /* constant_declaration_list  */
  YYSYMBOL_constant_declarations = 85,     /* constant_declarations  */
  YYSYMBOL_predicates_def = 86,            /* predicates_def  */
  YYSYMBOL_87_atomic_predicate_def_list = 87, /* atomic_predicate_def-list  */
  YYSYMBOL_atomic_predicate_def = 88,      /* atomic_predicate_def  */
  YYSYMBOL_functions_def = 89,             /* functions_def  */
  YYSYMBOL_90_typed_atomic_function_def_list = 90, /* typed_atomic_function_def-list  */
  YYSYMBOL_typed_function_list_continuation = 91, /* typed_function_list_continuation  */
  YYSYMBOL_92_atomic_function_def_list = 92, /* atomic_function_def-list  */
  YYSYMBOL_task_or_action = 93,            /* task_or_action  */
  YYSYMBOL_task_def = 94,                  /* task_def  */
  YYSYMBOL_capabilities_option = 95,       /* capabilities_option  */
  YYSYMBOL_precondition_option = 96,       /* precondition_option  */
  YYSYMBOL_effect_option = 97,             /* effect_option  */
  YYSYMBOL_reliability_option = 98,        /* reliability_option  */
  YYSYMBOL_reliability_val = 99,           /* reliability_val  */
  YYSYMBOL_method_def = 100,               /* method_def  */
  YYSYMBOL_tasknetwork_def = 101,          /* tasknetwork_def  */
  YYSYMBOL_subtasks_option = 102,          /* subtasks_option  */
  YYSYMBOL_ordering_option = 103,          /* ordering_option  */
  YYSYMBOL_constraints_option = 104,       /* constraints_option  */
  YYSYMBOL_causal_links_option = 105,      /* causal_links_option  */
  YYSYMBOL_subtask_defs = 106,             /* subtask_defs  */
  YYSYMBOL_107_subtask_def_list = 107,     /* subtask_def-list  */
  YYSYMBOL_subtask_def = 108,              /* subtask_def  */
  YYSYMBOL_ordering_defs = 109,            /* ordering_defs  */
  YYSYMBOL_110_ordering_def_list = 110,    /* ordering_def-list  */
  YYSYMBOL_ordering_def = 111,             /* ordering_def  */
  YYSYMBOL_112_constraint_def_list = 112,  /* constraint_def-list  */
  YYSYMBOL_constraint_def = 113,           /* constraint_def  */
  YYSYMBOL_causallink_defs = 114,          /* causallink_defs  */
  YYSYMBOL_115_causallink_def_list = 115,  /* causallink_def-list  */
  YYSYMBOL_causallink_def = 116,           /* causallink_def  */
  YYSYMBOL_gd = 117,                       /* gd  */
  YYSYMBOL_118_gd_list = 118,              /* gd-list  */
  YYSYMBOL_gd_empty = 119,                 /* gd_empty  */
  YYSYMBOL_gd_conjuction = 120,            /* gd_conjuction  */
  YYSYMBOL_gd_disjuction = 121,            /* gd_disjuction  */
  YYSYMBOL_gd_negation = 122,              /* gd_negation  */
  YYSYMBOL_gd_implication = 123,           /* gd_implication  */
  YYSYMBOL_gd_existential = 124,           /* gd_existential  */
  YYSYMBOL_gd_universal = 125,             /* gd_universal  */
  YYSYMBOL_gd_equality_constraint = 126,   /* gd_equality_constraint  */
  YYSYMBOL_gd_greater_than_constraint = 127, /* gd_greater_than_constraint  */
  YYSYMBOL_gd_pred_constraints = 128,      /* gd_pred_constraints  */
  YYSYMBOL_gd_pred_equality = 129,         /* gd_pred_equality  */
  YYSYMBOL_gd_pred_greater = 130,          /* gd_pred_greater  */
  YYSYMBOL_131_var_or_const_list = 131,    /* var_or_const-list  */
  YYSYMBOL_var_or_const = 132,             /* var_or_const  */
  YYSYMBOL_atomic_formula = 133,           /* atomic_formula  */
  YYSYMBOL_134_effect_list = 134,          /* effect-list  */
  YYSYMBOL_effect = 135,                   /* effect  */
  YYSYMBOL_eff_empty = 136,                /* eff_empty  */
  YYSYMBOL_eff_conjunction = 137,          /* eff_conjunction  */
  YYSYMBOL_eff_universal = 138,            /* eff_universal  */
  YYSYMBOL_eff_conditional = 139,          /* eff_conditional  */
  YYSYMBOL_literal = 140,                  /* literal  */
  YYSYMBOL_neg_atomic_formula = 141,       /* neg_atomic_formula  */
  YYSYMBOL_p_effect = 142,                 /* p_effect  */
  YYSYMBOL_p_effect_increase = 143,        /* p_effect_increase  */
  YYSYMBOL_p_effect_decrease = 144,        /* p_effect_decrease  */
  YYSYMBOL_p_effect_assign = 145,          /* p_effect_assign  */
  YYSYMBOL_f_head = 146,                   /* f_head  */
  YYSYMBOL_f_exp = 147,                    /* f_exp  */
  YYSYMBOL_prob_effect = 148,              /* prob_effect  */
  YYSYMBOL_reward_change_effect = 149,     /* reward_change_effect  */
  YYSYMBOL_reward_op = 150,                /* reward_op  */
  YYSYMBOL_r_head = 151,                   /* r_head  */
  YYSYMBOL_r_exp = 152,                    /* r_exp  */
  YYSYMBOL_r_pred_val = 153,               /* r_pred_val  */
  YYSYMBOL_154_NAME_list_non_empty = 154,  /* NAME-list-non-empty  */
  YYSYMBOL_155_NAME_list = 155,            /* NAME-list  */
  YYSYMBOL_156_VAR_NAME_list_non_empty = 156, /* VAR_NAME-list-non-empty  */
  YYSYMBOL_157_VAR_NAME_list = 157,        /* VAR_NAME-list  */
  YYSYMBOL_typed_vars = 158,               /* typed_vars  */
  YYSYMBOL_typed_var = 159,                /* typed_var  */
  YYSYMBOL_typed_var_list = 160            /* typed_var_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   383

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  401

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      52,    53,     2,     2,     2,    55,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,    54,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   139,   139,   139,   142,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   153,   155,   160,   161,   162,   163,
     164,   165,   166,   166,   168,   169,   170,   184,   196,   209,
     213,   216,   218,   229,   231,   233,   233,   234,   234,   235,
     256,   258,   259,   260,   264,   269,   270,   270,   277,   278,
     285,   296,   297,   304,   305,   312,   314,   314,   315,   324,
     326,   326,   327,   336,   338,   346,   346,   348,   348,   357,
     357,   359,   378,   378,   379,   379,   380,   380,   382,   382,
     386,   395,   427,   448,   449,   450,   453,   453,   454,   454,
     455,   455,   465,   466,   467,   468,   469,   470,   471,   479,
     480,   481,   482,   483,   484,   485,   492,   493,   494,   495,
     496,   497,   498,   499,   506,   506,   506,   507,   507,   508,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   526,   527,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   539,   540,   542,   543,   544,   545,   547,   554,
     555,   557,   557,   558,   569,   570,   572,   573,   574,   575,
     576,   577,   578,   579,   581,   582,   583,   584,   586,   586,
     587,   590,   591,   592,   594,   595,   596,   598,   599,   600,
     601,   602,   604,   617,   618,   619,   620,   621,   622,   624,
     632,   633,   634,   639,   640,   641,   645,   651,   652,   657
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "KEY_TYPES",
  "KEY_DEFINE", "KEY_DOMAIN", "KEY_PROBLEM", "KEY_REQUIREMENTS",
  "KEY_PREDICATES", "KEY_FUNCTIONS", "KEY_TASK", "KEY_CONSTANTS",
  "KEY_ACTION", "KEY_PARAMETERS", "KEY_PRECONDITION", "KEY_EFFECT",
  "KEY_METHOD", "KEY_GOAL", "KEY_INIT", "KEY_OBJECTS", "KEY_HTN",
  "KEY_TIHTN", "KEY_MIMIZE", "KEY_METRIC", "KEY_AND", "KEY_OR", "KEY_NOT",
  "KEY_IMPLY", "KEY_FORALL", "KEY_EXISTS", "KEY_WHEN", "KEY_INCREASE",
  "KEY_DECREASE", "KEY_ASSIGN", "KEY_TYPEOF", "KEY_CAUSAL_LINKS",
  "KEY_CONSTRAINTS", "KEY_ORDER", "KEY_ORDER_TASKS", "KEY_TASKS",
  "KEY_REWARDS", "KEY_REWARD_CHANGE", "KEY_CAPABILITIES",
  "KEY_REQUIRED_CAPABILITIES", "KEY_RELIABILITY", "KEY_PROBABILISTIC",
  "KEY_GREATER", "NAME", "REQUIRE_NAME", "VAR_NAME", "FLOAT", "INT", "'('",
  "')'", "'='", "'-'", "'<'", "$accept", "document", "domain",
  "domain_defs", "problem", "problem_defs", "p_object_declaration",
  "p_init", "init_el", "prob_list", "p_goal", "htn_type",
  "parameters-option", "p_htn", "p_constraint", "p_metric", "metric_f_exp",
  "domain_symbol", "require_def", "require_defs", "type_def",
  "type_def_list", "rewards_def", "rewards_def_list", "capabilities_def",
  "capabilities_def_list", "const_def", "constant_declaration_list",
  "constant_declarations", "predicates_def", "atomic_predicate_def-list",
  "atomic_predicate_def", "functions_def",
  "typed_atomic_function_def-list", "typed_function_list_continuation",
  "atomic_function_def-list", "task_or_action", "task_def",
  "capabilities_option", "precondition_option", "effect_option",
  "reliability_option", "reliability_val", "method_def", "tasknetwork_def",
  "subtasks_option", "ordering_option", "constraints_option",
  "causal_links_option", "subtask_defs", "subtask_def-list", "subtask_def",
  "ordering_defs", "ordering_def-list", "ordering_def",
  "constraint_def-list", "constraint_def", "causallink_defs",
  "causallink_def-list", "causallink_def", "gd", "gd-list", "gd_empty",
  "gd_conjuction", "gd_disjuction", "gd_negation", "gd_implication",
  "gd_existential", "gd_universal", "gd_equality_constraint",
  "gd_greater_than_constraint", "gd_pred_constraints", "gd_pred_equality",
  "gd_pred_greater", "var_or_const-list", "var_or_const", "atomic_formula",
  "effect-list", "effect", "eff_empty", "eff_conjunction", "eff_universal",
  "eff_conditional", "literal", "neg_atomic_formula", "p_effect",
  "p_effect_increase", "p_effect_decrease", "p_effect_assign", "f_head",
  "f_exp", "prob_effect", "reward_change_effect", "reward_op", "r_head",
  "r_exp", "r_pred_val", "NAME-list-non-empty", "NAME-list",
  "VAR_NAME-list-non-empty", "VAR_NAME-list", "typed_vars", "typed_var",
  "typed_var_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-276)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-195)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -35,    28,    34,  -276,  -276,    -9,  -276,   144,    -2,    41,
    -276,     9,    49,  -276,    29,     1,    99,    15,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,    90,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,    94,  -276,  -276,   106,
     127,   129,   108,   146,    43,   118,   133,    79,   143,   196,
     158,   165,   161,   165,   202,  -276,  -276,   169,   162,  -276,
    -276,   171,  -276,  -276,  -276,   172,  -276,  -276,  -276,  -276,
     166,   146,   168,   213,  -276,  -276,  -276,   173,   120,  -276,
    -276,  -276,   177,  -276,   174,  -276,    56,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,   175,  -276,  -276,   176,
     180,   178,   183,  -276,  -276,  -276,  -276,   208,   183,   196,
    -276,   181,   189,  -276,  -276,  -276,   197,    82,   179,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,   122,   186,    74,   188,   138,   195,   194,    -1,
     192,   231,  -276,  -276,   183,   183,   198,   199,    65,  -276,
    -276,    65,  -276,   101,  -276,  -276,  -276,  -276,  -276,  -276,
     200,   193,  -276,   201,   201,   203,   211,  -276,  -276,  -276,
     231,  -276,   183,   234,   126,   132,   204,   183,  -276,  -276,
    -276,  -276,   205,   -34,   139,    33,   -34,   141,   206,  -276,
     207,   100,   209,  -276,    18,  -276,  -276,  -276,  -276,   212,
     218,   234,    37,  -276,   214,   216,  -276,  -276,  -276,  -276,
     210,   215,   217,   219,   220,   221,  -276,   222,   223,   224,
     225,    50,   -19,   226,   233,   230,  -276,  -276,   232,  -276,
     -12,  -276,  -276,   235,   236,   138,  -276,    92,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
     237,   229,  -276,   183,   183,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,   207,  -276,  -276,   238,   239,   142,   243,    48,
    -276,   227,  -276,   244,    13,  -276,   241,  -276,   242,  -276,
     245,   183,   110,   110,   110,   254,   214,  -276,   247,  -276,
    -276,   246,   248,  -276,   249,  -276,   251,  -276,  -276,  -276,
    -276,   145,   253,   256,  -276,   252,   257,  -276,   -34,    40,
    -276,  -276,  -276,   147,  -276,   214,  -276,   258,   114,   114,
     114,  -276,   255,   259,   260,  -276,  -276,  -276,    66,   -26,
    -276,  -276,   261,   262,   149,    -5,   263,   264,   -34,  -276,
     207,  -276,  -276,  -276,   266,   267,  -276,  -276,  -276,  -276,
     268,   269,   270,   277,   117,  -276,  -276,   272,  -276,  -276,
    -276,  -276,   257,   -34,   279,  -276,   274,   152,   281,   214,
    -276,    91,  -276,  -276,  -276,   276,  -276,  -276,  -276,   278,
    -276,  -276,   280,   -34,  -276,  -276,   283,  -276,  -276,   282,
     284,  -276,  -276,  -276,   285,   286,  -276,  -276,  -276,   287,
    -276
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     0,     0,     0,
      44,     0,     0,    14,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,     0,   192,
      47,    61,    68,    69,    57,    70,     0,   192,   192,     0,
       0,     0,     0,    49,     0,     0,     0,    66,   192,    38,
       0,    52,     0,    54,     0,    23,    48,     0,   191,    46,
      45,     0,    59,    60,    63,     0,    67,    64,    55,    56,
       0,     0,     0,     0,    51,   191,    53,     0,     0,   192,
     199,    68,     0,   199,     0,   199,     0,    15,    17,    19,
      20,    18,    21,    22,    16,    50,   195,    65,    58,   195,
       0,   195,     0,    31,    57,    35,    36,     0,     0,    38,
      62,     0,     0,   198,    37,   150,    73,     0,     0,   120,
     124,   125,   122,   123,   126,   127,   128,   129,   130,   142,
     143,   121,     0,   192,     0,     0,    85,     0,   193,     0,
       0,    75,   132,   132,     0,     0,     0,     0,     0,   150,
     133,     0,    34,     0,    25,   169,    26,   168,    24,    42,
       0,     0,    40,     0,     0,     0,    87,   196,   148,   149,
      75,   192,     0,    77,     0,     0,     0,     0,   199,   199,
     151,   152,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    41,     0,    84,    93,    83,    39,     0,
      89,    77,     0,    74,     0,    79,   134,   131,   135,   136,
       0,   195,   195,     0,     0,     0,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    96,   150,    92,
       0,    86,   100,     0,    91,    85,    72,     0,    76,   156,
     157,   158,   159,   160,   161,   171,   172,   173,   163,   162,
       0,     0,   137,     0,     0,   141,   147,   146,   140,   145,
     144,   170,     0,    29,    28,     0,     0,     0,     0,     0,
     103,     0,    99,     0,     0,    88,     0,    82,     0,   155,
       0,     0,     0,     0,     0,     0,     0,   164,     0,    78,
      71,     0,     0,    32,     0,    27,     0,    94,    95,   150,
      97,     0,     0,     0,   107,     0,     0,   108,     0,     0,
      90,   115,    81,     0,   199,     0,   177,     0,     0,     0,
       0,   184,     0,     0,     0,   139,   138,    30,     0,     0,
     101,   102,     0,     0,     0,     0,     0,     0,     0,   118,
       0,   114,   165,   154,   195,     0,   150,   180,   179,   181,
       0,     0,     0,     0,     0,   182,    80,     0,   104,   105,
     109,   106,     0,     0,     0,   112,     0,     0,     0,     0,
     167,     0,   174,   175,   176,     0,   187,   186,   189,     0,
     188,    98,     0,     0,   197,   110,     0,   116,   117,     0,
       0,   178,   185,   183,     0,     0,   119,   166,   113,     0,
     111
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,   156,  -276,  -276,  -276,  -276,  -276,   191,  -276,
    -276,   182,  -276,  -276,  -276,  -276,  -276,   151,  -276,  -276,
    -276,   289,  -276,   228,  -276,  -276,  -276,  -276,  -276,    97,
      85,  -276,  -276,  -276,    61,  -276,  -276,  -276,  -276,   170,
    -276,    44,  -276,  -276,     7,  -276,   -24,  -276,  -276,   -51,
     -94,   240,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -143,  -150,  -132,  -276,  -275,  -276,
    -276,  -276,  -276,  -130,  -276,  -276,  -276,  -276,  -276,  -214,
    -113,  -276,  -276,  -276,  -276,  -276,  -276,   -44,   -28,  -276,
    -276,  -276,   -30,   -80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    15,     4,    78,    88,    89,   132,   221,
      90,   109,    73,    91,    92,    93,   161,    11,    19,    44,
      20,    41,    21,    50,    22,    52,    23,    48,    69,    24,
      45,    63,    25,    46,    67,    47,    39,    26,   141,   173,
     205,   251,   289,    27,   165,   166,   200,   234,   277,   195,
     267,   196,   231,   301,   232,   334,   275,   310,   367,   311,
     207,   174,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   139,   183,   131,   313,   238,   239,
     240,   241,   242,   243,   157,   244,   245,   246,   247,   349,
     350,   248,   249,   322,   354,   379,   380,    42,    43,   111,
     112,   113,   337,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     155,   186,   156,    99,    70,   101,   185,   188,   118,    51,
      53,   323,   270,   180,   135,   181,   184,     1,    29,   187,
      71,   271,    30,    31,    32,    33,    34,    35,   149,   362,
     273,    36,     5,   213,     6,   271,   217,   304,   343,   305,
     345,   272,   227,     7,   273,    10,   168,   306,   169,   363,
     176,   177,   170,    17,    18,    37,   220,    38,   155,   155,
     223,   225,    13,    30,   339,   228,   307,   308,   318,   319,
     320,   229,   155,   102,   103,   104,   105,   106,   203,   107,
     168,    16,   169,   210,    75,   269,   216,   340,    12,    70,
     236,    59,   108,   341,   390,   168,    60,   169,   211,   212,
     262,   300,    14,   263,    28,    71,   142,   143,   144,   145,
     146,   147,   180,   168,   181,   169,   279,   182,   188,   357,
     280,   159,   281,   282,   283,   284,   160,   188,   148,   149,
     155,    61,   293,   285,    65,   150,   151,    40,   168,   149,
     169,    49,   286,   202,   391,   287,   189,   224,   149,     8,
       9,   190,   222,    54,   155,   191,   328,   316,   338,   291,
     292,   316,   317,    57,   347,   348,   317,   376,   377,   182,
      61,    62,    86,    87,   153,   154,   163,   164,   117,   206,
      55,   155,    56,   155,   117,   208,    64,   315,   366,   214,
     215,   218,   219,    58,   296,   297,    68,   329,   330,   237,
     342,   274,   360,   371,   386,   387,   351,   352,   155,    72,
     368,    74,    75,   383,    76,    77,    79,  -190,    80,    81,
      83,    82,   378,    84,    98,    85,   100,   115,   110,   114,
     134,   116,   152,   395,   344,   117,   137,   155,   138,   158,
     140,   162,   167,  -194,   171,   172,   193,   192,   199,   204,
     178,   179,   149,   194,   233,   133,   198,   209,   182,   222,
     250,    95,   226,   252,   230,   136,   237,   201,   253,    94,
     254,   276,   255,   256,   257,   258,   259,   260,   261,   264,
     265,   266,   290,   302,   268,   321,   235,   274,   294,   288,
     299,   303,   295,   309,   324,   312,   278,   314,   228,   325,
     332,   326,   327,   333,   335,   346,   336,   353,   331,    97,
     361,   298,   355,   356,   358,   359,   388,   365,   364,   369,
     370,   372,   373,   374,   375,   381,   384,   385,   389,   392,
     340,   393,   382,   394,   197,   396,    66,   397,   398,   399,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   175
};

static const yytype_int16 yycheck[] =
{
     132,   151,   132,    83,    48,    85,   149,    26,   102,    37,
      38,   286,    24,    47,   108,    49,   148,    52,     3,   151,
      48,    47,     7,     8,     9,    10,    11,    12,    47,    34,
      56,    16,     4,   183,     0,    47,   186,    24,   313,    26,
     315,    53,    24,    52,    56,    47,    47,    34,    49,    54,
     144,   145,    53,    52,    53,    40,   188,    42,   190,   191,
     190,   191,    53,     7,    24,    47,    53,    54,   282,   283,
     284,    53,   204,    17,    18,    19,    20,    21,   172,    23,
      47,    52,    49,   177,    47,   228,    53,    47,    47,   133,
      53,    48,    36,    53,   369,    47,    53,    49,   178,   179,
      50,    53,    53,    53,     5,   133,    24,    25,    26,    27,
      28,    29,    47,    47,    49,    49,    24,    52,    26,    53,
      28,    47,    30,    31,    32,    33,    52,    26,    46,    47,
     262,    52,   262,    41,    55,    53,    54,    47,    47,    47,
      49,    47,    50,   171,    53,    53,    45,    47,    47,     5,
       6,    50,    52,    47,   286,    54,   299,    47,   308,   253,
     254,    47,    52,    55,    50,    51,    52,    50,    51,    52,
      52,    53,    52,    53,    52,    53,    38,    39,    52,    53,
      53,   313,    53,   315,    52,    53,    53,   281,   338,    50,
      51,    50,    51,    47,    52,    53,    53,    52,    53,    52,
      53,    52,    53,   346,    52,    53,   319,   320,   340,    13,
     340,    53,    47,   363,    53,    13,    47,    55,    47,    47,
      52,    55,   354,    10,    47,    52,    52,    47,    53,    53,
      22,    53,    53,   383,   314,    52,    55,   369,    49,    53,
      43,    53,    47,    49,    52,    14,    53,    47,    37,    15,
      52,    52,    47,    52,    36,   104,    53,    53,    52,    52,
      44,    79,    53,    53,    52,   109,    52,   170,    53,    78,
      53,    35,    53,    53,    53,    53,    53,    53,    53,    53,
      47,    51,    53,    56,    52,    31,   201,    52,    50,    52,
      47,    47,    53,    52,    47,    53,   235,    52,    47,    53,
      47,    53,    53,    47,    52,    47,    49,    52,   301,    81,
     334,   267,    53,    53,    53,    53,   367,    53,    55,    53,
      53,    53,    53,    53,    47,    53,    47,    53,    47,    53,
      47,    53,   362,    53,   164,    53,    47,    53,    53,    53,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    58,    59,    61,     4,     0,    52,     5,     6,
      47,    74,    47,    53,    53,    60,    52,    52,    53,    75,
      77,    79,    81,    83,    86,    89,    94,   100,     5,     3,
       7,     8,     9,    10,    11,    12,    16,    40,    42,    93,
      47,    78,   154,   155,    76,    87,    90,    92,    84,    47,
      80,   155,    82,   155,    47,    53,    53,    55,    47,    48,
      53,    52,    53,    88,    53,    55,    88,    91,    53,    85,
     154,   155,    13,    69,    53,    47,    53,    13,    62,    47,
      47,    47,    55,    52,    10,    52,    52,    53,    63,    64,
      67,    70,    71,    72,    75,    78,   160,    90,    47,   160,
      52,   160,    17,    18,    19,    20,    21,    23,    36,    68,
      53,   156,   157,   158,    53,    47,    53,    52,   117,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   133,    65,    84,    22,   117,    69,    55,    49,   131,
      43,    95,    24,    25,    26,    27,    28,    29,    46,    47,
      53,    54,    53,    52,    53,   133,   140,   141,    53,    47,
      52,    73,    53,    38,    39,   101,   102,    47,    47,    49,
      53,    52,    14,    96,   118,   118,   117,   117,    52,    52,
      47,    49,    52,   132,   133,   131,   132,   133,    26,    45,
      50,    54,    47,    53,    52,   106,   108,   106,    53,    37,
     103,    96,   155,   117,    15,    97,    53,   117,    53,    53,
     117,   160,   160,   132,    50,    51,    53,   132,    50,    51,
     133,    66,    52,   140,    47,   140,    53,    24,    47,    53,
      52,   109,   111,    36,   104,    97,    53,    52,   135,   136,
     137,   138,   139,   140,   142,   143,   144,   145,   148,   149,
      44,    98,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    50,    53,    53,    47,    51,   107,    52,   131,
      24,    47,    53,    56,    52,   113,    35,   105,   101,    24,
      28,    30,    31,    32,    33,    41,    50,    53,    52,    99,
      53,   117,   117,   140,    50,    53,    52,    53,   108,    47,
      53,   110,    56,    47,    24,    26,    34,    53,    54,    52,
     114,   116,    53,   134,    52,   117,    47,    52,   146,   146,
     146,    31,   150,   135,    47,    53,    53,    53,   131,    52,
      53,   111,    47,    47,   112,    52,    49,   159,   132,    24,
      47,    53,    53,   135,   160,   135,    47,    50,    51,   146,
     147,   147,   147,    52,   151,    53,    53,    53,    53,    53,
      53,   113,    34,    54,    55,    53,   132,   115,   140,    53,
      53,   131,    53,    53,    53,    47,    50,    51,   133,   152,
     153,    53,   159,   132,    47,    53,    52,    53,   116,    47,
     135,    53,    53,    53,    53,   132,    53,    53,    53,    53,
      53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    68,    68,    69,    69,    70,
      71,    72,    73,    73,    74,    75,    76,    76,    77,    78,
      78,    79,    80,    81,    82,    83,    84,    84,    85,    86,
      87,    87,    88,    89,    90,    91,    91,    92,    92,    93,
      93,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,   100,   101,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   115,   115,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   137,   138,   139,   140,   140,
     141,   142,   142,   142,   143,   144,   145,   146,   146,   147,
     147,   147,   148,   149,   150,   151,   152,   152,   152,   153,
     154,   155,   155,   156,   157,   157,   158,   159,   160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,    12,     2,     2,     2,     2,
       2,     2,     2,     0,     4,     4,     2,     6,     5,     5,
       7,     0,     3,     0,     4,     1,     1,     4,     0,     5,
       4,     5,     1,     3,     1,     4,     2,     0,     4,     1,
       4,     4,     1,     4,     1,     4,     2,     0,     3,     4,
       2,     0,     4,     4,     2,     3,     0,     2,     0,     1,
       1,    12,     4,     0,     2,     0,     2,     0,     2,     0,
       3,    13,     4,     2,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     1,     4,     2,     0,     4,     7,     2,
       1,     4,     2,     0,     5,     5,     2,     0,     2,     4,
       5,     8,     4,     7,     2,     1,     4,     2,     0,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     2,     4,     4,     4,     5,     7,     7,
       5,     5,     1,     1,     5,     5,     5,     5,     2,     2,
       0,     1,     1,     4,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     7,     5,     1,     1,
       4,     1,     1,     1,     5,     5,     5,     1,     4,     1,
       1,     1,     4,     6,     1,     3,     1,     1,     1,     1,
       2,     2,     0,     2,     2,     0,     3,     3,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 26: /* init_el: init_el literal  */
#line 170 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                          {
		if ((yyvsp[0].formula)->type != NOTATOM){ // just ignore not in the initial state
			assert((yyvsp[0].formula)->type == ATOM);
			map<string,string> access;
			// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
			for(auto x : (yyvsp[0].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();  
			ground_literal l;
			l.positive = true;
			l.predicate = (yyvsp[0].formula)->predicate;
			for(string v : (yyvsp[0].formula)->arguments.vars) l.args.push_back(access[v]);
			//l.truth_prob = 1;
			init.push_back(l);
		}
	}
#line 2185 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 27: /* init_el: init_el '(' '=' literal INT ')'  */
#line 184 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                        {
		assert((yyvsp[-2].formula)->type == ATOM);
		map<string,string> access;
		// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
		for(auto x : (yyvsp[-2].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();
		ground_literal l;
		l.positive = true;
		l.predicate = (yyvsp[-2].formula)->predicate;
		//l.truth_prob = 1;
		for(string v : (yyvsp[-2].formula)->arguments.vars) l.args.push_back(access[v]);
		init_functions.push_back(std::make_pair(l,(yyvsp[-1].ival)));
	}
#line 2202 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 28: /* init_el: init_el '(' FLOAT literal ')'  */
#line 196 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                      {
		assert((yyvsp[-1].formula)->type == ATOM);
		map<string,string> access;
		// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
		for(auto x : (yyvsp[-1].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();
		ground_literal l;
		l.positive = true;
		l.predicate = (yyvsp[-1].formula)->predicate;
		//l.truth_prob = $3;
		for(string v : (yyvsp[-1].formula)->arguments.vars) l.args.push_back(access[v]);
		init_prob.push_back(std::make_pair(l,(yyvsp[-2].fval)));
		mdp = true;
	}
#line 2220 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 29: /* init_el: init_el '(' KEY_PROBABILISTIC prob_list ')'  */
#line 209 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                    {
		init_prob_vec.push_back(*((yyvsp[-1].prob_vec)));
		mdp = true;
	}
#line 2229 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 30: /* init_el: init_el '(' '=' NAME NAME FLOAT ')'  */
#line 213 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                            {
		init_rel.push_back(std::make_pair((yyvsp[-3].sval), std::make_pair((yyvsp[-2].sval),(yyvsp[-1].fval))));
		mdp = true;
	}
#line 2238 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 32: /* prob_list: prob_list FLOAT literal  */
#line 218 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                     {
	(yyval.prob_vec)=(yyvsp[-2].prob_vec);
	assert((yyvsp[0].formula)->type == ATOM);
	map<string,string> access;
	// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
	for(auto x : (yyvsp[0].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();
	ground_literal l;
	l.positive = true;
	l.predicate = (yyvsp[0].formula)->predicate;
	for(string v : (yyvsp[0].formula)->arguments.vars) l.args.push_back(access[v]);
	(yyval.prob_vec)->push_back(std::make_pair(l,(yyvsp[-1].fval)));
}
#line 2255 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 33: /* prob_list: %empty  */
#line 229 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
    {(yyval.prob_vec) = new std::vector<std::pair<ground_literal,float>>;}
#line 2261 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 34: /* p_goal: '(' KEY_GOAL gd ')'  */
#line 231 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {goal_formula = (yyvsp[-1].formula);}
#line 2267 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 36: /* htn_type: KEY_TIHTN  */
#line 233 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                              {assert(false); /*we don't support ti-htn yet*/}
#line 2273 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 37: /* parameters-option: KEY_PARAMETERS '(' typed_var_list ')'  */
#line 234 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                         {(yyval.vardecl) = (yyvsp[-1].vardecl);}
#line 2279 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 38: /* parameters-option: %empty  */
#line 234 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                      {(yyval.vardecl) = new var_declaration(); }
#line 2285 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 39: /* p_htn: '(' htn_type parameters-option tasknetwork_def ')'  */
#line 238 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                    {
		parsed_method m;
		m.name = "__top_method";		
		string atName("__top"); // later for insertion into map
		m.vars = (yyvsp[-2].vardecl);
		m.prec = new general_formula(); m.prec->type = EMPTY;
		m.eff = new general_formula(); m.eff->type = EMPTY;
		m.tn = (yyvsp[-1].tasknetwork);
		parsed_methods[atName].push_back(m);

		parsed_task	top;
		top.name = "__top";
		top.arguments = new var_declaration();
		top.prec = new general_formula(); top.prec->type = EMPTY;
		top.eff = new general_formula(); top.eff->type = EMPTY;
		parsed_abstract.push_back(top);
}
#line 2307 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 42: /* metric_f_exp: NAME  */
#line 259 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                    { metric_target = (yyvsp[0].sval); }
#line 2313 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 43: /* metric_f_exp: '(' NAME ')'  */
#line 260 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                            { metric_target = (yyvsp[-1].sval); }
#line 2319 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 46: /* require_defs: require_defs REQUIRE_NAME  */
#line 270 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                         {string r((yyvsp[0].sval)); if (r == ":typeof-predicate") has_typeof_predicate = true; }
#line 2325 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 48: /* type_def: '(' KEY_TYPES type_def_list ')'  */
#line 277 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                           { /*reverse list after all types have been parsed*/ reverse(sort_definitions.begin(), sort_definitions.end()); }
#line 2331 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 49: /* type_def_list: NAME-list  */
#line 278 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                          {	sort_definition s; s.has_parent_sort = false; s.declared_sorts = *((yyvsp[0].vstring)); delete (yyvsp[0].vstring);
			  				if (s.declared_sorts.size()) {
								sort_definitions.push_back(s);
								// touch constant map to ensure a consistent access
								for (string & ss : s.declared_sorts) sorts[ss].size();
							}
				}
#line 2343 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 50: /* type_def_list: NAME-list-non-empty '-' NAME type_def_list  */
#line 285 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                       {
							sort_definition s; s.has_parent_sort = true; s.parent_sort = (yyvsp[-1].sval); free((yyvsp[-1].sval));
							s.declared_sorts = *((yyvsp[-3].vstring)); delete (yyvsp[-3].vstring);
			  				sort_definitions.push_back(s);
							// touch constant map to ensure a consistent access
							for (string & ss : s.declared_sorts) sorts[ss].size();
							sorts[s.parent_sort].size();
							}
#line 2356 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 51: /* rewards_def: '(' KEY_REWARDS rewards_def_list ')'  */
#line 296 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                   {}
#line 2362 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 52: /* rewards_def_list: NAME-list  */
#line 297 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {
	rewards_definitions = *((yyvsp[0].vstring));
	mdp = true;
}
#line 2371 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 53: /* capabilities_def: '(' KEY_CAPABILITIES capabilities_def_list ')'  */
#line 304 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                  {}
#line 2377 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 54: /* capabilities_def_list: NAME-list  */
#line 305 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                  {
	capabilities_definitions = *((yyvsp[0].vstring));
	has_capabilities_definitions = true;
}
#line 2386 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 58: /* constant_declarations: NAME-list-non-empty '-' NAME  */
#line 315 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                     {
						string type((yyvsp[0].sval));
						for(unsigned int i = 0; i < (yyvsp[-2].vstring)->size(); i++)
							sorts[type].insert((*((yyvsp[-2].vstring)))[i]);
}
#line 2396 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 60: /* atomic_predicate_def-list: atomic_predicate_def-list atomic_predicate_def  */
#line 326 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                           {predicate_definitions.push_back(*((yyvsp[0].preddecl))); delete (yyvsp[0].preddecl);}
#line 2402 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 62: /* atomic_predicate_def: '(' NAME typed_var_list ')'  */
#line 327 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                   {
		(yyval.preddecl) = new predicate_definition();
		(yyval.preddecl)->name = (yyvsp[-2].sval);
		for (unsigned int i = 0; i < (yyvsp[-1].vardecl)->vars.size(); i++) (yyval.preddecl)->argument_sorts.push_back((yyvsp[-1].vardecl)->vars[i].second);
	}
#line 2412 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 64: /* typed_atomic_function_def-list: atomic_function_def-list typed_function_list_continuation  */
#line 338 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                                           {
	char * type_of_functions = (yyvsp[0].sval);
	for (predicate_definition* p : *(yyvsp[-1].preddecllist)){
		parsed_functions.push_back(std::make_pair(*p,type_of_functions));
		delete p;
	}
	delete (yyvsp[-1].preddecllist);
}
#line 2425 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 65: /* typed_function_list_continuation: '-' NAME typed_atomic_function_def-list  */
#line 346 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                           { (yyval.sval) = (yyvsp[-1].sval); }
#line 2431 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 66: /* typed_function_list_continuation: %empty  */
#line 346 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                                          { (yyval.sval) = strdup(numeric_function_type.c_str()); }
#line 2437 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 67: /* atomic_function_def-list: atomic_function_def-list atomic_predicate_def  */
#line 348 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                         { (yyval.preddecllist)->push_back((yyvsp[0].preddecl)); }
#line 2443 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 68: /* atomic_function_def-list: %empty  */
#line 348 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                                                  { (yyval.preddecllist) = new std::vector<predicate_definition*>();}
#line 2449 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 69: /* task_or_action: KEY_TASK  */
#line 357 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.bval)=true;}
#line 2455 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 70: /* task_or_action: KEY_ACTION  */
#line 357 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                 {(yyval.bval)=false;}
#line 2461 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 71: /* task_def: '(' task_or_action NAME KEY_PARAMETERS '(' typed_var_list ')' capabilities_option precondition_option effect_option reliability_option ')'  */
#line 364 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                               {
				// found a new task, add it to list
				parsed_task t;
				t.name = (yyvsp[-9].sval);
				t.arguments = (yyvsp[-6].vardecl);
				t.required_capabilities = (yyvsp[-4].vstring);
				t.prec = (yyvsp[-3].formula);
				t.eff = (yyvsp[-2].formula);
				std::string	s((yyvsp[-1].sval));			
				t.reliability = s;

				if ((yyvsp[-10].bval)) parsed_abstract.push_back(t); else parsed_primitive.push_back(t);
			}
#line 2479 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 72: /* capabilities_option: KEY_REQUIRED_CAPABILITIES '(' NAME-list ')'  */
#line 378 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                 {(yyval.vstring) = (yyvsp[-1].vstring);}
#line 2485 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 73: /* capabilities_option: %empty  */
#line 378 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                              {(yyval.vstring) = new vector<string>();}
#line 2491 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 74: /* precondition_option: KEY_PRECONDITION gd  */
#line 379 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2497 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 75: /* precondition_option: %empty  */
#line 379 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                      {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2503 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 76: /* effect_option: KEY_EFFECT effect  */
#line 380 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                 {(yyval.formula) = (yyvsp[0].formula);}
#line 2509 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 77: /* effect_option: %empty  */
#line 380 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2515 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 78: /* reliability_option: KEY_RELIABILITY reliability_val  */
#line 382 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                     {(yyval.sval) = (yyvsp[0].sval);}
#line 2521 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 79: /* reliability_option: %empty  */
#line 382 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                  {(yyval.sval) = "";}
#line 2527 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 80: /* reliability_val: '(' NAME ')'  */
#line 386 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                              {(yyval.sval) = (yyvsp[-1].sval); mdp=true;}
#line 2533 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 81: /* method_def: '(' KEY_METHOD NAME parameters-option KEY_TASK '(' NAME var_or_const-list ')' precondition_option effect_option tasknetwork_def ')'  */
#line 401 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
           {
		parsed_method m;
		m.name = (yyvsp[-10].sval);		
		string atName((yyvsp[-6].sval)); // later for insertion into map
		m.atArguments = (yyvsp[-5].varandconst)->vars; 
		m.newVarForAT = (yyvsp[-5].varandconst)->newVar;
		m.vars = (yyvsp[-9].vardecl);
		m.prec = (yyvsp[-3].formula);
		m.eff = (yyvsp[-2].formula);
		m.tn = (yyvsp[-1].tasknetwork);

		parsed_methods[atName].push_back(m);
	}
#line 2551 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 82: /* tasknetwork_def: subtasks_option ordering_option constraints_option causal_links_option  */
#line 430 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                            {
	(yyval.tasknetwork) = new parsed_task_network();
	(yyval.tasknetwork)->tasks = *((yyvsp[-3].osubtasks)->second);
	(yyval.tasknetwork)->ordering = *((yyvsp[-2].spairlist));
	if ((yyvsp[-3].osubtasks)->first){
		if ((yyval.tasknetwork)->ordering.size()) assert(false); // given ordering but said that this is a total order
		for(unsigned int i = 1; i < (yyval.tasknetwork)->tasks.size(); i++){
			pair<string,string>* o = new pair<string,string>();
			o->first = (yyval.tasknetwork)->tasks[i-1]->id;
			o->second = (yyval.tasknetwork)->tasks[i]->id;
			(yyval.tasknetwork)->ordering.push_back(o);
		}
	}
	(yyval.tasknetwork)->constraint = (yyvsp[-1].formula);

	// TODO causal links?????
}
#line 2573 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 83: /* subtasks_option: KEY_TASKS subtask_defs  */
#line 448 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                 {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>(); (yyval.osubtasks)->first = false; (yyval.osubtasks)->second = (yyvsp[0].subtasks); }
#line 2579 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 84: /* subtasks_option: KEY_ORDER_TASKS subtask_defs  */
#line 449 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                       {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>(); (yyval.osubtasks)->first = true; (yyval.osubtasks)->second = (yyvsp[0].subtasks); }
#line 2585 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 85: /* subtasks_option: %empty  */
#line 450 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                          {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>();
					   (yyval.osubtasks)->first = true; (yyval.osubtasks)->second = new vector<sub_task*>();}
#line 2592 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 86: /* ordering_option: KEY_ORDER ordering_defs  */
#line 453 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                         {(yyval.spairlist) = (yyvsp[0].spairlist);}
#line 2598 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 87: /* ordering_option: %empty  */
#line 453 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                     {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2604 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 88: /* constraints_option: KEY_CONSTRAINTS constraint_def  */
#line 454 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                   {(yyval.formula) = (yyvsp[0].formula);}
#line 2610 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 89: /* constraints_option: %empty  */
#line 454 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2616 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 92: /* subtask_defs: '(' ')'  */
#line 465 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                       {(yyval.subtasks) = new vector<sub_task*>();}
#line 2622 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 93: /* subtask_defs: subtask_def  */
#line 466 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                        {(yyval.subtasks) = new vector<sub_task*>(); (yyval.subtasks)->push_back((yyvsp[0].subtask));}
#line 2628 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 94: /* subtask_defs: '(' KEY_AND subtask_def-list ')'  */
#line 467 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                             {(yyval.subtasks) = (yyvsp[-1].subtasks);}
#line 2634 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 95: /* subtask_def-list: subtask_def-list subtask_def  */
#line 468 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                {(yyval.subtasks) = (yyvsp[-1].subtasks); (yyval.subtasks)->push_back((yyvsp[0].subtask));}
#line 2640 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 96: /* subtask_def-list: %empty  */
#line 469 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                   {(yyval.subtasks) = new vector<sub_task*>();}
#line 2646 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 97: /* subtask_def: '(' NAME var_or_const-list ')'  */
#line 470 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                               {(yyval.subtask) = new sub_task(); (yyval.subtask)->id = "__t_id_" + to_string(task_id_counter); task_id_counter++; (yyval.subtask)->task = (yyvsp[-2].sval); (yyval.subtask)->arguments = (yyvsp[-1].varandconst); }
#line 2652 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 98: /* subtask_def: '(' NAME '(' NAME var_or_const-list ')' ')'  */
#line 471 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                        {(yyval.subtask) = new sub_task(); (yyval.subtask)->id = (yyvsp[-5].sval); (yyval.subtask)->task = (yyvsp[-3].sval); (yyval.subtask)->arguments = (yyvsp[-2].varandconst); }
#line 2658 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 99: /* ordering_defs: '(' ')'  */
#line 479 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                       {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2664 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 100: /* ordering_defs: ordering_def  */
#line 480 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                          {(yyval.spairlist) = new vector<pair<string,string>*>(); (yyval.spairlist)->push_back((yyvsp[0].spair));}
#line 2670 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 101: /* ordering_defs: '(' KEY_AND ordering_def-list ')'  */
#line 481 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                               {(yyval.spairlist) = (yyvsp[-1].spairlist);}
#line 2676 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 102: /* ordering_def-list: ordering_def-list ordering_def  */
#line 482 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                  {(yyval.spairlist) = (yyvsp[-1].spairlist); (yyval.spairlist)->push_back((yyvsp[0].spair));}
#line 2682 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 103: /* ordering_def-list: %empty  */
#line 483 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                   {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2688 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 104: /* ordering_def: '(' NAME '<' NAME ')'  */
#line 484 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                     {(yyval.spair) = new pair<string,string>(); (yyval.spair)->first = (yyvsp[-3].sval); (yyval.spair)->second = (yyvsp[-1].sval);}
#line 2694 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 105: /* ordering_def: '(' '<' NAME NAME ')'  */
#line 485 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                 {(yyval.spair) = new pair<string,string>(); (yyval.spair)->first = (yyvsp[-2].sval); (yyval.spair)->second = (yyvsp[-1].sval);}
#line 2700 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 106: /* constraint_def-list: constraint_def-list constraint_def  */
#line 492 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                        {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2706 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 107: /* constraint_def-list: %empty  */
#line 493 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                      {(yyval.formulae) = new vector<general_formula*>();}
#line 2712 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 108: /* constraint_def: '(' ')'  */
#line 494 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2718 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 109: /* constraint_def: '(' KEY_AND constraint_def-list ')'  */
#line 495 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                      {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2724 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 110: /* constraint_def: '(' '=' var_or_const var_or_const ')'  */
#line 496 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUAL; (yyval.formula)->arg1 = (yyvsp[-2].sval); (yyval.formula)->arg2 = (yyvsp[-1].sval);}
#line 2730 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 111: /* constraint_def: '(' KEY_NOT '(' '=' var_or_const var_or_const ')' ')'  */
#line 497 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type = NOTEQUAL; (yyval.formula)->arg1 = (yyvsp[-3].sval); (yyval.formula)->arg2 = (yyvsp[-2].sval);}
#line 2736 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 112: /* constraint_def: '(' KEY_TYPEOF typed_var ')'  */
#line 498 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                               {(yyval.formula) = new general_formula(); (yyval.formula)->type = OFSORT; (yyval.formula)->arg1 = (yyvsp[-1].vardecl)->vars[0].first; (yyval.formula)->arg2 = (yyvsp[-1].vardecl)->vars[0].second; }
#line 2742 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 113: /* constraint_def: '(' KEY_NOT '(' KEY_TYPEOF typed_var ')' ')'  */
#line 499 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                {(yyval.formula) = new general_formula(); (yyval.formula)->type = NOTOFSORT; (yyval.formula)->arg1 = (yyvsp[-2].vardecl)->vars[0].first; (yyval.formula)->arg2 = (yyvsp[-2].vardecl)->vars[0].second; }
#line 2748 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 120: /* gd: gd_empty  */
#line 514 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
               {(yyval.formula) = (yyvsp[0].formula);}
#line 2754 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 121: /* gd: atomic_formula  */
#line 515 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2760 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 122: /* gd: gd_negation  */
#line 516 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                      {(yyval.formula) = (yyvsp[0].formula);}
#line 2766 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 123: /* gd: gd_implication  */
#line 517 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2772 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 124: /* gd: gd_conjuction  */
#line 518 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                        {(yyval.formula) = (yyvsp[0].formula);}
#line 2778 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 125: /* gd: gd_disjuction  */
#line 519 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                        {(yyval.formula) = (yyvsp[0].formula);}
#line 2784 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 126: /* gd: gd_existential  */
#line 520 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2790 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 127: /* gd: gd_universal  */
#line 521 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                       {(yyval.formula) = (yyvsp[0].formula);}
#line 2796 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 128: /* gd: gd_equality_constraint  */
#line 522 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                 {(yyval.formula) = (yyvsp[0].formula);}
#line 2802 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 129: /* gd: gd_greater_than_constraint  */
#line 523 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                     {(yyval.formula) = (yyvsp[0].formula);}
#line 2808 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 130: /* gd: gd_pred_constraints  */
#line 524 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                              {(yyval.formula) = (yyvsp[0].formula);}
#line 2814 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 131: /* gd-list: gd-list gd  */
#line 526 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                     {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2820 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 132: /* gd-list: %empty  */
#line 527 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                  {(yyval.formulae) = new vector<general_formula*>();}
#line 2826 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 133: /* gd_empty: '(' ')'  */
#line 529 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                   {(yyval.formula) = new general_formula(); (yyval.formula)->type=EMPTY;}
#line 2832 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 134: /* gd_conjuction: '(' KEY_AND gd-list ')'  */
#line 530 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2838 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 135: /* gd_disjuction: '(' KEY_OR gd-list ')'  */
#line 531 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                       {(yyval.formula) = new general_formula(); (yyval.formula)->type=OR; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2844 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 136: /* gd_negation: '(' KEY_NOT gd ')'  */
#line 532 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                 {(yyval.formula) = (yyvsp[-1].formula); (yyval.formula)->negate();}
#line 2850 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 137: /* gd_implication: '(' KEY_IMPLY gd gd ')'  */
#line 533 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                         {(yyval.formula) = new general_formula(); (yyval.formula)->type=OR; (yyvsp[-2].formula)->negate(); (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula));}
#line 2856 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 138: /* gd_existential: '(' KEY_EXISTS '(' typed_var_list ')' gd ')'  */
#line 534 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type = EXISTS; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl));}
#line 2862 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 139: /* gd_universal: '(' KEY_FORALL '(' typed_var_list ')' gd ')'  */
#line 535 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                            {(yyval.formula) = new general_formula(); (yyval.formula)->type = FORALL; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl));}
#line 2868 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 140: /* gd_equality_constraint: '(' '=' var_or_const var_or_const ')'  */
#line 536 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                               {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUAL; (yyval.formula)->arg1 = (yyvsp[-2].sval); (yyval.formula)->arg2 = (yyvsp[-1].sval);}
#line 2874 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 141: /* gd_greater_than_constraint: '(' KEY_GREATER var_or_const var_or_const ')'  */
#line 537 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                           {(yyval.formula) = new general_formula(); (yyval.formula)->type = GREATER; (yyval.formula)->arg1 = (yyvsp[-2].sval); (yyval.formula)->arg2 = (yyvsp[-1].sval);}
#line 2880 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 144: /* gd_pred_equality: '(' '=' atomic_formula INT ')'  */
#line 542 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                  {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUALPRED; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->value = (yyvsp[-1].ival);}
#line 2886 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 145: /* gd_pred_equality: '(' '=' atomic_formula FLOAT ')'  */
#line 543 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                    {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUALPREDF; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->fvalue = (yyvsp[-1].fval);}
#line 2892 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 146: /* gd_pred_greater: '(' KEY_GREATER atomic_formula INT ')'  */
#line 544 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                         {(yyval.formula) = new general_formula(); (yyval.formula)->type = GREATERPRED; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->value = (yyvsp[-1].ival);}
#line 2898 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 147: /* gd_pred_greater: '(' KEY_GREATER atomic_formula FLOAT ')'  */
#line 545 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                           {(yyval.formula) = new general_formula(); (yyval.formula)->type = GREATERPREDF; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->fvalue = (yyvsp[-1].fval);}
#line 2904 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 148: /* var_or_const-list: var_or_const-list NAME  */
#line 547 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                             {
						(yyval.varandconst) = (yyvsp[-1].varandconst);
						string c((yyvsp[0].sval)); string s = "sort_for_" + c; string v = "?var_for_" + c;
						sorts[s].insert(c);
						(yyval.varandconst)->vars.push_back(v);
						(yyval.varandconst)->newVar.insert(make_pair(v,s));
					}
#line 2916 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 149: /* var_or_const-list: var_or_const-list VAR_NAME  */
#line 554 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                     {(yyval.varandconst) = (yyvsp[-1].varandconst); string s((yyvsp[0].sval)); (yyval.varandconst)->vars.push_back(s);}
#line 2922 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 150: /* var_or_const-list: %empty  */
#line 555 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                          {(yyval.varandconst) = new var_and_const();}
#line 2928 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 151: /* var_or_const: NAME  */
#line 557 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                    {(yyval.sval)=(yyvsp[0].sval);}
#line 2934 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 152: /* var_or_const: VAR_NAME  */
#line 557 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                       {(yyval.sval)=(yyvsp[0].sval);}
#line 2940 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 153: /* atomic_formula: '(' NAME var_or_const-list ')'  */
#line 558 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type=ATOM;
			   								   (yyval.formula)->predicate = (yyvsp[-2].sval); (yyval.formula)->arguments = *((yyvsp[-1].varandconst));
											  }
#line 2948 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 154: /* effect-list: effect-list effect  */
#line 569 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2954 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 155: /* effect-list: %empty  */
#line 570 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                  {(yyval.formulae) = new vector<general_formula*>();}
#line 2960 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 156: /* effect: eff_empty  */
#line 572 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                   {(yyval.formula) = (yyvsp[0].formula);}
#line 2966 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 157: /* effect: eff_conjunction  */
#line 573 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 2972 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 158: /* effect: eff_universal  */
#line 574 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                           {(yyval.formula) = (yyvsp[0].formula);}
#line 2978 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 159: /* effect: eff_conditional  */
#line 575 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 2984 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 160: /* effect: literal  */
#line 576 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                     {(yyval.formula) = (yyvsp[0].formula);}
#line 2990 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 161: /* effect: p_effect  */
#line 577 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                      {(yyval.formula) = (yyvsp[0].formula);}
#line 2996 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 162: /* effect: reward_change_effect  */
#line 578 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                  {(yyval.formula) = (yyvsp[0].formula);}
#line 3002 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 163: /* effect: prob_effect  */
#line 579 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 3008 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 164: /* eff_empty: '(' ')'  */
#line 581 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                    {(yyval.formula) = new general_formula(); (yyval.formula)->type=EMPTY;}
#line 3014 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 165: /* eff_conjunction: '(' KEY_AND effect-list ')'  */
#line 582 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 3020 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 166: /* eff_universal: '(' KEY_FORALL '(' typed_var_list ')' effect ')'  */
#line 583 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                {(yyval.formula) = new general_formula(); (yyval.formula)->type = FORALL; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl)); has_forall = true;}
#line 3026 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 167: /* eff_conditional: '(' KEY_WHEN gd effect ')'  */
#line 584 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                             {(yyval.formula) = new general_formula(); (yyval.formula)->type=WHEN; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); has_when = true;}
#line 3032 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 168: /* literal: neg_atomic_formula  */
#line 586 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 3038 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 169: /* literal: atomic_formula  */
#line 586 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                         {(yyval.formula) = (yyvsp[0].formula);}
#line 3044 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 170: /* neg_atomic_formula: '(' KEY_NOT atomic_formula ')'  */
#line 587 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                    {(yyval.formula) = (yyvsp[-1].formula); (yyval.formula)->negate();}
#line 3050 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 174: /* p_effect_increase: '(' KEY_INCREASE f_head f_exp ')'  */
#line 594 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                     {(yyval.formula) = new general_formula(); (yyval.formula)->type=COST_CHANGE_INCREASE; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); }
#line 3056 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 175: /* p_effect_decrease: '(' KEY_DECREASE f_head f_exp ')'  */
#line 595 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                     {(yyval.formula) = new general_formula(); (yyval.formula)->type=COST_CHANGE_DECREASE; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); }
#line 3062 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 176: /* p_effect_assign: '(' KEY_ASSIGN f_head f_exp ')'  */
#line 596 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                 {(yyval.formula) = new general_formula(); (yyval.formula)->type=COST_CHANGE_ASSIGN; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); }
#line 3068 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 177: /* f_head: NAME  */
#line 598 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
              { (yyval.formula) = new general_formula(); (yyval.formula)->type = COST; (yyval.formula)->predicate = (yyvsp[0].sval); }
#line 3074 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 178: /* f_head: '(' NAME var_or_const-list ')'  */
#line 599 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                        { (yyval.formula) = new general_formula(); (yyval.formula)->type = COST; (yyval.formula)->predicate = (yyvsp[-2].sval); (yyval.formula)->arguments = *((yyvsp[-1].varandconst)); }
#line 3080 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 179: /* f_exp: INT  */
#line 600 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
            { (yyval.formula) = new general_formula(); (yyval.formula)->type = VALUE; (yyval.formula)->value = (yyvsp[0].ival); (yyval.formula)->fvalue = 0.0; (yyval.formula)->predvalue = new literal; }
#line 3086 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 180: /* f_exp: FLOAT  */
#line 601 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                  { (yyval.formula) = new general_formula(); (yyval.formula)->type = FVALUE; (yyval.formula)->value = 0; (yyval.formula)->fvalue = (yyvsp[0].fval); (yyval.formula)->predvalue = new literal; }
#line 3092 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 181: /* f_exp: f_head  */
#line 602 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
               { (yyval.formula) = (yyvsp[0].formula); }
#line 3098 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 182: /* prob_effect: '(' FLOAT effect ')'  */
#line 604 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                   {(yyval.formula) = new general_formula(); (yyval.formula)->type=PROB; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); mdp = true;}
#line 3104 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 183: /* reward_change_effect: '(' KEY_REWARD_CHANGE reward_op r_head r_exp ')'  */
#line 617 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                                        { (yyval.formula) = new general_formula(); (yyval.formula)->type=REWARD_CHANGE; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); mdp = true;}
#line 3110 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 185: /* r_head: '(' NAME ')'  */
#line 619 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                      { (yyval.formula) = new general_formula(); (yyval.formula)->type = REWARD; (yyval.formula)->predicate = (yyvsp[-1].sval); }
#line 3116 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 186: /* r_exp: INT  */
#line 620 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
            { (yyval.formula) = new general_formula(); (yyval.formula)->type = INTVALUE; (yyval.formula)->value = (yyvsp[0].ival); (yyval.formula)->fvalue = 0.0; (yyval.formula)->predvalue = new literal; }
#line 3122 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 187: /* r_exp: FLOAT  */
#line 621 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
              { (yyval.formula) = new general_formula(); (yyval.formula)->type = FVALUE; (yyval.formula)->value = 0; (yyval.formula)->fvalue = (yyvsp[0].fval); (yyval.formula)->predvalue = new literal; }
#line 3128 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 188: /* r_exp: r_pred_val  */
#line 622 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                   { (yyval.formula) = new general_formula(); (yyval.formula)->type = PREDVALUE; (yyval.formula)->value = 0; (yyval.formula)->fvalue = 0.0; (yyval.formula)->predvalue = (yyvsp[0].lit); }
#line 3134 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 189: /* r_pred_val: atomic_formula  */
#line 624 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                            { 
	(yyval.lit) = new literal; 
	(yyval.lit)->predicate = (yyvsp[0].formula)->predicate;
	(yyval.lit)->positive = true;
	for (unsigned int i = 0; i < (yyvsp[0].formula)->arguments.vars.size(); i++) (yyval.lit)->arguments.push_back((yyvsp[0].formula)->arguments.vars.at(i));
}
#line 3145 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 190: /* NAME-list-non-empty: NAME-list NAME  */
#line 632 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                    {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 3151 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 191: /* NAME-list: NAME-list NAME  */
#line 633 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                          {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 3157 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 192: /* NAME-list: %empty  */
#line 634 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                           {(yyval.vstring) = new vector<string>();}
#line 3163 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 193: /* VAR_NAME-list-non-empty: VAR_NAME-list VAR_NAME  */
#line 639 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                                {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 3169 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 194: /* VAR_NAME-list: VAR_NAME-list VAR_NAME  */
#line 640 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                      {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 3175 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 195: /* VAR_NAME-list: %empty  */
#line 641 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                           {(yyval.vstring) = new vector<string>();}
#line 3181 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 196: /* typed_vars: VAR_NAME-list-non-empty '-' NAME  */
#line 645 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                              {
		   	(yyval.vardecl) = new var_declaration;
			string t((yyvsp[0].sval));
			for (unsigned int i = 0; i < (yyvsp[-2].vstring)->size(); i++)
				(yyval.vardecl)->vars.push_back(make_pair((*((yyvsp[-2].vstring)))[i],t));
			}
#line 3192 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 197: /* typed_var: VAR_NAME '-' NAME  */
#line 651 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                              { (yyval.vardecl) = new var_declaration; string v((yyvsp[-2].sval)); string t((yyvsp[0].sval)); (yyval.vardecl)->vars.push_back(make_pair(v,t));}
#line 3198 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 198: /* typed_var_list: typed_var_list typed_vars  */
#line 652 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                                           {
			   		(yyval.vardecl) = (yyvsp[-1].vardecl);
					for (unsigned int i = 0; i < (yyvsp[0].vardecl)->vars.size(); i++) (yyval.vardecl)->vars.push_back((yyvsp[0].vardecl)->vars[i]);
					delete (yyvsp[0].vardecl);
				}
#line 3208 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;

  case 199: /* typed_var_list: %empty  */
#line 657 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"
                             {(yyval.vardecl) = new var_declaration;}
#line 3214 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"
    break;


#line 3218 "/home/isaque/MutRoSe-Mission-Decomposer/build/src/hddl/hddl.cpp"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 659 "/home/isaque/MutRoSe-Mission-Decomposer/src/hddl/hddl.y"

void run_parser_on_file(FILE* f, char* filename){
	current_parser_file_name = filename;
	yyin = f;
	yyparse();
}

void yyerror(const char *s) {
  cout << "\x1b[31mParse error\x1b[0m in file " << current_parser_file_name << " in line \x1b[1m" << yylloc.first_line << "\x1b[0m" << endl;
  if (strlen(s) >= 14 && (strncmp("syntax error, ",s,14) == 0)){
    s += 14;
  }
  cout << s << endl;
  // might as well halt now:
  exit(-1);
}

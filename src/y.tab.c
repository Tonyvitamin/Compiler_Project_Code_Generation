/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARRAY = 258,
     DO = 259,
     ELSE = 260,
     END = 261,
     FUNCTION = 262,
     IF = 263,
     NOT = 264,
     OF = 265,
     PROCEDURE = 266,
     PROGRAM = 267,
     THEN = 268,
     VAR = 269,
     WHILE = 270,
     IDENTIFIER = 271,
     ASSIGNMENT = 272,
     COLON = 273,
     COMMA = 274,
     DIGSEQ = 275,
     DOT = 276,
     DOTDOT = 277,
     EQUAL = 278,
     GE = 279,
     GT = 280,
     LBRAC = 281,
     LE = 282,
     LPAREN = 283,
     LT = 284,
     MINUS = 285,
     PLUS = 286,
     RBRAC = 287,
     REALNUMBER = 288,
     RPAREN = 289,
     SEMICOLON = 290,
     SLASH = 291,
     STAR = 292,
     notEQUAL = 293,
     STRING = 294,
     real = 295,
     INTEGER = 296,
     begin = 297,
     string_v = 298,
     READ = 299,
     WRITELN = 300
   };
#endif
/* Tokens.  */
#define ARRAY 258
#define DO 259
#define ELSE 260
#define END 261
#define FUNCTION 262
#define IF 263
#define NOT 264
#define OF 265
#define PROCEDURE 266
#define PROGRAM 267
#define THEN 268
#define VAR 269
#define WHILE 270
#define IDENTIFIER 271
#define ASSIGNMENT 272
#define COLON 273
#define COMMA 274
#define DIGSEQ 275
#define DOT 276
#define DOTDOT 277
#define EQUAL 278
#define GE 279
#define GT 280
#define LBRAC 281
#define LE 282
#define LPAREN 283
#define LT 284
#define MINUS 285
#define PLUS 286
#define RBRAC 287
#define REALNUMBER 288
#define RPAREN 289
#define SEMICOLON 290
#define SLASH 291
#define STAR 292
#define notEQUAL 293
#define STRING 294
#define real 295
#define INTEGER 296
#define begin 297
#define string_v 298
#define READ 299
#define WRITELN 300




/* Copy the first part of user declarations.  */
#line 2 "Parser.y"

 #include <stdio.h>
 #include <stdlib.h>
 #include "node-type.h"
 #include "symtab.h"
 #include "code_gen.h"
    extern struct SymTable SymbolTable;
    struct node *  ASTRoot;
    struct node * newOpNode(int op , int lineCount);
    extern int lineCount;
    extern int check;
    FILE * fp;
    /* Called by yyparse on error.  */
     void
     yyerror (char const *s)
     {
        extern char *yytext;
        //extern int lineCount;
        fprintf (stderr, "%s: at line %d symbol'%s'\n", s,lineCount,yytext);
     }


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "Parser.y"
{ 
    struct node * node_t ;
}
/* Line 193 of yacc.c.  */
#line 212 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    14,    16,    20,    27,    29,    31,    40,
      42,    44,    46,    50,    52,    56,    63,    68,    72,    74,
      79,    86,    88,    90,    94,    96,    98,   102,   106,   108,
     110,   117,   122,   127,   132,   134,   137,   142,   144,   146,
     151,   153,   157,   159,   163,   165,   169,   173,   175,   179,
     182,   187,   189,   192,   194,   197,   201,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    12,    16,    28,    48,    34,    35,    49,
      52,    58,    21,    -1,    16,    -1,    48,    19,    16,    -1,
      49,    14,    48,    18,    50,    35,    -1,    74,    -1,    51,
      -1,     3,    26,    20,    22,    20,    32,    10,    50,    -1,
      41,    -1,    40,    -1,    39,    -1,    52,    53,    35,    -1,
      74,    -1,    54,    49,    58,    -1,     7,    16,    55,    18,
      51,    35,    -1,    11,    16,    55,    35,    -1,    28,    56,
      34,    -1,    74,    -1,    57,    48,    18,    50,    -1,    57,
      48,    18,    50,    35,    56,    -1,    14,    -1,    74,    -1,
      42,    59,     6,    -1,    60,    -1,    61,    -1,    60,    35,
      61,    -1,    62,    17,    66,    -1,    64,    -1,    58,    -1,
       8,    66,    13,    61,     5,    61,    -1,    15,    66,     4,
      61,    -1,    44,    28,    69,    34,    -1,    45,    28,    69,
      34,    -1,    74,    -1,    16,    63,    -1,    26,    66,    32,
      63,    -1,    74,    -1,    16,    -1,    16,    28,    65,    34,
      -1,    66,    -1,    65,    19,    66,    -1,    67,    -1,    67,
      73,    67,    -1,    68,    -1,    67,    70,    68,    -1,    67,
      71,    68,    -1,    69,    -1,    68,    72,    69,    -1,    16,
      63,    -1,    16,    28,    65,    34,    -1,    20,    -1,    71,
      20,    -1,    33,    -1,    71,    33,    -1,    28,    66,    34,
      -1,     9,    69,    -1,    43,    -1,    31,    -1,    30,    -1,
      37,    -1,    36,    -1,    29,    -1,    25,    -1,    23,    -1,
      27,    -1,    24,    -1,    38,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    72,    75,    80,    87,    91,    94,   106,
     109,   112,   118,   123,   127,   135,   143,   150,   154,   158,
     163,   171,   175,   178,   190,   194,   197,   202,   207,   210,
     213,   223,   229,   236,   243,   246,   252,   261,   264,   268,
     275,   279,   284,   287,   293,   296,   300,   307,   310,   316,
     321,   327,   331,   337,   341,   347,   351,   354,   358,   361,
     365,   368,   372,   375,   378,   381,   384,   387,   391
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARRAY", "DO", "ELSE", "END", "FUNCTION",
  "IF", "NOT", "OF", "PROCEDURE", "PROGRAM", "THEN", "VAR", "WHILE",
  "IDENTIFIER", "ASSIGNMENT", "COLON", "COMMA", "DIGSEQ", "DOT", "DOTDOT",
  "EQUAL", "GE", "GT", "LBRAC", "LE", "LPAREN", "LT", "MINUS", "PLUS",
  "RBRAC", "REALNUMBER", "RPAREN", "SEMICOLON", "SLASH", "STAR",
  "notEQUAL", "STRING", "real", "INTEGER", "begin", "string_v", "READ",
  "WRITELN", "$accept", "prog", "identifier_list", "declarations", "type",
  "standard_type", "subprogram_declarations", "subprogram_declaration",
  "subprogram_head", "arguments", "parameter_list", "optional_var",
  "compound_statement", "optional_statements", "statement_list",
  "statement", "variable", "tail", "procedure_statement",
  "expression_list", "expression", "simple_expression", "term", "factor",
  "addop", "minusop", "mulop", "relop", "lambda", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    51,    52,    52,    53,    54,    54,    55,    55,    56,
      56,    57,    57,    58,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    71,
      72,    72,    73,    73,    73,    73,    73,    73,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     1,     3,     6,     1,     1,     8,     1,
       1,     1,     3,     1,     3,     6,     4,     3,     1,     4,
       6,     1,     1,     3,     1,     1,     3,     3,     1,     1,
       6,     4,     4,     4,     1,     2,     4,     1,     1,     4,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     2,
       4,     1,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     0,     0,
       4,    68,    68,     6,     0,     0,    13,     0,     0,     0,
      68,     0,    68,     0,     0,    68,    68,     0,     0,    38,
       0,     0,    29,     0,    24,    25,     0,    28,    34,    12,
       0,     2,     0,    11,    10,     9,     0,     7,    68,     0,
      18,     0,     0,    68,    51,     0,    59,    53,    57,     0,
      42,    44,    47,     0,     0,     0,     0,    35,    37,     0,
       0,    23,    68,     0,    14,     0,     5,    21,     0,     0,
      22,     0,    16,    56,     0,    49,     0,    68,    64,    66,
      63,    65,    62,    58,    67,     0,     0,     0,    61,    60,
       0,    52,    54,    68,     0,     0,    40,     0,     0,    26,
      27,     0,    17,     0,     0,     0,    55,     0,    45,    46,
      43,    48,    31,    68,     0,    39,    32,    33,     0,     0,
      15,    50,    68,    36,    41,     0,    19,    30,     0,    68,
       0,    20,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    12,    46,    47,    15,    21,    22,    49,
      78,    79,    32,    33,    34,    35,    36,    67,    37,   105,
     106,    60,    61,    62,    95,    63,   100,    97,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int8 yypact[] =
{
      17,    -4,    33,    -8,  -102,    27,  -102,    -2,    48,    14,
    -102,  -102,    40,  -102,    27,    20,  -102,    42,    53,    78,
       8,    60,  -102,    77,     6,    72,    72,    35,    35,    63,
      73,    74,  -102,    97,    70,  -102,    87,  -102,  -102,  -102,
      -1,  -102,    80,  -102,  -102,  -102,    75,  -102,    93,    90,
    -102,    76,    35,    31,  -102,    35,  -102,  -102,  -102,    96,
      52,    36,  -102,    38,   109,    35,    35,  -102,  -102,    35,
      35,  -102,     8,    35,  -102,    94,  -102,  -102,    81,    27,
    -102,    45,  -102,  -102,    35,  -102,    82,     8,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,    35,    35,    35,  -102,  -102,
      35,  -102,  -102,     8,    85,     0,  -102,    84,    86,  -102,
    -102,    99,  -102,    69,    88,     2,  -102,   114,    36,    36,
      62,  -102,  -102,    98,    35,  -102,  -102,  -102,   102,     6,
    -102,  -102,     8,  -102,  -102,    95,    91,  -102,   115,    93,
       6,  -102,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -102,  -102,    -9,   107,  -101,    49,  -102,  -102,  -102,   105,
      -7,  -102,    -5,  -102,  -102,   -65,  -102,   -49,  -102,    50,
     -25,    39,     1,   -44,  -102,   -54,  -102,  -102,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      13,    16,    59,    64,    85,    17,    96,   109,    83,    42,
      23,    13,     3,    14,    50,    50,    27,     8,    68,   124,
       5,   124,   117,    28,    29,   107,   108,    18,   136,     1,
      86,    19,     9,     4,   125,    74,   131,    80,   122,   142,
     104,    20,    68,     6,    52,    43,    44,    45,   110,    11,
      20,    53,    30,    31,    14,    54,   121,    65,   101,    84,
      24,     8,    20,    55,    10,    56,    96,   137,    57,    25,
     113,   102,    98,    99,   133,    88,    89,    90,    58,    91,
     -68,    92,    56,    93,    43,    44,    45,   129,     8,    65,
      94,    66,    56,    93,    26,    39,   118,   119,    41,   134,
      48,    69,    70,    71,    73,    72,    75,    77,    81,    87,
      76,    82,    68,   103,   111,   112,   116,   123,   126,   132,
     127,   128,   135,   130,    65,   140,   139,   138,    80,    40,
     114,    51,   141,     0,   115,     0,   120
};

static const yytype_int16 yycheck[] =
{
      11,    12,    27,    28,    53,    14,    60,    72,    52,     3,
      15,    22,    16,    14,    25,    26,     8,    19,    29,    19,
      28,    19,    87,    15,    16,    69,    70,     7,   129,    12,
      55,    11,    34,     0,    34,    40,    34,    48,   103,   140,
      65,    42,    53,    16,     9,    39,    40,    41,    73,    35,
      42,    16,    44,    45,    14,    20,   100,    26,    20,    28,
      18,    19,    42,    28,    16,    30,   120,   132,    33,    16,
      79,    33,    36,    37,   123,    23,    24,    25,    43,    27,
      17,    29,    30,    31,    39,    40,    41,    18,    19,    26,
      38,    28,    30,    31,    16,    35,    95,    96,    21,   124,
      28,    28,    28,     6,    17,    35,    26,    14,    18,    13,
      35,    35,   123,     4,    20,    34,    34,    32,    34,     5,
      34,    22,    20,    35,    26,    10,    35,    32,   139,    22,
      81,    26,   139,    -1,    84,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    47,    16,     0,    28,    16,    48,    19,    34,
      16,    35,    49,    74,    14,    52,    74,    48,     7,    11,
      42,    53,    54,    58,    18,    16,    16,     8,    15,    16,
      44,    45,    58,    59,    60,    61,    62,    64,    74,    35,
      49,    21,     3,    39,    40,    41,    50,    51,    28,    55,
      74,    55,     9,    16,    20,    28,    30,    33,    43,    66,
      67,    68,    69,    71,    66,    26,    28,    63,    74,    28,
      28,     6,    35,    17,    58,    26,    35,    14,    56,    57,
      74,    18,    35,    69,    28,    63,    66,    13,    23,    24,
      25,    27,    29,    31,    38,    70,    71,    73,    36,    37,
      72,    20,    33,     4,    66,    65,    66,    69,    69,    61,
      66,    20,    34,    48,    51,    65,    34,    61,    68,    68,
      67,    69,    61,    32,    19,    34,    34,    34,    22,    18,
      35,    34,     5,    63,    66,    20,    50,    61,    32,    35,
      10,    56,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 58 "Parser.y"
    {  //create symbol table
            (yyval.node_t) = newNode(NODE_PROGRAM , lineCount);
            addChild((yyval.node_t) , (yyvsp[(2) - (10)].node_t));
            deleteNode((yyvsp[(4) - (10)].node_t));
            deleteNode((yyvsp[(1) - (10)].node_t)); 
            deleteNode((yyvsp[(3) - (10)].node_t)); 
            deleteNode((yyvsp[(5) - (10)].node_t)); 
            deleteNode((yyvsp[(6) - (10)].node_t)); 
            addChild((yyval.node_t) , (yyvsp[(7) - (10)].node_t)); 
            addChild((yyval.node_t) , (yyvsp[(8) - (10)].node_t));
            addChild((yyval.node_t) , (yyvsp[(9) - (10)].node_t));
            deleteNode((yyvsp[(10) - (10)].node_t)); 
            ASTRoot = (yyval.node_t);}
    break;

  case 3:
#line 72 "Parser.y"
    {
                        (yyval.node_t) = newNode(NODE_LIST, lineCount);
                        addChild((yyval.node_t) , (yyvsp[(1) - (1)].node_t));}
    break;

  case 4:
#line 75 "Parser.y"
    {  
                            (yyval.node_t) = (yyvsp[(1) - (3)].node_t);
                            addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));
                            deleteNode((yyvsp[(2) - (3)].node_t)); }
    break;

  case 5:
#line 80 "Parser.y"
    {
                        (yyval.node_t) = (yyvsp[(1) - (6)].node_t);
                        addChild((yyval.node_t) , (yyvsp[(3) - (6)].node_t));
                        addChild((yyval.node_t) , (yyvsp[(5) - (6)].node_t));
                        deleteNode((yyvsp[(2) - (6)].node_t)); 
                        deleteNode((yyvsp[(4) - (6)].node_t)); 
                        deleteNode((yyvsp[(6) - (6)].node_t));}
    break;

  case 6:
#line 87 "Parser.y"
    {
                        (yyval.node_t) = newNode(NODE_DECL, lineCount); //handle declaration problem ex: array int real string_v
                    }
    break;

  case 7:
#line 91 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
        }
    break;

  case 8:
#line 94 "Parser.y"
    {
            (yyval.node_t) = newNode(NODE_TYPE_ARRAY, lineCount);
            addChild((yyval.node_t) , (yyvsp[(3) - (8)].node_t));
            addChild((yyval.node_t) , (yyvsp[(5) - (8)].node_t));
            addChild((yyval.node_t) , (yyvsp[(8) - (8)].node_t));
            deleteNode((yyvsp[(1) - (8)].node_t));
            deleteNode((yyvsp[(2) - (8)].node_t));
            deleteNode((yyvsp[(4) - (8)].node_t));
            deleteNode((yyvsp[(6) - (8)].node_t));
            deleteNode((yyvsp[(7) - (8)].node_t));
        }
    break;

  case 9:
#line 106 "Parser.y"
    {
                (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
                (yyval.node_t)->nodeType = NODE_TYPE_INT;}
    break;

  case 10:
#line 109 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
            (yyval.node_t)->nodeType = NODE_TYPE_REAL;}
    break;

  case 11:
#line 112 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
            (yyval.node_t)->nodeType = NODE_TYPE_STRING; }
    break;

  case 12:
#line 118 "Parser.y"
    {
                                    (yyval.node_t) = (yyvsp[(1) - (3)].node_t);
                                    addChild((yyval.node_t) , (yyvsp[(2) - (3)].node_t));
                                    deleteNode((yyvsp[(3) - (3)].node_t));
                                    }
    break;

  case 13:
#line 123 "Parser.y"
    {
            (yyval.node_t) = newNode(NODE_SUB_DECLS, lineCount);
        }
    break;

  case 14:
#line 129 "Parser.y"
    {
                (yyval.node_t) = newNode(NODE_LIST, lineCount);
                addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
                addChild((yyval.node_t) , (yyvsp[(2) - (3)].node_t));
                addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));}
    break;

  case 15:
#line 135 "Parser.y"
    { //create symbol table
                    (yyval.node_t) = newNode(NODE_FUN_HEAD, lineCount);
                    deleteNode((yyvsp[(1) - (6)].node_t));
                    addChild((yyval.node_t) , (yyvsp[(2) - (6)].node_t));
                    addChild((yyval.node_t) , (yyvsp[(3) - (6)].node_t));
                    addChild((yyval.node_t) , (yyvsp[(5) - (6)].node_t));
                    deleteNode((yyvsp[(4) - (6)].node_t));
                    deleteNode((yyvsp[(6) - (6)].node_t));}
    break;

  case 16:
#line 143 "Parser.y"
    { //create symbol table
                    (yyval.node_t) =  newNode(NODE_PRO_HEAD, lineCount);
                    deleteNode((yyvsp[(1) - (4)].node_t));
                    addChild((yyval.node_t) , (yyvsp[(2) - (4)].node_t));
                    addChild((yyval.node_t) , (yyvsp[(3) - (4)].node_t));
                    deleteNode((yyvsp[(4) - (4)].node_t));}
    break;

  case 17:
#line 150 "Parser.y"
    {
                    (yyval.node_t) = (yyvsp[(2) - (3)].node_t);
                    deleteNode((yyvsp[(1) - (3)].node_t));
                    deleteNode((yyvsp[(3) - (3)].node_t));}
    break;

  case 18:
#line 154 "Parser.y"
    {
            (yyval.node_t) = newNode(NODE_lambda, lineCount);}
    break;

  case 19:
#line 158 "Parser.y"
    {
                        (yyval.node_t) = (yyvsp[(1) - (4)].node_t);
                        addChild((yyval.node_t) , (yyvsp[(2) - (4)].node_t));
                        addChild((yyval.node_t) , (yyvsp[(4) - (4)].node_t));
                        deleteNode((yyvsp[(3) - (4)].node_t));}
    break;

  case 20:
#line 163 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(6) - (6)].node_t);
            addChild((yyval.node_t) , (yyvsp[(2) - (6)].node_t));
            addChild((yyval.node_t) , (yyvsp[(4) - (6)].node_t));
            //addChild($$ , $6);
            deleteNode((yyvsp[(3) - (6)].node_t));
            deleteNode((yyvsp[(5) - (6)].node_t));}
    break;

  case 21:
#line 171 "Parser.y"
    {
                        (yyval.node_t) = newNode(NODE_DECL, lineCount);
                        deleteNode((yyvsp[(1) - (1)].node_t));
                     }
    break;

  case 22:
#line 175 "Parser.y"
    {(yyval.node_t) = newNode(NODE_DECL, lineCount);}
    break;

  case 23:
#line 180 "Parser.y"
    {    // create symbol table
                        (yyval.node_t) = newNode(NODE_BEGIN, lineCount);
                        addChild((yyval.node_t) , (yyvsp[(2) - (3)].node_t));
                        struct node * temp = newNode(NODE_END, lineCount);
                        addChild((yyval.node_t) , temp);
                        deleteNode((yyvsp[(1) - (3)].node_t));
                        deleteNode((yyvsp[(3) - (3)].node_t));
                    }
    break;

  case 24:
#line 190 "Parser.y"
    {
                            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);}
    break;

  case 25:
#line 194 "Parser.y"
    {
                    (yyval.node_t) = newNode(NODE_LIST, lineCount);
                    addChild((yyval.node_t) , (yyvsp[(1) - (1)].node_t));}
    break;

  case 26:
#line 197 "Parser.y"
    {
                    (yyval.node_t) = (yyvsp[(1) - (3)].node_t);
                    addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));
                    deleteNode((yyvsp[(2) - (3)].node_t));}
    break;

  case 27:
#line 202 "Parser.y"
    {
                (yyval.node_t) = newNode(NODE_ASSIGN_STMT, lineCount);
                addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
                addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));
                deleteNode((yyvsp[(2) - (3)].node_t));}
    break;

  case 28:
#line 207 "Parser.y"
    {
                (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
                          }
    break;

  case 29:
#line 210 "Parser.y"
    {
                (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
                         }
    break;

  case 30:
#line 213 "Parser.y"
    { 
                        //semantic if here
                        (yyval.node_t) = newNode(NODE_IF, lineCount);
                        addChild((yyval.node_t) , (yyvsp[(2) - (6)].node_t));
                        addChild((yyval.node_t) , (yyvsp[(4) - (6)].node_t));
                        addChild((yyval.node_t) , (yyvsp[(6) - (6)].node_t));
                        deleteNode((yyvsp[(1) - (6)].node_t));
                        //deleteNode($3);
                        //deleteNode($5);
                        }
    break;

  case 31:
#line 223 "Parser.y"
    { 
            (yyval.node_t) = newNode(NODE_WHILE, lineCount);
            addChild((yyval.node_t) , (yyvsp[(2) - (4)].node_t));
            addChild((yyval.node_t) , (yyvsp[(4) - (4)].node_t));
            deleteNode((yyvsp[(1) - (4)].node_t));
            deleteNode((yyvsp[(3) - (4)].node_t));}
    break;

  case 32:
#line 229 "Parser.y"
    {
        (yyval.node_t) = newNode(NODE_READ , lineCount);
        addChild((yyval.node_t) , (yyvsp[(3) - (4)].node_t));
        deleteNode((yyvsp[(1) - (4)].node_t));
        deleteNode((yyvsp[(2) - (4)].node_t));
        deleteNode((yyvsp[(4) - (4)].node_t));
    }
    break;

  case 33:
#line 236 "Parser.y"
    {
        (yyval.node_t) = newNode(NODE_WRITELN , lineCount);
        addChild((yyval.node_t) , (yyvsp[(3) - (4)].node_t));
        deleteNode((yyvsp[(1) - (4)].node_t));
        deleteNode((yyvsp[(2) - (4)].node_t));
        deleteNode((yyvsp[(4) - (4)].node_t));
    }
    break;

  case 34:
#line 243 "Parser.y"
    {(yyval.node_t) = newNode(NODE_LIST, lineCount);}
    break;

  case 35:
#line 246 "Parser.y"
    {
                (yyval.node_t) = newNode(NODE_SYM_REF, lineCount);
                (yyval.node_t)->string =  (yyvsp[(1) - (2)].node_t)->string;
                addChild((yyval.node_t) , (yyvsp[(2) - (2)].node_t));
                }
    break;

  case 36:
#line 252 "Parser.y"
    { 
                    (yyval.node_t) = (yyvsp[(4) - (4)].node_t);
                    addChild((yyval.node_t) , newNode(TOKEN_LBRAC, lineCount));
                    addChild((yyval.node_t) , (yyvsp[(2) - (4)].node_t));
                    addChild((yyval.node_t) , newNode(TOKEN_RBRAC, lineCount));
                    deleteNode((yyvsp[(1) - (4)].node_t));
                    deleteNode((yyvsp[(3) - (4)].node_t));
                    }
    break;

  case 37:
#line 261 "Parser.y"
    {(yyval.node_t) = newNode(NODE_LIST, lineCount);}
    break;

  case 38:
#line 264 "Parser.y"
    {
                            (yyval.node_t) = newNode(NODE_SYM_REF, lineCount);//without parameter
                            (yyval.node_t)->string = (yyvsp[(1) - (1)].node_t)->string;
                                 }
    break;

  case 39:
#line 268 "Parser.y"
    {
                (yyval.node_t) = newNode(NODE_SYM_REF, lineCount);
                (yyval.node_t)->string = (yyvsp[(1) - (4)].node_t)->string;
                addChild((yyval.node_t) , (yyvsp[(3) - (4)].node_t));
                deleteNode((yyvsp[(2) - (4)].node_t));
                deleteNode((yyvsp[(4) - (4)].node_t));}
    break;

  case 40:
#line 275 "Parser.y"
    {
                    (yyval.node_t) = newNode(NODE_LIST, lineCount);
                    addChild((yyval.node_t) , (yyvsp[(1) - (1)].node_t));
                             }
    break;

  case 41:
#line 279 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (3)].node_t);
            addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));
            deleteNode((yyvsp[(2) - (3)].node_t));}
    break;

  case 42:
#line 284 "Parser.y"
    {
                        (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
                               }
    break;

  case 43:
#line 287 "Parser.y"
    {
                (yyval.node_t) = (yyvsp[(2) - (3)].node_t);
                addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
                addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));}
    break;

  case 44:
#line 293 "Parser.y"
    {
                        (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
                         }
    break;

  case 45:
#line 296 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(2) - (3)].node_t);
            addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
            addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));}
    break;

  case 46:
#line 300 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_SUB, lineCount);
            addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
            addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));
    }
    break;

  case 47:
#line 307 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
              }
    break;

  case 48:
#line 310 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(2) - (3)].node_t);
            addChild((yyval.node_t) , (yyvsp[(1) - (3)].node_t));
            addChild((yyval.node_t) , (yyvsp[(3) - (3)].node_t));}
    break;

  case 49:
#line 316 "Parser.y"
    { //call declared variable , function , procedure 
            (yyval.node_t) = newNode(NODE_SYM_REF, lineCount);
            (yyval.node_t)->string = (yyvsp[(1) - (2)].node_t)->string;
            addChild((yyval.node_t) , (yyvsp[(2) - (2)].node_t));
                         }
    break;

  case 50:
#line 321 "Parser.y"
    {
            (yyval.node_t) = newNode(NODE_SYM_REF, lineCount);
            (yyval.node_t)->string = (yyvsp[(1) - (4)].node_t)->string;
            addChild((yyval.node_t) , (yyvsp[(3) - (4)].node_t));
            deleteNode((yyvsp[(2) - (4)].node_t));
            deleteNode((yyvsp[(4) - (4)].node_t));}
    break;

  case 51:
#line 327 "Parser.y"
    {
        (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
        (yyval.node_t)->nodeType = NODE_INT;
             }
    break;

  case 52:
#line 331 "Parser.y"
    {
            (yyvsp[(2) - (2)].node_t)->nodeType = NODE_INT;
            (yyvsp[(2) - (2)].node_t)->iValue=-(yyvsp[(2) - (2)].node_t)->iValue;
            (yyval.node_t)=(yyvsp[(2) - (2)].node_t);
            deleteNode((yyvsp[(1) - (2)].node_t));         
                   }
    break;

  case 53:
#line 337 "Parser.y"
    {
        (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
        (yyval.node_t)->nodeType = NODE_REAL;
                 }
    break;

  case 54:
#line 341 "Parser.y"
    {
            (yyvsp[(2) - (2)].node_t)->nodeType = NODE_REAL; 
            (yyvsp[(2) - (2)].node_t)->rValue=-(yyvsp[(2) - (2)].node_t)->rValue;
            (yyval.node_t)=(yyvsp[(2) - (2)].node_t);
            deleteNode((yyvsp[(1) - (2)].node_t));
                       }
    break;

  case 55:
#line 347 "Parser.y"
    {
                (yyval.node_t) = (yyvsp[(2) - (3)].node_t);
                deleteNode((yyvsp[(1) - (3)].node_t));
                deleteNode((yyvsp[(3) - (3)].node_t));}
    break;

  case 56:
#line 351 "Parser.y"
    {
                    (yyval.node_t) = (yyvsp[(2) - (2)].node_t);
                    addChild((yyval.node_t) , (yyvsp[(1) - (2)].node_t));}
    break;

  case 57:
#line 354 "Parser.y"
    {
            (yyval.node_t) = (yyvsp[(1) - (1)].node_t);
            (yyval.node_t)->nodeType = NODE_STRING_v;}
    break;

  case 58:
#line 358 "Parser.y"
    {
                (yyval.node_t) = newOpNode(OP_ADD, lineCount);
                deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 59:
#line 361 "Parser.y"
    {
                }
    break;

  case 60:
#line 365 "Parser.y"
    {
                (yyval.node_t) = newOpNode(OP_MUL, lineCount);
                deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 61:
#line 368 "Parser.y"
    {
                (yyval.node_t) = newOpNode(OP_DIV, lineCount);
                deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 62:
#line 372 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_LT, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 63:
#line 375 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_GT, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 64:
#line 378 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_EQ, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 65:
#line 381 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_LE, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 66:
#line 384 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_GE, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;

  case 67:
#line 387 "Parser.y"
    {
            (yyval.node_t) = newOpNode(OP_NE, lineCount);
            deleteNode((yyvsp[(1) - (1)].node_t));}
    break;


/* Line 1267 of yacc.c.  */
#line 2096 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 393 "Parser.y"


struct node * newOpNode(int op , int lineCount) {
            struct node * node = newNode(NODE_OP, lineCount);
            node->op = op;
            node->lineCount = lineCount;
            return node;
    }

int main(int argc, char** argv) {
    int res;
    
    fprintf(stderr, "open file.\n");
    if(argc>1 && freopen(argv[1],"r",stdin)==NULL){
        printf("fuckleo\n");
        fprintf(stderr , "no file\n");
        exit(1);
    }
    
    fprintf(stderr, "call yyparse\n");
    res = yyparse();
    fprintf(stderr, "after call yyparse, res = %d.\n", res);
    
    if (res==0)
        fprintf(stderr, "SUCCESS\n NO syntax error !\n");
    else
        fprintf(stderr, "ERROR\n");
    
    printf("-----------------------------------------------\n");
    printTree(ASTRoot, 0);

    SymbolTable.size = 0;
    SymbolTable.current_level = 0;
    printf("New scope created at line 1\n");
    semanticCheck(ASTRoot);
    printf("Symbol table created\n");
    printf_symbol_table();
    if(check){
        printf("********************************\n"
               "*      No semantic error!      *\n"
               "********************************\n");
        printf("here\n");
        fp = fopen("foo.j" , "w");
        gen_program_start();
        travel_node(ASTRoot);
        fclose(fp);
    }
    else 
        printf("Semantic error\n");
    
    return 0;
}

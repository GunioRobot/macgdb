/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

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
     INT = 258,
     FLOAT = 259,
     DECFLOAT = 260,
     STRING = 261,
     CHAR = 262,
     NAME = 263,
     COMPLETE = 264,
     TYPENAME = 265,
     NAME_OR_INT = 266,
     STRUCT = 267,
     CLASS = 268,
     UNION = 269,
     ENUM = 270,
     SIZEOF = 271,
     UNSIGNED = 272,
     COLONCOLON = 273,
     TEMPLATE = 274,
     ERROR = 275,
     SIGNED_KEYWORD = 276,
     LONG = 277,
     SHORT = 278,
     INT_KEYWORD = 279,
     CONST_KEYWORD = 280,
     VOLATILE_KEYWORD = 281,
     DOUBLE_KEYWORD = 282,
     VARIABLE = 283,
     ASSIGN_MODIFY = 284,
     TRUEKEYWORD = 285,
     FALSEKEYWORD = 286,
     ABOVE_COMMA = 287,
     OROR = 288,
     ANDAND = 289,
     NOTEQUAL = 290,
     EQUAL = 291,
     GEQ = 292,
     LEQ = 293,
     RSH = 294,
     LSH = 295,
     DECREMENT = 296,
     INCREMENT = 297,
     UNARY = 298,
     DOT_STAR = 299,
     ARROW_STAR = 300,
     ARROW = 301,
     BLOCKNAME = 302,
     FILENAME = 303
   };
#endif
#define INT 258
#define FLOAT 259
#define DECFLOAT 260
#define STRING 261
#define CHAR 262
#define NAME 263
#define COMPLETE 264
#define TYPENAME 265
#define NAME_OR_INT 266
#define STRUCT 267
#define CLASS 268
#define UNION 269
#define ENUM 270
#define SIZEOF 271
#define UNSIGNED 272
#define COLONCOLON 273
#define TEMPLATE 274
#define ERROR 275
#define SIGNED_KEYWORD 276
#define LONG 277
#define SHORT 278
#define INT_KEYWORD 279
#define CONST_KEYWORD 280
#define VOLATILE_KEYWORD 281
#define DOUBLE_KEYWORD 282
#define VARIABLE 283
#define ASSIGN_MODIFY 284
#define TRUEKEYWORD 285
#define FALSEKEYWORD 286
#define ABOVE_COMMA 287
#define OROR 288
#define ANDAND 289
#define NOTEQUAL 290
#define EQUAL 291
#define GEQ 292
#define LEQ 293
#define RSH 294
#define LSH 295
#define DECREMENT 296
#define INCREMENT 297
#define UNARY 298
#define DOT_STAR 299
#define ARROW_STAR 300
#define ARROW 301
#define BLOCKNAME 302
#define FILENAME 303




/* Copy the first part of user declarations.  */
#line 38 "c-exp.y"


#include "defs.h"
#include "gdb_string.h"
#include <ctype.h>
#include "expression.h"
#include "value.h"
#include "parser-defs.h"
#include "language.h"
#include "c-lang.h"
#include "bfd.h" /* Required by objfiles.h.  */
#include "symfile.h" /* Required by objfiles.h.  */
#include "objfiles.h" /* For have_full_symbols and have_partial_symbols */
#include "charset.h"
#include "block.h"
#include "cp-support.h"
#include "dfp.h"
#include "gdb_assert.h"
#include "macroscope.h"

#define parse_type builtin_type (parse_gdbarch)

/* Remap normal yacc parser interface names (yyparse, yylex, yyerror, etc),
   as well as gratuitiously global symbol names, so we can have multiple
   yacc generated parsers in gdb.  Note that these are only the variables
   produced by yacc.  If other parser generators (bison, byacc, etc) produce
   additional global names that conflict at link time, then those parser
   generators need to be fixed instead of adding those names to this list. */

#define	yymaxdepth c_maxdepth
#define	yyparse	c_parse_internal
#define	yylex	c_lex
#define	yyerror	c_error
#define	yylval	c_lval
#define	yychar	c_char
#define	yydebug	c_debug
#define	yypact	c_pact	
#define	yyr1	c_r1			
#define	yyr2	c_r2			
#define	yydef	c_def		
#define	yychk	c_chk		
#define	yypgo	c_pgo		
#define	yyact	c_act		
#define	yyexca	c_exca
#define yyerrflag c_errflag
#define yynerrs	c_nerrs
#define	yyps	c_ps
#define	yypv	c_pv
#define	yys	c_s
#define	yy_yys	c_yys
#define	yystate	c_state
#define	yytmp	c_tmp
#define	yyv	c_v
#define	yy_yyv	c_yyv
#define	yyval	c_val
#define	yylloc	c_lloc
#define yyreds	c_reds		/* With YYDEBUG defined */
#define yytoks	c_toks		/* With YYDEBUG defined */
#define yyname	c_name		/* With YYDEBUG defined */
#define yyrule	c_rule		/* With YYDEBUG defined */
#define yylhs	c_yylhs
#define yylen	c_yylen
#define yydefred c_yydefred
#define yydgoto	c_yydgoto
#define yysindex c_yysindex
#define yyrindex c_yyrindex
#define yygindex c_yygindex
#define yytable	 c_yytable
#define yycheck	 c_yycheck

#ifndef YYDEBUG
#define	YYDEBUG 1		/* Default to yydebug support */
#endif

#define YYFPRINTF parser_fprintf

int yyparse (void);

static int yylex (void);

void yyerror (char *);



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 127 "c-exp.y"
typedef union YYSTYPE {
    LONGEST lval;
    struct {
      LONGEST val;
      struct type *type;
    } typed_val_int;
    struct {
      DOUBLEST dval;
      struct type *type;
    } typed_val_float;
    struct {
      gdb_byte val[16];
      struct type *type;
    } typed_val_decfloat;
    struct symbol *sym;
    struct type *tval;
    struct stoken sval;
    struct typed_stoken tsval;
    struct ttype tsym;
    struct symtoken ssym;
    int voidval;
    struct block *bval;
    enum exp_opcode opcode;
    struct internalvar *ivar;

    struct stoken_vector svec;
    struct type **tvec;
    int *ivec;
  } YYSTYPE;
/* Line 191 of yacc.c.  */
#line 286 "c-exp.c.tmp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 157 "c-exp.y"

/* YYSTYPE gets defined by %union */
static int parse_number (char *, int, int, YYSTYPE *);


/* Line 214 of yacc.c.  */
#line 302 "c-exp.c.tmp"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE xfree
# endif
# ifndef YYMALLOC
#  define YYMALLOC xmalloc
# endif

/* The parser invokes alloca or xmalloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  99
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   818

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  32
/* YYNRULES -- Number of rules. */
#define YYNRULES  167
/* YYNRULES -- Number of states. */
#define YYNSTATES  249

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    54,    40,     2,
      60,    69,    52,    50,    32,    51,    58,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,     2,
      43,    34,    44,    35,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    68,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    38,    71,    67,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    33,    36,    37,
      41,    42,    45,    46,    47,    48,    55,    56,    57,    61,
      62,    63,    64,    65
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    18,    21,
      24,    27,    30,    33,    36,    39,    42,    45,    48,    52,
      57,    61,    65,    69,    73,    78,    82,    86,    90,    95,
      96,   102,   104,   105,   107,   111,   113,   117,   122,   127,
     131,   135,   139,   143,   147,   151,   155,   159,   163,   167,
     171,   175,   179,   183,   187,   191,   195,   199,   203,   207,
     213,   217,   221,   223,   225,   227,   229,   231,   233,   235,
     240,   242,   245,   247,   249,   251,   253,   255,   259,   263,
     267,   272,   274,   277,   279,   282,   284,   285,   289,   291,
     293,   295,   296,   298,   301,   303,   306,   308,   312,   315,
     317,   320,   322,   325,   329,   332,   336,   338,   340,   342,
     344,   346,   349,   353,   356,   360,   364,   368,   371,   374,
     378,   383,   387,   391,   396,   400,   405,   409,   414,   417,
     421,   424,   428,   431,   435,   437,   440,   443,   446,   449,
     452,   455,   457,   460,   462,   468,   471,   474,   476,   480,
     482,   484,   486,   488,   490,   494,   496,   501,   504,   507,
     509,   511,   513,   515,   517,   519,   521,   523
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      74,     0,    -1,    76,    -1,    75,    -1,    95,    -1,    77,
      -1,    76,    32,    77,    -1,    52,    77,    -1,    40,    77,
      -1,    51,    77,    -1,    50,    77,    -1,    66,    77,    -1,
      67,    77,    -1,    56,    77,    -1,    55,    77,    -1,    77,
      56,    -1,    77,    55,    -1,    16,    77,    -1,    77,    63,
     103,    -1,    77,    63,   103,     9,    -1,    77,    63,     9,
      -1,    77,    63,    85,    -1,    77,    62,    77,    -1,    77,
      58,   103,    -1,    77,    58,   103,     9,    -1,    77,    58,
       9,    -1,    77,    58,    85,    -1,    77,    61,    77,    -1,
      77,    59,    76,    68,    -1,    -1,    77,    60,    78,    80,
      69,    -1,    70,    -1,    -1,    77,    -1,    80,    32,    77,
      -1,    71,    -1,    79,    80,    81,    -1,    79,    95,    81,
      77,    -1,    60,    95,    69,    77,    -1,    60,    76,    69,
      -1,    77,    49,    77,    -1,    77,    52,    77,    -1,    77,
      53,    77,    -1,    77,    54,    77,    -1,    77,    50,    77,
      -1,    77,    51,    77,    -1,    77,    48,    77,    -1,    77,
      47,    77,    -1,    77,    42,    77,    -1,    77,    41,    77,
      -1,    77,    46,    77,    -1,    77,    45,    77,    -1,    77,
      43,    77,    -1,    77,    44,    77,    -1,    77,    40,    77,
      -1,    77,    39,    77,    -1,    77,    38,    77,    -1,    77,
      37,    77,    -1,    77,    36,    77,    -1,    77,    35,    77,
      72,    77,    -1,    77,    34,    77,    -1,    77,    29,    77,
      -1,     3,    -1,     7,    -1,    11,    -1,     4,    -1,     5,
      -1,    84,    -1,    28,    -1,    16,    60,    95,    69,    -1,
       6,    -1,    82,     6,    -1,    82,    -1,    30,    -1,    31,
      -1,    64,    -1,    65,    -1,    83,    18,   103,    -1,    83,
      18,   103,    -1,    96,    18,   103,    -1,    96,    18,    67,
     103,    -1,    85,    -1,    18,   103,    -1,   104,    -1,    49,
       8,    -1,   102,    -1,    -1,    87,    86,    87,    -1,    88,
      -1,   102,    -1,    89,    -1,    -1,    52,    -1,    52,    91,
      -1,    40,    -1,    40,    91,    -1,    92,    -1,    60,    91,
      69,    -1,    92,    93,    -1,    93,    -1,    92,    94,    -1,
      94,    -1,    59,    68,    -1,    59,     3,    68,    -1,    60,
      69,    -1,    60,    99,    69,    -1,   100,    -1,    10,    -1,
      24,    -1,    22,    -1,    23,    -1,    22,    24,    -1,    22,
      21,    24,    -1,    22,    21,    -1,    21,    22,    24,    -1,
      17,    22,    24,    -1,    22,    17,    24,    -1,    22,    17,
      -1,    22,    22,    -1,    22,    22,    24,    -1,    22,    22,
      21,    24,    -1,    22,    22,    21,    -1,    21,    22,    22,
      -1,    21,    22,    22,    24,    -1,    17,    22,    22,    -1,
      17,    22,    22,    24,    -1,    22,    22,    17,    -1,    22,
      22,    17,    24,    -1,    23,    24,    -1,    23,    21,    24,
      -1,    23,    21,    -1,    17,    23,    24,    -1,    23,    17,
      -1,    23,    17,    24,    -1,    27,    -1,    22,    27,    -1,
      12,   103,    -1,    13,   103,    -1,    14,   103,    -1,    15,
     103,    -1,    17,    98,    -1,    17,    -1,    21,    98,    -1,
      21,    -1,    19,   103,    43,    95,    44,    -1,    89,    96,
      -1,    96,    89,    -1,    97,    -1,    96,    18,   103,    -1,
      10,    -1,    24,    -1,    22,    -1,    23,    -1,    95,    -1,
      99,    32,    95,    -1,    96,    -1,   100,    90,    91,    90,
      -1,    25,    26,    -1,    26,    25,    -1,   101,    -1,    25,
      -1,    26,    -1,     8,    -1,    64,    -1,    10,    -1,    11,
      -1,     8,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   244,   244,   245,   248,   255,   256,   261,   265,   269,
     273,   277,   281,   285,   289,   293,   297,   301,   305,   311,
     318,   328,   336,   340,   346,   353,   363,   371,   375,   382,
     379,   389,   393,   396,   400,   404,   407,   414,   420,   426,
     432,   436,   440,   444,   448,   452,   456,   460,   464,   468,
     472,   476,   480,   484,   488,   492,   496,   500,   504,   508,
     512,   516,   522,   529,   538,   549,   556,   563,   566,   570,
     579,   596,   614,   648,   655,   664,   672,   678,   688,   703,
     717,   742,   743,   771,   824,   830,   831,   834,   837,   838,
     842,   843,   846,   848,   850,   852,   854,   857,   859,   864,
     871,   873,   877,   879,   883,   885,   897,   901,   903,   905,
     907,   909,   911,   913,   915,   917,   919,   921,   923,   925,
     927,   929,   931,   933,   935,   937,   939,   941,   943,   945,
     947,   949,   951,   953,   955,   957,   959,   962,   965,   968,
     971,   975,   977,   981,   986,   990,   992,   994,  1042,  1067,
    1068,  1074,  1080,  1089,  1094,  1101,  1102,  1106,  1107,  1110,
    1114,  1116,  1120,  1121,  1122,  1123,  1126,  1127
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "DECFLOAT", "STRING",
  "CHAR", "NAME", "COMPLETE", "TYPENAME", "NAME_OR_INT", "STRUCT", "CLASS",
  "UNION", "ENUM", "SIZEOF", "UNSIGNED", "COLONCOLON", "TEMPLATE", "ERROR",
  "SIGNED_KEYWORD", "LONG", "SHORT", "INT_KEYWORD", "CONST_KEYWORD",
  "VOLATILE_KEYWORD", "DOUBLE_KEYWORD", "VARIABLE", "ASSIGN_MODIFY",
  "TRUEKEYWORD", "FALSEKEYWORD", "','", "ABOVE_COMMA", "'='", "'?'",
  "OROR", "ANDAND", "'|'", "'^'", "'&'", "NOTEQUAL", "EQUAL", "'<'", "'>'",
  "GEQ", "LEQ", "RSH", "LSH", "'@'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "DECREMENT", "INCREMENT", "UNARY", "'.'", "'['", "'('", "DOT_STAR",
  "ARROW_STAR", "ARROW", "BLOCKNAME", "FILENAME", "'!'", "'~'", "']'",
  "')'", "'{'", "'}'", "':'", "$accept", "start", "type_exp", "exp1",
  "exp", "@1", "lcurly", "arglist", "rcurly", "string_exp", "block",
  "variable", "qualified_name", "space_identifier", "const_or_volatile",
  "cv_with_space_id", "const_or_volatile_or_space_identifier_noopt",
  "const_or_volatile_or_space_identifier", "abs_decl", "direct_abs_decl",
  "array_mod", "func_mod", "type", "typebase", "qualified_type",
  "typename", "nonempty_typelist", "ptype", "const_and_volatile",
  "const_or_volatile_noopt", "name", "name_not_typename", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    44,   287,    61,    63,   288,   289,   124,    94,
      38,   290,   291,    60,    62,   292,   293,   294,   295,    64,
      43,    45,    42,    47,    37,   296,   297,   298,    46,    91,
      40,   299,   300,   301,   302,   303,    33,   126,    93,    41,
     123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    73,    74,    74,    75,    76,    76,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      77,    79,    80,    80,    80,    81,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      82,    82,    77,    77,    77,    83,    83,    83,    84,    85,
      85,    84,    84,    84,    86,    87,    87,    88,    89,    89,
      90,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    93,    93,    94,    94,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    98,
      98,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   102,   103,   103,   103,   103,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     4,
       3,     3,     3,     3,     4,     3,     3,     3,     4,     0,
       5,     1,     0,     1,     3,     1,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       4,     1,     2,     1,     2,     1,     0,     3,     1,     1,
       1,     0,     1,     2,     1,     2,     1,     3,     2,     1,
       2,     1,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     2,     3,     2,     3,     3,     3,     2,     2,     3,
       4,     3,     3,     4,     3,     4,     3,     4,     2,     3,
       2,     3,     2,     3,     1,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     5,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     4,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
      86,    62,    65,    66,    70,    63,   166,   107,    64,     0,
       0,     0,     0,    86,   141,     0,     0,   143,   109,   110,
     108,   160,   161,   134,    68,    73,    74,    86,    86,    86,
      86,    86,    86,    86,   167,    76,    86,    86,    31,     0,
       3,     2,     5,    32,    72,     0,    67,    81,     0,    88,
      86,     4,   155,   147,   106,   159,    89,    83,   162,   164,
     165,   163,   136,   137,   138,   139,    86,    17,    86,   149,
     151,   152,   150,   140,    82,     0,   151,   152,   142,   117,
     113,   118,   111,   135,   132,   130,   128,   157,   158,     8,
      10,     9,     7,    14,    13,     0,     0,    11,    12,     1,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    16,    15,    86,    86,    29,    86,    86,
      86,    33,     0,     0,    71,     0,     0,    86,   145,     0,
     146,    90,     0,     0,   124,   115,   131,    86,   122,   114,
     116,   112,   126,   121,   119,   133,   129,    39,    86,     6,
      61,    60,     0,    58,    57,    56,    55,    54,    49,    48,
      52,    53,    51,    50,    47,    46,    40,    44,    45,    41,
      42,    43,    25,   164,    26,    23,     0,    32,    27,    22,
      20,    21,    18,    86,    35,    36,    86,    78,    84,    87,
      85,     0,     0,    79,    94,    92,     0,    86,    91,    96,
      99,   101,    69,   125,     0,   155,   123,   127,   120,    38,
      86,    24,    28,     0,    19,    34,    37,   148,    80,    95,
      93,     0,   102,   104,     0,   153,     0,   156,    86,    98,
     100,   144,    59,    30,   103,    97,    86,   105,   154
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    39,    40,    95,    42,   187,    43,   132,   195,    44,
      45,    46,    47,   137,    48,    49,    50,   142,   208,   209,
     210,   211,   235,    68,    53,    73,   236,    54,    55,    56,
      62,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const short yypact[] =
{
     313,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,     6,
       6,     6,     6,   381,   129,     6,     6,   170,   160,    34,
     -94,    -1,    28,   -94,   -94,   -94,   -94,   313,   313,   313,
     313,   313,   313,   313,    42,   -94,   313,   313,   -94,    68,
     -94,    47,   543,   245,    85,    69,   -94,   -94,    67,   -94,
     335,   -94,   105,   -94,   165,   -94,    70,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   313,   228,    31,   -94,
      14,   113,   -94,   -94,   -94,   101,    18,   -94,   -94,   125,
     131,   179,   -94,   -94,   132,   136,   -94,   -94,   -94,   228,
     228,   228,   228,   228,   228,   -21,    98,   228,   228,   -94,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   -94,   -94,   218,   313,   -94,   313,   313,
     473,   543,   -26,   107,   -94,     6,   175,    39,   108,    51,
     -94,   -94,   -13,   117,   171,   -94,   -94,   335,   173,   -94,
     -94,   -94,   178,   182,   -94,   -94,   -94,   -94,   313,   543,
     543,   543,   504,   599,   625,   650,   674,   697,   718,   718,
     735,   735,   735,   735,   364,   364,   749,   468,   468,   228,
     228,   228,   -94,   120,   -94,   201,     9,   245,   755,   755,
     -94,   -94,   202,   313,   -94,   -94,   313,   195,   -94,   -94,
     -94,     6,     6,    99,    83,    30,     7,   149,     5,    81,
     -94,   -94,   449,   -94,   172,   108,   -94,   -94,   -94,   228,
     313,   -94,   -94,   -17,   -94,   543,   228,   -94,   -94,   -94,
     -94,   147,   -94,   -94,   152,   -94,    -6,   -94,    59,   -94,
     -94,   -94,   572,   -94,   -94,   -94,   335,   -94,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
     -94,   -94,   -94,     3,    -8,   -94,   -94,    36,   103,   -94,
     -94,   -94,   -93,   -94,    97,   -94,   -50,    46,    15,   -94,
      56,    65,     1,     0,   -94,   260,   -94,   -94,   -94,   141,
      -3,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -149
static const short yytable[] =
{
      52,    51,   140,    41,   141,    67,   193,    63,    64,    65,
     231,   100,    74,    75,    58,   193,    59,    60,   140,    89,
      90,    91,    92,    93,    94,    87,   246,   204,    97,    98,
      21,    22,   184,    52,    96,   131,   144,   191,   145,   205,
     148,   100,   149,    52,   133,   194,   206,   207,   157,   139,
     138,    84,   243,    88,   -86,    85,    21,    22,    86,    58,
     -75,    59,    60,   247,    21,    22,    52,   143,    99,     7,
      61,     9,    10,    11,    12,   232,    14,   222,    16,   100,
      17,    18,    19,    20,    21,    22,    23,   135,   140,   206,
     207,   134,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,    61,   136,  -148,   202,   -85,
     188,   189,   185,   139,  -148,  -148,   201,   192,   233,   186,
      21,    22,   197,    21,    22,   205,   203,   146,  -107,    69,
     206,   238,   206,   207,   147,  -107,  -107,   215,   214,   150,
     219,    70,    71,    72,   -86,   151,   155,   -86,   141,     7,
     156,     9,    10,    11,    12,   140,    14,   158,    16,  -107,
      17,    18,    19,    20,    21,    22,    23,    79,   194,   131,
      69,    80,    81,   198,    82,   225,   212,    83,   226,   204,
      21,    22,    76,    77,    72,   213,   152,   216,   227,   228,
     153,   205,   217,   154,   219,   -91,   218,   215,   206,   207,
     221,   224,   242,   -77,   -86,   244,   241,   -91,   233,   229,
     230,   245,   234,   223,   -91,   -91,    58,   182,   183,    60,
       9,    10,    11,    12,   199,    14,   196,    16,   215,    17,
      18,    19,    20,    21,    22,    23,   215,   248,     1,     2,
       3,     4,     5,     6,   237,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   239,    17,    18,    19,    20,
      21,    22,    23,    24,   240,    25,    26,    78,   200,     0,
       0,     0,    61,   123,   124,    27,   125,   126,   127,   128,
     129,   130,     0,     0,   -86,    28,    29,    30,     0,     0,
      31,    32,     0,     0,     0,    33,     0,     0,     0,    34,
      35,    36,    37,     0,     0,    38,     1,     2,     3,     4,
       5,     6,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     0,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     7,     0,     9,    10,    11,
      12,     0,    14,    27,    16,     0,    17,    18,    19,    20,
      21,    22,    23,    28,    29,    30,     0,     0,    31,    32,
       0,     0,     0,    33,     0,     0,     0,    34,    35,    36,
      37,     0,     0,    38,     1,     2,     3,     4,     5,     6,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,   117,   118,   119,   120,   121,   122,   123,
     124,    27,   125,   126,   127,   128,   129,   130,     0,     0,
       0,    28,    29,    30,     0,     0,    31,    32,     0,     0,
       0,    66,     0,     0,     0,    34,    35,    36,    37,     0,
       0,    38,     1,     2,     3,     4,     5,     6,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    58,   190,   183,    60,     9,    10,    11,    12,     0,
      14,     0,    16,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,    31,    32,     0,     0,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,     0,    38,
     120,   121,   122,   123,   124,     0,   125,   126,   127,   128,
     129,   130,     0,   101,     0,     0,     0,    61,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,   125,   126,   127,   128,   129,   130,     0,     0,
       0,     0,   101,     0,     0,     0,   220,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,   125,   126,   127,   128,   129,   130,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
     125,   126,   127,   128,   129,   130,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,   125,   126,   127,
     128,   129,   130,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   125,   126,   127,   128,   129,   130,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,   125,   126,
     127,   128,   129,   130,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,     0,   125,   126,   127,   128,   129,   130,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     0,   125,   126,   127,   128,   129,
     130,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,   125,   126,   127,   128,
     129,   130,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   125,   126,   127,   128,   129,   130,   118,
     119,   120,   121,   122,   123,   124,     0,   125,   126,   127,
     128,   129,   130,   125,   126,   127,   128,   129,   130
};

static const short yycheck[] =
{
       0,     0,    52,     0,    54,    13,    32,    10,    11,    12,
       3,    32,    15,    16,     8,    32,    10,    11,    68,    27,
      28,    29,    30,    31,    32,    26,    32,    40,    36,    37,
      25,    26,   125,    33,    33,    43,    22,   130,    24,    52,
      22,    32,    24,    43,    43,    71,    59,    60,    69,    18,
      50,    17,    69,    25,    49,    21,    25,    26,    24,     8,
      18,    10,    11,    69,    25,    26,    66,    66,     0,    10,
      64,    12,    13,    14,    15,    68,    17,    68,    19,    32,
      21,    22,    23,    24,    25,    26,    27,    18,   138,    59,
      60,     6,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    64,    49,    18,    67,    49,
     128,   129,   125,    18,    25,    26,    18,   130,    69,   126,
      25,    26,   135,    25,    26,    52,   139,    24,    18,    10,
      59,    60,    59,    60,    43,    25,    26,   147,   147,    24,
     158,    22,    23,    24,    49,    24,    24,    49,   208,    10,
      24,    12,    13,    14,    15,   215,    17,    69,    19,    49,
      21,    22,    23,    24,    25,    26,    27,    17,    71,   187,
      10,    21,    22,     8,    24,   193,    69,    27,   196,    40,
      25,    26,    22,    23,    24,    24,    17,    24,   201,   202,
      21,    52,    24,    24,   212,    40,    24,   207,    59,    60,
       9,     9,   220,    18,    49,    68,    44,    52,    69,   204,
     205,    69,   207,   187,    59,    60,     8,     9,    10,    11,
      12,    13,    14,    15,   137,    17,   133,    19,   238,    21,
      22,    23,    24,    25,    26,    27,   246,   246,     3,     4,
       5,     6,     7,     8,   208,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   209,    21,    22,    23,    24,
      25,    26,    27,    28,   209,    30,    31,    17,   137,    -1,
      -1,    -1,    64,    55,    56,    40,    58,    59,    60,    61,
      62,    63,    -1,    -1,    49,    50,    51,    52,    -1,    -1,
      55,    56,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,
      65,    66,    67,    -1,    -1,    70,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    10,    -1,    12,    13,    14,
      15,    -1,    17,    40,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    50,    51,    52,    -1,    -1,    55,    56,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,
      67,    -1,    -1,    70,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    49,    50,    51,    52,    53,    54,    55,
      56,    40,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,    -1,
      -1,    70,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      17,    -1,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    65,    66,    67,    -1,    -1,    70,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    29,    -1,    -1,    -1,    64,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    72,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    62,    63,    50,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    62,    63,    58,    59,    60,    61,    62,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    21,    22,    23,
      24,    25,    26,    27,    28,    30,    31,    40,    50,    51,
      52,    55,    56,    60,    64,    65,    66,    67,    70,    74,
      75,    76,    77,    79,    82,    83,    84,    85,    87,    88,
      89,    95,    96,    97,   100,   101,   102,   104,     8,    10,
      11,    64,   103,   103,   103,   103,    60,    77,    96,    10,
      22,    23,    24,    98,   103,   103,    22,    23,    98,    17,
      21,    22,    24,    27,    17,    21,    24,    26,    25,    77,
      77,    77,    77,    77,    77,    76,    95,    77,    77,     0,
      32,    29,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    58,    59,    60,    61,    62,
      63,    77,    80,    95,     6,    18,    49,    86,    96,    18,
      89,    89,    90,    95,    22,    24,    24,    43,    22,    24,
      24,    24,    17,    21,    24,    24,    24,    69,    69,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,     9,    10,    85,   103,    76,    78,    77,    77,
       9,    85,   103,    32,    71,    81,    81,   103,     8,    87,
     102,    18,    67,   103,    40,    52,    59,    60,    91,    92,
      93,    94,    69,    24,    95,    96,    24,    24,    24,    77,
      72,     9,    68,    80,     9,    77,    77,   103,   103,    91,
      91,     3,    68,    69,    91,    95,    99,    90,    60,    93,
      94,    44,    77,    69,    68,    69,    32,    69,    95
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to xreallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to xreallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 4:
#line 249 "c-exp.y"
    { write_exp_elt_opcode(OP_TYPE);
			  write_exp_elt_type(yyvsp[0].tval);
			  write_exp_elt_opcode(OP_TYPE);}
    break;

  case 6:
#line 257 "c-exp.y"
    { write_exp_elt_opcode (BINOP_COMMA); }
    break;

  case 7:
#line 262 "c-exp.y"
    { write_exp_elt_opcode (UNOP_IND); }
    break;

  case 8:
#line 266 "c-exp.y"
    { write_exp_elt_opcode (UNOP_ADDR); }
    break;

  case 9:
#line 270 "c-exp.y"
    { write_exp_elt_opcode (UNOP_NEG); }
    break;

  case 10:
#line 274 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PLUS); }
    break;

  case 11:
#line 278 "c-exp.y"
    { write_exp_elt_opcode (UNOP_LOGICAL_NOT); }
    break;

  case 12:
#line 282 "c-exp.y"
    { write_exp_elt_opcode (UNOP_COMPLEMENT); }
    break;

  case 13:
#line 286 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PREINCREMENT); }
    break;

  case 14:
#line 290 "c-exp.y"
    { write_exp_elt_opcode (UNOP_PREDECREMENT); }
    break;

  case 15:
#line 294 "c-exp.y"
    { write_exp_elt_opcode (UNOP_POSTINCREMENT); }
    break;

  case 16:
#line 298 "c-exp.y"
    { write_exp_elt_opcode (UNOP_POSTDECREMENT); }
    break;

  case 17:
#line 302 "c-exp.y"
    { write_exp_elt_opcode (UNOP_SIZEOF); }
    break;

  case 18:
#line 306 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 19:
#line 312 "c-exp.y"
    { mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_PTR);
			  write_exp_string (yyvsp[-1].sval);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 20:
#line 319 "c-exp.y"
    { struct stoken s;
			  mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_PTR);
			  s.ptr = "";
			  s.length = 0;
			  write_exp_string (s);
			  write_exp_elt_opcode (STRUCTOP_PTR); }
    break;

  case 21:
#line 329 "c-exp.y"
    { /* exp->type::name becomes exp->*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 22:
#line 337 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MPTR); }
    break;

  case 23:
#line 341 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 24:
#line 347 "c-exp.y"
    { mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_STRUCT);
			  write_exp_string (yyvsp[-1].sval);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 25:
#line 354 "c-exp.y"
    { struct stoken s;
			  mark_struct_expression ();
			  write_exp_elt_opcode (STRUCTOP_STRUCT);
			  s.ptr = "";
			  s.length = 0;
			  write_exp_string (s);
			  write_exp_elt_opcode (STRUCTOP_STRUCT); }
    break;

  case 26:
#line 364 "c-exp.y"
    { /* exp.type::name becomes exp.*(&type::name) */
			  /* Note: this doesn't work if name is a
			     static member!  FIXME */
			  write_exp_elt_opcode (UNOP_ADDR);
			  write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 27:
#line 372 "c-exp.y"
    { write_exp_elt_opcode (STRUCTOP_MEMBER); }
    break;

  case 28:
#line 376 "c-exp.y"
    { write_exp_elt_opcode (BINOP_SUBSCRIPT); }
    break;

  case 29:
#line 382 "c-exp.y"
    { start_arglist (); }
    break;

  case 30:
#line 384 "c-exp.y"
    { write_exp_elt_opcode (OP_FUNCALL);
			  write_exp_elt_longcst ((LONGEST) end_arglist ());
			  write_exp_elt_opcode (OP_FUNCALL); }
    break;

  case 31:
#line 390 "c-exp.y"
    { start_arglist (); }
    break;

  case 33:
#line 397 "c-exp.y"
    { arglist_len = 1; }
    break;

  case 34:
#line 401 "c-exp.y"
    { arglist_len++; }
    break;

  case 35:
#line 405 "c-exp.y"
    { yyval.lval = end_arglist () - 1; }
    break;

  case 36:
#line 408 "c-exp.y"
    { write_exp_elt_opcode (OP_ARRAY);
			  write_exp_elt_longcst ((LONGEST) 0);
			  write_exp_elt_longcst ((LONGEST) yyvsp[0].lval);
			  write_exp_elt_opcode (OP_ARRAY); }
    break;

  case 37:
#line 415 "c-exp.y"
    { write_exp_elt_opcode (UNOP_MEMVAL);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_MEMVAL); }
    break;

  case 38:
#line 421 "c-exp.y"
    { write_exp_elt_opcode (UNOP_CAST);
			  write_exp_elt_type (yyvsp[-2].tval);
			  write_exp_elt_opcode (UNOP_CAST); }
    break;

  case 39:
#line 427 "c-exp.y"
    { }
    break;

  case 40:
#line 433 "c-exp.y"
    { write_exp_elt_opcode (BINOP_REPEAT); }
    break;

  case 41:
#line 437 "c-exp.y"
    { write_exp_elt_opcode (BINOP_MUL); }
    break;

  case 42:
#line 441 "c-exp.y"
    { write_exp_elt_opcode (BINOP_DIV); }
    break;

  case 43:
#line 445 "c-exp.y"
    { write_exp_elt_opcode (BINOP_REM); }
    break;

  case 44:
#line 449 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ADD); }
    break;

  case 45:
#line 453 "c-exp.y"
    { write_exp_elt_opcode (BINOP_SUB); }
    break;

  case 46:
#line 457 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LSH); }
    break;

  case 47:
#line 461 "c-exp.y"
    { write_exp_elt_opcode (BINOP_RSH); }
    break;

  case 48:
#line 465 "c-exp.y"
    { write_exp_elt_opcode (BINOP_EQUAL); }
    break;

  case 49:
#line 469 "c-exp.y"
    { write_exp_elt_opcode (BINOP_NOTEQUAL); }
    break;

  case 50:
#line 473 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LEQ); }
    break;

  case 51:
#line 477 "c-exp.y"
    { write_exp_elt_opcode (BINOP_GEQ); }
    break;

  case 52:
#line 481 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LESS); }
    break;

  case 53:
#line 485 "c-exp.y"
    { write_exp_elt_opcode (BINOP_GTR); }
    break;

  case 54:
#line 489 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_AND); }
    break;

  case 55:
#line 493 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_XOR); }
    break;

  case 56:
#line 497 "c-exp.y"
    { write_exp_elt_opcode (BINOP_BITWISE_IOR); }
    break;

  case 57:
#line 501 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_AND); }
    break;

  case 58:
#line 505 "c-exp.y"
    { write_exp_elt_opcode (BINOP_LOGICAL_OR); }
    break;

  case 59:
#line 509 "c-exp.y"
    { write_exp_elt_opcode (TERNOP_COND); }
    break;

  case 60:
#line 513 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN); }
    break;

  case 61:
#line 517 "c-exp.y"
    { write_exp_elt_opcode (BINOP_ASSIGN_MODIFY);
			  write_exp_elt_opcode (yyvsp[-1].opcode);
			  write_exp_elt_opcode (BINOP_ASSIGN_MODIFY); }
    break;

  case 62:
#line 523 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (yyvsp[0].typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)(yyvsp[0].typed_val_int.val));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 63:
#line 530 "c-exp.y"
    {
			  struct stoken_vector vec;
			  vec.len = 1;
			  vec.tokens = &yyvsp[0].tsval;
			  write_exp_string_vector (yyvsp[0].tsval.type, &vec);
			}
    break;

  case 64:
#line 539 "c-exp.y"
    { YYSTYPE val;
			  parse_number (yyvsp[0].ssym.stoken.ptr, yyvsp[0].ssym.stoken.length, 0, &val);
			  write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (val.typed_val_int.type);
			  write_exp_elt_longcst ((LONGEST)val.typed_val_int.val);
			  write_exp_elt_opcode (OP_LONG);
			}
    break;

  case 65:
#line 550 "c-exp.y"
    { write_exp_elt_opcode (OP_DOUBLE);
			  write_exp_elt_type (yyvsp[0].typed_val_float.type);
			  write_exp_elt_dblcst (yyvsp[0].typed_val_float.dval);
			  write_exp_elt_opcode (OP_DOUBLE); }
    break;

  case 66:
#line 557 "c-exp.y"
    { write_exp_elt_opcode (OP_DECFLOAT);
			  write_exp_elt_type (yyvsp[0].typed_val_decfloat.type);
			  write_exp_elt_decfloatcst (yyvsp[0].typed_val_decfloat.val);
			  write_exp_elt_opcode (OP_DECFLOAT); }
    break;

  case 69:
#line 571 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
			  write_exp_elt_type (parse_type->builtin_int);
			  CHECK_TYPEDEF (yyvsp[-1].tval);
			  write_exp_elt_longcst ((LONGEST) TYPE_LENGTH (yyvsp[-1].tval));
			  write_exp_elt_opcode (OP_LONG); }
    break;

  case 70:
#line 580 "c-exp.y"
    {
			  /* We copy the string here, and not in the
			     lexer, to guarantee that we do not leak a
			     string.  Note that we follow the
			     NUL-termination convention of the
			     lexer.  */
			  struct typed_stoken *vec = XNEW (struct typed_stoken);
			  yyval.svec.len = 1;
			  yyval.svec.tokens = vec;

			  vec->type = yyvsp[0].tsval.type;
			  vec->length = yyvsp[0].tsval.length;
			  vec->ptr = xmalloc (yyvsp[0].tsval.length + 1);
			  memcpy (vec->ptr, yyvsp[0].tsval.ptr, yyvsp[0].tsval.length + 1);
			}
    break;

  case 71:
#line 597 "c-exp.y"
    {
			  /* Note that we NUL-terminate here, but just
			     for convenience.  */
			  char *p;
			  ++yyval.svec.len;
			  yyval.svec.tokens = xrealloc (yyval.svec.tokens,
					       yyval.svec.len * sizeof (struct typed_stoken));

			  p = xmalloc (yyvsp[0].tsval.length + 1);
			  memcpy (p, yyvsp[0].tsval.ptr, yyvsp[0].tsval.length + 1);

			  yyval.svec.tokens[yyval.svec.len - 1].type = yyvsp[0].tsval.type;
			  yyval.svec.tokens[yyval.svec.len - 1].length = yyvsp[0].tsval.length;
			  yyval.svec.tokens[yyval.svec.len - 1].ptr = p;
			}
    break;

  case 72:
#line 615 "c-exp.y"
    {
			  int i;
			  enum c_string_type type = C_STRING;

			  for (i = 0; i < yyvsp[0].svec.len; ++i)
			    {
			      switch (yyvsp[0].svec.tokens[i].type)
				{
				case C_STRING:
				  break;
				case C_WIDE_STRING:
				case C_STRING_16:
				case C_STRING_32:
				  if (type != C_STRING
				      && type != yyvsp[0].svec.tokens[i].type)
				    error ("Undefined string concatenation.");
				  type = yyvsp[0].svec.tokens[i].type;
				  break;
				default:
				  /* internal error */
				  internal_error (__FILE__, __LINE__,
						  "unrecognized type in string concatenation");
				}
			    }

			  write_exp_string_vector (type, &yyvsp[0].svec);
			  for (i = 0; i < yyvsp[0].svec.len; ++i)
			    xfree (yyvsp[0].svec.tokens[i].ptr);
			  xfree (yyvsp[0].svec.tokens);
			}
    break;

  case 73:
#line 649 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (parse_type->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 1);
                          write_exp_elt_opcode (OP_LONG); }
    break;

  case 74:
#line 656 "c-exp.y"
    { write_exp_elt_opcode (OP_LONG);
                          write_exp_elt_type (parse_type->builtin_bool);
                          write_exp_elt_longcst ((LONGEST) 0);
                          write_exp_elt_opcode (OP_LONG); }
    break;

  case 75:
#line 665 "c-exp.y"
    {
			  if (yyvsp[0].ssym.sym)
			    yyval.bval = SYMBOL_BLOCK_VALUE (yyvsp[0].ssym.sym);
			  else
			    error ("No file or function \"%s\".",
				   copy_name (yyvsp[0].ssym.stoken));
			}
    break;

  case 76:
#line 673 "c-exp.y"
    {
			  yyval.bval = yyvsp[0].bval;
			}
    break;

  case 77:
#line 679 "c-exp.y"
    { struct symbol *tem
			    = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					     VAR_DOMAIN, (int *) NULL);
			  if (!tem || SYMBOL_CLASS (tem) != LOC_BLOCK)
			    error ("No function \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));
			  yyval.bval = SYMBOL_BLOCK_VALUE (tem); }
    break;

  case 78:
#line 689 "c-exp.y"
    { struct symbol *sym;
			  sym = lookup_symbol (copy_name (yyvsp[0].sval), yyvsp[-2].bval,
					       VAR_DOMAIN, (int *) NULL);
			  if (sym == 0)
			    error ("No symbol \"%s\" in specified context.",
				   copy_name (yyvsp[0].sval));

			  write_exp_elt_opcode (OP_VAR_VALUE);
			  /* block_found is set by lookup_symbol.  */
			  write_exp_elt_block (block_found);
			  write_exp_elt_sym (sym);
			  write_exp_elt_opcode (OP_VAR_VALUE); }
    break;

  case 79:
#line 704 "c-exp.y"
    {
			  struct type *type = yyvsp[-2].tval;
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (yyvsp[0].sval);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 80:
#line 718 "c-exp.y"
    {
			  struct type *type = yyvsp[-3].tval;
			  struct stoken tmp_token;
			  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
			      && TYPE_CODE (type) != TYPE_CODE_UNION
			      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
			    error ("`%s' is not defined as an aggregate type.",
				   TYPE_NAME (type));

			  tmp_token.ptr = (char*) alloca (yyvsp[0].sval.length + 2);
			  tmp_token.length = yyvsp[0].sval.length + 1;
			  tmp_token.ptr[0] = '~';
			  memcpy (tmp_token.ptr+1, yyvsp[0].sval.ptr, yyvsp[0].sval.length);
			  tmp_token.ptr[tmp_token.length] = 0;

			  /* Check for valid destructor name.  */
			  destructor_name_p (tmp_token.ptr, type);
			  write_exp_elt_opcode (OP_SCOPE);
			  write_exp_elt_type (type);
			  write_exp_string (tmp_token);
			  write_exp_elt_opcode (OP_SCOPE);
			}
    break;

  case 82:
#line 744 "c-exp.y"
    {
			  char *name = copy_name (yyvsp[0].sval);
			  struct symbol *sym;
			  struct minimal_symbol *msymbol;

			  sym =
			    lookup_symbol (name, (const struct block *) NULL,
					   VAR_DOMAIN, (int *) NULL);
			  if (sym)
			    {
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			      break;
			    }

			  msymbol = lookup_minimal_symbol (name, NULL, NULL);
			  if (msymbol != NULL)
			    write_exp_msymbol (msymbol);
			  else if (!have_full_symbols () && !have_partial_symbols ())
			    error ("No symbol table is loaded.  Use the \"file\" command.");
			  else
			    error ("No symbol \"%s\" in current context.", name);
			}
    break;

  case 83:
#line 772 "c-exp.y"
    { struct symbol *sym = yyvsp[0].ssym.sym;

			  if (sym)
			    {
			      if (symbol_read_needs_frame (sym))
				{
				  if (innermost_block == 0 ||
				      contained_in (block_found, 
						    innermost_block))
				    innermost_block = block_found;
				}

			      write_exp_elt_opcode (OP_VAR_VALUE);
			      /* We want to use the selected frame, not
				 another more inner frame which happens to
				 be in the same block.  */
			      write_exp_elt_block (NULL);
			      write_exp_elt_sym (sym);
			      write_exp_elt_opcode (OP_VAR_VALUE);
			    }
			  else if (yyvsp[0].ssym.is_a_field_of_this)
			    {
			      /* C++: it hangs off of `this'.  Must
			         not inadvertently convert from a method call
				 to data ref.  */
			      if (innermost_block == 0 || 
				  contained_in (block_found, innermost_block))
				innermost_block = block_found;
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (OP_THIS);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			      write_exp_string (yyvsp[0].ssym.stoken);
			      write_exp_elt_opcode (STRUCTOP_PTR);
			    }
			  else
			    {
			      struct minimal_symbol *msymbol;
			      char *arg = copy_name (yyvsp[0].ssym.stoken);

			      msymbol =
				lookup_minimal_symbol (arg, NULL, NULL);
			      if (msymbol != NULL)
				write_exp_msymbol (msymbol);
			      else if (!have_full_symbols () && !have_partial_symbols ())
				error ("No symbol table is loaded.  Use the \"file\" command.");
			      else
				error ("No symbol \"%s\" in current context.",
				       copy_name (yyvsp[0].ssym.stoken));
			    }
			}
    break;

  case 84:
#line 825 "c-exp.y"
    { push_type_address_space (copy_name (yyvsp[0].ssym.stoken));
		  push_type (tp_space_identifier);
		}
    break;

  case 92:
#line 847 "c-exp.y"
    { push_type (tp_pointer); yyval.voidval = 0; }
    break;

  case 93:
#line 849 "c-exp.y"
    { push_type (tp_pointer); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 94:
#line 851 "c-exp.y"
    { push_type (tp_reference); yyval.voidval = 0; }
    break;

  case 95:
#line 853 "c-exp.y"
    { push_type (tp_reference); yyval.voidval = yyvsp[0].voidval; }
    break;

  case 97:
#line 858 "c-exp.y"
    { yyval.voidval = yyvsp[-1].voidval; }
    break;

  case 98:
#line 860 "c-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			}
    break;

  case 99:
#line 865 "c-exp.y"
    {
			  push_type_int (yyvsp[0].lval);
			  push_type (tp_array);
			  yyval.voidval = 0;
			}
    break;

  case 100:
#line 872 "c-exp.y"
    { push_type (tp_function); }
    break;

  case 101:
#line 874 "c-exp.y"
    { push_type (tp_function); }
    break;

  case 102:
#line 878 "c-exp.y"
    { yyval.lval = -1; }
    break;

  case 103:
#line 880 "c-exp.y"
    { yyval.lval = yyvsp[-1].typed_val_int.val; }
    break;

  case 104:
#line 884 "c-exp.y"
    { yyval.voidval = 0; }
    break;

  case 105:
#line 886 "c-exp.y"
    { xfree (yyvsp[-1].tvec); yyval.voidval = 0; }
    break;

  case 107:
#line 902 "c-exp.y"
    { yyval.tval = yyvsp[0].tsym.type; }
    break;

  case 108:
#line 904 "c-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 109:
#line 906 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 110:
#line 908 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 111:
#line 910 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 112:
#line 912 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 113:
#line 914 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 114:
#line 916 "c-exp.y"
    { yyval.tval = parse_type->builtin_long; }
    break;

  case 115:
#line 918 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 116:
#line 920 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 117:
#line 922 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long; }
    break;

  case 118:
#line 924 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 119:
#line 926 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 120:
#line 928 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 121:
#line 930 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 122:
#line 932 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 123:
#line 934 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_long; }
    break;

  case 124:
#line 936 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 125:
#line 938 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 126:
#line 940 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 127:
#line 942 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_long_long; }
    break;

  case 128:
#line 944 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 129:
#line 946 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 130:
#line 948 "c-exp.y"
    { yyval.tval = parse_type->builtin_short; }
    break;

  case 131:
#line 950 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 132:
#line 952 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 133:
#line 954 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_short; }
    break;

  case 134:
#line 956 "c-exp.y"
    { yyval.tval = parse_type->builtin_double; }
    break;

  case 135:
#line 958 "c-exp.y"
    { yyval.tval = parse_type->builtin_long_double; }
    break;

  case 136:
#line 960 "c-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 137:
#line 963 "c-exp.y"
    { yyval.tval = lookup_struct (copy_name (yyvsp[0].sval),
					      expression_context_block); }
    break;

  case 138:
#line 966 "c-exp.y"
    { yyval.tval = lookup_union (copy_name (yyvsp[0].sval),
					     expression_context_block); }
    break;

  case 139:
#line 969 "c-exp.y"
    { yyval.tval = lookup_enum (copy_name (yyvsp[0].sval),
					    expression_context_block); }
    break;

  case 140:
#line 972 "c-exp.y"
    { yyval.tval = lookup_unsigned_typename (parse_language,
							 parse_gdbarch,
							 TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 141:
#line 976 "c-exp.y"
    { yyval.tval = parse_type->builtin_unsigned_int; }
    break;

  case 142:
#line 978 "c-exp.y"
    { yyval.tval = lookup_signed_typename (parse_language,
						       parse_gdbarch,
						       TYPE_NAME(yyvsp[0].tsym.type)); }
    break;

  case 143:
#line 982 "c-exp.y"
    { yyval.tval = parse_type->builtin_int; }
    break;

  case 144:
#line 987 "c-exp.y"
    { yyval.tval = lookup_template_type(copy_name(yyvsp[-3].sval), yyvsp[-1].tval,
						    expression_context_block);
			}
    break;

  case 145:
#line 991 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[0].tval); }
    break;

  case 146:
#line 993 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[-1].tval); }
    break;

  case 148:
#line 1043 "c-exp.y"
    {
		  struct type *type = yyvsp[-2].tval;
		  struct type *new_type;
		  char *ncopy = alloca (yyvsp[0].sval.length + 1);

		  memcpy (ncopy, yyvsp[0].sval.ptr, yyvsp[0].sval.length);
		  ncopy[yyvsp[0].sval.length] = '\0';

		  if (TYPE_CODE (type) != TYPE_CODE_STRUCT
		      && TYPE_CODE (type) != TYPE_CODE_UNION
		      && TYPE_CODE (type) != TYPE_CODE_NAMESPACE)
		    error ("`%s' is not defined as an aggregate type.",
			   TYPE_NAME (type));

		  new_type = cp_lookup_nested_type (type, ncopy,
						    expression_context_block);
		  if (new_type == NULL)
		    error ("No type \"%s\" within class or namespace \"%s\".",
			   ncopy, TYPE_NAME (type));
		  
		  yyval.tval = new_type;
		}
    break;

  case 150:
#line 1069 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "int";
		  yyval.tsym.stoken.length = 3;
		  yyval.tsym.type = parse_type->builtin_int;
		}
    break;

  case 151:
#line 1075 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "long";
		  yyval.tsym.stoken.length = 4;
		  yyval.tsym.type = parse_type->builtin_long;
		}
    break;

  case 152:
#line 1081 "c-exp.y"
    {
		  yyval.tsym.stoken.ptr = "short";
		  yyval.tsym.stoken.length = 5;
		  yyval.tsym.type = parse_type->builtin_short;
		}
    break;

  case 153:
#line 1090 "c-exp.y"
    { yyval.tvec = (struct type **) xmalloc (sizeof (struct type *) * 2);
		  yyval.ivec[0] = 1;	/* Number of types in vector */
		  yyval.tvec[1] = yyvsp[0].tval;
		}
    break;

  case 154:
#line 1095 "c-exp.y"
    { int len = sizeof (struct type *) * (++(yyvsp[-2].ivec[0]) + 1);
		  yyval.tvec = (struct type **) xrealloc ((char *) yyvsp[-2].tvec, len);
		  yyval.tvec[yyval.ivec[0]] = yyvsp[0].tval;
		}
    break;

  case 156:
#line 1103 "c-exp.y"
    { yyval.tval = follow_types (yyvsp[-3].tval); }
    break;

  case 159:
#line 1111 "c-exp.y"
    { push_type (tp_const);
			  push_type (tp_volatile); 
			}
    break;

  case 160:
#line 1115 "c-exp.y"
    { push_type (tp_const); }
    break;

  case 161:
#line 1117 "c-exp.y"
    { push_type (tp_volatile); }
    break;

  case 162:
#line 1120 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 163:
#line 1121 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;

  case 164:
#line 1122 "c-exp.y"
    { yyval.sval = yyvsp[0].tsym.stoken; }
    break;

  case 165:
#line 1123 "c-exp.y"
    { yyval.sval = yyvsp[0].ssym.stoken; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 2590 "c-exp.c.tmp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1137 "c-exp.y"


/* Take care of parsing a number (anything that starts with a digit).
   Set yylval and return the token type; update lexptr.
   LEN is the number of characters in it.  */

/*** Needs some error checking for the float case ***/

static int
parse_number (char *p, int len, int parsed_float, YYSTYPE *putithere)
{
  /* FIXME: Shouldn't these be unsigned?  We don't deal with negative values
     here, and we do kind of silly things like cast to unsigned.  */
  LONGEST n = 0;
  LONGEST prevn = 0;
  ULONGEST un;

  int i = 0;
  int c;
  int base = input_radix;
  int unsigned_p = 0;

  /* Number of "L" suffixes encountered.  */
  int long_p = 0;

  /* We have found a "L" or "U" suffix.  */
  int found_suffix = 0;

  ULONGEST high_bit;
  struct type *signed_type;
  struct type *unsigned_type;

  if (parsed_float)
    {
      /* It's a float since it contains a point or an exponent.  */
      char *s;
      int num;	/* number of tokens scanned by scanf */
      char saved_char;

      /* If it ends at "df", "dd" or "dl", take it as type of decimal floating
         point.  Return DECFLOAT.  */

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'f')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_decfloat;
	  decimal_from_string (putithere->typed_val_decfloat.val, 4,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'd')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_decdouble;
	  decimal_from_string (putithere->typed_val_decfloat.val, 8,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      if (len >= 2 && p[len - 2] == 'd' && p[len - 1] == 'l')
	{
	  p[len - 2] = '\0';
	  putithere->typed_val_decfloat.type
	    = parse_type->builtin_declong;
	  decimal_from_string (putithere->typed_val_decfloat.val, 16,
			       gdbarch_byte_order (parse_gdbarch), p);
	  p[len - 2] = 'd';
	  return DECFLOAT;
	}

      s = xmalloc (len);
      saved_char = p[len];
      p[len] = 0;	/* null-terminate the token */
      num = sscanf (p, "%" DOUBLEST_SCAN_FORMAT "%s",
		    &putithere->typed_val_float.dval, s);
      p[len] = saved_char;	/* restore the input stream */

      if (num == 1)
	putithere->typed_val_float.type = 
	  parse_type->builtin_double;

      if (num == 2 )
	{
	  /* See if it has any float suffix: 'f' for float, 'l' for long 
	     double.  */
	  if (!strcasecmp (s, "f"))
	    putithere->typed_val_float.type = 
	      parse_type->builtin_float;
	  else if (!strcasecmp (s, "l"))
	    putithere->typed_val_float.type = 
	      parse_type->builtin_long_double;
	  else
	    {
	      xfree (s);
	      return ERROR;
	    }
	}

      xfree (s);
      return FLOAT;
    }

  /* Handle base-switching prefixes 0x, 0t, 0d, 0 */
  if (p[0] == '0')
    switch (p[1])
      {
      case 'x':
      case 'X':
	if (len >= 3)
	  {
	    p += 2;
	    base = 16;
	    len -= 2;
	  }
	break;

      case 't':
      case 'T':
      case 'd':
      case 'D':
	if (len >= 3)
	  {
	    p += 2;
	    base = 10;
	    len -= 2;
	  }
	break;

      default:
	base = 8;
	break;
      }

  while (len-- > 0)
    {
      c = *p++;
      if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
      if (c != 'l' && c != 'u')
	n *= base;
      if (c >= '0' && c <= '9')
	{
	  if (found_suffix)
	    return ERROR;
	  n += i = c - '0';
	}
      else
	{
	  if (base > 10 && c >= 'a' && c <= 'f')
	    {
	      if (found_suffix)
		return ERROR;
	      n += i = c - 'a' + 10;
	    }
	  else if (c == 'l')
	    {
	      ++long_p;
	      found_suffix = 1;
	    }
	  else if (c == 'u')
	    {
	      unsigned_p = 1;
	      found_suffix = 1;
	    }
	  else
	    return ERROR;	/* Char not a digit */
	}
      if (i >= base)
	return ERROR;		/* Invalid digit in this base */

      /* Portably test for overflow (only works for nonzero values, so make
	 a second check for zero).  FIXME: Can't we just make n and prevn
	 unsigned and avoid this?  */
      if (c != 'l' && c != 'u' && (prevn >= n) && n != 0)
	unsigned_p = 1;		/* Try something unsigned */

      /* Portably test for unsigned overflow.
	 FIXME: This check is wrong; for example it doesn't find overflow
	 on 0x123456789 when LONGEST is 32 bits.  */
      if (c != 'l' && c != 'u' && n != 0)
	{	
	  if ((unsigned_p && (ULONGEST) prevn >= (ULONGEST) n))
	    error ("Numeric constant too large.");
	}
      prevn = n;
    }

  /* An integer constant is an int, a long, or a long long.  An L
     suffix forces it to be long; an LL suffix forces it to be long
     long.  If not forced to a larger size, it gets the first type of
     the above that it fits in.  To figure out whether it fits, we
     shift it right and see whether anything remains.  Note that we
     can't shift sizeof (LONGEST) * HOST_CHAR_BIT bits or more in one
     operation, because many compilers will warn about such a shift
     (which always produces a zero result).  Sometimes gdbarch_int_bit
     or gdbarch_long_bit will be that big, sometimes not.  To deal with
     the case where it is we just always shift the value more than
     once, with fewer bits each time.  */

  un = (ULONGEST)n >> 2;
  if (long_p == 0
      && (un >> (gdbarch_int_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (gdbarch_int_bit (parse_gdbarch) - 1);

      /* A large decimal (not hex or octal) constant (between INT_MAX
	 and UINT_MAX) is a long or unsigned long, according to ANSI,
	 never an unsigned int, but this code treats it as unsigned
	 int.  This probably should be fixed.  GCC gives a warning on
	 such constants.  */

      unsigned_type = parse_type->builtin_unsigned_int;
      signed_type = parse_type->builtin_int;
    }
  else if (long_p <= 1
	   && (un >> (gdbarch_long_bit (parse_gdbarch) - 2)) == 0)
    {
      high_bit = ((ULONGEST)1) << (gdbarch_long_bit (parse_gdbarch) - 1);
      unsigned_type = parse_type->builtin_unsigned_long;
      signed_type = parse_type->builtin_long;
    }
  else
    {
      int shift;
      if (sizeof (ULONGEST) * HOST_CHAR_BIT 
	  < gdbarch_long_long_bit (parse_gdbarch))
	/* A long long does not fit in a LONGEST.  */
	shift = (sizeof (ULONGEST) * HOST_CHAR_BIT - 1);
      else
	shift = (gdbarch_long_long_bit (parse_gdbarch) - 1);
      high_bit = (ULONGEST) 1 << shift;
      unsigned_type = parse_type->builtin_unsigned_long_long;
      signed_type = parse_type->builtin_long_long;
    }

   putithere->typed_val_int.val = n;

   /* If the high bit of the worked out type is set then this number
      has to be unsigned. */

   if (unsigned_p || (n & high_bit)) 
     {
       putithere->typed_val_int.type = unsigned_type;
     }
   else 
     {
       putithere->typed_val_int.type = signed_type;
     }

   return INT;
}

/* Temporary obstack used for holding strings.  */
static struct obstack tempbuf;
static int tempbuf_init;

/* Parse a C escape sequence.  The initial backslash of the sequence
   is at (*PTR)[-1].  *PTR will be updated to point to just after the
   last character of the sequence.  If OUTPUT is not NULL, the
   translated form of the escape sequence will be written there.  If
   OUTPUT is NULL, no output is written and the call will only affect
   *PTR.  If an escape sequence is expressed in target bytes, then the
   entire sequence will simply be copied to OUTPUT.  Return 1 if any
   character was emitted, 0 otherwise.  */

int
c_parse_escape (char **ptr, struct obstack *output)
{
  char *tokptr = *ptr;
  int result = 1;

  /* Some escape sequences undergo character set conversion.  Those we
     translate here.  */
  switch (*tokptr)
    {
      /* Hex escapes do not undergo character set conversion, so keep
	 the escape sequence for later.  */
    case 'x':
      if (output)
	obstack_grow_str (output, "\\x");
      ++tokptr;
      if (!isxdigit (*tokptr))
	error (_("\\x escape without a following hex digit"));
      while (isxdigit (*tokptr))
	{
	  if (output)
	    obstack_1grow (output, *tokptr);
	  ++tokptr;
	}
      break;

      /* Octal escapes do not undergo character set conversion, so
	 keep the escape sequence for later.  */
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      {
	int i;
	if (output)
	  obstack_grow_str (output, "\\");
	for (i = 0;
	     i < 3 && isdigit (*tokptr) && *tokptr != '8' && *tokptr != '9';
	     ++i)
	  {
	    if (output)
	      obstack_1grow (output, *tokptr);
	    ++tokptr;
	  }
      }
      break;

      /* We handle UCNs later.  We could handle them here, but that
	 would mean a spurious error in the case where the UCN could
	 be converted to the target charset but not the host
	 charset.  */
    case 'u':
    case 'U':
      {
	char c = *tokptr;
	int i, len = c == 'U' ? 8 : 4;
	if (output)
	  {
	    obstack_1grow (output, '\\');
	    obstack_1grow (output, *tokptr);
	  }
	++tokptr;
	if (!isxdigit (*tokptr))
	  error (_("\\%c escape without a following hex digit"), c);
	for (i = 0; i < len && isxdigit (*tokptr); ++i)
	  {
	    if (output)
	      obstack_1grow (output, *tokptr);
	    ++tokptr;
	  }
      }
      break;

      /* We must pass backslash through so that it does not
	 cause quoting during the second expansion.  */
    case '\\':
      if (output)
	obstack_grow_str (output, "\\\\");
      ++tokptr;
      break;

      /* Escapes which undergo conversion.  */
    case 'a':
      if (output)
	obstack_1grow (output, '\a');
      ++tokptr;
      break;
    case 'b':
      if (output)
	obstack_1grow (output, '\b');
      ++tokptr;
      break;
    case 'f':
      if (output)
	obstack_1grow (output, '\f');
      ++tokptr;
      break;
    case 'n':
      if (output)
	obstack_1grow (output, '\n');
      ++tokptr;
      break;
    case 'r':
      if (output)
	obstack_1grow (output, '\r');
      ++tokptr;
      break;
    case 't':
      if (output)
	obstack_1grow (output, '\t');
      ++tokptr;
      break;
    case 'v':
      if (output)
	obstack_1grow (output, '\v');
      ++tokptr;
      break;

      /* GCC extension.  */
    case 'e':
      if (output)
	obstack_1grow (output, HOST_ESCAPE_CHAR);
      ++tokptr;
      break;

      /* Backslash-newline expands to nothing at all.  */
    case '\n':
      ++tokptr;
      result = 0;
      break;

      /* A few escapes just expand to the character itself.  */
    case '\'':
    case '\"':
    case '?':
      /* GCC extensions.  */
    case '(':
    case '{':
    case '[':
    case '%':
      /* Unrecognized escapes turn into the character itself.  */
    default:
      if (output)
	obstack_1grow (output, *tokptr);
      ++tokptr;
      break;
    }
  *ptr = tokptr;
  return result;
}

/* Parse a string or character literal from TOKPTR.  The string or
   character may be wide or unicode.  *OUTPTR is set to just after the
   end of the literal in the input string.  The resulting token is
   stored in VALUE.  This returns a token value, either STRING or
   CHAR, depending on what was parsed.  *HOST_CHARS is set to the
   number of host characters in the literal.  */
static int
parse_string_or_char (char *tokptr, char **outptr, struct typed_stoken *value,
		      int *host_chars)
{
  int quote, i;
  enum c_string_type type;

  /* Build the gdb internal form of the input string in tempbuf.  Note
     that the buffer is null byte terminated *only* for the
     convenience of debugging gdb itself and printing the buffer
     contents when the buffer contains no embedded nulls.  Gdb does
     not depend upon the buffer being null byte terminated, it uses
     the length string instead.  This allows gdb to handle C strings
     (as well as strings in other languages) with embedded null
     bytes */

  if (!tempbuf_init)
    tempbuf_init = 1;
  else
    obstack_free (&tempbuf, NULL);
  obstack_init (&tempbuf);

  /* Record the string type.  */
  if (*tokptr == 'L')
    {
      type = C_WIDE_STRING;
      ++tokptr;
    }
  else if (*tokptr == 'u')
    {
      type = C_STRING_16;
      ++tokptr;
    }
  else if (*tokptr == 'U')
    {
      type = C_STRING_32;
      ++tokptr;
    }
  else
    type = C_STRING;

  /* Skip the quote.  */
  quote = *tokptr;
  if (quote == '\'')
    type |= C_CHAR;
  ++tokptr;

  *host_chars = 0;

  while (*tokptr)
    {
      char c = *tokptr;
      if (c == '\\')
	{
	  ++tokptr;
	  *host_chars += c_parse_escape (&tokptr, &tempbuf);
	}
      else if (c == quote)
	break;
      else
	{
	  obstack_1grow (&tempbuf, c);
	  ++tokptr;
	  /* FIXME: this does the wrong thing with multi-byte host
	     characters.  We could use mbrlen here, but that would
	     make "set host-charset" a bit less useful.  */
	  ++*host_chars;
	}
    }

  if (*tokptr != quote)
    {
      if (quote == '"')
	error ("Unterminated string in expression.");
      else
	error ("Unmatched single quote.");
    }
  ++tokptr;

  value->type = type;
  value->ptr = obstack_base (&tempbuf);
  value->length = obstack_object_size (&tempbuf);

  *outptr = tokptr;

  return quote == '"' ? STRING : CHAR;
}

struct token
{
  char *operator;
  int token;
  enum exp_opcode opcode;
  int cxx_only;
};

static const struct token tokentab3[] =
  {
    {">>=", ASSIGN_MODIFY, BINOP_RSH, 0},
    {"<<=", ASSIGN_MODIFY, BINOP_LSH, 0},
    {"->*", ARROW_STAR, BINOP_END, 1}
  };

static const struct token tokentab2[] =
  {
    {"+=", ASSIGN_MODIFY, BINOP_ADD, 0},
    {"-=", ASSIGN_MODIFY, BINOP_SUB, 0},
    {"*=", ASSIGN_MODIFY, BINOP_MUL, 0},
    {"/=", ASSIGN_MODIFY, BINOP_DIV, 0},
    {"%=", ASSIGN_MODIFY, BINOP_REM, 0},
    {"|=", ASSIGN_MODIFY, BINOP_BITWISE_IOR, 0},
    {"&=", ASSIGN_MODIFY, BINOP_BITWISE_AND, 0},
    {"^=", ASSIGN_MODIFY, BINOP_BITWISE_XOR, 0},
    {"++", INCREMENT, BINOP_END, 0},
    {"--", DECREMENT, BINOP_END, 0},
    {"->", ARROW, BINOP_END, 0},
    {"&&", ANDAND, BINOP_END, 0},
    {"||", OROR, BINOP_END, 0},
    /* "::" is *not* only C++: gdb overrides its meaning in several
       different ways, e.g., 'filename'::func, function::variable.  */
    {"::", COLONCOLON, BINOP_END, 0},
    {"<<", LSH, BINOP_END, 0},
    {">>", RSH, BINOP_END, 0},
    {"==", EQUAL, BINOP_END, 0},
    {"!=", NOTEQUAL, BINOP_END, 0},
    {"<=", LEQ, BINOP_END, 0},
    {">=", GEQ, BINOP_END, 0},
    {".*", DOT_STAR, BINOP_END, 1}
  };

/* Identifier-like tokens.  */
static const struct token ident_tokens[] =
  {
    {"unsigned", UNSIGNED, OP_NULL, 0},
    {"template", TEMPLATE, OP_NULL, 1},
    {"volatile", VOLATILE_KEYWORD, OP_NULL, 0},
    {"struct", STRUCT, OP_NULL, 0},
    {"signed", SIGNED_KEYWORD, OP_NULL, 0},
    {"sizeof", SIZEOF, OP_NULL, 0},
    {"double", DOUBLE_KEYWORD, OP_NULL, 0},
    {"false", FALSEKEYWORD, OP_NULL, 1},
    {"class", CLASS, OP_NULL, 1},
    {"union", UNION, OP_NULL, 0},
    {"short", SHORT, OP_NULL, 0},
    {"const", CONST_KEYWORD, OP_NULL, 0},
    {"enum", ENUM, OP_NULL, 0},
    {"long", LONG, OP_NULL, 0},
    {"true", TRUEKEYWORD, OP_NULL, 1},
    {"int", INT_KEYWORD, OP_NULL, 0},

    {"and", ANDAND, BINOP_END, 1},
    {"and_eq", ASSIGN_MODIFY, BINOP_BITWISE_AND, 1},
    {"bitand", '&', OP_NULL, 1},
    {"bitor", '|', OP_NULL, 1},
    {"compl", '~', OP_NULL, 1},
    {"not", '!', OP_NULL, 1},
    {"not_eq", NOTEQUAL, BINOP_END, 1},
    {"or", OROR, BINOP_END, 1},
    {"or_eq", ASSIGN_MODIFY, BINOP_BITWISE_IOR, 1},
    {"xor", '^', OP_NULL, 1},
    {"xor_eq", ASSIGN_MODIFY, BINOP_BITWISE_XOR, 1}
  };

/* When we find that lexptr (the global var defined in parse.c) is
   pointing at a macro invocation, we expand the invocation, and call
   scan_macro_expansion to save the old lexptr here and point lexptr
   into the expanded text.  When we reach the end of that, we call
   end_macro_expansion to pop back to the value we saved here.  The
   macro expansion code promises to return only fully-expanded text,
   so we don't need to "push" more than one level.

   This is disgusting, of course.  It would be cleaner to do all macro
   expansion beforehand, and then hand that to lexptr.  But we don't
   really know where the expression ends.  Remember, in a command like

     (gdb) break *ADDRESS if CONDITION

   we evaluate ADDRESS in the scope of the current frame, but we
   evaluate CONDITION in the scope of the breakpoint's location.  So
   it's simply wrong to try to macro-expand the whole thing at once.  */
static char *macro_original_text;

/* We save all intermediate macro expansions on this obstack for the
   duration of a single parse.  The expansion text may sometimes have
   to live past the end of the expansion, due to yacc lookahead.
   Rather than try to be clever about saving the data for a single
   token, we simply keep it all and delete it after parsing has
   completed.  */
static struct obstack expansion_obstack;

static void
scan_macro_expansion (char *expansion)
{
  char *copy;

  /* We'd better not be trying to push the stack twice.  */
  gdb_assert (! macro_original_text);

  /* Copy to the obstack, and then free the intermediate
     expansion.  */
  copy = obstack_copy0 (&expansion_obstack, expansion, strlen (expansion));
  xfree (expansion);

  /* Save the old lexptr value, so we can return to it when we're done
     parsing the expanded text.  */
  macro_original_text = lexptr;
  lexptr = copy;
}


static int
scanning_macro_expansion (void)
{
  return macro_original_text != 0;
}


static void 
finished_macro_expansion (void)
{
  /* There'd better be something to pop back to.  */
  gdb_assert (macro_original_text);

  /* Pop back to the original text.  */
  lexptr = macro_original_text;
  macro_original_text = 0;
}


static void
scan_macro_cleanup (void *dummy)
{
  if (macro_original_text)
    finished_macro_expansion ();

  obstack_free (&expansion_obstack, NULL);
}


/* The scope used for macro expansion.  */
static struct macro_scope *expression_macro_scope;

/* This is set if a NAME token appeared at the very end of the input
   string, with no whitespace separating the name from the EOF.  This
   is used only when parsing to do field name completion.  */
static int saw_name_at_eof;

/* This is set if the previously-returned token was a structure
   operator -- either '.' or ARROW.  This is used only when parsing to
   do field name completion.  */
static int last_was_structop;

/* Read one token, getting characters through lexptr.  */

static int
yylex (void)
{
  int c;
  int namelen;
  unsigned int i;
  char *tokstart;
  int saw_structop = last_was_structop;
  char *copy;

  last_was_structop = 0;

 retry:

  /* Check if this is a macro invocation that we need to expand.  */
  if (! scanning_macro_expansion ())
    {
      char *expanded = macro_expand_next (&lexptr,
                                          standard_macro_lookup,
                                          expression_macro_scope);

      if (expanded)
        scan_macro_expansion (expanded);
    }

  prev_lexptr = lexptr;

  tokstart = lexptr;
  /* See if it is a special token of length 3.  */
  for (i = 0; i < sizeof tokentab3 / sizeof tokentab3[0]; i++)
    if (strncmp (tokstart, tokentab3[i].operator, 3) == 0)
      {
	if (tokentab3[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	lexptr += 3;
	yylval.opcode = tokentab3[i].opcode;
	return tokentab3[i].token;
      }

  /* See if it is a special token of length 2.  */
  for (i = 0; i < sizeof tokentab2 / sizeof tokentab2[0]; i++)
    if (strncmp (tokstart, tokentab2[i].operator, 2) == 0)
      {
	if (tokentab2[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	lexptr += 2;
	yylval.opcode = tokentab2[i].opcode;
	if (in_parse_field && tokentab2[i].token == ARROW)
	  last_was_structop = 1;
	return tokentab2[i].token;
      }

  switch (c = *tokstart)
    {
    case 0:
      /* If we were just scanning the result of a macro expansion,
         then we need to resume scanning the original text.
	 If we're parsing for field name completion, and the previous
	 token allows such completion, return a COMPLETE token.
         Otherwise, we were already scanning the original text, and
         we're really done.  */
      if (scanning_macro_expansion ())
        {
          finished_macro_expansion ();
          goto retry;
        }
      else if (saw_name_at_eof)
	{
	  saw_name_at_eof = 0;
	  return COMPLETE;
	}
      else if (saw_structop)
	return COMPLETE;
      else
        return 0;

    case ' ':
    case '\t':
    case '\n':
      lexptr++;
      goto retry;

    case '[':
    case '(':
      paren_depth++;
      lexptr++;
      return c;

    case ']':
    case ')':
      if (paren_depth == 0)
	return 0;
      paren_depth--;
      lexptr++;
      return c;

    case ',':
      if (comma_terminates
          && paren_depth == 0
          && ! scanning_macro_expansion ())
	return 0;
      lexptr++;
      return c;

    case '.':
      /* Might be a floating point number.  */
      if (lexptr[1] < '0' || lexptr[1] > '9')
	{
	  if (in_parse_field)
	    last_was_structop = 1;
	  goto symbol;		/* Nope, must be a symbol. */
	}
      /* FALL THRU into number case.  */

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {
	/* It's a number.  */
	int got_dot = 0, got_e = 0, toktype;
	char *p = tokstart;
	int hex = input_radix > 10;

	if (c == '0' && (p[1] == 'x' || p[1] == 'X'))
	  {
	    p += 2;
	    hex = 1;
	  }
	else if (c == '0' && (p[1]=='t' || p[1]=='T' || p[1]=='d' || p[1]=='D'))
	  {
	    p += 2;
	    hex = 0;
	  }

	for (;; ++p)
	  {
	    /* This test includes !hex because 'e' is a valid hex digit
	       and thus does not indicate a floating point number when
	       the radix is hex.  */
	    if (!hex && !got_e && (*p == 'e' || *p == 'E'))
	      got_dot = got_e = 1;
	    /* This test does not include !hex, because a '.' always indicates
	       a decimal floating point number regardless of the radix.  */
	    else if (!got_dot && *p == '.')
	      got_dot = 1;
	    else if (got_e && (p[-1] == 'e' || p[-1] == 'E')
		     && (*p == '-' || *p == '+'))
	      /* This is the sign of the exponent, not the end of the
		 number.  */
	      continue;
	    /* We will take any letters or digits.  parse_number will
	       complain if past the radix, or if L or U are not final.  */
	    else if ((*p < '0' || *p > '9')
		     && ((*p < 'a' || *p > 'z')
				  && (*p < 'A' || *p > 'Z')))
	      break;
	  }
	toktype = parse_number (tokstart, p - tokstart, got_dot|got_e, &yylval);
        if (toktype == ERROR)
	  {
	    char *err_copy = (char *) alloca (p - tokstart + 1);

	    memcpy (err_copy, tokstart, p - tokstart);
	    err_copy[p - tokstart] = 0;
	    error ("Invalid number \"%s\".", err_copy);
	  }
	lexptr = p;
	return toktype;
      }

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '@':
    case '<':
    case '>':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      lexptr++;
      return c;

    case 'L':
    case 'u':
    case 'U':
      if (tokstart[1] != '"' && tokstart[1] != '\'')
	break;
      /* Fall through.  */
    case '\'':
    case '"':
      {
	int host_len;
	int result = parse_string_or_char (tokstart, &lexptr, &yylval.tsval,
					   &host_len);
	if (result == CHAR)
	  {
	    if (host_len == 0)
	      error ("Empty character constant.");
	    else if (host_len > 2 && c == '\'')
	      {
		++tokstart;
		namelen = lexptr - tokstart - 1;
		goto tryname;
	      }
	    else if (host_len > 1)
	      error ("Invalid character constant.");
	  }
	return result;
      }
    }

  if (!(c == '_' || c == '$'
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    /* We must have come across a bad character (e.g. ';').  */
    error ("Invalid character '%c' in expression.", c);

  /* It's a name.  See how long it is.  */
  namelen = 0;
  for (c = tokstart[namelen];
       (c == '_' || c == '$' || (c >= '0' && c <= '9')
	|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '<');)
    {
      /* Template parameter lists are part of the name.
	 FIXME: This mishandles `print $a<4&&$a>3'.  */

      if (c == '<')
	{ 
               /* Scan ahead to get rest of the template specification.  Note
                  that we look ahead only when the '<' adjoins non-whitespace
                  characters; for comparison expressions, e.g. "a < b > c",
                  there must be spaces before the '<', etc. */
               
               char * p = find_template_name_end (tokstart + namelen);
               if (p)
                 namelen = p - tokstart;
               break;
	}
      c = tokstart[++namelen];
    }

  /* The token "if" terminates the expression and is NOT removed from
     the input stream.  It doesn't count if it appears in the
     expansion of a macro.  */
  if (namelen == 2
      && tokstart[0] == 'i'
      && tokstart[1] == 'f'
      && ! scanning_macro_expansion ())
    {
      return 0;
    }

  lexptr += namelen;

  tryname:

  yylval.sval.ptr = tokstart;
  yylval.sval.length = namelen;

  /* Catch specific keywords.  */
  copy = copy_name (yylval.sval);
  for (i = 0; i < sizeof ident_tokens / sizeof ident_tokens[0]; i++)
    if (strcmp (copy, ident_tokens[i].operator) == 0)
      {
	if (ident_tokens[i].cxx_only
	    && parse_language->la_language != language_cplus)
	  break;

	/* It is ok to always set this, even though we don't always
	   strictly need to.  */
	yylval.opcode = ident_tokens[i].opcode;
	return ident_tokens[i].token;
      }

  if (*tokstart == '$')
    {
      write_dollar_variable (yylval.sval);
      return VARIABLE;
    }
  
  /* Use token-type BLOCKNAME for symbols that happen to be defined as
     functions or symtabs.  If this is not so, then ...
     Use token-type TYPENAME for symbols that happen to be defined
     currently as names of types; NAME for other symbols.
     The caller is not constrained to care about the distinction.  */
  {
    struct symbol *sym;
    int is_a_field_of_this = 0;
    int hextype;

    sym = lookup_symbol (copy, expression_context_block,
			 VAR_DOMAIN,
			 parse_language->la_language == language_cplus
			 ? &is_a_field_of_this : (int *) NULL);
    /* Call lookup_symtab, not lookup_partial_symtab, in case there are
       no psymtabs (coff, xcoff, or some future change to blow away the
       psymtabs once once symbols are read).  */
    if (sym && SYMBOL_CLASS (sym) == LOC_BLOCK)
      {
	yylval.ssym.sym = sym;
	yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	return BLOCKNAME;
      }
    else if (!sym)
      {				/* See if it's a file name. */
	struct symtab *symtab;

	symtab = lookup_symtab (copy);

	if (symtab)
	  {
	    yylval.bval = BLOCKVECTOR_BLOCK (BLOCKVECTOR (symtab), STATIC_BLOCK);
	    return FILENAME;
	  }
      }

    if (sym && SYMBOL_CLASS (sym) == LOC_TYPEDEF)
        {
	  /* NOTE: carlton/2003-09-25: There used to be code here to
	     handle nested types.  It didn't work very well.  See the
	     comment before qualified_type for more info.  */
	  yylval.tsym.type = SYMBOL_TYPE (sym);
	  return TYPENAME;
        }
    yylval.tsym.type
      = language_lookup_primitive_type_by_name (parse_language,
						parse_gdbarch, copy);
    if (yylval.tsym.type != NULL)
      return TYPENAME;

    /* Input names that aren't symbols but ARE valid hex numbers,
       when the input radix permits them, can be names or numbers
       depending on the parse.  Note we support radixes > 16 here.  */
    if (!sym && 
        ((tokstart[0] >= 'a' && tokstart[0] < 'a' + input_radix - 10) ||
         (tokstart[0] >= 'A' && tokstart[0] < 'A' + input_radix - 10)))
      {
 	YYSTYPE newlval;	/* Its value is ignored.  */
	hextype = parse_number (tokstart, namelen, 0, &newlval);
	if (hextype == INT)
	  {
	    yylval.ssym.sym = sym;
	    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
	    return NAME_OR_INT;
	  }
      }

    /* Any other kind of symbol */
    yylval.ssym.sym = sym;
    yylval.ssym.is_a_field_of_this = is_a_field_of_this;
    if (in_parse_field && *lexptr == '\0')
      saw_name_at_eof = 1;
    return NAME;
  }
}

int
c_parse (void)
{
  int result;
  struct cleanup *back_to = make_cleanup (free_current_contents,
					  &expression_macro_scope);

  /* Set up the scope for macro expansion.  */
  expression_macro_scope = NULL;

  if (expression_context_block)
    expression_macro_scope
      = sal_macro_scope (find_pc_line (expression_context_pc, 0));
  else
    expression_macro_scope = default_macro_scope ();
  if (! expression_macro_scope)
    expression_macro_scope = user_macro_scope ();

  /* Initialize macro expansion code.  */
  obstack_init (&expansion_obstack);
  gdb_assert (! macro_original_text);
  make_cleanup (scan_macro_cleanup, 0);

  /* Initialize some state used by the lexer.  */
  last_was_structop = 0;
  saw_name_at_eof = 0;

  result = yyparse ();
  do_cleanups (back_to);
  return result;
}


void
yyerror (char *msg)
{
  if (prev_lexptr)
    lexptr = prev_lexptr;

  error ("A %s in expression, near `%s'.", (msg ? msg : "error"), lexptr);
}



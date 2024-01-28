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

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
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
    NUMERO = 258,                  /* NUMERO  */
    OPEN = 259,                    /* OPEN  */
    UPDATE = 260,                  /* UPDATE  */
    ADD = 261,                     /* ADD  */
    INSERT = 262,                  /* INSERT  */
    WARNING = 263,                 /* WARNING  */
    ALIGN = 264,                   /* ALIGN  */
    CONTINUE = 265,                /* CONTINUE  */
    ANALOGREAD = 266,              /* ANALOGREAD  */
    ANALOGREFERENCE = 267,         /* ANALOGREFERENCE  */
    ANALOGWRITE = 268,             /* ANALOGWRITE  */
    DOCUMENTID = 269,              /* DOCUMENTID  */
    FILETYPEFILETYPEEXTENSION = 270, /* FILETYPEFILETYPEEXTENSION  */
    INSTANCEID = 271,              /* INSTANCEID  */
    LINEARIZEDMIMETYPE = 272,      /* LINEARIZEDMIMETYPE  */
    PAGECOUNT = 273,               /* PAGECOUNT  */
    PAGELAYOUTPDFVERSION = 274,    /* PAGELAYOUTPDFVERSION  */
    TAGGEDPDF = 275,               /* TAGGEDPDF  */
    XMPTOOLKIT = 276,              /* XMPTOOLKIT  */
    ARRAY = 277,                   /* ARRAY  */
    NOTONE = 278,                  /* NOTONE  */
    PULSEIN = 279,                 /* PULSEIN  */
    SHIFTIN = 280,                 /* SHIFTIN  */
    SHIFTOUT = 281,                /* SHIFTOUT  */
    TONE = 282,                    /* TONE  */
    BOOL_LITERAL = 283,            /* BOOL_LITERAL  */
    DEL = 284,                     /* DEL  */
    CLOSE = 285,                   /* CLOSE  */
    FINALLY = 286,                 /* FINALLY  */
    ASYNC = 287,                   /* ASYNC  */
    DO = 288,                      /* DO  */
    FOR = 289,                     /* FOR  */
    WHILE = 290,                   /* WHILE  */
    CLASS = 291,                   /* CLASS  */
    SQL = 292,                     /* SQL  */
    COLOR = 293,                   /* COLOR  */
    ADJUSTFIELD = 294,             /* ADJUSTFIELD  */
    BASEFIELD = 295,               /* BASEFIELD  */
    FLOATFIELD = 296,              /* FLOATFIELD  */
    AS = 297,                      /* AS  */
    CROSSJOIN = 298,               /* CROSSJOIN  */
    DISTINCTEXCEPT = 299,          /* DISTINCTEXCEPT  */
    FULLOUTERJOIN = 300,           /* FULLOUTERJOIN  */
    JOIN = 301,                    /* JOIN  */
    LIKE = 302,                    /* LIKE  */
    WHEN = 303,                    /* WHEN  */
    WHERE = 304,                   /* WHERE  */
    BOOLEAN = 305,                 /* BOOLEAN  */
    MATH = 306,                    /* MATH  */
    MATH_E = 307,                  /* MATH_E  */
    MATH_LN10 = 308,               /* MATH_LN10  */
    MATH_LN2 = 309,                /* MATH_LN2  */
    MATH_LOG10E = 310,             /* MATH_LOG10E  */
    MATH_LOG2E = 311,              /* MATH_LOG2E  */
    MATH_PIMATH_SQRT1 = 312,       /* MATH_PIMATH_SQRT1  */
    MATH_SQRT2 = 313,              /* MATH_SQRT2  */
    R_BRACKET = 314,               /* R_BRACKET  */
    L_BRACKET = 315,               /* L_BRACKET  */
    TBODY = 316,                   /* TBODY  */
    GLOBAL = 317,                  /* GLOBAL  */
    VAL = 318,                     /* VAL  */
    VAR = 319,                     /* VAR  */
    LET = 320,                     /* LET  */
    FILL = 321,                    /* FILL  */
    PRECISION = 322,               /* PRECISION  */
    BORDER = 323,                  /* BORDER  */
    TD = 324,                      /* TD  */
    TR = 325,                      /* TR  */
    COLSPAN = 326,                 /* COLSPAN  */
    GET = 327,                     /* GET  */
    DIGITALREAD = 328,             /* DIGITALREAD  */
    DIGITALWRITE = 329,            /* DIGITALWRITE  */
    PINMODE = 330,                 /* PINMODE  */
    COLON = 331,                   /* COLON  */
    DEBUGGER = 332,                /* DEBUGGER  */
    TH = 333,                      /* TH  */
    THEAD = 334,                   /* THEAD  */
    CIN = 335,                     /* CIN  */
    INPUT = 336,                   /* INPUT  */
    PRINTLN = 337,                 /* PRINTLN  */
    CHECKED = 338,                 /* CHECKED  */
    LOOP = 339,                    /* LOOP  */
    SETUP = 340,                   /* SETUP  */
    ELIF = 341,                    /* ELIF  */
    ELSE = 342,                    /* ELSE  */
    CATCH = 343,                   /* CATCH  */
    EXCEPT = 344,                  /* EXCEPT  */
    IOTA = 345,                    /* IOTA  */
    ISNAN = 346,                   /* ISNAN  */
    NAN = 347,                     /* NAN  */
    RAISE = 348,                   /* RAISE  */
    VOID = 349,                    /* VOID  */
    CIRCLE = 350,                  /* CIRCLE  */
    RECTANGLE = 351,               /* RECTANGLE  */
    SQUARE = 352,                  /* SQUARE  */
    TRIANGLE = 353,                /* TRIANGLE  */
    FORMAT = 354,                  /* FORMAT  */
    FONT = 355,                    /* FONT  */
    FUN = 356,                     /* FUN  */
    SQLCOMMAND = 357,              /* SQLCOMMAND  */
    SQLCONNECTION = 358,           /* SQLCONNECTION  */
    ABS = 359,                     /* ABS  */
    ATN = 360,                     /* ATN  */
    COS = 361,                     /* COS  */
    DERIVED = 362,                 /* DERIVED  */
    MATHEXP = 363,                 /* MATHEXP  */
    FIX = 364,                     /* FIX  */
    LOG = 365,                     /* LOG  */
    RND = 366,                     /* RND  */
    SGN = 367,                     /* SGN  */
    SIN = 368,                     /* SIN  */
    SQR = 369,                     /* SQR  */
    TAN = 370,                     /* TAN  */
    LAMBDA = 371,                  /* LAMBDA  */
    CREATEDATE = 372,              /* CREATEDATE  */
    DATE = 373,                    /* DATE  */
    DATEVALUEDAY = 374,            /* DATEVALUEDAY  */
    DAYS360 = 375,                 /* DAYS360  */
    EDATE = 376,                   /* EDATE  */
    HOUR = 377,                    /* HOUR  */
    MINUTE = 378,                  /* MINUTE  */
    MODIFYDATE = 379,              /* MODIFYDATE  */
    MONTH = 380,                   /* MONTH  */
    NETWORKDAYS = 381,             /* NETWORKDAYS  */
    NOW = 382,                     /* NOW  */
    SECOND = 383,                  /* SECOND  */
    TIME = 384,                    /* TIME  */
    TIMEVALUE = 385,               /* TIMEVALUE  */
    TODAY = 386,                   /* TODAY  */
    WEEKDAY = 387,                 /* WEEKDAY  */
    WEEKNUMWORKDAY = 388,          /* WEEKNUMWORKDAY  */
    YEAR = 389,                    /* YEAR  */
    CLEARDEVICE = 390,             /* CLEARDEVICE  */
    CLEARVIEWPORT = 391,           /* CLEARVIEWPORT  */
    CLOSEGRAPH = 392,              /* CLOSEGRAPH  */
    DETECTGRAPH = 393,             /* DETECTGRAPH  */
    GETARCCOORDS = 394,            /* GETARCCOORDS  */
    GETASPECTRAT = 395,            /* GETASPECTRAT  */
    INHEREIT = 396,                /* INHEREIT  */
    CREATORTOOL = 397,             /* CREATORTOOL  */
    LENGUAGE = 398,                /* LENGUAGE  */
    IDENT = 399,                   /* IDENT  */
    IMPORT = 400,                  /* IMPORT  */
    INCLUDE_ONCE = 401,            /* INCLUDE_ONCE  */
    STYLE = 402,                   /* STYLE  */
    FLAGS = 403,                   /* FLAGS  */
    SETF = 404,                    /* SETF  */
    DISABLE = 405,                 /* DISABLE  */
    ENABLE = 406,                  /* ENABLE  */
    HEIGHTHIDE = 407,              /* HEIGHTHIDE  */
    LOCATION = 408,                /* LOCATION  */
    POINT = 409,                   /* POINT  */
    SHOW = 410,                    /* SHOW  */
    SIZE = 411,                    /* SIZE  */
    RETURN = 412,                  /* RETURN  */
    WITH = 413,                    /* WITH  */
    INCLUDE = 414,                 /* INCLUDE  */
    LIST = 415,                    /* LIST  */
    R_BRACE = 416,                 /* R_BRACE  */
    L_BRACE = 417,                 /* L_BRACE  */
    IN = 418,                      /* IN  */
    ENDL = 419,                    /* ENDL  */
    FLUSH = 420,                   /* FLUSH  */
    SETFILL = 421,                 /* SETFILL  */
    SETIOSFLAG = 422,              /* SETIOSFLAG  */
    SETPRECISION = 423,            /* SETPRECISION  */
    SETWUNSETIOSFLAG = 424,        /* SETWUNSETIOSFLAG  */
    FRAME = 425,                   /* FRAME  */
    MAXINT = 426,                  /* MAXINT  */
    MESSAGEBOX = 427,              /* MESSAGEBOX  */
    CONSTMUT = 428,                /* CONSTMUT  */
    EXTERN = 429,                  /* EXTERN  */
    INTERN = 430,                  /* INTERN  */
    NATIVE = 431,                  /* NATIVE  */
    OUT = 432,                     /* OUT  */
    SEALED = 433,                  /* SEALED  */
    UNSAFE = 434,                  /* UNSAFE  */
    METADATADATE = 435,            /* METADATADATE  */
    FROM = 436,                    /* FROM  */
    INTO = 437,                    /* INTO  */
    SHOWBASE = 438,                /* SHOWBASE  */
    _NULL = 439,                   /* _NULL  */
    NAME = 440,                    /* NAME  */
    SRC = 441,                     /* SRC  */
    NEW = 442,                     /* NEW  */
    NONE = 443,                    /* NONE  */
    DIALUP = 444,                  /* DIALUP  */
    DIGESTAUTH = 445,              /* DIGESTAUTH  */
    NTAUTHORITY = 446,             /* NTAUTHORITY  */
    NTDOMAIN = 447,                /* NTDOMAIN  */
    NTLMAUTH = 448,                /* NTLMAUTH  */
    TFOOT = 449,                   /* TFOOT  */
    PASS = 450,                    /* PASS  */
    IF = 451,                      /* IF  */
    TRY = 452,                     /* TRY  */
    MAINPR = 453,                  /* MAINPR  */
    RESTRICTED = 454,              /* RESTRICTED  */
    UNARYPLUS = 455,               /* UNARYPLUS  */
    DOT = 456,                     /* DOT  */
    SEMICOLON = 457,               /* SEMICOLON  */
    AWAIT = 458,                   /* AWAIT  */
    PAUSE = 459,                   /* PAUSE  */
    L_PAR = 460,                   /* L_PAR  */
    R_PAR = 461,                   /* R_PAR  */
    PARAMS = 462,                  /* PARAMS  */
    PACKAGE = 463,                 /* PACKAGE  */
    ORDER = 464,                   /* ORDER  */
    SORT = 465,                    /* SORT  */
    ADDITION = 466,                /* ADDITION  */
    ASSIGNMENTOPERATOR = 467,      /* ASSIGNMENTOPERATOR  */
    CAPITALIZE = 468,              /* CAPITALIZE  */
    DOWNCASE = 469,                /* DOWNCASE  */
    EMPTY = 470,                   /* EMPTY  */
    GSUB = 471,                    /* GSUB  */
    UPCASE = 472,                  /* UPCASE  */
    PLUS = 473,                    /* PLUS  */
    MINUS = 474,                   /* MINUS  */
    MULT = 475,                    /* MULT  */
    DIV = 476,                     /* DIV  */
    OBJECT = 477,                  /* OBJECT  */
    RANDOM = 478,                  /* RANDOM  */
    RANDOMSEED = 479,              /* RANDOMSEED  */
    EQ = 480,                      /* EQ  */
    GT = 481,                      /* GT  */
    LT = 482,                      /* LT  */
    NOT = 483,                     /* NOT  */
    COMP = 484,                    /* COMP  */
    QUESTION = 485,                /* QUESTION  */
    EQEQ = 486,                    /* EQEQ  */
    LTEQ = 487,                    /* LTEQ  */
    GTEQ = 488,                    /* GTEQ  */
    NOTEQ = 489,                   /* NOTEQ  */
    ANDAND = 490,                  /* ANDAND  */
    OROR = 491,                    /* OROR  */
    PLUSPLUS = 492,                /* PLUSPLUS  */
    MINUSMINUS = 493,              /* MINUSMINUS  */
    AND = 494,                     /* AND  */
    OR = 495,                      /* OR  */
    XOR = 496,                     /* XOR  */
    MOD = 497,                     /* MOD  */
    LSHIFT = 498,                  /* LSHIFT  */
    RSHIFT = 499,                  /* RSHIFT  */
    URSHIFT = 500,                 /* URSHIFT  */
    PLUSEQ = 501,                  /* PLUSEQ  */
    MINUSEQ = 502,                 /* MINUSEQ  */
    MULTEQ = 503,                  /* MULTEQ  */
    DIVEQ = 504,                   /* DIVEQ  */
    ANDEQ = 505,                   /* ANDEQ  */
    OREQ = 506,                    /* OREQ  */
    XOREQ = 507,                   /* XOREQ  */
    MODEQ = 508,                   /* MODEQ  */
    LSHIFTEQ = 509,                /* LSHIFTEQ  */
    RSHIFTEQ = 510,                /* RSHIFTEQ  */
    URSHIFTEQ = 511,               /* URSHIFTEQ  */
    COMMA = 512,                   /* COMMA  */
    PUBLIC = 513,                  /* PUBLIC  */
    PRIVATE = 514,                 /* PRIVATE  */
    PROTECTED = 515,               /* PROTECTED  */
    STATIC = 516,                  /* STATIC  */
    FOREACH = 517,                 /* FOREACH  */
    SWITCH = 518,                  /* SWITCH  */
    DEFAULT = 519,                 /* DEFAULT  */
    CASE = 520,                    /* CASE  */
    BREAK = 521,                   /* BREAK  */
    VARCHAR = 522,                 /* VARCHAR  */
    BIT = 523,                     /* BIT  */
    DATETIME = 524,                /* DATETIME  */
    DECIMAL = 525,                 /* DECIMAL  */
    MONEY = 526,                   /* MONEY  */
    NUMERIC = 527,                 /* NUMERIC  */
    REAL = 528,                    /* REAL  */
    SMALLINT = 529,                /* SMALLINT  */
    SMALLDATETIME = 530,           /* SMALLDATETIME  */
    TINYINT = 531,                 /* TINYINT  */
    BINARY = 532,                  /* BINARY  */
    VARBINARY = 533,               /* VARBINARY  */
    IMAGE = 534,                   /* IMAGE  */
    TEXT = 535,                    /* TEXT  */
    INTEGER = 536,                 /* INTEGER  */
    WCHART = 537,                  /* WCHART  */
    BOOL = 538,                    /* BOOL  */
    LONGLONG = 539,                /* LONGLONG  */
    LONGDOUBLE = 540,              /* LONGDOUBLE  */
    WIDECHAR = 541,                /* WIDECHAR  */
    UNSIGNEDINT = 542,             /* UNSIGNEDINT  */
    UNSIGNEDLONG = 543,            /* UNSIGNEDLONG  */
    STRING = 544,                  /* STRING  */
    STRINGUPPERCASE = 545,         /* STRINGUPPERCASE  */
    BYTE = 546,                    /* BYTE  */
    CHAR = 547,                    /* CHAR  */
    INT = 548,                     /* INT  */
    LONG = 549,                    /* LONG  */
    SHORT = 550,                   /* SHORT  */
    DOUBLE = 551,                  /* DOUBLE  */
    FLOAT = 552,                   /* FLOAT  */
    IDENTIFIER = 553               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */

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
#line 1 "sintactico.y"

    #include <stdlib.h>
    #include <stdio.h>
    int yylex(void);
    void yyerror (char const *);
    #define YYERROR_VERBOSE
    // #define YYDEBUG 1 
    #define YYSTYPE int    
    extern int yylval;     
    extern char yytext[]; 
    extern FILE * yyin;    
    extern int yylineno; //Linea de la instrucción

#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMERO 258
#define OPEN 259
#define UPDATE 260
#define ADD 261
#define INSERT 262
#define WARNING 263
#define ALIGN 264
#define CONTINUE 265
#define ANALOGREAD 266
#define ANALOGREFERENCE 267
#define ANALOGWRITE 268
#define DOCUMENTID 269
#define FILETYPEFILETYPEEXTENSION 270
#define INSTANCEID 271
#define LINEARIZEDMIMETYPE 272
#define PAGECOUNT 273
#define PAGELAYOUTPDFVERSION 274
#define TAGGEDPDF 275
#define XMPTOOLKIT 276
#define ARRAY 277
#define NOTONE 278
#define PULSEIN 279
#define SHIFTIN 280
#define SHIFTOUT 281
#define TONE 282
#define BOOL_LITERAL 283
#define DEL 284
#define CLOSE 285
#define FINALLY 286
#define ASYNC 287
#define DO 288
#define FOR 289
#define WHILE 290
#define CLASS 291
#define SQL 292
#define COLOR 293
#define ADJUSTFIELD 294
#define BASEFIELD 295
#define FLOATFIELD 296
#define AS 297
#define CROSSJOIN 298
#define DISTINCTEXCEPT 299
#define FULLOUTERJOIN 300
#define JOIN 301
#define LIKE 302
#define WHEN 303
#define WHERE 304
#define BOOLEAN 305
#define MATH 306
#define MATH_E 307
#define MATH_LN10 308
#define MATH_LN2 309
#define MATH_LOG10E 310
#define MATH_LOG2E 311
#define MATH_PIMATH_SQRT1 312
#define MATH_SQRT2 313
#define R_BRACKET 314
#define L_BRACKET 315
#define TBODY 316
#define GLOBAL 317
#define VAL 318
#define VAR 319
#define LET 320
#define FILL 321
#define PRECISION 322
#define BORDER 323
#define TD 324
#define TR 325
#define COLSPAN 326
#define GET 327
#define DIGITALREAD 328
#define DIGITALWRITE 329
#define PINMODE 330
#define COLON 331
#define DEBUGGER 332
#define TH 333
#define THEAD 334
#define CIN 335
#define INPUT 336
#define PRINTLN 337
#define CHECKED 338
#define LOOP 339
#define SETUP 340
#define ELIF 341
#define ELSE 342
#define CATCH 343
#define EXCEPT 344
#define IOTA 345
#define ISNAN 346
#define NAN 347
#define RAISE 348
#define VOID 349
#define CIRCLE 350
#define RECTANGLE 351
#define SQUARE 352
#define TRIANGLE 353
#define FORMAT 354
#define FONT 355
#define FUN 356
#define SQLCOMMAND 357
#define SQLCONNECTION 358
#define ABS 359
#define ATN 360
#define COS 361
#define DERIVED 362
#define MATHEXP 363
#define FIX 364
#define LOG 365
#define RND 366
#define SGN 367
#define SIN 368
#define SQR 369
#define TAN 370
#define LAMBDA 371
#define CREATEDATE 372
#define DATE 373
#define DATEVALUEDAY 374
#define DAYS360 375
#define EDATE 376
#define HOUR 377
#define MINUTE 378
#define MODIFYDATE 379
#define MONTH 380
#define NETWORKDAYS 381
#define NOW 382
#define SECOND 383
#define TIME 384
#define TIMEVALUE 385
#define TODAY 386
#define WEEKDAY 387
#define WEEKNUMWORKDAY 388
#define YEAR 389
#define CLEARDEVICE 390
#define CLEARVIEWPORT 391
#define CLOSEGRAPH 392
#define DETECTGRAPH 393
#define GETARCCOORDS 394
#define GETASPECTRAT 395
#define INHEREIT 396
#define CREATORTOOL 397
#define LENGUAGE 398
#define IDENT 399
#define IMPORT 400
#define INCLUDE_ONCE 401
#define STYLE 402
#define FLAGS 403
#define SETF 404
#define DISABLE 405
#define ENABLE 406
#define HEIGHTHIDE 407
#define LOCATION 408
#define POINT 409
#define SHOW 410
#define SIZE 411
#define RETURN 412
#define WITH 413
#define INCLUDE 414
#define LIST 415
#define R_BRACE 416
#define L_BRACE 417
#define IN 418
#define ENDL 419
#define FLUSH 420
#define SETFILL 421
#define SETIOSFLAG 422
#define SETPRECISION 423
#define SETWUNSETIOSFLAG 424
#define FRAME 425
#define MAXINT 426
#define MESSAGEBOX 427
#define CONSTMUT 428
#define EXTERN 429
#define INTERN 430
#define NATIVE 431
#define OUT 432
#define SEALED 433
#define UNSAFE 434
#define METADATADATE 435
#define FROM 436
#define INTO 437
#define SHOWBASE 438
#define _NULL 439
#define NAME 440
#define SRC 441
#define NEW 442
#define NONE 443
#define DIALUP 444
#define DIGESTAUTH 445
#define NTAUTHORITY 446
#define NTDOMAIN 447
#define NTLMAUTH 448
#define TFOOT 449
#define PASS 450
#define IF 451
#define TRY 452
#define MAINPR 453
#define RESTRICTED 454
#define UNARYPLUS 455
#define DOT 456
#define SEMICOLON 457
#define AWAIT 458
#define PAUSE 459
#define L_PAR 460
#define R_PAR 461
#define PARAMS 462
#define PACKAGE 463
#define ORDER 464
#define SORT 465
#define ADDITION 466
#define ASSIGNMENTOPERATOR 467
#define CAPITALIZE 468
#define DOWNCASE 469
#define EMPTY 470
#define GSUB 471
#define UPCASE 472
#define PLUS 473
#define MINUS 474
#define MULT 475
#define DIV 476
#define OBJECT 477
#define RANDOM 478
#define RANDOMSEED 479
#define EQ 480
#define GT 481
#define LT 482
#define NOT 483
#define COMP 484
#define QUESTION 485
#define EQEQ 486
#define LTEQ 487
#define GTEQ 488
#define NOTEQ 489
#define ANDAND 490
#define OROR 491
#define PLUSPLUS 492
#define MINUSMINUS 493
#define AND 494
#define OR 495
#define XOR 496
#define MOD 497
#define LSHIFT 498
#define RSHIFT 499
#define URSHIFT 500
#define PLUSEQ 501
#define MINUSEQ 502
#define MULTEQ 503
#define DIVEQ 504
#define ANDEQ 505
#define OREQ 506
#define XOREQ 507
#define MODEQ 508
#define LSHIFTEQ 509
#define RSHIFTEQ 510
#define URSHIFTEQ 511
#define COMMA 512
#define PUBLIC 513
#define PRIVATE 514
#define PROTECTED 515
#define STATIC 516
#define FOREACH 517
#define SWITCH 518
#define DEFAULT 519
#define CASE 520
#define BREAK 521
#define VARCHAR 522
#define BIT 523
#define DATETIME 524
#define DECIMAL 525
#define MONEY 526
#define NUMERIC 527
#define REAL 528
#define SMALLINT 529
#define SMALLDATETIME 530
#define TINYINT 531
#define BINARY 532
#define VARBINARY 533
#define IMAGE 534
#define TEXT 535
#define INTEGER 536
#define WCHART 537
#define BOOL 538
#define LONGLONG 539
#define LONGDOUBLE 540
#define WIDECHAR 541
#define UNSIGNEDINT 542
#define UNSIGNEDLONG 543
#define STRING 544
#define STRINGUPPERCASE 545
#define BYTE 546
#define CHAR 547
#define INT 548
#define LONG 549
#define SHORT 550
#define DOUBLE 551
#define FLOAT 552
#define IDENTIFIER 553

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMERO = 3,                     /* NUMERO  */
  YYSYMBOL_OPEN = 4,                       /* OPEN  */
  YYSYMBOL_UPDATE = 5,                     /* UPDATE  */
  YYSYMBOL_ADD = 6,                        /* ADD  */
  YYSYMBOL_INSERT = 7,                     /* INSERT  */
  YYSYMBOL_WARNING = 8,                    /* WARNING  */
  YYSYMBOL_ALIGN = 9,                      /* ALIGN  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_ANALOGREAD = 11,                /* ANALOGREAD  */
  YYSYMBOL_ANALOGREFERENCE = 12,           /* ANALOGREFERENCE  */
  YYSYMBOL_ANALOGWRITE = 13,               /* ANALOGWRITE  */
  YYSYMBOL_DOCUMENTID = 14,                /* DOCUMENTID  */
  YYSYMBOL_FILETYPEFILETYPEEXTENSION = 15, /* FILETYPEFILETYPEEXTENSION  */
  YYSYMBOL_INSTANCEID = 16,                /* INSTANCEID  */
  YYSYMBOL_LINEARIZEDMIMETYPE = 17,        /* LINEARIZEDMIMETYPE  */
  YYSYMBOL_PAGECOUNT = 18,                 /* PAGECOUNT  */
  YYSYMBOL_PAGELAYOUTPDFVERSION = 19,      /* PAGELAYOUTPDFVERSION  */
  YYSYMBOL_TAGGEDPDF = 20,                 /* TAGGEDPDF  */
  YYSYMBOL_XMPTOOLKIT = 21,                /* XMPTOOLKIT  */
  YYSYMBOL_ARRAY = 22,                     /* ARRAY  */
  YYSYMBOL_NOTONE = 23,                    /* NOTONE  */
  YYSYMBOL_PULSEIN = 24,                   /* PULSEIN  */
  YYSYMBOL_SHIFTIN = 25,                   /* SHIFTIN  */
  YYSYMBOL_SHIFTOUT = 26,                  /* SHIFTOUT  */
  YYSYMBOL_TONE = 27,                      /* TONE  */
  YYSYMBOL_BOOL_LITERAL = 28,              /* BOOL_LITERAL  */
  YYSYMBOL_DEL = 29,                       /* DEL  */
  YYSYMBOL_CLOSE = 30,                     /* CLOSE  */
  YYSYMBOL_FINALLY = 31,                   /* FINALLY  */
  YYSYMBOL_ASYNC = 32,                     /* ASYNC  */
  YYSYMBOL_DO = 33,                        /* DO  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_CLASS = 36,                     /* CLASS  */
  YYSYMBOL_SQL = 37,                       /* SQL  */
  YYSYMBOL_COLOR = 38,                     /* COLOR  */
  YYSYMBOL_ADJUSTFIELD = 39,               /* ADJUSTFIELD  */
  YYSYMBOL_BASEFIELD = 40,                 /* BASEFIELD  */
  YYSYMBOL_FLOATFIELD = 41,                /* FLOATFIELD  */
  YYSYMBOL_AS = 42,                        /* AS  */
  YYSYMBOL_CROSSJOIN = 43,                 /* CROSSJOIN  */
  YYSYMBOL_DISTINCTEXCEPT = 44,            /* DISTINCTEXCEPT  */
  YYSYMBOL_FULLOUTERJOIN = 45,             /* FULLOUTERJOIN  */
  YYSYMBOL_JOIN = 46,                      /* JOIN  */
  YYSYMBOL_LIKE = 47,                      /* LIKE  */
  YYSYMBOL_WHEN = 48,                      /* WHEN  */
  YYSYMBOL_WHERE = 49,                     /* WHERE  */
  YYSYMBOL_BOOLEAN = 50,                   /* BOOLEAN  */
  YYSYMBOL_MATH = 51,                      /* MATH  */
  YYSYMBOL_MATH_E = 52,                    /* MATH_E  */
  YYSYMBOL_MATH_LN10 = 53,                 /* MATH_LN10  */
  YYSYMBOL_MATH_LN2 = 54,                  /* MATH_LN2  */
  YYSYMBOL_MATH_LOG10E = 55,               /* MATH_LOG10E  */
  YYSYMBOL_MATH_LOG2E = 56,                /* MATH_LOG2E  */
  YYSYMBOL_MATH_PIMATH_SQRT1 = 57,         /* MATH_PIMATH_SQRT1  */
  YYSYMBOL_MATH_SQRT2 = 58,                /* MATH_SQRT2  */
  YYSYMBOL_R_BRACKET = 59,                 /* R_BRACKET  */
  YYSYMBOL_L_BRACKET = 60,                 /* L_BRACKET  */
  YYSYMBOL_TBODY = 61,                     /* TBODY  */
  YYSYMBOL_GLOBAL = 62,                    /* GLOBAL  */
  YYSYMBOL_VAL = 63,                       /* VAL  */
  YYSYMBOL_VAR = 64,                       /* VAR  */
  YYSYMBOL_LET = 65,                       /* LET  */
  YYSYMBOL_FILL = 66,                      /* FILL  */
  YYSYMBOL_PRECISION = 67,                 /* PRECISION  */
  YYSYMBOL_BORDER = 68,                    /* BORDER  */
  YYSYMBOL_TD = 69,                        /* TD  */
  YYSYMBOL_TR = 70,                        /* TR  */
  YYSYMBOL_COLSPAN = 71,                   /* COLSPAN  */
  YYSYMBOL_GET = 72,                       /* GET  */
  YYSYMBOL_DIGITALREAD = 73,               /* DIGITALREAD  */
  YYSYMBOL_DIGITALWRITE = 74,              /* DIGITALWRITE  */
  YYSYMBOL_PINMODE = 75,                   /* PINMODE  */
  YYSYMBOL_COLON = 76,                     /* COLON  */
  YYSYMBOL_DEBUGGER = 77,                  /* DEBUGGER  */
  YYSYMBOL_TH = 78,                        /* TH  */
  YYSYMBOL_THEAD = 79,                     /* THEAD  */
  YYSYMBOL_CIN = 80,                       /* CIN  */
  YYSYMBOL_INPUT = 81,                     /* INPUT  */
  YYSYMBOL_PRINTLN = 82,                   /* PRINTLN  */
  YYSYMBOL_CHECKED = 83,                   /* CHECKED  */
  YYSYMBOL_LOOP = 84,                      /* LOOP  */
  YYSYMBOL_SETUP = 85,                     /* SETUP  */
  YYSYMBOL_ELIF = 86,                      /* ELIF  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_CATCH = 88,                     /* CATCH  */
  YYSYMBOL_EXCEPT = 89,                    /* EXCEPT  */
  YYSYMBOL_IOTA = 90,                      /* IOTA  */
  YYSYMBOL_ISNAN = 91,                     /* ISNAN  */
  YYSYMBOL_NAN = 92,                       /* NAN  */
  YYSYMBOL_RAISE = 93,                     /* RAISE  */
  YYSYMBOL_VOID = 94,                      /* VOID  */
  YYSYMBOL_CIRCLE = 95,                    /* CIRCLE  */
  YYSYMBOL_RECTANGLE = 96,                 /* RECTANGLE  */
  YYSYMBOL_SQUARE = 97,                    /* SQUARE  */
  YYSYMBOL_TRIANGLE = 98,                  /* TRIANGLE  */
  YYSYMBOL_FORMAT = 99,                    /* FORMAT  */
  YYSYMBOL_FONT = 100,                     /* FONT  */
  YYSYMBOL_FUN = 101,                      /* FUN  */
  YYSYMBOL_SQLCOMMAND = 102,               /* SQLCOMMAND  */
  YYSYMBOL_SQLCONNECTION = 103,            /* SQLCONNECTION  */
  YYSYMBOL_ABS = 104,                      /* ABS  */
  YYSYMBOL_ATN = 105,                      /* ATN  */
  YYSYMBOL_COS = 106,                      /* COS  */
  YYSYMBOL_DERIVED = 107,                  /* DERIVED  */
  YYSYMBOL_MATHEXP = 108,                  /* MATHEXP  */
  YYSYMBOL_FIX = 109,                      /* FIX  */
  YYSYMBOL_LOG = 110,                      /* LOG  */
  YYSYMBOL_RND = 111,                      /* RND  */
  YYSYMBOL_SGN = 112,                      /* SGN  */
  YYSYMBOL_SIN = 113,                      /* SIN  */
  YYSYMBOL_SQR = 114,                      /* SQR  */
  YYSYMBOL_TAN = 115,                      /* TAN  */
  YYSYMBOL_LAMBDA = 116,                   /* LAMBDA  */
  YYSYMBOL_CREATEDATE = 117,               /* CREATEDATE  */
  YYSYMBOL_DATE = 118,                     /* DATE  */
  YYSYMBOL_DATEVALUEDAY = 119,             /* DATEVALUEDAY  */
  YYSYMBOL_DAYS360 = 120,                  /* DAYS360  */
  YYSYMBOL_EDATE = 121,                    /* EDATE  */
  YYSYMBOL_HOUR = 122,                     /* HOUR  */
  YYSYMBOL_MINUTE = 123,                   /* MINUTE  */
  YYSYMBOL_MODIFYDATE = 124,               /* MODIFYDATE  */
  YYSYMBOL_MONTH = 125,                    /* MONTH  */
  YYSYMBOL_NETWORKDAYS = 126,              /* NETWORKDAYS  */
  YYSYMBOL_NOW = 127,                      /* NOW  */
  YYSYMBOL_SECOND = 128,                   /* SECOND  */
  YYSYMBOL_TIME = 129,                     /* TIME  */
  YYSYMBOL_TIMEVALUE = 130,                /* TIMEVALUE  */
  YYSYMBOL_TODAY = 131,                    /* TODAY  */
  YYSYMBOL_WEEKDAY = 132,                  /* WEEKDAY  */
  YYSYMBOL_WEEKNUMWORKDAY = 133,           /* WEEKNUMWORKDAY  */
  YYSYMBOL_YEAR = 134,                     /* YEAR  */
  YYSYMBOL_CLEARDEVICE = 135,              /* CLEARDEVICE  */
  YYSYMBOL_CLEARVIEWPORT = 136,            /* CLEARVIEWPORT  */
  YYSYMBOL_CLOSEGRAPH = 137,               /* CLOSEGRAPH  */
  YYSYMBOL_DETECTGRAPH = 138,              /* DETECTGRAPH  */
  YYSYMBOL_GETARCCOORDS = 139,             /* GETARCCOORDS  */
  YYSYMBOL_GETASPECTRAT = 140,             /* GETASPECTRAT  */
  YYSYMBOL_INHEREIT = 141,                 /* INHEREIT  */
  YYSYMBOL_CREATORTOOL = 142,              /* CREATORTOOL  */
  YYSYMBOL_LENGUAGE = 143,                 /* LENGUAGE  */
  YYSYMBOL_IDENT = 144,                    /* IDENT  */
  YYSYMBOL_IMPORT = 145,                   /* IMPORT  */
  YYSYMBOL_INCLUDE_ONCE = 146,             /* INCLUDE_ONCE  */
  YYSYMBOL_STYLE = 147,                    /* STYLE  */
  YYSYMBOL_FLAGS = 148,                    /* FLAGS  */
  YYSYMBOL_SETF = 149,                     /* SETF  */
  YYSYMBOL_DISABLE = 150,                  /* DISABLE  */
  YYSYMBOL_ENABLE = 151,                   /* ENABLE  */
  YYSYMBOL_HEIGHTHIDE = 152,               /* HEIGHTHIDE  */
  YYSYMBOL_LOCATION = 153,                 /* LOCATION  */
  YYSYMBOL_POINT = 154,                    /* POINT  */
  YYSYMBOL_SHOW = 155,                     /* SHOW  */
  YYSYMBOL_SIZE = 156,                     /* SIZE  */
  YYSYMBOL_RETURN = 157,                   /* RETURN  */
  YYSYMBOL_WITH = 158,                     /* WITH  */
  YYSYMBOL_INCLUDE = 159,                  /* INCLUDE  */
  YYSYMBOL_LIST = 160,                     /* LIST  */
  YYSYMBOL_R_BRACE = 161,                  /* R_BRACE  */
  YYSYMBOL_L_BRACE = 162,                  /* L_BRACE  */
  YYSYMBOL_IN = 163,                       /* IN  */
  YYSYMBOL_ENDL = 164,                     /* ENDL  */
  YYSYMBOL_FLUSH = 165,                    /* FLUSH  */
  YYSYMBOL_SETFILL = 166,                  /* SETFILL  */
  YYSYMBOL_SETIOSFLAG = 167,               /* SETIOSFLAG  */
  YYSYMBOL_SETPRECISION = 168,             /* SETPRECISION  */
  YYSYMBOL_SETWUNSETIOSFLAG = 169,         /* SETWUNSETIOSFLAG  */
  YYSYMBOL_FRAME = 170,                    /* FRAME  */
  YYSYMBOL_MAXINT = 171,                   /* MAXINT  */
  YYSYMBOL_MESSAGEBOX = 172,               /* MESSAGEBOX  */
  YYSYMBOL_CONSTMUT = 173,                 /* CONSTMUT  */
  YYSYMBOL_EXTERN = 174,                   /* EXTERN  */
  YYSYMBOL_INTERN = 175,                   /* INTERN  */
  YYSYMBOL_NATIVE = 176,                   /* NATIVE  */
  YYSYMBOL_OUT = 177,                      /* OUT  */
  YYSYMBOL_SEALED = 178,                   /* SEALED  */
  YYSYMBOL_UNSAFE = 179,                   /* UNSAFE  */
  YYSYMBOL_METADATADATE = 180,             /* METADATADATE  */
  YYSYMBOL_FROM = 181,                     /* FROM  */
  YYSYMBOL_INTO = 182,                     /* INTO  */
  YYSYMBOL_SHOWBASE = 183,                 /* SHOWBASE  */
  YYSYMBOL__NULL = 184,                    /* _NULL  */
  YYSYMBOL_NAME = 185,                     /* NAME  */
  YYSYMBOL_SRC = 186,                      /* SRC  */
  YYSYMBOL_NEW = 187,                      /* NEW  */
  YYSYMBOL_NONE = 188,                     /* NONE  */
  YYSYMBOL_DIALUP = 189,                   /* DIALUP  */
  YYSYMBOL_DIGESTAUTH = 190,               /* DIGESTAUTH  */
  YYSYMBOL_NTAUTHORITY = 191,              /* NTAUTHORITY  */
  YYSYMBOL_NTDOMAIN = 192,                 /* NTDOMAIN  */
  YYSYMBOL_NTLMAUTH = 193,                 /* NTLMAUTH  */
  YYSYMBOL_TFOOT = 194,                    /* TFOOT  */
  YYSYMBOL_PASS = 195,                     /* PASS  */
  YYSYMBOL_IF = 196,                       /* IF  */
  YYSYMBOL_TRY = 197,                      /* TRY  */
  YYSYMBOL_MAINPR = 198,                   /* MAINPR  */
  YYSYMBOL_RESTRICTED = 199,               /* RESTRICTED  */
  YYSYMBOL_UNARYPLUS = 200,                /* UNARYPLUS  */
  YYSYMBOL_DOT = 201,                      /* DOT  */
  YYSYMBOL_SEMICOLON = 202,                /* SEMICOLON  */
  YYSYMBOL_AWAIT = 203,                    /* AWAIT  */
  YYSYMBOL_PAUSE = 204,                    /* PAUSE  */
  YYSYMBOL_L_PAR = 205,                    /* L_PAR  */
  YYSYMBOL_R_PAR = 206,                    /* R_PAR  */
  YYSYMBOL_PARAMS = 207,                   /* PARAMS  */
  YYSYMBOL_PACKAGE = 208,                  /* PACKAGE  */
  YYSYMBOL_ORDER = 209,                    /* ORDER  */
  YYSYMBOL_SORT = 210,                     /* SORT  */
  YYSYMBOL_ADDITION = 211,                 /* ADDITION  */
  YYSYMBOL_ASSIGNMENTOPERATOR = 212,       /* ASSIGNMENTOPERATOR  */
  YYSYMBOL_CAPITALIZE = 213,               /* CAPITALIZE  */
  YYSYMBOL_DOWNCASE = 214,                 /* DOWNCASE  */
  YYSYMBOL_EMPTY = 215,                    /* EMPTY  */
  YYSYMBOL_GSUB = 216,                     /* GSUB  */
  YYSYMBOL_UPCASE = 217,                   /* UPCASE  */
  YYSYMBOL_PLUS = 218,                     /* PLUS  */
  YYSYMBOL_MINUS = 219,                    /* MINUS  */
  YYSYMBOL_MULT = 220,                     /* MULT  */
  YYSYMBOL_DIV = 221,                      /* DIV  */
  YYSYMBOL_OBJECT = 222,                   /* OBJECT  */
  YYSYMBOL_RANDOM = 223,                   /* RANDOM  */
  YYSYMBOL_RANDOMSEED = 224,               /* RANDOMSEED  */
  YYSYMBOL_EQ = 225,                       /* EQ  */
  YYSYMBOL_GT = 226,                       /* GT  */
  YYSYMBOL_LT = 227,                       /* LT  */
  YYSYMBOL_NOT = 228,                      /* NOT  */
  YYSYMBOL_COMP = 229,                     /* COMP  */
  YYSYMBOL_QUESTION = 230,                 /* QUESTION  */
  YYSYMBOL_EQEQ = 231,                     /* EQEQ  */
  YYSYMBOL_LTEQ = 232,                     /* LTEQ  */
  YYSYMBOL_GTEQ = 233,                     /* GTEQ  */
  YYSYMBOL_NOTEQ = 234,                    /* NOTEQ  */
  YYSYMBOL_ANDAND = 235,                   /* ANDAND  */
  YYSYMBOL_OROR = 236,                     /* OROR  */
  YYSYMBOL_PLUSPLUS = 237,                 /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 238,               /* MINUSMINUS  */
  YYSYMBOL_AND = 239,                      /* AND  */
  YYSYMBOL_OR = 240,                       /* OR  */
  YYSYMBOL_XOR = 241,                      /* XOR  */
  YYSYMBOL_MOD = 242,                      /* MOD  */
  YYSYMBOL_LSHIFT = 243,                   /* LSHIFT  */
  YYSYMBOL_RSHIFT = 244,                   /* RSHIFT  */
  YYSYMBOL_URSHIFT = 245,                  /* URSHIFT  */
  YYSYMBOL_PLUSEQ = 246,                   /* PLUSEQ  */
  YYSYMBOL_MINUSEQ = 247,                  /* MINUSEQ  */
  YYSYMBOL_MULTEQ = 248,                   /* MULTEQ  */
  YYSYMBOL_DIVEQ = 249,                    /* DIVEQ  */
  YYSYMBOL_ANDEQ = 250,                    /* ANDEQ  */
  YYSYMBOL_OREQ = 251,                     /* OREQ  */
  YYSYMBOL_XOREQ = 252,                    /* XOREQ  */
  YYSYMBOL_MODEQ = 253,                    /* MODEQ  */
  YYSYMBOL_LSHIFTEQ = 254,                 /* LSHIFTEQ  */
  YYSYMBOL_RSHIFTEQ = 255,                 /* RSHIFTEQ  */
  YYSYMBOL_URSHIFTEQ = 256,                /* URSHIFTEQ  */
  YYSYMBOL_COMMA = 257,                    /* COMMA  */
  YYSYMBOL_PUBLIC = 258,                   /* PUBLIC  */
  YYSYMBOL_PRIVATE = 259,                  /* PRIVATE  */
  YYSYMBOL_PROTECTED = 260,                /* PROTECTED  */
  YYSYMBOL_STATIC = 261,                   /* STATIC  */
  YYSYMBOL_FOREACH = 262,                  /* FOREACH  */
  YYSYMBOL_SWITCH = 263,                   /* SWITCH  */
  YYSYMBOL_DEFAULT = 264,                  /* DEFAULT  */
  YYSYMBOL_CASE = 265,                     /* CASE  */
  YYSYMBOL_BREAK = 266,                    /* BREAK  */
  YYSYMBOL_VARCHAR = 267,                  /* VARCHAR  */
  YYSYMBOL_BIT = 268,                      /* BIT  */
  YYSYMBOL_DATETIME = 269,                 /* DATETIME  */
  YYSYMBOL_DECIMAL = 270,                  /* DECIMAL  */
  YYSYMBOL_MONEY = 271,                    /* MONEY  */
  YYSYMBOL_NUMERIC = 272,                  /* NUMERIC  */
  YYSYMBOL_REAL = 273,                     /* REAL  */
  YYSYMBOL_SMALLINT = 274,                 /* SMALLINT  */
  YYSYMBOL_SMALLDATETIME = 275,            /* SMALLDATETIME  */
  YYSYMBOL_TINYINT = 276,                  /* TINYINT  */
  YYSYMBOL_BINARY = 277,                   /* BINARY  */
  YYSYMBOL_VARBINARY = 278,                /* VARBINARY  */
  YYSYMBOL_IMAGE = 279,                    /* IMAGE  */
  YYSYMBOL_TEXT = 280,                     /* TEXT  */
  YYSYMBOL_INTEGER = 281,                  /* INTEGER  */
  YYSYMBOL_WCHART = 282,                   /* WCHART  */
  YYSYMBOL_BOOL = 283,                     /* BOOL  */
  YYSYMBOL_LONGLONG = 284,                 /* LONGLONG  */
  YYSYMBOL_LONGDOUBLE = 285,               /* LONGDOUBLE  */
  YYSYMBOL_WIDECHAR = 286,                 /* WIDECHAR  */
  YYSYMBOL_UNSIGNEDINT = 287,              /* UNSIGNEDINT  */
  YYSYMBOL_UNSIGNEDLONG = 288,             /* UNSIGNEDLONG  */
  YYSYMBOL_STRING = 289,                   /* STRING  */
  YYSYMBOL_STRINGUPPERCASE = 290,          /* STRINGUPPERCASE  */
  YYSYMBOL_BYTE = 291,                     /* BYTE  */
  YYSYMBOL_CHAR = 292,                     /* CHAR  */
  YYSYMBOL_INT = 293,                      /* INT  */
  YYSYMBOL_LONG = 294,                     /* LONG  */
  YYSYMBOL_SHORT = 295,                    /* SHORT  */
  YYSYMBOL_DOUBLE = 296,                   /* DOUBLE  */
  YYSYMBOL_FLOAT = 297,                    /* FLOAT  */
  YYSYMBOL_IDENTIFIER = 298,               /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 299,                 /* $accept  */
  YYSYMBOL_program = 300,                  /* program  */
  YYSYMBOL_statement = 301,                /* statement  */
  YYSYMBOL_assignment = 302,               /* assignment  */
  YYSYMBOL_expr = 303,                     /* expr  */
  YYSYMBOL_IFComplete = 304,               /* IFComplete  */
  YYSYMBOL_IFSegment = 305,                /* IFSegment  */
  YYSYMBOL_ElseSegment = 306,              /* ElseSegment  */
  YYSYMBOL_CONDICION = 307,                /* CONDICION  */
  YYSYMBOL_FRAGMENTOCONDICION = 308,       /* FRAGMENTOCONDICION  */
  YYSYMBOL_OPRELACIONALBIN = 309,          /* OPRELACIONALBIN  */
  YYSYMBOL_OPLOGICOBIN = 310,              /* OPLOGICOBIN  */
  YYSYMBOL_TryComplete = 311,              /* TryComplete  */
  YYSYMBOL_TrySegment = 312,               /* TrySegment  */
  YYSYMBOL_CatchSegment = 313,             /* CatchSegment  */
  YYSYMBOL_ARGUMENTS = 314,                /* ARGUMENTS  */
  YYSYMBOL_ARGUMENT = 315,                 /* ARGUMENT  */
  YYSYMBOL_PARAMETERS = 316,               /* PARAMETERS  */
  YYSYMBOL_PARAMETER = 317,                /* PARAMETER  */
  YYSYMBOL_DECLARECLASS = 318,             /* DECLARECLASS  */
  YYSYMBOL_HERENCYSEGMENT = 319,           /* HERENCYSEGMENT  */
  YYSYMBOL_EXTENDSEGMENT = 320,            /* EXTENDSEGMENT  */
  YYSYMBOL_IMPLEMENTSEGMENT = 321,         /* IMPLEMENTSEGMENT  */
  YYSYMBOL_DECLAREFUNCTION = 322,          /* DECLAREFUNCTION  */
  YYSYMBOL_FUNCTIONRETURNTYPE = 323,       /* FUNCTIONRETURNTYPE  */
  YYSYMBOL_STATICMODIFIER = 324,           /* STATICMODIFIER  */
  YYSYMBOL_ACCESSMODIFIER = 325,           /* ACCESSMODIFIER  */
  YYSYMBOL_DATATYPE = 326,                 /* DATATYPE  */
  YYSYMBOL_DECLAREVARIABLE = 327,          /* DECLAREVARIABLE  */
  YYSYMBOL_DOLOOP = 328,                   /* DOLOOP  */
  YYSYMBOL_WHILELOOP = 329,                /* WHILELOOP  */
  YYSYMBOL_FORLOOP = 330,                  /* FORLOOP  */
  YYSYMBOL_FORSTATEMENTS = 331,            /* FORSTATEMENTS  */
  YYSYMBOL_UNARYARITMETICEXPR = 332,       /* UNARYARITMETICEXPR  */
  YYSYMBOL_LAMBDAFUNCTION = 333,           /* LAMBDAFUNCTION  */
  YYSYMBOL_DECLAREARRAY = 334,             /* DECLAREARRAY  */
  YYSYMBOL_ARRAYDIMENSIONS = 335,          /* ARRAYDIMENSIONS  */
  YYSYMBOL_FOREACHLOOP = 336,              /* FOREACHLOOP  */
  YYSYMBOL_LCUSTOM = 337,                  /* LCUSTOM  */
  YYSYMBOL_RCUSTOM = 338,                  /* RCUSTOM  */
  YYSYMBOL_SWITCHCONDITION = 339,          /* SWITCHCONDITION  */
  YYSYMBOL_SWITCHOPTIONS = 340,            /* SWITCHOPTIONS  */
  YYSYMBOL_ONLYCASEOPTIONS = 341,          /* ONLYCASEOPTIONS  */
  YYSYMBOL_DEFAULTSTATEMENT = 342,         /* DEFAULTSTATEMENT  */
  YYSYMBOL_CASESTATEMENT = 343,            /* CASESTATEMENT  */
  YYSYMBOL_LlamarFuncion = 344             /* LlamarFuncion  */
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
typedef yytype_uint8 yy_state_t;

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

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  70
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  299
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   553


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      41,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    55,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    72,    73,    74,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    87,    88,
      89,    90,    91,    93,    95,    96,    97,    99,   101,   103,
     105,   106,   108,   109,   111,   112,   113,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     130,   131,   133,   135,   137,   139,   141,   142,   144,   148,
     150,   151,   153,   155,   156,   158,   160,   161,   162,   163,
     164,   165,   167,   171
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMERO", "OPEN",
  "UPDATE", "ADD", "INSERT", "WARNING", "ALIGN", "CONTINUE", "ANALOGREAD",
  "ANALOGREFERENCE", "ANALOGWRITE", "DOCUMENTID",
  "FILETYPEFILETYPEEXTENSION", "INSTANCEID", "LINEARIZEDMIMETYPE",
  "PAGECOUNT", "PAGELAYOUTPDFVERSION", "TAGGEDPDF", "XMPTOOLKIT", "ARRAY",
  "NOTONE", "PULSEIN", "SHIFTIN", "SHIFTOUT", "TONE", "BOOL_LITERAL",
  "DEL", "CLOSE", "FINALLY", "ASYNC", "DO", "FOR", "WHILE", "CLASS", "SQL",
  "COLOR", "ADJUSTFIELD", "BASEFIELD", "FLOATFIELD", "AS", "CROSSJOIN",
  "DISTINCTEXCEPT", "FULLOUTERJOIN", "JOIN", "LIKE", "WHEN", "WHERE",
  "BOOLEAN", "MATH", "MATH_E", "MATH_LN10", "MATH_LN2", "MATH_LOG10E",
  "MATH_LOG2E", "MATH_PIMATH_SQRT1", "MATH_SQRT2", "R_BRACKET",
  "L_BRACKET", "TBODY", "GLOBAL", "VAL", "VAR", "LET", "FILL", "PRECISION",
  "BORDER", "TD", "TR", "COLSPAN", "GET", "DIGITALREAD", "DIGITALWRITE",
  "PINMODE", "COLON", "DEBUGGER", "TH", "THEAD", "CIN", "INPUT", "PRINTLN",
  "CHECKED", "LOOP", "SETUP", "ELIF", "ELSE", "CATCH", "EXCEPT", "IOTA",
  "ISNAN", "NAN", "RAISE", "VOID", "CIRCLE", "RECTANGLE", "SQUARE",
  "TRIANGLE", "FORMAT", "FONT", "FUN", "SQLCOMMAND", "SQLCONNECTION",
  "ABS", "ATN", "COS", "DERIVED", "MATHEXP", "FIX", "LOG", "RND", "SGN",
  "SIN", "SQR", "TAN", "LAMBDA", "CREATEDATE", "DATE", "DATEVALUEDAY",
  "DAYS360", "EDATE", "HOUR", "MINUTE", "MODIFYDATE", "MONTH",
  "NETWORKDAYS", "NOW", "SECOND", "TIME", "TIMEVALUE", "TODAY", "WEEKDAY",
  "WEEKNUMWORKDAY", "YEAR", "CLEARDEVICE", "CLEARVIEWPORT", "CLOSEGRAPH",
  "DETECTGRAPH", "GETARCCOORDS", "GETASPECTRAT", "INHEREIT", "CREATORTOOL",
  "LENGUAGE", "IDENT", "IMPORT", "INCLUDE_ONCE", "STYLE", "FLAGS", "SETF",
  "DISABLE", "ENABLE", "HEIGHTHIDE", "LOCATION", "POINT", "SHOW", "SIZE",
  "RETURN", "WITH", "INCLUDE", "LIST", "R_BRACE", "L_BRACE", "IN", "ENDL",
  "FLUSH", "SETFILL", "SETIOSFLAG", "SETPRECISION", "SETWUNSETIOSFLAG",
  "FRAME", "MAXINT", "MESSAGEBOX", "CONSTMUT", "EXTERN", "INTERN",
  "NATIVE", "OUT", "SEALED", "UNSAFE", "METADATADATE", "FROM", "INTO",
  "SHOWBASE", "_NULL", "NAME", "SRC", "NEW", "NONE", "DIALUP",
  "DIGESTAUTH", "NTAUTHORITY", "NTDOMAIN", "NTLMAUTH", "TFOOT", "PASS",
  "IF", "TRY", "MAINPR", "RESTRICTED", "UNARYPLUS", "DOT", "SEMICOLON",
  "AWAIT", "PAUSE", "L_PAR", "R_PAR", "PARAMS", "PACKAGE", "ORDER", "SORT",
  "ADDITION", "ASSIGNMENTOPERATOR", "CAPITALIZE", "DOWNCASE", "EMPTY",
  "GSUB", "UPCASE", "PLUS", "MINUS", "MULT", "DIV", "OBJECT", "RANDOM",
  "RANDOMSEED", "EQ", "GT", "LT", "NOT", "COMP", "QUESTION", "EQEQ",
  "LTEQ", "GTEQ", "NOTEQ", "ANDAND", "OROR", "PLUSPLUS", "MINUSMINUS",
  "AND", "OR", "XOR", "MOD", "LSHIFT", "RSHIFT", "URSHIFT", "PLUSEQ",
  "MINUSEQ", "MULTEQ", "DIVEQ", "ANDEQ", "OREQ", "XOREQ", "MODEQ",
  "LSHIFTEQ", "RSHIFTEQ", "URSHIFTEQ", "COMMA", "PUBLIC", "PRIVATE",
  "PROTECTED", "STATIC", "FOREACH", "SWITCH", "DEFAULT", "CASE", "BREAK",
  "VARCHAR", "BIT", "DATETIME", "DECIMAL", "MONEY", "NUMERIC", "REAL",
  "SMALLINT", "SMALLDATETIME", "TINYINT", "BINARY", "VARBINARY", "IMAGE",
  "TEXT", "INTEGER", "WCHART", "BOOL", "LONGLONG", "LONGDOUBLE",
  "WIDECHAR", "UNSIGNEDINT", "UNSIGNEDLONG", "STRING", "STRINGUPPERCASE",
  "BYTE", "CHAR", "INT", "LONG", "SHORT", "DOUBLE", "FLOAT", "IDENTIFIER",
  "$accept", "program", "statement", "assignment", "expr", "IFComplete",
  "IFSegment", "ElseSegment", "CONDICION", "FRAGMENTOCONDICION",
  "OPRELACIONALBIN", "OPLOGICOBIN", "TryComplete", "TrySegment",
  "CatchSegment", "ARGUMENTS", "ARGUMENT", "PARAMETERS", "PARAMETER",
  "DECLARECLASS", "HERENCYSEGMENT", "EXTENDSEGMENT", "IMPLEMENTSEGMENT",
  "DECLAREFUNCTION", "FUNCTIONRETURNTYPE", "STATICMODIFIER",
  "ACCESSMODIFIER", "DATATYPE", "DECLAREVARIABLE", "DOLOOP", "WHILELOOP",
  "FORLOOP", "FORSTATEMENTS", "UNARYARITMETICEXPR", "LAMBDAFUNCTION",
  "DECLAREARRAY", "ARRAYDIMENSIONS", "FOREACHLOOP", "LCUSTOM", "RCUSTOM",
  "SWITCHCONDITION", "SWITCHOPTIONS", "ONLYCASEOPTIONS",
  "DEFAULTSTATEMENT", "CASESTATEMENT", "LlamarFuncion", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-290)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      18,  -290,  -289,  -145,  -184,  -182,  -290,     1,  -136,    34,
    -290,  -290,  -290,  -270,     4,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,  -180,    30,     0,
    -158,  -290,   -45,  -290,   -28,  -290,  -290,   -34,  -237,  -140,
    -139,  -290,  -290,  -133,  -290,  -131,  -290,  -290,  -290,  -147,
      18,  -219,     1,  -290,  -290,     4,     4,  -290,   114,     7,
    -159,    18,  -119,  -205,  -126,   -70,     4,     4,  -290,  -290,
    -290,  -290,  -290,     1,     7,  -290,     4,  -290,  -204,  -290,
     -40,  -120,  -290,  -290,  -290,  -290,    93,   -55,  -118,   -94,
     -89,   -88,  -109,  -154,     4,     4,     2,     4,  -290,  -290,
    -290,  -290,  -290,  -290,     4,     4,   -96,    18,  -290,  -290,
    -290,     1,   -37,  -117,  -132,  -100,  -209,  -172,   -78,  -105,
       7,    18,   -31,  -212,  -290,  -163,  -290,     4,  -121,  -290,
     103,     1,   -23,   -22,  -290,  -290,  -206,  -206,     4,   -98,
     -98,  -105,  -105,  -290,   -74,  -290,  -290,     7,    34,  -290,
    -152,     7,   144,   -74,  -112,  -209,     4,  -290,   -46,    18,
     -74,    18,   -69,  -134,     3,  -290,  -290,   -38,  -105,    93,
     -35,   -33,    18,    18,   -98,    90,  -290,    18,  -130,     7,
      18,     7,  -290,  -290,  -112,  -290,  -172,  -290,   -74,  -290,
      10,  -125,  -290,    18,    34,  -290,     1,  -219,    13,    15,
    -290,   -74,  -132,    18,   -87,    18,  -290,  -290,   -45,  -290,
    -290,    16,   -26,   -24,  -290,  -290,  -290,  -290,  -290,   -74,
     -19,   -82,  -290,  -290,    24,  -290,  -290,   -74,   -13,    18,
    -290,   -74,    17,  -290,  -290
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    18,     0,     0,     0,     0,    79,     0,     0,    60,
      74,    75,    76,     0,     0,    80,    88,    89,    86,    87,
      83,    82,    77,    78,    81,    84,    85,     0,     0,     0,
       0,     5,    35,     6,    49,     9,     7,    73,     0,     0,
       0,    11,    12,     0,    14,     0,    16,    17,    19,     0,
       0,     0,     0,    27,    38,     0,     0,    28,     0,     0,
      36,     0,     0,     0,     0,     0,    55,     0,    96,    97,
       1,     3,     4,     0,     0,    31,    55,    50,     0,    72,
       0,    90,     8,    10,    13,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    42,
      40,    43,    45,    41,     0,     0,     0,     0,    46,    47,
      48,     0,     0,     0,    58,     0,   108,    53,     0,    20,
       0,     0,     0,    66,    70,     0,    71,     0,   100,    99,
       0,     0,     0,     0,    26,    30,    21,    22,     0,    23,
      24,    25,    39,   103,     0,    37,    51,     0,     0,    59,
       0,     0,     0,     0,   110,   108,     0,    54,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    91,     0,
       0,     0,     0,     0,    29,     0,    32,     0,     0,     0,
       0,     0,   105,   107,   110,   106,    56,   113,     0,    34,
       0,     0,    67,     0,    60,   101,     0,     0,     0,     0,
     104,     0,    61,     0,     0,     0,   109,    57,    35,    52,
      68,     0,     0,     0,    95,    94,    93,    98,    62,     0,
       0,     0,    33,    63,     0,    92,   102,     0,     0,     0,
     111,     0,     0,   112,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,   -18,  -290,   -39,    25,  -290,  -290,   -17,   -36,  -290,
    -290,  -290,  -290,  -290,  -290,   116,     8,    -4,    -9,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,    -6,  -290,  -290,
    -290,  -290,  -290,  -290,  -290,  -290,    26,  -290,   -47,  -129,
    -290,    43,    19,  -290,  -146,  -290
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    28,    29,    30,    58,    31,    32,    75,    59,    60,
     105,   111,    33,    34,    77,   118,   157,    62,   149,    35,
     164,   165,   166,    36,   125,    80,    37,    38,    39,    40,
      41,    42,    90,    43,    44,    45,   129,    46,   107,   176,
      47,   153,   183,   154,   155,    48
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      -2,     1,    78,    63,    53,    53,   106,    53,   184,    49,
       6,    71,    89,   162,    96,    97,    91,    50,   116,     1,
     163,    51,     2,    52,   182,    66,    61,   121,    64,    54,
      70,   189,    87,     3,     4,     5,   104,   120,   184,    65,
       2,    73,    74,   112,    72,    67,    94,    95,    96,    97,
       6,     3,     4,     5,   124,   151,   152,    68,    69,   208,
      76,    81,    82,    83,    94,    95,    96,    97,     6,    84,
     104,    85,   217,   159,   126,   145,   108,   109,    86,    88,
      92,    93,   110,   106,     6,   156,   135,   113,   104,   144,
     226,   117,   119,   114,   123,   171,   128,   134,   230,   115,
     177,   117,   233,   160,   180,   127,   130,    67,   131,    94,
      95,    96,    97,    94,    95,    96,    97,   132,   133,   136,
     137,   139,   140,   143,   146,   148,   150,   147,   158,   141,
     142,   161,   203,   104,   205,   167,   169,   104,   170,   172,
     173,   188,   178,   190,   104,   175,   179,   181,    94,    95,
      96,    97,   168,   152,   198,   199,   187,   191,   214,   201,
     213,    -2,   204,   174,   192,   193,   200,   194,   202,   197,
     196,   209,   104,   210,   215,   211,   216,   223,   234,   220,
     224,   186,   225,   227,   228,   219,   229,   221,    63,   231,
     212,   222,   122,   218,   207,   195,     7,     8,   185,     0,
       0,     0,     0,   206,     0,     9,    55,    55,     0,    55,
       0,   232,     0,     0,     7,     8,     0,     0,     0,    -2,
       0,     0,   138,     9,     0,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    56,    56,    15,    56,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    10,    11,
      12,     0,    13,    14,     0,     0,    -2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    57,
      57,    15,    57,     0,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    15,     0,     0,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    94,    95,    96,    97,     0,     0,     0,     0,
      98,    99,     0,     0,     0,   100,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,   104
};

static const yytype_int16 yycheck[] =
{
       0,     1,    36,     9,     3,     3,    76,     3,   154,   298,
      50,    29,    51,   225,   220,   221,    52,   162,    65,     1,
     232,   205,    22,   205,   153,   205,   162,    74,   298,    28,
       0,   160,    50,    33,    34,    35,   242,    73,   184,    14,
      22,    86,    87,    61,   202,   225,   218,   219,   220,   221,
      50,    33,    34,    35,    94,   264,   265,   237,   238,   188,
      88,   298,   202,   202,   218,   219,   220,   221,    50,   202,
     242,   202,   201,   120,    80,   111,   235,   236,   225,   298,
      55,    56,   241,    76,    50,   257,   240,   206,   242,   107,
     219,    66,    67,   298,   298,   131,     3,   206,   227,   225,
     147,    76,   231,   121,   151,   225,   161,   225,   202,   218,
     219,   220,   221,   218,   219,   220,   221,   206,   206,    94,
      95,    96,    97,   219,   161,   257,   226,   244,   206,   104,
     105,   162,   179,   242,   181,   298,   257,   242,    35,   162,
     162,   159,   148,   161,   242,   219,   298,     3,   218,   219,
     220,   221,   127,   265,   172,   173,   202,   226,   197,   177,
     196,   161,   180,   138,   298,   162,    76,   205,   298,   202,
     205,   161,   242,   298,   161,   193,   161,   161,   161,   266,
     206,   156,   206,   202,   266,   203,   162,   205,   194,   202,
     194,   208,    76,   202,   186,   169,   196,   197,   155,    -1,
      -1,    -1,    -1,   184,    -1,   205,   205,   205,    -1,   205,
      -1,   229,    -1,    -1,   196,   197,    -1,    -1,    -1,   219,
      -1,    -1,   220,   205,    -1,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   240,   283,   240,    -1,    -1,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   258,   259,
     260,    -1,   262,   263,    -1,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   258,   259,   260,    -1,
     262,   263,    -1,   283,    -1,    -1,    -1,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   298,
     298,   283,   298,    -1,    -1,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   283,    -1,    -1,
      -1,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,   227,    -1,    -1,    -1,   231,   232,   233,   234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     1,    22,    33,    34,    35,    50,   196,   197,   205,
     258,   259,   260,   262,   263,   283,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   300,   301,
     302,   304,   305,   311,   312,   318,   322,   325,   326,   327,
     328,   329,   330,   332,   333,   334,   336,   339,   344,   298,
     162,   205,   205,     3,    28,   205,   240,   298,   303,   307,
     308,   162,   316,   326,   298,   303,   205,   225,   237,   238,
       0,   300,   202,    86,    87,   306,    88,   313,    36,   261,
     324,   298,   202,   202,   202,   202,   225,   300,   298,   302,
     331,   307,   303,   303,   218,   219,   220,   221,   226,   227,
     231,   232,   233,   234,   242,   309,    76,   337,   235,   236,
     241,   310,   300,   206,   298,   225,   337,   303,   314,   303,
     307,   337,   314,   298,    94,   323,   326,   225,     3,   335,
     161,   202,   206,   206,   206,   240,   303,   303,   220,   303,
     303,   303,   303,   219,   300,   307,   161,   244,   257,   317,
     226,   264,   265,   340,   342,   343,   257,   315,   206,   337,
     300,   162,   225,   232,   319,   320,   321,   298,   303,   257,
      35,   307,   162,   162,   303,   219,   338,   337,   326,   298,
     337,     3,   338,   341,   343,   340,   303,   202,   300,   338,
     300,   226,   298,   162,   205,   335,   205,   202,   300,   300,
      76,   300,   298,   337,   300,   337,   341,   315,   338,   161,
     298,   300,   316,   307,   302,   161,   161,   338,   317,   300,
     266,   300,   306,   161,   206,   206,   338,   202,   266,   162,
     338,   202,   300,   338,   161
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   299,   300,   300,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     302,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   304,   305,   306,   306,   306,   307,   307,   307,   308,
     309,   309,   309,   309,   309,   309,   310,   310,   310,   311,
     311,   312,   313,   314,   314,   314,   315,   315,   316,   316,
     316,   317,   317,   318,   319,   319,   319,   320,   321,   322,
     323,   323,   324,   324,   325,   325,   325,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     327,   327,   328,   329,   330,   331,   332,   332,   333,   334,
     335,   335,   336,   337,   338,   339,   340,   340,   340,   341,
     341,   342,   343,   344
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     4,
       3,     2,     5,     6,     4,     0,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     5,     1,     2,     0,     2,     3,     2,     3,
       0,     3,     4,     7,     1,     1,     0,     2,     3,    10,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     8,     7,     7,     5,     2,     2,     7,     4,
       1,     3,     8,     2,     2,     5,     2,     2,     0,     2,
       0,     6,     7,     5
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 2301 "y.tab.c"

      default: break;
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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 172 "sintactico.y"

int main(int argc, char* *argv){
    /* yydebug = 1; */
    char ch,c;
    FILE *f;    
    if(argc != 2) {
        printf("Uso: archivo de entrada\n"); 
        exit(1);
    }
    if( !(yyin = fopen(argv[1],"r")) ){ 
        printf("No se puede abrir el archivo\n");
        exit(1);
    }
    yyparse();
    printf("Compilacion exitosa\n");
}

void yyerror(char const *s){
    fprintf(stderr,"error: %s in line %d\n", s, yylineno);
    exit(1);
}

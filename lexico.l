%{
    #include <stdio.h>
    #include "y.tab.h"
    void yyerror(char const *);
%}

%option noyywrap
%option yylineno

%%
[0-9]+                                                  {return NUMERO;}
"open"                                                  {return OPEN;}
"UPDATE"                                                {return UPDATE;}
"add"                                                   {return ADD;}
"INSERT"                                                {return INSERT;}
"warning"                                               {return WARNING;}
"align"                                                 {return ALIGN;}
"continue"                                              {return CONTINUE;}
"analogread"                                            {return ANALOGREAD;}
"analogreference"                                       {return ANALOGREFERENCE;}
"analogwrite"           {return ANALOGWRITE;}
"DocumentID"    {return DOCUMENTID;}
"FiletypeFiletypeextension"    {return FILETYPEFILETYPEEXTENSION;}
"InstanceID"    {return INSTANCEID;}
"LinearizedMIMEType"    {return LINEARIZEDMIMETYPE;}
"PageCount"    {return PAGECOUNT;}
"PageLayoutPDFVersion"    {return PAGELAYOUTPDFVERSION;}
"TaggedPDF"    {return TAGGEDPDF;}
"XMPToolkit"     {return XMPTOOLKIT;}
"array"                                            {return ARRAY;}
"notone"    {return NOTONE;}
"pulsein"    {return PULSEIN;}
"shiftin"    {return SHIFTIN;}
"shiftout"    {return SHIFTOUT;}
"tone"            {return TONE;}
"false"    {return BOOL_LITERAL;}
"true"                                       {return BOOL_LITERAL;}
"del"                                             {return DEL;}
"close"    {return CLOSE;}
"finally"                                  {return FINALLY;}
"async"    {return ASYNC;}
"do"    {return DO;}
"for"    {return FOR;}
"while"                            {return WHILE;}
"class"    {return CLASS;}
"sql"                                    {return SQL;}
"color"                                        {return COLOR;}
"adjustfield"    {return ADJUSTFIELD;}
"basefield"    {return BASEFIELD;}
"floatfield"            {return FLOATFIELD;}
"as"                                          {return AS;}
"CROSSJOIN"    {return CROSSJOIN;}
"DISTINCTEXCEPT"    {return DISTINCTEXCEPT;}
"FULLOUTERJOIN"    {return FULLOUTERJOIN;}
"JOIN"     {return JOIN;}
"LIKE"    {return LIKE;}
"when"    {return WHEN;}
"WHERE"                             {return WHERE;}
"boolean"                                {return BOOLEAN;}
"Math.E"    {return MATH_E;}
"Math.LN10"    {return MATH_LN10;}
"Math.LN2"    {return MATH_LN2;}
"Math.LOG10E"    {return MATH_LOG10E;}
"Math.LOG2E"    {return MATH_LOG2E;}
"Math.PIMath.SQRT1"    {return MATH_PIMATH_SQRT1;}
"Math.SQRT2"     {return MATH_SQRT2;}
"," {return COMMA;}
"public"        {return PUBLIC;}
"private"       {return PRIVATE;}
"protected"     {return PROTECTED;}
\]                                      {return R_BRACKET;}
\[                                      {return L_BRACKET;}
"tbody"                                  {return TBODY;}
"global"    {return GLOBAL;}
"val"    {return VAL;}
"var"                        {return VAR;}
"let"                                  {return LET;}
"fill"    {return FILL;}
"precision"               {return PRECISION;}
"border"                    {return BORDER;}
"td"                       {return TD;}
"tr"                      {return TR;}
"colspan"                {return COLSPAN;}
"get"                    {return GET;}
"digitalread"    {return DIGITALREAD;}
"digitalwrite"    {return DIGITALWRITE;}
"pinmode"     {return PINMODE;}
":"                                  {return COLON;}
"debugger"                         {return DEBUGGER;}
"th"                             {return TH;}
"thead"                        {return THEAD;}
"cin"    {return CIN;}
"input"    {return INPUT;}
"println"          {return PRINTLN;}
"checked"                 {return CHECKED;}
"loop"    {return LOOP;}
"setup"            {return SETUP;}
"elif"    {return ELIF;}
"else"    {return ELSE;}
"catch"    {return CATCH;}
"except"     {return EXCEPT;}
"iota"    {return IOTA;}
"isNaN"    {return ISNAN;}
"NaN"    {return NAN;}
"raise"     {return RAISE;}
"void"                  {return VOID;}
"circle"    {return CIRCLE;}
"rectangle"    {return RECTANGLE;}
"square"    {return SQUARE;}
"triangle"     {return TRIANGLE;}
"format"                           {return FORMAT;}
"font"                           {return FONT;}
"fun"    {return FUN;}
"SQLCommand"    {return SQLCOMMAND;}
"SQLConnection"     {return SQLCONNECTION;}
"Abs"    {return ABS;}
"Atn"    {return ATN;}
"Cos"    {return COS;}
"Derived"    {return DERIVED;}
"mathExp"    {return MATHEXP;}
"Fix"    {return FIX;}
"Log"    {return LOG;}
"Rnd"    {return RND;}
"Sgn"    {return SGN;}
"Sin"    {return SIN;}
"Sqr"    {return SQR;}
"Tan"     {return TAN;}
"lambda"     {return LAMBDA;}
"CreateDate"    {return CREATEDATE;}
"DATE"    {return DATE;}
"DATEVALUEDAY"    {return DATEVALUEDAY;}
"DAYS360"    {return DAYS360;}
"EDATE"    {return EDATE;}
"HOUR"    {return HOUR;}
"MINUTE"    {return MINUTE;}
"ModifyDate"    {return MODIFYDATE;}
"MONTH"    {return MONTH;}
"NETWORKDAYS"    {return NETWORKDAYS;}
"Now"    {return NOW;}
"SECOND"    {return SECOND;}
"TIME"    {return TIME;}
"TIMEVALUE"    {return TIMEVALUE;}
"TODAY"    {return TODAY;}
"WEEKDAY"    {return WEEKDAY;}
"WEEKNUMWORKDAY"    {return WEEKNUMWORKDAY;}
"YEAR"     {return YEAR;}
"cleardevice"    {return CLEARDEVICE;}
"clearviewport"    {return CLEARVIEWPORT;}
"closegraph"    {return CLOSEGRAPH;}
"detectgraph"    {return DETECTGRAPH;}
"getarccoords"    {return GETARCCOORDS;}
"getaspectrat"     {return GETASPECTRAT;}
"inhereit"     {return INHEREIT;}
"creatorTool"     {return CREATORTOOL;}
"lenguage"     {return LENGUAGE;}
"ident"     {return IDENT;}
"import"     {return IMPORT;}
"include_once"     {return INCLUDE_ONCE;}
"style"     {return STYLE;}
"flags"    {return FLAGS;}
"setf"     {return SETF;}
"Disable"    {return DISABLE;}
"Enable"    {return ENABLE;}
"HeightHide"    {return HEIGHTHIDE;}
"Location"    {return LOCATION;}
"Point"    {return POINT;}
"Show"    {return SHOW;}
"Size"     {return SIZE;}
"return"    {return RETURN;}
"with"     {return WITH;}
"include"     {return INCLUDE;}
"list"     {return LIST;}
\}     {return R_BRACE;}
\{    {return L_BRACE;}
"in"     {return IN;}
"endl"    {return ENDL;}
"flush"    {return FLUSH;}
"setfill"    {return SETFILL;}
"setiosflag"    {return SETIOSFLAG;}
"setprecision"    {return SETPRECISION;}
"setwunsetiosflag"     {return SETWUNSETIOSFLAG;}
"frame"     {return FRAME;}
"maxint"     {return MAXINT;}
"messagebox"     {return MESSAGEBOX;}
"constmut"     {return CONSTMUT;}
"extern"    {return EXTERN;}
"intern"    {return INTERN;}
"native"    {return NATIVE;}
"out"    {return OUT;}
"sealed"    {return SEALED;}
"unsafe"     {return UNSAFE;}
"MetadataDate"     {return METADATADATE;}
"FROM"    {return FROM;}
"INTO"    {return INTO;}
"showbase"     {return SHOWBASE;}
"null"                {return _NULL;}
"name"     {return NAME;}
"src"     {return SRC;}
"new"     {return NEW;}
"none"     {return NONE;}
"DIALUP"    {return DIALUP;}
"DIGESTAUTH"    {return DIGESTAUTH;}
"NTAUTHORITY"    {return NTAUTHORITY;}
"NTDOMAIN"    {return NTDOMAIN;}
"NTLMAUTH"                                      {return NTLMAUTH;}
"tfoot"                                               {return TFOOT;}
"pass"                                            {return PASS;}
"if"    {return IF;}
"try"                                             {return TRY;}
"Mainpr"                                           {return MAINPR;}
"RESTRICTED"                                            {return RESTRICTED;}
"unaryPlus"                                             {return UNARYPLUS;}
\.                                                {return DOT;}
\;                                           {return SEMICOLON;}
"Await"    {return AWAIT;}
"pause"                                      {return PAUSE;}
\(                                              {return L_PAR;}
\)                                               {return R_PAR;}
"params"     {return PARAMS;}
"package"     {return PACKAGE;}
"order"    {return ORDER;}
"sort"     {return SORT;}
"addition"    {return ADDITION;}
"assignmentoperator"     {return ASSIGNMENTOPERATOR;}
"Capitalize"    {return CAPITALIZE;}
"Downcase"    {return DOWNCASE;}
"Empty"    {return EMPTY;}
"gsub"    {return GSUB;}
"Upcase"     {return UPCASE;}
\+    {return PLUS;}
\-    {return MINUS;}
\*    {return MULT;}
\/     {return DIV;}
"object"     {return OBJECT;}
"random"    {return RANDOM;}
"randomseed" {return RANDOMSEED;}
"static" {return STATIC;}
"foreach" {return FOREACH;}
"switch" {return SWITCH;}
"default"   {return DEFAULT;}
"case"  {return CASE;}
"break"  {return BREAK;}

"varchar"                       { return VARCHAR; }
"bit"                       { return BIT; }
"datetime"                      { return DATETIME; }
"decimal"                       { return DECIMAL; }
"money"                     { return MONEY; }
"numeric"                       { return NUMERIC; }
"real"                      { return REAL; }
"smallint"                      { return SMALLINT; }
"smalldatetime"                     { return SMALLDATETIME; }
"tinyint"                       { return TINYINT; }
"binary"                        { return BINARY; }
"varbinary"                     { return VARBINARY; }
"image"                     { return IMAGE; }
"text"                      { return TEXT; }
"integer"                       { return INTEGER; }
"wchart"                        { return WCHART; }
"bool"                      { return BOOL; }
"long long"                     { return LONGLONG; }
"long double"                       { return LONGDOUBLE; }
"widechar"                      { return WIDECHAR; }
"unsigned int"                      { return UNSIGNEDINT; }
"unsigned long"                     { return UNSIGNEDLONG; }
"String"                        { return STRINGUPPERCASE; }
"string"                        { return STRING; }
"byte"                         { return BYTE; }
"char"                         { return CHAR; }
"int"                          { return INT; }
"long"                         { return LONG; }
"short"                         {return SHORT;}
"double"                        {return DOUBLE;}
"float"                     {return FLOAT;}
\=                            { return EQ; }
\>                            { return GT; }
\<                            { return LT; }
\!                            { return NOT; }
\~                            { return COMP; }
\?                            { return QUESTION; }
\=\=                          { return EQEQ; }
\<\=                           { return LTEQ; }
\>\=                           { return GTEQ; }
\!\=                           { return NOTEQ; }
\&\&                           { return ANDAND; }
\|\|                           { return OROR; }
\+\+                           { return PLUSPLUS; }
\-\-                           { return MINUSMINUS; }
\&                            { return AND; }
\|                            { return OR; }
\^                            { return XOR; }
\%                            { return MOD; }
\<\<                           { return LSHIFT; }
\>\>                           { return RSHIFT; }
\>\>\>                          { return URSHIFT; }
\+\=                           { return PLUSEQ; }
\-\=                           { return MINUSEQ; }
\*\=                           { return MULTEQ; }
\/\=                           { return DIVEQ; }
\&\=                           { return ANDEQ; }
\|\=                           { return OREQ; }
\^\=                           { return XOREQ; }
\%\=                           { return MODEQ; }
\<\<\=                          { return LSHIFTEQ; }
\>\>\=                          { return RSHIFTEQ; }
\>\>\>\=                         { return URSHIFTEQ; }

[[:space:]]+  { /* ignorar espacios en blanco */ }
[a-zA-Z][0-9a-zA-Z_]*  { return IDENTIFIER;}
.    yyerror("Caracter invalido");

<<EOF>> {yyterminate();}
%%
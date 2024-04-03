grammar CPPONGrammar;

WS : [ \t\r\n]+ -> skip;

IDENTIFIER : [A-Za-z_][A-Za-z0-9_]*;
REFERENCE : '&';
EQUALS : '=';
SEMI : ';';
COLON : ':';
SET : '.set';
X3DNODESET : '.X3DNode::set';
ADD : '.add';
WHOLE: [0-9]+;
FLOAT : [-+]?([0-9]+[.]?|[0-9]*[.][0-9]+)([eE][-+]?[0-9]+)?;
BOOLEAN : 'true' | 'false';
COMMENT : '//' ~[\r\n]* -> skip;
OPENBRACKET : '[';
CLOSEBRACKET : ']';
QUOTE : ['];
AT : [@];

nonnegative : '+'? WHOLE;
negative : '-' WHOLE;

type : IDENTIFIER | 'CString' | 'bool' | 'int' | 'int32_t' | 'float' | 'double';
field : IDENTIFIER; // field of node or statement, TODO get list from X3DUOM

variable : IDENTIFIER WHOLE?; // TODO IDENTIFIER is a list of concrete types and statements from X3DUOM

string : '"' ( 'https://' | 'http://' | '*' | '!' | '?' | AT | QUOTE | '~' | '#' | '/' ~('/') | '\\"' | '\\' | '.' | ~'"' )*? '"';

cstring : 'CString' '(' string ')';

integer : nonnegative | negative;

boolean_list : BOOLEAN (',' boolean_list)*;
integer_list : integer (',' integer_list)*;
float_list : FLOAT (',' float_list)*;
string_list : cstring (',' string_list)*;

list : boolean_list | integer_list | float_list | string_list;

construct_array : 'new ' type OPENBRACKET WHOLE CLOSEBRACKET '{'  list '}';

parameters : (cstring | BOOLEAN | WHOLE (',' construct_array)? | FLOAT | construct_array (',' WHOLE)? | REFERENCE? variable);

operator : (EQUALS | X3DNODESET | SET | ADD );

funccall : variable operator IDENTIFIER '(' parameters? ')';

constructor : type REFERENCE? funccall;

set_field : funccall;
add_field : funccall;

line : (constructor | set_field | add_field) SEMI;

lines : line*;

x3d : lines EOF;

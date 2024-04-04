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
SENTINEL : '-1';
FLOAT : [-+]?([0-9]+[.]?|[0-9]*[.][0-9]+)([eE][-+]?[0-9]+)?;
TRUE : [Tt][Rr][Uu][Ee];
FALSE : [Ff][Aa][Ll][Ss][Ee];
COMMENT : '//' ~[\r\n]* -> skip;
OPENBRACKET : '[';
CLOSEBRACKET : ']';
QUOTE : ['];
AT : [@];

type : IDENTIFIER | 'CString' | 'bool' | 'int' | 'int32_t' | 'float' | 'double';
field : IDENTIFIER; // field of node or statement, TODO get list from X3DUOM

variable : IDENTIFIER WHOLE?; // TODO IDENTIFIER is a list of concrete types and statements from X3DUOM

string : '"' ( 'https://' | 'http://' | '*' | '%' | '!' | '?' | '<' | '>' | AT | QUOTE | '~' | '#' | '/' ~('/') | '\\"' | '\\\\' | '\\' | '.' | ~'"' )*? '"';
// string: '"' ([a-zA-Z0-9_.,/%?!@#$^*()<>{}~`\\] | '\\"' | '\\')* '"' ;

cstring : 'CString' '(' string ')';

boolean : 'true' | 'false';
boolean_list : boolean (',' boolean)*;
integer_list : (SENTINEL | '-' WHOLE | '+'? WHOLE) (',' (SENTINEL | '-' WHOLE | '+'? WHOLE))*;
float_list : FLOAT (',' FLOAT)*;
string_list : cstring (',' cstring)*;

list : boolean_list | integer_list | float_list | string_list;

construct_array : 'new ' type OPENBRACKET CLOSEBRACKET '{'  list '}';

parameters : (cstring | (SENTINEL | '-' WHOLE | '+'? WHOLE) | boolean | WHOLE (',' construct_array)? | FLOAT | construct_array (',' WHOLE)? | '(X3DNode *)'? REFERENCE? variable);

operator : (EQUALS | X3DNODESET | SET | ADD );

funccall : variable operator IDENTIFIER '(' parameters? ')';

construct : type REFERENCE? funccall;

set_field : funccall;
add_field : funccall;

line : (construct | set_field | add_field) SEMI;

lines : line*;

x3d : lines EOF;

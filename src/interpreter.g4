grammar interpreter;

// 规则入口
prog: (statement)*;

// Parser
statement:
	exprStmt
	| printStmt
	| assignmentStmt
	| funcDef
	| funcCall
	| returnStmt;

exprStmt: expr;

printStmt: 'print' expr;

assignmentStmt: expr op = EQU expr;

funcDef: 'def' ID LBR paramList? RBR COLON suite*;

paramList: ID (COMMA ID)*;

suite: statement;

funcCall: ID LBR argList? RBR;

argList: expr (COMMA expr)*;

returnStmt: 'return' expr;

expr:
	<assoc = right> expr op = POW expr	# pow
	| expr op = (MUL | DIV) expr		# mulDiv
	| expr op = (ADD | SUB) expr		# addSub
	| INT								# num
	| ID								# id
	| LBR expr RBR						# parens
	| funcCall							# func;

// Lexer
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
LBR: '(';
RBR: ')';
POW: '^';
COMMA: ',';
COLON: ':';
EQU: '=';
ID: NonDigit (NonDigit | Digit)*;
INT: Digit;

fragment NonDigit: [a-zA-Z_]+;
fragment Digit: [0-9]+;
// NEWLINE: '\r'? '\n';
LINE_COMMENT: '//' .*? '\n' -> skip;
BLOCK_COMMENT: '/*' .*? '*/' -> skip;
WS: [ \t\r\n]+ -> skip;
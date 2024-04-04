// Generated from CPPONGrammar.g4 by ANTLR 4.10.1
// jshint ignore: start
import antlr4 from 'antlr4';
import CPPONGrammarListener from './CPPONGrammarListener.js';
import CPPONGrammarVisitor from './CPPONGrammarVisitor.js';

const serializedATN = [4,1,52,216,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,
4,2,5,7,5,2,6,7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,
2,13,7,13,2,14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,
20,7,20,1,0,1,0,1,1,1,1,1,2,1,2,3,2,49,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,71,8,3,10,3,12,3,74,
9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,5,6,88,8,6,10,6,12,6,
91,9,6,1,7,1,7,1,7,1,7,3,7,97,8,7,1,7,3,7,100,8,7,1,7,1,7,1,7,1,7,1,7,3,
7,107,8,7,1,7,3,7,110,8,7,5,7,112,8,7,10,7,12,7,115,9,7,1,8,1,8,1,8,5,8,
120,8,8,10,8,12,8,123,9,8,1,9,1,9,1,9,5,9,128,8,9,10,9,12,9,131,9,9,1,10,
1,10,1,10,1,10,3,10,137,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
1,12,1,12,1,12,1,12,1,12,3,12,153,8,12,1,12,3,12,156,8,12,1,12,1,12,1,12,
1,12,3,12,162,8,12,1,12,1,12,1,12,1,12,3,12,168,8,12,1,12,3,12,171,8,12,
1,12,3,12,174,8,12,1,12,3,12,177,8,12,1,13,1,13,1,14,1,14,1,14,1,14,1,14,
3,14,186,8,14,1,14,1,14,1,15,1,15,3,15,192,8,15,1,15,1,15,1,16,1,16,1,17,
1,17,1,18,1,18,1,18,3,18,203,8,18,1,18,1,18,1,19,5,19,208,8,19,10,19,12,
19,211,9,19,1,20,1,20,1,20,1,20,1,72,0,21,0,2,4,6,8,10,12,14,16,18,20,22,
24,26,28,30,32,34,36,38,40,0,5,2,0,1,6,35,35,1,0,18,18,1,0,7,7,1,0,25,26,
2,0,37,37,40,42,244,0,42,1,0,0,0,2,44,1,0,0,0,4,46,1,0,0,0,6,50,1,0,0,0,
8,77,1,0,0,0,10,82,1,0,0,0,12,84,1,0,0,0,14,99,1,0,0,0,16,116,1,0,0,0,18,
124,1,0,0,0,20,136,1,0,0,0,22,138,1,0,0,0,24,176,1,0,0,0,26,178,1,0,0,0,
28,180,1,0,0,0,30,189,1,0,0,0,32,195,1,0,0,0,34,197,1,0,0,0,36,202,1,0,0,
0,38,209,1,0,0,0,40,212,1,0,0,0,42,43,7,0,0,0,43,1,1,0,0,0,44,45,5,35,0,
0,45,3,1,0,0,0,46,48,5,35,0,0,47,49,5,43,0,0,48,47,1,0,0,0,48,49,1,0,0,0,
49,5,1,0,0,0,50,72,5,7,0,0,51,71,5,8,0,0,52,71,5,9,0,0,53,71,5,10,0,0,54,
71,5,11,0,0,55,71,5,12,0,0,56,71,5,13,0,0,57,71,5,14,0,0,58,71,5,15,0,0,
59,71,5,52,0,0,60,71,5,51,0,0,61,71,5,16,0,0,62,71,5,17,0,0,63,64,5,18,0,
0,64,71,8,1,0,0,65,71,5,19,0,0,66,71,5,20,0,0,67,71,5,21,0,0,68,71,5,22,
0,0,69,71,8,2,0,0,70,51,1,0,0,0,70,52,1,0,0,0,70,53,1,0,0,0,70,54,1,0,0,
0,70,55,1,0,0,0,70,56,1,0,0,0,70,57,1,0,0,0,70,58,1,0,0,0,70,59,1,0,0,0,
70,60,1,0,0,0,70,61,1,0,0,0,70,62,1,0,0,0,70,63,1,0,0,0,70,65,1,0,0,0,70,
66,1,0,0,0,70,67,1,0,0,0,70,68,1,0,0,0,70,69,1,0,0,0,71,74,1,0,0,0,72,73,
1,0,0,0,72,70,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,76,5,7,0,0,76,7,1,0,
0,0,77,78,5,1,0,0,78,79,5,23,0,0,79,80,3,6,3,0,80,81,5,24,0,0,81,9,1,0,0,
0,82,83,7,3,0,0,83,11,1,0,0,0,84,89,3,10,5,0,85,86,5,27,0,0,86,88,3,10,5,
0,87,85,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,13,1,0,0,0,
91,89,1,0,0,0,92,100,5,44,0,0,93,94,5,28,0,0,94,100,5,43,0,0,95,97,5,29,
0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,100,5,43,0,0,99,92,1,0,
0,0,99,93,1,0,0,0,99,96,1,0,0,0,100,113,1,0,0,0,101,109,5,27,0,0,102,110,
5,44,0,0,103,104,5,28,0,0,104,110,5,43,0,0,105,107,5,29,0,0,106,105,1,0,
0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,110,5,43,0,0,109,102,1,0,0,0,109,
103,1,0,0,0,109,106,1,0,0,0,110,112,1,0,0,0,111,101,1,0,0,0,112,115,1,0,
0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,15,1,0,0,0,115,113,1,0,0,0,116,121,
5,45,0,0,117,118,5,27,0,0,118,120,5,45,0,0,119,117,1,0,0,0,120,123,1,0,0,
0,121,119,1,0,0,0,121,122,1,0,0,0,122,17,1,0,0,0,123,121,1,0,0,0,124,129,
3,8,4,0,125,126,5,27,0,0,126,128,3,8,4,0,127,125,1,0,0,0,128,131,1,0,0,0,
129,127,1,0,0,0,129,130,1,0,0,0,130,19,1,0,0,0,131,129,1,0,0,0,132,137,3,
12,6,0,133,137,3,14,7,0,134,137,3,16,8,0,135,137,3,18,9,0,136,132,1,0,0,
0,136,133,1,0,0,0,136,134,1,0,0,0,136,135,1,0,0,0,137,21,1,0,0,0,138,139,
5,30,0,0,139,140,3,0,0,0,140,141,5,49,0,0,141,142,5,43,0,0,142,143,5,50,
0,0,143,144,5,31,0,0,144,145,3,20,10,0,145,146,5,32,0,0,146,23,1,0,0,0,147,
177,3,8,4,0,148,156,5,44,0,0,149,150,5,28,0,0,150,156,5,43,0,0,151,153,5,
29,0,0,152,151,1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,156,5,43,0,0,
155,148,1,0,0,0,155,149,1,0,0,0,155,152,1,0,0,0,156,177,1,0,0,0,157,177,
3,10,5,0,158,161,5,43,0,0,159,160,5,27,0,0,160,162,3,22,11,0,161,159,1,0,
0,0,161,162,1,0,0,0,162,177,1,0,0,0,163,177,5,45,0,0,164,167,3,22,11,0,165,
166,5,27,0,0,166,168,5,43,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,177,1,
0,0,0,169,171,5,33,0,0,170,169,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,
174,5,36,0,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,177,3,4,
2,0,176,147,1,0,0,0,176,155,1,0,0,0,176,157,1,0,0,0,176,158,1,0,0,0,176,
163,1,0,0,0,176,164,1,0,0,0,176,170,1,0,0,0,177,25,1,0,0,0,178,179,7,4,0,
0,179,27,1,0,0,0,180,181,3,4,2,0,181,182,3,26,13,0,182,183,5,35,0,0,183,
185,5,23,0,0,184,186,3,24,12,0,185,184,1,0,0,0,185,186,1,0,0,0,186,187,1,
0,0,0,187,188,5,24,0,0,188,29,1,0,0,0,189,191,3,0,0,0,190,192,5,36,0,0,191,
190,1,0,0,0,191,192,1,0,0,0,192,193,1,0,0,0,193,194,3,28,14,0,194,31,1,0,
0,0,195,196,3,28,14,0,196,33,1,0,0,0,197,198,3,28,14,0,198,35,1,0,0,0,199,
203,3,30,15,0,200,203,3,32,16,0,201,203,3,34,17,0,202,199,1,0,0,0,202,200,
1,0,0,0,202,201,1,0,0,0,203,204,1,0,0,0,204,205,5,38,0,0,205,37,1,0,0,0,
206,208,3,36,18,0,207,206,1,0,0,0,208,211,1,0,0,0,209,207,1,0,0,0,209,210,
1,0,0,0,210,39,1,0,0,0,211,209,1,0,0,0,212,213,3,38,19,0,213,214,5,0,0,1,
214,41,1,0,0,0,23,48,70,72,89,96,99,106,109,113,121,129,136,152,155,161,
167,170,173,176,185,191,202,209];


const atn = new antlr4.atn.ATNDeserializer().deserialize(serializedATN);

const decisionsToDFA = atn.decisionToState.map( (ds, index) => new antlr4.dfa.DFA(ds, index) );

const sharedContextCache = new antlr4.PredictionContextCache();

export default class CPPONGrammarParser extends antlr4.Parser {

    static grammarFileName = "CPPONGrammar.g4";
    static literalNames = [ null, "'CString'", "'bool'", "'int'", "'int32_t'", 
                            "'float'", "'double'", "'\"'", "'https://'", 
                            "'http://'", "'*'", "'%'", "'!'", "'?'", "'<'", 
                            "'>'", "'~'", "'#'", "'/'", "'\\\"'", "'\\\\'", 
                            "'\\'", "'.'", "'('", "')'", "'true'", "'false'", 
                            "','", "'-'", "'+'", "'new '", "'{'", "'}'", 
                            "'(X3DNode *)'", null, null, "'&'", "'='", "';'", 
                            "':'", "'.set'", "'.X3DNode::set'", "'.add'", 
                            null, "'-1'", null, null, null, null, "'['", 
                            "']'" ];
    static symbolicNames = [ null, null, null, null, null, null, null, null, 
                             null, null, null, null, null, null, null, null, 
                             null, null, null, null, null, null, null, null, 
                             null, null, null, null, null, null, null, null, 
                             null, null, "WS", "IDENTIFIER", "REFERENCE", 
                             "EQUALS", "SEMI", "COLON", "SET", "X3DNODESET", 
                             "ADD", "WHOLE", "SENTINEL", "FLOAT", "TRUE", 
                             "FALSE", "COMMENT", "OPENBRACKET", "CLOSEBRACKET", 
                             "QUOTE", "AT" ];
    static ruleNames = [ "type", "field", "variable", "string", "cstring", 
                         "boolean", "boolean_list", "integer_list", "float_list", 
                         "string_list", "list", "construct_array", "parameters", 
                         "operator", "funccall", "constructor", "set_field", 
                         "add_field", "line", "lines", "x3d" ];

    constructor(input) {
        super(input);
        this._interp = new antlr4.atn.ParserATNSimulator(this, atn, decisionsToDFA, sharedContextCache);
        this.ruleNames = CPPONGrammarParser.ruleNames;
        this.literalNames = CPPONGrammarParser.literalNames;
        this.symbolicNames = CPPONGrammarParser.symbolicNames;
    }

    get atn() {
        return atn;
    }



	type() {
	    let localctx = new TypeContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 0, CPPONGrammarParser.RULE_type);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 42;
	        _la = this._input.LA(1);
	        if(!((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << CPPONGrammarParser.T__0) | (1 << CPPONGrammarParser.T__1) | (1 << CPPONGrammarParser.T__2) | (1 << CPPONGrammarParser.T__3) | (1 << CPPONGrammarParser.T__4) | (1 << CPPONGrammarParser.T__5))) !== 0) || _la===CPPONGrammarParser.IDENTIFIER)) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	field() {
	    let localctx = new FieldContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 2, CPPONGrammarParser.RULE_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 44;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	variable() {
	    let localctx = new VariableContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 4, CPPONGrammarParser.RULE_variable);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 46;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	        this.state = 48;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===CPPONGrammarParser.WHOLE) {
	            this.state = 47;
	            this.match(CPPONGrammarParser.WHOLE);
	        }

	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	string() {
	    let localctx = new StringContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 6, CPPONGrammarParser.RULE_string);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 50;
	        this.match(CPPONGrammarParser.T__6);
	        this.state = 72;
	        this._errHandler.sync(this);
	        var _alt = this._interp.adaptivePredict(this._input,2,this._ctx)
	        while(_alt!=1 && _alt!=antlr4.atn.ATN.INVALID_ALT_NUMBER) {
	            if(_alt===1+1) {
	                this.state = 70;
	                this._errHandler.sync(this);
	                var la_ = this._interp.adaptivePredict(this._input,1,this._ctx);
	                switch(la_) {
	                case 1:
	                    this.state = 51;
	                    this.match(CPPONGrammarParser.T__7);
	                    break;

	                case 2:
	                    this.state = 52;
	                    this.match(CPPONGrammarParser.T__8);
	                    break;

	                case 3:
	                    this.state = 53;
	                    this.match(CPPONGrammarParser.T__9);
	                    break;

	                case 4:
	                    this.state = 54;
	                    this.match(CPPONGrammarParser.T__10);
	                    break;

	                case 5:
	                    this.state = 55;
	                    this.match(CPPONGrammarParser.T__11);
	                    break;

	                case 6:
	                    this.state = 56;
	                    this.match(CPPONGrammarParser.T__12);
	                    break;

	                case 7:
	                    this.state = 57;
	                    this.match(CPPONGrammarParser.T__13);
	                    break;

	                case 8:
	                    this.state = 58;
	                    this.match(CPPONGrammarParser.T__14);
	                    break;

	                case 9:
	                    this.state = 59;
	                    this.match(CPPONGrammarParser.AT);
	                    break;

	                case 10:
	                    this.state = 60;
	                    this.match(CPPONGrammarParser.QUOTE);
	                    break;

	                case 11:
	                    this.state = 61;
	                    this.match(CPPONGrammarParser.T__15);
	                    break;

	                case 12:
	                    this.state = 62;
	                    this.match(CPPONGrammarParser.T__16);
	                    break;

	                case 13:
	                    this.state = 63;
	                    this.match(CPPONGrammarParser.T__17);
	                    this.state = 64;
	                    _la = this._input.LA(1);
	                    if(_la<=0 || _la===CPPONGrammarParser.T__17) {
	                    this._errHandler.recoverInline(this);
	                    }
	                    else {
	                    	this._errHandler.reportMatch(this);
	                        this.consume();
	                    }
	                    break;

	                case 14:
	                    this.state = 65;
	                    this.match(CPPONGrammarParser.T__18);
	                    break;

	                case 15:
	                    this.state = 66;
	                    this.match(CPPONGrammarParser.T__19);
	                    break;

	                case 16:
	                    this.state = 67;
	                    this.match(CPPONGrammarParser.T__20);
	                    break;

	                case 17:
	                    this.state = 68;
	                    this.match(CPPONGrammarParser.T__21);
	                    break;

	                case 18:
	                    this.state = 69;
	                    _la = this._input.LA(1);
	                    if(_la<=0 || _la===CPPONGrammarParser.T__6) {
	                    this._errHandler.recoverInline(this);
	                    }
	                    else {
	                    	this._errHandler.reportMatch(this);
	                        this.consume();
	                    }
	                    break;

	                } 
	            }
	            this.state = 74;
	            this._errHandler.sync(this);
	            _alt = this._interp.adaptivePredict(this._input,2,this._ctx);
	        }

	        this.state = 75;
	        this.match(CPPONGrammarParser.T__6);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	cstring() {
	    let localctx = new CstringContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 8, CPPONGrammarParser.RULE_cstring);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 77;
	        this.match(CPPONGrammarParser.T__0);
	        this.state = 78;
	        this.match(CPPONGrammarParser.T__22);
	        this.state = 79;
	        this.string();
	        this.state = 80;
	        this.match(CPPONGrammarParser.T__23);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	boolean_() {
	    let localctx = new BooleanContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 10, CPPONGrammarParser.RULE_boolean);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 82;
	        _la = this._input.LA(1);
	        if(!(_la===CPPONGrammarParser.T__24 || _la===CPPONGrammarParser.T__25)) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	boolean_list() {
	    let localctx = new Boolean_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 12, CPPONGrammarParser.RULE_boolean_list);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 84;
	        this.boolean_();
	        this.state = 89;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===CPPONGrammarParser.T__26) {
	            this.state = 85;
	            this.match(CPPONGrammarParser.T__26);
	            this.state = 86;
	            this.boolean_();
	            this.state = 91;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	integer_list() {
	    let localctx = new Integer_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 14, CPPONGrammarParser.RULE_integer_list);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 99;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case CPPONGrammarParser.SENTINEL:
	            this.state = 92;
	            this.match(CPPONGrammarParser.SENTINEL);
	            break;
	        case CPPONGrammarParser.T__27:
	            this.state = 93;
	            this.match(CPPONGrammarParser.T__27);
	            this.state = 94;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        case CPPONGrammarParser.T__28:
	        case CPPONGrammarParser.WHOLE:
	            this.state = 96;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===CPPONGrammarParser.T__28) {
	                this.state = 95;
	                this.match(CPPONGrammarParser.T__28);
	            }

	            this.state = 98;
	            this.match(CPPONGrammarParser.WHOLE);
	            break;
	        default:
	            throw new antlr4.error.NoViableAltException(this);
	        }
	        this.state = 113;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===CPPONGrammarParser.T__26) {
	            this.state = 101;
	            this.match(CPPONGrammarParser.T__26);
	            this.state = 109;
	            this._errHandler.sync(this);
	            switch(this._input.LA(1)) {
	            case CPPONGrammarParser.SENTINEL:
	                this.state = 102;
	                this.match(CPPONGrammarParser.SENTINEL);
	                break;
	            case CPPONGrammarParser.T__27:
	                this.state = 103;
	                this.match(CPPONGrammarParser.T__27);
	                this.state = 104;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            case CPPONGrammarParser.T__28:
	            case CPPONGrammarParser.WHOLE:
	                this.state = 106;
	                this._errHandler.sync(this);
	                _la = this._input.LA(1);
	                if(_la===CPPONGrammarParser.T__28) {
	                    this.state = 105;
	                    this.match(CPPONGrammarParser.T__28);
	                }

	                this.state = 108;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            default:
	                throw new antlr4.error.NoViableAltException(this);
	            }
	            this.state = 115;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	float_list() {
	    let localctx = new Float_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 16, CPPONGrammarParser.RULE_float_list);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 116;
	        this.match(CPPONGrammarParser.FLOAT);
	        this.state = 121;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===CPPONGrammarParser.T__26) {
	            this.state = 117;
	            this.match(CPPONGrammarParser.T__26);
	            this.state = 118;
	            this.match(CPPONGrammarParser.FLOAT);
	            this.state = 123;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	string_list() {
	    let localctx = new String_listContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 18, CPPONGrammarParser.RULE_string_list);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 124;
	        this.cstring();
	        this.state = 129;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while(_la===CPPONGrammarParser.T__26) {
	            this.state = 125;
	            this.match(CPPONGrammarParser.T__26);
	            this.state = 126;
	            this.cstring();
	            this.state = 131;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	list() {
	    let localctx = new ListContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 20, CPPONGrammarParser.RULE_list);
	    try {
	        this.state = 136;
	        this._errHandler.sync(this);
	        switch(this._input.LA(1)) {
	        case CPPONGrammarParser.T__24:
	        case CPPONGrammarParser.T__25:
	            this.enterOuterAlt(localctx, 1);
	            this.state = 132;
	            this.boolean_list();
	            break;
	        case CPPONGrammarParser.T__27:
	        case CPPONGrammarParser.T__28:
	        case CPPONGrammarParser.WHOLE:
	        case CPPONGrammarParser.SENTINEL:
	            this.enterOuterAlt(localctx, 2);
	            this.state = 133;
	            this.integer_list();
	            break;
	        case CPPONGrammarParser.FLOAT:
	            this.enterOuterAlt(localctx, 3);
	            this.state = 134;
	            this.float_list();
	            break;
	        case CPPONGrammarParser.T__0:
	            this.enterOuterAlt(localctx, 4);
	            this.state = 135;
	            this.string_list();
	            break;
	        default:
	            throw new antlr4.error.NoViableAltException(this);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	construct_array() {
	    let localctx = new Construct_arrayContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 22, CPPONGrammarParser.RULE_construct_array);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 138;
	        this.match(CPPONGrammarParser.T__29);
	        this.state = 139;
	        this.type();
	        this.state = 140;
	        this.match(CPPONGrammarParser.OPENBRACKET);
	        this.state = 141;
	        this.match(CPPONGrammarParser.WHOLE);
	        this.state = 142;
	        this.match(CPPONGrammarParser.CLOSEBRACKET);
	        this.state = 143;
	        this.match(CPPONGrammarParser.T__30);
	        this.state = 144;
	        this.list();
	        this.state = 145;
	        this.match(CPPONGrammarParser.T__31);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	parameters() {
	    let localctx = new ParametersContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 24, CPPONGrammarParser.RULE_parameters);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 176;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,18,this._ctx);
	        switch(la_) {
	        case 1:
	            this.state = 147;
	            this.cstring();
	            break;

	        case 2:
	            this.state = 155;
	            this._errHandler.sync(this);
	            switch(this._input.LA(1)) {
	            case CPPONGrammarParser.SENTINEL:
	                this.state = 148;
	                this.match(CPPONGrammarParser.SENTINEL);
	                break;
	            case CPPONGrammarParser.T__27:
	                this.state = 149;
	                this.match(CPPONGrammarParser.T__27);
	                this.state = 150;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            case CPPONGrammarParser.T__28:
	            case CPPONGrammarParser.WHOLE:
	                this.state = 152;
	                this._errHandler.sync(this);
	                _la = this._input.LA(1);
	                if(_la===CPPONGrammarParser.T__28) {
	                    this.state = 151;
	                    this.match(CPPONGrammarParser.T__28);
	                }

	                this.state = 154;
	                this.match(CPPONGrammarParser.WHOLE);
	                break;
	            default:
	                throw new antlr4.error.NoViableAltException(this);
	            }
	            break;

	        case 3:
	            this.state = 157;
	            this.boolean_();
	            break;

	        case 4:
	            this.state = 158;
	            this.match(CPPONGrammarParser.WHOLE);
	            this.state = 161;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===CPPONGrammarParser.T__26) {
	                this.state = 159;
	                this.match(CPPONGrammarParser.T__26);
	                this.state = 160;
	                this.construct_array();
	            }

	            break;

	        case 5:
	            this.state = 163;
	            this.match(CPPONGrammarParser.FLOAT);
	            break;

	        case 6:
	            this.state = 164;
	            this.construct_array();
	            this.state = 167;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===CPPONGrammarParser.T__26) {
	                this.state = 165;
	                this.match(CPPONGrammarParser.T__26);
	                this.state = 166;
	                this.match(CPPONGrammarParser.WHOLE);
	            }

	            break;

	        case 7:
	            this.state = 170;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===CPPONGrammarParser.T__32) {
	                this.state = 169;
	                this.match(CPPONGrammarParser.T__32);
	            }

	            this.state = 173;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	            if(_la===CPPONGrammarParser.REFERENCE) {
	                this.state = 172;
	                this.match(CPPONGrammarParser.REFERENCE);
	            }

	            this.state = 175;
	            this.variable();
	            break;

	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	operator() {
	    let localctx = new OperatorContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 26, CPPONGrammarParser.RULE_operator);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 178;
	        _la = this._input.LA(1);
	        if(!(((((_la - 37)) & ~0x1f) == 0 && ((1 << (_la - 37)) & ((1 << (CPPONGrammarParser.EQUALS - 37)) | (1 << (CPPONGrammarParser.SET - 37)) | (1 << (CPPONGrammarParser.X3DNODESET - 37)) | (1 << (CPPONGrammarParser.ADD - 37)))) !== 0))) {
	        this._errHandler.recoverInline(this);
	        }
	        else {
	        	this._errHandler.reportMatch(this);
	            this.consume();
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	funccall() {
	    let localctx = new FunccallContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 28, CPPONGrammarParser.RULE_funccall);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 180;
	        this.variable();
	        this.state = 181;
	        this.operator();
	        this.state = 182;
	        this.match(CPPONGrammarParser.IDENTIFIER);
	        this.state = 183;
	        this.match(CPPONGrammarParser.T__22);
	        this.state = 185;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << CPPONGrammarParser.T__0) | (1 << CPPONGrammarParser.T__24) | (1 << CPPONGrammarParser.T__25) | (1 << CPPONGrammarParser.T__27) | (1 << CPPONGrammarParser.T__28) | (1 << CPPONGrammarParser.T__29))) !== 0) || ((((_la - 33)) & ~0x1f) == 0 && ((1 << (_la - 33)) & ((1 << (CPPONGrammarParser.T__32 - 33)) | (1 << (CPPONGrammarParser.IDENTIFIER - 33)) | (1 << (CPPONGrammarParser.REFERENCE - 33)) | (1 << (CPPONGrammarParser.WHOLE - 33)) | (1 << (CPPONGrammarParser.SENTINEL - 33)) | (1 << (CPPONGrammarParser.FLOAT - 33)))) !== 0)) {
	            this.state = 184;
	            this.parameters();
	        }

	        this.state = 187;
	        this.match(CPPONGrammarParser.T__23);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	constructor() {
	    let localctx = new ConstructorContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 30, CPPONGrammarParser.RULE_constructor);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 189;
	        this.type();
	        this.state = 191;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        if(_la===CPPONGrammarParser.REFERENCE) {
	            this.state = 190;
	            this.match(CPPONGrammarParser.REFERENCE);
	        }

	        this.state = 193;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	set_field() {
	    let localctx = new Set_fieldContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 32, CPPONGrammarParser.RULE_set_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 195;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	add_field() {
	    let localctx = new Add_fieldContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 34, CPPONGrammarParser.RULE_add_field);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 197;
	        this.funccall();
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	line() {
	    let localctx = new LineContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 36, CPPONGrammarParser.RULE_line);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 202;
	        this._errHandler.sync(this);
	        var la_ = this._interp.adaptivePredict(this._input,21,this._ctx);
	        switch(la_) {
	        case 1:
	            this.state = 199;
	            this.constructor();
	            break;

	        case 2:
	            this.state = 200;
	            this.set_field();
	            break;

	        case 3:
	            this.state = 201;
	            this.add_field();
	            break;

	        }
	        this.state = 204;
	        this.match(CPPONGrammarParser.SEMI);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	lines() {
	    let localctx = new LinesContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 38, CPPONGrammarParser.RULE_lines);
	    var _la = 0; // Token type
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 209;
	        this._errHandler.sync(this);
	        _la = this._input.LA(1);
	        while((((_la) & ~0x1f) == 0 && ((1 << _la) & ((1 << CPPONGrammarParser.T__0) | (1 << CPPONGrammarParser.T__1) | (1 << CPPONGrammarParser.T__2) | (1 << CPPONGrammarParser.T__3) | (1 << CPPONGrammarParser.T__4) | (1 << CPPONGrammarParser.T__5))) !== 0) || _la===CPPONGrammarParser.IDENTIFIER) {
	            this.state = 206;
	            this.line();
	            this.state = 211;
	            this._errHandler.sync(this);
	            _la = this._input.LA(1);
	        }
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}



	x3d() {
	    let localctx = new X3dContext(this, this._ctx, this.state);
	    this.enterRule(localctx, 40, CPPONGrammarParser.RULE_x3d);
	    try {
	        this.enterOuterAlt(localctx, 1);
	        this.state = 212;
	        this.lines();
	        this.state = 213;
	        this.match(CPPONGrammarParser.EOF);
	    } catch (re) {
	    	if(re instanceof antlr4.error.RecognitionException) {
		        localctx.exception = re;
		        this._errHandler.reportError(this, re);
		        this._errHandler.recover(this, re);
		    } else {
		    	throw re;
		    }
	    } finally {
	        this.exitRule();
	    }
	    return localctx;
	}


}

CPPONGrammarParser.EOF = antlr4.Token.EOF;
CPPONGrammarParser.T__0 = 1;
CPPONGrammarParser.T__1 = 2;
CPPONGrammarParser.T__2 = 3;
CPPONGrammarParser.T__3 = 4;
CPPONGrammarParser.T__4 = 5;
CPPONGrammarParser.T__5 = 6;
CPPONGrammarParser.T__6 = 7;
CPPONGrammarParser.T__7 = 8;
CPPONGrammarParser.T__8 = 9;
CPPONGrammarParser.T__9 = 10;
CPPONGrammarParser.T__10 = 11;
CPPONGrammarParser.T__11 = 12;
CPPONGrammarParser.T__12 = 13;
CPPONGrammarParser.T__13 = 14;
CPPONGrammarParser.T__14 = 15;
CPPONGrammarParser.T__15 = 16;
CPPONGrammarParser.T__16 = 17;
CPPONGrammarParser.T__17 = 18;
CPPONGrammarParser.T__18 = 19;
CPPONGrammarParser.T__19 = 20;
CPPONGrammarParser.T__20 = 21;
CPPONGrammarParser.T__21 = 22;
CPPONGrammarParser.T__22 = 23;
CPPONGrammarParser.T__23 = 24;
CPPONGrammarParser.T__24 = 25;
CPPONGrammarParser.T__25 = 26;
CPPONGrammarParser.T__26 = 27;
CPPONGrammarParser.T__27 = 28;
CPPONGrammarParser.T__28 = 29;
CPPONGrammarParser.T__29 = 30;
CPPONGrammarParser.T__30 = 31;
CPPONGrammarParser.T__31 = 32;
CPPONGrammarParser.T__32 = 33;
CPPONGrammarParser.WS = 34;
CPPONGrammarParser.IDENTIFIER = 35;
CPPONGrammarParser.REFERENCE = 36;
CPPONGrammarParser.EQUALS = 37;
CPPONGrammarParser.SEMI = 38;
CPPONGrammarParser.COLON = 39;
CPPONGrammarParser.SET = 40;
CPPONGrammarParser.X3DNODESET = 41;
CPPONGrammarParser.ADD = 42;
CPPONGrammarParser.WHOLE = 43;
CPPONGrammarParser.SENTINEL = 44;
CPPONGrammarParser.FLOAT = 45;
CPPONGrammarParser.TRUE = 46;
CPPONGrammarParser.FALSE = 47;
CPPONGrammarParser.COMMENT = 48;
CPPONGrammarParser.OPENBRACKET = 49;
CPPONGrammarParser.CLOSEBRACKET = 50;
CPPONGrammarParser.QUOTE = 51;
CPPONGrammarParser.AT = 52;

CPPONGrammarParser.RULE_type = 0;
CPPONGrammarParser.RULE_field = 1;
CPPONGrammarParser.RULE_variable = 2;
CPPONGrammarParser.RULE_string = 3;
CPPONGrammarParser.RULE_cstring = 4;
CPPONGrammarParser.RULE_boolean = 5;
CPPONGrammarParser.RULE_boolean_list = 6;
CPPONGrammarParser.RULE_integer_list = 7;
CPPONGrammarParser.RULE_float_list = 8;
CPPONGrammarParser.RULE_string_list = 9;
CPPONGrammarParser.RULE_list = 10;
CPPONGrammarParser.RULE_construct_array = 11;
CPPONGrammarParser.RULE_parameters = 12;
CPPONGrammarParser.RULE_operator = 13;
CPPONGrammarParser.RULE_funccall = 14;
CPPONGrammarParser.RULE_constructor = 15;
CPPONGrammarParser.RULE_set_field = 16;
CPPONGrammarParser.RULE_add_field = 17;
CPPONGrammarParser.RULE_line = 18;
CPPONGrammarParser.RULE_lines = 19;
CPPONGrammarParser.RULE_x3d = 20;

class TypeContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_type;
    }

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterType(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitType(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitType(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class FieldContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_field;
    }

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterField(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitField(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitField(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class VariableContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_variable;
    }

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	WHOLE() {
	    return this.getToken(CPPONGrammarParser.WHOLE, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterVariable(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitVariable(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitVariable(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class StringContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_string;
    }

	AT = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.AT);
	    } else {
	        return this.getToken(CPPONGrammarParser.AT, i);
	    }
	};


	QUOTE = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.QUOTE);
	    } else {
	        return this.getToken(CPPONGrammarParser.QUOTE, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterString(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitString(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitString(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class CstringContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_cstring;
    }

	string() {
	    return this.getTypedRuleContext(StringContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterCstring(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitCstring(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitCstring(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class BooleanContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_boolean;
    }


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterBoolean(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitBoolean(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitBoolean(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Boolean_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_boolean_list;
    }

	boolean_ = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(BooleanContext);
	    } else {
	        return this.getTypedRuleContext(BooleanContext,i);
	    }
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterBoolean_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitBoolean_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitBoolean_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Integer_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_integer_list;
    }

	SENTINEL = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.SENTINEL);
	    } else {
	        return this.getToken(CPPONGrammarParser.SENTINEL, i);
	    }
	};


	WHOLE = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.WHOLE);
	    } else {
	        return this.getToken(CPPONGrammarParser.WHOLE, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterInteger_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitInteger_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitInteger_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Float_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_float_list;
    }

	FLOAT = function(i) {
		if(i===undefined) {
			i = null;
		}
	    if(i===null) {
	        return this.getTokens(CPPONGrammarParser.FLOAT);
	    } else {
	        return this.getToken(CPPONGrammarParser.FLOAT, i);
	    }
	};


	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterFloat_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitFloat_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitFloat_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class String_listContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_string_list;
    }

	cstring = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(CstringContext);
	    } else {
	        return this.getTypedRuleContext(CstringContext,i);
	    }
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterString_list(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitString_list(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitString_list(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ListContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_list;
    }

	boolean_list() {
	    return this.getTypedRuleContext(Boolean_listContext,0);
	};

	integer_list() {
	    return this.getTypedRuleContext(Integer_listContext,0);
	};

	float_list() {
	    return this.getTypedRuleContext(Float_listContext,0);
	};

	string_list() {
	    return this.getTypedRuleContext(String_listContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterList(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitList(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitList(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Construct_arrayContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_construct_array;
    }

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	OPENBRACKET() {
	    return this.getToken(CPPONGrammarParser.OPENBRACKET, 0);
	};

	WHOLE() {
	    return this.getToken(CPPONGrammarParser.WHOLE, 0);
	};

	CLOSEBRACKET() {
	    return this.getToken(CPPONGrammarParser.CLOSEBRACKET, 0);
	};

	list() {
	    return this.getTypedRuleContext(ListContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterConstruct_array(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitConstruct_array(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitConstruct_array(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ParametersContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_parameters;
    }

	cstring() {
	    return this.getTypedRuleContext(CstringContext,0);
	};

	boolean_() {
	    return this.getTypedRuleContext(BooleanContext,0);
	};

	WHOLE() {
	    return this.getToken(CPPONGrammarParser.WHOLE, 0);
	};

	FLOAT() {
	    return this.getToken(CPPONGrammarParser.FLOAT, 0);
	};

	construct_array() {
	    return this.getTypedRuleContext(Construct_arrayContext,0);
	};

	variable() {
	    return this.getTypedRuleContext(VariableContext,0);
	};

	SENTINEL() {
	    return this.getToken(CPPONGrammarParser.SENTINEL, 0);
	};

	REFERENCE() {
	    return this.getToken(CPPONGrammarParser.REFERENCE, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterParameters(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitParameters(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitParameters(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class OperatorContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_operator;
    }

	EQUALS() {
	    return this.getToken(CPPONGrammarParser.EQUALS, 0);
	};

	X3DNODESET() {
	    return this.getToken(CPPONGrammarParser.X3DNODESET, 0);
	};

	SET() {
	    return this.getToken(CPPONGrammarParser.SET, 0);
	};

	ADD() {
	    return this.getToken(CPPONGrammarParser.ADD, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterOperator(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitOperator(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitOperator(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class FunccallContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_funccall;
    }

	variable() {
	    return this.getTypedRuleContext(VariableContext,0);
	};

	operator() {
	    return this.getTypedRuleContext(OperatorContext,0);
	};

	IDENTIFIER() {
	    return this.getToken(CPPONGrammarParser.IDENTIFIER, 0);
	};

	parameters() {
	    return this.getTypedRuleContext(ParametersContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterFunccall(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitFunccall(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitFunccall(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class ConstructorContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_constructor;
    }

	type() {
	    return this.getTypedRuleContext(TypeContext,0);
	};

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	REFERENCE() {
	    return this.getToken(CPPONGrammarParser.REFERENCE, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterConstructor(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitConstructor(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitConstructor(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Set_fieldContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_set_field;
    }

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterSet_field(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitSet_field(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitSet_field(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class Add_fieldContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_add_field;
    }

	funccall() {
	    return this.getTypedRuleContext(FunccallContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterAdd_field(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitAdd_field(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitAdd_field(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class LineContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_line;
    }

	SEMI() {
	    return this.getToken(CPPONGrammarParser.SEMI, 0);
	};

	constructor() {
	    return this.getTypedRuleContext(ConstructorContext,0);
	};

	set_field() {
	    return this.getTypedRuleContext(Set_fieldContext,0);
	};

	add_field() {
	    return this.getTypedRuleContext(Add_fieldContext,0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterLine(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitLine(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitLine(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class LinesContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_lines;
    }

	line = function(i) {
	    if(i===undefined) {
	        i = null;
	    }
	    if(i===null) {
	        return this.getTypedRuleContexts(LineContext);
	    } else {
	        return this.getTypedRuleContext(LineContext,i);
	    }
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterLines(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitLines(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitLines(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}



class X3dContext extends antlr4.ParserRuleContext {

    constructor(parser, parent, invokingState) {
        if(parent===undefined) {
            parent = null;
        }
        if(invokingState===undefined || invokingState===null) {
            invokingState = -1;
        }
        super(parent, invokingState);
        this.parser = parser;
        this.ruleIndex = CPPONGrammarParser.RULE_x3d;
    }

	lines() {
	    return this.getTypedRuleContext(LinesContext,0);
	};

	EOF() {
	    return this.getToken(CPPONGrammarParser.EOF, 0);
	};

	enterRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.enterX3d(this);
		}
	}

	exitRule(listener) {
	    if(listener instanceof CPPONGrammarListener ) {
	        listener.exitX3d(this);
		}
	}

	accept(visitor) {
	    if ( visitor instanceof CPPONGrammarVisitor ) {
	        return visitor.visitX3d(this);
	    } else {
	        return visitor.visitChildren(this);
	    }
	}


}




CPPONGrammarParser.TypeContext = TypeContext; 
CPPONGrammarParser.FieldContext = FieldContext; 
CPPONGrammarParser.VariableContext = VariableContext; 
CPPONGrammarParser.StringContext = StringContext; 
CPPONGrammarParser.CstringContext = CstringContext; 
CPPONGrammarParser.BooleanContext = BooleanContext; 
CPPONGrammarParser.Boolean_listContext = Boolean_listContext; 
CPPONGrammarParser.Integer_listContext = Integer_listContext; 
CPPONGrammarParser.Float_listContext = Float_listContext; 
CPPONGrammarParser.String_listContext = String_listContext; 
CPPONGrammarParser.ListContext = ListContext; 
CPPONGrammarParser.Construct_arrayContext = Construct_arrayContext; 
CPPONGrammarParser.ParametersContext = ParametersContext; 
CPPONGrammarParser.OperatorContext = OperatorContext; 
CPPONGrammarParser.FunccallContext = FunccallContext; 
CPPONGrammarParser.ConstructorContext = ConstructorContext; 
CPPONGrammarParser.Set_fieldContext = Set_fieldContext; 
CPPONGrammarParser.Add_fieldContext = Add_fieldContext; 
CPPONGrammarParser.LineContext = LineContext; 
CPPONGrammarParser.LinesContext = LinesContext; 
CPPONGrammarParser.X3dContext = X3dContext; 

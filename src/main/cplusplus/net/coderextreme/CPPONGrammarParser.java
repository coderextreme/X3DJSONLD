// Generated from CPPONGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class CPPONGrammarParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, WS=31, IDENTIFIER=32, 
		REFERENCE=33, EQUALS=34, SEMI=35, COLON=36, SET=37, X3DNODESET=38, ADD=39, 
		WHOLE=40, SENTINEL=41, FLOAT=42, BOOLEAN=43, COMMENT=44, OPENBRACKET=45, 
		CLOSEBRACKET=46, QUOTE=47, AT=48;
	public static final int
		RULE_type = 0, RULE_field = 1, RULE_variable = 2, RULE_string = 3, RULE_cstring = 4, 
		RULE_boolean_list = 5, RULE_integer_list = 6, RULE_float_list = 7, RULE_string_list = 8, 
		RULE_list = 9, RULE_construct_array = 10, RULE_parameters = 11, RULE_operator = 12, 
		RULE_funccall = 13, RULE_constructor = 14, RULE_set_field = 15, RULE_add_field = 16, 
		RULE_line = 17, RULE_lines = 18, RULE_x3d = 19;
	private static String[] makeRuleNames() {
		return new String[] {
			"type", "field", "variable", "string", "cstring", "boolean_list", "integer_list", 
			"float_list", "string_list", "list", "construct_array", "parameters", 
			"operator", "funccall", "constructor", "set_field", "add_field", "line", 
			"lines", "x3d"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'CString'", "'bool'", "'int'", "'int32_t'", "'float'", "'double'", 
			"'\"'", "'https://'", "'http://'", "'*'", "'%'", "'!'", "'?'", "'<'", 
			"'>'", "'~'", "'#'", "'/'", "'\\\"'", "'\\'", "'.'", "'('", "')'", "','", 
			"'-'", "'+'", "'new '", "'{'", "'}'", "'(X3DNode *)'", null, null, "'&'", 
			"'='", "';'", "':'", "'.set'", "'.X3DNode::set'", "'.add'", null, "'-1'", 
			null, null, null, "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "WS", "IDENTIFIER", "REFERENCE", 
			"EQUALS", "SEMI", "COLON", "SET", "X3DNODESET", "ADD", "WHOLE", "SENTINEL", 
			"FLOAT", "BOOLEAN", "COMMENT", "OPENBRACKET", "CLOSEBRACKET", "QUOTE", 
			"AT"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "CPPONGrammar.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CPPONGrammarParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TypeContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitType(this);
		}
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(40);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 4294967422L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FieldContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public FieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_field; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterField(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitField(this);
		}
	}

	public final FieldContext field() throws RecognitionException {
		FieldContext _localctx = new FieldContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(42);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class VariableContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public TerminalNode WHOLE() { return getToken(CPPONGrammarParser.WHOLE, 0); }
		public VariableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variable; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterVariable(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitVariable(this);
		}
	}

	public final VariableContext variable() throws RecognitionException {
		VariableContext _localctx = new VariableContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_variable);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(IDENTIFIER);
			setState(46);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHOLE) {
				{
				setState(45);
				match(WHOLE);
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StringContext extends ParserRuleContext {
		public List<TerminalNode> AT() { return getTokens(CPPONGrammarParser.AT); }
		public TerminalNode AT(int i) {
			return getToken(CPPONGrammarParser.AT, i);
		}
		public List<TerminalNode> QUOTE() { return getTokens(CPPONGrammarParser.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(CPPONGrammarParser.QUOTE, i);
		}
		public StringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterString(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitString(this);
		}
	}

	public final StringContext string() throws RecognitionException {
		StringContext _localctx = new StringContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_string);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			match(T__6);
			setState(69);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(67);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
					case 1:
						{
						setState(49);
						match(T__7);
						}
						break;
					case 2:
						{
						setState(50);
						match(T__8);
						}
						break;
					case 3:
						{
						setState(51);
						match(T__9);
						}
						break;
					case 4:
						{
						setState(52);
						match(T__10);
						}
						break;
					case 5:
						{
						setState(53);
						match(T__11);
						}
						break;
					case 6:
						{
						setState(54);
						match(T__12);
						}
						break;
					case 7:
						{
						setState(55);
						match(T__13);
						}
						break;
					case 8:
						{
						setState(56);
						match(T__14);
						}
						break;
					case 9:
						{
						setState(57);
						match(AT);
						}
						break;
					case 10:
						{
						setState(58);
						match(QUOTE);
						}
						break;
					case 11:
						{
						setState(59);
						match(T__15);
						}
						break;
					case 12:
						{
						setState(60);
						match(T__16);
						}
						break;
					case 13:
						{
						setState(61);
						match(T__17);
						setState(62);
						_la = _input.LA(1);
						if ( _la <= 0 || (_la==T__17) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						}
						break;
					case 14:
						{
						setState(63);
						match(T__18);
						}
						break;
					case 15:
						{
						setState(64);
						match(T__19);
						}
						break;
					case 16:
						{
						setState(65);
						match(T__20);
						}
						break;
					case 17:
						{
						setState(66);
						_la = _input.LA(1);
						if ( _la <= 0 || (_la==T__6) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						}
						break;
					}
					} 
				}
				setState(71);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(72);
			match(T__6);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CstringContext extends ParserRuleContext {
		public StringContext string() {
			return getRuleContext(StringContext.class,0);
		}
		public CstringContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cstring; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterCstring(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitCstring(this);
		}
	}

	public final CstringContext cstring() throws RecognitionException {
		CstringContext _localctx = new CstringContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_cstring);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			match(T__0);
			setState(75);
			match(T__21);
			setState(76);
			string();
			setState(77);
			match(T__22);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Boolean_listContext extends ParserRuleContext {
		public TerminalNode BOOLEAN() { return getToken(CPPONGrammarParser.BOOLEAN, 0); }
		public List<Boolean_listContext> boolean_list() {
			return getRuleContexts(Boolean_listContext.class);
		}
		public Boolean_listContext boolean_list(int i) {
			return getRuleContext(Boolean_listContext.class,i);
		}
		public Boolean_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterBoolean_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitBoolean_list(this);
		}
	}

	public final Boolean_listContext boolean_list() throws RecognitionException {
		Boolean_listContext _localctx = new Boolean_listContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_boolean_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			match(BOOLEAN);
			setState(84);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(80);
					match(T__23);
					setState(81);
					boolean_list();
					}
					} 
				}
				setState(86);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Integer_listContext extends ParserRuleContext {
		public TerminalNode SENTINEL() { return getToken(CPPONGrammarParser.SENTINEL, 0); }
		public TerminalNode WHOLE() { return getToken(CPPONGrammarParser.WHOLE, 0); }
		public List<Integer_listContext> integer_list() {
			return getRuleContexts(Integer_listContext.class);
		}
		public Integer_listContext integer_list(int i) {
			return getRuleContext(Integer_listContext.class,i);
		}
		public Integer_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_integer_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterInteger_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitInteger_list(this);
		}
	}

	public final Integer_listContext integer_list() throws RecognitionException {
		Integer_listContext _localctx = new Integer_listContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_integer_list);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SENTINEL:
				{
				setState(87);
				match(SENTINEL);
				}
				break;
			case T__24:
				{
				setState(88);
				match(T__24);
				setState(89);
				match(WHOLE);
				}
				break;
			case T__25:
			case WHOLE:
				{
				setState(91);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__25) {
					{
					setState(90);
					match(T__25);
					}
				}

				setState(93);
				match(WHOLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(100);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(96);
					match(T__23);
					setState(97);
					integer_list();
					}
					} 
				}
				setState(102);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Float_listContext extends ParserRuleContext {
		public TerminalNode FLOAT() { return getToken(CPPONGrammarParser.FLOAT, 0); }
		public List<Float_listContext> float_list() {
			return getRuleContexts(Float_listContext.class);
		}
		public Float_listContext float_list(int i) {
			return getRuleContext(Float_listContext.class,i);
		}
		public Float_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_float_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterFloat_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitFloat_list(this);
		}
	}

	public final Float_listContext float_list() throws RecognitionException {
		Float_listContext _localctx = new Float_listContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_float_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(103);
			match(FLOAT);
			setState(108);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(104);
					match(T__23);
					setState(105);
					float_list();
					}
					} 
				}
				setState(110);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class String_listContext extends ParserRuleContext {
		public CstringContext cstring() {
			return getRuleContext(CstringContext.class,0);
		}
		public List<String_listContext> string_list() {
			return getRuleContexts(String_listContext.class);
		}
		public String_listContext string_list(int i) {
			return getRuleContext(String_listContext.class,i);
		}
		public String_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_string_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterString_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitString_list(this);
		}
	}

	public final String_listContext string_list() throws RecognitionException {
		String_listContext _localctx = new String_listContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_string_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			cstring();
			setState(116);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(112);
					match(T__23);
					setState(113);
					string_list();
					}
					} 
				}
				setState(118);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ListContext extends ParserRuleContext {
		public Boolean_listContext boolean_list() {
			return getRuleContext(Boolean_listContext.class,0);
		}
		public Integer_listContext integer_list() {
			return getRuleContext(Integer_listContext.class,0);
		}
		public Float_listContext float_list() {
			return getRuleContext(Float_listContext.class,0);
		}
		public String_listContext string_list() {
			return getRuleContext(String_listContext.class,0);
		}
		public ListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitList(this);
		}
	}

	public final ListContext list() throws RecognitionException {
		ListContext _localctx = new ListContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_list);
		try {
			setState(123);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOLEAN:
				enterOuterAlt(_localctx, 1);
				{
				setState(119);
				boolean_list();
				}
				break;
			case T__24:
			case T__25:
			case WHOLE:
			case SENTINEL:
				enterOuterAlt(_localctx, 2);
				{
				setState(120);
				integer_list();
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(121);
				float_list();
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 4);
				{
				setState(122);
				string_list();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Construct_arrayContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode OPENBRACKET() { return getToken(CPPONGrammarParser.OPENBRACKET, 0); }
		public TerminalNode WHOLE() { return getToken(CPPONGrammarParser.WHOLE, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(CPPONGrammarParser.CLOSEBRACKET, 0); }
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public Construct_arrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_construct_array; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterConstruct_array(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitConstruct_array(this);
		}
	}

	public final Construct_arrayContext construct_array() throws RecognitionException {
		Construct_arrayContext _localctx = new Construct_arrayContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_construct_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(T__26);
			setState(126);
			type();
			setState(127);
			match(OPENBRACKET);
			setState(128);
			match(WHOLE);
			setState(129);
			match(CLOSEBRACKET);
			setState(130);
			match(T__27);
			setState(131);
			list();
			setState(132);
			match(T__28);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParametersContext extends ParserRuleContext {
		public CstringContext cstring() {
			return getRuleContext(CstringContext.class,0);
		}
		public TerminalNode BOOLEAN() { return getToken(CPPONGrammarParser.BOOLEAN, 0); }
		public TerminalNode WHOLE() { return getToken(CPPONGrammarParser.WHOLE, 0); }
		public TerminalNode FLOAT() { return getToken(CPPONGrammarParser.FLOAT, 0); }
		public Construct_arrayContext construct_array() {
			return getRuleContext(Construct_arrayContext.class,0);
		}
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public TerminalNode SENTINEL() { return getToken(CPPONGrammarParser.SENTINEL, 0); }
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public ParametersContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_parameters; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterParameters(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitParameters(this);
		}
	}

	public final ParametersContext parameters() throws RecognitionException {
		ParametersContext _localctx = new ParametersContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_parameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(134);
				cstring();
				}
				break;
			case 2:
				{
				setState(142);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(135);
					match(SENTINEL);
					}
					break;
				case T__24:
					{
					setState(136);
					match(T__24);
					setState(137);
					match(WHOLE);
					}
					break;
				case T__25:
				case WHOLE:
					{
					setState(139);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__25) {
						{
						setState(138);
						match(T__25);
						}
					}

					setState(141);
					match(WHOLE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case 3:
				{
				setState(144);
				match(BOOLEAN);
				}
				break;
			case 4:
				{
				setState(145);
				match(WHOLE);
				setState(148);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__23) {
					{
					setState(146);
					match(T__23);
					setState(147);
					construct_array();
					}
				}

				}
				break;
			case 5:
				{
				setState(150);
				match(FLOAT);
				}
				break;
			case 6:
				{
				setState(151);
				construct_array();
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__23) {
					{
					setState(152);
					match(T__23);
					setState(153);
					match(WHOLE);
					}
				}

				}
				break;
			case 7:
				{
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__29) {
					{
					setState(156);
					match(T__29);
					}
				}

				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REFERENCE) {
					{
					setState(159);
					match(REFERENCE);
					}
				}

				setState(162);
				variable();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperatorContext extends ParserRuleContext {
		public TerminalNode EQUALS() { return getToken(CPPONGrammarParser.EQUALS, 0); }
		public TerminalNode X3DNODESET() { return getToken(CPPONGrammarParser.X3DNODESET, 0); }
		public TerminalNode SET() { return getToken(CPPONGrammarParser.SET, 0); }
		public TerminalNode ADD() { return getToken(CPPONGrammarParser.ADD, 0); }
		public OperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterOperator(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitOperator(this);
		}
	}

	public final OperatorContext operator() throws RecognitionException {
		OperatorContext _localctx = new OperatorContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 979252543488L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunccallContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public ParametersContext parameters() {
			return getRuleContext(ParametersContext.class,0);
		}
		public FunccallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funccall; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterFunccall(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitFunccall(this);
		}
	}

	public final FunccallContext funccall() throws RecognitionException {
		FunccallContext _localctx = new FunccallContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_funccall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			variable();
			setState(168);
			operator();
			setState(169);
			match(IDENTIFIER);
			setState(170);
			match(T__21);
			setState(172);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 16506867941378L) != 0)) {
				{
				setState(171);
				parameters();
				}
			}

			setState(174);
			match(T__22);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ConstructorContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public ConstructorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constructor; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterConstructor(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitConstructor(this);
		}
	}

	public final ConstructorContext constructor() throws RecognitionException {
		ConstructorContext _localctx = new ConstructorContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_constructor);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			type();
			setState(178);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==REFERENCE) {
				{
				setState(177);
				match(REFERENCE);
				}
			}

			setState(180);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Set_fieldContext extends ParserRuleContext {
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public Set_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_set_field; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterSet_field(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitSet_field(this);
		}
	}

	public final Set_fieldContext set_field() throws RecognitionException {
		Set_fieldContext _localctx = new Set_fieldContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_set_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Add_fieldContext extends ParserRuleContext {
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public Add_fieldContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_add_field; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterAdd_field(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitAdd_field(this);
		}
	}

	public final Add_fieldContext add_field() throws RecognitionException {
		Add_fieldContext _localctx = new Add_fieldContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_add_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			funccall();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LineContext extends ParserRuleContext {
		public TerminalNode SEMI() { return getToken(CPPONGrammarParser.SEMI, 0); }
		public ConstructorContext constructor() {
			return getRuleContext(ConstructorContext.class,0);
		}
		public Set_fieldContext set_field() {
			return getRuleContext(Set_fieldContext.class,0);
		}
		public Add_fieldContext add_field() {
			return getRuleContext(Add_fieldContext.class,0);
		}
		public LineContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_line; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterLine(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitLine(this);
		}
	}

	public final LineContext line() throws RecognitionException {
		LineContext _localctx = new LineContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_line);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				setState(186);
				constructor();
				}
				break;
			case 2:
				{
				setState(187);
				set_field();
				}
				break;
			case 3:
				{
				setState(188);
				add_field();
				}
				break;
			}
			setState(191);
			match(SEMI);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LinesContext extends ParserRuleContext {
		public List<LineContext> line() {
			return getRuleContexts(LineContext.class);
		}
		public LineContext line(int i) {
			return getRuleContext(LineContext.class,i);
		}
		public LinesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lines; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterLines(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitLines(this);
		}
	}

	public final LinesContext lines() throws RecognitionException {
		LinesContext _localctx = new LinesContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_lines);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(196);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 4294967422L) != 0)) {
				{
				{
				setState(193);
				line();
				}
				}
				setState(198);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class X3dContext extends ParserRuleContext {
		public LinesContext lines() {
			return getRuleContext(LinesContext.class,0);
		}
		public TerminalNode EOF() { return getToken(CPPONGrammarParser.EOF, 0); }
		public X3dContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_x3d; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterX3d(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitX3d(this);
		}
	}

	public final X3dContext x3d() throws RecognitionException {
		X3dContext _localctx = new X3dContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_x3d);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(199);
			lines();
			setState(200);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u00010\u00cb\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0002\u0001\u0002\u0003\u0002/\b\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0005\u0003"+
		"D\b\u0003\n\u0003\f\u0003G\t\u0003\u0001\u0003\u0001\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0005\u0005S\b\u0005\n\u0005\f\u0005V\t\u0005\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006\\\b\u0006\u0001\u0006"+
		"\u0003\u0006_\b\u0006\u0001\u0006\u0001\u0006\u0005\u0006c\b\u0006\n\u0006"+
		"\f\u0006f\t\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0005\u0007k\b\u0007"+
		"\n\u0007\f\u0007n\t\u0007\u0001\b\u0001\b\u0001\b\u0005\bs\b\b\n\b\f\b"+
		"v\t\b\u0001\t\u0001\t\u0001\t\u0001\t\u0003\t|\b\t\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u008c\b\u000b\u0001\u000b"+
		"\u0003\u000b\u008f\b\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0003\u000b\u0095\b\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0003\u000b\u009b\b\u000b\u0001\u000b\u0003\u000b\u009e\b\u000b\u0001"+
		"\u000b\u0003\u000b\u00a1\b\u000b\u0001\u000b\u0003\u000b\u00a4\b\u000b"+
		"\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\r\u0003\r\u00ad"+
		"\b\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0003\u000e\u00b3\b\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0011\u0003\u0011\u00be\b\u0011\u0001\u0011"+
		"\u0001\u0011\u0001\u0012\u0005\u0012\u00c3\b\u0012\n\u0012\f\u0012\u00c6"+
		"\t\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001\u0013\u0001E\u0000"+
		"\u0014\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018"+
		"\u001a\u001c\u001e \"$&\u0000\u0004\u0002\u0000\u0001\u0006  \u0001\u0000"+
		"\u0012\u0012\u0001\u0000\u0007\u0007\u0002\u0000\"\"%\'\u00e4\u0000(\u0001"+
		"\u0000\u0000\u0000\u0002*\u0001\u0000\u0000\u0000\u0004,\u0001\u0000\u0000"+
		"\u0000\u00060\u0001\u0000\u0000\u0000\bJ\u0001\u0000\u0000\u0000\nO\u0001"+
		"\u0000\u0000\u0000\f^\u0001\u0000\u0000\u0000\u000eg\u0001\u0000\u0000"+
		"\u0000\u0010o\u0001\u0000\u0000\u0000\u0012{\u0001\u0000\u0000\u0000\u0014"+
		"}\u0001\u0000\u0000\u0000\u0016\u00a3\u0001\u0000\u0000\u0000\u0018\u00a5"+
		"\u0001\u0000\u0000\u0000\u001a\u00a7\u0001\u0000\u0000\u0000\u001c\u00b0"+
		"\u0001\u0000\u0000\u0000\u001e\u00b6\u0001\u0000\u0000\u0000 \u00b8\u0001"+
		"\u0000\u0000\u0000\"\u00bd\u0001\u0000\u0000\u0000$\u00c4\u0001\u0000"+
		"\u0000\u0000&\u00c7\u0001\u0000\u0000\u0000()\u0007\u0000\u0000\u0000"+
		")\u0001\u0001\u0000\u0000\u0000*+\u0005 \u0000\u0000+\u0003\u0001\u0000"+
		"\u0000\u0000,.\u0005 \u0000\u0000-/\u0005(\u0000\u0000.-\u0001\u0000\u0000"+
		"\u0000./\u0001\u0000\u0000\u0000/\u0005\u0001\u0000\u0000\u00000E\u0005"+
		"\u0007\u0000\u00001D\u0005\b\u0000\u00002D\u0005\t\u0000\u00003D\u0005"+
		"\n\u0000\u00004D\u0005\u000b\u0000\u00005D\u0005\f\u0000\u00006D\u0005"+
		"\r\u0000\u00007D\u0005\u000e\u0000\u00008D\u0005\u000f\u0000\u00009D\u0005"+
		"0\u0000\u0000:D\u0005/\u0000\u0000;D\u0005\u0010\u0000\u0000<D\u0005\u0011"+
		"\u0000\u0000=>\u0005\u0012\u0000\u0000>D\b\u0001\u0000\u0000?D\u0005\u0013"+
		"\u0000\u0000@D\u0005\u0014\u0000\u0000AD\u0005\u0015\u0000\u0000BD\b\u0002"+
		"\u0000\u0000C1\u0001\u0000\u0000\u0000C2\u0001\u0000\u0000\u0000C3\u0001"+
		"\u0000\u0000\u0000C4\u0001\u0000\u0000\u0000C5\u0001\u0000\u0000\u0000"+
		"C6\u0001\u0000\u0000\u0000C7\u0001\u0000\u0000\u0000C8\u0001\u0000\u0000"+
		"\u0000C9\u0001\u0000\u0000\u0000C:\u0001\u0000\u0000\u0000C;\u0001\u0000"+
		"\u0000\u0000C<\u0001\u0000\u0000\u0000C=\u0001\u0000\u0000\u0000C?\u0001"+
		"\u0000\u0000\u0000C@\u0001\u0000\u0000\u0000CA\u0001\u0000\u0000\u0000"+
		"CB\u0001\u0000\u0000\u0000DG\u0001\u0000\u0000\u0000EF\u0001\u0000\u0000"+
		"\u0000EC\u0001\u0000\u0000\u0000FH\u0001\u0000\u0000\u0000GE\u0001\u0000"+
		"\u0000\u0000HI\u0005\u0007\u0000\u0000I\u0007\u0001\u0000\u0000\u0000"+
		"JK\u0005\u0001\u0000\u0000KL\u0005\u0016\u0000\u0000LM\u0003\u0006\u0003"+
		"\u0000MN\u0005\u0017\u0000\u0000N\t\u0001\u0000\u0000\u0000OT\u0005+\u0000"+
		"\u0000PQ\u0005\u0018\u0000\u0000QS\u0003\n\u0005\u0000RP\u0001\u0000\u0000"+
		"\u0000SV\u0001\u0000\u0000\u0000TR\u0001\u0000\u0000\u0000TU\u0001\u0000"+
		"\u0000\u0000U\u000b\u0001\u0000\u0000\u0000VT\u0001\u0000\u0000\u0000"+
		"W_\u0005)\u0000\u0000XY\u0005\u0019\u0000\u0000Y_\u0005(\u0000\u0000Z"+
		"\\\u0005\u001a\u0000\u0000[Z\u0001\u0000\u0000\u0000[\\\u0001\u0000\u0000"+
		"\u0000\\]\u0001\u0000\u0000\u0000]_\u0005(\u0000\u0000^W\u0001\u0000\u0000"+
		"\u0000^X\u0001\u0000\u0000\u0000^[\u0001\u0000\u0000\u0000_d\u0001\u0000"+
		"\u0000\u0000`a\u0005\u0018\u0000\u0000ac\u0003\f\u0006\u0000b`\u0001\u0000"+
		"\u0000\u0000cf\u0001\u0000\u0000\u0000db\u0001\u0000\u0000\u0000de\u0001"+
		"\u0000\u0000\u0000e\r\u0001\u0000\u0000\u0000fd\u0001\u0000\u0000\u0000"+
		"gl\u0005*\u0000\u0000hi\u0005\u0018\u0000\u0000ik\u0003\u000e\u0007\u0000"+
		"jh\u0001\u0000\u0000\u0000kn\u0001\u0000\u0000\u0000lj\u0001\u0000\u0000"+
		"\u0000lm\u0001\u0000\u0000\u0000m\u000f\u0001\u0000\u0000\u0000nl\u0001"+
		"\u0000\u0000\u0000ot\u0003\b\u0004\u0000pq\u0005\u0018\u0000\u0000qs\u0003"+
		"\u0010\b\u0000rp\u0001\u0000\u0000\u0000sv\u0001\u0000\u0000\u0000tr\u0001"+
		"\u0000\u0000\u0000tu\u0001\u0000\u0000\u0000u\u0011\u0001\u0000\u0000"+
		"\u0000vt\u0001\u0000\u0000\u0000w|\u0003\n\u0005\u0000x|\u0003\f\u0006"+
		"\u0000y|\u0003\u000e\u0007\u0000z|\u0003\u0010\b\u0000{w\u0001\u0000\u0000"+
		"\u0000{x\u0001\u0000\u0000\u0000{y\u0001\u0000\u0000\u0000{z\u0001\u0000"+
		"\u0000\u0000|\u0013\u0001\u0000\u0000\u0000}~\u0005\u001b\u0000\u0000"+
		"~\u007f\u0003\u0000\u0000\u0000\u007f\u0080\u0005-\u0000\u0000\u0080\u0081"+
		"\u0005(\u0000\u0000\u0081\u0082\u0005.\u0000\u0000\u0082\u0083\u0005\u001c"+
		"\u0000\u0000\u0083\u0084\u0003\u0012\t\u0000\u0084\u0085\u0005\u001d\u0000"+
		"\u0000\u0085\u0015\u0001\u0000\u0000\u0000\u0086\u00a4\u0003\b\u0004\u0000"+
		"\u0087\u008f\u0005)\u0000\u0000\u0088\u0089\u0005\u0019\u0000\u0000\u0089"+
		"\u008f\u0005(\u0000\u0000\u008a\u008c\u0005\u001a\u0000\u0000\u008b\u008a"+
		"\u0001\u0000\u0000\u0000\u008b\u008c\u0001\u0000\u0000\u0000\u008c\u008d"+
		"\u0001\u0000\u0000\u0000\u008d\u008f\u0005(\u0000\u0000\u008e\u0087\u0001"+
		"\u0000\u0000\u0000\u008e\u0088\u0001\u0000\u0000\u0000\u008e\u008b\u0001"+
		"\u0000\u0000\u0000\u008f\u00a4\u0001\u0000\u0000\u0000\u0090\u00a4\u0005"+
		"+\u0000\u0000\u0091\u0094\u0005(\u0000\u0000\u0092\u0093\u0005\u0018\u0000"+
		"\u0000\u0093\u0095\u0003\u0014\n\u0000\u0094\u0092\u0001\u0000\u0000\u0000"+
		"\u0094\u0095\u0001\u0000\u0000\u0000\u0095\u00a4\u0001\u0000\u0000\u0000"+
		"\u0096\u00a4\u0005*\u0000\u0000\u0097\u009a\u0003\u0014\n\u0000\u0098"+
		"\u0099\u0005\u0018\u0000\u0000\u0099\u009b\u0005(\u0000\u0000\u009a\u0098"+
		"\u0001\u0000\u0000\u0000\u009a\u009b\u0001\u0000\u0000\u0000\u009b\u00a4"+
		"\u0001\u0000\u0000\u0000\u009c\u009e\u0005\u001e\u0000\u0000\u009d\u009c"+
		"\u0001\u0000\u0000\u0000\u009d\u009e\u0001\u0000\u0000\u0000\u009e\u00a0"+
		"\u0001\u0000\u0000\u0000\u009f\u00a1\u0005!\u0000\u0000\u00a0\u009f\u0001"+
		"\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000\u0000\u0000\u00a1\u00a2\u0001"+
		"\u0000\u0000\u0000\u00a2\u00a4\u0003\u0004\u0002\u0000\u00a3\u0086\u0001"+
		"\u0000\u0000\u0000\u00a3\u008e\u0001\u0000\u0000\u0000\u00a3\u0090\u0001"+
		"\u0000\u0000\u0000\u00a3\u0091\u0001\u0000\u0000\u0000\u00a3\u0096\u0001"+
		"\u0000\u0000\u0000\u00a3\u0097\u0001\u0000\u0000\u0000\u00a3\u009d\u0001"+
		"\u0000\u0000\u0000\u00a4\u0017\u0001\u0000\u0000\u0000\u00a5\u00a6\u0007"+
		"\u0003\u0000\u0000\u00a6\u0019\u0001\u0000\u0000\u0000\u00a7\u00a8\u0003"+
		"\u0004\u0002\u0000\u00a8\u00a9\u0003\u0018\f\u0000\u00a9\u00aa\u0005 "+
		"\u0000\u0000\u00aa\u00ac\u0005\u0016\u0000\u0000\u00ab\u00ad\u0003\u0016"+
		"\u000b\u0000\u00ac\u00ab\u0001\u0000\u0000\u0000\u00ac\u00ad\u0001\u0000"+
		"\u0000\u0000\u00ad\u00ae\u0001\u0000\u0000\u0000\u00ae\u00af\u0005\u0017"+
		"\u0000\u0000\u00af\u001b\u0001\u0000\u0000\u0000\u00b0\u00b2\u0003\u0000"+
		"\u0000\u0000\u00b1\u00b3\u0005!\u0000\u0000\u00b2\u00b1\u0001\u0000\u0000"+
		"\u0000\u00b2\u00b3\u0001\u0000\u0000\u0000\u00b3\u00b4\u0001\u0000\u0000"+
		"\u0000\u00b4\u00b5\u0003\u001a\r\u0000\u00b5\u001d\u0001\u0000\u0000\u0000"+
		"\u00b6\u00b7\u0003\u001a\r\u0000\u00b7\u001f\u0001\u0000\u0000\u0000\u00b8"+
		"\u00b9\u0003\u001a\r\u0000\u00b9!\u0001\u0000\u0000\u0000\u00ba\u00be"+
		"\u0003\u001c\u000e\u0000\u00bb\u00be\u0003\u001e\u000f\u0000\u00bc\u00be"+
		"\u0003 \u0010\u0000\u00bd\u00ba\u0001\u0000\u0000\u0000\u00bd\u00bb\u0001"+
		"\u0000\u0000\u0000\u00bd\u00bc\u0001\u0000\u0000\u0000\u00be\u00bf\u0001"+
		"\u0000\u0000\u0000\u00bf\u00c0\u0005#\u0000\u0000\u00c0#\u0001\u0000\u0000"+
		"\u0000\u00c1\u00c3\u0003\"\u0011\u0000\u00c2\u00c1\u0001\u0000\u0000\u0000"+
		"\u00c3\u00c6\u0001\u0000\u0000\u0000\u00c4\u00c2\u0001\u0000\u0000\u0000"+
		"\u00c4\u00c5\u0001\u0000\u0000\u0000\u00c5%\u0001\u0000\u0000\u0000\u00c6"+
		"\u00c4\u0001\u0000\u0000\u0000\u00c7\u00c8\u0003$\u0012\u0000\u00c8\u00c9"+
		"\u0005\u0000\u0000\u0001\u00c9\'\u0001\u0000\u0000\u0000\u0015.CET[^d"+
		"lt{\u008b\u008e\u0094\u009a\u009d\u00a0\u00a3\u00ac\u00b2\u00bd\u00c4";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
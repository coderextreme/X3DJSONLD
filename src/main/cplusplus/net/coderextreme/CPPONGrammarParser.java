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
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, T__30=31, 
		T__31=32, T__32=33, WS=34, IDENTIFIER=35, REFERENCE=36, EQUALS=37, SEMI=38, 
		COLON=39, SET=40, X3DNODESET=41, ADD=42, WHOLE=43, SENTINEL=44, FLOAT=45, 
		TRUE=46, FALSE=47, COMMENT=48, OPENBRACKET=49, CLOSEBRACKET=50, QUOTE=51, 
		AT=52;
	public static final int
		RULE_type = 0, RULE_field = 1, RULE_variable = 2, RULE_string = 3, RULE_cstring = 4, 
		RULE_boolean = 5, RULE_boolean_list = 6, RULE_integer_list = 7, RULE_float_list = 8, 
		RULE_string_list = 9, RULE_list = 10, RULE_construct_array = 11, RULE_parameters = 12, 
		RULE_operator = 13, RULE_funccall = 14, RULE_constructor = 15, RULE_set_field = 16, 
		RULE_add_field = 17, RULE_line = 18, RULE_lines = 19, RULE_x3d = 20;
	private static String[] makeRuleNames() {
		return new String[] {
			"type", "field", "variable", "string", "cstring", "boolean", "boolean_list", 
			"integer_list", "float_list", "string_list", "list", "construct_array", 
			"parameters", "operator", "funccall", "constructor", "set_field", "add_field", 
			"line", "lines", "x3d"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'CString'", "'bool'", "'int'", "'int32_t'", "'float'", "'double'", 
			"'\"'", "'https://'", "'http://'", "'*'", "'%'", "'!'", "'?'", "'<'", 
			"'>'", "'~'", "'#'", "'/'", "'\\\"'", "'\\\\'", "'\\'", "'.'", "'('", 
			"')'", "'true'", "'false'", "','", "'-'", "'+'", "'new '", "'{'", "'}'", 
			"'(X3DNode *)'", null, null, "'&'", "'='", "';'", "':'", "'.set'", "'.X3DNode::set'", 
			"'.add'", null, "'-1'", null, null, null, null, "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, "WS", "IDENTIFIER", 
			"REFERENCE", "EQUALS", "SEMI", "COLON", "SET", "X3DNODESET", "ADD", "WHOLE", 
			"SENTINEL", "FLOAT", "TRUE", "FALSE", "COMMENT", "OPENBRACKET", "CLOSEBRACKET", 
			"QUOTE", "AT"
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
			setState(42);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 34359738494L) != 0)) ) {
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
			setState(44);
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
			setState(46);
			match(IDENTIFIER);
			setState(48);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHOLE) {
				{
				setState(47);
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
			setState(50);
			match(T__6);
			setState(72);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(70);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
					case 1:
						{
						setState(51);
						match(T__7);
						}
						break;
					case 2:
						{
						setState(52);
						match(T__8);
						}
						break;
					case 3:
						{
						setState(53);
						match(T__9);
						}
						break;
					case 4:
						{
						setState(54);
						match(T__10);
						}
						break;
					case 5:
						{
						setState(55);
						match(T__11);
						}
						break;
					case 6:
						{
						setState(56);
						match(T__12);
						}
						break;
					case 7:
						{
						setState(57);
						match(T__13);
						}
						break;
					case 8:
						{
						setState(58);
						match(T__14);
						}
						break;
					case 9:
						{
						setState(59);
						match(AT);
						}
						break;
					case 10:
						{
						setState(60);
						match(QUOTE);
						}
						break;
					case 11:
						{
						setState(61);
						match(T__15);
						}
						break;
					case 12:
						{
						setState(62);
						match(T__16);
						}
						break;
					case 13:
						{
						setState(63);
						match(T__17);
						setState(64);
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
						setState(65);
						match(T__18);
						}
						break;
					case 15:
						{
						setState(66);
						match(T__19);
						}
						break;
					case 16:
						{
						setState(67);
						match(T__20);
						}
						break;
					case 17:
						{
						setState(68);
						match(T__21);
						}
						break;
					case 18:
						{
						setState(69);
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
				setState(74);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(75);
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
			setState(77);
			match(T__0);
			setState(78);
			match(T__22);
			setState(79);
			string();
			setState(80);
			match(T__23);
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
	public static class BooleanContext extends ParserRuleContext {
		public BooleanContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_boolean; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterBoolean(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitBoolean(this);
		}
	}

	public final BooleanContext boolean_() throws RecognitionException {
		BooleanContext _localctx = new BooleanContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_boolean);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(82);
			_la = _input.LA(1);
			if ( !(_la==T__24 || _la==T__25) ) {
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
	public static class Boolean_listContext extends ParserRuleContext {
		public List<BooleanContext> boolean_() {
			return getRuleContexts(BooleanContext.class);
		}
		public BooleanContext boolean_(int i) {
			return getRuleContext(BooleanContext.class,i);
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
		enterRule(_localctx, 12, RULE_boolean_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			boolean_();
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(85);
				match(T__26);
				setState(86);
				boolean_();
				}
				}
				setState(91);
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
	public static class Integer_listContext extends ParserRuleContext {
		public List<TerminalNode> SENTINEL() { return getTokens(CPPONGrammarParser.SENTINEL); }
		public TerminalNode SENTINEL(int i) {
			return getToken(CPPONGrammarParser.SENTINEL, i);
		}
		public List<TerminalNode> WHOLE() { return getTokens(CPPONGrammarParser.WHOLE); }
		public TerminalNode WHOLE(int i) {
			return getToken(CPPONGrammarParser.WHOLE, i);
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
		enterRule(_localctx, 14, RULE_integer_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(99);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SENTINEL:
				{
				setState(92);
				match(SENTINEL);
				}
				break;
			case T__27:
				{
				setState(93);
				match(T__27);
				setState(94);
				match(WHOLE);
				}
				break;
			case T__28:
			case WHOLE:
				{
				setState(96);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__28) {
					{
					setState(95);
					match(T__28);
					}
				}

				setState(98);
				match(WHOLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(113);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(101);
				match(T__26);
				setState(109);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(102);
					match(SENTINEL);
					}
					break;
				case T__27:
					{
					setState(103);
					match(T__27);
					setState(104);
					match(WHOLE);
					}
					break;
				case T__28:
				case WHOLE:
					{
					setState(106);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__28) {
						{
						setState(105);
						match(T__28);
						}
					}

					setState(108);
					match(WHOLE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(115);
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
	public static class Float_listContext extends ParserRuleContext {
		public List<TerminalNode> FLOAT() { return getTokens(CPPONGrammarParser.FLOAT); }
		public TerminalNode FLOAT(int i) {
			return getToken(CPPONGrammarParser.FLOAT, i);
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
		enterRule(_localctx, 16, RULE_float_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(FLOAT);
			setState(121);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(117);
				match(T__26);
				setState(118);
				match(FLOAT);
				}
				}
				setState(123);
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
	public static class String_listContext extends ParserRuleContext {
		public List<CstringContext> cstring() {
			return getRuleContexts(CstringContext.class);
		}
		public CstringContext cstring(int i) {
			return getRuleContext(CstringContext.class,i);
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
		enterRule(_localctx, 18, RULE_string_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			cstring();
			setState(129);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__26) {
				{
				{
				setState(125);
				match(T__26);
				setState(126);
				cstring();
				}
				}
				setState(131);
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
		enterRule(_localctx, 20, RULE_list);
		try {
			setState(136);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__24:
			case T__25:
				enterOuterAlt(_localctx, 1);
				{
				setState(132);
				boolean_list();
				}
				break;
			case T__27:
			case T__28:
			case WHOLE:
			case SENTINEL:
				enterOuterAlt(_localctx, 2);
				{
				setState(133);
				integer_list();
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(134);
				float_list();
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 4);
				{
				setState(135);
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
		enterRule(_localctx, 22, RULE_construct_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			match(T__29);
			setState(139);
			type();
			setState(140);
			match(OPENBRACKET);
			setState(141);
			match(WHOLE);
			setState(142);
			match(CLOSEBRACKET);
			setState(143);
			match(T__30);
			setState(144);
			list();
			setState(145);
			match(T__31);
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
		public BooleanContext boolean_() {
			return getRuleContext(BooleanContext.class,0);
		}
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
		enterRule(_localctx, 24, RULE_parameters);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(176);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(147);
				cstring();
				}
				break;
			case 2:
				{
				setState(155);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(148);
					match(SENTINEL);
					}
					break;
				case T__27:
					{
					setState(149);
					match(T__27);
					setState(150);
					match(WHOLE);
					}
					break;
				case T__28:
				case WHOLE:
					{
					setState(152);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__28) {
						{
						setState(151);
						match(T__28);
						}
					}

					setState(154);
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
				setState(157);
				boolean_();
				}
				break;
			case 4:
				{
				setState(158);
				match(WHOLE);
				setState(161);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__26) {
					{
					setState(159);
					match(T__26);
					setState(160);
					construct_array();
					}
				}

				}
				break;
			case 5:
				{
				setState(163);
				match(FLOAT);
				}
				break;
			case 6:
				{
				setState(164);
				construct_array();
				setState(167);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__26) {
					{
					setState(165);
					match(T__26);
					setState(166);
					match(WHOLE);
					}
				}

				}
				break;
			case 7:
				{
				setState(170);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__32) {
					{
					setState(169);
					match(T__32);
					}
				}

				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REFERENCE) {
					{
					setState(172);
					match(REFERENCE);
					}
				}

				setState(175);
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
		enterRule(_localctx, 26, RULE_operator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 7834020347904L) != 0)) ) {
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
		enterRule(_localctx, 28, RULE_funccall);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			variable();
			setState(181);
			operator();
			setState(182);
			match(IDENTIFIER);
			setState(183);
			match(T__22);
			setState(185);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 61686300016642L) != 0)) {
				{
				setState(184);
				parameters();
				}
			}

			setState(187);
			match(T__23);
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
		enterRule(_localctx, 30, RULE_constructor);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			type();
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==REFERENCE) {
				{
				setState(190);
				match(REFERENCE);
				}
			}

			setState(193);
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
		enterRule(_localctx, 32, RULE_set_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
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
		enterRule(_localctx, 34, RULE_add_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
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
		enterRule(_localctx, 36, RULE_line);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(199);
				constructor();
				}
				break;
			case 2:
				{
				setState(200);
				set_field();
				}
				break;
			case 3:
				{
				setState(201);
				add_field();
				}
				break;
			}
			setState(204);
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
		enterRule(_localctx, 38, RULE_lines);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 34359738494L) != 0)) {
				{
				{
				setState(206);
				line();
				}
				}
				setState(211);
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
		enterRule(_localctx, 40, RULE_x3d);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(212);
			lines();
			setState(213);
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
		"\u0004\u00014\u00d8\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0001\u0000\u0001\u0000"+
		"\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0003\u00021\b\u0002"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0005\u0003G\b\u0003\n\u0003\f\u0003J\t\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0005\u0006X\b\u0006\n\u0006\f\u0006[\t\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0003\u0007a\b\u0007\u0001\u0007\u0003\u0007"+
		"d\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0003\u0007k\b\u0007\u0001\u0007\u0003\u0007n\b\u0007\u0005\u0007p\b"+
		"\u0007\n\u0007\f\u0007s\t\u0007\u0001\b\u0001\b\u0001\b\u0005\bx\b\b\n"+
		"\b\f\b{\t\b\u0001\t\u0001\t\u0001\t\u0005\t\u0080\b\t\n\t\f\t\u0083\t"+
		"\t\u0001\n\u0001\n\u0001\n\u0001\n\u0003\n\u0089\b\n\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u0099"+
		"\b\f\u0001\f\u0003\f\u009c\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f"+
		"\u00a2\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u00a8\b\f\u0001\f\u0003"+
		"\f\u00ab\b\f\u0001\f\u0003\f\u00ae\b\f\u0001\f\u0003\f\u00b1\b\f\u0001"+
		"\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0003\u000e\u00ba\b\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f"+
		"\u0003\u000f\u00c0\b\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012"+
		"\u00cb\b\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0005\u0013\u00d0\b"+
		"\u0013\n\u0013\f\u0013\u00d3\t\u0013\u0001\u0014\u0001\u0014\u0001\u0014"+
		"\u0001\u0014\u0001H\u0000\u0015\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(\u0000\u0005\u0002\u0000"+
		"\u0001\u0006##\u0001\u0000\u0012\u0012\u0001\u0000\u0007\u0007\u0001\u0000"+
		"\u0019\u001a\u0002\u0000%%(*\u00f4\u0000*\u0001\u0000\u0000\u0000\u0002"+
		",\u0001\u0000\u0000\u0000\u0004.\u0001\u0000\u0000\u0000\u00062\u0001"+
		"\u0000\u0000\u0000\bM\u0001\u0000\u0000\u0000\nR\u0001\u0000\u0000\u0000"+
		"\fT\u0001\u0000\u0000\u0000\u000ec\u0001\u0000\u0000\u0000\u0010t\u0001"+
		"\u0000\u0000\u0000\u0012|\u0001\u0000\u0000\u0000\u0014\u0088\u0001\u0000"+
		"\u0000\u0000\u0016\u008a\u0001\u0000\u0000\u0000\u0018\u00b0\u0001\u0000"+
		"\u0000\u0000\u001a\u00b2\u0001\u0000\u0000\u0000\u001c\u00b4\u0001\u0000"+
		"\u0000\u0000\u001e\u00bd\u0001\u0000\u0000\u0000 \u00c3\u0001\u0000\u0000"+
		"\u0000\"\u00c5\u0001\u0000\u0000\u0000$\u00ca\u0001\u0000\u0000\u0000"+
		"&\u00d1\u0001\u0000\u0000\u0000(\u00d4\u0001\u0000\u0000\u0000*+\u0007"+
		"\u0000\u0000\u0000+\u0001\u0001\u0000\u0000\u0000,-\u0005#\u0000\u0000"+
		"-\u0003\u0001\u0000\u0000\u0000.0\u0005#\u0000\u0000/1\u0005+\u0000\u0000"+
		"0/\u0001\u0000\u0000\u000001\u0001\u0000\u0000\u00001\u0005\u0001\u0000"+
		"\u0000\u00002H\u0005\u0007\u0000\u00003G\u0005\b\u0000\u00004G\u0005\t"+
		"\u0000\u00005G\u0005\n\u0000\u00006G\u0005\u000b\u0000\u00007G\u0005\f"+
		"\u0000\u00008G\u0005\r\u0000\u00009G\u0005\u000e\u0000\u0000:G\u0005\u000f"+
		"\u0000\u0000;G\u00054\u0000\u0000<G\u00053\u0000\u0000=G\u0005\u0010\u0000"+
		"\u0000>G\u0005\u0011\u0000\u0000?@\u0005\u0012\u0000\u0000@G\b\u0001\u0000"+
		"\u0000AG\u0005\u0013\u0000\u0000BG\u0005\u0014\u0000\u0000CG\u0005\u0015"+
		"\u0000\u0000DG\u0005\u0016\u0000\u0000EG\b\u0002\u0000\u0000F3\u0001\u0000"+
		"\u0000\u0000F4\u0001\u0000\u0000\u0000F5\u0001\u0000\u0000\u0000F6\u0001"+
		"\u0000\u0000\u0000F7\u0001\u0000\u0000\u0000F8\u0001\u0000\u0000\u0000"+
		"F9\u0001\u0000\u0000\u0000F:\u0001\u0000\u0000\u0000F;\u0001\u0000\u0000"+
		"\u0000F<\u0001\u0000\u0000\u0000F=\u0001\u0000\u0000\u0000F>\u0001\u0000"+
		"\u0000\u0000F?\u0001\u0000\u0000\u0000FA\u0001\u0000\u0000\u0000FB\u0001"+
		"\u0000\u0000\u0000FC\u0001\u0000\u0000\u0000FD\u0001\u0000\u0000\u0000"+
		"FE\u0001\u0000\u0000\u0000GJ\u0001\u0000\u0000\u0000HI\u0001\u0000\u0000"+
		"\u0000HF\u0001\u0000\u0000\u0000IK\u0001\u0000\u0000\u0000JH\u0001\u0000"+
		"\u0000\u0000KL\u0005\u0007\u0000\u0000L\u0007\u0001\u0000\u0000\u0000"+
		"MN\u0005\u0001\u0000\u0000NO\u0005\u0017\u0000\u0000OP\u0003\u0006\u0003"+
		"\u0000PQ\u0005\u0018\u0000\u0000Q\t\u0001\u0000\u0000\u0000RS\u0007\u0003"+
		"\u0000\u0000S\u000b\u0001\u0000\u0000\u0000TY\u0003\n\u0005\u0000UV\u0005"+
		"\u001b\u0000\u0000VX\u0003\n\u0005\u0000WU\u0001\u0000\u0000\u0000X[\u0001"+
		"\u0000\u0000\u0000YW\u0001\u0000\u0000\u0000YZ\u0001\u0000\u0000\u0000"+
		"Z\r\u0001\u0000\u0000\u0000[Y\u0001\u0000\u0000\u0000\\d\u0005,\u0000"+
		"\u0000]^\u0005\u001c\u0000\u0000^d\u0005+\u0000\u0000_a\u0005\u001d\u0000"+
		"\u0000`_\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000\u0000ab\u0001\u0000"+
		"\u0000\u0000bd\u0005+\u0000\u0000c\\\u0001\u0000\u0000\u0000c]\u0001\u0000"+
		"\u0000\u0000c`\u0001\u0000\u0000\u0000dq\u0001\u0000\u0000\u0000em\u0005"+
		"\u001b\u0000\u0000fn\u0005,\u0000\u0000gh\u0005\u001c\u0000\u0000hn\u0005"+
		"+\u0000\u0000ik\u0005\u001d\u0000\u0000ji\u0001\u0000\u0000\u0000jk\u0001"+
		"\u0000\u0000\u0000kl\u0001\u0000\u0000\u0000ln\u0005+\u0000\u0000mf\u0001"+
		"\u0000\u0000\u0000mg\u0001\u0000\u0000\u0000mj\u0001\u0000\u0000\u0000"+
		"np\u0001\u0000\u0000\u0000oe\u0001\u0000\u0000\u0000ps\u0001\u0000\u0000"+
		"\u0000qo\u0001\u0000\u0000\u0000qr\u0001\u0000\u0000\u0000r\u000f\u0001"+
		"\u0000\u0000\u0000sq\u0001\u0000\u0000\u0000ty\u0005-\u0000\u0000uv\u0005"+
		"\u001b\u0000\u0000vx\u0005-\u0000\u0000wu\u0001\u0000\u0000\u0000x{\u0001"+
		"\u0000\u0000\u0000yw\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000"+
		"z\u0011\u0001\u0000\u0000\u0000{y\u0001\u0000\u0000\u0000|\u0081\u0003"+
		"\b\u0004\u0000}~\u0005\u001b\u0000\u0000~\u0080\u0003\b\u0004\u0000\u007f"+
		"}\u0001\u0000\u0000\u0000\u0080\u0083\u0001\u0000\u0000\u0000\u0081\u007f"+
		"\u0001\u0000\u0000\u0000\u0081\u0082\u0001\u0000\u0000\u0000\u0082\u0013"+
		"\u0001\u0000\u0000\u0000\u0083\u0081\u0001\u0000\u0000\u0000\u0084\u0089"+
		"\u0003\f\u0006\u0000\u0085\u0089\u0003\u000e\u0007\u0000\u0086\u0089\u0003"+
		"\u0010\b\u0000\u0087\u0089\u0003\u0012\t\u0000\u0088\u0084\u0001\u0000"+
		"\u0000\u0000\u0088\u0085\u0001\u0000\u0000\u0000\u0088\u0086\u0001\u0000"+
		"\u0000\u0000\u0088\u0087\u0001\u0000\u0000\u0000\u0089\u0015\u0001\u0000"+
		"\u0000\u0000\u008a\u008b\u0005\u001e\u0000\u0000\u008b\u008c\u0003\u0000"+
		"\u0000\u0000\u008c\u008d\u00051\u0000\u0000\u008d\u008e\u0005+\u0000\u0000"+
		"\u008e\u008f\u00052\u0000\u0000\u008f\u0090\u0005\u001f\u0000\u0000\u0090"+
		"\u0091\u0003\u0014\n\u0000\u0091\u0092\u0005 \u0000\u0000\u0092\u0017"+
		"\u0001\u0000\u0000\u0000\u0093\u00b1\u0003\b\u0004\u0000\u0094\u009c\u0005"+
		",\u0000\u0000\u0095\u0096\u0005\u001c\u0000\u0000\u0096\u009c\u0005+\u0000"+
		"\u0000\u0097\u0099\u0005\u001d\u0000\u0000\u0098\u0097\u0001\u0000\u0000"+
		"\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u009a\u0001\u0000\u0000"+
		"\u0000\u009a\u009c\u0005+\u0000\u0000\u009b\u0094\u0001\u0000\u0000\u0000"+
		"\u009b\u0095\u0001\u0000\u0000\u0000\u009b\u0098\u0001\u0000\u0000\u0000"+
		"\u009c\u00b1\u0001\u0000\u0000\u0000\u009d\u00b1\u0003\n\u0005\u0000\u009e"+
		"\u00a1\u0005+\u0000\u0000\u009f\u00a0\u0005\u001b\u0000\u0000\u00a0\u00a2"+
		"\u0003\u0016\u000b\u0000\u00a1\u009f\u0001\u0000\u0000\u0000\u00a1\u00a2"+
		"\u0001\u0000\u0000\u0000\u00a2\u00b1\u0001\u0000\u0000\u0000\u00a3\u00b1"+
		"\u0005-\u0000\u0000\u00a4\u00a7\u0003\u0016\u000b\u0000\u00a5\u00a6\u0005"+
		"\u001b\u0000\u0000\u00a6\u00a8\u0005+\u0000\u0000\u00a7\u00a5\u0001\u0000"+
		"\u0000\u0000\u00a7\u00a8\u0001\u0000\u0000\u0000\u00a8\u00b1\u0001\u0000"+
		"\u0000\u0000\u00a9\u00ab\u0005!\u0000\u0000\u00aa\u00a9\u0001\u0000\u0000"+
		"\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000\u00ab\u00ad\u0001\u0000\u0000"+
		"\u0000\u00ac\u00ae\u0005$\u0000\u0000\u00ad\u00ac\u0001\u0000\u0000\u0000"+
		"\u00ad\u00ae\u0001\u0000\u0000\u0000\u00ae\u00af\u0001\u0000\u0000\u0000"+
		"\u00af\u00b1\u0003\u0004\u0002\u0000\u00b0\u0093\u0001\u0000\u0000\u0000"+
		"\u00b0\u009b\u0001\u0000\u0000\u0000\u00b0\u009d\u0001\u0000\u0000\u0000"+
		"\u00b0\u009e\u0001\u0000\u0000\u0000\u00b0\u00a3\u0001\u0000\u0000\u0000"+
		"\u00b0\u00a4\u0001\u0000\u0000\u0000\u00b0\u00aa\u0001\u0000\u0000\u0000"+
		"\u00b1\u0019\u0001\u0000\u0000\u0000\u00b2\u00b3\u0007\u0004\u0000\u0000"+
		"\u00b3\u001b\u0001\u0000\u0000\u0000\u00b4\u00b5\u0003\u0004\u0002\u0000"+
		"\u00b5\u00b6\u0003\u001a\r\u0000\u00b6\u00b7\u0005#\u0000\u0000\u00b7"+
		"\u00b9\u0005\u0017\u0000\u0000\u00b8\u00ba\u0003\u0018\f\u0000\u00b9\u00b8"+
		"\u0001\u0000\u0000\u0000\u00b9\u00ba\u0001\u0000\u0000\u0000\u00ba\u00bb"+
		"\u0001\u0000\u0000\u0000\u00bb\u00bc\u0005\u0018\u0000\u0000\u00bc\u001d"+
		"\u0001\u0000\u0000\u0000\u00bd\u00bf\u0003\u0000\u0000\u0000\u00be\u00c0"+
		"\u0005$\u0000\u0000\u00bf\u00be\u0001\u0000\u0000\u0000\u00bf\u00c0\u0001"+
		"\u0000\u0000\u0000\u00c0\u00c1\u0001\u0000\u0000\u0000\u00c1\u00c2\u0003"+
		"\u001c\u000e\u0000\u00c2\u001f\u0001\u0000\u0000\u0000\u00c3\u00c4\u0003"+
		"\u001c\u000e\u0000\u00c4!\u0001\u0000\u0000\u0000\u00c5\u00c6\u0003\u001c"+
		"\u000e\u0000\u00c6#\u0001\u0000\u0000\u0000\u00c7\u00cb\u0003\u001e\u000f"+
		"\u0000\u00c8\u00cb\u0003 \u0010\u0000\u00c9\u00cb\u0003\"\u0011\u0000"+
		"\u00ca\u00c7\u0001\u0000\u0000\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000"+
		"\u00ca\u00c9\u0001\u0000\u0000\u0000\u00cb\u00cc\u0001\u0000\u0000\u0000"+
		"\u00cc\u00cd\u0005&\u0000\u0000\u00cd%\u0001\u0000\u0000\u0000\u00ce\u00d0"+
		"\u0003$\u0012\u0000\u00cf\u00ce\u0001\u0000\u0000\u0000\u00d0\u00d3\u0001"+
		"\u0000\u0000\u0000\u00d1\u00cf\u0001\u0000\u0000\u0000\u00d1\u00d2\u0001"+
		"\u0000\u0000\u0000\u00d2\'\u0001\u0000\u0000\u0000\u00d3\u00d1\u0001\u0000"+
		"\u0000\u0000\u00d4\u00d5\u0003&\u0013\u0000\u00d5\u00d6\u0005\u0000\u0000"+
		"\u0001\u00d6)\u0001\u0000\u0000\u0000\u00170FHY`cjmqy\u0081\u0088\u0098"+
		"\u009b\u00a1\u00a7\u00aa\u00ad\u00b0\u00b9\u00bf\u00ca\u00d1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
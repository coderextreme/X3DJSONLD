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
		T__31=32, WS=33, IDENTIFIER=34, REFERENCE=35, EQUALS=36, SEMI=37, COLON=38, 
		SET=39, X3DNODESET=40, ADD=41, WHOLE=42, SENTINEL=43, FLOAT=44, TRUE=45, 
		FALSE=46, COMMENT=47, OPENBRACKET=48, CLOSEBRACKET=49, QUOTE=50, AT=51;
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
			"'>'", "'~'", "'#'", "'/'", "'\\\"'", "'\\'", "'.'", "'('", "')'", "'true'", 
			"'false'", "','", "'-'", "'+'", "'new '", "'{'", "'}'", "'(X3DNode *)'", 
			null, null, "'&'", "'='", "';'", "':'", "'.set'", "'.X3DNode::set'", 
			"'.add'", null, "'-1'", null, null, null, null, "'['", "']'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, "WS", "IDENTIFIER", 
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
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 17179869310L) != 0)) ) {
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
			setState(71);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1+1 ) {
					{
					setState(69);
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
				setState(73);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(74);
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
			setState(76);
			match(T__0);
			setState(77);
			match(T__21);
			setState(78);
			string();
			setState(79);
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
			setState(81);
			_la = _input.LA(1);
			if ( !(_la==T__23 || _la==T__24) ) {
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
			setState(83);
			boolean_();
			setState(88);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__25) {
				{
				{
				setState(84);
				match(T__25);
				setState(85);
				boolean_();
				}
				}
				setState(90);
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
			setState(98);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case SENTINEL:
				{
				setState(91);
				match(SENTINEL);
				}
				break;
			case T__26:
				{
				setState(92);
				match(T__26);
				setState(93);
				match(WHOLE);
				}
				break;
			case T__27:
			case WHOLE:
				{
				setState(95);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__27) {
					{
					setState(94);
					match(T__27);
					}
				}

				setState(97);
				match(WHOLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__25) {
				{
				{
				setState(100);
				match(T__25);
				setState(108);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(101);
					match(SENTINEL);
					}
					break;
				case T__26:
					{
					setState(102);
					match(T__26);
					setState(103);
					match(WHOLE);
					}
					break;
				case T__27:
				case WHOLE:
					{
					setState(105);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__27) {
						{
						setState(104);
						match(T__27);
						}
					}

					setState(107);
					match(WHOLE);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				}
				setState(114);
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
			setState(115);
			match(FLOAT);
			setState(120);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__25) {
				{
				{
				setState(116);
				match(T__25);
				setState(117);
				match(FLOAT);
				}
				}
				setState(122);
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
			setState(123);
			cstring();
			setState(128);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__25) {
				{
				{
				setState(124);
				match(T__25);
				setState(125);
				cstring();
				}
				}
				setState(130);
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
			setState(135);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__23:
			case T__24:
				enterOuterAlt(_localctx, 1);
				{
				setState(131);
				boolean_list();
				}
				break;
			case T__26:
			case T__27:
			case WHOLE:
			case SENTINEL:
				enterOuterAlt(_localctx, 2);
				{
				setState(132);
				integer_list();
				}
				break;
			case FLOAT:
				enterOuterAlt(_localctx, 3);
				{
				setState(133);
				float_list();
				}
				break;
			case T__0:
				enterOuterAlt(_localctx, 4);
				{
				setState(134);
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
			setState(137);
			match(T__28);
			setState(138);
			type();
			setState(139);
			match(OPENBRACKET);
			setState(140);
			match(WHOLE);
			setState(141);
			match(CLOSEBRACKET);
			setState(142);
			match(T__29);
			setState(143);
			list();
			setState(144);
			match(T__30);
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
			setState(175);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(146);
				cstring();
				}
				break;
			case 2:
				{
				setState(154);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case SENTINEL:
					{
					setState(147);
					match(SENTINEL);
					}
					break;
				case T__26:
					{
					setState(148);
					match(T__26);
					setState(149);
					match(WHOLE);
					}
					break;
				case T__27:
				case WHOLE:
					{
					setState(151);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==T__27) {
						{
						setState(150);
						match(T__27);
						}
					}

					setState(153);
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
				setState(156);
				boolean_();
				}
				break;
			case 4:
				{
				setState(157);
				match(WHOLE);
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__25) {
					{
					setState(158);
					match(T__25);
					setState(159);
					construct_array();
					}
				}

				}
				break;
			case 5:
				{
				setState(162);
				match(FLOAT);
				}
				break;
			case 6:
				{
				setState(163);
				construct_array();
				setState(166);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__25) {
					{
					setState(164);
					match(T__25);
					setState(165);
					match(WHOLE);
					}
				}

				}
				break;
			case 7:
				{
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__31) {
					{
					setState(168);
					match(T__31);
					}
				}

				setState(172);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==REFERENCE) {
					{
					setState(171);
					match(REFERENCE);
					}
				}

				setState(174);
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
			setState(177);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 3917010173952L) != 0)) ) {
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
			setState(179);
			variable();
			setState(180);
			operator();
			setState(181);
			match(IDENTIFIER);
			setState(182);
			match(T__21);
			setState(184);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 30843150008322L) != 0)) {
				{
				setState(183);
				parameters();
				}
			}

			setState(186);
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
		enterRule(_localctx, 30, RULE_constructor);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			type();
			setState(190);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==REFERENCE) {
				{
				setState(189);
				match(REFERENCE);
				}
			}

			setState(192);
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
			setState(194);
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
			setState(196);
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
			setState(201);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(198);
				constructor();
				}
				break;
			case 2:
				{
				setState(199);
				set_field();
				}
				break;
			case 3:
				{
				setState(200);
				add_field();
				}
				break;
			}
			setState(203);
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
			setState(208);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 17179869310L) != 0)) {
				{
				{
				setState(205);
				line();
				}
				}
				setState(210);
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
			setState(211);
			lines();
			setState(212);
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
		"\u0004\u00013\u00d7\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
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
		"\u0001\u0003\u0005\u0003F\b\u0003\n\u0003\f\u0003I\t\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0005\u0006"+
		"W\b\u0006\n\u0006\f\u0006Z\t\u0006\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0003\u0007`\b\u0007\u0001\u0007\u0003\u0007c\b\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007j\b"+
		"\u0007\u0001\u0007\u0003\u0007m\b\u0007\u0005\u0007o\b\u0007\n\u0007\f"+
		"\u0007r\t\u0007\u0001\b\u0001\b\u0001\b\u0005\bw\b\b\n\b\f\bz\t\b\u0001"+
		"\t\u0001\t\u0001\t\u0005\t\u007f\b\t\n\t\f\t\u0082\t\t\u0001\n\u0001\n"+
		"\u0001\n\u0001\n\u0003\n\u0088\b\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u0098\b\f\u0001\f\u0003"+
		"\f\u009b\b\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u00a1\b\f\u0001\f"+
		"\u0001\f\u0001\f\u0001\f\u0003\f\u00a7\b\f\u0001\f\u0003\f\u00aa\b\f\u0001"+
		"\f\u0003\f\u00ad\b\f\u0001\f\u0003\f\u00b0\b\f\u0001\r\u0001\r\u0001\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u00b9\b\u000e"+
		"\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0003\u000f\u00bf\b\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012\u00ca\b\u0012\u0001\u0012"+
		"\u0001\u0012\u0001\u0013\u0005\u0013\u00cf\b\u0013\n\u0013\f\u0013\u00d2"+
		"\t\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0001G\u0000"+
		"\u0015\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018"+
		"\u001a\u001c\u001e \"$&(\u0000\u0005\u0002\u0000\u0001\u0006\"\"\u0001"+
		"\u0000\u0012\u0012\u0001\u0000\u0007\u0007\u0001\u0000\u0018\u0019\u0002"+
		"\u0000$$\')\u00f2\u0000*\u0001\u0000\u0000\u0000\u0002,\u0001\u0000\u0000"+
		"\u0000\u0004.\u0001\u0000\u0000\u0000\u00062\u0001\u0000\u0000\u0000\b"+
		"L\u0001\u0000\u0000\u0000\nQ\u0001\u0000\u0000\u0000\fS\u0001\u0000\u0000"+
		"\u0000\u000eb\u0001\u0000\u0000\u0000\u0010s\u0001\u0000\u0000\u0000\u0012"+
		"{\u0001\u0000\u0000\u0000\u0014\u0087\u0001\u0000\u0000\u0000\u0016\u0089"+
		"\u0001\u0000\u0000\u0000\u0018\u00af\u0001\u0000\u0000\u0000\u001a\u00b1"+
		"\u0001\u0000\u0000\u0000\u001c\u00b3\u0001\u0000\u0000\u0000\u001e\u00bc"+
		"\u0001\u0000\u0000\u0000 \u00c2\u0001\u0000\u0000\u0000\"\u00c4\u0001"+
		"\u0000\u0000\u0000$\u00c9\u0001\u0000\u0000\u0000&\u00d0\u0001\u0000\u0000"+
		"\u0000(\u00d3\u0001\u0000\u0000\u0000*+\u0007\u0000\u0000\u0000+\u0001"+
		"\u0001\u0000\u0000\u0000,-\u0005\"\u0000\u0000-\u0003\u0001\u0000\u0000"+
		"\u0000.0\u0005\"\u0000\u0000/1\u0005*\u0000\u00000/\u0001\u0000\u0000"+
		"\u000001\u0001\u0000\u0000\u00001\u0005\u0001\u0000\u0000\u00002G\u0005"+
		"\u0007\u0000\u00003F\u0005\b\u0000\u00004F\u0005\t\u0000\u00005F\u0005"+
		"\n\u0000\u00006F\u0005\u000b\u0000\u00007F\u0005\f\u0000\u00008F\u0005"+
		"\r\u0000\u00009F\u0005\u000e\u0000\u0000:F\u0005\u000f\u0000\u0000;F\u0005"+
		"3\u0000\u0000<F\u00052\u0000\u0000=F\u0005\u0010\u0000\u0000>F\u0005\u0011"+
		"\u0000\u0000?@\u0005\u0012\u0000\u0000@F\b\u0001\u0000\u0000AF\u0005\u0013"+
		"\u0000\u0000BF\u0005\u0014\u0000\u0000CF\u0005\u0015\u0000\u0000DF\b\u0002"+
		"\u0000\u0000E3\u0001\u0000\u0000\u0000E4\u0001\u0000\u0000\u0000E5\u0001"+
		"\u0000\u0000\u0000E6\u0001\u0000\u0000\u0000E7\u0001\u0000\u0000\u0000"+
		"E8\u0001\u0000\u0000\u0000E9\u0001\u0000\u0000\u0000E:\u0001\u0000\u0000"+
		"\u0000E;\u0001\u0000\u0000\u0000E<\u0001\u0000\u0000\u0000E=\u0001\u0000"+
		"\u0000\u0000E>\u0001\u0000\u0000\u0000E?\u0001\u0000\u0000\u0000EA\u0001"+
		"\u0000\u0000\u0000EB\u0001\u0000\u0000\u0000EC\u0001\u0000\u0000\u0000"+
		"ED\u0001\u0000\u0000\u0000FI\u0001\u0000\u0000\u0000GH\u0001\u0000\u0000"+
		"\u0000GE\u0001\u0000\u0000\u0000HJ\u0001\u0000\u0000\u0000IG\u0001\u0000"+
		"\u0000\u0000JK\u0005\u0007\u0000\u0000K\u0007\u0001\u0000\u0000\u0000"+
		"LM\u0005\u0001\u0000\u0000MN\u0005\u0016\u0000\u0000NO\u0003\u0006\u0003"+
		"\u0000OP\u0005\u0017\u0000\u0000P\t\u0001\u0000\u0000\u0000QR\u0007\u0003"+
		"\u0000\u0000R\u000b\u0001\u0000\u0000\u0000SX\u0003\n\u0005\u0000TU\u0005"+
		"\u001a\u0000\u0000UW\u0003\n\u0005\u0000VT\u0001\u0000\u0000\u0000WZ\u0001"+
		"\u0000\u0000\u0000XV\u0001\u0000\u0000\u0000XY\u0001\u0000\u0000\u0000"+
		"Y\r\u0001\u0000\u0000\u0000ZX\u0001\u0000\u0000\u0000[c\u0005+\u0000\u0000"+
		"\\]\u0005\u001b\u0000\u0000]c\u0005*\u0000\u0000^`\u0005\u001c\u0000\u0000"+
		"_^\u0001\u0000\u0000\u0000_`\u0001\u0000\u0000\u0000`a\u0001\u0000\u0000"+
		"\u0000ac\u0005*\u0000\u0000b[\u0001\u0000\u0000\u0000b\\\u0001\u0000\u0000"+
		"\u0000b_\u0001\u0000\u0000\u0000cp\u0001\u0000\u0000\u0000dl\u0005\u001a"+
		"\u0000\u0000em\u0005+\u0000\u0000fg\u0005\u001b\u0000\u0000gm\u0005*\u0000"+
		"\u0000hj\u0005\u001c\u0000\u0000ih\u0001\u0000\u0000\u0000ij\u0001\u0000"+
		"\u0000\u0000jk\u0001\u0000\u0000\u0000km\u0005*\u0000\u0000le\u0001\u0000"+
		"\u0000\u0000lf\u0001\u0000\u0000\u0000li\u0001\u0000\u0000\u0000mo\u0001"+
		"\u0000\u0000\u0000nd\u0001\u0000\u0000\u0000or\u0001\u0000\u0000\u0000"+
		"pn\u0001\u0000\u0000\u0000pq\u0001\u0000\u0000\u0000q\u000f\u0001\u0000"+
		"\u0000\u0000rp\u0001\u0000\u0000\u0000sx\u0005,\u0000\u0000tu\u0005\u001a"+
		"\u0000\u0000uw\u0005,\u0000\u0000vt\u0001\u0000\u0000\u0000wz\u0001\u0000"+
		"\u0000\u0000xv\u0001\u0000\u0000\u0000xy\u0001\u0000\u0000\u0000y\u0011"+
		"\u0001\u0000\u0000\u0000zx\u0001\u0000\u0000\u0000{\u0080\u0003\b\u0004"+
		"\u0000|}\u0005\u001a\u0000\u0000}\u007f\u0003\b\u0004\u0000~|\u0001\u0000"+
		"\u0000\u0000\u007f\u0082\u0001\u0000\u0000\u0000\u0080~\u0001\u0000\u0000"+
		"\u0000\u0080\u0081\u0001\u0000\u0000\u0000\u0081\u0013\u0001\u0000\u0000"+
		"\u0000\u0082\u0080\u0001\u0000\u0000\u0000\u0083\u0088\u0003\f\u0006\u0000"+
		"\u0084\u0088\u0003\u000e\u0007\u0000\u0085\u0088\u0003\u0010\b\u0000\u0086"+
		"\u0088\u0003\u0012\t\u0000\u0087\u0083\u0001\u0000\u0000\u0000\u0087\u0084"+
		"\u0001\u0000\u0000\u0000\u0087\u0085\u0001\u0000\u0000\u0000\u0087\u0086"+
		"\u0001\u0000\u0000\u0000\u0088\u0015\u0001\u0000\u0000\u0000\u0089\u008a"+
		"\u0005\u001d\u0000\u0000\u008a\u008b\u0003\u0000\u0000\u0000\u008b\u008c"+
		"\u00050\u0000\u0000\u008c\u008d\u0005*\u0000\u0000\u008d\u008e\u00051"+
		"\u0000\u0000\u008e\u008f\u0005\u001e\u0000\u0000\u008f\u0090\u0003\u0014"+
		"\n\u0000\u0090\u0091\u0005\u001f\u0000\u0000\u0091\u0017\u0001\u0000\u0000"+
		"\u0000\u0092\u00b0\u0003\b\u0004\u0000\u0093\u009b\u0005+\u0000\u0000"+
		"\u0094\u0095\u0005\u001b\u0000\u0000\u0095\u009b\u0005*\u0000\u0000\u0096"+
		"\u0098\u0005\u001c\u0000\u0000\u0097\u0096\u0001\u0000\u0000\u0000\u0097"+
		"\u0098\u0001\u0000\u0000\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099"+
		"\u009b\u0005*\u0000\u0000\u009a\u0093\u0001\u0000\u0000\u0000\u009a\u0094"+
		"\u0001\u0000\u0000\u0000\u009a\u0097\u0001\u0000\u0000\u0000\u009b\u00b0"+
		"\u0001\u0000\u0000\u0000\u009c\u00b0\u0003\n\u0005\u0000\u009d\u00a0\u0005"+
		"*\u0000\u0000\u009e\u009f\u0005\u001a\u0000\u0000\u009f\u00a1\u0003\u0016"+
		"\u000b\u0000\u00a0\u009e\u0001\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000"+
		"\u0000\u0000\u00a1\u00b0\u0001\u0000\u0000\u0000\u00a2\u00b0\u0005,\u0000"+
		"\u0000\u00a3\u00a6\u0003\u0016\u000b\u0000\u00a4\u00a5\u0005\u001a\u0000"+
		"\u0000\u00a5\u00a7\u0005*\u0000\u0000\u00a6\u00a4\u0001\u0000\u0000\u0000"+
		"\u00a6\u00a7\u0001\u0000\u0000\u0000\u00a7\u00b0\u0001\u0000\u0000\u0000"+
		"\u00a8\u00aa\u0005 \u0000\u0000\u00a9\u00a8\u0001\u0000\u0000\u0000\u00a9"+
		"\u00aa\u0001\u0000\u0000\u0000\u00aa\u00ac\u0001\u0000\u0000\u0000\u00ab"+
		"\u00ad\u0005#\u0000\u0000\u00ac\u00ab\u0001\u0000\u0000\u0000\u00ac\u00ad"+
		"\u0001\u0000\u0000\u0000\u00ad\u00ae\u0001\u0000\u0000\u0000\u00ae\u00b0"+
		"\u0003\u0004\u0002\u0000\u00af\u0092\u0001\u0000\u0000\u0000\u00af\u009a"+
		"\u0001\u0000\u0000\u0000\u00af\u009c\u0001\u0000\u0000\u0000\u00af\u009d"+
		"\u0001\u0000\u0000\u0000\u00af\u00a2\u0001\u0000\u0000\u0000\u00af\u00a3"+
		"\u0001\u0000\u0000\u0000\u00af\u00a9\u0001\u0000\u0000\u0000\u00b0\u0019"+
		"\u0001\u0000\u0000\u0000\u00b1\u00b2\u0007\u0004\u0000\u0000\u00b2\u001b"+
		"\u0001\u0000\u0000\u0000\u00b3\u00b4\u0003\u0004\u0002\u0000\u00b4\u00b5"+
		"\u0003\u001a\r\u0000\u00b5\u00b6\u0005\"\u0000\u0000\u00b6\u00b8\u0005"+
		"\u0016\u0000\u0000\u00b7\u00b9\u0003\u0018\f\u0000\u00b8\u00b7\u0001\u0000"+
		"\u0000\u0000\u00b8\u00b9\u0001\u0000\u0000\u0000\u00b9\u00ba\u0001\u0000"+
		"\u0000\u0000\u00ba\u00bb\u0005\u0017\u0000\u0000\u00bb\u001d\u0001\u0000"+
		"\u0000\u0000\u00bc\u00be\u0003\u0000\u0000\u0000\u00bd\u00bf\u0005#\u0000"+
		"\u0000\u00be\u00bd\u0001\u0000\u0000\u0000\u00be\u00bf\u0001\u0000\u0000"+
		"\u0000\u00bf\u00c0\u0001\u0000\u0000\u0000\u00c0\u00c1\u0003\u001c\u000e"+
		"\u0000\u00c1\u001f\u0001\u0000\u0000\u0000\u00c2\u00c3\u0003\u001c\u000e"+
		"\u0000\u00c3!\u0001\u0000\u0000\u0000\u00c4\u00c5\u0003\u001c\u000e\u0000"+
		"\u00c5#\u0001\u0000\u0000\u0000\u00c6\u00ca\u0003\u001e\u000f\u0000\u00c7"+
		"\u00ca\u0003 \u0010\u0000\u00c8\u00ca\u0003\"\u0011\u0000\u00c9\u00c6"+
		"\u0001\u0000\u0000\u0000\u00c9\u00c7\u0001\u0000\u0000\u0000\u00c9\u00c8"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cb\u0001\u0000\u0000\u0000\u00cb\u00cc"+
		"\u0005%\u0000\u0000\u00cc%\u0001\u0000\u0000\u0000\u00cd\u00cf\u0003$"+
		"\u0012\u0000\u00ce\u00cd\u0001\u0000\u0000\u0000\u00cf\u00d2\u0001\u0000"+
		"\u0000\u0000\u00d0\u00ce\u0001\u0000\u0000\u0000\u00d0\u00d1\u0001\u0000"+
		"\u0000\u0000\u00d1\'\u0001\u0000\u0000\u0000\u00d2\u00d0\u0001\u0000\u0000"+
		"\u0000\u00d3\u00d4\u0003&\u0013\u0000\u00d4\u00d5\u0005\u0000\u0000\u0001"+
		"\u00d5)\u0001\u0000\u0000\u0000\u00170EGX_bilpx\u0080\u0087\u0097\u009a"+
		"\u00a0\u00a6\u00a9\u00ac\u00af\u00b8\u00be\u00c9\u00d0";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
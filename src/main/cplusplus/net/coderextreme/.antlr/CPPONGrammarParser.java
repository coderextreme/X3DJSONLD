// Generated from c:/Users/john/X3DJSONLD/src/main/cplusplus/net/coderextreme/CPPONGrammar.g4 by ANTLR 4.13.1
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
		T__0=1, WS=2, PRIMTYPE=3, STAR=4, BRACEOPEN=5, BRACECLOSE=6, IDENTIFIER=7, 
		INDEX=8, REFERENCE=9, EQUALS=10, PARENOPEN=11, PARENCLOSE=12, SEMI=13, 
		DOT=14, SET=15, ADD=16, BRACKETOPEN=17, BRACKETCLOSE=18, QUOTE=19, NOTQUOTE=20, 
		ESCAPEDQUOTE=21, ESCAPEDESCAPE=22, CR=23, NL=24, TAB=25, NEW=26, NOTENTER=27, 
		COMMA=28, INTEGER=29, FLOAT=30, BOOLEAN=31, COMMENT=32, CSTRING=33;
	public static final int
		RULE_header = 0, RULE_type = 1, RULE_field = 2, RULE_variable = 3, RULE_quoted = 4, 
		RULE_cstring = 5, RULE_boolean_list = 6, RULE_integer_list = 7, RULE_float_list = 8, 
		RULE_string_list = 9, RULE_list = 10, RULE_array = 11, RULE_parameters = 12, 
		RULE_operator = 13, RULE_funccall = 14, RULE_constructor = 15, RULE_set_field = 16, 
		RULE_add_field = 17, RULE_line = 18, RULE_lines = 19, RULE_body = 20, 
		RULE_x3d = 21;
	private static String[] makeRuleNames() {
		return new String[] {
			"header", "type", "field", "variable", "quoted", "cstring", "boolean_list", 
			"integer_list", "float_list", "string_list", "list", "array", "parameters", 
			"operator", "funccall", "constructor", "set_field", "add_field", "line", 
			"lines", "body", "x3d"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'\\'", null, null, "'*'", "'{'", "'}'", null, null, "'&'", "'='", 
			"'('", "')'", "';'", "'.'", "'set'", "'add'", "'['", "']'", "'\"'", null, 
			"'\\\"'", "'\\\\'", null, null, null, "'new'", null, "','", null, null, 
			null, null, "'CString'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "WS", "PRIMTYPE", "STAR", "BRACEOPEN", "BRACECLOSE", "IDENTIFIER", 
			"INDEX", "REFERENCE", "EQUALS", "PARENOPEN", "PARENCLOSE", "SEMI", "DOT", 
			"SET", "ADD", "BRACKETOPEN", "BRACKETCLOSE", "QUOTE", "NOTQUOTE", "ESCAPEDQUOTE", 
			"ESCAPEDESCAPE", "CR", "NL", "TAB", "NEW", "NOTENTER", "COMMA", "INTEGER", 
			"FLOAT", "BOOLEAN", "COMMENT", "CSTRING"
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
	public static class HeaderContext extends ParserRuleContext {
		public TerminalNode BRACEOPEN() { return getToken(CPPONGrammarParser.BRACEOPEN, 0); }
		public List<TerminalNode> WS() { return getTokens(CPPONGrammarParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(CPPONGrammarParser.WS, i);
		}
		public HeaderContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_header; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterHeader(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitHeader(this);
		}
	}

	public final HeaderContext header() throws RecognitionException {
		HeaderContext _localctx = new HeaderContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_header);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(44);
			match(BRACEOPEN);
			setState(46); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(45);
					match(WS);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(48); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,0,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
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
		enterRule(_localctx, 2, RULE_type);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
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
		enterRule(_localctx, 4, RULE_field);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
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
		public TerminalNode INDEX() { return getToken(CPPONGrammarParser.INDEX, 0); }
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
		enterRule(_localctx, 6, RULE_variable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(54);
			match(IDENTIFIER);
			setState(55);
			match(INDEX);
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
	public static class QuotedContext extends ParserRuleContext {
		public List<TerminalNode> NOTQUOTE() { return getTokens(CPPONGrammarParser.NOTQUOTE); }
		public TerminalNode NOTQUOTE(int i) {
			return getToken(CPPONGrammarParser.NOTQUOTE, i);
		}
		public List<TerminalNode> ESCAPEDQUOTE() { return getTokens(CPPONGrammarParser.ESCAPEDQUOTE); }
		public TerminalNode ESCAPEDQUOTE(int i) {
			return getToken(CPPONGrammarParser.ESCAPEDQUOTE, i);
		}
		public List<TerminalNode> ESCAPEDESCAPE() { return getTokens(CPPONGrammarParser.ESCAPEDESCAPE); }
		public TerminalNode ESCAPEDESCAPE(int i) {
			return getToken(CPPONGrammarParser.ESCAPEDESCAPE, i);
		}
		public List<TerminalNode> NL() { return getTokens(CPPONGrammarParser.NL); }
		public TerminalNode NL(int i) {
			return getToken(CPPONGrammarParser.NL, i);
		}
		public List<TerminalNode> CR() { return getTokens(CPPONGrammarParser.CR); }
		public TerminalNode CR(int i) {
			return getToken(CPPONGrammarParser.CR, i);
		}
		public List<TerminalNode> TAB() { return getTokens(CPPONGrammarParser.TAB); }
		public TerminalNode TAB(int i) {
			return getToken(CPPONGrammarParser.TAB, i);
		}
		public QuotedContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_quoted; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterQuoted(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitQuoted(this);
		}
	}

	public final QuotedContext quoted() throws RecognitionException {
		QuotedContext _localctx = new QuotedContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_quoted);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 15728642L) != 0)) {
				{
				setState(65);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
				case 1:
					{
					setState(57);
					match(NOTQUOTE);
					}
					break;
				case 2:
					{
					setState(58);
					match(ESCAPEDQUOTE);
					}
					break;
				case 3:
					{
					setState(59);
					match(ESCAPEDESCAPE);
					}
					break;
				case 4:
					{
					setState(60);
					match(T__0);
					setState(61);
					match(NL);
					}
					break;
				case 5:
					{
					setState(62);
					match(CR);
					}
					break;
				case 6:
					{
					setState(63);
					match(T__0);
					setState(64);
					match(TAB);
					}
					break;
				}
				}
				setState(69);
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
	public static class CstringContext extends ParserRuleContext {
		public TerminalNode CSTRING() { return getToken(CPPONGrammarParser.CSTRING, 0); }
		public TerminalNode PARENOPEN() { return getToken(CPPONGrammarParser.PARENOPEN, 0); }
		public List<TerminalNode> QUOTE() { return getTokens(CPPONGrammarParser.QUOTE); }
		public TerminalNode QUOTE(int i) {
			return getToken(CPPONGrammarParser.QUOTE, i);
		}
		public QuotedContext quoted() {
			return getRuleContext(QuotedContext.class,0);
		}
		public TerminalNode PARENCLOSE() { return getToken(CPPONGrammarParser.PARENCLOSE, 0); }
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
		enterRule(_localctx, 10, RULE_cstring);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(CSTRING);
			setState(71);
			match(PARENOPEN);
			setState(72);
			match(QUOTE);
			setState(73);
			quoted();
			setState(74);
			match(QUOTE);
			setState(75);
			match(PARENCLOSE);
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
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
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
		enterRule(_localctx, 12, RULE_boolean_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(BOOLEAN);
			setState(82);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(78);
					match(COMMA);
					setState(79);
					boolean_list();
					}
					} 
				}
				setState(84);
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
		public TerminalNode INTEGER() { return getToken(CPPONGrammarParser.INTEGER, 0); }
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
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
		enterRule(_localctx, 14, RULE_integer_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(85);
			match(INTEGER);
			setState(90);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(86);
					match(COMMA);
					setState(87);
					integer_list();
					}
					} 
				}
				setState(92);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,4,_ctx);
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
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
		}
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
		enterRule(_localctx, 16, RULE_float_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(93);
			match(FLOAT);
			setState(98);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(94);
					match(COMMA);
					setState(95);
					float_list();
					}
					} 
				}
				setState(100);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
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
		public List<TerminalNode> COMMA() { return getTokens(CPPONGrammarParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(CPPONGrammarParser.COMMA, i);
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
		enterRule(_localctx, 18, RULE_string_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			cstring();
			setState(106);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(102);
					match(COMMA);
					setState(103);
					string_list();
					}
					} 
				}
				setState(108);
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
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case BOOLEAN:
				{
				setState(109);
				boolean_list();
				}
				break;
			case INTEGER:
				{
				setState(110);
				integer_list();
				}
				break;
			case FLOAT:
				{
				setState(111);
				float_list();
				}
				break;
			case CSTRING:
				{
				setState(112);
				string_list();
				}
				break;
			default:
				throw new NoViableAltException(this);
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
	public static class ArrayContext extends ParserRuleContext {
		public TerminalNode NEW() { return getToken(CPPONGrammarParser.NEW, 0); }
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode BRACKETOPEN() { return getToken(CPPONGrammarParser.BRACKETOPEN, 0); }
		public TerminalNode INTEGER() { return getToken(CPPONGrammarParser.INTEGER, 0); }
		public TerminalNode BRACKETCLOSE() { return getToken(CPPONGrammarParser.BRACKETCLOSE, 0); }
		public TerminalNode BRACEOPEN() { return getToken(CPPONGrammarParser.BRACEOPEN, 0); }
		public ListContext list() {
			return getRuleContext(ListContext.class,0);
		}
		public TerminalNode BRACECLOSE() { return getToken(CPPONGrammarParser.BRACECLOSE, 0); }
		public ArrayContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterArray(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitArray(this);
		}
	}

	public final ArrayContext array() throws RecognitionException {
		ArrayContext _localctx = new ArrayContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_array);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(115);
			match(NEW);
			setState(116);
			type();
			setState(117);
			match(BRACKETOPEN);
			setState(118);
			match(INTEGER);
			setState(119);
			match(BRACKETCLOSE);
			setState(120);
			match(BRACEOPEN);
			setState(121);
			list();
			setState(122);
			match(BRACECLOSE);
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
		public TerminalNode INTEGER() { return getToken(CPPONGrammarParser.INTEGER, 0); }
		public TerminalNode FLOAT() { return getToken(CPPONGrammarParser.FLOAT, 0); }
		public ArrayContext array() {
			return getRuleContext(ArrayContext.class,0);
		}
		public TerminalNode COMMA() { return getToken(CPPONGrammarParser.COMMA, 0); }
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(137);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(124);
				cstring();
				}
				break;
			case 2:
				{
				setState(125);
				match(BOOLEAN);
				}
				break;
			case 3:
				{
				setState(126);
				match(INTEGER);
				}
				break;
			case 4:
				{
				setState(127);
				match(FLOAT);
				}
				break;
			case 5:
				{
				setState(128);
				array();
				setState(129);
				match(COMMA);
				setState(130);
				match(INTEGER);
				}
				break;
			case 6:
				{
				setState(132);
				match(INTEGER);
				setState(133);
				match(COMMA);
				setState(134);
				array();
				}
				break;
			case 7:
				{
				setState(135);
				match(REFERENCE);
				setState(136);
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
		public TerminalNode DOT() { return getToken(CPPONGrammarParser.DOT, 0); }
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
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				{
				setState(139);
				match(EQUALS);
				}
				break;
			case 2:
				{
				setState(140);
				match(DOT);
				setState(141);
				match(SET);
				}
				break;
			case 3:
				{
				setState(142);
				match(DOT);
				setState(143);
				match(ADD);
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
	public static class FunccallContext extends ParserRuleContext {
		public VariableContext variable() {
			return getRuleContext(VariableContext.class,0);
		}
		public OperatorContext operator() {
			return getRuleContext(OperatorContext.class,0);
		}
		public TerminalNode IDENTIFIER() { return getToken(CPPONGrammarParser.IDENTIFIER, 0); }
		public TerminalNode PARENOPEN() { return getToken(CPPONGrammarParser.PARENOPEN, 0); }
		public TerminalNode PARENCLOSE() { return getToken(CPPONGrammarParser.PARENCLOSE, 0); }
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
			setState(146);
			variable();
			setState(147);
			operator();
			setState(148);
			match(IDENTIFIER);
			setState(149);
			match(PARENOPEN);
			setState(151);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 12415140352L) != 0)) {
				{
				setState(150);
				parameters();
				}
			}

			setState(153);
			match(PARENCLOSE);
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
		public TerminalNode REFERENCE() { return getToken(CPPONGrammarParser.REFERENCE, 0); }
		public FunccallContext funccall() {
			return getRuleContext(FunccallContext.class,0);
		}
		public List<TerminalNode> WS() { return getTokens(CPPONGrammarParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(CPPONGrammarParser.WS, i);
		}
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
			setState(158);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(155);
				match(WS);
				}
				}
				setState(160);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(161);
			type();
			setState(162);
			match(REFERENCE);
			setState(166);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS) {
				{
				{
				setState(163);
				match(WS);
				}
				}
				setState(168);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(169);
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
			setState(171);
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
			setState(173);
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
			setState(178);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(175);
				constructor();
				}
				break;
			case 2:
				{
				setState(176);
				set_field();
				}
				break;
			case 3:
				{
				setState(177);
				add_field();
				}
				break;
			}
			setState(180);
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
		public List<TerminalNode> WS() { return getTokens(CPPONGrammarParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(CPPONGrammarParser.WS, i);
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
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(182);
			line();
			setState(192);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==WS || _la==IDENTIFIER) {
				{
				{
				setState(186);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(183);
						match(WS);
						}
						} 
					}
					setState(188);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
				}
				setState(189);
				line();
				}
				}
				setState(194);
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
	public static class BodyContext extends ParserRuleContext {
		public LinesContext lines() {
			return getRuleContext(LinesContext.class,0);
		}
		public BodyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_body; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).enterBody(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof CPPONGrammarListener ) ((CPPONGrammarListener)listener).exitBody(this);
		}
	}

	public final BodyContext body() throws RecognitionException {
		BodyContext _localctx = new BodyContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_body);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(195);
			lines();
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
		public HeaderContext header() {
			return getRuleContext(HeaderContext.class,0);
		}
		public BodyContext body() {
			return getRuleContext(BodyContext.class,0);
		}
		public TerminalNode BRACECLOSE() { return getToken(CPPONGrammarParser.BRACECLOSE, 0); }
		public TerminalNode EOF() { return getToken(CPPONGrammarParser.EOF, 0); }
		public List<TerminalNode> WS() { return getTokens(CPPONGrammarParser.WS); }
		public TerminalNode WS(int i) {
			return getToken(CPPONGrammarParser.WS, i);
		}
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
		enterRule(_localctx, 42, RULE_x3d);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(197);
			header();
			setState(201);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(198);
					match(WS);
					}
					} 
				}
				setState(203);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
			}
			setState(204);
			body();
			setState(205);
			match(BRACECLOSE);
			setState(206);
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
		"\u0004\u0001!\u00d1\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0001\u0000\u0001\u0000\u0004\u0000/\b\u0000\u000b\u0000\f\u00000\u0001"+
		"\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0005\u0004B\b\u0004\n\u0004\f\u0004E\t"+
		"\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0005\u0006Q\b"+
		"\u0006\n\u0006\f\u0006T\t\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0005"+
		"\u0007Y\b\u0007\n\u0007\f\u0007\\\t\u0007\u0001\b\u0001\b\u0001\b\u0005"+
		"\ba\b\b\n\b\f\bd\t\b\u0001\t\u0001\t\u0001\t\u0005\ti\b\t\n\t\f\tl\t\t"+
		"\u0001\n\u0001\n\u0001\n\u0001\n\u0003\nr\b\n\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0003\f\u008a\b\f\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\r\u0003\r\u0091\b\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000e\u0001\u000e\u0003\u000e\u0098\b\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0005\u000f\u009d\b\u000f\n\u000f\f\u000f\u00a0\t\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u000f\u0005\u000f\u00a5\b\u000f\n\u000f"+
		"\f\u000f\u00a8\t\u000f\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010"+
		"\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0003\u0012"+
		"\u00b3\b\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0005\u0013"+
		"\u00b9\b\u0013\n\u0013\f\u0013\u00bc\t\u0013\u0001\u0013\u0005\u0013\u00bf"+
		"\b\u0013\n\u0013\f\u0013\u00c2\t\u0013\u0001\u0014\u0001\u0014\u0001\u0015"+
		"\u0001\u0015\u0005\u0015\u00c8\b\u0015\n\u0015\f\u0015\u00cb\t\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0000\u0000\u0016"+
		"\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a"+
		"\u001c\u001e \"$&(*\u0000\u0000\u00d8\u0000,\u0001\u0000\u0000\u0000\u0002"+
		"2\u0001\u0000\u0000\u0000\u00044\u0001\u0000\u0000\u0000\u00066\u0001"+
		"\u0000\u0000\u0000\bC\u0001\u0000\u0000\u0000\nF\u0001\u0000\u0000\u0000"+
		"\fM\u0001\u0000\u0000\u0000\u000eU\u0001\u0000\u0000\u0000\u0010]\u0001"+
		"\u0000\u0000\u0000\u0012e\u0001\u0000\u0000\u0000\u0014q\u0001\u0000\u0000"+
		"\u0000\u0016s\u0001\u0000\u0000\u0000\u0018\u0089\u0001\u0000\u0000\u0000"+
		"\u001a\u0090\u0001\u0000\u0000\u0000\u001c\u0092\u0001\u0000\u0000\u0000"+
		"\u001e\u009e\u0001\u0000\u0000\u0000 \u00ab\u0001\u0000\u0000\u0000\""+
		"\u00ad\u0001\u0000\u0000\u0000$\u00b2\u0001\u0000\u0000\u0000&\u00b6\u0001"+
		"\u0000\u0000\u0000(\u00c3\u0001\u0000\u0000\u0000*\u00c5\u0001\u0000\u0000"+
		"\u0000,.\u0005\u0005\u0000\u0000-/\u0005\u0002\u0000\u0000.-\u0001\u0000"+
		"\u0000\u0000/0\u0001\u0000\u0000\u00000.\u0001\u0000\u0000\u000001\u0001"+
		"\u0000\u0000\u00001\u0001\u0001\u0000\u0000\u000023\u0005\u0007\u0000"+
		"\u00003\u0003\u0001\u0000\u0000\u000045\u0005\u0007\u0000\u00005\u0005"+
		"\u0001\u0000\u0000\u000067\u0005\u0007\u0000\u000078\u0005\b\u0000\u0000"+
		"8\u0007\u0001\u0000\u0000\u00009B\u0005\u0014\u0000\u0000:B\u0005\u0015"+
		"\u0000\u0000;B\u0005\u0016\u0000\u0000<=\u0005\u0001\u0000\u0000=B\u0005"+
		"\u0018\u0000\u0000>B\u0005\u0017\u0000\u0000?@\u0005\u0001\u0000\u0000"+
		"@B\u0005\u0019\u0000\u0000A9\u0001\u0000\u0000\u0000A:\u0001\u0000\u0000"+
		"\u0000A;\u0001\u0000\u0000\u0000A<\u0001\u0000\u0000\u0000A>\u0001\u0000"+
		"\u0000\u0000A?\u0001\u0000\u0000\u0000BE\u0001\u0000\u0000\u0000CA\u0001"+
		"\u0000\u0000\u0000CD\u0001\u0000\u0000\u0000D\t\u0001\u0000\u0000\u0000"+
		"EC\u0001\u0000\u0000\u0000FG\u0005!\u0000\u0000GH\u0005\u000b\u0000\u0000"+
		"HI\u0005\u0013\u0000\u0000IJ\u0003\b\u0004\u0000JK\u0005\u0013\u0000\u0000"+
		"KL\u0005\f\u0000\u0000L\u000b\u0001\u0000\u0000\u0000MR\u0005\u001f\u0000"+
		"\u0000NO\u0005\u001c\u0000\u0000OQ\u0003\f\u0006\u0000PN\u0001\u0000\u0000"+
		"\u0000QT\u0001\u0000\u0000\u0000RP\u0001\u0000\u0000\u0000RS\u0001\u0000"+
		"\u0000\u0000S\r\u0001\u0000\u0000\u0000TR\u0001\u0000\u0000\u0000UZ\u0005"+
		"\u001d\u0000\u0000VW\u0005\u001c\u0000\u0000WY\u0003\u000e\u0007\u0000"+
		"XV\u0001\u0000\u0000\u0000Y\\\u0001\u0000\u0000\u0000ZX\u0001\u0000\u0000"+
		"\u0000Z[\u0001\u0000\u0000\u0000[\u000f\u0001\u0000\u0000\u0000\\Z\u0001"+
		"\u0000\u0000\u0000]b\u0005\u001e\u0000\u0000^_\u0005\u001c\u0000\u0000"+
		"_a\u0003\u0010\b\u0000`^\u0001\u0000\u0000\u0000ad\u0001\u0000\u0000\u0000"+
		"b`\u0001\u0000\u0000\u0000bc\u0001\u0000\u0000\u0000c\u0011\u0001\u0000"+
		"\u0000\u0000db\u0001\u0000\u0000\u0000ej\u0003\n\u0005\u0000fg\u0005\u001c"+
		"\u0000\u0000gi\u0003\u0012\t\u0000hf\u0001\u0000\u0000\u0000il\u0001\u0000"+
		"\u0000\u0000jh\u0001\u0000\u0000\u0000jk\u0001\u0000\u0000\u0000k\u0013"+
		"\u0001\u0000\u0000\u0000lj\u0001\u0000\u0000\u0000mr\u0003\f\u0006\u0000"+
		"nr\u0003\u000e\u0007\u0000or\u0003\u0010\b\u0000pr\u0003\u0012\t\u0000"+
		"qm\u0001\u0000\u0000\u0000qn\u0001\u0000\u0000\u0000qo\u0001\u0000\u0000"+
		"\u0000qp\u0001\u0000\u0000\u0000r\u0015\u0001\u0000\u0000\u0000st\u0005"+
		"\u001a\u0000\u0000tu\u0003\u0002\u0001\u0000uv\u0005\u0011\u0000\u0000"+
		"vw\u0005\u001d\u0000\u0000wx\u0005\u0012\u0000\u0000xy\u0005\u0005\u0000"+
		"\u0000yz\u0003\u0014\n\u0000z{\u0005\u0006\u0000\u0000{\u0017\u0001\u0000"+
		"\u0000\u0000|\u008a\u0003\n\u0005\u0000}\u008a\u0005\u001f\u0000\u0000"+
		"~\u008a\u0005\u001d\u0000\u0000\u007f\u008a\u0005\u001e\u0000\u0000\u0080"+
		"\u0081\u0003\u0016\u000b\u0000\u0081\u0082\u0005\u001c\u0000\u0000\u0082"+
		"\u0083\u0005\u001d\u0000\u0000\u0083\u008a\u0001\u0000\u0000\u0000\u0084"+
		"\u0085\u0005\u001d\u0000\u0000\u0085\u0086\u0005\u001c\u0000\u0000\u0086"+
		"\u008a\u0003\u0016\u000b\u0000\u0087\u0088\u0005\t\u0000\u0000\u0088\u008a"+
		"\u0003\u0006\u0003\u0000\u0089|\u0001\u0000\u0000\u0000\u0089}\u0001\u0000"+
		"\u0000\u0000\u0089~\u0001\u0000\u0000\u0000\u0089\u007f\u0001\u0000\u0000"+
		"\u0000\u0089\u0080\u0001\u0000\u0000\u0000\u0089\u0084\u0001\u0000\u0000"+
		"\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u008a\u0019\u0001\u0000\u0000"+
		"\u0000\u008b\u0091\u0005\n\u0000\u0000\u008c\u008d\u0005\u000e\u0000\u0000"+
		"\u008d\u0091\u0005\u000f\u0000\u0000\u008e\u008f\u0005\u000e\u0000\u0000"+
		"\u008f\u0091\u0005\u0010\u0000\u0000\u0090\u008b\u0001\u0000\u0000\u0000"+
		"\u0090\u008c\u0001\u0000\u0000\u0000\u0090\u008e\u0001\u0000\u0000\u0000"+
		"\u0091\u001b\u0001\u0000\u0000\u0000\u0092\u0093\u0003\u0006\u0003\u0000"+
		"\u0093\u0094\u0003\u001a\r\u0000\u0094\u0095\u0005\u0007\u0000\u0000\u0095"+
		"\u0097\u0005\u000b\u0000\u0000\u0096\u0098\u0003\u0018\f\u0000\u0097\u0096"+
		"\u0001\u0000\u0000\u0000\u0097\u0098\u0001\u0000\u0000\u0000\u0098\u0099"+
		"\u0001\u0000\u0000\u0000\u0099\u009a\u0005\f\u0000\u0000\u009a\u001d\u0001"+
		"\u0000\u0000\u0000\u009b\u009d\u0005\u0002\u0000\u0000\u009c\u009b\u0001"+
		"\u0000\u0000\u0000\u009d\u00a0\u0001\u0000\u0000\u0000\u009e\u009c\u0001"+
		"\u0000\u0000\u0000\u009e\u009f\u0001\u0000\u0000\u0000\u009f\u00a1\u0001"+
		"\u0000\u0000\u0000\u00a0\u009e\u0001\u0000\u0000\u0000\u00a1\u00a2\u0003"+
		"\u0002\u0001\u0000\u00a2\u00a6\u0005\t\u0000\u0000\u00a3\u00a5\u0005\u0002"+
		"\u0000\u0000\u00a4\u00a3\u0001\u0000\u0000\u0000\u00a5\u00a8\u0001\u0000"+
		"\u0000\u0000\u00a6\u00a4\u0001\u0000\u0000\u0000\u00a6\u00a7\u0001\u0000"+
		"\u0000\u0000\u00a7\u00a9\u0001\u0000\u0000\u0000\u00a8\u00a6\u0001\u0000"+
		"\u0000\u0000\u00a9\u00aa\u0003\u001c\u000e\u0000\u00aa\u001f\u0001\u0000"+
		"\u0000\u0000\u00ab\u00ac\u0003\u001c\u000e\u0000\u00ac!\u0001\u0000\u0000"+
		"\u0000\u00ad\u00ae\u0003\u001c\u000e\u0000\u00ae#\u0001\u0000\u0000\u0000"+
		"\u00af\u00b3\u0003\u001e\u000f\u0000\u00b0\u00b3\u0003 \u0010\u0000\u00b1"+
		"\u00b3\u0003\"\u0011\u0000\u00b2\u00af\u0001\u0000\u0000\u0000\u00b2\u00b0"+
		"\u0001\u0000\u0000\u0000\u00b2\u00b1\u0001\u0000\u0000\u0000\u00b3\u00b4"+
		"\u0001\u0000\u0000\u0000\u00b4\u00b5\u0005\r\u0000\u0000\u00b5%\u0001"+
		"\u0000\u0000\u0000\u00b6\u00c0\u0003$\u0012\u0000\u00b7\u00b9\u0005\u0002"+
		"\u0000\u0000\u00b8\u00b7\u0001\u0000\u0000\u0000\u00b9\u00bc\u0001\u0000"+
		"\u0000\u0000\u00ba\u00b8\u0001\u0000\u0000\u0000\u00ba\u00bb\u0001\u0000"+
		"\u0000\u0000\u00bb\u00bd\u0001\u0000\u0000\u0000\u00bc\u00ba\u0001\u0000"+
		"\u0000\u0000\u00bd\u00bf\u0003$\u0012\u0000\u00be\u00ba\u0001\u0000\u0000"+
		"\u0000\u00bf\u00c2\u0001\u0000\u0000\u0000\u00c0\u00be\u0001\u0000\u0000"+
		"\u0000\u00c0\u00c1\u0001\u0000\u0000\u0000\u00c1\'\u0001\u0000\u0000\u0000"+
		"\u00c2\u00c0\u0001\u0000\u0000\u0000\u00c3\u00c4\u0003&\u0013\u0000\u00c4"+
		")\u0001\u0000\u0000\u0000\u00c5\u00c9\u0003\u0000\u0000\u0000\u00c6\u00c8"+
		"\u0005\u0002\u0000\u0000\u00c7\u00c6\u0001\u0000\u0000\u0000\u00c8\u00cb"+
		"\u0001\u0000\u0000\u0000\u00c9\u00c7\u0001\u0000\u0000\u0000\u00c9\u00ca"+
		"\u0001\u0000\u0000\u0000\u00ca\u00cc\u0001\u0000\u0000\u0000\u00cb\u00c9"+
		"\u0001\u0000\u0000\u0000\u00cc\u00cd\u0003(\u0014\u0000\u00cd\u00ce\u0005"+
		"\u0006\u0000\u0000\u00ce\u00cf\u0005\u0000\u0000\u0001\u00cf+\u0001\u0000"+
		"\u0000\u0000\u00110ACRZbjq\u0089\u0090\u0097\u009e\u00a6\u00b2\u00ba\u00c0"+
		"\u00c9";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
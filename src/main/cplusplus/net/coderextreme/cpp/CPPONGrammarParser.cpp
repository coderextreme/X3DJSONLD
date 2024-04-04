
// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1


#include "CPPONGrammarListener.h"

#include "CPPONGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CPPONGrammarParserStaticData final {
  CPPONGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CPPONGrammarParserStaticData(const CPPONGrammarParserStaticData&) = delete;
  CPPONGrammarParserStaticData(CPPONGrammarParserStaticData&&) = delete;
  CPPONGrammarParserStaticData& operator=(const CPPONGrammarParserStaticData&) = delete;
  CPPONGrammarParserStaticData& operator=(CPPONGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cppongrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CPPONGrammarParserStaticData *cppongrammarParserStaticData = nullptr;

void cppongrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cppongrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(cppongrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CPPONGrammarParserStaticData>(
    std::vector<std::string>{
      "type", "field", "variable", "string", "cstring", "boolean", "boolean_list", 
      "integer_list", "float_list", "string_list", "list", "construct_array", 
      "parameters", "operator", "funccall", "construct", "set_field", "add_field", 
      "line", "lines", "x3d"
    },
    std::vector<std::string>{
      "", "'CString'", "'bool'", "'int'", "'int32_t'", "'float'", "'double'", 
      "'\"'", "'https://'", "'http://'", "'*'", "'%'", "'!'", "'\\u003F'", 
      "'<'", "'>'", "'~'", "'#'", "'/'", "'\\\"'", "'\\\\'", "'\\'", "'.'", 
      "'('", "')'", "'true'", "'false'", "','", "'-'", "'+'", "'new '", 
      "'{'", "'}'", "'(X3DNode *)'", "", "", "'&'", "'='", "';'", "':'", 
      "'.set'", "'.X3DNode::set'", "'.add'", "", "'-1'", "", "", "", "", 
      "'['", "']'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "WS", "IDENTIFIER", "REFERENCE", "EQUALS", "SEMI", "COLON", "SET", 
      "X3DNODESET", "ADD", "WHOLE", "SENTINEL", "FLOAT", "TRUE", "FALSE", 
      "COMMENT", "OPENBRACKET", "CLOSEBRACKET", "QUOTE", "AT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,52,216,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,1,1,1,1,2,1,2,3,2,49,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,71,8,3,10,3,12,3,74,9,3,1,
  	3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,5,6,88,8,6,10,6,12,6,91,
  	9,6,1,7,1,7,1,7,1,7,3,7,97,8,7,1,7,3,7,100,8,7,1,7,1,7,1,7,1,7,1,7,3,
  	7,107,8,7,1,7,3,7,110,8,7,5,7,112,8,7,10,7,12,7,115,9,7,1,8,1,8,1,8,5,
  	8,120,8,8,10,8,12,8,123,9,8,1,9,1,9,1,9,5,9,128,8,9,10,9,12,9,131,9,9,
  	1,10,1,10,1,10,1,10,3,10,137,8,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,12,3,12,153,8,12,1,12,3,12,156,8,12,1,
  	12,1,12,1,12,1,12,3,12,162,8,12,1,12,1,12,1,12,1,12,3,12,168,8,12,1,12,
  	3,12,171,8,12,1,12,3,12,174,8,12,1,12,3,12,177,8,12,1,13,1,13,1,14,1,
  	14,1,14,1,14,1,14,3,14,186,8,14,1,14,1,14,1,15,1,15,3,15,192,8,15,1,15,
  	1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,3,18,203,8,18,1,18,1,18,1,19,
  	5,19,208,8,19,10,19,12,19,211,9,19,1,20,1,20,1,20,1,20,1,72,0,21,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,5,2,0,1,6,35,
  	35,1,0,18,18,1,0,7,7,1,0,25,26,2,0,37,37,40,42,244,0,42,1,0,0,0,2,44,
  	1,0,0,0,4,46,1,0,0,0,6,50,1,0,0,0,8,77,1,0,0,0,10,82,1,0,0,0,12,84,1,
  	0,0,0,14,99,1,0,0,0,16,116,1,0,0,0,18,124,1,0,0,0,20,136,1,0,0,0,22,138,
  	1,0,0,0,24,176,1,0,0,0,26,178,1,0,0,0,28,180,1,0,0,0,30,189,1,0,0,0,32,
  	195,1,0,0,0,34,197,1,0,0,0,36,202,1,0,0,0,38,209,1,0,0,0,40,212,1,0,0,
  	0,42,43,7,0,0,0,43,1,1,0,0,0,44,45,5,35,0,0,45,3,1,0,0,0,46,48,5,35,0,
  	0,47,49,5,43,0,0,48,47,1,0,0,0,48,49,1,0,0,0,49,5,1,0,0,0,50,72,5,7,0,
  	0,51,71,5,8,0,0,52,71,5,9,0,0,53,71,5,10,0,0,54,71,5,11,0,0,55,71,5,12,
  	0,0,56,71,5,13,0,0,57,71,5,14,0,0,58,71,5,15,0,0,59,71,5,52,0,0,60,71,
  	5,51,0,0,61,71,5,16,0,0,62,71,5,17,0,0,63,64,5,18,0,0,64,71,8,1,0,0,65,
  	71,5,19,0,0,66,71,5,20,0,0,67,71,5,21,0,0,68,71,5,22,0,0,69,71,8,2,0,
  	0,70,51,1,0,0,0,70,52,1,0,0,0,70,53,1,0,0,0,70,54,1,0,0,0,70,55,1,0,0,
  	0,70,56,1,0,0,0,70,57,1,0,0,0,70,58,1,0,0,0,70,59,1,0,0,0,70,60,1,0,0,
  	0,70,61,1,0,0,0,70,62,1,0,0,0,70,63,1,0,0,0,70,65,1,0,0,0,70,66,1,0,0,
  	0,70,67,1,0,0,0,70,68,1,0,0,0,70,69,1,0,0,0,71,74,1,0,0,0,72,73,1,0,0,
  	0,72,70,1,0,0,0,73,75,1,0,0,0,74,72,1,0,0,0,75,76,5,7,0,0,76,7,1,0,0,
  	0,77,78,5,1,0,0,78,79,5,23,0,0,79,80,3,6,3,0,80,81,5,24,0,0,81,9,1,0,
  	0,0,82,83,7,3,0,0,83,11,1,0,0,0,84,89,3,10,5,0,85,86,5,27,0,0,86,88,3,
  	10,5,0,87,85,1,0,0,0,88,91,1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,13,
  	1,0,0,0,91,89,1,0,0,0,92,100,5,44,0,0,93,94,5,28,0,0,94,100,5,43,0,0,
  	95,97,5,29,0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,100,5,43,
  	0,0,99,92,1,0,0,0,99,93,1,0,0,0,99,96,1,0,0,0,100,113,1,0,0,0,101,109,
  	5,27,0,0,102,110,5,44,0,0,103,104,5,28,0,0,104,110,5,43,0,0,105,107,5,
  	29,0,0,106,105,1,0,0,0,106,107,1,0,0,0,107,108,1,0,0,0,108,110,5,43,0,
  	0,109,102,1,0,0,0,109,103,1,0,0,0,109,106,1,0,0,0,110,112,1,0,0,0,111,
  	101,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,15,1,
  	0,0,0,115,113,1,0,0,0,116,121,5,45,0,0,117,118,5,27,0,0,118,120,5,45,
  	0,0,119,117,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,
  	17,1,0,0,0,123,121,1,0,0,0,124,129,3,8,4,0,125,126,5,27,0,0,126,128,3,
  	8,4,0,127,125,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,130,1,0,0,0,
  	130,19,1,0,0,0,131,129,1,0,0,0,132,137,3,12,6,0,133,137,3,14,7,0,134,
  	137,3,16,8,0,135,137,3,18,9,0,136,132,1,0,0,0,136,133,1,0,0,0,136,134,
  	1,0,0,0,136,135,1,0,0,0,137,21,1,0,0,0,138,139,5,30,0,0,139,140,3,0,0,
  	0,140,141,5,49,0,0,141,142,5,43,0,0,142,143,5,50,0,0,143,144,5,31,0,0,
  	144,145,3,20,10,0,145,146,5,32,0,0,146,23,1,0,0,0,147,177,3,8,4,0,148,
  	156,5,44,0,0,149,150,5,28,0,0,150,156,5,43,0,0,151,153,5,29,0,0,152,151,
  	1,0,0,0,152,153,1,0,0,0,153,154,1,0,0,0,154,156,5,43,0,0,155,148,1,0,
  	0,0,155,149,1,0,0,0,155,152,1,0,0,0,156,177,1,0,0,0,157,177,3,10,5,0,
  	158,161,5,43,0,0,159,160,5,27,0,0,160,162,3,22,11,0,161,159,1,0,0,0,161,
  	162,1,0,0,0,162,177,1,0,0,0,163,177,5,45,0,0,164,167,3,22,11,0,165,166,
  	5,27,0,0,166,168,5,43,0,0,167,165,1,0,0,0,167,168,1,0,0,0,168,177,1,0,
  	0,0,169,171,5,33,0,0,170,169,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,
  	172,174,5,36,0,0,173,172,1,0,0,0,173,174,1,0,0,0,174,175,1,0,0,0,175,
  	177,3,4,2,0,176,147,1,0,0,0,176,155,1,0,0,0,176,157,1,0,0,0,176,158,1,
  	0,0,0,176,163,1,0,0,0,176,164,1,0,0,0,176,170,1,0,0,0,177,25,1,0,0,0,
  	178,179,7,4,0,0,179,27,1,0,0,0,180,181,3,4,2,0,181,182,3,26,13,0,182,
  	183,5,35,0,0,183,185,5,23,0,0,184,186,3,24,12,0,185,184,1,0,0,0,185,186,
  	1,0,0,0,186,187,1,0,0,0,187,188,5,24,0,0,188,29,1,0,0,0,189,191,3,0,0,
  	0,190,192,5,36,0,0,191,190,1,0,0,0,191,192,1,0,0,0,192,193,1,0,0,0,193,
  	194,3,28,14,0,194,31,1,0,0,0,195,196,3,28,14,0,196,33,1,0,0,0,197,198,
  	3,28,14,0,198,35,1,0,0,0,199,203,3,30,15,0,200,203,3,32,16,0,201,203,
  	3,34,17,0,202,199,1,0,0,0,202,200,1,0,0,0,202,201,1,0,0,0,203,204,1,0,
  	0,0,204,205,5,38,0,0,205,37,1,0,0,0,206,208,3,36,18,0,207,206,1,0,0,0,
  	208,211,1,0,0,0,209,207,1,0,0,0,209,210,1,0,0,0,210,39,1,0,0,0,211,209,
  	1,0,0,0,212,213,3,38,19,0,213,214,5,0,0,1,214,41,1,0,0,0,23,48,70,72,
  	89,96,99,106,109,113,121,129,136,152,155,161,167,170,173,176,185,191,
  	202,209
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cppongrammarParserStaticData = staticData.release();
}

}

CPPONGrammarParser::CPPONGrammarParser(TokenStream *input) : CPPONGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CPPONGrammarParser::CPPONGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CPPONGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cppongrammarParserStaticData->atn, cppongrammarParserStaticData->decisionToDFA, cppongrammarParserStaticData->sharedContextCache, options);
}

CPPONGrammarParser::~CPPONGrammarParser() {
  delete _interpreter;
}

const atn::ATN& CPPONGrammarParser::getATN() const {
  return *cppongrammarParserStaticData->atn;
}

std::string CPPONGrammarParser::getGrammarFileName() const {
  return "CPPONGrammar.g4";
}

const std::vector<std::string>& CPPONGrammarParser::getRuleNames() const {
  return cppongrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& CPPONGrammarParser::getVocabulary() const {
  return cppongrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CPPONGrammarParser::getSerializedATN() const {
  return cppongrammarParserStaticData->serializedATN;
}


//----------------- TypeContext ------------------------------------------------------------------

CPPONGrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPPONGrammarParser::TypeContext::IDENTIFIER() {
  return getToken(CPPONGrammarParser::IDENTIFIER, 0);
}


size_t CPPONGrammarParser::TypeContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleType;
}

void CPPONGrammarParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void CPPONGrammarParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

CPPONGrammarParser::TypeContext* CPPONGrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 0, CPPONGrammarParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359738494) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

CPPONGrammarParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPPONGrammarParser::FieldContext::IDENTIFIER() {
  return getToken(CPPONGrammarParser::IDENTIFIER, 0);
}


size_t CPPONGrammarParser::FieldContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleField;
}

void CPPONGrammarParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void CPPONGrammarParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}

CPPONGrammarParser::FieldContext* CPPONGrammarParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 2, CPPONGrammarParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(CPPONGrammarParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

CPPONGrammarParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPPONGrammarParser::VariableContext::IDENTIFIER() {
  return getToken(CPPONGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* CPPONGrammarParser::VariableContext::WHOLE() {
  return getToken(CPPONGrammarParser::WHOLE, 0);
}


size_t CPPONGrammarParser::VariableContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleVariable;
}

void CPPONGrammarParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void CPPONGrammarParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

CPPONGrammarParser::VariableContext* CPPONGrammarParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 4, CPPONGrammarParser::RuleVariable);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(CPPONGrammarParser::IDENTIFIER);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPPONGrammarParser::WHOLE) {
      setState(47);
      match(CPPONGrammarParser::WHOLE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

CPPONGrammarParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPPONGrammarParser::StringContext::AT() {
  return getTokens(CPPONGrammarParser::AT);
}

tree::TerminalNode* CPPONGrammarParser::StringContext::AT(size_t i) {
  return getToken(CPPONGrammarParser::AT, i);
}

std::vector<tree::TerminalNode *> CPPONGrammarParser::StringContext::QUOTE() {
  return getTokens(CPPONGrammarParser::QUOTE);
}

tree::TerminalNode* CPPONGrammarParser::StringContext::QUOTE(size_t i) {
  return getToken(CPPONGrammarParser::QUOTE, i);
}


size_t CPPONGrammarParser::StringContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleString;
}

void CPPONGrammarParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void CPPONGrammarParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

CPPONGrammarParser::StringContext* CPPONGrammarParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 6, CPPONGrammarParser::RuleString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(CPPONGrammarParser::T__6);
    setState(72);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(70);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          setState(51);
          match(CPPONGrammarParser::T__7);
          break;
        }

        case 2: {
          setState(52);
          match(CPPONGrammarParser::T__8);
          break;
        }

        case 3: {
          setState(53);
          match(CPPONGrammarParser::T__9);
          break;
        }

        case 4: {
          setState(54);
          match(CPPONGrammarParser::T__10);
          break;
        }

        case 5: {
          setState(55);
          match(CPPONGrammarParser::T__11);
          break;
        }

        case 6: {
          setState(56);
          match(CPPONGrammarParser::T__12);
          break;
        }

        case 7: {
          setState(57);
          match(CPPONGrammarParser::T__13);
          break;
        }

        case 8: {
          setState(58);
          match(CPPONGrammarParser::T__14);
          break;
        }

        case 9: {
          setState(59);
          match(CPPONGrammarParser::AT);
          break;
        }

        case 10: {
          setState(60);
          match(CPPONGrammarParser::QUOTE);
          break;
        }

        case 11: {
          setState(61);
          match(CPPONGrammarParser::T__15);
          break;
        }

        case 12: {
          setState(62);
          match(CPPONGrammarParser::T__16);
          break;
        }

        case 13: {
          setState(63);
          match(CPPONGrammarParser::T__17);
          setState(64);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == CPPONGrammarParser::T__17)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        case 14: {
          setState(65);
          match(CPPONGrammarParser::T__18);
          break;
        }

        case 15: {
          setState(66);
          match(CPPONGrammarParser::T__19);
          break;
        }

        case 16: {
          setState(67);
          match(CPPONGrammarParser::T__20);
          break;
        }

        case 17: {
          setState(68);
          match(CPPONGrammarParser::T__21);
          break;
        }

        case 18: {
          setState(69);
          _la = _input->LA(1);
          if (_la == 0 || _la == Token::EOF || (_la == CPPONGrammarParser::T__6)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(74);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(75);
    match(CPPONGrammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CstringContext ------------------------------------------------------------------

CPPONGrammarParser::CstringContext::CstringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::StringContext* CPPONGrammarParser::CstringContext::string() {
  return getRuleContext<CPPONGrammarParser::StringContext>(0);
}


size_t CPPONGrammarParser::CstringContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleCstring;
}

void CPPONGrammarParser::CstringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCstring(this);
}

void CPPONGrammarParser::CstringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCstring(this);
}

CPPONGrammarParser::CstringContext* CPPONGrammarParser::cstring() {
  CstringContext *_localctx = _tracker.createInstance<CstringContext>(_ctx, getState());
  enterRule(_localctx, 8, CPPONGrammarParser::RuleCstring);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(CPPONGrammarParser::T__0);
    setState(78);
    match(CPPONGrammarParser::T__22);
    setState(79);
    string();
    setState(80);
    match(CPPONGrammarParser::T__23);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanContext ------------------------------------------------------------------

CPPONGrammarParser::BooleanContext::BooleanContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CPPONGrammarParser::BooleanContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleBoolean;
}

void CPPONGrammarParser::BooleanContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean(this);
}

void CPPONGrammarParser::BooleanContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean(this);
}

CPPONGrammarParser::BooleanContext* CPPONGrammarParser::boolean() {
  BooleanContext *_localctx = _tracker.createInstance<BooleanContext>(_ctx, getState());
  enterRule(_localctx, 10, CPPONGrammarParser::RuleBoolean);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _la = _input->LA(1);
    if (!(_la == CPPONGrammarParser::T__24

    || _la == CPPONGrammarParser::T__25)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Boolean_listContext ------------------------------------------------------------------

CPPONGrammarParser::Boolean_listContext::Boolean_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPPONGrammarParser::BooleanContext *> CPPONGrammarParser::Boolean_listContext::boolean() {
  return getRuleContexts<CPPONGrammarParser::BooleanContext>();
}

CPPONGrammarParser::BooleanContext* CPPONGrammarParser::Boolean_listContext::boolean(size_t i) {
  return getRuleContext<CPPONGrammarParser::BooleanContext>(i);
}


size_t CPPONGrammarParser::Boolean_listContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleBoolean_list;
}

void CPPONGrammarParser::Boolean_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolean_list(this);
}

void CPPONGrammarParser::Boolean_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolean_list(this);
}

CPPONGrammarParser::Boolean_listContext* CPPONGrammarParser::boolean_list() {
  Boolean_listContext *_localctx = _tracker.createInstance<Boolean_listContext>(_ctx, getState());
  enterRule(_localctx, 12, CPPONGrammarParser::RuleBoolean_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    boolean();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPPONGrammarParser::T__26) {
      setState(85);
      match(CPPONGrammarParser::T__26);
      setState(86);
      boolean();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_listContext ------------------------------------------------------------------

CPPONGrammarParser::Integer_listContext::Integer_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPPONGrammarParser::Integer_listContext::SENTINEL() {
  return getTokens(CPPONGrammarParser::SENTINEL);
}

tree::TerminalNode* CPPONGrammarParser::Integer_listContext::SENTINEL(size_t i) {
  return getToken(CPPONGrammarParser::SENTINEL, i);
}

std::vector<tree::TerminalNode *> CPPONGrammarParser::Integer_listContext::WHOLE() {
  return getTokens(CPPONGrammarParser::WHOLE);
}

tree::TerminalNode* CPPONGrammarParser::Integer_listContext::WHOLE(size_t i) {
  return getToken(CPPONGrammarParser::WHOLE, i);
}


size_t CPPONGrammarParser::Integer_listContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleInteger_list;
}

void CPPONGrammarParser::Integer_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_list(this);
}

void CPPONGrammarParser::Integer_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_list(this);
}

CPPONGrammarParser::Integer_listContext* CPPONGrammarParser::integer_list() {
  Integer_listContext *_localctx = _tracker.createInstance<Integer_listContext>(_ctx, getState());
  enterRule(_localctx, 14, CPPONGrammarParser::RuleInteger_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPPONGrammarParser::SENTINEL: {
        setState(92);
        match(CPPONGrammarParser::SENTINEL);
        break;
      }

      case CPPONGrammarParser::T__27: {
        setState(93);
        match(CPPONGrammarParser::T__27);
        setState(94);
        match(CPPONGrammarParser::WHOLE);
        break;
      }

      case CPPONGrammarParser::T__28:
      case CPPONGrammarParser::WHOLE: {
        setState(96);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == CPPONGrammarParser::T__28) {
          setState(95);
          match(CPPONGrammarParser::T__28);
        }
        setState(98);
        match(CPPONGrammarParser::WHOLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPPONGrammarParser::T__26) {
      setState(101);
      match(CPPONGrammarParser::T__26);
      setState(109);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPPONGrammarParser::SENTINEL: {
          setState(102);
          match(CPPONGrammarParser::SENTINEL);
          break;
        }

        case CPPONGrammarParser::T__27: {
          setState(103);
          match(CPPONGrammarParser::T__27);
          setState(104);
          match(CPPONGrammarParser::WHOLE);
          break;
        }

        case CPPONGrammarParser::T__28:
        case CPPONGrammarParser::WHOLE: {
          setState(106);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPPONGrammarParser::T__28) {
            setState(105);
            match(CPPONGrammarParser::T__28);
          }
          setState(108);
          match(CPPONGrammarParser::WHOLE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Float_listContext ------------------------------------------------------------------

CPPONGrammarParser::Float_listContext::Float_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CPPONGrammarParser::Float_listContext::FLOAT() {
  return getTokens(CPPONGrammarParser::FLOAT);
}

tree::TerminalNode* CPPONGrammarParser::Float_listContext::FLOAT(size_t i) {
  return getToken(CPPONGrammarParser::FLOAT, i);
}


size_t CPPONGrammarParser::Float_listContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleFloat_list;
}

void CPPONGrammarParser::Float_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat_list(this);
}

void CPPONGrammarParser::Float_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat_list(this);
}

CPPONGrammarParser::Float_listContext* CPPONGrammarParser::float_list() {
  Float_listContext *_localctx = _tracker.createInstance<Float_listContext>(_ctx, getState());
  enterRule(_localctx, 16, CPPONGrammarParser::RuleFloat_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(CPPONGrammarParser::FLOAT);
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPPONGrammarParser::T__26) {
      setState(117);
      match(CPPONGrammarParser::T__26);
      setState(118);
      match(CPPONGrammarParser::FLOAT);
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_listContext ------------------------------------------------------------------

CPPONGrammarParser::String_listContext::String_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPPONGrammarParser::CstringContext *> CPPONGrammarParser::String_listContext::cstring() {
  return getRuleContexts<CPPONGrammarParser::CstringContext>();
}

CPPONGrammarParser::CstringContext* CPPONGrammarParser::String_listContext::cstring(size_t i) {
  return getRuleContext<CPPONGrammarParser::CstringContext>(i);
}


size_t CPPONGrammarParser::String_listContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleString_list;
}

void CPPONGrammarParser::String_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_list(this);
}

void CPPONGrammarParser::String_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_list(this);
}

CPPONGrammarParser::String_listContext* CPPONGrammarParser::string_list() {
  String_listContext *_localctx = _tracker.createInstance<String_listContext>(_ctx, getState());
  enterRule(_localctx, 18, CPPONGrammarParser::RuleString_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    cstring();
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CPPONGrammarParser::T__26) {
      setState(125);
      match(CPPONGrammarParser::T__26);
      setState(126);
      cstring();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

CPPONGrammarParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::Boolean_listContext* CPPONGrammarParser::ListContext::boolean_list() {
  return getRuleContext<CPPONGrammarParser::Boolean_listContext>(0);
}

CPPONGrammarParser::Integer_listContext* CPPONGrammarParser::ListContext::integer_list() {
  return getRuleContext<CPPONGrammarParser::Integer_listContext>(0);
}

CPPONGrammarParser::Float_listContext* CPPONGrammarParser::ListContext::float_list() {
  return getRuleContext<CPPONGrammarParser::Float_listContext>(0);
}

CPPONGrammarParser::String_listContext* CPPONGrammarParser::ListContext::string_list() {
  return getRuleContext<CPPONGrammarParser::String_listContext>(0);
}


size_t CPPONGrammarParser::ListContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleList;
}

void CPPONGrammarParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void CPPONGrammarParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}

CPPONGrammarParser::ListContext* CPPONGrammarParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 20, CPPONGrammarParser::RuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CPPONGrammarParser::T__24:
      case CPPONGrammarParser::T__25: {
        enterOuterAlt(_localctx, 1);
        setState(132);
        boolean_list();
        break;
      }

      case CPPONGrammarParser::T__27:
      case CPPONGrammarParser::T__28:
      case CPPONGrammarParser::WHOLE:
      case CPPONGrammarParser::SENTINEL: {
        enterOuterAlt(_localctx, 2);
        setState(133);
        integer_list();
        break;
      }

      case CPPONGrammarParser::FLOAT: {
        enterOuterAlt(_localctx, 3);
        setState(134);
        float_list();
        break;
      }

      case CPPONGrammarParser::T__0: {
        enterOuterAlt(_localctx, 4);
        setState(135);
        string_list();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Construct_arrayContext ------------------------------------------------------------------

CPPONGrammarParser::Construct_arrayContext::Construct_arrayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::TypeContext* CPPONGrammarParser::Construct_arrayContext::type() {
  return getRuleContext<CPPONGrammarParser::TypeContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::Construct_arrayContext::OPENBRACKET() {
  return getToken(CPPONGrammarParser::OPENBRACKET, 0);
}

tree::TerminalNode* CPPONGrammarParser::Construct_arrayContext::WHOLE() {
  return getToken(CPPONGrammarParser::WHOLE, 0);
}

tree::TerminalNode* CPPONGrammarParser::Construct_arrayContext::CLOSEBRACKET() {
  return getToken(CPPONGrammarParser::CLOSEBRACKET, 0);
}

CPPONGrammarParser::ListContext* CPPONGrammarParser::Construct_arrayContext::list() {
  return getRuleContext<CPPONGrammarParser::ListContext>(0);
}


size_t CPPONGrammarParser::Construct_arrayContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleConstruct_array;
}

void CPPONGrammarParser::Construct_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstruct_array(this);
}

void CPPONGrammarParser::Construct_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstruct_array(this);
}

CPPONGrammarParser::Construct_arrayContext* CPPONGrammarParser::construct_array() {
  Construct_arrayContext *_localctx = _tracker.createInstance<Construct_arrayContext>(_ctx, getState());
  enterRule(_localctx, 22, CPPONGrammarParser::RuleConstruct_array);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(CPPONGrammarParser::T__29);
    setState(139);
    type();
    setState(140);
    match(CPPONGrammarParser::OPENBRACKET);
    setState(141);
    match(CPPONGrammarParser::WHOLE);
    setState(142);
    match(CPPONGrammarParser::CLOSEBRACKET);
    setState(143);
    match(CPPONGrammarParser::T__30);
    setState(144);
    list();
    setState(145);
    match(CPPONGrammarParser::T__31);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

CPPONGrammarParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::CstringContext* CPPONGrammarParser::ParametersContext::cstring() {
  return getRuleContext<CPPONGrammarParser::CstringContext>(0);
}

CPPONGrammarParser::BooleanContext* CPPONGrammarParser::ParametersContext::boolean() {
  return getRuleContext<CPPONGrammarParser::BooleanContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::ParametersContext::WHOLE() {
  return getToken(CPPONGrammarParser::WHOLE, 0);
}

tree::TerminalNode* CPPONGrammarParser::ParametersContext::FLOAT() {
  return getToken(CPPONGrammarParser::FLOAT, 0);
}

CPPONGrammarParser::Construct_arrayContext* CPPONGrammarParser::ParametersContext::construct_array() {
  return getRuleContext<CPPONGrammarParser::Construct_arrayContext>(0);
}

CPPONGrammarParser::VariableContext* CPPONGrammarParser::ParametersContext::variable() {
  return getRuleContext<CPPONGrammarParser::VariableContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::ParametersContext::SENTINEL() {
  return getToken(CPPONGrammarParser::SENTINEL, 0);
}

tree::TerminalNode* CPPONGrammarParser::ParametersContext::REFERENCE() {
  return getToken(CPPONGrammarParser::REFERENCE, 0);
}


size_t CPPONGrammarParser::ParametersContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleParameters;
}

void CPPONGrammarParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void CPPONGrammarParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

CPPONGrammarParser::ParametersContext* CPPONGrammarParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 24, CPPONGrammarParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(147);
      cstring();
      break;
    }

    case 2: {
      setState(155);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case CPPONGrammarParser::SENTINEL: {
          setState(148);
          match(CPPONGrammarParser::SENTINEL);
          break;
        }

        case CPPONGrammarParser::T__27: {
          setState(149);
          match(CPPONGrammarParser::T__27);
          setState(150);
          match(CPPONGrammarParser::WHOLE);
          break;
        }

        case CPPONGrammarParser::T__28:
        case CPPONGrammarParser::WHOLE: {
          setState(152);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == CPPONGrammarParser::T__28) {
            setState(151);
            match(CPPONGrammarParser::T__28);
          }
          setState(154);
          match(CPPONGrammarParser::WHOLE);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 3: {
      setState(157);
      boolean();
      break;
    }

    case 4: {
      setState(158);
      match(CPPONGrammarParser::WHOLE);
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPPONGrammarParser::T__26) {
        setState(159);
        match(CPPONGrammarParser::T__26);
        setState(160);
        construct_array();
      }
      break;
    }

    case 5: {
      setState(163);
      match(CPPONGrammarParser::FLOAT);
      break;
    }

    case 6: {
      setState(164);
      construct_array();
      setState(167);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPPONGrammarParser::T__26) {
        setState(165);
        match(CPPONGrammarParser::T__26);
        setState(166);
        match(CPPONGrammarParser::WHOLE);
      }
      break;
    }

    case 7: {
      setState(170);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPPONGrammarParser::T__32) {
        setState(169);
        match(CPPONGrammarParser::T__32);
      }
      setState(173);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CPPONGrammarParser::REFERENCE) {
        setState(172);
        match(CPPONGrammarParser::REFERENCE);
      }
      setState(175);
      variable();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorContext ------------------------------------------------------------------

CPPONGrammarParser::OperatorContext::OperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPPONGrammarParser::OperatorContext::EQUALS() {
  return getToken(CPPONGrammarParser::EQUALS, 0);
}

tree::TerminalNode* CPPONGrammarParser::OperatorContext::X3DNODESET() {
  return getToken(CPPONGrammarParser::X3DNODESET, 0);
}

tree::TerminalNode* CPPONGrammarParser::OperatorContext::SET() {
  return getToken(CPPONGrammarParser::SET, 0);
}

tree::TerminalNode* CPPONGrammarParser::OperatorContext::ADD() {
  return getToken(CPPONGrammarParser::ADD, 0);
}


size_t CPPONGrammarParser::OperatorContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleOperator;
}

void CPPONGrammarParser::OperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator(this);
}

void CPPONGrammarParser::OperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator(this);
}

CPPONGrammarParser::OperatorContext* CPPONGrammarParser::operator_() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, CPPONGrammarParser::RuleOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 7834020347904) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunccallContext ------------------------------------------------------------------

CPPONGrammarParser::FunccallContext::FunccallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::VariableContext* CPPONGrammarParser::FunccallContext::variable() {
  return getRuleContext<CPPONGrammarParser::VariableContext>(0);
}

CPPONGrammarParser::OperatorContext* CPPONGrammarParser::FunccallContext::operator_() {
  return getRuleContext<CPPONGrammarParser::OperatorContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::FunccallContext::IDENTIFIER() {
  return getToken(CPPONGrammarParser::IDENTIFIER, 0);
}

CPPONGrammarParser::ParametersContext* CPPONGrammarParser::FunccallContext::parameters() {
  return getRuleContext<CPPONGrammarParser::ParametersContext>(0);
}


size_t CPPONGrammarParser::FunccallContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleFunccall;
}

void CPPONGrammarParser::FunccallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunccall(this);
}

void CPPONGrammarParser::FunccallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunccall(this);
}

CPPONGrammarParser::FunccallContext* CPPONGrammarParser::funccall() {
  FunccallContext *_localctx = _tracker.createInstance<FunccallContext>(_ctx, getState());
  enterRule(_localctx, 28, CPPONGrammarParser::RuleFunccall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    variable();
    setState(181);
    operator_();
    setState(182);
    match(CPPONGrammarParser::IDENTIFIER);
    setState(183);
    match(CPPONGrammarParser::T__22);
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 61686300016642) != 0)) {
      setState(184);
      parameters();
    }
    setState(187);
    match(CPPONGrammarParser::T__23);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructContext ------------------------------------------------------------------

CPPONGrammarParser::ConstructContext::ConstructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::TypeContext* CPPONGrammarParser::ConstructContext::type() {
  return getRuleContext<CPPONGrammarParser::TypeContext>(0);
}

CPPONGrammarParser::FunccallContext* CPPONGrammarParser::ConstructContext::funccall() {
  return getRuleContext<CPPONGrammarParser::FunccallContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::ConstructContext::REFERENCE() {
  return getToken(CPPONGrammarParser::REFERENCE, 0);
}


size_t CPPONGrammarParser::ConstructContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleConstruct;
}

void CPPONGrammarParser::ConstructContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstruct(this);
}

void CPPONGrammarParser::ConstructContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstruct(this);
}

CPPONGrammarParser::ConstructContext* CPPONGrammarParser::construct() {
  ConstructContext *_localctx = _tracker.createInstance<ConstructContext>(_ctx, getState());
  enterRule(_localctx, 30, CPPONGrammarParser::RuleConstruct);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189);
    type();
    setState(191);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CPPONGrammarParser::REFERENCE) {
      setState(190);
      match(CPPONGrammarParser::REFERENCE);
    }
    setState(193);
    funccall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Set_fieldContext ------------------------------------------------------------------

CPPONGrammarParser::Set_fieldContext::Set_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::FunccallContext* CPPONGrammarParser::Set_fieldContext::funccall() {
  return getRuleContext<CPPONGrammarParser::FunccallContext>(0);
}


size_t CPPONGrammarParser::Set_fieldContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleSet_field;
}

void CPPONGrammarParser::Set_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet_field(this);
}

void CPPONGrammarParser::Set_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet_field(this);
}

CPPONGrammarParser::Set_fieldContext* CPPONGrammarParser::set_field() {
  Set_fieldContext *_localctx = _tracker.createInstance<Set_fieldContext>(_ctx, getState());
  enterRule(_localctx, 32, CPPONGrammarParser::RuleSet_field);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    funccall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_fieldContext ------------------------------------------------------------------

CPPONGrammarParser::Add_fieldContext::Add_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::FunccallContext* CPPONGrammarParser::Add_fieldContext::funccall() {
  return getRuleContext<CPPONGrammarParser::FunccallContext>(0);
}


size_t CPPONGrammarParser::Add_fieldContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleAdd_field;
}

void CPPONGrammarParser::Add_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_field(this);
}

void CPPONGrammarParser::Add_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_field(this);
}

CPPONGrammarParser::Add_fieldContext* CPPONGrammarParser::add_field() {
  Add_fieldContext *_localctx = _tracker.createInstance<Add_fieldContext>(_ctx, getState());
  enterRule(_localctx, 34, CPPONGrammarParser::RuleAdd_field);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    funccall();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

CPPONGrammarParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CPPONGrammarParser::LineContext::SEMI() {
  return getToken(CPPONGrammarParser::SEMI, 0);
}

CPPONGrammarParser::ConstructContext* CPPONGrammarParser::LineContext::construct() {
  return getRuleContext<CPPONGrammarParser::ConstructContext>(0);
}

CPPONGrammarParser::Set_fieldContext* CPPONGrammarParser::LineContext::set_field() {
  return getRuleContext<CPPONGrammarParser::Set_fieldContext>(0);
}

CPPONGrammarParser::Add_fieldContext* CPPONGrammarParser::LineContext::add_field() {
  return getRuleContext<CPPONGrammarParser::Add_fieldContext>(0);
}


size_t CPPONGrammarParser::LineContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleLine;
}

void CPPONGrammarParser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void CPPONGrammarParser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

CPPONGrammarParser::LineContext* CPPONGrammarParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 36, CPPONGrammarParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(199);
      construct();
      break;
    }

    case 2: {
      setState(200);
      set_field();
      break;
    }

    case 3: {
      setState(201);
      add_field();
      break;
    }

    default:
      break;
    }
    setState(204);
    match(CPPONGrammarParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LinesContext ------------------------------------------------------------------

CPPONGrammarParser::LinesContext::LinesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CPPONGrammarParser::LineContext *> CPPONGrammarParser::LinesContext::line() {
  return getRuleContexts<CPPONGrammarParser::LineContext>();
}

CPPONGrammarParser::LineContext* CPPONGrammarParser::LinesContext::line(size_t i) {
  return getRuleContext<CPPONGrammarParser::LineContext>(i);
}


size_t CPPONGrammarParser::LinesContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleLines;
}

void CPPONGrammarParser::LinesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLines(this);
}

void CPPONGrammarParser::LinesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLines(this);
}

CPPONGrammarParser::LinesContext* CPPONGrammarParser::lines() {
  LinesContext *_localctx = _tracker.createInstance<LinesContext>(_ctx, getState());
  enterRule(_localctx, 38, CPPONGrammarParser::RuleLines);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34359738494) != 0)) {
      setState(206);
      line();
      setState(211);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- X3dContext ------------------------------------------------------------------

CPPONGrammarParser::X3dContext::X3dContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CPPONGrammarParser::LinesContext* CPPONGrammarParser::X3dContext::lines() {
  return getRuleContext<CPPONGrammarParser::LinesContext>(0);
}

tree::TerminalNode* CPPONGrammarParser::X3dContext::EOF() {
  return getToken(CPPONGrammarParser::EOF, 0);
}


size_t CPPONGrammarParser::X3dContext::getRuleIndex() const {
  return CPPONGrammarParser::RuleX3d;
}

void CPPONGrammarParser::X3dContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterX3d(this);
}

void CPPONGrammarParser::X3dContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CPPONGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitX3d(this);
}

CPPONGrammarParser::X3dContext* CPPONGrammarParser::x3d() {
  X3dContext *_localctx = _tracker.createInstance<X3dContext>(_ctx, getState());
  enterRule(_localctx, 40, CPPONGrammarParser::RuleX3d);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    lines();
    setState(213);
    match(CPPONGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CPPONGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cppongrammarParserInitialize();
#else
  ::antlr4::internal::call_once(cppongrammarParserOnceFlag, cppongrammarParserInitialize);
#endif
}

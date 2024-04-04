
// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CPPONGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, WS = 34, IDENTIFIER = 35, REFERENCE = 36, EQUALS = 37, SEMI = 38, 
    COLON = 39, SET = 40, X3DNODESET = 41, ADD = 42, WHOLE = 43, SENTINEL = 44, 
    FLOAT = 45, TRUE = 46, FALSE = 47, COMMENT = 48, OPENBRACKET = 49, CLOSEBRACKET = 50, 
    QUOTE = 51, AT = 52
  };

  enum {
    RuleType = 0, RuleField = 1, RuleVariable = 2, RuleString = 3, RuleCstring = 4, 
    RuleBoolean = 5, RuleBoolean_list = 6, RuleInteger_list = 7, RuleFloat_list = 8, 
    RuleString_list = 9, RuleList = 10, RuleConstruct_array = 11, RuleParameters = 12, 
    RuleOperator = 13, RuleFunccall = 14, RuleConstruct = 15, RuleSet_field = 16, 
    RuleAdd_field = 17, RuleLine = 18, RuleLines = 19, RuleX3d = 20
  };

  explicit CPPONGrammarParser(antlr4::TokenStream *input);

  CPPONGrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CPPONGrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class TypeContext;
  class FieldContext;
  class VariableContext;
  class StringContext;
  class CstringContext;
  class BooleanContext;
  class Boolean_listContext;
  class Integer_listContext;
  class Float_listContext;
  class String_listContext;
  class ListContext;
  class Construct_arrayContext;
  class ParametersContext;
  class OperatorContext;
  class FunccallContext;
  class ConstructContext;
  class Set_fieldContext;
  class Add_fieldContext;
  class LineContext;
  class LinesContext;
  class X3dContext; 

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldContext* field();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *WHOLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> AT();
    antlr4::tree::TerminalNode* AT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  CstringContext : public antlr4::ParserRuleContext {
  public:
    CstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CstringContext* cstring();

  class  BooleanContext : public antlr4::ParserRuleContext {
  public:
    BooleanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanContext* boolean();

  class  Boolean_listContext : public antlr4::ParserRuleContext {
  public:
    Boolean_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BooleanContext *> boolean();
    BooleanContext* boolean(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Boolean_listContext* boolean_list();

  class  Integer_listContext : public antlr4::ParserRuleContext {
  public:
    Integer_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SENTINEL();
    antlr4::tree::TerminalNode* SENTINEL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHOLE();
    antlr4::tree::TerminalNode* WHOLE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_listContext* integer_list();

  class  Float_listContext : public antlr4::ParserRuleContext {
  public:
    Float_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FLOAT();
    antlr4::tree::TerminalNode* FLOAT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Float_listContext* float_list();

  class  String_listContext : public antlr4::ParserRuleContext {
  public:
    String_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CstringContext *> cstring();
    CstringContext* cstring(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_listContext* string_list();

  class  ListContext : public antlr4::ParserRuleContext {
  public:
    ListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Boolean_listContext *boolean_list();
    Integer_listContext *integer_list();
    Float_listContext *float_list();
    String_listContext *string_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ListContext* list();

  class  Construct_arrayContext : public antlr4::ParserRuleContext {
  public:
    Construct_arrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *OPENBRACKET();
    antlr4::tree::TerminalNode *WHOLE();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    ListContext *list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Construct_arrayContext* construct_array();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CstringContext *cstring();
    BooleanContext *boolean();
    antlr4::tree::TerminalNode *WHOLE();
    antlr4::tree::TerminalNode *FLOAT();
    Construct_arrayContext *construct_array();
    VariableContext *variable();
    antlr4::tree::TerminalNode *SENTINEL();
    antlr4::tree::TerminalNode *REFERENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersContext* parameters();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *X3DNODESET();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *ADD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator_();

  class  FunccallContext : public antlr4::ParserRuleContext {
  public:
    FunccallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    OperatorContext *operator_();
    antlr4::tree::TerminalNode *IDENTIFIER();
    ParametersContext *parameters();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunccallContext* funccall();

  class  ConstructContext : public antlr4::ParserRuleContext {
  public:
    ConstructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    FunccallContext *funccall();
    antlr4::tree::TerminalNode *REFERENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructContext* construct();

  class  Set_fieldContext : public antlr4::ParserRuleContext {
  public:
    Set_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunccallContext *funccall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_fieldContext* set_field();

  class  Add_fieldContext : public antlr4::ParserRuleContext {
  public:
    Add_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunccallContext *funccall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_fieldContext* add_field();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    ConstructContext *construct();
    Set_fieldContext *set_field();
    Add_fieldContext *add_field();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  LinesContext : public antlr4::ParserRuleContext {
  public:
    LinesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineContext *> line();
    LineContext* line(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LinesContext* lines();

  class  X3dContext : public antlr4::ParserRuleContext {
  public:
    X3dContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LinesContext *lines();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  X3dContext* x3d();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


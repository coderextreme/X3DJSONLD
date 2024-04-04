
// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CPPONGrammarVisitor.h"


/**
 * This class provides an empty implementation of CPPONGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CPPONGrammarBaseVisitor : public CPPONGrammarVisitor {
public:

  virtual std::any visitType(CPPONGrammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitField(CPPONGrammarParser::FieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(CPPONGrammarParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(CPPONGrammarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCstring(CPPONGrammarParser::CstringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(CPPONGrammarParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean_list(CPPONGrammarParser::Boolean_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger_list(CPPONGrammarParser::Integer_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat_list(CPPONGrammarParser::Float_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString_list(CPPONGrammarParser::String_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList(CPPONGrammarParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstruct_array(CPPONGrammarParser::Construct_arrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameters(CPPONGrammarParser::ParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(CPPONGrammarParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunccall(CPPONGrammarParser::FunccallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstruct(CPPONGrammarParser::ConstructContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSet_field(CPPONGrammarParser::Set_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd_field(CPPONGrammarParser::Add_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(CPPONGrammarParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLines(CPPONGrammarParser::LinesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitX3d(CPPONGrammarParser::X3dContext *ctx) override {
    return visitChildren(ctx);
  }


};



// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CPPONGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CPPONGrammarParser.
 */
class  CPPONGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterType(CPPONGrammarParser::TypeContext *ctx) = 0;
  virtual void exitType(CPPONGrammarParser::TypeContext *ctx) = 0;

  virtual void enterField(CPPONGrammarParser::FieldContext *ctx) = 0;
  virtual void exitField(CPPONGrammarParser::FieldContext *ctx) = 0;

  virtual void enterVariable(CPPONGrammarParser::VariableContext *ctx) = 0;
  virtual void exitVariable(CPPONGrammarParser::VariableContext *ctx) = 0;

  virtual void enterString(CPPONGrammarParser::StringContext *ctx) = 0;
  virtual void exitString(CPPONGrammarParser::StringContext *ctx) = 0;

  virtual void enterCstring(CPPONGrammarParser::CstringContext *ctx) = 0;
  virtual void exitCstring(CPPONGrammarParser::CstringContext *ctx) = 0;

  virtual void enterBoolean(CPPONGrammarParser::BooleanContext *ctx) = 0;
  virtual void exitBoolean(CPPONGrammarParser::BooleanContext *ctx) = 0;

  virtual void enterBoolean_list(CPPONGrammarParser::Boolean_listContext *ctx) = 0;
  virtual void exitBoolean_list(CPPONGrammarParser::Boolean_listContext *ctx) = 0;

  virtual void enterInteger_list(CPPONGrammarParser::Integer_listContext *ctx) = 0;
  virtual void exitInteger_list(CPPONGrammarParser::Integer_listContext *ctx) = 0;

  virtual void enterFloat_list(CPPONGrammarParser::Float_listContext *ctx) = 0;
  virtual void exitFloat_list(CPPONGrammarParser::Float_listContext *ctx) = 0;

  virtual void enterString_list(CPPONGrammarParser::String_listContext *ctx) = 0;
  virtual void exitString_list(CPPONGrammarParser::String_listContext *ctx) = 0;

  virtual void enterList(CPPONGrammarParser::ListContext *ctx) = 0;
  virtual void exitList(CPPONGrammarParser::ListContext *ctx) = 0;

  virtual void enterConstruct_array(CPPONGrammarParser::Construct_arrayContext *ctx) = 0;
  virtual void exitConstruct_array(CPPONGrammarParser::Construct_arrayContext *ctx) = 0;

  virtual void enterParameters(CPPONGrammarParser::ParametersContext *ctx) = 0;
  virtual void exitParameters(CPPONGrammarParser::ParametersContext *ctx) = 0;

  virtual void enterOperator(CPPONGrammarParser::OperatorContext *ctx) = 0;
  virtual void exitOperator(CPPONGrammarParser::OperatorContext *ctx) = 0;

  virtual void enterFunccall(CPPONGrammarParser::FunccallContext *ctx) = 0;
  virtual void exitFunccall(CPPONGrammarParser::FunccallContext *ctx) = 0;

  virtual void enterConstruct(CPPONGrammarParser::ConstructContext *ctx) = 0;
  virtual void exitConstruct(CPPONGrammarParser::ConstructContext *ctx) = 0;

  virtual void enterSet_field(CPPONGrammarParser::Set_fieldContext *ctx) = 0;
  virtual void exitSet_field(CPPONGrammarParser::Set_fieldContext *ctx) = 0;

  virtual void enterAdd_field(CPPONGrammarParser::Add_fieldContext *ctx) = 0;
  virtual void exitAdd_field(CPPONGrammarParser::Add_fieldContext *ctx) = 0;

  virtual void enterLine(CPPONGrammarParser::LineContext *ctx) = 0;
  virtual void exitLine(CPPONGrammarParser::LineContext *ctx) = 0;

  virtual void enterLines(CPPONGrammarParser::LinesContext *ctx) = 0;
  virtual void exitLines(CPPONGrammarParser::LinesContext *ctx) = 0;

  virtual void enterX3d(CPPONGrammarParser::X3dContext *ctx) = 0;
  virtual void exitX3d(CPPONGrammarParser::X3dContext *ctx) = 0;


};


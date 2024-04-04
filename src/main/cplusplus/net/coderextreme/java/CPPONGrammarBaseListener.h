
// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CPPONGrammarListener.h"


/**
 * This class provides an empty implementation of CPPONGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CPPONGrammarBaseListener : public CPPONGrammarListener {
public:

  virtual void enterType(CPPONGrammarParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(CPPONGrammarParser::TypeContext * /*ctx*/) override { }

  virtual void enterField(CPPONGrammarParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(CPPONGrammarParser::FieldContext * /*ctx*/) override { }

  virtual void enterVariable(CPPONGrammarParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(CPPONGrammarParser::VariableContext * /*ctx*/) override { }

  virtual void enterString(CPPONGrammarParser::StringContext * /*ctx*/) override { }
  virtual void exitString(CPPONGrammarParser::StringContext * /*ctx*/) override { }

  virtual void enterCstring(CPPONGrammarParser::CstringContext * /*ctx*/) override { }
  virtual void exitCstring(CPPONGrammarParser::CstringContext * /*ctx*/) override { }

  virtual void enterBoolean(CPPONGrammarParser::BooleanContext * /*ctx*/) override { }
  virtual void exitBoolean(CPPONGrammarParser::BooleanContext * /*ctx*/) override { }

  virtual void enterBoolean_list(CPPONGrammarParser::Boolean_listContext * /*ctx*/) override { }
  virtual void exitBoolean_list(CPPONGrammarParser::Boolean_listContext * /*ctx*/) override { }

  virtual void enterInteger_list(CPPONGrammarParser::Integer_listContext * /*ctx*/) override { }
  virtual void exitInteger_list(CPPONGrammarParser::Integer_listContext * /*ctx*/) override { }

  virtual void enterFloat_list(CPPONGrammarParser::Float_listContext * /*ctx*/) override { }
  virtual void exitFloat_list(CPPONGrammarParser::Float_listContext * /*ctx*/) override { }

  virtual void enterString_list(CPPONGrammarParser::String_listContext * /*ctx*/) override { }
  virtual void exitString_list(CPPONGrammarParser::String_listContext * /*ctx*/) override { }

  virtual void enterList(CPPONGrammarParser::ListContext * /*ctx*/) override { }
  virtual void exitList(CPPONGrammarParser::ListContext * /*ctx*/) override { }

  virtual void enterConstruct_array(CPPONGrammarParser::Construct_arrayContext * /*ctx*/) override { }
  virtual void exitConstruct_array(CPPONGrammarParser::Construct_arrayContext * /*ctx*/) override { }

  virtual void enterParameters(CPPONGrammarParser::ParametersContext * /*ctx*/) override { }
  virtual void exitParameters(CPPONGrammarParser::ParametersContext * /*ctx*/) override { }

  virtual void enterOperator(CPPONGrammarParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(CPPONGrammarParser::OperatorContext * /*ctx*/) override { }

  virtual void enterFunccall(CPPONGrammarParser::FunccallContext * /*ctx*/) override { }
  virtual void exitFunccall(CPPONGrammarParser::FunccallContext * /*ctx*/) override { }

  virtual void enterConstruct(CPPONGrammarParser::ConstructContext * /*ctx*/) override { }
  virtual void exitConstruct(CPPONGrammarParser::ConstructContext * /*ctx*/) override { }

  virtual void enterSet_field(CPPONGrammarParser::Set_fieldContext * /*ctx*/) override { }
  virtual void exitSet_field(CPPONGrammarParser::Set_fieldContext * /*ctx*/) override { }

  virtual void enterAdd_field(CPPONGrammarParser::Add_fieldContext * /*ctx*/) override { }
  virtual void exitAdd_field(CPPONGrammarParser::Add_fieldContext * /*ctx*/) override { }

  virtual void enterLine(CPPONGrammarParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(CPPONGrammarParser::LineContext * /*ctx*/) override { }

  virtual void enterLines(CPPONGrammarParser::LinesContext * /*ctx*/) override { }
  virtual void exitLines(CPPONGrammarParser::LinesContext * /*ctx*/) override { }

  virtual void enterX3d(CPPONGrammarParser::X3dContext * /*ctx*/) override { }
  virtual void exitX3d(CPPONGrammarParser::X3dContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};



// Generated from ../CPPONGrammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CPPONGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CPPONGrammarParser.
 */
class  CPPONGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CPPONGrammarParser.
   */
    virtual std::any visitType(CPPONGrammarParser::TypeContext *context) = 0;

    virtual std::any visitField(CPPONGrammarParser::FieldContext *context) = 0;

    virtual std::any visitVariable(CPPONGrammarParser::VariableContext *context) = 0;

    virtual std::any visitString(CPPONGrammarParser::StringContext *context) = 0;

    virtual std::any visitCstring(CPPONGrammarParser::CstringContext *context) = 0;

    virtual std::any visitBoolean(CPPONGrammarParser::BooleanContext *context) = 0;

    virtual std::any visitBoolean_list(CPPONGrammarParser::Boolean_listContext *context) = 0;

    virtual std::any visitInteger_list(CPPONGrammarParser::Integer_listContext *context) = 0;

    virtual std::any visitFloat_list(CPPONGrammarParser::Float_listContext *context) = 0;

    virtual std::any visitString_list(CPPONGrammarParser::String_listContext *context) = 0;

    virtual std::any visitList(CPPONGrammarParser::ListContext *context) = 0;

    virtual std::any visitConstruct_array(CPPONGrammarParser::Construct_arrayContext *context) = 0;

    virtual std::any visitParameters(CPPONGrammarParser::ParametersContext *context) = 0;

    virtual std::any visitOperator(CPPONGrammarParser::OperatorContext *context) = 0;

    virtual std::any visitFunccall(CPPONGrammarParser::FunccallContext *context) = 0;

    virtual std::any visitConstruct(CPPONGrammarParser::ConstructContext *context) = 0;

    virtual std::any visitSet_field(CPPONGrammarParser::Set_fieldContext *context) = 0;

    virtual std::any visitAdd_field(CPPONGrammarParser::Add_fieldContext *context) = 0;

    virtual std::any visitLine(CPPONGrammarParser::LineContext *context) = 0;

    virtual std::any visitLines(CPPONGrammarParser::LinesContext *context) = 0;

    virtual std::any visitX3d(CPPONGrammarParser::X3dContext *context) = 0;


};


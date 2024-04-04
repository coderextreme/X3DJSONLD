// Generated from CPPONGrammar.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link CPPONGrammarParser}.
 */
public interface CPPONGrammarListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#type}.
	 * @param ctx the parse tree
	 */
	void enterType(CPPONGrammarParser.TypeContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#type}.
	 * @param ctx the parse tree
	 */
	void exitType(CPPONGrammarParser.TypeContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#field}.
	 * @param ctx the parse tree
	 */
	void enterField(CPPONGrammarParser.FieldContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#field}.
	 * @param ctx the parse tree
	 */
	void exitField(CPPONGrammarParser.FieldContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#variable}.
	 * @param ctx the parse tree
	 */
	void enterVariable(CPPONGrammarParser.VariableContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#variable}.
	 * @param ctx the parse tree
	 */
	void exitVariable(CPPONGrammarParser.VariableContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#string}.
	 * @param ctx the parse tree
	 */
	void enterString(CPPONGrammarParser.StringContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#string}.
	 * @param ctx the parse tree
	 */
	void exitString(CPPONGrammarParser.StringContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#cstring}.
	 * @param ctx the parse tree
	 */
	void enterCstring(CPPONGrammarParser.CstringContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#cstring}.
	 * @param ctx the parse tree
	 */
	void exitCstring(CPPONGrammarParser.CstringContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#boolean}.
	 * @param ctx the parse tree
	 */
	void enterBoolean(CPPONGrammarParser.BooleanContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#boolean}.
	 * @param ctx the parse tree
	 */
	void exitBoolean(CPPONGrammarParser.BooleanContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#boolean_list}.
	 * @param ctx the parse tree
	 */
	void enterBoolean_list(CPPONGrammarParser.Boolean_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#boolean_list}.
	 * @param ctx the parse tree
	 */
	void exitBoolean_list(CPPONGrammarParser.Boolean_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#integer_list}.
	 * @param ctx the parse tree
	 */
	void enterInteger_list(CPPONGrammarParser.Integer_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#integer_list}.
	 * @param ctx the parse tree
	 */
	void exitInteger_list(CPPONGrammarParser.Integer_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#float_list}.
	 * @param ctx the parse tree
	 */
	void enterFloat_list(CPPONGrammarParser.Float_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#float_list}.
	 * @param ctx the parse tree
	 */
	void exitFloat_list(CPPONGrammarParser.Float_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#string_list}.
	 * @param ctx the parse tree
	 */
	void enterString_list(CPPONGrammarParser.String_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#string_list}.
	 * @param ctx the parse tree
	 */
	void exitString_list(CPPONGrammarParser.String_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#list}.
	 * @param ctx the parse tree
	 */
	void enterList(CPPONGrammarParser.ListContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#list}.
	 * @param ctx the parse tree
	 */
	void exitList(CPPONGrammarParser.ListContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#construct_array}.
	 * @param ctx the parse tree
	 */
	void enterConstruct_array(CPPONGrammarParser.Construct_arrayContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#construct_array}.
	 * @param ctx the parse tree
	 */
	void exitConstruct_array(CPPONGrammarParser.Construct_arrayContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#parameters}.
	 * @param ctx the parse tree
	 */
	void enterParameters(CPPONGrammarParser.ParametersContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#parameters}.
	 * @param ctx the parse tree
	 */
	void exitParameters(CPPONGrammarParser.ParametersContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#operator}.
	 * @param ctx the parse tree
	 */
	void enterOperator(CPPONGrammarParser.OperatorContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#operator}.
	 * @param ctx the parse tree
	 */
	void exitOperator(CPPONGrammarParser.OperatorContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#funccall}.
	 * @param ctx the parse tree
	 */
	void enterFunccall(CPPONGrammarParser.FunccallContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#funccall}.
	 * @param ctx the parse tree
	 */
	void exitFunccall(CPPONGrammarParser.FunccallContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#constructor}.
	 * @param ctx the parse tree
	 */
	void enterConstructor(CPPONGrammarParser.ConstructorContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#constructor}.
	 * @param ctx the parse tree
	 */
	void exitConstructor(CPPONGrammarParser.ConstructorContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#set_field}.
	 * @param ctx the parse tree
	 */
	void enterSet_field(CPPONGrammarParser.Set_fieldContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#set_field}.
	 * @param ctx the parse tree
	 */
	void exitSet_field(CPPONGrammarParser.Set_fieldContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#add_field}.
	 * @param ctx the parse tree
	 */
	void enterAdd_field(CPPONGrammarParser.Add_fieldContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#add_field}.
	 * @param ctx the parse tree
	 */
	void exitAdd_field(CPPONGrammarParser.Add_fieldContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#line}.
	 * @param ctx the parse tree
	 */
	void enterLine(CPPONGrammarParser.LineContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#line}.
	 * @param ctx the parse tree
	 */
	void exitLine(CPPONGrammarParser.LineContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#lines}.
	 * @param ctx the parse tree
	 */
	void enterLines(CPPONGrammarParser.LinesContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#lines}.
	 * @param ctx the parse tree
	 */
	void exitLines(CPPONGrammarParser.LinesContext ctx);
	/**
	 * Enter a parse tree produced by {@link CPPONGrammarParser#x3d}.
	 * @param ctx the parse tree
	 */
	void enterX3d(CPPONGrammarParser.X3dContext ctx);
	/**
	 * Exit a parse tree produced by {@link CPPONGrammarParser#x3d}.
	 * @param ctx the parse tree
	 */
	void exitX3d(CPPONGrammarParser.X3dContext ctx);
}
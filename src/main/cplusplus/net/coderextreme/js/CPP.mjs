import antlr4 from "antlr4"
import fs from "fs"
import CPPONLexer from "./CPPONGrammarLexer.js"
import CPPONParser from "./CPPONGrammarParser.js"
import CPPONGrammarListener from "./CPPONGrammarListener.js"
const iName = process.argv[2]
var input = fs.readFileSync(iName, 'UTF-8')
var chars = new antlr4.InputStream(input)
var lexer = new CPPONLexer(chars)
var tokens  = new antlr4.CommonTokenStream(lexer)
var parser = new CPPONParser(tokens)
parser.buildParseTrees = true
var tree = parser.x3d()

var extractor = new CPPONGrammarListener()
antlr4.tree.ParseTreeWalker.DEFAULT.walk(extractor, tree)

import org.antlr.v4.runtime.atn.PredictionMode;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.ANTLRFileStream;
import java.io.IOException;
public class CPP {
	public static void main(String[] args) throws IOException {
	    CharStream input = new ANTLRFileStream(args[0]);
	    CPPONGrammarLexer lexer = new CPPONGrammarLexer(input);
	    CommonTokenStream tokens = new CommonTokenStream(lexer);
	    CPPONGrammarParser parser = new CPPONGrammarParser(tokens);
	    parser.getInterpreter().setPredictionMode(PredictionMode.SLL);
	    try {
		parser.x3d();  // STAGE 1
	    } catch (Exception ex) {
		tokens.reset(); // rewind input stream
		parser.reset();
		parser.getInterpreter().setPredictionMode(PredictionMode.LL);
		parser.x3d();  // STAGE 2
		// if we parse ok, it's LL not SLL
	    }
	}
}

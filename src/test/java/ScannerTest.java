import java.io.*;
import java.util.*;

public class ScannerTest {
  public static String readFile (String filename) {
	String output = "";
	try {
	    java.io.FileInputStream  input = new java.io.FileInputStream(filename);
	    output = new String(input.readAllBytes());
	} catch (Exception e) {
	    e.printStackTrace();
	}
	return output;
  }
  public static void main(String [] args) {
	  System.out.println(readFile("node_modules/xmldom/sax.js"));
  }
}

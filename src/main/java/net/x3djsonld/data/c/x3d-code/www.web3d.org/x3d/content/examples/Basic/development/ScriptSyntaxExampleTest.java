package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Script node syntax example, testing sample values of various types with simple escaping of apostrophe and quotation mark characters, with results shown on Browser console output. </p>
 <p> Related links: <a href="../../../development/ScriptSyntaxExampleTest.java">ScriptSyntaxExampleTest.java</a> source, <a href="../../../development/ScriptSyntaxExampleTestIndex.html" target="_top">ScriptSyntaxExampleTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/ScriptSyntaxExampleTest.x3d">ScriptSyntaxExampleTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Script node syntax example, testing sample values of various types with simple escaping of apostrophe and quotation mark characters, with results shown on Browser console output. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.txt" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.txt</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
 */

public class ScriptSyntaxExampleTest
{
	/** Default constructor to create this object. */
	public ScriptSyntaxExampleTest ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ScriptSyntaxExampleTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("8 January 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Script node syntax example, testing sample values of various types with simple escaping of apostrophe and quotation mark characters, with results shown on Browser console output."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit, https://www.web3d.org/x3d/content/README.X3D-Edit.txt"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ScriptSyntaxExampleTest.x3d"))
    .addChild(new Script("myScript").setUrl(new String[] {"NoSuchScript1.js","https://www.web3d.org/x3d/content/examples/Basic/development/NoSuchScript2.class.ignore"}).setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"// Preferred style for inlined script code is contained CDATA" + "\n" + 
"// in order to simplify use of characters < > \" \" ' ' etc. in source code" + "\n" + 
"\n" + 
"// When inlined script code appears in url instead, XML special characters" + "\n" + 
"// must be carefully 'escaped' or an incorrect translation will result." + "\n" + 
"\n" + 
"// url appears before contained code when translating to VRML encoding," + "\n" + 
"// so that external (possibly updated) code scripts can take precedence" + "\n" + 
"\n" + 
"function someSFBool (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	Browser.println ('someSFBool input event=' + value);" + "\n" + 
"	someMFInt32 = 0; // set outputOnly event, for example" + "\n" + 
"}" + "\n" + 
"function initialize (value)" + "\n" + 
"{" + "\n" + 
"	Browser.println ('    someMFFloats=' + someMFFloats);" + "\n" + 
"	Browser.println ('someStringField=' + someStringField);" + "\n" + 
"	Browser.println ('    stringTest1=' + stringTest1);" + "\n" + 
"	Browser.println ('    stringTest2=' + stringTest2);" + "\n" + 
"}" + "\n")
      .addField(new field().setName("someSFBool").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("someMFInt32").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("someMFFloats").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new double[] {0.0,1.0,2.0}))
      .addField(new field().setName("someStringField").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("hello"))
      .addField(new field().setName("stringTest1").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"'","apostrophe"}))
      .addField(new field().setName("stringTest2").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Quote &quot; character","More Text"}))
      .addField(new field().setName("someInitializedRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFRotation(0.0,1.0,0.0,0.0)))
      .addField(new field().setName("someInitializedTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0)))
    .addChild(new Anchor().setDescription("Select text to view source documentation").setUrl(new String[] {"ScriptSyntaxExampleTest.html","https://www.web3d.org/x3d/content/examples/Basic/development/ScriptSyntaxExampleTest.html"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"Script node syntax example,","select this text to view source"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.7,0.4,0.1))))
      .addComments(" selectable Text to show Anchor description ")
      .addChild(new Shape()
        .setGeometry(new Box().setSize(11.0,2.0,.001))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(1))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ScriptSyntaxExampleTest model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new ScriptSyntaxExampleTest().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.ScriptSyntaxExampleTest\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ScriptSyntaxExampleTest\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

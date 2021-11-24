package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> VRML 97 specification example: Execution model demonstrated. Click ball to see script-generated text appear. </p>
 <p> Related links: <a href="../../../Vrml97Specification/Example19.java">Example19.java</a> source, <a href="../../../Vrml97Specification/Example19Index.html" target="_top">Example19 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Vrml97Specification/Example19.x3d">Example19.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 May 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 28 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> X3D working group </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> VRML 97 specification example: Execution model demonstrated. Click ball to see script-generated text appear. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/exampleD_19.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.19 Execution model </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.19" target="_blank">https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.19</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example19.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example19.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Vrml97Specification/../license.html">../license.html</a> </td>
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
	* @author X3D working group
 */

public class Example19
{
	/** Default constructor to create this object. */
	public Example19 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Example19.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 May 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("X3D working group"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("VRML 97 specification example: Execution model demonstrated. Click ball to see script-generated text appear."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/exampleD_19.wrl"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.19 Execution model"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.19"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example19.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Example19.x3d"))
    .addChild(new TouchSensor("TS").setDescription("touch to trigger more events"))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script1").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function touchTime()" + "\n" + 
"{" + "\n" + 
"	toScript2 = true;" + "\n" + 
"}" + "\n" + 
"function eventsProcessed()" + "\n" + 
"{" + "\n" + 
"	string = 'Script1.eventsProcessed';" + "\n" + 
"	toScript3 = true;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("touchTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("toScript2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("toScript3").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("string").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script2").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript1() { }" + "\n" + 
"\n" + 
"function eventsProcessed()" + "\n" + 
"{" + "\n" + 
"	string = 'Script2.eventsProcessed';" + "\n" + 
"	toScript4 = true;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("fromScript1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("toScript4").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("string").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script3").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript1()" + "\n" + 
"{" + "\n" + 
"	toScript5 = true;" + "\n" + 
"}" + "\n" + 
"function eventsProcessed()" + "\n" + 
"{" + "\n" + 
"	string = 'Script3.eventsProcessed';" + "\n" + 
"	toScript6 = true;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("fromScript1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("toScript5").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("toScript6").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("string").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script4").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript2() { }" + "\n")
      .addField(new field().setName("fromScript2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script5").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript3() { }" + "\n")
      .addField(new field().setName("fromScript3").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script6").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript3()" + "\n" + 
"{" + "\n" + 
"	toScript7 = true;" + "\n" + 
"}" + "\n" + 
"function eventsProcessed()" + "\n" + 
"{" + "\n" + 
"	string = 'Script6.eventsProcessed';" + "\n" + 
"}" + "\n")
      .addField(new field().setName("fromScript3").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("toScript7").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("string").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
    .addChild(new Script("Script7").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function fromScript6 () { }" + "\n")
      .addField(new field().setName("fromScript6").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addComments(" Display the results ")
    .addChild(new Script("Collector").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"	string[0] = 'Event Sequence:';" + "\n" + 
"}" + "\n" + 
"function fromString(s)" + "\n" + 
"{" + "\n" + 
"	i = string.length;" + "\n" + 
"	string[i] = '('+i+') '+s+' occurred';" + "\n" + 
"}" + "\n")
      .addField(new field().setName("string").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("fromString").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new Transform().setTranslation(0.0,-6.0,0.0)
      .addChild(new Transform().setTranslation(-2.0,2.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.6,0.0)))
          .setGeometry(new Sphere())))
      .addChild(new Shape()
        .setGeometry(new Text("Result")
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_BEGIN_END)))
        .setAppearance(new Appearance("DefaultAppearance")
          .setMaterial(new Material()))))
    .addChild(new Viewpoint().setDescription("Touch ball to trigger events").setPosition(7.0,-1.0,18.0))
    .addChild(new ROUTE().setFromNode("TS").setFromField("touchTime").setToNode("Script1").setToField("touchTime"))
    .addChild(new ROUTE().setFromNode("Script1").setFromField("toScript2").setToNode("Script2").setToField("fromScript1"))
    .addChild(new ROUTE().setFromNode("Script1").setFromField("toScript3").setToNode("Script3").setToField("fromScript1"))
    .addChild(new ROUTE().setFromNode("Script2").setFromField("toScript4").setToNode("Script4").setToField("fromScript2"))
    .addChild(new ROUTE().setFromNode("Script3").setFromField("toScript5").setToNode("Script5").setToField("fromScript3"))
    .addChild(new ROUTE().setFromNode("Script3").setFromField("toScript6").setToNode("Script6").setToField("fromScript3"))
    .addChild(new ROUTE().setFromNode("Script6").setFromField("toScript7").setToNode("Script7").setToField("fromScript6"))
    .addChild(new ROUTE().setFromNode("Script1").setFromField("string").setToNode("Collector").setToField("fromString"))
    .addChild(new ROUTE().setFromNode("Script2").setFromField("string").setToNode("Collector").setToField("fromString"))
    .addChild(new ROUTE().setFromNode("Script3").setFromField("string").setToNode("Collector").setToField("fromString"))
    .addChild(new ROUTE().setFromNode("Script6").setFromField("string").setToNode("Collector").setToField("fromString"))
    .addChild(new ROUTE().setFromNode("Collector").setFromField("string").setToNode("Result").setToField("string")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Example19 model
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
        X3D thisExampleX3dModel = new Example19().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Example19\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Example19\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Script node interface between VRML and Java: this conformance example tests event-based VRML_Java functionality. </p>
 <p> Related links: <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl_Java.java">ScriptNodeEventOutControl_Java.java</a> source, <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl_JavaIndex.html" target="_top">ScriptNodeEventOutControl_Java catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl_Java.x3d">ScriptNodeEventOutControl_Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Script node interface between VRML and Java: this conformance example tests event-based VRML_Java functionality. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 30 November 1997 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 8 July 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ScriptConformance/ScriptNodeEventOutControl_Java.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ScriptConformance/ScriptNodeEventOutControl_Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/Script/ScriptNodeEventOutControl_Java.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/Script/ScriptNodeEventOutControl_Java.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> VRML 97 Specification, Annex B, Java platform scripting reference </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html#B.5" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html#B.5</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Don Brutzman, "The Virtual Reality Modeling Language and Java," Communications of the ACM, vol. 41 no. 6, June 1998, pp. 57-64. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/VrmlJavaPaper.pdf">VrmlJavaPaper.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl.java">ScriptNodeEventOutControl.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/javadoc/index.html">javadoc/index.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Makefile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Makefile.out </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Vrml97ScriptNodePackages.jar </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> ScriptNodeEventOutControl_JavaConsoleOutput.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl_JavaSnapshots.html">ScriptNodeEventOutControl_JavaSnapshots.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/ScriptNodeEventOutControl-EcmaScript.x3d">ScriptNodeEventOutControl-EcmaScript.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> VRML X3D Java Script conformance </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Miscellaneous/Script/../../license.html">../../license.html</a> </td>
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

public class ScriptNodeEventOutControl_Java
{
	/** Default constructor to create this object. */
	public ScriptNodeEventOutControl_Java ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ScriptNodeEventOutControl_Java.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Script node interface between VRML and Java: this conformance example tests event-based VRML_Java functionality."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("30 November 1997"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("8 July 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/ScriptConformance/ScriptNodeEventOutControl_Java.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Miscellaneous/Script/ScriptNodeEventOutControl_Java.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VRML 97 Specification, Annex B, Java platform scripting reference"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/java.html#B.5"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Don Brutzman, \"The Virtual Reality Modeling Language and Java,\" Communications of the ACM, vol. 41 no. 6, June 1998, pp. 57-64."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VrmlJavaPaper.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ScriptNodeEventOutControl.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("javadoc/index.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Makefile"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Makefile.out"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Vrml97ScriptNodePackages.jar"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ScriptNodeEventOutControl_JavaConsoleOutput.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ScriptNodeEventOutControl_JavaSnapshots.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ScriptNodeEventOutControl-EcmaScript.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("VRML X3D Java Script conformance"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ScriptNodeEventOutControl_Java.x3d"))
    .addChild(new Viewpoint().setDescription("View test").setPosition(0.0,0.0,12.0))
    .addChild(new Group()
      .addChild(new TouchSensor("ClickTextToTest").setDescription("Click text to test"))
      .addChild(new Transform("TextPosition")
        .addComments(" TextPosition translation is modified by InterfaceScriptNode. ")
        .addChild(new Shape()
          .setGeometry(new Text("MessageToUser")
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8)))
          .setAppearance(new Appearance()
            .setMaterial(new Material("TextMaterial").setDiffuseColor(0.8,0.2,0.2).setShininess(0.9)))))
      .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
      .addChild(new Script("InterfaceScriptNode").setUrl(new String[] {"ScriptNodeEventOutControl.class","https://www.web3d.org/x3d/content/examples/ScriptConformance/ScriptNodeEventOutControl.class"})
        .addComments(" No default values are allowed for eventIn or eventOut. ")
        .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("changedText").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("changedPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("changedColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_OUTPUTONLY))))
    .addChild(new ROUTE().setFromNode("ClickTextToTest").setFromField("touchTime").setToNode("InterfaceScriptNode").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("InterfaceScriptNode").setFromField("changedText").setToNode("MessageToUser").setToField("set_string"))
    .addChild(new ROUTE().setFromNode("InterfaceScriptNode").setFromField("changedPosition").setToNode("TextPosition").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("InterfaceScriptNode").setFromField("changedColor").setToNode("TextMaterial").setToField("diffuseColor")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ScriptNodeEventOutControl_Java model
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
        X3D thisExampleX3dModel = new ScriptNodeEventOutControl_Java().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ScriptNodeEventOutControl_Java\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ScriptNodeEventOutControl_Java\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

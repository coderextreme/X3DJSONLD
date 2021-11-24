package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test override of color values in prototypes and scripts. Color code: red = left-most default prototype interface, yellow = middle ProtoInstance fieldValue, green = Script initialization of middle ProtoInstance, blue = right-side default prototype instance. </p>
 <p> Related links: <a href="../../../development/TestProtoInterfaceNodeScope.java">TestProtoInterfaceNodeScope.java</a> source, <a href="../../../development/TestProtoInterfaceNodeScopeIndex.html" target="_top">TestProtoInterfaceNodeScope catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/TestProtoInterfaceNodeScope.x3d">TestProtoInterfaceNodeScope.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test override of color values in prototypes and scripts. Color code: red = left-most default prototype interface, yellow = middle ProtoInstance fieldValue, green = Script initialization of middle ProtoInstance, blue = right-side default prototype instance. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena VRML importer, X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 January 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 5 January 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) Web3D Consortium Inc. 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/TestProtoInterfaceNodeScope.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/TestProtoInterfaceNodeScope.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
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

	* @author Alan Hudson, Don Brutzman
 */

public class TestProtoInterfaceNodeScope
{
	/** Default constructor to create this object. */
	public TestProtoInterfaceNodeScope ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TestProtoInterfaceNodeScope.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test override of color values in prototypes and scripts. Color code: red = left-most default prototype interface, yellow = middle ProtoInstance fieldValue, green = Script initialization of middle ProtoInstance, blue = right-side default prototype instance."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 January 2006"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("5 January 2006"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright (c) Web3D Consortium Inc. 2006"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TestProtoInterfaceNodeScope.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TestProtoInterfaceNodeScope.x3d"))
    .addChild(new ProtoDeclare("MyProto").setName("MyProto")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("material").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new Material().setDiffuseColor(1.0,0.0,0.0))))
      .setProtoBody(new ProtoBody()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("material").setProtoField("material"))))
          .setGeometry(new Box("ProtoBox")))))
    .addChild(new Transform("LeftTransform").setTranslation(-2.5,0.0,0.0)
      .addChild(new ProtoInstance("MyProto", "P1").setContainerField("children")))
    .addChild(new Transform("MiddleTransform")
      .addChild(new ProtoInstance("MyProto", "P2").setContainerField("children")
        .addFieldValue(new fieldValue().setName("material")
          .addChild(new Material().setDiffuseColor(0.7,0.7,0.0))))
      .addChild(new Script("SC").setDirectOutput(true).setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	Browser.print('Changing color on middle box to green');" + "\n" + 
"	proto1.material.diffuseColor = new SFColor(0,1,0);" + "\n" + 
"}" + "\n")
        .addField(new field().setName("proto1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
          .addChild(new ProtoInstance().setUSE("P2").setContainerField("children")))))
    .addChild(new Transform("RightTransform").setTranslation(2.5,0.0,0.0)
      .addChild(new ProtoInstance("MyProto", "P3").setContainerField("children")
        .addFieldValue(new fieldValue().setName("material")
          .addChild(new Material().setDiffuseColor(0.0,0.0,1.0)))))
    .addChild(new Switch().setWhichChoice(-1)
      .addChild(new Shape()
        .addComments(" To test protected scope of nodes DEF'ed inside a prototype body, add: <Box USE=\"ProtoBox\"/> "))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TestProtoInterfaceNodeScope model
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
        X3D thisExampleX3dModel = new TestProtoInterfaceNodeScope().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TestProtoInterfaceNodeScope\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TestProtoInterfaceNodeScope\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> SpinGroup PROTO example content to test DTD modularization and extensibility - view XML source to see DTD internal-subset declarations. </p>
 <p> Related links: SpinGroupInternalSubsetDeclaration.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.SpinGroupInternalSubsetDeclaration&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/SpinGroupInternalSubsetDeclaration.x3d">SpinGroupInternalSubsetDeclaration.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 September 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> SpinGroup PROTO example content to test DTD modularization and extensibility - view XML source to see DTD internal-subset declarations. </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> You must view full source of the DTD declarations (SpinGroupInternalSubsetDeclaration.x3d.txt) to fully understand validation techniques in this file. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> SpinGroupInternalSubsetDeclaration.x3d.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/SpinGroupInternalSubsetDeclaration.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/SpinGroupInternalSubsetDeclaration.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/../license.html">../license.html</a> </td>
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

public class SpinGroupInternalSubsetDeclaration
{
	/** Default constructor to create this object. */
	public SpinGroupInternalSubsetDeclaration ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SpinGroupInternalSubsetDeclaration.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("18 September 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("SpinGroup PROTO example content to test DTD modularization and extensibility - view XML source to see DTD internal-subset declarations."))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("Test to demonstrate DOCTYPE extensibility, this X3D scene not valid and does not render."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("You must view full source of the DTD declarations (SpinGroupInternalSubsetDeclaration.x3d.txt) to fully understand validation techniques in this file."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("SpinGroupInternalSubsetDeclaration.x3d.txt"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/development/SpinGroupInternalSubsetDeclaration.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" Declaring the SpinGroupTag PROTO, so that translations of internally defined SpinGroupTag to VRML can work: ")
    .addChild(new ProtoDeclare("SpinGroupTag").setName("SpinGroupTag")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new WorldInfo().setInfo(new String[] {"overridden at run time"}))))
      .setProtoBody(new ProtoBody()
        .addComments(" SpinGroupTransform is first node, which determines node type, and encloses children for instances. ")
        .addChild(new Transform("SpinGroupTransform-TagVersion").setRotation(1.0,0.0,0.0,0.0)
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("children").setProtoField("children")))
          .addChild(new OrientationInterpolator("SpinGroupOrientationInterpolator-TagVersion").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,-3.14159,0.0,1.0,0.0,-6.28318})))
          .addChild(new TimeSensor("SpinGroupTimeSensor-TagVersion").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))))
          .addChild(new ROUTE().setFromNode("SpinGroupTimeSensor-TagVersion").setFromField("fraction_changed").setToNode("SpinGroupOrientationInterpolator-TagVersion").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("SpinGroupOrientationInterpolator-TagVersion").setFromField("value_changed").setToNode("SpinGroupTransform-TagVersion").setToField("set_rotation")))))
    .addChild(new ProtoDeclare("SpinGroup").setName("SpinGroup")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addChild(new WorldInfo().setInfo(new String[] {"overridden at run time"}))))
      .setProtoBody(new ProtoBody()
        .addComments(" SpinGroupTransform is first node, which determines node type, and encloses children for instances. ")
        .addChild(new Transform("SpinGroupTransform")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("children").setProtoField("children")))
          .addChild(new OrientationInterpolator("SpinGroupOrientationInterpolator").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,-3.14159,0.0,1.0,0.0,-6.28318})))
          .addChild(new TimeSensor("SpinGroupTimeSensor").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("cycleInterval"))))
          .addChild(new ROUTE().setFromNode("SpinGroupTimeSensor").setFromField("fraction_changed").setToNode("SpinGroupOrientationInterpolator").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("SpinGroupOrientationInterpolator").setFromField("value_changed").setToNode("SpinGroupTransform").setToField("set_rotation")))))
    .addChild(new Viewpoint().setDescription("SpinGroup Examples").setPosition(0.0,0.0,15.0))
    .addChild(new NavigationInfo().setType("\"EXAMINE\""))
    .addComments(" Instantiating the SpinGroupTag using a customized tag: ")
    .addChild(new SpinGroupTag("instanceOne").setCenter(0.0,0.0,0.0).setCycleInterval("8"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), SpinGroupTag cycleInterval: $isNumeric=true, $attributeType=, value='8']
).setNodeType("Group"
// [*** X3dToJava.xslt error: encountered incorrect type (check incorrect capitalization), SpinGroupTag nodeType: $isNumeric=false, $attributeType=, value='Group']
).setRotation(0.0,0.0,1.0,0.0).setTranslation(0.0,4.0,0.0)
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setAppearance(new Appearance("AQUAMARINE")
            .setMaterial(new Material().setDiffuseColor(0.1,0.8,0.8)))
          .setGeometry(new Text().setString(new String[] {"SpinGroupTag example 1 single child"})
            .setFontStyle(new FontStyle("CENTER_FONT").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setCssStyle("BOLD"))))))
    .addComments(" Instantiating the SpinGroup PROTO using a ProtoInstance tag: ")
    .addChild(new ProtoInstance("SpinGroup", "instanceTwo").setContainerField("children")
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,1.0,0.0)))
      .addFieldValue(new fieldValue().setName("cycleInterval").setValue(12))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"SpinGroup ProtoInstance example 2 single child"})
            .setFontStyle(new FontStyle().setUSE("CENTER_FONT"))))))
    .addComments(" Instantiating the SpinGroup PROTO with multiple Node children: ")
    .addChild(new ProtoInstance("SpinGroup", "instanceThree").setContainerField("children")
      .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(0.0,-2.0,0.0)))
      .addFieldValue(new fieldValue().setName("cycleInterval").setValue(20))
      .addFieldValue(new fieldValue().setName("children")
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("AQUAMARINE"))
          .setGeometry(new Text().setString(new String[] {"SpinGroup ProtoInstance","example 3 first child"})
            .setFontStyle(new FontStyle().setUSE("CENTER_FONT"))))
        .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"example 3 second child"})
              .setFontStyle(new FontStyle().setUSE("CENTER_FONT"))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SpinGroupInternalSubsetDeclaration model
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
        X3D thisExampleX3dModel = new SpinGroupInternalSubsetDeclaration().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SpinGroupInternalSubsetDeclaration\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SpinGroupInternalSubsetDeclaration\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

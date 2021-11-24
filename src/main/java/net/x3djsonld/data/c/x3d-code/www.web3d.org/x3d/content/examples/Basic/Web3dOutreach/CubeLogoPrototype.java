package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This file defines a prototype cube of size 2 x 2 x 2. The fields allow any shape to be drawn on the faces. </p>
 <p> Related links: <a href="../../../Web3dOutreach/CubeLogoPrototype.java">CubeLogoPrototype.java</a> source, <a href="../../../Web3dOutreach/CubeLogoPrototypeIndex.html" target="_top">CubeLogoPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Web3dOutreach/CubeLogoPrototype.x3d">CubeLogoPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This file defines a prototype cube of size 2 x 2 x 2. The fields allow any shape to be drawn on the faces. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Roy Walmsley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 18 March 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Web3dOutreach/../license.html">../license.html</a> </td>
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

	* @author Roy Walmsley
 */

public class CubeLogoPrototype
{
	/** Default constructor to create this object. */
	public CubeLogoPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CubeLogoPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This file defines a prototype cube of size 2 x 2 x 2. The fields allow any shape to be drawn on the faces."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Roy Walmsley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("18 March 2017"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CubeLogoPrototype.x3d"))
    .addChild(new ProtoDeclare("Cubic_Logo").setName("Cubic_Logo").setAppinfo("Defines a cube and permits any externally defined shapes to be drawn on the six faces")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("internalColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.0,0.0,0.0)))
        .addField(new field().setName("frontFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("backFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("leftFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("rightFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("topFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("bottomFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Shape("Internal_Cube")
            .setAppearance(new Appearance()
              .setMaterial(new Material()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("diffuseColor").setProtoField("internalColor")))))
            .setGeometry(new Box().setSize(0.9,0.9,0.9)))
          .addChild(new Transform("Front_Object").setTranslation(0.0,0.0,0.45)
            .addChild(new Transform("Front_Reorienter")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("frontFace")))))
          .addChild(new Transform("Bottom_Object").setRotation(1.0,0.0,0.0,1.5708).setTranslation(0.0,-0.45,0.0)
            .addChild(new Transform("Bottom_Reorienter").setRotation(0.0,0.0,1.0,3.1416)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("bottomFace")))))
          .addChild(new Transform("Right_Object").setRotation(0.0,1.0,0.0,1.5708).setTranslation(0.45,0.0,0.0)
            .addChild(new Transform("Right_Reorienter")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("rightFace")))))
          .addChild(new Transform("Left_Object").setRotation(0.0,1.0,0.0,-1.5708).setTranslation(-0.45,0.0,0.0)
            .addChild(new Transform("Left_Reorienter").setRotation(0.0,0.0,1.0,1.5708)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("leftFace")))))
          .addChild(new Transform("Back_Object").setRotation(0.0,1.0,0.0,3.1416).setTranslation(0.0,0.0,-0.45)
            .addChild(new Transform("Back_Reorienter")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("backFace")))))
          .addChild(new Transform("Top_Object").setRotation(1.0,0.0,0.0,-1.5708).setTranslation(0.0,0.45,0.0)
            .addChild(new Transform("Top_Reorienter").setRotation(0.0,0.0,1.0,3.1416)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("topFace"))))))))
    .addChild(new Anchor().setDescription("Select text to view example model").setUrl(new String[] {"VirtualRealityHackathonLogoLetterPrototypes.x3d","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d","VirtualRealityHackathonLogoLetterPrototypes.wrl","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.wrl"})
      .addComments(" Selectable Text design pattern has transparent Box and Anchor description as a tooltip ")
      .addChild(new Group()
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"CubeLogoPrototype.x3d#Cubic_Logo","","prototype declaration is used by","","VirtualRealityHackathonLogoLetterPrototypes.x3d"})
            .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.4).setCssStyle("BOLD")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.9,0.9,0.9))))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(12.0,2.5,.001))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.9).setTransparency(0.8)))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CubeLogoPrototype model
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
        X3D thisExampleX3dModel = new CubeLogoPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CubeLogoPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CubeLogoPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

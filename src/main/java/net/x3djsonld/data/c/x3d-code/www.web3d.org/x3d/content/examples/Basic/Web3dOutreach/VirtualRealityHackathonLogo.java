package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This model defines a spinnable X3D VRH logo for Virtual Reality Hackathon. </p>
 <p> Related links: <a href="../../../Web3dOutreach/VirtualRealityHackathonLogo.java">VirtualRealityHackathonLogo.java</a> source, <a href="../../../Web3dOutreach/VirtualRealityHackathonLogoIndex.html" target="_top">VirtualRealityHackathonLogo catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Web3dOutreach/VirtualRealityHackathonLogo.x3d">VirtualRealityHackathonLogo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This model defines a spinnable X3D VRH logo for Virtual Reality Hackathon. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Roy Walmsley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 March 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Web3dOutreach/CubeLogoPrototype.x3d">CubeLogoPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Web3dOutreach/LogoLetterPrototypes.x3d">LogoLetterPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d">VirtualRealityHackathonLogoLetterPrototypes.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogo.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogo.x3d</a> </td>
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

public class VirtualRealityHackathonLogo
{
	/** Default constructor to create this object. */
	public VirtualRealityHackathonLogo ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERACTIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("VirtualRealityHackathonLogo.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This model defines a spinnable X3D VRH logo for Virtual Reality Hackathon."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Roy Walmsley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2017"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CubeLogoPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LogoLetterPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VirtualRealityHackathonLogoLetterPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogo.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("VirtualRealityHackathonLogo.x3d"))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.75,0.75}).setHeadlight(false))
    .addChild(new Background("WO_World").setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new Transform("Lamp_Transform").setTranslation(0.0,0.0,10.0)
      .addChild(new PointLight("Lamp").setAmbientIntensity(1).setRadius(20)))
    .addChild(new Transform("Camera_Transform")
      .addChild(new Viewpoint("Camera").setDescription("Virtual Reality Hackathon Logo").setFieldOfView(0.858).setPosition(0.0,0.0,4.0)))
    .addChild(new Transform("Logo_Transform").setRotation(0.0,0.0,1.0,0.7854).setScale(2.0,2.0,2.0)
      .addChild(new Shape("Internal_Cube_Shape")
        .setAppearance(new Appearance()
          .setMaterial(new Material("Grey_Material").setDiffuseColor(0.6,0.6,0.6)))
        .setGeometry(new Box("Internal_cube").setSize(0.9,0.9,0.9)))
      .addChild(new Transform("Front_Object").setTranslation(0.0,0.0,0.45)
        .addChild(new Transform("Front_Reorienter")
          .addChild(new Group("Letter_V_Group")
            .addChild(new Shape("Letter_V_Front")
              .setAppearance(new Appearance("Yellow_Front_Appearance")
                .setMaterial(new Material("Yellow_Front_Material").setDiffuseColor(0.80,0.67,0.31)))
              .setGeometry(new IndexedFaceSet("Letter_V_Front_IFS").setDEF("Letter_V_Front_IFS").setCoordIndex(new int[] {0,1,2,3,-1,4,1,2,5,-1})
                .setCoord(new Coordinate("Letter_V_Coords").setPoint(new MFVec3f(new double[] {-0.45,0.45,0.05,-0.1,-0.45,0.05,0.1,-0.45,0.05,-0.25,0.45,0.05,0.25,0.45,0.05,0.45,0.45,0.05,-0.45,0.45,0.0,-0.1,-0.45,0.0,0.1,-0.45,0.0,-0.25,0.45,0.0,0.25,0.45,0.0,0.45,0.45,0.0,0.0,-0.1929,0.05,0.0,-0.1929,0.0})))))
            .addChild(new Shape("Letter_V_Sides")
              .setAppearance(new Appearance("Yellow_Sides_Appearance")
                .setMaterial(new Material("Yellow_Sides_Material").setDiffuseColor(0.91,0.90,0.78)))
              .setGeometry(new IndexedFaceSet("Letter_V_Side_IFS").setDEF("Letter_V_Side_IFS").setCoordIndex(new int[] {7,1,0,6,-1,6,0,3,9,-1,1,7,8,2,-1,2,8,11,5,-1,10,4,5,11,-1,13,12,4,10,-1,9,3,12,13,-1})
                .setCoord(new Coordinate().setUSE("Letter_V_Coords")))))))
      .addChild(new Transform("Bottom_Object").setRotation(1.0,0.0,0.0,1.5708).setTranslation(0.0,-0.45,0.0)
        .addChild(new Transform("Bottom_Reorienter").setRotation(0.0,0.0,1.0,3.1416)
          .addChild(new Group().setUSE("Letter_V_Group"))))
      .addChild(new Transform("Right_Object").setRotation(0.0,1.0,0.0,1.5708).setTranslation(0.45,0.0,0.0)
        .addChild(new Transform("Right_Reorienter")
          .addChild(new Group("Letter_R_Group")
            .addChild(new Shape("Letter_R_Front")
              .setAppearance(new Appearance().setUSE("Yellow_Front_Appearance"))
              .setGeometry(new IndexedFaceSet("Letter_R_Front_IFS").setDEF("Letter_R_Front_IFS").setCoordIndex(new int[] {0,1,2,12,-1,13,17,11,12,-1,17,16,10,11,-1,10,16,9,-1,9,16,15,8,-1,14,7,8,15,-1,3,4,5,6,-1})
                .setCoord(new Coordinate("Letter_R_Coords").setPoint(new MFVec3f(new double[] {-0.45,0.45,0.05,-0.45,-0.45,0.05,-0.25,-0.45,0.05,-0.05,-0.10,0.05,0.15,-0.45,0.05,0.40,-0.45,0.05,0.2,-0.10,0.05,-0.25,-0.10,0.05,0.35,-0.10,0.05,0.45,0.0,0.05,0.45,0.35,0.05,0.35,0.45,0.05,-0.25,0.45,0.05,-0.25,0.25,0.05,-0.25,0.10,0.05,0.2,0.10,0.05,0.25,0.175,0.05,0.2,0.25,0.05,-0.45,0.45,0.0,-0.45,-0.45,0.0,-0.25,-0.45,0.0,-0.05,-0.10,0.0,0.15,-0.45,0.0,0.40,-0.45,0.0,0.2,-0.10,0.0,-0.25,-0.10,0.0,0.35,-0.10,0.0,0.45,0.0,0.0,0.45,0.35,0.0,0.35,0.45,0.0,-0.25,0.45,0.0,-0.25,0.25,0.0,-0.25,0.10,0.0,0.2,0.10,0.0,0.25,0.175,0.0,0.2,0.25,0.0})))))
            .addChild(new Shape("Letter_R_Sides")
              .setAppearance(new Appearance().setUSE("Yellow_Sides_Appearance"))
              .setGeometry(new IndexedFaceSet("Letter_R_Side_IFS").setDEF("Letter_R_Side_IFS").setCoordIndex(new int[] {0,18,19,1,-1,1,19,20,2,-1,2,20,25,7,-1,7,25,21,3,-1,3,21,22,4,-1,4,22,23,5,-1,5,23,24,6,-1,6,24,26,8,-1,8,26,27,9,-1,9,27,28,10,-1,10,28,29,11,-1,11,29,18,0,-1,14,32,31,13,-1,15,33,32,14,-1,16,34,33,15,-1,17,35,34,16,-1,13,31,35,17,-1})
                .setCoord(new Coordinate().setUSE("Letter_R_Coords")))))))
      .addChild(new Transform("Left_Object").setRotation(0.0,1.0,0.0,-1.5708).setTranslation(-0.45,0.0,0.0)
        .addChild(new Transform("Left_Reorienter").setRotation(0.0,0.0,1.0,1.5708)
          .addChild(new Group().setUSE("Letter_R_Group"))))
      .addChild(new Transform("Back_Object").setRotation(0.0,1.0,0.0,3.1416).setTranslation(0.0,0.0,-0.45)
        .addChild(new Transform("Back_Reorienter")
          .addChild(new Group("Letter_H_Group")
            .addChild(new Shape("Letter_H_Front")
              .setAppearance(new Appearance().setUSE("Yellow_Front_Appearance"))
              .setGeometry(new IndexedFaceSet("Letter_H_Front_IFS").setDEF("Letter_H_Front_IFS").setCoordIndex(new int[] {0,1,2,11,-1,3,4,9,10,-1,8,5,6,7,-1})
                .setCoord(new Coordinate("Letter_H_Coords").setPoint(new MFVec3f(new double[] {-0.45,0.45,0.05,-0.45,-0.45,0.05,-0.25,-0.45,0.05,-0.25,-0.1,0.05,0.25,-0.1,0.05,0.25,-0.45,0.05,0.45,-0.45,0.05,0.45,0.45,0.05,0.25,0.45,0.05,0.25,0.1,0.05,-0.25,0.1,0.05,-0.25,0.45,0.05,-0.45,0.45,0.0,-0.45,-0.45,0.0,-0.25,-0.45,0.0,-0.25,-0.1,0.0,0.25,-0.1,0.0,0.25,-0.45,0.0,0.45,-0.45,0.0,0.45,0.45,0.0,0.25,0.45,0.0,0.25,0.1,0.0,-0.25,0.1,0.0,-0.25,0.45,0.0})))))
            .addChild(new Shape("Letter_H_Sides")
              .setAppearance(new Appearance().setUSE("Yellow_Sides_Appearance"))
              .setGeometry(new IndexedFaceSet("Letter_H_Side_IFS").setDEF("Letter_H_Side_IFS").setCoordIndex(new int[] {0,12,13,1,-1,1,13,14,2,-1,2,14,15,3,-1,3,15,16,4,-1,4,16,17,5,-1,5,17,18,6,-1,6,18,19,7,-1,7,19,20,8,-1,8,20,21,9,-1,9,21,22,10,-1,10,22,23,11,-1,11,23,12,0,-1})
                .setCoord(new Coordinate().setUSE("Letter_H_Coords")))))))
      .addChild(new Transform("Top_Object").setRotation(1.0,0.0,0.0,-1.5708).setTranslation(0.0,0.45,0.0)
        .addChild(new Transform("Top_Reorienter").setRotation(0.0,0.0,1.0,3.1416)
          .addChild(new Group().setUSE("Letter_H_Group"))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return VirtualRealityHackathonLogo model
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
        X3D thisExampleX3dModel = new VirtualRealityHackathonLogo().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.VirtualRealityHackathonLogo\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.VirtualRealityHackathonLogo\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

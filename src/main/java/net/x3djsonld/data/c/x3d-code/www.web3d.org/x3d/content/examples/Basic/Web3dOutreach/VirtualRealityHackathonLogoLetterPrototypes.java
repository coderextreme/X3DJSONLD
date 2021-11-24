package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This model defines a spinning X3D VRH logo for Virtual Reality Hackathon, using a cube of size 2 x 2 x 2 with the letter sequence V, R and H appearing twice around the faces. Each sequence is a different colour. </p>
 <p> Related links: <a href="../../../Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.java">VirtualRealityHackathonLogoLetterPrototypes.java</a> source, <a href="../../../Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypesIndex.html" target="_top">VirtualRealityHackathonLogoLetterPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d">VirtualRealityHackathonLogoLetterPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This model defines a spinning X3D VRH logo for Virtual Reality Hackathon, using a cube of size 2 x 2 x 2 with the letter sequence V, R and H appearing twice around the faces. Each sequence is a different colour. </td>
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
			<td> <a href="../../../Web3dOutreach/VirtualRealityHackathonLogo.x3d">VirtualRealityHackathonLogo.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d</a> </td>
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

public class VirtualRealityHackathonLogoLetterPrototypes
{
	/** Default constructor to create this object. */
	public VirtualRealityHackathonLogoLetterPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("VirtualRealityHackathonLogoLetterPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This model defines a spinning X3D VRH logo for Virtual Reality Hackathon, using a cube of size 2 x 2 x 2 with the letter sequence V, R and H appearing twice around the faces. Each sequence is a different colour."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Roy Walmsley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2017"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CubeLogoPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LogoLetterPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VirtualRealityHackathonLogo.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("manual"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/VirtualRealityHackathonLogoLetterPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("VirtualRealityHackathonLogoLetterPrototypes.x3d"))
    .addChild(new ExternProtoDeclare("Cubic_Logo").setName("Cubic_Logo").setUrl(new String[] {"CubeLogoPrototype.x3d#Cubic_Logo","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.x3d#Cubic_Logo","CubeLogoPrototype.wrl#Cubic_Logo","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/CubeLogoPrototype.wrl#Cubic_Logo"})
      .addField(new field().setName("internalColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("frontFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("backFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("leftFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("rightFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("topFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("bottomFace").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Logo_letter_H").setName("Logo_letter_H").setUrl(new String[] {"LogoLetterPrototypes.x3d#Logo_letter_H","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_H","LogoLetterPrototypes.wrl#Logo_letter_H","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_H"})
      .addField(new field().setName("front_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("sides_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Logo_letter_R").setName("Logo_letter_R").setUrl(new String[] {"LogoLetterPrototypes.x3d#Logo_letter_R","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_R","LogoLetterPrototypes.wrl#Logo_letter_R","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_R"})
      .addField(new field().setName("front_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("sides_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new ExternProtoDeclare("Logo_letter_V").setName("Logo_letter_V").setUrl(new String[] {"LogoLetterPrototypes.x3d#Logo_letter_V","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.x3d#Logo_letter_V","LogoLetterPrototypes.wrl#Logo_letter_V","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/LogoLetterPrototypes.wrl#Logo_letter_V"})
      .addField(new field().setName("front_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("sides_colour").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
    .addChild(new NavigationInfo().setAvatarSize(new double[] {0.25,1.75,0.75}).setHeadlight(false))
    .addChild(new Background("WO_World").setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new PointLight("Lamp").setAmbientIntensity(1).setLocation(0.0,0.0,10.0).setRadius(20))
    .addChild(new Viewpoint("Camera").setDescription("Virtual Reality Hackathon Logo Letter Prototypes").setFieldOfView(0.858).setPosition(0.0,0.0,4.0))
    .addChild(new Transform("Logo_Transform")
      .addChild(new Transform().setRotation(0.0,0.0,1.0,0.7854).setScale(2.0,2.0,2.0)
        .addChild(new ProtoInstance("Cubic_Logo").setContainerField("children")
          .addFieldValue(new fieldValue().setName("internalColor").setValue(new SFColor(0.6,0.6,0.6)))
          .addFieldValue(new fieldValue().setName("frontFace")
            .addChild(new ProtoInstance("Logo_letter_V").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.80,0.67,0.31)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.91,0.90,0.78)))))
          .addFieldValue(new fieldValue().setName("bottomFace")
            .addChild(new ProtoInstance("Logo_letter_V").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.47,0.65,0.80)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.73,0.79,0.84)))))
          .addFieldValue(new fieldValue().setName("rightFace")
            .addChild(new ProtoInstance("Logo_letter_R").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.80,0.67,0.31)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.91,0.90,0.78)))))
          .addFieldValue(new fieldValue().setName("leftFace")
            .addChild(new ProtoInstance("Logo_letter_R").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.47,0.65,0.80)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.73,0.79,0.84)))))
          .addFieldValue(new fieldValue().setName("backFace")
            .addChild(new ProtoInstance("Logo_letter_H").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.80,0.67,0.31)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.91,0.90,0.78)))))
          .addFieldValue(new fieldValue().setName("topFace")
            .addChild(new ProtoInstance("Logo_letter_H").setContainerField("children")
              .addFieldValue(new fieldValue().setName("front_colour").setValue(new SFColor(0.47,0.65,0.80)))
              .addFieldValue(new fieldValue().setName("sides_colour").setValue(new SFColor(0.73,0.79,0.84))))))))
    .addChild(new TimeSensor("Rotation_Timer").setCycleInterval(3).setLoop(true))
    .addChild(new OrientationInterpolator("rotation_Interpolator").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,-0.7,0.0,1.0,0.0,-1.57,0.0,1.0,0.0,-2.35,0.0,1.0,0.0,-3.14,0.0,1.0,0.0,-3.926,0.0,1.0,0.0,-4.71238,0.0,1.0,0.0,-5.4977,0.0,1.0,0.0,-6.28})))
    .addChild(new ROUTE().setFromNode("Rotation_Timer").setFromField("fraction_changed").setToNode("rotation_Interpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("rotation_Interpolator").setFromField("value_changed").setToNode("Logo_Transform").setToField("rotation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return VirtualRealityHackathonLogoLetterPrototypes model
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
        X3D thisExampleX3dModel = new VirtualRealityHackathonLogoLetterPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.VirtualRealityHackathonLogoLetterPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.VirtualRealityHackathonLogoLetterPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

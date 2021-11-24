package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test browser to apply attenuation values to a set of simple geometry. The third index of the attenuation field is set to 0.1, which should cause the attenuation to decrease inversively proportional to the square of the distance from the light. The light brightness should decrease rapidly as the objects move away from the light. The intensity and the ambientIntensity are set to 1 for all geometry. </p>
 <p> Related links: <a href="../../../../Lights/SpotLight/test_simc2_attenuation.java">test_simc2_attenuation.java</a> source, <a href="../../../../Lights/SpotLight/test_simc2_attenuationIndex.html" target="_top">test_simc2_attenuation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Lights/SpotLight/test_simc2_attenuation.x3d">test_simc2_attenuation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Lights/SpotLight/test-simc2-attenuation-movie.mpg">test-simc2-attenuation-movie.mpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> disclaimer </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, <a href="https://www.web3d.org/working-groups/x3d" target="_blank">https://www.web3d.org/working-groups/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 21 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test browser to apply attenuation values to a set of simple geometry. The third index of the attenuation field is set to 0.1, which should cause the attenuation to decrease inversively proportional to the square of the distance from the light. The light brightness should decrease rapidly as the objects move away from the light. The intensity and the ambientIntensity are set to 1 for all geometry. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_simc2_attenuation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_simc2_attenuation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Lights/SpotLight/../../license.html">../../license.html</a> </td>
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

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

public class test_simc2_attenuation
{
	/** Default constructor to create this object. */
	public test_simc2_attenuation ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("test_simc2_attenuation.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("test-simc2-attenuation-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test browser to apply attenuation values to a set of simple geometry. The third index of the attenuation field is set to 0.1, which should cause the attenuation to decrease inversively proportional to the square of the distance from the light. The light brightness should decrease rapidly as the objects move away from the light. The intensity and the ambientIntensity are set to 1 for all geometry."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_simc2_attenuation.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("test_simc2_attenuation.x3d"))
    .addChild(new Viewpoint().setDescription("Front View").setPosition(0.0,0.0,15.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyColor(new MFColor(new double[] {1.0,0.0,0.0})))
    .addChild(new NavigationInfo().setHeadlight(false).setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new PointLight().setOn(false))
    .addChild(new DirectionalLight().setOn(false))
    .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(-2.7,2.5,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance("the-appearance")
          .setMaterial(new Material("the-click").setAmbientIntensity(1).setEmissiveColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"CLICK HERE TO START"})
          .setFontStyle(new FontStyle().setSize(32).setCssStyle("BOLD"))))
      .addChild(new TouchSensor("the-touch").setDescription("touch to activate")))
    .addChild(new SpotLight().setAttenuation(0.0,0.0,0.1).setBeamWidth(1.57079).setCutOffAngle(1.57079).setLocation(0.0,0.0,4.0).setRadius(101))
    .addChild(new TimeSensor("text-time"))
    .addChild(new TimeSensor("the-time").setCycleInterval(8))
    .addChild(new ColorInterpolator("text-color").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0})))
    .addChild(new PositionInterpolator("box-position").setKey(new double[] {0.0,0.2,0.6,1.0}).setKeyValue(new MFVec3f(new double[] {6.14,0.0,0.0,6.14,0.0,-10.0,6.14,0.0,-30.0,6.14,0.0,-50.0})))
    .addChild(new PositionInterpolator("sphere-position").setKey(new double[] {0.0,0.2,0.6,1.0}).setKeyValue(new MFVec3f(new double[] {-4.85,0.0,0.0,-4.85,0.0,-10.0,-4.85,0.0,-30.0,-4.85,0.0,-50.0})))
    .addChild(new PositionInterpolator("cone-position").setKey(new double[] {0.0,0.2,0.6,1.0}).setKeyValue(new MFVec3f(new double[] {-1.47,0.0,0.0,-1.47,0.0,-10.0,-1.47,0.0,-30.0,-1.47,0.0,-50.0})))
    .addChild(new PositionInterpolator("cylinder-position").setKey(new double[] {0.0,0.2,0.6,1.0}).setKeyValue(new MFVec3f(new double[] {2.31,0.0,0.0,2.31,0.0,-10.0,2.31,0.0,-30.0,2.31,0.0,-50.0})))
    .addChild(new Transform("box-plane").setTranslation(6.14221,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Box())))
    .addChild(new Transform("sphere-plane").setTranslation(-4.85,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Sphere())))
    .addChild(new Transform("cone-plane").setTranslation(-1.47,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Cone())))
    .addChild(new Transform("cylinder-plane").setTranslation(2.31,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Cylinder())))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("text-time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("text-time").setFromField("fraction_changed").setToNode("text-color").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("text-color").setFromField("value_changed").setToNode("the-click").setToField("emissiveColor"))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("the-time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("sphere-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("sphere-position").setFromField("value_changed").setToNode("sphere-plane").setToField("translation"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("cone-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cone-position").setFromField("value_changed").setToNode("cone-plane").setToField("translation"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("box-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("box-position").setFromField("value_changed").setToNode("box-plane").setToField("translation"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("cylinder-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("cylinder-position").setFromField("value_changed").setToNode("cylinder-plane").setToField("translation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return test_simc2_attenuation model
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
        X3D thisExampleX3dModel = new test_simc2_attenuation().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.test_simc2_attenuation\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.test_simc2_attenuation\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D example Model of an Ikea Rocking Horse. </p>
 <p> Related links: <a href="../../../StudentProjects/IkeaRockingHorse.java">IkeaRockingHorse.java</a> source, <a href="../../../StudentProjects/IkeaRockingHorseIndex.html" target="_top">IkeaRockingHorse catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/IkeaRockingHorse.x3d">IkeaRockingHorse.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D example Model of an Ikea Rocking Horse </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 March 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vaughn Pangelinan </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Vaughn Pangelinan
 */

public class IkeaRockingHorse
{
	/** Default constructor to create this object. */
	public IkeaRockingHorse ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("IkeaRockingHorse.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D example Model of an Ikea Rocking Horse"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 March 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vaughn Pangelinan"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaRockingHorse.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("IkeaRockingHorse.x3d"))
    .addChild(new Viewpoint("HorseViewRight").setDescription("See Horse Straight On").setFieldOfView(1.4).setPosition(0.0,12.0,22.0))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57)
      .addChild(new Transform()
        .addChild(new Transform("RockingHorseTransform")
          .addChild(new Transform("AutoRotateTransform").setCenter(0.0,50.0,0.0)
            .addChild(new Viewpoint("HorseViewOverhead").setDescription("Rock With Horse From Overhead").setFieldOfView(1.1).setPosition(0.0,0.0,40.0))
            .addChild(new PlaneSensor("HorsePlaneSensor").setDescription("Moves Horse around Floor").setMaxPosition(15.0,15.0).setMinPosition(-15.0,-15.0))
            .addChild(new ROUTE().setFromNode("HorsePlaneSensor").setFromField("translation_changed").setToNode("RockingHorseTransform").setToField("set_translation"))
            .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,2.0,2.0)
              .addChild(new Group()
                .addChild(new Transform().setScale(1.5,1.0,1.0).setTranslation(0.0,0.0,6.0)
                  .addChild(new Shape("Rocker")
                    .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(.785).setCrossSection(new MFVec2f(new double[] {-2.0,-1.0,2.0,-1.0,2.0,1.0,-2.0,1.0,-2.0,-1.0})).setScale(new MFVec2f(new double[] {.2,1.0,.6,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,.6,1.0,.2,1.0})).setSolid(false).setSpine(new MFVec3f(new double[] {-15.0,2.6,0.0,-14.0,2.25,0.0,-13.0,1.89,0.0,-12.0,1.6,0.0,-11.0,1.3,0.0,-10.0,1.08,0.0,-9.0,0.86,0.0,-8.0,0.66,0.0,-7.0,0.51,0.0,-6.0,0.39,0.0,-5.0,0.3,0.0,-4.0,0.19,0.0,-3.0,0.13,0.0,-2.0,0.07,0.0,-1.0,0.04,0.0,0.0,0.0,0.0,1.0,0.04,0.0,2.0,0.07,0.0,3.0,0.13,0.0,4.0,0.19,0.0,5.0,0.3,0.0,6.0,0.39,0.0,7.0,0.51,0.0,8.0,0.66,0.0,9.0,0.86,0.0,10.0,1.08,0.0,11.0,1.3,0.0,12.0,1.6,0.0,13.0,1.89,0.0,14.0,2.25,0.0,15.0,2.6,0.0})))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("Wood").setDiffuseColor(.6,.5,.2)))))
                .addChild(new Transform().setScale(1.5,1.0,1.0).setTranslation(0.0,0.0,-6.0)
                  .addChild(new Shape().setUSE("Rocker")))
                .addChild(new Transform().setTranslation(-8.0,1.75,0.0)
                  .addChild(new Shape("RockerCrossBar")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("Wood")))
                    .setGeometry(new Box().setSize(4.0,.75,12.0))))
                .addChild(new Transform().setTranslation(8.0,1.75,0.0)
                  .addChild(new Shape().setUSE("RockerCrossBar")))
                .addChild(new Transform().setTranslation(8.0,1.75,4.0)
                  .addChild(new Shape("RockerHindLeg")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("NewGreen").setDiffuseColor(.1,.6,.1)))
                    .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(.785).setCrossSection(new MFVec2f(new double[] {-2.0,-.5,2.0,-.5,2.0,.5,-2.0,.5,-2.0,-.5})).setScale(new MFVec2f(new double[] {1.0,1.0,.9,1.0,.8,1.0,.75,1.0,.8,1.0,.9,1.0,1.0,1.0,1.0,1.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,1.0,0.0,0.0,2.0,0.0,0.0,3.0,0.0,0.0,4.0,0.0,0.0,5.0,0.0,0.0,6.0,0.0,0.0,12.0,0.0})))))
                .addChild(new Transform().setTranslation(8.0,1.75,-4.0)
                  .addChild(new Shape().setUSE("RockerHindLeg")))
                .addChild(new Transform().setScale(1.0,1.0,.5).setTranslation(3.0,14.25,0.0)
                  .addChild(new Shape("RockerSeat")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("NewBlue").setDiffuseColor(.1,.1,.6)))
                    .setGeometry(new Cylinder().setHeight(1).setRadius(12))))
                .addChild(new Transform().setTranslation(-9.99,1.75,0.0)
                  .addChild(new Shape("HorseFront")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("NewRed").setDiffuseColor(.7,.1,.1)))
                    .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(.785).setCrossSection(new MFVec2f(new double[] {0.0,0.0,3.75,0.28125,5.90625,2.625,7.21875,6.65625,7.78125,15.65625,5.15625,22.6875,4.40625,23.625,4.125,23.8125,3.46875,24.0,2.71875,23.8125,1.78125,22.875,0.75,20.90625,-3.5625,16.78125,-4.40625,15.0,-4.3125,13.125,-3.46875,11.90625,-1.96875,11.625,-0.46875,12.28125,0.9375,13.03125,1.875,13.03125,2.4375,12.46875,2.25,5.71875,1.40625,3.09375,0.46875,1.40625,0.0,0.5625,0.0,0.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,.5,0.0,0.0,-.5})))))
                .addChild(new Transform().setRotation(0.0,0.0,1.0,3.14).setScale(1.0,1.0,1.35).setTranslation(10.0,19.8,3.6)
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57)
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,.3)
                      .addChild(new Shape("SeatBack")
                        .setAppearance(new Appearance()
                          .setMaterial(new Material("NewYellow").setDiffuseColor(.8,.8,.1)))
                        .setGeometry(new Extrusion().setConvex(false).setCreaseAngle(.785).setCrossSection(new MFVec2f(new double[] {0.0,6.0,0.0,1.976470588,0.635294118,0.988235294,1.270588235,0.423529412,2.117647059,0.070588235,2.752941176,0.0,3.6,0.211764706,4.376470588,0.705882353,4.870588235,1.482352941,5.082352941,2.258823529,5.082352941,6.0,0.0,6.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,.5,0.0,0.0,-.5})))))))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-6.5,24.0,0.0)
                  .addChild(new Shape("RockerHandle")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("Wood")))
                    .setGeometry(new Cylinder().setHeight(10).setRadius(.75))))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-8.5,21.0,0.0)
                  .addChild(new Shape("RockerEye")
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1)))
                    .setGeometry(new Cylinder().setHeight(1.01).setRadius(.75)))))))
          .addChild(new TimeSensor("CLOCK").setCycleInterval(2).setLoop(true))
          .addChild(new OrientationInterpolator("HorsePathInterpolator").setKey(new double[] {0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,.04,0.0,1.0,0.0,.08,0.0,1.0,0.0,.04,0.0,1.0,0.0,0.0,0.0,1.0,0.0,-.04,0.0,1.0,0.0,-.08,0.0,1.0,0.0,-.04,0.0,1.0,0.0,0.0})))
          .addChild(new ROUTE().setFromNode("CLOCK").setFromField("fraction_changed").setToNode("HorsePathInterpolator").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("HorsePathInterpolator").setFromField("value_changed").setToNode("AutoRotateTransform").setToField("set_rotation"))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return IkeaRockingHorse model
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
        X3D thisExampleX3dModel = new IkeaRockingHorse().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.IkeaRockingHorse\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.IkeaRockingHorse\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

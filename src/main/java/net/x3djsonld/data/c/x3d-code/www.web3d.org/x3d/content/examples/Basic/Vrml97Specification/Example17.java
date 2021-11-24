package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
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
 * <p> VRML 97 specification example: VRML provides control of the viewer's camera through use of a script. This is useful for things such as guided tours, merry-go-round rides, and transportation devices such as buses and elevators. These next two examples show a couple of ways to use this feature. This example is a simple guided tour through the world. Upon entry, a guide orb hovers in front of the viewer. Click on this and a tour through the world begins. The orb follows the user around on his tour. A ProximitySensor ensures that the tour is started only if the user is close to the initial starting point. Note that this is done without scripts thanks to the touchTime output of the TouchSensor. </p>
 <p> Related links: <a href="../../../Vrml97Specification/Example17.java">Example17.java</a> source, <a href="../../../Vrml97Specification/Example17Index.html" target="_top">Example17 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Vrml97Specification/Example17.x3d">Example17.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
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
			<td> VRML 97 specification example: VRML provides control of the viewer's camera through use of a script. This is useful for things such as guided tours, merry-go-round rides, and transportation devices such as buses and elevators. These next two examples show a couple of ways to use this feature. This example is a simple guided tour through the world. Upon entry, a guide orb hovers in front of the viewer. Click on this and a tour through the world begins. The orb follows the user around on his tour. A ProximitySensor ensures that the tour is started only if the user is close to the initial starting point. Note that this is done without scripts thanks to the touchTime output of the TouchSensor. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/exampleD_17.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.17 Guided tour </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.17" target="_blank">https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.17</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example17.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example17.x3d</a> </td>
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

	* @author X3D working group
 */

public class Example17
{
	/** Default constructor to create this object. */
	public Example17 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERACTIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Example17.x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("28 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("X3D working group"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("VRML 97 specification example: VRML provides control of the viewer's camera through use of a script. This is useful for things such as guided tours, merry-go-round rides, and transportation devices such as buses and elevators. These next two examples show a couple of ways to use this feature. This example is a simple guided tour through the world. Upon entry, a guide orb hovers in front of the viewer. Click on this and a tour through the world begins. The orb follows the user around on his tour. A ProximitySensor ensures that the tour is started only if the user is close to the initial starting point. Note that this is done without scripts thanks to the touchTime output of the TouchSensor."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/exampleD_17.wrl"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONSECTION).setContent("VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.17 Guided tour"))
    .addMeta(new meta().setName(meta.NAME_SPECIFICATIONURL).setContent("https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.17"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example17.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Example17.x3d"))
    .addChild(new Group()
      .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(30.0,0.2,30.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material()))))
      .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Cone())
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.5,0.8,0.0)))))
      .addChild(new Transform().setTranslation(1.0,0.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Cylinder())
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.2,0.7)))))
      .addChild(new Transform("GuideTransform")
        .addChild(new Viewpoint("TourGuide").setDescription("Tour Guide").setJump(false))
        .addChild(new ProximitySensor("ProxSensor").setSize(50.0,50.0,50.0))
        .addChild(new TouchSensor("StartTour").setDescription("touch to start guided tour"))
        .addChild(new Transform().setTranslation(0.6,0.4,8.0)
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.2))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.6,0.0)))))))
    .addChild(new PositionInterpolator("GuidePI").setKey(new double[] {0.0,0.2,0.3,0.5,0.6,0.8,0.9,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,-5.0,2.0,0.0,-5.0,2.0,6.0,-15.0,-4.0,6.0,-15.0,-4.0,0.0,-5.0,0.0,0.0,-5.0,0.0,0.0,0.0})))
    .addChild(new OrientationInterpolator("GuideRI").setKey(new double[] {0.0,0.2,0.3,0.5,0.6,0.8,0.9,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.2,0.0,1.0,0.0,3.0,0.0,1.0,0.0,3.5,0.0,1.0,0.0,5.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0})))
    .addChild(new TimeSensor("TS").setCycleInterval(30.0))
    .addChild(new ROUTE().setFromNode("ProxSensor").setFromField("isActive").setToNode("StartTour").setToField("enabled"))
    .addChild(new ROUTE().setFromNode("StartTour").setFromField("touchTime").setToNode("TS").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("isActive").setToNode("TourGuide").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("GuidePI").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("GuideRI").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("GuidePI").setFromField("value_changed").setToNode("GuideTransform").setToField("translation"))
    .addChild(new ROUTE().setFromNode("GuideRI").setFromField("value_changed").setToNode("GuideTransform").setToField("rotation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Example17 model
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
        X3D thisExampleX3dModel = new Example17().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Example17\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Example17\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

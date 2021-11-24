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
 * <p> A computer keyboard for the control panel in the CVN bridge control. The buttons animated to be pushed in when touched. </p>
 <p> Related links: <a href="../../../StudentProjects/ComputerKeyboard.java">ComputerKeyboard.java</a> source, <a href="../../../StudentProjects/ComputerKeyboardIndex.html" target="_top">ComputerKeyboard catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/ComputerKeyboard.x3d">ComputerKeyboard.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A computer keyboard for the control panel in the CVN bridge control. The buttons animated to be pushed in when touched. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Foo Khee Loon </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 February 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ComputerKeyboard.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ComputerKeyboard.x3d</a> </td>
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

	* @author Foo Khee Loon
 */

public class ComputerKeyboard
{
	/** Default constructor to create this object. */
	public ComputerKeyboard ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ComputerKeyboard.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A computer keyboard for the control panel in the CVN bridge control. The buttons animated to be pushed in when touched."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Foo Khee Loon"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 February 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ComputerKeyboard.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ComputerKeyboard.x3d"))
    .addChild(new Viewpoint().setDescription("Front View").setFieldOfView(1).setOrientation(0.0,1.0,0.0,1.571).setPosition(1.0,0.2,0.5))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.571)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.8,0.7)))
        .setGeometry(new Extrusion().setCcw(false).setCreaseAngle(1.75).setCrossSection(new MFVec2f(new double[] {0.0,0.0,0.025,-0.05,0.05,-0.07,0.075,-0.08,0.1,-0.09,0.35,-0.04,0.4,-0.03,0.45,-0.0275,0.45,0.0,0.045,-0.0275,0.045,0.0,0.0,0.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.98,0.0}))))
      .addChild(new Transform("EscapeButton").setRotation(1.0,0.0,0.0,-1.571).setTranslation(0.1,0.95,-0.065)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.7,0.7,0.8)))
          .setGeometry(new Extrusion().setCreaseAngle(2).setCrossSection(new MFVec2f(new double[] {-0.02,-0.02,-0.02,0.02,0.02,0.02,0.02,-0.02,-0.02,-0.02})).setScale(new MFVec2f(new double[] {1.0,1.0,1.2,1.2,0.7,0.7})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.02,0.0,0.0,0.04,0.0}))))
        .addChild(new TouchSensor("TouchButton").setDescription("touch keys to animate"))
        .addChild(new TimeSensor("push").setStopTime(0.5))
        .addChild(new PositionInterpolator("Move").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.1,0.95,-0.065,0.1,0.95,-0.05,0.1,0.95,-0.065}))))
      .addComments(" first row of the keyboard ")
      .addChild(new Transform().setTranslation(0.0,-0.1,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.1467,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.193367,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.240033,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.340033,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.386700,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.43336700,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.4800,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.5800,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.626667,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.67333,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.72,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.82,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.8667,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.0,-0.91333,0.0)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addComments(" second row of key board ")
      .addChild(new Transform().setTranslation(0.1,-0.001,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.048667,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.0963,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.144,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.19167666,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.23934,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.2871,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.33466,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.382333,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.43,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.477,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.525333,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.57,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.62066,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.66833,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.716,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.763666,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.811333,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.859,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform().setTranslation(0.1,-0.9066,0.015)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addComments(" third row of key board ")
      .addChild(new Group("row")
        .addChild(new Transform().setTranslation(0.146667,-0.001,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.04866671,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.096331,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.144,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.191664,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.2393664,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.287,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.3346677,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.38236677,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.437,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.4776,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.525334776,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.57376,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.62057376,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.66832057376,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.716,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.7636,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.8113336,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.859,0.025)
          .addChild(new Transform().setUSE("EscapeButton")))
        .addChild(new Transform().setTranslation(0.1467,-0.90667859,0.025)
          .addChild(new Transform().setUSE("EscapeButton"))))
      .addComments(" Fourth row of key board ")
      .addChild(new Transform().setTranslation(0.04667,0.0,0.01)
        .addChild(new Group().setUSE("row")))
      .addComments(" Fifth row of key board ")
      .addChild(new Transform().setTranslation(0.093347,0.0,0.02)
        .addChild(new Group().setUSE("row")))
      .addComments(" sixth row of key board ")
      .addChild(new Transform().setScale(1.0,2.0,1.0).setTranslation(0.286667,-1.0,0.055)
        .addChild(new Transform().setUSE("EscapeButton")))
      .addChild(new Transform("space_bar").setRotation(0.0,0.0,1.0,1.571).setTranslation(0.3902677,0.5,-0.045)
        .addChild(new Transform().setRotation(1.0,0.0,0.0,1.571)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.7,0.7,0.8)))
            .setGeometry(new Extrusion().setCreaseAngle(2).setCrossSection(new MFVec2f(new double[] {-0.25,-0.02,-0.25,0.02,0.25,0.02,0.25,-0.02,-0.25,-0.02})).setScale(new MFVec2f(new double[] {1.0,1.0,1.2,1.2,0.7,0.7})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.02,0.0,0.0,0.04,0.0}))))))
      .addChild(new Transform().setUSE("EscapeButton")))
    .addChild(new ROUTE().setFromNode("TouchButton").setFromField("touchTime").setToNode("push").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("push").setFromField("fraction_changed").setToNode("Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Move").setFromField("value_changed").setToNode("EscapeButton").setToField("set_translation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ComputerKeyboard model
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
        X3D thisExampleX3dModel = new ComputerKeyboard().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ComputerKeyboard\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ComputerKeyboard\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

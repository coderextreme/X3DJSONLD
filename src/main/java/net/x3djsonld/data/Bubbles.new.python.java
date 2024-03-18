package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Bubble animation used by Nancy Diving example. </p>
 <p> Related links: Bubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Bubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d">Bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Bubble animation used by Nancy Diving example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Etsuko Lippi </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/../license.html">../license.html</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Etsuko Lippi
 */

public class Bubbles
{
	/** Default constructor to create this object. */
	public Bubbles ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Bubbles.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Bubble animation used by Nancy Diving example."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Etsuko Lippi"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("24 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 May 2020"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Bubbles.x3d"))
    .addChild(new Transform("Bubbles")
      .addChild(new Group("Bubble")
        .addChild(new TimeSensor("BubbleClock").setCycleInterval(6.0).setLoop(true))
        .addChild(new PositionInterpolator("BubblePath1").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.9044,0.9509})))
        .addChild(new PositionInterpolator("BubblePath2").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,0.575,0.038483478,1.989,1.098373})))
        .addChild(new PositionInterpolator("BubblePath3").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.555,1.09043,0.005734})))
        .addChild(new PositionInterpolator("BubblePath4").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.948594,1.3983,0.009009349})))
        .addChild(new PositionInterpolator("BubblePath5").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.84444,1.22222,0.1})))
        .addChild(new PositionInterpolator("BubblePath6").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.14})))
        .addChild(new PositionInterpolator("BubblePath7").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,0.08787,1.022,0.12})))
        .addChild(new PositionInterpolator("BubblePath8").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.8787,1.686,0.86})))
        .addChild(new PositionInterpolator("BubblePath9").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.8787,2.0,0.1545})))
        .addChild(new PositionInterpolator("BubblePath10").setKey(new double[] {0.0,0.0,0.0,0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1.0,1.0,0.1})))
        .addChild(new Transform()
          .addChild(new Transform("bubble1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.025))))
          .addChild(new Transform("bubble2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.055))))
          .addChild(new Transform("bubble3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.065))))
          .addChild(new Transform("bubble4")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.015))))
          .addChild(new Transform("bubble5")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.075))))
          .addChild(new Transform("bubble6")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.005))))
          .addChild(new Transform("bubble7")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.035))))
          .addChild(new Transform("bubble8")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.05))))
          .addChild(new Transform("bubble9")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.045))))
          .addChild(new Transform("bubble10")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.035))))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath2").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath3").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath4").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath5").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath6").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath7").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath8").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath9").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath10").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubblePath1").setFromField("value_changed").setToNode("bubble1").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath2").setFromField("value_changed").setToNode("bubble2").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath3").setFromField("value_changed").setToNode("bubble3").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath4").setFromField("value_changed").setToNode("bubble4").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath5").setFromField("value_changed").setToNode("bubble5").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath6").setFromField("value_changed").setToNode("bubble6").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath7").setFromField("value_changed").setToNode("bubble7").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath8").setFromField("value_changed").setToNode("bubble8").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath9").setFromField("value_changed").setToNode("bubble9").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath10").setFromField("value_changed").setToNode("bubble10").setToField("set_translation")))))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.0,0.0,0.6}))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Bubbles model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new Bubbles().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.Bubbles\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Bubbles self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

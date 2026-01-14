package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example animation timings, manually translated from tool outputs and export. </p>
 <p> Related links:  source WinterAndSpringHumanoidTimings.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.WinterAndSpringHumanoidTimings&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d">WinterAndSpringHumanoidTimings.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example animation timings, manually translated from tool outputs and export. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv" target="_blank">https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Katy Schildmeyer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Carol McDonald </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 2 July 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 9 July 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 19 September 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Cinema 4D <a href="https://www.maxon.net/en/cinema-4d" target="_blank">https://www.maxon.net/en/cinema-4d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/../license.html">../license.html</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Katy Schildmeyer
	* @author Carol McDonald
 */

public class WinterAndSpringHumanoidTimings
{
	/** Default constructor to create this object. */
	public WinterAndSpringHumanoidTimings ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("WinterAndSpringHumanoidTimings.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example animation timings, manually translated from tool outputs and export."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Katy Schildmeyer"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Carol McDonald"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("2 July 2023"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("9 July 2023"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("19 September 2023"))
    .addMeta(new meta().setName(meta.NAME_HINT       ).setContent("MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Cinema 4D https://www.maxon.net/en/cinema-4d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("WinterAndSpringHumanoidTimings.x3d"))
    .addChild(new Viewpoint("EntryView1").setDescription("Hello characters 1").setPosition(0.0,2.0,40.0))
    .addChild(new Viewpoint("EntryView2").setDescription("Hello characters 2").setCenterOfRotation(0.0,10.0,10.0).setOrientation(0.0,1.0,0.0,-0.643501).setPosition(-15.0,10.0,30.0)
      .addComments(" local lookat point: 0 10 10 "))
    .addChild(new Transform("TextRoot")
      .addChild(new Shape("ModelDescriptionText")
        .setGeometry(new Text().setString(new String[] {"This scene tests","","experimental approaches","","for human animation"})
          .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8).setCssStyle("BOLD")))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.960784,0.894118,0.0)))))
    .addChild(new Transform("Root4"))
    .addChild(new Transform("Root5"))
    .addChild(new Transform("Root6"))
    .addComments(" WinterAndSpringHumanoidTimings ")
    .addComments(" Gramps_humanoid root is at 0 0.875 0 at start, now at given x and z with root now changed in height to 0.95 to #add pathway height. The actual Gramps height (y) may be slightly different but use this value for now. ")
    .addChild(new PositionInterpolator("Gramps_HumanoidRoot_TranslationInterpolator").setKey(new double[] {0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new MFVec3f(new double[] {6.8557,0.95,0.5,6.8557,0.95,0.5,6.8557,0.95,0.5,9.8557,0.95,3.5,9.8557,0.95,3.5,9.8557,0.95,3.5,14.3558,0.95,8.0,16.8558,0.95,15.0,21.3557,0.95,24.5,21.3557,0.95,24.5,21.3557,0.95,24.5}))
      .setMetadata(new MetadataString().setName("poses").setValue(new String[] {"Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"})))
    .addChild(new PositionInterpolator("Leif_HumanoidRoot_TranslationInterpolator").setKey(new double[] {0.0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new MFVec3f(new double[] {-7.9962,0.400,3.000,-7.9962,0.400,3.000,-7.9962,0.400,3.000,-7.9962,0.400,3.000,9.004,0.475,3.4999,11.5048,0.475,3.3699,16.0038,0.475,7.8699,18.5038,0.475,14.8699,23.0038,0.475,24.3699,23.0038,0.475,24.3699,23.0038,0.475,24.3699}))
      .setMetadata(new MetadataString().setName("poses").setValue(new String[] {"Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"})))
    .addChild(new PositionInterpolator("Lily_HumanoidRoot_TranslationInterpolator").setKey(new double[] {0.0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new MFVec3f(new double[] {-8.0962,0.400,5.600,-8.0962,0.400,5.600,-8.0962,0.400,5.600,-8.0962,0.400,5.600,8.9038,0.475,4.0999,10.6538,0.475,3.3499,15.1538,0.475,7.8499,17.6538,0.475,14.8499,22.1538,0.475,24.3499,22.1538,0.475,24.3499,22.1538,0.475,24.3499}))
      .setMetadata(new MetadataString().setName("poses").setValue(new String[] {"Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"})))
    .addChild(new PositionInterpolator("Tufani_HumanoidRoot_TranslationInterpolator").setKey(new double[] {0.0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new MFVec3f(new double[] {-8.0962,0.400,6.400,-8.0962,0.400,6.400,-8.0962,0.400,6.400,-8.0962,0.400,6.400,9.40338,0.475,4.3999,9.1538,0.475,3.2699,13.6538,0.475,7.7699,16.1538,0.475,14.7699,20.6538,0.475,24.2699,20.6538,0.475,24.2699,20.6538,0.475,24.2699}))
      .setMetadata(new MetadataString().setName("poses").setValue(new String[] {"Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"})))
    .addComments(" Now add Background nodes with corresponding timing, as controlled by an identical key array ")
    .addComments(" TODO are we missing Background1 and Background2? ")
    .addComments(" This is black for all ")
    .addChild(new Background("Background3Black"))
    .addComments(" This is blue sky and green grass ")
    .addChild(new Background("Background4SkyBlueGreenGrass").setGroundAngle(new double[] {1.57}).setGroundColor(new MFColor(new double[] {0.356863,0.639216,0.0,0.721569,1.0,0.501961})).setSkyColor(new MFColor(new double[] {0.0,0.71,0.886})))
    .addComments(" This is light gray sky and green grass ")
    .addChild(new Background("Background5LightGrey").setSkyColor(new MFColor(new double[] {0.827,0.827,0.827})))
    .addComments(" This is black background and white text for all ")
    .addChild(new Background("Background6DarkGrey").setSkyColor(new MFColor(new double[] {0.6,0.2,0.2})))
    .addComments(" Animation controls ")
    .addChild(new TimeSensor("Clock10Seconds").setCycleInterval(5).setLoop(true))
    .addChild(new TimeSensor("Clock100Seconds").setCycleInterval(100).setEnabled(false))
    .addChild(new BooleanSequencer("Background3Sequencer").setKey(new double[] {0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new boolean[] {true,true,true,false,false,false,false,false,false,false,false}))
    .addChild(new BooleanSequencer("Background4Sequencer").setKey(new double[] {0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new boolean[] {false,false,false,true,true,false,false,false,false,false,false}))
    .addChild(new BooleanSequencer("Background5Sequencer").setKey(new double[] {0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new boolean[] {false,false,false,false,false,true,true,true,false,false,false}))
    .addChild(new BooleanSequencer("Background6Sequencer").setKey(new double[] {0.0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1.0}).setKeyValue(new boolean[] {false,false,false,false,false,false,false,false,true,true,true}))
    .addChild(new ROUTE().setFromNode("Background3Sequencer").setFromField("value_changed").setToNode("Background3Black").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("Background4Sequencer").setFromField("value_changed").setToNode("Background4SkyBlueGreenGrass").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("Background5Sequencer").setFromField("value_changed").setToNode("Background5LightGrey").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("Background6Sequencer").setFromField("value_changed").setToNode("Background6DarkGrey").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background3Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background4Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background5Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Background6Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background3Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background4Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background5Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Background6Sequencer").setToField("set_fraction"))
    .addComments(" now move things around by modifying interpolator valuess ")
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Gramps_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Leif_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Lily_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock10Seconds").setFromField("fraction_changed").setToNode("Tufani_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Gramps_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Leif_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Lily_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Clock100Seconds").setFromField("fraction_changed").setToNode("Tufani_HumanoidRoot_TranslationInterpolator").setToField("set_fraction"))
    .addComments(" now move things around by changing the Transform translation values ")
    .addChild(new ROUTE().setFromNode("Gramps_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("TextRoot").setToField("translation"))
    .addChild(new ROUTE().setFromNode("Leif_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root4").setToField("translation"))
    .addChild(new ROUTE().setFromNode("Lily_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root5").setToField("translation"))
    .addChild(new ROUTE().setFromNode("Tufani_HumanoidRoot_TranslationInterpolator").setFromField("value_changed").setToNode("Root6").setToField("translation")));
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
	 * @return WinterAndSpringHumanoidTimings model
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
        X3D thisExampleX3dModel = new WinterAndSpringHumanoidTimings().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.WinterAndSpringHumanoidTimings\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.WinterAndSpringHumanoidTimings self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./WinterAndSpringHumanoidTimings_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./WinterAndSpringHumanoidTimings_JavaExport.x3d"; 
                String filenameX3DV = "./WinterAndSpringHumanoidTimings_JavaExport.x3dv"; 
                String filenameJSON = "./WinterAndSpringHumanoidTimings_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This example shows how to use the BooleanSequencer prototype in an animated scenario. </p>
 <p> Related links: <a href="../../../development/BooleanSequencerExample.java">BooleanSequencerExample.java</a> source, <a href="../../../development/BooleanSequencerExampleIndex.html" target="_top">BooleanSequencerExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/BooleanSequencerExample.x3d">BooleanSequencerExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows how to use the BooleanSequencer prototype in an animated scenario. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 10 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> boolean sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu
 */

public class BooleanSequencerExample
{
	/** Default constructor to create this object. */
	public BooleanSequencerExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BooleanSequencerExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This example shows how to use the BooleanSequencer prototype in an animated scenario."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("10 August 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("boolean sequencer"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BooleanSequencerExample.x3d"))
    .addChild(new Group("HUDGroup")
      .addChild(new ProximitySensor("WhereSensor").setSize(1000.0,1000.0,1000.0))
      .addChild(new Transform("BillboardWhereTransform")
        .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.03).setTranslation(0.0,0.0,-12.0)
          .addChild(new Billboard()
            .addChild(new Transform("BillboardPlaneTransform")
              .addChild(new TouchSensor("Toucher").setDescription("Click text to start clock and run multiple BooleanSequencers"))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))
                .setGeometry(new Text().setString(new String[] {"Click text to start clock, run","multiple BooleanSequencers","","","","See Viewpoint description","for bound Viewpoint number"})
                  .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))))))))
      .addChild(new ROUTE().setFromNode("WhereSensor").setFromField("position_changed").setToNode("BillboardWhereTransform").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("BillboardWhereTransform").setToField("set_rotation")))
    .addChild(new TimeSensor("Clock").setCycleInterval(10))
    .addChild(new ROUTE().setFromNode("Toucher").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
    .addChild(new Viewpoint("FrontUpViewpoint").setDescription("View 0, Front Up"))
    .addChild(new Group("AnimatedView1")
      .addChild(new Viewpoint("LeftViewpoint").setDescription("View 1, Left").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))
      .addChild(new BooleanSequencer("LeftViewBinder").setKey(new double[] {0.0,0.1,0.25}).setKeyValue(new boolean[] {false,true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("LeftViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("LeftViewBinder").setFromField("value_changed").setToNode("LeftViewpoint").setToField("set_bind")))
    .addChild(new Group("AnimatedView2")
      .addChild(new Viewpoint("BackViewpoint").setDescription("View 2, Back").setOrientation(0.0,1.0,0.0,-3.14).setPosition(0.0,0.0,-10.0))
      .addChild(new BooleanSequencer("BackViewBinder").setKey(new double[] {0.0,0.375,0.475}).setKeyValue(new boolean[] {false,true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("BackViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("BackViewBinder").setFromField("value_changed").setToNode("BackViewpoint").setToField("set_bind")))
    .addChild(new Group("AnimatedView3")
      .addChild(new Viewpoint("RightViewpoint").setDescription("View 3, Right").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
      .addChild(new BooleanSequencer("RightViewBinder").setKey(new double[] {0.0,0.5,0.6}).setKeyValue(new boolean[] {false,true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("RightViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("RightViewBinder").setFromField("value_changed").setToNode("RightViewpoint").setToField("set_bind")))
    .addChild(new Group("AnimatedView4")
      .addChild(new Viewpoint("TopViewpoint").setDescription("View 4, Top").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
      .addChild(new BooleanSequencer("TopViewBinder").setKey(new double[] {0.625,0.725}).setKeyValue(new boolean[] {true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("TopViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("TopViewBinder").setFromField("value_changed").setToNode("TopViewpoint").setToField("set_bind")))
    .addChild(new Group("AnimatedView5")
      .addChild(new Viewpoint("FrontDownViewpoint").setDescription("View 5, Front Down").setOrientation(1.0,0.0,0.0,-3.14).setPosition(0.0,0.0,-10.0))
      .addChild(new BooleanSequencer("FrontDownViewBinder").setKey(new double[] {0.75,0.85}).setKeyValue(new boolean[] {true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("FrontDownViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FrontDownViewBinder").setFromField("value_changed").setToNode("FrontDownViewpoint").setToField("set_bind")))
    .addChild(new Group("AnimatedView6")
      .addChild(new Viewpoint("BottomViewpoint").setDescription("View 6, Bottom").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
      .addChild(new BooleanSequencer("BottomViewBinder").setKey(new double[] {0.875,0.975}).setKeyValue(new boolean[] {true,false}))
      .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("BottomViewBinder").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("BottomViewBinder").setFromField("value_changed").setToNode("BottomViewpoint").setToField("set_bind")))
    .addChild(new Switch("DebugSwitch").setWhichChoice(0)
      .addChild(new Group()
        .addChild(new Script("Debug").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function setFraction(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('fraction =' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontUpViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('FrontUpView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setLeftViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('LeftView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBackViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BackView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setRightViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('RightView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTopViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('TopView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontDownViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('FrontDownView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBottomViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BottomView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontUpBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for FrontUpViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setLeftBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for LeftViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBackBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for BackViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setRightBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for RightViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTopBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for TopViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontDownBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for FrontDownViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBottomBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for BottomViewpoint:' + value);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("setFraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setFrontUpViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setLeftViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setBackViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setRightViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setTopViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setFrontDownViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setBottomViewBind").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setFrontUpBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setLeftBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setBackBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setRightBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setTopBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setFrontDownBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("setBottomBSOutput").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Debug").setToField("setFraction"))
        .addChild(new ROUTE().setFromNode("FrontUpViewpoint").setFromField("isBound").setToNode("Debug").setToField("setFrontUpViewBind"))
        .addChild(new ROUTE().setFromNode("LeftViewpoint").setFromField("isBound").setToNode("Debug").setToField("setLeftViewBind"))
        .addChild(new ROUTE().setFromNode("BackViewpoint").setFromField("isBound").setToNode("Debug").setToField("setBackViewBind"))
        .addChild(new ROUTE().setFromNode("RightViewpoint").setFromField("isBound").setToNode("Debug").setToField("setRightViewBind"))
        .addChild(new ROUTE().setFromNode("TopViewpoint").setFromField("isBound").setToNode("Debug").setToField("setTopViewBind"))
        .addChild(new ROUTE().setFromNode("FrontDownViewpoint").setFromField("isBound").setToNode("Debug").setToField("setFrontDownViewBind"))
        .addChild(new ROUTE().setFromNode("BottomViewpoint").setFromField("isBound").setToNode("Debug").setToField("setBottomViewBind"))
        .addChild(new ROUTE().setFromNode("LeftViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setLeftBSOutput"))
        .addChild(new ROUTE().setFromNode("BackViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setBackBSOutput"))
        .addChild(new ROUTE().setFromNode("RightViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setRightBSOutput"))
        .addChild(new ROUTE().setFromNode("TopViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setTopBSOutput"))
        .addChild(new ROUTE().setFromNode("FrontDownViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setFrontDownBSOutput"))
        .addChild(new ROUTE().setFromNode("BottomViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setBottomBSOutput"))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
        .setGeometry(new Box().setSize(2.0,0.1,0.35)))
      .addChild(new Transform().setTranslation(-1.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Sphere().setRadius(0.2))))
      .addChild(new Transform().setTranslation(1.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Sphere().setRadius(0.2)))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Cone()))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BooleanSequencerExample model
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
        X3D thisExampleX3dModel = new BooleanSequencerExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BooleanSequencerExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BooleanSequencerExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

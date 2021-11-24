package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test speed scaling. Three Viewpoint node, children in three different Transform node, with three different scale values are used to determine if scaling of Transform node properly affect the speed of a NavigationInfo node. Indicating the top (red) Box changes the current Viewpoints parent Transform scale to (0.01 0.01 0.01). The result should be, the "normal" speed of navigation should be 10 times slower than default navigation speed. Selecting the middle (yellow) Box sets the Transform scale to 1 1 1. Navigation speed should be 1 meter per second when set to "normal" on the browser speed control. Indicating the bottom (green) Box sets the Transform scale to 10 10 10. The result should be, the "normal" speed of navigation for the right indicated text should be 10 times faster than default navigation speed. </p>
 <p> Related links: <a href="../../../../BindableNodes/NavigationInfo/speed_scaling.java">speed_scaling.java</a> source, <a href="../../../../BindableNodes/NavigationInfo/speed_scalingIndex.html" target="_top">speed_scaling catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../BindableNodes/NavigationInfo/speed_scaling.x3d">speed_scaling.x3d</a> </td>
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
			<td> Test speed scaling. Three Viewpoint node, children in three different Transform node, with three different scale values are used to determine if scaling of Transform node properly affect the speed of a NavigationInfo node. Indicating the top (red) Box changes the current Viewpoints parent Transform scale to (0.01 0.01 0.01). The result should be, the "normal" speed of navigation should be 10 times slower than default navigation speed. Selecting the middle (yellow) Box sets the Transform scale to 1 1 1. Navigation speed should be 1 meter per second when set to "normal" on the browser speed control. Indicating the bottom (green) Box sets the Transform scale to 10 10 10. The result should be, the "normal" speed of navigation for the right indicated text should be 10 times faster than default navigation speed. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.x3d</a> </td>
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
			<td> <a href="../../../../BindableNodes/NavigationInfo/../../license.html">../../license.html</a> </td>
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

public class speed_scaling
{
	/** Default constructor to create this object. */
	public speed_scaling ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("speed_scaling.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test speed scaling. Three Viewpoint node, children in three different Transform node, with three different scale values are used to determine if scaling of Transform node properly affect the speed of a NavigationInfo node. Indicating the top (red) Box changes the current Viewpoints parent Transform scale to (0.01 0.01 0.01). The result should be, the \"normal\" speed of navigation should be 10 times slower than default navigation speed. Selecting the middle (yellow) Box sets the Transform scale to 1 1 1. Navigation speed should be 1 meter per second when set to \"normal\" on the browser speed control. Indicating the bottom (green) Box sets the Transform scale to 10 10 10. The result should be, the \"normal\" speed of navigation for the right indicated text should be 10 times faster than default navigation speed."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("speed_scaling.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {1.57}).setGroundColor(new MFColor(new double[] {0.0,0.5,0.0,0.0,0.5,0.0})).setSkyColor(new MFColor(new double[] {0.0,0.0,1.0})))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(100000.0,100000.0,100000.0))
    .addChild(new Transform("ROOT_TRANS")
      .addChild(new Viewpoint("VIEW0").setDescription("initial view"))
      .addChild(new NavigationInfo("NAV0")))
    .addChild(new TimeSensor("TIME").setLoop(true))
    .addChild(new Transform("TRANS0")
      .addChild(new Transform().setTranslation(-7.0,5.0,-15.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text("TYPESTRING0").setString(new String[] {"scripted instructions go here"})))))
    .addChild(new Transform("TRANS1")
      .addChild(new Transform().setTranslation(-5.0,-4.0,-10.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry(new Text("TYPESTRING1").setString(new String[] {"current speed = 0"})
            .setFontStyle(new FontStyle())))))
    .addChild(new Transform("TRANS2")
      .addChild(new Transform().setTranslation(-4.0,0.0,-10.0)
        .addChild(new TouchSensor("TOUCH1").setDescription("touch for speed factor 1"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"1x.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/1x.jpg"}))
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(2.0,1.5,0.1)))))
    .addChild(new Transform("TRANS3")
      .addChild(new Transform().setTranslation(-4.0,2.0,-10.0)
        .addChild(new TouchSensor("TOUCH2").setDescription("touch for speed factor 1/100th"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"hundredthx.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/hundredthx.jpg"}))
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(2.0,1.5,0.1)))))
    .addChild(new Transform("TRANS4")
      .addChild(new Transform().setTranslation(-4.0,-2.0,-10.0)
        .addChild(new TouchSensor("TOUCH3").setDescription("touch for speed factor 100x"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"100x.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/100x.jpg"}))
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(2.0,1.5,0.1)))))
    .addChild(new Script("CHANGEVIEW").setDirectOutput(true).setUrl(new String[] {"speed_scaling.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.js"})
      .addField(new field().setName("proxSensor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new ProximitySensor().setUSE("PROX_SENSOR")))
      .addField(new field().setName("rootTrans").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Transform().setUSE("ROOT_TRANS")))
      .addField(new field().setName("typestring0").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("TYPESTRING0")))
      .addField(new field().setName("typestring1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("TYPESTRING1")))
      .addField(new field().setName("previousTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
      .addField(new field().setName("previousLoc").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,100.0)))
      .addField(new field().setName("currentLoc").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,10.0)))
      .addField(new field().setName("emptyString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("zero").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"current speed = 0"}))
      .addField(new field().setName("setSmallScaleString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Click to set Transform scale to .01 .01 .01"}))
      .addField(new field().setName("smallScaleSetString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Tranform scale set to .01 .01 .01"}))
      .addField(new field().setName("setNormalScaleString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Click to set Transform scale to 1 1 1"}))
      .addField(new field().setName("normalScaleSetString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Transform scale set to 1 1 1"}))
      .addField(new field().setName("setLargeScaleString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Click to set Transform scale to 100 100 100"}))
      .addField(new field().setName("largeScaleSetString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Transform scale set to 100 100 100"}))
      .addField(new field().setName("small").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.010000,0.010000,0.010000)))
      .addField(new field().setName("normal").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(1.0,1.0,1.0)))
      .addField(new field().setName("large").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(100.0,100.0,100.0)))
      .addField(new field().setName("printSpeed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printZero").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("smallScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("largeScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("normalScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printSmallScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printLargeScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printNormalScale").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("TOUCH1").setFromField("isActive").setToNode("CHANGEVIEW").setToField("normalScale"))
    .addChild(new ROUTE().setFromNode("TOUCH1").setFromField("isOver").setToNode("CHANGEVIEW").setToField("printNormalScale"))
    .addChild(new ROUTE().setFromNode("TOUCH2").setFromField("isActive").setToNode("CHANGEVIEW").setToField("smallScale"))
    .addChild(new ROUTE().setFromNode("TOUCH2").setFromField("isOver").setToNode("CHANGEVIEW").setToField("printSmallScale"))
    .addChild(new ROUTE().setFromNode("TOUCH3").setFromField("isActive").setToNode("CHANGEVIEW").setToField("largeScale"))
    .addChild(new ROUTE().setFromNode("TOUCH3").setFromField("isOver").setToNode("CHANGEVIEW").setToField("printLargeScale"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("CHANGEVIEW").setToField("printSpeed"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS0").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS0").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS1").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS2").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS2").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS3").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS3").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS4").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS4").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("TIME").setFromField("cycleTime").setToNode("CHANGEVIEW").setToField("printZero")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return speed_scaling model
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
        X3D thisExampleX3dModel = new speed_scaling().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.speed_scaling\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.speed_scaling\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

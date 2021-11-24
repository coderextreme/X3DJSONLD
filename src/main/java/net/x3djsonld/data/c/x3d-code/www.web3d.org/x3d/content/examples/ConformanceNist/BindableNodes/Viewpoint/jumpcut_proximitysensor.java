package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test jumpcut with ProximitySensor events. The initial Viewpoint in this world is outside of a ProximitySensor cube. A Second Viewpoint node is at the center of the ProximitySensor (the origin of the local coordinate system). Indicating the Box geometry in the world creates a "jumpcut" between the first and second Viewpoint. The enterTime of the ProximitySensor should be identical to the bindTime of Viewpoint 2 (at the origin of the coordinate system). The exitTime of the ProximitySensor should equal the bindTime of Viewpoint 1 (located outside of the ProximitySensor) . As a result, Text at the bottom of the world should indicate pass/fail of the time events being equal for enterTime and exitTime. </p>
 <p> Related links: <a href="../../../../BindableNodes/Viewpoint/jumpcut_proximitysensor.java">jumpcut_proximitysensor.java</a> source, <a href="../../../../BindableNodes/Viewpoint/jumpcut_proximitysensorIndex.html" target="_top">jumpcut_proximitysensor catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../BindableNodes/Viewpoint/jumpcut_proximitysensor.x3d">jumpcut_proximitysensor.x3d</a> </td>
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
			<td> Test jumpcut with ProximitySensor events. The initial Viewpoint in this world is outside of a ProximitySensor cube. A Second Viewpoint node is at the center of the ProximitySensor (the origin of the local coordinate system). Indicating the Box geometry in the world creates a "jumpcut" between the first and second Viewpoint. The enterTime of the ProximitySensor should be identical to the bindTime of Viewpoint 2 (at the origin of the coordinate system). The exitTime of the ProximitySensor should equal the bindTime of Viewpoint 1 (located outside of the ProximitySensor) . As a result, Text at the bottom of the world should indicate pass/fail of the time events being equal for enterTime and exitTime. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitysensor.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitysensor.x3d</a> </td>
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
			<td> <a href="../../../../BindableNodes/Viewpoint/../../license.html">../../license.html</a> </td>
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

public class jumpcut_proximitysensor
{
	/** Default constructor to create this object. */
	public jumpcut_proximitysensor ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("jumpcut_proximitysensor.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test jumpcut with ProximitySensor events. The initial Viewpoint in this world is outside of a ProximitySensor cube. A Second Viewpoint node is at the center of the ProximitySensor (the origin of the local coordinate system). Indicating the Box geometry in the world creates a \"jumpcut\" between the first and second Viewpoint. The enterTime of the ProximitySensor should be identical to the bindTime of Viewpoint 2 (at the origin of the coordinate system). The exitTime of the ProximitySensor should equal the bindTime of Viewpoint 1 (located outside of the ProximitySensor) . As a result, Text at the bottom of the world should indicate pass/fail of the time events being equal for enterTime and exitTime."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitysensor.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("jumpcut_proximitysensor.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {1.57}).setGroundColor(new MFColor(new double[] {0.0,0.5,0.0,0.0,0.5,0.0})).setSkyColor(new MFColor(new double[] {0.0,0.0,1.0})))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(20.0,20.0,20.0))
    .addChild(new Viewpoint("VIEW1").setDescription("Viewpoint1").setPosition(0.0,0.0,11.0))
    .addChild(new Viewpoint("VIEW2").setDescription("Viewpoint2").setPosition(0.0,0.0,0.0))
    .addChild(new TimeSensor("TIME0").setCycleInterval(2))
    .addChild(new ColorInterpolator("COLOR_INTERP").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,1.0,0.0,1.0,1.0,0.0,1.0,1.0,0.0})))
    .addChild(new TouchSensor("TOUCH").setDescription("touch to bind viewpoint 2"))
    .addChild(new Transform().setTranslation(0.0,0.0,-3.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("BOX1").setDiffuseColor(1.0,0.0,0.0)))
        .setGeometry(new Box().setSize(3.0,3.0,3.0))))
    .addChild(new Transform("TRANS0")
      .addChild(new Transform().setTranslation(-8.0,-5.0,-12.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Text("TYPESTRING0").setString(new String[] {""})
            .setFontStyle(new FontStyle().setCssStyle("BOLD"))))))
    .addChild(new Transform("TRANS1")
      .addChild(new Transform().setTranslation(-8.0,-6.0,-12.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Text("TYPESTRING1").setString(new String[] {"message from Script is inserted here"})
            .setFontStyle(new FontStyle().setCssStyle("BOLD"))))))
    .addChild(new Script("AVATARSCRIPT").setDirectOutput(true).setUrl(new String[] {"jumpcut_proximitytsensor.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitytsensor.js"})
      .addField(new field().setName("view1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Viewpoint().setUSE("VIEW1")))
      .addField(new field().setName("view2").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Viewpoint().setUSE("VIEW2")))
      .addField(new field().setName("typestring0").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("TYPESTRING0")))
      .addField(new field().setName("typestring1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("TYPESTRING1")))
      .addField(new field().setName("checkEnter").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("checkExit").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("enterTimeCorrect").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"enterTime equals Viewpoint2 bindTime"}))
      .addField(new field().setName("exitTimeCorrect").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"exitTime equals Viewpoint1 bindTime"}))
      .addField(new field().setName("enterTimeIncorrect").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Error: enterTime NOT equal to Viewpoint2 bindTime"}))
      .addField(new field().setName("exitTimeIncorrect").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Error: exitTime NOT equal to Viewpoint1 "})))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("enterTime").setToNode("AVATARSCRIPT").setToField("checkEnter"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("exitTime").setToNode("AVATARSCRIPT").setToField("checkExit"))
    .addChild(new ROUTE().setFromNode("TOUCH").setFromField("isActive").setToNode("VIEW2").setToField("set_bind")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return jumpcut_proximitysensor model
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
        X3D thisExampleX3dModel = new jumpcut_proximitysensor().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.jumpcut_proximitysensor\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.jumpcut_proximitysensor\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

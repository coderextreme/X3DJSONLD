package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test browser to associate multiple entries in the level field with corresponding entries in the range field. The range field specifies three different range values that indicate at what distance to display the corresponding entry from the level field. Each entry in the level field adds a level of detail to the figure as the users avatar gets closer to the figure in question. The distance of the viewer from the object is changed by clicking on the desired buttom as indicated by the text displayed. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a displayed when the highest level of detail is selected. Other levels display a version of the same figure, but with much less details.). </p>
 <p> Related links: <a href="../../../../SpecialGroups/LOD/multiple_level.java">multiple_level.java</a> source, <a href="../../../../SpecialGroups/LOD/multiple_levelIndex.html" target="_top">multiple_level catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../SpecialGroups/LOD/multiple_level.x3d">multiple_level.x3d</a> </td>
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
			<td> Test browser to associate multiple entries in the level field with corresponding entries in the range field. The range field specifies three different range values that indicate at what distance to display the corresponding entry from the level field. Each entry in the level field adds a level of detail to the figure as the users avatar gets closer to the figure in question. The distance of the viewer from the object is changed by clicking on the desired buttom as indicated by the text displayed. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a displayed when the highest level of detail is selected. Other levels display a version of the same figure, but with much less details.) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/multiple_level.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/multiple_level.x3d</a> </td>
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
			<td> <a href="../../../../SpecialGroups/LOD/../../license.html">../../license.html</a> </td>
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

public class multiple_level
{
	/** Default constructor to create this object. */
	public multiple_level ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("multiple_level.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test browser to associate multiple entries in the level field with corresponding entries in the range field. The range field specifies three different range values that indicate at what distance to display the corresponding entry from the level field. Each entry in the level field adds a level of detail to the figure as the users avatar gets closer to the figure in question. The distance of the viewer from the object is changed by clicking on the desired buttom as indicated by the text displayed. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a displayed when the highest level of detail is selected. Other levels display a version of the same figure, but with much less details.)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/multiple_level.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("multiple_level.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Group()
      .addChild(new Viewpoint("the-view").setDescription("user avatar position").setPosition(0.0,0.0,64.0)))
    .addChild(new Transform("big-trans1").setTranslation(0.0,0.0,54.0)
      .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(-5.4,-2.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))
          .setGeometry(new Text().setString(new String[] {"CLICK DESIRED LEVEL OF DETAIL BELOW"})
            .setFontStyle(new FontStyle("the-style").setSize(29).setCssStyle("BOLD")))))
      .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(-4.8,-2.7,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("the-appearance")
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))
          .setGeometry(new Text().setString(new String[] {"LOWEST (0 0 64)"})
            .setFontStyle(new FontStyle().setUSE("the-style"))))
        .addChild(new TouchSensor("the-touch1").setDescription("touch to activate 1")))
      .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(-4.8,-3.4,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("the-appearance"))
          .setGeometry(new Text().setString(new String[] {"MEDIUM LOW (0 0 48)"})
            .setFontStyle(new FontStyle().setUSE("the-style"))))
        .addChild(new TouchSensor("the-touch2").setDescription("touch to activate 2")))
      .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(1.0,-2.7,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("the-appearance"))
          .setGeometry(new Text().setString(new String[] {"MEDIUM (0 0 32)"})
            .setFontStyle(new FontStyle().setUSE("the-style"))))
        .addChild(new TouchSensor("the-touch3").setDescription("touch to activate 3")))
      .addChild(new Transform().setScale(0.02,0.02,0.02).setTranslation(1.0,-3.4,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance().setUSE("the-appearance"))
          .setGeometry(new Text().setString(new String[] {"HIGHEST (0 0 16)"})
            .setFontStyle(new FontStyle().setUSE("the-style"))))
        .addChild(new TouchSensor("the-touch4").setDescription("touch to activate 4"))))
    .addChild(new TimeSensor("time1").setCycleInterval(2))
    .addChild(new TimeSensor("time2").setCycleInterval(2))
    .addChild(new TimeSensor("time3").setCycleInterval(2))
    .addChild(new TimeSensor("time4").setCycleInterval(2))
    .addChild(new PositionInterpolator("first-position").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,64.0,0.0,0.0,64.0})))
    .addChild(new PositionInterpolator("second-position").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,48.0,0.0,0.0,48.0})))
    .addChild(new PositionInterpolator("third-position").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,32.0,0.0,0.0,32.0})))
    .addChild(new PositionInterpolator("fourth-position").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,16.0,0.0,0.0,16.0})))
    .addChild(new PositionInterpolator("text1").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,54.0,0.0,0.0,54.0})))
    .addChild(new PositionInterpolator("text2").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,38.0,0.0,0.0,38.0})))
    .addChild(new PositionInterpolator("text3").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,22.0,0.0,0.0,22.0})))
    .addChild(new PositionInterpolator("text4").setKey(new double[] {0.0,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,6.0,0.0,0.0,6.0})))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,0.15)
      .addChild(new LOD().setRange(new double[] {17.0,33.0,49.0})
        .addChild(new Inline().setUrl(new String[] {"ref1.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.x3d","ref1.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.wrl"}))
        .addChild(new Inline().setUrl(new String[] {"ref2.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref2.x3d","ref2.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref2.wrl"}))
        .addChild(new Inline().setUrl(new String[] {"ref3.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref3.x3d","ref3.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref3.wrl"}))
        .addChild(new Inline().setUrl(new String[] {"ref4.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref4.x3d","ref4.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref4.wrl"}))))
    .addChild(new ROUTE().setFromNode("the-touch1").setFromField("touchTime").setToNode("time1").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-touch2").setFromField("touchTime").setToNode("time2").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-touch3").setFromField("touchTime").setToNode("time3").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-touch4").setFromField("touchTime").setToNode("time4").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("time1").setFromField("fraction_changed").setToNode("first-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time2").setFromField("fraction_changed").setToNode("second-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time3").setFromField("fraction_changed").setToNode("third-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time4").setFromField("fraction_changed").setToNode("fourth-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("first-position").setFromField("value_changed").setToNode("the-view").setToField("position"))
    .addChild(new ROUTE().setFromNode("second-position").setFromField("value_changed").setToNode("the-view").setToField("position"))
    .addChild(new ROUTE().setFromNode("third-position").setFromField("value_changed").setToNode("the-view").setToField("position"))
    .addChild(new ROUTE().setFromNode("fourth-position").setFromField("value_changed").setToNode("the-view").setToField("position"))
    .addChild(new ROUTE().setFromNode("time1").setFromField("fraction_changed").setToNode("text1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time2").setFromField("fraction_changed").setToNode("text2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time3").setFromField("fraction_changed").setToNode("text3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("time4").setFromField("fraction_changed").setToNode("text4").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("text1").setFromField("value_changed").setToNode("big-trans1").setToField("translation"))
    .addChild(new ROUTE().setFromNode("text2").setFromField("value_changed").setToNode("big-trans1").setToField("translation"))
    .addChild(new ROUTE().setFromNode("text3").setFromField("value_changed").setToNode("big-trans1").setToField("translation"))
    .addChild(new ROUTE().setFromNode("text4").setFromField("value_changed").setToNode("big-trans1").setToField("translation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return multiple_level model
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
        X3D thisExampleX3dModel = new multiple_level().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.multiple_level\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.multiple_level\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

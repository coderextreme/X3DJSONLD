package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
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
 * <p> Test browser ability to dynamically activate and deactivate backgrounds. Three backgrounds are defined in the local coordinate system. The first one is active by default. After clicking on the text The test should send a false event to the first background and a true event to the second background. This should push the first background from the top of the stack and make background 2 the current active background. Then a true event is sent to the third background and a false event is sent to the second background. That should activate background number 3. The test catches the true events sent by each background. After a false event is sent to background number 3, then background number 1 should be activated by default, The test can be started by clicking on the text below the geometry. </p>
 <p> Related links: <a href="../../../../BindableNodes/Background/test_binding5.java">test_binding5.java</a> source, <a href="../../../../BindableNodes/Background/test_binding5Index.html" target="_top">test_binding5 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../BindableNodes/Background/test_binding5.x3d">test_binding5.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../BindableNodes/Background/test-binding5-movie.mpg">test-binding5-movie.mpg</a> </td>
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
			<td> Test browser ability to dynamically activate and deactivate backgrounds. Three backgrounds are defined in the local coordinate system. The first one is active by default. After clicking on the text The test should send a false event to the first background and a true event to the second background. This should push the first background from the top of the stack and make background 2 the current active background. Then a true event is sent to the third background and a false event is sent to the second background. That should activate background number 3. The test catches the true events sent by each background. After a false event is sent to background number 3, then background number 1 should be activated by default, The test can be started by clicking on the text below the geometry. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/test_binding5.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/test_binding5.x3d</a> </td>
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
			<td> <a href="../../../../BindableNodes/Background/../../license.html">../../license.html</a> </td>
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

public class test_binding5
{
	/** Default constructor to create this object. */
	public test_binding5 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("test_binding5.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("test-binding5-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test browser ability to dynamically activate and deactivate backgrounds. Three backgrounds are defined in the local coordinate system. The first one is active by default. After clicking on the text The test should send a false event to the first background and a true event to the second background. This should push the first background from the top of the stack and make background 2 the current active background. Then a true event is sent to the third background and a false event is sent to the second background. That should activate background number 3. The test catches the true events sent by each background. After a false event is sent to background number 3, then background number 1 should be activated by default, The test can be started by clicking on the text below the geometry."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/test_binding5.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("test_binding5.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Group()
      .addChild(new Viewpoint("the-view").setDescription("Front View").setPosition(0.0,0.0,20.0)))
    .addChild(new Background("sky-back1").setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setBackUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}).setBottomUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}).setFrontUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}).setLeftUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}).setRightUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}).setTopUrl(new String[] {"sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"}))
    .addChild(new Background("sky-back2").setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setBackUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}).setBottomUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}).setFrontUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}).setLeftUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}).setRightUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}).setTopUrl(new String[] {"sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"}))
    .addChild(new Background("sky-back3").setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setBackUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}).setBottomUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}).setFrontUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}).setLeftUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}).setRightUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}).setTopUrl(new String[] {"mt-corcoran.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-corcoran.jpg"}))
    .addChild(new Transform().setTranslation(0.5,7.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("the-material1").setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Background 1 sending true Event"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))))
    .addChild(new Transform().setTranslation(0.5,6.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("the-material2").setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Background 2 sending true Event"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))))
    .addChild(new Transform().setTranslation(0.5,5.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("the-material3").setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Background 3 sending true Event"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))))
    .addChild(new Transform().setScale(0.04,0.04,0.04).setTranslation(0.5,0.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("the-material5").setDiffuseColor(1.0,0.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"CLICK HERE TO START"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(32).setCssStyle("BOLD"))))
      .addChild(new TouchSensor("the-touch").setDescription("touch to activate")))
    .addChild(new TimeSensor("timer1").setCycleInterval(5))
    .addChild(new TimeSensor("timer2").setCycleInterval(5))
    .addChild(new TimeSensor("timer3").setCycleInterval(5).setEnabled(false))
    .addChild(new TimeSensor("timer4").setCycleInterval(5))
    .addChild(new TimeSensor("timer5").setCycleInterval(5).setEnabled(false))
    .addChild(new ColorInterpolator("colors1").setKey(new double[] {0.0,0.25,0.5,0.75,0.85,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0})))
    .addChild(new ColorInterpolator("colors2").setKey(new double[] {0.0,0.25,0.5,0.75,0.85,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0})))
    .addChild(new ColorInterpolator("colors3").setKey(new double[] {0.0,0.25,0.5,0.75,0.85,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0})))
    .addChild(new Script("delay_timer2-3").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"function time_in (the_value)" + "\n" + 
"{" + "\n" + 
"	time_later = the_value + 6;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("time_in").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("time_later").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Script("delay_timer4").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"function time_in (the_value)" + "\n" + 
"{" + "\n" + 
"	time_later = the_value + 10;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("time_in").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("time_later").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("timer1").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("timer1").setFromField("fraction_changed").setToNode("colors1").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("colors1").setFromField("value_changed").setToNode("the-material1").setToField("diffuseColor"))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("delay_timer2-3").setToField("time_in"))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("delay_timer4").setToField("time_in"))
    .addChild(new ROUTE().setFromNode("delay_timer2-3").setFromField("time_later").setToNode("timer2").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("timer2").setFromField("isActive").setToNode("sky-back2").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("delay_timer2-3").setFromField("time_later").setToNode("timer3").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("sky-back2").setFromField("isBound").setToNode("timer3").setToField("enabled"))
    .addChild(new ROUTE().setFromNode("timer3").setFromField("fraction_changed").setToNode("colors2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("colors2").setFromField("value_changed").setToNode("the-material2").setToField("diffuseColor"))
    .addChild(new ROUTE().setFromNode("delay_timer4").setFromField("time_later").setToNode("timer4").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("timer4").setFromField("isActive").setToNode("sky-back3").setToField("set_bind"))
    .addChild(new ROUTE().setFromNode("delay_timer4").setFromField("time_later").setToNode("timer5").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("sky-back3").setFromField("isBound").setToNode("timer5").setToField("enabled"))
    .addChild(new ROUTE().setFromNode("timer5").setFromField("fraction_changed").setToNode("colors3").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("colors3").setFromField("value_changed").setToNode("the-material3").setToField("diffuseColor")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return test_binding5 model
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
        X3D thisExampleX3dModel = new test_binding5().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.test_binding5\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.test_binding5\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test of loop equals true, and the startTime less than stopTime. The chime sound will play until stopTime is reached. Clicking on the "Start" button sets startTime to "now". Simultaneously, stopTime is set to ("now" + 12 seconds). As a result, the sound will cycle for 2 complete loops (a total of 10 seconds), then setop 2 seconds into the third loop. If the "Stop" button is pressed any time before stopTime is reached, the sound should stop instantly. </p>
 <p> Related links: <a href="../../../../Sounds/AudioClip/startltstoplooptrue.java">startltstoplooptrue.java</a> source, <a href="../../../../Sounds/AudioClip/startltstoplooptrueIndex.html" target="_top">startltstoplooptrue catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sounds/AudioClip/startltstoplooptrue.x3d">startltstoplooptrue.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Sounds/AudioClip/startltstoplooptrue-movie.mpg">startltstoplooptrue-movie.mpg</a> </td>
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
			<td> Test of loop equals true, and the startTime less than stopTime. The chime sound will play until stopTime is reached. Clicking on the "Start" button sets startTime to "now". Simultaneously, stopTime is set to ("now" + 12 seconds). As a result, the sound will cycle for 2 complete loops (a total of 10 seconds), then setop 2 seconds into the third loop. If the "Stop" button is pressed any time before stopTime is reached, the sound should stop instantly. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startltstoplooptrue.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startltstoplooptrue.x3d</a> </td>
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
			<td> <a href="../../../../Sounds/AudioClip/../../license.html">../../license.html</a> </td>
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

public class startltstoplooptrue
{
	/** Default constructor to create this object. */
	public startltstoplooptrue ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("startltstoplooptrue.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("startltstoplooptrue-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test of loop equals true, and the startTime less than stopTime. The chime sound will play until stopTime is reached. Clicking on the \"Start\" button sets startTime to \"now\". Simultaneously, stopTime is set to (\"now\" + 12 seconds). As a result, the sound will cycle for 2 complete loops (a total of 10 seconds), then setop 2 seconds into the third loop. If the \"Stop\" button is pressed any time before stopTime is reached, the sound should stop instantly."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startltstoplooptrue.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("startltstoplooptrue.x3d"))
    .addChild(new Viewpoint().setDescription("entry viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(1000.0,1000.0,1000.0))
    .addChild(new Sound()
      .setSource(new AudioClip("MYSOUND").setDescription("chimes").setLoop(true).setStartTime(2).setStopTime(4).setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Transform().setScale(0.5,0.5,0.5)
      .addChild(new Transform().setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("PHONOCOLOR")))
          .setGeometry(new Box().setSize(3.0,1.5,3.0))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-2.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("HORNCOLOR")))
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1,0,0.92388,0.382683,0.707107,0.707106,0.382684,0.923879,1.26759e-006,1,-0.382682,0.92388,-0.707105,0.707108,-0.923879,0.382685,-1,2.53518e-006,-0.923881,-0.382681,-0.707109,-0.707105,-0.382687,-0.923878,-3.80277e-006,-1.0,0.38268,-0.923881,0.707104,-0.70711,0.923878,-0.382688,1.0,0.0})).setEndCap(false).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {2.2,2.2,1.8,1.8,1.4,1.4,1.2,1.2,1.0,1.0,0.8,0.8,0.6,0.6,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.2,0.2,0.0001,0.0001})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.4,0.0,0.0,-1.22137,0.0,0.0,-1.01245,0.0,0.0,-0.819601,0.0,0.0,-0.626754,0.0,0.0,-0.401765,0.0,0.0,-0.204459,0.0,0.0,-0.0164327,0.0,0.0,0.176777,0.0,0.0,0.380511,0.0,0.0,0.578542,0.0,0.0,0.819601,0.0,0.0,0.996378,0.0,0.0,1.8,0.0,0.0,1.2,0.0}))))))
    .addChild(new Transform("START_TRANS")
      .addChild(new Transform().setTranslation(-3.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("GOMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("START").setSize(1.0,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.35,-0.1,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Start"})
              .setFontStyle(new FontStyle().setSize(0.4))))))
      .addChild(new TouchSensor("TOUCHSTART").setDescription("touch to start"))
      .addChild(new TimeSensor("GOTIMER"))
      .addChild(new ColorInterpolator("GOFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0}))))
    .addChild(new Transform("STOP_TRANS")
      .addChild(new Transform().setTranslation(3.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("STOPMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Box("STOP").setSize(1.0,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.55,-0.1,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Stop"})
              .setFontStyle(new FontStyle().setSize(0.4))))))
      .addChild(new TouchSensor("TOUCHSTOP").setDescription("touch to stop"))
      .addChild(new TimeSensor("STOPTIMER"))
      .addChild(new ColorInterpolator("STOPFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0}))))
    .addChild(new Script("SOUND_SCRIPT").setDirectOutput(true).setUrl(new String[] {"startltstoplooptrue.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startltstoplooptrue.js"})
      .addField(new field().setName("mySound").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new AudioClip().setUSE("MYSOUND")))
      .addField(new field().setName("phonoColor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("PHONOCOLOR")))
      .addField(new field().setName("hornColor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("HORNCOLOR")))
      .addField(new field().setName("yellow").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.75,0.75,0.00)))
      .addField(new field().setName("white").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.80,0.80,0.80)))
      .addField(new field().setName("colorPhonograph").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("TOUCHSTART").setFromField("touchTime").setToNode("MYSOUND").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TOUCHSTART").setFromField("touchTime").setToNode("SOUND_SCRIPT").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("TOUCHSTOP").setFromField("touchTime").setToNode("MYSOUND").setToField("set_stopTime"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("START_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("START_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("STOP_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("STOP_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("MYSOUND").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorPhonograph"))
    .addChild(new ROUTE().setFromNode("TOUCHSTART").setFromField("touchTime").setToNode("GOTIMER").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("GOTIMER").setFromField("fraction_changed").setToNode("GOFLASH").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("GOFLASH").setFromField("value_changed").setToNode("GOMATERIAL").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("TOUCHSTOP").setFromField("touchTime").setToNode("STOPTIMER").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("STOPTIMER").setFromField("fraction_changed").setToNode("STOPFLASH").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("STOPFLASH").setFromField("value_changed").setToNode("STOPMATERIAL").setToField("set_diffuseColor")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return startltstoplooptrue model
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
        X3D thisExampleX3dModel = new startltstoplooptrue().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.startltstoplooptrue\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.startltstoplooptrue\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

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
 * <p> This world tests an AudioClip pitch range of 0.5, 1 and 2.0 to determine if the browser correctly alters sound octave as well as sound duration time. Three AudioClip node, each with a different "pitch" value are in this world. Each can be selected by the viewer clicking on the appropriate button at the top of the world. Clicking on "Pitch 0.5" should produce a chime sound that lasts 10 seconds, and is one octave lower than that of "Pitch 1". Selecting "Pitch 1" (the default pitch) should produce a chime sound that lasts 5 seconds, and is one octave higher than "Pitch 0.5". Selecting "Pitch 2" should produce a chime sound that is one octave higher than the default (1), and has a duration of 2.5 seconds. </p>
 <p> Related links: <a href="../../../../Sounds/AudioClip/pitchrange.java">pitchrange.java</a> source, <a href="../../../../Sounds/AudioClip/pitchrangeIndex.html" target="_top">pitchrange catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sounds/AudioClip/pitchrange.x3d">pitchrange.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Sounds/AudioClip/pitchrange-movie.mpg">pitchrange-movie.mpg</a> </td>
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
			<td> This world tests an AudioClip pitch range of 0.5, 1 and 2.0 to determine if the browser correctly alters sound octave as well as sound duration time. Three AudioClip node, each with a different "pitch" value are in this world. Each can be selected by the viewer clicking on the appropriate button at the top of the world. Clicking on "Pitch 0.5" should produce a chime sound that lasts 10 seconds, and is one octave lower than that of "Pitch 1". Selecting "Pitch 1" (the default pitch) should produce a chime sound that lasts 5 seconds, and is one octave higher than "Pitch 0.5". Selecting "Pitch 2" should produce a chime sound that is one octave higher than the default (1), and has a duration of 2.5 seconds. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.x3d</a> </td>
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

public class pitchrange
{
	/** Default constructor to create this object. */
	public pitchrange ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("pitchrange.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("pitchrange-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This world tests an AudioClip pitch range of 0.5, 1 and 2.0 to determine if the browser correctly alters sound octave as well as sound duration time. Three AudioClip node, each with a different \"pitch\" value are in this world. Each can be selected by the viewer clicking on the appropriate button at the top of the world. Clicking on \"Pitch 0.5\" should produce a chime sound that lasts 10 seconds, and is one octave lower than that of \"Pitch 1\". Selecting \"Pitch 1\" (the default pitch) should produce a chime sound that lasts 5 seconds, and is one octave higher than \"Pitch 0.5\". Selecting \"Pitch 2\" should produce a chime sound that is one octave higher than the default (1), and has a duration of 2.5 seconds."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("pitchrange.x3d"))
    .addChild(new Viewpoint().setDescription("entry viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(1000.0,1000.0,1000.0))
    .addChild(new Sound()
      .setSource(new AudioClip("MYSOUND1").setDescription("chimes pitch x0.5").setPitch(0.5).setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Sound()
      .setSource(new AudioClip("MYSOUND2").setDescription("chimes").setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Sound()
      .setSource(new AudioClip("MYSOUND3").setDescription("chimes pitch x2").setPitch(2).setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Transform().setScale(0.5,0.5,0.5)
      .addChild(new Transform().setTranslation(0.0,-2.25,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("PHONOCOLOR")))
          .setGeometry(new Box().setSize(3.0,1.5,3.0))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-2.5).setTranslation(0.0,-0.25,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("HORNCOLOR")))
          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1,0,0.92388,0.382683,0.707107,0.707106,0.382684,0.923879,1.26759e-006,1,-0.382682,0.92388,-0.707105,0.707108,-0.923879,0.382685,-1,2.53518e-006,-0.923881,-0.382681,-0.707109,-0.707105,-0.382687,-0.923878,-3.80277e-006,-1.0,0.38268,-0.923881,0.707104,-0.70711,0.923878,-0.382688,1.0,0.0})).setEndCap(false).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {2.2,2.2,1.8,1.8,1.4,1.4,1.2,1.2,1.0,1.0,0.8,0.8,0.6,0.6,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.4,0.2,0.2,0.0001,0.0001})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,-1.4,0.0,0.0,-1.22137,0.0,0.0,-1.01245,0.0,0.0,-0.819601,0.0,0.0,-0.626754,0.0,0.0,-0.401765,0.0,0.0,-0.204459,0.0,0.0,-0.0164327,0.0,0.0,0.176777,0.0,0.0,0.380511,0.0,0.0,0.578542,0.0,0.0,0.819601,0.0,0.0,0.996378,0.0,0.0,1.8,0.0,0.0,1.2,0.0}))))))
    .addChild(new Transform("PITCH_HALF_TRANS")
      .addChild(new Transform().setTranslation(-3.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("HALFMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("HALF").setSize(1.0,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.35,-0.1,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Pitch","0.5"})
              .setFontStyle(new FontStyle().setSize(0.4))))))
      .addChild(new TouchSensor("TOUCHHALF").setDescription("touch for half-speed pitch"))
      .addChild(new TimeSensor("HALFTIMER"))
      .addChild(new ColorInterpolator("HALFFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0}))))
    .addChild(new Transform("PITCH_DEFAULT_TRANS")
      .addChild(new Transform().setTranslation(0.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("DEFAULTMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,1.0,0.0)))
          .setGeometry(new Box("DEFAULT").setSize(1.0,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.35,-0.1,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Pitch","1"})
              .setFontStyle(new FontStyle().setSize(0.4))))))
      .addChild(new TouchSensor("TOUCHDEFAULT").setDescription("touch for default-speed pitch"))
      .addChild(new TimeSensor("DEFAULTTIMER"))
      .addChild(new ColorInterpolator("DEFAULTFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,1.0,1.0,0.0}))))
    .addChild(new Transform("TWO_TRANS")
      .addChild(new Transform().setTranslation(3.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("TWOMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Box("TWO").setSize(1.0,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.55,-0.1,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Pitch","2"})
              .setFontStyle(new FontStyle().setSize(0.4))))))
      .addChild(new TouchSensor("TOUCHTWO").setDescription("touch for double-speed pitch"))
      .addChild(new TimeSensor("TWOTIMER"))
      .addChild(new ColorInterpolator("TWOFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0}))))
    .addChild(new Script("SOUND_SCRIPT").setDirectOutput(true).setUrl(new String[] {"pitchrange.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.js"})
      .addField(new field().setName("phonoColor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("PHONOCOLOR")))
      .addField(new field().setName("hornColor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("HORNCOLOR")))
      .addField(new field().setName("yellow").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.75,0.75,0.00)))
      .addField(new field().setName("white").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.80,0.80,0.80)))
      .addField(new field().setName("colorPhonograph").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("TOUCHHALF").setFromField("touchTime").setToNode("MYSOUND1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TOUCHDEFAULT").setFromField("touchTime").setToNode("MYSOUND2").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TOUCHTWO").setFromField("touchTime").setToNode("MYSOUND3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("PITCH_HALF_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("PITCH_HALF_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("PITCH_DEFAULT_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("PITCH_DEFAULT_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TWO_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TWO_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("MYSOUND1").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorPhonograph"))
    .addChild(new ROUTE().setFromNode("MYSOUND2").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorPhonograph"))
    .addChild(new ROUTE().setFromNode("MYSOUND3").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorPhonograph"))
    .addChild(new ROUTE().setFromNode("TOUCHHALF").setFromField("touchTime").setToNode("HALFTIMER").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("HALFTIMER").setFromField("fraction_changed").setToNode("HALFFLASH").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("HALFFLASH").setFromField("value_changed").setToNode("HALFMATERIAL").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("TOUCHDEFAULT").setFromField("touchTime").setToNode("DEFAULTTIMER").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("DEFAULTTIMER").setFromField("fraction_changed").setToNode("DEFAULTFLASH").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("DEFAULTFLASH").setFromField("value_changed").setToNode("DEFAULTMATERIAL").setToField("set_diffuseColor"))
    .addChild(new ROUTE().setFromNode("TOUCHTWO").setFromField("touchTime").setToNode("TWOTIMER").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("TWOTIMER").setFromField("fraction_changed").setToNode("TWOFLASH").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("TWOFLASH").setFromField("value_changed").setToNode("TWOMATERIAL").setToField("set_diffuseColor")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return pitchrange model
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
        X3D thisExampleX3dModel = new pitchrange().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.pitchrange\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.pitchrange\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

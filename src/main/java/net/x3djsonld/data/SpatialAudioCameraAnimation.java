package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.java">SpatialAudioCameraAnimation.java</a> source, <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimationIndex.html" target="_top">SpatialAudioCameraAnimation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/SpatialAudioCameraAnimation.x3d">SpatialAudioCameraAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 28 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 April 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CHANGELOG.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> credit for audio files </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.medialab.teicrete.gr/minipages/x3domAudio" target="_blank">http://www.medialab.teicrete.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../AudioSpatialSound/../license.html">../license.html</a> </td>
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

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

public class SpatialAudioCameraAnimation
{
	/** Default constructor to create this object. */
	public SpatialAudioCameraAnimation ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SpatialAudioCameraAnimation.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 October 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 April 2021"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("credit for audio files"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.medialab.teicrete.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setHtmlID("NAV"))
    .addChild(new Background().setBackUrl(new String[] {"images/generic/BK1.png"}).setBottomUrl(new String[] {"images/generic/DN1.png"}).setFrontUrl(new String[] {"images/generic/FR1.png"}).setLeftUrl(new String[] {"images/generic/LF1.png"}).setRightUrl(new String[] {"images/generic/RT1.png"}).setTopUrl(new String[] {"images/generic/UP1.png"}))
    .addChild(new Viewpoint("Camera001").setDescription("Camera001").setJump(TRUE).setOrientation(1.000000,0.000000,-0.000000,-0.523599).setPosition(0.000000,2000.000000,3500.000000).setZFar("0"
// [*** X3dToJava.xslt error: encountered incorrect type, Viewpoint zFar: $isNumeric=true, $attributeType=, value='0']
).setZNear("1.000000"
// [*** X3dToJava.xslt error: encountered incorrect type, Viewpoint zNear: $isNumeric=true, $attributeType=, value='1.000000']
))
    .addChild(new TimeSensor("TIMER").setCycleInterval(33.333332).setLoop(TRUE))
    .addChild(new PositionInterpolator("Camera001-POS-INTERP").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,2000.0,3500.0,0.0,2000.0,0.0,0.0,2000.0,-3500.0,0.0,2000.0,0.0,0.0,2000.0,3500.0})))
    .addChild(new OrientationInterpolator("Camera001-ROT-INTERP").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {1.000000,0.000000,-0.000000,-0.523599,0.999990,0.003554,0.002727,-1.309007,0.000000,-0.965926,-0.258819,-3.141593,0.002282,-0.793351,-0.608760,-3.135645,1.000000,-0.000001,-0.000000,-0.523599})))
    .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Camera001-POS-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_position"))
    .addChild(new ROUTE().setFromNode("TIMER").setFromField("fraction_changed").setToNode("Camera001-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Camera001-ROT-INTERP").setFromField("value_changed").setToNode("Camera001").setToField("set_orientation"))
    .addChild(new Transform("Floor").setTranslation(1.241,0.000,0.358)
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor")
          .setMaterial(new Material().setDiffuseColor(0.122,0.114,0.125)))
        .setBox(new box().setSize("2000 1 2000"
// [*** X3dToJava.xslt error: encountered incorrect type, box size: $isNumeric=true, $attributeType=, value='2000 1 2000']
))))
    .addChild(new Transform("Audio1").setTranslation(-933.123474,0.000000,-926.253235)
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor_1")
          .setMaterial(new Material().setDiffuseColor(0.690196,0.101961,0.101961)))
        .setSphere(new sphere().setRadius(100)))
      .addChild(new Billboard()
        .addChild(new Transform("violin").setRotation(1.0,0.0,0.0,-0.5).setScale(100.0,100.0,100.0).setTranslation(0.0,100.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.345,0.345,0.882))
              .setMaterial(new Material().setAmbientintensity("0.0933"
// [*** X3dToJava.xslt error: encountered incorrect type, Material ambientintensity: $isNumeric=true, $attributeType=, value='0.0933']
).setDiffusecolor("1 1 1"
// [*** X3dToJava.xslt error: encountered incorrect type, Material diffusecolor: $isNumeric=true, $attributeType=, value='1 1 1']
).setEmissivecolor("0 0 0"
// [*** X3dToJava.xslt error: encountered incorrect type, Material emissivecolor: $isNumeric=true, $attributeType=, value='0 0 0']
).setShininess(0.51).setSpecularcolor("0.46 0.46 0.46"
// [*** X3dToJava.xslt error: encountered incorrect type, Material specularcolor: $isNumeric=true, $attributeType=, value='0.46 0.46 0.46']
)))
            .setGeometry(new Text().setCcw(true).setLit("true"
// [*** X3dToJava.xslt error: encountered incorrect type, Text lit: $isNumeric=false, $attributeType=, value='true']
).setString(new String[] {"Violin"}).setUsegeocache("true"
// [*** X3dToJava.xslt error: encountered incorrect type, Text usegeocache: $isNumeric=false, $attributeType=, value='true']
)
              .setFontstyle(new fontstyle().setFamily("'Times'"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle family: $isNumeric=false, $attributeType=, value=''Times'']
).setHorizontal("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle horizontal: $isNumeric=false, $attributeType=, value='true']
).setJustify("BEGIN"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle justify: $isNumeric=false, $attributeType=, value='BEGIN']
).setLefttoright("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle lefttoright: $isNumeric=false, $attributeType=, value='true']
).setSize("1"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle size: $isNumeric=true, $attributeType=, value='1']
).setSpacing("1"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle spacing: $isNumeric=true, $attributeType=, value='1']
).setCssStyle("BOLD").setToptobottom("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle toptobottom: $isNumeric=false, $attributeType=, value='true']
)))))))
    .addChild(new Transform("Audio2").setTranslation(933.475586,0.000000,924.423218)
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor_2")
          .setMaterial(new Material().setDiffuseColor(0.105882,0.694118,0.580392)))
        .setSphere(new sphere().setRadius(100)))
      .addChild(new Billboard()
        .addChild(new Transform("saxophone").setRotation(1.0,0.0,0.0,-0.5).setScale(100.0,100.0,100.0).setTranslation(0.0,100.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.345,0.345,0.882))
              .setMaterial(new Material().setAmbientintensity("0.0933"
// [*** X3dToJava.xslt error: encountered incorrect type, Material ambientintensity: $isNumeric=true, $attributeType=, value='0.0933']
).setDiffusecolor("1 1 1"
// [*** X3dToJava.xslt error: encountered incorrect type, Material diffusecolor: $isNumeric=true, $attributeType=, value='1 1 1']
).setEmissivecolor("0 0 0"
// [*** X3dToJava.xslt error: encountered incorrect type, Material emissivecolor: $isNumeric=true, $attributeType=, value='0 0 0']
).setShininess(0.51).setSpecularcolor("0.46 0.46 0.46"
// [*** X3dToJava.xslt error: encountered incorrect type, Material specularcolor: $isNumeric=true, $attributeType=, value='0.46 0.46 0.46']
)))
            .setGeometry(new Text().setCcw(true).setLit("true"
// [*** X3dToJava.xslt error: encountered incorrect type, Text lit: $isNumeric=false, $attributeType=, value='true']
).setString(new String[] {"Saxophone"}).setUsegeocache("true"
// [*** X3dToJava.xslt error: encountered incorrect type, Text usegeocache: $isNumeric=false, $attributeType=, value='true']
)
              .setFontstyle(new fontstyle().setFamily("'Times'"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle family: $isNumeric=false, $attributeType=, value=''Times'']
).setHorizontal("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle horizontal: $isNumeric=false, $attributeType=, value='true']
).setJustify("BEGIN"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle justify: $isNumeric=false, $attributeType=, value='BEGIN']
).setLefttoright("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle lefttoright: $isNumeric=false, $attributeType=, value='true']
).setSize("1"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle size: $isNumeric=true, $attributeType=, value='1']
).setSpacing("1"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle spacing: $isNumeric=true, $attributeType=, value='1']
).setCssStyle("BOLD").setToptobottom("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle toptobottom: $isNumeric=false, $attributeType=, value='true']
)))))))
    .addChild(new ListenerPoint().setHtmlID("ListenerPoint").setTrackCurrentView(true))
    .addChild(new AudioDestination().setHtmlID("AudioDestination")
      .addChild(new SpatialSound().setUSE("Audio1").setConeInnerAngle(360).setConeOuterAngle(0).setDistanceModel("linear").setEnableHRTF(true).setHtmlID("SpatialSound1").setMaxDistance(3500)
        .addChild(new Gain().setHtmlID("Gain1")
          .setSource(new AudioClip().setHtmlID("AudioClip1").setLoop(true).setPauseTime(-1).setResumeTime(-1).setStopTime(-1).setUrl(new String[] {"sound/violin.mp3"}))))
      .addChild(new SpatialSound().setUSE("Audio2").setConeInnerAngle(360).setConeOuterAngle(0).setDistanceModel("linear").setEnableHRTF(true).setHtmlID("SpatialSound2").setMaxDistance(3500)
        .addChild(new Gain().setHtmlID("Gain2")
          .setSource(new AudioClip().setHtmlID("AudioClip2").setLoop(true).setPauseTime(-1).setResumeTime(-1).setStopTime(-1).setUrl(new String[] {"sound/saxophone.mp3"}))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SpatialAudioCameraAnimation model
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
        X3D thisExampleX3dModel = new SpatialAudioCameraAnimation().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SpatialAudioCameraAnimation\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SpatialAudioCameraAnimation\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

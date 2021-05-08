package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/SplitChannels.java">SplitChannels.java</a> source, <a href="../../../AudioSpatialSound/SplitChannelsIndex.html" target="_top">SplitChannels catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/SplitChannels.x3d">SplitChannels.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner. </td>
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
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d</a> </td>
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

public class SplitChannels
{
	/** Default constructor to create this object. */
	public SplitChannels ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SplitChannels.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 October 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 April 2021"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("credit for audio files"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.medialab.teicrete.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setId("NAV"
// [*** X3dToJava.xslt error: encountered incorrect type, NavigationInfo id: $isNumeric=false, $attributeType=, value='NAV']
).setType("NONE"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.200,0.200,0.210})))
    .addChild(new Viewpoint().setBind("true"
// [*** X3dToJava.xslt error: encountered incorrect type, Viewpoint bind: $isNumeric=false, $attributeType=, value='true']
).setOrientation(1.0,0.0,0.0,-0.5).setPosition(0.0,500.0,600.0).setRetainUserOffsets(true))
    .addChild(new Transform("PowerR").setTranslation(100.0,400.0,400.0)
      .addChild(new Transform().setId("pR"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform id: $isNumeric=false, $attributeType=, value='pR']
).setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmmisiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry(new Box().setSize(10.0,80.0,0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.5).setTranslation(-2.7,37.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmmisiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/line.png"})))
          .setGeometry(new Box().setSize(25.0,83.0,0.01))))
      .addChild(new Transform("volumeRight").setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
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
).setString(new String[] {"Right Channel Volume"}).setUsegeocache("true"
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
).setStyle("BOLD"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle style: $isNumeric=false, $attributeType=, value='BOLD']
).setToptobottom("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle toptobottom: $isNumeric=false, $attributeType=, value='true']
))))))
    .addChild(new Transform("PowerL").setTranslation(-100.0,400.0,400.0)
      .addChild(new Transform().setId("pL"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform id: $isNumeric=false, $attributeType=, value='pL']
).setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,40.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmmisiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01)))
          .setGeometry(new Box().setSize(10.0,80.0,0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.5).setTranslation(13.2,37.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance("audio_emit")
            .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0).setEmmisiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
            .setTexture(new ImageTexture().setUrl(new String[] {"images/line.png"})))
          .setGeometry(new Box().setSize(25.0,83.0,0.01))))
      .addChild(new Transform("volumeLeft").setRotation(1.0,0.0,0.0,-0.5).setScale(10.0,10.0,10.0).setTranslation(0.0,-10.0,0.0)
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
).setString(new String[] {"Left Channel Volume"}).setUsegeocache("true"
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
).setStyle("BOLD"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle style: $isNumeric=false, $attributeType=, value='BOLD']
).setToptobottom("true"
// [*** X3dToJava.xslt error: encountered incorrect type, fontstyle toptobottom: $isNumeric=false, $attributeType=, value='true']
))))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance("floor")
          .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1).setShininess(0.8).setSpecularColor(0.5,0.6,0.7)))
        .setGeometry(new Box().setSize(1500.0,10.0,500.0))))
    .addChild(new ListenerPoint().setId("ListenerPoint"
// [*** X3dToJava.xslt error: encountered incorrect type, ListenerPoint id: $isNumeric=false, $attributeType=, value='ListenerPoint']
).setTrackCurrentView(true))
    .addChild(new AudioDestination().setId("AudioDestination"
// [*** X3dToJava.xslt error: encountered incorrect type, AudioDestination id: $isNumeric=false, $attributeType=, value='AudioDestination']
)
      .addChild(new Gain().setId("Gain3"
// [*** X3dToJava.xslt error: encountered incorrect type, Gain id: $isNumeric=false, $attributeType=, value='Gain3']
)
        .addChild(new ChannelMerger().setId("ChannelMerger"
// [*** X3dToJava.xslt error: encountered incorrect type, ChannelMerger id: $isNumeric=false, $attributeType=, value='ChannelMerger']
)
          .addChild(new ChannelSelector().setId("ChannelSelector0"
// [*** X3dToJava.xslt error: encountered incorrect type, ChannelSelector id: $isNumeric=false, $attributeType=, value='ChannelSelector0']
)
            .addChild(new Gain().setUSE("ChannelSplitter").setId("Gain0"
// [*** X3dToJava.xslt error: encountered incorrect type, Gain id: $isNumeric=false, $attributeType=, value='Gain0']
)))
          .addChild(new ChannelSelector().setChannelSelection(1).setId("ChannelSelector1"
// [*** X3dToJava.xslt error: encountered incorrect type, ChannelSelector id: $isNumeric=false, $attributeType=, value='ChannelSelector1']
)
            .addChild(new Gain().setUSE("ChannelSplitter").setId("Gain1"
// [*** X3dToJava.xslt error: encountered incorrect type, Gain id: $isNumeric=false, $attributeType=, value='Gain1']
))))))
    .addChild(new ChannelSplitter("ChannelSplitter").setChannelCountMode("explicit").setId("ChannelSplitter"
// [*** X3dToJava.xslt error: encountered incorrect type, ChannelSplitter id: $isNumeric=false, $attributeType=, value='ChannelSplitter']
)
      .setSource(new AudioClip().setUSE("Audio3").setId("AudioClip"
// [*** X3dToJava.xslt error: encountered incorrect type, AudioClip id: $isNumeric=false, $attributeType=, value='AudioClip']
).setLoop(true).setPauseTime(-1).setResumeTime(-1).setStopTime(-1).setUrl(new String[] {"sound/violin.mp3"})))
    .addChild(new Transform("Audio3").setRotation(1.0,0.0,0.0,-0.5).setTranslation(0.0,100.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance("audio_emit")
          .setMaterial(new Material().setDiffuseColor(0.3,1.0,0.3).setEmmisiveColor(0.8,0.8,0.8).setSpecularColor(0.01,0.01,0.01))
          .setTexture(new ImageTexture().setUrl(new String[] {"images/loudspeaker.png"})))
        .setGeometry(new Box().setSize(100.0,100.0,0.001)))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SplitChannels model
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
        X3D thisExampleX3dModel = new SplitChannels().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SplitChannels\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SplitChannels\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working. </p>
 <p> Related links: <a href="../../../AudioSpatialSound/AllAudioGraphNodesTest.java">AllAudioGraphNodesTest.java</a> source, <a href="../../../AudioSpatialSound/AllAudioGraphNodesTestIndex.html" target="_top">AllAudioGraphNodesTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/AllAudioGraphNodesTest.x3d">AllAudioGraphNodesTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 October 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 26 November 2021 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Developmental test, no actual 3D model expected </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d</a> </td>
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

	* @author Don Brutzman
 */

public class AllAudioGraphNodesTest
{
	/** Default constructor to create this object. */
	public AllAudioGraphNodesTest ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AllAudioGraphNodesTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 October 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("26 November 2021"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Developmental test, no actual 3D model expected"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("AllAudioGraphNodes.x3d"))
    .addChild(new Shape()
      .setGeometry(new Box())
      .setAppearance(new Appearance()
        .setAcousticProperties(new AcousticProperties().setDescription("Testing of X3D4 nodes demonstrating W3C Audio API in progress").setDiffuse(0.25).setRefraction(0.5).setSpecular(1))
        .setMaterial(new Material())))
    .addChild(new Sound().setLocation(0.0,1.6,0.0)
      .setSource(new AudioClip().setDescription("testing").setUrl(new String[] {"sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"})))
    .addChild(new Sound().setLocation(0.0,1.6,0.0)
      .setSource(new MovieTexture().setDescription("testing").setUrl(new String[] {"bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"})))
    .addChild(new SpatialSound().setDistanceModel("INVERSE")
      .addChild(new Analyser().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
        .addChild(new StreamAudioDestination().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
          .addChild(new BiquadFilter().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS").setType("LOWPASS")
            .addChild(new ChannelMerger().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
              .addChild(new ChannelSelector().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                .addChild(new ChannelSplitter().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                  .addChild(new Convolver().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                    .addChild(new Delay().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                      .addChild(new DynamicsCompressor().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                        .addChild(new Gain().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                          .addChild(new StreamAudioDestination().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                            .addChild(new WaveShaper().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS")
                              .addComments(" The following X3DSoundSourceNode nodes have no audio-graph children ")
                              .addChild(new BufferAudioSource().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS"))
                              .addChild(new ListenerPointSource())
                              .addChild(new MicrophoneSource())
                              .addChild(new OscillatorSource().setFrequency(440.0))
                              .addChild(new StreamAudioSource().setChannelCountMode("MAX").setChannelInterpretation("SPEAKERS"))))))))))))))));
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
	 * @return AllAudioGraphNodesTest model
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
        X3D thisExampleX3dModel = new AllAudioGraphNodesTest().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.AllAudioGraphNodesTest\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
                System.out.print("Java program \"net.x3djsonld.data.AllAudioGraphNodesTest\" self-validation test results: ");
                String validationResults = thisExampleX3dModel.validationReport();
                if (validationResults.startsWith("\n") || (validationResults.length() > 10))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

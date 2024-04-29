package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </p>
 <p> Related links: Catalog page <a href="../../../AudioSpatialSound/InlineSoundSourceIndex.html" target="_blank">InlineSoundSource</a>,  source <a href="../../../AudioSpatialSound/InlineSoundSource.java">InlineSoundSource.java</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../AudioSpatialSound/InlineSoundSource.x3d">InlineSoundSource.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file. </td>
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
			<td> 4 August 2021 </td>
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
			<td> <a href="https://medialab.hmu.gr/minipages/x3domAudio" target="_blank">https://medialab.hmu.gr/minipages/x3domAudio</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman
 */

public class InlineSoundSource
{
	/** Default constructor to create this object. */
	public InlineSoundSource ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("InlineSoundSource.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("28 October 2020"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("4 August 2021"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CHANGELOG.txt"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("credit for audio files"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://medialab.hmu.gr/minipages/x3domAudio"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("InlineSoundSource.x3d"))
    .addChild(new NavigationInfo("NAV"))
    .addChild(new Background().setBackUrl(new String[] {"images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"}).setBottomUrl(new String[] {"images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"}).setFrontUrl(new String[] {"images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"}).setLeftUrl(new String[] {"images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"}).setRightUrl(new String[] {"images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"}).setTopUrl(new String[] {"images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"}))
    .addChild(new Viewpoint("Camera001").setDescription("Camera001").setFarDistance(0).setNearDistance(1.000000).setOrientation(1.000000,0.000000,-0.000000,-0.523599).setPosition(0.000000,2000.000000,3500.000000))
    .addChild(new Transform("Floor").setTranslation(1.241,0.000,0.358)
      .addChild(new Shape()
        .setAppearance(new Appearance("WireColor")
          .setMaterial(new Material().setDiffuseColor(0.122,0.114,0.125)))
        .setGeometry(new IndexedFaceSet("Box001-GEOMETRY").setDEF("Box001-GEOMETRY").setSolid(false).setCoordIndex(new int[] {0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1})
          .setCoord(new Coordinate().setPoint(getCoordinate_6_20_point()))
          .setNormal(new Normal().setVector(new MFVec3f(new double[] {0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000,-1.000000,0.000000,0.000000}))))))
    .addChild(new Transform("InlineScene")
      .addChild(new Inline("inline").setUrl(new String[] {"x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"}))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Large attribute array: Coordinate point field, scene-graph level=6, element #20, 108 total numbers made up of 36 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_20_point()
		{
			MFVec3f Coordinate_6_20_point = new MFVec3f(new double[] {-1000.000000,0.000000,1000.000000,-1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,0.000000,1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,8.031588,1000.000000,1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,0.000000,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,8.031588,1000.000000,1000.000000,0.000000,1000.000000,1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,-1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,8.031588,-1000.000000,1000.000000,8.031588,-1000.000000,1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,-1000.000000,-1000.000000,0.000000,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,1000.000000,-1000.000000,8.031588,-1000.000000,-1000.000000,0.000000,-1000.000000});
			return Coordinate_6_20_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return InlineSoundSource model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new InlineSoundSource().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.InlineSoundSource\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.InlineSoundSource self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

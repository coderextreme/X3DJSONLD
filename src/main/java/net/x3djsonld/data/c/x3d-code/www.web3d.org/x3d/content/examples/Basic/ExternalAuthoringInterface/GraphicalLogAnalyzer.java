package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Graphical Log Analyzer (GLA) reads data from a file to create a visualization - load the GraphicalLogAnalyzerDisplay HTML page to test functionality. </p>
 <p> Related links: <a href="../../../ExternalAuthoringInterface/GraphicalLogAnalyzer.java">GraphicalLogAnalyzer.java</a> source, <a href="../../../ExternalAuthoringInterface/GraphicalLogAnalyzerIndex.html" target="_top">GraphicalLogAnalyzer catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/GraphicalLogAnalyzer.x3d">GraphicalLogAnalyzer.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> example </i> </td>
			<td> GraphicalLogAnalyzerDisplay.html </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Graphical Log Analyzer (GLA) reads data from a file to create a visualization - load the GraphicalLogAnalyzerDisplay HTML page to test functionality. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> requires External Authoring Interface (EAI) as implemented by Cortona. File read/display functionality only works when running in Netscape. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Lindsey Lack </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 2 May 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development. VRML 97 EAI support appears inconsistent for various browsers. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> GraphicalLogAnalyzer.ppt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/GraphicalLogAnalyzer.java">GraphicalLogAnalyzer.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/javadoc/index.html">javadoc/index.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> GraphicalLogAnalyzerInputFile.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> GraphicalLogAnalyzerReadme.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Some values used from CreateVrmlFromString sample by Vincent Gardet (modified by Curt Blais). Also see vrmlcity CreateVrmlFromString tutorial. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/../course/CreateVrmlFromStringRandomBoxes.wrl">../course/CreateVrmlFromStringRandomBoxes.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/../course/CreateVrmlFromStringRandomBoxes.x3d">../course/CreateVrmlFromStringRandomBoxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/../course/CreateVrmlFromStringRandomBoxes.html">../course/CreateVrmlFromStringRandomBoxes.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.gardet.nom.fr/vrmlcity/tut_cvfs.htm" target="_blank">http://www.gardet.nom.fr/vrmlcity/tut_cvfs.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.parallelgraphics.com/developer/products/cortona/eai" target="_blank">http://www.parallelgraphics.com/developer/products/cortona/eai</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ExternalAuthoringInterface/GraphicalLogAnalyzer.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ExternalAuthoringInterface/GraphicalLogAnalyzer.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../ExternalAuthoringInterface/../license.html">../license.html</a> </td>
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

	* @author Lindsey Lack
 */

public class GraphicalLogAnalyzer
{
	/** Default constructor to create this object. */
	public GraphicalLogAnalyzer ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("GraphicalLogAnalyzer.x3d"))
    .addMeta(new meta().setName("example").setContent("GraphicalLogAnalyzerDisplay.html"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Graphical Log Analyzer (GLA) reads data from a file to create a visualization - load the GraphicalLogAnalyzerDisplay HTML page to test functionality."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("requires External Authoring Interface (EAI) as implemented by Cortona. File read/display functionality only works when running in Netscape."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Lindsey Lack"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("2 May 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Under development. VRML 97 EAI support appears inconsistent for various browsers."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GraphicalLogAnalyzer.ppt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GraphicalLogAnalyzer.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("javadoc/index.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GraphicalLogAnalyzerInputFile.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GraphicalLogAnalyzerReadme.txt"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Some values used from CreateVrmlFromString sample by Vincent Gardet (modified by Curt Blais). Also see vrmlcity CreateVrmlFromString tutorial."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("../course/CreateVrmlFromStringRandomBoxes.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("../course/CreateVrmlFromStringRandomBoxes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("../course/CreateVrmlFromStringRandomBoxes.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.gardet.nom.fr/vrmlcity/tut_cvfs.htm"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.parallelgraphics.com/developer/products/cortona/eai"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/ExternalAuthoringInterface/GraphicalLogAnalyzer.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("GraphicalLogAnalyzer.x3d"))
    .addChild(new NavigationInfo().setHeadlight(false).setSpeed(5))
    .addChild(new Background().setSkyAngle(new double[] {1.1,1.57}).setSkyColor(new MFColor(new double[] {.3,.3,1.0,.4,.4,1.0,.7,.7,.9})))
    .addChild(new DirectionalLight().setDirection(0.0,-.5,-1.0))
    .addChild(new DirectionalLight().setDirection(-1.0,-.5,.5).setIntensity(.7))
    .addChild(new DirectionalLight().setDirection(1.0,-.5,.5).setIntensity(.7))
    .addChild(new Viewpoint().setDescription("Entry").setPosition(0.0,1.2,5.0))
    .addChild(new Viewpoint().setDescription("Overview").setOrientation(1.0,0.0,0.0,-.37).setPosition(0.0,5.0,4.0))
    .addChild(new Viewpoint().setDescription("Down").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,8.0,-2.0))
    .addChild(new Transform().setTranslation(0.0,0.0,-490.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setAmbientIntensity(.25).setDiffuseColor(.14,.14,.16).setShininess(.072).setSpecularColor(.39,.46,.52).setTransparency(.1)))
        .setGeometry(new Box().setSize(10.0,0.01,1000.0))))
    .addChild(new Group()
      .addChild(new Transform("ROOT"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return GraphicalLogAnalyzer model
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
        X3D thisExampleX3dModel = new GraphicalLogAnalyzer().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.GraphicalLogAnalyzer\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.GraphicalLogAnalyzer\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

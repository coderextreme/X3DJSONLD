package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Verify renderability of png image textures using a Box. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/TestImages.java">TestImages.java</a> source, <a href="../../../DistributedInteractiveSimulation/TestImagesIndex.html" target="_top">TestImages catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/TestImages.x3d">TestImages.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 January 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Verify renderability of png image textures using a Box. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/TestCube.x3d">TestCube.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestImages.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestImages.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

public class TestImages
{
	/** Default constructor to create this object. */
	public TestImages ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TestImages.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("20 January 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Verify renderability of png image textures using a Box."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("TestCube.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestImages.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TestImages.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.8,0.8,0.9})))
    .addChild(new Viewpoint().setDescription("Front view").setOrientation(0.0,1.0,0.0,1.57).setPosition(8.0,0.0,0.0))
    .addChild(new Switch("BoxSwitcher").setWhichChoice(-1)
      .addChild(new Shape()
        .setGeometry(new Box("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/front.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/front.png"}))))
      .addChild(new Shape()
        .setGeometry(new Box().setUSE("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/back.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/back.png"}))))
      .addChild(new Shape()
        .setGeometry(new Box().setUSE("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/left.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/left.png"}))))
      .addChild(new Shape()
        .setGeometry(new Box().setUSE("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/right.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/right.png"}))))
      .addChild(new Shape()
        .setGeometry(new Box().setUSE("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/top.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/top.png"}))))
      .addChild(new Shape()
        .setGeometry(new Box().setUSE("UnitBox"))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"images/bottom.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/bottom.png"})))))
    .addChild(new TimeSensor("Clock").setCycleInterval(12).setLoop(true))
    .addChild(new IntegerSequencer("Sequencer").setKey(new double[] {0.0,0.1667,0.3333,0.5,0.6667,0.8333,1.0}).setKeyValue(new int[] {0,1,2,3,4,5,0}))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Sequencer").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Sequencer").setFromField("value_changed").setToNode("BoxSwitcher").setToField("whichChoice"))
    .addChild(new Viewpoint().setDescription("Back view").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-8.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Left view").setPosition(0.0,0.0,8.0))
    .addChild(new Viewpoint().setDescription("Right view").setOrientation(0.0,1.0,0.0,3.1416).setPosition(0.0,0.0,-8.0))
    .addChild(new Viewpoint().setDescription("Top view").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,8.0,0.0))
    .addChild(new Viewpoint().setDescription("Bottom view").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-8.0,0.0)));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TestImages model
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
        X3D thisExampleX3dModel = new TestImages().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TestImages\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TestImages\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

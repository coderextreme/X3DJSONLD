package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> MV4472 example demonstration of the effects of backspin on baseball trajectory, communicated via DIS ESPDUs. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/BaseballBackspin.java">BaseballBackspin.java</a> source, <a href="../../../DistributedInteractiveSimulation/BaseballBackspinIndex.html" target="_top">BaseballBackspin catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/BaseballBackspin.x3d">BaseballBackspin.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> MV4472 example demonstration of the effects of backspin on baseball trajectory, communicated via DIS ESPDUs. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Victor Spears and David Back </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BaseballBackspin/run.bat </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BaseballBackspin/compile.bat </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> BaseballBackspin/compile.out </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter17-Textures/Figure17.04dTextureSphereTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter17-Textures/Figure17.04dTextureSphereTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin.x3d</a> </td>
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

	* @author Victor Spears and David Back
 */

public class BaseballBackspin
{
	/** Default constructor to create this object. */
	public BaseballBackspin ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BaseballBackspin.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("MV4472 example demonstration of the effects of backspin on baseball trajectory, communicated via DIS ESPDUs."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Victor Spears and David Back"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("14 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BaseballBackspin/run.bat"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BaseballBackspin/compile.bat"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("BaseballBackspin/compile.out"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter17-Textures/Figure17.04dTextureSphereTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BaseballBackspin.x3d"))
    .addChild(new Viewpoint().setDescription("Texture test on a basic shape").setOrientation(0.0,1.0,0.0,1.57).setPosition(25.0,1.0,0.0))
    .addChild(new EspduTransform().setAddress("224.0.0.3").setMarking("Baseball").setNetworkMode("networkReader").setPort(64200).setSiteID(3).setWriteInterval(0)
      .addChild(new Transform("ballThing")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"BaseballBackspin/testimg.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/testimg.jpg"})))
          .setGeometry(new Sphere().setRadius(.1)))
        .addChild(new Viewpoint().setDescription("Top ball").setOrientation(1.0,0.0,0.0,-90.0).setPosition(0.0,10.0,-3.5))
        .addChild(new Viewpoint().setDescription("Behind ball").setOrientation(0.0,1.0,0.0,-90.0).setPosition(-4.0,0.0,0.0))
        .addChild(new Viewpoint().setDescription("Front Ball").setOrientation(0.0,1.0,0.0,90.0).setPosition(4.0,0.0,0.0))))
    .addComments(" <Sound maxBack=\"1000\" maxFront=\"1000\" minBack=\"1\" minFront=\"1\"> <AudioClip loop=\"true\" url=\"sound.wav\"/> </Sound> ")
    .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setTranslation(8.9,0.0,0.0)
      .addChild(new Shape("Path")
        .setGeometry(new Cylinder().setHeight(17.8).setRadius(0.005))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.55).setScale(0.9,0.25,0.7).setTranslation(-0.4,-6.8,0.0)
      .addChild(new Shape("Pitcher")
        .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,10.0,0.0,0.0,10.0,10.0,0.0,0.0,10.0,0.0,0.0,0.0}))))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"BaseballBackspin/pitch.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/pitch.jpg"})))))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.55).setScale(0.7,0.9,1.3).setTranslation(18.0,-10.75,3.0)
      .addChild(new Shape("Catcher")
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,10.0,10.0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,0.0,10.0}))))
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"BaseballBackspin/backstop.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/backstop.jpg"})))))
    .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.5).setTranslation(18.0,-6.8,-20.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"BaseballBackspin/diamond.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/BaseballBackspin/diamond.jpg"})))
        .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {0,1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {40.0,0.0,40.0,40.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,40.0}))))))
    .addChild(new Background().setGroundAngle(new double[] {0.1,1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0,0.0,0.1,0.3,0.0,0.2,0.5,0.0,0.3,0.8})).setSkyAngle(new double[] {0.1,0.15,1.309,1.571}).setSkyColor(new MFColor(new double[] {0.4,0.4,0.1,0.4,0.4,0.1,0.0,0.1,0.3,0.0,0.2,0.6,0.8,0.8,0.8})).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_back.jpg","mountains_2_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_bottom.jpg","mountains_2_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_front.jpg","mountains_2_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_left.jpg","mountains_2_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_right.jpg","mountains_2_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/mountains_2_top.jpg","mountains_2_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/mountains_2_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/mountains_2_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/mountains_2_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/mountains_2_top.jpg"})));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BaseballBackspin model
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
        X3D thisExampleX3dModel = new BaseballBackspin().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BaseballBackspin\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BaseballBackspin\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

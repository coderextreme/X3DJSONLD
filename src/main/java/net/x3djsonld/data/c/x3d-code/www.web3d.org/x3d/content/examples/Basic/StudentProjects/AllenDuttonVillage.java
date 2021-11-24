package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Primitive village. Move mouse over the hut roofs to see a demonstration of sensors and interpolators. </p>
 <p> Related links: <a href="../../../StudentProjects/AllenDuttonVillage.java">AllenDuttonVillage.java</a> source, <a href="../../../StudentProjects/AllenDuttonVillageIndex.html" target="_top">AllenDuttonVillage catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/AllenDuttonVillage.x3d">AllenDuttonVillage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> LT Allen Dutton </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 February 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Primitive village. Move mouse over the hut roofs to see a demonstration of sensors and interpolators </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/AllenDuttonVillage.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/AllenDuttonVillage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author LT Allen Dutton
 */

public class AllenDuttonVillage
{
	/** Default constructor to create this object. */
	public AllenDuttonVillage ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AllenDuttonVillage.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("LT Allen Dutton"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 February 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Primitive village. Move mouse over the hut roofs to see a demonstration of sensors and interpolators"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/AllenDuttonVillage.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("AllenDuttonVillage.x3d"))
    .addChild(new Viewpoint().setDescription("View from 80m away").setOrientation(-1.0,0.0,0.0,0.5).setPosition(0.0,60.0,100.0))
    .addChild(new Viewpoint().setDescription("Default viewpoint at (0 0 10) is way too close!! That is a bad place to be, provide a replacement viewpoint instead."))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.0,0.0,.7})))
    .addChild(new DirectionalLight().setColor(1.0,1.0,0.8).setDirection(0.0,-1.0,0.0).setIntensity(0.5))
    .addChild(new Group()
      .addChild(new Transform().setTranslation(0.0,-3.5,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,.7,0.0))
            .setTexture(new ImageTexture("grass").setUrl(new String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"}))
            .setTextureTransform(new TextureTransform().setScale(20.0,20.0)))
          .setGeometry(new Box().setSize(160.0,1.0,160.0)))))
    .addChild(new Group()
      .addChild(new Transform().setRotation(0.0,1.0,0.0,2.7).setScale(0.01,0.01,0.01).setTranslation(5.0,12.3,30.0)
        .addChild(new Inline().setUrl(new String[] {"ALLEN.WRL","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ALLEN.WRL"})))
      .addChild(new Transform().setTranslation(5.0,0.0,30.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(5.0,5.0,5.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.5))))))
    .addChild(new Group("HUT")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("BROWN").setDiffuseColor(0.5,0.4,0.3))
          .setTexture(new ImageTexture("wood").setUrl(new String[] {"wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"}))
          .setTextureTransform(new TextureTransform().setRotation(1.57079).setScale(1.0,4.0)))
        .setGeometry(new Cylinder().setBottom(false).setHeight(6).setRadius(4).setTop(false)))
      .addChild(new Transform("ROOF_TRANSFORM").setTranslation(0.0,4.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("YELLOW").setDiffuseColor(0.8,0.8,0.0))
            .setTexture(new ImageTexture("straw").setUrl(new String[] {"straw.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/straw.jpg"})))
          .setGeometry(new Cone().setBottomRadius(6).setHeight(4)))
        .addChild(new TouchSensor("MyTouchSensor").setDescription("raise the roof")))
      .addChild(new TimeSensor("CLOCK").setCycleInterval(4).setEnabled(false).setLoop(true))
      .addChild(new OrientationInterpolator("RoofRotateInterpolator").setKey(new double[] {0.0,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28})))
      .addChild(new PositionInterpolator("RoofTranslateInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,4.0,0.0,0.0,8.0,0.0,0.0,4.0,0.0}))))
    .addChild(new Group("CONE_TREE")
      .addChild(new Transform().setTranslation(10.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("BROWN"))
            .setTexture(new ImageTexture().setUSE("wood")))
          .setGeometry(new Cylinder().setBottom(false).setHeight(6).setRadius(0.5).setTop(false))))
      .addChild(new Transform().setTranslation(10.0,3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,.3,0.0))
            .setTexture(new ImageTexture("leaves").setUrl(new String[] {"leaves.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/leaves.jpg"})))
          .setGeometry(new Cone().setBottomRadius(2).setHeight(6)))))
    .addChild(new Group("SPHERE_TREE")
      .addChild(new Transform().setTranslation(-30.0,0.0,-3.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("BROWN"))
            .setTexture(new ImageTexture().setUSE("wood")))
          .setGeometry(new Cylinder().setBottom(false).setHeight(6).setRadius(0.5).setTop(false))))
      .addChild(new Transform().setTranslation(-30.0,6.0,-3.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,.3,0.0))
            .setTexture(new ImageTexture().setUSE("leaves")))
          .setGeometry(new Sphere().setRadius(3.5)))))
    .addChild(new Group()
      .addChild(new Transform().setScale(.8,1.0,.8).setTranslation(-45.0,0.0,10.0)
        .addChild(new Group().setUSE("HUT"))
        .addChild(new Transform().setTranslation(0.0,11.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Visitor's","Center"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(5.0).setCssStyle("BOLDITALIC")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.8,0.1,0.4)))))))
    .addChild(new Group()
      .addChild(new Transform().setScale(1.5,1.0,1.5).setTranslation(30.0,0.0,20.0)
        .addChild(new Group().setUSE("HUT"))
        .addChild(new Transform().setTranslation(1.0,8.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Chief's Hut"})
              .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(4.0).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.8,0.1,0.4)))))))
    .addChild(new Group()
      .addChild(new Transform().setScale(.5,1.0,.5).setTranslation(-10.0,0.0,20.0)
        .addChild(new Group().setUSE("HUT"))
        .addChild(new Transform().setTranslation(0.0,24.0,0.0)
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {"Outhouse"})
              .setFontStyle(new FontStyle().setFamily(new String[] {"SANS"}).setHorizontal(false).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(5.0).setCssStyle("BOLD")))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.8,0.1,0.4)))))))
    .addChild(new Group()
      .addChild(new Transform().setScale(0.5,1.0,0.5).setTranslation(30.0,0.0,30.0)
        .addChild(new Group().setUSE("SPHERE_TREE"))))
    .addChild(new Group()
      .addChild(new Transform().setScale(2.0,1.0,2.0).setTranslation(-45.0,0.0,30.0)
        .addChild(new Group().setUSE("CONE_TREE"))))
    .addChild(new ROUTE().setFromNode("MyTouchSensor").setFromField("isOver").setToNode("CLOCK").setToField("set_enabled"))
    .addChild(new ROUTE().setFromNode("CLOCK").setFromField("fraction_changed").setToNode("RoofRotateInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RoofRotateInterpolator").setFromField("value_changed").setToNode("ROOF_TRANSFORM").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("CLOCK").setFromField("fraction_changed").setToNode("RoofTranslateInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RoofTranslateInterpolator").setFromField("value_changed").setToNode("ROOF_TRANSFORM").setToField("set_translation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return AllenDuttonVillage model
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
        X3D thisExampleX3dModel = new AllenDuttonVillage().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.AllenDuttonVillage\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.AllenDuttonVillage\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

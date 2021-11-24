package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D. </p>
 <p> Related links: <a href="../../../development/AllVrml97Nodes.java">AllVrml97Nodes.java</a> source, <a href="../../../development/AllVrml97NodesIndex.html" target="_top">AllVrml97Nodes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/AllVrml97Nodes.x3d">AllVrml97Nodes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 January 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

public class AllVrml97Nodes
{
	/** Default constructor to create this object. */
	public AllVrml97Nodes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AllVrml97Nodes.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 January 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo("WORLDINFO").setTitle("VRML test scene: x3d/content/AllVrml97Nodes.wrl"))
    .addChild(new WorldInfo("DTD_TAGSET_CANDIDATES"))
    .addChild(new WorldInfo("Xj3D_BUGS_AND_ISSUES"))
    .addChild(new WorldInfo("Xj3D_FIXES"))
    .addChild(new WorldInfo("XEENA_BUGS_AND_ISSUES"))
    .addChild(new WorldInfo("XEENA_FIXES"))
    .addChild(new Background("BACKGROUND").setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})))
    .addChild(new Fog("FOG"))
    .addChild(new NavigationInfo("NAVIGATIONINFO").setType("\"EXAMINE\" \"WALK\" \"ANY\" \"FLY\""))
    .addChild(new Viewpoint("VIEWPOINT"))
    .addChild(new Anchor("ANCHOR")
      .addChild(new Billboard("Billboard")
        .addChild(new Shape("SHAPE_BOX")
          .setGeometry(new Box("BOX"))
          .setAppearance(new Appearance("APPEARANCE")
            .setTexture(new ImageTexture("IMAGETEXTURE").setUrl(new String[] {"../icons/cube.gif","https://www.web3d.org/x3d/content/examples/Basic/development/../icons/cube.gif"}))
            .setMaterial(new Material("MATERIAL")))))
      .addChild(new Collision("COLLISION")
        .addChild(new Group("PROXY_GROUP")
          .addChild(new Shape("PROXY_SHAPE")
            .setGeometry(new Box("PROXY_BOX"))))
        .addChild(new Shape("SHAPE_CONE")
          .setGeometry(new Cone("CONE"))
          .setAppearance(new Appearance())))
      .addChild(new Group("GROUP")
        .addChild(new Shape("SHAPE_CYLINDER")
          .setGeometry(new Cylinder("CYLINDER"))
          .setAppearance(new Appearance())))
      .addChild(new Inline("INLINE").setUrl(new String[] {"inlineTestFileOne.wrl","inlineTestFileTwo.wrl","inlineTestFileEmbedding%20Blanks%20In%20Name.wrl"}))
      .addChild(new Inline("INLINE_HELLO_WORLD").setUrl(new String[] {"HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"}))
      .addChild(new LOD("LOD").setRange(new double[] {1.0})
        .addChild(new Shape("SHAPE_ELEVATIONGRID")
          .setGeometry(new ElevationGrid("ELEVATIONGRID").setHeight(new double[] {1.0,2.0,3.0,4.0}))
          .setAppearance(new Appearance().setUSE("APPEARANCE")))
        .addChild(new Shape("SHAPE_EXTRUSION")
          .setGeometry(new Extrusion("EXTRUSION").setCrossSection(new MFVec2f(new double[] {1.0,1.0,1.0,-1.0,-1.0,-1.0,-1.0,1.0,1.0,1.0})).setScale(new MFVec2f(new double[] {1.0,1.0,1.0,1.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,1.0,0.0})))
          .setAppearance(new Appearance().setUSE("APPEARANCE"))))
      .addChild(new Switch("SWITCH").setWhichChoice(-1)
        .addChild(new Shape("SHAPE_TEXTURETRANSFORM_INDEXEDFACESET")
          .setGeometry(new IndexedFaceSet("INDEXEDFACESET").setDEF("INDEXEDFACESET").setColorIndex(new int[] {0,1,0,1}).setCoordIndex(new int[] {0,1,2,3}).setNormalIndex(new int[] {0,1,2,3}).setTexCoordIndex(new int[] {0,1,2,3})
            .setColor(new Color("COLOR").setColor(new MFColor(new double[] {1.0,0.0,0.0,0.0,1.0,0.0})))
            .setCoord(new Coordinate("COORDINATE").setPoint(new MFVec3f(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0})))
            .setNormal(new Normal("NORMAL").setVector(new MFVec3f(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0})))
            .setTexCoord(new TextureCoordinate("TEXTURECOORDINATE").setPoint(new MFVec2f(new double[] {0.1,0.1,0.9,0.1,0.9,0.9,0.1,0.9}))))
          .setAppearance(new Appearance("APPEARANCE_TEXTURETRANSFORM")
            .setTexture(new ImageTexture().setUSE("IMAGETEXTURE"))
            .setMaterial(new Material())
            .setTextureTransform(new TextureTransform("TEXTURETRANSFORM").setCenter(0.5,0.5))))
        .addChild(new Shape("SHAPE_INDEXEDLINESET")
          .setGeometry(new IndexedLineSet("INDEXEDLINESET").setDEF("INDEXEDLINESET").setColorIndex(new int[] {0,1,0,1}).setCoordIndex(new int[] {0,1,2,3})
            .setCoord(new Coordinate().setUSE("COORDINATE"))
            .setColor(new Color().setUSE("COLOR")))
          .setAppearance(new Appearance().setUSE("APPEARANCE")))
        .addChild(new Shape("SHAPE_POINTSET")
          .setGeometry(new PointSet("POINTSET")
            .setColor(new Color().setUSE("COLOR"))
            .setCoord(new Coordinate().setUSE("COORDINATE")))
          .setAppearance(new Appearance().setUSE("APPEARANCE")))
        .addChild(new Shape("SHAPE_MOVIETEXTURE")
          .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}))))
          .setAppearance(new Appearance())))
      .addChild(new Transform("TRANSFORM")
        .addChild(new Shape("SHAPE_SPHERE")
          .setGeometry(new Sphere("SPHERE"))
          .setAppearance(new Appearance().setUSE("APPEARANCE")))
        .addChild(new Shape("SHAPE_TEXT")
          .setGeometry(new Text("TEXT").setString(new String[] {" first line of text","second line of text"})
            .setFontStyle(new FontStyle("FONTSTYLE")))
          .setAppearance(new Appearance().setUSE("APPEARANCE"))))
      .addChild(new Sound("SOUND")
        .setSource(new AudioClip("AUDIOCLIP").setDescription("AudioClip")))
      .addChild(new Group("GROUP_LIGHTS")
        .addChild(new DirectionalLight("DIRECTIONALLIGHT"))
        .addChild(new PointLight("POINTLIGHT"))
        .addChild(new SpotLight("SPOTLIGHT").setBeamWidth(1.570796).setCutOffAngle(.785398)))
      .addChild(new Group("GROUP_INTERPOLATORS")
        .addChild(new ColorInterpolator("COLORINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,0.0})))
        .addChild(new CoordinateInterpolator("COORDINATEINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0})))
        .addChild(new NormalInterpolator("NORMALINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0})))
        .addChild(new OrientationInterpolator("ORIENTATIONINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0})))
        .addChild(new PositionInterpolator("POSITIONINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0})))
        .addChild(new ScalarInterpolator("SCALARINTERPOLATOR").setKey(new double[] {0.0}).setKeyValue(new double[] {0.0})))
      .addChild(new Group("GROUP_SENSORS")
        .addChild(new CylinderSensor("CYLINDERSENSOR"))
        .addChild(new PlaneSensor("PLANESENSOR"))
        .addChild(new ProximitySensor("PROXIMITYSENSOR"))
        .addChild(new SphereSensor("SPHERESENSOR"))
        .addChild(new TimeSensor("TIMESENSOR"))
        .addChild(new TouchSensor("TOUCHSENSOR"))
        .addChild(new VisibilitySensor("VISIBILITYSENSOR"))))
    .addChild(new WorldInfo("Xj3D_NODE_TRANSLATION_STATUS"))
    .addChild(new ROUTE().setFromNode("TOUCHSENSOR").setFromField("isActive").setToNode("TOUCHSENSOR").setToField("enabled")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return AllVrml97Nodes model
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
        X3D thisExampleX3dModel = new AllVrml97Nodes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.AllVrml97Nodes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.AllVrml97Nodes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

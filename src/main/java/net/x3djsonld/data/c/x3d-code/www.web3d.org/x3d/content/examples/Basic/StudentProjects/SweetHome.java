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
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Model of one of the housing types in La Mesa Housing Area.The model is mostly in scale. </p>
 <p> Related links: <a href="../../../StudentProjects/SweetHome.java">SweetHome.java</a> source, <a href="../../../StudentProjects/SweetHomeIndex.html" target="_top">SweetHome catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/SweetHome.x3d">SweetHome.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001] </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Engin UZUNCAOVA </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 September 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Model of one of the housing types in La Mesa Housing Area.The model is mostly in scale. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d</a> </td>
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

	* @author La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001]
 */

public class SweetHome
{
	/** Default constructor to create this object. */
	public SweetHome ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SweetHome.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("La Mesa Military Housing Model, Engin UZUNCAOVA [August, 2001]"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Engin UZUNCAOVA"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("16 September 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Model of one of the housing types in La Mesa Housing Area.The model is mostly in scale."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHome.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SweetHome.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\""))
    .addChild(new Background().setGroundAngle(new double[] {0.1,1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0,0.0,0.1,0.3,0.0,0.2,0.5,0.0,0.3,0.8})).setSkyAngle(new double[] {0.1,0.15,1.309,1.571}).setSkyColor(new MFColor(new double[] {0.4,0.4,0.1,0.4,0.4,0.1,0.0,0.1,0.3,0.0,0.2,0.6,0.8,0.8,0.8})).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_back.jpg","ocean_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","ocean_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_front.jpg","ocean_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_left.jpg","ocean_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_right.jpg","ocean_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_top.jpg","ocean_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"}))
    .addChild(new Viewpoint().setDescription("FRONT SIDE").setOrientation(-1.0,0.02,0.0,0.25).setPosition(0.0,3.0,20.0))
    .addChild(new Viewpoint().setDescription("LEFT SIDE").setOrientation(-0.12,-0.99,-0.12,1.58).setPosition(-20.0,3.0,0.0))
    .addChild(new Viewpoint().setDescription("BACK SIDE").setOrientation(-0.0,0.99,0.12,3.14).setPosition(0.0,5.0,-20.0))
    .addChild(new Viewpoint().setDescription("RIGHT SIDE").setOrientation(-0.12,0.99,0.12,1.58).setPosition(20.0,3.0,0.0))
    .addChild(new Viewpoint().setDescription("WALKING").setPosition(2.0,1.7,10.0))
    .addChild(new LOD().setRange(new double[] {15.0})
      .addChild(new Inline().setUrl(new String[] {"SweetHomeFullDetail.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.wrl","SweetHomeFullDetail.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeFullDetail.x3d"}))
      .addChild(new Inline().setUrl(new String[] {"SweetHomeLowDetail.wrl","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.wrl","SweetHomeLowDetail.x3d","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d"})))
    .addChild(new Group("FENCE_STRUCT")
      .addChild(new Transform("FENCE").setTranslation(-8.26,1.05,-3.0)
        .addChild(new Transform("BOTTOM").setTranslation(0.905,-0.895,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance("BOTTOM_COLOR")
              .setTexture(new ImageTexture("woodTexture").setUrl(new String[] {"woodTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/woodTexture.jpg"}))
              .setMaterial(new Material().setDiffuseColor(1.0,0.6,0.2)))
            .setGeometry(new Box().setSize(1.96,0.3,0.03))))
        .addChild(new Transform("POST").setTranslation(1.96,-0.05,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("BOTTOM_COLOR"))
            .setGeometry(new Box().setSize(0.15,2.0,0.15))))
        .addChild(new Group("FENCE1")
          .addChild(new Shape()
            .setAppearance(new Appearance("WOOD_COLOR1")
              .setTexture(new ImageTexture().setUSE("woodTexture"))
              .setMaterial(new Material().setDiffuseColor(1.0,0.6,0.2)))
            .setGeometry(new Box().setSize(0.16,1.5,0.05)))
          .addChild(new Transform().setTranslation(0.0,0.749,0.0)
            .addChild(new Shape("TOP1")
              .setAppearance(new Appearance().setUSE("WOOD_COLOR1"))
              .setGeometry(new Extrusion().setCcw(false).setCrossSection(new MFVec2f(new double[] {0.08,0.025,0.08,-0.025,-0.08,-0.025,-0.08,0.025,0.08,0.025})).setScale(new MFVec2f(new double[] {1.0,1.0,0.01,1.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.1,0.0}))))))
        .addChild(new Transform().setTranslation(0.16,0.0,0.0)
          .addChild(new Group("FENCE2")
            .addChild(new Shape()
              .setAppearance(new Appearance("WOOD_COLOR2")
                .setTexture(new ImageTexture().setUSE("woodTexture"))
                .setMaterial(new Material().setDiffuseColor(1.0,0.585,0.2)))
              .setGeometry(new Box().setSize(0.16,1.5,0.03)))
            .addChild(new Transform().setTranslation(0.0,0.749,0.0)
              .addChild(new Shape("TOP2")
                .setAppearance(new Appearance().setUSE("WOOD_COLOR2"))
                .setGeometry(new Extrusion().setCcw(false).setCrossSection(new MFVec2f(new double[] {0.08,0.015,0.08,-0.015,-0.08,-0.015,-0.08,0.015,0.08,0.015})).setScale(new MFVec2f(new double[] {1.0,1.0,0.01,1.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.1,0.0})))))))
        .addChild(new Transform().setTranslation(0.31,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1")))
        .addChild(new Transform().setTranslation(0.46,0.0,0.0)
          .addChild(new Group().setUSE("FENCE2")))
        .addChild(new Transform().setTranslation(0.61,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1")))
        .addChild(new Transform().setTranslation(0.76,0.0,0.0)
          .addChild(new Group().setUSE("FENCE2")))
        .addChild(new Transform().setTranslation(0.91,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1")))
        .addChild(new Transform().setTranslation(1.06,0.0,0.0)
          .addChild(new Group().setUSE("FENCE2")))
        .addChild(new Transform().setTranslation(1.21,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1")))
        .addChild(new Transform().setTranslation(1.36,0.0,0.0)
          .addChild(new Group().setUSE("FENCE2")))
        .addChild(new Transform().setTranslation(1.51,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1")))
        .addChild(new Transform().setTranslation(1.66,0.0,0.0)
          .addChild(new Group().setUSE("FENCE2")))
        .addChild(new Transform().setTranslation(1.81,0.0,0.0)
          .addChild(new Group().setUSE("FENCE1"))))
      .addChild(new Transform("FENCE_ROTATE1").setCenter(-6.3,0.0,-3.0).setRotation(0.0,1.0,0.0,-1.57).setTranslation(-2.1,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE")))
      .addChild(new Transform().setTranslation(0.0,0.0,-1.96)
        .addChild(new Transform().setUSE("FENCE_ROTATE1")))
      .addChild(new Transform().setTranslation(0.0,0.0,-3.92)
        .addChild(new Transform().setUSE("FENCE_ROTATE1")))
      .addChild(new Transform().setTranslation(0.0,0.0,-5.88)
        .addChild(new Transform().setUSE("FENCE_ROTATE1")))
      .addChild(new Transform("FENCE_ROTATE2").setCenter(-6.3,0.0,-6.86).setRotation(0.0,1.0,0.0,-1.57).setTranslation(1.75,0.0,-2.03)
        .addChild(new Transform().setUSE("FENCE_ROTATE1")))
      .addChild(new Transform().setTranslation(1.96,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(3.92,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(5.88,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(7.84,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(9.8,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(11.76,0.0,0.0)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform("FENCE_ROTATE3").setCenter(-1.5,0.0,-4.2).setRotation(0.0,1.0,0.0,-1.57).setTranslation(0.17,0.0,0.11)
        .addChild(new Transform().setUSE("FENCE_ROTATE2")))
      .addChild(new Transform().setTranslation(0.0,0.0,2.07)
        .addChild(new Transform().setUSE("FENCE_ROTATE3")))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,0.04).setTranslation(0.45,0.0,4.38)
        .addChild(new Transform().setUSE("FENCE_ROTATE3"))))
    .addChild(new Transform("LAWN").setScale(2.0,1.0,4.0).setTranslation(0.0,0.01,0.0)
      .addChild(new Transform().setScale(2.0,1.0,2.0).setTranslation(-9.0,0.1,-6.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"lawnGrass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/lawnGrass.jpg"}))
            .setTextureTransform(new TextureTransform().setScale(160.0,80.0)))
          .setGeometry(new ElevationGrid().setCreaseAngle(0.785).setXDimension(8).setXSpacing(1.4285714).setZDimension(8).setZSpacing(0.7142857).setHeight(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0})))))
    .addChild(new Transform("TREE").setTranslation(-2.0,0.0,8.0)
      .addChild(new Shape("HALF_TREE")
        .setAppearance(new Appearance()
          .setTexture(new ImageTexture().setUrl(new String[] {"tree1.png","https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/tree1.png"})))
        .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.51,0.0,0.0,1.51,0.0,0.0,1.51,3.0,0.0,-1.51,3.0,0.0})))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,1.57)
        .addChild(new Shape().setUSE("HALF_TREE")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SweetHome model
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
        X3D thisExampleX3dModel = new SweetHome().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SweetHome\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SweetHome\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

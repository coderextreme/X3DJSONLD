package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]. </p>
 <p> Related links: <a href="../../../development/AdditiveSubtractiveLight.java">AdditiveSubtractiveLight.java</a> source, <a href="../../../development/AdditiveSubtractiveLightIndex.html" target="_top">AdditiveSubtractiveLight catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/AdditiveSubtractiveLight.x3d">AdditiveSubtractiveLight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Miriam English </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena VRML importer, X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman and MV4205 class </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 6 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/additive-subtractiveLight2.7May2003.x3d">additive-subtractiveLight2.7May2003.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.rgbworld.com/color.html" target="_blank">http://www.rgbworld.com/color.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/AdditiveSubtractiveLight.png">AdditiveSubtractiveLight.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> additive subtractive light examples </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
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

	* @author Miriam English
 */

public class AdditiveSubtractiveLight
{
	/** Default constructor to create this object. */
	public AdditiveSubtractiveLight ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AdditiveSubtractiveLight.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Miriam English"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman and MV4205 class"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("6 May 2003"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("6 May 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("additive-subtractiveLight2.7May2003.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.rgbworld.com/color.html"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("AdditiveSubtractiveLight.png"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("additive subtractive light examples"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("AdditiveSubtractiveLight.x3d"))
    .addChild(new NavigationInfo().setHeadlight(false).setType("\"EXAMINE\""))
    .addChild(new Viewpoint().setDescription("entry").setJump(false).setPosition(0.0,-1.0,14.0))
    .addChild(new Viewpoint().setDescription("side").setJump(false).setOrientation(0.0,1.0,0.0,-0.7).setPosition(-5.0,-1.0,3.0))
    .addChild(new Transform().setTranslation(-6.2,0.0,-1.0)
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-3.0,2.8,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new ElevationGrid().setXDimension(20).setXSpacing(0.3).setZDimension(20).setZSpacing(0.3).setHeight(getElevationGrid_6_24_height()))))
      .addChild(new Transform().setTranslation(0.0,-4.1,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(0.5,0.5,0.5)))
          .setGeometry(new Text().setString(new String[] {"additive","(correct)"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))))
      .addChild(new Transform().setTranslation(0.0,0.6,0.3)
        .addChild(new Transform().setTranslation(-0.6,0.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))
            .setGeometry(new Sphere().setRadius(0.2)))
          .addChild(new PointLight().setAmbientIntensity(0.5).setAttenuation(0.0,1.0,0.0).setColor(1.0,0.0,0.0)))
        .addChild(new Transform().setTranslation(0.0,-1.2,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,1.0,0.0)))
            .setGeometry(new Sphere().setRadius(0.2)))
          .addChild(new PointLight().setAmbientIntensity(0.5).setAttenuation(0.0,1.0,0.0).setColor(0.0,1.0,0.0)))
        .addChild(new Transform().setTranslation(0.6,0.0,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,0.0,1.0)))
            .setGeometry(new Sphere().setRadius(0.2)))
          .addChild(new PointLight().setAmbientIntensity(0.5).setAttenuation(0.0,1.0,0.0).setColor(0.0,0.0,1.0)))))
    .addChild(new Transform().setTranslation(3.0,-0.1,-1.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(1.0,1.0,1.0)))
        .setGeometry(new Box().setSize(13.0,6.0,0.01)))
      .addChild(new Transform().setTranslation(0.0,-4.1,0.1)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,1.0).setEmissiveColor(0.5,0.5,0.5)))
          .setGeometry(new Text().setString(new String[] {"subtractive","(incorrect)"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))))))
    .addChild(new Transform().setTranslation(-1.0,1.0,0.0)
      .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry(new Text().setString(new String[] {"diffuse only"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6)))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-0.5,0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,1.0,1.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.5,0.2,-0.01)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,0.0,1.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,-0.68,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,0.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01)))))
    .addChild(new Transform().setTranslation(2.5,1.0,0.0)
      .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry(new Text().setString(new String[] {"emissive only"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6)))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(-0.5,0.2,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(0.0,1.0,1.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.5,0.2,-0.01)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.0,1.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,-0.68,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,1.0,0.0).setShininess(0.0).setTransparency(0.5)))
          .setGeometry(new Cylinder().setHeight(0.01)))))
    .addChild(new Transform().setTranslation(6.0,1.0,0.0)
      .addChild(new Transform().setTranslation(0.0,-2.5,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry(new Text().setString(new String[] {"how it","should look","(faked)"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.6)))))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setScale(2.0,2.0,2.0)
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {3,4,5,-1,3,5,2,-1,2,5,1,-1,1,5,0,-1,0,5,13,-1,13,5,14,-1,14,5,15,-1,15,5,16,-1,16,5,17,-1,17,5,18,-1,18,5,19,-1,19,5,20,-1,20,5,21,-1,21,5,22,-1,12,23,22,-1,12,5,11,-1,11,5,10,-1,10,5,9,-1,9,5,8,-1,8,5,7,-1,5,6,7,-1,5,12,22,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0013,0.0,-0.5314,-0.1193,0.0,-0.5813,-0.2487,0.0,-0.5983,-0.3781,0.0,-0.5813,-0.4987,0.0,-0.5314,-0.6023,0.0,-0.4519,-0.6818,0.0,-0.3483,-0.7317,0.0,-0.2277,-0.7487,0.0,-0.0983,-0.7317,0.0,0.0311,-0.6818,0.0,0.1517,-0.6023,0.0,0.2552,-0.4987,0.0,0.3347,0.0029,0.0,-0.5301,-0.099,0.0,-0.4519,-0.1785,0.0,-0.3483,-0.2284,0.0,-0.2277,-0.2455,0.0,-0.0983,-0.2453,0.0,-0.0967,-0.3478,0.0,-0.018,-0.4272,0.0,0.0855,-0.4772,0.0,0.2061,-0.4942,0.0,0.3355,-0.4941,0.0,0.3366}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,0.0,1.0).setEmissiveColor(1.0,0.0,1.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {16,4,17,-1,17,6,18,-1,18,12,19,-1,19,12,20,-1,12,21,20,-1,12,18,13,-1,13,7,14,-1,8,15,14,-1,8,14,7,-1,7,18,6,-1,6,17,5,-1,5,17,4,-1,4,16,3,-1,3,16,2,-1,2,16,1,-1,1,16,0,-1,0,16,11,-1,11,16,10,-1,16,9,10,-1,18,7,13,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.7545,0.0,-0.0983,0.7375,0.0,-0.2277,0.6875,0.0,-0.3483,0.6081,0.0,-0.4519,0.5045,0.0,-0.5314,0.3839,0.0,-0.5813,0.2545,0.0,-0.5983,0.1251,0.0,-0.5813,0.0045,0.0,-0.5314,0.6081,0.0,0.2552,0.6875,0.0,0.1517,0.7375,0.0,0.0311,0.2342,0.0,-0.2277,0.1843,0.0,-0.3483,0.1048,0.0,-0.4519,0.0029,0.0,-0.5301,0.5056,0.0,0.3339,0.4887,0.0,0.2061,0.4388,0.0,0.0855,0.3593,0.0,-0.018,0.2558,0.0,-0.0975,0.2511,0.0,-0.0994}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,1.0,0.0).setEmissiveColor(1.0,1.0,0.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {12,8,13,-1,13,10,14,-1,14,19,15,-1,15,18,16,-1,18,17,16,-1,18,15,19,-1,19,14,20,-1,20,11,21,-1,21,0,22,-1,0,23,22,-1,0,21,11,-1,11,14,10,-1,10,13,9,-1,6,12,5,-1,5,12,4,-1,4,12,3,-1,3,12,2,-1,12,1,2,-1,7,8,12,-1,6,7,12,-1,8,9,13,-1,14,11,20,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.5058,0.0,0.3355,-0.4772,0.0,0.4649,-0.4272,0.0,0.5855,-0.3478,0.0,0.6891,-0.2442,0.0,0.7685,-0.1236,0.0,0.8185,0.0058,0.0,0.8355,0.1352,0.0,0.8185,0.2558,0.0,0.7685,0.3593,0.0,0.6891,0.4388,0.0,0.5855,0.4887,0.0,0.4649,-0.4941,0.0,0.3366,-0.3781,0.0,0.3846,-0.2487,0.0,0.4017,-0.1193,0.0,0.3846,0.0013,0.0,0.3347,0.0029,0.0,0.3334,0.0045,0.0,0.3347,0.1251,0.0,0.3846,0.2545,0.0,0.4017,0.3839,0.0,0.3846,0.5045,0.0,0.3347,0.5056,0.0,0.3339}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {9,8,7,-1,9,7,15,-1,15,7,12,-1,12,7,13,-1,13,7,14,-1,14,7,11,-1,4,10,11,-1,4,7,3,-1,3,7,2,-1,2,7,1,-1,1,7,0,-1,0,7,5,-1,7,6,5,-1,7,4,11,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.5056,0.0,0.3339,0.4887,0.0,0.2061,0.4388,0.0,0.0855,0.3593,0.0,-0.018,0.2558,0.0,-0.0975,0.5045,0.0,0.3347,0.3839,0.0,0.3846,0.2545,0.0,0.4017,0.1251,0.0,0.3846,0.0045,0.0,0.3347,0.2511,0.0,-0.0994,0.2513,0.0,-0.0983,0.1048,0.0,0.2552,0.1843,0.0,0.1517,0.2342,0.0,0.0311,0.0029,0.0,0.3334}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {8,1,9,-1,9,2,10,-1,10,2,11,-1,3,12,11,-1,3,11,2,-1,2,9,1,-1,1,8,0,-1,0,8,13,-1,13,8,7,-1,7,8,6,-1,6,8,5,-1,8,4,5,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.3781,0.0,0.3846,-0.2487,0.0,0.4017,-0.1193,0.0,0.3846,0.0013,0.0,0.3347,-0.3478,0.0,-0.018,-0.4272,0.0,0.0855,-0.4772,0.0,0.2061,-0.4942,0.0,0.3355,-0.2453,0.0,-0.0967,-0.2284,0.0,0.0311,-0.1785,0.0,0.1517,-0.099,0.0,0.2552,0.0029,0.0,0.3334,-0.4941,0.0,0.3366}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {1,2,11,-1,1,11,0,-1,0,11,12,-1,12,11,7,-1,7,11,8,-1,8,11,9,-1,9,11,10,-1,10,11,13,-1,13,11,6,-1,6,11,5,-1,5,11,4,-1,11,3,4,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.2342,0.0,-0.2277,0.1843,0.0,-0.3483,0.1048,0.0,-0.4519,-0.099,0.0,-0.4519,-0.1785,0.0,-0.3483,-0.2284,0.0,-0.2277,-0.2455,0.0,-0.0983,0.1352,0.0,-0.1475,0.0058,0.0,-0.1645,-0.1236,0.0,-0.1475,-0.2442,0.0,-0.0975,0.0029,0.0,-0.5301,0.2511,0.0,-0.0994,-0.2453,0.0,-0.0967}))))))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setShininess(0.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {5,6,7,-1,5,7,4,-1,4,7,13,-1,13,7,11,-1,11,7,10,-1,10,7,9,-1,9,7,8,-1,8,7,12,-1,12,7,0,-1,0,7,3,-1,3,7,2,-1,7,1,2,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.2513,0.0,-0.0983,0.1048,0.0,0.2552,0.1843,0.0,0.1517,0.2342,0.0,0.0311,-0.2284,0.0,0.0311,-0.1785,0.0,0.1517,-0.099,0.0,0.2552,0.0029,0.0,0.3334,0.1352,0.0,-0.1475,0.0058,0.0,-0.1645,-0.1236,0.0,-0.1475,-0.2442,0.0,-0.0975,0.2511,0.0,-0.0994,-0.2453,0.0,-0.0967})))))))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getElevationGrid_6_24_height_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}

		/** Large attribute array: ElevationGrid height field, scene-graph level=6, element #24, 400 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getElevationGrid_6_24_height()
		{
			MFFloat ElevationGrid_6_24_height = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getElevationGrid_6_24_height_1()));
			return ElevationGrid_6_24_height;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return AdditiveSubtractiveLight model
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
        X3D thisExampleX3dModel = new AdditiveSubtractiveLight().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.AdditiveSubtractiveLight\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.AdditiveSubtractiveLight\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Unique fishing lure ("If it were any more real, I would actually be fishing"). Final project for introductory X3D course. </p>
 <p> Related links: <a href="../../../StudentProjects/FishingLure.java">FishingLure.java</a> source, <a href="../../../StudentProjects/FishingLureIndex.html" target="_top">FishingLure catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/FishingLure.x3d">FishingLure.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Tom Flanders </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Unique fishing lure ("If it were any more real, I would actually be fishing"). Final project for introductory X3D course. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FishingLure.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FishingLure.x3d</a> </td>
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

	* @author Tom Flanders
 */

public class FishingLure
{
	/** Default constructor to create this object. */
	public FishingLure ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("FishingLure.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Tom Flanders"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("19 August 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Unique fishing lure (\"If it were any more real, I would actually be fishing\"). Final project for introductory X3D course."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FishingLure.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" First position and rotate viewpoint into positive-X-Y-Z octant using a Transform ")
    .addChild(new WorldInfo().setTitle("FishingLure.x3d"))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setScale(1.6,1.6,1.6).setTranslation(-2.0,0.0,0.0)
      .addChild(new Group("groupLure")
        .addChild(new Shape("body")
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setRepeatS(false).setRepeatT(false).setUrl(new String[] {"FishingLure.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/FishingLure.jpg"}))
            .setMaterial(new Material()))
          .setGeometry(new Extrusion("BodyExtrusion").setBeginCap(false).setConvex(false).setCreaseAngle(.76).setCrossSection(new MFVec2f(new double[] {0.00,1.00,-0.43,0.90,-0.67,0.67,-0.65,0.33,-0.55,0.13,-0.25,-0.20,0.00,-0.30,0.25,-0.20,0.55,0.13,0.65,0.33,0.67,0.67,0.43,0.90,0.00,1.00})).setEndCap(false).setScale(new MFVec2f(new double[] {0.06,0.10,0.12,0.20,0.18,0.30,0.24,0.39,0.28,0.43,0.32,0.47,0.34,0.50,0.35,0.51,0.36,0.53,0.36,0.53,0.34,0.52,0.32,0.51,0.30,0.48,0.28,0.47,0.27,0.44,0.25,0.41,0.23,0.38,0.21,0.35,0.19,0.32,0.18,0.29,0.16,0.26,0.14,0.23,0.12,0.20,0.10,0.17,0.08,0.14,0.07,0.11,0.05,0.08})).setSolid(false).setSpine(new MFVec3f(new double[] {0.10,0.00,0.00,0.20,0.00,0.00,0.30,0.00,0.00,0.40,0.00,0.00,0.50,0.00,0.00,0.60,0.00,0.00,0.70,0.00,0.00,0.80,0.00,0.00,0.90,0.00,0.00,1.00,0.00,0.00,1.10,0.00,0.00,1.20,0.00,0.00,1.30,0.00,0.00,1.40,0.00,0.00,1.50,0.00,0.00,1.60,0.00,0.00,1.70,0.00,0.00,1.80,0.00,0.00,1.90,0.00,0.00,2.00,0.00,0.00,2.10,0.00,0.00,2.20,0.00,0.00,2.30,0.00,0.00,2.40,0.00,0.00,2.50,0.00,0.00,2.60,0.00,0.00,2.65,0.00,0.00})))
          .addComments(" removed final scale value: , 0.04 0.07 "))
        .addChild(new Transform("transTrebleHook1").setRotation(1.0,0.0,0.0,1.57).setScale(.3,.3,.3).setTranslation(1.00,0.00,-.23)
          .addChild(new Group("groupTrebleHook")
            .addChild(new Transform("transHook1")
              .addChild(new Shape("hook1")
                .setAppearance(new Appearance()
                  .setMaterial(new Material("silverSteel").setAmbientIntensity(0.9)))
                .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {0.60,0.60,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,1.00,0.00,0.00})).setSpine(new MFVec3f(new double[] {0.00,-0.125,0.00,0.00,-1.25,0.00,0.02,-1.42,0.00,0.05,-1.51,0.00,0.10,-1.60,0.00,0.23,-1.73,0.00,0.35,-1.75,0.00,0.50,-1.73,0.00,0.63,-1.60,0.00,0.68,-1.50,0.00,0.73,-1.25,0.00,0.74,-1.00,0.00}))))
              .addChild(new Shape("shaBarb")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("silverSteel")))
                .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {.50,.50,0.00,0.00})).setSpine(new MFVec3f(new double[] {0.71,-1.20,0.00,0.60,-1.30,0.00})))))
            .addChild(new Transform("transHook2").setRotation(0.0,1.0,0.0,2.09)
              .addChild(new Shape().setUSE("hook1"))
              .addChild(new Shape().setUSE("shaBarb")))
            .addChild(new Transform("transHook3").setRotation(0.0,1.0,0.0,-2.09)
              .addChild(new Shape().setUSE("hook1"))
              .addChild(new Shape().setUSE("shaBarb")))
            .addChild(new Transform("transHookEye").setRotation(0.0,1.0,0.0,1.57)
              .addChild(new Shape("shapeHookEye")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("silverSteel")))
                .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50})).setSpine(new MFVec3f(new double[] {0.00,-0.13,0.00,0.02,-0.12,0.00,0.04,-0.10,0.00,0.05,-0.09,0.00,0.07,-0.07,0.00,0.08,-0.05,0.00,0.09,-0.04,0.00,0.09,-0.02,0.00,0.10,0.00,0.00,0.09,0.02,0.00,0.09,0.04,0.00,0.08,0.05,0.00,0.07,0.07,0.00,0.05,0.08,0.00,0.04,0.09,0.00,0.02,0.09,0.00,0.00,0.10,0.00,-0.02,0.09,0.00,-0.04,0.09,0.00,-0.05,0.08,0.00,-0.07,0.07,0.00,-0.08,0.05,0.00,-0.09,0.04,0.00,-0.09,0.02,0.00,-0.10,0.00,0.00,-0.09,-0.02,0.00,-0.09,-0.04,0.00,-0.08,-0.05,0.00,-0.07,-0.07,0.00,-0.05,-0.09,0.00,-0.04,-0.10,0.00,-0.02,-0.12,0.00,0.00,-0.13,0.00})))))))
        .addChild(new Transform("transTrebleHook2").setRotation(1.0,0.0,0.0,1.57).setScale(.3,.3,.3).setTranslation(2.70,0.00,-.04)
          .addChild(new Group().setUSE("groupTrebleHook")))
        .addChild(new Transform("transMountMiddle").setRotation(1.0,0.0,0.0,1.57).setScale(.7,.7,.7).setTranslation(1.0,0.00,-.15)
          .addChild(new Shape("shapeMountMIddle")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("silverSteel")))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35,0.35})).setSpine(new MFVec3f(new double[] {0.10,0.01,0.00,0.10,0.00,0.00,0.09,-0.02,0.00,0.09,-0.04,0.00,0.08,-0.05,0.00,0.07,-0.07,0.00,0.05,-0.08,0.00,0.04,-0.09,0.00,0.02,-0.09,0.00,0.00,-0.10,0.00,-0.02,-0.09,0.00,-0.04,-0.09,0.00,-0.05,-0.08,0.00,-0.07,-0.07,0.00,-0.08,-0.05,0.00,-0.09,-0.04,0.00,-0.09,-0.02,0.00,-0.10,0.00,0.00,-0.10,0.01,0.00})))))
        .addChild(new Transform("transHookMountTail").setRotation(1.0,0.0,0.0,1.57).setScale(.5,.5,.5).setTranslation(2.7,0.00,0.02)
          .addChild(new Shape("shapeHookMountTail")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("silverSteel")))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50})).setSpine(new MFVec3f(new double[] {-0.13,0.00,0.00,-0.12,0.02,0.00,-0.10,0.04,0.00,-0.09,0.05,0.00,-0.07,0.07,0.00,-0.05,0.08,0.00,-0.04,0.09,0.00,-0.02,0.09,0.00,0.00,0.10,0.00,0.02,0.09,0.00,0.04,0.09,0.00,0.05,0.08,0.00,0.07,0.07,0.00,0.08,0.05,0.00,0.09,0.04,0.00,0.09,0.02,0.00,0.10,0.00,0.00,0.09,-0.02,0.00,0.09,-0.04,0.00,0.08,-0.05,0.00,0.07,-0.07,0.00,0.05,-0.08,0.00,0.04,-0.09,0.00,0.02,-0.09,0.00,0.00,-0.10,0.00,-0.02,-0.09,0.00,-0.04,-0.09,0.00,-0.05,-0.08,0.00,-0.07,-0.07,0.00,-0.09,-0.05,0.00,-0.10,-0.04,0.00,-0.12,-0.02,0.00,-0.13,0.00,0.00})))))
        .addChild(new Transform("transHookNose").setRotation(1.0,0.0,0.0,1.57).setScale(.55,.55,.55).setTranslation(0.06,0.00,0.04)
          .addChild(new Shape("shapeHookNose")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("silverSteel")))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,-0.05,0.01,-0.05,0.02,-0.05,0.03,-0.04,0.04,-0.04,0.04,-0.03,0.05,-0.02,0.05,-0.01,0.05,0.00,0.05,0.01,0.05,0.02,0.04,0.03,0.04,0.04,0.03,0.04,0.02,0.05,0.01,0.05,0.00,0.05,-0.01,0.05,-0.02,0.05,-0.03,0.04,-0.04,0.04,-0.04,0.03,-0.05,0.02,-0.05,0.01,-0.05,0.00,-0.05,-0.01,-0.05,-0.02,-0.04,-0.03,-0.04,-0.04,-0.03,-0.04,-0.02,-0.05,-0.01,-0.05,0.00,-0.05})).setScale(new MFVec2f(new double[] {0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50,0.50})).setSpine(new MFVec3f(new double[] {0.13,0.00,0.00,0.12,0.02,0.00,0.10,0.04,0.00,0.09,0.05,0.00,0.07,0.07,0.00,0.05,0.08,0.00,0.04,0.09,0.00,0.02,0.09,0.00,0.00,0.10,0.00,-0.02,0.09,0.00,-0.04,0.09,0.00,-0.05,0.08,0.00,-0.07,0.07,0.00,-0.08,0.05,0.00,-0.09,0.04,0.00,-0.09,0.02,0.00,-0.10,0.00,0.00,-0.09,-0.02,0.00,-0.09,-0.04,0.00,-0.08,-0.05,0.00,-0.07,-0.07,0.00,-0.05,-0.08,0.00,-0.04,-0.09,0.00,-0.02,-0.09,0.00,0.00,-0.10,0.00,0.02,-0.09,0.00,0.04,-0.09,0.00,0.05,-0.08,0.00,0.07,-0.07,0.00,0.09,-0.05,0.00,0.10,-0.04,0.00,0.12,-0.02,0.00,0.13,0.00,0.00})))))
        .addChild(new Transform("transLip").setRotation(0.0,1.0,0.0,0.785).setTranslation(0.75,0.2,0.02)
          .addChild(new Shape("shapeLip")
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(.5,.5,.5).setTransparency(.3)))
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.00,0.00,0.00,-0.30,0.04,-0.48,0.08,-0.53,0.12,-0.56,0.20,-0.58,0.28,-0.56,0.32,-0.53,0.36,-0.48,0.40,-0.30,0.40,0.00})).setSpine(new MFVec3f(new double[] {0.00,0.00,0.00,0.03,0.00,0.00})))))))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {.6274,.3215,.1764})).setSkyAngle(new double[] {1.309,1.571}).setSkyColor(new MFColor(new double[] {.1921,.3098,.3098}))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return FishingLure model
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
        X3D thisExampleX3dModel = new FishingLure().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.FishingLure\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.FishingLure\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

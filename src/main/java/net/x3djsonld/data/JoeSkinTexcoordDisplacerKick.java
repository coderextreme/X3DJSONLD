package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> The Joe model is a Humanoid with textured skin. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/JoeSkinTexcoordDisplacerKick.java">JoeSkinTexcoordDisplacerKick.java</a> source, <a href="../../../HumanoidAnimation/JoeSkinTexcoordDisplacerKickIndex.html" target="_top">JoeSkinTexcoordDisplacerKick catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d">JoeSkinTexcoordDisplacerKick.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Joe No Reservations 20161206 20161111 20160720 20121221 20040109 x3d/hanim </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> The Joe model is a Humanoid with textured skin. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 12 January 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 19 October 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translators </i> </td>
			<td> Roy Walmsley and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../HumanoidAnimation/../license.html">../license.html</a> </td>
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

	* @author Joe Williams
 */

public class JoeSkinTexcoordDisplacerKick
{
	/** Default constructor to create this object. */
	public JoeSkinTexcoordDisplacerKick ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("JoeSkinTexcoordDisplacerKick.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_INFO       ).setContent("Joe No Reservations 20161206 20161111 20160720 20121221 20040109 x3d/hanim"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("The Joe model is a Humanoid with textured skin."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Joe Williams"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("9 January 2014"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATED ).setContent("12 January 2017"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("19 October 2018"))
    .addMeta(new metaObject().setName(metaObject.NAME_TODO       ).setContent("Record information about skin coordinates (found in comment at end of scene) as a structured MetadataSet containing MetadataString nodes"))
    .addComments(" BS studio translation from .x3dv by Joe using BS Contact ")
    .addMeta(new metaObject().setName("translators").setContent("Roy Walmsley and Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeSkinTexcoordDisplacerKick.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setInfo(new String[] {"X3D Humanoid LOA3 skeleton","skin from hanim sites, surface features, and some added points","390 points"}).setTitle("X3D HANIM LOA3 Skeleton, 390 point Skin, texcoords, Displacer, teTrans for Joe_ by Joe"))
    .addChild(new NavigationInfoObject("Start_NavigationInfo").setHeadlight(false).setSpeed(2.5f))
    .addChild(new BackgroundObject("blue_Background"))
    .addChild(new SpotLightObject("light1").setAmbientIntensity(0.7f).setBeamWidth(1.5f).setColor(0.8f,0.8f,1.0f).setCutOffAngle(0.6f).setDirection(0.0f,0.0f,0.0f).setLocation(0.0f,3.0f,3.0f).setRadius(10f))
    .addChild(new PointLightObject("light2").setAmbientIntensity(0.7f).setColor(0.8f,0.8f,1.0f).setLocation(0.0f,10.0f,-7.0f))
    .addComments(" External from the Humanoid viewpoints ")
    .addChild(new ViewpointObject("Scene_InclinedView").setDescription("Scene_Inclined View").setCenterOfRotation(0.0f,0.85f,0.0f).setOrientation(-0.113f,0.993f,0.0347f,0.671f).setPosition(1.62f,1.05f,3.06f))
    .addChild(new ViewpointObject("Scene_IFrontView").setDescription("Scene_Front View").setCenterOfRotation(0.0f,0.8f,0.0f).setPosition(0.0f,0.8f,2.58f))
    .addChild(new ViewpointObject("Scene_ISideView").setDescription("Scene_Side View").setCenterOfRotation(0.0f,0.8f,0.0f).setOrientation(0.0f,1.0f,0.0f,1.5708f).setPosition(2.6f,0.5f,0.0f))
    .addChild(new ViewpointObject("Scene_BackView").setDescription("Scene_Back View").setCenterOfRotation(0.0f,1.5f,0.0f).setOrientation(0.0f,1.0f,0.0f,3.14f).setPosition(0.0f,2.5f,-3.0f))
    .addChild(new ViewpointObject("Scene_TopView").setDescription("Scene_Top View").setCenterOfRotation(0.0f,1.5f,0.0f).setOrientation(1.0f,0.0f,0.0f,-1.5708f).setPosition(0.0f,3.5f,0.0f))
    .addChild(new GroupObject("Joe_Humanoid")
      .addChild(new HAnimHumanoidObject("Joe_Human").setName("Human").setVersion("2.0")
        .addSkeleton(new HAnimJointObject("Joe_HumanoidRoot").setName("humanoid_root").setCenter(0.0f,0.875f,0.0f)
          .addChild(new HAnimSegmentObject("Joe_sacrum").setName("sacrum")
            .addChild(new HAnimSiteObject("Joe_RootFront").setName("RootFront")
              .addChild(new TransformObject("hanimcordsys").setScale(0.175f,0.175f,0.175f)
                .addChild(new ViewpointObject("ViewBodyRootAxes").setDescription("Joe_HAnim Root Coordinate Axes View"))
                .addChild(new ShapeObject("AxisLinesShape")
                  .addComments(" RGB lines showing XYZ axes ")
                  .setGeometry(new IndexedLineSetObject().setColorPerVertex(false).setColorIndex(new int[] {0,1,2}).setCoordIndex(new int[] {0,1,-1,0,2,-1,0,3,-1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f})))
                    .setColor(new ColorObject().setColor(new MFColorObject(new float[] {1.0f,0.0f,0.0f,0.0f,0.6f,0.0f,0.0f,0.0f,1.0f}))))))))
          .addChild(new HAnimJointObject("Joe_sacroiliac").setName("sacroiliac").setCenter(0.0f,0.92f,0.0f).setSkinCoordIndex(new int[] {17,19,20,21,22,23,26,27,73,82,89,91,93}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.35f,0.35f,1.0f})
            .addChild(new HAnimJointObject("Joe_l_hip").setName("l_hip").setCenter(0.1f,0.92f,0.0f).setSkinCoordIndex(new int[] {89,90,94,95,96,97}).setSkinCoordWeight(new float[] {0.65f,1.0f,1.0f,1.0f,1.0f,1.0f})
              .addChild(new HAnimJointObject("Joe_l_knee").setName("l_knee").setCenter(0.115f,0.466f,0.0f).setSkinCoordIndex(new int[] {334,335,336,337,338,339,340,341}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                .addChild(new HAnimJointObject("Joe_l_ankle").setName("l_ankle").setCenter(0.115f,0.069f,0.0f).setSkinCoordIndex(new int[] {342,343,344,345}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                  .addChild(new HAnimJointObject("Joe_l_subtalar").setName("l_subtalar").setCenter(0.115f,0.031f,0.03f).setSkinCoordIndex(new int[] {346,347,348,71}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                    .addChild(new HAnimJointObject("Joe_l_midtarsal").setName("l_midtarsal").setCenter(0.115f,0.037f,0.09f).setSkinCoordIndex(new int[] {349,350,351,352}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                      .addChild(new HAnimJointObject("Joe_l_metatarsal").setName("l_metatarsal").setCenter(0.115f,0.02f,0.122f).setSkinCoordIndex(new int[] {353,354,355,356,357,358,359,360,361}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))))
            .addChild(new HAnimJointObject("Joe_r_hip").setName("r_hip").setCenter(-0.1f,0.92f,0.0f).setSkinCoordIndex(new int[] {91,92,98,99,100,101,362,363}).setSkinCoordWeight(new float[] {0.65f,1.0f,0.8f,1.0f,1.0f,1.0f,0.4f,0.8f})
              .addChild(new HAnimJointObject("Joe_r_knee").setName("r_knee").setCenter(-0.05f,0.466f,0.0f).setSkinCoordIndex(new int[] {362,363,364,365,366,367,368,369,98}).setSkinCoordWeight(new float[] {0.6f,0.2f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.2f})
                .addChild(new HAnimJointObject("Joe_r_ankle").setName("r_ankle").setCenter(-0.115f,0.069f,0.0f).setSkinCoordIndex(new int[] {370,371,372,373}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                  .addChild(new HAnimJointObject("Joe_r_subtalar").setName("r_subtalar").setCenter(-0.1f,0.015f,-0.01f).setSkinCoordIndex(new int[] {374,375,376}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f})
                    .addChild(new HAnimJointObject("Joe_r_midtarsal").setName("r_midtarsal").setCenter(-0.115f,0.037f,0.09f).setSkinCoordIndex(new int[] {377,378,379,380}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                      .addChild(new HAnimJointObject("Joe_r_metatarsal").setName("r_metatarsal").setCenter(-0.1f,0.01f,0.14f).setSkinCoordIndex(new int[] {381,382,383,384,385,386,387,388,389}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f}))))))))
          .addChild(new HAnimJointObject("Joe_vl5").setName("vl5").setCenter(0.0f,1.045f,-0.095f).setSkinCoordIndex(new int[] {28,76}).setSkinCoordWeight(new float[] {1.0f,1.0f})
            .addChild(new HAnimJointObject("Joe_vl4").setName("vl4").setCenter(0.0f,1.068f,-0.085f)
              .addChild(new HAnimJointObject("Joe_vl3").setName("vl3").setCenter(0.0f,1.092f,-0.0725f)
                .addChild(new HAnimJointObject("Joe_vl2").setName("vl2").setCenter(0.0f,1.12f,-0.065f).setSkinCoordIndex(new int[] {16,18,25,83,84,85,86,87,88}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.7f,1.0f,0.8f})
                  .addChild(new HAnimJointObject("Joe_vl1").setName("vl1").setCenter(0.0f,1.1459f,-0.0625f)
                    .addChild(new HAnimJointObject("Joe_vt12").setName("vt12").setCenter(0.0f,1.179f,-0.068f)
                      .addChild(new HAnimJointObject("Joe_vt11").setName("vt11").setCenter(0.0f,1.2679f,-0.081f)
                        .addChild(new HAnimJointObject("Joe_vt10").setName("vt10").setCenter(0.0f,1.242f,-0.09f).setSkinCoordIndex(new int[] {15}).setSkinCoordWeight(new float[] {1.0f})
                          .addChild(new HAnimJointObject("Joe_vt9").setName("vt9").setCenter(0.0f,1.268f,-0.1f).setSkinCoordIndex(new int[] {13,14}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                            .addChild(new HAnimJointObject("Joe_vt8").setName("vt8").setCenter(0.0f,1.294f,-0.11f)
                              .addChild(new HAnimJointObject("Joe_vt7").setName("vt7").setCenter(0.0f,1.323f,-0.1155f)
                                .addChild(new HAnimJointObject("Joe_vt6").setName("vt6").setCenter(0.0f,1.352f,-0.12f)
                                  .addChild(new HAnimJointObject("Joe_vt5").setName("vt5").setCenter(0.0f,1.381f,-0.1235f)
                                    .addChild(new HAnimJointObject("Joe_vt4").setName("vt4").setCenter(0.0f,1.41f,-0.1235f).setSkinCoordIndex(new int[] {81}).setSkinCoordWeight(new float[] {1.0f})
                                      .addChild(new HAnimJointObject("Joe_vt3").setName("vt3").setCenter(0.0f,1.438f,-0.12f)
                                        .addChild(new HAnimJointObject("Joe_vt2").setName("vt2").setCenter(0.0f,1.468f,-0.105f)
                                          .addChild(new HAnimJointObject("Joe_vt1").setName("vt1").setCenter(0.0f,1.497f,-0.09f).setSkinCoordIndex(new int[] {11,24}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                            .addChild(new HAnimJointObject("Joe_vc7").setName("vc7").setCenter(0.0f,1.525f,-0.072f).setSkinCoordIndex(new int[] {74,75}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                              .addChild(new HAnimJointObject("Joe_vc6").setName("vc6").setCenter(0.0f,1.54f,-0.05f)
                                                .addChild(new HAnimJointObject("Joe_vc5").setName("vc5").setCenter(0.0f,1.552f,-0.035f)
                                                  .addChild(new HAnimJointObject("Joe_vc4").setName("vc4").setCenter(0.0f,1.5675f,-0.0256f)
                                                    .addChild(new HAnimJointObject("Joe_vc3").setName("vc3").setCenter(0.0f,1.58225f,-0.0185f)
                                                      .addChild(new HAnimJointObject("Joe_vc2").setName("vc2").setCenter(0.0f,1.595f,-0.0175f)
                                                        .addChild(new HAnimJointObject("Joe_vc1").setName("vc1").setCenter(0.0f,1.61f,-0.015f)
                                                          .addChild(new HAnimJointObject("Joe_skullbase").setName("skullbase").setCenter(0.0f,1.63f,-0.01f).setSkinCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                            .addDisplacers(new HAnimDisplacerObject("Joe_skull_tipTest").setName("skull_tip_raiser_action").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9}).setDisplacements(new MFVec3fObject(new float[] {0.0f,0.15f,0.0f,0.0f,0.0f,0.15f,-0.1f,0.0f,0.15f,0.1f,0.0f,0.05f,0.0f,-0.02f,0.05f,-0.15f,0.0f,0.0f,-0.05f,0.0f,0.0f,0.15f,0.0f,0.0f,0.05f,0.0f,0.0f,0.0f,0.0f,-0.15f})))
                                                            .addChild(new HAnimJointObject("Joe_l_eyelid_joint").setName("l_eyelid_joint").setCenter(0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_l_eyeball_joint").setName("l_eyeball_joint").setCenter(0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_r_eyelid_joint").setName("l_eyelid_joint").setCenter(-0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_r_eyeball_joint").setName("l_eyeball_joint").setCenter(-0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_r_eyebrow_joint").setName("l_eyebrow_joint").setCenter(-0.034f,1.659f,0.06f))
                                                            .addChild(new HAnimJointObject("Joe_temporomandibular").setName("temporomandibular").setCenter(0.034f,1.659f,0.06f)))))))))
                                              .addChild(new HAnimJointObject("Joe_l_sternoclavicular").setName("l_sternoclavicular").setCenter(0.082f,1.4488f,-0.0353f).setSkinCoordIndex(new int[] {12}).setSkinCoordWeight(new float[] {1.0f})
                                                .addChild(new HAnimJointObject("Joe_l_acromioclavicular").setName("l_acromioclavicular").setCenter(0.0962f,1.4269f,-0.0424f).setSkinCoordIndex(new int[] {79}).setSkinCoordWeight(new float[] {1.0f})
                                                  .addChild(new HAnimJointObject("Joe_l_shoulder").setName("l_shoulder").setCenter(0.2f,1.44f,-0.04f).setSkinCoordIndex(new int[] {41,42,44,80,102,103,104,105}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                    .addChild(new HAnimJointObject("Joe_l_elbow").setName("l_elbow").setCenter(0.2f,1.1388f,-0.04f).setSkinCoordIndex(new int[] {45,46,47,109,110,111,112,113,115,116,117,118}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                      .addChild(new HAnimJointObject("Joe_l_wrist").setName("l_wrist").setCenter(0.2f,0.87f,-0.04f).setSkinCoordIndex(new int[] {119,120,121,122,123,124,125,126}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                        .addChild(new HAnimJointObject("Joe_l_thumb1").setName("l_thumb1").setCenter(0.1924f,0.8472f,-0.0534f).setSkinCoordIndex(new int[] {127,128}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_l_thumb2").setName("l_thumb2").setCenter(0.1951f,0.8226f,0.0246f).setSkinCoordIndex(new int[] {138,139,140,141,142,143}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,1.0f,1.0f,1.0f})
                                                            .addChild(new HAnimJointObject("Joe_l_thumb3").setName("l_thumb3").setCenter(0.1955f,0.8159f,0.0464f).setSkinCoordIndex(new int[] {144,145,146,147,148,149,150,151,152}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f}))))
                                                        .addChild(new HAnimJointObject("Joe_l_index0").setName("l_index0").setCenter(0.1983f,0.8024f,-0.028f).setSkinCoordIndex(new int[] {129,130}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_l_index1").setName("l_index1").setCenter(0.1983f,0.7815f,-0.028f).setSkinCoordIndex(new int[] {138,139,140,153,154,155,163}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,1.0f,1.0f,1.0f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_l_index2").setName("l_index2").setCenter(0.2017f,0.7363f,-0.0248f).setSkinCoordIndex(new int[] {166,167,168,169}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_l_index3").setName("l_index3").setCenter(0.2028f,0.7139f,-0.0236f).setSkinCoordIndex(new int[] {170,171,172,173,174,175,176,177,178}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_l_middle0").setName("l_middle0").setCenter(0.1987f,0.8029f,-0.053f).setSkinCoordIndex(new int[] {131,132}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_l_middle1").setName("l_middle1").setCenter(0.1987f,0.7818f,-0.053f).setSkinCoordIndex(new int[] {156,157,163,164}).setSkinCoordWeight(new float[] {1.0f,1.0f,0.5f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_l_middle2").setName("l_middle2").setCenter(0.2013f,0.7273f,-0.0503f).setSkinCoordIndex(new int[] {179,180,181,182}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_l_middle3").setName("l_middle3").setCenter(0.2026f,0.7011f,-0.0494f).setSkinCoordIndex(new int[] {183,184,185,186,187,188,189,190,191}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_l_ring0").setName("l_ring0").setCenter(0.1956f,0.8019f,-0.0794f).setSkinCoordIndex(new int[] {133,134}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_l_ring1").setName("l_ring1").setCenter(0.1956f,0.7815f,-0.0794f).setSkinCoordIndex(new int[] {158,159,164,165}).setSkinCoordWeight(new float[] {1.0f,1.0f,0.5f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_l_ring2").setName("l_ring2").setCenter(0.1973f,0.7287f,-0.0777f).setSkinCoordIndex(new int[] {192,193,194,195}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_l_ring3").setName("l_ring3").setCenter(0.1983f,0.7045f,-0.0767f).setSkinCoordIndex(new int[] {196,197,198,199,200,201,202,203,204}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_l_pinky0").setName("l_pinky0").setCenter(0.1925f,0.8066f,-0.1036f).setSkinCoordIndex(new int[] {135,136,137,165}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,0.5f})
                                                          .addChild(new HAnimJointObject("Joe_l_pinky1").setName("l_pinky1").setCenter(0.1925f,0.7866f,-0.1036f).setSkinCoordIndex(new int[] {160,161,162}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f})
                                                            .addChild(new HAnimJointObject("Joe_l_pinky2").setName("l_pinky2").setCenter(0.1938f,0.7452f,-0.1024f).setSkinCoordIndex(new int[] {205,206,207,208}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_l_pinky3").setName("l_pinky3").setCenter(0.1948f,0.7277f,-0.1017f).setSkinCoordIndex(new int[] {209,210,211,212,213,214,215,216,217}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f}))))))))))
                                              .addChild(new HAnimJointObject("Joe_r_sternoclavicular").setName("r_sternoclavicular").setCenter(-0.03f,1.46f,0.0f).setSkinCoordIndex(new int[] {10}).setSkinCoordWeight(new float[] {1.0f})
                                                .addChild(new HAnimJointObject("Joe_r_acromioclavicular").setName("r_acromioclavicular").setCenter(-0.09f,1.41f,-0.11f).setSkinCoordIndex(new int[] {77,29}).setSkinCoordWeight(new float[] {1.0f,0.9f})
                                                  .addChild(new HAnimJointObject("Joe_r_shoulder").setName("r_shoulder").setCenter(-0.2f,1.44f,-0.04f).setSkinCoordIndex(new int[] {29,30,32,78,218,219,220,221,86,88}).setSkinCoordWeight(new float[] {0.1f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,0.3f,0.2f})
                                                    .addChild(new HAnimJointObject("Joe_r_elbow").setName("r_elbow").setCenter(-0.2f,1.1388f,-0.04f).setSkinCoordIndex(new int[] {33,34,35,225,226,227,228,229,231,232,233,234}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                      .addChild(new HAnimJointObject("Joe_r_wrist").setName("r_wrist").setCenter(-0.2f,0.89f,-0.04f).setSkinCoordIndex(new int[] {235,236,237,238,239,240,241,242}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})
                                                        .addChild(new HAnimJointObject("Joe_r_thumb1").setName("r_thumb1").setCenter(-0.2f,0.85f,0.0f).setSkinCoordIndex(new int[] {243,244}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_r_thumb2").setName("r_thumb2").setCenter(-0.2f,0.82f,0.03f).setSkinCoordIndex(new int[] {254,255,256,257,258,259}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,1.0f,1.0f,1.0f})
                                                            .addChild(new HAnimJointObject("Joe_r_thumb3").setName("r_thumb3").setCenter(-0.2f,0.8f,0.05f).setSkinCoordIndex(new int[] {260,261,262,263,264,265,266,267,268}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f}))))
                                                        .addChild(new HAnimJointObject("Joe_r_index0").setName("r_index0").setCenter(-0.2f,0.84f,-0.015f).setSkinCoordIndex(new int[] {245,246}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_r_index1").setName("r_index1").setCenter(-0.2f,0.793f,-0.015f).setSkinCoordIndex(new int[] {254,255,256,269,270,271,279}).setSkinCoordWeight(new float[] {0.5f,0.5f,0.5f,1.0f,1.0f,1.0f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_r_index2").setName("r_index2").setCenter(-0.2f,0.745f,-0.015f).setSkinCoordIndex(new int[] {282,283,284,285}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_r_index3").setName("r_index3").setCenter(-0.2f,0.72f,-0.015f).setSkinCoordIndex(new int[] {286,287,288,289,290,291,292,293,294}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_r_middle0").setName("r_middle0").setCenter(-0.2f,0.835f,-0.04f).setSkinCoordIndex(new int[] {247,248}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_r_middle1").setName("r_middle1").setCenter(-0.2f,0.788f,-0.04f).setSkinCoordIndex(new int[] {272,273,279,280}).setSkinCoordWeight(new float[] {1.0f,1.0f,0.5f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_r_middle2").setName("r_middle2").setCenter(-0.2f,0.74f,-0.04f).setSkinCoordIndex(new int[] {295,296,297,298}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_r_middle3").setName("r_middle3").setCenter(-0.2f,0.7142f,-0.04f).setSkinCoordIndex(new int[] {299,300,301,302,303,304,305,306,307}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_r_ring0").setName("r_ring0").setCenter(-0.2f,0.835f,-0.065f).setSkinCoordIndex(new int[] {249,250}).setSkinCoordWeight(new float[] {1.0f,1.0f})
                                                          .addChild(new HAnimJointObject("Joe_r_ring1").setName("r_ring1").setCenter(-0.2f,0.793f,-0.065f).setSkinCoordIndex(new int[] {274,275,280,281}).setSkinCoordWeight(new float[] {1.0f,1.0f,0.5f,0.5f})
                                                            .addChild(new HAnimJointObject("Joe_r_ring2").setName("r_ring2").setCenter(-0.2f,0.74f,-0.065f).setSkinCoordIndex(new int[] {308,309,310,311}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_r_ring3").setName("r_ring3").setCenter(-0.2f,0.7177f,-0.065f).setSkinCoordIndex(new int[] {312,313,314,315,316,317,318,319,320}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))
                                                        .addChild(new HAnimJointObject("Joe_r_pinky0").setName("r_pinky0").setCenter(-0.2f,0.84f,-0.085f).setSkinCoordIndex(new int[] {251,252,253,281}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,0.5f})
                                                          .addChild(new HAnimJointObject("Joe_r_pinky1").setName("r_pinky1").setCenter(-0.2f,0.79f,-0.085f).setSkinCoordIndex(new int[] {276,277,278}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f})
                                                            .addChild(new HAnimJointObject("Joe_r_pinky2").setName("r_pinky2").setCenter(-0.2f,0.755f,-0.085f).setSkinCoordIndex(new int[] {321,322,323,324}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f})
                                                              .addChild(new HAnimJointObject("Joe_r_pinky3").setName("r_pinky3").setCenter(-0.2f,0.735f,-0.09f).setSkinCoordIndex(new int[] {325,326,327,328,329,330,331,332,333}).setSkinCoordWeight(new float[] {1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f,1.0f})))))))))))))))))))))))))))))
        .addSkin(new ShapeObject("Joe_Shape")
          .setAppearance(new AppearanceObject("Joe_skin_Appearance")
            .setMaterial(new MaterialObject("Joe_skin_Material").setDiffuseColor(0.3f,0.3f,0.6f).setEmissiveColor(0.3f,0.3f,0.6f))
            .setTexture(new ImageTextureObject("JoeSkinImageTexture").setUrl(new String[] {"JoeBodyTexture29.png","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/JoeBodyTexture29.png"}))
            .setTextureTransform(new TextureTransformObject("kicktextrans")))
          .setGeometry(new IndexedFaceSetObject("Joe_skin_IndexedFaceSet").setDEF("Joe_skin_IndexedFaceSet").setCreaseAngle(3.14f).setCoordIndex(getJoe_skin_IndexedFaceSet_6_132_coordIndex())
            .setCoord(new CoordinateObject("Joe_SkinCoord").setPoint(getJoe_SkinCoord_7_132_point()))
            .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new float[] {0.0f,0.0f,0.5f,0.5f,0.5f,0.0f,0.0f,0.5f})))))
        .setSkinCoord(new CoordinateObject().setUSE("Joe_SkinCoord"))))
    .addChild(new GroupObject()
      .addChild(new TimeSensorObject("KickTimer").setCycleInterval(3.73).setLoop(true))
      .addComments(" Interpolators ")
      .addChild(new OrientationInterpolatorObject("HumanoidRootRotInterp").setKey(new float[] {0.0f,0.1f,0.4f,0.6f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,0.5f,-1.0f,0.0f,0.0f,0.1f,-1.0f,0.0f,0.0f,0.5f,-1.0f,0.0f,0.0f,0.5f})))
      .addChild(new PositionInterpolatorObject("HumanoidRootTransInterp").setKey(new float[] {0.0f,0.2f,0.6f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {1.0f,0.3f,-1.0f,0.4f,-0.04f,-0.4f,-0.18f,0.1f,0.0f,-0.2f,0.15f,0.15f})))
      .addChild(new OrientationInterpolatorObject("sacroiliacRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_hipRotInterp").setKey(new float[] {0.0f,0.1f,0.3f,0.45f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,1.5f,-1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,0.5f,1.0f,0.0f,0.0f,1.0f})))
      .addChild(new OrientationInterpolatorObject("l_kneeRotInterp").setKey(new float[] {0.0f,0.2f,0.35f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.2f,1.0f,0.0f,1.0f,0.5f,1.0f,0.0f,0.0f,1.4f})))
      .addChild(new OrientationInterpolatorObject("l_ankleRotInterp").setKey(new float[] {0.0f,0.25f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.0f})))
      .addChild(new OrientationInterpolatorObject("l_subtalarRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_midtarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_metatarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_hipRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,-1.0f,0.0f,0.0f,1.0f,-1.0f,0.0f,0.0f,1.0f,-1.0f,0.0f,0.0f,1.0f})))
      .addChild(new OrientationInterpolatorObject("r_kneeRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,0.0f,0.1f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.5f})))
      .addChild(new OrientationInterpolatorObject("r_ankleRotInterp").setKey(new float[] {0.0f,0.25f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,0.5f})))
      .addChild(new OrientationInterpolatorObject("r_subtalarRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_midtarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_metatarsalRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vl5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vl4RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vl3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vl2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vl1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt12RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt11RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt10RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt9RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt8RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt7RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt6RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt4RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vt1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc7RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc6RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc5RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc4RotInterp").setKey(new float[] {0.0f,0.3f,0.4f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,1.0f,0.25f,-1.0f,0.0f,-1.0f,0.35f,1.0f,0.0f,0.0f,0.75f,1.0f,0.0f,1.0f,0.5f})))
      .addChild(new OrientationInterpolatorObject("vc3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("vc1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("skullbaseRotInterp").setKey(new float[] {0.0f,0.2f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,-1.0f,0.0f,0.5f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,0.35f})))
      .addChild(new OrientationInterpolatorObject("l_eyelid_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_eyeball_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_eyebrow_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_eyelid_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_eyeball_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_eyebrow_jointRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("temporomandibularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_sternoclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_acromioclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_shoulderRotInterp").setKey(new float[] {0.0f,0.4f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,-1.0f,0.0f,1.0f,1.75f})))
      .addChild(new OrientationInterpolatorObject("l_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,3.0f,-1.0f,0.0f,0.0f,0.75f,-1.0f,-1.0f,0.0f,0.5f})))
      .addChild(new OrientationInterpolatorObject("l_wristRotInterp").setKey(new float[] {0.0f,0.4f,0.8f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,1.0f,0.0f,1.3f,0.0f,-0.5f,1.0f,1.3f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_thumb1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_thumb2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_thumb3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_index0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_index1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_index2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_index3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_middle0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_middle1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_middle2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_middle3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_ring0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_ring1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_ring2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_ring3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_pinky0RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_pinky1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_pinky2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("l_pinky3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_sternoclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_acromioclavicularRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_shoulderRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,-1.0f,2.5f,0.0f,0.0f,-1.0f,1.5f,0.0f,0.0f,-1.0f,1.75f})))
      .addChild(new OrientationInterpolatorObject("r_elbowRotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {-1.0f,0.0f,0.0f,3.0f,-1.0f,0.0f,0.0f,0.75f,-1.0f,-1.0f,0.0f,0.5f})))
      .addChild(new OrientationInterpolatorObject("r_wristRotInterp").setKey(new float[] {0.0f,0.5f,0.7f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,1.0f,0.0f,0.3f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,-1.0f,1.0f,0.0f,-1.0f,0.0f,0.3f})))
      .addChild(new OrientationInterpolatorObject("r_thumb1RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_thumb2RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_thumb3RotInterp").setKey(new float[] {0.0f,0.5f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_index0RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_index1RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_index2RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_index3RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_middle0RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_middle1RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_middle2RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_middle3RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_ring0RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_ring1RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_ring2RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_ring3RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_pinky0RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.0f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_pinky1RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_pinky2RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f})))
      .addChild(new OrientationInterpolatorObject("r_pinky3RotInterp").setKey(new float[] {0.0f,0.5f,0.75f,1.0f}).setKeyValue(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,0.0f,0.0f,0.0f,1.0f,1.5f,0.0f,0.0f,1.0f,0.0f}))))
    .addComments(" TimeSensor to Interpolators ")
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRootRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("HumanoidRootTransInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("sacroiliacRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_hipRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_kneeRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ankleRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_subtalarRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_midtarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_metatarsalRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vl1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt12RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt11RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt10RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt9RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt8RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vt1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc7RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc6RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc5RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc4RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("vc1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skullbaseRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyelid_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_eyebrow_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyelid_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyeball_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_eyebrow_jointRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("temporomandibularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("l_pinky3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_sternoclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_acromioclavicularRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_shoulderRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_elbowRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_wristRotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_thumb3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_index3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_middle3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_ring3RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky0RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky1RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky2RotInterp").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("r_pinky3RotInterp").setToField("set_fraction"))
    .addComments(" Routes from Interpolators to Joe_ model Joints ")
    .addChild(new ROUTEObject().setFromNode("HumanoidRootRotInterp").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("HumanoidRootTransInterp").setFromField("value_changed").setToNode("Joe_HumanoidRoot").setToField("set_translation"))
    .addChild(new ROUTEObject().setFromNode("sacroiliacRotInterp").setFromField("value_changed").setToNode("Joe_sacroiliac").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_hipRotInterp").setFromField("value_changed").setToNode("Joe_l_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_kneeRotInterp").setFromField("value_changed").setToNode("Joe_l_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_ankleRotInterp").setFromField("value_changed").setToNode("Joe_l_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_subtalarRotInterp").setFromField("value_changed").setToNode("Joe_l_subtalar").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_midtarsalRotInterp").setFromField("value_changed").setToNode("Joe_l_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_metatarsalRotInterp").setFromField("value_changed").setToNode("Joe_l_metatarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_hipRotInterp").setFromField("value_changed").setToNode("Joe_r_hip").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_kneeRotInterp").setFromField("value_changed").setToNode("Joe_r_knee").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_ankleRotInterp").setFromField("value_changed").setToNode("Joe_r_ankle").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_subtalarRotInterp").setFromField("value_changed").setToNode("Joe_r_subtalar").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_midtarsalRotInterp").setFromField("value_changed").setToNode("Joe_r_midtarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_metatarsalRotInterp").setFromField("value_changed").setToNode("Joe_r_metatarsal").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vl5RotInterp").setFromField("value_changed").setToNode("Joe_vl5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vl4RotInterp").setFromField("value_changed").setToNode("Joe_vl4").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vl3RotInterp").setFromField("value_changed").setToNode("Joe_vl3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vl2RotInterp").setFromField("value_changed").setToNode("Joe_vl2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vl1RotInterp").setFromField("value_changed").setToNode("Joe_vl1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt12RotInterp").setFromField("value_changed").setToNode("Joe_vt12").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt11RotInterp").setFromField("value_changed").setToNode("Joe_vt11").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt10RotInterp").setFromField("value_changed").setToNode("Joe_vt10").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt9RotInterp").setFromField("value_changed").setToNode("Joe_vt9").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt8RotInterp").setFromField("value_changed").setToNode("Joe_vt8").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt7RotInterp").setFromField("value_changed").setToNode("Joe_vt7").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt6RotInterp").setFromField("value_changed").setToNode("Joe_vt6").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt5RotInterp").setFromField("value_changed").setToNode("Joe_vt5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt4RotInterp").setFromField("value_changed").setToNode("Joe_vt4").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt3RotInterp").setFromField("value_changed").setToNode("Joe_vt3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt2RotInterp").setFromField("value_changed").setToNode("Joe_vt2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vt1RotInterp").setFromField("value_changed").setToNode("Joe_vt1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc7RotInterp").setFromField("value_changed").setToNode("Joe_vc7").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc6RotInterp").setFromField("value_changed").setToNode("Joe_vc6").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc5RotInterp").setFromField("value_changed").setToNode("Joe_vc5").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc4RotInterp").setFromField("value_changed").setToNode("Joe_vc4").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc3RotInterp").setFromField("value_changed").setToNode("Joe_vc3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc2RotInterp").setFromField("value_changed").setToNode("Joe_vc2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("vc1RotInterp").setFromField("value_changed").setToNode("Joe_vc1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("skullbaseRotInterp").setFromField("value_changed").setToNode("Joe_skullbase").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_eyelid_jointRotInterp").setFromField("value_changed").setToNode("Joe_l_eyelid_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_eyeball_jointRotInterp").setFromField("value_changed").setToNode("Joe_l_eyeball_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_eyebrow_jointRotInterp").setFromField("value_changed").setToNode("Joe_l_eyebrow_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_eyelid_jointRotInterp").setFromField("value_changed").setToNode("Joe_r_eyelid_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_eyeball_jointRotInterp").setFromField("value_changed").setToNode("Joe_r_eyeball_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_eyebrow_jointRotInterp").setFromField("value_changed").setToNode("Joe_r_eyebrow_joint").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("temporomandibularRotInterp").setFromField("value_changed").setToNode("Joe_temporomandibular").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_sternoclavicularRotInterp").setFromField("value_changed").setToNode("Joe_l_sternoclavicular").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_acromioclavicularRotInterp").setFromField("value_changed").setToNode("Joe_l_acromioclavicular").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_shoulderRotInterp").setFromField("value_changed").setToNode("Joe_l_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_elbowRotInterp").setFromField("value_changed").setToNode("Joe_l_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_wristRotInterp").setFromField("value_changed").setToNode("Joe_l_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_thumb1RotInterp").setFromField("value_changed").setToNode("Joe_l_thumb1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_thumb2RotInterp").setFromField("value_changed").setToNode("Joe_l_thumb2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_thumb3RotInterp").setFromField("value_changed").setToNode("Joe_l_thumb3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_index0RotInterp").setFromField("value_changed").setToNode("Joe_l_index0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_index1RotInterp").setFromField("value_changed").setToNode("Joe_l_index1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_index2RotInterp").setFromField("value_changed").setToNode("Joe_l_index2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_index3RotInterp").setFromField("value_changed").setToNode("Joe_l_index3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_middle0RotInterp").setFromField("value_changed").setToNode("Joe_l_middle0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_middle1RotInterp").setFromField("value_changed").setToNode("Joe_l_middle1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_middle2RotInterp").setFromField("value_changed").setToNode("Joe_l_middle2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_middle3RotInterp").setFromField("value_changed").setToNode("Joe_l_middle3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_ring0RotInterp").setFromField("value_changed").setToNode("Joe_l_ring0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_ring1RotInterp").setFromField("value_changed").setToNode("Joe_l_ring1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_ring2RotInterp").setFromField("value_changed").setToNode("Joe_l_ring2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_ring3RotInterp").setFromField("value_changed").setToNode("Joe_l_ring3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_pinky0RotInterp").setFromField("value_changed").setToNode("Joe_l_pinky0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_pinky1RotInterp").setFromField("value_changed").setToNode("Joe_l_pinky1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_pinky2RotInterp").setFromField("value_changed").setToNode("Joe_l_pinky2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("l_pinky3RotInterp").setFromField("value_changed").setToNode("Joe_l_pinky3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_sternoclavicularRotInterp").setFromField("value_changed").setToNode("Joe_r_sternoclavicular").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_acromioclavicularRotInterp").setFromField("value_changed").setToNode("Joe_r_acromioclavicular").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_shoulderRotInterp").setFromField("value_changed").setToNode("Joe_r_shoulder").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_elbowRotInterp").setFromField("value_changed").setToNode("Joe_r_elbow").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_wristRotInterp").setFromField("value_changed").setToNode("Joe_r_wrist").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_thumb1RotInterp").setFromField("value_changed").setToNode("Joe_r_thumb1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_thumb2RotInterp").setFromField("value_changed").setToNode("Joe_r_thumb2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_thumb3RotInterp").setFromField("value_changed").setToNode("Joe_r_thumb3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_index0RotInterp").setFromField("value_changed").setToNode("Joe_r_index0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_index1RotInterp").setFromField("value_changed").setToNode("Joe_r_index1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_index2RotInterp").setFromField("value_changed").setToNode("Joe_r_index2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_index3RotInterp").setFromField("value_changed").setToNode("Joe_r_index3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_middle0RotInterp").setFromField("value_changed").setToNode("Joe_r_middle0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_middle1RotInterp").setFromField("value_changed").setToNode("Joe_r_middle1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_middle2RotInterp").setFromField("value_changed").setToNode("Joe_r_middle2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_middle3RotInterp").setFromField("value_changed").setToNode("Joe_r_middle3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_ring0RotInterp").setFromField("value_changed").setToNode("Joe_r_ring0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_ring1RotInterp").setFromField("value_changed").setToNode("Joe_r_ring1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_ring2RotInterp").setFromField("value_changed").setToNode("Joe_r_ring2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_ring3RotInterp").setFromField("value_changed").setToNode("Joe_r_ring3").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_pinky0RotInterp").setFromField("value_changed").setToNode("Joe_r_pinky0").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_pinky1RotInterp").setFromField("value_changed").setToNode("Joe_r_pinky1").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_pinky2RotInterp").setFromField("value_changed").setToNode("Joe_r_pinky2").setToField("set_rotation"))
    .addChild(new ROUTEObject().setFromNode("r_pinky3RotInterp").setFromField("value_changed").setToNode("Joe_r_pinky3").setToField("set_rotation"))
    .addChild(new GroupObject("DisplacersAnimationGroup")
      .addComments(" TimeSensor DEF='skull_tipTestTimer' cycleInterval='5.73' loop='true' enabled='true'></TimeSensor ")
      .addChild(new ScalarInterpolatorObject("skull_tipTest").setKey(new float[] {0.0f,0.1f,0.2f,0.35f,0.6f,0.7f,0.85f,0.88f,0.94f,0.97f,1.0f}).setKeyValue(new float[] {0.0f,0.0f,0.0f,0.0f,0.2f,0.4f,1.0f,0.0f,1.0f,0.4f,0.0f}))
      .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skull_tipTest").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("skull_tipTest").setFromField("value_changed").setToNode("Joe_skull_tipTest").setToField("weight")))
    .addChild(new GroupObject("skintexturetransform_animation")
      .addChild(new ScalarInterpolatorObject("skinTexTransTest").setKey(new float[] {0.0f,0.2f,0.4f,0.5f,0.6f,0.7f,0.8f,1.0f}).setKeyValue(new float[] {0.0f,0.0f,0.0f,0.0f,0.0f,1.0f,2.0f,0.0f}))
      .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("skinTexTransTest").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("skinTexTransTest").setFromField("value_changed").setToNode("kicktextrans").setToField("rotation")))
    .addChild(new GroupObject()
      .addChild(new TransformObject("SBall").setRotation(0.7f,0.0f,0.7f,0.1f).setScale(0.23f,0.23f,0.23f).setTranslation(-0.916f,0.37f,-0.92f)
        .addChild(new ShapeObject("ball_Shape")
          .setAppearance(new AppearanceObject("ball_Appearance")
            .setMaterial(new MaterialObject("ball_Material").setDiffuseColor(0.3f,0.3f,1.0f).setEmissiveColor(0.3f,0.3f,0.33f))
            .setTexture(new ImageTextureObject().setUSE("JoeSkinImageTexture")))
          .setGeometry(new IndexedFaceSetObject("ball_IndexedFaceSet").setDEF("ball_IndexedFaceSet").setCoordIndex(getball_IndexedFaceSet_6_437_coordIndex())
            .setCoord(new CoordinateObject("Ball_Coordinates").setPoint(getBall_Coordinates_7_437_point()))))
        .addChild(new ViewpointObject("ballView_1").setDescription("Ball View")))
      .addComments(" Ball Animation interpolators ")
      .addChild(new PositionInterpolatorObject("ballTransInterp").setKey(new float[] {0.0f,0.4f,0.409f,1.0f}).setKeyValue(new MFVec3fObject(new float[] {-1.0f,0.4f,-1.0f,0.0f,0.07f,0.0f,0.05f,0.06f,0.05f,2.0f,4.0f,10.0f})))
      .addChild(new OrientationInterpolatorObject("ballRotInterp").setKey(new float[] {0.0f,0.4f,0.41f,0.71f,1.0f}).setKeyValue(new MFRotationObject(new float[] {1.0f,0.0f,1.0f,0.25f,-1.0f,0.0f,-1.0f,1.35f,-1.0f,1.0f,-1.0f,3.35f,-1.0f,0.2f,-1.0f,3.0f,-1.0f,0.2f,-1.0f,3.0f})))
      .addComments(" Ball Animation Routes ")
      .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ballTransInterp").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("ballTransInterp").setFromField("value_changed").setToNode("SBall").setToField("set_translation"))
      .addChild(new ROUTEObject().setFromNode("KickTimer").setFromField("fraction_changed").setToNode("ballRotInterp").setToField("set_fraction"))
      .addChild(new ROUTEObject().setFromNode("ballRotInterp").setFromField("value_changed").setToNode("SBall").setToField("set_rotation")))
    .addChild(new GroupObject()
      .addChild(new TransformObject().setScale(0.2f,0.2f,0.2f)
        .addChild(new ShapeObject().setUSE("AxisLinesShape")))
      .addChild(new TransformObject("Circle0").setScale(1.175f,1.0f,1.175f)
        .addChild(new ShapeObject("circle_Shape")
          .setAppearance(new AppearanceObject("circle0_Appearance")
            .setMaterial(new MaterialObject("circle0_Material").setAmbientIntensity(0.9f).setDiffuseColor(0.9f,0.0f,0.7f).setEmissiveColor(0.425f,0.486f,1.0f)))
          .setGeometry(new IndexedLineSetObject("Orbit1").setDEF("Orbit1").setCoordIndex(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1})
            .setCoord(new CoordinateObject("circle_Coordinates").setPoint(new MFVec3fObject(new float[] {1.0f,0.0f,0.0f,0.995f,0.0f,-0.105f,0.979f,0.0f,-0.208f,0.951f,0.0f,-0.309f,0.914f,0.0f,-0.407f,0.866f,0.0f,-0.5f,0.809f,0.0f,-0.588f,0.743f,0.0f,-0.669f,0.669f,0.0f,-0.743f,0.588f,0.0f,-0.809f,0.5f,0.0f,-0.866f,0.407f,0.0f,-0.914f,0.309f,0.0f,-0.951f,0.208f,0.0f,-0.978f,0.105f,0.0f,-0.995f,0.0f,0.0f,-1.0f,-0.105f,0.0f,-0.994522f,-0.208f,0.0f,-0.978f,-0.309f,0.0f,-0.951f,-0.407f,0.0f,-0.914f,-0.5f,0.0f,-0.866f,-0.588f,0.0f,-0.809f,-0.669f,0.0f,-0.743f,-0.743f,0.0f,-0.669f,-0.809f,0.0f,-0.588f,-0.866f,0.0f,-0.5f,-0.914f,0.0f,-0.407f,-0.951f,0.0f,-0.309f,-0.978f,0.0f,-0.208f,-0.995f,0.0f,-0.105f,-1.0f,0.0f,0.0f,-0.995f,0.0f,0.105f,-0.978f,0.0f,0.208f,-0.951f,0.0f,0.309f,-0.914f,0.0f,0.407f,-0.866f,0.0f,0.5f,-0.809f,0.0f,0.588f,-0.743f,0.0f,0.669f,-0.669f,0.0f,0.743f,-0.588f,0.0f,0.809f,-0.5f,0.0f,0.866f,-0.407f,0.0f,0.914f,-0.309f,0.0f,0.951f,-0.208f,0.0f,0.978f,-0.105f,0.0f,0.995f,0.0f,0.0f,1.0f,0.105f,0.0f,0.995f,0.208f,0.0f,0.978f,0.309f,0.0f,0.951f,0.407f,0.0f,0.914f,0.5f,0.0f,0.866f,0.588f,0.0f,0.809f,0.669f,0.0f,0.743f,0.743f,0.0f,0.669f,0.809f,0.0f,0.588f,0.866f,0.0f,0.5f,0.914f,0.0f,0.407f,0.951f,0.0f,0.309f,0.978f,0.0f,0.208f,0.995f,0.0f,0.104f,1.0f,0.0f,0.0f}))))))
      .addChild(new TransformObject("Circle1").setScale(0.5f,1.0f,0.5f)
        .addChild(new ShapeObject("circle1_Shape")
          .setAppearance(new AppearanceObject("circle1_Appearance")
            .setMaterial(new MaterialObject("circle1_Material").setDiffuseColor(0.9f,0.0f,0.7f).setEmissiveColor(0.424956f,0.483976f,1.0f)))
          .setGeometry(new IndexedLineSetObject().setUSE("Orbit1"))))
      .addChild(new TransformObject("Circle2").setScale(0.25f,1.0f,0.25f)
        .addChild(new ShapeObject("circle2_Shape")
          .setAppearance(new AppearanceObject("circle2_Appearance")
            .setMaterial(new MaterialObject("circle2_Material").setDiffuseColor(0.9f,0.0f,0.7f).setEmissiveColor(0.424956f,0.483976f,1.0f)))
          .setGeometry(new IndexedLineSetObject().setUSE("Orbit1"))))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getJoe_skin_IndexedFaceSet_6_132_coordIndex_1()
		{
			int[] value = {0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1};
			return value;
		}
		private int[] getJoe_skin_IndexedFaceSet_6_132_coordIndex_2()
		{
			int[] value = {209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1};
			return value;
		}
		private int[] getJoe_skin_IndexedFaceSet_6_132_coordIndex_3()
		{
			int[] value = {308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1};
			return value;
		}


		/** Define subarrays using type float[] */
		private float[] getJoe_SkinCoord_7_132_point_1()
		{
			float[] value = {0.0f,1.77f,0.0f,0.0f,1.665f,0.09f,-0.033f,1.62f,0.087f,0.033f,1.62f,0.087f,0.0f,1.55f,0.097f,-0.077f,1.64f,-0.01f,-0.0527f,1.58f,0.015f,0.077f,1.64f,-0.01f,0.0527f,1.58f,0.015f,0.0f,1.625f,-0.0925f,-0.03f,1.46f,0.035f,0.0f,1.44f,0.03f,0.03f,1.46f,0.035f,-0.1135f,1.318f,0.095f,0.1135f,1.318f,0.095f,0.0f,1.25f,0.113f,-0.087f,1.19f,0.09f,-0.0935f,1.03f,0.075f,0.087f,1.19f,0.09f,0.0935f,1.03f,0.075f,-0.1425f,1.065f,0.0033f,-0.15f,0.9f,-0.01f,0.1425f,1.065f,0.0033f,0.15f,0.9f,-0.01f,0.0f,1.53f,-0.084f,0.0049f,1.1908f,-0.1113f,-0.0773f,1.019f,-0.12f,0.0773f,1.019f,-0.12f,0.005f,1.0915f,-0.1091f,-0.178f,1.4825f,-0.0625f,-0.17f,1.38f,0.007f,-0.1884f,0.8676f,-0.036f,-0.16f,1.38f,-0.127f,-0.2f,1.1388f,-0.08f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.23f,1.133f,-0.055f,-0.1977f,0.8169f,-0.0177f,-0.1941f,0.6772f,-0.0423f,-0.2117f,0.8562f,-0.0584f,-0.1929f,0.7890f,-0.1064f,0.175f,1.4825f,-0.06f,0.17f,1.38f,0.007f,0.1901f,0.8645f,-0.0415f,0.16f,1.38f,-0.125f,0.2f,1.1388f,-0.08f,0.165f,1.1388f,-0.04f,0.244f,1.1388f,-0.04f,0.23f,1.133f,-0.055f,0.2009f,0.8139f,-0.0237f,0.2056f,0.6743f,-0.0482f,0.2142f,0.8529f,-0.0648f,0.1929f,0.7860f,-0.1122f,-0.1f,0.4913f,-0.03f,-0.17f,0.466f,0.0f,-0.05f,0.466f,0.0f,-0.165f,0.01f,0.12f,-0.15f,0.07f,0.0f,-0.085f,0.086f,0.0125f,-0.09f,0.056f,0.0125f,-0.115f,0.02f,0.122f,-0.115f,0.04f,-0.055f,-0.110f,0.011f,0.19f,0.0993f,0.4881f,-0.0309f,0.17f,0.466f,0.0f,0.05f,0.4867f,0.0f,0.165f,0.01f,0.12f,0.15f,0.07f,0.0f,0.085f,0.086f,0.0125f,0.09f,0.056f,0.0125f,0.115f,0.02f,0.122f,0.115f,0.04f,-0.055f,0.110f,0.011f,0.19f,0.0f,0.875f,0.0f,-0.0646f,1.5149f,-0.038f,0.0646f,1.5149f,-0.038f,0.0f,1.07225f,0.09f,-0.11f,1.427f,-0.1375f,-0.235f,1.42f,-0.0625f,0.11f,1.427f,-0.1375f,0.235f,1.42f,-0.0625f,0.0f,1.41f,-0.145f,0.0f,0.925f,0.08f,-0.087f,1.19f,-0.09f,0.087f,1.19f,-0.09f,0.172f,1.32f,-0.03f,-0.172f,1.32f,-0.03f,0.15f,1.23f,-0.015f,-0.15f,1.23f,-0.015f,0.079f,0.92f,-0.14f,0.1f,0.90f,0.077f,-0.079f,0.92f,-0.14f,-0.1f,0.90f,0.075f,0.0f,0.87f,0.0f,0.171f,0.65f,0.0f,0.02f,0.65f,0.0f,0.1f,0.65f,-0.08f,0.1f,0.65f,0.07f,-0.171f,0.65f,0.0f,-0.02f,0.65f,0.0f};
			return value;
		}
		private float[] getJoe_SkinCoord_7_132_point_2()
		{
			float[] value = {-0.1f,0.65f,-0.08f,-0.1f,0.65f,0.07f,0.25f,1.27f,-0.04f,0.17f,1.27f,-0.04f,0.2f,1.27f,-0.09f,0.2f,1.27f,0.02f,0.244f,1.1388f,-0.04f,0.165f,1.1388f,-0.04f,0.2f,1.1388f,-0.08f,0.2f,1.1388f,-0.013f,0.225f,1.0f,-0.01f,0.225f,1.0f,-0.07f,0.185f,1.0f,-0.01f,0.185f,1.0f,-0.07f,0.2f,1.1388f,-0.04f,0.225f,0.92f,-0.04f,0.175f,0.92f,-0.04f,0.2f,0.92f,-0.065f,0.2f,0.92f,-0.015f,0.225f,0.89f,-0.04f,0.175f,0.89f,-0.04f,0.2f,0.89f,-0.065f,0.2f,0.89f,-0.015f,0.218f,0.86f,-0.04f,0.184f,0.86f,-0.04f,0.2f,0.87f,-0.07f,0.2f,0.87f,0.0f,0.21f,0.85f,0.0f,0.1854f,0.85f,0.0f,0.212f,0.84f,-0.015f,0.183f,0.84f,-0.015f,0.213f,0.835f,-0.04f,0.190f,0.835f,-0.04f,0.211f,0.835f,-0.065f,0.192f,0.835f,-0.065f,0.208f,0.84f,-0.085f,0.190f,0.84f,-0.085f,0.2f,0.84f,-0.095f,0.215f,0.82f,0.0f,0.193f,0.815f,0.005f,0.198f,0.80f,0.012f,0.21f,0.82f,0.03f,0.19f,0.82f,0.03f,0.2f,0.835f,0.039f,0.212f,0.8f,0.05f,0.188f,0.8f,0.05f,0.2f,0.807f,0.057f,0.2f,0.793f,0.035f,0.2f,0.774f,0.076f,0.212f,0.78f,0.07f,0.188f,0.78f,0.07f,0.2f,0.785f,0.075f,0.2f,0.77f,0.062f,0.215f,0.793f,-0.015f,0.187f,0.793f,-0.015f,0.2f,0.793f,-0.005f,0.215f,0.788f,-0.04f,0.187f,0.788f,-0.04f,0.215f,0.793f,-0.065f,0.187f,0.793f,-0.065f,0.21f,0.79f,-0.085f,0.19f,0.79f,-0.085f,0.2f,0.79f,-0.095f,0.19f,0.77f,-0.0275f,0.19f,0.77f,-0.0525f,0.19f,0.78f,-0.0775f,0.212f,0.745f,-0.015f,0.188f,0.745f,-0.02f,0.2f,0.745f,-0.0255f,0.2f,0.745f,-0.0045f,0.211f,0.72f,-0.015f,0.189f,0.72f,-0.015f,0.2f,0.72f,-0.0252f,0.2f,0.72f,-0.0048f,0.21f,0.695f,-0.015f,0.19f,0.695f,-0.015f,0.2f,0.695f,-0.025f,0.2f,0.695f,-0.005f,0.2f,0.685f,-0.015f,0.215f,0.74f,-0.04f,0.185f,0.74f,-0.04f,0.2f,0.74f,-0.055f,0.2f,0.74f,-0.025f,0.21f,0.7142f,-0.04f,0.19f,0.7142f,-0.04f,0.2f,0.7142f,-0.053f,0.2f,0.7142f,-0.027f,0.21f,0.68f,-0.04f,0.19f,0.68f,-0.04f,0.2f,0.68f,-0.05f,0.2f,0.68f,-0.03f,0.2f,0.67f,-0.04f,0.212f,0.74f,-0.065f,0.188f,0.74f,-0.065f,0.2f,0.74f,-0.0756f,0.2f,0.74f,-0.0542f,0.21f,0.7177f,-0.065f,0.19f,0.7177f,-0.065f,0.2f,0.7177f,-0.0751f,0.2f,0.7177f,-0.0549f};
			return value;
		}
		private float[] getJoe_SkinCoord_7_132_point_3()
		{
			float[] value = {0.21f,0.695f,-0.065f,0.19f,0.695f,-0.065f,0.2f,0.695f,-0.075f,0.2f,0.695f,-0.055f,0.2f,0.685f,-0.065f,0.211f,0.755f,-0.085f,0.189f,0.755f,-0.085f,0.2f,0.755f,-0.0952f,0.2f,0.755f,-0.0748f,0.21f,0.735f,-0.085f,0.19f,0.735f,-0.085f,0.2f,0.735f,-0.0951f,0.2f,0.735f,-0.0749f,0.21f,0.72f,-0.085f,0.19f,0.72f,-0.085f,0.2f,0.72f,-0.095f,0.2f,0.72f,-0.075f,0.2f,0.71f,-0.085f,-0.23f,1.23f,-0.04f,-0.16f,1.23f,-0.04f,-0.2f,1.235f,-0.105f,-0.2f,1.255f,0.02f,-0.244f,1.1388f,-0.04f,-0.165f,1.1388f,-0.04f,-0.2f,1.1388f,-0.08f,-0.2f,1.1388f,0.013f,-0.225f,1.0f,-0.01f,-0.225f,1.0f,-0.07f,-0.185f,1.0f,-0.01f,-0.185f,1.0f,-0.07f,-0.2f,1.1388f,-0.04f,-0.225f,0.92f,-0.04f,-0.175f,0.92f,-0.04f,-0.2f,0.92f,-0.065f,-0.2f,0.92f,-0.015f,-0.225f,0.89f,-0.04f,-0.175f,0.89f,-0.04f,-0.2f,0.89f,-0.065f,-0.2f,0.89f,-0.015f,-0.218f,0.86f,-0.04f,-0.184f,0.86f,-0.04f,-0.2f,0.87f,-0.07f,-0.2f,0.87f,0.0f,-0.21f,0.85f,0.0f,-0.1854f,0.85f,0.0f,-0.212f,0.84f,-0.015f,-0.183f,0.84f,-0.015f,-0.213f,0.835f,-0.04f,-0.190f,0.835f,-0.04f,-0.211f,0.835f,-0.065f,-0.192f,0.835f,-0.065f,-0.208f,0.84f,-0.085f,-0.190f,0.84f,-0.085f,-0.2f,0.84f,-0.095f,-0.215f,0.82f,0.0f,-0.193f,0.815f,0.005f,-0.198f,0.80f,0.012f,-0.21f,0.82f,0.03f,-0.19f,0.82f,0.03f,-0.2f,0.835f,0.039f,-0.212f,0.8f,0.05f,-0.188f,0.8f,0.05f,-0.2f,0.807f,0.057f,-0.2f,0.793f,0.035f,-0.2f,0.774f,0.076f,-0.212f,0.78f,0.07f,-0.188f,0.78f,0.07f,-0.2f,0.785f,0.075f,-0.2f,0.77f,0.062f,-0.215f,0.793f,-0.015f,-0.187f,0.793f,-0.015f,-0.2f,0.793f,-0.005f,-0.215f,0.788f,-0.04f,-0.187f,0.788f,-0.04f,-0.215f,0.793f,-0.065f,-0.187f,0.793f,-0.065f,-0.21f,0.79f,-0.085f,-0.19f,0.79f,-0.085f,-0.2f,0.79f,-0.095f,-0.19f,0.77f,-0.0275f,-0.19f,0.77f,-0.0525f,-0.19f,0.78f,-0.0775f,-0.212f,0.745f,-0.015f,-0.188f,0.745f,-0.02f,-0.2f,0.745f,-0.0255f,-0.2f,0.745f,-0.0045f,-0.211f,0.72f,-0.015f,-0.189f,0.72f,-0.015f,-0.2f,0.72f,-0.0252f,-0.2f,0.72f,-0.0048f,-0.21f,0.695f,-0.015f,-0.19f,0.695f,-0.015f,-0.2f,0.695f,-0.025f,-0.2f,0.695f,-0.005f,-0.2f,0.685f,-0.015f,-0.215f,0.74f,-0.04f,-0.185f,0.74f,-0.04f,-0.2f,0.74f,-0.055f,-0.2f,0.74f,-0.025f,-0.21f,0.7142f,-0.04f};
			return value;
		}
		private float[] getJoe_SkinCoord_7_132_point_4()
		{
			float[] value = {-0.19f,0.7142f,-0.04f,-0.2f,0.7142f,-0.053f,-0.2f,0.7142f,-0.027f,-0.21f,0.68f,-0.04f,-0.19f,0.68f,-0.04f,-0.2f,0.68f,-0.05f,-0.2f,0.68f,-0.03f,-0.2f,0.67f,-0.04f,-0.212f,0.74f,-0.065f,-0.188f,0.74f,-0.065f,-0.2f,0.74f,-0.0756f,-0.2f,0.74f,-0.0542f,-0.21f,0.7177f,-0.065f,-0.19f,0.7177f,-0.065f,-0.2f,0.7177f,-0.0751f,-0.2f,0.7177f,-0.0549f,-0.21f,0.695f,-0.065f,-0.19f,0.695f,-0.065f,-0.2f,0.695f,-0.075f,-0.2f,0.695f,-0.055f,-0.2f,0.685f,-0.065f,-0.211f,0.755f,-0.085f,-0.189f,0.755f,-0.085f,-0.2f,0.755f,-0.0952f,-0.2f,0.755f,-0.0748f,-0.21f,0.735f,-0.085f,-0.19f,0.735f,-0.085f,-0.2f,0.735f,-0.0951f,-0.2f,0.735f,-0.0749f,-0.21f,0.72f,-0.085f,-0.19f,0.72f,-0.085f,-0.2f,0.72f,-0.095f,-0.2f,0.72f,-0.075f,-0.2f,0.71f,-0.085f,0.115f,0.466f,0.06f,0.115f,0.466f,-0.055f,0.15f,0.466f,0.0f,0.05f,0.466f,0.0f,0.17f,0.3f,0.0f,0.06f,0.3f,0.0f,0.1f,0.3f,-0.05f,0.1f,0.3f,0.05f,0.15f,0.07f,0.0f,0.085f,0.086f,0.0125f,0.115f,0.069f,-0.045f,0.117f,0.0975f,0.0615f,0.1375f,0.006f,-0.03f,0.095f,0.006f,-0.03f,0.115f,0.015f,-0.045f,0.115f,0.06f,0.1f,0.115f,0.0f,0.07f,0.165f,0.0f,0.07f,0.095f,0.0f,0.07f,0.115f,0.04f,0.13f,0.125f,0.0f,0.12f,0.165f,0.0f,0.12f,0.087f,0.0f,0.122f,0.090f,0.012f,0.188f,0.110f,0.011f,0.19f,0.128f,0.011f,0.185f,0.142f,0.011f,0.178f,0.154f,0.010f,0.168f,-0.115f,0.466f,0.06f,-0.115f,0.466f,-0.055f,-0.17f,0.466f,0.0f,-0.05f,0.466f,0.0f,-0.17f,0.3f,0.0f,-0.06f,0.3f,0.0f,-0.1f,0.3f,-0.05f,-0.1f,0.3f,0.05f,-0.15f,0.07f,0.0f,-0.085f,0.086f,0.0125f,-0.115f,0.069f,-0.045f,-0.117f,0.0975f,0.0615f,-0.1375f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.095f,0.006f,-0.03f,-0.115f,0.06f,0.1f,-0.115f,0.0f,0.07f,-0.165f,0.0f,0.07f,-0.095f,0.0f,0.07f,-0.115f,0.04f,0.13f,-0.125f,0.0f,0.12f,-0.165f,0.0f,0.12f,-0.087f,0.0f,0.122f,-0.090f,0.012f,0.188f,-0.110f,0.011f,0.19f,-0.128f,0.011f,0.185f,-0.142f,0.011f,0.178f,-0.154f,0.010f,0.168f};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getball_IndexedFaceSet_6_437_coordIndex_1()
		{
			int[] value = {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,1,-1,1,13,14,-1,1,14,2,-1,2,14,15,-1,2,15,3,-1,3,15,16,-1,3,16,4,-1,4,16,17,-1,4,17,5,-1,5,17,18,-1,5,18,6,-1,6,18,19,-1,6,19,7,-1,7,19,20,-1,7,20,8,-1,8,20,21,-1,8,21,9,-1,9,21,22,-1,9,22,10,-1,10,22,23,-1,10,23,11,-1,11,23,24,-1,11,24,12,-1,12,24,13,-1,12,13,1,-1,13,25,26,-1,13,26,14,-1,14,26,27,-1,14,27,15,-1,15,27,28,-1,15,28,16,-1,16,28,29,-1,16,29,17,-1,17,29,30,-1,17,30,18,-1,18,30,31,-1,18,31,19,-1,19,31,32,-1,19,32,20,-1,20,32,33,-1,20,33,21,-1,21,33,34,-1,21,34,22,-1,22,34,35,-1,22,35,23,-1,23,35,36,-1,23,36,24,-1,24,36,25,-1,24,25,13,-1,25,37,38,-1,25,38,26,-1,26,38,39,-1,26,39,27,-1,27,39,40,-1,27,40,28,-1,28,40,41,-1,28,41,29,-1,29,41,42,-1,29,42,30,-1,30,42,43,-1,30,43,31,-1,31,43,44,-1,31,44,32,-1,32,44,45,-1,32,45,33,-1,33,45,46,-1,33,46,34,-1,34,46,47,-1,34,47,35,-1,35,47,48,-1,35,48,36,-1,36,48,37,-1,36,37,25,-1,37,49,50,-1,37,50,38,-1,38,50,51,-1,38,51,39,-1,39,51,52,-1,39,52,40,-1,40,52,53,-1,40,53,41,-1,41,53,54,-1,41,54,42,-1,42,54,55,-1,42,55,43,-1,43,55,56,-1,43,56,44,-1,44,56,57,-1,44,57,45,-1,45,57,58,-1,45,58,46,-1,46,58,59,-1,46,59,47,-1,47,59,60,-1,47,60,48,-1,48,60,49,-1,48,49,37,-1,61,50,49,-1,61,51,50,-1,61,52,51,-1,61,53,52,-1,61,54,53,-1,61,55,54,-1,61,56,55,-1,61,57,56,-1,61,58,57,-1,61,59,58,-1,61,60,59,-1,61,49,60,-1};
			return value;
		}


		/** Large attribute array: IndexedFaceSet DEF='Joe_skin_IndexedFaceSet' coordIndex field, scene-graph level=6, element #132, 2780 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getJoe_skin_IndexedFaceSet_6_132_coordIndex()
		{
			MFInt32Object Joe_skin_IndexedFaceSet_6_132_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getJoe_skin_IndexedFaceSet_6_132_coordIndex_1()))
				.append(new MFInt32Object(getJoe_skin_IndexedFaceSet_6_132_coordIndex_2()))
				.append(new MFInt32Object(getJoe_skin_IndexedFaceSet_6_132_coordIndex_3()));
			return Joe_skin_IndexedFaceSet_6_132_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='Joe_SkinCoord' point field, scene-graph level=7, element #132, 1170 total numbers made up of 390 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getJoe_SkinCoord_7_132_point()
		{
			MFVec3fObject Joe_SkinCoord_7_132_point = new MFVec3fObject()/*2.finalize*/
				.append(new MFVec3fObject(getJoe_SkinCoord_7_132_point_1()))
				.append(new MFVec3fObject(getJoe_SkinCoord_7_132_point_2()))
				.append(new MFVec3fObject(getJoe_SkinCoord_7_132_point_3()))
				.append(new MFVec3fObject(getJoe_SkinCoord_7_132_point_4()));
			return Joe_SkinCoord_7_132_point;
		}
		/** Large attribute array: IndexedFaceSet DEF='ball_IndexedFaceSet' coordIndex field, scene-graph level=6, element #437, 480 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32Object getball_IndexedFaceSet_6_437_coordIndex()
		{
			MFInt32Object ball_IndexedFaceSet_6_437_coordIndex = new MFInt32Object()/*2.finalize*/
				.append(new MFInt32Object(getball_IndexedFaceSet_6_437_coordIndex_1()));
			return ball_IndexedFaceSet_6_437_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='Ball_Coordinates' point field, scene-graph level=7, element #437, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3fObject getBall_Coordinates_7_437_point()
		{
			MFVec3fObject Ball_Coordinates_7_437_point = new MFVec3fObject(new float[] {0.0f,0.4675f,0.0f,0.0f,0.4049f,-0.2338f,-0.1169f,0.4049f,-0.2024f,-0.2024f,0.4049f,-0.1169f,-0.2338f,0.4049f,0.0f,-0.2024f,0.4049f,0.1169f,-0.1169f,0.4049f,0.2024f,0.0f,0.4049f,0.2338f,0.1169f,0.4049f,0.2024f,0.2024f,0.4049f,0.1169f,0.2338f,0.4049f,0.0f,0.2024f,0.4049f,-0.1169f,0.1169f,0.4049f,-0.2024f,0.0f,0.2338f,-0.4049f,-0.2024f,0.2338f,-0.3506f,-0.3506f,0.2338f,-0.2024f,-0.4049f,0.2338f,0.0f,-0.3506f,0.2338f,0.2024f,-0.2024f,0.2338f,0.3506f,0.0f,0.2338f,0.4049f,0.2024f,0.2338f,0.3506f,0.3506f,0.2338f,0.2024f,0.4049f,0.2338f,0.0f,0.3506f,0.2338f,-0.2024f,0.2024f,0.2338f,-0.3506f,0.0f,0.0f,-0.4675f,-0.2338f,0.0f,-0.4049f,-0.4049f,0.0f,-0.2338f,-0.4675f,0.0f,0.0f,-0.4049f,0.0f,0.2338f,-0.2338f,0.0f,0.4049f,0.0f,0.0f,0.4675f,0.2338f,0.0f,0.4049f,0.4049f,0.0f,0.2338f,0.4675f,0.0f,0.0f,0.4049f,0.0f,-0.2338f,0.2338f,0.0f,-0.4049f,0.0f,-0.2338f,-0.4049f,-0.2024f,-0.2338f,-0.3506f,-0.3506f,-0.2338f,-0.2024f,-0.4049f,-0.2338f,0.0f,-0.3506f,-0.2338f,0.2024f,-0.2024f,-0.2338f,0.3506f,0.0f,-0.2338f,0.4049f,0.2024f,-0.2338f,0.3506f,0.3506f,-0.2338f,0.2024f,0.4049f,-0.2338f,0.0f,0.3506f,-0.2338f,-0.2024f,0.2024f,-0.2338f,-0.3506f,0.0f,-0.4049f,-0.2338f,-0.1169f,-0.4049f,-0.2024f,-0.2024f,-0.4049f,-0.1169f,-0.2338f,-0.4049f,0.0f,-0.2024f,-0.4049f,0.1169f,-0.1169f,-0.4049f,0.2024f,0.0f,-0.4049f,0.2338f,0.1169f,-0.4049f,0.2024f,0.2024f,-0.4049f,0.1169f,0.2338f,-0.4049f,0.0f,0.2024f,-0.4049f,-0.1169f,0.1169f,-0.4049f,-0.2024f,0.0f,-0.4675f,0.0f});
			return Ball_Coordinates_7_437_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return JoeSkinTexcoordDisplacerKick model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new JoeSkinTexcoordDisplacerKick().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"JoeSkinTexcoordDisplacerKick\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"JoeSkinTexcoordDisplacerKick\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

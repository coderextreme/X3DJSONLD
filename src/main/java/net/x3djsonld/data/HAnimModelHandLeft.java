package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Left hand, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelHandLeft.java">HAnimModelHandLeft.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelHandLeftIndex.html" target="_top">HAnimModelHandLeft catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelHandLeft.x3d">HAnimModelHandLeft.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left hand, using high-fidelity definitions for H-Anim version 2.2 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> YOO Kwan Hee and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 January 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> not yet to scale </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> TODO will X3D HAnim component add a new level to support LOA-4 functionality? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/working-groups/humanoid-animation-h-anim" target="_blank">https://www.web3d.org/working-groups/humanoid-animation-h-anim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D H-Anim humanoid animation </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> scene, DOCTYPE and Schema under development. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Integrate and confirm Segment/Joint names, Viewpoints. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d</a> </td>
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

	* @author YOO Kwan Hee and Don Brutzman
 */

public class HAnimModelHandLeft
{
	/** Default constructor to create this object. */
	public HAnimModelHandLeft ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_4_0)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("HAnimModelHandLeft.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Left hand, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("26 January 2015"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("not yet to scale"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("X3D H-Anim humanoid animation"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("scene, DOCTYPE and Schema under development."))
    .addMeta(new metaObject().setName(metaObject.NAME_TODO       ).setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("HAnimModelHandLeft.x3d"))
    .addChild(new HAnimHumanoidObject("Humanoid_Left_hand").setName("Humanoid_Left_hand").setJointBindingPositions(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f})).setJointBindingRotations(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f})).setJointBindingScales(new MFVec3fObject(new float[] {1.0f,1.0f,1.0f})).setLoa(-1).setSkeletalConfiguration("BASIC").setVersion("2.0")
      .addSkeleton(new HAnimJointObject("hanim_HumanoidRoot").setName("humanoid_root")
        .addChild(new HAnimJointObject("l_radiocarpal_joint").setName("l_radiocarpal_joint")
          .addChild(new HAnimSegmentObject("l_wrist").setName("l_wrist")
            .addChild(new TransformObject()
              .addChild(new ShapeObject("HAnimJointShape")
                .setGeometry(new SphereObject().setRadius(0.025f))
                .setAppearance(new AppearanceObject("HAnimJointAppearanceBlue")
                  .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.0f,1.0f)))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
              .setGeometry(new IndexedLineSetObject("RCToMC12").setDEF("RCToMC12").setCoordIndex(new int[] {0,1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.1f,0.1f,0.0f})))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
              .setGeometry(new IndexedLineSetObject("RCToMC3").setDEF("RCToMC3").setCoordIndex(new int[] {0,1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,0.07f,0.0f})))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
              .setGeometry(new IndexedLineSetObject("RCToMC45").setDEF("RCToMC45").setCoordIndex(new int[] {0,1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,-0.1f,0.1f,0.0f}))))))
          .addComments(" MC12 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_12").setName("l_midcarpal_joint_12").setCenter(0.1f,0.1f,0.0f)
            .addChild(new HAnimSegmentObject("l_trapezoid").setName("l_trapezoid")
              .addChild(new TransformObject().setTranslation(0.1f,0.1f,0.0f)
                .addChild(new ShapeObject("HAnimNewJointShape")
                  .setGeometry(new SphereObject().setRadius(0.025f))
                  .setAppearance(new AppearanceObject("HAnimJointAppearanceRed")
                    .setMaterial(new MaterialObject().setDiffuseColor(1.0f,0.0f,0.0f)))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("MC12toCMC1").setDEF("MC12toCMC1").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.1f,0.1f,0.0f,0.2f,0.15f,0.0f})))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("MC12toCMC2").setDEF("MC12toCMC2").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.1f,0.1f,0.0f,0.1f,0.2f,0.0f}))))))
            .addComments(" thumb finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_1").setName("l_carpometacarpal_joint_1").setCenter(0.2f,0.15f,0.0f)
              .addChild(new HAnimSegmentObject("l_metacarpal_1").setName("l_metacarpal_1")
                .addChild(new TransformObject().setTranslation(0.2f,0.15f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CMC1toMCP1").setDEF("CMC1toMCP1").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.2f,0.15f,0.0f,0.3f,0.3f,0.0f}))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_1").setName("l_metacarpophalangeal_joint_1").setCenter(0.3f,0.3f,0.0f)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges1").setName("l_proximal_phalanges1")
                  .addChild(new TransformObject().setTranslation(0.3f,0.3f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("MCP11toIP1").setDEF("MCP11toIP1").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.3f,0.3f,0.0f,0.35f,0.4f,0.0f}))))))
                .addChild(new HAnimJointObject("l_interphalangeal_joint_1").setName("l_interphalangeal_joint_1").setCenter(0.35f,0.4f,0.0f)
                  .addChild(new HAnimSegmentObject("l_distal_phalanges1").setName("l_distal_phalanges1")
                    .addChild(new TransformObject().setTranslation(0.35f,0.4f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("fingertip_l_interphalangeal_joint_1").setDEF("fingertip_l_interphalangeal_joint_1").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.35f,0.4f,0.0f,0.36f,0.45f,0.0f})))))))))
            .addComments(" index finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_2").setName("l_carpometacarpal_joint_2").setCenter(0.1f,0.2f,0.0f)
              .addChild(new HAnimSegmentObject("l_metacarpal2").setName("l_metacarpal2")
                .addChild(new TransformObject().setTranslation(0.1f,0.2f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CMC2toMCP2").setDEF("CMC2toMCP2").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.1f,0.2f,0.0f,0.15f,0.5f,0.0f}))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_2").setName("l_metacarpophalangeal_joint_2").setCenter(0.15f,0.5f,0.0f)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges2").setName("l_proximal_phalanges2")
                  .addChild(new TransformObject().setTranslation(0.15f,0.5f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("MCP2toPIP2").setDEF("MCP2toPIP2").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.15f,0.5f,0.0f,0.2f,0.7f,0.0f}))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_2").setName("l_proximal_interphalangeal_joint_2").setCenter(0.2f,0.7f,0.0f)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges2").setName("l_middle_phalanges2")
                    .addChild(new TransformObject().setTranslation(0.2f,0.7f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.2f,0.7f,0.0f,0.24f,0.87f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_2").setName("l_distal_interphalangeal_joint_2").setCenter(0.24f,0.87f,0.0f)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges2").setName("l_distal_phalanges2")
                      .addChild(new TransformObject().setTranslation(0.24f,0.87f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_2").setDEF("fingertip_l_distal_interphalangeal_joint_2").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.24f,0.87f,0.0f,0.26f,0.93f,0.0f})))))))))))
          .addComments(" MC3 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_3").setName("l_midcarpal_joint_3").setCenter(0.0f,0.07f,0.0f)
            .addChild(new HAnimSegmentObject("l_capitate").setName("l_capitate")
              .addChild(new TransformObject().setTranslation(0.0f,0.07f,0.0f)
                .addChild(new ShapeObject().setUSE("HAnimNewJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("MC3toCMC3").setDEF("MC3toCMC3").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.07f,0.0f,0.0f,0.2f,0.0f}))))))
            .addComments(" Middle fingle ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_3").setName("l_carpometacarpal_joint_3").setCenter(0.0f,0.2f,0.0f)
              .addChild(new HAnimSegmentObject("l_metacarpal3").setName("l_metacarpal3")
                .addChild(new TransformObject().setTranslation(0.0f,0.2f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CMC3toMCP3").setDEF("CMC3toMCP3").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.2f,0.0f,0.03f,0.5f,0.0f}))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_3").setName("l_metacarpophalangeal_joint_3").setCenter(0.03f,0.5f,0.0f)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges3").setName("l_proximal_phalanges3")
                  .addChild(new TransformObject().setTranslation(0.03f,0.5f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("MCP3toPIP3").setDEF("MCP3toPIP3").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.03f,0.5f,0.0f,0.05f,0.75f,0.0f}))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_3").setName("l_proximal_interphalangeal_joint_3").setCenter(0.05f,0.75f,0.0f)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges3").setName("l_middle_phalanges3")
                    .addChild(new TransformObject().setTranslation(0.05f,0.75f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.05f,0.75f,0.0f,0.08f,0.96f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_3").setName("l_distal_interphalangeal_joint_3").setCenter(0.08f,0.96f,0.0f)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges3").setName("l_distal_phalanges3")
                      .addChild(new TransformObject().setTranslation(0.08f,0.96f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_3").setDEF("fingertip_l_distal_interphalangeal_joint_3").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.08f,0.96f,0.0f,0.09f,1.05f,0.0f})))))))))))
          .addComments(" MC45 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_45").setName("l_midcarpal_joint_12").setCenter(-0.1f,0.1f,0.0f)
            .addChild(new HAnimSegmentObject("l_hamate").setName("l_hamate")
              .addChild(new TransformObject().setTranslation(-0.1f,0.1f,0.0f)
                .addChild(new ShapeObject().setUSE("HAnimNewJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("MC45toCMC4").setDEF("MC45toCMC4").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.1f,0.0f,-0.1f,0.2f,0.0f})))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("MC45toCMC5").setDEF("MC45toCMC5").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.1f,0.0f,-0.15f,0.17f,0.0f}))))))
            .addComments(" ring finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_4").setName("l_carpometacarpal_joint_4").setCenter(-0.1f,0.2f,0.0f)
              .addChild(new HAnimSegmentObject("l_metacarpal4").setName("l_metacarpal4")
                .addChild(new TransformObject().setTranslation(-0.1f,0.2f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CMC4toMCP4").setDEF("CMC4toMCP4").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.2f,0.0f,-0.1f,0.47f,0.0f}))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_4").setName("l_metacarpophalangeal_joint_4").setCenter(-0.1f,0.47f,0.0f)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges4").setName("l_proximal_phalanges4")
                  .addChild(new TransformObject().setTranslation(-0.1f,0.47f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("MCP4toPIP4").setDEF("MCP4toPIP4").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.47f,0.0f,-0.1f,0.7f,0.0f}))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_4").setName("l_proximal_interphalangeal_joint_4").setCenter(-0.1f,0.7f,0.0f)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges4").setName("l_middle_phalanges4")
                    .addChild(new TransformObject().setTranslation(-0.1f,0.7f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.7f,0.0f,-0.1f,0.93f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_4").setName("l_distal_interphalangeal_joint_4").setCenter(-0.1f,0.93f,0.0f)
                    .addChild(new HAnimSegmentObject("l_distal_phalanx4").setName("l_distal_phalanx4")
                      .addChild(new TransformObject().setTranslation(-0.1f,0.93f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_4").setDEF("fingertip_l_distal_interphalangeal_joint_4").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,0.93f,0.0f,-0.1f,1.0f,0.0f}))))))))))
            .addComments(" pinky finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_5").setName("l_carpometacarpal_joint_5").setCenter(-0.15f,0.17f,0.0f)
              .addChild(new HAnimSegmentObject("l_metacarpal5").setName("l_metacarpal5")
                .addChild(new TransformObject().setTranslation(-0.15f,0.17f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CMC5toMCP5").setDEF("CMC5toMCP5").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.15f,0.17f,0.0f,-0.2f,0.4f,0.0f}))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_5").setName("l_metacarpophalangeal_joint_5").setCenter(-0.2f,0.4f,0.0f)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges5").setName("l_proximal_phalanges2")
                  .addChild(new TransformObject().setTranslation(-0.2f,0.4f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("MCP5toPIP5").setDEF("MCP5toPIP5").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.2f,0.4f,0.0f,-0.23f,0.63f,0.0f}))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_5").setName("l_proximal_interphalangeal_joint_5").setCenter(-0.23f,0.63f,0.0f)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges5").setName("l_middle_phalanges5")
                    .addChild(new TransformObject().setTranslation(-0.23f,0.63f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.23f,0.63f,0.0f,-0.25f,0.79f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_5").setName("l_distal_interphalangeal_joint_5").setCenter(-0.25f,0.79f,0.0f)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges5").setName("l_distal_phalanges5")
                      .addChild(new TransformObject().setTranslation(-0.25f,0.79f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_5").setDEF("fingertip_l_distal_interphalangeal_joint_5").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.25f,0.79f,0.0f,-0.26f,0.85f,0.0f})))))))))))))
      .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
      .addJoints(new HAnimJointObject().setUSE("l_radiocarpal_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_12"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_interphalangeal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_45"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_wrist"))
      .addSegments(new HAnimSegmentObject().setUSE("l_trapezoid"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal_1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_capitate"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_hamate"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanx4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges5"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return HAnimModelHandLeft model
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
        X3DObject thisExampleX3dObject = new HAnimModelHandLeft().getX3dModel();

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
			System.out.println("WARNING: \"HAnimModelHandLeft\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"HAnimModelHandLeft\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

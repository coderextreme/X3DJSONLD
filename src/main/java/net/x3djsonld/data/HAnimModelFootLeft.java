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
 * <p> Left foot, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelFootLeft.java">HAnimModelFootLeft.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelFootLeftIndex.html" target="_top">HAnimModelFootLeft catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelFootLeft.x3d">HAnimModelFootLeft.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left foot, using high-fidelity definitions for H-Anim version 2.2 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d</a> </td>
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

public class HAnimModelFootLeft
{
	/** Default constructor to create this object. */
	public HAnimModelFootLeft ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_4_0)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("HAnimModelFootLeft.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Left foot, using high-fidelity definitions for H-Anim version 2.2"))
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
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("HAnimModelFootLeft.x3d"))
    .addChild(new HAnimHumanoidObject("Humanoid_Left_Foot").setName("Humanoid_Left_Foot").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimHumanoid displayBBox: $isNumeric=false, $attributeType=, value='false']
).setInfo(new String[] {"humanoidVersion=2.0"}).setJointBindingPositions(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f})).setJointBindingRotations(new MFRotationObject(new float[] {0.0f,0.0f,1.0f,0.0f})).setJointBindingScales(new MFVec3fObject(new float[] {1.0f,1.0f,1.0f})).setLoa(-1).setSkeletalConfiguration("BASIC").setVersion("2.0")
      .addSkeleton(new HAnimJointObject("hanim_HumanoidRoot").setName("humanoid_root").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
        .addChild(new HAnimJointObject("l_talocrural_joint").setName("l_talocrural_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
          .addChild(new HAnimSegmentObject("l_talus").setName("l_talus").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new ShapeObject("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setGeometry(new SphereObject().setRadius(0.025f))
                .setAppearance(new AppearanceObject("HAnimJointAppearance")
                  .setMaterial(new MaterialObject().setDiffuseColor(0.0f,0.0f,1.0f)))))
            .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
              .setGeometry(new IndexedLineSetObject("TCtoTCN").setDEF("TCtoTCN").setCoordIndex(new int[] {0,1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.0f,-0.3f,0.0f})))))
            .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
              .setGeometry(new IndexedLineSetObject("TCtoCC").setDEF("TCtoCC").setCoordIndex(new int[] {0,1})
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,0.0f,0.0f,0.2f,0.3f,0.0f}))))))
          .addComments(" TCN ")
          .addChild(new HAnimJointObject("l_talocalcaneonavicular_joint").setName("l_talocalcaneonavicular_joint").setCenter(0.0f,-0.3f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new HAnimSegmentObject("l_navicular").setName("l_navicular").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,-0.3f,0.0f)
                .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
              .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("TCNtoCN1").setDEF("TCNtoCN1").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,-0.3f,0.0f,-0.1f,-0.45f,0.0f})))))
              .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("TCNtoCN2").setDEF("TCNtoCN2").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,-0.3f,0.0f,0.0f,-0.45f,0.0f})))))
              .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("TCNtoCN3").setDEF("TCNtoCN3").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,-0.3f,0.0f,0.1f,-0.4f,0.0f}))))))
            .addComments(" CN1 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint1").setName("l_cuneonavicular_joint1").setCenter(-0.1f,-0.45f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("l_cuneiform1").setName("l_cuneiform1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-0.1f,-0.45f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CN1toTMT1").setDEF("CN1toTMT1").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,-0.45f,0.0f,-0.1f,-0.6f,0.0f}))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint1").setName("l_tarsometatarsal_joint1").setCenter(-0.1f,-0.6f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("l_metatarsal1").setName("l_metatarsal1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-0.1f,-0.6f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("TMT1toMTP1").setDEF("TMT1toMTP1").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,-0.6f,0.0f,-0.1f,-0.9f,0.0f}))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint1").setName("l_metatarsophalangeal_joint1").setCenter(-0.1f,-0.9f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges1").setName("l_proximal_phalanges1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-0.1f,-0.9f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("MTP1toIP1").setDEF("MTP1toIP1").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,-0.9f,0.0f,-0.1f,-1.05f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_f_Interphalangeal_joint").setName("l_f_Interphalangeal_joint").setCenter(-0.1f,-1.05f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges1").setName("l_distal_phalanges1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-0.1f,-1.05f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("tiptoe_l_distal_phalanges1").setDEF("tiptoe_l_distal_phalanges1").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {-0.1f,-1.05f,0.0f,-0.1f,-1.1f,0.0f}))))))))))
            .addComments(" CN2 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint2").setName("l_cuneonavicular_joint2").setCenter(0.0f,-0.45f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("l_cuneiform2").setName("l_cuneiform2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.0f,-0.45f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CN2toTMT2").setDEF("CN2toTMT2").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.0f,-0.45f,0.0f,0.05f,-0.6f,0.0f}))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint2").setName("l_tarsometatarsal_joint2").setCenter(0.05f,-0.6f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("l_metatarsal2").setName("l_metatarsal2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.05f,-0.6f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("TMT2toMTP2").setDEF("TMT2toMTP2").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.05f,-0.6f,0.0f,0.05f,-0.9f,0.0f}))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint2").setName("l_metatarsophalangeal_joint2").setCenter(0.05f,-0.9f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges2").setName("l_proximal_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.05f,-0.9f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("MTP2toPIP2").setDEF("MTP2toPIP2").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.05f,-0.9f,0.0f,0.05f,-1.05f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint2").setName("l_f_proximal_Interphalangeal_joint2").setCenter(0.05f,-1.05f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges2").setName("l_middle_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.05f,-1.05f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.05f,-1.05f,0.0f,0.05f,-1.12f,0.0f}))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint2").setName("l_f_distal_Interphalangeal_joint2").setCenter(0.05f,-1.12f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges2").setName("l_distal_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.05f,-1.12f,0.0f)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                        .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint2").setDEF("tiptoe_l_f_distal_Interphalangeal_joint2").setCoordIndex(new int[] {0,1})
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.05f,-1.12f,0.0f,0.05f,-1.16f,0.0f})))))))))))
            .addComments(" CN3 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint3").setName("l_cuneonavicular_joint3").setCenter(0.1f,-0.4f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("l_cuneiform3").setName("l_cuneiform3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.1f,-0.4f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("CN3toTMT3").setDEF("CN3toTMT3").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.1f,-0.4f,0.0f,0.15f,-0.6f,0.0f}))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint3").setName("l_tarsometatarsal_joint3").setCenter(0.15f,-0.6f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("l_metatarsal3").setName("l_metatarsal3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.15f,-0.6f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("TMT3toMTP3").setDEF("TMT3toMTP3").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.15f,-0.6f,0.0f,0.15f,-0.9f,0.0f}))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint3").setName("l_metatarsophalangeal_joint3").setCenter(0.15f,-0.9f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges3").setName("l_proximal_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.15f,-0.9f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("MTP3toPIP3").setDEF("MTP3toPIP3").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.15f,-0.9f,0.0f,0.15f,-1.05f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint3").setName("l_f_proximal_Interphalangeal_joint3").setCenter(0.15f,-1.05f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges3").setName("l_middle_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.15f,-1.05f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.15f,-1.05f,0.0f,0.15f,-1.13f,0.0f}))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint3").setName("l_f_distal_Interphalangeal_joint3").setCenter(0.15f,-1.13f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges3").setName("l_distal_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.15f,-1.13f,0.0f)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                        .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint3").setDEF("tiptoe_l_f_distal_Interphalangeal_joint3").setCoordIndex(new int[] {0,1})
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.15f,-1.13f,0.0f,0.15f,-1.16f,0.0f}))))))))))))
          .addComments(" CC ")
          .addChild(new HAnimJointObject("l_calcaneuscuboid_joint").setName("l_calcaneuscuboid_joint").setCenter(0.2f,0.3f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
            .addChild(new HAnimSegmentObject("l_calcaneus").setName("l_calcaneus").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.2f,0.3f,0.0f)
                .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
              .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                .setGeometry(new IndexedLineSetObject("CCtoTT").setDEF("CCtoTT").setCoordIndex(new int[] {0,1})
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.2f,0.3f,0.0f,0.21f,-0.3f,0.0f}))))))
            .addComments(" TT ")
            .addChild(new HAnimJointObject("l_transverse_tarsal_joint").setName("l_transverse_tarsal_joint").setCenter(0.21f,-0.3f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
              .addChild(new HAnimSegmentObject("l_cuboid").setName("l_cuboid").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.21f,-0.3f,0.0f)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("TTtoTMT4").setDEF("TTtoTMT4").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.21f,-0.3f,0.0f,0.25f,-0.58f,0.0f})))))
                .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                  .setGeometry(new IndexedLineSetObject("TTtoTMT5").setDEF("TTtoTMT5").setCoordIndex(new int[] {0,1})
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.21f,-0.3f,0.0f,0.33f,-0.52f,0.0f}))))))
              .addComments(" TMT4 ")
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint4").setName("l_tarsometatarsal_joint4").setCenter(0.25f,-0.58f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("l_metatarsal4").setName("l_metatarsal4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.25f,-0.58f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("TMT4toMTP4").setDEF("TMT4toMTP4").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.25f,-0.58f,0.0f,0.25f,-0.87f,0.0f}))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint4").setName("l_metatarsophalangeal_joint4").setCenter(0.25f,-0.87f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges4").setName("l_proximal_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.25f,-0.87f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("MTP4toPIP4").setDEF("MTP4toPIP4").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.25f,-0.87f,0.0f,0.25f,-1.0f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint4").setName("l_f_proximal_Interphalangeal_joint4").setCenter(0.25f,-1.0f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges4").setName("l_middle_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.25f,-1.0f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.25f,-1.0f,0.0f,0.25f,-1.1f,0.0f}))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint4").setName("l_f_distal_Interphalangeal_joint4").setCenter(0.25f,-1.1f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges4").setName("l_distal_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.25f,-1.1f,0.0f)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                        .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint4").setDEF("tiptoe_l_f_distal_Interphalangeal_joint4").setCoordIndex(new int[] {0,1})
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.25f,-1.1f,0.0f,0.25f,-1.15f,0.0f}))))))))))
              .addComments(" TMT5 ")
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint5").setName("l_tarsometatarsal_joint5").setCenter(0.33f,-0.52f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                .addChild(new HAnimSegmentObject("l_metatarsal5").setName("l_metatarsal5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.33f,-0.52f,0.0f)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                  .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                    .setGeometry(new IndexedLineSetObject("TMT5toMTP5").setDEF("TMT5toMTP5").setCoordIndex(new int[] {0,1})
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.33f,-0.52f,0.0f,0.34f,-0.8f,0.0f}))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint5").setName("l_metatarsophalangeal_joint5").setCenter(0.34f,-0.8f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges5").setName("l_proximal_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.34f,-0.8f,0.0f)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                    .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                      .setGeometry(new IndexedLineSetObject("MTP5toPIP5").setDEF("MTP5toPIP5").setCoordIndex(new int[] {0,1})
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.34f,-0.8f,0.0f,0.34f,-0.95f,0.0f}))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint5").setName("l_f_proximal_Interphalangeal_joint5").setCenter(0.34f,-0.95f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges5").setName("l_middle_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.34f,-0.95f,0.0f)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                      .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                        .setGeometry(new IndexedLineSetObject("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(new int[] {0,1})
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.34f,-0.95f,0.0f,0.34f,-1.05f,0.0f}))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint5").setName("l_f_distal_Interphalangeal_joint5").setCenter(0.34f,-1.05f,0.0f).setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges5").setName("l_distal_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                        .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(0.34f,-1.05f,0.0f)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
                        .addChild(new ShapeObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Shape displayBBox: $isNumeric=false, $attributeType=, value='false']
)
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject().setEmissiveColor(1.0f,1.0f,1.0f)))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint5").setDEF("tiptoe_l_f_distal_Interphalangeal_joint5").setCoordIndex(new int[] {0,1})
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new float[] {0.34f,-1.05f,0.0f,0.34f,-1.08f,0.0f}))))))))))))))
      .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_talocrural_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_talocalcaneonavicular_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_Interphalangeal_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_calcaneuscuboid_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_transverse_tarsal_joint").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimJoint displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_talus").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_navicular").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges1").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges2").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges3").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_calcaneus").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuboid").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges4").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges5").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, HAnimSegment displayBBox: $isNumeric=false, $attributeType=, value='false']
))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return HAnimModelFootLeft model
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
        X3DObject thisExampleX3dObject = new HAnimModelFootLeft().getX3dModel();

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
			System.out.println("WARNING: \"HAnimModelFootLeft\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"HAnimModelFootLeft\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}

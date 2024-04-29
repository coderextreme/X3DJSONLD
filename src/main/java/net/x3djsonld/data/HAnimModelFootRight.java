package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Right foot, using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links:  source HAnimModelFootRight.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimModelFootRight&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d">HAnimModelFootRight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Right foot, using high-fidelity definitions for HAnim version 2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Kwan-Hee YOO, Don Brutzman and Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 January 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 December 2021 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> not yet to scale </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Update all values to match HAnim2 A.7 Level of articulation four LOA-4 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Add links to figures </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Add Viewpoints to enable inspection </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> TODO will X3D HAnim component add a new level to support LOA-4 functionality? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/working-groups/humanoid-animation-HAnim" target="_blank">https://www.web3d.org/working-groups/humanoid-animation-HAnim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D HAnim humanoid animation </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Integrate and confirm Segment/Joint names, Viewpoints. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/../license.html">../license.html</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Kwan-Hee YOO, Don Brutzman and Joe Williams
 */

public class HAnimModelFootRight
{
	/** Default constructor to create this object. */
	public HAnimModelFootRight ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Right foot, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 January 2015"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 December 2021"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("not yet to scale"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Add links to figures"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Add Viewpoints to enable inspection"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D HAnim humanoid animation"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelFootRight.x3d"))
    .addChild(new HAnimHumanoid("hanim_Foot_Right").setName("Foot_Right").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root")
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model ")
        .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setDescription("connection joint of foot to leg above")
          .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
            .addChild(new Transform()
              .addChild(new Shape("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.025))
                .setAppearance(new Appearance("HAnimJointAppearance")
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSet("TCtoTCN").setDEF("TCtoTCN").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.3,0.0})))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSet("TCtoCC").setDEF("TCtoCC").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-0.2,0.3,0.0}))))))
          .addComments(" TCN ")
          .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(0.0,-0.3,0.0)
            .addChild(new HAnimSegment("hanim_r_navicular").setName("r_navicular")
              .addChild(new Transform().setTranslation(0.0,-0.3,0.0)
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("TCNtoCN1").setDEF("TCNtoCN1").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,0.1,-0.45,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("TCNtoCN2").setDEF("TCNtoCN2").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,0.0,-0.45,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("TCNtoCN3").setDEF("TCNtoCN3").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,-0.1,-0.4,0.0}))))))
            .addComments(" CN1 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(0.1,-0.45,0.0)
              .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName("r_cuneiform_1")
                .addChild(new Transform().setTranslation(0.1,-0.45,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CN1toTMT1").setDEF("CN1toTMT1").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.45,0.0,0.1,-0.6,0.0}))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(0.1,-0.6,0.0)
                .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName("r_metatarsal_1")
                  .addChild(new Transform().setTranslation(0.1,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("TMT1toMTP1").setDEF("TMT1toMTP1").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.6,0.0,0.1,-0.9,0.0}))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(0.1,-0.9,0.0)
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_proximal_phalanx_1")
                    .addChild(new Transform().setTranslation(0.1,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("MTP1toIP1").setDEF("MTP1toIP1").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.9,0.0,0.1,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1").setCenter(0.1,-1.05,0.0)
                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName("r_tarsal_distal_phalanx_1")
                      .addChild(new Transform().setTranslation(0.1,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("tiptoe_r_interphalangeal_").setDEF("tiptoe_r_interphalangeal_").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-1.05,0.0,0.1,-1.1,0.0}))))))))))
            .addComments(" CN2 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(0.0,-0.45,0.0)
              .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName("r_cuneiform_2")
                .addChild(new Transform().setTranslation(0.0,-0.45,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CN2toTMT2").setDEF("CN2toTMT2").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.45,0.0,-0.05,-0.6,0.0}))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(-0.05,-0.6,0.0)
                .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                  .addChild(new Transform().setTranslation(-0.05,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("TMT2toMTP2").setDEF("TMT2toMTP2").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-0.6,0.0,-0.05,-0.9,0.0}))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(-0.05,-0.9,0.0)
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                    .addChild(new Transform().setTranslation(-0.05,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("MTP2toPIP2").setDEF("MTP2toPIP2").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-0.9,0.0,-0.05,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setCenter(-0.05,-1.05,0.0)
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_middle_phalanx_2")
                      .addChild(new Transform().setTranslation(-0.05,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-1.05,0.0,-0.05,-1.12,0.0}))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.05,-1.12,0.0)
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2")
                        .addChild(new Transform().setTranslation(-0.05,-1.12,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_2").setDEF("tiptoe_r_tarsal_distal_interphalangeal_2").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-1.12,0.0,-0.05,-1.16,0.0})))))))))))
            .addComments(" CN3 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(-0.1,-0.4,0.0)
              .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName("r_cuneiform_3")
                .addChild(new Transform().setTranslation(-0.1,-0.4,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CN3toTMT3").setDEF("CN3toTMT3").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,-0.4,0.0,-0.15,-0.6,0.0}))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(-0.15,-0.6,0.0)
                .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName("r_metatarsal_3")
                  .addChild(new Transform().setTranslation(-0.15,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("TMT3toMTP3").setDEF("TMT3toMTP3").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-0.6,0.0,-0.15,-0.9,0.0}))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(-0.15,-0.9,0.0)
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_proximal_phalanx_3")
                    .addChild(new Transform().setTranslation(-0.15,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("MTP3toPIP3").setDEF("MTP3toPIP3").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-0.9,0.0,-0.15,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setCenter(-0.15,-1.05,0.0)
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_middle_phalanx_3")
                      .addChild(new Transform().setTranslation(-0.15,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-1.05,0.0,-0.15,-1.13,0.0}))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setCenter(-0.15,-1.13,0.0)
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName("r_tarsal_distal_phalanx_3")
                        .addChild(new Transform().setTranslation(-0.15,-1.13,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_3").setDEF("tiptoe_r_tarsal_distal_interphalangeal_3").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-1.13,0.0,-0.15,-1.16,0.0}))))))))))))
          .addComments(" CC ")
          .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(-0.2,0.3,0.0)
            .addChild(new HAnimSegment("hanim_r_calcaneus").setName("r_calcaneus")
              .addChild(new Transform().setTranslation(-0.2,0.3,0.0)
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("CCtoTT").setDEF("CCtoTT").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.2,0.3,0.0,-0.21,-0.3,0.0}))))))
            .addComments(" TT ")
            .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(-0.21,-0.3,0.0)
              .addChild(new HAnimSegment("hanim_r_cuboid").setName("r_cuboid")
                .addChild(new Transform().setTranslation(-0.21,-0.3,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("TTtoTMT4").setDEF("TTtoTMT4").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.21,-0.3,0.0,-0.25,-0.58,0.0})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("TTtoTMT5").setDEF("TTtoTMT5").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.21,-0.3,0.0,-0.33,-0.52,0.0}))))))
              .addComments(" TMT4 ")
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(-0.25,-0.58,0.0)
                .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName("r_metatarsal_4")
                  .addChild(new Transform().setTranslation(-0.25,-0.58,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("TMT4toMTP4").setDEF("TMT4toMTP4").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-0.58,0.0,-0.25,-0.87,0.0}))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(-0.25,-0.87,0.0)
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_proximal_phalanx_4")
                    .addChild(new Transform().setTranslation(-0.25,-0.87,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("MTP4toPIP4").setDEF("MTP4toPIP4").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-0.87,0.0,-0.25,-1.0,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setCenter(-0.25,-1.0,0.0)
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_middle_phalanx_4")
                      .addChild(new Transform().setTranslation(-0.25,-1.0,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-1.0,0.0,-0.25,-1.1,0.0}))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setCenter(-0.25,-1.1,0.0)
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName("r_tarsal_distal_phalanx_4")
                        .addChild(new Transform().setTranslation(-0.25,-1.1,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_4").setDEF("tiptoe_r_tarsal_distal_interphalangeal_4").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-1.1,0.0,-0.25,-1.15,0.0}))))))))))
              .addComments(" TMT5 ")
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(-0.33,-0.52,0.0)
                .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName("r_metatarsal_5")
                  .addChild(new Transform().setTranslation(-0.33,-0.52,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("TMT5toMTP5").setDEF("TMT5toMTP5").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.33,-0.52,0.0,-0.34,-0.8,0.0}))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(-0.34,-0.8,0.0)
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_proximal_phalanx_5")
                    .addChild(new Transform().setTranslation(-0.34,-0.8,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("MTP5toPIP5").setDEF("MTP5toPIP5").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-0.8,0.0,-0.34,-0.95,0.0}))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setCenter(-0.34,-0.95,0.0)
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_middle_phalanx_5")
                      .addChild(new Transform().setTranslation(-0.34,-0.95,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-0.95,0.0,-0.34,-1.05,0.0}))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setCenter(-0.34,-1.05,0.0)
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName("r_tarsal_distal_phalanx_5")
                        .addChild(new Transform().setTranslation(-0.34,-1.05,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_5").setDEF("tiptoe_r_tarsal_distal_interphalangeal_5").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-1.05,0.0,-0.34,-1.08,0.0}))))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_calcaneus"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_cuboid"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_cuneiform_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_metatarsal_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_navicular"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_talus"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_distal_phalanx_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_middle_phalanx_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_r_tarsal_proximal_phalanx_5"))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HAnimModelFootRight model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new HAnimModelFootRight().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimModelFootRight\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimModelFootRight self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

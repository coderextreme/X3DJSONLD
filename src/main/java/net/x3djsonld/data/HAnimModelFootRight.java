package net.x3djsonld.data;

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
 * <p> Right foot, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelFootRight.java">HAnimModelFootRight.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelFootRightIndex.html" target="_top">HAnimModelFootRight catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelFootRight.x3d">HAnimModelFootRight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Right foot, using high-fidelity definitions for H-Anim version 2.2 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d</a> </td>
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
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("H-Anim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Right foot, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 January 2015"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("not yet to scale"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D H-Anim humanoid animation"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("scene, DOCTYPE and Schema under development."))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelFootRight.x3d"))
    .addChild(new HAnimHumanoid("Humanoid_Right_Foot").setName("Humanoid_Right_Foot").setVersion("2.0")
      .addSkeleton(new HAnimJoint("hanim_HumanoidRoot").setName("humanoid_root")
        .addChild(new HAnimJoint("r_talocrural_joint").setName("r_talocrural_joint")
          .addChild(new HAnimSegment("r_talus").setName("r_talus")
            .addChild(new Transform()
              .addChild(new Shape("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.025))
                .setAppearance(new Appearance("HAnimJointAppearance")
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new IndexedLineSet("TCtoTCN").setDEF("TCtoTCN").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,-0.3,0.0})))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new IndexedLineSet("TCtoCC").setDEF("TCtoCC").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-0.2,0.3,0.0}))))))
          .addComments(" TCN ")
          .addChild(new HAnimJoint("r_talocalcaneonavicular_joint").setName("r_talocalcaneonavicular_joint").setCenter(0.0,-0.3,0.0)
            .addChild(new HAnimSegment("r_navicular").setName("r_navicular")
              .addChild(new Transform().setTranslation(0.0,-0.3,0.0)
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new IndexedLineSet("TCNtoCN1").setDEF("TCNtoCN1").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,0.1,-0.45,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new IndexedLineSet("TCNtoCN2").setDEF("TCNtoCN2").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,0.0,-0.45,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new IndexedLineSet("TCNtoCN3").setDEF("TCNtoCN3").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.3,0.0,-0.1,-0.4,0.0}))))))
            .addComments(" CN1 ")
            .addChild(new HAnimJoint("r_cuneonavicular_joint1").setName("r_cuneonavicular_joint1").setCenter(0.1,-0.45,0.0)
              .addChild(new HAnimSegment("r_cuneiform1").setName("r_cuneiform1")
                .addChild(new Transform().setTranslation(0.1,-0.45,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new IndexedLineSet("CN1toTMT1").setDEF("CN1toTMT1").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.45,0.0,0.1,-0.6,0.0}))))))
              .addChild(new HAnimJoint("r_tarsometatarsal_joint1").setName("r_tarsometatarsal_joint1").setCenter(0.1,-0.6,0.0)
                .addChild(new HAnimSegment("r_metatarsal1").setName("r_metatarsal1")
                  .addChild(new Transform().setTranslation(0.1,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()))
                    .setGeometry(new IndexedLineSet("TMT1toMTP1").setDEF("TMT1toMTP1").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.6,0.0,0.1,-0.9,0.0}))))))
                .addChild(new HAnimJoint("r_metatarsophalangeal_joint1").setName("r_metatarsophalangeal_joint1").setCenter(0.1,-0.9,0.0)
                  .addChild(new HAnimSegment("r_proximal_phalanges1").setName("r_proximal_phalanges1")
                    .addChild(new Transform().setTranslation(0.1,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))
                      .setGeometry(new IndexedLineSet("MTP1toIP1").setDEF("MTP1toIP1").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-0.9,0.0,0.1,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("r_f_Interphalangeal_joint").setName("r_f_Interphalangeal_joint").setCenter(0.1,-1.05,0.0)
                    .addChild(new HAnimSegment("r_distal_phalanges1").setName("r_distal_phalanges1")
                      .addChild(new Transform().setTranslation(0.1,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new IndexedLineSet("tiptoe_r_f_Interphalangeal_joint").setDEF("tiptoe_r_f_Interphalangeal_joint").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,-1.05,0.0,0.1,-1.1,0.0}))))))))))
            .addComments(" CN2 ")
            .addChild(new HAnimJoint("r_cuneonavicular_joint2").setName("r_cuneonavicular_joint2").setCenter(0.0,-0.45,0.0)
              .addChild(new HAnimSegment("r_cuneiform2").setName("r_cuneiform2")
                .addChild(new Transform().setTranslation(0.0,-0.45,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new IndexedLineSet("CN2toTMT2").setDEF("CN2toTMT2").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,-0.45,0.0,-0.05,-0.6,0.0}))))))
              .addChild(new HAnimJoint("r_tarsometatarsal_joint2").setName("r_tarsometatarsal_joint2").setCenter(-0.05,-0.6,0.0)
                .addChild(new HAnimSegment("r_metatarsal2").setName("r_metatarsal2")
                  .addChild(new Transform().setTranslation(-0.05,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()))
                    .setGeometry(new IndexedLineSet("TMT2toMTP2").setDEF("TMT2toMTP2").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-0.6,0.0,-0.05,-0.9,0.0}))))))
                .addChild(new HAnimJoint("r_metatarsophalangeal_joint2").setName("r_metatarsophalangeal_joint2").setCenter(-0.05,-0.9,0.0)
                  .addChild(new HAnimSegment("r_proximal_phalanges2").setName("r_proximal_phalanges2")
                    .addChild(new Transform().setTranslation(-0.05,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))
                      .setGeometry(new IndexedLineSet("MTP2toPIP2").setDEF("MTP2toPIP2").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-0.9,0.0,-0.05,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("r_f_proximal_Interphalangeal_joint2").setName("r_f_proximal_Interphalangeal_joint2").setCenter(-0.05,-1.05,0.0)
                    .addChild(new HAnimSegment("r_middle_phalanges2").setName("r_middle_phalanges2")
                      .addChild(new Transform().setTranslation(-0.05,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new IndexedLineSet("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-1.05,0.0,-0.05,-1.12,0.0}))))))
                    .addChild(new HAnimJoint("r_f_distal_Interphalangeal_joint2").setName("r_f_distal_Interphalangeal_joint2").setCenter(-0.05,-1.12,0.0)
                      .addChild(new HAnimSegment("r_distal_phalanges2").setName("r_distal_phalanges2")
                        .addChild(new Transform().setTranslation(-0.05,-1.12,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))
                          .setGeometry(new IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint2").setDEF("tiptoe_r_f_distal_Interphalangeal_joint2").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.05,-1.12,0.0,-0.05,-1.16,0.0})))))))))))
            .addComments(" CN3 ")
            .addChild(new HAnimJoint("r_cuneonavicular_joint3").setName("r_cuneonavicular_joint3").setCenter(-0.1,-0.4,0.0)
              .addChild(new HAnimSegment("r_cuneiform3").setName("r_cuneiform3")
                .addChild(new Transform().setTranslation(-0.1,-0.4,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new IndexedLineSet("CN3toTMT3").setDEF("CN3toTMT3").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,-0.4,0.0,-0.15,-0.6,0.0}))))))
              .addChild(new HAnimJoint("r_tarsometatarsal_joint3").setName("r_tarsometatarsal_joint3").setCenter(-0.15,-0.6,0.0)
                .addChild(new HAnimSegment("r_metatarsal3").setName("r_metatarsal3")
                  .addChild(new Transform().setTranslation(-0.15,-0.6,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()))
                    .setGeometry(new IndexedLineSet("TMT3toMTP3").setDEF("TMT3toMTP3").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-0.6,0.0,-0.15,-0.9,0.0}))))))
                .addChild(new HAnimJoint("r_metatarsophalangeal_joint3").setName("r_metatarsophalangeal_joint3").setCenter(-0.15,-0.9,0.0)
                  .addChild(new HAnimSegment("r_proximal_phalanges3").setName("r_proximal_phalanges3")
                    .addChild(new Transform().setTranslation(-0.15,-0.9,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))
                      .setGeometry(new IndexedLineSet("MTP3toPIP3").setDEF("MTP3toPIP3").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-0.9,0.0,-0.15,-1.05,0.0}))))))
                  .addChild(new HAnimJoint("r_f_proximal_Interphalangeal_joint3").setName("r_f_proximal_Interphalangeal_joint3").setCenter(-0.15,-1.05,0.0)
                    .addChild(new HAnimSegment("r_middle_phalanges3").setName("r_middle_phalanges3")
                      .addChild(new Transform().setTranslation(-0.15,-1.05,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new IndexedLineSet("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-1.05,0.0,-0.15,-1.13,0.0}))))))
                    .addChild(new HAnimJoint("r_f_distal_Interphalangeal_joint3").setName("r_f_distal_Interphalangeal_joint3").setCenter(-0.15,-1.13,0.0)
                      .addChild(new HAnimSegment("r_distal_phalanges3").setName("r_distal_phalanges3")
                        .addChild(new Transform().setTranslation(-0.15,-1.13,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))
                          .setGeometry(new IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint3").setDEF("tiptoe_r_f_distal_Interphalangeal_joint3").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,-1.13,0.0,-0.15,-1.16,0.0}))))))))))))
          .addComments(" CC ")
          .addChild(new HAnimJoint("r_calcaneuscuboid_joint").setName("r_calcaneuscuboid_joint").setCenter(-0.2,0.3,0.0)
            .addChild(new HAnimSegment("r_calcaneus").setName("r_calcaneus")
              .addChild(new Transform().setTranslation(-0.2,0.3,0.0)
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new IndexedLineSet("CCtoTT").setDEF("CCtoTT").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.2,0.3,0.0,-0.21,-0.3,0.0}))))))
            .addComments(" TT ")
            .addChild(new HAnimJoint("r_transverse_tarsal_joint").setName("r_transverse_tarsal_joint").setCenter(-0.21,-0.3,0.0)
              .addChild(new HAnimSegment("r_cuboid").setName("r_cuboid")
                .addChild(new Transform().setTranslation(-0.21,-0.3,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new IndexedLineSet("TTtoTMT4").setDEF("TTtoTMT4").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.21,-0.3,0.0,-0.25,-0.58,0.0})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material()))
                  .setGeometry(new IndexedLineSet("TTtoTMT5").setDEF("TTtoTMT5").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.21,-0.3,0.0,-0.33,-0.52,0.0}))))))
              .addComments(" TMT4 ")
              .addChild(new HAnimJoint("r_tarsometatarsal_joint4").setName("r_tarsometatarsal_joint4").setCenter(-0.25,-0.58,0.0)
                .addChild(new HAnimSegment("r_metatarsal4").setName("r_metatarsal4")
                  .addChild(new Transform().setTranslation(-0.25,-0.58,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()))
                    .setGeometry(new IndexedLineSet("TMT4toMTP4").setDEF("TMT4toMTP4").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-0.58,0.0,-0.25,-0.87,0.0}))))))
                .addChild(new HAnimJoint("r_metatarsophalangeal_joint4").setName("r_metatarsophalangeal_joint4").setCenter(-0.25,-0.87,0.0)
                  .addChild(new HAnimSegment("r_proximal_phalanges4").setName("r_proximal_phalanges4")
                    .addChild(new Transform().setTranslation(-0.25,-0.87,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))
                      .setGeometry(new IndexedLineSet("MTP4toPIP4").setDEF("MTP4toPIP4").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-0.87,0.0,-0.25,-1.0,0.0}))))))
                  .addChild(new HAnimJoint("r_f_proximal_Interphalangeal_joint4").setName("r_f_proximal_Interphalangeal_joint4").setCenter(-0.25,-1.0,0.0)
                    .addChild(new HAnimSegment("r_middle_phalanges4").setName("r_middle_phalanges4")
                      .addChild(new Transform().setTranslation(-0.25,-1.0,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new IndexedLineSet("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-1.0,0.0,-0.25,-1.1,0.0}))))))
                    .addChild(new HAnimJoint("r_f_distal_Interphalangeal_joint4").setName("r_f_distal_Interphalangeal_joint4").setCenter(-0.25,-1.1,0.0)
                      .addChild(new HAnimSegment("r_distal_phalanges4").setName("r_distal_phalanges4")
                        .addChild(new Transform().setTranslation(-0.25,-1.1,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))
                          .setGeometry(new IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint4").setDEF("tiptoe_r_f_distal_Interphalangeal_joint4").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,-1.1,0.0,-0.25,-1.15,0.0}))))))))))
              .addComments(" TMT5 ")
              .addChild(new HAnimJoint("r_tarsometatarsal_joint5").setName("r_tarsometatarsal_joint5").setCenter(-0.33,-0.52,0.0)
                .addChild(new HAnimSegment("r_metatarsal5").setName("r_metatarsal5")
                  .addChild(new Transform().setTranslation(-0.33,-0.52,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()))
                    .setGeometry(new IndexedLineSet("TMT5toMTP5").setDEF("TMT5toMTP5").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.33,-0.52,0.0,-0.34,-0.8,0.0}))))))
                .addChild(new HAnimJoint("r_metatarsophalangeal_joint5").setName("r_metatarsophalangeal_joint5").setCenter(-0.34,-0.8,0.0)
                  .addChild(new HAnimSegment("r_proximal_phalanges5").setName("r_proximal_phalanges5")
                    .addChild(new Transform().setTranslation(-0.34,-0.8,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material()))
                      .setGeometry(new IndexedLineSet("MTP5toPIP5").setDEF("MTP5toPIP5").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-0.8,0.0,-0.34,-0.95,0.0}))))))
                  .addChild(new HAnimJoint("r_f_proximal_Interphalangeal_joint5").setName("r_f_proximal_Interphalangeal_joint5").setCenter(-0.34,-0.95,0.0)
                    .addChild(new HAnimSegment("r_middle_phalanges5").setName("r_middle_phalanges5")
                      .addChild(new Transform().setTranslation(-0.34,-0.95,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material()))
                        .setGeometry(new IndexedLineSet("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-0.95,0.0,-0.34,-1.05,0.0}))))))
                    .addChild(new HAnimJoint("r_f_distal_Interphalangeal_joint5").setName("r_f_distal_Interphalangeal_joint5").setCenter(-0.34,-1.05,0.0)
                      .addChild(new HAnimSegment("r_distal_phalanges5").setName("r_distal_phalanges5")
                        .addChild(new Transform().setTranslation(-0.34,-1.05,0.0)
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))
                          .setGeometry(new IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint5").setDEF("tiptoe_r_f_distal_Interphalangeal_joint5").setCoordIndex(new int[] {0,1})
                            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.34,-1.05,0.0,-0.34,-1.08,0.0}))))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_HumanoidRoot"))
      .addJoints(new HAnimJoint().setUSE("r_talocrural_joint"))
      .addJoints(new HAnimJoint().setUSE("r_talocalcaneonavicular_joint"))
      .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint1"))
      .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint1"))
      .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint1"))
      .addJoints(new HAnimJoint().setUSE("r_f_Interphalangeal_joint"))
      .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint2"))
      .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint2"))
      .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint2"))
      .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint2"))
      .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint2"))
      .addJoints(new HAnimJoint().setUSE("r_cuneonavicular_joint3"))
      .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint3"))
      .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint3"))
      .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint3"))
      .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint3"))
      .addJoints(new HAnimJoint().setUSE("r_calcaneuscuboid_joint"))
      .addJoints(new HAnimJoint().setUSE("r_transverse_tarsal_joint"))
      .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint4"))
      .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint4"))
      .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint4"))
      .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint4"))
      .addJoints(new HAnimJoint().setUSE("r_tarsometatarsal_joint5"))
      .addJoints(new HAnimJoint().setUSE("r_metatarsophalangeal_joint5"))
      .addJoints(new HAnimJoint().setUSE("r_f_proximal_Interphalangeal_joint5"))
      .addJoints(new HAnimJoint().setUSE("r_f_distal_Interphalangeal_joint5"))
      .addSegments(new HAnimSegment().setUSE("r_talus"))
      .addSegments(new HAnimSegment().setUSE("r_navicular"))
      .addSegments(new HAnimSegment().setUSE("r_cuneiform1"))
      .addSegments(new HAnimSegment().setUSE("r_metatarsal1"))
      .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges1"))
      .addSegments(new HAnimSegment().setUSE("r_distal_phalanges1"))
      .addSegments(new HAnimSegment().setUSE("r_cuneiform2"))
      .addSegments(new HAnimSegment().setUSE("r_metatarsal2"))
      .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges2"))
      .addSegments(new HAnimSegment().setUSE("r_middle_phalanges2"))
      .addSegments(new HAnimSegment().setUSE("r_distal_phalanges2"))
      .addSegments(new HAnimSegment().setUSE("r_cuneiform3"))
      .addSegments(new HAnimSegment().setUSE("r_metatarsal3"))
      .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges3"))
      .addSegments(new HAnimSegment().setUSE("r_middle_phalanges3"))
      .addSegments(new HAnimSegment().setUSE("r_distal_phalanges3"))
      .addSegments(new HAnimSegment().setUSE("r_calcaneus"))
      .addSegments(new HAnimSegment().setUSE("r_cuboid"))
      .addSegments(new HAnimSegment().setUSE("r_metatarsal4"))
      .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges4"))
      .addSegments(new HAnimSegment().setUSE("r_middle_phalanges4"))
      .addSegments(new HAnimSegment().setUSE("r_distal_phalanges4"))
      .addSegments(new HAnimSegment().setUSE("r_metatarsal5"))
      .addSegments(new HAnimSegment().setUSE("r_proximal_phalanges5"))
      .addSegments(new HAnimSegment().setUSE("r_middle_phalanges5"))
      .addSegments(new HAnimSegment().setUSE("r_distal_phalanges5"))));
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
        X3D thisExampleX3dModel = new HAnimModelFootRight().getX3dModel();

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
			System.out.println("WARNING: \"HAnimModelFootRight\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"HAnimModelFootRight\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

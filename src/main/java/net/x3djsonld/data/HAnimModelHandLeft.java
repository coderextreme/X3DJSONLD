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
 * <p> Left hand, using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links:  source HAnimModelHandLeft.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimModelHandLeft&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d">HAnimModelHandLeft.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left hand, using high-fidelity definitions for HAnim version 2.0 </td>
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
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRightSegmentVisualizationError.png">HAnimModelHandRightSegmentVisualizationError.png</a> </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> not yet to scale, also relatively flat </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> TODO will X3D HAnim component add a new level to support LOA-4 functionality? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body </td>
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
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d</a> </td>
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
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HAnimModelHandLeft.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Left hand, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 January 2015"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("23 December 2021"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("HAnimModelHandRightSegmentVisualizationError.png"))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("not yet to scale, also relatively flat"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D HAnim humanoid animation"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelHandLeft.x3d"))
    .addChild(new HAnimHumanoid("hanim_Hand_Left").setName("Hand_Left").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
        .setMetadata(new MetadataString().setName("authorName").setValue(new String[] {"Kwan-Hee YOO, Don Brutzman and Joe Williams"})))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root")
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model ")
        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setDescription("connection joint of hand to leg above")
          .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
            .addChild(new Transform()
              .addChild(new Shape("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.025))
                .setAppearance(new Appearance("HAnimJointAppearanceBlue")
                  .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSet("RCToMC12").setDEF("RCToMC12").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.1,0.1,0.0})))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSet("RCToMC3").setDEF("RCToMC3").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.07,0.0})))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSet("RCToMC45").setDEF("RCToMC45").setCoordIndex(new int[] {0,1})
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-0.1,0.1,0.0}))))))
          .addComments(" MC1 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(0.14,0.09,0.0)
            .addChild(new HAnimSegment("hanim_l_trapezium").setName("l_trapezium")
              .addChild(new Transform().setTranslation(0.14,0.09,0.0)
                .addChild(new Shape("HAnimNewJointShape")
                  .setGeometry(new Sphere().setRadius(0.025))
                  .setAppearance(new Appearance("HAnimJointAppearanceRed")
                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC12toCMC1").setDEF("MC12toCMC1").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,0.1,0.0,0.2,0.15,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC1toCMC1").setDEF("MC1toCMC1").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,0.1,0.0,0.1,0.2,0.0}))))))
            .addComments(" thumb finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(0.2,0.15,0.0)
              .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                .addChild(new Transform().setTranslation(0.2,0.15,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CMC1toMCP1").setDEF("CMC1toMCP1").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.2,0.15,0.0,0.3,0.3,0.0}))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(0.3,0.3,0.0)
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                  .addChild(new Transform().setTranslation(0.3,0.3,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("MCP11toIP1").setDEF("MCP11toIP1").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.3,0.3,0.0,0.35,0.4,0.0}))))))
                .addChild(new HAnimJoint("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(0.35,0.4,0.0)
                  .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1")
                    .addChild(new Transform().setTranslation(0.35,0.4,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("fingertip_l_carpal_interphalangeal_1").setDEF("fingertip_l_carpal_interphalangeal_1").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.35,0.4,0.0,0.36,0.45,0.0}))))))))))
          .addComments(" MC2 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(0.07,0.07,0.0)
            .addChild(new HAnimSegment("hanim_l_trapezoid").setName("l_trapezoid")
              .addChild(new Transform().setTranslation(0.07,0.07,0.0)
                .addChild(new Shape().setUSE("HAnimNewJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC2toCMC2").setDEF("MC2toCMC2").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.1,0.0,-0.1,0.2,0.0}))))))
            .addComments(" index finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(0.1,0.2,0.0)
              .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                .addChild(new Transform().setTranslation(0.1,0.2,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CMC2toMCP2").setDEF("CMC2toMCP2").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.1,0.2,0.0,0.15,0.5,0.0}))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(0.15,0.5,0.0)
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(0.15,0.5,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("MCP2toPIP2").setDEF("MCP2toPIP2").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.15,0.5,0.0,0.2,0.7,0.0}))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(0.2,0.7,0.0)
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_2")
                    .addChild(new Transform().setTranslation(0.2,0.7,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.2,0.7,0.0,0.24,0.87,0.0}))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(0.24,0.87,0.0)
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2")
                      .addChild(new Transform().setTranslation(0.24,0.87,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_2").setDEF("fingertip_l_carpal_distal_interphalangeal_2").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.24,0.87,0.0,0.26,0.93,0.0})))))))))))
          .addComments(" MC3 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(0.0,0.07,0.0)
            .addChild(new HAnimSegment("hanim_l_capitate").setName("l_capitate")
              .addChild(new Transform().setTranslation(0.0,0.07,0.0)
                .addChild(new Shape().setUSE("HAnimNewJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC3toCMC3").setDEF("MC3toCMC3").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.07,0.0,0.0,0.2,0.0}))))))
            .addComments(" Middle fingle ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(0.0,0.2,0.0)
              .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                .addChild(new Transform().setTranslation(0.0,0.2,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CMC3toMCP3").setDEF("CMC3toMCP3").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.2,0.0,0.03,0.5,0.0}))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(0.03,0.5,0.0)
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_3")
                  .addChild(new Transform().setTranslation(0.03,0.5,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("MCP3toPIP3").setDEF("MCP3toPIP3").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.03,0.5,0.0,0.05,0.75,0.0}))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(0.05,0.75,0.0)
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_3")
                    .addChild(new Transform().setTranslation(0.05,0.75,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.05,0.75,0.0,0.08,0.96,0.0}))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(0.08,0.96,0.0)
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3")
                      .addChild(new Transform().setTranslation(0.08,0.96,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_3").setDEF("fingertip_l_carpal_distal_interphalangeal_3").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.08,0.96,0.0,0.09,1.05,0.0})))))))))))
          .addComments(" MC45 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_midcarpal_4_5").setCenter(-0.1,0.1,0.0)
            .addChild(new HAnimSegment("hanim_l_hamate").setName("l_hamate")
              .addChild(new Transform().setTranslation(-0.1,0.1,0.0)
                .addChild(new Shape().setUSE("HAnimNewJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC45toCMC4").setDEF("MC45toCMC4").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.1,0.0,-0.1,0.2,0.0})))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSet("MC45toCMC5").setDEF("MC45toCMC5").setCoordIndex(new int[] {0,1})
                  .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.1,0.0,-0.15,0.17,0.0}))))))
            .addComments(" ring finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(-0.1,0.2,0.0)
              .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                .addChild(new Transform().setTranslation(-0.1,0.2,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CMC4toMCP4").setDEF("CMC4toMCP4").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.2,0.0,-0.1,0.47,0.0}))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(-0.1,0.47,0.0)
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_4")
                  .addChild(new Transform().setTranslation(-0.1,0.47,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("MCP4toPIP4").setDEF("MCP4toPIP4").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.47,0.0,-0.1,0.7,0.0}))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(-0.1,0.7,0.0)
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_4")
                    .addChild(new Transform().setTranslation(-0.1,0.7,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.7,0.0,-0.1,0.93,0.0}))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(-0.1,0.93,0.0)
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4")
                      .addChild(new Transform().setTranslation(-0.1,0.93,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_4").setDEF("fingertip_l_carpal_distal_interphalangeal_4").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.1,0.93,0.0,-0.1,1.0,0.0}))))))))))
            .addComments(" pinky finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(-0.15,0.17,0.0)
              .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                .addChild(new Transform().setTranslation(-0.15,0.17,0.0)
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSet("CMC5toMCP5").setDEF("CMC5toMCP5").setCoordIndex(new int[] {0,1})
                    .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.15,0.17,0.0,-0.2,0.4,0.0}))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(-0.2,0.4,0.0)
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_proximal_phalanx_5")
                  .addChild(new Transform().setTranslation(-0.2,0.4,0.0)
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSet("MCP5toPIP5").setDEF("MCP5toPIP5").setCoordIndex(new int[] {0,1})
                      .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.2,0.4,0.0,-0.23,0.63,0.0}))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(-0.23,0.63,0.0)
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_middle_phalanx_5")
                    .addChild(new Transform().setTranslation(-0.23,0.63,0.0)
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSet("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(new int[] {0,1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.23,0.63,0.0,-0.25,0.79,0.0}))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(-0.25,0.79,0.0)
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5")
                      .addChild(new Transform().setTranslation(-0.25,0.79,0.0)
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_5").setDEF("fingertip_l_carpal_distal_interphalangeal_5").setCoordIndex(new int[] {0,1})
                          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-0.25,0.79,0.0,-0.26,0.85,0.0})))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_capitate"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_distal_phalanx_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_middle_phalanx_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_carpal_proximal_phalanx_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_hamate"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_1"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_2"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_3"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_4"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_metacarpal_5"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_trapezium"))
      .addSegments(new HAnimSegment().setUSE("hanim_l_trapezoid"))));
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
	 * @return HAnimModelHandLeft model
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
        X3D thisExampleX3dModel = new HAnimModelHandLeft().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.HAnimModelHandLeft\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.HAnimModelHandLeft self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

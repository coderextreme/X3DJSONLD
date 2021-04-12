package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> An attempt at a standard LOA-4 skeleton. </p>
 <p> Related links: skeletonLOA1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.skeletonLOA1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d">JohnBoy.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> An attempt at a standard LOA-4 skeleton </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> h.pl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 12 June 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/../license.html">../license.html</a> </td>
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

	* @author John Carlson
 */

public class skeletonLOA1
{
	/** Default constructor to create this object. */
	public skeletonLOA1 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("JohnBoy.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("h.pl"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("John Carlson"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("12 June 2020"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("JohnBoy").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild(new HAnimHumanoid("STD_HAnim").setName("HAnim").setInfo(new String[] {"humanoidVersion=2.0"}).setVersion("2.0")
      .addComments(" scale='0.0225 0.0225 0.0225' ")
      .addChild(new HAnimJoint("STD_Joint_humanoid_root").setName("humanoid_root").setCenter(0.0000,0.8240,0.0277)
        .addChild(new HAnimSegment("STD_HAnimSegment_HumanoidRoot").setName("HAnimSegment_HumanoidRoot")
          .addChild(new Viewpoint().setDescription("View from (0 0 4) towards HAnimHumanoid center").setPosition(0.0,0.0,4.0))
          .addChild(new Switch().setWhichChoice(0)
            .addChild(new Transform().setScale(0.0225,0.0225,0.0225)
              .addChild(new TouchSensor().setDescription("HAnimHumanoid HAnimSegment HumanoidRoot"))
              .addChild(new Shape("HAnimRootShape")
                .setGeometry(new Sphere("HAnimJointSphere"))
                .setAppearance(new Appearance()
                  .setMaterial(new Material("HAnimRootMaterial").setDiffuseColor(0.8,0.0,0.0).setTransparency(0.3)))))
            .addChild(new Shape("HAnimJointShape")
              .setGeometry(new Sphere().setUSE("HAnimJointSphere"))
              .setAppearance(new Appearance()
                .setMaterial(new Material("HAnimJointMaterial").setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3))))
            .addChild(new Shape()
              .setGeometry(new LineSet().setVertexCount(new int[] {2})
                .setColor(new ColorRGBA("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))))
            .addChild(new Shape("HAnimSiteShape")
              .setGeometry(new IndexedFaceSet("DiamondIFS").setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(new int[] {0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1})
                .setColor(new ColorRGBA("HAnimSiteColorRGBA").setColor(new MFColorRGBA(new double[] {1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1})))
                .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,0.8,0.0,-0.8,0.0,0.0,0.0,0.0,0.8,0.8,0.0,0.0,0.0,0.0,-0.8,0.0,-0.8,0.0}))))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0).setTransparency(0.3))))))
        .addChild(new HAnimSegment("STD_Segment_sacrum").setName("sacrum"))
        .addChild(new HAnimJoint("STD_Joint_sacroiliac").setName("sacroiliac").setCenter(0.0000,0.9149,0.0016)
          .addChild(new HAnimSegment("STD_Segment_pelvis").setName("pelvis")
            .addChild(new HAnimSite("STD_Site_l_iliocristale_pt").setName("l_iliocristale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1612,1.0537,0.0008)
              .addChild(new TouchSensor().setDescription("HAnimSite l_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_buttocks_standing_wall_contact_point_pt").setName("buttocks_standing_wall_contact_point_pt").setScale(0.0225,0.0225,0.0225)
              .addChild(new TouchSensor().setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_r_trochanterion_pt").setName("r_trochanterion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1689,0.8419,0.0352)
              .addChild(new TouchSensor().setDescription("HAnimSite r_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_l_asis_pt").setName("l_asis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0925,0.9983,0.1052)
              .addChild(new TouchSensor().setDescription("HAnimSite l_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_crotch_pt").setName("crotch_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0034,0.8266,0.0257)
              .addChild(new TouchSensor().setDescription("HAnimSite crotch_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_l_psis_pt").setName("l_psis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0774,1.0190,-0.1151)
              .addChild(new TouchSensor().setDescription("HAnimSite l_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_r_iliocristale_pt").setName("r_iliocristale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1525,1.0628,0.0035)
              .addChild(new TouchSensor().setDescription("HAnimSite r_iliocristale_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_l_trochanterion_pt").setName("l_trochanterion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1677,0.8336,0.0303)
              .addChild(new TouchSensor().setDescription("HAnimSite l_trochanterion_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_r_asis_pt").setName("r_asis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0887,1.0021,0.1112)
              .addChild(new TouchSensor().setDescription("HAnimSite r_asis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_r_psis_pt").setName("r_psis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0716,1.0190,-0.1138)
              .addChild(new TouchSensor().setDescription("HAnimSite r_psis_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape"))))
          .addChild(new HAnimJoint("STD_Joint_l_hip").setName("l_hip").setCenter(0.0961,0.9124,-0.0001)
            .addChild(new HAnimSegment("STD_Segment_l_thigh").setName("l_thigh")
              .addChild(new HAnimSite("STD_Site_l_femoral_lateral_epicondyles_pt").setName("l_femoral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1598,0.4967,0.0297)
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_knee_crease_pt").setName("l_knee_crease_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0993,0.4881,-0.0309)
                .addChild(new TouchSensor().setDescription("HAnimSite l_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_femoral_medial_epicondyles_pt").setName("l_femoral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0398,0.4946,0.0303)
                .addChild(new TouchSensor().setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_suprapatella_pt").setName("l_suprapatella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite l_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint("STD_Joint_l_knee").setName("l_knee").setCenter(0.1040,0.4867,0.0308)
              .addChild(new HAnimSegment("STD_Segment_l_calf").setName("l_calf")
                .addChild(new HAnimSite("STD_Site_l_lateral_malleolus_pt").setName("l_lateral_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1308,0.0597,-0.1032)
                  .addChild(new TouchSensor().setDescription("HAnimSite l_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_l_medial_malleolus_pt").setName("l_medial_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0890,0.0716,-0.0881)
                  .addChild(new TouchSensor().setDescription("HAnimSite l_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_l_tibiale_pt").setName("l_tibiale_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild(new TouchSensor().setDescription("HAnimSite l_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("STD_Joint_l_talocrural").setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736)
                .addChild(new HAnimSegment("STD_Segment_l_talus").setName("l_talus")
                  .addChild(new HAnimSite("STD_Site_l_sphyrion_pt").setName("l_sphyrion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0890,0.0575,-0.0943)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_l_calcaneus_posterior_pt").setName("l_calcaneus_posterior_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0974,0.0259,-0.1171)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("STD_Joint_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2")
                  .addChild(new HAnimSegment("STD_Segment_l_tarsal_proximal_phalanx_2").setName("l_tarsal_proximal_phalanx_2"))))))
          .addChild(new HAnimJoint("STD_Joint_r_hip").setName("r_hip").setCenter(-0.0950,0.9171,0.0029)
            .addChild(new HAnimSegment("STD_Segment_r_thigh").setName("r_thigh")
              .addChild(new HAnimSite("STD_Site_r_suprapatella_pt").setName("r_suprapatella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite r_suprapatella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_r_knee_crease_pt").setName("r_knee_crease_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0825,0.4932,-0.0326)
                .addChild(new TouchSensor().setDescription("HAnimSite r_knee_crease_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_r_femoral_medial_epicondyles_pt").setName("r_femoral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0221,0.5014,0.0289)
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_r_femoral_lateral_epicondyles_pt").setName("r_femoral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1421,0.4992,0.0310)
                .addChild(new TouchSensor().setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint("STD_Joint_r_knee").setName("r_knee").setCenter(-0.0867,0.4913,0.0318)
              .addChild(new HAnimSegment("STD_Segment_r_calf").setName("r_calf")
                .addChild(new HAnimSite("STD_Site_r_tibiale_pt").setName("r_tibiale_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild(new TouchSensor().setDescription("HAnimSite r_tibiale_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_r_lateral_malleolus_pt").setName("r_lateral_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1006,0.0658,-0.1075)
                  .addChild(new TouchSensor().setDescription("HAnimSite r_lateral_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_r_medial_malleolus_pt").setName("r_medial_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0591,0.0760,-0.0928)
                  .addChild(new TouchSensor().setDescription("HAnimSite r_medial_malleolus_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("STD_Joint_r_talocrural").setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766)
                .addChild(new HAnimSegment("STD_Segment_r_talus").setName("r_talus")
                  .addChild(new HAnimSite("STD_Site_r_calcaneus_posterior_pt").setName("r_calcaneus_posterior_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0692,0.0297,-0.1221)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_calcaneus_posterior_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_r_sphyrion_pt").setName("r_sphyrion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0603,0.0610,-0.1002)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_sphyrion_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("STD_Joint_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2")
                  .addChild(new HAnimSegment("STD_Segment_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")))))))
        .addChild(new HAnimJoint("STD_Joint_vl5").setName("vl5").setCenter(0.0028,1.0568,-0.0776)
          .addChild(new HAnimSegment("STD_Segment_l5").setName("l5")
            .addChild(new HAnimSite("STD_Site_waist_preferred_posterior_pt").setName("waist_preferred_posterior_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2900,1.0915,-0.1091)
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_posterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_waist_preferred_anterior_pt").setName("waist_preferred_anterior_pt").setScale(0.0225,0.0225,0.0225)
              .addChild(new TouchSensor().setDescription("HAnimSite waist_preferred_anterior_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape")))
            .addChild(new HAnimSite("STD_Site_navel_pt").setName("navel_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0069,1.0966,0.1017)
              .addChild(new TouchSensor().setDescription("HAnimSite navel_pt"))
              .addChild(new Shape().setUSE("HAnimSiteShape"))))
          .addChild(new HAnimJoint("STD_Joint_skullbase").setName("skullbase").setCenter(0.0044,1.6209,0.0236)
            .addChild(new HAnimSegment("STD_Segment_skull").setName("skull")
              .addChild(new HAnimSite("STD_Site_r_infraorbitale_pt").setName("r_infraorbitale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0237,1.6171,0.0752)
                .addChild(new TouchSensor().setDescription("HAnimSite r_infraorbitale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_ectocanthus_pt").setName("l_ectocanthus_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite l_ectocanthus_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_r_tragion_pt").setName("r_tragion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.0646,1.6347,0.0302)
                .addChild(new TouchSensor().setDescription("HAnimSite r_tragion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_r_ectocanthus_pt").setName("r_ectocanthus_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite r_ectocanthus_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_infraorbitale_pt").setName("l_infraorbitale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0341,1.6171,0.0752)
                .addChild(new TouchSensor().setDescription("HAnimSite l_infraorbitale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_sellion_pt").setName("sellion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0058,1.6316,0.0852)
                .addChild(new TouchSensor().setDescription("HAnimSite sellion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_nuchale_pt").setName("nuchale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0039,1.5972,-0.0796)
                .addChild(new TouchSensor().setDescription("HAnimSite nuchale_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_skull_vertex_pt").setName("skull_vertex_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0050,1.7504,0.0055)
                .addChild(new TouchSensor().setDescription("HAnimSite skull_vertex_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_glabella_pt").setName("glabella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite glabella_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_opisthocranion_pt").setName("opisthocranion_pt").setScale(0.0225,0.0225,0.0225)
                .addChild(new TouchSensor().setDescription("HAnimSite opisthocranion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape")))
              .addChild(new HAnimSite("STD_Site_l_tragion_pt").setName("l_tragion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0739,1.6348,0.0282)
                .addChild(new TouchSensor().setDescription("HAnimSite l_tragion_pt"))
                .addChild(new Shape().setUSE("HAnimSiteShape"))))
            .addChild(new HAnimJoint("STD_Joint_l_shoulder").setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387)
              .addChild(new HAnimSegment("STD_Segment_l_upperarm").setName("l_upperarm")
                .addChild(new HAnimSite("STD_Site_l_bideltoid_pt").setName("l_bideltoid_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild(new TouchSensor().setDescription("HAnimSite l_bideltoid_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_l_humeral_lateral_epicondyles_pt").setName("l_humeral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2280,1.1482,-0.1100)
                  .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("STD_Joint_l_elbow").setName("l_elbow").setCenter(0.2014,1.1357,-0.0682)
                .addChild(new HAnimSegment("STD_Segment_l_forearm").setName("l_forearm")
                  .addChild(new HAnimSite("STD_Site_l_olecranon_pt").setName("l_olecranon_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1962,1.1375,-0.1123)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_olecranon_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_l_radial_styloid_pt").setName("l_radial_styloid_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1901,0.8645,-0.0415)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_radial_styloid_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_l_humeral_medial_epicondyles_pt").setName("l_humeral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1735,1.1272,-0.1113)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_l_radiale_pt").setName("l_radiale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2182,1.1212,-0.1167)
                    .addChild(new TouchSensor().setDescription("HAnimSite l_radiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("STD_Joint_l_radiocarpal").setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583)
                  .addChild(new HAnimSegment("STD_Segment_l_carpal").setName("l_carpal")
                    .addChild(new HAnimSite("STD_Site_l_ulnar_styloid_pt").setName("l_ulnar_styloid_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.2142,0.8529,-0.0648)
                      .addChild(new TouchSensor().setDescription("HAnimSite l_ulnar_styloid_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape")))))))
            .addChild(new HAnimJoint("STD_Joint_r_shoulder").setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325)
              .addChild(new HAnimSegment("STD_Segment_r_upperarm").setName("r_upperarm")
                .addChild(new HAnimSite("STD_Site_r_humeral_lateral_epicondyles_pt").setName("r_humeral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.2224,1.1517,-0.1033)
                  .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape")))
                .addChild(new HAnimSite("STD_Site_r_bideltoid_pt").setName("r_bideltoid_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild(new TouchSensor().setDescription("HAnimSite r_bideltoid_pt"))
                  .addChild(new Shape().setUSE("HAnimSiteShape"))))
              .addChild(new HAnimJoint("STD_Joint_r_elbow").setName("r_elbow").setCenter(-0.1949,1.1388,-0.0620)
                .addChild(new HAnimSegment("STD_Segment_r_forearm").setName("r_forearm")
                  .addChild(new HAnimSite("STD_Site_r_radiale_pt").setName("r_radiale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.2130,1.1305,-0.1091)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_radiale_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_r_humeral_medial_epicondyles_pt").setName("r_humeral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1680,1.1298,-0.1062)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_r_radial_styloid_pt").setName("r_radial_styloid_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1884,0.8676,-0.0360)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_radial_styloid_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape")))
                  .addChild(new HAnimSite("STD_Site_r_olecranon_pt").setName("r_olecranon_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.1907,1.1405,-0.1065)
                    .addChild(new TouchSensor().setDescription("HAnimSite r_olecranon_pt"))
                    .addChild(new Shape().setUSE("HAnimSiteShape"))))
                .addChild(new HAnimJoint("STD_Joint_r_radiocarpal").setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521)
                  .addChild(new HAnimSegment("STD_Segment_r_carpal").setName("r_carpal")
                    .addChild(new HAnimSite("STD_Site_r_ulnar_styloid_pt").setName("r_ulnar_styloid_pt").setScale(0.0225,0.0225,0.0225).setTranslation(-0.2117,0.8562,-0.0584)
                      .addChild(new TouchSensor().setDescription("HAnimSite r_ulnar_styloid_pt"))
                      .addChild(new Shape().setUSE("HAnimSiteShape"))))))))))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_humanoid_root"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_sacrum"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_sacroiliac"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_pelvis"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_iliocristale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_buttocks_standing_wall_contact_point_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_trochanterion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_asis_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_crotch_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_psis_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_iliocristale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_trochanterion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_asis_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_psis_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_hip"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_thigh"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_femoral_lateral_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_knee_crease_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_femoral_medial_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_suprapatella_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_knee"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_calf"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_lateral_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_medial_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_tibiale_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_talocrural"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_talus"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_sphyrion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_calcaneus_posterior_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_metatarsophalangeal_2"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_tarsal_proximal_phalanx_2"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_hip"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_thigh"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_suprapatella_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_knee_crease_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_femoral_medial_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_femoral_lateral_epicondyles_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_knee"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_calf"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_tibiale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_lateral_malleolus_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_medial_malleolus_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_talocrural"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_talus"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_calcaneus_posterior_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_sphyrion_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_metatarsophalangeal_2"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_tarsal_proximal_phalanx_2"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_vl5"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l5"))
      .addSites(new HAnimSite().setUSE("STD_Site_waist_preferred_posterior_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_waist_preferred_anterior_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_navel_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_skullbase"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_skull"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_infraorbitale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_ectocanthus_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_tragion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_ectocanthus_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_infraorbitale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_sellion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_nuchale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_skull_vertex_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_glabella_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_opisthocranion_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_tragion_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_shoulder"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_upperarm"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_bideltoid_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_humeral_lateral_epicondyles_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_elbow"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_forearm"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_olecranon_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_radial_styloid_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_humeral_medial_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_radiale_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_l_radiocarpal"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_l_carpal"))
      .addSites(new HAnimSite().setUSE("STD_Site_l_ulnar_styloid_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_shoulder"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_upperarm"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_humeral_lateral_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_bideltoid_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_elbow"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_forearm"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_radiale_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_humeral_medial_epicondyles_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_radial_styloid_pt"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_olecranon_pt"))
      .addJoints(new HAnimJoint().setUSE("STD_Joint_r_radiocarpal"))
      .addSegments(new HAnimSegment().setUSE("STD_Segment_r_carpal"))
      .addSites(new HAnimSite().setUSE("STD_Site_r_ulnar_styloid_pt"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return skeletonLOA1 model
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
        X3D thisExampleX3dModel = new skeletonLOA1().getX3dModel();

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
			System.out.println("WARNING: \"skeletonLOA1\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"skeletonLOA1\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

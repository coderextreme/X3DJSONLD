var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> An attempt at a standard LOA-4 skeleton. </p>
 <p> Related links: skeletonLOA1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function skeletonLOA1
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
skeletonLOA1.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("JohnBoy.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("h.pl"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("12 June 2020"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setSpeed(1.5))
    .addChild((new autoclass.Viewpoint()).setDescription("JohnBoy").setCenterOfRotation(0.0,1.0,0.0).setPosition(0.0,1.0,3.0))
    .addChild((new autoclass.HAnimHumanoid("STD_HAnim")).setName("HAnim").setInfo(new autoclass.MFString("\"humanoidVersion=2.0\"")).setVersion("2.0")
      .addComments(" scale='0.0225 0.0225 0.0225' ")
      .addChild((new autoclass.HAnimJoint("STD_Joint_humanoid_root")).setName("humanoid_root").setCenter(0.0000,0.8240,0.0277)
        .addChild((new autoclass.HAnimSegment("STD_HAnimSegment_HumanoidRoot")).setName("HAnimSegment_HumanoidRoot")
          .addChild((new autoclass.Viewpoint()).setDescription("View from (0 0 4) towards HAnimHumanoid center").setPosition(0.0,0.0,4.0))
          .addChild((new autoclass.Switch()).setWhichChoice(0)
            .addChild((new autoclass.Transform()).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimHumanoid HAnimSegment HumanoidRoot"))
              .addChild((new autoclass.Shape("HAnimRootShape"))
                .setGeometry((new autoclass.Sphere("HAnimJointSphere")))
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material("HAnimRootMaterial")).setTransparency(0.3).setDiffuseColor(0.8,0.0,0.0)))))
            .addChild((new autoclass.Shape("HAnimJointShape"))
              .setGeometry((new autoclass.Sphere()).setUSE("HAnimJointSphere"))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("HAnimJointMaterial")).setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3))))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.LineSet()).setVertexCount(java.newArray("int", [2]))
                .setColor((new autoclass.ColorRGBA("HAnimSegmentLineColorRGBA")).setColor(new autoclass.MFColorRGBA(java.newArray("float", [1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1]))))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.0,0.0]))))))
            .addChild((new autoclass.Shape("HAnimSiteShape"))
              .setGeometry((new autoclass.IndexedFaceSet("DiamondIFS")).setDEF("DiamondIFS").setCreaseAngle(0.5).setSolid(false).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                .setColor((new autoclass.ColorRGBA("HAnimSiteColorRGBA")).setColor(new autoclass.MFColorRGBA(java.newArray("float", [1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1]))))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.8,0.0,-0.8,0.0,0.0,0.0,0.0,0.8,0.8,0.0,0.0,0.0,0.0,-0.8,0.0,-0.8,0.0])))))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setTransparency(0.3).setDiffuseColor(1.0,1.0,0.0))))))
        .addChild((new autoclass.HAnimSegment("STD_Segment_sacrum")).setName("sacrum"))
        .addChild((new autoclass.HAnimJoint("STD_Joint_sacroiliac")).setName("sacroiliac").setCenter(0.0000,0.9149,0.0016)
          .addChild((new autoclass.HAnimSegment("STD_Segment_pelvis")).setName("pelvis")
            .addChild((new autoclass.HAnimSite("STD_Site_l_iliocristale_pt")).setName("l_iliocristale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1612,1.0537,0.0008)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_iliocristale_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_buttocks_standing_wall_contact_point_pt")).setName("buttocks_standing_wall_contact_point_pt").setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite buttocks_standing_wall_contact_point_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_r_trochanterion_pt")).setName("r_trochanterion_pt").setTranslation(-0.1689,0.8419,0.0352).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_trochanterion_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_l_asis_pt")).setName("l_asis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0925,0.9983,0.1052)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_asis_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_crotch_pt")).setName("crotch_pt").setTranslation(0.0034,0.8266,0.0257).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite crotch_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_l_psis_pt")).setName("l_psis_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0774,1.0190,-0.1151)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_psis_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_r_iliocristale_pt")).setName("r_iliocristale_pt").setTranslation(-0.1525,1.0628,0.0035).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_iliocristale_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_l_trochanterion_pt")).setName("l_trochanterion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1677,0.8336,0.0303)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_trochanterion_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_r_asis_pt")).setName("r_asis_pt").setTranslation(-0.0887,1.0021,0.1112).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_asis_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_r_psis_pt")).setName("r_psis_pt").setTranslation(-0.0716,1.0190,-0.1138).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_psis_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
          .addChild((new autoclass.HAnimJoint("STD_Joint_l_hip")).setName("l_hip").setCenter(0.0961,0.9124,-0.0001)
            .addChild((new autoclass.HAnimSegment("STD_Segment_l_thigh")).setName("l_thigh")
              .addChild((new autoclass.HAnimSite("STD_Site_l_femoral_lateral_epicondyles_pt")).setName("l_femoral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1598,0.4967,0.0297)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_femoral_lateral_epicondyles_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_knee_crease_pt")).setName("l_knee_crease_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0993,0.4881,-0.0309)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_knee_crease_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_femoral_medial_epicondyles_pt")).setName("l_femoral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0398,0.4946,0.0303)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_femoral_medial_epicondyles_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_suprapatella_pt")).setName("l_suprapatella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_suprapatella_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
            .addChild((new autoclass.HAnimJoint("STD_Joint_l_knee")).setName("l_knee").setCenter(0.1040,0.4867,0.0308)
              .addChild((new autoclass.HAnimSegment("STD_Segment_l_calf")).setName("l_calf")
                .addChild((new autoclass.HAnimSite("STD_Site_l_lateral_malleolus_pt")).setName("l_lateral_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1308,0.0597,-0.1032)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_lateral_malleolus_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_l_medial_malleolus_pt")).setName("l_medial_malleolus_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0890,0.0716,-0.0881)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_medial_malleolus_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_l_tibiale_pt")).setName("l_tibiale_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_tibiale_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
              .addChild((new autoclass.HAnimJoint("STD_Joint_l_talocrural")).setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736)
                .addChild((new autoclass.HAnimSegment("STD_Segment_l_talus")).setName("l_talus")
                  .addChild((new autoclass.HAnimSite("STD_Site_l_sphyrion_pt")).setName("l_sphyrion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0890,0.0575,-0.0943)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_sphyrion_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_l_calcaneus_posterior_pt")).setName("l_calcaneus_posterior_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0974,0.0259,-0.1171)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_calcaneus_posterior_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
                .addChild((new autoclass.HAnimJoint("STD_Joint_l_metatarsophalangeal_2")).setName("l_metatarsophalangeal_2")
                  .addChild((new autoclass.HAnimSegment("STD_Segment_l_tarsal_proximal_phalanx_2")).setName("l_tarsal_proximal_phalanx_2"))))))
          .addChild((new autoclass.HAnimJoint("STD_Joint_r_hip")).setName("r_hip").setCenter(-0.0950,0.9171,0.0029)
            .addChild((new autoclass.HAnimSegment("STD_Segment_r_thigh")).setName("r_thigh")
              .addChild((new autoclass.HAnimSite("STD_Site_r_suprapatella_pt")).setName("r_suprapatella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_suprapatella_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_r_knee_crease_pt")).setName("r_knee_crease_pt").setTranslation(-0.0825,0.4932,-0.0326).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_knee_crease_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_r_femoral_medial_epicondyles_pt")).setName("r_femoral_medial_epicondyles_pt").setTranslation(-0.0221,0.5014,0.0289).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_femoral_medial_epicondyles_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_r_femoral_lateral_epicondyles_pt")).setName("r_femoral_lateral_epicondyles_pt").setTranslation(-0.1421,0.4992,0.0310).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_femoral_lateral_epicondyles_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
            .addChild((new autoclass.HAnimJoint("STD_Joint_r_knee")).setName("r_knee").setCenter(-0.0867,0.4913,0.0318)
              .addChild((new autoclass.HAnimSegment("STD_Segment_r_calf")).setName("r_calf")
                .addChild((new autoclass.HAnimSite("STD_Site_r_tibiale_pt")).setName("r_tibiale_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_tibiale_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_r_lateral_malleolus_pt")).setName("r_lateral_malleolus_pt").setTranslation(-0.1006,0.0658,-0.1075).setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_lateral_malleolus_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_r_medial_malleolus_pt")).setName("r_medial_malleolus_pt").setTranslation(-0.0591,0.0760,-0.0928).setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_medial_malleolus_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
              .addChild((new autoclass.HAnimJoint("STD_Joint_r_talocrural")).setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766)
                .addChild((new autoclass.HAnimSegment("STD_Segment_r_talus")).setName("r_talus")
                  .addChild((new autoclass.HAnimSite("STD_Site_r_calcaneus_posterior_pt")).setName("r_calcaneus_posterior_pt").setTranslation(-0.0692,0.0297,-0.1221).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_calcaneus_posterior_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_r_sphyrion_pt")).setName("r_sphyrion_pt").setTranslation(-0.0603,0.0610,-0.1002).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_sphyrion_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
                .addChild((new autoclass.HAnimJoint("STD_Joint_r_metatarsophalangeal_2")).setName("r_metatarsophalangeal_2")
                  .addChild((new autoclass.HAnimSegment("STD_Segment_r_tarsal_proximal_phalanx_2")).setName("r_tarsal_proximal_phalanx_2")))))))
        .addChild((new autoclass.HAnimJoint("STD_Joint_vl5")).setName("vl5").setCenter(0.0028,1.0568,-0.0776)
          .addChild((new autoclass.HAnimSegment("STD_Segment_l5")).setName("l5")
            .addChild((new autoclass.HAnimSite("STD_Site_waist_preferred_posterior_pt")).setName("waist_preferred_posterior_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2900,1.0915,-0.1091)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite waist_preferred_posterior_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_waist_preferred_anterior_pt")).setName("waist_preferred_anterior_pt").setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite waist_preferred_anterior_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
            .addChild((new autoclass.HAnimSite("STD_Site_navel_pt")).setName("navel_pt").setTranslation(0.0069,1.0966,0.1017).setScale(0.0225,0.0225,0.0225)
              .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite navel_pt"))
              .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
          .addChild((new autoclass.HAnimJoint("STD_Joint_skullbase")).setName("skullbase").setCenter(0.0044,1.6209,0.0236)
            .addChild((new autoclass.HAnimSegment("STD_Segment_skull")).setName("skull")
              .addChild((new autoclass.HAnimSite("STD_Site_r_infraorbitale_pt")).setName("r_infraorbitale_pt").setTranslation(-0.0237,1.6171,0.0752).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_infraorbitale_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_ectocanthus_pt")).setName("l_ectocanthus_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_ectocanthus_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_r_tragion_pt")).setName("r_tragion_pt").setTranslation(-0.0646,1.6347,0.0302).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_tragion_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_r_ectocanthus_pt")).setName("r_ectocanthus_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_ectocanthus_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_infraorbitale_pt")).setName("l_infraorbitale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0341,1.6171,0.0752)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_infraorbitale_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_sellion_pt")).setName("sellion_pt").setTranslation(0.0058,1.6316,0.0852).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite sellion_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_nuchale_pt")).setName("nuchale_pt").setTranslation(0.0039,1.5972,-0.0796).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite nuchale_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_skull_vertex_pt")).setName("skull_vertex_pt").setTranslation(0.0050,1.7504,0.0055).setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite skull_vertex_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_glabella_pt")).setName("glabella_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite glabella_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_opisthocranion_pt")).setName("opisthocranion_pt").setScale(0.0225,0.0225,0.0225)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite opisthocranion_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
              .addChild((new autoclass.HAnimSite("STD_Site_l_tragion_pt")).setName("l_tragion_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.0739,1.6348,0.0282)
                .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_tragion_pt"))
                .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
            .addChild((new autoclass.HAnimJoint("STD_Joint_l_shoulder")).setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387)
              .addChild((new autoclass.HAnimSegment("STD_Segment_l_upperarm")).setName("l_upperarm")
                .addChild((new autoclass.HAnimSite("STD_Site_l_bideltoid_pt")).setName("l_bideltoid_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_bideltoid_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_l_humeral_lateral_epicondyles_pt")).setName("l_humeral_lateral_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2280,1.1482,-0.1100)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_humeral_lateral_epicondyles_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
              .addChild((new autoclass.HAnimJoint("STD_Joint_l_elbow")).setName("l_elbow").setCenter(0.2014,1.1357,-0.0682)
                .addChild((new autoclass.HAnimSegment("STD_Segment_l_forearm")).setName("l_forearm")
                  .addChild((new autoclass.HAnimSite("STD_Site_l_olecranon_pt")).setName("l_olecranon_pt").setTranslation(-0.1962,1.1375,-0.1123).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_olecranon_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_l_radial_styloid_pt")).setName("l_radial_styloid_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1901,0.8645,-0.0415)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_radial_styloid_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_l_humeral_medial_epicondyles_pt")).setName("l_humeral_medial_epicondyles_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.1735,1.1272,-0.1113)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_humeral_medial_epicondyles_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_l_radiale_pt")).setName("l_radiale_pt").setScale(0.0225,0.0225,0.0225).setTranslation(0.2182,1.1212,-0.1167)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_radiale_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
                .addChild((new autoclass.HAnimJoint("STD_Joint_l_radiocarpal")).setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583)
                  .addChild((new autoclass.HAnimSegment("STD_Segment_l_carpal")).setName("l_carpal")
                    .addChild((new autoclass.HAnimSite("STD_Site_l_ulnar_styloid_pt")).setName("l_ulnar_styloid_pt").setTranslation(-0.2142,0.8529,-0.0648).setScale(0.0225,0.0225,0.0225)
                      .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite l_ulnar_styloid_pt"))
                      .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))))))
            .addChild((new autoclass.HAnimJoint("STD_Joint_r_shoulder")).setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325)
              .addChild((new autoclass.HAnimSegment("STD_Segment_r_upperarm")).setName("r_upperarm")
                .addChild((new autoclass.HAnimSite("STD_Site_r_humeral_lateral_epicondyles_pt")).setName("r_humeral_lateral_epicondyles_pt").setTranslation(-0.2224,1.1517,-0.1033).setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_humeral_lateral_epicondyles_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                .addChild((new autoclass.HAnimSite("STD_Site_r_bideltoid_pt")).setName("r_bideltoid_pt").setScale(0.0225,0.0225,0.0225)
                  .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_bideltoid_pt"))
                  .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
              .addChild((new autoclass.HAnimJoint("STD_Joint_r_elbow")).setName("r_elbow").setCenter(-0.1949,1.1388,-0.0620)
                .addChild((new autoclass.HAnimSegment("STD_Segment_r_forearm")).setName("r_forearm")
                  .addChild((new autoclass.HAnimSite("STD_Site_r_radiale_pt")).setName("r_radiale_pt").setTranslation(-0.2130,1.1305,-0.1091).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_radiale_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_r_humeral_medial_epicondyles_pt")).setName("r_humeral_medial_epicondyles_pt").setTranslation(-0.1680,1.1298,-0.1062).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_humeral_medial_epicondyles_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_r_radial_styloid_pt")).setName("r_radial_styloid_pt").setTranslation(-0.1884,0.8676,-0.0360).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_radial_styloid_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape")))
                  .addChild((new autoclass.HAnimSite("STD_Site_r_olecranon_pt")).setName("r_olecranon_pt").setTranslation(-0.1907,1.1405,-0.1065).setScale(0.0225,0.0225,0.0225)
                    .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_olecranon_pt"))
                    .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))
                .addChild((new autoclass.HAnimJoint("STD_Joint_r_radiocarpal")).setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521)
                  .addChild((new autoclass.HAnimSegment("STD_Segment_r_carpal")).setName("r_carpal")
                    .addChild((new autoclass.HAnimSite("STD_Site_r_ulnar_styloid_pt")).setName("r_ulnar_styloid_pt").setTranslation(-0.2117,0.8562,-0.0584).setScale(0.0225,0.0225,0.0225)
                      .addChild((new autoclass.TouchSensor()).setDescription("HAnimSite r_ulnar_styloid_pt"))
                      .addChild((new autoclass.Shape()).setUSE("HAnimSiteShape"))))))))))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_humanoid_root"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_sacrum"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_sacroiliac"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_pelvis"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_iliocristale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_buttocks_standing_wall_contact_point_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_trochanterion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_asis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_crotch_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_psis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_iliocristale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_trochanterion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_asis_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_psis_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_hip"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_thigh"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_femoral_lateral_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_knee_crease_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_femoral_medial_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_suprapatella_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_knee"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_calf"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_lateral_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_medial_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_tibiale_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_talocrural"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_talus"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_sphyrion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_calcaneus_posterior_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_metatarsophalangeal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_tarsal_proximal_phalanx_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_hip"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_thigh"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_suprapatella_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_knee_crease_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_femoral_medial_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_femoral_lateral_epicondyles_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_knee"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_calf"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_tibiale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_lateral_malleolus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_medial_malleolus_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_talocrural"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_talus"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_calcaneus_posterior_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_sphyrion_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_metatarsophalangeal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_tarsal_proximal_phalanx_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_vl5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l5"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_waist_preferred_posterior_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_waist_preferred_anterior_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_navel_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_skullbase"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_skull"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_infraorbitale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_ectocanthus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_tragion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_ectocanthus_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_infraorbitale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_sellion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_nuchale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_skull_vertex_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_glabella_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_opisthocranion_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_tragion_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_shoulder"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_upperarm"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_bideltoid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_humeral_lateral_epicondyles_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_elbow"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_forearm"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_olecranon_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_radial_styloid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_humeral_medial_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_radiale_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_l_radiocarpal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_l_carpal"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_l_ulnar_styloid_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_shoulder"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_upperarm"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_humeral_lateral_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_bideltoid_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_elbow"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_forearm"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_radiale_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_humeral_medial_epicondyles_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_radial_styloid_pt"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_olecranon_pt"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("STD_Joint_r_radiocarpal"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("STD_Segment_r_carpal"))
      .addSites((new autoclass.HAnimSite()).setUSE("STD_Site_r_ulnar_styloid_pt"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return skeletonLOA1 model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new skeletonLOA1();
		console.log ("skeletonLOA1 execution self-validation test results: " + testObject.validateSelf());
	}
}
new skeletonLOA1().main();
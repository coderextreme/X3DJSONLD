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
 * <p> Right foot, using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links: HAnimModelFootRight.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Kwan-Hee YOO, Don Brutzman and Joe Williams
 */

function HAnimModelFootRight
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimModelFootRight.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #26, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_26_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelFootRight.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Right foot, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 January 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 December 2021"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("not yet to scale"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Add links to figures"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Add Viewpoints to enable inspection"))
    .addMeta((new autoclass.meta()).setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D HAnim humanoid animation"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelFootRight.x3d"))
    .addChild((new autoclass.HAnimHumanoid("hanim_Foot_Right")).setName("Foot_Right").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .setMetadata((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_26_reference)
        .addValue((new autoclass.MetadataString()).setName("authorName").setValue(new autoclass.MFString("\"Kwan-Hee YOO, Don Brutzman and Joe Williams\""))))
      .addSkeleton((new autoclass.HAnimJoint("hanim_humanoid_root")).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model ")
        .addChild((new autoclass.HAnimJoint("hanim_r_talocrural")).setName("r_talocrural").setDescription("connection joint of foot to leg above").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment("hanim_r_talus")).setName("r_talus")
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape("HAnimJointShape"))
                .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                .setAppearance((new autoclass.Appearance("HAnimJointAppearance"))
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.IndexedLineSet("TCtoTCN")).setDEF("TCtoTCN").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,-0.3,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.IndexedLineSet("TCtoCC")).setDEF("TCtoCC").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,-0.2,0.3,0.0])))))))
          .addComments(" TCN ")
          .addChild((new autoclass.HAnimJoint("hanim_r_talocalcaneonavicular")).setName("r_talocalcaneonavicular").setCenter(0.0,-0.3,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_navicular")).setName("r_navicular")
              .addChild((new autoclass.Transform()).setTranslation(0.0,-0.3,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN1")).setDEF("TCNtoCN1").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,0.1,-0.45,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN2")).setDEF("TCNtoCN2").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,0.0,-0.45,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN3")).setDEF("TCNtoCN3").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,-0.1,-0.4,0.0])))))))
            .addComments(" CN1 ")
            .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_1")).setName("r_cuneonavicular_1").setCenter(0.1,-0.45,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_cuneiform_1")).setName("r_cuneiform_1")
                .addChild((new autoclass.Transform()).setTranslation(0.1,-0.45,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CN1toTMT1")).setDEF("CN1toTMT1").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.45,0.0,0.1,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_1")).setName("r_tarsometatarsal_1").setCenter(0.1,-0.6,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_1")).setName("r_metatarsal_1")
                  .addChild((new autoclass.Transform()).setTranslation(0.1,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("TMT1toMTP1")).setDEF("TMT1toMTP1").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.6,0.0,0.1,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_1")).setName("r_metatarsophalangeal_1").setCenter(0.1,-0.9,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_1")).setName("r_tarsal_proximal_phalanx_1")
                    .addChild((new autoclass.Transform()).setTranslation(0.1,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("MTP1toIP1")).setDEF("MTP1toIP1").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.9,0.0,0.1,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_interphalangeal_1")).setName("r_tarsal_interphalangeal_1").setCenter(0.1,-1.05,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_1")).setName("r_tarsal_distal_phalanx_1")
                      .addChild((new autoclass.Transform()).setTranslation(0.1,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_interphalangeal_")).setDEF("tiptoe_r_interphalangeal_").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-1.05,0.0,0.1,-1.1,0.0])))))))))))
            .addComments(" CN2 ")
            .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_2")).setName("r_cuneonavicular_2").setCenter(0.0,-0.45,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_cuneiform_2")).setName("r_cuneiform_2")
                .addChild((new autoclass.Transform()).setTranslation(0.0,-0.45,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CN2toTMT2")).setDEF("CN2toTMT2").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.45,0.0,-0.05,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_2")).setName("r_tarsometatarsal_2").setCenter(-0.05,-0.6,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_2")).setName("r_metatarsal_2")
                  .addChild((new autoclass.Transform()).setTranslation(-0.05,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("TMT2toMTP2")).setDEF("TMT2toMTP2").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-0.6,0.0,-0.05,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_2")).setName("r_metatarsophalangeal_2").setCenter(-0.05,-0.9,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_2")).setName("r_tarsal_proximal_phalanx_2")
                    .addChild((new autoclass.Transform()).setTranslation(-0.05,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("MTP2toPIP2")).setDEF("MTP2toPIP2").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-0.9,0.0,-0.05,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2")).setName("r_tarsal_proximal_interphalangeal_2").setCenter(-0.05,-1.05,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_middle_phalanx_2")).setName("r_tarsal_middle_phalanx_2")
                      .addChild((new autoclass.Transform()).setTranslation(-0.05,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("PIP2toDIP2")).setDEF("PIP2toDIP2").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-1.05,0.0,-0.05,-1.12,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2")).setName("r_tarsal_distal_interphalangeal_2").setCenter(-0.05,-1.12,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_2")).setName("r_tarsal_distal_phalanx_2")
                        .addChild((new autoclass.Transform()).setTranslation(-0.05,-1.12,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_2")).setDEF("tiptoe_r_tarsal_distal_interphalangeal_2").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-1.12,0.0,-0.05,-1.16,0.0]))))))))))))
            .addComments(" CN3 ")
            .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_3")).setName("r_cuneonavicular_3").setCenter(-0.1,-0.4,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_cuneiform_3")).setName("r_cuneiform_3")
                .addChild((new autoclass.Transform()).setTranslation(-0.1,-0.4,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CN3toTMT3")).setDEF("CN3toTMT3").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,-0.4,0.0,-0.15,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_3")).setName("r_tarsometatarsal_3").setCenter(-0.15,-0.6,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_3")).setName("r_metatarsal_3")
                  .addChild((new autoclass.Transform()).setTranslation(-0.15,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("TMT3toMTP3")).setDEF("TMT3toMTP3").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-0.6,0.0,-0.15,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_3")).setName("r_metatarsophalangeal_3").setCenter(-0.15,-0.9,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_3")).setName("r_tarsal_proximal_phalanx_3")
                    .addChild((new autoclass.Transform()).setTranslation(-0.15,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("MTP3toPIP3")).setDEF("MTP3toPIP3").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-0.9,0.0,-0.15,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3")).setName("r_tarsal_proximal_interphalangeal_3").setCenter(-0.15,-1.05,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_middle_phalanx_3")).setName("r_tarsal_middle_phalanx_3")
                      .addChild((new autoclass.Transform()).setTranslation(-0.15,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("PIP3toDIP3")).setDEF("PIP3toDIP3").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-1.05,0.0,-0.15,-1.13,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3")).setName("r_tarsal_distal_interphalangeal_3").setCenter(-0.15,-1.13,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_3")).setName("r_tarsal_distal_phalanx_3")
                        .addChild((new autoclass.Transform()).setTranslation(-0.15,-1.13,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_3")).setDEF("tiptoe_r_tarsal_distal_interphalangeal_3").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-1.13,0.0,-0.15,-1.16,0.0])))))))))))))
          .addComments(" CC ")
          .addChild((new autoclass.HAnimJoint("hanim_r_calcaneocuboid")).setName("r_calcaneocuboid").setCenter(-0.2,0.3,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_calcaneus")).setName("r_calcaneus")
              .addChild((new autoclass.Transform()).setTranslation(-0.2,0.3,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("CCtoTT")).setDEF("CCtoTT").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.2,0.3,0.0,-0.21,-0.3,0.0])))))))
            .addComments(" TT ")
            .addChild((new autoclass.HAnimJoint("hanim_r_transversetarsal")).setName("r_transversetarsal").setCenter(-0.21,-0.3,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_cuboid")).setName("r_cuboid")
                .addChild((new autoclass.Transform()).setTranslation(-0.21,-0.3,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("TTtoTMT4")).setDEF("TTtoTMT4").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.21,-0.3,0.0,-0.25,-0.58,0.0]))))))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("TTtoTMT5")).setDEF("TTtoTMT5").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.21,-0.3,0.0,-0.33,-0.52,0.0])))))))
              .addComments(" TMT4 ")
              .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_4")).setName("r_tarsometatarsal_4").setCenter(-0.25,-0.58,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_4")).setName("r_metatarsal_4")
                  .addChild((new autoclass.Transform()).setTranslation(-0.25,-0.58,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("TMT4toMTP4")).setDEF("TMT4toMTP4").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-0.58,0.0,-0.25,-0.87,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_4")).setName("r_metatarsophalangeal_4").setCenter(-0.25,-0.87,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_4")).setName("r_tarsal_proximal_phalanx_4")
                    .addChild((new autoclass.Transform()).setTranslation(-0.25,-0.87,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("MTP4toPIP4")).setDEF("MTP4toPIP4").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-0.87,0.0,-0.25,-1.0,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4")).setName("r_tarsal_proximal_interphalangeal_4").setCenter(-0.25,-1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_middle_phalanx_4")).setName("r_tarsal_middle_phalanx_4")
                      .addChild((new autoclass.Transform()).setTranslation(-0.25,-1.0,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("PIP4toDIP4")).setDEF("PIP4toDIP4").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-1.0,0.0,-0.25,-1.1,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4")).setName("r_tarsal_distal_interphalangeal_4").setCenter(-0.25,-1.1,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_4")).setName("r_tarsal_distal_phalanx_4")
                        .addChild((new autoclass.Transform()).setTranslation(-0.25,-1.1,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_4")).setDEF("tiptoe_r_tarsal_distal_interphalangeal_4").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-1.1,0.0,-0.25,-1.15,0.0])))))))))))
              .addComments(" TMT5 ")
              .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_5")).setName("r_tarsometatarsal_5").setCenter(-0.33,-0.52,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_metatarsal_5")).setName("r_metatarsal_5")
                  .addChild((new autoclass.Transform()).setTranslation(-0.33,-0.52,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("TMT5toMTP5")).setDEF("TMT5toMTP5").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.33,-0.52,0.0,-0.34,-0.8,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_5")).setName("r_metatarsophalangeal_5").setCenter(-0.34,-0.8,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_proximal_phalanx_5")).setName("r_tarsal_proximal_phalanx_5")
                    .addChild((new autoclass.Transform()).setTranslation(-0.34,-0.8,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("MTP5toPIP5")).setDEF("MTP5toPIP5").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-0.8,0.0,-0.34,-0.95,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5")).setName("r_tarsal_proximal_interphalangeal_5").setCenter(-0.34,-0.95,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_middle_phalanx_5")).setName("r_tarsal_middle_phalanx_5")
                      .addChild((new autoclass.Transform()).setTranslation(-0.34,-0.95,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("PIP5toDIP5")).setDEF("PIP5toDIP5").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-0.95,0.0,-0.34,-1.05,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5")).setName("r_tarsal_distal_interphalangeal_5").setCenter(-0.34,-1.05,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimSegment("hanim_r_tarsal_distal_phalanx_5")).setName("r_tarsal_distal_phalanx_5")
                        .addChild((new autoclass.Transform()).setTranslation(-0.34,-1.05,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_5")).setDEF("tiptoe_r_tarsal_distal_interphalangeal_5").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-1.05,0.0,-0.34,-1.08,0.0])))))))))))))))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_calcaneocuboid").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_cuneonavicular_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_cuneonavicular_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_cuneonavicular_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_metatarsophalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_talocalcaneonavicular").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_talocrural").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_distal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_distal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_distal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_distal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_interphalangeal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_proximal_interphalangeal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_proximal_interphalangeal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_proximal_interphalangeal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsal_proximal_interphalangeal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_1").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_2").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_3").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_4").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_tarsometatarsal_5").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_r_transversetarsal").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_calcaneus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_cuboid"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_cuneiform_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_cuneiform_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_cuneiform_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_metatarsal_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_navicular"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_talus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_distal_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_middle_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_middle_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_middle_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_middle_phalanx_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("hanim_r_tarsal_proximal_phalanx_5"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimModelFootRight model
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
		var testObject = new HAnimModelFootRight();
		console.log ("HAnimModelFootRight execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new HAnimModelFootRight().main();
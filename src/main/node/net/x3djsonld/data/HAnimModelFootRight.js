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
 * <p> Right foot, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelFootRight.java">HAnimModelFootRight.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelFootRightIndex.html" target="_top">HAnimModelFootRight catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author YOO Kwan Hee and Don Brutzman
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
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelFootRight.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Right foot, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 January 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("not yet to scale"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D H-Anim humanoid animation"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("scene, DOCTYPE and Schema under development."))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelFootRight.x3d"))
    .addChild((new autoclass.HAnimHumanoid("Humanoid_Right_Foot")).setName("Humanoid_Right_Foot").setVersion("2.0")
      .addSkeleton((new autoclass.HAnimJoint("hanim_HumanoidRoot")).setName("humanoid_root")
        .addChild((new autoclass.HAnimJoint("r_talocrural_joint")).setName("r_talocrural_joint")
          .addChild((new autoclass.HAnimSegment("r_talus")).setName("r_talus")
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape("HAnimJointShape"))
                .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                .setAppearance((new autoclass.Appearance("HAnimJointAppearance"))
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.IndexedLineSet("TCtoTCN")).setDEF("TCtoTCN").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,-0.3,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.IndexedLineSet("TCtoCC")).setDEF("TCtoCC").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,-0.2,0.3,0.0])))))))
          .addComments(" TCN ")
          .addChild((new autoclass.HAnimJoint("r_talocalcaneonavicular_joint")).setName("r_talocalcaneonavicular_joint").setCenter(0.0,-0.3,0.0)
            .addChild((new autoclass.HAnimSegment("r_navicular")).setName("r_navicular")
              .addChild((new autoclass.Transform()).setTranslation(0.0,-0.3,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN1")).setDEF("TCNtoCN1").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,0.1,-0.45,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN2")).setDEF("TCNtoCN2").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,0.0,-0.45,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("TCNtoCN3")).setDEF("TCNtoCN3").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.3,0.0,-0.1,-0.4,0.0])))))))
            .addComments(" CN1 ")
            .addChild((new autoclass.HAnimJoint("r_cuneonavicular_joint1")).setName("r_cuneonavicular_joint1").setCenter(0.1,-0.45,0.0)
              .addChild((new autoclass.HAnimSegment("r_cuneiform1")).setName("r_cuneiform1")
                .addChild((new autoclass.Transform()).setTranslation(0.1,-0.45,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CN1toTMT1")).setDEF("CN1toTMT1").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.45,0.0,0.1,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("r_tarsometatarsal_joint1")).setName("r_tarsometatarsal_joint1").setCenter(0.1,-0.6,0.0)
                .addChild((new autoclass.HAnimSegment("r_metatarsal1")).setName("r_metatarsal1")
                  .addChild((new autoclass.Transform()).setTranslation(0.1,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("TMT1toMTP1")).setDEF("TMT1toMTP1").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.6,0.0,0.1,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("r_metatarsophalangeal_joint1")).setName("r_metatarsophalangeal_joint1").setCenter(0.1,-0.9,0.0)
                  .addChild((new autoclass.HAnimSegment("r_proximal_phalanges1")).setName("r_proximal_phalanges1")
                    .addChild((new autoclass.Transform()).setTranslation(0.1,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("MTP1toIP1")).setDEF("MTP1toIP1").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-0.9,0.0,0.1,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("r_f_Interphalangeal_joint")).setName("r_f_Interphalangeal_joint").setCenter(0.1,-1.05,0.0)
                    .addChild((new autoclass.HAnimSegment("r_distal_phalanges1")).setName("r_distal_phalanges1")
                      .addChild((new autoclass.Transform()).setTranslation(0.1,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_f_Interphalangeal_joint")).setDEF("tiptoe_r_f_Interphalangeal_joint").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,-1.05,0.0,0.1,-1.1,0.0])))))))))))
            .addComments(" CN2 ")
            .addChild((new autoclass.HAnimJoint("r_cuneonavicular_joint2")).setName("r_cuneonavicular_joint2").setCenter(0.0,-0.45,0.0)
              .addChild((new autoclass.HAnimSegment("r_cuneiform2")).setName("r_cuneiform2")
                .addChild((new autoclass.Transform()).setTranslation(0.0,-0.45,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CN2toTMT2")).setDEF("CN2toTMT2").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,-0.45,0.0,-0.05,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("r_tarsometatarsal_joint2")).setName("r_tarsometatarsal_joint2").setCenter(-0.05,-0.6,0.0)
                .addChild((new autoclass.HAnimSegment("r_metatarsal2")).setName("r_metatarsal2")
                  .addChild((new autoclass.Transform()).setTranslation(-0.05,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("TMT2toMTP2")).setDEF("TMT2toMTP2").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-0.6,0.0,-0.05,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("r_metatarsophalangeal_joint2")).setName("r_metatarsophalangeal_joint2").setCenter(-0.05,-0.9,0.0)
                  .addChild((new autoclass.HAnimSegment("r_proximal_phalanges2")).setName("r_proximal_phalanges2")
                    .addChild((new autoclass.Transform()).setTranslation(-0.05,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("MTP2toPIP2")).setDEF("MTP2toPIP2").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-0.9,0.0,-0.05,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("r_f_proximal_Interphalangeal_joint2")).setName("r_f_proximal_Interphalangeal_joint2").setCenter(-0.05,-1.05,0.0)
                    .addChild((new autoclass.HAnimSegment("r_middle_phalanges2")).setName("r_middle_phalanges2")
                      .addChild((new autoclass.Transform()).setTranslation(-0.05,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("PIP2toDIP2")).setDEF("PIP2toDIP2").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-1.05,0.0,-0.05,-1.12,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("r_f_distal_Interphalangeal_joint2")).setName("r_f_distal_Interphalangeal_joint2").setCenter(-0.05,-1.12,0.0)
                      .addChild((new autoclass.HAnimSegment("r_distal_phalanges2")).setName("r_distal_phalanges2")
                        .addChild((new autoclass.Transform()).setTranslation(-0.05,-1.12,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material())))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint2")).setDEF("tiptoe_r_f_distal_Interphalangeal_joint2").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,-1.12,0.0,-0.05,-1.16,0.0]))))))))))))
            .addComments(" CN3 ")
            .addChild((new autoclass.HAnimJoint("r_cuneonavicular_joint3")).setName("r_cuneonavicular_joint3").setCenter(-0.1,-0.4,0.0)
              .addChild((new autoclass.HAnimSegment("r_cuneiform3")).setName("r_cuneiform3")
                .addChild((new autoclass.Transform()).setTranslation(-0.1,-0.4,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CN3toTMT3")).setDEF("CN3toTMT3").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,-0.4,0.0,-0.15,-0.6,0.0])))))))
              .addChild((new autoclass.HAnimJoint("r_tarsometatarsal_joint3")).setName("r_tarsometatarsal_joint3").setCenter(-0.15,-0.6,0.0)
                .addChild((new autoclass.HAnimSegment("r_metatarsal3")).setName("r_metatarsal3")
                  .addChild((new autoclass.Transform()).setTranslation(-0.15,-0.6,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("TMT3toMTP3")).setDEF("TMT3toMTP3").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-0.6,0.0,-0.15,-0.9,0.0])))))))
                .addChild((new autoclass.HAnimJoint("r_metatarsophalangeal_joint3")).setName("r_metatarsophalangeal_joint3").setCenter(-0.15,-0.9,0.0)
                  .addChild((new autoclass.HAnimSegment("r_proximal_phalanges3")).setName("r_proximal_phalanges3")
                    .addChild((new autoclass.Transform()).setTranslation(-0.15,-0.9,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("MTP3toPIP3")).setDEF("MTP3toPIP3").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-0.9,0.0,-0.15,-1.05,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("r_f_proximal_Interphalangeal_joint3")).setName("r_f_proximal_Interphalangeal_joint3").setCenter(-0.15,-1.05,0.0)
                    .addChild((new autoclass.HAnimSegment("r_middle_phalanges3")).setName("r_middle_phalanges3")
                      .addChild((new autoclass.Transform()).setTranslation(-0.15,-1.05,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("PIP3toDIP3")).setDEF("PIP3toDIP3").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-1.05,0.0,-0.15,-1.13,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("r_f_distal_Interphalangeal_joint3")).setName("r_f_distal_Interphalangeal_joint3").setCenter(-0.15,-1.13,0.0)
                      .addChild((new autoclass.HAnimSegment("r_distal_phalanges3")).setName("r_distal_phalanges3")
                        .addChild((new autoclass.Transform()).setTranslation(-0.15,-1.13,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material())))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint3")).setDEF("tiptoe_r_f_distal_Interphalangeal_joint3").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,-1.13,0.0,-0.15,-1.16,0.0])))))))))))))
          .addComments(" CC ")
          .addChild((new autoclass.HAnimJoint("r_calcaneuscuboid_joint")).setName("r_calcaneuscuboid_joint").setCenter(-0.2,0.3,0.0)
            .addChild((new autoclass.HAnimSegment("r_calcaneus")).setName("r_calcaneus")
              .addChild((new autoclass.Transform()).setTranslation(-0.2,0.3,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("CCtoTT")).setDEF("CCtoTT").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.2,0.3,0.0,-0.21,-0.3,0.0])))))))
            .addComments(" TT ")
            .addChild((new autoclass.HAnimJoint("r_transverse_tarsal_joint")).setName("r_transverse_tarsal_joint").setCenter(-0.21,-0.3,0.0)
              .addChild((new autoclass.HAnimSegment("r_cuboid")).setName("r_cuboid")
                .addChild((new autoclass.Transform()).setTranslation(-0.21,-0.3,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("TTtoTMT4")).setDEF("TTtoTMT4").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.21,-0.3,0.0,-0.25,-0.58,0.0]))))))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("TTtoTMT5")).setDEF("TTtoTMT5").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.21,-0.3,0.0,-0.33,-0.52,0.0])))))))
              .addComments(" TMT4 ")
              .addChild((new autoclass.HAnimJoint("r_tarsometatarsal_joint4")).setName("r_tarsometatarsal_joint4").setCenter(-0.25,-0.58,0.0)
                .addChild((new autoclass.HAnimSegment("r_metatarsal4")).setName("r_metatarsal4")
                  .addChild((new autoclass.Transform()).setTranslation(-0.25,-0.58,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("TMT4toMTP4")).setDEF("TMT4toMTP4").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-0.58,0.0,-0.25,-0.87,0.0])))))))
                .addChild((new autoclass.HAnimJoint("r_metatarsophalangeal_joint4")).setName("r_metatarsophalangeal_joint4").setCenter(-0.25,-0.87,0.0)
                  .addChild((new autoclass.HAnimSegment("r_proximal_phalanges4")).setName("r_proximal_phalanges4")
                    .addChild((new autoclass.Transform()).setTranslation(-0.25,-0.87,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("MTP4toPIP4")).setDEF("MTP4toPIP4").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-0.87,0.0,-0.25,-1.0,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("r_f_proximal_Interphalangeal_joint4")).setName("r_f_proximal_Interphalangeal_joint4").setCenter(-0.25,-1.0,0.0)
                    .addChild((new autoclass.HAnimSegment("r_middle_phalanges4")).setName("r_middle_phalanges4")
                      .addChild((new autoclass.Transform()).setTranslation(-0.25,-1.0,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("PIP4toDIP4")).setDEF("PIP4toDIP4").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-1.0,0.0,-0.25,-1.1,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("r_f_distal_Interphalangeal_joint4")).setName("r_f_distal_Interphalangeal_joint4").setCenter(-0.25,-1.1,0.0)
                      .addChild((new autoclass.HAnimSegment("r_distal_phalanges4")).setName("r_distal_phalanges4")
                        .addChild((new autoclass.Transform()).setTranslation(-0.25,-1.1,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material())))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint4")).setDEF("tiptoe_r_f_distal_Interphalangeal_joint4").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,-1.1,0.0,-0.25,-1.15,0.0])))))))))))
              .addComments(" TMT5 ")
              .addChild((new autoclass.HAnimJoint("r_tarsometatarsal_joint5")).setName("r_tarsometatarsal_joint5").setCenter(-0.33,-0.52,0.0)
                .addChild((new autoclass.HAnimSegment("r_metatarsal5")).setName("r_metatarsal5")
                  .addChild((new autoclass.Transform()).setTranslation(-0.33,-0.52,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("TMT5toMTP5")).setDEF("TMT5toMTP5").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.33,-0.52,0.0,-0.34,-0.8,0.0])))))))
                .addChild((new autoclass.HAnimJoint("r_metatarsophalangeal_joint5")).setName("r_metatarsophalangeal_joint5").setCenter(-0.34,-0.8,0.0)
                  .addChild((new autoclass.HAnimSegment("r_proximal_phalanges5")).setName("r_proximal_phalanges5")
                    .addChild((new autoclass.Transform()).setTranslation(-0.34,-0.8,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("MTP5toPIP5")).setDEF("MTP5toPIP5").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-0.8,0.0,-0.34,-0.95,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("r_f_proximal_Interphalangeal_joint5")).setName("r_f_proximal_Interphalangeal_joint5").setCenter(-0.34,-0.95,0.0)
                    .addChild((new autoclass.HAnimSegment("r_middle_phalanges5")).setName("r_middle_phalanges5")
                      .addChild((new autoclass.Transform()).setTranslation(-0.34,-0.95,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("PIP5toDIP5")).setDEF("PIP5toDIP5").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-0.95,0.0,-0.34,-1.05,0.0])))))))
                    .addChild((new autoclass.HAnimJoint("r_f_distal_Interphalangeal_joint5")).setName("r_f_distal_Interphalangeal_joint5").setCenter(-0.34,-1.05,0.0)
                      .addChild((new autoclass.HAnimSegment("r_distal_phalanges5")).setName("r_distal_phalanges5")
                        .addChild((new autoclass.Transform()).setTranslation(-0.34,-1.05,0.0)
                          .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                        .addChild((new autoclass.Shape())
                          .setAppearance((new autoclass.Appearance())
                            .setMaterial((new autoclass.Material())))
                          .setGeometry((new autoclass.IndexedLineSet("tiptoe_r_f_distal_Interphalangeal_joint5")).setDEF("tiptoe_r_f_distal_Interphalangeal_joint5").setCoordIndex(java.newArray("int", [0,1]))
                            .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.34,-1.05,0.0,-0.34,-1.08,0.0])))))))))))))))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_HumanoidRoot"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_talocrural_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_talocalcaneonavicular_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_cuneonavicular_joint1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_tarsometatarsal_joint1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_metatarsophalangeal_joint1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_Interphalangeal_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_cuneonavicular_joint2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_tarsometatarsal_joint2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_metatarsophalangeal_joint2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_proximal_Interphalangeal_joint2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_distal_Interphalangeal_joint2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_cuneonavicular_joint3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_tarsometatarsal_joint3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_metatarsophalangeal_joint3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_proximal_Interphalangeal_joint3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_distal_Interphalangeal_joint3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_calcaneuscuboid_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_transverse_tarsal_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_tarsometatarsal_joint4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_metatarsophalangeal_joint4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_proximal_Interphalangeal_joint4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_distal_Interphalangeal_joint4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_tarsometatarsal_joint5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_metatarsophalangeal_joint5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_proximal_Interphalangeal_joint5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("r_f_distal_Interphalangeal_joint5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_talus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_navicular"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_cuneiform1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_metatarsal1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_cuneiform2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_metatarsal2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_cuneiform3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_metatarsal3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_calcaneus"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_cuboid"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_metatarsal4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_metatarsal5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_proximal_phalanges5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_middle_phalanges5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("r_distal_phalanges5"))));
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
	}
}
new HAnimModelFootRight().main();
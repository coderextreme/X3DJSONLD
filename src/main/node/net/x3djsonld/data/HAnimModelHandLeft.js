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
 * <p> Left hand, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelHandLeft.java">HAnimModelHandLeft.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelHandLeftIndex.html" target="_top">HAnimModelHandLeft catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author YOO Kwan Hee and Don Brutzman
 */

function HAnimModelHandLeft
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimModelHandLeft.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("H-Anim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelHandLeft.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Left hand, using high-fidelity definitions for H-Anim version 2.2"))
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
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelHandLeft.x3d"))
    .addChild((new autoclass.HAnimHumanoid("Humanoid_Left_hand")).setName("Humanoid_Left_hand").setVersion("2.0")
      .addSkeleton((new autoclass.HAnimJoint("hanim_HumanoidRoot")).setName("humanoid_root")
        .addChild((new autoclass.HAnimJoint("l_radiocarpal_joint")).setName("l_radiocarpal_joint")
          .addChild((new autoclass.HAnimSegment("l_wrist")).setName("l_wrist")
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape("HAnimJointShape"))
                .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                .setAppearance((new autoclass.Appearance("HAnimJointAppearanceBlue"))
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC12")).setDEF("RCToMC12").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.1,0.1,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC3")).setDEF("RCToMC3").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.07,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC45")).setDEF("RCToMC45").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,-0.1,0.1,0.0])))))))
          .addComments(" MC12 ")
          .addChild((new autoclass.HAnimJoint("l_midcarpal_joint_12")).setName("l_midcarpal_joint_12").setCenter(0.1,0.1,0.0)
            .addChild((new autoclass.HAnimSegment("l_trapezoid")).setName("l_trapezoid")
              .addChild((new autoclass.Transform()).setTranslation(0.1,0.1,0.0)
                .addChild((new autoclass.Shape("HAnimNewJointShape"))
                  .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                  .setAppearance((new autoclass.Appearance("HAnimJointAppearanceRed"))
                    .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("MC12toCMC1")).setDEF("MC12toCMC1").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.1,0.0,0.2,0.15,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("MC12toCMC2")).setDEF("MC12toCMC2").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.1,0.0,0.1,0.2,0.0])))))))
            .addComments(" thumb finger ")
            .addChild((new autoclass.HAnimJoint("l_carpometacarpal_joint_1")).setName("l_carpometacarpal_joint_1").setCenter(0.2,0.15,0.0)
              .addChild((new autoclass.HAnimSegment("l_metacarpal_1")).setName("l_metacarpal_1")
                .addChild((new autoclass.Transform()).setTranslation(0.2,0.15,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CMC1toMCP1")).setDEF("CMC1toMCP1").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.2,0.15,0.0,0.3,0.3,0.0])))))))
              .addChild((new autoclass.HAnimJoint("l_metacarpophalangeal_joint_1")).setName("l_metacarpophalangeal_joint_1").setCenter(0.3,0.3,0.0)
                .addChild((new autoclass.HAnimSegment("l_proximal_phalanges1")).setName("l_proximal_phalanges1")
                  .addChild((new autoclass.Transform()).setTranslation(0.3,0.3,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("MCP11toIP1")).setDEF("MCP11toIP1").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.3,0.3,0.0,0.35,0.4,0.0])))))))
                .addChild((new autoclass.HAnimJoint("l_interphalangeal_joint_1")).setName("l_interphalangeal_joint_1").setCenter(0.35,0.4,0.0)
                  .addChild((new autoclass.HAnimSegment("l_distal_phalanges1")).setName("l_distal_phalanges1")
                    .addChild((new autoclass.Transform()).setTranslation(0.35,0.4,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("fingertip_l_interphalangeal_joint_1")).setDEF("fingertip_l_interphalangeal_joint_1").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.35,0.4,0.0,0.36,0.45,0.0]))))))))))
            .addComments(" index finger ")
            .addChild((new autoclass.HAnimJoint("l_carpometacarpal_joint_2")).setName("l_carpometacarpal_joint_2").setCenter(0.1,0.2,0.0)
              .addChild((new autoclass.HAnimSegment("l_metacarpal2")).setName("l_metacarpal2")
                .addChild((new autoclass.Transform()).setTranslation(0.1,0.2,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CMC2toMCP2")).setDEF("CMC2toMCP2").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.2,0.0,0.15,0.5,0.0])))))))
              .addChild((new autoclass.HAnimJoint("l_metacarpophalangeal_joint_2")).setName("l_metacarpophalangeal_joint_2").setCenter(0.15,0.5,0.0)
                .addChild((new autoclass.HAnimSegment("l_proximal_phalanges2")).setName("l_proximal_phalanges2")
                  .addChild((new autoclass.Transform()).setTranslation(0.15,0.5,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("MCP2toPIP2")).setDEF("MCP2toPIP2").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.15,0.5,0.0,0.2,0.7,0.0])))))))
                .addChild((new autoclass.HAnimJoint("l_proximal_interphalangeal_joint_2")).setName("l_proximal_interphalangeal_joint_2").setCenter(0.2,0.7,0.0)
                  .addChild((new autoclass.HAnimSegment("l_middle_phalanges2")).setName("l_middle_phalanges2")
                    .addChild((new autoclass.Transform()).setTranslation(0.2,0.7,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("PIP2toDIP2")).setDEF("PIP2toDIP2").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.2,0.7,0.0,0.24,0.87,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("l_distal_interphalangeal_joint_2")).setName("l_distal_interphalangeal_joint_2").setCenter(0.24,0.87,0.0)
                    .addChild((new autoclass.HAnimSegment("l_distal_phalanges2")).setName("l_distal_phalanges2")
                      .addChild((new autoclass.Transform()).setTranslation(0.24,0.87,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_l_distal_interphalangeal_joint_2")).setDEF("fingertip_l_distal_interphalangeal_joint_2").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.24,0.87,0.0,0.26,0.93,0.0]))))))))))))
          .addComments(" MC3 ")
          .addChild((new autoclass.HAnimJoint("l_midcarpal_joint_3")).setName("l_midcarpal_joint_3").setCenter(0.0,0.07,0.0)
            .addChild((new autoclass.HAnimSegment("l_capitate")).setName("l_capitate")
              .addChild((new autoclass.Transform()).setTranslation(0.0,0.07,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimNewJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("MC3toCMC3")).setDEF("MC3toCMC3").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.07,0.0,0.0,0.2,0.0])))))))
            .addComments(" Middle fingle ")
            .addChild((new autoclass.HAnimJoint("l_carpometacarpal_joint_3")).setName("l_carpometacarpal_joint_3").setCenter(0.0,0.2,0.0)
              .addChild((new autoclass.HAnimSegment("l_metacarpal3")).setName("l_metacarpal3")
                .addChild((new autoclass.Transform()).setTranslation(0.0,0.2,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CMC3toMCP3")).setDEF("CMC3toMCP3").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.2,0.0,0.03,0.5,0.0])))))))
              .addChild((new autoclass.HAnimJoint("l_metacarpophalangeal_joint_3")).setName("l_metacarpophalangeal_joint_3").setCenter(0.03,0.5,0.0)
                .addChild((new autoclass.HAnimSegment("l_proximal_phalanges3")).setName("l_proximal_phalanges3")
                  .addChild((new autoclass.Transform()).setTranslation(0.03,0.5,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("MCP3toPIP3")).setDEF("MCP3toPIP3").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.03,0.5,0.0,0.05,0.75,0.0])))))))
                .addChild((new autoclass.HAnimJoint("l_proximal_interphalangeal_joint_3")).setName("l_proximal_interphalangeal_joint_3").setCenter(0.05,0.75,0.0)
                  .addChild((new autoclass.HAnimSegment("l_middle_phalanges3")).setName("l_middle_phalanges3")
                    .addChild((new autoclass.Transform()).setTranslation(0.05,0.75,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("PIP3toDIP3")).setDEF("PIP3toDIP3").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.05,0.75,0.0,0.08,0.96,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("l_distal_interphalangeal_joint_3")).setName("l_distal_interphalangeal_joint_3").setCenter(0.08,0.96,0.0)
                    .addChild((new autoclass.HAnimSegment("l_distal_phalanges3")).setName("l_distal_phalanges3")
                      .addChild((new autoclass.Transform()).setTranslation(0.08,0.96,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_l_distal_interphalangeal_joint_3")).setDEF("fingertip_l_distal_interphalangeal_joint_3").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.08,0.96,0.0,0.09,1.05,0.0]))))))))))))
          .addComments(" MC45 ")
          .addChild((new autoclass.HAnimJoint("l_midcarpal_joint_45")).setName("l_midcarpal_joint_12").setCenter(-0.1,0.1,0.0)
            .addChild((new autoclass.HAnimSegment("l_hamate")).setName("l_hamate")
              .addChild((new autoclass.Transform()).setTranslation(-0.1,0.1,0.0)
                .addChild((new autoclass.Shape()).setUSE("HAnimNewJointShape")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("MC45toCMC4")).setDEF("MC45toCMC4").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.1,0.0,-0.1,0.2,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.IndexedLineSet("MC45toCMC5")).setDEF("MC45toCMC5").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.1,0.0,-0.15,0.17,0.0])))))))
            .addComments(" ring finger ")
            .addChild((new autoclass.HAnimJoint("l_carpometacarpal_joint_4")).setName("l_carpometacarpal_joint_4").setCenter(-0.1,0.2,0.0)
              .addChild((new autoclass.HAnimSegment("l_metacarpal4")).setName("l_metacarpal4")
                .addChild((new autoclass.Transform()).setTranslation(-0.1,0.2,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CMC4toMCP4")).setDEF("CMC4toMCP4").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.2,0.0,-0.1,0.47,0.0])))))))
              .addChild((new autoclass.HAnimJoint("l_metacarpophalangeal_joint_4")).setName("l_metacarpophalangeal_joint_4").setCenter(-0.1,0.47,0.0)
                .addChild((new autoclass.HAnimSegment("l_proximal_phalanges4")).setName("l_proximal_phalanges4")
                  .addChild((new autoclass.Transform()).setTranslation(-0.1,0.47,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("MCP4toPIP4")).setDEF("MCP4toPIP4").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.47,0.0,-0.1,0.7,0.0])))))))
                .addChild((new autoclass.HAnimJoint("l_proximal_interphalangeal_joint_4")).setName("l_proximal_interphalangeal_joint_4").setCenter(-0.1,0.7,0.0)
                  .addChild((new autoclass.HAnimSegment("l_middle_phalanges4")).setName("l_middle_phalanges4")
                    .addChild((new autoclass.Transform()).setTranslation(-0.1,0.7,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("PIP4toDIP4")).setDEF("PIP4toDIP4").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.7,0.0,-0.1,0.93,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("l_distal_interphalangeal_joint_4")).setName("l_distal_interphalangeal_joint_4").setCenter(-0.1,0.93,0.0)
                    .addChild((new autoclass.HAnimSegment("l_distal_phalanx4")).setName("l_distal_phalanx4")
                      .addChild((new autoclass.Transform()).setTranslation(-0.1,0.93,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_l_distal_interphalangeal_joint_4")).setDEF("fingertip_l_distal_interphalangeal_joint_4").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.93,0.0,-0.1,1.0,0.0])))))))))))
            .addComments(" pinky finger ")
            .addChild((new autoclass.HAnimJoint("l_carpometacarpal_joint_5")).setName("l_carpometacarpal_joint_5").setCenter(-0.15,0.17,0.0)
              .addChild((new autoclass.HAnimSegment("l_metacarpal5")).setName("l_metacarpal5")
                .addChild((new autoclass.Transform()).setTranslation(-0.15,0.17,0.0)
                  .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material())))
                  .setGeometry((new autoclass.IndexedLineSet("CMC5toMCP5")).setDEF("CMC5toMCP5").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,0.17,0.0,-0.2,0.4,0.0])))))))
              .addChild((new autoclass.HAnimJoint("l_metacarpophalangeal_joint_5")).setName("l_metacarpophalangeal_joint_5").setCenter(-0.2,0.4,0.0)
                .addChild((new autoclass.HAnimSegment("l_proximal_phalanges5")).setName("l_proximal_phalanges2")
                  .addChild((new autoclass.Transform()).setTranslation(-0.2,0.4,0.0)
                    .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())))
                    .setGeometry((new autoclass.IndexedLineSet("MCP5toPIP5")).setDEF("MCP5toPIP5").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.2,0.4,0.0,-0.23,0.63,0.0])))))))
                .addChild((new autoclass.HAnimJoint("l_proximal_interphalangeal_joint_5")).setName("l_proximal_interphalangeal_joint_5").setCenter(-0.23,0.63,0.0)
                  .addChild((new autoclass.HAnimSegment("l_middle_phalanges5")).setName("l_middle_phalanges5")
                    .addChild((new autoclass.Transform()).setTranslation(-0.23,0.63,0.0)
                      .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))
                      .setGeometry((new autoclass.IndexedLineSet("PIP5toDIP5")).setDEF("PIP5toDIP5").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.23,0.63,0.0,-0.25,0.79,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("l_distal_interphalangeal_joint_5")).setName("l_distal_interphalangeal_joint_5").setCenter(-0.25,0.79,0.0)
                    .addChild((new autoclass.HAnimSegment("l_distal_phalanges5")).setName("l_distal_phalanges5")
                      .addChild((new autoclass.Transform()).setTranslation(-0.25,0.79,0.0)
                        .addChild((new autoclass.Shape()).setUSE("HAnimJointShape")))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material())))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_l_distal_interphalangeal_joint_5")).setDEF("fingertip_l_distal_interphalangeal_joint_5").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.25,0.79,0.0,-0.26,0.85,0.0]))))))))))))))
      .addJoints((new autoclass.HAnimJoint()).setUSE("hanim_HumanoidRoot"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_radiocarpal_joint"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_midcarpal_joint_12"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_carpometacarpal_joint_1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_metacarpophalangeal_joint_1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_interphalangeal_joint_1"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_carpometacarpal_joint_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_metacarpophalangeal_joint_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_proximal_interphalangeal_joint_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_distal_interphalangeal_joint_2"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_midcarpal_joint_3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_carpometacarpal_joint_3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_metacarpophalangeal_joint_3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_proximal_interphalangeal_joint_3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_distal_interphalangeal_joint_3"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_midcarpal_joint_45"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_carpometacarpal_joint_4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_metacarpophalangeal_joint_4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_proximal_interphalangeal_joint_4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_distal_interphalangeal_joint_4"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_carpometacarpal_joint_5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_metacarpophalangeal_joint_5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_proximal_interphalangeal_joint_5"))
      .addJoints((new autoclass.HAnimJoint()).setUSE("l_distal_interphalangeal_joint_5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_wrist"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_trapezoid"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_metacarpal_1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_proximal_phalanges1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_distal_phalanges1"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_metacarpal2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_proximal_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_middle_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_distal_phalanges2"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_capitate"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_metacarpal3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_proximal_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_middle_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_distal_phalanges3"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_hamate"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_metacarpal4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_proximal_phalanges4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_middle_phalanges4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_distal_phalanx4"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_metacarpal5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_proximal_phalanges5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_middle_phalanges5"))
      .addSegments((new autoclass.HAnimSegment()).setUSE("l_distal_phalanges5"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimModelHandLeft model
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
		var testObject = new HAnimModelHandLeft();
		console.log ("HAnimModelHandLeft execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelHandLeft().main();
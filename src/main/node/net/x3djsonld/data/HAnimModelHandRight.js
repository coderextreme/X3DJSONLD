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
 * <p> Right hand using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links: HAnimModelHandRight.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimModelHandRight&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d">HAnimModelHandRight.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Right hand using high-fidelity definitions for HAnim version 2.0 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d</a> </td>
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

function HAnimModelHandRight
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimModelHandRight.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #25, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_25_reference = new autoclass.SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelHandRight.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Right hand using high-fidelity definitions for HAnim version 2.0"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 January 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 December 2021"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("HAnimModelHandRightSegmentVisualizationError.png"))
    .addMeta((new autoclass.meta()).setName("error").setContent("not yet to scale, also relatively flat"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta((new autoclass.meta()).setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D HAnim humanoid animation"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelHandRight.x3d"))
    .addChild((new autoclass.HAnimHumanoid("hanim_Hand_Right")).setName("Hand_Right").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .addChild((new autoclass.MetadataSet()).setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_25_reference)
        .addValue((new autoclass.MetadataString()).setName("authorName").setValue(new autoclass.MFString("\"Kwan-Hee YOO, Don Brutzman and Joe Williams\""))))
      .addSkeleton((new autoclass.HAnimJoint("hanim_humanoid_root")).setName("humanoid_root").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model ")
        .addChild((new autoclass.HAnimJoint("hanim_r_radiocarpal")).setName("r_radiocarpal").setDescription("connection joint of hand to leg above").setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimSegment("hanim_r_carpal")).setName("r_carpal")
            .addChild((new autoclass.Transform())
              .addChild((new autoclass.Shape("HAnimJointShape"))
                .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                .setAppearance((new autoclass.Appearance("HAnimJointAppearanceBlue"))
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC12")).setDEF("RCToMC12").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,-0.1,0.1,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC3")).setDEF("RCToMC3").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,0.07,0.0]))))))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry((new autoclass.IndexedLineSet("RCToMC45")).setDEF("RCToMC45").setCoordIndex(java.newArray("int", [0,1]))
                .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.1,0.1,0.0])))))))
          .addComments(" MC1 ")
          .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_1")).setName("r_midcarpal_1").setCenter(-0.14,0.09,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_trapezium")).setName("r_trapezium")
              .addChild((new autoclass.Transform()).setTranslation(-0.14,0.09,0.0)
                .addChild((new autoclass.Shape("HAnimNewJointShape"))
                  .setGeometry((new autoclass.Sphere()).setRadius(0.025))
                  .setAppearance((new autoclass.Appearance("HAnimJointAppearanceRed"))
                    .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("MC12toCMC1")).setDEF("MC12toCMC1").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.1,0.0,-0.2,0.15,0.0])))))))
            .addComments(" thumb finger ")
            .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_1")).setName("r_carpometacarpal_1").setCenter(-0.2,0.15,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_1")).setName("r_metacarpal_1")
                .addChild((new autoclass.Transform()).setTranslation(-0.2,0.15,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CMC1toMCP1xxx")).setDEF("CMC1toMCP1xxx").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.2,0.15,0.0,-0.3,0.3,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_1")).setName("r_metacarpophalangeal_1").setCenter(-0.3,0.3,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_1")).setName("r_carpal_proximal_phalanx_1")
                  .addChild((new autoclass.Transform()).setTranslation(-0.3,0.3,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("MCP11toIP1")).setDEF("MCP11toIP1").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.3,0.3,0.0,-0.35,0.4,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_carpal_interphalangeal_1")).setName("r_carpal_interphalangeal_1").setCenter(-0.35,0.4,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_1")).setName("r_carpal_distal_phalanx_1")
                    .addChild((new autoclass.Transform()).setTranslation(-0.35,0.4,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("fingertip_r_carpal_interphalangeal_1")).setDEF("fingertip_r_carpal_interphalangeal_1").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.35,0.4,0.0,-0.36,0.45,0.0])))))))))))
          .addComments(" MC2 ")
          .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_2")).setName("r_midcarpal_2").setCenter(-0.07,0.07,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_trapezoid")).setName("r_trapezoid")
              .addChild((new autoclass.Transform()).setTranslation(-0.07,0.07,0.0)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("MC12toCMC2")).setDEF("MC12toCMC2").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.1,0.0,-0.1,0.2,0.0])))))))
            .addComments(" index finger ")
            .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_2")).setName("r_carpometacarpal_2").setCenter(-0.1,0.2,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_2")).setName("r_metacarpal_2")
                .addChild((new autoclass.Transform()).setTranslation(-0.1,0.2,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CMC2toMCP2")).setDEF("CMC2toMCP2").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.1,0.2,0.0,-0.15,0.5,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_2")).setName("r_metacarpophalangeal_2").setCenter(-0.15,0.5,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_2")).setName("r_carpal_proximal_phalanx_2")
                  .addChild((new autoclass.Transform()).setTranslation(-0.15,0.5,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("MCP2toPIP2")).setDEF("MCP2toPIP2").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.15,0.5,0.0,-0.2,0.7,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2")).setName("r_carpal_proximal_interphalangeal_2").setCenter(-0.2,0.7,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_2")).setName("r_carpal_middle_phalanx_2")
                    .addChild((new autoclass.Transform()).setTranslation(-0.2,0.7,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("PIP2toDIP2")).setDEF("PIP2toDIP2").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.2,0.7,0.0,-0.24,0.87,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_2")).setName("r_carpal_distal_interphalangeal_2").setCenter(-0.24,0.87,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_2")).setName("r_carpal_distal_phalanx_2")
                      .addChild((new autoclass.Transform()).setTranslation(-0.24,0.87,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_r_carpal_distal_interphalangeal_2")).setDEF("fingertip_r_carpal_distal_interphalangeal_2").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.24,0.87,0.0,-0.26,0.93,0.0]))))))))))))
          .addComments(" MC3 ")
          .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_3")).setName("r_midcarpal_3").setCenter(0.0,0.07,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_capitate")).setName("r_capitate")
              .addChild((new autoclass.Transform()).setTranslation(0.0,0.07,0.0)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("MC3toCMC3")).setDEF("MC3toCMC3").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.07,0.0,0.0,0.2,0.0])))))))
            .addComments(" Middle fingle ")
            .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_3")).setName("r_carpometacarpal_3").setCenter(0.0,0.2,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_3")).setName("r_metacarpal_3")
                .addChild((new autoclass.Transform()).setTranslation(0.0,0.2,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CMC3toMCP3")).setDEF("CMC3toMCP3").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.2,0.0,-0.03,0.5,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_3")).setName("r_metacarpophalangeal_3").setCenter(-0.03,0.5,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_3")).setName("r_carpal_proximal_phalanx_3")
                  .addChild((new autoclass.Transform()).setTranslation(-0.03,0.5,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("MCP3toPIP3")).setDEF("MCP3toPIP3").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.03,0.5,0.0,-0.05,0.75,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3")).setName("r_carpal_proximal_interphalangeal_3").setCenter(-0.05,0.75,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_3")).setName("r_carpal_middle_phalanx_3")
                    .addChild((new autoclass.Transform()).setTranslation(-0.05,0.75,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("PIP3toDIP3")).setDEF("PIP3toDIP3").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.75,0.0,-0.08,0.96,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_3")).setName("r_carpal_distal_interphalangeal_3").setCenter(-0.08,0.96,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_3")).setName("r_carpal_distal_phalanx_3")
                      .addChild((new autoclass.Transform()).setTranslation(-0.08,0.96,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_r_carpal_distal_interphalangeal_3")).setDEF("fingertip_r_carpal_distal_interphalangeal_3").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.08,0.96,0.0,-0.09,1.05,0.0]))))))))))))
          .addComments(" MC4_5 ")
          .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_4_5")).setName("r_midcarpal_4_5").setCenter(0.1,0.1,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimSegment("hanim_r_hamate")).setName("r_hamate")
              .addChild((new autoclass.Transform()).setTranslation(0.1,0.1,0.0)
                .addChild((new autoclass.Shape())))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("MC45toCMC4")).setDEF("MC45toCMC4").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.1,0.0,0.1,0.2,0.0]))))))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.IndexedLineSet("MC45toCMC5")).setDEF("MC45toCMC5").setCoordIndex(java.newArray("int", [0,1]))
                  .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.1,0.0,0.15,0.17,0.0])))))))
            .addComments(" ring finger ")
            .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_4")).setName("r_carpometacarpal_4").setCenter(0.1,0.2,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_4")).setName("r_metacarpal_4")
                .addChild((new autoclass.Transform()).setTranslation(0.1,0.2,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CMC4toMCP4")).setDEF("CMC4toMCP4").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.2,0.0,0.1,0.47,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_4")).setName("r_metacarpophalangeal_4").setCenter(0.1,0.47,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_4")).setName("r_carpal_proximal_phalanx_4")
                  .addChild((new autoclass.Transform()).setTranslation(0.1,0.47,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("MCP4toPIP4")).setDEF("MCP4toPIP4").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.47,0.0,0.1,0.7,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4")).setName("r_carpal_proximal_interphalangeal_4").setCenter(0.1,0.7,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_4")).setName("r_carpal_middle_phalanx_4")
                    .addChild((new autoclass.Transform()).setTranslation(0.1,0.7,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("PIP4toDIP4")).setDEF("PIP4toDIP4").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.7,0.0,0.1,0.93,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_4")).setName("r_carpal_distal_interphalangeal_4").setCenter(0.1,0.93,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_4")).setName("r_carpal_distal_phalanx_4")
                      .addChild((new autoclass.Transform()).setTranslation(0.1,0.93,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_r_carpal_distal_interphalangeal_4")).setDEF("fingertip_r_carpal_distal_interphalangeal_4").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.1,0.93,0.0,0.1,1.0,0.0])))))))))))
            .addComments(" pinky finger ")
            .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_5")).setName("r_carpometacarpal_5").setCenter(0.15,0.17,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimSegment("hanim_r_metacarpal_5")).setName("r_metacarpal_5")
                .addChild((new autoclass.Transform()).setTranslation(0.15,0.17,0.0)
                  .addChild((new autoclass.Shape())))
                .addChild((new autoclass.Shape())
                  .setAppearance((new autoclass.Appearance())
                    .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry((new autoclass.IndexedLineSet("CMC5toMCP5")).setDEF("CMC5toMCP5").setCoordIndex(java.newArray("int", [0,1]))
                    .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.15,0.17,0.0,0.2,0.4,0.0])))))))
              .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_5")).setName("r_metacarpophalangeal_5").setCenter(0.2,0.4,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimSegment("hanim_r_carpal_proximal_phalanx_5")).setName("r_carpal_proximal_phalanx_5")
                  .addChild((new autoclass.Transform()).setTranslation(0.2,0.4,0.0)
                    .addChild((new autoclass.Shape())))
                  .addChild((new autoclass.Shape())
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry((new autoclass.IndexedLineSet("MCP5toPIP5")).setDEF("MCP5toPIP5").setCoordIndex(java.newArray("int", [0,1]))
                      .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.2,0.4,0.0,0.23,0.63,0.0])))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5")).setName("r_carpal_proximal_interphalangeal_5").setCenter(0.23,0.63,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimSegment("hanim_r_carpal_middle_phalanx_5")).setName("r_carpal_middle_phalanx_5")
                    .addChild((new autoclass.Transform()).setTranslation(0.23,0.63,0.0)
                      .addChild((new autoclass.Shape())))
                    .addChild((new autoclass.Shape())
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry((new autoclass.IndexedLineSet("PIP5toDIP5")).setDEF("PIP5toDIP5").setCoordIndex(java.newArray("int", [0,1]))
                        .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.23,0.63,0.0,0.25,0.79,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_5")).setName("r_carpal_distal_interphalangeal_5").setCenter(0.25,0.79,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimSegment("hanim_r_carpal_distal_phalanx_5")).setName("r_carpal_distal_phalanx_5")
                      .addChild((new autoclass.Transform()).setTranslation(0.25,0.79,0.0)
                        .addChild((new autoclass.Shape())))
                      .addChild((new autoclass.Shape())
                        .setAppearance((new autoclass.Appearance())
                          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry((new autoclass.IndexedLineSet("fingertip_r_carpal_distal_interphalangeal_5")).setDEF("fingertip_r_carpal_distal_interphalangeal_5").setCoordIndex(java.newArray("int", [0,1]))
                          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.25,0.79,0.0,0.26,0.85,0.0]))))))))))))))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))
      .addSegments((new autoclass.HAnimSegment()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimModelHandRight model
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
		var testObject = new HAnimModelHandRight();
		console.log ("HAnimModelHandRight execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelHandRight().main();
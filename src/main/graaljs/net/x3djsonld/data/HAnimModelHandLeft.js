load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Left hand, using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links: HAnimModelHandLeft.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Kwan-Hee YOO, Don Brutzman and Joe Williams
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
HAnimModelHandLeft.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #25, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_25_reference = new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("HAnimModelHandLeft.x3d"))
    .addMeta(new meta().setName("description").setContent("Left hand, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta(new meta().setName("created").setContent("26 January 2015"))
    .addMeta(new meta().setName("modified").setContent("23 December 2021"))
    .addMeta(new meta().setName("TODO").setContent("fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2"))
    .addMeta(new meta().setName("Image").setContent("HAnimModelHandRightSegmentVisualizationError.png"))
    .addMeta(new meta().setName("error").setContent("not yet to scale, also relatively flat"))
    .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
    .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelHandLeft.x3d"))
    .addChild(new HAnimHumanoid("hanim_Hand_Left").setName("Hand_Left").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_25_reference)
        .addValue(new MetadataString().setName("authorName").setValue(new MFString("\"Kwan-Hee YOO, Don Brutzman and Joe Williams\""))))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model ")
        .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setDescription("connection joint of hand to leg above").setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
          .addChild(new HAnimSegment("hanim_l_carpal").setName("l_carpal")
            .addChild(new Transform()
              .addChild(new Shape("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.025))
                .setAppearance(new Appearance("HAnimJointAppearanceBlue")
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new IndexedLineSet("RCToMC12").setDEF("RCToMC12").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.0)], Java.type("float[]")))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new IndexedLineSet("RCToMC3").setDEF("RCToMC3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.07),doubleToFloat(0.0)], Java.type("float[]")))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new IndexedLineSet("RCToMC45").setDEF("RCToMC45").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0)], Java.type("float[]"))))))))
          .addComments(" MC1 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(doubleToFloat(0.14),doubleToFloat(0.09),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
            .addChild(new HAnimSegment("hanim_l_trapezium").setName("l_trapezium")
              .addChild(new Transform().setTranslation(doubleToFloat(0.14),doubleToFloat(0.09),doubleToFloat(0.0))
                .addChild(new Shape("HAnimNewJointShape")
                  .setGeometry(new Sphere().setRadius(0.025))
                  .setAppearance(new Appearance("HAnimJointAppearanceRed")
                    .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC12toCMC1").setDEF("MC12toCMC1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.15),doubleToFloat(0.0)], Java.type("float[]")))))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC1toCMC1").setDEF("MC1toCMC1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.2),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" thumb finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(doubleToFloat(0.2),doubleToFloat(0.15),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
              .addChild(new HAnimSegment("hanim_l_metacarpal_1").setName("l_metacarpal_1")
                .addChild(new Transform().setTranslation(doubleToFloat(0.2),doubleToFloat(0.15),doubleToFloat(0.0))
                  .addChild(new Shape()))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CMC1toMCP1").setDEF("CMC1toMCP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.2),doubleToFloat(0.15),doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_1").setName("l_carpal_proximal_phalanx_1")
                  .addChild(new Transform().setTranslation(doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.0))
                    .addChild(new Shape()))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("MCP11toIP1").setDEF("MCP11toIP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.0),doubleToFloat(0.35),doubleToFloat(0.4),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(doubleToFloat(0.35),doubleToFloat(0.4),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                  .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_1").setName("l_carpal_distal_phalanx_1")
                    .addChild(new Transform().setTranslation(doubleToFloat(0.35),doubleToFloat(0.4),doubleToFloat(0.0))
                      .addChild(new Shape()))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("fingertip_l_carpal_interphalangeal_1").setDEF("fingertip_l_carpal_interphalangeal_1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.35),doubleToFloat(0.4),doubleToFloat(0.0),doubleToFloat(0.36),doubleToFloat(0.45),doubleToFloat(0.0)], Java.type("float[]"))))))))))))
          .addComments(" MC2 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(doubleToFloat(0.07),doubleToFloat(0.07),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
            .addChild(new HAnimSegment("hanim_l_trapezoid").setName("l_trapezoid")
              .addChild(new Transform().setTranslation(doubleToFloat(0.07),doubleToFloat(0.07),doubleToFloat(0.0))
                .addChild(new Shape()))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC2toCMC2").setDEF("MC2toCMC2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.2),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" index finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(doubleToFloat(0.1),doubleToFloat(0.2),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
              .addChild(new HAnimSegment("hanim_l_metacarpal_2").setName("l_metacarpal_2")
                .addChild(new Transform().setTranslation(doubleToFloat(0.1),doubleToFloat(0.2),doubleToFloat(0.0))
                  .addChild(new Shape()))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CMC2toMCP2").setDEF("CMC2toMCP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(0.2),doubleToFloat(0.0),doubleToFloat(0.15),doubleToFloat(0.5),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(doubleToFloat(0.15),doubleToFloat(0.5),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_2").setName("l_carpal_proximal_phalanx_2")
                  .addChild(new Transform().setTranslation(doubleToFloat(0.15),doubleToFloat(0.5),doubleToFloat(0.0))
                    .addChild(new Shape()))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("MCP2toPIP2").setDEF("MCP2toPIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.15),doubleToFloat(0.5),doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_2").setName("l_carpal_middle_phalanx_2")
                    .addChild(new Transform().setTranslation(doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.0))
                      .addChild(new Shape()))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.0),doubleToFloat(0.24),doubleToFloat(0.87),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(doubleToFloat(0.24),doubleToFloat(0.87),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_2").setName("l_carpal_distal_phalanx_2")
                      .addChild(new Transform().setTranslation(doubleToFloat(0.24),doubleToFloat(0.87),doubleToFloat(0.0))
                        .addChild(new Shape()))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_2").setDEF("fingertip_l_carpal_distal_interphalangeal_2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.24),doubleToFloat(0.87),doubleToFloat(0.0),doubleToFloat(0.26),doubleToFloat(0.93),doubleToFloat(0.0)], Java.type("float[]")))))))))))))
          .addComments(" MC3 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(doubleToFloat(0.0),doubleToFloat(0.07),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
            .addChild(new HAnimSegment("hanim_l_capitate").setName("l_capitate")
              .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.07),doubleToFloat(0.0))
                .addChild(new Shape()))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC3toCMC3").setDEF("MC3toCMC3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.07),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" Middle fingle ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
              .addChild(new HAnimSegment("hanim_l_metacarpal_3").setName("l_metacarpal_3")
                .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.0))
                  .addChild(new Shape()))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CMC3toMCP3").setDEF("CMC3toMCP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.0),doubleToFloat(0.03),doubleToFloat(0.5),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(doubleToFloat(0.03),doubleToFloat(0.5),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_3").setName("l_carpal_proximal_phalanx_3")
                  .addChild(new Transform().setTranslation(doubleToFloat(0.03),doubleToFloat(0.5),doubleToFloat(0.0))
                    .addChild(new Shape()))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("MCP3toPIP3").setDEF("MCP3toPIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.03),doubleToFloat(0.5),doubleToFloat(0.0),doubleToFloat(0.05),doubleToFloat(0.75),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(doubleToFloat(0.05),doubleToFloat(0.75),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_3").setName("l_carpal_middle_phalanx_3")
                    .addChild(new Transform().setTranslation(doubleToFloat(0.05),doubleToFloat(0.75),doubleToFloat(0.0))
                      .addChild(new Shape()))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.05),doubleToFloat(0.75),doubleToFloat(0.0),doubleToFloat(0.08),doubleToFloat(0.96),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(doubleToFloat(0.08),doubleToFloat(0.96),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_3").setName("l_carpal_distal_phalanx_3")
                      .addChild(new Transform().setTranslation(doubleToFloat(0.08),doubleToFloat(0.96),doubleToFloat(0.0))
                        .addChild(new Shape()))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_3").setDEF("fingertip_l_carpal_distal_interphalangeal_3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.08),doubleToFloat(0.96),doubleToFloat(0.0),doubleToFloat(0.09),doubleToFloat(1.05),doubleToFloat(0.0)], Java.type("float[]")))))))))))))
          .addComments(" MC45 ")
          .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_midcarpal_4_5").setCenter(doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
            .addChild(new HAnimSegment("hanim_l_hamate").setName("l_hamate")
              .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0))
                .addChild(new Shape()))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC45toCMC4").setDEF("MC45toCMC4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.2),doubleToFloat(0.0)], Java.type("float[]")))))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("MC45toCMC5").setDEF("MC45toCMC5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(0.17),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" ring finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(doubleToFloat(-0.1),doubleToFloat(0.2),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
              .addChild(new HAnimSegment("hanim_l_metacarpal_4").setName("l_metacarpal_4")
                .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(0.2),doubleToFloat(0.0))
                  .addChild(new Shape()))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CMC4toMCP4").setDEF("CMC4toMCP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.2),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.47),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(doubleToFloat(-0.1),doubleToFloat(0.47),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_4").setName("l_carpal_proximal_phalanx_4")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(0.47),doubleToFloat(0.0))
                    .addChild(new Shape()))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("MCP4toPIP4").setDEF("MCP4toPIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.47),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.7),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(doubleToFloat(-0.1),doubleToFloat(0.7),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_4").setName("l_carpal_middle_phalanx_4")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(0.7),doubleToFloat(0.0))
                      .addChild(new Shape()))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.7),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(0.93),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(doubleToFloat(-0.1),doubleToFloat(0.93),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_4").setName("l_carpal_distal_phalanx_4")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(0.93),doubleToFloat(0.0))
                        .addChild(new Shape()))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_4").setDEF("fingertip_l_carpal_distal_interphalangeal_4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(0.93),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(1.0),doubleToFloat(0.0)], Java.type("float[]"))))))))))))
            .addComments(" pinky finger ")
            .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(doubleToFloat(-0.15),doubleToFloat(0.17),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
              .addChild(new HAnimSegment("hanim_l_metacarpal_5").setName("l_metacarpal_5")
                .addChild(new Transform().setTranslation(doubleToFloat(-0.15),doubleToFloat(0.17),doubleToFloat(0.0))
                  .addChild(new Shape()))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CMC5toMCP5").setDEF("CMC5toMCP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.15),doubleToFloat(0.17),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(0.4),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(doubleToFloat(-0.2),doubleToFloat(0.4),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                .addChild(new HAnimSegment("hanim_l_carpal_proximal_phalanx_5").setName("l_carpal_proximal_phalanx_5")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.2),doubleToFloat(0.4),doubleToFloat(0.0))
                    .addChild(new Shape()))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("MCP5toPIP5").setDEF("MCP5toPIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.2),doubleToFloat(0.4),doubleToFloat(0.0),doubleToFloat(-0.23),doubleToFloat(0.63),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(doubleToFloat(-0.23),doubleToFloat(0.63),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                  .addChild(new HAnimSegment("hanim_l_carpal_middle_phalanx_5").setName("l_carpal_middle_phalanx_5")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.23),doubleToFloat(0.63),doubleToFloat(0.0))
                      .addChild(new Shape()))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.23),doubleToFloat(0.63),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(0.79),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(doubleToFloat(-0.25),doubleToFloat(0.79),doubleToFloat(0.0)).setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]")))
                    .addChild(new HAnimSegment("hanim_l_carpal_distal_phalanx_5").setName("l_carpal_distal_phalanx_5")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.25),doubleToFloat(0.79),doubleToFloat(0.0))
                        .addChild(new Shape()))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("fingertip_l_carpal_distal_interphalangeal_5").setDEF("fingertip_l_carpal_distal_interphalangeal_5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.25),doubleToFloat(0.79),doubleToFloat(0.0),doubleToFloat(-0.26),doubleToFloat(0.85),doubleToFloat(0.0)], Java.type("float[]")))))))))))))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addJoints(new HAnimJoint().setLlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))).setUlimit(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())
      .addSegments(new HAnimSegment())));
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName().equals(metaObject.NAME_ERROR) ||
				metaObject.getName().equals(metaObject.NAME_WARNING) ||
				metaObject.getName().equals(metaObject.NAME_HINT) ||
				metaObject.getName().equals(metaObject.NAME_INFO) ||
				metaObject.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		print ("HAnimModelHandLeft execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelHandLeft().main();
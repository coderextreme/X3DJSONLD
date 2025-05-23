load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
HAnimModelFootRight.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: MetadataSet reference field, scene-graph level=4, element #26, 1 total value */
	this.MetadataSet_HAnimHumanoid.info_4_26_reference = new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid");
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName("description").setContent("Right foot, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta(new meta().setName("creator").setContent("Kwan-Hee YOO, Don Brutzman and Joe Williams"))
    .addMeta(new meta().setName("created").setContent("26 January 2015"))
    .addMeta(new meta().setName("modified").setContent("23 December 2021"))
    .addMeta(new meta().setName("warning").setContent("not yet to scale"))
    .addMeta(new meta().setName("TODO").setContent("Update all values to match HAnim2 A.7 Level of articulation four LOA-4"))
    .addMeta(new meta().setName("TODO").setContent("Add links to figures"))
    .addMeta(new meta().setName("TODO").setContent("Add Viewpoints to enable inspection"))
    .addMeta(new meta().setName("info").setContent("TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body"))
    .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta(new meta().setName("subject").setContent("X3D HAnim humanoid animation"))
    .addMeta(new meta().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelFootRight.x3d"))
    .addChild(new HAnimHumanoid("hanim_Foot_Right").setName("Foot_Right").setLoa(4).setVersion("2.0")
      .addComments(" original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"' ")
      .setMetadata(new MetadataSet().setName("HAnimHumanoid.info").setReference(this.MetadataSet_HAnimHumanoid.info_4_26_reference)
        .addValue(new MetadataString().setName("authorName").setValue(new MFString("\"Kwan-Hee YOO, Don Brutzman and Joe Williams\""))))
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root")
        .addComments(" Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model ")
        .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setDescription("connection joint of foot to leg above")
          .addChild(new HAnimSegment("hanim_r_talus").setName("r_talus")
            .addChild(new Transform()
              .addChild(new Shape("HAnimJointShape")
                .setGeometry(new Sphere().setRadius(0.025))
                .setAppearance(new Appearance("HAnimJointAppearance")
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new IndexedLineSet("TCtoTCN").setDEF("TCtoTCN").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0)], Java.type("float[]")))))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
              .setGeometry(new IndexedLineSet("TCtoCC").setDEF("TCtoCC").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.2),doubleToFloat(0.3),doubleToFloat(0.0)], Java.type("float[]"))))))))
          .addComments(" TCN ")
          .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0))
            .addChild(new HAnimSegment("hanim_r_navicular").setName("r_navicular")
              .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0))
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("TCNtoCN1").setDEF("TCNtoCN1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(-0.45),doubleToFloat(0.0)], Java.type("float[]")))))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("TCNtoCN2").setDEF("TCNtoCN2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.45),doubleToFloat(0.0)], Java.type("float[]")))))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("TCNtoCN3").setDEF("TCNtoCN3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(-0.1),doubleToFloat(-0.4),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" CN1 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(doubleToFloat(0.1),doubleToFloat(-0.45),doubleToFloat(0.0))
              .addChild(new HAnimSegment("hanim_r_cuneiform_1").setName("r_cuneiform_1")
                .addChild(new Transform().setTranslation(doubleToFloat(0.1),doubleToFloat(-0.45),doubleToFloat(0.0))
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CN1toTMT1").setDEF("CN1toTMT1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(-0.45),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(-0.6),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(doubleToFloat(0.1),doubleToFloat(-0.6),doubleToFloat(0.0))
                .addChild(new HAnimSegment("hanim_r_metatarsal_1").setName("r_metatarsal_1")
                  .addChild(new Transform().setTranslation(doubleToFloat(0.1),doubleToFloat(-0.6),doubleToFloat(0.0))
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("TMT1toMTP1").setDEF("TMT1toMTP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(-0.6),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(-0.9),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(doubleToFloat(0.1),doubleToFloat(-0.9),doubleToFloat(0.0))
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_1").setName("r_tarsal_proximal_phalanx_1")
                    .addChild(new Transform().setTranslation(doubleToFloat(0.1),doubleToFloat(-0.9),doubleToFloat(0.0))
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("MTP1toIP1").setDEF("MTP1toIP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(-0.9),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(-1.05),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1").setCenter(doubleToFloat(0.1),doubleToFloat(-1.05),doubleToFloat(0.0))
                    .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_1").setName("r_tarsal_distal_phalanx_1")
                      .addChild(new Transform().setTranslation(doubleToFloat(0.1),doubleToFloat(-1.05),doubleToFloat(0.0))
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("tiptoe_r_interphalangeal_").setDEF("tiptoe_r_interphalangeal_").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(-1.05),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(-1.1),doubleToFloat(0.0)], Java.type("float[]"))))))))))))
            .addComments(" CN2 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(doubleToFloat(0.0),doubleToFloat(-0.45),doubleToFloat(0.0))
              .addChild(new HAnimSegment("hanim_r_cuneiform_2").setName("r_cuneiform_2")
                .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-0.45),doubleToFloat(0.0))
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CN2toTMT2").setDEF("CN2toTMT2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-0.45),doubleToFloat(0.0),doubleToFloat(-0.05),doubleToFloat(-0.6),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(doubleToFloat(-0.05),doubleToFloat(-0.6),doubleToFloat(0.0))
                .addChild(new HAnimSegment("hanim_r_metatarsal_2").setName("r_metatarsal_2")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.05),doubleToFloat(-0.6),doubleToFloat(0.0))
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("TMT2toMTP2").setDEF("TMT2toMTP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.05),doubleToFloat(-0.6),doubleToFloat(0.0),doubleToFloat(-0.05),doubleToFloat(-0.9),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(doubleToFloat(-0.05),doubleToFloat(-0.9),doubleToFloat(0.0))
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_2").setName("r_tarsal_proximal_phalanx_2")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.05),doubleToFloat(-0.9),doubleToFloat(0.0))
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("MTP2toPIP2").setDEF("MTP2toPIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.05),doubleToFloat(-0.9),doubleToFloat(0.0),doubleToFloat(-0.05),doubleToFloat(-1.05),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setCenter(doubleToFloat(-0.05),doubleToFloat(-1.05),doubleToFloat(0.0))
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_2").setName("r_tarsal_middle_phalanx_2")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.05),doubleToFloat(-1.05),doubleToFloat(0.0))
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.05),doubleToFloat(-1.05),doubleToFloat(0.0),doubleToFloat(-0.05),doubleToFloat(-1.12),doubleToFloat(0.0)], Java.type("float[]"))))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(doubleToFloat(-0.05),doubleToFloat(-1.12),doubleToFloat(0.0))
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_2").setName("r_tarsal_distal_phalanx_2")
                        .addChild(new Transform().setTranslation(doubleToFloat(-0.05),doubleToFloat(-1.12),doubleToFloat(0.0))
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_2").setDEF("tiptoe_r_tarsal_distal_interphalangeal_2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.05),doubleToFloat(-1.12),doubleToFloat(0.0),doubleToFloat(-0.05),doubleToFloat(-1.16),doubleToFloat(0.0)], Java.type("float[]")))))))))))))
            .addComments(" CN3 ")
            .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(doubleToFloat(-0.1),doubleToFloat(-0.4),doubleToFloat(0.0))
              .addChild(new HAnimSegment("hanim_r_cuneiform_3").setName("r_cuneiform_3")
                .addChild(new Transform().setTranslation(doubleToFloat(-0.1),doubleToFloat(-0.4),doubleToFloat(0.0))
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("CN3toTMT3").setDEF("CN3toTMT3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.1),doubleToFloat(-0.4),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(-0.6),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(doubleToFloat(-0.15),doubleToFloat(-0.6),doubleToFloat(0.0))
                .addChild(new HAnimSegment("hanim_r_metatarsal_3").setName("r_metatarsal_3")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.15),doubleToFloat(-0.6),doubleToFloat(0.0))
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("TMT3toMTP3").setDEF("TMT3toMTP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.15),doubleToFloat(-0.6),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(-0.9),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(doubleToFloat(-0.15),doubleToFloat(-0.9),doubleToFloat(0.0))
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_3").setName("r_tarsal_proximal_phalanx_3")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.15),doubleToFloat(-0.9),doubleToFloat(0.0))
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("MTP3toPIP3").setDEF("MTP3toPIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.15),doubleToFloat(-0.9),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(-1.05),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setCenter(doubleToFloat(-0.15),doubleToFloat(-1.05),doubleToFloat(0.0))
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_3").setName("r_tarsal_middle_phalanx_3")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.15),doubleToFloat(-1.05),doubleToFloat(0.0))
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.15),doubleToFloat(-1.05),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(-1.13),doubleToFloat(0.0)], Java.type("float[]"))))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setCenter(doubleToFloat(-0.15),doubleToFloat(-1.13),doubleToFloat(0.0))
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_3").setName("r_tarsal_distal_phalanx_3")
                        .addChild(new Transform().setTranslation(doubleToFloat(-0.15),doubleToFloat(-1.13),doubleToFloat(0.0))
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_3").setDEF("tiptoe_r_tarsal_distal_interphalangeal_3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.15),doubleToFloat(-1.13),doubleToFloat(0.0),doubleToFloat(-0.15),doubleToFloat(-1.16),doubleToFloat(0.0)], Java.type("float[]"))))))))))))))
          .addComments(" CC ")
          .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(doubleToFloat(-0.2),doubleToFloat(0.3),doubleToFloat(0.0))
            .addChild(new HAnimSegment("hanim_r_calcaneus").setName("r_calcaneus")
              .addChild(new Transform().setTranslation(doubleToFloat(-0.2),doubleToFloat(0.3),doubleToFloat(0.0))
                .addChild(new Shape().setUSE("HAnimJointShape")))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                .setGeometry(new IndexedLineSet("CCtoTT").setDEF("CCtoTT").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.2),doubleToFloat(0.3),doubleToFloat(0.0),doubleToFloat(-0.21),doubleToFloat(-0.3),doubleToFloat(0.0)], Java.type("float[]"))))))))
            .addComments(" TT ")
            .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(doubleToFloat(-0.21),doubleToFloat(-0.3),doubleToFloat(0.0))
              .addChild(new HAnimSegment("hanim_r_cuboid").setName("r_cuboid")
                .addChild(new Transform().setTranslation(doubleToFloat(-0.21),doubleToFloat(-0.3),doubleToFloat(0.0))
                  .addChild(new Shape().setUSE("HAnimJointShape")))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("TTtoTMT4").setDEF("TTtoTMT4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.21),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(-0.58),doubleToFloat(0.0)], Java.type("float[]")))))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                  .setGeometry(new IndexedLineSet("TTtoTMT5").setDEF("TTtoTMT5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.21),doubleToFloat(-0.3),doubleToFloat(0.0),doubleToFloat(-0.33),doubleToFloat(-0.52),doubleToFloat(0.0)], Java.type("float[]"))))))))
              .addComments(" TMT4 ")
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(doubleToFloat(-0.25),doubleToFloat(-0.58),doubleToFloat(0.0))
                .addChild(new HAnimSegment("hanim_r_metatarsal_4").setName("r_metatarsal_4")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.25),doubleToFloat(-0.58),doubleToFloat(0.0))
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("TMT4toMTP4").setDEF("TMT4toMTP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.25),doubleToFloat(-0.58),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(-0.87),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(doubleToFloat(-0.25),doubleToFloat(-0.87),doubleToFloat(0.0))
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_4").setName("r_tarsal_proximal_phalanx_4")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.25),doubleToFloat(-0.87),doubleToFloat(0.0))
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("MTP4toPIP4").setDEF("MTP4toPIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.25),doubleToFloat(-0.87),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(-1.0),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setCenter(doubleToFloat(-0.25),doubleToFloat(-1.0),doubleToFloat(0.0))
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_4").setName("r_tarsal_middle_phalanx_4")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.25),doubleToFloat(-1.0),doubleToFloat(0.0))
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.25),doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(-1.1),doubleToFloat(0.0)], Java.type("float[]"))))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setCenter(doubleToFloat(-0.25),doubleToFloat(-1.1),doubleToFloat(0.0))
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_4").setName("r_tarsal_distal_phalanx_4")
                        .addChild(new Transform().setTranslation(doubleToFloat(-0.25),doubleToFloat(-1.1),doubleToFloat(0.0))
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_4").setDEF("tiptoe_r_tarsal_distal_interphalangeal_4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.25),doubleToFloat(-1.1),doubleToFloat(0.0),doubleToFloat(-0.25),doubleToFloat(-1.15),doubleToFloat(0.0)], Java.type("float[]"))))))))))))
              .addComments(" TMT5 ")
              .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(doubleToFloat(-0.33),doubleToFloat(-0.52),doubleToFloat(0.0))
                .addChild(new HAnimSegment("hanim_r_metatarsal_5").setName("r_metatarsal_5")
                  .addChild(new Transform().setTranslation(doubleToFloat(-0.33),doubleToFloat(-0.52),doubleToFloat(0.0))
                    .addChild(new Shape().setUSE("HAnimJointShape")))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                    .setGeometry(new IndexedLineSet("TMT5toMTP5").setDEF("TMT5toMTP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.33),doubleToFloat(-0.52),doubleToFloat(0.0),doubleToFloat(-0.34),doubleToFloat(-0.8),doubleToFloat(0.0)], Java.type("float[]"))))))))
                .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(doubleToFloat(-0.34),doubleToFloat(-0.8),doubleToFloat(0.0))
                  .addChild(new HAnimSegment("hanim_r_tarsal_proximal_phalanx_5").setName("r_tarsal_proximal_phalanx_5")
                    .addChild(new Transform().setTranslation(doubleToFloat(-0.34),doubleToFloat(-0.8),doubleToFloat(0.0))
                      .addChild(new Shape().setUSE("HAnimJointShape")))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                      .setGeometry(new IndexedLineSet("MTP5toPIP5").setDEF("MTP5toPIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.34),doubleToFloat(-0.8),doubleToFloat(0.0),doubleToFloat(-0.34),doubleToFloat(-0.95),doubleToFloat(0.0)], Java.type("float[]"))))))))
                  .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setCenter(doubleToFloat(-0.34),doubleToFloat(-0.95),doubleToFloat(0.0))
                    .addChild(new HAnimSegment("hanim_r_tarsal_middle_phalanx_5").setName("r_tarsal_middle_phalanx_5")
                      .addChild(new Transform().setTranslation(doubleToFloat(-0.34),doubleToFloat(-0.95),doubleToFloat(0.0))
                        .addChild(new Shape().setUSE("HAnimJointShape")))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                        .setGeometry(new IndexedLineSet("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.34),doubleToFloat(-0.95),doubleToFloat(0.0),doubleToFloat(-0.34),doubleToFloat(-1.05),doubleToFloat(0.0)], Java.type("float[]"))))))))
                    .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setCenter(doubleToFloat(-0.34),doubleToFloat(-1.05),doubleToFloat(0.0))
                      .addChild(new HAnimSegment("hanim_r_tarsal_distal_phalanx_5").setName("r_tarsal_distal_phalanx_5")
                        .addChild(new Transform().setTranslation(doubleToFloat(-0.34),doubleToFloat(-1.05),doubleToFloat(0.0))
                          .addChild(new Shape().setUSE("HAnimJointShape")))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setEmissiveColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0))))
                          .setGeometry(new IndexedLineSet("tiptoe_r_tarsal_distal_interphalangeal_5").setDEF("tiptoe_r_tarsal_distal_interphalangeal_5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.34),doubleToFloat(-1.05),doubleToFloat(0.0),doubleToFloat(-0.34),doubleToFloat(-1.08),doubleToFloat(0.0)], Java.type("float[]"))))))))))))))))
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
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
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
		var testObject = new HAnimModelFootRight();
		print ("HAnimModelFootRight execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelFootRight().main();
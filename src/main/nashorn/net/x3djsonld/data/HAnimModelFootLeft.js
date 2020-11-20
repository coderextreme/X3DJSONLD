load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Left foot, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelFootLeft.java">HAnimModelFootLeft.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelFootLeftIndex.html" target="_top">HAnimModelFootLeft catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelFootLeft.x3d">HAnimModelFootLeft.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left foot, using high-fidelity definitions for H-Anim version 2.2 </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author YOO Kwan Hee and Don Brutzman
 */

function HAnimModelFootLeft
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimModelFootLeft.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("4.0")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("HAnimModelFootLeft.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Left foot, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta(new metaObject().setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("26 January 2015"))
    .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
    .addMeta(new metaObject().setName("warning").setContent("not yet to scale"))
    .addMeta(new metaObject().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new metaObject().setName("subject").setContent("X3D H-Anim humanoid animation"))
    .addMeta(new metaObject().setName("warning").setContent("scene, DOCTYPE and Schema under development."))
    .addMeta(new metaObject().setName("TODO").setContent("Integrate and confirm Segment/Joint names, Viewpoints."))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("HAnimModelFootLeft.x3d"))
    .addChild(new HAnimHumanoidObject("Humanoid_Left_Foot").setName("Humanoid_Left_Foot").setInfo(new MFStringObject("\"humanoidVersion=2.0\"")).setVersion("2.0")
      .addSkeleton(new HAnimJointObject("hanim_HumanoidRoot").setName("humanoid_root")
        .addChild(new HAnimJointObject("l_talocrural_joint").setName("l_talocrural_joint")
          .addChild(new HAnimSegmentObject("l_talus").setName("l_talus")
            .addChild(new TransformObject()
              .addChild(new ShapeObject("HAnimJointShape")
                .setGeometry(new SphereObject().setRadius(0.025))
                .setAppearance(new AppearanceObject("HAnimJointAppearance")
                  .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,1.0)))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject()))
              .setGeometry(new IndexedLineSetObject("TCtoTCN").setDEF("TCtoTCN").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,-0.3,0.0], Java.type("float[]")))))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject()))
              .setGeometry(new IndexedLineSetObject("TCtoCC").setDEF("TCtoCC").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.2,0.3,0.0], Java.type("float[]"))))))))
          .addComments(" TCN ")
          .addChild(new HAnimJointObject("l_talocalcaneonavicular_joint").setName("l_talocalcaneonavicular_joint").setCenter(0.0,-0.3,0.0)
            .addChild(new HAnimSegmentObject("l_navicular").setName("l_navicular")
              .addChild(new TransformObject().setTranslation(0.0,-0.3,0.0)
                .addChild(new ShapeObject().setUSE("HAnimJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))
                .setGeometry(new IndexedLineSetObject("TCNtoCN1").setDEF("TCNtoCN1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,-0.3,0.0,-0.1,-0.45,0.0], Java.type("float[]")))))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))
                .setGeometry(new IndexedLineSetObject("TCNtoCN2").setDEF("TCNtoCN2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,-0.3,0.0,0.0,-0.45,0.0], Java.type("float[]")))))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))
                .setGeometry(new IndexedLineSetObject("TCNtoCN3").setDEF("TCNtoCN3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,-0.3,0.0,0.1,-0.4,0.0], Java.type("float[]"))))))))
            .addComments(" CN1 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint1").setName("l_cuneonavicular_joint1").setCenter(-0.1,-0.45,0.0)
              .addChild(new HAnimSegmentObject("l_cuneiform1").setName("l_cuneiform1")
                .addChild(new TransformObject().setTranslation(-0.1,-0.45,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject()))
                  .setGeometry(new IndexedLineSetObject("CN1toTMT1").setDEF("CN1toTMT1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,-0.45,0.0,-0.1,-0.6,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint1").setName("l_tarsometatarsal_joint1").setCenter(-0.1,-0.6,0.0)
                .addChild(new HAnimSegmentObject("l_metatarsal1").setName("l_metatarsal1")
                  .addChild(new TransformObject().setTranslation(-0.1,-0.6,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()))
                    .setGeometry(new IndexedLineSetObject("TMT1toMTP1").setDEF("TMT1toMTP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,-0.6,0.0,-0.1,-0.9,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint1").setName("l_metatarsophalangeal_joint1").setCenter(-0.1,-0.9,0.0)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges1").setName("l_proximal_phalanges1")
                    .addChild(new TransformObject().setTranslation(-0.1,-0.9,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject()))
                      .setGeometry(new IndexedLineSetObject("MTP1toIP1").setDEF("MTP1toIP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,-0.9,0.0,-0.1,-1.05,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_f_Interphalangeal_joint").setName("l_f_Interphalangeal_joint").setCenter(-0.1,-1.05,0.0)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges1").setName("l_distal_phalanges1")
                      .addChild(new TransformObject().setTranslation(-0.1,-1.05,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject()))
                        .setGeometry(new IndexedLineSetObject("tiptoe_l_distal_phalanges1").setDEF("tiptoe_l_distal_phalanges1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,-1.05,0.0,-0.1,-1.1,0.0], Java.type("float[]"))))))))))))
            .addComments(" CN2 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint2").setName("l_cuneonavicular_joint2").setCenter(0.0,-0.45,0.0)
              .addChild(new HAnimSegmentObject("l_cuneiform2").setName("l_cuneiform2")
                .addChild(new TransformObject().setTranslation(0.0,-0.45,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject()))
                  .setGeometry(new IndexedLineSetObject("CN2toTMT2").setDEF("CN2toTMT2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,-0.45,0.0,0.05,-0.6,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint2").setName("l_tarsometatarsal_joint2").setCenter(0.05,-0.6,0.0)
                .addChild(new HAnimSegmentObject("l_metatarsal2").setName("l_metatarsal2")
                  .addChild(new TransformObject().setTranslation(0.05,-0.6,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()))
                    .setGeometry(new IndexedLineSetObject("TMT2toMTP2").setDEF("TMT2toMTP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.05,-0.6,0.0,0.05,-0.9,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint2").setName("l_metatarsophalangeal_joint2").setCenter(0.05,-0.9,0.0)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges2").setName("l_proximal_phalanges2")
                    .addChild(new TransformObject().setTranslation(0.05,-0.9,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject()))
                      .setGeometry(new IndexedLineSetObject("MTP2toPIP2").setDEF("MTP2toPIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.05,-0.9,0.0,0.05,-1.05,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint2").setName("l_f_proximal_Interphalangeal_joint2").setCenter(0.05,-1.05,0.0)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges2").setName("l_middle_phalanges2")
                      .addChild(new TransformObject().setTranslation(0.05,-1.05,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject()))
                        .setGeometry(new IndexedLineSetObject("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.05,-1.05,0.0,0.05,-1.12,0.0], Java.type("float[]"))))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint2").setName("l_f_distal_Interphalangeal_joint2").setCenter(0.05,-1.12,0.0)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges2").setName("l_distal_phalanges2")
                        .addChild(new TransformObject().setTranslation(0.05,-1.12,0.0)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint2").setDEF("tiptoe_l_f_distal_Interphalangeal_joint2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.05,-1.12,0.0,0.05,-1.16,0.0], Java.type("float[]")))))))))))))
            .addComments(" CN3 ")
            .addChild(new HAnimJointObject("l_cuneonavicular_joint3").setName("l_cuneonavicular_joint3").setCenter(0.1,-0.4,0.0)
              .addChild(new HAnimSegmentObject("l_cuneiform3").setName("l_cuneiform3")
                .addChild(new TransformObject().setTranslation(0.1,-0.4,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject()))
                  .setGeometry(new IndexedLineSetObject("CN3toTMT3").setDEF("CN3toTMT3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.1,-0.4,0.0,0.15,-0.6,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint3").setName("l_tarsometatarsal_joint3").setCenter(0.15,-0.6,0.0)
                .addChild(new HAnimSegmentObject("l_metatarsal3").setName("l_metatarsal3")
                  .addChild(new TransformObject().setTranslation(0.15,-0.6,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()))
                    .setGeometry(new IndexedLineSetObject("TMT3toMTP3").setDEF("TMT3toMTP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.15,-0.6,0.0,0.15,-0.9,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint3").setName("l_metatarsophalangeal_joint3").setCenter(0.15,-0.9,0.0)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges3").setName("l_proximal_phalanges3")
                    .addChild(new TransformObject().setTranslation(0.15,-0.9,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject()))
                      .setGeometry(new IndexedLineSetObject("MTP3toPIP3").setDEF("MTP3toPIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.15,-0.9,0.0,0.15,-1.05,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint3").setName("l_f_proximal_Interphalangeal_joint3").setCenter(0.15,-1.05,0.0)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges3").setName("l_middle_phalanges3")
                      .addChild(new TransformObject().setTranslation(0.15,-1.05,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject()))
                        .setGeometry(new IndexedLineSetObject("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.15,-1.05,0.0,0.15,-1.13,0.0], Java.type("float[]"))))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint3").setName("l_f_distal_Interphalangeal_joint3").setCenter(0.15,-1.13,0.0)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges3").setName("l_distal_phalanges3")
                        .addChild(new TransformObject().setTranslation(0.15,-1.13,0.0)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint3").setDEF("tiptoe_l_f_distal_Interphalangeal_joint3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.15,-1.13,0.0,0.15,-1.16,0.0], Java.type("float[]"))))))))))))))
          .addComments(" CC ")
          .addChild(new HAnimJointObject("l_calcaneuscuboid_joint").setName("l_calcaneuscuboid_joint").setCenter(0.2,0.3,0.0)
            .addChild(new HAnimSegmentObject("l_calcaneus").setName("l_calcaneus")
              .addChild(new TransformObject().setTranslation(0.2,0.3,0.0)
                .addChild(new ShapeObject().setUSE("HAnimJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject()))
                .setGeometry(new IndexedLineSetObject("CCtoTT").setDEF("CCtoTT").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.2,0.3,0.0,0.21,-0.3,0.0], Java.type("float[]"))))))))
            .addComments(" TT ")
            .addChild(new HAnimJointObject("l_transverse_tarsal_joint").setName("l_transverse_tarsal_joint").setCenter(0.21,-0.3,0.0)
              .addChild(new HAnimSegmentObject("l_cuboid").setName("l_cuboid")
                .addChild(new TransformObject().setTranslation(0.21,-0.3,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject()))
                  .setGeometry(new IndexedLineSetObject("TTtoTMT4").setDEF("TTtoTMT4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.21,-0.3,0.0,0.25,-0.58,0.0], Java.type("float[]")))))))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject()))
                  .setGeometry(new IndexedLineSetObject("TTtoTMT5").setDEF("TTtoTMT5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.21,-0.3,0.0,0.33,-0.52,0.0], Java.type("float[]"))))))))
              .addComments(" TMT4 ")
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint4").setName("l_tarsometatarsal_joint4").setCenter(0.25,-0.58,0.0)
                .addChild(new HAnimSegmentObject("l_metatarsal4").setName("l_metatarsal4")
                  .addChild(new TransformObject().setTranslation(0.25,-0.58,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()))
                    .setGeometry(new IndexedLineSetObject("TMT4toMTP4").setDEF("TMT4toMTP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.25,-0.58,0.0,0.25,-0.87,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint4").setName("l_metatarsophalangeal_joint4").setCenter(0.25,-0.87,0.0)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges4").setName("l_proximal_phalanges4")
                    .addChild(new TransformObject().setTranslation(0.25,-0.87,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject()))
                      .setGeometry(new IndexedLineSetObject("MTP4toPIP4").setDEF("MTP4toPIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.25,-0.87,0.0,0.25,-1.0,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint4").setName("l_f_proximal_Interphalangeal_joint4").setCenter(0.25,-1.0,0.0)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges4").setName("l_middle_phalanges4")
                      .addChild(new TransformObject().setTranslation(0.25,-1.0,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject()))
                        .setGeometry(new IndexedLineSetObject("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.25,-1.0,0.0,0.25,-1.1,0.0], Java.type("float[]"))))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint4").setName("l_f_distal_Interphalangeal_joint4").setCenter(0.25,-1.1,0.0)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges4").setName("l_distal_phalanges4")
                        .addChild(new TransformObject().setTranslation(0.25,-1.1,0.0)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint4").setDEF("tiptoe_l_f_distal_Interphalangeal_joint4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.25,-1.1,0.0,0.25,-1.15,0.0], Java.type("float[]"))))))))))))
              .addComments(" TMT5 ")
              .addChild(new HAnimJointObject("l_tarsometatarsal_joint5").setName("l_tarsometatarsal_joint5").setCenter(0.33,-0.52,0.0)
                .addChild(new HAnimSegmentObject("l_metatarsal5").setName("l_metatarsal5")
                  .addChild(new TransformObject().setTranslation(0.33,-0.52,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject()))
                    .setGeometry(new IndexedLineSetObject("TMT5toMTP5").setDEF("TMT5toMTP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.33,-0.52,0.0,0.34,-0.8,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_metatarsophalangeal_joint5").setName("l_metatarsophalangeal_joint5").setCenter(0.34,-0.8,0.0)
                  .addChild(new HAnimSegmentObject("l_proximal_phalanges5").setName("l_proximal_phalanges5")
                    .addChild(new TransformObject().setTranslation(0.34,-0.8,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject()))
                      .setGeometry(new IndexedLineSetObject("MTP5toPIP5").setDEF("MTP5toPIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.34,-0.8,0.0,0.34,-0.95,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_f_proximal_Interphalangeal_joint5").setName("l_f_proximal_Interphalangeal_joint5").setCenter(0.34,-0.95,0.0)
                    .addChild(new HAnimSegmentObject("l_middle_phalanges5").setName("l_middle_phalanges5")
                      .addChild(new TransformObject().setTranslation(0.34,-0.95,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject()))
                        .setGeometry(new IndexedLineSetObject("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.34,-0.95,0.0,0.34,-1.05,0.0], Java.type("float[]"))))))))
                    .addChild(new HAnimJointObject("l_f_distal_Interphalangeal_joint5").setName("l_f_distal_Interphalangeal_joint5").setCenter(0.34,-1.05,0.0)
                      .addChild(new HAnimSegmentObject("l_distal_phalanges5").setName("l_distal_phalanges5")
                        .addChild(new TransformObject().setTranslation(0.34,-1.05,0.0)
                          .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                        .addChild(new ShapeObject()
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))
                          .setGeometry(new IndexedLineSetObject("tiptoe_l_f_distal_Interphalangeal_joint5").setDEF("tiptoe_l_f_distal_Interphalangeal_joint5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.34,-1.05,0.0,0.34,-1.08,0.0], Java.type("float[]"))))))))))))))))
      .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
      .addJoints(new HAnimJointObject().setUSE("l_talocrural_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_talocalcaneonavicular_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint1"))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint1"))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint1"))
      .addJoints(new HAnimJointObject().setUSE("l_f_Interphalangeal_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint2"))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint2"))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint2"))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint2"))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint2"))
      .addJoints(new HAnimJointObject().setUSE("l_cuneonavicular_joint3"))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint3"))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint3"))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint3"))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint3"))
      .addJoints(new HAnimJointObject().setUSE("l_calcaneuscuboid_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_transverse_tarsal_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint4"))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint4"))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint4"))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint4"))
      .addJoints(new HAnimJointObject().setUSE("l_tarsometatarsal_joint5"))
      .addJoints(new HAnimJointObject().setUSE("l_metatarsophalangeal_joint5"))
      .addJoints(new HAnimJointObject().setUSE("l_f_proximal_Interphalangeal_joint5"))
      .addJoints(new HAnimJointObject().setUSE("l_f_distal_Interphalangeal_joint5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_talus"))
      .addSegments(new HAnimSegmentObject().setUSE("l_navicular"))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuneiform3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_calcaneus"))
      .addSegments(new HAnimSegmentObject().setUSE("l_cuboid"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metatarsal5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges5"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimModelFootLeft model
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
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new HAnimModelFootLeft();
		print ("HAnimModelFootLeft execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelFootLeft().main();
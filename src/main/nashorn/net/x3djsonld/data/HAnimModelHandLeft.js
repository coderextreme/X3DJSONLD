load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Left hand, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelHandLeftIndex.html" target="_top">HAnimModelHandLeft catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author YOO Kwan Hee and Don Brutzman
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("4.0")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName("title").setContent("HAnimModelHandLeft.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Left hand, using high-fidelity definitions for H-Anim version 2.2"))
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
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("HAnimModelHandLeft.x3d"))
    .addChild(new HAnimHumanoidObject("Humanoid_Left_hand").setName("Humanoid_Left_hand").setLoa(-1).setJointBindingPositions(new MFVec3fObject(Java.to([0.0,0.0,0.0], Java.type("float[]")))).setJointBindingRotations(new MFRotationObject(Java.to([0.0,0.0,1.0,0.0], Java.type("float[]")))).setJointBindingScales(new MFVec3fObject(Java.to([1.0,1.0,1.0], Java.type("float[]")))).setVersion("2.0").setSkeletalConfiguration("BASIC")
      .addSkeleton(new HAnimJointObject("hanim_HumanoidRoot").setName("humanoid_root")
        .addChild(new HAnimJointObject("l_radiocarpal_joint").setName("l_radiocarpal_joint")
          .addChild(new HAnimSegmentObject("l_wrist").setName("l_wrist")
            .addChild(new TransformObject()
              .addChild(new ShapeObject("HAnimJointShape")
                .setGeometry(new SphereObject().setRadius(0.025))
                .setAppearance(new AppearanceObject("HAnimJointAppearanceBlue")
                  .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.0,1.0)))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSetObject("RCToMC12").setDEF("RCToMC12").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.1,0.1,0.0], Java.type("float[]")))))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSetObject("RCToMC3").setDEF("RCToMC3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,0.07,0.0], Java.type("float[]")))))))
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
              .setGeometry(new IndexedLineSetObject("RCToMC45").setDEF("RCToMC45").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.0,0.0,-0.1,0.1,0.0], Java.type("float[]"))))))))
          .addComments(" MC12 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_12").setName("l_midcarpal_joint_12").setCenter(0.1,0.1,0.0)
            .addChild(new HAnimSegmentObject("l_trapezoid").setName("l_trapezoid")
              .addChild(new TransformObject().setTranslation(0.1,0.1,0.0)
                .addChild(new ShapeObject("HAnimNewJointShape")
                  .setGeometry(new SphereObject().setRadius(0.025))
                  .setAppearance(new AppearanceObject("HAnimJointAppearanceRed")
                    .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0)))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSetObject("MC12toCMC1").setDEF("MC12toCMC1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.1,0.1,0.0,0.2,0.15,0.0], Java.type("float[]")))))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSetObject("MC12toCMC2").setDEF("MC12toCMC2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.1,0.1,0.0,0.1,0.2,0.0], Java.type("float[]"))))))))
            .addComments(" thumb finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_1").setName("l_carpometacarpal_joint_1").setCenter(0.2,0.15,0.0)
              .addChild(new HAnimSegmentObject("l_metacarpal_1").setName("l_metacarpal_1")
                .addChild(new TransformObject().setTranslation(0.2,0.15,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSetObject("CMC1toMCP1").setDEF("CMC1toMCP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.2,0.15,0.0,0.3,0.3,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_1").setName("l_metacarpophalangeal_joint_1").setCenter(0.3,0.3,0.0)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges1").setName("l_proximal_phalanges1")
                  .addChild(new TransformObject().setTranslation(0.3,0.3,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSetObject("MCP11toIP1").setDEF("MCP11toIP1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.3,0.3,0.0,0.35,0.4,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_interphalangeal_joint_1").setName("l_interphalangeal_joint_1").setCenter(0.35,0.4,0.0)
                  .addChild(new HAnimSegmentObject("l_distal_phalanges1").setName("l_distal_phalanges1")
                    .addChild(new TransformObject().setTranslation(0.35,0.4,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSetObject("fingertip_l_interphalangeal_joint_1").setDEF("fingertip_l_interphalangeal_joint_1").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.35,0.4,0.0,0.36,0.45,0.0], Java.type("float[]")))))))))))
            .addComments(" index finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_2").setName("l_carpometacarpal_joint_2").setCenter(0.1,0.2,0.0)
              .addChild(new HAnimSegmentObject("l_metacarpal2").setName("l_metacarpal2")
                .addChild(new TransformObject().setTranslation(0.1,0.2,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSetObject("CMC2toMCP2").setDEF("CMC2toMCP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.1,0.2,0.0,0.15,0.5,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_2").setName("l_metacarpophalangeal_joint_2").setCenter(0.15,0.5,0.0)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges2").setName("l_proximal_phalanges2")
                  .addChild(new TransformObject().setTranslation(0.15,0.5,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSetObject("MCP2toPIP2").setDEF("MCP2toPIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.15,0.5,0.0,0.2,0.7,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_2").setName("l_proximal_interphalangeal_joint_2").setCenter(0.2,0.7,0.0)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges2").setName("l_middle_phalanges2")
                    .addChild(new TransformObject().setTranslation(0.2,0.7,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSetObject("PIP2toDIP2").setDEF("PIP2toDIP2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.2,0.7,0.0,0.24,0.87,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_2").setName("l_distal_interphalangeal_joint_2").setCenter(0.24,0.87,0.0)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges2").setName("l_distal_phalanges2")
                      .addChild(new TransformObject().setTranslation(0.24,0.87,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_2").setDEF("fingertip_l_distal_interphalangeal_joint_2").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.24,0.87,0.0,0.26,0.93,0.0], Java.type("float[]")))))))))))))
          .addComments(" MC3 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_3").setName("l_midcarpal_joint_3").setCenter(0.0,0.07,0.0)
            .addChild(new HAnimSegmentObject("l_capitate").setName("l_capitate")
              .addChild(new TransformObject().setTranslation(0.0,0.07,0.0)
                .addChild(new ShapeObject().setUSE("HAnimNewJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSetObject("MC3toCMC3").setDEF("MC3toCMC3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.07,0.0,0.0,0.2,0.0], Java.type("float[]"))))))))
            .addComments(" Middle fingle ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_3").setName("l_carpometacarpal_joint_3").setCenter(0.0,0.2,0.0)
              .addChild(new HAnimSegmentObject("l_metacarpal3").setName("l_metacarpal3")
                .addChild(new TransformObject().setTranslation(0.0,0.2,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSetObject("CMC3toMCP3").setDEF("CMC3toMCP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,0.2,0.0,0.03,0.5,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_3").setName("l_metacarpophalangeal_joint_3").setCenter(0.03,0.5,0.0)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges3").setName("l_proximal_phalanges3")
                  .addChild(new TransformObject().setTranslation(0.03,0.5,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSetObject("MCP3toPIP3").setDEF("MCP3toPIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.03,0.5,0.0,0.05,0.75,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_3").setName("l_proximal_interphalangeal_joint_3").setCenter(0.05,0.75,0.0)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges3").setName("l_middle_phalanges3")
                    .addChild(new TransformObject().setTranslation(0.05,0.75,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSetObject("PIP3toDIP3").setDEF("PIP3toDIP3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.05,0.75,0.0,0.08,0.96,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_3").setName("l_distal_interphalangeal_joint_3").setCenter(0.08,0.96,0.0)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges3").setName("l_distal_phalanges3")
                      .addChild(new TransformObject().setTranslation(0.08,0.96,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_3").setDEF("fingertip_l_distal_interphalangeal_joint_3").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.08,0.96,0.0,0.09,1.05,0.0], Java.type("float[]")))))))))))))
          .addComments(" MC45 ")
          .addChild(new HAnimJointObject("l_midcarpal_joint_45").setName("l_midcarpal_joint_12").setCenter(-0.1,0.1,0.0)
            .addChild(new HAnimSegmentObject("l_hamate").setName("l_hamate")
              .addChild(new TransformObject().setTranslation(-0.1,0.1,0.0)
                .addChild(new ShapeObject().setUSE("HAnimNewJointShape")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSetObject("MC45toCMC4").setDEF("MC45toCMC4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.1,0.0,-0.1,0.2,0.0], Java.type("float[]")))))))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                .setGeometry(new IndexedLineSetObject("MC45toCMC5").setDEF("MC45toCMC5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.1,0.0,-0.15,0.17,0.0], Java.type("float[]"))))))))
            .addComments(" ring finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_4").setName("l_carpometacarpal_joint_4").setCenter(-0.1,0.2,0.0)
              .addChild(new HAnimSegmentObject("l_metacarpal4").setName("l_metacarpal4")
                .addChild(new TransformObject().setTranslation(-0.1,0.2,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSetObject("CMC4toMCP4").setDEF("CMC4toMCP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.2,0.0,-0.1,0.47,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_4").setName("l_metacarpophalangeal_joint_4").setCenter(-0.1,0.47,0.0)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges4").setName("l_proximal_phalanges4")
                  .addChild(new TransformObject().setTranslation(-0.1,0.47,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSetObject("MCP4toPIP4").setDEF("MCP4toPIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.47,0.0,-0.1,0.7,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_4").setName("l_proximal_interphalangeal_joint_4").setCenter(-0.1,0.7,0.0)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges4").setName("l_middle_phalanges4")
                    .addChild(new TransformObject().setTranslation(-0.1,0.7,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSetObject("PIP4toDIP4").setDEF("PIP4toDIP4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.7,0.0,-0.1,0.93,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_4").setName("l_distal_interphalangeal_joint_4").setCenter(-0.1,0.93,0.0)
                    .addChild(new HAnimSegmentObject("l_distal_phalanx4").setName("l_distal_phalanx4")
                      .addChild(new TransformObject().setTranslation(-0.1,0.93,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_4").setDEF("fingertip_l_distal_interphalangeal_joint_4").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.1,0.93,0.0,-0.1,1.0,0.0], Java.type("float[]"))))))))))))
            .addComments(" pinky finger ")
            .addChild(new HAnimJointObject("l_carpometacarpal_joint_5").setName("l_carpometacarpal_joint_5").setCenter(-0.15,0.17,0.0)
              .addChild(new HAnimSegmentObject("l_metacarpal5").setName("l_metacarpal5")
                .addChild(new TransformObject().setTranslation(-0.15,0.17,0.0)
                  .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                  .setGeometry(new IndexedLineSetObject("CMC5toMCP5").setDEF("CMC5toMCP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.15,0.17,0.0,-0.2,0.4,0.0], Java.type("float[]"))))))))
              .addChild(new HAnimJointObject("l_metacarpophalangeal_joint_5").setName("l_metacarpophalangeal_joint_5").setCenter(-0.2,0.4,0.0)
                .addChild(new HAnimSegmentObject("l_proximal_phalanges5").setName("l_proximal_phalanges2")
                  .addChild(new TransformObject().setTranslation(-0.2,0.4,0.0)
                    .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                    .setGeometry(new IndexedLineSetObject("MCP5toPIP5").setDEF("MCP5toPIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.2,0.4,0.0,-0.23,0.63,0.0], Java.type("float[]"))))))))
                .addChild(new HAnimJointObject("l_proximal_interphalangeal_joint_5").setName("l_proximal_interphalangeal_joint_5").setCenter(-0.23,0.63,0.0)
                  .addChild(new HAnimSegmentObject("l_middle_phalanges5").setName("l_middle_phalanges5")
                    .addChild(new TransformObject().setTranslation(-0.23,0.63,0.0)
                      .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                    .addChild(new ShapeObject()
                      .setAppearance(new AppearanceObject()
                        .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedLineSetObject("PIP5toDIP5").setDEF("PIP5toDIP5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.23,0.63,0.0,-0.25,0.79,0.0], Java.type("float[]"))))))))
                  .addChild(new HAnimJointObject("l_distal_interphalangeal_joint_5").setName("l_distal_interphalangeal_joint_5").setCenter(-0.25,0.79,0.0)
                    .addChild(new HAnimSegmentObject("l_distal_phalanges5").setName("l_distal_phalanges5")
                      .addChild(new TransformObject().setTranslation(-0.25,0.79,0.0)
                        .addChild(new ShapeObject().setUSE("HAnimJointShape")))
                      .addChild(new ShapeObject()
                        .setAppearance(new AppearanceObject()
                          .setMaterial(new MaterialObject().setEmissiveColor(1.0,1.0,1.0)))
                        .setGeometry(new IndexedLineSetObject("fingertip_l_distal_interphalangeal_joint_5").setDEF("fingertip_l_distal_interphalangeal_joint_5").setCoordIndex(Java.to([0,1], Java.type("int[]")))
                          .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([-0.25,0.79,0.0,-0.26,0.85,0.0], Java.type("float[]")))))))))))))))
      .addJoints(new HAnimJointObject().setUSE("hanim_HumanoidRoot"))
      .addJoints(new HAnimJointObject().setUSE("l_radiocarpal_joint"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_12"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_interphalangeal_joint_1"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_2"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_3"))
      .addJoints(new HAnimJointObject().setUSE("l_midcarpal_joint_45"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_4"))
      .addJoints(new HAnimJointObject().setUSE("l_carpometacarpal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_metacarpophalangeal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_proximal_interphalangeal_joint_5"))
      .addJoints(new HAnimJointObject().setUSE("l_distal_interphalangeal_joint_5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_wrist"))
      .addSegments(new HAnimSegmentObject().setUSE("l_trapezoid"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal_1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges1"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges2"))
      .addSegments(new HAnimSegmentObject().setUSE("l_capitate"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges3"))
      .addSegments(new HAnimSegmentObject().setUSE("l_hamate"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanx4"))
      .addSegments(new HAnimSegmentObject().setUSE("l_metacarpal5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_proximal_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_middle_phalanges5"))
      .addSegments(new HAnimSegmentObject().setUSE("l_distal_phalanges5"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		print ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();
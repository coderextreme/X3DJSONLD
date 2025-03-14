load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> An attempt at a standard LOA-4 skeleton. </p>
 <p> Related links: JohnJoint.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JohnJoint&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d">JohnJoint.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> An attempt at a standard LOA-4 skeleton </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> h6.pl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 12 January 2023 </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John Carlson
 */

function JohnJoint
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
JohnJoint.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("JohnJoint.x3d"))
    .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d"))
    .addMeta(new meta().setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta(new meta().setName("generator").setContent("h6.pl"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("created").setContent("12 January 2023"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new Transform()
      .addComments(" DEF for markerfor XYZ axes ")
      .addChild(new Shape("AxisLinesShape")
        .addComments(" RGB lines showing XYZ axes ")
        .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(Java.to([0,1,2], Java.type("int[]"))).setCoordIndex(Java.to([0,1,-1,0,2,-1,0,3,-1], Java.type("int[]")))
          .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1)], Java.type("float[]")))))
          .setColor(new Color().setColor(new MFColor(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))))))))
    .addChild(new Group()
      .addComments(" DEFS for markers of skeleton joints, segments, and sites ")
      .addChild(new Transform()
        .addComments(Java.to(["",
"  <Transform translation='0 2 0' scale='1 1 1'>",
"   <Shape DEF='HAnimRootShape'>",
"    <Sphere radius='0.02'  />",
"     <Appearance>",
"      <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/>",
"     </Appearance>",
"    </Shape>",
"  </Transform>"], Java.type("java.lang.String[]")))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(2.1),doubleToFloat(0.0))
          .addChild(new Shape("HAnimJointShape")
            .setGeometry(new Sphere().setRadius(0.02))
            .setAppearance(new Appearance()
              .setMaterial(new Material("HAnimJointMaterial").setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.8)).setTransparency(0.3)))))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(2.05),doubleToFloat(0.0))
          .addChild(new Shape("HAnimSegmentLine")
            .setGeometry(new LineSet().setVertexCount(Java.to([2], Java.type("int[]")))
              .setColor(new ColorRGBA("HAnimSegmentLineColorRGBA").setColor(new MFColorRGBA(Java.to([doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.1)], Java.type("float[]")))))
              .setCoord(new Coordinate().setPoint(new MFVec3f(Java.to([doubleToFloat(-0.05),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.05),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))))))))
        .addComments(Java.to(["",
"  <Transform translation='0 2.1 0' scale='1 1 1'>",
"   <Shape DEF='HAnimSiteShape'>",
"    <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'>",
"     <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/>",
"     <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/>",
"    </IndexedFaceSet>",
"     <Appearance>",
"      <Material diffuseColor='1 1 0' transparency='0.3'/>",
"     </Appearance>",
"   </Shape>",
"  </Transform>"], Java.type("java.lang.String[]")))))
    .addChild(new NavigationInfo().setSpeed(1.5))
    .addChild(new Viewpoint().setDescription("default"))
    .addChild(new HAnimHumanoid("hanim_HAnim").setName("HAnim").setInfo(new MFString("\"humanoidVersion=2.0\"")).setVersion("2.0")
      .addSkeleton(new HAnimJoint("hanim_humanoid_root").setName("humanoid_root").setCenter(doubleToFloat(0.0000),doubleToFloat(0.8240),doubleToFloat(0.0277))
        .addChild(new HAnimJoint("hanim_sacroiliac").setName("sacroiliac").setCenter(doubleToFloat(0.0000),doubleToFloat(0.9149),doubleToFloat(0.0016))
          .addChild(new HAnimJoint("hanim_l_hip").setName("l_hip").setCenter(doubleToFloat(0.0961),doubleToFloat(0.9124),doubleToFloat(-0.0001))
            .addChild(new HAnimJoint("hanim_l_knee").setName("l_knee").setCenter(doubleToFloat(0.1040),doubleToFloat(0.4867),doubleToFloat(0.0308))
              .addChild(new HAnimJoint("hanim_l_talocrural").setName("l_talocrural").setCenter(doubleToFloat(0.1101),doubleToFloat(0.0656),doubleToFloat(-0.0736))
                .addChild(new HAnimJoint("hanim_l_talocalcaneonavicular").setName("l_talocalcaneonavicular").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_1").setName("l_cuneonavicular_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_1").setName("l_tarsometatarsal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_1").setName("l_metatarsophalangeal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_l_tarsal_interphalangeal_1").setName("l_tarsal_interphalangeal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_2").setName("l_cuneonavicular_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_2").setName("l_tarsometatarsal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_2").setName("l_metatarsophalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2").setName("l_tarsal_proximal_interphalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_2").setName("l_tarsal_distal_interphalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))))
                  .addChild(new HAnimJoint("hanim_l_cuneonavicular_3").setName("l_cuneonavicular_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_3").setName("l_tarsometatarsal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_3").setName("l_metatarsophalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3").setName("l_tarsal_proximal_interphalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_3").setName("l_tarsal_distal_interphalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))))
                .addChild(new HAnimJoint("hanim_l_calcaneocuboid").setName("l_calcaneocuboid").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                  .addChild(new HAnimJoint("hanim_l_transversetarsal").setName("l_transversetarsal").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_4").setName("l_tarsometatarsal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_4").setName("l_metatarsophalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4").setName("l_tarsal_proximal_interphalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_4").setName("l_tarsal_distal_interphalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))
                    .addChild(new HAnimJoint("hanim_l_tarsometatarsal_5").setName("l_tarsometatarsal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_l_metatarsophalangeal_5").setName("l_metatarsophalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5").setName("l_tarsal_proximal_interphalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_l_tarsal_distal_interphalangeal_5").setName("l_tarsal_distal_interphalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))))))))
          .addChild(new HAnimJoint("hanim_r_hip").setName("r_hip").setCenter(doubleToFloat(-0.0950),doubleToFloat(0.9171),doubleToFloat(0.0029))
            .addChild(new HAnimJoint("hanim_r_knee").setName("r_knee").setCenter(doubleToFloat(-0.0867),doubleToFloat(0.4913),doubleToFloat(0.0318))
              .addChild(new HAnimJoint("hanim_r_talocrural").setName("r_talocrural").setCenter(doubleToFloat(-0.0801),doubleToFloat(0.0712),doubleToFloat(-0.0766))
                .addChild(new HAnimJoint("hanim_r_talocalcaneonavicular").setName("r_talocalcaneonavicular").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_1").setName("r_cuneonavicular_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_1").setName("r_tarsometatarsal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_1").setName("r_metatarsophalangeal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_r_tarsal_interphalangeal_1").setName("r_tarsal_interphalangeal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_2").setName("r_cuneonavicular_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_2").setName("r_tarsometatarsal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_2").setName("r_metatarsophalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2").setName("r_tarsal_proximal_interphalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2").setName("r_tarsal_distal_interphalangeal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))))
                  .addChild(new HAnimJoint("hanim_r_cuneonavicular_3").setName("r_cuneonavicular_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_3").setName("r_tarsometatarsal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_3").setName("r_metatarsophalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3").setName("r_tarsal_proximal_interphalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3").setName("r_tarsal_distal_interphalangeal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))))
                .addChild(new HAnimJoint("hanim_r_calcaneocuboid").setName("r_calcaneocuboid").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                  .addChild(new HAnimJoint("hanim_r_transversetarsal").setName("r_transversetarsal").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_4").setName("r_tarsometatarsal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_4").setName("r_metatarsophalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4").setName("r_tarsal_proximal_interphalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4").setName("r_tarsal_distal_interphalangeal_4").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))
                    .addChild(new HAnimJoint("hanim_r_tarsometatarsal_5").setName("r_tarsometatarsal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                      .addChild(new HAnimJoint("hanim_r_metatarsophalangeal_5").setName("r_metatarsophalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                        .addChild(new HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5").setName("r_tarsal_proximal_interphalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                          .addChild(new HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5").setName("r_tarsal_distal_interphalangeal_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))))))))
        .addChild(new HAnimJoint("hanim_vl5").setName("vl5").setCenter(doubleToFloat(0.0028),doubleToFloat(1.0568),doubleToFloat(-0.0776))
          .addChild(new HAnimJoint("hanim_vl4").setName("vl4").setCenter(doubleToFloat(0.0035),doubleToFloat(1.0925),doubleToFloat(-0.0787))
            .addChild(new HAnimJoint("hanim_vl3").setName("vl3").setCenter(doubleToFloat(0.0041),doubleToFloat(1.1276),doubleToFloat(-0.0796))
              .addChild(new HAnimJoint("hanim_vl2").setName("vl2").setCenter(doubleToFloat(0.0045),doubleToFloat(1.1546),doubleToFloat(-0.0800))
                .addChild(new HAnimJoint("hanim_vl1").setName("vl1").setCenter(doubleToFloat(0.0048),doubleToFloat(1.1912),doubleToFloat(-0.0805))
                  .addChild(new HAnimJoint("hanim_vt12").setName("vt12").setCenter(doubleToFloat(0.0051),doubleToFloat(1.2278),doubleToFloat(-0.0808))
                    .addChild(new HAnimJoint("hanim_vt11").setName("vt11").setCenter(doubleToFloat(0.0053),doubleToFloat(1.2679),doubleToFloat(-0.0810))
                      .addChild(new HAnimJoint("hanim_vt10").setName("vt10").setCenter(doubleToFloat(0.0056),doubleToFloat(1.2848),doubleToFloat(-0.0822))
                        .addChild(new HAnimJoint("hanim_vt9").setName("vt9").setCenter(doubleToFloat(0.0057),doubleToFloat(1.3126),doubleToFloat(-0.0838))
                          .addChild(new HAnimJoint("hanim_vt8").setName("vt8").setCenter(doubleToFloat(0.0057),doubleToFloat(1.3382),doubleToFloat(-0.0845))
                            .addChild(new HAnimJoint("hanim_vt7").setName("vt7").setCenter(doubleToFloat(0.0058),doubleToFloat(1.3625),doubleToFloat(-0.0833))
                              .addChild(new HAnimJoint("hanim_vt6").setName("vt6").setCenter(doubleToFloat(0.0059),doubleToFloat(1.3866),doubleToFloat(-0.0800))
                                .addChild(new HAnimJoint("hanim_vt5").setName("vt5").setCenter(doubleToFloat(0.0060),doubleToFloat(1.4102),doubleToFloat(-0.0745))
                                  .addChild(new HAnimJoint("hanim_vt4").setName("vt4").setCenter(doubleToFloat(0.0061),doubleToFloat(1.4320),doubleToFloat(-0.0675))
                                    .addChild(new HAnimJoint("hanim_vt3").setName("vt3").setCenter(doubleToFloat(0.0062),doubleToFloat(1.4583),doubleToFloat(-0.0570))
                                      .addChild(new HAnimJoint("hanim_vt2").setName("vt2").setCenter(doubleToFloat(0.0063),doubleToFloat(1.4761),doubleToFloat(-0.0484))
                                        .addChild(new HAnimJoint("hanim_vt1").setName("vt1").setCenter(doubleToFloat(0.0065),doubleToFloat(1.4951),doubleToFloat(-0.0387))
                                          .addChild(new HAnimJoint("hanim_vc7").setName("vc7").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5132),doubleToFloat(-0.0301))
                                            .addChild(new HAnimJoint("hanim_vc6").setName("vc6").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5357),doubleToFloat(-0.0143))
                                              .addChild(new HAnimJoint("hanim_vc5").setName("vc5").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5520),doubleToFloat(-0.0082))
                                                .addChild(new HAnimJoint("hanim_vc4").setName("vc4").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5662),doubleToFloat(-0.0084))
                                                  .addChild(new HAnimJoint("hanim_vc3").setName("vc3").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5800),doubleToFloat(-0.0103))
                                                    .addChild(new HAnimJoint("hanim_vc2").setName("vc2").setCenter(doubleToFloat(0.0066),doubleToFloat(1.5928),doubleToFloat(-0.0103))
                                                      .addChild(new HAnimJoint("hanim_vc1").setName("vc1").setCenter(doubleToFloat(0.0066),doubleToFloat(1.6144),doubleToFloat(-0.0034))
                                                        .addChild(new HAnimJoint("hanim_skullbase").setName("skullbase").setCenter(doubleToFloat(0.0044),doubleToFloat(1.6209),doubleToFloat(0.0236))
                                                          .addChild(new HAnimJoint("hanim_l_eyelid_joint").setName("l_eyelid_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_r_eyelid_joint").setName("r_eyelid_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_l_eyeball_joint").setName("l_eyeball_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_r_eyeball_joint").setName("r_eyeball_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_l_eyebrow_joint").setName("l_eyebrow_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_r_eyebrow_joint").setName("r_eyebrow_joint").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))
                                                          .addChild(new HAnimJoint("hanim_temporomandibular").setName("temporomandibular").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))))))))
                                          .addChild(new HAnimJoint("hanim_l_sternoclavicular").setName("l_sternoclavicular").setCenter(doubleToFloat(0.0820),doubleToFloat(1.4488),doubleToFloat(-0.0353))
                                            .addChild(new HAnimJoint("hanim_l_acromioclavicular").setName("l_acromioclavicular").setCenter(doubleToFloat(0.0962),doubleToFloat(1.4269),doubleToFloat(-0.0424))
                                              .addChild(new HAnimJoint("hanim_l_shoulder").setName("l_shoulder").setCenter(doubleToFloat(0.2029),doubleToFloat(1.4376),doubleToFloat(-0.0387))
                                                .addChild(new HAnimJoint("hanim_l_elbow").setName("l_elbow").setCenter(doubleToFloat(0.2014),doubleToFloat(1.1357),doubleToFloat(-0.0682))
                                                  .addChild(new HAnimJoint("hanim_l_radiocarpal").setName("l_radiocarpal").setCenter(doubleToFloat(0.1984),doubleToFloat(0.8663),doubleToFloat(-0.0583))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_1").setName("l_midcarpal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_1").setName("l_carpometacarpal_1").setCenter(doubleToFloat(0.1924),doubleToFloat(0.8472),doubleToFloat(-0.0534))
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_1").setName("l_metacarpophalangeal_1").setCenter(doubleToFloat(0.1951),doubleToFloat(0.8226),doubleToFloat(0.0246))
                                                          .addChild(new HAnimJoint("hanim_l_carpal_interphalangeal_1").setName("l_carpal_interphalangeal_1").setCenter(doubleToFloat(0.1955),doubleToFloat(0.8159),doubleToFloat(0.0464))))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_2").setName("l_midcarpal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_2").setName("l_carpometacarpal_2").setCenter(doubleToFloat(0.1983),doubleToFloat(0.8024),doubleToFloat(-0.0280))
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_2").setName("l_metacarpophalangeal_2").setCenter(doubleToFloat(0.1983),doubleToFloat(0.7815),doubleToFloat(-0.0280))
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2").setName("l_carpal_proximal_interphalangeal_2").setCenter(doubleToFloat(0.2017),doubleToFloat(0.7363),doubleToFloat(-0.0248))
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_2").setName("l_carpal_distal_interphalangeal_2").setCenter(doubleToFloat(0.2028),doubleToFloat(0.7139),doubleToFloat(-0.0236)))))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_3").setName("l_midcarpal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_3").setName("l_carpometacarpal_3").setCenter(doubleToFloat(0.1987),doubleToFloat(0.8029),doubleToFloat(-0.0530))
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_3").setName("l_metacarpophalangeal_3").setCenter(doubleToFloat(0.1987),doubleToFloat(0.7818),doubleToFloat(-0.0530))
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3").setName("l_carpal_proximal_interphalangeal_3").setCenter(doubleToFloat(0.2013),doubleToFloat(0.7273),doubleToFloat(-0.0503))
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_3").setName("l_carpal_distal_interphalangeal_3").setCenter(doubleToFloat(0.2026),doubleToFloat(0.7011),doubleToFloat(-0.0494)))))))
                                                    .addChild(new HAnimJoint("hanim_l_midcarpal_4_5").setName("l_midcarpal_4_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_4").setName("l_carpometacarpal_4").setCenter(doubleToFloat(0.1956),doubleToFloat(0.8019),doubleToFloat(-0.0794))
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_4").setName("l_metacarpophalangeal_4").setCenter(doubleToFloat(0.1956),doubleToFloat(0.7815),doubleToFloat(-0.0794))
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4").setName("l_carpal_proximal_interphalangeal_4").setCenter(doubleToFloat(0.1973),doubleToFloat(0.7287),doubleToFloat(-0.0777))
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_4").setName("l_carpal_distal_interphalangeal_4").setCenter(doubleToFloat(0.1983),doubleToFloat(0.7045),doubleToFloat(-0.0767))))))
                                                      .addChild(new HAnimJoint("hanim_l_carpometacarpal_5").setName("l_carpometacarpal_5").setCenter(doubleToFloat(0.1925),doubleToFloat(0.8066),doubleToFloat(-0.1036))
                                                        .addChild(new HAnimJoint("hanim_l_metacarpophalangeal_5").setName("l_metacarpophalangeal_5").setCenter(doubleToFloat(0.1925),doubleToFloat(0.7866),doubleToFloat(-0.1036))
                                                          .addChild(new HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5").setName("l_carpal_proximal_interphalangeal_5").setCenter(doubleToFloat(0.1938),doubleToFloat(0.7452),doubleToFloat(-0.1024))
                                                            .addChild(new HAnimJoint("hanim_l_carpal_distal_interphalangeal_5").setName("l_carpal_distal_interphalangeal_5").setCenter(doubleToFloat(0.1948),doubleToFloat(0.7277),doubleToFloat(-0.1017))))))))))))
                                          .addChild(new HAnimJoint("hanim_r_sternoclavicular").setName("r_sternoclavicular").setCenter(doubleToFloat(-0.0694),doubleToFloat(1.4600),doubleToFloat(-0.0330))
                                            .addChild(new HAnimJoint("hanim_r_acromioclavicular").setName("r_acromioclavicular").setCenter(doubleToFloat(-0.0836),doubleToFloat(1.4281),doubleToFloat(-0.0401))
                                              .addChild(new HAnimJoint("hanim_r_shoulder").setName("r_shoulder").setCenter(doubleToFloat(-0.1907),doubleToFloat(1.4407),doubleToFloat(-0.0325))
                                                .addChild(new HAnimJoint("hanim_r_elbow").setName("r_elbow").setCenter(doubleToFloat(-0.1949),doubleToFloat(1.1388),doubleToFloat(-0.0620))
                                                  .addChild(new HAnimJoint("hanim_r_radiocarpal").setName("r_radiocarpal").setCenter(doubleToFloat(-0.1959),doubleToFloat(0.8694),doubleToFloat(-0.0521))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_1").setName("r_midcarpal_1").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_1").setName("r_carpometacarpal_1").setCenter(doubleToFloat(-0.1899),doubleToFloat(0.8502),doubleToFloat(-0.0473))
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_1").setName("r_metacarpophalangeal_1").setCenter(doubleToFloat(-0.1874),doubleToFloat(0.8256),doubleToFloat(0.0306))
                                                          .addChild(new HAnimJoint("hanim_r_carpal_interphalangeal_1").setName("r_carpal_interphalangeal_1").setCenter(doubleToFloat(-0.1864),doubleToFloat(0.8190),doubleToFloat(0.0506))))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_2").setName("r_midcarpal_2").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_2").setName("r_carpometacarpal_2").setCenter(doubleToFloat(-0.1961),doubleToFloat(0.8055),doubleToFloat(-0.0218))
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_2").setName("r_metacarpophalangeal_2").setCenter(doubleToFloat(-0.1961),doubleToFloat(0.7846),doubleToFloat(-0.0218))
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2").setName("r_carpal_proximal_interphalangeal_2").setCenter(doubleToFloat(-0.1954),doubleToFloat(0.7393),doubleToFloat(-0.0185))
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_2").setName("r_carpal_distal_interphalangeal_2").setCenter(doubleToFloat(-0.1945),doubleToFloat(0.7169),doubleToFloat(-0.0173)))))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_3").setName("r_midcarpal_3").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_3").setName("r_carpometacarpal_3").setCenter(doubleToFloat(-0.1972),doubleToFloat(0.8060),doubleToFloat(-0.0468))
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_3").setName("r_metacarpophalangeal_3").setCenter(doubleToFloat(-0.1972),doubleToFloat(0.7849),doubleToFloat(-0.0468))
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3").setName("r_carpal_proximal_interphalangeal_3").setCenter(doubleToFloat(-0.1950),doubleToFloat(0.7304),doubleToFloat(-0.0441))
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_3").setName("r_carpal_distal_interphalangeal_3").setCenter(doubleToFloat(-0.1939),doubleToFloat(0.7042),doubleToFloat(-0.0432)))))))
                                                    .addChild(new HAnimJoint("hanim_r_midcarpal_4_5").setName("r_midcarpal_4_5").setCenter(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_4").setName("r_carpometacarpal_4").setCenter(doubleToFloat(-0.1951),doubleToFloat(0.8049),doubleToFloat(-0.0732))
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_4").setName("r_metacarpophalangeal_4").setCenter(doubleToFloat(-0.1951),doubleToFloat(0.7845),doubleToFloat(-0.0732))
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4").setName("r_carpal_proximal_interphalangeal_4").setCenter(doubleToFloat(-0.1920),doubleToFloat(0.7318),doubleToFloat(-0.0716))
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_4").setName("r_carpal_distal_interphalangeal_4").setCenter(doubleToFloat(-0.1908),doubleToFloat(0.7077),doubleToFloat(-0.0706))))))
                                                      .addChild(new HAnimJoint("hanim_r_carpometacarpal_5").setName("r_carpometacarpal_5").setCenter(doubleToFloat(-0.1926),doubleToFloat(0.8096),doubleToFloat(-0.0975))
                                                        .addChild(new HAnimJoint("hanim_r_metacarpophalangeal_5").setName("r_metacarpophalangeal_5").setCenter(doubleToFloat(-0.1926),doubleToFloat(0.7896),doubleToFloat(-0.0975))
                                                          .addChild(new HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5").setName("r_carpal_proximal_interphalangeal_5").setCenter(doubleToFloat(-0.1902),doubleToFloat(0.7483),doubleToFloat(-0.0963))
                                                            .addChild(new HAnimJoint("hanim_r_carpal_distal_interphalangeal_5").setName("r_carpal_distal_interphalangeal_5").setCenter(doubleToFloat(-0.1908),doubleToFloat(0.7540),doubleToFloat(-0.0960))))))))))))))))))))))))))))))
      .addJoints(new HAnimJoint().setUSE("hanim_humanoid_root"))
      .addJoints(new HAnimJoint().setUSE("hanim_sacroiliac"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_talocalcaneonavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_cuneonavicular_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_calcaneocuboid"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_transversetarsal"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsometatarsal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metatarsophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_tarsal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_hip"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_knee"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocrural"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_talocalcaneonavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_cuneonavicular_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_calcaneocuboid"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_transversetarsal"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsometatarsal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metatarsophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_tarsal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vl1"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt12"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt11"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt10"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt9"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt8"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt7"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt6"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vt1"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc7"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc6"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc5"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc4"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc3"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc2"))
      .addJoints(new HAnimJoint().setUSE("hanim_vc1"))
      .addJoints(new HAnimJoint().setUSE("hanim_skullbase"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyelid_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyelid_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyeball_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyeball_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_eyebrow_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_eyebrow_joint"))
      .addJoints(new HAnimJoint().setUSE("hanim_temporomandibular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_sternoclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_acromioclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_midcarpal_4_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpometacarpal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_metacarpophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_l_carpal_distal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_sternoclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_acromioclavicular"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_shoulder"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_elbow"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_radiocarpal"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_interphalangeal_1"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_2"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_3"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_midcarpal_4_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_4"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpometacarpal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_metacarpophalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_proximal_interphalangeal_5"))
      .addJoints(new HAnimJoint().setUSE("hanim_r_carpal_distal_interphalangeal_5"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JohnJoint model
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
		var testObject = new JohnJoint();
		print ("JohnJoint execution self-validation test results: " + testObject.validateSelf());
	}
}
new JohnJoint().main();
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
 <p> Related links: JohnJoint2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JohnJoint2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d">JohnJoint2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> An attempt at a standard LOA-4 skeleton </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> h2.pl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 Jan 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 November 2020 </td>
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

function JohnJoint2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
JohnJoint2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("JohnJoint2.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint2.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("An attempt at a standard LOA-4 skeleton"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("h2.pl"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("14 Jan 2023"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("9 November 2020"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Transform())
      .addComments(" DEF for markerfor XYZ axes ")
      .addChild((new autoclass.Shape("AxisLinesShape"))
        .addComments(" RGB lines showing XYZ axes ")
        .setGeometry((new autoclass.IndexedLineSet()).setColorPerVertex(false).setColorIndex(java.newArray("int", [0,1,2])).setCoordIndex(java.newArray("int", [0,1,-1,0,2,-1,0,3,-1]))
          .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1,0.0,0.0,0.0,0.1]))))
          .setColor((new autoclass.Color()).setColor(new autoclass.MFColor(java.newArray("float", [1.0,0.0,0.0,0.0,0.6,0.0,0.0,0.0,1.0])))))))
    .addChild((new autoclass.Group())
      .addComments(" DEFS for markers of skeleton joints, segments, and sites ")
      .addChild((new autoclass.Transform())
        .addComments(java.newArray("java.lang.String",["",
"  <Transform translation='0 2 0' scale='1 1 1'>",
"   <Shape DEF='HAnimRootShape'>",
"    <Sphere radius='0.02'  />",
"     <Appearance>",
"      <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/>",
"     </Appearance>",
"    </Shape>",
"  </Transform>"]))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.1,0.0)
          .addChild((new autoclass.Shape("HAnimJointShape"))
            .setGeometry((new autoclass.Sphere()).setRadius(0.02))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material("HAnimJointMaterial")).setDiffuseColor(0.0,0.0,0.8).setTransparency(0.3)))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,2.05,0.0)
          .addChild((new autoclass.Shape("HAnimSegmentLine"))
            .setGeometry((new autoclass.LineSet()).setVertexCount(java.newArray("int", [2]))
              .setColor((new autoclass.ColorRGBA("HAnimSegmentLineColorRGBA")).setColor(new autoclass.MFColorRGBA(java.newArray("float", [1.0,1.0,0.0,1.0,1.0,1.0,0.0,0.1]))))
              .setCoord((new autoclass.Coordinate()).setPoint(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.0,0.0,0.05,0.0,0.0])))))))
        .addComments(java.newArray("java.lang.String",["",
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
"  </Transform>"]))))
    .addChild((new autoclass.NavigationInfo()).setSpeed(1.5))
    .addChild((new autoclass.Viewpoint()).setDescription("default"))
    .addChild((new autoclass.HAnimHumanoid("hanim_HAnim")).setName("HAnim").setInfo(new autoclass.MFString("\"humanoidVersion=2.0\"")).setVersion("2.0")
      .addSkeleton((new autoclass.HAnimJoint("hanim_humanoid_root")).setName("humanoid_root").setCenter(0.0000,0.8240,0.0277).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
        .addChild((new autoclass.HAnimJoint("hanim_sacroiliac")).setName("sacroiliac").setCenter(0.0000,0.9149,0.0016).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimJoint("hanim_l_hip")).setName("l_hip").setCenter(0.0961,0.9124,-0.0001).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimJoint("hanim_l_knee")).setName("l_knee").setCenter(0.1040,0.4867,0.0308).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimJoint("hanim_l_talocrural")).setName("l_talocrural").setCenter(0.1101,0.0656,-0.0736).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimJoint("hanim_l_talocalcaneonavicular")).setName("l_talocalcaneonavicular").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimJoint("hanim_l_cuneonavicular_1")).setName("l_cuneonavicular_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_1")).setName("l_tarsometatarsal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_1")).setName("l_metatarsophalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_interphalangeal_1")).setName("l_tarsal_interphalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                  .addChild((new autoclass.HAnimJoint("hanim_l_cuneonavicular_2")).setName("l_cuneonavicular_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_2")).setName("l_tarsometatarsal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_2")).setName("l_metatarsophalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_2")).setName("l_tarsal_proximal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_distal_interphalangeal_2")).setName("l_tarsal_distal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_l_cuneonavicular_3")).setName("l_cuneonavicular_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_3")).setName("l_tarsometatarsal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_3")).setName("l_metatarsophalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_3")).setName("l_tarsal_proximal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_distal_interphalangeal_3")).setName("l_tarsal_distal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))
                .addChild((new autoclass.HAnimJoint("hanim_l_calcaneocuboid")).setName("l_calcaneocuboid").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimJoint("hanim_l_transversetarsal")).setName("l_transversetarsal").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_4")).setName("l_tarsometatarsal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_4")).setName("l_metatarsophalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_4")).setName("l_tarsal_proximal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_distal_interphalangeal_4")).setName("l_tarsal_distal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                    .addChild((new autoclass.HAnimJoint("hanim_l_tarsometatarsal_5")).setName("l_tarsometatarsal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_l_metatarsophalangeal_5")).setName("l_metatarsophalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_proximal_interphalangeal_5")).setName("l_tarsal_proximal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_l_tarsal_distal_interphalangeal_5")).setName("l_tarsal_distal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))))))
          .addChild((new autoclass.HAnimJoint("hanim_r_hip")).setName("r_hip").setCenter(-0.0950,0.9171,0.0029).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimJoint("hanim_r_knee")).setName("r_knee").setCenter(-0.0867,0.4913,0.0318).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimJoint("hanim_r_talocrural")).setName("r_talocrural").setCenter(-0.0801,0.0712,-0.0766).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimJoint("hanim_r_talocalcaneonavicular")).setName("r_talocalcaneonavicular").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_1")).setName("r_cuneonavicular_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_1")).setName("r_tarsometatarsal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_1")).setName("r_metatarsophalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_interphalangeal_1")).setName("r_tarsal_interphalangeal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_2")).setName("r_cuneonavicular_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_2")).setName("r_tarsometatarsal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_2")).setName("r_metatarsophalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_2")).setName("r_tarsal_proximal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_2")).setName("r_tarsal_distal_interphalangeal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                  .addChild((new autoclass.HAnimJoint("hanim_r_cuneonavicular_3")).setName("r_cuneonavicular_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_3")).setName("r_tarsometatarsal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_3")).setName("r_metatarsophalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_3")).setName("r_tarsal_proximal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_3")).setName("r_tarsal_distal_interphalangeal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))
                .addChild((new autoclass.HAnimJoint("hanim_r_calcaneocuboid")).setName("r_calcaneocuboid").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimJoint("hanim_r_transversetarsal")).setName("r_transversetarsal").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_4")).setName("r_tarsometatarsal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_4")).setName("r_metatarsophalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_4")).setName("r_tarsal_proximal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_4")).setName("r_tarsal_distal_interphalangeal_4").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                    .addChild((new autoclass.HAnimJoint("hanim_r_tarsometatarsal_5")).setName("r_tarsometatarsal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_r_metatarsophalangeal_5")).setName("r_metatarsophalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_proximal_interphalangeal_5")).setName("r_tarsal_proximal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_r_tarsal_distal_interphalangeal_5")).setName("r_tarsal_distal_interphalangeal_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))))))
        .addChild((new autoclass.HAnimJoint("hanim_vl5")).setName("vl5").setCenter(0.0028,1.0568,-0.0776).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
          .addChild((new autoclass.HAnimJoint("hanim_vl4")).setName("vl4").setCenter(0.0035,1.0925,-0.0787).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
            .addChild((new autoclass.HAnimJoint("hanim_vl3")).setName("vl3").setCenter(0.0041,1.1276,-0.0796).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
              .addChild((new autoclass.HAnimJoint("hanim_vl2")).setName("vl2").setCenter(0.0045,1.1546,-0.0800).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                .addChild((new autoclass.HAnimJoint("hanim_vl1")).setName("vl1").setCenter(0.0048,1.1912,-0.0805).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                  .addChild((new autoclass.HAnimJoint("hanim_vt12")).setName("vt12").setCenter(0.0051,1.2278,-0.0808).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                    .addChild((new autoclass.HAnimJoint("hanim_vt11")).setName("vt11").setCenter(0.0053,1.2679,-0.0810).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                      .addChild((new autoclass.HAnimJoint("hanim_vt10")).setName("vt10").setCenter(0.0056,1.2848,-0.0822).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                        .addChild((new autoclass.HAnimJoint("hanim_vt9")).setName("vt9").setCenter(0.0057,1.3126,-0.0838).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                          .addChild((new autoclass.HAnimJoint("hanim_vt8")).setName("vt8").setCenter(0.0057,1.3382,-0.0845).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                            .addChild((new autoclass.HAnimJoint("hanim_vt7")).setName("vt7").setCenter(0.0058,1.3625,-0.0833).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                              .addChild((new autoclass.HAnimJoint("hanim_vt6")).setName("vt6").setCenter(0.0059,1.3866,-0.0800).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                .addChild((new autoclass.HAnimJoint("hanim_vt5")).setName("vt5").setCenter(0.0060,1.4102,-0.0745).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                  .addChild((new autoclass.HAnimJoint("hanim_vt4")).setName("vt4").setCenter(0.0061,1.4320,-0.0675).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                    .addChild((new autoclass.HAnimJoint("hanim_vt3")).setName("vt3").setCenter(0.0062,1.4583,-0.0570).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                      .addChild((new autoclass.HAnimJoint("hanim_vt2")).setName("vt2").setCenter(0.0063,1.4761,-0.0484).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                        .addChild((new autoclass.HAnimJoint("hanim_vt1")).setName("vt1").setCenter(0.0065,1.4951,-0.0387).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                          .addChild((new autoclass.HAnimJoint("hanim_vc7")).setName("vc7").setCenter(0.0066,1.5132,-0.0301).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                            .addChild((new autoclass.HAnimJoint("hanim_vc6")).setName("vc6").setCenter(0.0066,1.5357,-0.0143).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.HAnimJoint("hanim_vc5")).setName("vc5").setCenter(0.0066,1.5520,-0.0082).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.HAnimJoint("hanim_vc4")).setName("vc4").setCenter(0.0066,1.5662,-0.0084).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.HAnimJoint("hanim_vc3")).setName("vc3").setCenter(0.0066,1.5800,-0.0103).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.HAnimJoint("hanim_vc2")).setName("vc2").setCenter(0.0066,1.5928,-0.0103).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_vc1")).setName("vc1").setCenter(0.0066,1.6144,-0.0034).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_skullbase")).setName("skullbase").setCenter(0.0044,1.6209,0.0236).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyelid_joint")).setName("l_eyelid_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyelid_joint")).setName("r_eyelid_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyeball_joint")).setName("l_eyeball_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyeball_joint")).setName("r_eyeball_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_eyebrow_joint")).setName("l_eyebrow_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_eyebrow_joint")).setName("r_eyebrow_joint").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))
                                                          .addChild((new autoclass.HAnimJoint("hanim_temporomandibular")).setName("temporomandibular").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))))))
                                          .addChild((new autoclass.HAnimJoint("hanim_l_sternoclavicular")).setName("l_sternoclavicular").setCenter(0.0820,1.4488,-0.0353).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                            .addChild((new autoclass.HAnimJoint("hanim_l_acromioclavicular")).setName("l_acromioclavicular").setCenter(0.0962,1.4269,-0.0424).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.HAnimJoint("hanim_l_shoulder")).setName("l_shoulder").setCenter(0.2029,1.4376,-0.0387).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.HAnimJoint("hanim_l_elbow")).setName("l_elbow").setCenter(0.2014,1.1357,-0.0682).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.HAnimJoint("hanim_l_radiocarpal")).setName("l_radiocarpal").setCenter(0.1984,0.8663,-0.0583).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_midcarpal_1")).setName("l_midcarpal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_carpometacarpal_1")).setName("l_carpometacarpal_1").setCenter(0.1924,0.8472,-0.0534).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_metacarpophalangeal_1")).setName("l_metacarpophalangeal_1").setCenter(0.1951,0.8226,0.0246).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_carpal_interphalangeal_1")).setName("l_carpal_interphalangeal_1").setCenter(0.1955,0.8159,0.0464).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_midcarpal_2")).setName("l_midcarpal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_carpometacarpal_2")).setName("l_carpometacarpal_2").setCenter(0.1983,0.8024,-0.0280).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_metacarpophalangeal_2")).setName("l_metacarpophalangeal_2").setCenter(0.1983,0.7815,-0.0280).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_carpal_proximal_interphalangeal_2")).setName("l_carpal_proximal_interphalangeal_2").setCenter(0.2017,0.7363,-0.0248).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_l_carpal_distal_interphalangeal_2")).setName("l_carpal_distal_interphalangeal_2").setCenter(0.2028,0.7139,-0.0236).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_midcarpal_3")).setName("l_midcarpal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_carpometacarpal_3")).setName("l_carpometacarpal_3").setCenter(0.1987,0.8029,-0.0530).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_metacarpophalangeal_3")).setName("l_metacarpophalangeal_3").setCenter(0.1987,0.7818,-0.0530).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_carpal_proximal_interphalangeal_3")).setName("l_carpal_proximal_interphalangeal_3").setCenter(0.2013,0.7273,-0.0503).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_l_carpal_distal_interphalangeal_3")).setName("l_carpal_distal_interphalangeal_3").setCenter(0.2026,0.7011,-0.0494).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_l_midcarpal_4_5")).setName("l_midcarpal_4_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_carpometacarpal_4")).setName("l_carpometacarpal_4").setCenter(0.1956,0.8019,-0.0794).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_metacarpophalangeal_4")).setName("l_metacarpophalangeal_4").setCenter(0.1956,0.7815,-0.0794).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_carpal_proximal_interphalangeal_4")).setName("l_carpal_proximal_interphalangeal_4").setCenter(0.1973,0.7287,-0.0777).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_l_carpal_distal_interphalangeal_4")).setName("l_carpal_distal_interphalangeal_4").setCenter(0.1983,0.7045,-0.0767).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                                                      .addChild((new autoclass.HAnimJoint("hanim_l_carpometacarpal_5")).setName("l_carpometacarpal_5").setCenter(0.1925,0.8066,-0.1036).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_l_metacarpophalangeal_5")).setName("l_metacarpophalangeal_5").setCenter(0.1925,0.7866,-0.1036).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_l_carpal_proximal_interphalangeal_5")).setName("l_carpal_proximal_interphalangeal_5").setCenter(0.1938,0.7452,-0.1024).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_l_carpal_distal_interphalangeal_5")).setName("l_carpal_distal_interphalangeal_5").setCenter(0.1948,0.7277,-0.1017).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))))))
                                          .addChild((new autoclass.HAnimJoint("hanim_r_sternoclavicular")).setName("r_sternoclavicular").setCenter(-0.0694,1.4600,-0.0330).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                            .addChild((new autoclass.HAnimJoint("hanim_r_acromioclavicular")).setName("r_acromioclavicular").setCenter(-0.0836,1.4281,-0.0401).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                              .addChild((new autoclass.HAnimJoint("hanim_r_shoulder")).setName("r_shoulder").setCenter(-0.1907,1.4407,-0.0325).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                .addChild((new autoclass.HAnimJoint("hanim_r_elbow")).setName("r_elbow").setCenter(-0.1949,1.1388,-0.0620).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                  .addChild((new autoclass.HAnimJoint("hanim_r_radiocarpal")).setName("r_radiocarpal").setCenter(-0.1959,0.8694,-0.0521).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_1")).setName("r_midcarpal_1").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_1")).setName("r_carpometacarpal_1").setCenter(-0.1899,0.8502,-0.0473).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_1")).setName("r_metacarpophalangeal_1").setCenter(-0.1874,0.8256,0.0306).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_carpal_interphalangeal_1")).setName("r_carpal_interphalangeal_1").setCenter(-0.1864,0.8190,0.0506).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_2")).setName("r_midcarpal_2").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_2")).setName("r_carpometacarpal_2").setCenter(-0.1961,0.8055,-0.0218).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_2")).setName("r_metacarpophalangeal_2").setCenter(-0.1961,0.7846,-0.0218).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_2")).setName("r_carpal_proximal_interphalangeal_2").setCenter(-0.1954,0.7393,-0.0185).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_2")).setName("r_carpal_distal_interphalangeal_2").setCenter(-0.1945,0.7169,-0.0173).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_3")).setName("r_midcarpal_3").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_3")).setName("r_carpometacarpal_3").setCenter(-0.1972,0.8060,-0.0468).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_3")).setName("r_metacarpophalangeal_3").setCenter(-0.1972,0.7849,-0.0468).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_3")).setName("r_carpal_proximal_interphalangeal_3").setCenter(-0.1950,0.7304,-0.0441).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_3")).setName("r_carpal_distal_interphalangeal_3").setCenter(-0.1939,0.7042,-0.0432).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))))))
                                                    .addChild((new autoclass.HAnimJoint("hanim_r_midcarpal_4_5")).setName("r_midcarpal_4_5").setCenter(0.0,1.0,0.0).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_4")).setName("r_carpometacarpal_4").setCenter(-0.1951,0.8049,-0.0732).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_4")).setName("r_metacarpophalangeal_4").setCenter(-0.1951,0.7845,-0.0732).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_4")).setName("r_carpal_proximal_interphalangeal_4").setCenter(-0.1920,0.7318,-0.0716).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_4")).setName("r_carpal_distal_interphalangeal_4").setCenter(-0.1908,0.7077,-0.0706).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))
                                                      .addChild((new autoclass.HAnimJoint("hanim_r_carpometacarpal_5")).setName("r_carpometacarpal_5").setCenter(-0.1926,0.8096,-0.0975).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                        .addChild((new autoclass.HAnimJoint("hanim_r_metacarpophalangeal_5")).setName("r_metacarpophalangeal_5").setCenter(-0.1926,0.7896,-0.0975).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                          .addChild((new autoclass.HAnimJoint("hanim_r_carpal_proximal_interphalangeal_5")).setName("r_carpal_proximal_interphalangeal_5").setCenter(-0.1902,0.7483,-0.0963).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))
                                                            .addChild((new autoclass.HAnimJoint("hanim_r_carpal_distal_interphalangeal_5")).setName("r_carpal_distal_interphalangeal_5").setCenter(-0.1908,0.7540,-0.0960).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0]))))))))))))))))))))))))))))))
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
      .addJoints((new autoclass.HAnimJoint()).setLlimit(java.newArray("float", [0.0,0.0,0.0])).setUlimit(java.newArray("float", [0.0,0.0,0.0])))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JohnJoint2 model
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
		var testObject = new JohnJoint2();
		console.log ("JohnJoint2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new JohnJoint2().main();
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
 * <p> Diving mask and snorkel tube. </p>
 <p> Related links: MaskAndSnorkel.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.MaskAndSnorkel&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d">MaskAndSnorkel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Diving mask and snorkel tube. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Etsuko Lippi </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> January 24, 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/../license.html">../license.html</a> </td>
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

	* @author Etsuko Lippi
 */

function MaskAndSnorkel
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
MaskAndSnorkel.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #14, 80 total numbers */
	this.IndexedFaceSet_6_14_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #14, 78 total numbers made up of 26 3-tuple values */
	this.Coordinate_7_14_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #25, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_25_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.00,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.00,0.013,-0.00494,-0.01196])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.00923,-0.00923,-0.01196,-0.00494,-0.013,-0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.00,0.013])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #30, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_30_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.00,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.00,0.013,-0.00494,-0.01196])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.00923,-0.00923,-0.01196,-0.00494,-0.013,-0.0,-0.01196,0.00494,-0.00923,0.00923,-0.00494,0.01196,0.00,0.013])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #35, 18 total numbers made up of 9 2-tuple values */
	this.Extrusion_8_35_crossSection = new autoclass.MFVec2f(java.newArray("float", [0.0,0.013,0.00494,0.01196,0.00923,0.00923,0.01196,0.00494,0.013,0.00,0.01196,-0.00494,0.00923,-0.00923,0.00494,-0.01196,0.00,0.013]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #42, 78 total numbers made up of 26 3-tuple values */
	this.Coordinate_7_42_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0])));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #48, 78 total numbers made up of 26 3-tuple values */
	this.Coordinate_7_48_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0])));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #54, 114 total numbers made up of 38 3-tuple values */
	this.Coordinate_7_54_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.04,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #60, 60 total numbers */
	this.IndexedFaceSet_6_60_coordIndex = new autoclass.MFInt32(java.newArray("int", [1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #60, 114 total numbers made up of 38 3-tuple values */
	this.Coordinate_7_60_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02])));

	/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #66, 36 total numbers */
	this.IndexedFaceSet_6_66_coordIndex = new autoclass.MFInt32(java.newArray("int", [3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #66, 144 total numbers made up of 48 3-tuple values */
	this.Coordinate_7_66_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.08,0.0,0.02,0.05,0.0,0.05,0.05,0.0,0.06,0.06,0.0,0.06,0.09,0.0,0.05,0.1,0.0,0.0,0.1,0.0,-0.05,0.1,0.0,-0.06,0.09,0.0,-0.06,0.06,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.05,0.05,0.0,-0.02,0.05,0.0,0.005,0.08,0.0,0.02,0.055,0.0,0.05,0.055,0.0,0.055,0.06,0.0,0.055,0.09,0.0,0.045,0.095,0.0,0.005,0.095,0.0,-0.005,0.08,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.02,0.055,0.0,-0.05,0.055,0.0,-0.055,0.06,0.0,-0.055,0.09,0.0,-0.045,0.095,0.0,-0.005,0.095,0.0,0.0,0.05,0.015,0.05,0.04,-0.03,0.06,0.05,-0.03,0.07,0.095,-0.03])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.055,0.11,-0.03,0.0,0.11,-0.02,-0.055,0.11,-0.03,-0.07,0.095,-0.03,-0.06,0.05,-0.03,-0.05,0.04,-0.03,-0.02,0.04,-0.02,0.02,0.04,-0.02,0.075,0.06,-0.135,0.075,0.09,-0.135])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.075,0.06,-0.135,-0.075,0.09,-0.135,0.06,0.09,-0.165,0.06,0.06,-0.165,-0.06,0.09,-0.165,-0.06,0.06,-0.165,0.0,0.09,-0.2,0.0,0.06,-0.175])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("MaskAndSnorkel.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Diving mask and snorkel tube."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Etsuko Lippi"))
    .addMeta((new autoclass.meta()).setName("created").setContent("January 24, 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/MaskAndSnorkel.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("MaskAndSnorkel.x3d"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.9]))))
    .addChild((new autoclass.Transform("maskAndSnorkel"))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("maskFrame"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("frameColor")).setDiffuseColor(0.0,0.0,0.0)))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(this.IndexedFaceSet_6_14_coordIndex)
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_14_point)))))
      .addChild((new autoclass.Transform("snorkelHoldRing")).setTranslation(0.075,0.075,-0.02)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setUSE("frameColor")))
          .setGeometry((new autoclass.Cylinder()).setHeight(0.003).setRadius(0.015))))
      .addChild((new autoclass.Group("snorkel"))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-0.02,0.0)
          .addChild((new autoclass.Transform()).setScale(0.9,0.9,0.9).setTranslation(0.035,-0.07,-0.02)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("snorkelTube")).setDiffuseColor(0.678,1.0,0.184).setTransparency(0.4)))
              .setGeometry((new autoclass.Extrusion()).setCrossSection(this.Extrusion_8_25_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [-0.01,-0.04,0.0,0.0,0.0,0.0,0.03,0.05,0.0,0.05,0.2,0.0,0.03,0.4,0.03]))))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,1.57).setScale(0.9,0.9,0.9).setTranslation(0.01,-0.04,-0.02)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("Mouthpiece")).setDiffuseColor(0.678,1.0,0.8).setTransparency(0.4)))
              .setGeometry((new autoclass.Extrusion()).setCrossSection(this.Extrusion_8_30_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [-0.01,-0.03,0.0,0.0,0.0,0.0,0.02,0.01,0.0]))))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,1.0,-0.85).setScale(0.9,0.9,0.9).setTranslation(0.005,-0.01,-0.02)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setUSE("Mouthpiece")))
              .setGeometry((new autoclass.Extrusion()).setCrossSection(this.Extrusion_8_35_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [-0.02,-0.03,0.0,-0.01,-0.03,0.0,0.0,-0.0175,0.0,0.0,-0.0135,0.0,-0.01,0.0,0.0,-0.02,0.0,0.0]))))))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("maskLensR"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("plastic")).setDiffuseColor(0.941,0.973,1.0).setTransparency(0.8)))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(java.newArray("int", [12,13,14,15,16,17,18,12,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_42_point)))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("maskLensL"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setUSE("plastic")))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(java.newArray("int", [19,20,21,22,23,24,25,19,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_48_point)))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("nose"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("plasticFit")).setDiffuseColor(0.678,1.0,0.184).setTransparency(0.7)))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(java.newArray("int", [0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1]))
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_54_point)))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("faceFit"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setUSE("plasticFit")))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(this.IndexedFaceSet_6_60_coordIndex)
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_60_point)))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Shape("belt"))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setUSE("plastic")))
          .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(1.45).setSolid(false).setCoordIndex(this.IndexedFaceSet_6_66_coordIndex)
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_66_point)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MaskAndSnorkel model
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
		var testObject = new MaskAndSnorkel();
		console.log ("MaskAndSnorkel execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new MaskAndSnorkel().main();
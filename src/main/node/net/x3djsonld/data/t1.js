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
 * <p> Example scene t1. </p>
 <p> Related links: t1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> tovrmlx3d, <a href="http://castle-engine.sourceforge.net/view3dscene.php#section_converting" target="_blank">http://castle-engine.sourceforge.net/view3dscene.php#section_converting</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> t1.wrl </td>
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

 */

function t1
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
t1.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #13, 15 total numbers made up of 5 3-tuple values */
	this.Coordinate_8_13_point = new autoclass.MFVec3f(java.newArray("float", [-0.34999999403953552,-0.34999999403953552,0.34999999403953552,0.34999999403953552,-0.34999999403953552,0.34999999403953552,0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,0.0,0.34999999403953552,0.0]));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #248, 54 total numbers */
	this.IndexedLineSet_5_248_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #248, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_248_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [430.0,0.019999999552965164,-335.0,435.79998779296875,0.10000000149011612,-335.29998779296875,430.0,0.019999999552965164,-335.0,434.60000610351563,0.10000000149011612,-338.60000610351563,430.0,0.019999999552965164,-335.0,432.70001220703125,0.10000000149011612,-336.60000610351563,430.0,0.019999999552965164,-335.0,434.70001220703125,0.10000000149011612,-336.89999389648438,429.89999389648438,0.019999999552965164,-360.29998779296875,474.70001220703125,0.10000000149011612,-318.79998779296875])))
	.append(new autoclass.MFVec3f(java.newArray("float", [429.89999389648438,0.019999999552965164,-360.29998779296875,485.60000610351563,0.10000000149011612,-309.0,429.89999389648438,0.019999999552965164,-360.29998779296875,434.79998779296875,0.10000000149011612,-371.5,454.0,0.019999999552965164,-361.29998779296875,457.39999389648438,0.10000000149011612,-359.60000610351563,454.0,0.019999999552965164,-361.29998779296875,454.20001220703125,0.10000000149011612,-358.60000610351563,454.0,0.019999999552965164,-361.29998779296875,450.60000610351563,0.10000000149011612,-358.60000610351563])))
	.append(new autoclass.MFVec3f(java.newArray("float", [458.89999389648438,0.019999999552965164,-304.29998779296875,473.5,0.10000000149011612,-287.5,458.89999389648438,0.019999999552965164,-304.29998779296875,458.0,0.10000000149011612,-304.5,491.60000610351563,0.019999999552965164,-335.70001220703125,491.39999389648438,0.10000000149011612,-336.79998779296875,491.60000610351563,0.019999999552965164,-335.70001220703125,496.89999389648438,0.10000000149011612,-368.89999389648438,467.0,0.019999999552965164,-243.89999389648438,477.10000610351563,0.10000000149011612,-260.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [467.0,0.019999999552965164,-243.89999389648438,459.0,0.10000000149011612,-236.39999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,469.5,0.10000000149011612,-249.80000305175781,458.70001220703125,0.019999999552965164,-262.70001220703125,456.70001220703125,0.10000000149011612,-261.79998779296875])));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #253, 54 total numbers */
	this.IndexedLineSet_5_253_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #253, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_253_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [400.0,0.019999999552965164,-385.0,400.60000610351563,0.10000000149011612,-392.89999389648438,400.0,0.019999999552965164,-385.0,416.70001220703125,0.10000000149011612,-383.39999389648438,430.0,0.019999999552965164,-335.0,438.29998779296875,0.10000000149011612,-338.60000610351563,430.0,0.019999999552965164,-335.0,434.79998779296875,0.10000000149011612,-336.0,430.0,0.019999999552965164,-335.0,437.60000610351563,0.10000000149011612,-332.60000610351563])))
	.append(new autoclass.MFVec3f(java.newArray("float", [430.0,0.019999999552965164,-335.0,436.29998779296875,0.10000000149011612,-333.39999389648438,430.0,0.019999999552965164,-335.0,435.20001220703125,0.10000000149011612,-336.79998779296875,430.0,0.019999999552965164,-335.0,432.5,0.10000000149011612,-332.5,429.89999389648438,0.019999999552965164,-360.29998779296875,436.10000610351563,0.10000000149011612,-334.89999389648438,429.89999389648438,0.019999999552965164,-360.29998779296875,440.5,0.10000000149011612,-355.5])))
	.append(new autoclass.MFVec3f(java.newArray("float", [429.89999389648438,0.019999999552965164,-360.29998779296875,436.29998779296875,0.10000000149011612,-371.70001220703125,429.89999389648438,0.019999999552965164,-360.29998779296875,431.20001220703125,0.10000000149011612,-361.20001220703125,457.10000610351563,0.019999999552965164,-300.79998779296875,456.79998779296875,0.10000000149011612,-302.60000610351563,457.10000610351563,0.019999999552965164,-300.79998779296875,453.29998779296875,0.10000000149011612,-318.60000610351563,442.39999389648438,0.019999999552965164,-314.5,444.60000610351563,0.10000000149011612,-313.70001220703125])))
	.append(new autoclass.MFVec3f(java.newArray("float", [442.39999389648438,0.019999999552965164,-314.5,440.60000610351563,0.10000000149011612,-310.39999389648438,467.0,0.019999999552965164,-243.89999389648438,474.70001220703125,0.10000000149011612,-259.10000610351563,457.39999389648438,0.019999999552965164,-262.70001220703125,466.89999389648438,0.10000000149011612,-243.80000305175781])));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #258, 30 total numbers made up of 10 3-tuple values */
	this.Coordinate_6_258_point = new autoclass.MFVec3f(java.newArray("float", [430.0,0.019999999552965164,-335.0,429.89999389648438,0.10000000149011612,-360.29998779296875,442.39999389648438,0.019999999552965164,-314.5,429.89999389648438,0.10000000149011612,-319.60000610351563,457.39999389648438,0.019999999552965164,-262.70001220703125,467.0,0.10000000149011612,-243.89999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,457.39999389648438,0.10000000149011612,-262.70001220703125,458.70001220703125,0.019999999552965164,-262.70001220703125,467.0,0.10000000149011612,-243.89999389648438]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
    .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [200.0,200.0,120.0])).setSpeed(3).setType("\"EXAMINE\" \"FLY\" \"WALK\""))
    .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
    .addChild((new autoclass.Viewpoint()).setDescription("looking North").setFieldOfView(0.78539812564849854).setOrientation(1.0,0.0,0.0,-0.69999998807907104).setPosition(0.0,60.0,110.0))
    .addChild((new autoclass.Viewpoint()).setDescription("looking East").setFieldOfView(0.78539812564849854).setOrientation(0.0,0.40000000596046448,0.0,-1.3999999761581421).setPosition(-140.0,30.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setFieldOfView(0.78539812564849854).setOrientation(1.0,0.0,0.0,-1.5700000524520874).setPosition(0.0,150.0,0.0))
    .addChild((new autoclass.ProtoDeclare()).setName("school")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.5,0.0,1.0).setTransparency(0.20000000298023224)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_13_point))))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("institute")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0).setTransparency(0.20000000298023224)))
            .setGeometry((new autoclass.Box()).setSize(0.69999998807907104,0.69999998807907104,0.69999998807907104)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("disart_org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry((new autoclass.Sphere()).setRadius(0.69999998807907104)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("posi").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0"))
        .addField((new autoclass.field()).setName("col").setType("SFColor").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(0.40000000596046448)
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry((new autoclass.Sphere()).setRadius(1.1000000238418579)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("l")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.60000002384185791 0"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("r")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.30000001192092896 1"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("n")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.20000000298023224"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("i")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.60000002384185791 0 0.60000002384185791"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.Transform()).setTranslation(-468.0,0.0,315.0)
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"t.wrl\"")))
      .addChild((new autoclass.Anchor()).setDescription("Derby Women's Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.29998779296875 0.10000000149011612 -335.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.10000000149011612 -385"))))
      .addChild((new autoclass.Anchor()).setDescription("Charlesworth Primary School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400.60000610351563 0.10000000149011612 -392.89999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Hope Valley College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("416.70001220703125 0.10000000149011612 -383.39999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("People Express").setUrl(new autoclass.MFString("\"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.89999389648438 0.10000000149011612 -319.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("QArts/Studios").setUrl(new autoclass.MFString("\"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.10000000149011612 -335"))))
      .addChild((new autoclass.Anchor()).setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new autoclass.MFString("\"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.79998779296875 0.10000000149011612 -335.29998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Park View Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("438.29998779296875 0.10000000149011612 -338.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("First Movement").setUrl(new autoclass.MFString("\"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.89999389648438 0.10000000149011612 -360.29998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new autoclass.MFString("\"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.60000610351563 0.10000000149011612 -338.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Beckett Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.79998779296875 0.10000000149011612 -336"))))
      .addChild((new autoclass.Anchor()).setDescription("Brackensdale Junior School, Communty Unit").setUrl(new autoclass.MFString("\"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.70001220703125 0.10000000149011612 -336.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Moorhead Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("437.60000610351563 0.10000000149011612 -332.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Derby Deaf Club").setUrl(new autoclass.MFString("\"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.70001220703125 0.10000000149011612 -336.89999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Nightingale Junior, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.29998779296875 0.10000000149011612 -333.39999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("St Mary's Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.20001220703125 0.10000000149011612 -336.79998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Griffe Field Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.5 0.10000000149011612 -332.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new autoclass.MFString("\"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.70001220703125 0.10000000149011612 -318.79998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Ivy House Special School, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.10000610351563 0.10000000149011612 -334.89999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Oakham Day Centre, Rutland").setUrl(new autoclass.MFString("\"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("485.60000610351563 0.10000000149011612 -309"))))
      .addChild((new autoclass.Anchor()).setDescription("Parkwood School, Alfreton").setUrl(new autoclass.MFString("\"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.5 0.10000000149011612 -355.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new autoclass.MFString("\"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.79998779296875 0.10000000149011612 -371.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Ashgate Croft School, Chesterfield").setUrl(new autoclass.MFString("\"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.29998779296875 0.10000000149011612 -371.70001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("Highfields School, Matlock").setUrl(new autoclass.MFString("\"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("431.20001220703125 0.10000000149011612 -361.20001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("City Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.89999389648438 0.10000000149011612 -341.29998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new autoclass.MFString("\"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.10000610351563 0.10000000149011612 -341.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Watering Seeds").setUrl(new autoclass.MFString("\"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.10000000149011612 -361.29998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Red oaks").setUrl(new autoclass.MFString("\"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.39999389648438 0.10000000149011612 -359.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("West Notts College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454.20001220703125 0.10000000149011612 -358.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Willow Wood Day Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("450.60000610351563 0.10000000149011612 -358.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Fased In The Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.10000000149011612 -350"))))
      .addChild((new autoclass.Anchor()).setDescription("27a Access Artspace").setUrl(new autoclass.MFString("\"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.89999389648438 0.10000000149011612 -304.29998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Roman Way Day Centre, Market Harborough").setUrl(new autoclass.MFString("\"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("473.5 0.10000000149011612 -287.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Mosaic, Leicester Disability Services").setUrl(new autoclass.MFString("\"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458 0.10000000149011612 -304.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Bamboozle Theatre Company").setUrl(new autoclass.MFString("\"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.10000610351563 0.10000000149011612 -300.79998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Ellesmere College, Leicester").setUrl(new autoclass.MFString("\"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.79998779296875 0.10000000149011612 -302.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Ashmount School, Loughborough").setUrl(new autoclass.MFString("\"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("453.29998779296875 0.10000000149011612 -318.60000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("Mantle Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.39999389648438 0.10000000149011612 -314.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Forrest Way School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("444.60000610351563 0.10000000149011612 -313.70001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("Ibstock Community College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.60000610351563 0.10000000149011612 -310.39999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Artlink East").setUrl(new autoclass.MFString("\"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.60000610351563 0.10000000149011612 -335.70001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new autoclass.MFString("\"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.39999389648438 0.10000000149011612 -336.79998779296875"))))
      .addChild((new autoclass.Anchor()).setDescription("Ancaster Day Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("496.89999389648438 0.10000000149011612 -368.89999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Creations").setUrl(new autoclass.MFString("\"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.10000000149011612 -243.89999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("Nene Day Centre, Northamtpon").setUrl(new autoclass.MFString("\"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("477.10000610351563 0.10000000149011612 -260"))))
      .addChild((new autoclass.Anchor()).setDescription("Delapre Middle School, Northampton").setUrl(new autoclass.MFString("\"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.70001220703125 0.10000000149011612 -259.10000610351563"))))
      .addChild((new autoclass.Anchor()).setDescription("The Links, Brackley").setUrl(new autoclass.MFString("\"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("459 0.10000000149011612 -236.39999389648438"))))
      .addChild((new autoclass.Anchor()).setDescription("New Perspectives").setUrl(new autoclass.MFString("\"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.39999389648438 0.10000000149011612 -262.70001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("UKan2").setUrl(new autoclass.MFString("\"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.70001220703125 0.10000000149011612 -262.70001220703125"))))
      .addChild((new autoclass.Anchor()).setDescription("Silverstone County Infants School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("466.89999389648438 0.10000000149011612 -243.80000305175781"))))
      .addChild((new autoclass.Anchor()).setDescription("Riverside Resource Centre, Towcester").setUrl(new autoclass.MFString("\"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("469.5 0.10000000149011612 -249.80000305175781"))))
      .addChild((new autoclass.Anchor()).setDescription("Daventry Tertiary College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.70001220703125 0.10000000149011612 -261.79998779296875"))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,0.0,0.0).setTransparency(0.20000000298023224)))
        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(this.IndexedLineSet_5_248_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_248_point))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(0.0,1.0,0.0).setTransparency(0.20000000298023224)))
        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(this.IndexedLineSet_5_253_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_253_point))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,0.0,1.0).setTransparency(0.20000000298023224)))
        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]))
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_258_point))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return t1 model
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
		var testObject = new t1();
		console.log ("t1 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t1().main();
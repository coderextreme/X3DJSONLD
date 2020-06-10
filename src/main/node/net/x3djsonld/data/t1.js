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
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
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
	this.Coordinate_8_13_point = new autoclass.MFVec3f(java.newArray("float", [-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0.0,0.349999994039536,0.0]));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #248, 54 total numbers */
	this.IndexedLineSet_5_248_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #248, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_248_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [430.0,0.0199999995529652,-335.0,435.799987792969,0.100000001490116,-335.299987792969,430.0,0.0199999995529652,-335.0,434.600006103516,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,432.700012207031,0.100000001490116,-336.600006103516,430.0,0.0199999995529652,-335.0,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969])))
	.append(new autoclass.MFVec3f(java.newArray("float", [429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309.0,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454.0,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454.0,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454.0,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516])))
	.append(new autoclass.MFVec3f(java.newArray("float", [458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458.0,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467.0,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [467.0,0.0199999995529652,-243.899993896484,459.0,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969])));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #253, 54 total numbers */
	this.IndexedLineSet_5_253_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #253, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_253_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [400.0,0.0199999995529652,-385.0,400.600006103516,0.100000001490116,-392.899993896484,400.0,0.0199999995529652,-385.0,416.700012207031,0.100000001490116,-383.399993896484,430.0,0.0199999995529652,-335.0,438.299987792969,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,434.799987792969,0.100000001490116,-336.0,430.0,0.0199999995529652,-335.0,437.600006103516,0.100000001490116,-332.600006103516])))
	.append(new autoclass.MFVec3f(java.newArray("float", [430.0,0.0199999995529652,-335.0,436.299987792969,0.100000001490116,-333.399993896484,430.0,0.0199999995529652,-335.0,435.200012207031,0.100000001490116,-336.799987792969,430.0,0.0199999995529652,-335.0,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5])))
	.append(new autoclass.MFVec3f(java.newArray("float", [429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031])))
	.append(new autoclass.MFVec3f(java.newArray("float", [442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467.0,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758])));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #258, 30 total numbers made up of 10 3-tuple values */
	this.Coordinate_6_258_point = new autoclass.MFVec3f(java.newArray("float", [430.0,0.0199999995529652,-335.0,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\" \"FLY\" \"WALK\"")).setAvatarSize(java.newArray("float", [200.0,200.0,120.0])).setSpeed(3))
    .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
    .addChild((new autoclass.Viewpoint()).setDescription("looking North").setPosition(0.0,60.0,110.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071))
    .addChild((new autoclass.Viewpoint()).setDescription("looking East").setPosition(-140.0,30.0,0.0).setOrientation(0.0,0.400000005960464,0.0,-1.39999997615814).setFieldOfView(0.785398125648499))
    .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setPosition(0.0,150.0,0.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-1.57000005245209))
    .addChild((new autoclass.ProtoDeclare()).setName("school")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(0.200000002980232).setDiffuseColor(0.5,0.0,1.0)))
            .setGeometry((new autoclass.IndexedFaceSet()).setCoordIndex(java.newArray("int", [0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]))
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_13_point))))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("institute")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(0.200000002980232).setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry((new autoclass.Box()).setSize(0.699999988079071,0.699999988079071,0.699999988079071)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("disart_org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry((new autoclass.Sphere()).setRadius(0.699999988079071)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("posi").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("col").setType("SFColor").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setTransparency(0.400000005960464)
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry((new autoclass.Sphere()).setRadius(1.10000002384186)))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("l")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance()).setName("org")
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.600000023841858 0"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("r")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance()).setName("org")
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("n")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance()).setName("org")
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.200000002980232"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("i")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance()).setName("org")
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.600000023841858 0 0.600000023841858"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.Transform()).setTranslation(-468.0,0.0,315.0)
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"t.wrl\"")))
      .addChild((new autoclass.Anchor()).setDescription("Derby Women's Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.299987792969 0.100000001490116 -335.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385"))))
      .addChild((new autoclass.Anchor()).setDescription("Charlesworth Primary School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400.600006103516 0.100000001490116 -392.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Hope Valley College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("416.700012207031 0.100000001490116 -383.399993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("People Express").setUrl(new autoclass.MFString("\"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("i")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("QArts/Studios").setUrl(new autoclass.MFString("\"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("i")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.100000001490116 -335"))))
      .addChild((new autoclass.Anchor()).setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new autoclass.MFString("\"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.799987792969 0.100000001490116 -335.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Park View Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("438.299987792969 0.100000001490116 -338.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("First Movement").setUrl(new autoclass.MFString("\"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("n")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new autoclass.MFString("\"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.600006103516 0.100000001490116 -338.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Beckett Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.799987792969 0.100000001490116 -336"))))
      .addChild((new autoclass.Anchor()).setDescription("Brackensdale Junior School, Communty Unit").setUrl(new autoclass.MFString("\"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.700012207031 0.100000001490116 -336.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Moorhead Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("437.600006103516 0.100000001490116 -332.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Derby Deaf Club").setUrl(new autoclass.MFString("\"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.700012207031 0.100000001490116 -336.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Nightingale Junior, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.299987792969 0.100000001490116 -333.399993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("St Mary's Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("435.200012207031 0.100000001490116 -336.799987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Griffe Field Primary, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("432.5 0.100000001490116 -332.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new autoclass.MFString("\"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.700012207031 0.100000001490116 -318.799987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Ivy House Special School, Derby").setUrl(new autoclass.MFString("\"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.100006103516 0.100000001490116 -334.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Oakham Day Centre, Rutland").setUrl(new autoclass.MFString("\"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("485.600006103516 0.100000001490116 -309"))))
      .addChild((new autoclass.Anchor()).setDescription("Parkwood School, Alfreton").setUrl(new autoclass.MFString("\"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.5 0.100000001490116 -355.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new autoclass.MFString("\"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("434.799987792969 0.100000001490116 -371.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Ashgate Croft School, Chesterfield").setUrl(new autoclass.MFString("\"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("436.299987792969 0.100000001490116 -371.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("Highfields School, Matlock").setUrl(new autoclass.MFString("\"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("431.200012207031 0.100000001490116 -361.200012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("City Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("i")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new autoclass.MFString("\"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Watering Seeds").setUrl(new autoclass.MFString("\"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.100000001490116 -361.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Red oaks").setUrl(new autoclass.MFString("\"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -359.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("West Notts College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454.200012207031 0.100000001490116 -358.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Willow Wood Day Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("450.600006103516 0.100000001490116 -358.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Fased In The Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.100000001490116 -350"))))
      .addChild((new autoclass.Anchor()).setDescription("27a Access Artspace").setUrl(new autoclass.MFString("\"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("n")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Roman Way Day Centre, Market Harborough").setUrl(new autoclass.MFString("\"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("473.5 0.100000001490116 -287.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Mosaic, Leicester Disability Services").setUrl(new autoclass.MFString("\"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458 0.100000001490116 -304.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Bamboozle Theatre Company").setUrl(new autoclass.MFString("\"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Ellesmere College, Leicester").setUrl(new autoclass.MFString("\"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.799987792969 0.100000001490116 -302.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Ashmount School, Loughborough").setUrl(new autoclass.MFString("\"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("453.299987792969 0.100000001490116 -318.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("Mantle Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Forrest Way School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("444.600006103516 0.100000001490116 -313.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("Ibstock Community College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440.600006103516 0.100000001490116 -310.399993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Artlink East").setUrl(new autoclass.MFString("\"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new autoclass.MFString("\"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.399993896484 0.100000001490116 -336.799987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Ancaster Day Centre").setUrl(new autoclass.MFString("\"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("496.899993896484 0.100000001490116 -368.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Creations").setUrl(new autoclass.MFString("\"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.100000001490116 -243.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("Nene Day Centre, Northamtpon").setUrl(new autoclass.MFString("\"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("477.100006103516 0.100000001490116 -260"))))
      .addChild((new autoclass.Anchor()).setDescription("Delapre Middle School, Northampton").setUrl(new autoclass.MFString("\"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("474.700012207031 0.100000001490116 -259.100006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("The Links, Brackley").setUrl(new autoclass.MFString("\"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("459 0.100000001490116 -236.399993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("New Perspectives").setUrl(new autoclass.MFString("\"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("n")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("UKan2").setUrl(new autoclass.MFString("\"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("r")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("Silverstone County Infants School").setUrl(new autoclass.MFString("\"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("466.899993896484 0.100000001490116 -243.800003051758"))))
      .addChild((new autoclass.Anchor()).setDescription("Riverside Resource Centre, Towcester").setUrl(new autoclass.MFString("\"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("institute")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("469.5 0.100000001490116 -249.800003051758"))))
      .addChild((new autoclass.Anchor()).setDescription("Daventry Tertiary College").setUrl(new autoclass.MFString("\"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance()).setName("school")
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.700012207031 0.100000001490116 -261.799987792969"))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setTransparency(0.200000002980232).setEmissiveColor(1.0,0.0,0.0)))
        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(this.IndexedLineSet_5_248_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_248_point))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(0.0,1.0,0.0).setTransparency(0.200000002980232)))
        .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(this.IndexedLineSet_5_253_coordIndex)
          .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_6_253_point))))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setTransparency(0.200000002980232).setEmissiveColor(1.0,0.0,1.0)))
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
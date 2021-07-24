load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
	this.Coordinate_8_13_point = new MFVec3fObject(Java.to([-0.34999999403953552,-0.34999999403953552,0.34999999403953552,0.34999999403953552,-0.34999999403953552,0.34999999403953552,0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,-0.34999999403953552,0.0,0.34999999403953552,0.0], Java.type("float[]")));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #248, 54 total numbers */
	this.IndexedLineSet_5_248_coordIndex = new MFInt32Object(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #248, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_248_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([430.0,0.019999999552965164,-335.0,435.79998779296875,0.10000000149011612,-335.29998779296875,430.0,0.019999999552965164,-335.0,434.60000610351563,0.10000000149011612,-338.60000610351563,430.0,0.019999999552965164,-335.0,432.70001220703125,0.10000000149011612,-336.60000610351563,430.0,0.019999999552965164,-335.0,434.70001220703125,0.10000000149011612,-336.89999389648438,429.89999389648438,0.019999999552965164,-360.29998779296875,474.70001220703125,0.10000000149011612,-318.79998779296875], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([429.89999389648438,0.019999999552965164,-360.29998779296875,485.60000610351563,0.10000000149011612,-309.0,429.89999389648438,0.019999999552965164,-360.29998779296875,434.79998779296875,0.10000000149011612,-371.5,454.0,0.019999999552965164,-361.29998779296875,457.39999389648438,0.10000000149011612,-359.60000610351563,454.0,0.019999999552965164,-361.29998779296875,454.20001220703125,0.10000000149011612,-358.60000610351563,454.0,0.019999999552965164,-361.29998779296875,450.60000610351563,0.10000000149011612,-358.60000610351563], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([458.89999389648438,0.019999999552965164,-304.29998779296875,473.5,0.10000000149011612,-287.5,458.89999389648438,0.019999999552965164,-304.29998779296875,458.0,0.10000000149011612,-304.5,491.60000610351563,0.019999999552965164,-335.70001220703125,491.39999389648438,0.10000000149011612,-336.79998779296875,491.60000610351563,0.019999999552965164,-335.70001220703125,496.89999389648438,0.10000000149011612,-368.89999389648438,467.0,0.019999999552965164,-243.89999389648438,477.10000610351563,0.10000000149011612,-260.0], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([467.0,0.019999999552965164,-243.89999389648438,459.0,0.10000000149011612,-236.39999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,469.5,0.10000000149011612,-249.80000305175781,458.70001220703125,0.019999999552965164,-262.70001220703125,456.70001220703125,0.10000000149011612,-261.79998779296875], Java.type("float[]"))));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #253, 54 total numbers */
	this.IndexedLineSet_5_253_coordIndex = new MFInt32Object(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #253, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_253_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(Java.to([400.0,0.019999999552965164,-385.0,400.60000610351563,0.10000000149011612,-392.89999389648438,400.0,0.019999999552965164,-385.0,416.70001220703125,0.10000000149011612,-383.39999389648438,430.0,0.019999999552965164,-335.0,438.29998779296875,0.10000000149011612,-338.60000610351563,430.0,0.019999999552965164,-335.0,434.79998779296875,0.10000000149011612,-336.0,430.0,0.019999999552965164,-335.0,437.60000610351563,0.10000000149011612,-332.60000610351563], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([430.0,0.019999999552965164,-335.0,436.29998779296875,0.10000000149011612,-333.39999389648438,430.0,0.019999999552965164,-335.0,435.20001220703125,0.10000000149011612,-336.79998779296875,430.0,0.019999999552965164,-335.0,432.5,0.10000000149011612,-332.5,429.89999389648438,0.019999999552965164,-360.29998779296875,436.10000610351563,0.10000000149011612,-334.89999389648438,429.89999389648438,0.019999999552965164,-360.29998779296875,440.5,0.10000000149011612,-355.5], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([429.89999389648438,0.019999999552965164,-360.29998779296875,436.29998779296875,0.10000000149011612,-371.70001220703125,429.89999389648438,0.019999999552965164,-360.29998779296875,431.20001220703125,0.10000000149011612,-361.20001220703125,457.10000610351563,0.019999999552965164,-300.79998779296875,456.79998779296875,0.10000000149011612,-302.60000610351563,457.10000610351563,0.019999999552965164,-300.79998779296875,453.29998779296875,0.10000000149011612,-318.60000610351563,442.39999389648438,0.019999999552965164,-314.5,444.60000610351563,0.10000000149011612,-313.70001220703125], Java.type("float[]"))))
	.append(new MFVec3fObject(Java.to([442.39999389648438,0.019999999552965164,-314.5,440.60000610351563,0.10000000149011612,-310.39999389648438,467.0,0.019999999552965164,-243.89999389648438,474.70001220703125,0.10000000149011612,-259.10000610351563,457.39999389648438,0.019999999552965164,-262.70001220703125,466.89999389648438,0.10000000149011612,-243.80000305175781], Java.type("float[]"))));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #258, 30 total numbers made up of 10 3-tuple values */
	this.Coordinate_6_258_point = new MFVec3fObject(Java.to([430.0,0.019999999552965164,-335.0,429.89999389648438,0.10000000149011612,-360.29998779296875,442.39999389648438,0.019999999552965164,-314.5,429.89999389648438,0.10000000149011612,-319.60000610351563,457.39999389648438,0.019999999552965164,-262.70001220703125,467.0,0.10000000149011612,-243.89999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,457.39999389648438,0.10000000149011612,-262.70001220703125,458.70001220703125,0.019999999552965164,-262.70001220703125,467.0,0.10000000149011612,-243.89999389648438], Java.type("float[]")));
  this.x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
    .addMeta(new metaObject().setName("source").setContent("t1.wrl")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\" \"FLY\" \"WALK\"")).setAvatarSize(Java.to([200.0,200.0,120.0], Java.type("float[]"))).setSpeed(3))
    .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
    .addChild(new ViewpointObject().setDescription("looking North").setPosition(0.0,60.0,110.0).setFieldOfView(0.78539812564849854).setOrientation(1.0,0.0,0.0,-0.69999998807907104))
    .addChild(new ViewpointObject().setDescription("looking East").setPosition(-140.0,30.0,0.0).setOrientation(0.0,0.40000000596046448,0.0,-1.3999999761581421).setFieldOfView(0.78539812564849854))
    .addChild(new ViewpointObject().setDescription("Overhead").setPosition(0.0,150.0,0.0).setFieldOfView(0.78539812564849854).setOrientation(1.0,0.0,0.0,-1.5700000524520874))
    .addChild(new ProtoDeclareObject().setName("school")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.20000000298023224).setDiffuseColor(0.5,0.0,1.0)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(Java.to([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1], Java.type("int[]")))
              .setCoord(new CoordinateObject().setPoint(this.Coordinate_8_13_point))))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("institute")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.20000000298023224).setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry(new BoxObject().setSize(0.69999998807907104,0.69999998807907104,0.69999998807907104)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("disart_org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry(new SphereObject().setRadius(0.69999998807907104)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("posi").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("col").setType("SFColor").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.40000000596046448)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new SphereObject().setRadius(1.1000000238418579)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclareObject().setName("l")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject().setName("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.60000002384185791 0"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("r")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject().setName("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.30000001192092896 1"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("n")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject().setName("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue("1 0 0.20000000298023224"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclareObject().setName("i")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject().setName("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue("0.60000002384185791 0 0.60000002384185791"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new TransformObject().setTranslation(-468.0,0.0,315.0)
      .addChild(new InlineObject().setUrl(new MFStringObject("\"t.wrl\"")))
      .addChild(new AnchorObject().setDescription("Derby Women's Centre").setUrl(new MFStringObject("\"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("435.29998779296875 0.10000000149011612 -335.60000610351563"))))
      .addChild(new AnchorObject().setDescription("High Peak Community Arts").setUrl(new MFStringObject("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("400 0.10000000149011612 -385"))))
      .addChild(new AnchorObject().setDescription("Charlesworth Primary School").setUrl(new MFStringObject("\"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("400.60000610351563 0.10000000149011612 -392.89999389648438"))))
      .addChild(new AnchorObject().setDescription("Hope Valley College").setUrl(new MFStringObject("\"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("416.70001220703125 0.10000000149011612 -383.39999389648438"))))
      .addChild(new AnchorObject().setDescription("People Express").setUrl(new MFStringObject("\"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("429.89999389648438 0.10000000149011612 -319.60000610351563"))))
      .addChild(new AnchorObject().setDescription("QArts/Studios").setUrl(new MFStringObject("\"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("430 0.10000000149011612 -335"))))
      .addChild(new AnchorObject().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new MFStringObject("\"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("435.79998779296875 0.10000000149011612 -335.29998779296875"))))
      .addChild(new AnchorObject().setDescription("Park View Primary, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("438.29998779296875 0.10000000149011612 -338.60000610351563"))))
      .addChild(new AnchorObject().setDescription("First Movement").setUrl(new MFStringObject("\"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("429.89999389648438 0.10000000149011612 -360.29998779296875"))))
      .addChild(new AnchorObject().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new MFStringObject("\"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("434.60000610351563 0.10000000149011612 -338.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Beckett Primary, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("434.79998779296875 0.10000000149011612 -336"))))
      .addChild(new AnchorObject().setDescription("Brackensdale Junior School, Communty Unit").setUrl(new MFStringObject("\"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("432.70001220703125 0.10000000149011612 -336.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Moorhead Primary, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("437.60000610351563 0.10000000149011612 -332.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Derby Deaf Club").setUrl(new MFStringObject("\"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("434.70001220703125 0.10000000149011612 -336.89999389648438"))))
      .addChild(new AnchorObject().setDescription("Nightingale Junior, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("436.29998779296875 0.10000000149011612 -333.39999389648438"))))
      .addChild(new AnchorObject().setDescription("St Mary's Primary, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("435.20001220703125 0.10000000149011612 -336.79998779296875"))))
      .addChild(new AnchorObject().setDescription("Griffe Field Primary, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("432.5 0.10000000149011612 -332.5"))))
      .addChild(new AnchorObject().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new MFStringObject("\"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("474.70001220703125 0.10000000149011612 -318.79998779296875"))))
      .addChild(new AnchorObject().setDescription("Ivy House Special School, Derby").setUrl(new MFStringObject("\"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("436.10000610351563 0.10000000149011612 -334.89999389648438"))))
      .addChild(new AnchorObject().setDescription("Oakham Day Centre, Rutland").setUrl(new MFStringObject("\"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("485.60000610351563 0.10000000149011612 -309"))))
      .addChild(new AnchorObject().setDescription("Parkwood School, Alfreton").setUrl(new MFStringObject("\"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("440.5 0.10000000149011612 -355.5"))))
      .addChild(new AnchorObject().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new MFStringObject("\"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("434.79998779296875 0.10000000149011612 -371.5"))))
      .addChild(new AnchorObject().setDescription("Ashgate Croft School, Chesterfield").setUrl(new MFStringObject("\"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("436.29998779296875 0.10000000149011612 -371.70001220703125"))))
      .addChild(new AnchorObject().setDescription("Highfields School, Matlock").setUrl(new MFStringObject("\"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("431.20001220703125 0.10000000149011612 -361.20001220703125"))))
      .addChild(new AnchorObject().setDescription("City Arts").setUrl(new MFStringObject("\"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("i")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("455.89999389648438 0.10000000149011612 -341.29998779296875"))))
      .addChild(new AnchorObject().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new MFStringObject("\"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("456.10000610351563 0.10000000149011612 -341.5"))))
      .addChild(new AnchorObject().setDescription("Watering Seeds").setUrl(new MFStringObject("\"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("454 0.10000000149011612 -361.29998779296875"))))
      .addChild(new AnchorObject().setDescription("Red oaks").setUrl(new MFStringObject("\"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("457.39999389648438 0.10000000149011612 -359.60000610351563"))))
      .addChild(new AnchorObject().setDescription("West Notts College").setUrl(new MFStringObject("\"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("454.20001220703125 0.10000000149011612 -358.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Willow Wood Day Centre").setUrl(new MFStringObject("\"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("450.60000610351563 0.10000000149011612 -358.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Fased In The Arts").setUrl(new MFStringObject("\"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("440 0.10000000149011612 -350"))))
      .addChild(new AnchorObject().setDescription("27a Access Artspace").setUrl(new MFStringObject("\"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("458.89999389648438 0.10000000149011612 -304.29998779296875"))))
      .addChild(new AnchorObject().setDescription("Roman Way Day Centre, Market Harborough").setUrl(new MFStringObject("\"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("473.5 0.10000000149011612 -287.5"))))
      .addChild(new AnchorObject().setDescription("Mosaic, Leicester Disability Services").setUrl(new MFStringObject("\"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("458 0.10000000149011612 -304.5"))))
      .addChild(new AnchorObject().setDescription("Bamboozle Theatre Company").setUrl(new MFStringObject("\"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("457.10000610351563 0.10000000149011612 -300.79998779296875"))))
      .addChild(new AnchorObject().setDescription("Ellesmere College, Leicester").setUrl(new MFStringObject("\"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("456.79998779296875 0.10000000149011612 -302.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Ashmount School, Loughborough").setUrl(new MFStringObject("\"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("453.29998779296875 0.10000000149011612 -318.60000610351563"))))
      .addChild(new AnchorObject().setDescription("Mantle Community Arts").setUrl(new MFStringObject("\"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("442.39999389648438 0.10000000149011612 -314.5"))))
      .addChild(new AnchorObject().setDescription("Forrest Way School").setUrl(new MFStringObject("\"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("444.60000610351563 0.10000000149011612 -313.70001220703125"))))
      .addChild(new AnchorObject().setDescription("Ibstock Community College").setUrl(new MFStringObject("\"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("440.60000610351563 0.10000000149011612 -310.39999389648438"))))
      .addChild(new AnchorObject().setDescription("Artlink East").setUrl(new MFStringObject("\"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("491.60000610351563 0.10000000149011612 -335.70001220703125"))))
      .addChild(new AnchorObject().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new MFStringObject("\"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("491.39999389648438 0.10000000149011612 -336.79998779296875"))))
      .addChild(new AnchorObject().setDescription("Ancaster Day Centre").setUrl(new MFStringObject("\"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("496.89999389648438 0.10000000149011612 -368.89999389648438"))))
      .addChild(new AnchorObject().setDescription("Creations").setUrl(new MFStringObject("\"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("467 0.10000000149011612 -243.89999389648438"))))
      .addChild(new AnchorObject().setDescription("Nene Day Centre, Northamtpon").setUrl(new MFStringObject("\"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("477.10000610351563 0.10000000149011612 -260"))))
      .addChild(new AnchorObject().setDescription("Delapre Middle School, Northampton").setUrl(new MFStringObject("\"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("474.70001220703125 0.10000000149011612 -259.10000610351563"))))
      .addChild(new AnchorObject().setDescription("The Links, Brackley").setUrl(new MFStringObject("\"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("459 0.10000000149011612 -236.39999389648438"))))
      .addChild(new AnchorObject().setDescription("New Perspectives").setUrl(new MFStringObject("\"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("n")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("457.39999389648438 0.10000000149011612 -262.70001220703125"))))
      .addChild(new AnchorObject().setDescription("UKan2").setUrl(new MFStringObject("\"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("r")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("458.70001220703125 0.10000000149011612 -262.70001220703125"))))
      .addChild(new AnchorObject().setDescription("Silverstone County Infants School").setUrl(new MFStringObject("\"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("466.89999389648438 0.10000000149011612 -243.80000305175781"))))
      .addChild(new AnchorObject().setDescription("Riverside Resource Centre, Towcester").setUrl(new MFStringObject("\"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("institute")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("469.5 0.10000000149011612 -249.80000305175781"))))
      .addChild(new AnchorObject().setDescription("Daventry Tertiary College").setUrl(new MFStringObject("\"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstanceObject().setName("school")
          .addFieldValue(new fieldValueObject().setName("pos").setValue("456.70001220703125 0.10000000149011612 -261.79998779296875"))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.20000000298023224).setEmissiveColor(1.0,0.0,0.0)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(this.IndexedLineSet_5_248_coordIndex)
          .setCoord(new CoordinateObject().setPoint(this.Coordinate_6_248_point))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setEmissiveColor(0.0,1.0,0.0).setTransparency(0.20000000298023224)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(this.IndexedLineSet_5_253_coordIndex)
          .setCoord(new CoordinateObject().setPoint(this.Coordinate_6_253_point))))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setTransparency(0.20000000298023224).setEmissiveColor(1.0,0.0,1.0)))
        .setGeometry(new IndexedLineSetObject().setCoordIndex(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1], Java.type("int[]")))
          .setCoord(new CoordinateObject().setPoint(this.Coordinate_6_258_point))))));
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
		var testObject = new t1();
		print ("t1 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t1().main();
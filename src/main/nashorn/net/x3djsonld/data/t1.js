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

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #14, 15 total numbers made up of 5 3-tuple values */
	this.Coordinate_8_14_point = new MFVec3f(Java.to([-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0.0,0.349999994039536,0.0], Java.type("float[]")));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #249, 54 total numbers */
	this.IndexedLineSet_5_249_coordIndex = new MFInt32(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #249, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_249_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([430.0,0.0199999995529652,-335.0,435.799987792969,0.100000001490116,-335.299987792969,430.0,0.0199999995529652,-335.0,434.600006103516,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,432.700012207031,0.100000001490116,-336.600006103516,430.0,0.0199999995529652,-335.0,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309.0,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454.0,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454.0,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454.0,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458.0,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467.0,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260.0], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([467.0,0.0199999995529652,-243.899993896484,459.0,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969], Java.type("float[]"))));

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=5, element #254, 54 total numbers */
	this.IndexedLineSet_5_254_coordIndex = new MFInt32(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #254, 108 total numbers made up of 36 3-tuple values */
	this.Coordinate_6_254_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([400.0,0.0199999995529652,-385.0,400.600006103516,0.100000001490116,-392.899993896484,400.0,0.0199999995529652,-385.0,416.700012207031,0.100000001490116,-383.399993896484,430.0,0.0199999995529652,-335.0,438.299987792969,0.100000001490116,-338.600006103516,430.0,0.0199999995529652,-335.0,434.799987792969,0.100000001490116,-336.0,430.0,0.0199999995529652,-335.0,437.600006103516,0.100000001490116,-332.600006103516], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([430.0,0.0199999995529652,-335.0,436.299987792969,0.100000001490116,-333.399993896484,430.0,0.0199999995529652,-335.0,435.200012207031,0.100000001490116,-336.799987792969,430.0,0.0199999995529652,-335.0,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467.0,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758], Java.type("float[]"))));

	/** Large attribute array: Coordinate point field, scene-graph level=6, element #259, 30 total numbers made up of 10 3-tuple values */
	this.Coordinate_6_259_point = new MFVec3f(Java.to([430.0,0.0199999995529652,-335.0,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467.0,0.100000001490116,-243.899993896484], Java.type("float[]")));
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.0")
  .setHead(new head()
    .addComponent(new component().setName("Networking").setLevel(2))
    .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new meta().setName("source").setContent("t1.wrl")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType(new MFString("\"EXAMINE\" \"FLY\" \"WALK\"")).setAvatarSize(Java.to([200.0,200.0,120.0], Java.type("float[]"))).setSpeed(3))
    .addChild(new WorldInfo().setTitle("Arts Mapper"))
    .addChild(new Viewpoint().setDescription("looking North").setPosition(0.0,60.0,110.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071))
    .addChild(new Viewpoint().setDescription("looking East").setPosition(-140.0,30.0,0.0).setOrientation(0.0,0.400000005960464,0.0,-1.39999997615814).setFieldOfView(0.785398125648499))
    .addChild(new Viewpoint().setDescription("Overhead").setPosition(0.0,150.0,0.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-1.57000005245209))
    .addChild(new ProtoDeclare().setName("school")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.200000002980232).setDiffuseColor(0.5,0.0,1.0)))
            .setGeometry(new IndexedFaceSet().setCoordIndex(Java.to([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1], Java.type("int[]")))
              .setCoord(new Coordinate().setPoint(this.Coordinate_8_14_point))))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("institute")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.200000002980232).setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry(new Box().setSize(0.699999988079071,0.699999988079071,0.699999988079071)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("disart_org")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
            .setGeometry(new Sphere().setRadius(0.699999988079071)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("org")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("posi").setType("SFVec3f").setValue("0 0 0"))
        .addField(new field().setAccessType("initializeOnly").setName("col").setType("SFColor").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(0.400000005960464)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new Sphere().setRadius(1.10000002384186)))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclare().setName("l")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance().setName("org")
          .addFieldValue(new fieldValue().setName("col").setValue("0 0.600000023841858 0"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("r")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance().setName("org")
          .addFieldValue(new fieldValue().setName("col").setValue("0 0.300000011920929 1"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("n")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance().setName("org")
          .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.200000002980232"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new ProtoDeclare().setName("i")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new ProtoInstance().setName("org")
          .addFieldValue(new fieldValue().setName("col").setValue("0.600000023841858 0 0.600000023841858"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new Transform().setTranslation(-468.0,0.0,315.0)
      .addChild(new Inline().setUrl(new MFString("\"t.wrl\"")))
      .addChild(new Anchor().setDescription("Derby Women's Centre").setUrl(new MFString("\"javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("435.299987792969 0.100000001490116 -335.600006103516"))))
      .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(new MFString("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("400 0.100000001490116 -385"))))
      .addChild(new Anchor().setDescription("Charlesworth Primary School").setUrl(new MFString("\"javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("400.600006103516 0.100000001490116 -392.899993896484"))))
      .addChild(new Anchor().setDescription("Hope Valley College").setUrl(new MFString("\"javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("416.700012207031 0.100000001490116 -383.399993896484"))))
      .addChild(new Anchor().setDescription("People Express").setUrl(new MFString("\"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("i")
          .addFieldValue(new fieldValue().setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"))))
      .addChild(new Anchor().setDescription("QArts/Studios").setUrl(new MFString("\"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("i")
          .addFieldValue(new fieldValue().setName("pos").setValue("430 0.100000001490116 -335"))))
      .addChild(new Anchor().setDescription("Stroke Unit, Derbyshire Royal Infirmary").setUrl(new MFString("\"javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("435.799987792969 0.100000001490116 -335.299987792969"))))
      .addChild(new Anchor().setDescription("Park View Primary, Derby").setUrl(new MFString("\"javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("438.299987792969 0.100000001490116 -338.600006103516"))))
      .addChild(new Anchor().setDescription("First Movement").setUrl(new MFString("\"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("n")
          .addFieldValue(new fieldValue().setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"))))
      .addChild(new Anchor().setDescription("St. Benedict R.C. School, Visual Impairment Unit").setUrl(new MFString("\"javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("434.600006103516 0.100000001490116 -338.600006103516"))))
      .addChild(new Anchor().setDescription("Beckett Primary, Derby").setUrl(new MFString("\"javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("434.799987792969 0.100000001490116 -336"))))
      .addChild(new Anchor().setDescription("Brackensdale Junior School, Communty Unit").setUrl(new MFString("\"javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("432.700012207031 0.100000001490116 -336.600006103516"))))
      .addChild(new Anchor().setDescription("Moorhead Primary, Derby").setUrl(new MFString("\"javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("437.600006103516 0.100000001490116 -332.600006103516"))))
      .addChild(new Anchor().setDescription("Derby Deaf Club").setUrl(new MFString("\"javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("434.700012207031 0.100000001490116 -336.899993896484"))))
      .addChild(new Anchor().setDescription("Nightingale Junior, Derby").setUrl(new MFString("\"javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("436.299987792969 0.100000001490116 -333.399993896484"))))
      .addChild(new Anchor().setDescription("St Mary's Primary, Derby").setUrl(new MFString("\"javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("435.200012207031 0.100000001490116 -336.799987792969"))))
      .addChild(new Anchor().setDescription("Griffe Field Primary, Derby").setUrl(new MFString("\"javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("432.5 0.100000001490116 -332.5"))))
      .addChild(new Anchor().setDescription("Leicester Road Day Centre, Melton Mowbray").setUrl(new MFString("\"javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("474.700012207031 0.100000001490116 -318.799987792969"))))
      .addChild(new Anchor().setDescription("Ivy House Special School, Derby").setUrl(new MFString("\"javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("436.100006103516 0.100000001490116 -334.899993896484"))))
      .addChild(new Anchor().setDescription("Oakham Day Centre, Rutland").setUrl(new MFString("\"javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("485.600006103516 0.100000001490116 -309"))))
      .addChild(new Anchor().setDescription("Parkwood School, Alfreton").setUrl(new MFString("\"javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("440.5 0.100000001490116 -355.5"))))
      .addChild(new Anchor().setDescription("Ash Green, Specialist Learning Disability Resource").setUrl(new MFString("\"javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("434.799987792969 0.100000001490116 -371.5"))))
      .addChild(new Anchor().setDescription("Ashgate Croft School, Chesterfield").setUrl(new MFString("\"javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("436.299987792969 0.100000001490116 -371.700012207031"))))
      .addChild(new Anchor().setDescription("Highfields School, Matlock").setUrl(new MFString("\"javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("431.200012207031 0.100000001490116 -361.200012207031"))))
      .addChild(new Anchor().setDescription("City Arts").setUrl(new MFString("\"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("i")
          .addFieldValue(new fieldValue().setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"))))
      .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new MFString("\"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"))))
      .addChild(new Anchor().setDescription("Watering Seeds").setUrl(new MFString("\"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("454 0.100000001490116 -361.299987792969"))))
      .addChild(new Anchor().setDescription("Red oaks").setUrl(new MFString("\"javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("457.399993896484 0.100000001490116 -359.600006103516"))))
      .addChild(new Anchor().setDescription("West Notts College").setUrl(new MFString("\"javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("454.200012207031 0.100000001490116 -358.600006103516"))))
      .addChild(new Anchor().setDescription("Willow Wood Day Centre").setUrl(new MFString("\"javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("450.600006103516 0.100000001490116 -358.600006103516"))))
      .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(new MFString("\"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("440 0.100000001490116 -350"))))
      .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(new MFString("\"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("n")
          .addFieldValue(new fieldValue().setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"))))
      .addChild(new Anchor().setDescription("Roman Way Day Centre, Market Harborough").setUrl(new MFString("\"javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("473.5 0.100000001490116 -287.5"))))
      .addChild(new Anchor().setDescription("Mosaic, Leicester Disability Services").setUrl(new MFString("\"javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("458 0.100000001490116 -304.5"))))
      .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(new MFString("\"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"))))
      .addChild(new Anchor().setDescription("Ellesmere College, Leicester").setUrl(new MFString("\"javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("456.799987792969 0.100000001490116 -302.600006103516"))))
      .addChild(new Anchor().setDescription("Ashmount School, Loughborough").setUrl(new MFString("\"javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("453.299987792969 0.100000001490116 -318.600006103516"))))
      .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(new MFString("\"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"))))
      .addChild(new Anchor().setDescription("Forrest Way School").setUrl(new MFString("\"javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("444.600006103516 0.100000001490116 -313.700012207031"))))
      .addChild(new Anchor().setDescription("Ibstock Community College").setUrl(new MFString("\"javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("440.600006103516 0.100000001490116 -310.399993896484"))))
      .addChild(new Anchor().setDescription("Artlink East").setUrl(new MFString("\"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"))))
      .addChild(new Anchor().setDescription("United Hospitals and NHS Trust Lincolnshire").setUrl(new MFString("\"javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("491.399993896484 0.100000001490116 -336.799987792969"))))
      .addChild(new Anchor().setDescription("Ancaster Day Centre").setUrl(new MFString("\"javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("496.899993896484 0.100000001490116 -368.899993896484"))))
      .addChild(new Anchor().setDescription("Creations").setUrl(new MFString("\"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("467 0.100000001490116 -243.899993896484"))))
      .addChild(new Anchor().setDescription("Nene Day Centre, Northamtpon").setUrl(new MFString("\"javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("477.100006103516 0.100000001490116 -260"))))
      .addChild(new Anchor().setDescription("Delapre Middle School, Northampton").setUrl(new MFString("\"javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("474.700012207031 0.100000001490116 -259.100006103516"))))
      .addChild(new Anchor().setDescription("The Links, Brackley").setUrl(new MFString("\"javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("459 0.100000001490116 -236.399993896484"))))
      .addChild(new Anchor().setDescription("New Perspectives").setUrl(new MFString("\"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("n")
          .addFieldValue(new fieldValue().setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"))))
      .addChild(new Anchor().setDescription("UKan2").setUrl(new MFString("\"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("r")
          .addFieldValue(new fieldValue().setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"))))
      .addChild(new Anchor().setDescription("Silverstone County Infants School").setUrl(new MFString("\"javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("466.899993896484 0.100000001490116 -243.800003051758"))))
      .addChild(new Anchor().setDescription("Riverside Resource Centre, Towcester").setUrl(new MFString("\"javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("institute")
          .addFieldValue(new fieldValue().setName("pos").setValue("469.5 0.100000001490116 -249.800003051758"))))
      .addChild(new Anchor().setDescription("Daventry Tertiary College").setUrl(new MFString("\"javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new ProtoInstance().setName("school")
          .addFieldValue(new fieldValue().setName("pos").setValue("456.700012207031 0.100000001490116 -261.799987792969"))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(0.200000002980232).setEmissiveColor(1.0,0.0,0.0)))
        .setGeometry(new IndexedLineSet().setCoordIndex(this.IndexedLineSet_5_249_coordIndex)
          .setCoord(new Coordinate().setPoint(this.Coordinate_6_249_point))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0).setTransparency(0.200000002980232)))
        .setGeometry(new IndexedLineSet().setCoordIndex(this.IndexedLineSet_5_254_coordIndex)
          .setCoord(new Coordinate().setPoint(this.Coordinate_6_254_point))))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setTransparency(0.200000002980232).setEmissiveColor(1.0,0.0,1.0)))
        .setGeometry(new IndexedLineSet().setCoordIndex(Java.to([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1], Java.type("int[]")))
          .setCoord(new Coordinate().setPoint(this.Coordinate_6_259_point))))));
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
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
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
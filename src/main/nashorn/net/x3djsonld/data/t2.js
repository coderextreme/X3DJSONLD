load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene t2. </p>
 <p> Related links: t2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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

function t2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
t2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.0")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Networking").setLevel(2))
    .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new metaObject().setName("source").setContent("t1.wrl")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\" \"FLY\" \"WALK\"")).setAvatarSize(Java.to([200.0,200.0,120.0], Java.type("float[]"))).setSpeed(3))
    .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
    .addChild(new ViewpointObject().setDescription("looking North").setPosition(0.0,60.0,110.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071))
    .addChild(new ViewpointObject().setDescription("looking East").setPosition(-140.0,30.0,0.0).setOrientation(0.0,0.400000005960464,0.0,-1.39999997615814).setFieldOfView(0.785398125648499))
    .addChild(new ViewpointObject().setDescription("Overhead").setPosition(0.0,150.0,0.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-1.57000005245209))
    .addChild(new ProtoDeclareObject().setName("org")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("posi").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("col").setType("SFColor").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.400000005960464)
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry(new SphereObject().setRadius(1.10000002384186)))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("posi"))))))
    .addChild(new ProtoDeclareObject().setName("r")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("initializeOnly").setName("pos").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ProtoInstanceObject().setName("org")
          .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.300000011920929 1"))
          .addFieldValue(new fieldValueObject().setName("posi"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
    .addChild(new AnchorObject().setDescription("High Peak Community Arts").setUrl(new MFStringObject("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
      .addChild(new ProtoInstanceObject().setName("r")
        .addFieldValue(new fieldValueObject().setName("pos").setValue("400 0.100000001490116 -385")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return t2 model
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
		var testObject = new t2();
		print ("t2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t2().main();
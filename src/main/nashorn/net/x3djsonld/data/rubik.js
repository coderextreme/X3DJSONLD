load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a kind of rubik cube with spheres. </p>
 <p> Related links: rubik.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubik&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubik.x3d">rubik.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubik.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/rubik.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a kind of rubik cube with spheres </td>
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

function rubik
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
rubik.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("rubik.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubik.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a kind of rubik cube with spheres")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\"")))
    .addChild(new ViewpointObject().setDescription("Rubiks Cube").setPosition(0.0,0.0,12.0))
    .addChild(new ProtoDeclareObject().setName("sphere")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("xtranslation").setType("SFVec3f").setValue("0.0 0.0 0.0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("xtranslation")))
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,1.0)))))))
    .addChild(new ProtoDeclareObject().setName("three")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ytranslation").setType("SFVec3f").setValue("0.0 0.0 0.0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ytranslation")))
          .addChild(new ProtoInstanceObject().setName("sphere")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("0 0 0")))
          .addChild(new ProtoInstanceObject().setName("sphere")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("2 0 0")))
          .addChild(new ProtoInstanceObject().setName("sphere")
            .addFieldValue(new fieldValueObject().setName("xtranslation").setValue("-2 0 0"))))))
    .addChild(new ProtoDeclareObject().setName("nine")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ztranslation").setType("SFVec3f").setValue("0.0 0.0 0.0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ztranslation")))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 0 0")))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 2 0")))
          .addChild(new ProtoInstanceObject().setName("three")
            .addFieldValue(new fieldValueObject().setName("ytranslation").setValue("0 -2 0"))))))
    .addChild(new ProtoDeclareObject().setName("twentyseven")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("ttranslation").setType("SFVec3f").setValue("0.0 0.0 0.0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("ttranslation")))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 0")))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 2")))
          .addChild(new ProtoInstanceObject().setName("nine")
            .addFieldValue(new fieldValueObject().setName("ztranslation").setValue("0 0 -2"))))))
    .addChild(new ProtoInstanceObject().setName("twentyseven")
      .addFieldValue(new fieldValueObject().setName("ttranslation").setValue("0 0 0"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return rubik model
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
		var testObject = new rubik();
		print ("rubik execution self-validation test results: " + testObject.validateSelf());
	}
}
new rubik().main();
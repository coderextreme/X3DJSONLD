load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a green rubik cube. </p>
 <p> Related links: rubikFurnace.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubikFurnace&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d">rubikFurnace.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a green rubik cube </td>
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

function rubikFurnace
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
rubikFurnace.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("rubikFurnace.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/rubikFurnace.x3d"))
    .addMeta(new meta().setName("description").setContent("a green rubik cube")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType("\"EXAMINE\""))
    .addChild(new Viewpoint().setDescription("Rubiks Cube on Fire").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(12.0)))
    .addChild(new ProtoDeclare().setName("anyShape")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("xtranslation").setType("SFVec3f").setAccessType("inputOutput").setValue("0.0 0.0 0.0"))
        .addField(new field().setName("myShape").setType("MFNode").setAccessType("inputOutput")
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("xtranslation"))
            .addConnect(new connect().setNodeField("children").setProtoField("myShape"))))))
    .addChild(new ProtoDeclare().setName("three")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ytranslation").setType("SFVec3f").setAccessType("inputOutput").setValue("0.0 0.0 0.0"))
        .addField(new field().setName("myShape").setType("MFNode").setAccessType("inputOutput")
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ytranslation")))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("xtranslation").setValue("0 0 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("xtranslation").setValue("2 0 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("xtranslation").setValue("-2 0 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoDeclare().setName("nine")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ztranslation").setType("SFVec3f").setAccessType("inputOutput").setValue("0.0 0.0 0.0"))
        .addField(new field().setName("myShape").setType("MFNode").setAccessType("inputOutput")
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ztranslation")))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 0 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 2 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ytranslation").setValue("0 -2 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoDeclare().setName("twentyseven")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("ttranslation").setType("SFVec3f").setAccessType("inputOutput").setValue("0.0 0.0 0.0"))
        .addField(new field().setName("myShape").setType("MFNode").setAccessType("inputOutput")
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("ttranslation")))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 0"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 2"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape"))))
          .addChild(new ProtoInstance()
            .addFieldValue(new fieldValue().setName("ztranslation").setValue("0 0 -2"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("myShape").setProtoField("myShape")))))))
    .addChild(new ProtoInstance()
      .addFieldValue(new fieldValue().setName("ttranslation").setValue("0 0 0"))
      .addFieldValue(new fieldValue().setName("myShape")
        .addChild(new Shape()
          .setGeometry(new Box().setSize(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return rubikFurnace model
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
		var testObject = new rubikFurnace();
		print ("rubikFurnace execution self-validation test results: " + testObject.validateSelf());
	}
}
new rubikFurnace().main();
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
 * <p> a white rubik cube. </p>
 <p> Related links: rubikOnFire.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.rubikOnFire&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d">rubikOnFire.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a white rubik cube </td>
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

function rubikOnFire
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
rubikOnFire.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("rubikOnFire.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/rubikOnFire.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a white rubik cube")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setType(new autoclass.MFString("\"EXAMINE\"")))
    .addChild((new autoclass.Viewpoint()).setDescription("Rubiks Cube on Fire").setPosition(0.0,0.0,12.0))
    .addChild((new autoclass.ProtoDeclare()).setName("anyShape")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("xtranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild((new autoclass.Sphere()))))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("xtranslation")))
          .addChild((new autoclass.Shape())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("geometry").setProtoField("myShape")))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0)))))))
    .addChild((new autoclass.ProtoDeclare()).setName("three")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("ytranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild((new autoclass.Sphere()))))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ytranslation")))
          .addChild((new autoclass.ProtoInstance()).setName("anyShape")
            .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("0 0 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("anyShape")
            .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("2 0 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("anyShape")
            .addFieldValue((new autoclass.fieldValue()).setName("xtranslation").setValue("-2 0 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape")))))))
    .addChild((new autoclass.ProtoDeclare()).setName("nine")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("ztranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild((new autoclass.Sphere()))))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ztranslation")))
          .addChild((new autoclass.ProtoInstance()).setName("three")
            .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 0 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("three")
            .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 2 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("three")
            .addFieldValue((new autoclass.fieldValue()).setName("ytranslation").setValue("0 -2 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape")))))))
    .addChild((new autoclass.ProtoDeclare()).setName("twentyseven")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("ttranslation").setType("SFVec3f").setValue("0.0 0.0 0.0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("myShape").setType("SFNode")
          .addChild((new autoclass.Sphere()))))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("ttranslation")))
          .addChild((new autoclass.ProtoInstance()).setName("nine")
            .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 0"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("nine")
            .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 2"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape"))))
          .addChild((new autoclass.ProtoInstance()).setName("nine")
            .addFieldValue((new autoclass.fieldValue()).setName("ztranslation").setValue("0 0 -2"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("myShape").setProtoField("myShape")))))))
    .addChild((new autoclass.ProtoInstance()).setName("twentyseven")
      .addFieldValue((new autoclass.fieldValue()).setName("ttranslation").setValue("0 0 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("myShape")
        .addChild((new autoclass.Box()).setSize(1.0,1.0,1.0)))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return rubikOnFire model
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
		var testObject = new rubikOnFire();
		console.log ("rubikOnFire execution self-validation test results: " + testObject.validateSelf());
	}
}
new rubikOnFire().main();
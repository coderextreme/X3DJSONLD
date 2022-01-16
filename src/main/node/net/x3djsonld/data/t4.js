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
 * <p> Test Case for Proto Expander. </p>
 <p> Related links: t4.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.t4&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d">t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d" target="_blank">http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Andreas Plesch and John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> t1.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test Case for Proto Expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
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

	* @author Andreas Plesch and John Carlson
 */

function t4
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
t4.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Networking").setLevel(2))
    .addComponent((new autoclass.component()).setName("Core").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("t4.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Andreas Plesch and John Carlson"))
    .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Test Case for Proto Expander"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [200.0,200.0,120.0])).setSpeed(3).setType("\"EXAMINE\" \"FLY\" \"WALK\""))
    .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
    .addChild((new autoclass.Viewpoint()).setDescription("looking North").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071).setPosition(0.0,60.0,110.0))
    .addChild((new autoclass.ProtoDeclare()).setName("org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("posi").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0"))
        .addField((new autoclass.field()).setName("col").setType("SFColor").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("posi")))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0)
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("col")))))
            .setGeometry((new autoclass.Sphere()).setRadius(5.10000002384186))))))
    .addChild((new autoclass.ProtoDeclare()).setName("r")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("n")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("1 0 0.200000002980232"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("i")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0.600000023841858 0 0.600000023841858"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.Transform()).setTranslation(-468.0,0.0,315.0)
      .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385"))))
      .addChild((new autoclass.Anchor()).setDescription("People Express").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"))))
      .addChild((new autoclass.Anchor()).setDescription("QArts/Studios").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("430 0.100000001490116 -335"))))
      .addChild((new autoclass.Anchor()).setDescription("First Movement").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("City Arts").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Watering Seeds").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("454 0.100000001490116 -361.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Fased In The Arts").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("440 0.100000001490116 -350"))))
      .addChild((new autoclass.Anchor()).setDescription("27a Access Artspace").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Bamboozle Theatre Company").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"))))
      .addChild((new autoclass.Anchor()).setDescription("Mantle Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"))))
      .addChild((new autoclass.Anchor()).setDescription("Artlink East").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("Creations").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("467 0.100000001490116 -243.899993896484"))))
      .addChild((new autoclass.Anchor()).setDescription("New Perspectives").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"))))
      .addChild((new autoclass.Anchor()).setDescription("UKan2").setUrl(new autoclass.MFString("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\", \"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return t4 model
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
		var testObject = new t4();
		console.log ("t4 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t4().main();
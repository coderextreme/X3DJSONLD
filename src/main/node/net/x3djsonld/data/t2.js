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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
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
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Networking").setLevel(2))
    .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta((new autoclass.meta()).setName("source").setContent("t1.wrl")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [200.0,200.0,120.0])).setSpeed(3).setType("\"EXAMINE\" \"FLY\" \"WALK\""))
    .addChild((new autoclass.WorldInfo()).setTitle("Arts Mapper"))
    .addChild((new autoclass.Viewpoint()).setDescription("looking North").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071).setPosition(0.0,60.0,110.0))
    .addChild((new autoclass.Viewpoint()).setDescription("looking East").setFieldOfView(0.785398125648499).setOrientation(0.0,0.400000005960464,0.0,-1.39999997615814).setPosition(-140.0,30.0,0.0))
    .addChild((new autoclass.Viewpoint()).setDescription("Overhead").setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-1.57000005245209).setPosition(0.0,150.0,0.0))
    .addChild((new autoclass.ProtoDeclare()).setName("org")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("posi").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0"))
        .addField((new autoclass.field()).setName("col").setType("SFColor").setAccessType("initializeOnly").setValue("0 0 0")))
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
    .addChild((new autoclass.ProtoDeclare()).setName("r")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("pos").setType("SFVec3f").setAccessType("initializeOnly").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.ProtoInstance())
          .addFieldValue((new autoclass.fieldValue()).setName("col").setValue("0 0.300000011920929 1"))
          .addFieldValue((new autoclass.fieldValue()).setName("posi"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("posi").setProtoField("pos"))))))
    .addChild((new autoclass.Anchor()).setDescription("High Peak Community Arts").setUrl(new autoclass.MFString("\"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("pos").setValue("400 0.100000001490116 -385")))));
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
		var testObject = new t2();
		console.log ("t2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t2().main();
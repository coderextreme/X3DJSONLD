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
 * <p> Tour around a prismatic sphere. </p>
 <p> Related links: bubble.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bubble&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d">bubble.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Tour around a prismatic sphere </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d</a> </td>
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

function bubble
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
bubble.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("bubble.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Tour around a prismatic sphere"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/bubble.x3d")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()).setType("\"EXAMINE\""))
    .addChild((new autoclass.Viewpoint()).setDescription("Bubble in action").setOrientation(1.0,0.0,0.0,0.0).setPosition(0.0,0.0,4.0))
    .addChild((new autoclass.ProtoDeclare()).setName("Bubble")
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("transform"))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()).setRadius(0.25))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0).setTransparency(0.2))))
          .addChild((new autoclass.Script("bounce")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"	translation = new SFVec3f(" + "\n" + 
"		translation.x + velocity.x," + "\n" + 
"		translation.y + velocity.y," + "\n" + 
"		translation.z + velocity.z);" + "\n" + 
"	scale = new SFVec3f(" + "\n" + 
"		scale.x + scalvel.x," + "\n" + 
"		scale.y + scalvel.y," + "\n" + 
"		scale.z + scalvel.z);" + "\n" + 
"        // if you get to far away or too big, explode" + "\n" + 
"        if ( Math.abs(translation.x) > 256) {" + "\n" + 
"		translation.x = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"        if ( Math.abs(translation.y) > 256) {" + "\n" + 
"		translation.y = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"        if ( Math.abs(translation.z) > 256) {" + "\n" + 
"		translation.z = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"	if (Math.abs(scale.x) > 20) {" + "\n" + 
"		scale.x = scale.x/2;" + "\n" + 
"		translation.x = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"	if (Math.abs(scale.y) > 20) {" + "\n" + 
"		scale.y = scale.y/2;" + "\n" + 
"		translation.y = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"	if (Math.abs(scale.z) > 20) {" + "\n" + 
"		scale.z = scale.z/2;" + "\n" + 
"		translation.z = 0;" + "\n" + 
"		initialize();" + "\n" + 
"	}" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setName("scale").setType("SFVec3f").setAccessType("inputOutput").setValue("1 1 1"))
            .addField((new autoclass.field()).setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("velocity").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("scalvel").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly")))
          .addChild((new autoclass.TimeSensor("bubbleClock")).setCycleInterval(10).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
          .addChild((new autoclass.ROUTE()).setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
    .addChild((new autoclass.ProtoInstance("bubbleA", "Bubble"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bubble model
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
		var testObject = new bubble();
		console.log ("bubble execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new bubble().main();
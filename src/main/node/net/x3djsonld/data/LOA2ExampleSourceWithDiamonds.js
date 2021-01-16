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
 * <p> Example scene LOA2ExampleSourceWithDiamonds. </p>
 <p> Related links: LOA2ExampleSourceWithDiamonds.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
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
			<td> LOA2ExampleSourceWithDiamonds.wrl </td>
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

function LOA2ExampleSourceWithDiamonds
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA2ExampleSourceWithDiamonds.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Coordinate point field, scene-graph level=9, element #55, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_9_55_point = new autoclass.MFVec3f(java.newArray("float", [0.0,0.00999999977648258,0.0,-0.00999999977648258,0.0,0.0,0.0,0.0,0.00999999977648258,0.00999999977648258,0.0,0.0,0.0,0.0,-0.00999999977648258,0.0,-0.00999999977648258,0.0]));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta((new autoclass.meta()).setName("source").setContent("LOA2ExampleSourceWithDiamonds.wrl")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("Humanoid")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("humanoidBody").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("info").setType("MFString").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("joints").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("segments").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("sites").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("version").setType("SFString").setValue("200x"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("viewpoints").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Group())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("humanoidBody"))))
          .addChild((new autoclass.Group())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("viewpoints"))))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
            .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
            .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
            .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("Joint")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("limitOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("llimit").setType("MFFloat").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("stiffness").setType("MFFloat").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("ulimit").setType("MFFloat").setValue("")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Transform())
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
              .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
              .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
              .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
              .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
              .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.IndexedFaceSet()).setCreaseAngle(0.5).setCoordIndex(java.newArray("int", [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]))
                .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_9_55_point)))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0))))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("center")))))))
    .addChild((new autoclass.ProtoDeclare()).setName("Segment")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("centerOfMass").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("coord").setType("SFNode").setValue("NULL"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("displacers").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("mass").setType("SFFloat").setValue("0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("momentsOfInertia").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
            .addConnect((new autoclass.connect()).setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect((new autoclass.connect()).setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild((new autoclass.ProtoDeclare()).setName("Site")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform())
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children"))
            .addConnect((new autoclass.connect()).setNodeField("center").setProtoField("center"))
            .addConnect((new autoclass.connect()).setNodeField("rotation").setProtoField("rotation"))
            .addConnect((new autoclass.connect()).setNodeField("scale").setProtoField("scale"))
            .addConnect((new autoclass.connect()).setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation"))
            .addConnect((new autoclass.connect()).setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect((new autoclass.connect()).setNodeField("removeChildren").setProtoField("removeChildren")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA2ExampleSourceWithDiamonds model
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
		var testObject = new LOA2ExampleSourceWithDiamonds();
		console.log ("LOA2ExampleSourceWithDiamonds execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA2ExampleSourceWithDiamonds().main();
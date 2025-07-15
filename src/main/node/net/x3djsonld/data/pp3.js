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
 * <p> A process pipeline between three spheres (try typing on spheres and blue. </p>
 <p> Related links: pp3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.pp3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d">pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 5 May 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 Dec 2022 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A process pipeline between three spheres (try typing on spheres and blue </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/x3d/pp3.x3d" target="_blank">https://coderextreme.net/x3d/pp3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
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

function pp3
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
pp3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #12, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_12_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #17, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_17_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #29, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_29_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));

	/** Large attribute array: Extrusion crossSection field, scene-graph level=8, element #41, 34 total numbers made up of 17 2-tuple values */
	this.Extrusion_8_41_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("pp3.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("5 May 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 Dec 2022"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("Process")
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addComments("left")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,1.0,0.0).setTransparency(0.5)))
              .setGeometry((new autoclass.Extrusion()).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_12_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0,0.0])))))
            .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
          .addComments("right")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry((new autoclass.Extrusion()).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_17_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0,0.0])))))
            .addChild((new autoclass.Transform()).setTranslation(2.0,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material("MaterialLightBlue")).setDiffuseColor(1.0,1.0,1.0)))
                .setGeometry((new autoclass.Text("RightString")).setString(new autoclass.MFString("\"r\"")))))
            .addChild((new autoclass.StringSensor("RightSensor")).setEnabled(false))
            .addChild((new autoclass.TouchSensor("RightTouch")).setDescription("touch to activate")))
          .addComments("up")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.7,1.0).setTransparency(0.5)))
              .setGeometry((new autoclass.Extrusion()).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_29_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,1.5,0.0,0.0,2.0,0.0,0.0,2.5,0.0])))))
            .addChild((new autoclass.Transform()).setTranslation(-0.5,2.0,0.0)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.Text("UpString")).setString(new autoclass.MFString("\"u\"")))))
            .addChild((new autoclass.StringSensor("UpSensor")).setEnabled(false))
            .addChild((new autoclass.TouchSensor("UpTouch")).setDescription("touch to activate")))
          .addComments("down")
          .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5)
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,1.0,0.0).setTransparency(0.5)))
              .setGeometry((new autoclass.Extrusion()).setCreaseAngle(0.785).setCrossSection(this.Extrusion_8_41_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,-2.5,0.0,0.0,-2.0,0.0,0.0,-1.5,0.0])))))
            .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
          .addComments("center")
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.7)))
              .setGeometry((new autoclass.Sphere())))
            .addChild((new autoclass.Transform()).setScale(0.5,0.5,0.5).setTranslation(-0.5,0.0,1.0)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())))
                .setGeometry((new autoclass.Text("CenterString")))))
            .addChild((new autoclass.StringSensor("CenterSensor")).setEnabled(false))
            .addChild((new autoclass.TouchSensor("CenterTouch")).setDescription("touch to activate"))))
        .addChild((new autoclass.Script("RightSingleToMultiString")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	rightlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_rightstring(rightstr) {" + "\n" + 
"	rightlines = new MFString(rightstr);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName("set_rightstring").setType("SFString").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName(new autoclass.MFString("\"rightlines\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\""))))
        .addChild((new autoclass.Script("UpSingleToMultiString")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	uplines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_upstring(upstr) {" + "\n" + 
"	uplines = new MFString(upstr);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName("set_upstring").setType("SFString").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName(new autoclass.MFString("\"uplines\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\""))))
        .addChild((new autoclass.Script("CenterSingleToMultiString")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"	centerlines = new MFString(\"\");" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_centerstring(centerstr) {" + "\n" + 
"	centerlines = new MFString(centerstr);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName("set_centerstring").setType("SFString").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName(new autoclass.MFString("\"centerlines\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\""))))
        .addChild((new autoclass.ROUTE()).setFromNode("CenterSensor").setFromField("enteredText").setToNode("CenterSingleToMultiString").setToField("set_centerstring"))
        .addChild((new autoclass.ROUTE()).setFromNode("CenterSingleToMultiString").setFromField("centerlines").setToNode("CenterString").setToField("set_string"))
        .addChild((new autoclass.ROUTE()).setFromNode("CenterTouch").setFromField("isOver").setToNode("CenterSensor").setToField("set_enabled"))
        .addChild((new autoclass.ROUTE()).setFromNode("RightSensor").setFromField("enteredText").setToNode("RightSingleToMultiString").setToField("set_rightstring"))
        .addChild((new autoclass.ROUTE()).setFromNode("RightSingleToMultiString").setFromField("rightlines").setToNode("RightString").setToField("set_string"))
        .addChild((new autoclass.ROUTE()).setFromNode("RightTouch").setFromField("isOver").setToNode("RightSensor").setToField("set_enabled"))
        .addChild((new autoclass.ROUTE()).setFromNode("UpSensor").setFromField("enteredText").setToNode("UpSingleToMultiString").setToField("set_upstring"))
        .addChild((new autoclass.ROUTE()).setFromNode("UpSingleToMultiString").setFromField("uplines").setToNode("UpString").setToField("set_string"))
        .addChild((new autoclass.ROUTE()).setFromNode("UpTouch").setFromField("isOver").setToNode("UpSensor").setToField("set_enabled"))))
    .addChild((new autoclass.NavigationInfo()))
    .addChild((new autoclass.Viewpoint()).setDescription("Process pipes").setOrientation(1.0,0.0,0.0,-0.4).setPosition(0.0,5.0,12.0))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-2.5,0.0)
      .addChild((new autoclass.ProtoInstance())))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.ProtoInstance())))
    .addChild((new autoclass.Transform()).setTranslation(0.0,2.5,0.0)
      .addChild((new autoclass.ProtoInstance()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return pp3 model
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
		var testObject = new pp3();
		console.log ("pp3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new pp3().main();
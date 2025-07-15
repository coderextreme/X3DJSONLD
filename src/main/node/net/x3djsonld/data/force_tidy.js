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
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links: force_tidy.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.force_tidy&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John W Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> December 13 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> July 14 2025 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d">force.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> beginnings of a force directed graph in 3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> x3d-tidy V1.0.175, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Sat, 9 Nov 2024 19:29:39 GMT </td>
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

	* @author John W Carlson
 */

function force_tidy
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
force_tidy.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion DEF='extrusion' crossSection field, scene-graph level=7, element #46, 34 total numbers made up of 17 2-tuple values */
	this.extrusion_7_46_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,-0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John W Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("December 13 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("July 14 2025"))
    .addMeta((new autoclass.meta()).setName("title").setContent("force.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("beginnings of a force directed graph in 3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("x3d-tidy V1.0.175, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("Sat, 9 Nov 2024 19:29:39 GMT")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("node")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(position.0).setType(SFVec3f).setAccessType(inputOutput.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Transform("transform"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("position")))
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Sphere()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0))))
            .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))
                .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Node\""))
                  .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(5))))))
          .addChild((new autoclass.PositionInterpolator("NodePosition")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,5.0,0.0]))))
          .addChild((new autoclass.Script("MoveBall")).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"		function set_cycle(value) {" + "\n" + 
"			old = translation;" + "\n" + 
"			translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);" + "\n" + 
"			keyValue = new MFVec3f(old, translation);" + "\n" + 
"		}" + "\n")
            .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(50.0,50.0,0.0))
            .addField((new autoclass.field()).setName(old.0).setType(SFVec3f).setAccessType(inputOutput.0))
            .addField((new autoclass.field()).setName(set_cycle).setType(SFTime).setAccessType(inputOnly))
            .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [keyValue]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [outputOnly.0])))))
          .addChild((new autoclass.TimeSensor("nodeClock")).setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
          .addChild((new autoclass.ROUTE()).setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("set_keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
    .addChild((new autoclass.ProtoDeclare()).setName("cyl")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(set_positionA).setType(SFVec3f).setAccessType(inputOutput.0))
        .addField((new autoclass.field()).setName(set_positionB).setType(SFVec3f).setAccessType(inputOutput.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0)))
            .setGeometry((new autoclass.Extrusion("extrusion")).setCreaseAngle(0.785).setCrossSection(this.extrusion_7_46_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0])))))
          .addChild((new autoclass.Script("MoveCylinder")).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"                function set_endA(value) {" + "\n" + 
"		    spine = new MFVec3f(value, spine[1]);" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_endB(value) {" + "\n" + 
"		    spine = new MFVec3f(spine[0], value);" + "\n" + 
"                }" + "\n")
            .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [spine]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [inputOutput.0]))).setValue(new autoclass.MFVec3f(java.newArray("float", [0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0]))))
            .addField((new autoclass.field()).setName(endA).setType(SFVec3f).setAccessType(inputOutput.0))
            .addField((new autoclass.field()).setName(endB).setType(SFVec3f).setAccessType(inputOutput.0))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("endA").setProtoField("set_positionA"))
              .addConnect((new autoclass.connect()).setNodeField("endB").setProtoField("set_positionB"))))
          .addChild((new autoclass.ROUTE()).setFromNode("MoveCylinder").setFromField("spine_changed").setToNode("extrusion").setToField("set_spine")))))
    .addChild((new autoclass.Transform("HoldsContent")).setScale(0.1,0.1,0.1)
      .addChild((new autoclass.PlaneSensor("clickGenerator")).setDescription("click on background to add nodes, click on nodes to add links").setMaxPosition(50.0,50.0).setMinPosition(-50.0,-50.0))
      .addChild((new autoclass.ProtoInstance("nodeA", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(0 1.388333 0)))
      .addChild((new autoclass.ProtoInstance("nodeB", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(0 1.388333 0)))
      .addChild((new autoclass.ProtoInstance("nodeC", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(0 1.388333 0)))
      .addChild((new autoclass.ProtoInstance("nodeD", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(0 1.388333 0)))
      .addChild((new autoclass.ProtoInstance("linkA", "cyl")))
      .addChild((new autoclass.ProtoInstance("linkB", "cyl")))
      .addChild((new autoclass.ProtoInstance("linkC", "cyl"))))
    .addChild((new autoclass.Script("clickHandler")).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"	function add_node(value) {" + "\n" + 
"                // Browser.print('hey ', counter);" + "\n" + 
"                counter = counter++;" + "\n" + 
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\")," + "\n" + 
"			{ \"ProtoInstance\":" + "\n" + 
"				{ \"@name\":\"node\"," + "\n" + 
"				  \"@DEF\":\"node'+counter+'\"," + "\n" + 
"				  \"fieldValue\": [" + "\n" + 
"					{" + "\n" + 
"						 \"@name\":\"position\"," + "\n" + 
"						 \"@value\":[0.0,0.0,0.0]" + "\n" + 
"					}" + "\n" + 
"				  ]" + "\n" + 
"				}" + "\n" + 
"			});" + "\n" + 
"                " + "\n" + 
"        }" + "\n")
      .addField((new autoclass.field()).setName(counter).setType(SFInt32).setAccessType(inputOutput))
      .addField((new autoclass.field()).setName(node_changed).setType(SFNode).setAccessType(outputOnly))
      .addField((new autoclass.field()).setName(add_node).setType(SFBool).setAccessType(inputOnly)))
    .addChild((new autoclass.ROUTE()).setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeA").setFromField("position_changed").setToNode("linkA").setToField("set_positionA"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeB").setFromField("position_changed").setToNode("linkA").setToField("set_positionB"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeA").setFromField("position_changed").setToNode("linkB").setToField("set_positionA"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeC").setFromField("position_changed").setToNode("linkB").setToField("set_positionB"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeA").setFromField("position_changed").setToNode("linkC").setToField("set_positionA"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeD").setFromField("position_changed").setToNode("linkC").setToField("set_positionB")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return force_tidy model
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
		var testObject = new force_tidy();
		console.log ("force_tidy execution self-validation test results: " + testObject.validateSelf());
	}
}
new force_tidy().main();
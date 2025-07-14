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
 <p> Related links: fors2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.fors2&nbsp; Document Metadata </td>
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
			<td> April 18 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d">fors2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> beginnings of a force directed graph in 3D </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vim, X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

function fors2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
fors2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion DEF='extrusion' crossSection field, scene-graph level=6, element #34, 34 total numbers made up of 17 2-tuple values */
	this.extrusion_6_34_crossSection = new autoclass.MFVec2f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec2f(java.newArray("float", [1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38])))
	.append(new autoclass.MFVec2f(java.newArray("float", [-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("creator").setContent("John W Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("December 13 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("April 18 2017"))
    .addMeta((new autoclass.meta()).setName("title").setContent("fors2.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("beginnings of a force directed graph in 3D"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.ProtoDeclare()).setName("node")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(position.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("transform"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("position")))
          .addChild((new autoclass.Shape())
            .addComments("comment before Sphere")
            .addComments("comment after Sphere")
            .addComments("comment after Appearance")
            .setGeometry((new autoclass.Sphere()))
            .setAppearance((new autoclass.Appearance())
              .addComments("comment before Material")
              .addComments("comment after Material")
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
        .addChild((new autoclass.PositionInterpolator("NodePosition")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,5.0,0.0]))))
        .addChild((new autoclass.Script("MoveBall")).setSourceCode("\n" + 
" ecmascript:" + "\n" + 
"					function set_cycle(value) {" + "\n" + 
"                                                old = translation;" + "\n" + 
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);" + "\n" + 
"                                                keyValue = new MFVec3f([old, translation]);" + "\n" + 
"						// Browser.println(translation);" + "\n" + 
"					}" + "\n")
          .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(50.0,50.0,0.0))
          .addField((new autoclass.field()).setName(old.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.0))
          .addField((new autoclass.field()).setName(set_cycle).setType(SFTime).setAccessType(inputOnly))
          .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [keyValue]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [outputOnly.0])))))
        .addChild((new autoclass.TimeSensor("nodeClock")).setCycleInterval(3).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
        .addChild((new autoclass.ROUTE()).setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
        .addChild((new autoclass.ROUTE()).setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
    .addChild((new autoclass.ProtoDeclare()).setName("cyl")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(positionA.0).setType(SFVec3f).setAccessType(inputOnly.0))
        .addField((new autoclass.field()).setName(positionB.0).setType(SFVec3f).setAccessType(inputOnly.0)))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Extrusion("extrusion")).setCreaseAngle(0.785).setCrossSection(this.extrusion_6_34_crossSection).setSpine(new autoclass.MFVec3f(java.newArray("float", [0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0]))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0))))
        .addChild((new autoclass.Script("MoveCylinder")).setSourceCode("\n" + 
" ecmascript:" + "\n" + 
"\n" + 
"                function set_endA(value) {" + "\n" + 
"		    if (typeof spine === \"undefined\") {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([value, spine[1]]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_endB(value) {" + "\n" + 
"		    if (typeof spine === \"undefined\") {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([spine[0], value]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_spine(value) {" + "\n" + 
"		    Browser.print('\\n'+'\"');" + "\n" + 
"                    spine = value;" + "\n" + 
"                }" + "\n")
          .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [spine]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [inputOutput.0]))).setValue(new autoclass.MFVec3f(java.newArray("float", [0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0]))))
          .addField((new autoclass.field()).setName(set_endA).setType(SFVec3f).setAccessType(inputOnly.0))
          .addField((new autoclass.field()).setName(set_endB).setType(SFVec3f).setAccessType(inputOnly.0))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("set_endA").setProtoField("positionA"))
            .addConnect((new autoclass.connect()).setNodeField("set_endB").setProtoField("positionB"))))
        .addChild((new autoclass.ROUTE()).setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
    .addChild((new autoclass.Transform()).setScale(0.1,0.1,0.1)
      .addChild((new autoclass.ProtoInstance("nodeA", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(-50 -50 -50)))
      .addChild((new autoclass.ProtoInstance("nodeB", "node"))
        .addFieldValue((new autoclass.fieldValue()).setName("position").setValue(50 50 50)))
      .addChild((new autoclass.ProtoInstance("linkA", "cyl"))
        .addFieldValue((new autoclass.fieldValue()).setName("positionA").setValue(0 0 0))
        .addFieldValue((new autoclass.fieldValue()).setName("positionB").setValue(50 50 50))))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA"))
    .addChild((new autoclass.ROUTE()).setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return fors2 model
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
		var testObject = new fors2();
		console.log ("fors2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new fors2().main();
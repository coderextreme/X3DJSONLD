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
 * <p> an attempt to implement an arc in a graph. </p>
 <p> Related links: arcold.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arcold&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="arcold.x3d">arcold.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> an attempt to implement an arc in a graph </td>
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

function arcold
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
arcold.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("arcold.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("an attempt to implement an arc in a graph")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint()).setDescription("a moving graph").setPosition(0.0,0.0,5.0))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.4,0.4,0.4]))))
    .addChild((new autoclass.Transform("trans1"))
      .addChild((new autoclass.Transform("rotscale1"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(0.1)))))
    .addChild((new autoclass.Transform("trans2"))
      .addChild((new autoclass.Transform("rotscale2"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(0.1)))))
    .addChild((new autoclass.Transform("trans3"))
      .addChild((new autoclass.Transform("rotscale3"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(0.1)))))
    .addChild((new autoclass.ProtoDeclare()).setName("point")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Transform("node"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()).setRadius(0.1))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0))))
          .addChild((new autoclass.PositionInterpolator("PI1")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,5.0,0.0]))))
          .addChild((new autoclass.Script("MB1")).setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"		    // Browser.println(translation);" + "\n" + 
"		}" + "\n")
            .addField((new autoclass.field()).setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("50 50 0"))
            .addField((new autoclass.field()).setName("old").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField((new autoclass.field()).setName("set_location").setType("SFTime").setAccessType("inputOnly"))
            .addField((new autoclass.field()).setName("keyValue").setType("MFVec3f").setAccessType("outputOnly")))
          .addChild((new autoclass.TimeSensor("CL1")).setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
    .addComments(" from doug sanden ")
    .addChild((new autoclass.ProtoDeclare()).setName("x3dconnector")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName("startnode").setType("SFNode").setAccessType("inputOutput"))
        .addField((new autoclass.field()).setName("endnode").setType("SFNode").setAccessType("inputOutput"))
        .addField((new autoclass.field()).setName("transnode").setType("SFNode").setAccessType("inputOutput"))
        .addField((new autoclass.field()).setName("rotscalenode").setType("SFNode").setAccessType("inputOutput"))
        .addField((new autoclass.field()).setName("set_startpoint").setType("SFVec3f").setAccessType("inputOnly"))
        .addField((new autoclass.field()).setName("set_endpoint").setType("SFVec3f").setAccessType("inputOnly")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Script("S1")).setSourceCode("\n" + 
"            ecmascript:" + "\n" + 
"        function recompute(startpoint,endpoint){" + "\n" + 
"	    if (typeof endpoint === 'undefined') {" + "\n" + 
"		return;" + "\n" + 
"	    }" + "\n" + 
"            var dif = endpoint.subtract(startpoint);" + "\n" + 
"            var dist = dif.length()*0.5;" + "\n" + 
"            var dif2 = dif.multiply(0.5);" + "\n" + 
"            var norm = dif.normalize();" + "\n" + 
"            var transl = startpoint.add(dif2);" + "\n" + 
"	    if (typeof Quaternion !== 'undefined') {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)" + "\n" + 
"		    };" + "\n" + 
"	    } else {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)" + "\n" + 
"		    };" + "\n" + 
"	    }" + "\n" + 
"	}" + "\n" + 
"	function recompute_and_route(startpoint, endpoint) {" + "\n" + 
"		var trafo = recompute(startpoint, endpoint);" + "\n" + 
"		if (typeof trafo !== 'undefined') {" + "\n" + 
"			transnode.translation = trafo.translation;" + "\n" + 
"			rotscalenode.rotation = trafo.rotation;" + "\n" + 
"			rotscalenode.scale = trafo.scale;" + "\n" + 
"		} else {" + "\n" + 
"			Browser.print(\"recompute returned undefined\");" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"        function initialize(){" + "\n" + 
"            recompute_and_route(startnode.translation,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_startpoint(val,t){" + "\n" + 
"            recompute_and_route(val || startnode.translation,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_endpoint(val,t){" + "\n" + 
"            recompute_and_route(startnode.translation,val || endnode.translation);" + "\n" + 
"        }" + "\n")
          .addField((new autoclass.field()).setName("startnode").setType("SFNode").setAccessType("inputOutput"))
          .addField((new autoclass.field()).setName("endnode").setType("SFNode").setAccessType("inputOutput"))
          .addField((new autoclass.field()).setName("transnode").setType("SFNode").setAccessType("inputOutput"))
          .addField((new autoclass.field()).setName("rotscalenode").setType("SFNode").setAccessType("inputOutput"))
          .addField((new autoclass.field()).setName("set_startpoint").setType("SFVec3f").setAccessType("inputOnly"))
          .addField((new autoclass.field()).setName("set_endpoint").setType("SFVec3f").setAccessType("inputOnly"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("startnode").setProtoField("startnode"))
            .addConnect((new autoclass.connect()).setNodeField("endnode").setProtoField("endnode"))
            .addConnect((new autoclass.connect()).setNodeField("transnode").setProtoField("transnode"))
            .addConnect((new autoclass.connect()).setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect((new autoclass.connect()).setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect((new autoclass.connect()).setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild((new autoclass.ProtoInstance("G1", "point")))
    .addChild((new autoclass.ProtoInstance("G2", "point")))
    .addChild((new autoclass.ProtoInstance("G3", "point")))
    .addChild((new autoclass.ProtoInstance("G4", "point")))
    .addChild((new autoclass.ProtoInstance("connector1", "x3dconnector"))
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()))))
    .addChild((new autoclass.ProtoInstance("connector2", "x3dconnector"))
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()))))
    .addChild((new autoclass.ProtoInstance("connector3", "x3dconnector"))
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.ProtoInstance())))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()))))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return arcold model
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
		var testObject = new arcold();
		console.log ("arcold execution self-validation test results: " + testObject.validateSelf());
	}
}
new arcold().main();
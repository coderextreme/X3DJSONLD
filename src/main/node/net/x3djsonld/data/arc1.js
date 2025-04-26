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
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: arc1.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc1&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d">arc1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Lost, Doug Sanden I think </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a generic proto to connect two objects </td>
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

	* @author Lost, Doug Sanden I think
 */

function arc1
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
arc1.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("arc1.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint()).setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.4,0.4,0.4]))))
    .addChild((new autoclass.ProtoDeclare()).setName("point")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.0)))
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
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"               }" + "\n")
            .addField((new autoclass.field()).setName(translation.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(50.0,50.0,0.0))
            .addField((new autoclass.field()).setName(old.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.0))
            .addField((new autoclass.field()).setName(set_location).setType(SFTime).setAccessType(inputOnly))
            .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [keyValue]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [inputOutput.0]))).setValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.0,5.0,0.0])))))
          .addChild((new autoclass.TimeSensor("CL1")).setCycleInterval(3).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild((new autoclass.ROUTE()).setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild((new autoclass.ROUTE()).setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("MB1").setFromField("translation_changed").setToNode("node").setToField("set_translation")))))
    .addChild((new autoclass.Transform("G1"))
      .addChild((new autoclass.ProtoInstance())))
    .addChild((new autoclass.Transform("G2"))
      .addChild((new autoclass.ProtoInstance())))
    .addChild((new autoclass.Transform("transC1"))
      .addChild((new autoclass.Transform("rotscaleC1"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.7).setTransparency(.5)))
          .setGeometry((new autoclass.Cylinder()).setRadius(.05)))))
    .addChild((new autoclass.ProtoDeclare()).setName("x3dconnector")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setName(startnode).setType(SFNode).setAccessType(initializeOnly))
        .addField((new autoclass.field()).setName(endnode).setType(SFNode).setAccessType(initializeOnly))
        .addField((new autoclass.field()).setName(transnode).setType(SFNode).setAccessType(inputOutput))
        .addField((new autoclass.field()).setName(rotscalenode).setType(SFNode).setAccessType(inputOutput))
        .addField((new autoclass.field()).setName(set_startpoint).setType(SFVec3f).setAccessType(inputOnly.0))
        .addField((new autoclass.field()).setName(set_endpoint).setType(SFVec3f).setAccessType(inputOnly.0)))
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
"	      var trafo = recompute(startpoint, endpoint);" + "\n" + 
"	      if (trafo) {" + "\n" + 
"		      transnode.translation = trafo.translation;" + "\n" + 
"		      rotscalenode.rotation = trafo.rotation;" + "\n" + 
"		      rotscalenode.scale = trafo.scale;" + "\n" + 
"	      }" + "\n" + 
"	}" + "\n" + 
"        function initialize(){" + "\n" + 
"            recompute_and_route(startnode.translation,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_startpoint(val,t){" + "\n" + 
"            recompute_and_route(val,endnode.translation);" + "\n" + 
"        }" + "\n" + 
"        function set_endpoint(val,t){" + "\n" + 
"            recompute_and_route(startnode.translation,val);" + "\n" + 
"        }" + "\n")
          .addField((new autoclass.field()).setName(startnode).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(endnode).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(transnode).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(rotscalenode).setType(SFNode).setAccessType(initializeOnly))
          .addField((new autoclass.field()).setName(set_startpoint).setType(SFVec3f).setAccessType(inputOnly.0))
          .addField((new autoclass.field()).setName(set_endpoint).setType(SFVec3f).setAccessType(inputOnly.0))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("startnode").setProtoField("startnode"))
            .addConnect((new autoclass.connect()).setNodeField("endnode").setProtoField("endnode"))
            .addConnect((new autoclass.connect()).setNodeField("transnode").setProtoField("transnode"))
            .addConnect((new autoclass.connect()).setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect((new autoclass.connect()).setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect((new autoclass.connect()).setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild((new autoclass.ProtoInstance("connector1", "x3dconnector"))
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform())))
      .addFieldValue((new autoclass.fieldValue()).setName("set_startpoint"))
      .addFieldValue((new autoclass.fieldValue()).setName("set_endpoint")))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return arc1 model
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
		var testObject = new arc1();
		console.log ("arc1 execution self-validation test results: " + testObject.validateSelf());
	}
}
new arc1().main();
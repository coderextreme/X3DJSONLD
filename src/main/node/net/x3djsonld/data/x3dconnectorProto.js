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
 <p> Related links: x3dconnectorProto.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.x3dconnectorProto&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/x3dconnectorProto">x3dconnectorProto</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a generic proto to connect two objects </td>
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

	* @author Lost, Doug Sanden I think
 */

function x3dconnectorProto
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
x3dconnectorProto.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("x3dconnectorProto"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a generic proto to connect two objects"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("Connector Proto"))
    .addChild((new autoclass.Viewpoint()).setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.4,0.4,0.4]))))
    .addChild((new autoclass.Transform("G1"))
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,0.2,0.2)))
        .setGeometry((new autoclass.Sphere()).setRadius(.1)))
      .addChild((new autoclass.PlaneSensor("PS1")).setDescription("Grab to move"))
      .addChild((new autoclass.ROUTE()).setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
    .addChild((new autoclass.Transform("G2")).setTranslation(1.0,-1.0,.01)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry((new autoclass.Sphere()).setRadius(.1)))
      .addChild((new autoclass.PlaneSensor("PS2")).setDescription("Grab to move").setOffset(1.0,-1.0,.01))
      .addChild((new autoclass.ROUTE()).setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
    .addChild((new autoclass.Transform("G3")).setTranslation(1.0,1.0,.01)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry((new autoclass.Sphere()).setRadius(.1)))
      .addChild((new autoclass.PlaneSensor("PS3")).setDescription("Grab to move").setOffset(1.0,1.0,.01))
      .addChild((new autoclass.ROUTE()).setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
    .addChild((new autoclass.Transform("G4")).setTranslation(-1.0,1.0,.01)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.7,0.2)))
        .setGeometry((new autoclass.Sphere()).setRadius(.1)))
      .addChild((new autoclass.PlaneSensor("PS4")).setDescription("Grab to move").setOffset(-1.0,1.0,.01))
      .addChild((new autoclass.ROUTE()).setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
    .addChild((new autoclass.Transform("transC1"))
      .addChild((new autoclass.Transform("rotscaleC1"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(.5).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(.05)))))
    .addChild((new autoclass.Transform("transC2"))
      .addChild((new autoclass.Transform("rotscaleC2"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(.5).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(.05)))))
    .addChild((new autoclass.Transform("transC3"))
      .addChild((new autoclass.Transform("rotscaleC3"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(.5).setDiffuseColor(0.2,0.7,0.7)))
          .setGeometry((new autoclass.Cylinder()).setRadius(.05)))))
    .addChild((new autoclass.ProtoDeclare()).setName("x3dconnector")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("transnode").setType("SFNode"))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("rotscalenode").setType("SFNode"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f")))
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
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("transnode").setType("SFNode"))
          .addField((new autoclass.field()).setAccessType("initializeOnly").setName("rotscalenode").setType("SFNode"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("startnode").setProtoField("startnode"))
            .addConnect((new autoclass.connect()).setNodeField("endnode").setProtoField("endnode"))
            .addConnect((new autoclass.connect()).setNodeField("transnode").setProtoField("transnode"))
            .addConnect((new autoclass.connect()).setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect((new autoclass.connect()).setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect((new autoclass.connect()).setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild((new autoclass.ProtoInstance("connector1", "x3dconnector")).setDEF("connector1").setName("x3dconnector")
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.Transform()).setUSE("G1")))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.Transform()).setUSE("G2")))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform()).setUSE("transC1")))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()).setUSE("rotscaleC1")))
      .addFieldValue((new autoclass.fieldValue()).setName("set_startpoint").setValue("0 0 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("set_endpoint").setValue("0 0 0")))
    .addChild((new autoclass.ProtoInstance("connector2", "x3dconnector")).setDEF("connector2").setName("x3dconnector")
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.Transform()).setUSE("G1")))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.Transform()).setUSE("G3")))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform()).setUSE("transC2")))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()).setUSE("rotscaleC2")))
      .addFieldValue((new autoclass.fieldValue()).setName("set_startpoint").setValue("0 0 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("set_endpoint").setValue("0 0 0")))
    .addChild((new autoclass.ProtoInstance("connector3", "x3dconnector")).setDEF("connector3").setName("x3dconnector")
      .addFieldValue((new autoclass.fieldValue()).setName("startnode")
        .addChild((new autoclass.Transform()).setUSE("G1")))
      .addFieldValue((new autoclass.fieldValue()).setName("endnode")
        .addChild((new autoclass.Transform()).setUSE("G4")))
      .addFieldValue((new autoclass.fieldValue()).setName("transnode")
        .addChild((new autoclass.Transform()).setUSE("transC3")))
      .addFieldValue((new autoclass.fieldValue()).setName("rotscalenode")
        .addChild((new autoclass.Transform()).setUSE("rotscaleC3")))
      .addFieldValue((new autoclass.fieldValue()).setName("set_startpoint").setValue("0 0 0"))
      .addFieldValue((new autoclass.fieldValue()).setName("set_endpoint").setValue("0 0 0")))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
    .addChild((new autoclass.ROUTE()).setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return x3dconnectorProto model
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
		var testObject = new x3dconnectorProto();
		console.log ("x3dconnectorProto execution self-validation test results: " + testObject.validateSelf());
	}
}
new x3dconnectorProto().main();
process.exit(0);
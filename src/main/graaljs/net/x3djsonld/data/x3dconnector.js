load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: x3dconnector.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.x3dconnector&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="x3dconnector.x3d">x3dconnector.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Lost, Doug Sanden I think
 */

function x3dconnector
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
x3dconnector.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("x3dconnector.x3d"))
    .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"))
    .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(5.0)))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.4),doubleToFloat(0.4),doubleToFloat(0.4)], Java.type("float[]")))))
    .addChild(new Transform("G1")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.7),doubleToFloat(0.2),doubleToFloat(0.2))))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS1").setDescription("Grab to move"))
      .addChild(new ROUTE().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
    .addChild(new Transform("G2").setTranslation(doubleToFloat(1.0),doubleToFloat(-1.0),doubleToFloat(.01))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.2))))
        .setGeometry(new Sphere().setRadius(.1)))
      .addChild(new PlaneSensor("PS2").setDescription("Grab to move").setOffset(doubleToFloat(1.0),doubleToFloat(-1.0),doubleToFloat(.01)))
      .addChild(new ROUTE().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
    .addChild(new Transform("transC1")
      .addChild(new Transform("rotscaleC1")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.2),doubleToFloat(0.7),doubleToFloat(0.7)).setTransparency(.5)))
          .setGeometry(new Cylinder().setRadius(.05)))))
    .addChild(new ProtoDeclare().setName("x3dconnector")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startnode").setType("SFNode").setAccessType("initializeOnly"))
        .addField(new field().setName("endnode").setType("SFNode").setAccessType("initializeOnly"))
        .addField(new field().setName("transnode").setType("SFNode").setAccessType("initializeOnly"))
        .addField(new field().setName("rotscalenode").setType("SFNode").setAccessType("initializeOnly"))
        .addField(new field().setName("set_startpoint").setType("SFVec3f").setAccessType("inputOnly"))
        .addField(new field().setName("set_endpoint").setType("SFVec3f").setAccessType("inputOnly")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("S1").setSourceCode("\n" + 
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
          .addField(new field().setName("startnode").setType("SFNode").setAccessType("initializeOnly"))
          .addField(new field().setName("endnode").setType("SFNode").setAccessType("initializeOnly"))
          .addField(new field().setName("transnode").setType("SFNode").setAccessType("initializeOnly"))
          .addField(new field().setName("rotscalenode").setType("SFNode").setAccessType("initializeOnly"))
          .addField(new field().setName("set_startpoint").setType("SFVec3f").setAccessType("inputOnly"))
          .addField(new field().setName("set_endpoint").setType("SFVec3f").setAccessType("inputOnly"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
            .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
            .addConnect(new connect().setNodeField("transnode").setProtoField("transnode"))
            .addConnect(new connect().setNodeField("rotscalenode").setProtoField("rotscalenode"))
            .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
            .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint"))))))
    .addChild(new ProtoInstance("connector1", "x3dconnector")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new Transform()))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new Transform()))
      .addFieldValue(new fieldValue().setName("transnode")
        .addChild(new Transform()))
      .addFieldValue(new fieldValue().setName("rotscalenode")
        .addChild(new Transform()))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return x3dconnector model
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		var testObject = new x3dconnector();
		print ("x3dconnector execution self-validation test results: " + testObject.validateSelf());
	}
}
new x3dconnector().main();
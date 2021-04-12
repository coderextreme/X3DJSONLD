load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: arc.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.arc&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="arc">arc</a> </td>
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

function arc
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
arc.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("arc"))
    .addMeta(new meta().setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta(new meta().setName("generator").setContent("manual"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
    .addMeta(new meta().setName("description").setContent("a generic proto to connect two objects")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([0.4,0.4,0.4], Java.type("float[]")))))
    .addChild(new ProtoDeclare().setName("point")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("node")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
          .addChild(new Shape()
            .setGeometry(new Sphere().setRadius(0.1))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0))))
          .addChild(new PositionInterpolator("PI1").setKeyValue(new MFVec3f(Java.to([0.0,0.0,0.0,0.0,5.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
          .addChild(new Script("MB1").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"		function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f([old, translation]);" + "\n" + 
"		    // Browser.println(keyValue);" + "\n" + 
"		}" + "\n")
            .addField(new field().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("50 50 0"))
            .addField(new field().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
            .addField(new field().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
            .addField(new field().setAccessType("inputOutput").setName("keyValue").setType("MFVec3f").setValue("0 0 0 0 5 0")))
          .addChild(new TimeSensor("CL1").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
          .addChild(new ROUTE().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
    .addChild(new ProtoDeclare().setName("x3dconnector")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
        .addField(new field().setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
        .addField(new field().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
        .addField(new field().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform("trans")
            .addChild(new Transform("rotscale")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setTransparency(.5).setDiffuseColor(0.2,0.7,0.7)))
                .setGeometry(new Cylinder().setRadius(.05)))))
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
"	    } else if (typeof SFRotation !== 'undefined') {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl," + "\n" + 
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)" + "\n" + 
"		    };" + "\n" + 
"	    } else {" + "\n" + 
"		    return {" + "\n" + 
"			    scale : new SFVec3f(1.0,dist,1.0)," + "\n" + 
"			    translation : transl" + "\n" + 
"		    };" + "\n" + 
"	    }" + "\n" + 
"	}" + "\n" + 
"	function recompute_and_route(startpoint, endpoint) {" + "\n" + 
"	      var trafo = recompute(startpoint, endpoint);" + "\n" + 
"	      if (trafo) {" + "\n" + 
"		      position.translation = trafo.translation;" + "\n" + 
"		      rotscale.rotation = trafo.rotation;" + "\n" + 
"		      rotscale.scale = trafo.scale;" + "\n" + 
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
            .addField(new field().setAccessType("initializeOnly").setName("startnode").setType("SFNode"))
            .addField(new field().setAccessType("initializeOnly").setName("endnode").setType("SFNode"))
            .addField(new field().setAccessType("inputOutput").setName("position").setType("SFNode")
              .addChild(new Transform().setUSE("trans")))
            .addField(new field().setAccessType("inputOutput").setName("rotscale").setType("SFNode")
              .addChild(new Transform().setUSE("rotscale")))
            .addField(new field().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
            .addField(new field().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("startnode").setProtoField("startnode"))
              .addConnect(new connect().setNodeField("endnode").setProtoField("endnode"))
              .addConnect(new connect().setNodeField("set_startpoint").setProtoField("set_startpoint"))
              .addConnect(new connect().setNodeField("set_endpoint").setProtoField("set_endpoint")))))))
    .addChild(new ProtoInstance("G1", "point").setDEF("G1").setName("point"))
    .addChild(new ProtoInstance("G2", "point").setDEF("G2").setName("point"))
    .addChild(new ProtoInstance("G3", "point").setDEF("G3").setName("point"))
    .addChild(new ProtoInstance("G4", "point").setDEF("G4").setName("point"))
    .addChild(new ProtoInstance("connector1", "x3dconnector").setDEF("connector1").setName("x3dconnector")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G2")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ProtoInstance("connector2", "x3dconnector").setDEF("connector2").setName("x3dconnector")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G3")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ProtoInstance("connector3", "x3dconnector").setDEF("connector3").setName("x3dconnector")
      .addFieldValue(new fieldValue().setName("startnode")
        .addChild(new ProtoInstance().setUSE("G1")))
      .addFieldValue(new fieldValue().setName("endnode")
        .addChild(new ProtoInstance().setUSE("G4")))
      .addFieldValue(new fieldValue().setName("set_startpoint"))
      .addFieldValue(new fieldValue().setName("set_endpoint")))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector1").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G2").setFromField("translation").setToNode("connector1").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector2").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G3").setFromField("translation").setToNode("connector2").setToField("set_endpoint"))
    .addChild(new ROUTE().setFromNode("G1").setFromField("translation").setToNode("connector3").setToField("set_startpoint"))
    .addChild(new ROUTE().setFromNode("G4").setFromField("translation").setToNode("connector3").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return arc model
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
			meta = metaList[m];
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new arc();
		print ("arc execution self-validation test results: " + testObject.validateSelf());
	}
}
new arc().main();
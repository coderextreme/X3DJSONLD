load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a generic proto to connect two objects. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.NeedClassName&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="arc2.x3d">arc2.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Lost, Doug Sanden I think
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("arc2.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects")))
  .setScene(new SceneObject()
    .addChild(new ViewpointObject().setDescription("Only Viewpoint").setPosition(0.0,0.0,5.0))
    .addChild(new BackgroundObject().setSkyColor(new MFColorObject(Java.to([0.4,0.4,0.4], Java.type("float[]")))))
    .addChild(new TransformObject("G1")
      .addChild(new TransformObject("DECLpoint_INSTANCE_node")
        .addChild(new ShapeObject()
          .setGeometry(new SphereObject().setRadius(0.1))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0))))
        .addChild(new PositionInterpolatorObject("DECLpoint_INSTANCE_PI1").setKeyValue(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,5.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
        .addChild(new ScriptObject("DECLpoint_INSTANCE_MB1").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"               }" + "\n")
          .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("keyValue").setType("MFVec3f").setValue("0 0 0 0 5 0")))
        .addChild(new TimeSensorObject("DECLpoint_INSTANCE_CL1").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE_MB1").setToField("set_location"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE_PI1").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE_PI1").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE_node").setToField("set_translation"))))
    .addChild(new TransformObject("G2")
      .addChild(new TransformObject("DECLpoint_INSTANCE1000_node")
        .addChild(new ShapeObject()
          .setGeometry(new SphereObject().setRadius(0.1))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0))))
        .addChild(new PositionInterpolatorObject("DECLpoint_INSTANCE1000_PI1").setKeyValue(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,5.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
        .addChild(new ScriptObject("DECLpoint_INSTANCE1000_MB1").setSourceCode("\n" + 
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"               function set_location(value) {" + "\n" + 
"                    old = translation;" + "\n" + 
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);" + "\n" + 
"                    keyValue = new MFVec3f(old, translation);" + "\n" + 
"               }" + "\n")
          .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_location").setType("SFTime"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("keyValue").setType("MFVec3f").setValue("0 0 0 0 5 0")))
        .addChild(new TimeSensorObject("DECLpoint_INSTANCE1000_CL1").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("cycleTime").setToNode("DECLpoint_INSTANCE1000_MB1").setToField("set_location"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_CL1").setFromField("fraction_changed").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("keyValue").setToNode("DECLpoint_INSTANCE1000_PI1").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_PI1").setFromField("value_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))
        .addChild(new ROUTEObject().setFromNode("DECLpoint_INSTANCE1000_MB1").setFromField("translation_changed").setToNode("DECLpoint_INSTANCE1000_node").setToField("set_translation"))))
    .addChild(new TransformObject("transC1")
      .addChild(new TransformObject("rotscaleC1")
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.2,0.7,0.7).setTransparency(0.5)))
          .setGeometry(new CylinderObject().setRadius(0.05)))))
    .addChild(new ScriptObject("DECLx3dconnector_connector1_S1").setSourceCode("\n" + 
"\n" + 
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
"	      transC1.translation = trafo.translation;" + "\n" + 
"	      rotscaleC1.rotation = trafo.rotation;" + "\n" + 
"	      rotscaleC1.scale = trafo.scale;" + "\n" + 
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
      .addField(new fieldObject().setAccessType("initializeOnly").setName("startnode").setType("SFNode")
        .addChild(new TransformObject().setUSE("G1")))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("endnode").setType("SFNode")
        .addChild(new TransformObject().setUSE("G2")))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("transC1").setType("SFNode")
        .addChild(new TransformObject().setUSE("transC1")))
      .addField(new fieldObject().setAccessType("initializeOnly").setName("rotscaleC1").setType("SFNode")
        .addChild(new TransformObject().setUSE("rotscaleC1")))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_startpoint").setType("SFVec3f"))
      .addField(new fieldObject().setAccessType("inputOnly").setName("set_endpoint").setType("SFVec3f")))
    .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_startpoint"))
    .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("DECLx3dconnector_connector1_S1").setToField("set_endpoint")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new NeedClassName();
		print ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();
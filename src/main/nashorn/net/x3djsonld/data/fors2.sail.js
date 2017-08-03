load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links: fors2_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.fors2_sail&nbsp; Document Metadata </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/fors2.x3d">fors2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/fors2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/fors2.x3d</a> </td>
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
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author John W Carlson
 */

function fors2_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
fors2_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion DEF='extrusion' crossSection field, scene-graph level=6, element #34, 34 total numbers made up of 17 2-tuple values */
	this.extrusion_6_34_crossSection = new MFVec2fObject() /* splitting up long array to improve readability */
	.append(new MFVec2fObject(Java.to([1.0,0.0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.0,-1.0,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.0,0.0,-0.92,0.38], Java.type("float[]"))))
	.append(new MFVec2fObject(Java.to([-0.71,0.71,-0.38,0.92,0.0,1.0,0.38,0.92,0.71,0.71,0.92,0.38,1.0,0.0], Java.type("float[]"))));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("creator").setContent("John W Carlson"))
    .addMeta(new metaObject().setName("created").setContent("December 13 2015"))
    .addMeta(new metaObject().setName("modified").setContent("April 18 2017"))
    .addMeta(new metaObject().setName("title").setContent("fors2.x3d"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d"))
    .addMeta(new metaObject().setName("description").setContent("beginnings of a force directed graph in 3D"))
    .addMeta(new metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("node")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("position").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("transform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
          .addChild(new ShapeObject()
            .addComments("comment before Sphere")
            .addComments("comment after Sphere")
            .addComments("comment after Appearance")
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject()
              .addComments("comment before Material")
              .addComments("comment after Material")
              .setMaterial(new MaterialObject().setDiffuseColor(1.0,0.0,0.0)))))
        .addChild(new PositionInterpolatorObject("NodePosition").setKeyValue(new MFVec3fObject(Java.to([0.0,0.0,0.0,0.0,5.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
        .addChild(new ScriptObject("MoveBall").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
" ecmascript:" + "\n" + 
"					function set_cycle(value) {" + "\n" + 
"                                                old = translation;" + "\n" + 
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);" + "\n" + 
"                                                keyValue = new MFVec3f([old, translation]);" + "\n" + 
"						// Browser.println(translation);" + "\n" + 
"					}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("50 50 0"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("old").setType("SFVec3f").setValue("0 0 0"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_cycle").setType("SFTime"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("keyValue").setType("MFVec3f")))
        .addChild(new TimeSensorObject("nodeClock").setCycleInterval(3).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
    .addChild(new ProtoDeclareObject().setName("cylinder")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOnly").setName("positionA").setType("SFVec3f"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("positionB").setType("SFVec3f")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new ShapeObject()
          .setGeometry(new ExtrusionObject("extrusion").setSpine(new MFVec3fObject(Java.to([0.0,-50.0,0.0,0.0,0.0,0.0,0.0,50.0,0.0], Java.type("float[]")))).setCreaseAngle(0.785).setCrossSection(this.extrusion_6_34_crossSection))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,1.0,0.0))))
        .addChild(new ScriptObject("MoveCylinder").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
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
"                }" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOutput").setName("spine").setType("MFVec3f").setValue("0 -50 0 0 0 0 0 50 0"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_endA").setType("SFVec3f"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("set_endB").setType("SFVec3f"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("set_endA").setProtoField("positionA"))
            .addConnect(new connectObject().setNodeField("set_endB").setProtoField("positionB"))))
        .addChild(new ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
    .addChild(new TransformObject().setScale(0.1,0.1,0.1)
      .addChild(new ProtoInstanceObject("nodeA", "node").setDEF("nodeA").setName("node")
        .addFieldValue(new fieldValueObject().setName("position").setValue("-50 -50 -50")))
      .addChild(new ProtoInstanceObject("nodeB", "node").setDEF("nodeB").setName("node")
        .addFieldValue(new fieldValueObject().setName("position").setValue("50 50 50")))
      .addChild(new ProtoInstanceObject("linkA", "cylinder").setDEF("linkA").setName("cylinder")
        .addFieldValue(new fieldValueObject().setName("positionA").setValue("0 0 0"))
        .addFieldValue(new fieldValueObject().setName("positionB").setValue("50 50 50"))))
    .addChild(new ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA"))
    .addChild(new ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return fors2_sail model
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
		var testObject = new fors2_sail();
		print ("fors2_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new fors2_sail().main();
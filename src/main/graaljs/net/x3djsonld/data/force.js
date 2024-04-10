load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> beginnings of a force directed graph in 3D. </p>
 <p> Related links: force.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.force&nbsp; Document Metadata </td>
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

	* @author John W Carlson
 */

function force
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
force.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Extrusion DEF='extrusion' crossSection field, scene-graph level=7, element #41, 34 total numbers made up of 17 2-tuple values */
	this.extrusion_7_41_crossSection = new MFVec2f() /* splitting up long array to improve readability */
	.append(new MFVec2f(Java.to([doubleToFloat(1.00),doubleToFloat(0.00),doubleToFloat(0.92),doubleToFloat(-0.38),doubleToFloat(0.71),doubleToFloat(-0.71),doubleToFloat(0.38),doubleToFloat(-0.92),doubleToFloat(0.00),doubleToFloat(-1.00),doubleToFloat(-0.38),doubleToFloat(-0.92),doubleToFloat(-0.71),doubleToFloat(-0.71),doubleToFloat(-0.92),doubleToFloat(-0.38),doubleToFloat(-1.00),doubleToFloat(-0.00),doubleToFloat(-0.92),doubleToFloat(0.38)], Java.type("float[]"))))
	.append(new MFVec2f(Java.to([doubleToFloat(-0.71),doubleToFloat(0.71),doubleToFloat(-0.38),doubleToFloat(0.92),doubleToFloat(0.00),doubleToFloat(1.00),doubleToFloat(0.38),doubleToFloat(0.92),doubleToFloat(0.71),doubleToFloat(0.71),doubleToFloat(0.92),doubleToFloat(0.38),doubleToFloat(1.00),doubleToFloat(0.00)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addMeta(new meta().setName("creator").setContent("John W Carlson"))
    .addMeta(new meta().setName("created").setContent("December 13 2015"))
    .addMeta(new meta().setName("title").setContent("force.x3d"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
    .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
    .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare().setName("node")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("position").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Transform("transform")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("position")))
            .addChild(new Shape()
              .setGeometry(new Sphere())
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)))))
            .addChild(new Transform().setTranslation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Text().setString(new MFString("\"Node\""))
                  .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(5)))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0)))))))
          .addChild(new PositionInterpolator("NodePosition").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(0.0)], Java.type("float[]")))))
          .addChild(new Script("MoveBall").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"					function set_cycle(value) {" + "\n" + 
"                                                old = translation;" + "\n" + 
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);" + "\n" + 
"                                                keyValue = new MFVec3f([old, translation]);" + "\n" + 
"						// Browser.println(translation);" + "\n" + 
"					}" + "\n")
            .addField(new field().setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("50 50 0"))
            .addField(new field().setName("old").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
            .addField(new field().setName("set_cycle").setType("SFTime").setAccessType("inputOnly"))
            .addField(new field().setName("keyValue").setType("MFVec3f").setAccessType("outputOnly")))
          .addChild(new TimeSensor("nodeClock").setCycleInterval(3).setLoop(true))
          .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
          .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
          .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
    .addChild(new ProtoDeclare().setName("cyl")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_positionA").setType("SFVec3f").setAccessType("inputOnly"))
        .addField(new field().setName("set_positionB").setType("SFVec3f").setAccessType("inputOnly")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Shape()
            .setGeometry(new Extrusion("extrusion").setCreaseAngle(0.785).setCrossSection(this.extrusion_7_41_crossSection).setSpine(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(-50.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(50.0),doubleToFloat(0.0)], Java.type("float[]")))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0)))))
          .addChild(new Script("MoveCylinder").setSourceCode("\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"                function set_endA(value) {" + "\n" + 
"		    if (typeof spine === 'undefined') {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([value, spine[1]]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_endB(value) {" + "\n" + 
"		    if (typeof spine === 'undefined') {" + "\n" + 
"		        spine = new MFVec3f([value, value]);" + "\n" + 
"		    } else {" + "\n" + 
"		        spine = new MFVec3f([spine[0], value]);" + "\n" + 
"		    }" + "\n" + 
"                }" + "\n" + 
"                " + "\n" + 
"                function set_spine(value) {" + "\n" + 
"                    spine = value;" + "\n" + 
"                }" + "\n")
            .addField(new field().setName("spine").setType("MFVec3f").setAccessType("inputOutput").setValue("0 -50 0 0 50 0"))
            .addField(new field().setName("set_endA").setType("SFVec3f").setAccessType("inputOnly"))
            .addField(new field().setName("set_endB").setType("SFVec3f").setAccessType("inputOnly"))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_endA").setProtoField("set_positionA"))
              .addConnect(new connect().setNodeField("set_endB").setProtoField("set_positionB"))))
          .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")))))
    .addChild(new Transform("HoldsContent").setScale(doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1))
      .addChild(new PlaneSensor("clickGenerator").setDescription("click on background to add nodes, click on nodes to add links").setMaxPosition(doubleToFloat(50.0),doubleToFloat(50.0)).setMinPosition(doubleToFloat(-50.0),doubleToFloat(-50.0)))
      .addChild(new ProtoInstance("nodeA", "node")
        .addFieldValue(new fieldValue().setName("position").setValue("0.0 0.0 0.0")))
      .addChild(new ProtoInstance("nodeB", "node")
        .addFieldValue(new fieldValue().setName("position").setValue("50.0 50.0 50.0")))
      .addChild(new ProtoInstance("nodeC", "node")
        .addFieldValue(new fieldValue().setName("position").setValue("-50.0 -50.0 -50.0")))
      .addChild(new ProtoInstance("nodeD", "node")
        .addFieldValue(new fieldValue().setName("position").setValue("50.0 50.0 -50.0")))
      .addChild(new ProtoInstance("linkA", "cyl")
        .addFieldValue(new fieldValue().setName("set_positionA").setValue("0 0 0"))
        .addFieldValue(new fieldValue().setName("set_positionB").setValue("50 50 50")))
      .addChild(new ProtoInstance("linkB", "cyl")
        .addFieldValue(new fieldValue().setName("set_positionA").setValue("0 0 0"))
        .addFieldValue(new fieldValue().setName("set_positionB").setValue("-50 -50 -50")))
      .addChild(new ProtoInstance("linkC", "cyl")
        .addFieldValue(new fieldValue().setName("set_positionA").setValue("50 50 50"))
        .addFieldValue(new fieldValue().setName("set_positionB").setValue("50 50 -50"))))
    .addChild(new Script("clickHandler").setSourceCode("\n" + 
"	" + "\n" + 
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
      .addField(new field().setName("counter").setType("SFInt32").setAccessType("inputOutput").setValue("0"))
      .addField(new field().setName("node_changed").setType("SFNode").setAccessType("outputOnly"))
      .addField(new field().setName("add_node").setType("SFBool").setAccessType("inputOnly").setValue("false"))
      .addComments(Java.to(["",
"            <field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">",
"                <Transform USE=\"HoldsContent\"/>",
"            </field>"], Java.type("java.lang.String[]"))))
    .addChild(new ROUTE().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB"))
    .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA"))
    .addChild(new ROUTE().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return force model
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
		var testObject = new force();
		print ("force execution self-validation test results: " + testObject.validateSelf());
	}
}
new force().main();
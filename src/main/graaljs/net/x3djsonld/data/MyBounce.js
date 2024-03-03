load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> 3 prismatic spheres. </p>
 <p> Related links: MyBounce.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.MyBounce&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="MyBounce.x3d">MyBounce.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 3 prismatic spheres </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d</a> </td>
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

	* @author John Carlson
 */

function MyBounce
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
MyBounce.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addComponent(new component().setName("Scripting").setLevel(1))
    .addMeta(new meta().setName("title").setContent("MyBounce.x3d"))
    .addMeta(new meta().setName("creator").setContent("John Carlson"))
    .addMeta(new meta().setName("description").setContent("3 prismatic spheres"))
    .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/SFVec3f.x3d")))
  .setScene(new Scene()
    .addChild(new NavigationInfo())
    .addChild(new Transform("transform")
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.7),doubleToFloat(.7)).setSpecularColor(doubleToFloat(.5),doubleToFloat(.5),doubleToFloat(.5))))
        .setGeometry(new Sphere())))
    .addChild(new Script("Bounce2").setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"			function newBubble() {" + "\n" + 
"			    translation = new SFVec3f(0, 0, 0);" + "\n" + 
"			    velocity = new SFVec3f(" + "\n" + 
"			    	Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5," + "\n" + 
"				Math.random() - 0.5);" + "\n" + 
"			}" + "\n" + 
"			function set_fraction() {" + "\n" + 
"			    translation = new SFVec3f(" + "\n" + 
"			    	translation.x + velocity.x," + "\n" + 
"				translation.y + velocity.y," + "\n" + 
"				translation.z + velocity.z);" + "\n" + 
"				if (Math.abs(translation.x) > 10) {" + "\n" + 
"					newBubble();" + "\n" + 
"				} else if (Math.abs(translation.y) > 10) {" + "\n" + 
"					newBubble();" + "\n" + 
"				} else if (Math.abs(translation.z) > 10) {" + "\n" + 
"					newBubble();" + "\n" + 
"				} else {" + "\n" + 
"					velocity = new SFVec3f(" + "\n" + 
"						velocity.x + Math.random() * 0.2 - 0.1," + "\n" + 
"						velocity.y + Math.random() * 0.2 - 0.1," + "\n" + 
"						velocity.z + Math.random() * 0.2 - 0.1" + "\n" + 
"					);" + "\n" + 
"				}" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function initialize() {" + "\n" + 
"			     newBubble();" + "\n" + 
"			}" + "\n")
      .addField(new field().setName("set_translation").setType("SFVec3f").setAccessType("inputOnly").setValue("0 0 0"))
      .addField(new field().setName("translation_changed").setType("SFVec3f").setAccessType("outputOnly").setValue("0 0 0"))
      .addField(new field().setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
      .addField(new field().setName("velocity").setType("SFVec3f").setAccessType("inputOutput").setValue("0 0 0"))
      .addField(new field().setName("set_fraction").setType("SFTime").setAccessType("inputOnly")))
    .addChild(new TimeSensor("TourTime").setCycleInterval(0.150).setLoop(true))
    .addChild(new ROUTE().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce2").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Bounce2").setFromField("translation_changed").setToNode("transform").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MyBounce model
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
		var testObject = new MyBounce();
		print ("MyBounce execution self-validation test results: " + testObject.validateSelf());
	}
}
new MyBounce().main();
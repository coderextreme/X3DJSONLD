load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene JoeExample. </p>
 <p> Related links: JoeExample.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.JoeExample&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="Scripting.x3d">Scripting.x3d</a> </td>
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

 */

function JoeExample
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
JoeExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("Scripting.x3d")))
  .setScene(new Scene()
    .addChild(new Script("OpenVault").setSourceCode("\n" + 
"\n" + 
"      " + "\n" + 
"\n" + 
"      ecmascript:" + "\n" + 
"\n" + 
"      function combinationEntered (value) {" + "\n" + 
"\n" + 
"        unlocked = value;" + "\n" + 
"\n" + 
"      }" + "\n" + 
"\n" + 
"      function openVault(value) {" + "\n" + 
"\n" + 
"      if (unlocked) vaultUnlocked = value;" + "\n" + 
"\n" + 
"      }" + "\n")
      .addField(new field().setName("openVault").setType("SFTime").setAccessType("inputOnly"))
      .addField(new field().setName("combinationEntered").setType("SFBool").setAccessType("inputOnly"))
      .addField(new field().setName("vaultUnlocked").setType("SFTime").setAccessType("outputOnly"))
      .addField(new field().setName("unlocked").setType("SFBool").setAccessType("initializeOnly").setValue("false")))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0))))
      .setGeometry(new Sphere()))
    .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setMinBack(1000).setMinFront(1000)
      .setSource(new AudioClip("Click").setDescription("clicking sound").setStopTime(1).setUrl(new MFString("\"../resources/chandubabamusic1.wav\""))))
    .addChild(new TouchSensor("TS"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("isOver").setToNode("OpenVault").setToField("combinationEntered"))
    .addChild(new ROUTE().setFromNode("TS").setFromField("touchTime").setToNode("OpenVault").setToField("openVault"))
    .addChild(new ROUTE().setFromNode("OpenVault").setFromField("vaultUnlocked").setToNode("Click").setToField("startTime")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JoeExample model
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
		var testObject = new JoeExample();
		print ("JoeExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new JoeExample().main();
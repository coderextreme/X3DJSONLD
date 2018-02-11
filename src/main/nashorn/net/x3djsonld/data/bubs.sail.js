load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Tour around a prismatic sphere. </p>
 <p> Related links: bubs_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bubs_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubs.x3d">bubs.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Tour around a prismatic sphere </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/bubs.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/bubs.x3d</a> </td>
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

	* @author John Carlson
 */

function bubs_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
bubs_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("bubs.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
    .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubs.x3d")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\"")))
    .addChild(new ViewpointObject().setDescription("Bubbles in action").setPosition(0.0,0.0,4.0).setOrientation(1.0,0.0,0.0,0.0))
    .addChild(new BackgroundObject().setBackUrl(new MFStringObject("\"../resources/images/BK.png\" \"https://coderextreme.net/X3DJSONLD/images/BK.png\"")).setBottomUrl(new MFStringObject("\"../resources/images/BT.png\" \"https://coderextreme.net/X3DJSONLD/images/BT.png\"")).setFrontUrl(new MFStringObject("\"../resources/images/FR.png\" \"https://coderextreme.net/X3DJSONLD/images/FR.png\"")).setLeftUrl(new MFStringObject("\"../resources/images/LF.png\" \"https://coderextreme.net/X3DJSONLD/images/LF.png\"")).setRightUrl(new MFStringObject("\"../resources/images/RT.png\" \"https://coderextreme.net/X3DJSONLD/images/RT.png\"")).setTopUrl(new MFStringObject("\"../resources/images/TP.png\" \"https://coderextreme.net/X3DJSONLD/images/TP.png\"")))
    .addChild(new ProtoDeclareObject().setName("Bubble")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("transform")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject().setRadius(0.25))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.2).setDiffuseColor(1.0,0.0,0.0))))
          .addChild(new ScriptObject("bounce").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);" + "\n" + 
"\n" + 
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(value) {" + "\n" + 
"    translation = new SFVec3f(	translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z);" + "\n" + 
"    scale = new SFVec3f(scale.x + scalvel.x, scale.y + scalvel.y, scale.z + scalvel.z);" + "\n" + 
"    // if you get to far away or too big, explode" + "\n" + 
"    if ( Math.abs(translation.x) > 256) {" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.y) > 256) {" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if ( Math.abs(translation.z) > 256) {" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.x) > 20) {" + "\n" + 
"	scale.x = scale.x/20;" + "\n" + 
"	translation.x = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.y) > 20) {" + "\n" + 
"	scale.y = scale.y/20;" + "\n" + 
"	translation.y = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"    if (Math.abs(scale.z) > 20) {" + "\n" + 
"	scale.z = scale.z/20;" + "\n" + 
"	translation.z = 0;" + "\n" + 
"	initialize();" + "\n" + 
"    }" + "\n" + 
"}" + "\n" + "]]>"
)
            .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("velocity").setType("SFVec3f").setValue("0 0 0"))
            .addField(new fieldObject().setAccessType("inputOutput").setName("scalvel").setType("SFVec3f").setValue("0 0 0"))
            .addField(new fieldObject().setAccessType("inputOnly").setName("set_fraction").setType("SFFloat")))
          .addChild(new TimeSensorObject("bubbleClock").setCycleInterval(10).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
          .addChild(new ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
          .addChild(new ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
    .addChild(new ProtoInstanceObject("bubbleA", "Bubble").setDEF("bubbleA").setName("Bubble"))
    .addChild(new ProtoInstanceObject("bubbleB", "Bubble").setDEF("bubbleB").setName("Bubble"))
    .addChild(new ProtoInstanceObject("bubbleC", "Bubble").setDEF("bubbleC").setName("Bubble"))
    .addChild(new ProtoInstanceObject("bubbleD", "Bubble").setDEF("bubbleD").setName("Bubble")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bubs_sail model
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
		var testObject = new bubs_sail();
		print ("bubs_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new bubs_sail().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Generic Heads Up Display (HUD) prototype to keep children on screen. </p>
 <p> Related links: <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype_sail.java">HeadsUpDisplayPrototype_sail.java</a> source, <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototypeIndex.html" target="_top">HeadsUpDisplayPrototype catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d">HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Generic Heads Up Display (HUD) prototype to keep children on screen. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 9 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 January 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> HUD Heads Up Display </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/HeadsUpDisplays/../../license.html">../../license.html</a> </td>
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

	* @author Don Brutzman
 */

function HeadsUpDisplayPrototype_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HeadsUpDisplayPrototype_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: field appinfo field, scene-graph level=5, element #12, 28 total values */
	this.field_dragChildren_5_12_appinfo = new SFStringObject("Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.");

	/** Large attribute array: Text string field, scene-graph level=5, element #61, 21 total values */
	this.Text_5_61_string = new MFStringObject(new MFStringObject("\"HeadsUpDisplayPrototype.x3d\" \"is a Prototype definition file.\" \"\" \"To see an example scene using this node\" \"click this text to view\" \"HeadsUpDisplayExample.x3d\""));
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Generic Heads Up Display (HUD) prototype to keep children on screen."))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("9 November 2003"))
    .addMeta(new metaObject().setName("modified").setContent("14 January 2014"))
    .addMeta(new metaObject().setName("subject").setContent("HUD Heads Up Display"))
    .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../../license.html")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("HeadsUpDisplay positions child geometry in screen space, movable by the user")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("Displayed subscene positioned as a HUD.")
          .addComments(" default is null array of nodes "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("dragChildren").setType("MFNode").setAppinfo(this.field_dragChildren_5_12_appinfo)
          .addComments(" default is null array of nodes "))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("locationOffset").setType("SFVec3f").setValue("-2 -2 0").setAppinfo("Modified screen location and distance (for size)."))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("false").setAppinfo("Enable/disable console output for troubleshooting.")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addChild(new ProximitySensorObject("WhereSensor").setSize(1000000000.0,1000000000.0,1000000000.0)
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("center").setProtoField("locationOffset"))))
          .addChild(new TransformObject("FixedLocation")
            .addChild(new TransformObject("MovableLocation")
              .addChild(new TransformObject("LocationOffset")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("locationOffset")))
                .addChild(new TransformObject().setTranslation(0.0,0.0,-10.0)
                  .addChild(new GroupObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
                  .addChild(new GroupObject("PlaneMovementSensorGroup")
                    .addChild(new GroupObject("DragGeometry")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("children").setProtoField("dragChildren"))))
                    .addChild(new PlaneSensorObject("PlaneMovementSensor").setDescription("click and drag to move interface")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("offset").setProtoField("locationOffset"))))
                    .addChild(new VisibilitySensorObject("MovementVisibilitySensor"))
                    .addChild(new ScriptObject("VisibilityControlScript").setSourceCode("\n" + 
"                      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function tracePrint (text)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[HeadsUpDisplayPrototype VisibilityControlScript] ' + text);" + "\n" + 
"}" + "\n" + 
"function setIsVisible (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	isVisible = value;" + "\n" + 
"	tracePrint('isVisible=' + value);" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorIsActive (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	tracePrint('PlaneSensor isActive=' + value);" + "\n" + 
"\n" + 
"	if (value == false)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('planeSensorTranslation=' + planeSensorTranslation);" + "\n" + 
"		if (isVisible)" + "\n" + 
"		{" + "\n" + 
"			translationChanged = planeSensorTranslation;" + "\n" + 
"		}" + "\n" + 
"		else" + "\n" + 
"		{" + "\n" + 
"			// fell off screen, reset to center" + "\n" + 
"			translationChanged = new SFVec3f(0, 0, 0);" + "\n" + 
"			translationOffsetChanged  = new SFVec3f(0, 0, 0);" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function setPlaneSensorTranslation (value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	planeSensorTranslation = value;" + "\n" + 
"	tracePrint('planeSensorTranslation=' + value);" + "\n" + 
"}" + "\n")
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("isVisible").setType("SFBool").setValue("true"))
                      .addField(new fieldObject().setAccessType("initializeOnly").setName("planeSensorTranslation").setType("SFVec3f").setValue("0 0 0"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setIsVisible").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setPlaneSensorIsActive").setType("SFBool"))
                      .addField(new fieldObject().setAccessType("inputOnly").setName("setPlaneSensorTranslation").setType("SFVec3f"))
                      .addField(new fieldObject().setAccessType("outputOnly").setName("translationChanged").setType("SFVec3f"))
                      .addField(new fieldObject().setAccessType("outputOnly").setName("translationOffsetChanged").setType("SFVec3f"))
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
                    .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setPlaneSensorIsActive"))
                    .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("VisibilityControlScript").setToField("setPlaneSensorTranslation"))
                    .addChild(new ROUTEObject().setFromNode("MovementVisibilitySensor").setFromField("isActive").setToNode("VisibilityControlScript").setToField("setIsVisible")))))
              .addChild(new ROUTEObject().setFromNode("PlaneMovementSensor").setFromField("translation_changed").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("VisibilityControlScript").setFromField("translationChanged").setToNode("MovableLocation").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("VisibilityControlScript").setFromField("translationOffsetChanged").setToNode("PlaneMovementSensor").setToField("set_offset"))))
          .addChild(new ROUTEObject().setFromNode("WhereSensor").setFromField("position_changed").setToNode("FixedLocation").setToField("set_translation"))
          .addChild(new ROUTEObject().setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("FixedLocation").setToField("set_rotation")))))
    .addComments(" ==================== ")
    .addChild(new BackgroundObject().setGroundColor(new MFColorObject(Java.to([0.1,0.1,0.3], Java.type("float[]")))).setSkyColor(new MFColorObject(Java.to([0.5,0.5,0.1], Java.type("float[]")))))
    .addChild(new AnchorObject().setDescription("HeadsUpDisplayExample").setParameter(new MFStringObject("\"target=_blank\"")).setUrl(new MFStringObject("\"HeadsUpDisplayExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayrExample.x3d\" \"HeadsUpDisplayExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayExample.wrl\""))
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0)))
        .setGeometry(new TextObject().setString(this.Text_5_61_string)
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HeadsUpDisplayPrototype_sail model
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
		var testObject = new HeadsUpDisplayPrototype_sail();
		print ("HeadsUpDisplayPrototype_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new HeadsUpDisplayPrototype_sail().main();
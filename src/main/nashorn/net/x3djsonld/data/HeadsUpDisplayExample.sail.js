load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen. </p>
 <p> Related links: <a href="../../../Chapter14Prototypes/HeadsUpDisplayExample_sail.java">HeadsUpDisplayExample_sail.java</a> source, <a href="../../../Chapter14Prototypes/HeadsUpDisplayExampleIndex.html" target="_top">HeadsUpDisplayExample catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter14Prototypes/HeadsUpDisplayExample.x3d">HeadsUpDisplayExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Leonard Daly and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 July 2006 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 24 October 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter14Prototypes/HeadsUpDisplayPrototype.x3d">HeadsUpDisplayPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com" target="_blank">http://X3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">http://www.web3d.org/x3d/content/examples/X3dResources.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright 2006, Daly Realism and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D book, X3D graphics, X3D-Edit, <a href="http://www.x3dGraphics.com" target="_blank">http://www.x3dGraphics.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter14Prototypes/../license.html">../license.html</a> </td>
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

	* @author Leonard Daly and Don Brutzman
 */

function HeadsUpDisplayExample_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HeadsUpDisplayExample_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayExample.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
    .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("15 July 2006"))
    .addMeta(new metaObject().setName("modified").setContent("24 October 2016"))
    .addMeta(new metaObject().setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
    .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
    .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addComments(" Simple Heads-Up Display (HUD) Prototype\\n \\n Manages the display of a HUD and maintains its position on the screen.\\n Changes to fieldOfView (in Viewpoint node) will change screen position\\n \\n Fields:\\n hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\\n hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\\n position_changed Current viewer location (outputOnly - SFVec3f)\\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\\n \\n \\n ")
    .addChild(new ExternProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new MFStringObject("\"HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("screenOffset").setType("SFVec3f").setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
      .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode").setAppinfo("X3D content positioned at HUD offset"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("position_changed").setType("SFVec3f").setAppinfo("HUD position update (in world coordinates) relative to original location"))
      .addField(new fieldObject().setAccessType("outputOnly").setName("orientation_changed").setType("SFRotation").setAppinfo("HUD orientation update relative to original location")))
    .addChild(new BackgroundObject("SandyShallowBottom").setSkyAngle(Java.to([0.04,0.05,0.1,1.309,1.570], Java.type("float[]"))).setGroundAngle(Java.to([0.05,1.52,1.56,1.5707], Java.type("float[]"))).setGroundColor(new MFColorObject(Java.to([0.2,0.2,0.0,0.3,0.3,0.0,0.5,0.5,0.3,0.1,0.3,0.4,0.0,0.2,0.4], Java.type("float[]")))).setSkyColor(new MFColorObject(Java.to([0.8,0.8,0.2,0.8,0.8,0.2,0.1,0.1,0.6,0.1,0.1,0.6,0.1,0.25,0.8,0.6,0.6,0.9], Java.type("float[]")))))
    .addChild(new ViewpointObject().setDescription("Heads-up display (HUD)"))
    .addComments(" ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence ")
    .addChild(new ProtoInstanceObject("HeadsUpDisplayInstance", "HeadsUpDisplay").setDEF("HeadsUpDisplayInstance").setName("HeadsUpDisplay")
      .addComments(" example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view ")
      .addFieldValue(new fieldValueObject().setName("screenOffset").setValue("-0.75 1 -5"))
      .addFieldValue(new fieldValueObject().setName("children")
        .addChild(new ShapeObject()
          .setGeometry(new TextObject().setString(new MFStringObject("\"HUD text stays fixed\" \"while user navigates\""))
            .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setSize(0.3)))
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(0.894118,0.819608,1.0))))))
    .addChild(new InlineObject().setUrl(new MFStringObject("\"../HelloWorld.x3d\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d\" \"../HelloWorld.wrl\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl\""))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HeadsUpDisplayExample_sail model
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
		var testObject = new HeadsUpDisplayExample_sail();
		print ("HeadsUpDisplayExample_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new HeadsUpDisplayExample_sail().main();
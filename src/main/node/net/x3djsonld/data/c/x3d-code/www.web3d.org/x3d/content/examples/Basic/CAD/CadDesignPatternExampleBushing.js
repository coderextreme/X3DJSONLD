var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace. </p>
 <p> Related links: <a href="../../../CAD/CadDesignPatternExampleBushing.java">CadDesignPatternExampleBushing.java</a> source, <a href="../../../CAD/CadDesignPatternExampleBushingIndex.html" target="_top">CadDesignPatternExampleBushing catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushing.x3d">CadDesignPatternExampleBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 June 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Only InstantReality, X3DOM, OctagaVs and Xj3D are properly handling geometry of Disk2D end caps </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingInstantReality.png">CadDesignPatternExampleBushingInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingBsContact.png">CadDesignPatternExampleBushingBsContact.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingCobweb.png">CadDesignPatternExampleBushingCobweb.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingFreeX3d.png">CadDesignPatternExampleBushingFreeX3d.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingInstantReality.png">CadDesignPatternExampleBushingInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingOctagaVs.png">CadDesignPatternExampleBushingOctagaVs.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingView3dscene.png">CadDesignPatternExampleBushingView3dscene.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingX3dom.png">CadDesignPatternExampleBushingX3dom.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/CadDesignPatternExampleBushingXj3d.png">CadDesignPatternExampleBushingXj3d.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/member-only/mantis/view.php?id=528" target="_blank">https://www.web3d.org/member-only/mantis/view.php?id=528</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D CAD CADInterchange profile </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Vince Marchetti, Don Brutzman
 */

function CadDesignPatternExampleBushing
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CadDesignPatternExampleBushing.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("CADInterchange").setVersion("3.2")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("CADGeometry").setLevel(2))
    .addComponent((new autoclass.component()).setName("Geometry2D").setLevel(2))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(1))
    .addComponent((new autoclass.component()).setName("Shape").setLevel(4))
    .addMeta((new autoclass.meta()).setName("title").setContent("CadDesignPatternExampleBushing.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Design pattern examples demonstrating proper hierarchy of CAD nodes: CADLayer, CADAssembly, CADPart, and then CADFace."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Vince Marchetti, Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Xj3D, http://www.xj3d.org"))
    .addMeta((new autoclass.meta()).setName("created").setContent("24 June 2012"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Only InstantReality, X3DOM, OctagaVs and Xj3D are properly handling geometry of Disk2D end caps"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingInstantReality.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingBsContact.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingCobweb.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingFreeX3d.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingInstantReality.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingOctagaVs.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingView3dscene.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingX3dom.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("CadDesignPatternExampleBushingXj3d.png"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D CAD CADInterchange profile"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadDesignPatternExampleBushing.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("CadDesignPatternExampleBushing.x3d"))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.9607843,1.0,0.9607843]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Hello CAD bushing").setPosition(0.0,5.0,15.0).setOrientation(1.0,0.0,0.0,-0.321751))
    .addChild((new autoclass.CADAssembly()).setName("DesignPatternAssembly")
      .addChild((new autoclass.CADPart()).setName("CADPartSides")
        .addComments(" the rotation and translation attributes serve to position the bushing within the assembly ")
        .addChild((new autoclass.CADFace()).setName("outerSurface")
          .setShape((new autoclass.Shape())
            .addComments(" note solid='true' and so one-sided external rendering only ")
            .setGeometry((new autoclass.Cylinder()).setRadius(2).setHeight(3).setBottom(false).setTop(false))
            .setAppearance((new autoclass.Appearance("AppearanceGrey"))
              .setMaterial((new autoclass.Material())))))
        .addChild((new autoclass.CADFace()).setName("innerSurface")
          .setShape((new autoclass.Shape())
            .addComments(" note solid='false' and so two-sided internal + external rendering ")
            .setGeometry((new autoclass.Cylinder()).setHeight(3).setBottom(false).setSolid(false).setTop(false))
            .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey")))))
      .addChild((new autoclass.CADPart()).setName("CADPartTop").setTranslation(0.0,1.5,0.0).setRotation(1.0,0.0,0.0,1.5708)
        .addChild((new autoclass.CADFace()).setName("topCap")
          .setShape((new autoclass.Shape())
            .setGeometry((new autoclass.Disk2D()).setInnerRadius(1).setOuterRadius(2))
            .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey")))))
      .addChild((new autoclass.CADPart()).setName("CADPartBottom").setRotation(-1.0,0.0,0.0,1.5708).setTranslation(0.0,-1.5,0.0)
        .addChild((new autoclass.CADFace()).setName("bottomCap")
          .setShape((new autoclass.Shape())
            .setGeometry((new autoclass.Disk2D()).setInnerRadius(1).setOuterRadius(2))
            .setAppearance((new autoclass.Appearance()).setUSE("AppearanceGrey")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CadDesignPatternExampleBushing model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new CadDesignPatternExampleBushing();
		console.log ("CadDesignPatternExampleBushing execution self-validation test results: " + testObject.validateSelf());
	}
}
new CadDesignPatternExampleBushing().main();
process.exit(0);
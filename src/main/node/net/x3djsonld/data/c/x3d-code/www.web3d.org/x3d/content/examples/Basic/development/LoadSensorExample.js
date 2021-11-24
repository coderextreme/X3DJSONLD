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
 * <p> LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success. </p>
 <p> Related links: <a href="../../../development/LoadSensorExample.java">LoadSensorExample.java</a> source, <a href="../../../development/LoadSensorExampleIndex.html" target="_top">LoadSensorExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LoadSensorExample.x3d">LoadSensorExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 August 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Alan Hudson </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Alan Hudson
 */

function LoadSensorExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LoadSensorExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #12, 40 total values */
	this.ExternProtoDeclare_LoadSensor_3_12_appinfo = new autoclass.SFString("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LoadSensorExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success."))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 August 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Alan Hudson"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97."))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" Do not copy this ExternProtoDeclare, it is used for providing automatic support in X3dToVrml97.xslt and X3D-Edit ")
    .addChild((new autoclass.WorldInfo()).setTitle("LoadSensorExample.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("LoadSensor").setAppinfo(this.ExternProtoDeclare_LoadSensor_3_12_appinfo).setUrl(new autoclass.MFString("\"LoadSensorPrototype.wrl#LoadSensor\" \"https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor\" \"LoadSensorPrototype.x3d#LoadSensor\" \"https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor\"")).setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor")
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("enabled").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("timeOut").setType("SFTime"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("watchList").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_watchList").setType("MFNode"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("isLoaded").setType("SFBool"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("loadTime").setType("SFTime"))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("progress").setType("SFFloat"))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("metadata").setType("SFNode")))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Viewpoint("NotLoadedView")).setDescription("Not loaded texture").setPosition(0.0,0.0,6.0))
      .addChild((new autoclass.Viewpoint("ActiveView")).setDescription("Loading textures"))
      .addChild((new autoclass.Viewpoint("LoadedView")).setDescription("Texture loading complete").setPosition(0.0,0.0,-10.0).setOrientation(0.0,1.0,0.0,3.14159))
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Sphere()))
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture("EarthImage")).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo-small.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif\""))))))
        .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()))
            .setAppearance((new autoclass.Appearance())
              .setTexture((new autoclass.ImageTexture("JavaBoardImage")).setUrl(new autoclass.MFString("\"JavaBoardSmileForTheCamera.jpg\" \"https://www.web3d.org/x3d/content/examples/Basic/development/JavaBoardSmileForTheCamera.jpg\"")))))))
      .addChild((new autoclass.LoadSensor("Loader")).setTimeOut(4)
        .addWatchList((new autoclass.ImageTexture()).setUSE("EarthImage"))
        .addWatchList((new autoclass.ImageTexture()).setUSE("JavaBoardImage")))
      .addChild((new autoclass.ROUTE()).setFromNode("Loader").setFromField("isActive").setToNode("ActiveView").setToField("set_bind"))
      .addChild((new autoclass.ROUTE()).setFromNode("Loader").setFromField("isLoaded").setToNode("LoadedView").setToField("set_bind"))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,7.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"LoadSensor active\""))
            .setFontStyle((new autoclass.FontStyle("Font")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.5)))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.5,0.1)))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-7.0).setRotation(0.0,1.0,0.0,3.14159)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"LoadSensor success\""))
            .setFontStyle((new autoclass.FontStyle()).setUSE("Font")))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.1,0.5,0.1)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LoadSensorExample model
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
		var testObject = new LoadSensorExample();
		console.log ("LoadSensorExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new LoadSensorExample().main();
process.exit(0);
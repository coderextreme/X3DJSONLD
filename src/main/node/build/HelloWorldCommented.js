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
 * <p> Numerous comments added to simple X3D scene example for testing JSON encoding alternatives. </p>
 <p> Related links: <a href="../../../HelloWorldScenes/NeedClassName.java">NeedClassName.java</a> source, <a href="../../../HelloWorldScenes/HelloWorldCommentedIndex.html" target="_top">HelloWorldCommented catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HelloWorldScenes/HelloWorldCommented.x3d">HelloWorldCommented.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Numerous comments added to simple X3D scene example for testing JSON encoding alternatives. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 19 December 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HelloWorldScenes/HelloWorldCommented.json">HelloWorldCommented.json</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HelloWorldScenes/HelloWorldCommentedOriginalEncoding.json">HelloWorldCommentedOriginalEncoding.json</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../HelloWorldScenes/HelloWorldCommentedAlternativeEncoding.json">HelloWorldCommentedAlternativeEncoding.json</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d" target="_blank">https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

	* @author Don Brutzman
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
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("HelloWorldCommented.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Numerous comments added to simple X3D scene example for testing JSON encoding alternatives."))
    .addMeta((new autoclass.meta()).setName("created").setContent("19 December 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("info").setContent("HelloWorldCommented.json is most current, HelloWorldCommentedOriginalEncoding.json and HelloWorldCommentedAlternativeEncoding.json were experimental."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommented.json"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommentedOriginalEncoding.json"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldCommentedAlternativeEncoding.json"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorldCommented.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
  .setScene((new autoclass.Scene())
    .addComments(" Example scene to illustrate comments interspersed among X3D nodes and fields (XML elements and attributes) ")
    .addComments(" WorldInfo begin ")
    .addChild((new autoclass.WorldInfo()).setTitle("Hello world!"))
    .addComments(" WorldInfo complete, Group begin ")
    .addChild((new autoclass.Group())
      .addComments(" Viewpoint begin ")
      .addChild((new autoclass.Viewpoint("ViewUpClose")).setDescription("Hello world!").setCenterOfRotation(0.0,-1.0,0.0).setPosition(0.0,-1.0,7.0))
      .addComments(" Viewpoint complete, Transform begin ")
      .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,3.0)
        .addComments(" Shape begin ")
        .addChild((new autoclass.Shape())
          .addComments(" Sphere begin ")
          .setGeometry((new autoclass.Sphere()))
          .addComments(" Sphere complete, Appearance begin ")
          .setAppearance((new autoclass.Appearance())
            .addComments(" Material begin ")
            .setMaterial((new autoclass.Material("MaterialLightBlue")).setDiffuseColor(0.1,0.5,1.0))
            .addComments(" Material complete, ImageTexture begin ")
            .setTexture((new autoclass.ImageTexture("ImageCloudlessEarth")).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo.jpg\" \"earth-topo-small.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif\"")))
            .addComments(" ImageTexture complete "))
          .addComments(" Appearance complete "))
        .addComments(" Shape complete "))
      .addComments(" Transform complete, Transform begin ")
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addComments(" Shape begin ")
        .addChild((new autoclass.Shape())
          .addComments(" Text begin ")
          .setGeometry((new autoclass.Text("TextMessage")).setString(new autoclass.MFString("\"Hello\" \"world!\""))
            .addComments(" FontStyle begin ")
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")))
            .addComments(" FontStyle complete "))
          .addComments(" Text complete, Appearance begin ")
          .setAppearance((new autoclass.Appearance())
            .addComments(" Material begin ")
            .setMaterial((new autoclass.Material()))
            .addComments(" Material complete "))
          .addComments(" Appearance complete "))
        .addComments(" Shape complete "))
      .addComments(" Transform complete "))
    .addComments(" Group complete "));
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();
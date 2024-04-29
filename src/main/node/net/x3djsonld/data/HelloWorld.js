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
 * <p> Simple X3D model example: Hello World!. </p>
 <p> Related links: <a href="../../../Chapter01TechnicalOverview/HelloWorld.java">HelloWorld.java</a> source, <a href="../../../Chapter01TechnicalOverview/HelloWorldIndex.html" target="_top">HelloWorld catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter01TechnicalOverview/HelloWorld.x3d">HelloWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple X3D model example: Hello World! </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 30 October 2000 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Chapter01TechnicalOverview/HelloWorld.tall.png">HelloWorld.tall.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://en.wikipedia.org/wiki/Hello_world" target="_blank">http://en.wikipedia.org/wiki/Hello_world</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program" target="_blank">https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/%22Hello,_World!%22_program" target="_blank">https://en.wikipedia.org/wiki/"Hello,_World!"_program</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world" target="_blank">http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.HelloWorldExample.net" target="_blank">http://www.HelloWorldExample.net</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org" target="_blank">https://www.web3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/realtime-3d/news/internationalization-x3d" target="_blank">https://www.web3d.org/realtime-3d/news/internationalization-x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HelloWorld.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HelloWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorld.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter01TechnicalOverview/HelloWorld.x3dv">HelloWorld.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter01TechnicalOverview/HelloWorld.x3db">HelloWorld.x3db</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorld.xhtml </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Chapter01TechnicalOverview/HelloWorld.json">HelloWorld.json</a> </td>
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

function HelloWorld
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HelloWorld.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComments(" Alternate encodings: VRML97, X3D ClassicVRML Encoding, X3D Compressed Binary Encoding (CBE), X3DOM, JSON ")
    .addMeta((new autoclass.meta()).setName("title").setContent("HelloWorld.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Simple X3D model example: Hello World!"))
    .addMeta((new autoclass.meta()).setName("created").setContent("30 October 2000"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("HelloWorld.tall.png"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://en.wikipedia.org/wiki/Hello_world"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/Hello#.22Hello.2C_World.22_computer_program"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://en.wikipedia.org/wiki/\"Hello,_World!\"_program"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://en.wikibooks.org/w/index.php?title=Computer_Programming/Hello_world"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://www.HelloWorldExample.net"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/realtime-3d/news/internationalization-x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/HelloWorldScenes/HelloWorld.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HelloWorld.x3d"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorld.wrl"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorld.x3dv"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorld.x3db"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorld.xhtml"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorld.json")))
  .setScene((new autoclass.Scene())
    .addComments(" Example scene to illustrate X3D nodes and fields (XML elements and attributes) ")
    .addChild((new autoclass.WorldInfo()).setInfo(new autoclass.MFString("\"Example scene to illustrate a simple X3D model\"")).setTitle("Hello World!"))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Viewpoint("ViewUpClose")).setDescription("Hello world!").setCenterOfRotation(0.0,-1.0,0.0).setPosition(0.0,-1.0,7.0))
      .addChild((new autoclass.Transform()).setRotation(0.0,1.0,0.0,3.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Sphere()))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material("MaterialLightBlue")).setDiffuseColor(0.1,0.5,1.0))
            .setTexture((new autoclass.ImageTexture("ImageCloudlessEarth")).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo.jpg\" \"earth-topo-small.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif\""))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text("TextMessage")).setString(new autoclass.MFString("\"Hello\" \"world!\""))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setUSE("MaterialLightBlue")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HelloWorld model
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
		var testObject = new HelloWorld();
		console.log ("HelloWorld execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new HelloWorld().main();
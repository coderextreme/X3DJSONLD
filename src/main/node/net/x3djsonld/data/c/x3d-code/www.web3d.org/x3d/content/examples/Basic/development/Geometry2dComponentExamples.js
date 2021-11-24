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
 * <p> Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </p>
 <p> Related links: <a href="../../../development/Geometry2dComponentExamples.java">Geometry2dComponentExamples.java</a> source, <a href="../../../development/Geometry2dComponentExamplesIndex.html" target="_top">Geometry2dComponentExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamples.x3d">Geometry2dComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs). </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 16 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesBsContact.png">Geometry2dComponentExamplesBsContact.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesCobweb.png">Geometry2dComponentExamplesCobweb.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesFreeWRL.png">Geometry2dComponentExamplesFreeWRL.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesH3dViewer.png">Geometry2dComponentExamplesH3dViewer.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesInstantReality.png">Geometry2dComponentExamplesInstantReality.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesOctagaVS.png">Geometry2dComponentExamplesOctagaVS.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesView3dScene.png">Geometry2dComponentExamplesView3dScene.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExamplesX3DOM.png">Geometry2dComponentExamplesX3DOM.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentExternProtos.x3d">Geometry2dComponentExternProtos.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/Geometry2dComponentPrototypes.x3d">Geometry2dComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

function Geometry2dComponentExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Geometry2dComponentExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Geometry2D").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("Geometry2dComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Examples showing native use of X3D Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D), implemented as prototypes for backwards compatibility with VRML 97. Also provides Unfilled ProtoInstance versions of some nodes since FillProperties not possible in VRML 97. 2D nodes are considered particularly helpful for CADPart geometry and building user interfaces such as Heads-Up Displays (HUDs)."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta((new autoclass.meta()).setName("created").setContent("16 November 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesBsContact.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesCobweb.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesFreeWRL.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesH3dViewer.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesInstantReality.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesOctagaVS.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesView3dScene.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("Geometry2dComponentExamplesX3DOM.png"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentExternProtos.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("Geometry2dComponentPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("Geometry2D component nodes (Arc2D ArcClose2D Circle2D Disk2D Polyline2D Polypoint2D Rectangle2D TriangleSet2D)"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ==================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("Geometry2dComponentExamples.x3d"))
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.3,0.3,0.3]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.3,0.3,0.3]))))
    .addChild((new autoclass.Viewpoint()).setDescription("Geometry2D Component Examples").setPosition(0.0,0.0,12.0))
    .addComments(" ==================== ")
    .addComments(" Top row ")
    .addChild((new autoclass.Transform()).setTranslation(-6.0,2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("ArcClose2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.ArcClose2D()).setStartAngle(0.7).setEndAngle(3.0).setClosureType("PIE"))
        .addComments(" default radius='1' ")
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))))
    .addChild((new autoclass.Transform()).setTranslation(-2.0,2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Arc2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Arc2D()))
        .addComments(" default radius='1' startAngle='0' ")
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,0.0))))
      .addChild((new autoclass.Transform("TransparentBackdropForTouchSensor")).setTranslation(0.0,0.0,-0.5)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Rectangle2D()))
          .addComments(" default ")
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(1).setDiffuseColor(1.0,0.0,0.0))))))
    .addChild((new autoclass.Transform()).setTranslation(2.0,2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Circle2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Circle2D()))
        .addComments(" default radius='1' ")
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,0.0,0.0))))
      .addChild((new autoclass.Transform()).setUSE("TransparentBackdropForTouchSensor")))
    .addChild((new autoclass.Transform()).setTranslation(6.0,2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Disk2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Disk2D()).setInnerRadius(0.5))
        .addComments(" default outerRadius='1' ")
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.5,1.0,1.0)))))
    .addComments(" ==================== ")
    .addComments(" Bottom row ")
    .addChild((new autoclass.Transform()).setTranslation(-6.0,-2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Rectangle2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Rectangle2D()).setSize(1.0,2.0))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))))
    .addChild((new autoclass.Transform()).setTranslation(-2.0,-2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Polyline2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Polyline2D()).setLineSegments(new autoclass.MFVec2f(java.newArray("float", [-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0]))))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setEmissiveColor(1.0,0.5,1.0))))
      .addChild((new autoclass.Transform()).setUSE("TransparentBackdropForTouchSensor")))
    .addChild((new autoclass.Transform()).setTranslation(2.0,-2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("Polypoint2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Polypoint2D()).setPoint(new autoclass.MFVec2f(java.newArray("float", [-1.0,0.0,-0.5,1.0,0.0,0.0,0.5,1.0,1.0,0.0]))))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setEmissiveColor(1.0,1.0,1.0))))
      .addChild((new autoclass.Transform()).setTranslation(0.1,0.4,-0.5)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Rectangle2D("BackDrop")).setSize(2.8,2.0))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0))))
        .addChild((new autoclass.Transform()).setTranslation(0.0,-0.15,0.2)
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"PolyPoint2D\" \"5 points\""))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.25).setCssStyle("BOLD")))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material())))))))
    .addChild((new autoclass.Transform()).setTranslation(6.0,-2.0,0.0)
      .addChild((new autoclass.TouchSensor()).setDescription("TriangleSet2D"))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.TriangleSet2D()).setVertices(new autoclass.MFVec2f(java.newArray("float", [0.0,0.0,1.0,1.0,-1.0,1.0,0.0,0.0,1.0,-0.5,1.0,0.5,0.0,0.0,-2.0,-1.0,-1.0,-2.0]))))
        .setAppearance((new autoclass.Appearance())
          .setFillProperties((new autoclass.FillProperties("TestFillProperties")))
          .setLineProperties((new autoclass.LineProperties("TestLineProperties")).setLinewidthScaleFactor(1)
            .setMetadata((new autoclass.MetadataString("TestLinePropertiesMetaData")).setName("test LineProperties metadata child")))
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Geometry2dComponentExamples model
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
		var testObject = new Geometry2dComponentExamples();
		console.log ("Geometry2dComponentExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new Geometry2dComponentExamples().main();
process.exit(0);
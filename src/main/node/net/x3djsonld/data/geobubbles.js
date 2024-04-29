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
 * <p> geo bubbles. </p>
 <p> Related links: geobubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.geobubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d">geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> geo bubbles </td>
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

	* @author John Carlson
 */

function geobubbles
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
geobubbles.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Geospatial").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("geobubbles.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/geobubbles.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("geo bubbles")))
  .setScene((new autoclass.Scene())
    .addComments("Viewpoint DEF='Tour' position='0 0 4' orientation='1 0 0 0' description='Tour Views'/")
    .addComments("PositionInterpolator DEF='TourPosition' key='0 1' keyValue='-0.5 -0.5 4 -0.5 0.5 4'/")
    .addChild((new autoclass.GeoViewpoint("Tour")).setDescription("Tour Views").setOrientation(1.0,0.0,0.0,0.0).setPosition(0.0,0.0,4.0))
    .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"../resources/images/BK.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/BK.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/BT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/BT.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/FR.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/FR.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/LF.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/LF.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/RT.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/RT.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/TP.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/TP.png\"")))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Sphere()))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.7,0.7,0.7).setSpecularColor(0.5,0.5,0.5)))))
    .addChild((new autoclass.TimeSensor("TourTime")).setCycleInterval(5).setLoop(true))
    .addChild((new autoclass.GeoPositionInterpolator("TourPosition")).setKey(java.newArray("float", [0.0,1.0])).setKeyValue(new autoclass.MFVec3d(java.newArray("double", [0.0015708,0.0,4.0,0.0,0.0015708,4.0]))))
    .addChild((new autoclass.Script("RandomTourTime")).setSourceCode("ecmascript:" + "\n" + 
"\n" + 
"               function set_cycle(value) {" + "\n" + 
"                        var cartesianMult = -150;  // -150 if cartesian, 1 if geo" + "\n" + 
"                        var ov = val;" + "\n" + 
"			// Browser.print('old '+ov);" + "\n" + 
"                        do {" + "\n" + 
"                                val = Math.floor(Math.random()*2);" + "\n" + 
"                                var vc = val;" + "\n" + 
"                                positions[vc] = new SFVec3d(Math.round(Math.random()*2)*0.0015708*cartesianMult, Math.round(Math.random()*2)*0.0015708*cartesianMult, 4);" + "\n" + 
"                        } while ( positions[ov][0] === positions[vc][0] && positions[ov][1] === positions[vc][1] && positions[ov][2] === positions[vc][2]);" + "\n" + 
"			// Browser.println(positions[ov]);" + "\n" + 
"			// Browser.println(positions[vc]);" + "\n" + 
"                        position = new MFVec3d();" + "\n" + 
"                        position[0] = new SFVec3d(positions[ov][0],positions[ov][1],positions[ov][2]);" + "\n" + 
"                        position[1] = new SFVec3d(positions[vc][0],positions[vc][1],positions[vc][2]);" + "\n" + 
"               }")
      .addField((new autoclass.field()).setName("set_cycle").setType("SFTime").setAccessType("inputOnly"))
      .addField((new autoclass.field()).setName("val").setType("SFFloat").setAccessType("inputOutput").setValue("0"))
      .addField((new autoclass.field()).setName("positions").setType("MFVec3d").setAccessType("inputOutput").setValue("0.0015708 0 4 0 0.0015708 4"))
      .addField((new autoclass.field()).setName("position").setType("MFVec3d").setAccessType("inputOutput").setValue("0.0015708 0 4 0 0.0015708 4")))
    .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
    .addChild((new autoclass.ROUTE()).setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
    .addChild((new autoclass.ROUTE()).setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
    .addChild((new autoclass.ROUTE()).setFromNode("TourPosition").setFromField("geovalue_changed").setToNode("Tour").setToField("set_position")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return geobubbles model
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
		var testObject = new geobubbles();
		console.log ("geobubbles execution self-validation test results: " + testObject.validateSelf());
		process.exit();
	}
}
new geobubbles().main();
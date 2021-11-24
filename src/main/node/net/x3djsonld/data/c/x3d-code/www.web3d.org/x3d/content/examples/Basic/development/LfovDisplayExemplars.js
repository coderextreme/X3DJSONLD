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
 * <p> Simple X3D example. </p>
 <p> Related links: <a href="../../../development/LfovDisplayExemplars.java">LfovDisplayExemplars.java</a> source, <a href="../../../development/LfovDisplayExemplarsIndex.html" target="_top">LfovDisplayExemplars catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LfovDisplayExemplars.x3d">LfovDisplayExemplars.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple X3D example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 13 March 2006 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LfovDisplayExemplars.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LfovDisplayExemplars.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/license.html">license.html</a> </td>
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

function LfovDisplayExemplars
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LfovDisplayExemplars.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedFaceSet DEF='BigIFS' coordIndex field, scene-graph level=6, element #12, 1040 total numbers */
	this.BigIFS_6_12_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=7, element #12, 438 total numbers made up of 146 3-tuple values */
	this.Coordinate_7_12_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [0.5257,0.0,0.8507,0.3477,0.0,0.9376,0.4636,0.1875,0.866,0.1227,0.0,0.9924,0.2531,0.2047,0.9455,0.368,0.397,0.8408,-0.1227,0.0,0.9924,0.0,0.2116,0.9773,0.1308,0.4233,0.8965,0.2453,0.5955,0.765])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.3477,0.0,0.9376,-0.2531,0.2047,0.9455,-0.1308,0.4233,0.8965,0.0,0.6142,0.7891,0.1159,0.7501,0.6511,-0.5257,0.0,0.8507,-0.4636,0.1875,0.866,-0.368,0.397,0.8408,-0.2453,0.5955,0.765,-0.1159,0.7501,0.6511])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.8507,0.5257,0.8507,0.5257,0.0,0.866,0.4636,0.1875,0.7501,0.6511,0.1159,0.8408,0.368,0.397,0.7408,0.5844,0.3313,0.5955,0.765,0.2453,0.765,0.2453,0.5955,0.6849,0.4732,0.5541,0.5541,0.6849,0.4732])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.397,0.8408,0.368,0.6511,0.1159,0.7501,0.5844,0.3313,0.7408,0.4732,0.5541,0.6849,0.3313,0.7408,0.5844,0.1875,0.866,0.4636,0.9376,0.3477,0.0,0.9924,0.1227,0.0,0.9455,0.2531,0.2047,0.9924,0.0,0.0])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.9773,0.0,0.2116,0.8965,0.1308,0.4233,0.8965,0.0,0.4233,0.7891,0.0,0.6142,0.6511,0.0,0.7501,-0.6511,0.1159,0.7501,-0.765,0.2453,0.5955,-0.5844,0.3313,0.7408,-0.8408,0.368,0.397,-0.6849,0.4732,0.5541])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.4732,0.5541,0.6849,-0.866,0.4636,0.1875,-0.7408,0.5844,0.3313,-0.5541,0.6849,0.4732,-0.3313,0.7408,0.5844,-0.8507,0.5257,0.0,-0.7501,0.6511,0.1159,-0.5955,0.765,0.2453,-0.397,0.8408,0.368,-0.1875,0.866,0.4636])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.6511,0.0,0.7501,-0.7891,0.0,0.6142,-0.8965,0.0,0.4233,-0.8965,0.1308,0.4233,-0.9773,0.0,0.2116,-0.9455,0.2531,0.2047,-0.9924,0.0,0.0,-0.9924,0.1227,0.0,-0.9376,0.3477,0.0,-0.7501,0.6511,-0.1159])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.5955,0.765,-0.2453,-0.6142,0.7891,0.0,-0.397,0.8408,-0.368,-0.4233,0.8965,-0.1308,-0.4233,0.8965,0.1308,-0.1875,0.866,-0.4636,-0.2047,0.9455,-0.2531,-0.2116,0.9773,0.0,-0.2047,0.9455,0.2531,0.0,0.8507,-0.5257])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.9376,-0.3477,0.0,0.9924,-0.1227,0.0,0.9924,0.1227,0.0,0.9376,0.3477,-0.866,0.4636,-0.1875,-0.8408,0.368,-0.397,-0.7408,0.5844,-0.3313,-0.765,0.2453,-0.5955,-0.6849,0.4732,-0.5541,-0.5541,0.6849,-0.4732])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.6511,0.1159,-0.7501,-0.5844,0.3313,-0.7408,-0.4732,0.5541,-0.6849,-0.3313,0.7408,-0.5844,-0.5257,0.0,-0.8507,-0.4636,0.1875,-0.866,-0.368,0.397,-0.8408,-0.2453,0.5955,-0.765,-0.1159,0.7501,-0.6511,0.1875,0.866,-0.4636])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.397,0.8408,-0.368,0.2047,0.9455,-0.2531,0.5955,0.765,-0.2453,0.4233,0.8965,-0.1308,0.2116,0.9773,0.0,0.7501,0.6511,-0.1159,0.6142,0.7891,0.0,0.4233,0.8965,0.1308,0.2047,0.9455,0.2531,0.1159,0.7501,-0.6511])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.2453,0.5955,-0.765,0.3313,0.7408,-0.5844,0.368,0.397,-0.8408,0.4732,0.5541,-0.6849,0.5541,0.6849,-0.4732,0.4636,0.1875,-0.866,0.5844,0.3313,-0.7408,0.6849,0.4732,-0.5541,0.7408,0.5844,-0.3313,0.5257,0.0,-0.8507])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.6511,0.1159,-0.7501,0.765,0.2453,-0.5955,0.8408,0.368,-0.397,0.866,0.4636,-0.1875,0.3477,0.0,-0.9376,0.1227,0.0,-0.9924,-0.1227,0.0,-0.9924,-0.3477,0.0,-0.9376,0.2531,0.2047,-0.9455,0.1308,0.4233,-0.8965])))
	.append(new autoclass.MFVec3f(java.newArray("float", [0.0,0.2116,-0.9773,0.0,0.6142,-0.7891,-0.1308,0.4233,-0.8965,-0.2531,0.2047,-0.9455,0.6511,0.0,-0.7501,0.9773,0.0,-0.2116,0.8965,0.0,-0.4233,0.9455,0.2531,-0.2047,0.8965,0.1308,-0.4233,0.7891,0.0,-0.6142])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-0.6511,0.0,-0.7501,-0.7891,0.0,-0.6142,-0.8965,0.1308,-0.4233,-0.8965,0.0,-0.4233,-0.9455,0.2531,-0.2047,-0.9773,0.0,-0.2116])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LfovDisplayExemplars.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Simple X3D example"))
    .addMeta((new autoclass.meta()).setName("created").setContent("13 March 2006"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LfovDisplayExemplars.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LfovDisplayExemplars.x3d"))
    .addChild((new autoclass.Viewpoint()).setDescription("hello, world!").setPosition(0.0,1.8,-15.0))
    .addChild((new autoclass.Transform()).setTranslation(-5.0,1.5,0.0)
      .addChild((new autoclass.Transform()).setScale(2.2,1.3,2.2)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.IndexedFaceSet("BigIFS")).setDEF("BigIFS").setCreaseAngle(.01).setSolid(false).setCoordIndex(this.BigIFS_6_12_coordIndex)
            .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_7_12_point)))
          .setAppearance((new autoclass.Appearance())
            .setTexture((new autoclass.ImageTexture("WorldImage")).setUrl(new autoclass.MFString("\"earth-topo.png\" \"earth-topo-small.gif\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png\" \"https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif\""))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-0.5,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()).setSize(4.4,1.2,4.4))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.9,0.95))))))
    .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-5.0)
      .addChild((new autoclass.Transform()).setTranslation(0.0,2.25,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Cylinder()).setHeight(1.2).setRadius(2.2))
          .setAppearance((new autoclass.Appearance())
            .setTexture((new autoclass.ImageTexture()).setUSE("WorldImage")))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,1.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Cylinder()).setHeight(1.2).setRadius(2.2))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.9,0.95)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LfovDisplayExemplars model
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
		var testObject = new LfovDisplayExemplars();
		console.log ("LfovDisplayExemplars execution self-validation test results: " + testObject.validateSelf());
	}
}
new LfovDisplayExemplars().main();
process.exit(0);
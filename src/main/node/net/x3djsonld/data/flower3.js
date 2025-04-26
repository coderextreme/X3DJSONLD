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
 * <p> a flower. </p>
 <p> Related links: flower3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flower3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d">flower3.x3d</a> </td>
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
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a flower </td>
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

function flower3
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flower3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("flower3.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manual"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("a flower")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()))
    .addChild((new autoclass.DirectionalLight()).setDirection(0.0,-0.8,-0.2).setIntensity(0.5))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [1.000,1.000,1.000]))))
    .addChild((new autoclass.Viewpoint()).setDescription("One mathematical orbital").setPosition(0.0,0.0,50.0))
    .addChild((new autoclass.Transform("OrbitTransform")).setTranslation(8.0,0.0,0.0)
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.5,1.0).setSpecularColor(0.0,0.5,1.0)))
        .setGeometry((new autoclass.IndexedFaceSet("Orbit")).setDEF("Orbit").setConvex(false)
          .setCoord((new autoclass.Coordinate("OrbitCoordinates"))))))
    .addChild((new autoclass.Script("OrbitScript")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"    " + "\n" + 
"var e = 5;" + "\n" + 
"var f = 5;" + "\n" + 
"var g = 5;" + "\n" + 
"var h = 5;" + "\n" + 
"var resolution = 100;" + "\n" + 
"var t = 0;" + "\n" + 
"var p = 0;" + "\n" + 
"\n" + 
"function initialize() {" + "\n" + 
"     generateCoordinates(resolution);" + "\n" + 
"     var localci = [];" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     localci.push(i*resolution+j);" + "\n" + 
"	     localci.push(i*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j+1);" + "\n" + 
"	     localci.push((i+1)*resolution+j);" + "\n" + 
"	     localci.push(-1);" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = new MFInt32(...localci);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function generateCoordinates(resolution) {" + "\n" + 
"     var theta = 0.0;" + "\n" + 
"     var phi = 0.0;" + "\n" + 
"     var delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var localc = [];" + "\n" + 
"     for (var  i = 0; i < resolution; i++) {" + "\n" + 
"     	for (var  j = 0; j < resolution; j++) {" + "\n" + 
"		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"		localc.push(new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		));" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = new MFVec3f(...localc);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fraction(fraction, eventTime) {" + "\n" + 
"	t += 0.5;" + "\n" + 
"	p += 0.5;" + "\n" + 
"	var choice = Math.floor(Math.random() * 4);" + "\n" + 
"	switch (choice) {" + "\n" + 
"	case 0:" + "\n" + 
"		e += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 1:" + "\n" + 
"		f += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 2:" + "\n" + 
"		g += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	case 3:" + "\n" + 
"		h += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"		break;" + "\n" + 
"	}" + "\n" + 
"	if (f < 1) {" + "\n" + 
"		f = 10;" + "\n" + 
"	}" + "\n" + 
"	if (g < 1) {" + "\n" + 
"		g = 4;" + "\n" + 
"	}" + "\n" + 
"	if (h < 1) {" + "\n" + 
"		h = 4;" + "\n" + 
"	}" + "\n" + 
"	generateCoordinates(resolution);" + "\n" + 
"}" + "\n")
      .addField((new autoclass.field()).setName(set_fraction).setType(SFFloat).setAccessType(inputOnly))
      .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [coordinates]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [outputOnly.0]))))
      .addField((new autoclass.field()).setName(java.newArray("int", [coordIndexes])).setType(java.newArray("int", [MFInt32])).setAccessType(java.newArray("int", [outputOnly])))
      .addComments(java.newArray("java.lang.String",["",
"        <field accessType=\"inputOutput\" name=\"e\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"f\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"g\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"h\" type=\"SFFloat\" value=\"5\"/>",
"        <field accessType=\"inputOutput\" name=\"t\" type=\"SFFloat\" value=\"0\"/>",
"        <field accessType=\"inputOutput\" name=\"p\" type=\"SFFloat\" value=\"0\"/>",
"        <field accessType=\"initializeOnly\" name=\"resolution\" type=\"SFInt32\" value=\"100\"/>"])))
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(16).setLoop(true))
    .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
    .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flower3 model
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
		var testObject = new flower3();
		console.log ("flower3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new flower3().main();
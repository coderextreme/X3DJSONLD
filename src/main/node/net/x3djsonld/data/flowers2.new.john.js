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
 * <p> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi). </p>
 <p> Related links: flowers2.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.flowers2&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d">flowers2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> transcriber </i> </td>
			<td> John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 January 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 21 March 2018 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> 2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manually written </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
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

function flowers2
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
flowers2.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("flowers2.x3d"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("transcriber").setContent("John Carlson"))
    .addMeta((new autoclass.meta()).setName("created").setContent("23 January 2005"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("21 March 2018"))
    .addMeta((new autoclass.meta()).setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("manually written"))
    .addMeta((new autoclass.meta()).setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.NavigationInfo()))
    .addChild((new autoclass.Viewpoint()).setDescription("Two mathematical orbitals").setPosition(0.0,0.0,50.0))
    .addChild((new autoclass.Group())
      .addChild((new autoclass.DirectionalLight()).setDirection(1.0,1.0,1.0))
      .addChild((new autoclass.ProtoDeclare()).setName("orbit")
        .setProtoInterface((new autoclass.ProtoInterface())
          .addField((new autoclass.field()).setName("translation").setType("SFVec3f").setAccessType("inputOutput").setValue("-8 0 0"))
          .addField((new autoclass.field()).setName("diffuseColor").setType("SFColor").setAccessType("inputOutput").setValue("1 0.5 0"))
          .addField((new autoclass.field()).setName("specularColor").setType("SFColor").setAccessType("inputOutput").setValue("1 0.5 0"))
          .addField((new autoclass.field()).setName("transparency").setType("SFFloat").setAccessType("inputOutput").setValue("0.75")))
        .setProtoBody((new autoclass.ProtoBody())
          .addChild((new autoclass.Group())
            .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(16).setLoop(true))
            .addChild((new autoclass.OrientationInterpolator("OrbitPath")).setKey(java.newArray("float", [0.0,0.50,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [1.0,0.0,0.0,0.0,1.0,0.0,0.0,3.14,1.0,0.0,0.0,6.28]))))
            .addChild((new autoclass.Transform("OrbitTransform"))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material())
                    .setIS((new autoclass.IS())
                      .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
                      .addConnect((new autoclass.connect()).setNodeField("specularColor").setProtoField("specularColor"))
                      .addConnect((new autoclass.connect()).setNodeField("transparency").setProtoField("transparency")))))
                .addComments(java.newArray("java.lang.String",["",
"				  <IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\">",
"				    <Coordinate DEF=\"OrbitCoordinates\"/>",
"				  </IndexedFaceSet>"]))
                .setGeometry((new autoclass.IndexedFaceSet("Orbit")).setDEF("Orbit").setCcw(false).setConvex(false).setCoordIndex(java.newArray("int", [0,1,2,-1]))
                  .setCoord((new autoclass.Coordinate("OrbitCoordinates")).setPoint(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0])))))))
            .addChild((new autoclass.Script("OrbitScript")).setSourceCode("\n" + 
"			ecmascript:" + "\n" + 
"			function set_e(value, eventTime) {" + "\n" + 
"				e_changed = value;" + "\n" + 
"			}" + "\n" + 
"			function set_f(value, eventTime) {" + "\n" + 
"				f_changed = value;" + "\n" + 
"			}" + "\n" + 
"			function set_g(value, eventTime) {" + "\n" + 
"				g_changed = value;" + "\n" + 
"			}" + "\n" + 
"			function set_h(value, eventTime) {" + "\n" + 
"				h_changed = value;" + "\n" + 
"			}" + "\n" + 
"			function set_resolution(value, eventTime) {" + "\n" + 
"				resolution_changed = value;" + "\n" + 
"			}" + "\n" + 
"			function initialize() {" + "\n" + 
"			     set_e(5);" + "\n" + 
"			     set_f(5);" + "\n" + 
"			     set_g(5);" + "\n" + 
"			     set_h(5);" + "\n" + 
"			     set_resolution(100);" + "\n" + 
"			     generateCoordinates();" + "\n" + 
"			     let localci = [];" + "\n" + 
"			     for (let i = 0; i < resolution_changed-1; i++) {" + "\n" + 
"				for (let j = 0; j < resolution_changed-1; j++) {" + "\n" + 
"				     localci.push(i*resolution_changed+j);" + "\n" + 
"				     localci.push(i*resolution_changed+j+1);" + "\n" + 
"				     localci.push((i+1)*resolution_changed+j+1);" + "\n" + 
"				     localci.push((i+1)*resolution_changed+j);" + "\n" + 
"				     localci.push(-1);" + "\n" + 
"				}" + "\n" + 
"			    }" + "\n" + 
"			    coordIndexes = new MFInt32(localci);" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function generateCoordinates() {" + "\n" + 
"			     let theta = 0.0;" + "\n" + 
"			     let phi = 0.0;" + "\n" + 
"			     let delta = (2 * 3.141592653) / (resolution_changed-1);" + "\n" + 
"			     let localc = [];" + "\n" + 
"			     for (let i = 0; i < resolution_changed; i++) {" + "\n" + 
"				for (let j = 0; j < resolution_changed; j++) {" + "\n" + 
"					let rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);" + "\n" + 
"					localc.push(new SFVec3f(" + "\n" + 
"						rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"						rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"						rho * Math.sin(phi)" + "\n" + 
"					));" + "\n" + 
"					theta += delta;" + "\n" + 
"				}" + "\n" + 
"				phi += delta;" + "\n" + 
"			     }" + "\n" + 
"			     " + "\n" + 
"			     coordinates = new MFVec3f(localc);" + "\n" + 
"			}" + "\n" + 
"\n" + 
"			function set_fraction(fraction, eventTime) {" + "\n" + 
"				let choice = Math.floor(Math.random() * 4);" + "\n" + 
"				switch (choice) {" + "\n" + 
"				case 0:" + "\n" + 
"					e_changed += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 1:" + "\n" + 
"					f_changed += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 2:" + "\n" + 
"					g_changed += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				case 3:" + "\n" + 
"					h_changed += Math.floor(Math.random() * 2) * 2 - 1;" + "\n" + 
"					break;" + "\n" + 
"				}" + "\n" + 
"				if (e < 1) {" + "\n" + 
"					f_changed = 10;" + "\n" + 
"				}" + "\n" + 
"				if (f < 1) {" + "\n" + 
"					f_changed = 10;" + "\n" + 
"				}" + "\n" + 
"				if (g < 1) {" + "\n" + 
"					g_changed = 4;" + "\n" + 
"				}" + "\n" + 
"				if (h < 1) {" + "\n" + 
"					h_changed = 4;" + "\n" + 
"				}" + "\n" + 
"				generateCoordinates();" + "\n" + 
"			}" + "\n")
              .addField((new autoclass.field()).setName("set_fraction").setType("SFFloat").setAccessType("inputOnly"))
              .addField((new autoclass.field()).setName("coordinates").setType("MFVec3f").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("coordIndexes").setType("MFInt32").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("e_changed").setType("SFFloat").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("f_changed").setType("SFFloat").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("g_changed").setType("SFFloat").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("h_changed").setType("SFFloat").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("resolution_changed").setType("SFInt32").setAccessType("outputOnly"))
              .addField((new autoclass.field()).setName("set_e").setType("SFFloat").setAccessType("inputOnly"))
              .addField((new autoclass.field()).setName("set_f").setType("SFFloat").setAccessType("inputOnly"))
              .addField((new autoclass.field()).setName("set_g").setType("SFFloat").setAccessType("inputOnly"))
              .addField((new autoclass.field()).setName("set_h").setType("SFFloat").setAccessType("inputOnly"))
              .addField((new autoclass.field()).setName("set_resolution").setType("SFInt32").setAccessType("inputOnly")))
            .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
            .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
            .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
            .addChild((new autoclass.ROUTE()).setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
            .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-8 0 0"))
        .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0.5 0"))
        .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("1 0.5 0"))
        .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.75")))
      .addChild((new autoclass.ProtoInstance())
        .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("8 0 0"))
        .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("0 0.5 1"))
        .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("0 0.5 1"))
        .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.5")))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return flowers2 model
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
		var testObject = new flowers2();
		console.log ("flowers2 execution self-validation test results: " + testObject.validateSelf());
	}
}
new flowers2().main();
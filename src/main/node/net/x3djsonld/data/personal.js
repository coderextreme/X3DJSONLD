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
 * <p> John's Portfolio. </p>
 <p> Related links: personal.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.personal&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://someAddress/somePath/personal.x3d">personal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://someAddress/somePath/personal.x3d" target="_blank">https://someAddress/somePath/personal.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> John's Portfolio </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> vim and X3D-Edit, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
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

 */

function personal
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
personal.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("personal.x3d"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://someAddress/somePath/personal.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("John's Portfolio"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("vim and X3D-Edit, https://savage.nps.edu/X3D-Edit")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.Viewpoint()).setDescription("Tour Views").setPosition(0.0,0.0,12.0))
    .addChild((new autoclass.Switch("SceneSwitcher")).setWhichChoice(0)
      .addComments(java.newArray("java.lang.String",["",
"	    <Inline url='\"../data/myextrusion.x3d\"  \"https://coderextreme.net/X3DJSONLD/src/main/data/myextrusion.x3d\"'/>",
"	    <Inline url='\"../data/ballx_ite.x3d\"  \"https://coderextreme.net/X3DJSONLD/src/main/data/ballx_ite.x3d\"'/>",
"	    <Inline url='\"../data/flower.x3d\"     \"https://coderextreme.net/X3DJSONLD/src/main/data/flower.x3d\"'/>",
"	    <Inline url='\"../data/flower3.x3d\"    \"https://coderextreme.net/X3DJSONLD/src/main/data/flower3.x3d\"'/>",
"	    <Inline url='\"../data/flowers.x3d\"    \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d\"'/>",
"	    <Inline url='\"../data/flowers2.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d\"'/>",
"	    <Inline url='\"../data/flowers4.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d\"'/>",
"	    <Inline url='\"../data/flowers7.x3d\"   \"https://coderextreme.net/X3DJSONLD/src/main/data/flowers7.x3d\"'/>"]))
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"../data/force-tidy.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d\""))))
    .addComments(java.newArray("java.lang.String",["",
"    <Script DEF=\"Choice0\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 0;",
"      }",
"      function touchTime(value) {",
"          choice = 0;",
"      }",
"      ]]>",
"    </Script>",
"	<Transform translation=\"0 4 0\">",
"	  <TouchSensor description=\"Ball Prism\" DEF=\"BallPrism_Sensor\"/>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Ball Prism\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"BallPrism_Sensor\" fromField=\"touchTime\" toNode=\"Choice0\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice0\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice1\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 1;",
"      }",
"      function touchTime(value) {",
"          choice = 1;",
"      }",
"      ]]>",
"    </Script>",
"	<Transform translation=\"0 3 0\">",
"	  <TouchSensor description=\"Floating Extrusion\" DEF=\"FloatingExtrusion_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Floating Extrusion\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"FloatingExtrusion_Sensor\" fromField=\"touchTime\" toNode=\"Choice1\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice1\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice2\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 2;",
"      }",
"      function touchTime(value) {",
"          choice = 2;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 2 0\">",
"<TouchSensor description=\"Flower\" DEF=\"Flower_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flower\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flower_Sensor\" fromField=\"touchTime\" toNode=\"Choice2\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice2\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice3\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 3;",
"      }",
"      function touchTime(value) {",
"          choice = 3;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 1 0\">",
"<TouchSensor description=\"Flower 3\" DEF=\"Flower3_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flower 3\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flower3_Sensor\" fromField=\"touchTime\" toNode=\"Choice3\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice3\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice4\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 4;",
"      }",
"      function touchTime(value) {",
"          choice = 4;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 0 0\">",
"<TouchSensor description=\"Flowers\" DEF=\"Flowers_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flowers\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flowers_Sensor\" fromField=\"touchTime\" toNode=\"Choice4\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice4\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice5\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 5;",
"      }",
"      function touchTime(value) {",
"          choice = 5;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 -1 0\">",
"<TouchSensor description=\"Flowers 2\" DEF=\"Flowers2_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flowers 2\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flowers2_Sensor\" fromField=\"touchTime\" toNode=\"Choice5\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice5\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice6\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 6;",
"      }",
"      function touchTime(value) {",
"          choice = 6;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 -2 0\">",
"<TouchSensor description=\"Flowers 4\" DEF=\"Flowers4_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flowers 4\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flowers4_Sensor\" fromField=\"touchTime\" toNode=\"Choice6\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice6\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice7\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 7;",
"      }",
"      function touchTime(value) {",
"          choice = 7;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 -3 0\">",
"<TouchSensor description=\"Flowers 7 Inner Brow Raiser\" DEF=\"Flowers7_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Flowers 7\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Flowers7_Sensor\" fromField=\"touchTime\" toNode=\"Choice7\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice7\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>",
"",
"    <Script DEF=\"Choice8\">",
"      <field name=\"touchTime\" type=\"SFTime\" accessType=\"inputOnly\"/>",
"      <field name=\"choice\" type=\"SFInt32\" accessType=\"outputOnly\"/>",
"      <![CDATA[",
"      ecmascript:",
"      function set_touchTime(value) {",
"          choice = 8;",
"      }",
"      function touchTime(value) {",
"          choice = 8;",
"      }",
"      ]]>",
"    </Script>",
"<Transform translation=\"0 -4 0\">",
"<TouchSensor description=\"Force\" DEF=\"Force_Sensor\"/>",
"",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"1 1 1\"/>",
"            </Appearance>",
"            <Text string='\"Force\"'>",
"",
"              <FontStyle size=\"2.4\" spacing=\"1.2\" justify='\"MIDDLE\" \"MIDDLE\"'/>",
"            </Text>",
"          </Shape>",
"          <Shape>",
"            <Appearance>",
"              <Material diffuseColor=\"0 0 1\"/>",
"            </Appearance>",
"            <IndexedFaceSet coordIndex='0 1 2 3 -1'>",
"            <Coordinate point=\"2 1.3833333333333333 -0.1, -2 1.3833333333333333 -0.1, -2 -1.616666666666667 -0.1, 2 -1.616666666666667 -0.1\"/>",
"",
"             </IndexedFaceSet>",
"          </Shape>",
"        </Transform>",
"<ROUTE fromNode=\"Force_Sensor\" fromField=\"touchTime\" toNode=\"Choice8\" toField=\"touchTime\"/>",
"<ROUTE fromNode=\"Choice8\" fromField=\"choice\" toNode=\"SceneSwitcher\" toField=\"whichChoice\"/>"])));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return personal model
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
		var testObject = new personal();
		console.log ("personal execution self-validation test results: " + testObject.validateSelf());
	}
}
new personal().main();
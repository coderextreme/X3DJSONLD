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
 * <p> A simple scene to show KeySensor functionality using Text nodes. </p>
 <p> Related links: <a href="../../../development/KeySensorActivationKeySwitchTest.java">KeySensorActivationKeySwitchTest.java</a> source, <a href="../../../development/KeySensorActivationKeySwitchTestIndex.html" target="_top">KeySensorActivationKeySwitchTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/KeySensorActivationKeySwitchTest.x3d">KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple scene to show KeySensor functionality using Text nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> enabled accessType needs to be changed to exposedField once supported by Script capabilities </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor" target="_blank">https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html" target="_blank">https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> KeySensor </td>
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

	* @author Don Brutzman
 */

function KeySensorActivationKeySwitchTest
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
KeySensorActivationKeySwitchTest.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("KeySensorActivationKeySwitchTest.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("A simple scene to show KeySensor functionality using Text nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("22 June 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("enabled accessType needs to be changed to exposedField once supported by Script capabilities"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/KeySensorActivationKeySwitchTest.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("KeySensor"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" The KeySensor prototype can be omitted if native-node Keysensor support is provided by the VRML browser. ")
    .addChild((new autoclass.WorldInfo()).setTitle("KeySensorActivationKeySwitchTest.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("KeySensor")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addComments(" warning: enabled needs to become an exposedField once Scripts support exposedField ")
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("enabled").setType("SFBool").setValue("true"))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_enabled").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("enabled_changed").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyPress").setType("SFInt32"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyRelease").setType("SFInt32"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyPress").setType("SFInt32"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyRelease").setType("SFInt32"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("altKey").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("controlKey").setType("SFBool"))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("shiftKey").setType("SFBool")))
      .setProtoBody((new autoclass.ProtoBody())
        .addComments(" First node in prototype indicates node type, use Group so that this sensor is ChildNodeType. ")
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("KeySensorScript")).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"// Native support for KeySensor node" + "\n" + 
"// or keyboard-access code needed!" + "\n")
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("altKey").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyPress").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_enabled").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("keyRelease").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("enabled").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("shiftKey").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyRelease").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("actionKeyPress").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("enabled_changed").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("controlKey").setType("SFBool"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
              .addConnect((new autoclass.connect()).setNodeField("set_enabled").setProtoField("set_enabled"))
              .addConnect((new autoclass.connect()).setNodeField("enabled_changed").setProtoField("enabled_changed"))
              .addConnect((new autoclass.connect()).setNodeField("isActive").setProtoField("isActive"))
              .addConnect((new autoclass.connect()).setNodeField("keyPress").setProtoField("keyPress"))
              .addConnect((new autoclass.connect()).setNodeField("keyRelease").setProtoField("keyRelease"))
              .addConnect((new autoclass.connect()).setNodeField("actionKeyPress").setProtoField("actionKeyPress"))
              .addConnect((new autoclass.connect()).setNodeField("actionKeyRelease").setProtoField("actionKeyRelease"))
              .addConnect((new autoclass.connect()).setNodeField("altKey").setProtoField("altKey"))
              .addConnect((new autoclass.connect()).setNodeField("controlKey").setProtoField("controlKey"))
              .addConnect((new autoclass.connect()).setNodeField("shiftKey").setProtoField("shiftKey")))))))
    .addComments(" ============================================ ")
    .addComments(" Enabling this KeySensor (from TouchSensor.isActive) disables all other KeySensors. ")
    .addChild((new autoclass.KeySensor("SingleKeySensor")).setEnabled(false))
    .addChild((new autoclass.Billboard())
      .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"Touch this text to enable\" \"KeySensor activation keys then\" \"press activation keys to test\""))
            .setFontStyle((new autoclass.FontStyle("MiddleMiddle")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.9,0.9,0.4))))
        .addChild((new autoclass.TouchSensor("StartMessageTouched")).setDescription("Touch this text to enable KeySensor activation keys then press activation keys to test"))
        .addChild((new autoclass.ROUTE()).setFromNode("StartMessageTouched").setFromField("isOver").setToNode("SingleKeySensor").setToField("enabled")))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-1.0,0.0)
        .addChild((new autoclass.Switch("ActivationKeyMessageSwitch")).setWhichChoice(0)
          .addComments(" ROUTE is not treated as a selectable child of Switch ")
          .addChild((new autoclass.ROUTE()).setFromNode("SingleKeySensor").setFromField("actionKeyPress").setToNode("ActivationKeyMessageSwitch").setToField("whichChoice"))
          .addChild((new autoclass.Shape("Zero"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"No activation keypress sensed....\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance("SelectionAppearance"))
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0))))
          .addChild((new autoclass.Shape("One"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F1\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Two"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F2\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Three"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F3\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Four"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F4\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Five"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F5\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Six"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F6\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Seven"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F7\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Eight"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F8\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Nine"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F9\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Ten"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F10\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Eleven"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F11\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Twelve"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"F12\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Thirteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"13: HOME\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Fourteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"14: END\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Fifteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"15: LEFT\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Sixteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"16: RIGHT\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Seventeen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"17: UP\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Eighteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"18: DOWN\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Nineteen"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"19: PGUP\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))
          .addChild((new autoclass.Shape("Twenty"))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"20: PGDN\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("MiddleMiddle")))
            .setAppearance((new autoclass.Appearance()).setUSE("SelectionAppearance")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return KeySensorActivationKeySwitchTest model
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
		var testObject = new KeySensorActivationKeySwitchTest();
		console.log ("KeySensorActivationKeySwitchTest execution self-validation test results: " + testObject.validateSelf());
	}
}
new KeySensorActivationKeySwitchTest().main();
process.exit(0);
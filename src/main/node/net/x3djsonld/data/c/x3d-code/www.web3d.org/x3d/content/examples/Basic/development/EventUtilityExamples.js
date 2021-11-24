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
 * <p> Event utility node examples for boolean filtering and other event utility nodes. </p>
 <p> Related links: <a href="../../../development/EventUtilityExamples.java">EventUtilityExamples.java</a> source, <a href="../../../development/EventUtilityExamplesIndex.html" target="_top">EventUtilityExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/EventUtilityExamples.x3d">EventUtilityExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Event utility node examples for boolean filtering and other event utility nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 November 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d</a> </td>
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

function EventUtilityExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
EventUtilityExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ExternProtoDeclare appinfo field, scene-graph level=3, element #25, 15 total values */
	this.ExternProtoDeclare_IntegerTrigger_3_25_appinfo = new autoclass.SFString("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("EventUtilityExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Event utility node examples for boolean filtering and other event utility nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("3 November 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addComments(" ======================================== ")
    .addComments(" ExternProtoDeclare definitions are used here only for language development - do not copy into other scenes! ")
    .addComments(" ExternProtoDeclare node support is provided either by X3D-compliant browser or X3dToVrml97.xslt ExternProtoDeclare definitions. ")
    .addComments(" ======================================== ")
    .addChild((new autoclass.WorldInfo()).setTitle("EventUtilityExamples.x3d"))
    .addChild((new autoclass.ExternProtoDeclare()).setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.").setUrl(new autoclass.MFString("\"EventUtilityPrototypes.x3d#BooleanFilter\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter\" \"EventUtilityPrototypes.wrl#BooleanFilter\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter\""))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("set_boolean is the input value to be filtered."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputTrue").setType("SFBool").setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputFalse").setType("SFBool").setAppinfo("inputFalse only passes a false value when set_boolean is false."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputNegate").setType("SFBool").setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.").setUrl(new autoclass.MFString("\"EventUtilityPrototypes.x3d#BooleanToggle\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle\" \"EventUtilityPrototypes.wrl#BooleanToggle\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle\""))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true toggle state."))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_toggle").setType("SFBool").setAppinfo("Reset persistent state value."))
      .addField((new autoclass.field()).setAccessType("initializeOnly").setName("toggle").setType("SFBool").setAppinfo("Persistent state value that gets toggled or reset."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("toggle_changed").setType("SFBool").setAppinfo("Output toggled persistent state value."))
      .addComments(" warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. "))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.").setUrl(new autoclass.MFString("\"EventUtilityPrototypes.x3d#BooleanTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger\" \"EventUtilityPrototypes.wrl#BooleanTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger\""))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_triggerTime").setType("SFTime").setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTrue").setType("SFBool").setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("IntegerTrigger").setAppinfo(this.ExternProtoDeclare_IntegerTrigger_3_25_appinfo).setUrl(new autoclass.MFString("\"EventUtilityPrototypes.x3d#IntegerTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger\" \"EventUtilityPrototypes.wrl#IntegerTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger\""))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true trigger output of integer value."))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_integerKey").setType("SFInt32").setAppinfo("Resets value used for output when triggered later."))
      .addField((new autoclass.field()).setAccessType("inputOutput").setName("integerKey").setType("SFInt32").setAppinfo("integerKey is value for output when triggered."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("integerKey_changed").setType("SFInt32").setAppinfo("Reports change in integerKey value."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerValue").setType("SFInt32").setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.").setUrl(new autoclass.MFString("\"EventUtilityPrototypes.x3d#TimeTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger\" \"EventUtilityPrototypes.wrl#TimeTrigger\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger\""))
      .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true trigger output time value."))
      .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTime").setType("SFTime").setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
    .addComments(" ======================================== ")
    .addChild((new autoclass.Group())
      .addChild((new autoclass.Transform()).setTranslation(0.0,3.0,0.0)
        .addChild((new autoclass.Anchor()).setDescription("Click for BooleanFilter example").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"BooleanFilter example\""))
              .setFontStyle((new autoclass.FontStyle("TextFont")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8).setCssStyle("BOLD"))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,1.5,0.0)
        .addChild((new autoclass.Anchor()).setDescription("Click for BooleanToggle example").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"BooleanToggle example\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("TextFont"))))))
      .addChild((new autoclass.Transform())
        .addChild((new autoclass.Anchor()).setDescription("Click for BooleanTrigger example").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"BooleanTrigger example\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("TextFont"))))))
      .addChild((new autoclass.Transform()).setTranslation(0.0,-1.5,0.0)
        .addChild((new autoclass.Anchor()).setDescription("Click for IntegerTrigger example").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"../../Savage/Tools/Animation/MaterialChoiceExample.x3d\" \"https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d\" \"../../Savage/Tools/Animation/MaterialChoiceExample.wrl\" \"https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl\""))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"IntegerTrigger example\""))
              .setFontStyle((new autoclass.FontStyle()).setUSE("TextFont"))))))
      .addChild((new autoclass.Transform("TimeTriggerTransform")).setTranslation(0.0,-3.0,0.0)
        .addChild((new autoclass.TouchSensor("TimeTriggerTouchSensor")).setDescription("Click forTimeTrigger example"))
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.6,0.6,0.2)))
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"TimeTrigger example\""))
            .setFontStyle((new autoclass.FontStyle()).setUSE("TextFont")))))
      .addChild((new autoclass.TimeTrigger("TimeTriggerNode")))
      .addChild((new autoclass.TimeSensor("TimeTriggerTimeSensor")).setCycleInterval(2))
      .addChild((new autoclass.OrientationInterpolator("TimeTriggerOrientationInterpolator")).setKey(java.newArray("float", [0.0,0.5,1.0])).setKeyValue(new autoclass.MFRotation(java.newArray("float", [0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,6.2432]))))
      .addChild((new autoclass.ROUTE()).setFromNode("TimeTriggerTouchSensor").setFromField("isActive").setToNode("TimeTriggerNode").setToField("set_boolean"))
      .addChild((new autoclass.ROUTE()).setFromNode("TimeTriggerNode").setFromField("triggerTime").setToNode("TimeTriggerTimeSensor").setToField("startTime"))
      .addChild((new autoclass.ROUTE()).setFromNode("TimeTriggerTimeSensor").setFromField("fraction_changed").setToNode("TimeTriggerOrientationInterpolator").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("TimeTriggerOrientationInterpolator").setFromField("value_changed").setToNode("TimeTriggerTransform").setToField("set_rotation"))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return EventUtilityExamples model
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
		var testObject = new EventUtilityExamples();
		console.log ("EventUtilityExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new EventUtilityExamples().main();
process.exit(0);
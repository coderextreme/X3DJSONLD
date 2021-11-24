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
 * <p> Event utility node prototypes for boolean filtering and other event utility nodes. </p>
 <p> Related links: <a href="../../../development/EventUtilityPrototypes.java">EventUtilityPrototypes.java</a> source, <a href="../../../development/EventUtilityPrototypesIndex.html" target="_top">EventUtilityPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/EventUtilityPrototypes.x3d">EventUtilityPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Event utility node prototypes for boolean filtering and other event utility nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Nick Polys, Tony Parisi, Don Brutzman, Justin Couch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 September 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development, IntegerTrigger example needed. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/EventUtilityExamples.x3d">EventUtilityExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d</a> </td>
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

	* @author Nick Polys, Tony Parisi, Don Brutzman, Justin Couch
 */

function EventUtilityPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
EventUtilityPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #60, 15 total values */
	this.ProtoDeclare_IntegerTrigger_3_60_appinfo = new autoclass.SFString("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("EventUtilityPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Event utility node prototypes for boolean filtering and other event utility nodes."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Nick Polys, Tony Parisi, Don Brutzman, Justin Couch"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 September 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 January 2020"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("Under development, IntegerTrigger example needed."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("EventUtilityExamples.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("EventUtilityPrototypes.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("set_boolean is the input value to be filtered."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputTrue").setType("SFBool").setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputFalse").setType("SFBool").setAppinfo("inputFalse only passes a false value when set_boolean is false."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputNegate").setType("SFBool").setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Script("BooleanFilterScript")).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value) inputTrue  = value;" + "\n" + 
"	else       inputFalse = value;" + "\n" + 
"	inputNegate = !value;" + "\n" + 
"\n" + 
"//	if (value) Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputTrue='  + inputTrue  + ', inputNegate=' + inputNegate);" + "\n" + 
"//	else       Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputFalse=' + inputFalse + ', inputNegate=' + inputNegate);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputTrue").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputFalse").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("inputNegate").setType("SFBool"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("set_boolean").setProtoField("set_boolean"))
            .addConnect((new autoclass.connect()).setNodeField("inputTrue").setProtoField("inputTrue"))
            .addConnect((new autoclass.connect()).setNodeField("inputFalse").setProtoField("inputFalse"))
            .addConnect((new autoclass.connect()).setNodeField("inputNegate").setProtoField("inputNegate"))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true toggle state."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_toggle").setType("SFBool").setAppinfo("Reset persistent state value."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("toggle").setType("SFBool").setValue("false").setAppinfo("Persistent state value that gets toggled or reset."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("toggle_changed").setType("SFBool").setAppinfo("Output toggled persistent state value."))
        .addComments(" warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. "))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Script("BooleanToggleScript")).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] toggle=' + toggle);" + "\n" + 
"\n" + 
"}" + "\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value == true)  // only toggle on true input" + "\n" + 
"	{" + "\n" + 
"		if (toggle == true) toggle = false;" + "\n" + 
"		else                toggle = true;" + "\n" + 
"	}" + "\n" + 
"	toggle_changed = toggle;" + "\n" + 
"//	Browser.print ('[BooleanToggle] traceEnabled=' + traceEnabled);" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_boolean=' + value + ', toggle=' + toggle);" + "\n" + 
"}" + "\n" + 
"function set_toggle (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	toggle = value;" + "\n" + 
"	toggle_changed = toggle;" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_toggle=' + set_toggle);" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_toggle").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("toggle").setType("SFBool").setValue("false"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("toggle_changed").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("false"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_boolean").setProtoField("set_boolean"))
              .addConnect((new autoclass.connect()).setNodeField("set_toggle").setProtoField("set_toggle"))
              .addConnect((new autoclass.connect()).setNodeField("toggle_changed").setProtoField("toggle_changed")))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_triggerTime").setType("SFTime").setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTrue").setType("SFBool").setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Script("TriggerBooleanScript")).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_triggerTime (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	triggerTrue = true;" + "\n" + 
"//	Browser.print ('triggerTrue = true');" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_triggerTime").setType("SFTime"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTrue").setType("SFBool"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("set_triggerTime").setProtoField("set_triggerTime"))
            .addConnect((new autoclass.connect()).setNodeField("triggerTrue").setProtoField("triggerTrue"))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("IntegerTrigger").setAppinfo(this.ProtoDeclare_IntegerTrigger_3_60_appinfo)
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true trigger output of integer value."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_integerKey").setType("SFInt32").setAppinfo("Resets value used for output when triggered later."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("integerKey").setType("SFInt32").setValue("-1").setAppinfo("integerKey is value for output when triggered."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("integerKey_changed").setType("SFInt32").setAppinfo("Reports change in integerKey value."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerValue").setType("SFInt32").setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Switch("IntegerKeyHolder")).setWhichChoice(-1)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("whichChoice").setProtoField("integerKey"))))
          .addChild((new autoclass.Script("TriggerIntegerScript")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (inputValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (inputValue == true)" + "\n" + 
"	{" + "\n" + 
"		integerKey = integerKeyHolderNode.whichChoice;" + "\n" + 
"		triggerValue = integerKey; // send output event" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_integerKey (inputValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	integerKey = inputValue;" + "\n" + 
"	integerKeyHolderNode.whichChoice = integerKey;" + "\n" + 
"	integerKey_changed = integerKey; // send output event" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_integerKey").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("integerKeyHolderNode").setType("SFNode")
              .addChild((new autoclass.Switch()).setUSE("IntegerKeyHolder").setWhichChoice(-1)))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("integerKey_changed").setType("SFInt32"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerValue").setType("SFInt32"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("set_boolean").setProtoField("set_boolean"))
              .addConnect((new autoclass.connect()).setNodeField("set_integerKey").setProtoField("set_integerKey"))
              .addConnect((new autoclass.connect()).setNodeField("integerKey_changed").setProtoField("integerKey_changed"))
              .addConnect((new autoclass.connect()).setNodeField("triggerValue").setProtoField("triggerValue")))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.ProtoDeclare()).setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool").setAppinfo("If set_boolean input is true trigger output time value."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTime").setType("SFTime").setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Script("TriggerTimeScript")).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value) triggerTime = timestamp;" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_boolean").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("outputOnly").setName("triggerTime").setType("SFTime"))
          .setIS((new autoclass.IS())
            .addConnect((new autoclass.connect()).setNodeField("set_boolean").setProtoField("set_boolean"))
            .addConnect((new autoclass.connect()).setNodeField("triggerTime").setProtoField("triggerTime"))))))
    .addComments(" ======================================== ")
    .addChild((new autoclass.Anchor()).setDescription("EventUtilityExamples").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"EventUtilityExamples.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d\" \"EventUtilityExamples.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"EventUtilityPrototype\" \"defines prototypes\" \"\" \"Click text to see\" \"EventUtilityExamples\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.9)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return EventUtilityPrototypes model
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
		var testObject = new EventUtilityPrototypes();
		console.log ("EventUtilityPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new EventUtilityPrototypes().main();
process.exit(0);
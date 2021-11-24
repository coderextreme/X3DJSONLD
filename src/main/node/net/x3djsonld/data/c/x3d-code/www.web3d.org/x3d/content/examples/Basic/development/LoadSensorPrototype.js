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
 * <p> LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay. </p>
 <p> Related links: <a href="../../../development/LoadSensorPrototype.java">LoadSensorPrototype.java</a> source, <a href="../../../development/LoadSensorPrototypeIndex.html" target="_top">LoadSensorPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LoadSensorPrototype.x3d">LoadSensorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 December 2003 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Set LoadSensorScript traceEnabled true/false to enable/disable console trace text. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/LoadSensorExample.x3d">LoadSensorExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> LoadSensorPrototypeInitializationTrace.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d</a> </td>
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

function LoadSensorPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LoadSensorPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: ProtoDeclare appinfo field, scene-graph level=3, element #15, 40 total values */
	this.ProtoDeclare_LoadSensor_3_15_appinfo = new autoclass.SFString("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.");

	/** Large attribute array: field appinfo field, scene-graph level=5, element #16, 45 total values */
	this.field_timeOut_5_16_appinfo = new autoclass.SFString("Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation.");
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("LoadSensorPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay."))
    .addMeta((new autoclass.meta()).setName("created").setContent("26 December 2003"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("hint").setContent("Set LoadSensorScript traceEnabled true/false to enable/disable console trace text."))
    .addMeta((new autoclass.meta()).setName("warning").setContent("This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability."))
    .addMeta((new autoclass.meta()).setName("reference").setContent("LoadSensorExample.x3d"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("LoadSensorPrototypeInitializationTrace.txt"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("LoadSensorPrototype.x3d"))
    .addChild((new autoclass.ProtoDeclare()).setName("LoadSensor").setAppinfo(this.ProtoDeclare_LoadSensor_3_15_appinfo).setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor")
      .setProtoInterface((new autoclass.ProtoInterface())
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true").setAppinfo("Enables/disables the sensor node."))
        .addField((new autoclass.field()).setAccessType("inputOutput").setName("timeOut").setType("SFTime").setValue("0").setAppinfo(this.field_timeOut_5_16_appinfo))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("watchList").setType("MFNode").setAppinfo("Zero or more nodes with url fields to monitor."))
        .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_watchList").setType("MFNode").setAppinfo("Change watchList MFNode array."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool").setAppinfo("isActive=true when loading begins isActive=false when loading ends."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("isLoaded").setType("SFBool").setAppinfo("isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("loadTime").setType("SFTime").setAppinfo("loadTime event is generated when loading has successfully completed."))
        .addField((new autoclass.field()).setAccessType("outputOnly").setName("progress").setType("SFFloat").setAppinfo("progress [0..1] indicates fraction of loading complete."))
        .addField((new autoclass.field()).setAccessType("initializeOnly").setName("metadata").setType("SFNode").setAppinfo("associated Metadata node.")))
      .setProtoBody((new autoclass.ProtoBody())
        .addChild((new autoclass.Group())
          .addChild((new autoclass.TimeSensor("Clock")).setLoop(true)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
              .addConnect((new autoclass.connect()).setNodeField("cycleInterval").setProtoField("timeOut"))))
          .addChild((new autoclass.Script("LoadSensorScript")).setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	enabled = ClockNode.enabled;" + "\n" + 
"	tracePrint ('initialize() enabled=' + enabled);" + "\n" + 
"	if (enabled)" + "\n" + 
"	{" + "\n" + 
"		isActive = true;" + "\n" + 
"		// isLoaded event only sent upon completion" + "\n" + 
"		progress = 0.0;" + "\n" + 
"		tracePrintEvents ();" + "\n" + 
"		timeOut = ClockNode.cycleInterval;" + "\n" + 
"		tracePrint ('timeOut=' + timeOut);" + "\n" + 
"		if (timeOut <= 0.0) // instantaneous, no loop" + "\n" + 
"		{" + "\n" + 
"			isActive = false;" + "\n" + 
"			isLoaded = true;" + "\n" + 
"			progress = 1.0;" + "\n" + 
"			loadTime = timestamp;" + "\n" + 
"			tracePrintEvents ();" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function fraction (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	enabled = ClockNode.enabled;" + "\n" + 
"	if (enabled)" + "\n" + 
"		tracePrint ('progress=' + value + ', priorFraction=' + priorFraction);" + "\n" + 
"	// use priorFraction to check for looping, then stop loop" + "\n" + 
"	if (enabled && ((value >=1) || (value < priorFraction)))" + "\n" + 
"	{" + "\n" + 
"		isActive = false;" + "\n" + 
"		isLoaded = true;" + "\n" + 
"		loadTime = timestamp;" + "\n" + 
"		progress = 1;" + "\n" + 
"		tracePrintEvents ();" + "\n" + 
"		tracePrint ('complete');" + "\n" + 
"                loopStart = true;" + "\n" + 
"	}" + "\n" + 
"	else progress= value; // output event" + "\n" + 
"	priorFraction = progress;" + "\n" + 
"}" + "\n" + 
"function set_watchList (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	watchList = value;" + "\n" + 
"}" + "\n" + 
"function tracePrintEvents ()" + "\n" + 
"{" + "\n" + 
"	tracePrint ('isActive=' + isActive);" + "\n" + 
"	tracePrint ('isLoaded=' + isLoaded);" + "\n" + 
"	tracePrint ('loadTime=' + loadTime);" + "\n" + 
"	tracePrint ('progress=' + progress);" + "\n" + 
"}" + "\n" + 
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[LoadSensor]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[LoadSensor]' + outputString);" + "\n" + 
"}" + "\n")
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("ClockNode").setType("SFNode")
              .addChild((new autoclass.TimeSensor()).setUSE("Clock")))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("loopStart").setType("SFTime"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("fraction").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("priorFraction").setType("SFFloat").setValue("0"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("progress").setType("SFFloat"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("watchList").setType("MFNode"))
            .addField((new autoclass.field()).setAccessType("inputOnly").setName("set_watchList").setType("MFNode"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("isActive").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("isLoaded").setType("SFBool"))
            .addField((new autoclass.field()).setAccessType("outputOnly").setName("loadTime").setType("SFTime"))
            .addField((new autoclass.field()).setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool").setValue("false"))
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("watchList").setProtoField("watchList"))
              .addConnect((new autoclass.connect()).setNodeField("set_watchList").setProtoField("set_watchList"))
              .addConnect((new autoclass.connect()).setNodeField("isActive").setProtoField("isActive"))
              .addConnect((new autoclass.connect()).setNodeField("isLoaded").setProtoField("isLoaded"))
              .addConnect((new autoclass.connect()).setNodeField("loadTime").setProtoField("loadTime"))
              .addConnect((new autoclass.connect()).setNodeField("progress").setProtoField("progress"))))
          .addChild((new autoclass.ROUTE()).setFromNode("LoadSensorScript").setFromField("loopStart").setToNode("Clock").setToField("startTime"))
          .addChild((new autoclass.ROUTE()).setFromNode("LoadSensorScript").setFromField("isActive").setToNode("Clock").setToField("enabled"))
          .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("LoadSensorScript").setToField("fraction"))
          .addChild((new autoclass.Collision()).setEnabled(false)
            .setIS((new autoclass.IS())
              .addConnect((new autoclass.connect()).setNodeField("proxy").setProtoField("metadata")))))))
    .addComments(" ====================================== ")
    .addComments(" Example use ")
    .addChild((new autoclass.Anchor()).setDescription("LoadSensorExample").setParameter(new autoclass.MFString("\"target=_blank\"")).setUrl(new autoclass.MFString("\"LoadSensorExample.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d\" \"LoadSensorExample.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.wrl\""))
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"LoadSensorPrototype\" \"defines a prototype\" \"\" \"Click on this text to see\" \"LoadSensorExample scene\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.7)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.2))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LoadSensorPrototype model
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
		var testObject = new LoadSensorPrototype();
		console.log ("LoadSensorPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new LoadSensorPrototype().main();
process.exit(0);
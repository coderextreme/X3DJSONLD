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
 * <p> This example shows how to use the BooleanSequencer prototype in an animated scenario. </p>
 <p> Related links: <a href="../../../development/BooleanSequencerExample.java">BooleanSequencerExample.java</a> source, <a href="../../../development/BooleanSequencerExampleIndex.html" target="_top">BooleanSequencerExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/BooleanSequencerExample.x3d">BooleanSequencerExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows how to use the BooleanSequencer prototype in an animated scenario. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 10 August 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator" target="_blank">https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> boolean sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d</a> </td>
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

	* @author Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu
 */

function BooleanSequencerExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
BooleanSequencerExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=9, element #17, 18 total values */
	this.Text_9_17_string = new autoclass.MFString(new autoclass.MFString("\"Click text to start clock, run\" \"multiple BooleanSequencers\" \"\" \"\" \"\" \"See Viewpoint description\" \"for bound Viewpoint number\""));
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("BooleanSequencerExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This example shows how to use the BooleanSequencer prototype in an animated scenario."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
    .addMeta((new autoclass.meta()).setName("created").setContent("10 August 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("boolean sequencer"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("BooleanSequencerExample.x3d"))
    .addChild((new autoclass.Group("HUDGroup"))
      .addChild((new autoclass.ProximitySensor("WhereSensor")).setSize(1000.0,1000.0,1000.0))
      .addChild((new autoclass.Transform("BillboardWhereTransform"))
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-12.0).setRotation(1.0,0.0,0.0,-0.03)
          .addChild((new autoclass.Billboard())
            .addChild((new autoclass.Transform("BillboardPlaneTransform"))
              .addChild((new autoclass.TouchSensor("Toucher")).setDescription("Click text to start clock and run multiple BooleanSequencers"))
              .addChild((new autoclass.Shape())
                .setAppearance((new autoclass.Appearance())
                  .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,1.0)))
                .setGeometry((new autoclass.Text()).setString(this.Text_9_17_string)
                  .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")))))))))
      .addChild((new autoclass.ROUTE()).setFromNode("WhereSensor").setFromField("position_changed").setToNode("BillboardWhereTransform").setToField("set_translation"))
      .addChild((new autoclass.ROUTE()).setFromNode("WhereSensor").setFromField("orientation_changed").setToNode("BillboardWhereTransform").setToField("set_rotation")))
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(10))
    .addChild((new autoclass.ROUTE()).setFromNode("Toucher").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
    .addChild((new autoclass.Viewpoint("FrontUpViewpoint")).setDescription("View 0, Front Up"))
    .addChild((new autoclass.Group("AnimatedView1"))
      .addChild((new autoclass.Viewpoint("LeftViewpoint")).setDescription("View 1, Left").setPosition(-10.0,0.0,0.0).setOrientation(0.0,1.0,0.0,-1.57))
      .addChild((new autoclass.BooleanSequencer("LeftViewBinder")).setKey(java.newArray("float", [0.0,0.1,0.25])).setKeyValue(java.newArray("boolean", [false,true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("LeftViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("LeftViewBinder").setFromField("value_changed").setToNode("LeftViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Group("AnimatedView2"))
      .addChild((new autoclass.Viewpoint("BackViewpoint")).setDescription("View 2, Back").setPosition(0.0,0.0,-10.0).setOrientation(0.0,1.0,0.0,-3.14))
      .addChild((new autoclass.BooleanSequencer("BackViewBinder")).setKey(java.newArray("float", [0.0,0.375,0.475])).setKeyValue(java.newArray("boolean", [false,true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("BackViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("BackViewBinder").setFromField("value_changed").setToNode("BackViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Group("AnimatedView3"))
      .addChild((new autoclass.Viewpoint("RightViewpoint")).setDescription("View 3, Right").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
      .addChild((new autoclass.BooleanSequencer("RightViewBinder")).setKey(java.newArray("float", [0.0,0.5,0.6])).setKeyValue(java.newArray("boolean", [false,true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("RightViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("RightViewBinder").setFromField("value_changed").setToNode("RightViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Group("AnimatedView4"))
      .addChild((new autoclass.Viewpoint("TopViewpoint")).setDescription("View 4, Top").setPosition(0.0,10.0,0.0).setOrientation(1.0,0.0,0.0,-1.57))
      .addChild((new autoclass.BooleanSequencer("TopViewBinder")).setKey(java.newArray("float", [0.625,0.725])).setKeyValue(java.newArray("boolean", [true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("TopViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("TopViewBinder").setFromField("value_changed").setToNode("TopViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Group("AnimatedView5"))
      .addChild((new autoclass.Viewpoint("FrontDownViewpoint")).setDescription("View 5, Front Down").setPosition(0.0,0.0,-10.0).setOrientation(1.0,0.0,0.0,-3.14))
      .addChild((new autoclass.BooleanSequencer("FrontDownViewBinder")).setKey(java.newArray("float", [0.75,0.85])).setKeyValue(java.newArray("boolean", [true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("FrontDownViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("FrontDownViewBinder").setFromField("value_changed").setToNode("FrontDownViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Group("AnimatedView6"))
      .addChild((new autoclass.Viewpoint("BottomViewpoint")).setDescription("View 6, Bottom").setPosition(0.0,-10.0,0.0).setOrientation(1.0,0.0,0.0,1.57))
      .addChild((new autoclass.BooleanSequencer("BottomViewBinder")).setKey(java.newArray("float", [0.875,0.975])).setKeyValue(java.newArray("boolean", [true,false])))
      .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("BottomViewBinder").setToField("set_fraction"))
      .addChild((new autoclass.ROUTE()).setFromNode("BottomViewBinder").setFromField("value_changed").setToNode("BottomViewpoint").setToField("set_bind")))
    .addChild((new autoclass.Switch("DebugSwitch")).setWhichChoice(0)
      .addChild((new autoclass.Group())
        .addChild((new autoclass.Script("Debug")).setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function setFraction(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('fraction =' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontUpViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('FrontUpView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setLeftViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('LeftView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBackViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BackView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setRightViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('RightView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTopViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('TopView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontDownViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('FrontDownView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBottomViewBind(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BottomView bind:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontUpBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for FrontUpViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setLeftBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for LeftViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBackBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for BackViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setRightBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for RightViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setTopBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for TopViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setFrontDownBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for FrontDownViewpoint:' + value);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function setBottomBSOutput(value, timeStamp)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('BooleanSequencer output for BottomViewpoint:' + value);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setFraction").setType("SFFloat"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setFrontUpViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setLeftViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setBackViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setRightViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setTopViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setFrontDownViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setBottomViewBind").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setFrontUpBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setLeftBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setBackBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setRightBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setTopBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setFrontDownBSOutput").setType("SFBool"))
          .addField((new autoclass.field()).setAccessType("inputOnly").setName("setBottomBSOutput").setType("SFBool")))
        .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("Debug").setToField("setFraction"))
        .addChild((new autoclass.ROUTE()).setFromNode("FrontUpViewpoint").setFromField("isBound").setToNode("Debug").setToField("setFrontUpViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("LeftViewpoint").setFromField("isBound").setToNode("Debug").setToField("setLeftViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("BackViewpoint").setFromField("isBound").setToNode("Debug").setToField("setBackViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("RightViewpoint").setFromField("isBound").setToNode("Debug").setToField("setRightViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("TopViewpoint").setFromField("isBound").setToNode("Debug").setToField("setTopViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("FrontDownViewpoint").setFromField("isBound").setToNode("Debug").setToField("setFrontDownViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("BottomViewpoint").setFromField("isBound").setToNode("Debug").setToField("setBottomViewBind"))
        .addChild((new autoclass.ROUTE()).setFromNode("LeftViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setLeftBSOutput"))
        .addChild((new autoclass.ROUTE()).setFromNode("BackViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setBackBSOutput"))
        .addChild((new autoclass.ROUTE()).setFromNode("RightViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setRightBSOutput"))
        .addChild((new autoclass.ROUTE()).setFromNode("TopViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setTopBSOutput"))
        .addChild((new autoclass.ROUTE()).setFromNode("FrontDownViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setFrontDownBSOutput"))
        .addChild((new autoclass.ROUTE()).setFromNode("BottomViewBinder").setFromField("value_changed").setToNode("Debug").setToField("setBottomBSOutput"))))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0)))
        .setGeometry((new autoclass.Box()).setSize(2.0,0.1,0.35)))
      .addChild((new autoclass.Transform()).setTranslation(-1.0,0.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry((new autoclass.Sphere()).setRadius(0.2))))
      .addChild((new autoclass.Transform()).setTranslation(1.0,0.0,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry((new autoclass.Sphere()).setRadius(0.2)))))
    .addChild((new autoclass.Transform())
      .addChild((new autoclass.Shape())
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry((new autoclass.Cone())))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return BooleanSequencerExample model
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
		var testObject = new BooleanSequencerExample();
		console.log ("BooleanSequencerExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new BooleanSequencerExample().main();
process.exit(0);
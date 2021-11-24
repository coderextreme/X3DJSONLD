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
 * <p> This example shows how to use the IntegerSequencer prototype in an animated scenario. </p>
 <p> Related links: <a href="../../../development/IntegerSequencerExample.java">IntegerSequencerExample.java</a> source, <a href="../../../development/IntegerSequencerExampleIndex.html" target="_top">IntegerSequencerExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/IntegerSequencerExample.x3d">IntegerSequencerExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This example shows how to use the IntegerSequencer prototype in an animated scenario. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 13 April 2002 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> integer sequencer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d</a> </td>
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

function IntegerSequencerExample
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
IntegerSequencerExample.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("IntegerSequencerExample.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("This example shows how to use the IntegerSequencer prototype in an animated scenario."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("13 April 2002"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("20 October 2019"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("integer sequencer"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("IntegerSequencerExample.x3d"))
    .addChild((new autoclass.Background()).setGroundColor(new autoclass.MFColor(java.newArray("float", [0.2,0.2,0.2]))).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.2,0.2,0.2]))))
    .addChild((new autoclass.TimeSensor("Clock")).setCycleInterval(12).setEnabled(false).setLoop(true))
    .addChild((new autoclass.IntegerSequencer("IntegerSequencerInstance")).setKey(java.newArray("float", [0.0,0.08333,0.1667,0.25,0.3333,0.4167,0.5,0.5833,0.6666,0.75,0.8333,0.9167,1.0])).setKeyValue(java.newArray("int", [10,9,8,7,6,5,4,3,2,1,0,-1,10])))
    .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("IntegerSequencerInstance").setToField("set_fraction"))
    .addChild((new autoclass.Transform()).setTranslation(0.0,2.0,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"IntegerSequencer => Switch\" \"touch blue text to count down\""))
          .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.4,0.6,0.8))))
      .addChild((new autoclass.TouchSensor("TouchToStart")).setDescription("Touch To Start"))
      .addChild((new autoclass.ROUTE()).setFromNode("TouchToStart").setFromField("touchTime").setToNode("Clock").setToField("set_startTime"))
      .addChild((new autoclass.ROUTE()).setFromNode("TouchToStart").setFromField("isOver").setToNode("Clock").setToField("enabled"))
      .addComments(" background box to simplify touching ")
      .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-0.5)
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Box()).setSize(11.0,2.0,0.1))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setDiffuseColor(0.2,0.2,0.2).setTransparency(0.95))))))
    .addChild((new autoclass.Transform()).setTranslation(-3.0,-2.5,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"click for\" \"previous key\" \"(count up)\""))
          .setFontStyle((new autoclass.FontStyle("PreviousNextFont")).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.7)))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.6,0.4))))
      .addChild((new autoclass.TouchSensor("TouchPrevious")).setDescription("touch for previous"))
      .addChild((new autoclass.ROUTE()).setFromNode("TouchPrevious").setFromField("isActive").setToNode("IntegerSequencerInstance").setToField("previous")))
    .addChild((new autoclass.Transform()).setTranslation(3.0,-2.5,0.0)
      .addChild((new autoclass.Shape())
        .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"click for\" \"next key\" \"(count down)\""))
          .setFontStyle((new autoclass.FontStyle()).setUSE("PreviousNextFont")))
        .setAppearance((new autoclass.Appearance())
          .setMaterial((new autoclass.Material()).setDiffuseColor(0.8,0.6,0.4))))
      .addChild((new autoclass.TouchSensor("TouchNext")).setDescription("touch for next"))
      .addChild((new autoclass.ROUTE()).setFromNode("TouchNext").setFromField("isActive").setToNode("IntegerSequencerInstance").setToField("next")))
    .addComments(" Interesting materials from Universal Media library ")
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco02").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco02\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco02\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco04").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco04\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco04\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco05").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco05\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco05\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco08").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco08\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco08\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco09").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco09\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco09\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco13").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco13\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco13\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco18").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco18\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco18\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco21").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco21\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco21\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco24").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco24\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco24\"")))
    .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco25").setUrl(new autoclass.MFString("\"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco25\" \"../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25\" \"https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco25\"")))
    .addChild((new autoclass.Transform()).setTranslation(0.0,-0.5,0.0)
      .addChild((new autoclass.Switch("CountDownSwitch")).setWhichChoice(0)
        .addChild((new autoclass.Group())
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 0\"")).setLength(java.newArray("float", [0.0]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco02")))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 1\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco09"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 2\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco08"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 3\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco18"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 4\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco21"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 5\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco24"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 6\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco25"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 7\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco13"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 8\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco05"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 9\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco04"))))
        .addChild((new autoclass.Shape())
          .setGeometry((new autoclass.Text()).setString(new autoclass.MFString("\"child choice 10\"")).setLength(java.newArray("float", [0.0]))
            .setFontStyle((new autoclass.FontStyle()).setJustify(new autoclass.MFString("\"MIDDLE\" \"MIDDLE\""))))
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.ProtoInstance()).setName("ArtDeco02"))))))
    .addChild((new autoclass.ROUTE()).setFromNode("IntegerSequencerInstance").setFromField("value_changed").setToNode("CountDownSwitch").setToField("whichChoice")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return IntegerSequencerExample model
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
		var testObject = new IntegerSequencerExample();
		console.log ("IntegerSequencerExample execution self-validation test results: " + testObject.validateSelf());
	}
}
new IntegerSequencerExample().main();
process.exit(0);
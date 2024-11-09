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
 * <p> Bubble animation used by Nancy Diving example. </p>
 <p> Related links: NeedClassName.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">NeedClassName&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d">Bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Bubble animation used by Nancy Diving example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Etsuko Lippi </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 23 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/../license.html">../license.html</a> </td>
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

	* @author Etsuko Lippi
 */

function NeedClassName
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
NeedClassName.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("3.3")
  .setHead((new autoclass.head())
    .addMeta((new autoclass.meta()).setName("title").setContent("Bubbles.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Bubble animation used by Nancy Diving example."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Etsuko Lippi"))
    .addMeta((new autoclass.meta()).setName("created").setContent("24 January 2001"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("23 May 2020"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("Bubbles.x3d"))
    .addChild((new autoclass.Transform("Bubbles"))
      .addChild((new autoclass.Group("Bubble"))
        .addChild((new autoclass.TimeSensor("BubbleClock")).setCycleInterval(6.0).setLoop(true))
        .addChild((new autoclass.PositionInterpolator("BubblePath1")).setKey(java.newArray("float", [0.0,0.5,0.8,0.9,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.75,0.75,0.75,0.86,0.86,0.86,0.99,0.998,0.9876,1.272,1.90440,0.9509]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath2")).setKey(java.newArray("float", [0.0,0.3,0.64,0.85,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.1,0.1,0.1,0.2,0.4,0.25,0.3,0.5,0.46,0.75,0.5,.575,.038483478,1.9890,1.0983730]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath3")).setKey(java.newArray("float", [0.0,0.1,0.45,0.7,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.01,0.01,0.01,0.25,0.35,0.0045,0.55,0.6,0.0055,0.66,0.665,0.00655,1.5550,1.090430,0.0057340]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath4")).setKey(java.newArray("float", [0.0,0.5,0.6,0.8,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.9485940,1.39830,.009009349]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath5")).setKey(java.newArray("float", [0.0,0.25,0.35,0.65,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.5,0.5,0.005,0.6,0.6,0.006,0.75,0.75,0.0075,1.844440,1.222220,0.1]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath6")).setKey(java.newArray("float", [0.0,0.15,0.22235,0.55565,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.235,0.3455,0.0055,0.356,0.676,0.00456,0.5675,0.75,0.0074565,1.098,1.0343,0.140]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath7")).setKey(java.newArray("float", [0.0,0.2425,0.4535,0.6775,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.12345,0.2225,0.00335,0.786,0.456,0.00666,0.74555,0.7335,0.00234575,.08787,1.022,0.12]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath8")).setKey(java.newArray("float", [0.0,0.1125,0.5535,0.97865,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.1235,0.05,0.00125,0.5666,0.4346,0.005556,0.8975,0.34575,0.0098775,1.87870,1.6860,0.860]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath9")).setKey(java.newArray("float", [0.0,0.0025,0.035,0.65,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.522,0.5445,0.0057,0.6543,0.226,0.0055,0.45575,0.4375,0.0067,1.87870,2.0,0.1545]))))
        .addChild((new autoclass.PositionInterpolator("BubblePath10")).setKey(java.newArray("float", [0.0,0.00025,0.035,0.6895,1.0])).setKeyValue(new autoclass.MFVec3f(java.newArray("float", [0.0,0.0,0.0,0.8765,0.445,0.00335,0.3336,0.4446,0.005556,0.765,0.75,0.0075,1.0,1.0,0.1]))))
        .addChild((new autoclass.Transform())
          .addChild((new autoclass.Transform("bubble1"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.025))))
          .addChild((new autoclass.Transform("bubble2"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.055))))
          .addChild((new autoclass.Transform("bubble3"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.065))))
          .addChild((new autoclass.Transform("bubble4"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.015))))
          .addChild((new autoclass.Transform("bubble5"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.075))))
          .addChild((new autoclass.Transform("bubble6"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.005))))
          .addChild((new autoclass.Transform("bubble7"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.035))))
          .addChild((new autoclass.Transform("bubble8"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.05))))
          .addChild((new autoclass.Transform("bubble9"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.045))))
          .addChild((new autoclass.Transform("bubble10"))
            .addChild((new autoclass.Shape())
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,1.0).setTransparency(0.8)))
              .setGeometry((new autoclass.Sphere()).setRadius(0.035))))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath1").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath2").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath3").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath4").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath5").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath6").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath7").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath8").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath9").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath10").setToField("set_fraction"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath1").setFromField("value_changed").setToNode("bubble1").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath2").setFromField("value_changed").setToNode("bubble2").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath3").setFromField("value_changed").setToNode("bubble3").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath4").setFromField("value_changed").setToNode("bubble4").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath5").setFromField("value_changed").setToNode("bubble5").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath6").setFromField("value_changed").setToNode("bubble6").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath7").setFromField("value_changed").setToNode("bubble7").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath8").setFromField("value_changed").setToNode("bubble8").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath9").setFromField("value_changed").setToNode("bubble9").setToField("set_translation"))
          .addChild((new autoclass.ROUTE()).setFromNode("BubblePath10").setFromField("value_changed").setToNode("bubble10").setToField("set_translation")))))
    .addChild((new autoclass.Background()).setSkyColor(new autoclass.MFColor(java.newArray("float", [0.0,0.0,0.6])))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return NeedClassName model
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
		var testObject = new NeedClassName();
		console.log ("NeedClassName execution self-validation test results: " + testObject.validateSelf());
	}
}
new NeedClassName().main();
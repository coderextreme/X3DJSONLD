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
 * <p> Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0. </p>
 <p> Related links: HAnimModelsHandsFeet.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HAnimModelsHandsFeet&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d">HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> YOO Kwan Hee and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 February 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 8 March 2021 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> not yet to scale </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> TODO will X3D HAnim component add a new level to support LOA-4 functionality? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.png">HAnimModelsHandsFeet.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeetWithFour1mGrids.png">HAnimModelsHandsFeetWithFour1mGrids.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/working-groups/humanoid-animation-HAnim" target="_blank">https://www.web3d.org/working-groups/humanoid-animation-HAnim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19774/V2.0" target="_blank">https://www.web3d.org/documents/specifications/19774/V2.0</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html" target="_blank">https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D HAnim humanoid animation </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/../license.html">../license.html</a> </td>
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

	* @author YOO Kwan Hee and Don Brutzman
 */

function HAnimModelsHandsFeet
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HAnimModelsHandsFeet.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("HAnimModelsHandsFeet.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("8 February 2015"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("8 March 2021"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("not yet to scale"))
    .addMeta((new autoclass.meta()).setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta((new autoclass.meta()).setName("TODO").setContent("how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("HAnimModelsHandsFeet.png"))
    .addMeta((new autoclass.meta()).setName("Image").setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-HAnim"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/documents/specifications/19774/V2.0"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("X3D HAnim humanoid animation"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("HAnimModelsHandsFeet.x3d"))
    .addChild((new autoclass.Viewpoint()).setDescription("Hands and feet 10m"))
    .addChild((new autoclass.Viewpoint()).setDescription("Hands and feet 1.7m").setPosition(0.0,0.0,1.7))
    .addChild((new autoclass.Transform()).setTranslation(-1.0,1.0,0.0)
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"HAnimModelHandLeft.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d\" \"HAnimModelHandLeft.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl\"")))
      .addComments(" Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model ")
      .addChild((new autoclass.Transform("GridXY_20x20Fixed_AdjustScale")).setScale(.1,.1,.1)
        .addChild((new autoclass.Inline("GridXY_20x20Fixed")).setUrl(new autoclass.MFString("\"GridXY_20x20Fixed.x3d\" \"../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d\" \"https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d\" \"GridXY_20x20Fixed.wrl\" \"../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl\" \"https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl\"")))))
    .addChild((new autoclass.Transform()).setTranslation(1.0,1.0,0.0)
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"HAnimModelHandRight.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d\" \"HAnimModelHandRight.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl\"")))
      .addChild((new autoclass.Transform())))
    .addChild((new autoclass.Transform()).setTranslation(-1.0,-1.0,0.0)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"HAnimModelFootLeft.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d\" \"HAnimModelFootLeft.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl\"")))
      .addChild((new autoclass.Transform())))
    .addChild((new autoclass.Transform()).setTranslation(1.0,-1.0,0.0)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"HAnimModelFootRight.x3d\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d\" \"HAnimModelFootRight.wrl\" \"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl\"")))
      .addChild((new autoclass.Transform()))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HAnimModelsHandsFeet model
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
		var testObject = new HAnimModelsHandsFeet();
		console.log ("HAnimModelsHandsFeet execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelsHandsFeet().main();
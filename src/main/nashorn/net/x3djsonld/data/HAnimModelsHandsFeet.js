load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.java">HAnimModelsHandsFeet.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelsHandsFeetIndex.html" target="_top">HAnimModelsHandsFeet catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.x3d">HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2 </td>
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
			<td> 20 October 2019 </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.png">HAnimModelsHandsFeet.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeetWithFour1mGrids.png">HAnimModelsHandsFeetWithFour1mGrids.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/working-groups/humanoid-animation-h-anim" target="_blank">https://www.web3d.org/working-groups/humanoid-animation-h-anim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D H-Anim humanoid animation </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> scene, DOCTYPE and Schema under development. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../HumanoidAnimation/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("H-Anim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("HAnimModelsHandsFeet.x3d"))
    .addMeta(new meta().setName("description").setContent("Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta(new meta().setName("creator").setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("8 February 2015"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("warning").setContent("not yet to scale"))
    .addMeta(new meta().setName("warning").setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new meta().setName("Image").setContent("HAnimModelsHandsFeet.png"))
    .addMeta(new meta().setName("Image").setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new meta().setName("subject").setContent("X3D H-Anim humanoid animation"))
    .addMeta(new meta().setName("warning").setContent("scene, DOCTYPE and Schema under development."))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("HAnimModelsHandsFeet.x3d"))
    .addChild(new Viewpoint().setDescription("Hands and feet 10m"))
    .addChild(new Viewpoint().setDescription("Hands and feet 1.7m").setPosition(0.0,0.0,1.7))
    .addChild(new Transform().setTranslation(-1.0,1.0,0.0)
      .addChild(new Inline().setUrl(new MFString("\"HAnimModelHandLeft.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d\" \"HAnimModelHandLeft.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl\"")))
      .addComments(" Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model ")
      .addChild(new Transform("GridXY_20x20Fixed_AdjustScale").setScale(.1,.1,.1)
        .addChild(new Inline("GridXY_20x20Fixed").setUrl(new MFString("\"GridXY_20x20Fixed.x3d\" \"../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d\" \"https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d\" \"GridXY_20x20Fixed.wrl\" \"../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl\" \"https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl\"")))))
    .addChild(new Transform().setTranslation(1.0,1.0,0.0)
      .addChild(new Inline().setUrl(new MFString("\"HAnimModelHandRight.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d\" \"HAnimModelHandRight.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl\"")))
      .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
    .addChild(new Transform().setTranslation(-1.0,-1.0,0.0)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild(new Inline().setUrl(new MFString("\"HAnimModelFootLeft.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d\" \"HAnimModelFootLeft.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl\"")))
      .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale")))
    .addChild(new Transform().setTranslation(1.0,-1.0,0.0)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild(new Inline().setUrl(new MFString("\"HAnimModelFootRight.x3d\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d\" \"HAnimModelFootRight.wrl\" \"https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl\"")))
      .addChild(new Transform().setUSE("GridXY_20x20Fixed_AdjustScale"))));
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
	var       metaResult = "";
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
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			meta = metaList[m];
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
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
		print ("HAnimModelsHandsFeet execution self-validation test results: " + testObject.validateSelf());
	}
}
new HAnimModelsHandsFeet().main();
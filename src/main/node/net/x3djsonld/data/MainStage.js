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
 * <p> Main stage for HAnim scene Winter and Spring. </p>
 <p> Related links: MainStage.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.MainStage&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d">MainStage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Main stage for HAnim scene Winter and Spring. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Joe Williams </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joe Williams and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 May 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 May 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/0MainStageScene0525.x3dv">originals/0MainStageScene0525.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/../license.html">../license.html</a> </td>
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

	* @author Joe Williams
 */

function MainStage
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
MainStage.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedLineSet DEF='Orbit1' coordIndex field, scene-graph level=7, element #32, 62 total numbers */
	this.Orbit1_7_32_coordIndex = new autoclass.MFInt32(java.newArray("int", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #32, 183 total numbers made up of 61 3-tuple values */
	this.Coordinate_8_32_point = new autoclass.MFVec3f() /* splitting up long array to improve readability */
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0,.995000005,0.0,-.104999997,.978999972,0.0,-.208000004,.950999975,0.0,-.308999985,.913999975,0.0,-.407000005,.865999997,0.0,-.5,.809000015,0.0,-.588,.742999971,0.0,-.66900003,.66900003,0.0,-.742999971,.588,0.0,-.809000015])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.5,0.0,-.865999997,.407000005,0.0,-.913999975,.308999985,0.0,-.950999975,.208000004,0.0,-.977999985,.104999997,0.0,-.995000005,0.0,0.0,-1.0,-.104999997,0.0,-.994521976,-.208000004,0.0,-.977999985,-.308999985,0.0,-.950999975,-.407000005,0.0,-.913999975])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.5,0.0,-.865999997,-.588,0.0,-.809000015,-.66900003,0.0,-.742999971,-.742999971,0.0,-.66900003,-.809000015,0.0,-.588,-.865999997,0.0,-.5,-.913999975,0.0,-.407000005,-.950999975,0.0,-.308999985,-.977999985,0.0,-.208000004,-.995000005,0.0,-.104999997])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-1.0,0.0,0.0,-.995000005,0.0,.104999997,-.977999985,0.0,.208000004,-.950999975,0.0,.308999985,-.913999975,0.0,.407000005,-.865999997,0.0,.5,-.809000015,0.0,.588,-.742999971,0.0,.66900003,-.66900003,0.0,.742999971,-.588,0.0,.809000015])))
	.append(new autoclass.MFVec3f(java.newArray("float", [-.5,0.0,.865999997,-.407000005,0.0,.913999975,-.308999985,0.0,.950999975,-.208000004,0.0,.977999985,-.104999997,0.0,.995000005,0.0,0.0,1.0,.104999997,0.0,.995000005,.208000004,0.0,.977999985,.308999985,0.0,.950999975,.407000005,0.0,.913999975])))
	.append(new autoclass.MFVec3f(java.newArray("float", [.5,0.0,.865999997,.588,0.0,.809000015,.66900003,0.0,.742999971,.742999971,0.0,.66900003,.809000015,0.0,.588,.865999997,0.0,.5,.913999975,0.0,.407000005,.950999975,0.0,.308999985,.977999985,0.0,.208000004,.995000005,0.0,.104000002])))
	.append(new autoclass.MFVec3f(java.newArray("float", [1.0,0.0,0.0])));
  this.x3dModel = (new autoclass.X3D()).setProfile("Interchange").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("HAnim").setLevel(1))
    .addMeta((new autoclass.meta()).setName("title").setContent("MainStage.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("Main stage for HAnim scene Winter and Spring."))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Joe Williams"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("Joe Williams and Don Brutzman"))
    .addMeta((new autoclass.meta()).setName("created").setContent("25 May 2023"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2023"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("originals/0MainStageScene0525.x3dv"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
  .setScene((new autoclass.Scene())
    .addChild((new autoclass.WorldInfo()).setTitle("MainStage.x3d"))
    .addChild((new autoclass.NavigationInfo()).setHeadlight(false))
    .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(1.0).setDirection(-.5,-.5,-.5).setGlobal(true))
    .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(1.0).setDirection(-1.0,-1.0,-1.0).setGlobal(true))
    .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(1.0).setDirection(1.0,1.0,-1.0).setGlobal(true).setIntensity(0.5))
    .addChild((new autoclass.Viewpoint("Scene_StageFrontViewFar")).setDescription("hanim_Stage Front View").setOrientation(1.0,0.0,0.0,-.449999988).setPosition(0.0,4.0,10.0))
    .addChild((new autoclass.Viewpoint("Scene_InclinedView")).setDescription("hanim_Inclined View").setOrientation(-.112999998,.992999971,.034699999,.671000004).setPosition(2.619999886,1.049999952,4.059999943))
    .addChild((new autoclass.Viewpoint("Scene_StageFrontView")).setDescription("hanim_Stage Front View").setPosition(0.0,1.0,5.0))
    .addChild((new autoclass.Viewpoint("Scene_FeetStageBottomView")).setDescription("hanim_feet View").setOrientation(1.0,0.0,0.0,1.570000052).setPosition(0.0,-10.0,0.0))
    .addChild((new autoclass.Viewpoint("Scene_HeadTopView")).setDescription("hanim_Head Top View").setOrientation(1.0,0.0,0.0,-1.570000052).setPosition(0.0,15.0,0.0))
    .addChild((new autoclass.Viewpoint("Scene_TopFrontCloseView")).setDescription("hanim_Head Top View").setOrientation(1.0,0.0,0.0,-1.100000024).setPosition(0.0,8.0,3.0))
    .addChild((new autoclass.Group("HAnimStage"))
      .addChild((new autoclass.Transform("cordsysfloor")).setScale(.174999997,.174999997,.174999997)
        .addChild((new autoclass.Inline()).setUrl(new autoclass.MFString("\"JointCoordinateAxes.x3dv\""))))
      .addChild((new autoclass.Transform("StageGeometry")).setScale(1.0,.01,1.0).setTranslation(0.0,-.01,0.0)
        .addChild((new autoclass.Shape())
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setTransparency(0.6)))
          .setGeometry((new autoclass.Box()).setSize(9.0,1.0,9.0)))
        .addChild((new autoclass.Transform("Circle0"))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance("LineColor"))
              .setMaterial((new autoclass.Material()).setAmbientIntensity(1.0).setDiffuseColor(.699999988,0.0,.899999976).setEmissiveColor(.449999988,.449999988,1.0).setShininess(1.0).setSpecularColor(0.0,0.0,1.0)))
            .setGeometry((new autoclass.IndexedLineSet("Orbit1")).setDEF("Orbit1").setCoordIndex(this.Orbit1_7_32_coordIndex)
              .setCoord((new autoclass.Coordinate()).setPoint(this.Coordinate_8_32_point)))))
        .addChild((new autoclass.Transform("Circle1")).setScale(.5,1.0,.5)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()))
            .setGeometry((new autoclass.IndexedLineSet()))))
        .addChild((new autoclass.Transform("Circle2")).setScale(.25,1.0,.25)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()))
            .setGeometry((new autoclass.IndexedLineSet()))))
        .addChild((new autoclass.Transform("Circle3")).setScale(2.0,1.0,2.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()))
            .setGeometry((new autoclass.IndexedLineSet()))))
        .addChild((new autoclass.Transform("Circle4")).setScale(3.0,1.0,3.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance()))
            .setGeometry((new autoclass.IndexedLineSet())))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return MainStage model
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
		var testObject = new MainStage();
		console.log ("MainStage execution self-validation test results: " + testObject.validateSelf());
	}
}
new MainStage().main();
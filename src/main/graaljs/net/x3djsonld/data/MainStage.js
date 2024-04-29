load('X3Dautoclass.js');

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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
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
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
MainStage.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedLineSet DEF='Orbit1' coordIndex field, scene-graph level=7, element #32, 62 total numbers */
	this.Orbit1_7_32_coordIndex = new MFInt32(Java.to([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #32, 183 total numbers made up of 61 3-tuple values */
	this.Coordinate_8_32_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(.995000005),doubleToFloat(0.0),doubleToFloat(-.104999997),doubleToFloat(.978999972),doubleToFloat(0.0),doubleToFloat(-.208000004),doubleToFloat(.950999975),doubleToFloat(0.0),doubleToFloat(-.308999985),doubleToFloat(.913999975),doubleToFloat(0.0),doubleToFloat(-.407000005),doubleToFloat(.865999997),doubleToFloat(0.0),doubleToFloat(-.5),doubleToFloat(.809000015),doubleToFloat(0.0),doubleToFloat(-.588),doubleToFloat(.742999971),doubleToFloat(0.0),doubleToFloat(-.66900003),doubleToFloat(.66900003),doubleToFloat(0.0),doubleToFloat(-.742999971),doubleToFloat(.588),doubleToFloat(0.0),doubleToFloat(-.809000015)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(.5),doubleToFloat(0.0),doubleToFloat(-.865999997),doubleToFloat(.407000005),doubleToFloat(0.0),doubleToFloat(-.913999975),doubleToFloat(.308999985),doubleToFloat(0.0),doubleToFloat(-.950999975),doubleToFloat(.208000004),doubleToFloat(0.0),doubleToFloat(-.977999985),doubleToFloat(.104999997),doubleToFloat(0.0),doubleToFloat(-.995000005),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(-.104999997),doubleToFloat(0.0),doubleToFloat(-.994521976),doubleToFloat(-.208000004),doubleToFloat(0.0),doubleToFloat(-.977999985),doubleToFloat(-.308999985),doubleToFloat(0.0),doubleToFloat(-.950999975),doubleToFloat(-.407000005),doubleToFloat(0.0),doubleToFloat(-.913999975)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-.5),doubleToFloat(0.0),doubleToFloat(-.865999997),doubleToFloat(-.588),doubleToFloat(0.0),doubleToFloat(-.809000015),doubleToFloat(-.66900003),doubleToFloat(0.0),doubleToFloat(-.742999971),doubleToFloat(-.742999971),doubleToFloat(0.0),doubleToFloat(-.66900003),doubleToFloat(-.809000015),doubleToFloat(0.0),doubleToFloat(-.588),doubleToFloat(-.865999997),doubleToFloat(0.0),doubleToFloat(-.5),doubleToFloat(-.913999975),doubleToFloat(0.0),doubleToFloat(-.407000005),doubleToFloat(-.950999975),doubleToFloat(0.0),doubleToFloat(-.308999985),doubleToFloat(-.977999985),doubleToFloat(0.0),doubleToFloat(-.208000004),doubleToFloat(-.995000005),doubleToFloat(0.0),doubleToFloat(-.104999997)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-.995000005),doubleToFloat(0.0),doubleToFloat(.104999997),doubleToFloat(-.977999985),doubleToFloat(0.0),doubleToFloat(.208000004),doubleToFloat(-.950999975),doubleToFloat(0.0),doubleToFloat(.308999985),doubleToFloat(-.913999975),doubleToFloat(0.0),doubleToFloat(.407000005),doubleToFloat(-.865999997),doubleToFloat(0.0),doubleToFloat(.5),doubleToFloat(-.809000015),doubleToFloat(0.0),doubleToFloat(.588),doubleToFloat(-.742999971),doubleToFloat(0.0),doubleToFloat(.66900003),doubleToFloat(-.66900003),doubleToFloat(0.0),doubleToFloat(.742999971),doubleToFloat(-.588),doubleToFloat(0.0),doubleToFloat(.809000015)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-.5),doubleToFloat(0.0),doubleToFloat(.865999997),doubleToFloat(-.407000005),doubleToFloat(0.0),doubleToFloat(.913999975),doubleToFloat(-.308999985),doubleToFloat(0.0),doubleToFloat(.950999975),doubleToFloat(-.208000004),doubleToFloat(0.0),doubleToFloat(.977999985),doubleToFloat(-.104999997),doubleToFloat(0.0),doubleToFloat(.995000005),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(.104999997),doubleToFloat(0.0),doubleToFloat(.995000005),doubleToFloat(.208000004),doubleToFloat(0.0),doubleToFloat(.977999985),doubleToFloat(.308999985),doubleToFloat(0.0),doubleToFloat(.950999975),doubleToFloat(.407000005),doubleToFloat(0.0),doubleToFloat(.913999975)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(.5),doubleToFloat(0.0),doubleToFloat(.865999997),doubleToFloat(.588),doubleToFloat(0.0),doubleToFloat(.809000015),doubleToFloat(.66900003),doubleToFloat(0.0),doubleToFloat(.742999971),doubleToFloat(.742999971),doubleToFloat(0.0),doubleToFloat(.66900003),doubleToFloat(.809000015),doubleToFloat(0.0),doubleToFloat(.588),doubleToFloat(.865999997),doubleToFloat(0.0),doubleToFloat(.5),doubleToFloat(.913999975),doubleToFloat(0.0),doubleToFloat(.407000005),doubleToFloat(.950999975),doubleToFloat(0.0),doubleToFloat(.308999985),doubleToFloat(.977999985),doubleToFloat(0.0),doubleToFloat(.208000004),doubleToFloat(.995000005),doubleToFloat(0.0),doubleToFloat(.104000002)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("4.0")
  .setHead(new head()
    .addComponent(new component().setName("HAnim").setLevel(1))
    .addMeta(new meta().setName("title").setContent("MainStage.x3d"))
    .addMeta(new meta().setName("description").setContent("Main stage for HAnim scene Winter and Spring."))
    .addMeta(new meta().setName("creator").setContent("Joe Williams"))
    .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
    .addMeta(new meta().setName("created").setContent("25 May 2023"))
    .addMeta(new meta().setName("modified").setContent("27 May 2023"))
    .addMeta(new meta().setName("reference").setContent("originals/0MainStageScene0525.x3dv"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("MainStage.x3d"))
    .addChild(new NavigationInfo().setHeadlight(false))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(doubleToFloat(-.5),doubleToFloat(-.5),doubleToFloat(-.5)).setGlobal(true))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(doubleToFloat(-1.0),doubleToFloat(-1.0),doubleToFloat(-1.0)).setGlobal(true))
    .addChild(new DirectionalLight().setAmbientIntensity(1.0).setDirection(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(-1.0)).setGlobal(true).setIntensity(0.5))
    .addChild(new Viewpoint("Scene_StageFrontViewFar").setDescription("hanim_Stage Front View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-.449999988)).setPosition(doubleToFloat(0.0),doubleToFloat(4.0),doubleToFloat(10.0)))
    .addChild(new Viewpoint("Scene_InclinedView").setDescription("hanim_Inclined View").setOrientation(doubleToFloat(-.112999998),doubleToFloat(.992999971),doubleToFloat(.034699999),doubleToFloat(.671000004)).setPosition(doubleToFloat(2.619999886),doubleToFloat(1.049999952),doubleToFloat(4.059999943)))
    .addChild(new Viewpoint("Scene_StageFrontView").setDescription("hanim_Stage Front View").setPosition(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(5.0)))
    .addChild(new Viewpoint("Scene_FeetStageBottomView").setDescription("hanim_feet View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.570000052)).setPosition(doubleToFloat(0.0),doubleToFloat(-10.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint("Scene_HeadTopView").setDescription("hanim_Head Top View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.570000052)).setPosition(doubleToFloat(0.0),doubleToFloat(15.0),doubleToFloat(0.0)))
    .addChild(new Viewpoint("Scene_TopFrontCloseView").setDescription("hanim_Head Top View").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.100000024)).setPosition(doubleToFloat(0.0),doubleToFloat(8.0),doubleToFloat(3.0)))
    .addChild(new Group("HAnimStage")
      .addChild(new Transform("cordsysfloor").setScale(doubleToFloat(.174999997),doubleToFloat(.174999997),doubleToFloat(.174999997))
        .addChild(new Inline().setUrl(new MFString("\"JointCoordinateAxes.x3dv\""))))
      .addChild(new Transform("StageGeometry").setScale(doubleToFloat(1.0),doubleToFloat(.01),doubleToFloat(1.0)).setTranslation(doubleToFloat(0.0),doubleToFloat(-.01),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setTransparency(0.6)))
          .setGeometry(new Box().setSize(doubleToFloat(9.0),doubleToFloat(1.0),doubleToFloat(9.0))))
        .addChild(new Transform("Circle0")
          .addChild(new Shape()
            .setAppearance(new Appearance("LineColor")
              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(doubleToFloat(.699999988),doubleToFloat(0.0),doubleToFloat(.899999976)).setEmissiveColor(doubleToFloat(.449999988),doubleToFloat(.449999988),doubleToFloat(1.0)).setShininess(1.0).setSpecularColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0))))
            .setGeometry(new IndexedLineSet("Orbit1").setDEF("Orbit1").setCoordIndex(this.Orbit1_7_32_coordIndex)
              .setCoord(new Coordinate().setPoint(this.Coordinate_8_32_point)))))
        .addChild(new Transform("Circle1").setScale(doubleToFloat(.5),doubleToFloat(1.0),doubleToFloat(.5))
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle2").setScale(doubleToFloat(.25),doubleToFloat(1.0),doubleToFloat(.25))
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle3").setScale(doubleToFloat(2.0),doubleToFloat(1.0),doubleToFloat(2.0))
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1"))))
        .addChild(new Transform("Circle4").setScale(doubleToFloat(3.0),doubleToFloat(1.0),doubleToFloat(3.0))
          .addChild(new Shape()
            .setAppearance(new Appearance().setUSE("LineColor"))
            .setGeometry(new IndexedLineSet().setUSE("Orbit1")))))));
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
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
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
		var testObject = new MainStage();
		print ("MainStage execution self-validation test results: " + testObject.validateSelf());
	}
}
new MainStage().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup. </p>
 <p> Related links: <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototype.java">Figure31_9SpinGroupPrototype.java</a> source, <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototypeIndex.html" target="_top">Figure31_9SpinGroupPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d">Figure31_9SpinGroupPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm" target="_blank">http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 24 October 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter31Prototypes/../../license.html">../../license.html</a> </td>
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

	* @author Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland
 */

function Figure31_9SpinGroupPrototype
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
Figure31_9SpinGroupPrototype.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("Figure31_9SpinGroupPrototype.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"))
    .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("24 October 2000"))
    .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
    .addMeta(new metaObject().setName("description").setContent("The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."))
    .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("Figure31_9SpinGroupPrototype.x3d"))
    .addChild(new ProtoDeclareObject().setName("SpinGroup")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode")
          .addComments(" NULL node initialization "))
        .addField(new fieldObject().setAccessType("inputOutput").setName("cycleInterval").setType("SFTime").setValue("1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("loop").setType("SFBool").setValue("false"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("startTime").setType("SFTime").setValue("0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("stopTime").setType("SFTime").setValue("0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject("SpinGroupTransform")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))))
        .addComments(" following nodes will not be rendered, only the first node of a ProtoBody is drawn ")
        .addChild(new TimeSensorObject("SpinGroupClock")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("cycleInterval").setProtoField("cycleInterval"))
            .addConnect(new connectObject().setNodeField("loop").setProtoField("loop"))
            .addConnect(new connectObject().setNodeField("startTime").setProtoField("startTime"))
            .addConnect(new connectObject().setNodeField("stopTime").setProtoField("stopTime"))))
        .addChild(new OrientationInterpolatorObject("Spinner").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFRotationObject(Java.to([0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28], Java.type("float[]")))))
        .addChild(new ROUTEObject().setFromNode("SpinGroupClock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("Spinner").setFromField("value_changed").setToNode("SpinGroupTransform").setToField("set_rotation"))))
    .addComments(" Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare). ")
    .addChild(new ViewpointObject().setDescription("Click on blue crossbar to activate second SpinGroup").setPosition(0.0,18.0,30.0).setOrientation(1.0,0.0,0.0,-0.52))
    .addComments(" Create an instance, meaning actual nodes that render ")
    .addChild(new ProtoInstanceObject().setName("SpinGroup")
      .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("8"))
      .addFieldValue(new fieldValueObject().setName("loop").setValue("true"))
      .addFieldValue(new fieldValueObject().setName("children")
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject().setSize(25.0,2.0,2.0))
          .setAppearance(new AppearanceObject("Green")
            .setMaterial(new MaterialObject().setDiffuseColor(0.0,1.0,0.3))))
        .addChild(new ShapeObject()
          .setGeometry(new BoxObject().setSize(2.0,25.0,2.0))
          .setAppearance(new AppearanceObject().setUSE("Green")))
        .addChild(new ProtoInstanceObject("SecondSpinGroup", "SpinGroup").setDEF("SecondSpinGroup").setName("SpinGroup")
          .addFieldValue(new fieldValueObject().setName("cycleInterval").setValue("4"))
          .addFieldValue(new fieldValueObject().setName("loop").setValue("true"))
          .addComments(" stopTime > startTime ensures that initial state is stopped ")
          .addFieldValue(new fieldValueObject().setName("stopTime").setValue("1"))
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new TouchSensorObject("ActivateSecondSpinGroup").setDescription("Activate second SpinGroup by clicking blue bar"))
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(2.0,2.05,25.0))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(0.0,0.3,1.0))))))))
    .addChild(new ROUTEObject().setFromNode("ActivateSecondSpinGroup").setFromField("touchTime").setToNode("SecondSpinGroup").setToField("startTime")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Figure31_9SpinGroupPrototype model
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
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
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
		var testObject = new Figure31_9SpinGroupPrototype();
		print ("Figure31_9SpinGroupPrototype execution self-validation test results: " + testObject.validateSelf());
	}
}
new Figure31_9SpinGroupPrototype().main();
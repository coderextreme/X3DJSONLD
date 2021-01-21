load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene LOA2ExampleSourceWithDiamonds. </p>
 <p> Related links: LOA2ExampleSourceWithDiamonds.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> tovrmlx3d, <a href="http://castle-engine.sourceforge.net/view3dscene.php#section_converting" target="_blank">http://castle-engine.sourceforge.net/view3dscene.php#section_converting</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> LOA2ExampleSourceWithDiamonds.wrl </td>
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

 */

function LOA2ExampleSourceWithDiamonds
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
LOA2ExampleSourceWithDiamonds.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Coordinate point field, scene-graph level=9, element #55, 18 total numbers made up of 6 3-tuple values */
	this.Coordinate_9_55_point = new MFVec3fObject(Java.to([0.0,0.0099999997764825821,0.0,-0.0099999997764825821,0.0,0.0,0.0,0.0,0.0099999997764825821,0.0099999997764825821,0.0,0.0,0.0,0.0,-0.0099999997764825821,0.0,-0.0099999997764825821,0.0], Java.type("float[]")));
  this.x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.0")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("generator").setContent("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting"))
    .addMeta(new metaObject().setName("source").setContent("LOA2ExampleSourceWithDiamonds.wrl")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject().setName("Humanoid")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("humanoidBody").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("info").setType("MFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("joints").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("segments").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("sites").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("version").setType("SFString").setValue("200x"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("viewpoints").setType("MFNode"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("humanoidBody"))))
          .addChild(new GroupObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("viewpoints"))))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))))))
    .addChild(new ProtoDeclareObject().setName("Joint")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("limitOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("llimit").setType("MFFloat").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("stiffness").setType("MFFloat").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("ulimit").setType("MFFloat").setValue("")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
              .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
              .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
              .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
              .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
              .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))))
          .addChild(new TransformObject()
            .addChild(new ShapeObject()
              .setGeometry(new IndexedFaceSetObject().setCreaseAngle(0.5).setCoordIndex(Java.to([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1], Java.type("int[]")))
                .setCoord(new CoordinateObject().setPoint(this.Coordinate_9_55_point)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(1.0,1.0,0.0))))
            .setIS(new ISObject()
              .addConnect(new connectObject().setNodeField("translation").setProtoField("center")))))))
    .addChild(new ProtoDeclareObject().setName("Segment")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("centerOfMass").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("coord").setType("SFNode").setValue("NULL"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("displacers").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("mass").setType("SFFloat").setValue("0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("momentsOfInertia").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxCenter").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("initializeOnly").setName("bboxSize").setType("SFVec3f").setValue("-1 -1 -1")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new GroupObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connectObject().setNodeField("bboxSize").setProtoField("bboxSize"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren"))))))
    .addChild(new ProtoDeclareObject().setName("Site")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOnly").setName("addChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOnly").setName("removeChildren").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("center").setType("SFVec3f").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("children").setType("MFNode"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("name").setType("SFString").setValue(""))
        .addField(new fieldObject().setAccessType("inputOutput").setName("rotation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scale").setType("SFVec3f").setValue("1 1 1"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("scaleOrientation").setType("SFRotation").setValue("0 0 1 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("translation").setType("SFVec3f").setValue("0 0 0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new TransformObject()
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("children").setProtoField("children"))
            .addConnect(new connectObject().setNodeField("center").setProtoField("center"))
            .addConnect(new connectObject().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connectObject().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connectObject().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connectObject().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connectObject().setNodeField("removeChildren").setProtoField("removeChildren")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return LOA2ExampleSourceWithDiamonds model
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
		var testObject = new LOA2ExampleSourceWithDiamonds();
		print ("LOA2ExampleSourceWithDiamonds execution self-validation test results: " + testObject.validateSelf());
	}
}
new LOA2ExampleSourceWithDiamonds().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> a box. </p>
 <p> Related links: CoordinateAxes_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.CoordinateAxes_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d">CoordinateAxis.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Unknown, see X3D Resources Archives </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> manual </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d" target="_blank">https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> a box </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Unknown, see X3D Resources Archives
 */

function CoordinateAxes_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
CoordinateAxes_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("CoordinateAxis.x3d"))
    .addMeta(new metaObject().setName("creator").setContent("Unknown, see X3D Resources Archives"))
    .addMeta(new metaObject().setName("generator").setContent("manual"))
    .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/CoordinateAxis.x3d"))
    .addMeta(new metaObject().setName("description").setContent("a box")))
  .setScene(new SceneObject()
    .addChild(new CollisionObject("DoNotCollideWithVisualizationWidget")
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild(new GroupObject()
        .addComments(" Vertical Y arrow and label ")
        .addChild(new GroupObject("ArrowGreen")
          .addChild(new ShapeObject()
            .setGeometry(new CylinderObject("ArrowCylinder").setRadius(.025).setTop(false))
            .setAppearance(new AppearanceObject("Green")
              .setMaterial(new MaterialObject().setEmissiveColor(.05,.2,.05).setDiffuseColor(.1,.6,.1))))
          .addChild(new TransformObject().setTranslation(0.0,1.0,0.0)
            .addChild(new ShapeObject()
              .setGeometry(new ConeObject("ArrowCone").setBottomRadius(.05).setHeight(.1))
              .setAppearance(new AppearanceObject().setUSE("Green")))))
        .addChild(new TransformObject().setTranslation(0.0,1.08,0.0)
          .addChild(new BillboardObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject("LABEL_APPEARANCE")
                .setMaterial(new MaterialObject().setEmissiveColor(.33,.33,.1).setDiffuseColor(1.0,1.0,.3)))
              .setGeometry(new TextObject().setString(new MFStringObject("\"Y\""))
                .setFontStyle(new FontStyleObject("LABEL_FONT").setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")).setFamily(new MFStringObject("\"SANS\"")).setSize(.2)))))))
      .addChild(new TransformObject().setRotation(0.0,0.0,1.0,-1.57079)
        .addComments(" Horizontal X arrow and label ")
        .addChild(new GroupObject()
          .addChild(new GroupObject("ArrowRed")
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
              .setAppearance(new AppearanceObject("Red")
                .setMaterial(new MaterialObject().setEmissiveColor(.33,0.0,0.0).setDiffuseColor(.7,.1,.1))))
            .addChild(new TransformObject().setTranslation(0.0,1.0,0.0)
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setUSE("ArrowCone"))
                .setAppearance(new AppearanceObject().setUSE("Red")))))
          .addChild(new TransformObject().setTranslation(.072,1.1,0.0).setRotation(0.0,0.0,1.0,1.57079)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new BillboardObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new TextObject().setString(new MFStringObject("\"X\""))
                  .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))
      .addChild(new TransformObject().setRotation(1.0,0.0,0.0,1.57079)
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild(new GroupObject()
          .addChild(new GroupObject("ArrowBlue")
            .addChild(new ShapeObject()
              .setGeometry(new CylinderObject().setUSE("ArrowCylinder"))
              .setAppearance(new AppearanceObject("Blue")
                .setMaterial(new MaterialObject().setEmissiveColor(.1,.1,.33).setDiffuseColor(.3,.3,1.0))))
            .addChild(new TransformObject().setTranslation(0.0,1.0,0.0)
              .addChild(new ShapeObject()
                .setGeometry(new ConeObject().setUSE("ArrowCone"))
                .setAppearance(new AppearanceObject().setUSE("Blue")))))
          .addChild(new TransformObject().setTranslation(0.0,1.1,.072).setRotation(1.0,0.0,0.0,-1.57079)
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new BillboardObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new TextObject().setString(new MFStringObject("\"Z\""))
                  .setFontStyle(new FontStyleObject().setUSE("LABEL_FONT"))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CoordinateAxes_sail model
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
		var testObject = new CoordinateAxes_sail();
		print ("CoordinateAxes_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new CoordinateAxes_sail().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame. </p>
 <p> Related links: <a href="../../../Chapter03Grouping/CoordinateAxes.java">CoordinateAxes.java</a> source, <a href="../../../Chapter03Grouping/CoordinateAxesIndex.html" target="_top">CoordinateAxes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Chapter03Grouping/CoordinateAxes.x3d">CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Byounghyun Yoo </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 July 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" target="_blank">https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d" target="_blank">https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" target="_blank">https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Chapter03Grouping/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Byounghyun Yoo
 */

function CoordinateAxes
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
CoordinateAxes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("CoordinateAxes.x3d"))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman, Byounghyun Yoo"))
    .addMeta(new meta().setName("created").setContent("14 July 2000"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("description").setContent("X Y Z axis arrows and labels in X3D coordinate system. See CoordinateAxesExample for use as an Inline coordinate-system reference frame."))
    .addMeta(new meta().setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
    .addMeta(new meta().setName("reference").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d"))
    .addMeta(new meta().setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d"))
    .addMeta(new meta().setName("reference").setContent("https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d"))
    .addMeta(new meta().setName("identifier").setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CoordinateAxes.x3d"))
    .addChild(new Collision("DoNotCollideWithVisualizationWidget")
      .addComments(" Invoke CoordinateAxes in other scenes as an Inline child inside a scaling Transform node, at the topmost level of the scene graph. ")
      .addComments(" This NavigationInfo allows examine mode and will be overridden by any parent scene. ")
      .addComments(" Each arrow goes from +1m to -1m to allow linear scaling to fit a scene ")
      .addComments(" Note each label rotates about the scene's vertical Y axis for consistency, enabling local orientation by user ")
      .addChild(new Group()
        .addComments(" Vertical Y arrow and label ")
        .addChild(new Group("ArrowGreen")
          .addChild(new Shape()
            .setGeometry(new Cylinder("ArrowCylinder").setRadius(.025).setTop(false))
            .setAppearance(new Appearance("Green")
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(.1),doubleToFloat(.6),doubleToFloat(.1)).setEmissiveColor(doubleToFloat(.05),doubleToFloat(.2),doubleToFloat(.05)))))
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
            .addChild(new Shape()
              .setGeometry(new Cone("ArrowCone").setBottomRadius(.05).setHeight(.1))
              .setAppearance(new Appearance().setUSE("Green")))))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.08),doubleToFloat(0.0))
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance("LABEL_APPEARANCE")
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(.3)).setEmissiveColor(doubleToFloat(.33),doubleToFloat(.33),doubleToFloat(.1))))
              .setGeometry(new Text().setString(new MFString("\"Y\""))
                .setFontStyle(new FontStyle("LABEL_FONT").setFamily(new MFString("\"SANS\"")).setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(.2)))))))
      .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.57079))
        .addComments(" Horizontal X arrow and label ")
        .addChild(new Group()
          .addChild(new Group("ArrowRed")
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
              .setAppearance(new Appearance("Red")
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(.7),doubleToFloat(.1),doubleToFloat(.1)).setEmissiveColor(doubleToFloat(.33),doubleToFloat(0.0),doubleToFloat(0.0)))))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Cone().setUSE("ArrowCone"))
                .setAppearance(new Appearance().setUSE("Red")))))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57079)).setTranslation(doubleToFloat(.072),doubleToFloat(1.1),doubleToFloat(0.0))
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new Text().setString(new MFString("\"X\""))
                  .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))
      .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.57079))
        .addComments(" Perpendicular Z arrow and label, note right-hand rule ")
        .addChild(new Group()
          .addChild(new Group("ArrowBlue")
            .addChild(new Shape()
              .setGeometry(new Cylinder().setUSE("ArrowCylinder"))
              .setAppearance(new Appearance("Blue")
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(.3),doubleToFloat(.3),doubleToFloat(1.0)).setEmissiveColor(doubleToFloat(.1),doubleToFloat(.1),doubleToFloat(.33)))))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
              .addChild(new Shape()
                .setGeometry(new Cone().setUSE("ArrowCone"))
                .setAppearance(new Appearance().setUSE("Blue")))))
          .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.57079)).setTranslation(doubleToFloat(0.0),doubleToFloat(1.1),doubleToFloat(.072))
            .addComments(" note label rotated back to original coordinate frame ")
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("LABEL_APPEARANCE"))
                .setGeometry(new Text().setString(new MFString("\"Z\""))
                  .setFontStyle(new FontStyle().setUSE("LABEL_FONT"))))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CoordinateAxes model
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
		var testObject = new CoordinateAxes();
		print ("CoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
new CoordinateAxes().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene JointCoordinateAxes. </p>
 <p> Related links: JointCoordinateAxes.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converter </i> </td>
			<td> x3d-tidy V1.0.56, <a href="https://www.npmjs.com/package/x3d-tidy" target="_blank">https://www.npmjs.com/package/x3d-tidy</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> converted </i> </td>
			<td> Mon, 31 Jul 2023 03:48:04 GMT </td>
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

function JointCoordinateAxes
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
JointCoordinateAxes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("4.0")
  .setHead(new head()
    .addMeta(new meta().setName("converter").setContent("x3d-tidy V1.0.56, https://www.npmjs.com/package/x3d-tidy"))
    .addMeta(new meta().setName("converted").setContent("Mon, 31 Jul 2023 03:48:04 GMT")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setHeadlight(false))
    .addChild(new Group()
      .addChild(new Group("ARROW")
        .addChild(new Shape()
          .setAppearance(new Appearance("ARROW_APPEARANCE")
            .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(1.0)).setEmissiveColor(doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.33))))
          .setGeometry(new Cylinder().setBottom(false).setRadius(0.025).setTop(false)))
        .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(0.0))
          .addChild(new Shape("ARROW_POINTER")
            .setAppearance(new Appearance())
            .setGeometry(new Cone().setBottomRadius(0.05).setHeight(0.1))))
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(3.1416)).setTranslation(doubleToFloat(0.0),doubleToFloat(-1.0),doubleToFloat(0.0))
          .addChild(new Shape())))
      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(1.08),doubleToFloat(0.0))
        .addChild(new Billboard()
          .addChild(new Shape()
            .setAppearance(new Appearance("LABEL_APPEARANCE")
              .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.3)).setEmissiveColor(doubleToFloat(0.33),doubleToFloat(0.33),doubleToFloat(0.1))))
            .setGeometry(new Text().setString(new MFString("\"Y\""))
              .setFontStyle(new FontStyle("LABEL_FONT").setFamily(new MFString("\"SANS\"")).setJustify(new MFString("\"MIDDLE\"")).setSize(0.2)))))))
    .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(-1.5708))
      .addChild(new Group()
        .addChild(new Group())
        .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.5708)).setTranslation(doubleToFloat(0.072),doubleToFloat(1.1),doubleToFloat(0.0))
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance())
              .setGeometry(new Text().setString(new MFString("\"X\""))
                .setFontStyle(new FontStyle())))))))
    .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.5708))
      .addChild(new Group()
        .addChild(new Group())
        .addChild(new Transform().setRotation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-1.5708)).setTranslation(doubleToFloat(0.0),doubleToFloat(1.1),doubleToFloat(0.072))
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance())
              .setGeometry(new Text().setString(new MFString("\"Z\""))
                .setFontStyle(new FontStyle()))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return JointCoordinateAxes model
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
		var testObject = new JointCoordinateAxes();
		print ("JointCoordinateAxes execution self-validation test results: " + testObject.validateSelf());
	}
}
new JointCoordinateAxes().main();
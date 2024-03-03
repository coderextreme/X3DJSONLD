load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Scuba gear used by Nancy Diving example. </p>
 <p> Related links: ScubaTank.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.ScubaTank&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d">ScubaTank.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Scuba gear used by Nancy Diving example. </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d</a> </td>
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author Etsuko Lippi
 */

function ScubaTank
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
ScubaTank.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ScubaTank.x3d"))
    .addMeta(new meta().setName("description").setContent("Scuba gear used by Nancy Diving example."))
    .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
    .addMeta(new meta().setName("created").setContent("24 January 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/ScubaTank.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ScubaTank.x3d"))
    .addChild(new Transform("ScubaTank")
      .addChild(new Transform()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("tank").setAmbientIntensity(0.3).setDiffuseColor(doubleToFloat(0.3),doubleToFloat(0.3),doubleToFloat(0.5)).setShininess(0.10).setSpecularColor(doubleToFloat(0.7),doubleToFloat(0.7),doubleToFloat(0.8))))
          .setGeometry(new Cylinder().setHeight(0.7).setRadius(0.1))))
      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.35),doubleToFloat(0.0))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Sphere().setRadius(0.098))))
      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(-0.35),doubleToFloat(0.0))
        .addChild(new Shape("tankBottom")
          .setAppearance(new Appearance()
            .setMaterial(new Material("black").setAmbientIntensity(0.3).setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0))))
          .setGeometry(new Cylinder().setHeight(0.06).setRadius(0.115))))
      .addChild(new Group("tankNozzle")
        .addChild(new Transform()
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.45),doubleToFloat(0.0))
            .addChild(new Shape("pressure")
              .setAppearance(new Appearance()
                .setMaterial(new Material("pressureColor").setAmbientIntensity(0.4).setDiffuseColor(doubleToFloat(0.91),doubleToFloat(0.91),doubleToFloat(0.91)).setShininess(0.16).setSpecularColor(doubleToFloat(0.91),doubleToFloat(0.90),doubleToFloat(0.91))))
              .setGeometry(new Cylinder().setHeight(0.1).setRadius(0.015))))
          .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.50),doubleToFloat(0.0))
            .addChild(new Shape("pressureTop")
              .setAppearance(new Appearance()
                .setMaterial(new Material()))
              .setGeometry(new Cylinder().setHeight(0.02).setRadius(0.025))))
          .addChild(new Transform().setRotation(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(1.0),doubleToFloat(1.57)).setTranslation(doubleToFloat(-0.028),doubleToFloat(0.462),doubleToFloat(0.0))
            .addChild(new Transform()
              .addChild(new Shape("connectorToRegulator")
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new Cylinder().setHeight(0.03).setRadius(0.01))))
            .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.02),doubleToFloat(0.0))
              .addChild(new Shape("connectorToRegulatorTop")
                .setAppearance(new Appearance()
                  .setMaterial(new Material()))
                .setGeometry(new Cylinder().setHeight(0.02).setRadius(0.02)))))))
      .addChild(new Transform().setTranslation(doubleToFloat(0.0),doubleToFloat(0.2),doubleToFloat(0.0))
        .addChild(new Shape("tankHoldBelt")
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Cylinder().setHeight(0.1).setRadius(0.115)))))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.6),doubleToFloat(0.6),doubleToFloat(0.6)], Java.type("float[]"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ScubaTank model
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
		var testObject = new ScubaTank();
		print ("ScubaTank execution self-validation test results: " + testObject.validateSelf());
	}
}
new ScubaTank().main();
load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Bubble animation used by Nancy Diving example. </p>
 <p> Related links: Bubbles.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Bubbles&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d">Bubbles.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Bubble animation used by Nancy Diving example. </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d</a> </td>
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

function Bubbles
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
Bubbles.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Interchange").setVersion("3.3")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("Bubbles.x3d"))
    .addMeta(new meta().setName("description").setContent("Bubble animation used by Nancy Diving example."))
    .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
    .addMeta(new meta().setName("created").setContent("24 January 2001"))
    .addMeta(new meta().setName("modified").setContent("23 May 2020"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Bubbles.x3d"))
    .addChild(new Transform("Bubbles")
      .addChild(new Group("Bubble")
        .addChild(new TimeSensor("BubbleClock").setCycleInterval(6.0).setLoop(true))
        .addChild(new PositionInterpolator("BubblePath1").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(0.8),doubleToFloat(0.9),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.86),doubleToFloat(0.86),doubleToFloat(0.86),doubleToFloat(0.99),doubleToFloat(0.998),doubleToFloat(0.9876),doubleToFloat(1.272),doubleToFloat(1.90440),doubleToFloat(0.9509)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath2").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.3),doubleToFloat(0.64),doubleToFloat(0.85),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.1),doubleToFloat(0.2),doubleToFloat(0.4),doubleToFloat(0.25),doubleToFloat(0.3),doubleToFloat(0.5),doubleToFloat(0.46),doubleToFloat(0.75),doubleToFloat(0.5),doubleToFloat(.575),doubleToFloat(.038483478),doubleToFloat(1.9890),doubleToFloat(1.0983730)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath3").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.1),doubleToFloat(0.45),doubleToFloat(0.7),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.01),doubleToFloat(0.25),doubleToFloat(0.35),doubleToFloat(0.0045),doubleToFloat(0.55),doubleToFloat(0.6),doubleToFloat(0.0055),doubleToFloat(0.66),doubleToFloat(0.665),doubleToFloat(0.00655),doubleToFloat(1.5550),doubleToFloat(1.090430),doubleToFloat(0.0057340)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath4").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(0.6),doubleToFloat(0.8),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.005),doubleToFloat(0.6),doubleToFloat(0.6),doubleToFloat(0.006),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.0075),doubleToFloat(1.9485940),doubleToFloat(1.39830),doubleToFloat(.009009349)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath5").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.25),doubleToFloat(0.35),doubleToFloat(0.65),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.5),doubleToFloat(0.5),doubleToFloat(0.005),doubleToFloat(0.6),doubleToFloat(0.6),doubleToFloat(0.006),doubleToFloat(0.75),doubleToFloat(0.75),doubleToFloat(0.0075),doubleToFloat(1.844440),doubleToFloat(1.222220),doubleToFloat(0.1)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath6").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.15),doubleToFloat(0.22235),doubleToFloat(0.55565),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.235),doubleToFloat(0.3455),doubleToFloat(0.0055),doubleToFloat(0.356),doubleToFloat(0.676),doubleToFloat(0.00456),doubleToFloat(0.5675),doubleToFloat(0.75),doubleToFloat(0.0074565),doubleToFloat(1.098),doubleToFloat(1.0343),doubleToFloat(0.140)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath7").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.2425),doubleToFloat(0.4535),doubleToFloat(0.6775),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.12345),doubleToFloat(0.2225),doubleToFloat(0.00335),doubleToFloat(0.786),doubleToFloat(0.456),doubleToFloat(0.00666),doubleToFloat(0.74555),doubleToFloat(0.7335),doubleToFloat(0.00234575),doubleToFloat(.08787),doubleToFloat(1.022),doubleToFloat(0.12)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath8").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.1125),doubleToFloat(0.5535),doubleToFloat(0.97865),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.1235),doubleToFloat(0.05),doubleToFloat(0.00125),doubleToFloat(0.5666),doubleToFloat(0.4346),doubleToFloat(0.005556),doubleToFloat(0.8975),doubleToFloat(0.34575),doubleToFloat(0.0098775),doubleToFloat(1.87870),doubleToFloat(1.6860),doubleToFloat(0.860)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath9").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.0025),doubleToFloat(0.035),doubleToFloat(0.65),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.522),doubleToFloat(0.5445),doubleToFloat(0.0057),doubleToFloat(0.6543),doubleToFloat(0.226),doubleToFloat(0.0055),doubleToFloat(0.45575),doubleToFloat(0.4375),doubleToFloat(0.0067),doubleToFloat(1.87870),doubleToFloat(2.0),doubleToFloat(0.1545)], Java.type("float[]")))))
        .addChild(new PositionInterpolator("BubblePath10").setKey(Java.to([doubleToFloat(0.0),doubleToFloat(0.00025),doubleToFloat(0.035),doubleToFloat(0.6895),doubleToFloat(1.0)], Java.type("float[]"))).setKeyValue(new MFVec3f(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.8765),doubleToFloat(0.445),doubleToFloat(0.00335),doubleToFloat(0.3336),doubleToFloat(0.4446),doubleToFloat(0.005556),doubleToFloat(0.765),doubleToFloat(0.75),doubleToFloat(0.0075),doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(0.1)], Java.type("float[]")))))
        .addChild(new Transform()
          .addChild(new Transform("bubble1")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.025))))
          .addChild(new Transform("bubble2")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.055))))
          .addChild(new Transform("bubble3")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.065))))
          .addChild(new Transform("bubble4")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.015))))
          .addChild(new Transform("bubble5")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.075))))
          .addChild(new Transform("bubble6")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.005))))
          .addChild(new Transform("bubble7")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.035))))
          .addChild(new Transform("bubble8")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.05))))
          .addChild(new Transform("bubble9")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.045))))
          .addChild(new Transform("bubble10")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(doubleToFloat(1.0),doubleToFloat(1.0),doubleToFloat(1.0)).setTransparency(0.8)))
              .setGeometry(new Sphere().setRadius(0.035))))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath1").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath2").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath3").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath4").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath5").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath6").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath7").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath8").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath9").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubbleClock").setFromField("fraction_changed").setToNode("BubblePath10").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("BubblePath1").setFromField("value_changed").setToNode("bubble1").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath2").setFromField("value_changed").setToNode("bubble2").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath3").setFromField("value_changed").setToNode("bubble3").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath4").setFromField("value_changed").setToNode("bubble4").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath5").setFromField("value_changed").setToNode("bubble5").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath6").setFromField("value_changed").setToNode("bubble6").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath7").setFromField("value_changed").setToNode("bubble7").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath8").setFromField("value_changed").setToNode("bubble8").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath9").setFromField("value_changed").setToNode("bubble9").setToField("set_translation"))
          .addChild(new ROUTE().setFromNode("BubblePath10").setFromField("value_changed").setToNode("bubble10").setToField("set_translation")))))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.6)], Java.type("float[]"))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return Bubbles model
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
		var testObject = new Bubbles();
		print ("Bubbles execution self-validation test results: " + testObject.validateSelf());
	}
}
new Bubbles().main();
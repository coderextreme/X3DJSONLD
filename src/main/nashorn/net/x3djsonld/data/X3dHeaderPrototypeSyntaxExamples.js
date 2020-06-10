load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </p>
 <p> Related links: <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.java">X3dHeaderPrototypeSyntaxExamples.java</a> source, <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamplesIndex.html" target="_top">X3dHeaderPrototypeSyntaxExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d">X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 October 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 May 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationSection </i> </td>
			<td> X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> specificationUrl </i> </td>
			<td> <a href="http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax" target="_blank">http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d" target="_blank">http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../X3dSpecifications/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

function X3dHeaderPrototypeSyntaxExamples
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
X3dHeaderPrototypeSyntaxExamples.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.3")
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addComponent(new component().setName("NURBS").setLevel(2))
    .addComponent(new component().setName("Core").setLevel(2))
    .addComponent(new component().setName("Navigation").setLevel(1))
    .addComponent(new component().setName("Text").setLevel(1))
    .addMeta(new meta().setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new meta().setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
    .addMeta(new meta().setName("created").setContent("14 October 2002"))
    .addMeta(new meta().setName("modified").setContent("27 May 2017"))
    .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
    .addMeta(new meta().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
    .addMeta(new meta().setName("specificationUrl").setContent("http://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
    .addMeta(new meta().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ExternProtoDeclare().setName("ViewPositionOrientation").setUrl(new MFString("\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\""))
      .addField(new field().setAccessType("inputOutput").setName("enabled").setType("SFBool"))
      .addField(new field().setAccessType("initializeOnly").setName("traceEnabled").setType("SFBool"))
      .addField(new field().setAccessType("inputOnly").setName("set_traceEnabled").setType("SFBool"))
      .addField(new field().setAccessType("outputOnly").setName("position_changed").setType("SFVec3f"))
      .addField(new field().setAccessType("outputOnly").setName("orientation_changed").setType("SFRotation"))
      .addField(new field().setAccessType("outputOnly").setName("outputViewpointString").setType("MFString")))
    .addChild(new ProtoDeclare().setName("NewWorldInfoNode")
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo("ExamplePrototypeBody"))))
    .addChild(new ProtoInstance().setName("NewWorldInfoNode"))
    .addChild(new ProtoDeclare().setName("EmissiveMaterial")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("inputOutput").setName("onlyColor").setType("SFColor").setValue("1 0 0")))
      .setProtoBody(new ProtoBody()
        .addComments(" Override default diffuseColor value 0.8 0.8 0.8 ")
        .addChild(new Material().setDiffuseColor(0.0,0.0,0.0)
          .addComments(" Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare. ")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
    .addChild(new ProtoDeclare().setName("ShiftGroupUp2m")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setAccessType("inputOutput").setName("children").setType("MFNode")
          .addChild(new Group("DefaultNodeValue").setBboxSize(2.0,2.0,2.0)
            .addComments(" Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\" "))))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform().setTranslation(0.0,2.0,0.0)
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("children")))))))
    .addChild(new ProtoInstance().setName("ShiftGroupUp2m"))
    .addComments(" ==================== ")
    .addChild(new Viewpoint("ExampleSingleElement").setDescription("Hello syntax"))
    .addChild(new Group("ExampleChildElement")
      .addChild(new Shape()
        .setGeometry(new Box())
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.6,0.4,0.2)))))
    .addChild(new Transform("TransformExampleUSE").setRotation(0.0,1.0,0.0,0.78).setTranslation(0.0,2.5,0.0)
      .addChild(new Group().setUSE("ExampleChildElement")))
    .addChild(new Collision()
      .setProxy(new Shape()
        .addComments(" note that Collision proxy Shape is not rendered ")
        .setGeometry(new Sphere())
        .setAppearance(new Appearance()
          .setMaterial(new Material())))
      .addChild(new Group().setUSE("ExampleChildElement")))
    .addChild(new Transform().setTranslation(0.0,-2.5,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new ProtoInstance().setName("EmissiveMaterial")
            .addFieldValue(new fieldValue().setName("onlyColor").setValue("0.2 0.6 0.6"))))
        .setGeometry(new Text().setString(new MFString("\"X3D Header Prototype syntax examples\" \"(view console for EXTERNPROTO output)\""))
          .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.6)))))
    .addChild(new ProtoInstance().setName("ViewPositionOrientation")
      .addFieldValue(new fieldValue().setName("enabled").setValue("true")))
    .addChild(new TimeSensor("Clock").setCycleInterval(4).setLoop(true))
    .addChild(new OrientationInterpolator("Spinner").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFRotation(Java.to([0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,6.28318], Java.type("float[]")))))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("Spinner").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Spinner").setFromField("value_changed").setToNode("TransformExampleUSE").setToField("rotation"))
    .addChild(new Inline("someInline").setUrl(new MFString("\"someUrl.x3d\" \"http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d\"")))
    .addChild(new IMPORT().setImportedDEF("someName").setInlineDEF("someInline").setAS("someInlineRoot"))
    .addChild(new PositionInterpolator("StayInPlace").setKeyValue(new MFVec3f(Java.to([0.0,0.0,0.0,0.0,0.0,0.0], Java.type("float[]")))).setKey(Java.to([0.0,1.0], Java.type("float[]"))))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("StayInPlace").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("StayInPlace").setFromField("value_changed").setToNode("someInlineRoot").setToField("set_translation")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return X3dHeaderPrototypeSyntaxExamples model
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
		var testObject = new X3dHeaderPrototypeSyntaxExamples();
		print ("X3dHeaderPrototypeSyntaxExamples execution self-validation test results: " + testObject.validateSelf());
	}
}
new X3dHeaderPrototypeSyntaxExamples().main();
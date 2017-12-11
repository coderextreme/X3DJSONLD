load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library. </p>
 <p> Related links: HelloWorldProgramOutput_sail.java source, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.HelloWorldProgramOutput_sail&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d">HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">http://www.web3d.org/specifications/java/X3DJSAIL.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> HelloWorldProgramOutput.java </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 6 September 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 9 December 2017 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D Java Scene Access Interface Library (X3DJSAIL) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java" target="_blank">http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Netbeans <a href="http://www.netbeans.org" target="_blank">http://www.netbeans.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d" target="_blank">https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation: </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorldProgramOutput.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3dv">HelloWorldProgramOutput.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> HelloWorldProgramOutput.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.html">HelloWorldProgramOutput.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> X3dValidator </i> </td>
			<td> <a href="https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d" target="_blank">https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d" target="_blank">http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="http://www.web3d.org/specifications/java/examples/../license.html">../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> SpecialTest </i> </td>
			<td> tested sat: name value cannot contain embedded space character </td>
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

	* @author Don Brutzman
 */

function HelloWorldProgramOutput_sail
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
HelloWorldProgramOutput_sail.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Navigation").setLevel(3))
    .addComponent(new componentObject().setName("Layering").setLevel(1))
    .addUnit(new unitObject().setName("AngleUnitConversion").setConversionFactor(1.0).setCategory("angle"))
    .addUnit(new unitObject().setName("LengthUnitConversion").setConversionFactor(1.0).setCategory("length"))
    .addMeta(new metaObject().setName("title").setContent("HelloWorldProgramOutput.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library"))
    .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html"))
    .addMeta(new metaObject().setName("generator").setContent("HelloWorldProgramOutput.java"))
    .addMeta(new metaObject().setName("created").setContent("6 September 2016"))
    .addMeta(new metaObject().setName("modified").setContent("9 December 2017"))
    .addMeta(new metaObject().setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
    .addMeta(new metaObject().setName("generator").setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
    .addMeta(new metaObject().setName("generator").setContent("Netbeans http://www.netbeans.org"))
    .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
    .addMeta(new metaObject().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new metaObject().setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
    .addMeta(new metaObject().setName("reference").setContent("HelloWorldProgramOutput.txt"))
    .addMeta(new metaObject().setName("reference").setContent("HelloWorldProgramOutput.x3dv"))
    .addMeta(new metaObject().setName("reference").setContent("HelloWorldProgramOutput.wrl"))
    .addMeta(new metaObject().setName("reference").setContent("HelloWorldProgramOutput.html"))
    .addMeta(new metaObject().setName("X3dValidator").setContent("https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
    .addMeta(new metaObject().setName("license").setContent("../license.html"))
    .addMeta(new metaObject().setName("SpecialTest").setContent("tested sat: name value cannot contain embedded space character"))
    .addComments(" comment #1 ")
    .addComments(" comment #2 ")
    .addComments(" comment #3 ")
    .addComments(" comment #4 "))
  .setScene(new SceneObject()
    .addChild(new ViewpointGroupObject().setDescription("Available viewpoints")
      .addChild(new ViewpointObject("DefaultView").setDescription("Hello X3DJSAIL"))
      .addChild(new ViewpointObject("TopDownView").setDescription("top-down view from above").setPosition(0.0,100.0,0.0).setOrientation(1.0,0.0,0.0,-1.570796)))
    .addChild(new WorldInfoObject("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
    .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
    .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
    .addMetadata(new MetadataStringObject("scene.addChildMetadataObject").setName("test"))
    .addChild(new LayerSetObject("scene.addChildLayerSetObjectTest"))
    .addChild(new TransformObject("LogoGeometryTransform").setTranslation(0.0,1.5,0.0)
      .addChild(new AnchorObject().setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new MFStringObject("\"../X3DJSAIL.html\" \"http://www.web3d.org/specifications/java/X3DJSAIL.html\""))
        .addChild(new ShapeObject("BoxShape")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject("GreenMaterial").setDiffuseColor(0.0,1.0,1.0).setTransparency(0.1).setEmissiveColor(0.8,0.0,0.0))
            .setTexture(new ImageTextureObject().setUrl(new MFStringObject("\"images/X3dJavaSceneAccessInterfaceSaiLibrary.png\" \"http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png\""))))
          .setGeometry(new BoxObject("test-NMTOKEN_regex.0123456789").setCssClass("textured")))))
    .addChild(new ShapeObject("LineShape")
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject().setEmissiveColor(0.6,0.19607843,0.8)))
      .setGeometry(new IndexedLineSetObject().setCoordIndex(Java.to([0,1,2,3,4,0], Java.type("int[]")))
        .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(Java.to([0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0], Java.type("float[]")))))))
    .addChild(new PositionInterpolatorObject("BoxPathAnimator").setKey(Java.to([0.0,0.125,0.375,0.625,0.875,1.0], Java.type("float[]"))).setKeyValue(new MFVec3fObject(Java.to([0.0,1.5,0.0,2.0,1.5,0.0,2.0,1.5,-2.0,-2.0,1.5,-2.0,-2.0,1.5,0.0,0.0,1.5,0.0], Java.type("float[]")))))
    .addChild(new TimeSensorObject("OrbitClock").setCycleInterval(8.0).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("OrbitClock").setFromField("fraction_changed").setToNode("BoxPathAnimator").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("BoxPathAnimator").setFromField("value_changed").setToNode("LogoGeometryTransform").setToField("set_translation"))
    .addChild(new TransformObject("TextTransform").setTranslation(0.0,-1.5,0.0)
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setUSE("GreenMaterial")))
        .setGeometry(new TextObject().setString(new MFStringObject("\"X3D Java\" \"SAI Library\" \"X3DJSAIL\""))
          .setMetadata(new MetadataSetObject().setName("EscapedQuotationMarksMetadataSet")
            .setMetadata(new MetadataStringObject().setName("escapedQuotesTest2").setValue(new MFStringObject("\"escaped quotation marks example 2: He said, &quot;Immel did it!&quot;\""))))
          .setFontStyle(new FontStyleObject().setJustify(new MFStringObject("\"MIDDLE\" \"MIDDLE\"")))
          .addComments(" escaped quotation marks example 3: He said, \"Immel did it!\" ")
          .addComments(" escaped quotation marks example 4: He said, &quot;Immel did it!&quot; ")))
      .addChild(new CollisionObject()
        .addComments(" test containerField='proxy' ")
        .addChild(new ShapeObject("ProxyShape")
          .setGeometry(new TextObject().setString(new MFStringObject("\"One, Two, Three\" \"\" \"He said, \\\"Immel did it!\\\"\"")))
          .addComments(" alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' ")
          .addComments(" alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"}) ")
          .addComments(" reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html ")))
      .addComments(" It's a beautiful world ")
      .addComments(" ... for you! ")
      .addComments(" https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) "))
    .addComments(" repeatedly spin 180 degrees as a readable special effect ")
    .addChild(new OrientationInterpolatorObject("SpinInterpolator").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFRotationObject(Java.to([0.0,1.0,0.0,4.712389,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.5707964], Java.type("float[]")))))
    .addChild(new TimeSensorObject("SpinClock").setCycleInterval(5.0).setLoop(true))
    .addChild(new ROUTEObject().setFromNode("SpinClock").setFromField("fraction_changed").setToNode("SpinInterpolator").setToField("set_fraction"))
    .addChild(new ROUTEObject().setFromNode("SpinInterpolator").setFromField("value_changed").setToNode("TextTransform").setToField("rotation"))
    .addChild(new GroupObject("BackgroundGroup")
      .addChild(new BackgroundObject("GradualBackground"))
      .addChild(new ScriptObject("colorTypeConversionScript").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function colorInput (eventValue) // Example source code" + "\n" + 
"{" + "\n" + 
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event" + "\n" + 
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');" + "\n" + 
"}" + "\n" + "]]>"
)
        .addField(new fieldObject().setAccessType("inputOnly").setName("colorInput").setType("SFColor"))
        .addField(new fieldObject().setAccessType("outputOnly").setName("colorsOutput").setType("MFColor")))
      .addChild(new ColorInterpolatorObject("ColorAnimator").setKey(Java.to([0.0,0.5,1.0], Java.type("float[]"))).setKeyValue(new MFColorObject(Java.to([0.9411765,1.0,1.0,0.29411766,0.0,0.50980395,0.9411765,1.0,1.0], Java.type("float[]"))))
        .addComments(" AZURE to INDIGO and back again "))
      .addChild(new TimeSensorObject("ColorClock").setCycleInterval(60.0).setLoop(true))
      .addChild(new ROUTEObject().setFromNode("colorTypeConversionScript").setFromField("colorsOutput").setToNode("GradualBackground").setToField("skyColor"))
      .addChild(new ROUTEObject().setFromNode("ColorAnimator").setFromField("value_changed").setToNode("colorTypeConversionScript").setToField("colorInput"))
      .addChild(new ROUTEObject().setFromNode("ColorClock").setFromField("fraction_changed").setToNode("ColorAnimator").setToField("set_fraction")))
    .addChild(new ProtoDeclareObject().setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01 prototype is a Material node")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setValue("ArtDeco01 prototype is a Material node").setAppinfo("tooltip for descriptionField"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true")))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" Initial node of ProtoBody determines prototype node type ")
        .addChild(new MaterialObject().setShininess(0.127273).setAmbientIntensity(0.25).setSpecularColor(0.276305,0.11431,0.139857).setDiffuseColor(0.282435,0.085159,0.134462))
        .addComments(" [HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\" ")
        .addComments(" presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types ")
        .addChild(new TouchSensorObject().setDescription("within ProtoBody")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
            .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))))))
    .addChild(new ExternProtoDeclareObject().setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new MFStringObject("\"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02\" \"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02\""))
      .addField(new fieldObject().setAccessType("inputOutput").setName("description").setType("SFString").setAppinfo("tooltip for descriptionField"))
      .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\" "))
    .addComments(" Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place ")
    .addChild(new ShapeObject("TestShape1")
      .setAppearance(new AppearanceObject("TestAppearance1")
        .addChild(new ProtoInstanceObject().setName("ArtDeco01")
          .addFieldValue(new fieldValueObject().setName("description").setValue("ArtDeco01 can substitute for a Material node"))
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE: ProtoInstance name='ArtDeco01' has no corresponding ProtoDeclareObject or ExternProtoDeclareObject to provide type.\" "))
        .addComments(" ArtDeco01 Material prototype goes here... "))
      .setGeometry(new SphereObject().setRadius(0.001)))
    .addChild(new ShapeObject("TestShape2")
      .setAppearance(new AppearanceObject("TestAppearance2")
        .addChild(new ProtoInstanceObject().setName("ArtDeco02")
          .addFieldValue(new fieldValueObject().setName("description").setValue("ArtDeco02 can substitute for another Material node"))
          .addComments(" [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE: ProtoInstance name='ArtDeco02' has no corresponding ProtoDeclareObject or ExternProtoDeclareObject to provide type.\" "))
        .addComments(" ArtDeco02 Material prototype goes here... "))
      .setGeometry(new ConeObject().setBottomRadius(0.001).setHeight(0.001)))
    .addChild(new InlineObject("inlineSceneDef").setUrl(new MFStringObject("\"someOtherScene.x3d\"")))
    .addChild(new IMPORTObject().setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef").setAS("WorldInfoDEF2"))
    .addChild(new EXPORTObject().setLocalDEF("WorldInfoDEF").setAS("WorldInfoDEF3"))
    .addChild(new ProtoDeclareObject().setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
      .setProtoInterface(new ProtoInterfaceObject()
        .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool").setValue("true"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("diffuseColor").setType("SFColor").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("emissiveColor").setType("SFColor").setValue("0.05 0.05 0.5"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("specularColor").setType("SFColor").setValue("0 0 0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("transparency").setType("SFFloat").setValue("0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("shininess").setType("SFFloat").setValue("0.0"))
        .addField(new fieldObject().setAccessType("inputOutput").setName("ambientIntensity").setType("SFFloat").setValue("0.0")))
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject("MaterialNode")
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
            .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
            .addConnect(new connectObject().setNodeField("specularColor").setProtoField("specularColor"))
            .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency"))
            .addConnect(new connectObject().setNodeField("shininess").setProtoField("shininess"))
            .addConnect(new connectObject().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
        .addComments(" Only first node (the node type) is renderable, others are along for the ride ")
        .addChild(new ScriptObject("MaterialModulatorScript").setSourceCode(
"<![CDATA[" + "\n" +
"\n" + 
"\n" + 
"ecmascript:" + "\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"    newColor = diffuseColor; // start with correct color" + "\n" + 
"}" + "\n" + 
"function set_enabled (newValue)" + "\n" + 
"{" + "\n" + 
"	enabled = newValue;" + "\n" + 
"}" + "\n" + 
"function clockTrigger (timeValue)" + "\n" + 
"{" + "\n" + 
"    if (!enabled) return;" + "\n" + 
"    red   = newColor.r;" + "\n" + 
"    green = newColor.g;" + "\n" + 
"    blue  = newColor.b;" + "\n" + 
"    " + "\n" + 
"    // note different modulation rates for each color component, % is modulus operator" + "\n" + 
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);" + "\n" + 
"	if (enabled)" + "\n" + 
"	{" + "\n" + 
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + "]]>"
)
          .addField(new fieldObject().setAccessType("inputOutput").setName("enabled").setType("SFBool"))
          .addField(new fieldObject().setAccessType("inputOutput").setName("diffuseColor").setType("SFColor"))
          .addField(new fieldObject().setAccessType("outputOnly").setName("newColor").setType("SFColor"))
          .addField(new fieldObject().setAccessType("inputOnly").setName("clockTrigger").setType("SFTime"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))))))
    .addComments(" Test success: declarative statement createDeclarativeShapeTests() ")
    .addChild(new GroupObject("DeclarativeGroupExample")
      .addChild(new ShapeObject()
        .setMetadata(new MetadataStringObject("FindableMetadataStringTest").setName("findThisNameValue").setValue(new MFStringObject("\"test case\"")))
        .setAppearance(new AppearanceObject("DeclarativeAppearanceExample")
          .addChild(new ProtoInstanceObject("MyMaterialModulator", "MaterialModulator").setDEF("MyMaterialModulator").setName("MaterialModulator"))
          .addComments(" DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance "))
        .setGeometry(new ConeObject().setBottomRadius(0.05).setHeight(0.1).setBottom(false)))
      .addComments(" Test success: declarativeGroup.addChild() singleton pipeline method "))
    .addComments(" Test success: declarative statement addChild() ")
    .addComments(Java.to([" Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e.",
"<Appearance DEF='DeclarativeAppearanceExample'>",
"    <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/>",
"    <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - ->",
"</Appearance> ], Java.type("java.lang.String[]")))
    .addComments(" Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\")  found ")
    .addComments(" Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found ")
    .addChild(new GroupObject("TestFieldObjectsGroup")
      .addComments(" testFieldObjects() results ")
      .addComments(" SFBool default=true, true=true, false=false, negate()=true ")
      .addComments(" MFBool default=, initial=true false true, negate()=false true false ")
      .addComments(" SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 ")
      .addComments(" MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 ")
      .addComments(" ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= ")
      .addComments(" SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344 "))
    .addChild(new SoundObject()
      .setSource(new AudioClipObject().setUrl(new MFStringObject("\"chimes.wav\" \"http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav\"")))
      .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d "))
    .addChild(new SoundObject()
      .setSource(new MovieTextureObject().setUrl(new MFStringObject("\"mpgsys.mpg\" \"http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg\"")))
      .addComments(" Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d ")
      .addComments(" Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" "))
    .addComments(" Test success:  AnchorObject.isNode()=true,              siteAnchor.isNode()=true ")
    .addComments(" Test success:  AnchorObject.isStatement()=false,        siteAnchor.isStatement()=false ")
    .addComments(" Test success:   ROUTEObject.isNode()=false,     orbitPositionROUTE.isNode()=false ")
    .addComments(" Test success:   ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true ")
    .addComments(" Test success: CommentsBlock.isNode()=false,           testComments.isNode()=false ")
    .addComments(" Test success: CommentsBlock.isStatement()=false,      testComments.isStatement()=false ")
    .addChild(new ShapeObject("ExtrusionShape")
      .setAppearance(new AppearanceObject("TransparentAppearance")
        .setMaterial(new MaterialObject().setTransparency(1.0)))
      .setGeometry(new ExtrusionObject("ExampleExtrusion"))
      .addComments(" ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' ")
      .addComments(" ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' ")));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return HelloWorldProgramOutput_sail model
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
		var testObject = new HelloWorldProgramOutput_sail();
		print ("HelloWorldProgramOutput_sail execution self-validation test results: " + testObject.validateSelf());
	}
}
new HelloWorldProgramOutput_sail().main();
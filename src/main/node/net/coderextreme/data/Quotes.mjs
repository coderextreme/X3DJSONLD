import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addComments((new autoclass.CommentsBlock("comment #1")))
        .addComments((new autoclass.CommentsBlock("comment #2")))
        .addComments((new autoclass.CommentsBlock("comment #3")))
        .addComments((new autoclass.CommentsBlock("comment #4")))
        .addComponent((new autoclass.component()).setName("Navigation").setLevel(3))
        .addComponent((new autoclass.component()).setName("Layering").setLevel(1))
        .addUnit((new autoclass.unit()).setName("AngleUnitConversion").setCategory("angle").setConversionFactor(1))
        .addUnit((new autoclass.unit()).setName("LengthUnitConversion").setCategory("length").setConversionFactor(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("Quotes.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("HelloWorldProgramOutput.java"))
        .addMeta((new autoclass.meta()).setName("created").setContent("6 September 2016"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("7 April 2018"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("Netbeans http://www.netbeans.org"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.txt"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.x3dv"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.wrl"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("HelloWorldProgramOutput.html"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html"))
        .addMeta((new autoclass.meta()).setName("info").setContent("tested sat: name value cannot contain embedded space character"))
        .addMeta((new autoclass.meta()).setName("translated").setContent("30 April 2018"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta((new autoclass.meta()).setName("reference").setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ViewpointGroup()).setDescription("Available viewpoints")
          .addChild((new autoclass.Viewpoint()).setDEF("DefaultView").setDescription("Hello X3DJSAIL"))
          .addChild((new autoclass.Viewpoint()).setDEF("TopDownView").setDescription("top-down view from above").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.570796)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(100), java.newFloat(0)]))))
        .addChild((new autoclass.WorldInfo()).setDEF("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
        .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
        .addChild((new autoclass.WorldInfo()).setUSE("WorldInfoDEF"))
        .addMetadata((new autoclass.MetadataString()).setName("test").setDEF("scene.addChildMetadata").setValue(java.newArray("java.lang.String", ["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"])))
        .addLayerSet((new autoclass.LayerSet()).setDEF("scene.addChildLayerSetTest"))
        .addChild((new autoclass.Transform()).setDEF("LogoGeometryTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(1.5), java.newFloat(0)]))
          .addChild((new autoclass.Anchor()).setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(java.newArray("java.lang.String", ["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]))
            .addChild((new autoclass.Shape()).setDEF("BoxShape")
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDEF("GreenMaterial").setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(1)])).setEmissiveColor(java.newArray("float", [java.newFloat(0.8), java.newFloat(0), java.newFloat(0)])).setTransparency(java.newFloat(0.1)))
                .setTexture((new autoclass.ImageTexture()).setUrl(java.newArray("java.lang.String", ["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]))))
              .setGeometry((new autoclass.Box()).setDEF("test-NMTOKEN_regex.0123456789").setCssClass("untextured")))))
        .addChild((new autoclass.Shape()).setDEF("LineShape")
          .setAppearance((new autoclass.Appearance())
            .setMaterial((new autoclass.Material()).setEmissiveColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.19607843), java.newFloat(0.8)]))))
          .setGeometry((new autoclass.IndexedLineSet()).setCoordIndex(java.newArray("int", [0,1,2,3,4,0]))
            .addComments((new autoclass.CommentsBlock("Coordinate 3-tuple point count: 6")))
            .setCoord((new autoclass.Coordinate()).setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(1.5), java.newFloat(0), java.newFloat(2), java.newFloat(1.5), java.newFloat(0), java.newFloat(2), java.newFloat(1.5), java.newFloat(-2), java.newFloat(-2), java.newFloat(1.5), java.newFloat(-2), java.newFloat(-2), java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(1.5), java.newFloat(0)])))))
        .addChild((new autoclass.PositionInterpolator()).setDEF("BoxPathAnimator").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.125), java.newFloat(0.375), java.newFloat(0.625), java.newFloat(0.875), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1.5), java.newFloat(0), java.newFloat(2), java.newFloat(1.5), java.newFloat(0), java.newFloat(2), java.newFloat(1.5), java.newFloat(-2), java.newFloat(-2), java.newFloat(1.5), java.newFloat(-2), java.newFloat(-2), java.newFloat(1.5), java.newFloat(0), java.newFloat(0), java.newFloat(1.5), java.newFloat(0)])))
        .addChild((new autoclass.TimeSensor()).setDEF("OrbitClock").setCycleInterval(8).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("OrbitClock").setToField("set_fraction").setToNode("BoxPathAnimator"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("BoxPathAnimator").setToField("set_translation").setToNode("LogoGeometryTransform"))
        .addChild((new autoclass.Transform()).setDEF("TextTransform").setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-1.5), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setUSE("GreenMaterial")))
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["X3D Java","SAI Library","X3DJSAIL"]))
              .addComments((new autoclass.CommentsBlock("Comment example A, plain quotation marks: He said, \"Immel did it!\"")))
              .addComments((new autoclass.CommentsBlock("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;")))
              .setMetadata((new autoclass.MetadataSet()).setName("EscapedQuotationMarksMetadataSet")
                .addValue((new autoclass.MetadataString()).setName("quotesTestC").setValue(java.newArray("java.lang.String", ["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""])))
                .addValue((new autoclass.MetadataString()).setName("extraChildTest").setValue(java.newArray("java.lang.String", ["checks MetadataSetObject addValue() method"]))))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])))))
          .addChild((new autoclass.Collision())
            .addComments((new autoclass.CommentsBlock("test containerField='proxy'")))
            .setProxy((new autoclass.Shape()).setDEF("ProxyShape")
              .addComments((new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'")))
              .addComments((new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'")))
              .addComments((new autoclass.CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})")))
              .addComments((new autoclass.CommentsBlock("reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html")))
              .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["One, Two, Text","","He said, \"Immel did it!\" \"\""])))))
          .addComments((new autoclass.CommentsBlock("It's a beautiful world")))
          .addComments((new autoclass.CommentsBlock("... for you!")))
          .addComments((new autoclass.CommentsBlock("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"))))
        .addComments((new autoclass.CommentsBlock("repeatedly spin 180 degrees as a readable special effect")))
        .addChild((new autoclass.OrientationInterpolator()).setDEF("SpinInterpolator").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(4.712389), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.5707964)])))
        .addChild((new autoclass.TimeSensor()).setDEF("SpinClock").setCycleInterval(5).setLoop(true))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("SpinClock").setToField("set_fraction").setToNode("SpinInterpolator"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("SpinInterpolator").setToField("rotation").setToNode("TextTransform"))
        .addChild((new autoclass.Group()).setDEF("BackgroundGroup")
          .addChild((new autoclass.Background()).setDEF("GradualBackground"))
          .addChild((new autoclass.Script()).setDEF("colorTypeConversionScript")
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("colorInput").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFCOLOR).setName("colorsOutput").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}"))
          .addChild((new autoclass.ColorInterpolator()).setDEF("ColorAnimator").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0.9411765), java.newFloat(1), java.newFloat(1), java.newFloat(0.29411766), java.newFloat(0), java.newFloat(0.50980395), java.newFloat(0.9411765), java.newFloat(1), java.newFloat(1)]))
            .addComments((new autoclass.CommentsBlock("AZURE to INDIGO and back again"))))
          .addChild((new autoclass.TimeSensor()).setDEF("ColorClock").setCycleInterval(60).setLoop(true))
          .addChild((new autoclass.ROUTE()).setFromField("colorsOutput").setFromNode("colorTypeConversionScript").setToField("skyColor").setToNode("GradualBackground"))
          .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("ColorAnimator").setToField("colorInput").setToNode("colorTypeConversionScript"))
          .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("ColorClock").setToField("set_fraction").setToNode("ColorAnimator")))
        .addChild((new autoclass.ProtoDeclare()).setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField").setValue("ArtDeco01Material prototype is a Material node"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true")))
          .setProtoBody((new autoclass.ProtoBody())
            .addComments((new autoclass.CommentsBlock("Initial node of ProtoBody determines prototype node type")))
            .addChild((new autoclass.Material()).setAmbientIntensity(java.newFloat(0.25)).setDiffuseColor(java.newArray("float", [java.newFloat(0.282435), java.newFloat(0.085159), java.newFloat(0.134462)])).setShininess(java.newFloat(0.127273)).setSpecularColor(java.newArray("float", [java.newFloat(0.276305), java.newFloat(0.11431), java.newFloat(0.139857)])))
            .addComments((new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"")))
            .addComments((new autoclass.CommentsBlock("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types")))
            .addChild((new autoclass.TouchSensor()).setDescription("within ProtoBody")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("description").setProtoField("description"))
                .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))))))
        .addChild((new autoclass.ExternProtoDeclare()).setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(java.newArray("java.lang.String", ["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]))
          .addComments((new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"")))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFSTRING).setName("description").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField")))
        .addComments((new autoclass.CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place")))
        .addChild((new autoclass.Shape()).setDEF("TestShape1")
          .setAppearance((new autoclass.Appearance()).setDEF("TestAppearance1")
            .addComments((new autoclass.CommentsBlock("ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java")))
            .setMaterial(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("ArtDeco01Material")
              .addComments((new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"")))))
          .setGeometry((new autoclass.Sphere()).setRadius(java.newFloat(0.001))))
        .addChild((new autoclass.Shape()).setDEF("TestShape2")
          .setAppearance((new autoclass.Appearance()).setDEF("TestAppearance2")
            .addComments((new autoclass.CommentsBlock("ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java")))
            .setMaterial(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("ArtDeco02Material").setDEF("ArtDeco02MaterialDEF")
              .addComments((new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"")))))
          .setGeometry((new autoclass.Cone()).setBottomRadius(java.newFloat(0.001)).setHeight(java.newFloat(0.001))))
        .addChild((new autoclass.Shape()).setDEF("TestShape3")
          .setAppearance((new autoclass.Appearance()).setDEF("TestAppearance3")
            .addComments((new autoclass.CommentsBlock("ArtDeco02Material ProtoInstance USE goes here...")))
            .setMaterial(ProtoInstance2 = (new autoclass.ProtoInstance()).setUSE("ArtDeco02MaterialDEF")))
          .setGeometry((new autoclass.Cylinder()).setHeight(java.newFloat(0.001)).setRadius(java.newFloat(0.001))))
        .addChild((new autoclass.Inline()).setDEF("inlineSceneDef").setUrl(java.newArray("java.lang.String", ["someOtherScene.x3d"])))
        .addChild((new autoclass.IMPORT()).setAS("WorldInfoDEF2").setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef"))
        .addChild((new autoclass.EXPORT()).setAS("WorldInfoDEF3").setLocalDEF("WorldInfoDEF"))
        .addChild((new autoclass.ProtoDeclare()).setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("emissiveColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.05 0.05 0.5"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("specularColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("transparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("shininess").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("ambientIntensity").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Material()).setDEF("MaterialNode")
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
                .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("emissiveColor"))
                .addConnect((new autoclass.connect()).setNodeField("specularColor").setProtoField("specularColor"))
                .addConnect((new autoclass.connect()).setNodeField("transparency").setProtoField("transparency"))
                .addConnect((new autoclass.connect()).setNodeField("shininess").setProtoField("shininess"))
                .addConnect((new autoclass.connect()).setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
            .addComments((new autoclass.CommentsBlock("Only first node (the node type) is renderable, others are along for the ride")))
            .addChild((new autoclass.Script()).setDEF("MaterialModulatorScript")
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("newColor").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFTIME).setName("clockTrigger").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("enabled").setProtoField("enabled"))
                .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor")))
              .setSourceCode("ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"    newColor = diffuseColor; // start with correct color\n"+
"}\n"+
"function set_enabled (newValue)\n"+
"{\n"+
"	enabled = newValue;\n"+
"}\n"+
"function clockTrigger (timeValue)\n"+
"{\n"+
"    if (!enabled) return;\n"+
"    red   = newColor.r;\n"+
"    green = newColor.g;\n"+
"    blue  = newColor.b;\n"+
"\n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}"))))
        .addComments((new autoclass.CommentsBlock("Test success: declarative statement createDeclarativeShapeTests()")))
        .addChild((new autoclass.Group()).setDEF("DeclarativeGroupExample")
          .addChild((new autoclass.Shape())
            .setMetadata((new autoclass.MetadataString()).setName("findThisNameValue").setDEF("FindableMetadataStringTest").setValue(java.newArray("java.lang.String", ["test case"])))
            .setAppearance((new autoclass.Appearance()).setDEF("DeclarativeAppearanceExample")
              .addComments((new autoclass.CommentsBlock("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance")))
              .setMaterial(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("MaterialModulator").setDEF("MyMaterialModulator")))
            .setGeometry((new autoclass.Cone()).setBottom(false).setBottomRadius(java.newFloat(0.05)).setHeight(java.newFloat(0.1))))
          .addComments((new autoclass.CommentsBlock("Test success: declarativeGroup.addChild() singleton pipeline method"))))
        .addComments((new autoclass.CommentsBlock("Test success: declarative statement addChild()")))
        .addComments((new autoclass.CommentsBlock("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>")))
        .addComments((new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>")))
        .addComments((new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found")))
        .addComments((new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found")))
        .addComments((new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found")))
        .addChild((new autoclass.Group()).setDEF("TestFieldObjectsGroup")
          .addComments((new autoclass.CommentsBlock("testFieldObjects() results")))
          .addComments((new autoclass.CommentsBlock("SFBool default=true, true=true, false=false, negate()=true")))
          .addComments((new autoclass.CommentsBlock("MFBool default=, initial=true false true, negate()=false true false")))
          .addComments((new autoclass.CommentsBlock("SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0")))
          .addComments((new autoclass.CommentsBlock("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7")))
          .addComments((new autoclass.CommentsBlock("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=")))
          .addComments((new autoclass.CommentsBlock("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344"))))
        .addChild((new autoclass.Sound()).setLocation(java.newArray("float", [java.newFloat(0), java.newFloat(1.6), java.newFloat(0)]))
          .addComments((new autoclass.CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height")))
          .setSource((new autoclass.AudioClip()).setDescription("chimes").setUrl(java.newArray("java.lang.String", ["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]))
            .addComments((new autoclass.CommentsBlock("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d")))))
        .addChild((new autoclass.Sound()).setLocation(java.newArray("float", [java.newFloat(0), java.newFloat(1.6), java.newFloat(0)]))
          .addComments((new autoclass.CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height")))
          .setSource((new autoclass.MovieTexture()).setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(java.newArray("java.lang.String", ["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]))
            .addComments((new autoclass.CommentsBlock("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d")))
            .addComments((new autoclass.CommentsBlock("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"")))))
        .addComments((new autoclass.CommentsBlock("Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true")))
        .addComments((new autoclass.CommentsBlock("Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false")))
        .addComments((new autoclass.CommentsBlock("Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false")))
        .addComments((new autoclass.CommentsBlock("Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true")))
        .addComments((new autoclass.CommentsBlock("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false")))
        .addComments((new autoclass.CommentsBlock("Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true")))
        .addChild((new autoclass.Shape()).setDEF("ExtrusionShape")
          .addComments((new autoclass.CommentsBlock("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'")))
          .addComments((new autoclass.CommentsBlock("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'")))
          .setAppearance((new autoclass.Appearance()).setDEF("TransparentAppearance")
            .setMaterial((new autoclass.Material()).setTransparency(java.newFloat(1))))
          .setGeometry((new autoclass.Extrusion()).setDEF("ExampleExtrusion"))))      ;
ProtoInstance0
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("ArtDeco01Material can substitute for a Material node"));
ProtoInstance1
              .addFieldValue((new autoclass.fieldValue()).setName("description").setValue("ArtDeco02Material can substitute for another Material node"));
    X3D0.toFileX3D("../data/Quotes.new.x3d");
    process.exit(0);

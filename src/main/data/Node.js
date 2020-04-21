var java = require('java');
var autoclass = require('./X3Dautoclass');
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  new autoclass.X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new autoclass.headObject()
        .addComments(new autoclass.CommentsBlock("comment #1"))
        .addComments(new autoclass.CommentsBlock("comment #2"))
        .addComments(new autoclass.CommentsBlock("comment #3"))
        .addComments(new autoclass.CommentsBlock("comment #4"))
        .addComponent(new autoclass.componentObject().setName("Navigation").setLevel(3))
        .addComponent(new autoclass.componentObject().setName("Layering").setLevel(1))
        .addUnit(new autoclass.unitObject().setName("AngleUnitConversion").setCategory("angle").setConversionFactor(1))
        .addUnit(new autoclass.unitObject().setName("LengthUnitConversion").setCategory("length").setConversionFactor(1))
        .addMeta(new autoclass.metaObject().setName("title").setContent("HelloWorldProgramOutput.x3d"))
        .addMeta(new autoclass.metaObject().setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("http://www.web3d.org/specifications/java/X3DJSAIL.html"))
        .addMeta(new autoclass.metaObject().setName("generator").setContent("HelloWorldProgramOutput.java"))
        .addMeta(new autoclass.metaObject().setName("created").setContent("6 September 2016"))
        .addMeta(new autoclass.metaObject().setName("modified").setContent("28 June 2018"))
        .addMeta(new autoclass.metaObject().setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
        .addMeta(new autoclass.metaObject().setName("generator").setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
        .addMeta(new autoclass.metaObject().setName("generator").setContent("Netbeans http://www.netbeans.org"))
        .addMeta(new autoclass.metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("HelloWorldProgramOutput.txt"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("HelloWorldProgramOutput.x3dv"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("HelloWorldProgramOutput.wrl"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("HelloWorldProgramOutput.html"))
        .addMeta(new autoclass.metaObject().setName("reference").setContent("X3dValidator https://savage.nps.edu/X3dValidator?url=http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new autoclass.metaObject().setName("identifier").setContent("http://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new autoclass.metaObject().setName("license").setContent("../license.html"))
        .addMeta(new autoclass.metaObject().setName("info").setContent("tested sat: name value cannot contain embedded space character")))
      .setScene(new autoclass.SceneObject()
        .addChild(new autoclass.ViewpointGroupObject().setDescription("Available viewpoints")
          .addChild(new autoclass.ViewpointObject().setDEF("DefaultView").setDescription("Hello X3DJSAIL"))
          .addChild(new autoclass.ViewpointObject().setDEF("TopDownView").setDescription("top-down view from above").setOrientation(java.to([1,0,0,-1.570796], java.type("float[]"))).setPosition(java.to([0,100,0], java.type("float[]")))))
        .addChild(new autoclass.WorldInfoObject().setDEF("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
        .addChild(new autoclass.WorldInfoObject().setUSE("WorldInfoDEF"))
        .addChild(new autoclass.WorldInfoObject().setUSE("WorldInfoDEF"))
        .addMetadata(new autoclass.MetadataStringObject().setName("test").setDEF("scene.addChildMetadata").setValue(java.to(["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"], java.type("java.lang.String[]"))))
        .addLayerSet(new autoclass.LayerSetObject().setDEF("scene.addChildLayerSetTest"))
        .addChild(new autoclass.TransformObject().setDEF("LogoGeometryTransform").setTranslation(java.to([0,1.5,0], java.type("float[]")))
          .addChild(new autoclass.AnchorObject().setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(java.to(["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"], java.type("java.lang.String[]")))
            .addChild(new autoclass.ShapeObject().setDEF("BoxShape")
              .setAppearance(new autoclass.AppearanceObject()
                .setMaterial(new autoclass.MaterialObject().setDEF("GreenMaterial").setDiffuseColor(java.to([0,1,1], java.type("float[]"))).setEmissiveColor(java.to([0.8,0,0], java.type("float[]"))).setTransparency(0.1))
                .setTexture(new autoclass.ImageTextureObject().setUrl(java.to(["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"], java.type("java.lang.String[]")))))
              .setGeometry(new autoclass.BoxObject().setDEF("test-NMTOKEN_regex.0123456789").setCssClass("untextured")))))
        .addChild(new autoclass.ShapeObject().setDEF("LineShape")
          .setAppearance(new autoclass.AppearanceObject()
            .setMaterial(new autoclass.MaterialObject().setEmissiveColor(java.to([0.6,0.19607843,0.8], java.type("float[]")))))
          .setGeometry(new autoclass.IndexedLineSetObject().setCoordIndex(java.to([0,1,2,3,4,0], java.type("int[]")))
            .addComments(new autoclass.CommentsBlock("Coordinate 3-tuple point count: 6"))
            .setCoord(new autoclass.CoordinateObject().setPoint(java.to([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0], java.type("float[]"))))))
        .addChild(new autoclass.PositionInterpolatorObject().setDEF("BoxPathAnimator").setKey(java.to([0,0.125,0.375,0.625,0.875,1], java.type("float[]"))).setKeyValue(java.to([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0], java.type("float[]"))))
        .addChild(new autoclass.TimeSensorObject().setDEF("OrbitClock").setCycleInterval(8).setLoop(true))
        .addChild(new autoclass.ROUTEObject().setFromField("fraction_changed").setFromNode("OrbitClock").setToField("set_fraction").setToNode("BoxPathAnimator"))
        .addChild(new autoclass.ROUTEObject().setFromField("value_changed").setFromNode("BoxPathAnimator").setToField("set_translation").setToNode("LogoGeometryTransform"))
        .addChild(new autoclass.TransformObject().setDEF("TextTransform").setTranslation(java.to([0,-1.5,0], java.type("float[]")))
          .addChild(new autoclass.ShapeObject()
            .setAppearance(new autoclass.AppearanceObject()
              .setMaterial(new autoclass.MaterialObject().setUSE("GreenMaterial")))
            .setGeometry(new autoclass.TextObject().setString(java.to(["X3D Java","SAI Library","X3DJSAIL"], java.type("java.lang.String[]")))
              .addComments(new autoclass.CommentsBlock("Comment example A, plain quotation marks: He said, \"Immel did it!\""))
              .addComments(new autoclass.CommentsBlock("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;"))
              .setMetadata(new autoclass.MetadataSetObject().setName("EscapedQuotationMarksMetadataSet")
                .addValue(new autoclass.MetadataStringObject().setName("quotesTestC").setValue(java.to(["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""], java.type("java.lang.String[]"))))
                .addValue(new autoclass.MetadataStringObject().setName("extraChildTest").setValue(java.to(["checks MetadataSetObject addValue() method"], java.type("java.lang.String[]")))))
              .setFontStyle(new autoclass.FontStyleObject().setJustify(java.to(["MIDDLE","MIDDLE"], java.type("java.lang.String[]"))))))
          .addChild(new autoclass.CollisionObject()
            .addComments(new autoclass.CommentsBlock("test containerField='proxy'"))
            .setProxy(new autoclass.ShapeObject().setDEF("ProxyShape")
              .addComments(new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
              .addComments(new autoclass.CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'"))
              .addComments(new autoclass.CommentsBlock("alternative Java source: .setString(new autoclass.String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"))
              .addComments(new autoclass.CommentsBlock("reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"))
              .setGeometry(new autoclass.TextObject().setString(java.to(["One, Two, Text","","He said, \"Immel did it!\" \"\""], java.type("java.lang.String[]"))))))
          .addComments(new autoclass.CommentsBlock("It's a beautiful world"))
          .addComments(new autoclass.CommentsBlock("... for you!"))
          .addComments(new autoclass.CommentsBlock("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)")))
        .addComments(new autoclass.CommentsBlock("repeatedly spin 180 degrees as a readable special effect"))
        .addChild(new autoclass.OrientationInterpolatorObject().setDEF("SpinInterpolator").setKey(java.to([0,0.5,1], java.type("float[]"))).setKeyValue(java.to([0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964], java.type("float[]"))))
        .addChild(new autoclass.TimeSensorObject().setDEF("SpinClock").setCycleInterval(5).setLoop(true))
        .addChild(new autoclass.ROUTEObject().setFromField("fraction_changed").setFromNode("SpinClock").setToField("set_fraction").setToNode("SpinInterpolator"))
        .addChild(new autoclass.ROUTEObject().setFromField("value_changed").setFromNode("SpinInterpolator").setToField("rotation").setToNode("TextTransform"))
        .addChild(new autoclass.GroupObject().setDEF("BackgroundGroup")
          .addChild(new autoclass.BackgroundObject().setDEF("GradualBackground"))
          .addChild(new autoclass.ScriptObject().setDEF("colorTypeConversionScript")
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("colorInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_MFCOLOR).setName("colorsOutput").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new autoclass.MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}\n"+
"\n"+
"\n"+
""))
          .addChild(new autoclass.ColorInterpolatorObject().setDEF("ColorAnimator").setKey(java.to([0,0.5,1], java.type("float[]"))).setKeyValue(java.to([0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1], java.type("float[]")))
            .addComments(new autoclass.CommentsBlock("AZURE to INDIGO and back again")))
          .addChild(new autoclass.TimeSensorObject().setDEF("ColorClock").setCycleInterval(60).setLoop(true))
          .addChild(new autoclass.ROUTEObject().setFromField("colorsOutput").setFromNode("colorTypeConversionScript").setToField("skyColor").setToNode("GradualBackground"))
          .addChild(new autoclass.ROUTEObject().setFromField("value_changed").setFromNode("ColorAnimator").setToField("colorInput").setToNode("colorTypeConversionScript"))
          .addChild(new autoclass.ROUTEObject().setFromField("fraction_changed").setFromNode("ColorClock").setToField("set_fraction").setToNode("ColorAnimator")))
        .addChild(new autoclass.ProtoDeclareObject().setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
          .setProtoInterface(new autoclass.ProtoInterfaceObject()
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField").setValue("ArtDeco01Material prototype is a Material node"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("true")))
          .setProtoBody(new autoclass.ProtoBodyObject()
            .addComments(new autoclass.CommentsBlock("Initial node of ProtoBody determines prototype node type"))
            .addChild(new autoclass.MaterialObject().setAmbientIntensity(0.25).setDiffuseColor(java.to([0.282435,0.085159,0.134462], java.type("float[]"))).setShininess(0.127273).setSpecularColor(java.to([0.276305,0.11431,0.139857], java.type("float[]"))))
            .addComments(new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\""))
            .addComments(new autoclass.CommentsBlock("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"))
            .addChild(new autoclass.TouchSensorObject().setDescription("within ProtoBody")
              .setIS(new autoclass.ISObject()
                .addConnect(new autoclass.connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new autoclass.connectObject().setNodeField("enabled").setProtoField("enabled"))))))
        .addChild(new autoclass.ExternProtoDeclareObject().setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(java.to(["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"], java.type("java.lang.String[]")))
          .addComments(new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""))
          .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFSTRING).setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField")))
        .addComments(new autoclass.CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"))
        .addChild(new autoclass.ShapeObject().setDEF("TestShape1")
          .setAppearance(new autoclass.AppearanceObject().setDEF("TestAppearance1")
            .addComments(new autoclass.CommentsBlock("ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java"))
            .setMaterial(ProtoInstance0 = new autoclass.ProtoInstanceObject().setName("ArtDeco01Material")
              .addComments(new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""))))
          .setGeometry(new autoclass.SphereObject().setRadius(0.001)))
        .addChild(new autoclass.ShapeObject().setDEF("TestShape2")
          .setAppearance(new autoclass.AppearanceObject().setDEF("TestAppearance2")
            .addComments(new autoclass.CommentsBlock("ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java"))
            .setMaterial(ProtoInstance1 = new autoclass.ProtoInstanceObject().setName("ArtDeco02Material").setDEF("ArtDeco02MaterialDEF")
              .addComments(new autoclass.CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\""))))
          .setGeometry(new autoclass.ConeObject().setBottomRadius(0.001).setHeight(0.001)))
        .addChild(new autoclass.ShapeObject().setDEF("TestShape3")
          .setAppearance(new autoclass.AppearanceObject().setDEF("TestAppearance3")
            .addComments(new autoclass.CommentsBlock("ArtDeco02Material ProtoInstance USE goes here..."))
            .setMaterial(ProtoInstance2 = new autoclass.ProtoInstanceObject().setUSE("ArtDeco02MaterialDEF")))
          .setGeometry(new autoclass.CylinderObject().setHeight(0.001).setRadius(0.001)))
        .addChild(new autoclass.InlineObject().setDEF("inlineSceneDef").setUrl(java.to(["someOtherScene.x3d"], java.type("java.lang.String[]"))))
        .addChild(new autoclass.IMPORTObject().setAS("WorldInfoDEF2").setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef"))
        .addChild(new autoclass.EXPORTObject().setAS("WorldInfoDEF3").setLocalDEF("WorldInfoDEF"))
        .addChild(new autoclass.ProtoDeclareObject().setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
          .setProtoInterface(new autoclass.ProtoInterfaceObject()
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("emissiveColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.05 0.05 0.5"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("specularColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("transparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("shininess").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFFLOAT).setName("ambientIntensity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new autoclass.ProtoBodyObject()
            .addChild(new autoclass.MaterialObject().setDEF("MaterialNode")
              .setIS(new autoclass.ISObject()
                .addConnect(new autoclass.connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                .addConnect(new autoclass.connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                .addConnect(new autoclass.connectObject().setNodeField("specularColor").setProtoField("specularColor"))
                .addConnect(new autoclass.connectObject().setNodeField("transparency").setProtoField("transparency"))
                .addConnect(new autoclass.connectObject().setNodeField("shininess").setProtoField("shininess"))
                .addConnect(new autoclass.connectObject().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
            .addComments(new autoclass.CommentsBlock("Only first node (the node type) is renderable, others are along for the ride"))
            .addChild(new autoclass.ScriptObject().setDEF("MaterialModulatorScript")
              .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFBOOL).setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFCOLOR).setName("newColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new autoclass.fieldObject().setType(fieldObject.TYPE_SFTIME).setName("clockTrigger").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setIS(new autoclass.ISObject()
                .addConnect(new autoclass.connectObject().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new autoclass.connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))
              .setSourceCode("\n"+
"\n"+
"ecmascript:\n"+
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
"    newColor = new autoclass.SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}\n"+
"\n"+
"\n"+
""))))
        .addComments(new autoclass.CommentsBlock("Test success: declarative statement createDeclarativeShapeTests()"))
        .addChild(new autoclass.GroupObject().setDEF("DeclarativeGroupExample")
          .addChild(new autoclass.ShapeObject()
            .setMetadata(new autoclass.MetadataStringObject().setName("findThisNameValue").setDEF("FindableMetadataStringTest").setValue(java.to(["test case"], java.type("java.lang.String[]"))))
            .setAppearance(new autoclass.AppearanceObject().setDEF("DeclarativeAppearanceExample")
              .addComments(new autoclass.CommentsBlock("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"))
              .setMaterial(ProtoInstance3 = new autoclass.ProtoInstanceObject().setName("MaterialModulator").setDEF("MyMaterialModulator")))
            .setGeometry(new autoclass.ConeObject().setBottom(false).setBottomRadius(0.05).setHeight(0.1)))
          .addComments(new autoclass.CommentsBlock("Test success: declarativeGroup.addChild() singleton pipeline method")))
        .addComments(new autoclass.CommentsBlock("Test success: declarative statement addChild()"))
        .addComments(new autoclass.CommentsBlock("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>"))
        .addComments(new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"))
        .addComments(new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found"))
        .addComments(new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"))
        .addComments(new autoclass.CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"))
        .addChild(new autoclass.GroupObject().setDEF("TestFieldObjectsGroup")
          .addComments(new autoclass.CommentsBlock("testFieldObjects() results"))
          .addComments(new autoclass.CommentsBlock("SFBool default=true, true=true, false=false, negate()=true"))
          .addComments(new autoclass.CommentsBlock("MFBool default=, initial=true false true, negate()=false true false"))
          .addComments(new autoclass.CommentsBlock("SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0"))
          .addComments(new autoclass.CommentsBlock("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"))
          .addComments(new autoclass.CommentsBlock("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="))
          .addComments(new autoclass.CommentsBlock("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true"))
          .addComments(new autoclass.CommentsBlock("regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value")))
        .addChild(new autoclass.SoundObject().setLocation(java.to([0,1.6,0], java.type("float[]")))
          .addComments(new autoclass.CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height"))
          .setSource(new autoclass.AudioClipObject().setDescription("chimes").setUrl(java.to(["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"], java.type("java.lang.String[]")))
            .addComments(new autoclass.CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"))))
        .addChild(new autoclass.SoundObject().setLocation(java.to([0,1.6,0], java.type("float[]")))
          .addComments(new autoclass.CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height"))
          .setSource(new autoclass.MovieTextureObject().setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(java.to(["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"], java.type("java.lang.String[]")))
            .addComments(new autoclass.CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"))
            .addComments(new autoclass.CommentsBlock("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\""))))
        .addComments(new autoclass.CommentsBlock("Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true"))
        .addComments(new autoclass.CommentsBlock("Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false"))
        .addComments(new autoclass.CommentsBlock("Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false"))
        .addComments(new autoclass.CommentsBlock("Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true"))
        .addComments(new autoclass.CommentsBlock("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"))
        .addComments(new autoclass.CommentsBlock("Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true"))
        .addChild(new autoclass.ShapeObject().setDEF("ExtrusionShape")
          .addComments(new autoclass.CommentsBlock("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"))
          .addComments(new autoclass.CommentsBlock("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"))
          .setAppearance(new autoclass.AppearanceObject().setDEF("TransparentAppearance")
            .setMaterial(new autoclass.MaterialObject().setTransparency(1)))
          .setGeometry(new autoclass.ExtrusionObject().setDEF("ExampleExtrusion"))))      ;
ProtoInstance0
              .addFieldValue(new autoclass.fieldValueObject().setName("description").setValue("ArtDeco01Material can substitute for a Material node"));
ProtoInstance1
              .addFieldValue(new autoclass.fieldValueObject().setName("description").setValue("ArtDeco02Material can substitute for another Material node"));
    X3D0.toFileJSON("./examples/Nashorn.json");
    var X3DJSONLD = java.import("net.coderextreme.X3DJSONLD")
    var loader = new X3DJSONLD();
    var File = java.import("java.io.File")
    var jsobj = loader.readJsonFile(new File("./examples/Nashorn.json"));
    var document = loader.loadJsonIntoDocument(jsobj);
    print(loader.serializeDOM(loader.getX3DVersion(jsobj), document));
    var X3DLoaderDOM = java.import("org.web3d.x3d.jsail.X3DLoaderDOM")
    var xmlLoader = new X3DLoaderDOM();
    X3D0 = xmlLoader.toX3dObjectTree(document);
    X3D0.toFileX3D("./examples/Nashorn.x3d");

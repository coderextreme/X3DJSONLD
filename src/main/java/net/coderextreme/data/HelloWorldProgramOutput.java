package net.coderextreme.data;
import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CubeMapTexturing.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.Followers.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.HAnim.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Layering.*;
import org.web3d.x3d.jsail.Layout.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.NURBS.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.ParticleSystems.*;
import org.web3d.x3d.jsail.Picking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.RigidBodyPhysics.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shaders.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing3D.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;
import org.web3d.x3d.jsail.VolumeRendering.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class HelloWorldProgramOutput {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HelloWorldProgramOutput().initialize().toFileJSON("../data/HelloWorldProgramOutput.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Navigation").setLevel(3))
        .addComponent(new componentObject().setName("Layering").setLevel(1))
        .addUnit(new unitObject().setName("AngleUnitConversion").setCategory("angle").setConversionFactor(1d))
        .addUnit(new unitObject().setName("LengthUnitConversion").setCategory("length").setConversionFactor(1d))
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
        .addComments(new CommentsBlock("comment #1"))
        .addComments(new CommentsBlock("comment #2"))
        .addComments(new CommentsBlock("comment #3"))
        .addComments(new CommentsBlock("comment #4")))
      .setScene(new SceneObject()
        .addChild(new ViewpointGroupObject().setDescription("Available viewpoints")
          .addChild(new ViewpointObject().setDEF("DefaultView").setDescription("Hello X3DJSAIL"))
          .addChild(new ViewpointObject().setDEF("TopDownView").setDescription("top-down view from above").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new float[] {0f,100f,0f})))
        .addChild(new WorldInfoObject().setDEF("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
        .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
        .addChild(new WorldInfoObject().setUSE("WorldInfoDEF"))
        .addChild(new LayerSetObject().setDEF("scene.addChildLayerSetObjectTest"))
        .addChild(new TransformObject().setDEF("LogoGeometryTransform").setTranslation(new float[] {0f,1.5f,0f})
          .addChild(new AnchorObject().setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new MFStringObject(new MFString0().getArray()))
            .addChild(new ShapeObject().setDEF("BoxShape")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDEF("GreenMaterial").setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0.8f,0f,0f}).setTransparency(0.1f))
                .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString1().getArray()))))
              .setGeometry(new BoxObject().setDEF("test-NMTOKEN_regex.0123456789").setCssClass("textured")))))
        .addChild(new ShapeObject().setDEF("LineShape")
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0.6f,0.19607843f,0.8f})))
          .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray()))
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray())))))
        .addChild(new PositionInterpolatorObject().setDEF("BoxPathAnimator").setKey(new MFFloatObject(new MFFloat4().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f5().getArray())))
        .addChild(new TimeSensorObject().setDEF("OrbitClock").setCycleInterval(8d).setLoop(true))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("OrbitClock").setToField("set_fraction").setToNode("BoxPathAnimator"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BoxPathAnimator").setToField("set_translation").setToNode("LogoGeometryTransform"))
        .addChild(new TransformObject().setDEF("TextTransform").setTranslation(new float[] {0f,-1.5f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setUSE("GreenMaterial")))
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
              .setMetadata(new MetadataSetObject().setName("EscapedQuotationMarksMetadataSet")
                .setMetadata(new MetadataStringObject().setName("escapedQuotesTest2").setValue(new MFStringObject(new MFString7().getArray()))))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString8().getArray())))
              .addComments(new CommentsBlock("escaped quotation marks example 3: He said, \"Immel did it!\""))
              .addComments(new CommentsBlock("escaped quotation marks example 4: He said, &quot;Immel did it!&quot;"))))
          .addChild(new CollisionObject()
            .addComments(new CommentsBlock("test containerField='proxy'"))
            .addChild(new ShapeObject().setDEF("ProxyShape")
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray())))
              .addComments(new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Three\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
              .addComments(new CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Three\", \"\", \"He said, \\\"Immel did it!\\\"\"})"))
              .addComments(new CommentsBlock("reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"))))
          .addComments(new CommentsBlock("It's a beautiful world"))
          .addComments(new CommentsBlock("... for you!"))
          .addComments(new CommentsBlock("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)")))
        .addComments(new CommentsBlock("repeatedly spin 180 degrees as a readable special effect"))
        .addChild(new OrientationInterpolatorObject().setDEF("SpinInterpolator").setKey(new MFFloatObject(new MFFloat10().getArray())).setKeyValue(new MFRotationObject(new MFRotation11().getArray())))
        .addChild(new TimeSensorObject().setDEF("SpinClock").setCycleInterval(5d).setLoop(true))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("SpinClock").setToField("set_fraction").setToNode("SpinInterpolator"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("SpinInterpolator").setToField("rotation").setToNode("TextTransform"))
        .addChild(new GroupObject().setDEF("BackgroundGroup")
          .addChild(new BackgroundObject().setDEF("GradualBackground"))
          .addChild(new ScriptObject().setDEF("colorTypeConversionScript")
            .addField(new fieldObject().setType("SFColor").setName("colorInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFColor").setName("colorsOutput").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}\n"+
""))
          .addChild(new ColorInterpolatorObject().setDEF("ColorAnimator").setKey(new MFFloatObject(new MFFloat12().getArray())).setKeyValue(new MFColorObject(new MFColor13().getArray()))
            .addComments(new CommentsBlock("AZURE to INDIGO and back again")))
          .addChild(new TimeSensorObject().setDEF("ColorClock").setCycleInterval(60d).setLoop(true))
          .addChild(new ROUTEObject().setFromField("colorsOutput").setFromNode("colorTypeConversionScript").setToField("skyColor").setToNode("GradualBackground"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("ColorAnimator").setToField("colorInput").setToNode("colorTypeConversionScript"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("ColorClock").setToField("set_fraction").setToNode("ColorAnimator")))
        .addChild(new ProtoDeclareObject().setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01 prototype is a Material node")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField").setValue("ArtDeco01 prototype is a Material node"))
            .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("true")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("Initial node of ProtoBody determines prototype node type"))
            .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.282435f,0.085159f,0.134462f}).setShininess(0.127273f).setSpecularColor(new float[] {0.276305f,0.11431f,0.139857f}))
            .addComments(new CommentsBlock("[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\""))
            .addComments(new CommentsBlock("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"))
            .addChild(new TouchSensorObject().setDescription("within ProtoBody")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("description").setProtoField("description"))
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))))))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new MFStringObject(new MFString14().getArray()))
          .addField(new fieldObject().setType("SFString").setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField"))
          .addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"")))
        .addComments(new CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"))
        .addChild(new ShapeObject().setDEF("TestShape1")
          .setAppearance(new AppearanceObject().setDEF("TestAppearance1")
            .setProtoInstance(ProtoInstance0 = new ProtoInstanceObject().setName("ArtDeco01")
              .addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE: ProtoInstance name='ArtDeco01' has no corresponding ProtoDeclareObject or ExternProtoDeclareObject to provide type.\"")))
            .addComments(new CommentsBlock("ArtDeco01 Material prototype goes here...")))
          .setGeometry(new SphereObject().setRadius(0.001f)))
        .addChild(new ShapeObject().setDEF("TestShape2")
          .setAppearance(new AppearanceObject().setDEF("TestAppearance2")
            .setProtoInstance(ProtoInstance1 = new ProtoInstanceObject().setName("ArtDeco02")
              .addComments(new CommentsBlock("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_PROTOINSTANCE_NODE_TYPE: ProtoInstance name='ArtDeco02' has no corresponding ProtoDeclareObject or ExternProtoDeclareObject to provide type.\"")))
            .addComments(new CommentsBlock("ArtDeco02 Material prototype goes here...")))
          .setGeometry(new ConeObject().setBottomRadius(0.001f).setHeight(0.001f)))
        .addChild(new InlineObject().setDEF("inlineSceneDef").setUrl(new MFStringObject(new MFString15().getArray())))
        .addChild(new IMPORTObject().setAS("WorldInfoDEF2").setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef"))
        .addChild(new EXPORTObject().setAS("WorldInfoDEF3").setLocalDEF("WorldInfoDEF"))
        .addChild(new ProtoDeclareObject().setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new fieldObject().setType("SFColor").setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFColor").setName("emissiveColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.05 0.05 0.5"))
            .addField(new fieldObject().setType("SFColor").setName("specularColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("transparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("shininess").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new fieldObject().setType("SFFloat").setName("ambientIntensity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new MaterialObject().setDEF("MaterialNode")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                .addConnect(new connectObject().setNodeField("specularColor").setProtoField("specularColor"))
                .addConnect(new connectObject().setNodeField("transparency").setProtoField("transparency"))
                .addConnect(new connectObject().setNodeField("shininess").setProtoField("shininess"))
                .addConnect(new connectObject().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
            .addComments(new CommentsBlock("Only first node (the node type) is renderable, others are along for the ride"))
            .addChild(new ScriptObject().setDEF("MaterialModulatorScript")
              .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFColor").setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFColor").setName("newColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFTime").setName("clockTrigger").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))
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
"    \n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}\n"+
""))))
        .addComments(new CommentsBlock("Test success: declarative statement createDeclarativeShapeTests()"))
        .addChild(new GroupObject().setDEF("DeclarativeGroupExample")
          .addChild(new ShapeObject()
            .setMetadata(new MetadataStringObject().setName("findThisNameValue").setDEF("FindableMetadataStringTest").setValue(new MFStringObject(new MFString16().getArray())))
            .setAppearance(new AppearanceObject().setDEF("DeclarativeAppearanceExample")
              .setProtoInstance(ProtoInstance2 = new ProtoInstanceObject().setName("MaterialModulator").setDEF("MyMaterialModulator"))
              .addComments(new CommentsBlock("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance")))
            .setGeometry(new ConeObject().setBottom(false).setBottomRadius(0.05f).setHeight(0.1f)))
          .addComments(new CommentsBlock("Test success: declarativeGroup.addChild() singleton pipeline method")))
        .addComments(new CommentsBlock("Test success: declarative statement addChild()"))
        .addComments(new CommentsBlock("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> </Appearance>"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"))
        .addChild(new GroupObject().setDEF("TestFieldObjectsGroup")
          .addComments(new CommentsBlock("testFieldObjects() results"))
          .addComments(new CommentsBlock("SFBool default=true, true=true, false=false, negate()=true"))
          .addComments(new CommentsBlock("MFBool default=, initial=true false true, negate()=false true false"))
          .addComments(new CommentsBlock("SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0"))
          .addComments(new CommentsBlock("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"))
          .addComments(new CommentsBlock("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="))
          .addComments(new CommentsBlock("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344")))
        .addChild(new SoundObject()
          .setSource(new AudioClipObject().setUrl(new MFStringObject(new MFString17().getArray())))
          .addComments(new CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d")))
        .addChild(new SoundObject()
          .setSource(new MovieTextureObject().setUrl(new MFStringObject(new MFString18().getArray())))
          .addComments(new CommentsBlock("Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"))
          .addComments(new CommentsBlock("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"")))
        .addComments(new CommentsBlock("Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true"))
        .addComments(new CommentsBlock("Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false"))
        .addComments(new CommentsBlock("Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false"))
        .addComments(new CommentsBlock("Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true"))
        .addComments(new CommentsBlock("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"))
        .addComments(new CommentsBlock("Test success: CommentsBlock.isStatement()=false, testComments.isStatement()=false"))
        .addChild(new ShapeObject().setDEF("ExtrusionShape")
          .setAppearance(new AppearanceObject().setDEF("TransparentAppearance")
            .setMaterial(new MaterialObject().setTransparency(1f)))
          .setGeometry(new ExtrusionObject().setDEF("ExampleExtrusion"))
          .addComments(new CommentsBlock("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"))
          .addComments(new CommentsBlock("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("description").setValue("ArtDeco01 can substitute for a Material node"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("description").setValue("ArtDeco02 can substitute for another Material node"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,0});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1.5f,0f,2f,1.5f,0f,2f,1.5f,-2f,-2f,1.5f,-2f,-2f,1.5f,0f,0f,1.5f,0f});
  }
}
protected class MFFloat4 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.125f,0.375f,0.625f,0.875f,1f});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1.5f,0f,2f,1.5f,0f,2f,1.5f,-2f,-2f,1.5f,-2f,-2f,1.5f,0f,0f,1.5f,0f});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"X3D Java","SAI Library","X3DJSAIL"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"escaped quotation marks example 2: He said, &quot;Immel did it!&quot;"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"One, Two, Three","","He said, \"Immel did it!\""});
  }
}
protected class MFFloat10 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation11 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,4.712389f,0f,1f,0f,0f,0f,1f,0f,1.5707964f});
  }
}
protected class MFFloat12 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFColor13 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.9411765f,1f,1f,0.29411766f,0f,0.50980395f,0.9411765f,1f,1f});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"someOtherScene.x3d"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"test case"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"});
  }
}
}

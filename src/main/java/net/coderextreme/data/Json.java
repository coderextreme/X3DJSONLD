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
public class Json {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Json().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Json.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .addComments("x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true")
      .setHead(new head()
        .addComments("comment #1")
        .addComments("comment #2")
        .addComments("comment #3")
        .addComments("comment #4")
        .addComponent(new component().setName("Navigation").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CADGeometry").setLevel(2))
        .addComponent(new component().setName("DIS").setLevel(2))
        .addComponent(new component().setName("H-Anim").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(1))
        .addComponent(new component().setName("Layering").setLevel(1))
        .addUnit(new unit().setName("AngleUnitConversion").setCategory("angle").setConversionFactor(1d))
        .addUnit(new unit().setName("LengthUnitConversion").setCategory("length").setConversionFactor(1d))
        .addUnit(new unit().setName("ForceFromPoundsToNewtons").setCategory("force").setConversionFactor(4.4482d))
        .addMeta(new meta().setName("title").setContent("Json.x3d"))
        .addMeta(new meta().setName("info").setContent("continued development and testing in progress"))
        .addMeta(new meta().setName("description").setContent("Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/specifications/java/X3DJSAIL.html"))
        .addMeta(new meta().setName("generator").setContent("HelloWorldProgramOutput.java"))
        .addMeta(new meta().setName("created").setContent("6 September 2016"))
        .addMeta(new meta().setName("modified").setContent("25 May 2020"))
        .addMeta(new meta().setName("generator").setContent("X3D Java Scene Access Interface Library (X3DJSAIL)"))
        .addMeta(new meta().setName("generator").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java"))
        .addMeta(new meta().setName("generator").setContent("Netbeans http://www.netbeans.org"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new meta().setName("reference").setContent("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldProgramOutput.txt"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldProgramOutput.x3dv"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldProgramOutput.wrl"))
        .addMeta(new meta().setName("reference").setContent("HelloWorldProgramOutput.html"))
        .addMeta(new meta().setName("reference").setContent("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html"))
        .addMeta(new meta().setName("translated").setContent("25 May 2020"))
        .addMeta(new meta().setName("generator").setContent("X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new meta().setName("reference").setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
      .setScene(new Scene()
        .addChild(new ViewpointGroup().setDescription("Available viewpoints")
          .addChild(new Viewpoint().setDEF("DefaultView").setDescription("Hello X3DJSAIL"))
          .addChild(new Viewpoint().setDEF("TopDownView").setDescription("top-down view from above").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new float[] {0f,100f,0f})))
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}))
        .addChild(new WorldInfo().setDEF("WorldInfoDEF").setTitle("HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)"))
        .addChild(new WorldInfo().setUSE("WorldInfoDEF"))
        .addChild(new WorldInfo().setUSE("WorldInfoDEF"))
        .addMetadata(new MetadataString().setName("test").setDEF("scene.addChildMetadata").setValue(new MFString0().getArray()))
        .addLayerSet(new LayerSet().setDEF("scene.addChildLayerSetTest"))
        .addChild(new Transform().setDEF("LogoGeometryTransform").setTranslation(new float[] {0f,1.5f,0f})
          .addChild(new Anchor().setDescription("select for X3D Java SAI Library (X3DJSAIL) description").setUrl(new MFString1().getArray())
            .addChild(new Shape().setDEF("BoxShape")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF("GreenMaterial").setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0.8f,0f,0f}).setTransparency(0.1f))
                .setTexture(new ImageTexture().setUrl(new MFString2().getArray())))
              .setGeometry(new Box().setDEF("test-NMTOKEN_regex.0123456789").setCssClass("untextured")))))
        .addChild(new Shape().setDEF("LineShape")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(new float[] {0.6f,0.19607843f,0.8f})))
          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt323().getArray())
            .addComments("Coordinate 3-tuple point count: 6")
            .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray()))))
        .addChild(new PositionInterpolator().setDEF("BoxPathAnimator").setKey(new MFFloat5().getArray()).setKeyValue(new MFVec3f6().getArray()))
        .addChild(new TimeSensor().setDEF("OrbitClock").setCycleInterval(8d).setLoop(true))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("OrbitClock").setToField("set_fraction").setToNode("BoxPathAnimator"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("BoxPathAnimator").setToField("set_translation").setToNode("LogoGeometryTransform"))
        .addChild(new Transform().setDEF("TextTransform").setTranslation(new float[] {0f,-1.5f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("GreenMaterial")))
            .setGeometry(new Text().setString(new MFString7().getArray())
              .addComments("Comment example A, plain quotation marks: He said, \"Immel did it!\"")
              .addComments("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;")
              .setMetadata(new MetadataSet().setName("EscapedQuotationMarksMetadataSet")
                .addValue(new MetadataString().setName("quotesTestC").setValue(new MFString8().getArray()))
                .addValue(new MetadataString().setName("extraChildTest").setValue(new MFString9().getArray())))
              .setFontStyle(new FontStyle().setJustify(new MFString10().getArray()))))
          .addChild(new Collision()
            .addComments("test containerField='proxy'")
            .setProxy(new Shape().setDEF("ProxyShape")
              .addComments("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'")
              .addComments("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'")
              .addComments("alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})")
              .addComments("reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html")
              .setGeometry(new Text().setString(new MFString11().getArray()))))
          .addComments("It's a beautiful world")
          .addComments("... for you!")
          .addComments("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)"))
        .addComments("repeatedly spin 180 degrees as a readable special effect")
        .addChild(new OrientationInterpolator().setDEF("SpinInterpolator").setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray()))
        .addChild(new TimeSensor().setDEF("SpinClock").setCycleInterval(5d).setLoop(true))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("SpinClock").setToField("set_fraction").setToNode("SpinInterpolator"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("SpinInterpolator").setToField("rotation").setToNode("TextTransform"))
        .addChild(new Group().setDEF("BackgroundGroup")
          .addChild(new Background().setDEF("GradualBackground"))
          .addChild(new Script().setDEF("colorTypeConversionScript")
            .addField(new field().setType("SFColor").setName("colorInput").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFColor").setName("colorsOutput").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}"))
          .addChild(new ColorInterpolator().setDEF("ColorAnimator").setKey(new MFFloat14().getArray()).setKeyValue(new MFColor15().getArray())
            .addComments("AZURE to INDIGO and back again"))
          .addChild(new TimeSensor().setDEF("ColorClock").setCycleInterval(60d).setLoop(true))
          .addChild(new ROUTE().setFromField("colorsOutput").setFromNode("colorTypeConversionScript").setToField("skyColor").setToNode("GradualBackground"))
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("ColorAnimator").setToField("colorInput").setToNode("colorTypeConversionScript"))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("ColorClock").setToField("set_fraction").setToNode("ColorAnimator")))
        .addChild(new ProtoDeclare().setName("ArtDeco01Material").setAppinfo("tooltip: ArtDeco01Material prototype is a Material node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField").setValue("ArtDeco01Material prototype is a Material node"))
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true")))
          .setProtoBody(new ProtoBody()
            .addComments("Initial node of ProtoBody determines prototype node type")
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.282435f,0.085159f,0.134462f}).setShininess(0.127273f).setSpecularColor(new float[] {0.276305f,0.11431f,0.139857f}))
            .addComments("[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"")
            .addComments("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types")
            .addChild(new TouchSensor().setDescription("within ProtoBody")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("description"))
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))))))
        .addChild(new ExternProtoDeclare().setName("ArtDeco02Material").setAppinfo("this is a different Material node").setUrl(new MFString16().getArray())
          .addComments("[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"")
          .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("tooltip for descriptionField")))
        .addComments("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place")
        .addChild(new Shape().setDEF("TestShape1")
          .setAppearance(new Appearance().setDEF("TestAppearance1")
            .addComments("ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java")
            .setMaterial(ProtoInstance0 = new ProtoInstance().setName("ArtDeco01Material")
              .addComments("[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"")))
          .setGeometry(new Sphere().setRadius(0.001f)))
        .addChild(new Shape().setDEF("TestShape2")
          .setAppearance(new Appearance().setDEF("TestAppearance2")
            .addComments("ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java")
            .setMaterial(ProtoInstance1 = new ProtoInstance().setName("ArtDeco02Material").setDEF("ArtDeco02MaterialDEF")
              .addComments("[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"")))
          .setGeometry(new Cone().setBottomRadius(0.001f).setHeight(0.001f)))
        .addChild(new Shape().setDEF("TestShape3")
          .setAppearance(new Appearance().setDEF("TestAppearance3")
            .addComments("ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.")
            .setMaterial(ProtoInstance2 = new ProtoInstance().setUSE("ArtDeco02MaterialDEF")))
          .setGeometry(new Cylinder().setHeight(0.001f).setRadius(0.001f)))
        .addChild(new Inline().setDEF("inlineSceneDef").setUrl(new MFString17().getArray()))
        .addChild(new IMPORT().setAS("WorldInfoDEF2").setImportedDEF("WorldInfoDEF").setInlineDEF("inlineSceneDef"))
        .addChild(new EXPORT().setAS("WorldInfoDEF3").setLocalDEF("WorldInfoDEF"))
        .addChild(new ProtoDeclare().setName("MaterialModulator").setAppinfo("mimic a Material node and modulate fields as an animation effect").setDocumentation("http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("true"))
            .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFColor").setName("emissiveColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.05 0.05 0.5"))
            .addField(new field().setType("SFColor").setName("specularColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFFloat").setName("shininess").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
            .addField(new field().setType("SFFloat").setName("ambientIntensity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setDEF("MaterialNode")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                .addConnect(new connect().setNodeField("specularColor").setProtoField("specularColor"))
                .addConnect(new connect().setNodeField("transparency").setProtoField("transparency"))
                .addConnect(new connect().setNodeField("shininess").setProtoField("shininess"))
                .addConnect(new connect().setNodeField("ambientIntensity").setProtoField("ambientIntensity"))))
            .addComments("Only first node (the node type) is renderable, others are along for the ride")
            .addChild(new Script().setDEF("MaterialModulatorScript")
              .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFColor").setName("diffuseColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFColor").setName("newColor").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFTime").setName("clockTrigger").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
                .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))
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
        .addComments("Test success: declarative statement createDeclarativeShapeTests()")
        .addChild(new Group().setDEF("DeclarativeGroupExample")
          .addChild(new Shape()
            .addValue(new MetadataString().setName("findThisNameValue").setDEF("FindableMetadataStringTest").setValue(new MFString18().getArray()))
            .setAppearance(new Appearance().setDEF("DeclarativeAppearanceExample")
              .addComments("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance")
              .setMaterial(ProtoInstance3 = new ProtoInstance().setName("MaterialModulator").setDEF("MyMaterialModulator")))
            .setGeometry(new Cone().setBottom(false).setBottomRadius(0.05f).setHeight(0.1f)))
          .addComments("Test success: declarativeGroup.addChild() singleton pipeline method"))
        .addComments("Test success: declarative statement addChild()")
        .addComments("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>")
        .addComments("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>")
        .addComments("Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found")
        .addComments("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found")
        .addComments("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found")
        .addChild(new Group().setDEF("TestFieldObjectsGroup")
          .addComments("testFieldObjects() results")
          .addComments("SFBool default=true, true=true, false=false, negate()=true")
          .addComments("MFBool default=, initial=true false true, negate()=false true false")
          .addComments("SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0")
          .addComments("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7")
          .addComments("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=")
          .addComments("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true")
          .addComments("regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value"))
        .addChild(new Sound().setLocation(new float[] {0f,1.6f,0f})
          .addComments("set sound-ellipsoid location height at 1.6m to match typical avatar height")
          .setSource(new AudioClip().setDescription("chimes").setUrl(new MFString19().getArray())
            .addComments("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d")))
        .addChild(new Sound().setLocation(new float[] {0f,1.6f,0f})
          .addComments("set sound-ellipsoid location height at 1.6m to match typical avatar height")
          .setSource(new MovieTexture().setDescription("mpgsys.mpg from ConformanceNist suite").setUrl(new MFString20().getArray())
            .addComments("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d")
            .addComments("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"")))
        .addComments("Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true")
        .addComments("Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false")
        .addComments("Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false")
        .addComments("Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true")
        .addComments("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false")
        .addComments("Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true")
        .addChild(new Shape().setDEF("ExtrusionShape")
          .addComments("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'")
          .addComments("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'")
          .setAppearance(new Appearance().setDEF("TransparentAppearance")
            .setMaterial(new Material().setTransparency(1f)))
          .setGeometry(new Extrusion().setDEF("ExampleExtrusion")))
        .addChild(new Group()
          .addComments("Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes")
          .addChild(new ProtoDeclare().setName("NewWorldInfo")
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType("SFString").setName("description").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
            .setProtoBody(new ProtoBody()
              .addChild(new WorldInfo())))
          .addChild(new Group().setDEF("Node2")
            .addComments("intentionally empty"))
          .addChild(new Transform().setDEF("Node4")
            .addComments("intentionally empty"))
          .addComments("Test satisfactorily creates MFNode children array as an ordered list with mixed content"))
        .addChild(new ProtoDeclare().setName("ShaderProto")
          .setProtoBody(new ProtoBody()
            .addChild(new ProgramShader())))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .addComments("Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes")
            .addComments("Test satisfactorily creates MFNode shaders array as an ordered list with mixed content")
            .addShaders(new ProgramShader().setDEF("TestShader1")
              .addPrograms(new ShaderProgram().setType("VERTEX").setDEF("TestShader2")))
            .addShaders(ProtoInstance4 = new ProtoInstance().setName("ShaderProto").setDEF("TestShader3"))
            .addShaders(new ComposedShader().setDEF("TestShader4")
              .addParts(new ShaderPart().setType("VERTEX").setDEF("TestShader5")))))
        .addChild(new Transform().setDEF("SpecialtyNodes")
          .addChild(new CADLayer()
            .addChild(new CADAssembly()
              .addChild(new CADPart()
                .addChild(new CADFace()))))
          .addChild(new EspduTransform())
          .addChild(new ReceiverPdu())
          .addChild(new SignalPdu())
          .addChild(new TransmitterPdu())
          .addChild(new DISEntityManager()
            .addChild(new DISEntityTypeMapping()))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("description").setValue("ArtDeco01Material can substitute for a Material node"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("description").setValue("ArtDeco02Material can substitute for another Material node"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"});
  }
}
protected class MFInt323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,0});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5f,0f,2f,1.5f,0f,2f,1.5f,-2f,-2f,1.5f,-2f,-2f,1.5f,0f,0f,1.5f,0f});
  }
}
protected class MFFloat5 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.125f,0.375f,0.625f,0.875f,1f});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5f,0f,2f,1.5f,0f,2f,1.5f,-2f,-2f,1.5f,-2f,-2f,1.5f,0f,0f,1.5f,0f});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Java","SAI Library","X3DJSAIL"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"checks MetadataSetObject addValue() method"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"One, Two, Text","","He said, \"Immel did it!\" \"\""});
  }
}
protected class MFFloat12 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFRotation13 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f,1f,0f,4.712389f,0f,1f,0f,0f,0f,1f,0f,1.5707964f});
  }
}
protected class MFFloat14 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.5f,1f});
  }
}
protected class MFColor15 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.9411765f,1f,1f,0.29411766f,0f,0.50980395f,0.9411765f,1f,1f});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"test case"});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"});
  }
}
}

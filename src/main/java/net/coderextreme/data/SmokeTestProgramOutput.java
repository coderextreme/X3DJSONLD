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
import org.web3d.x3d.jsail.Interpolation.OrientationInterpolator;
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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class SmokeTestProgramOutput implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new SmokeTestProgramOutput().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/SmokeTestProgramOutput.new.java.x3d");
    model.toFileJSON("../data/SmokeTestProgramOutput.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
      X3D X3D0 =  new X3D().setCssClass(new SFString("x3dModel.class")).setProfile(new SFString("Full")).setCssStyle(new SFString("x3dModel.style")).setVersion(new SFString("4.0"))
      .addComments(new CommentsBlock("X3D model top-level comment"))
      .setHead(new head()
        .addComments(new CommentsBlock("comment #1"))
        .addComments(new CommentsBlock("comment #2"))
        .addComments(new CommentsBlock("comment #3"))
        .addComments(new CommentsBlock("comment #4"))
        .addComponent(new component().setName(new SFString("Navigation")).setLevel(3))
        .addComponent(new component().setName(new SFString("Shaders")).setLevel(1))
        .addComponent(new component().setName(new SFString("CADGeometry")).setLevel(2))
        .addComponent(new component().setName(new SFString("DIS")).setLevel(2))
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(1))
        .addComponent(new component().setName(new SFString("Grouping")).setLevel(1))
        .addComponent(new component().setName(new SFString("Layering")).setLevel(1))
        .addUnit(new unit().setName(new SFString("AngleUnitConversion")).setCategory(new SFString("angle")).setConversionFactor(1d))
        .addUnit(new unit().setName(new SFString("LengthUnitConversion")).setCategory(new SFString("length")).setConversionFactor(1d))
        .addUnit(new unit().setName(new SFString("ForceFromPoundsToNewtons")).setCategory(new SFString("force")).setConversionFactor(4.4482d))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("SmokeTestProgramOutput.x3d")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("continued development and testing in progress")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/specifications/java/X3DJSAIL.html")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("SmokeTestProgramOutput.java")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("6 September 2016")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 June 2026")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D Java Scene Access Interface Library (X3DJSAIL)")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Netbeans https://www.netbeans.org")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("SmokeTestProgramOutput.txt")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("SmokeTestProgramOutput.x3dv")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("SmokeTestProgramOutput.wrl")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("SmokeTestProgramOutput.html")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new ViewpointGroup().setDescription(new SFString("Available viewpoints"))
          .addChild(new Viewpoint().setDEF(new SFString("DefaultView")).setDescription(new SFString("Hello X3DJSAIL"))
            .setNavigationInfo(new NavigationInfo().setDEF(new SFString("ViewpointChildNavigationInfo"))))
          .addChild(new Viewpoint().setDEF(new SFString("TopDownView")).setDescription(new SFString("top-down view from above")).setOrientation(new float[] {1f ,0f ,0f ,-1.5708f }).setPosition(new float[] {0f ,100f ,0f })))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
        .addChild(new WorldInfo().setDEF(new SFString("WorldInfoDEF")).setCssClass(new SFString("worldInfoNode.class")).setCssStyle(new SFString("worldInfoNode.style")).setTitle(new SFString("SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)")))
        .addChild(new WorldInfo().setUSE(new SFString("WorldInfoDEF")))
        .addChild(new WorldInfo().setUSE(new SFString("WorldInfoDEF")))
        .addMetadata(new MetadataString().setName(new SFString("test")).setDEF(new SFString("scene.addChildMetadata")).setValue(new MFString0().getArray()))
        .addLayerSet(new LayerSet().setDEF(new SFString("scene.addChildLayerSetTest")))
        .addChild(new Transform().setDEF(new SFString("LogoGeometryTransform")).setTranslation(new float[] {0f ,1.5f ,0f })
          .addChild(new Anchor().setDEF(new SFString("siteAnchor")).setDescription(new SFString("select for X3D Java SAI Library (X3DJSAIL) description")).setUrl(new MFString1().getArray())
            .addChild(new Shape().setDEF(new SFString("BoxShape"))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDEF(new SFString("GreenMaterial")).setDiffuseColor(new float[] {0f ,1f ,1f }).setEmissiveColor(new float[] {0.8f ,0f ,0f }).setTransparency(0.1f ))
                .setTexture(new ImageTexture().setUrl(new MFString2().getArray())))
              .setGeometry(new Box().setDEF(new SFString("test-NMTOKEN_regex.0123456789")).setCssClass(new SFString("untextured"))))))
        .addChild(new Shape().setDEF(new SFString("LineShape"))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(new float[] {0.6f ,0.1961f ,0.8f })))
          .setGeometry(new IndexedLineSet().setCoordIndex(new MFInt323().getArray())
            .addComments(new CommentsBlock("Coordinate 3-tuple point count: 6"))
            .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray()))))
        .addChild(new PositionInterpolator().setDEF(new SFString("BoxPathAnimator")).setKey(new MFFloat5().getArray()).setKeyValue(new MFVec3f6().getArray()))
        .addChild(new TimeSensor().setDEF(new SFString("OrbitClock")).setCycleInterval(8d).setLoop(true))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("OrbitClock")).setToField(new SFString("set_fraction")).setToNode(new SFString("BoxPathAnimator")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("BoxPathAnimator")).setToField(new SFString("set_translation")).setToNode(new SFString("LogoGeometryTransform")))
        .addChild(new Transform().setDEF(new SFString("TextTransform")).setTranslation(new float[] {0f ,-1.5f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE(new SFString("GreenMaterial"))))
            .setGeometry(new Text().setString(new MFString7().getArray())
              .addComments(new CommentsBlock("Comment example A, plain quotation marks: He said, \"Immel did it!\""))
              .addComments(new CommentsBlock("Comment example B, XML character entities: He said, &quot;Immel did it!&quot;"))
              .setMetadata(new MetadataSet().setName(new SFString("EscapedQuotationMarksMetadataSet"))
                .setMetadata(new MetadataString().setName(new SFString("quotesTestC")).setValue(new MFString8().getArray()))
                .setMetadata(new MetadataString().setName(new SFString("extraChildTest")).setValue(new MFString9().getArray())))
              .setFontStyle(new FontStyle().setJustify(new MFString10().getArray()))))
          .addChild(new Collision()
            .addComments(new CommentsBlock("test containerField='proxy'"))
            .addChild(new Shape().setDEF(new SFString("ProxyShape"))
              .addComments(new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'"))
              .addComments(new CommentsBlock("alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'"))
              .addComments(new CommentsBlock("alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})"))
              .addComments(new CommentsBlock("reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html"))
              .setGeometry(new Text().setString(new MFString11().getArray()))))
          .addComments(new CommentsBlock("It's a beautiful world"))
          .addComments(new CommentsBlock("... for you!"))
          .addComments(new CommentsBlock("https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)")))
        .addComments(new CommentsBlock("repeatedly spin 180 degrees as a readable special effect"))
        .addChild(new OrientationInterpolator().setDEF(new SFString("SpinInterpolator")).setKey(new MFFloat12().getArray()).setKeyValue(new MFRotation13().getArray()))
        .addChild(new TimeSensor().setDEF(new SFString("SpinClock")).setCycleInterval(5d).setLoop(true))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("SpinClock")).setToField(new SFString("set_fraction")).setToNode(new SFString("SpinInterpolator")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("SpinInterpolator")).setToField(new SFString("rotation")).setToNode(new SFString("TextTransform")))
        .addChild(new Group().setDEF(new SFString("BackgroundGroup"))
          .addChild(new Background().setDEF(new SFString("GradualBackground")))
          .addChild(new Script().setDEF(new SFString("colorTypeConversionScript"))
            .addField(new field().setType("SFColor").setName(new SFString("colorInput")).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("MFColor").setName(new SFString("colorsOutput")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\n"+
"//                colorsOutput=' + colorsOutput + '\n"+
"');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}"))
          .addChild(new ColorInterpolator().setDEF(new SFString("ColorAnimator")).setKey(new MFFloat14().getArray()).setKeyValue(new MFColor15().getArray())
            .addComments(new CommentsBlock("AZURE to INDIGO and back again")))
          .addChild(new TimeSensor().setDEF(new SFString("ColorClock")).setCycleInterval(60d).setLoop(true))
          .addChild(new ROUTE().setFromField(new SFString("colorsOutput")).setFromNode(new SFString("colorTypeConversionScript")).setToField(new SFString("skyColor")).setToNode(new SFString("GradualBackground")))
          .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("ColorAnimator")).setToField(new SFString("colorInput")).setToNode(new SFString("colorTypeConversionScript")))
          .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("ColorClock")).setToField(new SFString("set_fraction")).setToNode(new SFString("ColorAnimator"))))
        .addChild(new ProtoDeclare().setName(new SFString("ArtDeco01")).setAppinfo(new SFString("tooltip: ArtDeco01Material prototype is a Material node"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("tooltip for descriptionField")).setValue(new SFString("ArtDeco01Material prototype is a Material node")))
            .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("true"))))
          .setProtoBody(new ProtoBody()
            .addComments(new CommentsBlock("Initial node of ProtoBody determines prototype node type"))
            .addChild(new Material().setAmbientIntensity(0.25f ).setDiffuseColor(new float[] {0.2824f ,0.0852f ,0.1345f }).setShininess(0.1273f ).setSpecularColor(new float[] {0.2763f ,0.1143f ,0.1399f }))
            .addComments(new CommentsBlock("[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\""))
            .addComments(new CommentsBlock("presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types"))
            .addChild(new TouchSensor().setDescription(new SFString("within ProtoBody"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("description")).setProtoField(new SFString("description")))
                .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))))))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco02")).setAppinfo(new SFString("this is a different Material node")).setUrl(new MFString16().getArray())
          .addComments(new CommentsBlock("[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""))
          .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("tooltip for descriptionField"))))
        .addComments(new CommentsBlock("Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place"))
        .addChild(new Shape().setDEF(new SFString("TestShape1"))
          .setAppearance(new Appearance().setDEF(new SFString("TestAppearance1"))
            .addComments(new CommentsBlock("ArtDeco01Material prototype goes here..."))
            .setMaterial(ProtoInstance0 = new ProtoInstance().setName(new SFString("ArtDeco01"))
              .addComments(new CommentsBlock("[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\""))))
          .setGeometry(new Sphere().setRadius(0.001f )))
        .addChild(new Shape().setDEF(new SFString("TestShape2"))
          .setAppearance(new Appearance().setDEF(new SFString("TestAppearance2"))
            .addComments(new CommentsBlock("ArtDeco02Material ProtoInstance goes here..."))
            .setMaterial(ProtoInstance1 = new ProtoInstance().setName(new SFString("ArtDeco02")).setDEF(new SFString("ArtDeco02MaterialDEF"))
              .addComments(new CommentsBlock("[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\""))))
          .setGeometry(new Cone().setBottomRadius(0.001f ).setHeight(0.001f )))
        .addChild(new Shape().setDEF(new SFString("TestShape3"))
          .setAppearance(new Appearance().setDEF(new SFString("TestAppearance3"))
            .addComments(new CommentsBlock("ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE."))
            .setMaterial(ProtoInstance2 = new ProtoInstance().setName(new SFString("ArtDeco02")).setUSE(new SFString("ArtDeco02MaterialDEF"))))
          .setGeometry(new Cylinder().setHeight(0.001f ).setRadius(0.001f )))
        .addChild(new Inline().setDEF(new SFString("inlineScene")).setUrl(new MFString17().getArray()))
        .addChild(new IMPORT().setAS(new SFString("WorldInfoDEF2")).setImportedDEF(new SFString("WorldInfoDEF")).setInlineDEF(new SFString("inlineScene")))
        .addChild(new EXPORT().setAS(new SFString("WorldInfoDEF3")).setLocalDEF(new SFString("WorldInfoDEF")))
        .addChild(new ProtoDeclare().setName(new SFString("MaterialModulator")).setAppinfo(new SFString("mimic a Material node and modulate fields as an animation effect")).setDocumentation(new SFString("https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("true")))
            .addField(new field().setType("SFColor").setName(new SFString("diffuseColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFColor").setName(new SFString("emissiveColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.05 0.05 0.5")))
            .addField(new field().setType("SFColor").setName(new SFString("specularColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFFloat").setName(new SFString("transparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
            .addField(new field().setType("SFFloat").setName(new SFString("shininess")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
            .addField(new field().setType("SFFloat").setName(new SFString("ambientIntensity")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setDEF(new SFString("MaterialNode"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("diffuseColor")))
                .addConnect(new connect().setNodeField(new SFString("emissiveColor")).setProtoField(new SFString("emissiveColor")))
                .addConnect(new connect().setNodeField(new SFString("specularColor")).setProtoField(new SFString("specularColor")))
                .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("transparency")))
                .addConnect(new connect().setNodeField(new SFString("shininess")).setProtoField(new SFString("shininess")))
                .addConnect(new connect().setNodeField(new SFString("ambientIntensity")).setProtoField(new SFString("ambientIntensity")))))
            .addComments(new CommentsBlock("Only first node (the node type for the prototype) is renderable, others are along for the ride"))
            .addChild(new Script().setDEF(new SFString("MaterialModulatorScript"))
              .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFColor").setName(new SFString("diffuseColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFColor").setName(new SFString("newColor")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFTime").setName(new SFString("clockTrigger")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("enabled")).setProtoField(new SFString("enabled")))
                .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("diffuseColor"))))
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
        .addComments(new CommentsBlock("Test success: declarative statement createDeclarativeShapeTests()"))
        .addChild(new Group().setDEF(new SFString("DeclarativeGroupExample"))
          .addChild(new Shape()
            .setMetadata(new MetadataString().setName(new SFString("findThisNameValue")).setDEF(new SFString("FindableMetadataStringTest")).setValue(new MFString18().getArray()))
            .setAppearance(new Appearance().setDEF(new SFString("DeclarativeAppearanceExample"))
              .addComments(new CommentsBlock("DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance"))
              .setMaterial(ProtoInstance3 = new ProtoInstance().setName(new SFString("MaterialModulator")).setDEF(new SFString("MyMaterialModulator"))))
            .setGeometry(new Cone().setBottom(false).setBottomRadius(0.05f ).setHeight(0.1f )))
          .addComments(new CommentsBlock("Test success: declarativeGroup.addChild() singleton pipeline method")))
        .addComments(new CommentsBlock("Test success: declarative statement addChild()"))
        .addComments(new CommentsBlock("Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found"))
        .addComments(new CommentsBlock("Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found"))
        .addChild(new Group().setDEF(new SFString("TestFieldObjectsGroup"))
          .addComments(new CommentsBlock("testFieldObjects() results"))
          .addComments(new CommentsBlock("SFBool default=false, true=true, false=false, negate()=true"))
          .addComments(new CommentsBlock("MFBool default=, initial=true false true, negate()=false true false"))
          .addComments(new CommentsBlock("SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4"))
          .addComments(new CommentsBlock("MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7"))
          .addComments(new CommentsBlock("... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear="))
          .addComments(new CommentsBlock("SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true"))
          .addComments(new CommentsBlock("regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value")))
        .addChild(new Sound().setLocation(new float[] {0f ,1.6f ,0f })
          .addComments(new CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height"))
          .setSource(new AudioClip().setDescription(new SFString("chimes")).setUrl(new MFString19().getArray())
            .addComments(new CommentsBlock("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d"))))
        .addChild(new Sound().setLocation(new float[] {0f ,1.6f ,0f })
          .addComments(new CommentsBlock("set sound-ellipsoid location height at 1.6m to match typical avatar height"))
          .setSource(new MovieTexture().setDescription(new SFString("mpgsys.mpg from ConformanceNist suite")).setUrl(new MFString20().getArray())
            .addComments(new CommentsBlock("Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d"))
            .addComments(new CommentsBlock("Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\""))))
        .addComments(new CommentsBlock("Test success: Anchor.isNode()=true, siteAnchor.isNode()=true"))
        .addComments(new CommentsBlock("Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false"))
        .addComments(new CommentsBlock("Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false"))
        .addComments(new CommentsBlock("Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true"))
        .addComments(new CommentsBlock("Test success: CommentsBlock.isNode()=false, testComments.isNode()=false"))
        .addComments(new CommentsBlock("Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true"))
        .addChild(new Shape().setDEF(new SFString("ExtrusionShape"))
          .addComments(new CommentsBlock("ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'"))
          .addComments(new CommentsBlock("ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'"))
          .setAppearance(new Appearance().setDEF(new SFString("TransparentAppearance"))
            .setMaterial(new Material().setTransparency(1f )))
          .setGeometry(new Extrusion().setDEF(new SFString("ExampleExtrusion"))))
        .addChild(new Group()
          .addComments(new CommentsBlock("Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes"))
          .addChild(new ProtoDeclare().setName(new SFString("NewWorldInfo"))
            .setProtoInterface(new ProtoInterface()
              .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
            .setProtoBody(new ProtoBody()
              .addChild(new WorldInfo())))
          .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("NewWorldInfo")).setDEF(new SFString("Proto1")))
          .addChild(new Group().setDEF(new SFString("Node2"))
            .addComments(new CommentsBlock("intentionally empty")))
          .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("NewWorldInfo")).setDEF(new SFString("Proto3")))
          .addChild(new Transform().setDEF(new SFString("Node4"))
            .addComments(new CommentsBlock("intentionally empty")))
          .addComments(new CommentsBlock("Test satisfactorily creates MFNode children array as an ordered list with mixed content")))
        .addChild(new ProtoDeclare().setName(new SFString("ShaderProto"))
          .setProtoBody(new ProtoBody()
            .addChild(new ProgramShader())))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .addComments(new CommentsBlock("Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes"))
            .addComments(new CommentsBlock("Test satisfactorily creates MFNode shaders array as an ordered list with mixed content"))
            .addShaders(new ProgramShader().setDEF(new SFString("TestShader1"))
              .addPrograms(new ShaderProgram().setType("VERTEX").setDEF(new SFString("TestShader2"))))
            .addShaders(ProtoInstance6 = new ProtoInstance().setName(new SFString("ShaderProto")).setDEF(new SFString("TestShader3")))
            .addShaders(new ComposedShader().setDEF(new SFString("TestShader4"))
              .addParts(new ShaderPart().setType("VERTEX").setDEF(new SFString("TestShader5"))))))
        .addChild(new Transform().setDEF(new SFString("SpecialtyNodes"))
          .addChild(new CADLayer()
            .addChild(new CADAssembly()
              .addChild(new CADPart()
                .addChild(new CADFace()))))
          .addChild(new EspduTransform())
          .addChild(new ReceiverPdu())
          .addChild(new SignalPdu())
          .addChild(new TransmitterPdu())
          .addChild(new DISEntityManager()
            .addChild(new DISEntityTypeMapping())))
        .addChild(new EspduTransform()
          .addChild(new WorldInfo()))
        .addChild(new ReceiverPdu())
        .addChild(new SignalPdu())
        .addChild(new TransmitterPdu())
        .addChild(new DISEntityManager()
          .addChild(new DISEntityTypeMapping()))
        .addChild(new LoadSensor()
          .addComments(new CommentsBlock("Contained nodes typically must be USE references for nodes previously DEFined in the scene"))
          .addComments(new CommentsBlock("The following nodes are test cases for all X3DUrlObject nodes"))
          .addChild(new Anchor().setUSE(new SFString("siteAnchor")))
          .addChild(new Inline().setUSE(new SFString("inlineScene")))
          .addChild(new DISEntityTypeMapping())
          .addChild(new GeoMetadata())
          .addChild(new AudioClip())
          .addChild(new ImageCubeMapTexture())
          .addChild(new ImageTexture3D())
          .addChild(new ImageTexture())
          .addChild(new MovieTexture())
          .addChild(new Script().setDEF(new SFString("DummyScript"))
            .setSourceCode("ecmascript:\n"+
"/* dummy test source code */"))
          .addChild(new PackagedShader())
          .addChild(new ShaderPart().setType("VERTEX"))
          .addChild(new ShaderProgram().setType("VERTEX")))
        .addChild(new OrthoViewpoint().setDEF(new SFString("SpecialTestOrthoViewpoint")).setFieldOfView(new MFFloat21().getArray())));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("ArtDeco01Material can substitute for a Material node")));
ProtoInstance4
            .addFieldValue(new fieldValue().setName(new SFString("description")).setValue(new SFString("testing 1 2 3")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,0});
  }
}
private class MFVec3f4 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5f ,0f ,2f ,1.5f ,0f ,2f ,1.5f ,-2f ,-2f ,1.5f ,-2f ,-2f ,1.5f ,0f ,0f ,1.5f ,0f });
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.125f ,0.375f ,0.625f ,0.875f ,1f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5f ,0f ,2f ,1.5f ,0f ,2f ,1.5f ,-2f ,-2f ,1.5f ,-2f ,-2f ,1.5f ,0f ,0f ,1.5f ,0f });
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Java","SAI Library","X3DJSAIL"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"checks MetadataSet addValue() method"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"One, Two, Text","He said, \"Immel did it!\" \"\""});
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFRotation13 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,4.7124f ,0f ,1f ,0f ,0f ,0f ,1f ,0f ,1.5708f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFColor15 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.9412f ,1f ,1f ,0.2941f ,0f ,0.5098f ,0.9412f ,1f ,1f });
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"newScene.x3d","https://www.web3d.org/specifications/java/examples/newScene.x3d"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"test case"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"});
  }
}
private class MFFloat21 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,3f ,2f ,4f });
  }
}
}

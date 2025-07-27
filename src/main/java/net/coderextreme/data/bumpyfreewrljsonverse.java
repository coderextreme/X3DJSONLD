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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class bumpyfreewrljsonverse implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new bumpyfreewrljsonverse().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/bumpyfreewrljsonverse.new.java.x3d");
    model.toFileJSON("../data/bumpyfreewrljsonverse.new.java.json");
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
      X3D X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addComponent(new component().setName("DIS").setLevel(2))
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComments(new CommentsBlock("Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L"))
        .addMeta(new meta().setName("title").setContent("bumpyfreewrljsonverse.x3d"))
        .addMeta(new meta().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta(new meta().setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
        .addMeta(new meta().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta(new meta().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new meta().setName("translated").setContent("*enter date of translation here*"))
        .addMeta(new meta().setName("modified").setContent("*enter date of latest revision here*"))
        .addMeta(new meta().setName("version").setContent("*enter version here, if any*"))
        .addMeta(new meta().setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta(new meta().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta(new meta().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta(new meta().setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
        .addMeta(new meta().setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta(new meta().setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta(new meta().setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta(new meta().setName("subject").setContent("*enter subject keywords here*"))
        .addMeta(new meta().setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta(new meta().setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
        .addMeta(new meta().setName("generator").setContent("PSPad, http://www.pspad.com/"))
        .addMeta(new meta().setName("license").setContent("license.html")))
      .addComments(new CommentsBlock("\"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution, It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak) open for their \"discussion about the teapot\""))
      .setScene(new Scene()
        .addComments(new CommentsBlock("basic nodes, which might be present in any scene"))
        .addChild(new NavigationInfo().setType("\"EXAMINE\"").setAvatarSize(new MFFloat0().getArray()))
        .addChild(new DirectionalLight().setAmbientIntensity(0.2f).setDirection(new double[] {0f,-1f,0f}))
        .addChild(new DirectionalLight().setAmbientIntensity(0.2f).setDirection(new double[] {-1f,-0.1f,-1f}))
        .addChild(new Viewpoint().setDescription("My Overview").setFieldOfView(1.570796f).setPosition(new double[] {0f,1.75f,60f}))
        .addComments(new CommentsBlock("LayerSet with two layers, navigation happens in layer 1"))
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new MFInt321().getArray())
          .addComments(new CommentsBlock("the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\""))
          .addComments(new CommentsBlock("the second layer contains the sliders that are moved with the user's display like a HUD (heads up display)"))
          .addLayers(new Layer().setPickable(true).setObjectType(new MFString2().getArray())
            .addComments(new CommentsBlock("this group contains the red/green/blue 3D crosshair"))
            .addChild(new Group()
              .addComments(new CommentsBlock("Arrow X"))
              .addChild(new Transform().setTranslation(new double[] {25f,0f,0f}).setRotation(new double[] {0f,0f,-1f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setDEF("Shaft").setRadius(0.35f).setHeight(50f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("RED").setDiffuseColor(new double[] {1f,0f,0f}).setEmissiveColor(new double[] {1f,0f,0f})))))
              .addChild(new Transform().setTranslation(new double[] {50f,0f,0f}).setRotation(new double[] {0f,0f,-1f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF("Tip").setBottomRadius(0.8f).setHeight(3f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("RED")))))
              .addComments(new CommentsBlock("Arrow Y"))
              .addChild(new Transform().setTranslation(new double[] {0f,25f,0f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("GREEN").setDiffuseColor(new double[] {0f,1f,0f}).setEmissiveColor(new double[] {0f,1f,0f})))))
              .addChild(new Transform().setTranslation(new double[] {0f,50f,0f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("GREEN")))))
              .addComments(new CommentsBlock("Arrow Z"))
              .addChild(new Transform().setTranslation(new double[] {0f,0f,25f}).setRotation(new double[] {1f,0f,0f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE("Shaft"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("BLUE").setDiffuseColor(new double[] {0f,0f,1f}).setEmissiveColor(new double[] {0f,0f,1f})))))
              .addChild(new Transform().setTranslation(new double[] {0f,0f,50f}).setRotation(new double[] {1f,0f,0f,1.57f})
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE("Tip"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("BLUE"))))))
            .addComments(new CommentsBlock("the model that is being reviewed by the users of this scene"))
            .addChild(new Transform().setDEF("FlowerTransform")
              .addComments(new CommentsBlock("<Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"))
              .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
              .addChild(new Background().setBackUrl(new MFString3().getArray()).setBottomUrl(new MFString4().getArray()).setFrontUrl(new MFString5().getArray()).setLeftUrl(new MFString6().getArray()).setRightUrl(new MFString7().getArray()).setTopUrl(new MFString8().getArray()))
              .addChild(new Transform()
                .addChild(new Shape()
                  .addComments(new CommentsBlock("<Sphere radius='40'></Sphere>"))
                  .setGeometry(new IndexedFaceSet().setConvex(false).setDEF("Orbit")
                    .setCoord(new Coordinate().setDEF("OrbitCoordinates")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {0.7f,0.7f,0.7f}).setSpecularColor(new double[] {0.5f,0.5f,0.5f}))
                    .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                      .setBackTexture(new ImageTexture().setUrl(new MFString9().getArray()))
                      .setBottomTexture(new ImageTexture().setUrl(new MFString10().getArray()))
                      .setFrontTexture(new ImageTexture().setUrl(new MFString11().getArray()))
                      .setLeftTexture(new ImageTexture().setUrl(new MFString12().getArray()))
                      .setRightTexture(new ImageTexture().setUrl(new MFString13().getArray()))
                      .setTopTexture(new ImageTexture().setUrl(new MFString14().getArray())))
                    .addShaders(new ComposedShader().setDEF("freewrlShader").setLanguage("GLSL")
                      .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.98 1 1.033"))
                      .addField(new field().setType("SFInt32").setName("fw_textureCoordGenType").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0"))
                      .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                      .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("2"))
                      .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("15"))
                      .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                      .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                      .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString15().getArray()))
                      .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString16().getArray()))
                      .addComments(new CommentsBlock("TO CONVERT TO A SPHERE <ShaderPart url='\"../shaders/freewrl.vs\"'></ShaderPart> <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' type='FRAGMENT'></ShaderPart>")))))))
            .addChild(new Script().setDEF("OrbitScript")
              .addField(new field().setType("MFVec3f").setName("coordinates").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("MFInt32").setName("coordIndexes").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
              .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
              .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
              .setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"     var resolution = 100;\n"+
"     var theta = 0.0;\n"+
"     var phi = 0.0;\n"+
"     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"     var crds = new MFVec3f();\n"+
"     var vecCount = 0;\n"+
"     for ( i = 0; i < resolution; i++) {\n"+
"     	for ( j = 0; j < resolution; j++) {\n"+
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"		crds[vecCount] = new SFVec3f(\n"+
"			rho * Math.cos(phi) * Math.cos(theta),\n"+
"			rho * Math.cos(phi) * Math.sin(theta),\n"+
"			rho * Math.sin(phi)\n"+
"		);\n"+
"		vecCount++;\n"+
"		theta += delta;\n"+
"	}\n"+
"	phi += delta;\n"+
"     }\n"+
"     coordinates = crds;\n"+
"     // coordinates = new MFVec3f(...crds);\n"+
"\n"+
"\n"+
"     var cis = new MFInt32();\n"+
"     var intCount = 0;\n"+
"     for ( i = 0; i < resolution-1; i++) {\n"+
"     	for ( j = 0; j < resolution-1; j++) {\n"+
"	     cis[intCount++] = i*resolution+j;\n"+
"	     cis[intCount++] = i*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j+1;\n"+
"	     cis[intCount++] = (i+1)*resolution+j;\n"+
"	     cis[intCount++] = -1;\n"+
"	}\n"+
"    }\n"+
"    coordIndexes = cis;\n"+
"    // coordIndexes = new MFInt32(...cis);\n"+
"}"))
            .addChild(new ROUTE().setFromField("coordIndexes").setFromNode("OrbitScript").setToField("set_coordIndex").setToNode("Orbit"))
            .addChild(new ROUTE().setFromField("coordinates").setFromNode("OrbitScript").setToField("set_point").setToNode("OrbitCoordinates"))
            .addComments(new CommentsBlock("DIS multiuser facilities"))
            .addChild(new DISEntityManager().setDEF("EntityManager").setNetworkMode("networkReader")
              .addChild(new DISEntityTypeMapping().setReadInterval(new SFTime(3d)).setCategory(77).setSpecific(1).setUrl(new MFString17().getArray()))
              .addChild(new DISEntityTypeMapping().setReadInterval(new SFTime(3d)).setCategory(77).setSpecific(2).setUrl(new MFString18().getArray()))
              .addChild(new DISEntityTypeMapping().setReadInterval(new SFTime(3d)).setCategory(77).setSpecific(3).setUrl(new MFString19().getArray()))
              .addChild(new DISEntityTypeMapping().setReadInterval(new SFTime(3d)).setCategory(77).setSpecific(4).setUrl(new MFString20().getArray())))
            .addChild(new Collision().setEnabled(false)
              .addChild(new Group().setDEF("AvatarHolder")))
            .addChild(new ROUTE().setFromField("addedEntities").setFromNode("EntityManager").setToField("addChildren").setToNode("AvatarHolder"))
            .addChild(new ROUTE().setFromField("removedEntities").setFromNode("EntityManager").setToField("removeChildren").setToNode("AvatarHolder")))
          .addLayers(new LayoutLayer().setPickable(true).setObjectType(new MFString21().getArray())
            .addComments(new CommentsBlock("positioning the LayoutLayer"))
            .addComments(new CommentsBlock("clipping the LayoutLayer"))
            .addComments(new CommentsBlock("the content (children) of the LayoutLayer"))
            .addComments(new CommentsBlock("first, the slider for scaling the model"))
            .addChild(new Transform().setTranslation(new double[] {0f,0f,-3f})
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0f,0f,0f}).setTransparency(0.7f)))
                .setGeometry(new Box().setSize(new double[] {100f,100f,0.02f}))))
            .addChild(new Transform().setDEF("equationTransform")
              .addChild(new Transform().setTranslation(new double[] {0f,0f,-20f})
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF("equation").setString(new MFString22().getArray())
                    .setFontStyle(new FontStyle().setSize(0.09f)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {1f,1f,0f}))))))
            .addChild(new ProtoDeclare().setName("SliderProto")
              .setProtoInterface(new ProtoInterface()
                .addField(new field().setType("SFVec3f").setName("sliderTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0.7 0"))
                .addField(new field().setType("SFVec3f").setName("transformTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0.1"))
                .addField(new field().setType("SFVec3f").setName("sensorTranslation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType("MFString").setName("textString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"a=\""))
                .addField(new field().setType("SFFloat").setName("parameterScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                .addField(new field().setType("SFString").setName("parameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                .addField(new field().setType("SFNode").setName("shaderNode").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new ProtoBody()
                .addChild(new Group()
                  .addChild(new Transform().setDEF("protoSlider").setTranslation(new double[] {0f,0.7f,0f})
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("translation").setProtoField("sliderTranslation")))
                    .addChild(new Transform().setDEF("protoTransform").setTranslation(new double[] {0f,0f,0.1f})
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("translation").setProtoField("sensorTranslation")))
                      .addChild(new PlaneSensor().setDEF("protoSensor").setMaxPosition(new double[] {1f,0f}))
                      .addChild(new Transform().setTranslation(new double[] {0f,0f,0f})
                        .addChild(new TouchSensor().setDEF("protoTS")))
                      .addChild(new Transform()
                        .addChild(new Shape()
                          .setGeometry(new Text().setDEF("protoText").setString(new MFString23().getArray())
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField("string").setProtoField("textString")))
                            .setFontStyle(new FontStyle().setSize(0.23f)))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))))))
                  .addChild(new Script().setDEF("protoValueTransformerScript").setDirectOutput(true).setMustEvaluate(true)
                    .addField(new field().setType("SFFloat").setName("protoScale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("30"))
                    .addField(new field().setType("SFString").setName("protoParameterName").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("a"))
                    .addField(new field().setType("SFNode").setName("shader").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType("SFVec3f").setName("newTranslation").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1 1 1"))
                    .addField(new field().setType("SFFloat").setName("protoValue_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("1"))
                    .addField(new field().setType("MFString").setName("protoText_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setValue("\"1.0\""))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("protoScale").setProtoField("parameterScale"))
                      .addConnect(new connect().setNodeField("protoParameterName").setProtoField("parameterName"))
                      .addConnect(new connect().setNodeField("shader").setProtoField("shaderNode")))
                    .setSourceCode("ecmascript:\n"+
"const newTranslation = function(Value) {\n"+
"	'use strict';\n"+
"	protoValue_changed = Value.x * protoScale;\n"+
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));\n"+
"\n"+
"        var orientation = Value.x;\n"+
"\n"+
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");\n"+
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");\n"+
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");\n"+
"        if (shader) {\n"+
"            shader.getField(protoParameterName).setValue(orientation * protoScale);\n"+
"        }\n"+
"        if (txt) {\n"+
"            var stringField = txt.getField(\"string\");\n"+
"            var label = protoParameterName;\n"+
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));\n"+
"        }\n"+
"        if (ps) {\n"+
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);\n"+
"        }\n"+
"        if (t) {\n"+
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);\n"+
"        }\n"+
"}"))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("set_translation").setToNode("protoTransform"))
                  .addChild(new ROUTE().setFromField("translation_changed").setFromNode("protoSensor").setToField("newTranslation").setToNode("protoValueTransformerScript"))
                  .addChild(new ROUTE().setFromField("protoText_changed").setFromNode("protoValueTransformerScript").setToField("string").setToNode("protoText")))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName("SliderProto").setDEF("aPI"))
            .addChild(ProtoInstance1 = new ProtoInstance().setName("SliderProto").setDEF("bPI"))
            .addChild(ProtoInstance2 = new ProtoInstance().setName("SliderProto").setDEF("cPI"))
            .addChild(ProtoInstance3 = new ProtoInstance().setName("SliderProto").setDEF("dPI"))
            .addChild(ProtoInstance4 = new ProtoInstance().setName("SliderProto").setDEF("tdeltaPI"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName("SliderProto").setDEF("pdeltaPI"))
            .setLayout(new Layout().setAlign(new MFString24().getArray()).setOffset(new MFFloat25().getArray()).setOffsetUnits(new MFString26().getArray()).setScaleMode(new MFString27().getArray()).setSize(new MFFloat28().getArray()).setSizeUnits(new MFString29().getArray()))
            .setViewport(new Viewport().setClipBoundary(new MFFloat30().getArray())))));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.7 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("textString").setValue("\"a=\""));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("parameterName").setValue("a"));
ProtoInstance0
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.4 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("textString").setValue("\"b=\""));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("30"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("parameterName").setValue("b"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 0.1 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("textString").setValue("\"c=\""));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("parameterName").setValue("c"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.2 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("textString").setValue("\"d=\""));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("20"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("parameterName").setValue("d"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.5 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("textString").setValue("\"tdelta=\""));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("parameterName").setValue("tdelta"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("sliderTranslation").setValue("0 -0.8 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("transformTranslation").setValue("0 0 0.1"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("sensorTranslation").setValue("0 0 0"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("textString").setValue("\"pdelta=\""));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterScale").setValue("6.28"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("parameterName").setValue("pdelta"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("shaderNode")
                .addChild(new ComposedShader().setUSE("freewrlShader")));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.25f,1.75f,0.75f});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ALL"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/freewrl_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/freewrl.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Gramps8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Leif8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Lily8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/Tufani8Final.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ALL"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"a="});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LEFT","BOTTOM"});
  }
}
private class MFFloat25 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {-0.2f,0.19f});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"WORLD","WORLD"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NONE","NONE"});
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0.4f,0.6f});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"WORLD","WORLD"});
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0f,1f,0f,1f});
  }
}
}

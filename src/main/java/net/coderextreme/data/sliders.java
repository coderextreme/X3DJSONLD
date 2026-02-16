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
public class sliders implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new sliders().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/sliders.new.java.x3d");
    model.toFileJSON("../data/sliders.new.java.x3dj");
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
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.1"))
      .setHead(new head()
        .addComments(new CommentsBlock("<component name='Shape' level='4'></component>"))
        .addComponent(new component().setName(new SFString("Scripting")).setLevel(1))
        .addComponent(new component().setName(new SFString("EnvironmentalEffects")).setLevel(3))
        .addComponent(new component().setName(new SFString("Texturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Rendering")).setLevel(1))
        .addComponent(new component().setName(new SFString("Grouping")).setLevel(3))
        .addComponent(new component().setName(new SFString("Core")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("sliders.x3d")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("8 August 2025")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("*Bumpy flower with prototype sliders*")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Doug Sanden, Christoph Valentin, John Carlson")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.coderextreme.net/X3DJSONLD/src/main/data/sliders.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("license.html")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Vim, VI Improved"))))
      .setScene(new Scene()
        .addLayerSet(new LayerSet().setActiveLayer(1).setOrder(new MFInt320().getArray())
          .addLayers(new Layer().setPickable(true).setObjectType(new MFString1().getArray())
            .addChild(new NavigationInfo().setType("\"EXAMINE\"").setAvatarSize(new MFFloat2().getArray()))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2f ).setDirection(new float[] {0f ,-1f ,0f }))
            .addChild(new DirectionalLight().setAmbientIntensity(0.2f ).setDirection(new float[] {-1f ,-0.1f ,-1f }))
            .addChild(new Viewpoint().setDescription(new SFString("My Overview")).setFieldOfView(1.570796f ).setPosition(new float[] {0f ,1.75f ,60f }))
            .addChild(new Group()
              .addComments(new CommentsBlock("Arrow X"))
              .addChild(new Transform().setTranslation(new float[] {25f ,0f ,0f }).setRotation(new float[] {0f ,0f ,-1f ,1.57f })
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setDEF(new SFString("Shaft")).setRadius(0.35f ).setHeight(50f ))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("RED")).setDiffuseColor(new float[] {1f ,0f ,0f }).setEmissiveColor(new float[] {1f ,0f ,0f })))))
              .addChild(new Transform().setTranslation(new float[] {50f ,0f ,0f }).setRotation(new float[] {0f ,0f ,-1f ,1.57f })
                .addChild(new Shape()
                  .setGeometry(new Cone().setDEF(new SFString("Tip")).setBottomRadius(0.8f ).setHeight(3f ))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("RED"))))))
              .addComments(new CommentsBlock("Arrow Y"))
              .addChild(new Transform().setTranslation(new float[] {0f ,25f ,0f })
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE(new SFString("Shaft")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("GREEN")).setDiffuseColor(new float[] {0f ,1f ,0f }).setEmissiveColor(new float[] {0f ,1f ,0f })))))
              .addChild(new Transform().setTranslation(new float[] {0f ,50f ,0f })
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE(new SFString("Tip")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("GREEN"))))))
              .addComments(new CommentsBlock("Arrow Z"))
              .addChild(new Transform().setTranslation(new float[] {0f ,0f ,25f }).setRotation(new float[] {1f ,0f ,0f ,1.57f })
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setUSE(new SFString("Shaft")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("BLUE")).setDiffuseColor(new float[] {0f ,0f ,1f }).setEmissiveColor(new float[] {0f ,0f ,1f })))))
              .addChild(new Transform().setTranslation(new float[] {0f ,0f ,50f }).setRotation(new float[] {1f ,0f ,0f ,1.57f })
                .addChild(new Shape()
                  .setGeometry(new Cone().setUSE(new SFString("Tip")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("BLUE")))))))
            .addComments(new CommentsBlock("the model that is being reviewed by the users of this scene"))
            .addChild(new Transform().setDEF(new SFString("FlowerTransform"))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setConvex(false).setDEF(new SFString("Orbit"))
                    .setCoord(new Coordinate().setDEF(new SFString("OrbitCoordinates"))))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,0.7f ,0.7f }).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f }))))))
            .addChild(new Script().setDEF(new SFString("OrbitScript"))
              .addField(new field().setType("MFVec3f").setName(new SFString("coordinates")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("MFInt32").setName(new SFString("coordIndexes")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
              .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
              .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
              .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("5")))
              .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
              .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
              .addField(new field().setType("SFInt32").setName(new SFString("resolution")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50")))
              .setSourceCode("ecmascript:\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"			function set_a(value) {\n"+
"				a = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_b(value) {\n"+
"				b = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_c(value) {\n"+
"				c = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_d(value) {\n"+
"				d = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_pdelta(value) {\n"+
"				pdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function set_tdelta(value) {\n"+
"				tdelta = value;\n"+
"				generateCoordinates();\n"+
"			}\n"+
"\n"+
"			function resolution(value) {\n"+
"				resolution = value;\n"+
"				initialize();\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}"))
            .addChild(new ROUTE().setFromField(new SFString("coordIndexes")).setFromNode(new SFString("OrbitScript")).setToField(new SFString("set_coordIndex")).setToNode(new SFString("Orbit")))
            .addChild(new ROUTE().setFromField(new SFString("coordinates")).setFromNode(new SFString("OrbitScript")).setToField(new SFString("set_point")).setToNode(new SFString("OrbitCoordinates"))))
          .addLayers(new LayoutLayer().setPickable(true).setObjectType(new MFString3().getArray())
            .setLayout(new Layout().setAlign(new MFString4().getArray()).setOffset(new MFFloat5().getArray()).setSize(new MFFloat6().getArray()))
            .setViewport(new Viewport().setClipBoundary(new MFFloat7().getArray()))
            .addChild(new Transform().setTranslation(new float[] {0f ,0f ,-3f })
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,0f }).setTransparency(0.7f )))
                .setGeometry(new Box().setSize(new float[] {100f ,100f ,0.02f }))))
            .addChild(new Transform().setDEF(new SFString("equationTransform"))
              .addChild(new Transform().setTranslation(new float[] {0f ,0f ,-20f })
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF(new SFString("equation")).setString(new MFString8().getArray())
                    .setFontStyle(new FontStyle().setSize(0.09f )))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,1f ,0f }))))))
            .addComments(new CommentsBlock("The slider parameters"))
            .addChild(new ProtoDeclare().setName(new SFString("SliderProto"))
              .setProtoInterface(new ProtoInterface()
                .addField(new field().setType("SFVec3f").setName(new SFString("sliderTranslation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
                .addField(new field().setType("MFString").setName(new SFString("textString")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("\"x=\"")))
                .addField(new field().setType("SFFloat").setName(new SFString("parameterScale")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("15")))
                .addField(new field().setType("SFString").setName(new SFString("parameterName")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("x")))
                .addField(new field().setType("SFNode").setName(new SFString("orbScript")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
              .setProtoBody(new ProtoBody()
                .addChild(new Group()
                  .addChild(new Transform().setDEF(new SFString("protoSlider")).setTranslation(new float[] {0f ,0.7f ,0f })
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("sliderTranslation"))))
                    .addChild(new Transform().setDEF(new SFString("protoTransform")).setTranslation(new float[] {0f ,0f ,0.1f })
                      .addChild(new PlaneSensor().setDEF(new SFString("protoSensor")).setDescription(new SFString("Grab with mouse to adjust slider")).setMaxPosition(new float[] {1f ,0f }))
                      .addChild(new Transform().setTranslation(new float[] {0f ,0f ,0f })
                        .addChild(new TouchSensor().setDescription(new SFString("Maybe start dragging this?")).setDEF(new SFString("protoTS"))))
                      .addChild(new Transform()
                        .addChild(new Shape()
                          .setGeometry(new Text().setDEF(new SFString("protoText")).setString(new MFString9().getArray())
                            .setIS(new IS()
                              .addConnect(new connect().setNodeField(new SFString("string")).setProtoField(new SFString("textString"))))
                            .setFontStyle(new FontStyle().setStyle(new SFString("BOLD")).setSize(0.23f )))
                          .setAppearance(new Appearance()
                            .setMaterial(new Material()))))))
                  .addChild(new Script().setDEF(new SFString("protoValueTransformerScript"))
                    .addField(new field().setType("SFFloat").setName(new SFString("protoScale")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType("SFString").setName(new SFString("protoParameterName")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType("SFVec3f").setName(new SFString("newTranslation")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("1 1 1")))
                    .addField(new field().setType("SFNode").setName(new SFString("protoScript")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
                    .addField(new field().setType("SFFloat").setName(new SFString("protoValue")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1")))
                    .addField(new field().setType("MFString").setName(new SFString("protoText")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("\"1.0\"")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("protoScale")).setProtoField(new SFString("parameterScale")))
                      .addConnect(new connect().setNodeField(new SFString("protoParameterName")).setProtoField(new SFString("parameterName")))
                      .addConnect(new connect().setNodeField(new SFString("protoScript")).setProtoField(new SFString("orbScript"))))
                    .setSourceCode("ecmascript:\n"+
"function set_protoScale(value) {\n"+
"	protoScale = value;\n"+
"}\n"+
"\n"+
"function set_protoParameterName(value) {\n"+
"	protoParameterName = value;\n"+
"}\n"+
"\n"+
"function set_protoScript(value) {\n"+
"	protoScript = value;\n"+
"}\n"+
"\n"+
"function set_protoValue(value) {\n"+
"	protoValue = value;\n"+
"}\n"+
"\n"+
"function set_protoText(value) {\n"+
"	protoText = value;\n"+
"}\n"+
"\n"+
"function newTranslation(value) {\n"+
"       	set_protoValue(value.x * protoScale);\n"+
"       	set_protoText(new MFString(protoParameterName+'='+protoValue.toFixed(2)));\n"+
"	protoScript[protoParameterName] = protoValue;\n"+
"};"))
                  .addChild(new ROUTE().setFromField(new SFString("translation_changed")).setFromNode(new SFString("protoSensor")).setToField(new SFString("set_translation")).setToNode(new SFString("protoTransform")))
                  .addChild(new ROUTE().setFromField(new SFString("translation_changed")).setFromNode(new SFString("protoSensor")).setToField(new SFString("newTranslation")).setToNode(new SFString("protoValueTransformerScript")))
                  .addChild(new ROUTE().setFromField(new SFString("protoText")).setFromNode(new SFString("protoValueTransformerScript")).setToField(new SFString("string")).setToNode(new SFString("protoText"))))))
            .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("aPI")))
            .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("bPI")))
            .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("cPI")))
            .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("dPI")))
            .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("tdeltaPI")))
            .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("SliderProto")).setDEF(new SFString("pdeltaPI"))))
          .addLayers(new Layer().setPickable(true).setObjectType(new MFString10().getArray())
            .addChild(new Viewpoint().setDescription(new SFString("My Humanoids")).setFieldOfView(1.570796f ).setPosition(new float[] {0f ,1.75f ,80f })))));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 0.7 0")));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"a=\"")));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("30")));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("a")));
ProtoInstance0
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 0.4 0")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"b=\"")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("30")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("b")));
ProtoInstance1
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 0.1 0")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"c=\"")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("20")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("c")));
ProtoInstance2
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 -0.2 0")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"d=\"")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("20")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("d")));
ProtoInstance3
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 -0.5 0")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"tdelta=\"")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("6.28")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("tdelta")));
ProtoInstance4
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("sliderTranslation")).setValue(new SFString("0 -0.8 0")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("textString")).setValue(new SFString("\"pdelta=\"")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("parameterScale")).setValue(new SFString("6.28")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("parameterName")).setValue(new SFString("pdelta")));
ProtoInstance5
              .addFieldValue(new fieldValue().setName(new SFString("orbScript"))
                .addChild(new Script().setUSE(new SFString("OrbitScript"))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,3});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ALL"});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.25f ,1.75f ,0.75f });
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ALL"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LEFT","BOTTOM"});
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {-0.2f ,0.19f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.4f ,0.6f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f ,0f ,1f });
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"a="});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ALL"});
  }
}
}

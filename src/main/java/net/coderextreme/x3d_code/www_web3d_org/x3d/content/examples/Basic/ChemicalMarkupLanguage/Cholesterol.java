package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.ChemicalMarkupLanguage;
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
public class Cholesterol {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Cholesterol().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Cholesterol.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
ProtoInstanceObject ProtoInstance13 = null;
ProtoInstanceObject ProtoInstance14 = null;
ProtoInstanceObject ProtoInstance15 = null;
ProtoInstanceObject ProtoInstance16 = null;
ProtoInstanceObject ProtoInstance17 = null;
ProtoInstanceObject ProtoInstance18 = null;
ProtoInstanceObject ProtoInstance19 = null;
ProtoInstanceObject ProtoInstance20 = null;
ProtoInstanceObject ProtoInstance21 = null;
ProtoInstanceObject ProtoInstance22 = null;
ProtoInstanceObject ProtoInstance23 = null;
ProtoInstanceObject ProtoInstance24 = null;
ProtoInstanceObject ProtoInstance25 = null;
ProtoInstanceObject ProtoInstance26 = null;
ProtoInstanceObject ProtoInstance27 = null;
ProtoInstanceObject ProtoInstance28 = null;
ProtoInstanceObject ProtoInstance29 = null;
ProtoInstanceObject ProtoInstance30 = null;
ProtoInstanceObject ProtoInstance31 = null;
ProtoInstanceObject ProtoInstance32 = null;
ProtoInstanceObject ProtoInstance33 = null;
ProtoInstanceObject ProtoInstance34 = null;
ProtoInstanceObject ProtoInstance35 = null;
ProtoInstanceObject ProtoInstance36 = null;
ProtoInstanceObject ProtoInstance37 = null;
ProtoInstanceObject ProtoInstance38 = null;
ProtoInstanceObject ProtoInstance39 = null;
ProtoInstanceObject ProtoInstance40 = null;
ProtoInstanceObject ProtoInstance41 = null;
ProtoInstanceObject ProtoInstance42 = null;
ProtoInstanceObject ProtoInstance43 = null;
ProtoInstanceObject ProtoInstance44 = null;
ProtoInstanceObject ProtoInstance45 = null;
ProtoInstanceObject ProtoInstance46 = null;
ProtoInstanceObject ProtoInstance47 = null;
ProtoInstanceObject ProtoInstance48 = null;
ProtoInstanceObject ProtoInstance49 = null;
ProtoInstanceObject ProtoInstance50 = null;
ProtoInstanceObject ProtoInstance51 = null;
ProtoInstanceObject ProtoInstance52 = null;
ProtoInstanceObject ProtoInstance53 = null;
ProtoInstanceObject ProtoInstance54 = null;
ProtoInstanceObject ProtoInstance55 = null;
ProtoInstanceObject ProtoInstance56 = null;
ProtoInstanceObject ProtoInstance57 = null;
ProtoInstanceObject ProtoInstance58 = null;
ProtoInstanceObject ProtoInstance59 = null;
ProtoInstanceObject ProtoInstance60 = null;
ProtoInstanceObject ProtoInstance61 = null;
ProtoInstanceObject ProtoInstance62 = null;
ProtoInstanceObject ProtoInstance63 = null;
ProtoInstanceObject ProtoInstance64 = null;
ProtoInstanceObject ProtoInstance65 = null;
ProtoInstanceObject ProtoInstance66 = null;
ProtoInstanceObject ProtoInstance67 = null;
ProtoInstanceObject ProtoInstance68 = null;
ProtoInstanceObject ProtoInstance69 = null;
ProtoInstanceObject ProtoInstance70 = null;
ProtoInstanceObject ProtoInstance71 = null;
ProtoInstanceObject ProtoInstance72 = null;
ProtoInstanceObject ProtoInstance73 = null;
ProtoInstanceObject ProtoInstance74 = null;
ProtoInstanceObject ProtoInstance75 = null;
ProtoInstanceObject ProtoInstance76 = null;
ProtoInstanceObject ProtoInstance77 = null;
ProtoInstanceObject ProtoInstance78 = null;
ProtoInstanceObject ProtoInstance79 = null;
ProtoInstanceObject ProtoInstance80 = null;
ProtoInstanceObject ProtoInstance81 = null;
ProtoInstanceObject ProtoInstance82 = null;
ProtoInstanceObject ProtoInstance83 = null;
ProtoInstanceObject ProtoInstance84 = null;
ProtoInstanceObject ProtoInstance85 = null;
ProtoInstanceObject ProtoInstance86 = null;
ProtoInstanceObject ProtoInstance87 = null;
ProtoInstanceObject ProtoInstance88 = null;
ProtoInstanceObject ProtoInstance89 = null;
ProtoInstanceObject ProtoInstance90 = null;
ProtoInstanceObject ProtoInstance91 = null;
ProtoInstanceObject ProtoInstance92 = null;
ProtoInstanceObject ProtoInstance93 = null;
ProtoInstanceObject ProtoInstance94 = null;
ProtoInstanceObject ProtoInstance95 = null;
ProtoInstanceObject ProtoInstance96 = null;
ProtoInstanceObject ProtoInstance97 = null;
ProtoInstanceObject ProtoInstance98 = null;
ProtoInstanceObject ProtoInstance99 = null;
ProtoInstanceObject ProtoInstance100 = null;
ProtoInstanceObject ProtoInstance101 = null;
ProtoInstanceObject ProtoInstance102 = null;
ProtoInstanceObject ProtoInstance103 = null;
ProtoInstanceObject ProtoInstance104 = null;
ProtoInstanceObject ProtoInstance105 = null;
ProtoInstanceObject ProtoInstance106 = null;
ProtoInstanceObject ProtoInstance107 = null;
ProtoInstanceObject ProtoInstance108 = null;
ProtoInstanceObject ProtoInstance109 = null;
ProtoInstanceObject ProtoInstance110 = null;
ProtoInstanceObject ProtoInstance111 = null;
ProtoInstanceObject ProtoInstance112 = null;
ProtoInstanceObject ProtoInstance113 = null;
ProtoInstanceObject ProtoInstance114 = null;
ProtoInstanceObject ProtoInstance115 = null;
ProtoInstanceObject ProtoInstance116 = null;
ProtoInstanceObject ProtoInstance117 = null;
ProtoInstanceObject ProtoInstance118 = null;
ProtoInstanceObject ProtoInstance119 = null;
ProtoInstanceObject ProtoInstance120 = null;
ProtoInstanceObject ProtoInstance121 = null;
ProtoInstanceObject ProtoInstance122 = null;
ProtoInstanceObject ProtoInstance123 = null;
ProtoInstanceObject ProtoInstance124 = null;
ProtoInstanceObject ProtoInstance125 = null;
ProtoInstanceObject ProtoInstance126 = null;
ProtoInstanceObject ProtoInstance127 = null;
ProtoInstanceObject ProtoInstance128 = null;
ProtoInstanceObject ProtoInstance129 = null;
ProtoInstanceObject ProtoInstance130 = null;
ProtoInstanceObject ProtoInstance131 = null;
ProtoInstanceObject ProtoInstance132 = null;
ProtoInstanceObject ProtoInstance133 = null;
ProtoInstanceObject ProtoInstance134 = null;
ProtoInstanceObject ProtoInstance135 = null;
ProtoInstanceObject ProtoInstance136 = null;
ProtoInstanceObject ProtoInstance137 = null;
ProtoInstanceObject ProtoInstance138 = null;
ProtoInstanceObject ProtoInstance139 = null;
ProtoInstanceObject ProtoInstance140 = null;
ProtoInstanceObject ProtoInstance141 = null;
ProtoInstanceObject ProtoInstance142 = null;
ProtoInstanceObject ProtoInstance143 = null;
ProtoInstanceObject ProtoInstance144 = null;
ProtoInstanceObject ProtoInstance145 = null;
ProtoInstanceObject ProtoInstance146 = null;
ProtoInstanceObject ProtoInstance147 = null;
ProtoInstanceObject ProtoInstance148 = null;
ProtoInstanceObject ProtoInstance149 = null;
ProtoInstanceObject ProtoInstance150 = null;
ProtoInstanceObject ProtoInstance151 = null;
ProtoInstanceObject ProtoInstance152 = null;
ProtoInstanceObject ProtoInstance153 = null;
ProtoInstanceObject ProtoInstance154 = null;
ProtoInstanceObject ProtoInstance155 = null;
ProtoInstanceObject ProtoInstance156 = null;
ProtoInstanceObject ProtoInstance157 = null;
ProtoInstanceObject ProtoInstance158 = null;
ProtoInstanceObject ProtoInstance159 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Cholesterol.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Autogenerated version of Cholesterol.x3d scene produced from Cholesterol.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new metaObject().setName("created").setContent("24 November 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("Cholesterol.xml"))
        .addMeta(new metaObject().setName("CML version").setContent("1.0"))
        .addMeta(new metaObject().setName("reference").setContent("CML sources http://www.xml-cml.org"))
        .addMeta(new metaObject().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new metaObject().setName("reference").setContent("http://webbook.nist.gov/chemistry"))
        .addMeta(new metaObject().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new metaObject().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Cholesterol.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Cholesterol.x3d"))
        .addChild(new ProtoDeclareObject().setName("Carbon")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoC")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoC_mat").setDiffuseColor(new float[] {0f,0f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.29f,0.3f,0.29f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.77f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Hydrogen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoH")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoH_mat").setAmbientIntensity(0.0933f).setDiffuseColor(new float[] {0.38f,0.38f,0.42f}).setShininess(0.5f).setSpecularColor(new float[] {0.53f,0.53f,0.53f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.32f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.4f))))))))
        .addChild(new ProtoDeclareObject().setName("Nitrogen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoN")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoN_mat").setDiffuseColor(new float[] {0f,0f,0.72f}).setEmissiveColor(new float[] {0f,0f,0.13f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.75f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Oxygen")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoO")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoO_mat").setAmbientIntensity(0.487f).setDiffuseColor(new float[] {0.54f,0.05f,0.25f}).setShininess(0.2f).setSpecularColor(new float[] {0.81f,0.77f,0.75f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.73f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Fluorine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoF")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoF_mat").setDiffuseColor(new float[] {1f,0.48f,0.79f}).setEmissiveColor(new float[] {0.09f,0.04f,0.07f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(0.72f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Silicon")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoSi")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoSi_mat").setDiffuseColor(new float[] {0.8f,0.8f,0.8f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.18f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Phosphorus")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoP")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoP_mat").setAmbientIntensity(0.11f).setDiffuseColor(new float[] {0.9f,0.41f,0f}).setEmissiveColor(new float[] {0.1f,0.04f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.1f,0.1f,0.1f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.1f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Sulphur")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoS")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoS_mat").setAmbientIntensity(0.0467f).setDiffuseColor(new float[] {0.25f,0.39f,0.25f}).setEmissiveColor(new float[] {0.05f,0.08f,0.05f}).setShininess(0.6f).setSpecularColor(new float[] {0.11f,0.12f,0.08f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.3f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Chlorine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoCl")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoCl_mat").setDiffuseColor(new float[] {0.28f,0.7f,0f}).setEmissiveColor(new float[] {0.06f,0.15f,0f}).setShininess(0.8f).setSpecularColor(new float[] {0.5f,0.5f,0.5f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.01f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString8().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Bromine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoBr")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoBr_mat").setAmbientIntensity(0.0833f).setDiffuseColor(new float[] {0.5f,0.3f,0.19f}).setEmissiveColor(new float[] {0.12f,0.13f,0.08f}).setShininess(0.17f).setSpecularColor(new float[] {0.08f,0.08f,0.05f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.14f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("Iodine")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("atoI")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("atoI_mat").setDiffuseColor(new float[] {0.56f,0.37f,0.74f}).setEmissiveColor(new float[] {0.15f,0.1f,0.2f}).setShininess(0.09f).setSpecularColor(new float[] {0.12f,0.12f,0.12f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.33f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString10().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("unknown")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFFloat").setName("Mat").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.6")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new TransformObject().setDEF("ato_")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("ato__mat").setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.15f,0.1f,0.2f}).setShininess(0.09f).setSpecularColor(new float[] {0.12f,0.12f,0.12f})
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("transparency").setProtoField("Mat")))))
                  .setGeometry(new SphereObject().setRadius(1.001f)))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString11().getArray()))
                    .setFontStyle(new FontStyleObject().setSize(0.8f))))))))
        .addChild(new ProtoDeclareObject().setName("line")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFVec3f").setName("bond_set").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1 0 0 1 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {1f,1f,1f})))
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3212().getArray()))
                  .setCoord(new CoordinateObject().setDEF("bondo")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("point").setProtoField("bond_set")))))))))
        .addChild(new ProtoDeclareObject().setName("title_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject()))))))))
        .addChild(new ProtoDeclareObject().setName("ano1_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name1")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject().setSize(0.8f)))))))))
        .addChild(new ProtoDeclareObject().setName("ano2_text")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFString").setName("txt").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .addChild(new GroupObject()
                .addChild(new TransformObject()
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
                    .setGeometry(new TextObject().setDEF("cmpd_name2")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("txt")))
                      .setFontStyle(new FontStyleObject().setSize(0.6f)))))))))
        .addChild(new BackgroundObject().setGroundAngle(new MFFloatObject(new MFFloat13().getArray())).setGroundColor(new MFColorObject(new MFColor14().getArray())).setSkyAngle(new MFFloatObject(new MFFloat15().getArray())).setSkyColor(new MFColorObject(new MFColor16().getArray())))
        .addChild(new PointLightObject().setAmbientIntensity(1f).setLocation(new float[] {0f,0f,5f}).setRadius(30f))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","ANY"}))
        .addChild(new ViewpointObject().setDescription("Inspect Cholesterol").setPosition(new float[] {0f,2f,20f}))
        .addComments(new CommentsBlock("<?xml-stylesheet type=\"text/xsl\" href=\"generic.xsl\" ?>"))
        .addComments(new CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved."))
        .addComments(new CommentsBlock("type=\"3D\" <date day=\"5\" month=\"2\" year=\"2010\"/>"))
        .addComments(new CommentsBlock("CML document - cholesterol - karne - 7/8/00"))
        .addComments(new CommentsBlock("file converted from: MDL .mol"))
        .addChild(new TransformObject().setDEF("infogroupa").setTranslation(new float[] {-8f,2f,-4f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,6f,0f})
            .addChild(new ViewpointObject().setDescription("title billboard").setPosition(new float[] {6f,-2f,10f}))
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("title_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,5f,0f})
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("ano1_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,4f,0f})
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("ano1_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,3f,0f})
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("ano1_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("ano1_text")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("ano2_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-1f,0f})
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("ano2_text")))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("ano2_text"))))
        .addComments(new CommentsBlock("molecule specific information"))
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_1")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_2")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_3")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_4")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_5")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_6")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_7")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_8")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_9")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_10")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_11")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_12")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_13")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_14")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_15")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_16")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_17")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_18")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_19")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_20")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_21")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_22")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_23")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_24")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_25")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_26")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_27")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("Carbon").setDEF("cholesterol_karne_a_28")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_29")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_30")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_31")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_32")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_33")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_34")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_35")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("Oxygen").setDEF("cholesterol_karne_a_36")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_37")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_38")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_39")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_40")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_41")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_42")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_43")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_44")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_45")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_46")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_47")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_48")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance56 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_49")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance57 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_50")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance58 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_51")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance59 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_52")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance60 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_53")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance61 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_54")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance62 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_55")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance63 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_56")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance64 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_57")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance65 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_58")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance66 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_59")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance67 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_60")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance68 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_61")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance69 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_62")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance70 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_63")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance71 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_64")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance72 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_65")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance73 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_66")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance74 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_67")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance75 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_68")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance76 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_69")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance77 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_70")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance78 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_71")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance79 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_72")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance80 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_73")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance81 = new ProtoInstanceObject().setName("Hydrogen").setDEF("cholesterol_karne_a_74"))))
        .addChild(new GroupObject()
          .addChild(ProtoInstance82 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_1"))
          .addChild(ProtoInstance83 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_2"))
          .addChild(ProtoInstance84 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_3"))
          .addChild(ProtoInstance85 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_4"))
          .addChild(ProtoInstance86 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_5"))
          .addChild(ProtoInstance87 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_6"))
          .addChild(ProtoInstance88 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_7"))
          .addChild(ProtoInstance89 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_8"))
          .addChild(ProtoInstance90 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_8_2"))
          .addChild(ProtoInstance91 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_9"))
          .addChild(ProtoInstance92 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_10"))
          .addChild(ProtoInstance93 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_11"))
          .addChild(ProtoInstance94 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_12"))
          .addChild(ProtoInstance95 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_13"))
          .addChild(ProtoInstance96 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_14"))
          .addChild(ProtoInstance97 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_15"))
          .addChild(ProtoInstance98 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_16"))
          .addChild(ProtoInstance99 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_17"))
          .addChild(ProtoInstance100 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_18"))
          .addChild(ProtoInstance101 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_19"))
          .addChild(ProtoInstance102 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_20"))
          .addChild(ProtoInstance103 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_21"))
          .addChild(ProtoInstance104 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_22"))
          .addChild(ProtoInstance105 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_23"))
          .addChild(ProtoInstance106 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_24"))
          .addChild(ProtoInstance107 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_25"))
          .addChild(ProtoInstance108 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_26"))
          .addChild(ProtoInstance109 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_27"))
          .addChild(ProtoInstance110 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_28"))
          .addChild(ProtoInstance111 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_29"))
          .addChild(ProtoInstance112 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_30"))
          .addChild(ProtoInstance113 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_31"))
          .addChild(ProtoInstance114 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_32"))
          .addChild(ProtoInstance115 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_33"))
          .addChild(ProtoInstance116 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_34"))
          .addChild(ProtoInstance117 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_35"))
          .addChild(ProtoInstance118 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_36"))
          .addChild(ProtoInstance119 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_37"))
          .addChild(ProtoInstance120 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_38"))
          .addChild(ProtoInstance121 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_39"))
          .addChild(ProtoInstance122 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_40"))
          .addChild(ProtoInstance123 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_41"))
          .addChild(ProtoInstance124 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_42"))
          .addChild(ProtoInstance125 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_43"))
          .addChild(ProtoInstance126 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_44"))
          .addChild(ProtoInstance127 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_45"))
          .addChild(ProtoInstance128 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_46"))
          .addChild(ProtoInstance129 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_47"))
          .addChild(ProtoInstance130 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_48"))
          .addChild(ProtoInstance131 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_49"))
          .addChild(ProtoInstance132 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_50"))
          .addChild(ProtoInstance133 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_51"))
          .addChild(ProtoInstance134 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_52"))
          .addChild(ProtoInstance135 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_53"))
          .addChild(ProtoInstance136 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_54"))
          .addChild(ProtoInstance137 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_55"))
          .addChild(ProtoInstance138 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_56"))
          .addChild(ProtoInstance139 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_57"))
          .addChild(ProtoInstance140 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_58"))
          .addChild(ProtoInstance141 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_59"))
          .addChild(ProtoInstance142 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_60"))
          .addChild(ProtoInstance143 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_61"))
          .addChild(ProtoInstance144 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_62"))
          .addChild(ProtoInstance145 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_63"))
          .addChild(ProtoInstance146 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_64"))
          .addChild(ProtoInstance147 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_65"))
          .addChild(ProtoInstance148 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_66"))
          .addChild(ProtoInstance149 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_67"))
          .addChild(ProtoInstance150 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_68"))
          .addChild(ProtoInstance151 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_69"))
          .addChild(ProtoInstance152 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_70"))
          .addChild(ProtoInstance153 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_71"))
          .addChild(ProtoInstance154 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_72"))
          .addChild(ProtoInstance155 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_73"))
          .addChild(ProtoInstance156 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_74"))
          .addChild(ProtoInstance157 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_75"))
          .addChild(ProtoInstance158 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_76"))
          .addChild(ProtoInstance159 = new ProtoInstanceObject().setName("line").setDEF("cholesterol_karne_b_77"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"Cholesterol: C27 H46 O\""));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"molecule weight: 386.6598\""));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"melting point: 148.5\""));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"boiling point: 360\""));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"specific gravity: 1.067\""));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"CAS: 57-88-5\""));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"ACX: I1001660\""));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"RTECS: FZ8400000\""));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.9901 2.1889 -1.8776"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.1059 1.6157 -0.9459"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.5787 1.7234 -0.4719"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.7797 1.0607 0.812"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.8482 1.6003 1.9235"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.372 1.5412 1.5004"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.4702 1.006 2.3207"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.0043 1.0283 1.9762"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.3614 1.8701 0.8105"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.3215 1.7261 -0.3221"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.0963 2.1783 0.1259"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.7503 2.4279 -1.6345"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.1677 2.0593 -2.0888"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.1972 2.372 -0.9408"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.7895 1.5563 0.2449"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.9663 1.6453 1.2237"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.1354 1.5087 0.296"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.6487 1.7527 -1.1872"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.245 3.8521 -0.6813"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.3066 3.6419 0.2349"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.6329 2.5278 -2.0553"));
ProtoInstance29
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.118 2.844 -3.4537"));
ProtoInstance30
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.0185 1.8022 -2.1116"));
ProtoInstance31
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.1314 2.6591 -2.5153"));
ProtoInstance32
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.4748 1.9697 -2.5572"));
ProtoInstance33
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.6837 2.862 -2.8793"));
ProtoInstance34
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.5656 3.6361 -4.1508"));
ProtoInstance35
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.9428 2.0228 -2.729"));
ProtoInstance36
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.8702 0.5579 -1.1345"));
ProtoInstance37
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.2306 1.2525 -1.2225"));
ProtoInstance38
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.8443 2.786 -0.3705"));
ProtoInstance39
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.598 -0.0166 0.684"));
ProtoInstance40
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.9845 0.9926 2.8302"));
ProtoInstance41
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.1166 2.6452 2.1386"));
ProtoInstance42
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.7974 0.546 3.2519"));
ProtoInstance43
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.1826 1.2861 1.2631"));
ProtoInstance44
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.3205 -0.0033 1.762"));
ProtoInstance45
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.5536 1.406 2.8511"));
ProtoInstance46
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.3568 2.9171 1.1476"));
ProtoInstance47
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.255 0.6517 -0.5486"));
ProtoInstance48
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.7064 3.5158 -1.4783"));
ProtoInstance49
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.0447 2.1427 -2.4288"));
ProtoInstance50
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.4284 2.646 -2.982"));
ProtoInstance51
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.2058 0.9869 -2.3304"));
ProtoInstance52
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.7354 0.5091 -0.0874"));
ProtoInstance53
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.9396 0.8285 1.9599"));
ProtoInstance54
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.9804 2.6119 1.7486"));
ProtoInstance55
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.5588 0.4972 0.3832"));
ProtoInstance56
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.9031 2.2515 0.5587"));
ProtoInstance57
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.5225 0.7794 -1.6839"));
ProtoInstance58
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.5516 4.3755 -1.5989"));
ProtoInstance59
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.9698 4.0607 0.1194"));
ProtoInstance60
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.2486 4.203 -0.3745"));
ProtoInstance61
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.3393 3.8408 0.5573"));
ProtoInstance62
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.1313 4.1114 -0.7442"));
ProtoInstance63
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.6054 4.0592 0.9725"));
ProtoInstance64
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.7945 3.4951 -1.5571"));
ProtoInstance65
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.886 3.4016 -4.0098"));
ProtoInstance66
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.2048 3.4527 -3.3792"));
ProtoInstance67
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.8914 1.9061 -3.9818"));
ProtoInstance68
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.9441 0.9731 -2.8306"));
ProtoInstance69
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.2381 1.4013 -1.1111"));
ProtoInstance70
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.1969 3.4944 -1.8026"));
ProtoInstance71
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.9155 3.0506 -3.5203"));
ProtoInstance72
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.4247 1.1825 -3.3239"));
ProtoInstance73
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.6484 1.5118 -1.5723"));
ProtoInstance74
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.7271 3.6239 -2.0872"));
ProtoInstance75
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.4721 4.2419 -4.2967"));
ProtoInstance76
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.6877 4.2967 -4.0977"));
ProtoInstance77
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.4502 2.9399 -4.9946"));
ProtoInstance78
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.9217 1.5002 -1.7613"));
ProtoInstance79
              .addFieldValue(new fieldValueObject().setName("position").setValue("12.8265 2.6762 -2.7736"));
ProtoInstance80
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.991 1.2847 -3.5432"));
ProtoInstance81
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.7836 0.9649 0.6011"));
ProtoInstance82
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.1059 1.6157 -0.9459 -1.9901 2.1889 -1.8776"));
ProtoInstance83
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.5787 1.7234 -0.4719 -2.1059 1.6157 -0.9459"));
ProtoInstance84
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.1059 1.6157 -0.9459 -1.0963 2.1783 0.1259"));
ProtoInstance85
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.7797 1.0607 0.812 -3.5787 1.7234 -0.4719"));
ProtoInstance86
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.7797 1.0607 0.812 -2.8482 1.6003 1.9235"));
ProtoInstance87
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.1826 1.2861 1.2631 -3.7797 1.0607 0.812"));
ProtoInstance88
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8482 1.6003 1.9235 -1.372 1.5412 1.5004"));
ProtoInstance89
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.3920000000000001 1.5412 1.5004 -0.4902 1.006 2.3207"));
ProtoInstance90
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.352 1.5412 1.5004 -0.4502 1.006 2.3207"));
ProtoInstance91
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.372 1.5412 1.5004 -1.0963 2.1783 0.1259"));
ProtoInstance92
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.4702 1.006 2.3207 1.0043 1.0283 1.9762"));
ProtoInstance93
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0043 1.0283 1.9762 1.3614 1.8701 0.8105"));
ProtoInstance94
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.3215 1.7261 -0.3221 1.3614 1.8701 0.8105"));
ProtoInstance95
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.3614 1.8701 0.8105 2.7895 1.5563 0.2449"));
ProtoInstance96
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.0963 2.1783 0.1259 0.3215 1.7261 -0.3221"));
ProtoInstance97
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.3215 1.7261 -0.3221 0.7503 2.4279 -1.6345"));
ProtoInstance98
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.0963 2.1783 0.1259 -1.3066 3.6419 0.2349"));
ProtoInstance99
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.7503 2.4279 -1.6345 2.1677 2.0593 -2.0888"));
ProtoInstance100
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.1677 2.0593 -2.0888 3.1972 2.372 -0.9408"));
ProtoInstance101
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.1972 2.372 -0.9408 4.6487 1.7527 -1.1872"));
ProtoInstance102
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.1972 2.372 -0.9408 3.245 3.8521 -0.6813"));
ProtoInstance103
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.7895 1.5563 0.2449 3.1972 2.372 -0.9408"));
ProtoInstance104
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.7895 1.5563 0.2449 3.9663 1.6453 1.2237"));
ProtoInstance105
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.9663 1.6453 1.2237 5.1354 1.5087 0.296"));
ProtoInstance106
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.6487 1.7527 -1.1872 5.1354 1.5087 0.296"));
ProtoInstance107
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.6487 1.7527 -1.1872 5.6329 2.5278 -2.0553"));
ProtoInstance108
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.6329 2.5278 -2.0553 5.118 2.844 -3.4537"));
ProtoInstance109
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.6329 2.5278 -2.0553 7.0185 1.8022 -2.1116"));
ProtoInstance110
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.0185 1.8022 -2.1116 8.1314 2.6591 -2.5153"));
ProtoInstance111
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.1314 2.6591 -2.5153 9.4748 1.9697 -2.5572"));
ProtoInstance112
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.4748 1.9697 -2.5572 10.6837 2.862 -2.8793"));
ProtoInstance113
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.6837 2.862 -2.8793 10.5656 3.6361 -4.1508"));
ProtoInstance114
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.6837 2.862 -2.8793 11.9428 2.0228 -2.729"));
ProtoInstance115
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.1059 1.6157 -0.9459 -1.8702 0.5579 -1.1345"));
ProtoInstance116
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.5787 1.7234 -0.4719 -4.2306 1.2525 -1.2225"));
ProtoInstance117
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.5787 1.7234 -0.4719 -3.8443 2.786 -0.3705"));
ProtoInstance118
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.7797 1.0607 0.812 -3.598 -0.0166 0.684"));
ProtoInstance119
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8482 1.6003 1.9235 -2.9845 0.9926 2.8302"));
ProtoInstance120
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8482 1.6003 1.9235 -3.1166 2.6452 2.1386"));
ProtoInstance121
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.4702 1.006 2.3207 -0.7974 0.546 3.2519"));
ProtoInstance122
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0043 1.0283 1.9762 1.3205 -0.0033 1.762"));
ProtoInstance123
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0043 1.0283 1.9762 1.5536 1.406 2.8511"));
ProtoInstance124
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.3614 1.8701 0.8105 1.3568 2.9171 1.1476"));
ProtoInstance125
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.3215 1.7261 -0.3221 0.255 0.6517 -0.5486"));
ProtoInstance126
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.7503 2.4279 -1.6345 0.7064 3.5158 -1.4783"));
ProtoInstance127
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.7503 2.4279 -1.6345 0.0447 2.1427 -2.4288"));
ProtoInstance128
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.1677 2.0593 -2.0888 2.4284 2.646 -2.982"));
ProtoInstance129
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.1677 2.0593 -2.0888 2.2058 0.9869 -2.3304"));
ProtoInstance130
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.7895 1.5563 0.2449 2.7354 0.5091 -0.0874"));
ProtoInstance131
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.9663 1.6453 1.2237 3.9396 0.8285 1.9599"));
ProtoInstance132
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.9663 1.6453 1.2237 3.9804 2.6119 1.7486"));
ProtoInstance133
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1354 1.5087 0.296 5.5588 0.4972 0.3832"));
ProtoInstance134
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1354 1.5087 0.296 5.9031 2.2515 0.5587"));
ProtoInstance135
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.6487 1.7527 -1.1872 4.5225 0.7794 -1.6839"));
ProtoInstance136
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.245 3.8521 -0.6813 3.5516 4.3755 -1.5989"));
ProtoInstance137
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.245 3.8521 -0.6813 3.9698 4.0607 0.1194"));
ProtoInstance138
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.245 3.8521 -0.6813 2.2486 4.203 -0.3745"));
ProtoInstance139
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.3066 3.6419 0.2349 -2.3393 3.8408 0.5573"));
ProtoInstance140
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.3066 3.6419 0.2349 -1.1313 4.1114 -0.7442"));
ProtoInstance141
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.3066 3.6419 0.2349 -0.6054 4.0592 0.9725"));
ProtoInstance142
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.6329 2.5278 -2.0553 5.7945 3.4951 -1.5571"));
ProtoInstance143
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.118 2.844 -3.4537 5.886 3.4016 -4.0098"));
ProtoInstance144
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.118 2.844 -3.4537 4.2048 3.4527 -3.3792"));
ProtoInstance145
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.118 2.844 -3.4537 4.8914 1.9061 -3.9818"));
ProtoInstance146
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.0185 1.8022 -2.1116 6.9441 0.9731 -2.8306"));
ProtoInstance147
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.0185 1.8022 -2.1116 7.2381 1.4013 -1.1111"));
ProtoInstance148
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.1314 2.6591 -2.5153 8.1969 3.4944 -1.8026"));
ProtoInstance149
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.1314 2.6591 -2.5153 7.9155 3.0506 -3.5203"));
ProtoInstance150
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.4748 1.9697 -2.5572 9.4247 1.1825 -3.3239"));
ProtoInstance151
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.4748 1.9697 -2.5572 9.6484 1.5118 -1.5723"));
ProtoInstance152
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.6837 2.862 -2.8793 10.7271 3.6239 -2.0872"));
ProtoInstance153
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.5656 3.6361 -4.1508 11.4721 4.2419 -4.2967"));
ProtoInstance154
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.5656 3.6361 -4.1508 9.6877 4.2967 -4.0977"));
ProtoInstance155
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.5656 3.6361 -4.1508 10.4502 2.9399 -4.9946"));
ProtoInstance156
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.9428 2.0228 -2.729 11.9217 1.5002 -1.7613"));
ProtoInstance157
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.9428 2.0228 -2.729 12.8265 2.6762 -2.7736"));
ProtoInstance158
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.9428 2.0228 -2.729 11.991 1.2847 -3.5432"));
ProtoInstance159
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-5.1826 1.2861 1.2631 -5.7836 0.9649 0.6011"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"C"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"H"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"N"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"O"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"F"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Si"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"P"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"S"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Cl"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Br"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"I"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"?"});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1});
  }
}
protected class MFFloat13 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.570796f});
  }
}
protected class MFColor14 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.5f,0.7f,0f,0.4f,0.7f,0.6f,0.5f,0.7f});
  }
}
protected class MFFloat15 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.309f,1.570796f});
  }
}
protected class MFColor16 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.5f,0.8f,0f,0.6f,0.7f,0.6f,0.6f,0.7f});
  }
}
}

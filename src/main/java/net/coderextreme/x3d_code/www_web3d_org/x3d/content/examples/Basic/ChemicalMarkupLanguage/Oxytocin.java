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
public class Oxytocin {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Oxytocin().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Oxytocin.new.json");
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
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Oxytocin.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Autogenerated version of Oxytocin.x3d scene produced from Oxytocin.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new metaObject().setName("created").setContent("24 November 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("Oxytocin.xml"))
        .addMeta(new metaObject().setName("CML version").setContent("1.0"))
        .addMeta(new metaObject().setName("reference").setContent("CML sources http://www.xml-cml.org"))
        .addMeta(new metaObject().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new metaObject().setName("reference").setContent("http://webbook.nist.gov/chemistry"))
        .addMeta(new metaObject().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new metaObject().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Oxytocin.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Oxytocin.x3d"))
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
        .addChild(new ViewpointObject().setDescription("Inspect Oxytocin").setPosition(new float[] {0f,2f,20f}))
        .addComments(new CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved."))
        .addComments(new CommentsBlock("type=\"3D\" <date day=\"23\" month=\"11\" year=\"1995\"/>"))
        .addChild(new TransformObject().setDEF("infogroupa").setTranslation(new float[] {-8f,2f,-4f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,6f,0f})
            .addChild(new ViewpointObject().setDescription("title billboard").setPosition(new float[] {6f,-2f,10f}))
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("title_text"))))
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a1")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Carbon").setDEF("a2")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("Carbon").setDEF("a3")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("Carbon").setDEF("a4")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("Carbon").setDEF("a5")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("Carbon").setDEF("a6")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("Carbon").setDEF("a7")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("Oxygen").setDEF("a8")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("Carbon").setDEF("a9")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a10")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("Oxygen").setDEF("a11")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a12")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("Carbon").setDEF("a13")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("Carbon").setDEF("a14")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("Carbon").setDEF("a15")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("Sulphur").setDEF("a16")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("Carbon").setDEF("a17")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("Carbon").setDEF("a18")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("Carbon").setDEF("a19")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("Oxygen").setDEF("a20")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("Sulphur").setDEF("a21")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a22")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("Oxygen").setDEF("a23")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("Carbon").setDEF("a24")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a25")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("Carbon").setDEF("a26")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("Carbon").setDEF("a27")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("Carbon").setDEF("a28")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("Carbon").setDEF("a29")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("Carbon").setDEF("a30")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("Carbon").setDEF("a31")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("Carbon").setDEF("a32")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("Carbon").setDEF("a33")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("Carbon").setDEF("a34")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("Carbon").setDEF("a35")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("Oxygen").setDEF("a36")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a37")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("Oxygen").setDEF("a38")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("Carbon").setDEF("a39")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a40")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a41")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("Oxygen").setDEF("a42")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a43")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("Carbon").setDEF("a44")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a45")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("Oxygen").setDEF("a46")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("Carbon").setDEF("a47")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("Carbon").setDEF("a48")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("Carbon").setDEF("a49")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("Carbon").setDEF("a50")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("Oxygen").setDEF("a51")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("Carbon").setDEF("a52")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("Carbon").setDEF("a53")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("Carbon").setDEF("a54")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a55")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance56 = new ProtoInstanceObject().setName("Carbon").setDEF("a56")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance57 = new ProtoInstanceObject().setName("Nitrogen").setDEF("a57")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance58 = new ProtoInstanceObject().setName("Oxygen").setDEF("a58")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance59 = new ProtoInstanceObject().setName("Carbon").setDEF("a59")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance60 = new ProtoInstanceObject().setName("Oxygen").setDEF("a60")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance61 = new ProtoInstanceObject().setName("Carbon").setDEF("a61")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance62 = new ProtoInstanceObject().setName("Carbon").setDEF("a62")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance63 = new ProtoInstanceObject().setName("Carbon").setDEF("a63")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance64 = new ProtoInstanceObject().setName("Carbon").setDEF("a64")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance65 = new ProtoInstanceObject().setName("Carbon").setDEF("a65")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance66 = new ProtoInstanceObject().setName("Carbon").setDEF("a66")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance67 = new ProtoInstanceObject().setName("Carbon").setDEF("a67")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance68 = new ProtoInstanceObject().setName("Carbon").setDEF("a68")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance69 = new ProtoInstanceObject().setName("Oxygen").setDEF("a69"))))
        .addChild(new GroupObject()
          .addChild(ProtoInstance70 = new ProtoInstanceObject().setName("line").setDEF("b1"))
          .addChild(ProtoInstance71 = new ProtoInstanceObject().setName("line").setDEF("b2"))
          .addChild(ProtoInstance72 = new ProtoInstanceObject().setName("line").setDEF("b3"))
          .addChild(ProtoInstance73 = new ProtoInstanceObject().setName("line").setDEF("b4"))
          .addChild(ProtoInstance74 = new ProtoInstanceObject().setName("line").setDEF("b5"))
          .addChild(ProtoInstance75 = new ProtoInstanceObject().setName("line").setDEF("b6"))
          .addChild(ProtoInstance76 = new ProtoInstanceObject().setName("line").setDEF("b7"))
          .addChild(ProtoInstance77 = new ProtoInstanceObject().setName("line").setDEF("b7_2"))
          .addChild(ProtoInstance78 = new ProtoInstanceObject().setName("line").setDEF("b8"))
          .addChild(ProtoInstance79 = new ProtoInstanceObject().setName("line").setDEF("b9"))
          .addChild(ProtoInstance80 = new ProtoInstanceObject().setName("line").setDEF("b10"))
          .addChild(ProtoInstance81 = new ProtoInstanceObject().setName("line").setDEF("b10_2"))
          .addChild(ProtoInstance82 = new ProtoInstanceObject().setName("line").setDEF("b11"))
          .addChild(ProtoInstance83 = new ProtoInstanceObject().setName("line").setDEF("b12"))
          .addChild(ProtoInstance84 = new ProtoInstanceObject().setName("line").setDEF("b13"))
          .addChild(ProtoInstance85 = new ProtoInstanceObject().setName("line").setDEF("b14"))
          .addChild(ProtoInstance86 = new ProtoInstanceObject().setName("line").setDEF("b15"))
          .addChild(ProtoInstance87 = new ProtoInstanceObject().setName("line").setDEF("b16"))
          .addChild(ProtoInstance88 = new ProtoInstanceObject().setName("line").setDEF("b17"))
          .addChild(ProtoInstance89 = new ProtoInstanceObject().setName("line").setDEF("b18"))
          .addChild(ProtoInstance90 = new ProtoInstanceObject().setName("line").setDEF("b19"))
          .addChild(ProtoInstance91 = new ProtoInstanceObject().setName("line").setDEF("b19_2"))
          .addChild(ProtoInstance92 = new ProtoInstanceObject().setName("line").setDEF("b20"))
          .addChild(ProtoInstance93 = new ProtoInstanceObject().setName("line").setDEF("b21"))
          .addChild(ProtoInstance94 = new ProtoInstanceObject().setName("line").setDEF("b22"))
          .addChild(ProtoInstance95 = new ProtoInstanceObject().setName("line").setDEF("b22_2"))
          .addChild(ProtoInstance96 = new ProtoInstanceObject().setName("line").setDEF("b23"))
          .addChild(ProtoInstance97 = new ProtoInstanceObject().setName("line").setDEF("b24"))
          .addChild(ProtoInstance98 = new ProtoInstanceObject().setName("line").setDEF("b25"))
          .addChild(ProtoInstance99 = new ProtoInstanceObject().setName("line").setDEF("b26"))
          .addChild(ProtoInstance100 = new ProtoInstanceObject().setName("line").setDEF("b27"))
          .addChild(ProtoInstance101 = new ProtoInstanceObject().setName("line").setDEF("b28"))
          .addChild(ProtoInstance102 = new ProtoInstanceObject().setName("line").setDEF("b29"))
          .addChild(ProtoInstance103 = new ProtoInstanceObject().setName("line").setDEF("b30"))
          .addChild(ProtoInstance104 = new ProtoInstanceObject().setName("line").setDEF("b31"))
          .addChild(ProtoInstance105 = new ProtoInstanceObject().setName("line").setDEF("b32"))
          .addChild(ProtoInstance106 = new ProtoInstanceObject().setName("line").setDEF("b33"))
          .addChild(ProtoInstance107 = new ProtoInstanceObject().setName("line").setDEF("b34"))
          .addChild(ProtoInstance108 = new ProtoInstanceObject().setName("line").setDEF("b35"))
          .addChild(ProtoInstance109 = new ProtoInstanceObject().setName("line").setDEF("b35_2"))
          .addChild(ProtoInstance110 = new ProtoInstanceObject().setName("line").setDEF("b36"))
          .addChild(ProtoInstance111 = new ProtoInstanceObject().setName("line").setDEF("b37"))
          .addChild(ProtoInstance112 = new ProtoInstanceObject().setName("line").setDEF("b37_2"))
          .addChild(ProtoInstance113 = new ProtoInstanceObject().setName("line").setDEF("b38"))
          .addChild(ProtoInstance114 = new ProtoInstanceObject().setName("line").setDEF("b39"))
          .addChild(ProtoInstance115 = new ProtoInstanceObject().setName("line").setDEF("b40"))
          .addChild(ProtoInstance116 = new ProtoInstanceObject().setName("line").setDEF("b41"))
          .addChild(ProtoInstance117 = new ProtoInstanceObject().setName("line").setDEF("b41_2"))
          .addChild(ProtoInstance118 = new ProtoInstanceObject().setName("line").setDEF("b42"))
          .addChild(ProtoInstance119 = new ProtoInstanceObject().setName("line").setDEF("b43"))
          .addChild(ProtoInstance120 = new ProtoInstanceObject().setName("line").setDEF("b44"))
          .addChild(ProtoInstance121 = new ProtoInstanceObject().setName("line").setDEF("b45"))
          .addChild(ProtoInstance122 = new ProtoInstanceObject().setName("line").setDEF("b45_2"))
          .addChild(ProtoInstance123 = new ProtoInstanceObject().setName("line").setDEF("b46"))
          .addChild(ProtoInstance124 = new ProtoInstanceObject().setName("line").setDEF("b47"))
          .addChild(ProtoInstance125 = new ProtoInstanceObject().setName("line").setDEF("b48"))
          .addChild(ProtoInstance126 = new ProtoInstanceObject().setName("line").setDEF("b49"))
          .addChild(ProtoInstance127 = new ProtoInstanceObject().setName("line").setDEF("b50"))
          .addChild(ProtoInstance128 = new ProtoInstanceObject().setName("line").setDEF("b50_2"))
          .addChild(ProtoInstance129 = new ProtoInstanceObject().setName("line").setDEF("b51"))
          .addChild(ProtoInstance130 = new ProtoInstanceObject().setName("line").setDEF("b52"))
          .addChild(ProtoInstance131 = new ProtoInstanceObject().setName("line").setDEF("b53"))
          .addChild(ProtoInstance132 = new ProtoInstanceObject().setName("line").setDEF("b54"))
          .addChild(ProtoInstance133 = new ProtoInstanceObject().setName("line").setDEF("b55"))
          .addChild(ProtoInstance134 = new ProtoInstanceObject().setName("line").setDEF("b56"))
          .addChild(ProtoInstance135 = new ProtoInstanceObject().setName("line").setDEF("b57"))
          .addChild(ProtoInstance136 = new ProtoInstanceObject().setName("line").setDEF("b57_2"))
          .addChild(ProtoInstance137 = new ProtoInstanceObject().setName("line").setDEF("b58"))
          .addChild(ProtoInstance138 = new ProtoInstanceObject().setName("line").setDEF("b59"))
          .addChild(ProtoInstance139 = new ProtoInstanceObject().setName("line").setDEF("b59_2"))
          .addChild(ProtoInstance140 = new ProtoInstanceObject().setName("line").setDEF("b60"))
          .addChild(ProtoInstance141 = new ProtoInstanceObject().setName("line").setDEF("b61"))
          .addChild(ProtoInstance142 = new ProtoInstanceObject().setName("line").setDEF("b62"))
          .addChild(ProtoInstance143 = new ProtoInstanceObject().setName("line").setDEF("b63"))
          .addChild(ProtoInstance144 = new ProtoInstanceObject().setName("line").setDEF("b63_2"))
          .addChild(ProtoInstance145 = new ProtoInstanceObject().setName("line").setDEF("b64"))
          .addChild(ProtoInstance146 = new ProtoInstanceObject().setName("line").setDEF("b65"))
          .addChild(ProtoInstance147 = new ProtoInstanceObject().setName("line").setDEF("b65_2"))
          .addChild(ProtoInstance148 = new ProtoInstanceObject().setName("line").setDEF("b66"))
          .addChild(ProtoInstance149 = new ProtoInstanceObject().setName("line").setDEF("b67"))
          .addChild(ProtoInstance150 = new ProtoInstanceObject().setName("line").setDEF("b68"))
          .addChild(ProtoInstance151 = new ProtoInstanceObject().setName("line").setDEF("b69"))
          .addChild(ProtoInstance152 = new ProtoInstanceObject().setName("line").setDEF("b70"))
          .addChild(ProtoInstance153 = new ProtoInstanceObject().setName("line").setDEF("b71"))
          .addChild(ProtoInstance154 = new ProtoInstanceObject().setName("line").setDEF("b71_2"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"Oxytocin: \""));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.0514 1.8507 0"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.601 1.9845 0"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.2821 0.4905 0"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.4159 3.2554 0"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.649 0.8473 0"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.9355 3.5341 0"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.2341 0.4905 0"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.0514 -0.8362 0"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.5753 4.3034 0"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.1764 1.1595 0"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.1585 -0.6132 0"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.4905 2.0402 0"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.4905 -1.0257 0"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.2243 0.0223 0"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.2041 3.3892 0"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.1706 -2.4081 0"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.7071 0.3568 0"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("position").setValue("-6.7226 -1.4382 0"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.3078 4.4929 0"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.0446 4.3368 0"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.2855 -3.5118 0"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.7662 -0.7804 0"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("position").setValue("-9.2088 1.8507 0"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.7483 -2.5753 0"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.6902 5.1841 0"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.3936 5.7416 0"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.6568 -4.2253 0"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("position").setValue("-11.2825 -0.4459 0"));
ProtoInstance29
              .addFieldValue(new fieldValueObject().setName("position").setValue("-7.2243 -4.0693 0"));
ProtoInstance30
              .addFieldValue(new fieldValueObject().setName("position").setValue("-8.7963 -2.4081 0"));
ProtoInstance31
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.2064 5.4405 0"));
ProtoInstance32
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.0291 7.1797 0"));
ProtoInstance33
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.1841 -4.4818 0"));
ProtoInstance34
              .addFieldValue(new fieldValueObject().setName("position").setValue("-12.3304 -1.6054 0"));
ProtoInstance35
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.7561 5.1841 0"));
ProtoInstance36
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.2399 6.9791 0"));
ProtoInstance37
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.126 8.4507 0"));
ProtoInstance38
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.5787 7.3135 0"));
ProtoInstance39
              .addFieldValue(new fieldValueObject().setName("position").setValue("6.7226 -4.2253 0"));
ProtoInstance40
              .addFieldValue(new fieldValueObject().setName("position").setValue("5.1841 -6.0203 0"));
ProtoInstance41
              .addFieldValue(new fieldValueObject().setName("position").setValue("-13.8466 -1.2709 0"));
ProtoInstance42
              .addFieldValue(new fieldValueObject().setName("position").setValue("-11.8622 -3.0659 0"));
ProtoInstance43
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.1385 4.4706 0"));
ProtoInstance44
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.2243 6.6781 0"));
ProtoInstance45
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.1051 -3.5341 0"));
ProtoInstance46
              .addFieldValue(new fieldValueObject().setName("position").setValue("7.202 -5.7193 0"));
ProtoInstance47
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.2422 3.3669 0"));
ProtoInstance48
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.7406 6.9791 0"));
ProtoInstance49
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.2088 -2.4304 0"));
ProtoInstance50
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.9335 1.9845 0"));
ProtoInstance51
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.4797 4.3034 0"));
ProtoInstance52
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.2422 8.4507 0"));
ProtoInstance53
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.4797 -3.3446 0"));
ProtoInstance54
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.9335 -1.0591 0"));
ProtoInstance55
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.1787 0.4682 0"));
ProtoInstance56
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.4274 2.4862 0"));
ProtoInstance57
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.7585 8.774 0"));
ProtoInstance58
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.2166 9.6324 0"));
ProtoInstance59
              .addFieldValue(new fieldValueObject().setName("position").setValue("10.3237 -4.8943 0"));
ProtoInstance60
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.4274 -1.5274 0"));
ProtoInstance61
              .addFieldValue(new fieldValueObject().setName("position").setValue("12.5534 1.427 0"));
ProtoInstance62
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.7507 4.0024 0"));
ProtoInstance63
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.8855 -5.5297 0"));
ProtoInstance64
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.5612 -5.8085 0"));
ProtoInstance65
              .addFieldValue(new fieldValueObject().setName("position").setValue("14.0473 1.9064 0"));
ProtoInstance66
              .addFieldValue(new fieldValueObject().setName("position").setValue("8.7183 -7.0794 0"));
ProtoInstance67
              .addFieldValue(new fieldValueObject().setName("position").setValue("11.3939 -7.347 0"));
ProtoInstance68
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.9892 -7.9824 0"));
ProtoInstance69
              .addFieldValue(new fieldValueObject().setName("position").setValue("9.7885 -9.5321 0"));
ProtoInstance70
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.0514 1.8507 0 -3.601 1.9845 0"));
ProtoInstance71
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.0514 1.8507 0 -1.2821 0.4905 0"));
ProtoInstance72
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.0514 1.8507 0 -1.4159 3.2554 0"));
ProtoInstance73
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.601 1.9845 0 -4.649 0.8473 0"));
ProtoInstance74
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.601 1.9845 0 -3.9355 3.5341 0"));
ProtoInstance75
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.2821 0.4905 0 0.2341 0.4905 0"));
ProtoInstance76
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.3021 0.4905 0 -2.0714 -0.8362 0"));
ProtoInstance77
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.2621 0.4905 0 -2.0314 -0.8362 0"));
ProtoInstance78
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.4159 3.2554 0 -2.5753 4.3034 0"));
ProtoInstance79
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.649 0.8473 0 -6.1764 1.1595 0"));
ProtoInstance80
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.669 0.8473 0 -4.1785 -0.6132 0"));
ProtoInstance81
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.6290000000000004 0.8473 0 -4.1385000000000005 -0.6132 0"));
ProtoInstance82
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 2.0402 0"));
ProtoInstance83
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.2341 0.4905 0 0.4905 -1.0257 0"));
ProtoInstance84
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.1764 1.1595 0 -7.2243 0.0223 0"));
ProtoInstance85
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.4905 2.0402 0 1.2041 3.3892 0"));
ProtoInstance86
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.4905 -1.0257 0 1.1706 -2.4081 0"));
ProtoInstance87
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.2243 0.0223 0 -8.7071 0.3568 0"));
ProtoInstance88
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.2243 0.0223 0 -6.7226 -1.4382 0"));
ProtoInstance89
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.2041 3.3892 0 2.3078 4.4929 0"));
ProtoInstance90
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.1841 3.3892 0 -0.0646 4.3368 0"));
ProtoInstance91
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.2241 3.3892 0 -0.0246 4.3368 0"));
ProtoInstance92
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.1706 -2.4081 0 2.2855 -3.5118 0"));
ProtoInstance93
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.7071 0.3568 0 -9.7662 -0.7804 0"));
ProtoInstance94
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.7271 0.3568 0 -9.2288 1.8507 0"));
ProtoInstance95
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-8.687100000000001 0.3568 0 -9.1888 1.8507 0"));
ProtoInstance96
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-6.7226 -1.4382 0 -7.7483 -2.5753 0"));
ProtoInstance97
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.3078 4.4929 0 3.6902 5.1841 0"));
ProtoInstance98
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.3078 4.4929 0 1.3936 5.7416 0"));
ProtoInstance99
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.2855 -3.5118 0 3.6568 -4.2253 0"));
ProtoInstance100
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-9.7662 -0.7804 0 -11.2825 -0.4459 0"));
ProtoInstance101
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.7483 -2.5753 0 -7.2243 -4.0693 0"));
ProtoInstance102
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-7.7483 -2.5753 0 -8.7963 -2.4081 0"));
ProtoInstance103
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.6902 5.1841 0 5.2064 5.4405 0"));
ProtoInstance104
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.3936 5.7416 0 2.0291 7.1797 0"));
ProtoInstance105
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.6568 -4.2253 0 5.1841 -4.4818 0"));
ProtoInstance106
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-11.2825 -0.4459 0 -12.3304 -1.6054 0"));
ProtoInstance107
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.2064 5.4405 0 6.7561 5.1841 0"));
ProtoInstance108
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.186400000000001 5.4405 0 5.2199 6.9791 0"));
ProtoInstance109
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.2264 5.4405 0 5.259899999999999 6.9791 0"));
ProtoInstance110
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.0291 7.1797 0 1.126 8.4507 0"));
ProtoInstance111
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.0091 7.1797 0 3.5587 7.3135 0"));
ProtoInstance112
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.0491 7.1797 0 3.5987 7.3135 0"));
ProtoInstance113
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1841 -4.4818 0 6.7226 -4.2253 0"));
ProtoInstance114
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("5.1841 -4.4818 0 5.1841 -6.0203 0"));
ProtoInstance115
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.3304 -1.6054 0 -13.8466 -1.2709 0"));
ProtoInstance116
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.350399999999999 -1.6054 0 -11.8822 -3.0659 0"));
ProtoInstance117
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-12.3104 -1.6054 0 -11.8422 -3.0659 0"));
ProtoInstance118
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.7561 5.1841 0 8.1385 4.4706 0"));
ProtoInstance119
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.7561 5.1841 0 7.2243 6.6781 0"));
ProtoInstance120
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.7226 -4.2253 0 8.1051 -3.5341 0"));
ProtoInstance121
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.7026 -4.2253 0 7.182 -5.7193 0"));
ProtoInstance122
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("6.7425999999999995 -4.2253 0 7.2219999999999995 -5.7193 0"));
ProtoInstance123
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.1385 4.4706 0 9.2422 3.3669 0"));
ProtoInstance124
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("7.2243 6.6781 0 8.7406 6.9791 0"));
ProtoInstance125
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.1051 -3.5341 0 9.2088 -2.4304 0"));
ProtoInstance126
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2422 3.3669 0 9.9335 1.9845 0"));
ProtoInstance127
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2222 3.3669 0 10.4597 4.3034 0"));
ProtoInstance128
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2622 3.3669 0 10.499699999999999 4.3034 0"));
ProtoInstance129
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.7406 6.9791 0 9.2422 8.4507 0"));
ProtoInstance130
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2088 -2.4304 0 10.4797 -3.3446 0"));
ProtoInstance131
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2088 -2.4304 0 9.9335 -1.0591 0"));
ProtoInstance132
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9335 1.9845 0 10.1787 0.4682 0"));
ProtoInstance133
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9335 1.9845 0 11.4274 2.4862 0"));
ProtoInstance134
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2422 8.4507 0 10.7585 8.774 0"));
ProtoInstance135
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2222 8.4507 0 8.1966 9.6324 0"));
ProtoInstance136
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.2622 8.4507 0 8.2366 9.6324 0"));
ProtoInstance137
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.4797 -3.3446 0 10.3237 -4.8943 0"));
ProtoInstance138
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9135 -1.0591 0 11.4074 -1.5274 0"));
ProtoInstance139
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9535 -1.0591 0 11.4474 -1.5274 0"));
ProtoInstance140
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.4274 2.4862 0 12.5534 1.427 0"));
ProtoInstance141
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.4274 2.4862 0 11.7507 4.0024 0"));
ProtoInstance142
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.3237 -4.8943 0 8.8855 -5.5297 0"));
ProtoInstance143
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.303700000000001 -4.8943 0 11.5412 -5.8085 0"));
ProtoInstance144
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("10.3437 -4.8943 0 11.581199999999999 -5.8085 0"));
ProtoInstance145
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("12.5534 1.427 0 14.0473 1.9064 0"));
ProtoInstance146
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.8655 -5.5297 0 8.6983 -7.0794 0"));
ProtoInstance147
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.9055 -5.5297 0 8.738299999999999 -7.0794 0"));
ProtoInstance148
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.5612 -5.8085 0 11.3939 -7.347 0"));
ProtoInstance149
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("8.7183 -7.0794 0 9.9892 -7.9824 0"));
ProtoInstance150
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9892 -7.9824 0 9.7885 -9.5321 0"));
ProtoInstance151
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.9355 3.5341 0 -2.5753 4.3034 0"));
ProtoInstance152
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("9.9335 -1.0591 0 10.1787 0.4682 0"));
ProtoInstance153
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.3739 -7.347 0 9.9692 -7.9824 0"));
ProtoInstance154
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("11.4139 -7.347 0 10.0092 -7.9824 0"));
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

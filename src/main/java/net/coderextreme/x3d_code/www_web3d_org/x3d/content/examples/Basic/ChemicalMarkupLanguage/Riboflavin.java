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
public class Riboflavin {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Riboflavin().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Riboflavin.new.json");
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
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Riboflavin.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Autogenerated version of Riboflavin.x3d scene produced from Riboflavin.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new metaObject().setName("created").setContent("24 November 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("Riboflavin.xml"))
        .addMeta(new metaObject().setName("CML version").setContent("1.0"))
        .addMeta(new metaObject().setName("reference").setContent("CML sources http://www.xml-cml.org"))
        .addMeta(new metaObject().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new metaObject().setName("reference").setContent("http://webbook.nist.gov/chemistry"))
        .addMeta(new metaObject().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new metaObject().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Riboflavin.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Riboflavin.x3d"))
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
        .addChild(new ViewpointObject().setDescription("Inspect Riboflavin").setPosition(new float[] {0f,2f,20f}))
        .addComments(new CommentsBlock("CML document - riboflavin - karne - 7/8/00"))
        .addComments(new CommentsBlock("file converted from: MDL .mol"))
        .addChild(new TransformObject().setDEF("infogroupa").setTranslation(new float[] {-8f,2f,-4f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,6f,0f})
            .addChild(new ViewpointObject().setDescription("title billboard").setPosition(new float[] {6f,-2f,10f}))
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("title_text"))))
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_1")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_2")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_3")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_4")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_5")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_6")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_7")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_8")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("Nitrogen").setDEF("riboflavin_karne_a_9")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_10")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("Nitrogen").setDEF("riboflavin_karne_a_11")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_12")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("Nitrogen").setDEF("riboflavin_karne_a_13")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_14")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_15")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("Nitrogen").setDEF("riboflavin_karne_a_16")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_17")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_18")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_19")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_20")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_21")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("Carbon").setDEF("riboflavin_karne_a_22")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_23")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_24")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_25")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_26")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_27")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_28")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_29")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_30")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_31")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_32")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_33")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_34")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_35")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_36")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_37")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_38")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_39")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_40")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_41")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_42")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_43")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_44")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_45")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("Oxygen").setDEF("riboflavin_karne_a_46")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("Hydrogen").setDEF("riboflavin_karne_a_47"))))
        .addChild(new GroupObject()
          .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_1"))
          .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_2"))
          .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_3"))
          .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_4"))
          .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_5"))
          .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_6"))
          .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_7"))
          .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_7_2"))
          .addChild(ProtoInstance56 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_8"))
          .addChild(ProtoInstance57 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_9"))
          .addChild(ProtoInstance58 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_9_2"))
          .addChild(ProtoInstance59 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_10"))
          .addChild(ProtoInstance60 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_11"))
          .addChild(ProtoInstance61 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_11_2"))
          .addChild(ProtoInstance62 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_12"))
          .addChild(ProtoInstance63 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_13"))
          .addChild(ProtoInstance64 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_14"))
          .addChild(ProtoInstance65 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_15"))
          .addChild(ProtoInstance66 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_16"))
          .addChild(ProtoInstance67 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_17"))
          .addChild(ProtoInstance68 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_17_2"))
          .addChild(ProtoInstance69 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_18"))
          .addChild(ProtoInstance70 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_18_2"))
          .addChild(ProtoInstance71 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_19"))
          .addChild(ProtoInstance72 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_20"))
          .addChild(ProtoInstance73 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_21"))
          .addChild(ProtoInstance74 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_22"))
          .addChild(ProtoInstance75 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_23"))
          .addChild(ProtoInstance76 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_23_2"))
          .addChild(ProtoInstance77 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_24"))
          .addChild(ProtoInstance78 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_25"))
          .addChild(ProtoInstance79 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_26"))
          .addChild(ProtoInstance80 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_27"))
          .addChild(ProtoInstance81 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_28"))
          .addChild(ProtoInstance82 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_29"))
          .addChild(ProtoInstance83 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_30"))
          .addChild(ProtoInstance84 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_31"))
          .addChild(ProtoInstance85 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_32"))
          .addChild(ProtoInstance86 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_33"))
          .addChild(ProtoInstance87 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_34"))
          .addChild(ProtoInstance88 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_35"))
          .addChild(ProtoInstance89 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_36"))
          .addChild(ProtoInstance90 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_37"))
          .addChild(ProtoInstance91 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_38"))
          .addChild(ProtoInstance92 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_39"))
          .addChild(ProtoInstance93 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_40"))
          .addChild(ProtoInstance94 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_41"))
          .addChild(ProtoInstance95 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_41_2"))
          .addChild(ProtoInstance96 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_42"))
          .addChild(ProtoInstance97 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_43"))
          .addChild(ProtoInstance98 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_44"))
          .addChild(ProtoInstance99 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_45"))
          .addChild(ProtoInstance100 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_46"))
          .addChild(ProtoInstance101 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_47"))
          .addChild(ProtoInstance102 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_48"))
          .addChild(ProtoInstance103 = new ProtoInstanceObject().setName("line").setDEF("riboflavin_karne_b_49"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"Riboflavin: \""));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.72 -3.788 -0.212"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.436 -0.848 0.256"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.912 -2.612 1.444"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.52 4.612 -0.416"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.876 3.12 -0.536"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.172 2.224 0.516"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.228 0.712 0.188"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.732 -0.164 1.364"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.692 -2.156 1.204"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.816 -3.044 1.176"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.54 -4.356 0.828"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.236 -4.764 0.532"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.024 -4.256 0.316"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.208 -3.86 0.584"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.5 -2.528 0.928"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.452 -1.552 0.984"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.968 -1.256 0.596"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.828 -2.08 0.644"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.96 -3.448 0.34"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.232 -3.968 0.056"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.38 -3.16 0.056"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.244 -1.776 0.3"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.656 -4.896 -0.268"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.14 -3.432 -1.18"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.448 -3.54 0.592"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.04 -1.008 -0.66"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.136 0.22 0.252"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("position").setValue("-5.108 -0.996 1.132"));
ProtoInstance29
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.204 5.22 -1.048"));
ProtoInstance30
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.632 4.984 0.628"));
ProtoInstance31
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.196 4.816 -0.88"));
ProtoInstance32
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.48 -0.132 2.188"));
ProtoInstance33
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.168 0.304 1.808"));
ProtoInstance34
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.884 -0.18 0.792"));
ProtoInstance35
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.336 -5.044 -0.168"));
ProtoInstance36
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.576 0.528 -0.696"));
ProtoInstance37
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.56 0.356 -0.148"));
ProtoInstance38
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.756 2.42 1.796"));
ProtoInstance39
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.096 2.512 0.564"));
ProtoInstance40
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.58 2.768 -1.556"));
ProtoInstance41
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.284 3.028 -0.388"));
ProtoInstance42
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.4 4.776 -0.144"));
ProtoInstance43
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.652 2.704 -1.196"));
ProtoInstance44
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.42 3.22 2.18"));
ProtoInstance45
              .addFieldValue(new fieldValueObject().setName("position").setValue("3.124 0.6 0.572"));
ProtoInstance46
              .addFieldValue(new fieldValueObject().setName("position").setValue("2 -5.916 0.228"));
ProtoInstance47
              .addFieldValue(new fieldValueObject().setName("position").setValue("4.312 -5.04 0.788"));
ProtoInstance48
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.284 3.028 -0.388 3.652 2.704 -1.196"));
ProtoInstance49
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.756 2.42 1.796 1.42 3.22 2.18"));
ProtoInstance50
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.56 0.356 -0.148 3.124 0.6 0.572"));
ProtoInstance51
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.196 4.816 -0.88 -0.4 4.776 -0.144"));
ProtoInstance52
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-3.38 -3.16 0.056 -3.244 -1.776 0.3"));
ProtoInstance53
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.232 -3.968 0.056 -2.336 -5.044 -0.168"));
ProtoInstance54
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.2520000000000002 -3.968 0.056 -3.4 -3.16 0.056"));
ProtoInstance55
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.212 -3.968 0.056 -3.36 -3.16 0.056"));
ProtoInstance56
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.96 -3.448 0.34 -2.232 -3.968 0.056"));
ProtoInstance57
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.848 -2.08 0.644 -0.98 -3.448 0.34"));
ProtoInstance58
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.8079999999999999 -2.08 0.644 -0.94 -3.448 0.34"));
ProtoInstance59
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.968 -1.256 0.596 -1.884 -0.18 0.792"));
ProtoInstance60
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.988 -1.256 0.596 -3.2640000000000002 -1.776 0.3"));
ProtoInstance61
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.948 -1.256 0.596 -3.224 -1.776 0.3"));
ProtoInstance62
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.968 -1.256 0.596 -0.828 -2.08 0.644"));
ProtoInstance63
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.452 -1.552 0.984 -0.828 -2.08 0.644"));
ProtoInstance64
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.5 -2.528 0.928 0.452 -1.552 0.984"));
ProtoInstance65
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.208 -3.86 0.584 1.5 -2.528 0.928"));
ProtoInstance66
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.024 -4.256 0.316 -0.96 -3.448 0.34"));
ProtoInstance67
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.004 -4.256 0.316 1.188 -3.86 0.584"));
ProtoInstance68
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.044 -4.256 0.316 1.228 -3.86 0.584"));
ProtoInstance69
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.216 -4.764 0.532 1.98 -5.916 0.228"));
ProtoInstance70
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.2560000000000002 -4.764 0.532 2.02 -5.916 0.228"));
ProtoInstance71
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.236 -4.764 0.532 1.208 -3.86 0.584"));
ProtoInstance72
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.54 -4.356 0.828 4.312 -5.04 0.788"));
ProtoInstance73
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.54 -4.356 0.828 2.236 -4.764 0.532"));
ProtoInstance74
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("3.816 -3.044 1.176 3.54 -4.356 0.828"));
ProtoInstance75
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.672 -2.156 1.204 1.48 -2.528 0.928"));
ProtoInstance76
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.712 -2.156 1.204 1.52 -2.528 0.928"));
ProtoInstance77
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("2.692 -2.156 1.204 3.816 -3.044 1.176"));
ProtoInstance78
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.732 -0.164 1.364 -0.168 0.304 1.808"));
ProtoInstance79
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.732 -0.164 1.364 1.48 -0.132 2.188"));
ProtoInstance80
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.732 -0.164 1.364 0.452 -1.552 0.984"));
ProtoInstance81
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.228 0.712 0.188 2.56 0.356 -0.148"));
ProtoInstance82
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.228 0.712 0.188 0.576 0.528 -0.696"));
ProtoInstance83
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.228 0.712 0.188 0.732 -0.164 1.364"));
ProtoInstance84
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.172 2.224 0.516 0.096 2.512 0.564"));
ProtoInstance85
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.172 2.224 0.516 1.756 2.42 1.796"));
ProtoInstance86
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.172 2.224 0.516 1.228 0.712 0.188"));
ProtoInstance87
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.876 3.12 -0.536 3.284 3.028 -0.388"));
ProtoInstance88
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.876 3.12 -0.536 1.58 2.768 -1.556"));
ProtoInstance89
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.876 3.12 -0.536 1.172 2.224 0.516"));
ProtoInstance90
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.52 4.612 -0.416 0.196 4.816 -0.88"));
ProtoInstance91
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.52 4.612 -0.416 1.632 4.984 0.628"));
ProtoInstance92
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.52 4.612 -0.416 2.204 5.22 -1.048"));
ProtoInstance93
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.52 4.612 -0.416 1.876 3.12 -0.536"));
ProtoInstance94
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.892 -2.612 1.444 3.796 -3.044 1.176"));
ProtoInstance95
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("4.9319999999999995 -2.612 1.444 3.836 -3.044 1.176"));
ProtoInstance96
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.436 -0.848 0.256 -5.108 -0.996 1.132"));
ProtoInstance97
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.436 -0.848 0.256 -4.136 0.22 0.252"));
ProtoInstance98
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.436 -0.848 0.256 -5.04 -1.008 -0.66"));
ProtoInstance99
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.436 -0.848 0.256 -3.244 -1.776 0.3"));
ProtoInstance100
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.72 -3.788 -0.212 -5.448 -3.54 0.592"));
ProtoInstance101
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.72 -3.788 -0.212 -5.14 -3.432 -1.18"));
ProtoInstance102
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.72 -3.788 -0.212 -4.656 -4.896 -0.268"));
ProtoInstance103
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.72 -3.788 -0.212 -3.38 -3.16 0.056"));
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

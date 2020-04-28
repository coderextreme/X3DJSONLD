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
public class Caffeine {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Caffeine().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Caffeine.new.json");
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
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("Caffeine.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Autogenerated version of Caffeine.x3d scene produced from Caffeine.xml Chemical Markup Language (CML) version 1.0 source file."))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas F. Polys"))
        .addMeta(new metaObject().setName("created").setContent("24 November 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("reference").setContent("Caffeine.xml"))
        .addMeta(new metaObject().setName("CML version").setContent("1.0"))
        .addMeta(new metaObject().setName("reference").setContent("CML sources http://www.xml-cml.org"))
        .addMeta(new metaObject().setName("reference").setContent("JUMBO Chemical Format Conversion Tool"))
        .addMeta(new metaObject().setName("reference").setContent("http://webbook.nist.gov/chemistry"))
        .addMeta(new metaObject().setName("reference").setContent("Polys.StylesheetTransformationsInteractiveVisualization.Web3d2003Symposium.pdf"))
        .addMeta(new metaObject().setName("reference").setContent("Originally Published in Proceedings of Web3D 2003, ACM Press"))
        .addMeta(new metaObject().setName("generator").setContent("CmlToX3d.xslt"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/ChemicalMarkupLanguage/Caffeine.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Caffeine.x3d"))
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
        .addChild(new ViewpointObject().setDescription("Inspect Caffeine").setPosition(new float[] {0f,2f,20f}))
        .addComments(new CommentsBlock("Copyright by the U.S. Sec. Commerce on behalf of U.S.A. All rights reserved."))
        .addComments(new CommentsBlock("type=\"3D\" <date day=\"23\" month=\"11\" year=\"1995\"/>"))
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
          .addChild(new TransformObject()
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("ano2_text"))))
        .addChild(new GroupObject()
          .addChild(new TransformObject()
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_1")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("Nitrogen").setDEF("caffeine_karne_a_2")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_3")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_4")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_5")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("Nitrogen").setDEF("caffeine_karne_a_6")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("Nitrogen").setDEF("caffeine_karne_a_7")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_8")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("Nitrogen").setDEF("caffeine_karne_a_9")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_10")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("Oxygen").setDEF("caffeine_karne_a_11")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_12")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("Oxygen").setDEF("caffeine_karne_a_13")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance18 = new ProtoInstanceObject().setName("Carbon").setDEF("caffeine_karne_a_14")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance19 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_15")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance20 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_16")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance21 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_17")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance22 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_18")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance23 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_19")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance24 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_20")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance25 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_21")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance26 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_22")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance27 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_23")))
          .addChild(new TransformObject()
            .addChild(ProtoInstance28 = new ProtoInstanceObject().setName("Hydrogen").setDEF("caffeine_karne_a_24"))))
        .addChild(new GroupObject()
          .addChild(ProtoInstance29 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_1"))
          .addChild(ProtoInstance30 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_2"))
          .addChild(ProtoInstance31 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_3"))
          .addChild(ProtoInstance32 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_3_2"))
          .addChild(ProtoInstance33 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_4"))
          .addChild(ProtoInstance34 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_5"))
          .addChild(ProtoInstance35 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_6"))
          .addChild(ProtoInstance36 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_7"))
          .addChild(ProtoInstance37 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_7_2"))
          .addChild(ProtoInstance38 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_8"))
          .addChild(ProtoInstance39 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_8_2"))
          .addChild(ProtoInstance40 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_9"))
          .addChild(ProtoInstance41 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_10"))
          .addChild(ProtoInstance42 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_11"))
          .addChild(ProtoInstance43 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_12"))
          .addChild(ProtoInstance44 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_13"))
          .addChild(ProtoInstance45 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_14"))
          .addChild(ProtoInstance46 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_15"))
          .addChild(ProtoInstance47 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_15_2"))
          .addChild(ProtoInstance48 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_16"))
          .addChild(ProtoInstance49 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_17"))
          .addChild(ProtoInstance50 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_18"))
          .addChild(ProtoInstance51 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_19"))
          .addChild(ProtoInstance52 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_20"))
          .addChild(ProtoInstance53 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_21"))
          .addChild(ProtoInstance54 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_22"))
          .addChild(ProtoInstance55 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_23"))
          .addChild(ProtoInstance56 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_24"))
          .addChild(ProtoInstance57 = new ProtoInstanceObject().setName("line").setDEF("caffeine_karne_b_25"))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"Caffeine: C8 H10 N4 O2\""));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"molecule weight: 194.19\""));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"melting point: 238\""));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"specific gravity: 1.23\""));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("txt").setValue("\"water solubility: 1-5\""));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.8709 -1.0499 0.1718"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.9099 0.2747 0.1062"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.8026 0.9662 -0.1184"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.6411 0.2954 -0.2316"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.6549 -1.0889 -0.1279"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.7352 -1.7187 0.0624"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.6052 0.7432 -0.4434"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.2863 -0.4175 -0.4514"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.5994 -1.5633 -0.2698"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("position").setValue("1.0875 2.0867 -0.6139"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.8349 2.1699 -0.2205"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.2178 0.981 0.2003"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("position").setValue("-3.8944 -1.6746 0.3323"));
ProtoInstance18
              .addFieldValue(new fieldValueObject().setName("position").setValue("-1.6764 -3.1997 0.1458"));
ProtoInstance19
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.3776 -0.4481 -0.6036"));
ProtoInstance20
              .addFieldValue(new fieldValueObject().setName("position").setValue("2.1902 2.0944 -0.7699"));
ProtoInstance21
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.6074 2.5547 -1.5032"));
ProtoInstance22
              .addFieldValue(new fieldValueObject().setName("position").setValue("0.8606 2.6915 0.2934"));
ProtoInstance23
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.0942 2.0097 0.6091"));
ProtoInstance24
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.6699 1.0338 -0.8167"));
ProtoInstance25
              .addFieldValue(new fieldValueObject().setName("position").setValue("-4.9101 0.4518 0.8943"));
ProtoInstance26
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.3049 -3.6334 -0.6659"));
ProtoInstance27
              .addFieldValue(new fieldValueObject().setName("position").setValue("-0.6444 -3.603 0.0359"));
ProtoInstance28
              .addFieldValue(new fieldValueObject().setName("position").setValue("-2.0682 -3.5218 1.1381"));
ProtoInstance29
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8709 -1.0499 0.1718 -2.9099 0.2747 0.1062"));
ProtoInstance30
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8709 -1.0499 0.1718 -1.7352 -1.7187 0.0624"));
ProtoInstance31
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8909 -1.0499 0.1718 -3.9144 -1.6746 0.3323"));
ProtoInstance32
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.8508999999999998 -1.0499 0.1718 -3.8744 -1.6746 0.3323"));
ProtoInstance33
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.9099 0.2747 0.1062 -1.8026 0.9662 -0.1184"));
ProtoInstance34
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-2.9099 0.2747 0.1062 -4.2178 0.981 0.2003"));
ProtoInstance35
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.8026 0.9662 -0.1184 -0.6411 0.2954 -0.2316"));
ProtoInstance36
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.8226 0.9662 -0.1184 -1.8549 2.1699 -0.2205"));
ProtoInstance37
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.7826 0.9662 -0.1184 -1.8149 2.1699 -0.2205"));
ProtoInstance38
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.6611 0.2954 -0.2316 -0.6749 -1.0889 -0.1279"));
ProtoInstance39
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.6211 0.2954 -0.2316 -0.6349 -1.0889 -0.1279"));
ProtoInstance40
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.6411 0.2954 -0.2316 0.6052 0.7432 -0.4434"));
ProtoInstance41
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.6549 -1.0889 -0.1279 -1.7352 -1.7187 0.0624"));
ProtoInstance42
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-0.6549 -1.0889 -0.1279 0.5994 -1.5633 -0.2698"));
ProtoInstance43
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.7352 -1.7187 0.0624 -1.6764 -3.1997 0.1458"));
ProtoInstance44
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.6052 0.7432 -0.4434 1.2863 -0.4175 -0.4514"));
ProtoInstance45
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("0.6052 0.7432 -0.4434 1.0875 2.0867 -0.6139"));
ProtoInstance46
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.2663 -0.4175 -0.4514 0.5794 -1.5633 -0.2698"));
ProtoInstance47
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.3063 -0.4175 -0.4514 0.6194000000000001 -1.5633 -0.2698"));
ProtoInstance48
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.2863 -0.4175 -0.4514 2.3776 -0.4481 -0.6036"));
ProtoInstance49
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0875 2.0867 -0.6139 2.1902 2.0944 -0.7699"));
ProtoInstance50
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0875 2.0867 -0.6139 0.6074 2.5547 -1.5032"));
ProtoInstance51
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("1.0875 2.0867 -0.6139 0.8606 2.6915 0.2934"));
ProtoInstance52
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.2178 0.981 0.2003 -4.0942 2.0097 0.6091"));
ProtoInstance53
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.2178 0.981 0.2003 -4.6699 1.0338 -0.8167"));
ProtoInstance54
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-4.2178 0.981 0.2003 -4.9101 0.4518 0.8943"));
ProtoInstance55
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.6764 -3.1997 0.1458 -2.3049 -3.6334 -0.6659"));
ProtoInstance56
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.6764 -3.1997 0.1458 -0.6444 -3.603 0.0359"));
ProtoInstance57
            .addFieldValue(new fieldValueObject().setName("bond_set").setValue("-1.6764 -3.1997 0.1458 -2.0682 -3.5218 1.1381"));
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

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
public class ArtDecoExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ArtDecoExamples().initialize().toFileJSON("../data/ArtDecoExamples.new.json");
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
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ArtDecoExamples.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
        .addMeta(new metaObject().setName("creator").setContent("David Roussel"))
        .addMeta(new metaObject().setName("translator").setContent("James Harney, Don Brutzman NPS"))
        .addMeta(new metaObject().setName("created").setContent("7 April 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
        .addMeta(new metaObject().setName("subject").setContent("Universal Media Material Library"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("ArtDecoExamples.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString0().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString1().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString2().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString3().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString4().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString6().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString7().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString8().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString9().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString10().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString11().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString12().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString13().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString14().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString15().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString16().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString17().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString18().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString19().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString20().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString21().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString22().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString23().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString24().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString25().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString26().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString27().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString28().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString29().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString30().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString31().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString32().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString33().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFStringObject(new MFString34().getArray())))
        .addChild(new GroupObject()
          .addChild(new NavigationInfoObject().setHeadlight(false))
          .addChild(new ViewpointObject().setDEF("Front").setDescription("Front view").setPosition(new float[] {0f,0f,12f}))
          .addChild(new ViewpointObject().setDEF("PersRight").setDescription("Low Right").setOrientation(new float[] {0.74291f,0.30772f,0.59447f,1.2171f}).setPosition(new float[] {6.9282f,-6.9282f,6.9282f}))
          .addChild(new ViewpointObject().setDEF("PersLeft").setDescription("Low Left").setOrientation(new float[] {0.74291f,-0.30772f,-0.59447f,1.2171f}).setPosition(new float[] {-6.9282f,-6.9282f,6.9282f}))
          .addChild(new ViewpointObject().setDEF("Back").setDescription("Back view").setOrientation(new float[] {0f,1f,0f,3.1416f}).setPosition(new float[] {0f,0f,-12f}))
          .addChild(new TransformObject().setDEF("Close_travel")
            .addChild(new PositionInterpolatorObject().setDEF("Close_Mover").setKey(new MFFloatObject(new MFFloat35().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f36().getArray())))
            .addChild(new TimeSensorObject().setDEF("Close_Time").setCycleInterval(12d).setLoop(true))
            .addChild(new ViewpointObject().setDEF("Close").setDescription("Close Front").setPosition(new float[] {0f,0f,6f})))
          .addChild(new DirectionalLightObject().setDirection(new float[] {1f,-1f,-1f}))
          .addChild(new DirectionalLightObject().setDirection(new float[] {0f,1f,-0.5f}).setIntensity(0.5f))
          .addChild(new AnchorObject().setDescription("Back to front view").setUrl(new MFStringObject(new MFString37().getArray()))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0f,-0.5f})
              .addChild(new InlineObject().setUrl(new MFStringObject(new MFString38().getArray())))))
          .addChild(new ViewpointObject().setDEF("View00").setDescription("ArtDeco00").setPosition(new float[] {-3.75f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco00 view").setUrl(new MFStringObject(new MFString39().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance0 = new ProtoInstanceObject().setName("ArtDeco00")))
                .setGeometry(new SphereObject().setDEF("Ball").setRadius(0.5f))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco00").setParameter(new MFStringObject(new MFString40().getArray())).setUrl(new MFStringObject(new MFString41().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("TextMat").setDiffuseColor(new float[] {1f,1f,1f})))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString42().getArray()))
                    .setFontStyle(new FontStyleObject().setDEF("Style").setFamily(new MFStringObject(new MFString43().getArray())).setJustify(new MFStringObject(new MFString44().getArray())).setSize(0.3f).setStyle("BOLD")))))))
          .addChild(new ViewpointObject().setDEF("View01").setDescription("ArtDeco01").setPosition(new float[] {-2.25f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco01 view").setUrl(new MFStringObject(new MFString45().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance1 = new ProtoInstanceObject().setName("ArtDeco01")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco01").setParameter(new MFStringObject(new MFString46().getArray())).setUrl(new MFStringObject(new MFString47().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString48().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View02").setDescription("ArtDeco02").setPosition(new float[] {-0.75f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco02 view").setUrl(new MFStringObject(new MFString49().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance2 = new ProtoInstanceObject().setName("ArtDeco02")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco02").setParameter(new MFStringObject(new MFString50().getArray())).setUrl(new MFStringObject(new MFString51().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString52().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View03").setDescription("ArtDeco03").setPosition(new float[] {0.75f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco03 view").setUrl(new MFStringObject(new MFString53().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance3 = new ProtoInstanceObject().setName("ArtDeco03")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco03").setParameter(new MFStringObject(new MFString54().getArray())).setUrl(new MFStringObject(new MFString55().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString56().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View04").setDescription("ArtDeco04").setPosition(new float[] {2.25f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco04 view").setUrl(new MFStringObject(new MFString57().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance4 = new ProtoInstanceObject().setName("ArtDeco04")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco04").setParameter(new MFStringObject(new MFString58().getArray())).setUrl(new MFStringObject(new MFString59().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString60().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View05").setDescription("ArtDeco05").setPosition(new float[] {3.75f,3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {3.75f,3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco05 view").setUrl(new MFStringObject(new MFString61().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance5 = new ProtoInstanceObject().setName("ArtDeco05")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco05").setParameter(new MFStringObject(new MFString62().getArray())).setUrl(new MFStringObject(new MFString63().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString64().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View06").setDescription("ArtDeco06").setPosition(new float[] {-3.75f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco06 view").setUrl(new MFStringObject(new MFString65().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance6 = new ProtoInstanceObject().setName("ArtDeco06")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco06").setParameter(new MFStringObject(new MFString66().getArray())).setUrl(new MFStringObject(new MFString67().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString68().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View07").setDescription("ArtDeco07").setPosition(new float[] {-2.25f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco07 view").setUrl(new MFStringObject(new MFString69().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance7 = new ProtoInstanceObject().setName("ArtDeco07")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco07").setParameter(new MFStringObject(new MFString70().getArray())).setUrl(new MFStringObject(new MFString71().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString72().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View08").setDescription("ArtDeco08").setPosition(new float[] {-0.75f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco08 view").setUrl(new MFStringObject(new MFString73().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance8 = new ProtoInstanceObject().setName("ArtDeco08")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco08").setParameter(new MFStringObject(new MFString74().getArray())).setUrl(new MFStringObject(new MFString75().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString76().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View09").setDescription("ArtDeco09").setPosition(new float[] {0.75f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco09 view").setUrl(new MFStringObject(new MFString77().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance9 = new ProtoInstanceObject().setName("ArtDeco09")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco09").setParameter(new MFStringObject(new MFString78().getArray())).setUrl(new MFStringObject(new MFString79().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString80().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View10").setDescription("ArtDeco10").setPosition(new float[] {2.25f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco10 view").setUrl(new MFStringObject(new MFString81().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance10 = new ProtoInstanceObject().setName("ArtDeco10")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco10").setParameter(new MFStringObject(new MFString82().getArray())).setUrl(new MFStringObject(new MFString83().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString84().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View11").setDescription("ArtDeco11").setPosition(new float[] {3.75f,2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {3.75f,2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco11 view").setUrl(new MFStringObject(new MFString85().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance11 = new ProtoInstanceObject().setName("ArtDeco11")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco11").setParameter(new MFStringObject(new MFString86().getArray())).setUrl(new MFStringObject(new MFString87().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString88().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View12").setDescription("ArtDeco12").setPosition(new float[] {-3.75f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco12 view").setUrl(new MFStringObject(new MFString89().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance12 = new ProtoInstanceObject().setName("ArtDeco12")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco12").setParameter(new MFStringObject(new MFString90().getArray())).setUrl(new MFStringObject(new MFString91().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString92().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View13").setDescription("ArtDeco13").setPosition(new float[] {-2.25f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco13 view").setUrl(new MFStringObject(new MFString93().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance13 = new ProtoInstanceObject().setName("ArtDeco13")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco13").setParameter(new MFStringObject(new MFString94().getArray())).setUrl(new MFStringObject(new MFString95().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString96().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View14").setDescription("ArtDeco14").setPosition(new float[] {-0.75f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco14 view").setUrl(new MFStringObject(new MFString97().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance14 = new ProtoInstanceObject().setName("ArtDeco14")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco14").setParameter(new MFStringObject(new MFString98().getArray())).setUrl(new MFStringObject(new MFString99().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString100().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View15").setDescription("ArtDeco15").setPosition(new float[] {0.75f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco15 view").setUrl(new MFStringObject(new MFString101().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance15 = new ProtoInstanceObject().setName("ArtDeco15")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco15").setParameter(new MFStringObject(new MFString102().getArray())).setUrl(new MFStringObject(new MFString103().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString104().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View16").setDescription("ArtDeco16").setPosition(new float[] {2.25f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco16 view").setUrl(new MFStringObject(new MFString105().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance16 = new ProtoInstanceObject().setName("ArtDeco16")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco16").setParameter(new MFStringObject(new MFString106().getArray())).setUrl(new MFStringObject(new MFString107().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString108().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View17").setDescription("ArtDeco17").setPosition(new float[] {3.75f,0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {3.75f,0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco17 view").setUrl(new MFStringObject(new MFString109().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance17 = new ProtoInstanceObject().setName("ArtDeco17")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco17").setParameter(new MFStringObject(new MFString110().getArray())).setUrl(new MFStringObject(new MFString111().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString112().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View18").setDescription("ArtDeco18").setPosition(new float[] {-3.75f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco18 view").setUrl(new MFStringObject(new MFString113().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance18 = new ProtoInstanceObject().setName("ArtDeco18")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco18").setParameter(new MFStringObject(new MFString114().getArray())).setUrl(new MFStringObject(new MFString115().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString116().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View19").setDescription("ArtDeco19").setPosition(new float[] {-2.25f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco19 view").setUrl(new MFStringObject(new MFString117().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance19 = new ProtoInstanceObject().setName("ArtDeco19")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco19").setParameter(new MFStringObject(new MFString118().getArray())).setUrl(new MFStringObject(new MFString119().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString120().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View20").setDescription("ArtDeco20").setPosition(new float[] {-0.75f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco20 view").setUrl(new MFStringObject(new MFString121().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance20 = new ProtoInstanceObject().setName("ArtDeco20")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco20").setParameter(new MFStringObject(new MFString122().getArray())).setUrl(new MFStringObject(new MFString123().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString124().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View21").setDescription("ArtDeco21").setPosition(new float[] {0.75f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco21 view").setUrl(new MFStringObject(new MFString125().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance21 = new ProtoInstanceObject().setName("ArtDeco21")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco21").setParameter(new MFStringObject(new MFString126().getArray())).setUrl(new MFStringObject(new MFString127().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString128().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View22").setDescription("ArtDeco22").setPosition(new float[] {2.25f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco22 view").setUrl(new MFStringObject(new MFString129().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance22 = new ProtoInstanceObject().setName("ArtDeco22")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco22").setParameter(new MFStringObject(new MFString130().getArray())).setUrl(new MFStringObject(new MFString131().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString132().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View23").setDescription("ArtDeco23").setPosition(new float[] {3.75f,-0.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {3.75f,-0.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco23 view").setUrl(new MFStringObject(new MFString133().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance23 = new ProtoInstanceObject().setName("ArtDeco23")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco23").setParameter(new MFStringObject(new MFString134().getArray())).setUrl(new MFStringObject(new MFString135().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString136().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View24").setDescription("ArtDeco24").setPosition(new float[] {-3.75f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco24 view").setUrl(new MFStringObject(new MFString137().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance24 = new ProtoInstanceObject().setName("ArtDeco24")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco24").setParameter(new MFStringObject(new MFString138().getArray())).setUrl(new MFStringObject(new MFString139().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString140().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View25").setDescription("ArtDeco25").setPosition(new float[] {-2.25f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco25 view").setUrl(new MFStringObject(new MFString141().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance25 = new ProtoInstanceObject().setName("ArtDeco25")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco25").setParameter(new MFStringObject(new MFString142().getArray())).setUrl(new MFStringObject(new MFString143().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString144().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View26").setDescription("ArtDeco26").setPosition(new float[] {-0.75f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco26 view").setUrl(new MFStringObject(new MFString145().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance26 = new ProtoInstanceObject().setName("ArtDeco26")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco26").setParameter(new MFStringObject(new MFString146().getArray())).setUrl(new MFStringObject(new MFString147().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString148().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View27").setDescription("ArtDeco27").setPosition(new float[] {0.75f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco27 view").setUrl(new MFStringObject(new MFString149().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance27 = new ProtoInstanceObject().setName("ArtDeco27")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco27").setParameter(new MFStringObject(new MFString150().getArray())).setUrl(new MFStringObject(new MFString151().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString152().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View28").setDescription("ArtDeco28").setPosition(new float[] {2.25f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco28 view").setUrl(new MFStringObject(new MFString153().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance28 = new ProtoInstanceObject().setName("ArtDeco28")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco28").setParameter(new MFStringObject(new MFString154().getArray())).setUrl(new MFStringObject(new MFString155().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString156().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View29").setDescription("ArtDeco29").setPosition(new float[] {3.75f,-2.25f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {3.75f,-2.25f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco29 view").setUrl(new MFStringObject(new MFString157().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance29 = new ProtoInstanceObject().setName("ArtDeco29")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco29").setParameter(new MFStringObject(new MFString158().getArray())).setUrl(new MFStringObject(new MFString159().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString160().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View30").setDescription("ArtDeco30").setPosition(new float[] {-3.75f,-3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-3.75f,-3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco30 view").setUrl(new MFStringObject(new MFString161().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance30 = new ProtoInstanceObject().setName("ArtDeco30")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco30").setParameter(new MFStringObject(new MFString162().getArray())).setUrl(new MFStringObject(new MFString163().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString164().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View31").setDescription("ArtDeco31").setPosition(new float[] {-2.25f,-3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-2.25f,-3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco31 view").setUrl(new MFStringObject(new MFString165().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance31 = new ProtoInstanceObject().setName("ArtDeco31")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco31").setParameter(new MFStringObject(new MFString166().getArray())).setUrl(new MFStringObject(new MFString167().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString168().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View32").setDescription("ArtDeco32").setPosition(new float[] {-0.75f,-3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {-0.75f,-3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco32 view").setUrl(new MFStringObject(new MFString169().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance32 = new ProtoInstanceObject().setName("ArtDeco32")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco32").setParameter(new MFStringObject(new MFString170().getArray())).setUrl(new MFStringObject(new MFString171().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString172().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View33").setDescription("ArtDeco33").setPosition(new float[] {0.75f,-3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {0.75f,-3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco33 view").setUrl(new MFStringObject(new MFString173().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance33 = new ProtoInstanceObject().setName("ArtDeco33")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco33").setParameter(new MFStringObject(new MFString174().getArray())).setUrl(new MFStringObject(new MFString175().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString176().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style")))))))
          .addChild(new ViewpointObject().setDEF("View34").setDescription("ArtDeco34").setPosition(new float[] {2.25f,-3.75f,3f}))
          .addChild(new TransformObject().setTranslation(new float[] {2.25f,-3.75f,0f})
            .addChild(new AnchorObject().setDescription("ArtDeco34 view").setUrl(new MFStringObject(new MFString177().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance34 = new ProtoInstanceObject().setName("ArtDeco34")))
                .setGeometry(new SphereObject().setUSE("Ball"))))
            .addChild(new TransformObject().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new AnchorObject().setDescription("ArtDeco34").setParameter(new MFStringObject(new MFString178().getArray())).setUrl(new MFStringObject(new MFString179().getArray()))
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setUSE("TextMat")))
                  .setGeometry(new TextObject().setString(new MFStringObject(new MFString180().getArray()))
                    .setFontStyle(new FontStyleObject().setUSE("Style"))))))))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Close_Time").setToField("set_fraction").setToNode("Close_Mover"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Close_Mover").setToField("set_translation").setToNode("Close_travel")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"});
  }
}
protected class MFFloat35 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFVec3f36 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,2.5f,0f,0f,0f,0f,0f,-2.5f,0f,0f,0f,0f,0f,2.5f,0f});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#Front"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../data/gridBack.json"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View00"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco00"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SANS"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View01"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco01"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View02"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco02"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View03"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"});
  }
}
protected class MFString56 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco03"});
  }
}
protected class MFString57 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View04"});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco04"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View05"});
  }
}
protected class MFString62 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString63 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco05"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View06"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"});
  }
}
protected class MFString68 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco06"});
  }
}
protected class MFString69 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View07"});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"});
  }
}
protected class MFString72 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco07"});
  }
}
protected class MFString73 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View08"});
  }
}
protected class MFString74 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString75 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"});
  }
}
protected class MFString76 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco08"});
  }
}
protected class MFString77 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View09"});
  }
}
protected class MFString78 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString79 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"});
  }
}
protected class MFString80 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco09"});
  }
}
protected class MFString81 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View10"});
  }
}
protected class MFString82 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString83 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"});
  }
}
protected class MFString84 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco10"});
  }
}
protected class MFString85 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View11"});
  }
}
protected class MFString86 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString87 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"});
  }
}
protected class MFString88 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco11"});
  }
}
protected class MFString89 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View12"});
  }
}
protected class MFString90 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString91 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"});
  }
}
protected class MFString92 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco12"});
  }
}
protected class MFString93 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View13"});
  }
}
protected class MFString94 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString95 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"});
  }
}
protected class MFString96 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco13"});
  }
}
protected class MFString97 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View14"});
  }
}
protected class MFString98 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString99 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"});
  }
}
protected class MFString100 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco14"});
  }
}
protected class MFString101 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View15"});
  }
}
protected class MFString102 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString103 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"});
  }
}
protected class MFString104 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco15"});
  }
}
protected class MFString105 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View16"});
  }
}
protected class MFString106 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString107 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"});
  }
}
protected class MFString108 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco16"});
  }
}
protected class MFString109 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View17"});
  }
}
protected class MFString110 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString111 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"});
  }
}
protected class MFString112 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco17"});
  }
}
protected class MFString113 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View18"});
  }
}
protected class MFString114 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString115 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"});
  }
}
protected class MFString116 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco18"});
  }
}
protected class MFString117 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View19"});
  }
}
protected class MFString118 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString119 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"});
  }
}
protected class MFString120 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco19"});
  }
}
protected class MFString121 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View20"});
  }
}
protected class MFString122 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString123 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"});
  }
}
protected class MFString124 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco20"});
  }
}
protected class MFString125 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View21"});
  }
}
protected class MFString126 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString127 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"});
  }
}
protected class MFString128 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco21"});
  }
}
protected class MFString129 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View22"});
  }
}
protected class MFString130 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString131 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"});
  }
}
protected class MFString132 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco22"});
  }
}
protected class MFString133 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View23"});
  }
}
protected class MFString134 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString135 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"});
  }
}
protected class MFString136 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco23"});
  }
}
protected class MFString137 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View24"});
  }
}
protected class MFString138 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString139 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"});
  }
}
protected class MFString140 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco24"});
  }
}
protected class MFString141 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View25"});
  }
}
protected class MFString142 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString143 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"});
  }
}
protected class MFString144 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco25"});
  }
}
protected class MFString145 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View26"});
  }
}
protected class MFString146 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString147 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"});
  }
}
protected class MFString148 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco26"});
  }
}
protected class MFString149 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View27"});
  }
}
protected class MFString150 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString151 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"});
  }
}
protected class MFString152 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco27"});
  }
}
protected class MFString153 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View28"});
  }
}
protected class MFString154 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString155 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"});
  }
}
protected class MFString156 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco28"});
  }
}
protected class MFString157 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View29"});
  }
}
protected class MFString158 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString159 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"});
  }
}
protected class MFString160 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco29"});
  }
}
protected class MFString161 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View30"});
  }
}
protected class MFString162 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString163 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"});
  }
}
protected class MFString164 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco30"});
  }
}
protected class MFString165 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View31"});
  }
}
protected class MFString166 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString167 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"});
  }
}
protected class MFString168 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco31"});
  }
}
protected class MFString169 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View32"});
  }
}
protected class MFString170 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString171 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"});
  }
}
protected class MFString172 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco32"});
  }
}
protected class MFString173 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View33"});
  }
}
protected class MFString174 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString175 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"});
  }
}
protected class MFString176 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco33"});
  }
}
protected class MFString177 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"#View34"});
  }
}
protected class MFString178 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString179 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"});
  }
}
protected class MFString180 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ArtDeco34"});
  }
}
}

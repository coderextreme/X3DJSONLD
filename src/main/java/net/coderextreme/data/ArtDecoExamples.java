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
public class ArtDecoExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ArtDecoExamples().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ArtDecoExamples.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ArtDecoExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
        .addMeta(new meta().setName("creator").setContent("David Roussel"))
        .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
        .addMeta(new meta().setName("created").setContent("7 April 2002"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
        .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ArtDecoExamples.x3d"))
        .addChild(new ExternProtoDeclare().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString0().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString1().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString2().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString3().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString4().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString5().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString6().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString7().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString8().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString9().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString10().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString11().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString12().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString13().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString14().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString15().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString16().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString17().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString18().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString19().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString20().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString21().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString22().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString23().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString24().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString25().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString26().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString27().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString28().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString29().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString30().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString31().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString32().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString33().getArray()))
        .addChild(new ExternProtoDeclare().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials").setUrl(new MFString34().getArray()))
        .addChild(new Group()
          .addChild(new NavigationInfo().setHeadlight(false))
          .addChild(new Viewpoint().setDEF("Front").setDescription("Front view").setPosition(new float[] {0f,0f,12f}))
          .addChild(new Viewpoint().setDEF("PersRight").setDescription("Low Right").setOrientation(new float[] {0.74291f,0.30772f,0.59447f,1.2171f}).setPosition(new float[] {6.9282f,-6.9282f,6.9282f}))
          .addChild(new Viewpoint().setDEF("PersLeft").setDescription("Low Left").setOrientation(new float[] {0.74291f,-0.30772f,-0.59447f,1.2171f}).setPosition(new float[] {-6.9282f,-6.9282f,6.9282f}))
          .addChild(new Viewpoint().setDEF("Back").setDescription("Back view").setOrientation(new float[] {0f,1f,0f,3.1416f}).setPosition(new float[] {0f,0f,-12f}))
          .addChild(new Transform().setDEF("Close_travel")
            .addChild(new PositionInterpolator("Close_travel").setDEF("Close_Mover").setKey(new MFFloat35().getArray()).setKeyValue(new MFVec3f36().getArray()))
            .addChild(new TimeSensor("Close_travel").setDEF("Close_Time").setCycleInterval(12d).setLoop(true))
            .addChild(new Viewpoint("Close_travel").setDEF("Close").setDescription("Close Front").setPosition(new float[] {0f,0f,6f})))
          .addChild(new DirectionalLight().setDirection(new float[] {1f,-1f,-1f}))
          .addChild(new DirectionalLight().setDirection(new float[] {0f,1f,-0.5f}).setIntensity(0.5f))
          .addChild(new Anchor().setDescription("Back to front view").setUrl(new MFString37().getArray())
            .addChild(new Transform().setTranslation(new float[] {0f,0f,-0.5f})
              .addChild(new Inline().setUrl(new MFString38().getArray()))))
          .addChild(new Viewpoint().setDEF("View00").setDescription("ArtDeco00").setPosition(new float[] {-3.75f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco00 view").setUrl(new MFString39().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance0 = new ProtoInstance().setName("ArtDeco00")))
                .setGeometry(new Sphere().setDEF("Ball").setRadius(0.5f))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco00").setParameter(new MFString40().getArray()).setUrl(new MFString41().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF("TextMat").setDiffuseColor(new float[] {1f,1f,1f})))
                  .setGeometry(new Text().setString(new MFString42().getArray())
                    .setFontStyle(new FontStyle().setDEF("Style").setFamily(new MFString43().getArray()).setJustify(new MFString44().getArray()).setSize(0.3f).setStyle("BOLD")))))))
          .addChild(new Viewpoint().setDEF("View01").setDescription("ArtDeco01").setPosition(new float[] {-2.25f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco01 view").setUrl(new MFString45().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance1 = new ProtoInstance().setName("ArtDeco01")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco01").setParameter(new MFString46().getArray()).setUrl(new MFString47().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString48().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View02").setDescription("ArtDeco02").setPosition(new float[] {-0.75f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco02 view").setUrl(new MFString49().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance2 = new ProtoInstance().setName("ArtDeco02")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco02").setParameter(new MFString50().getArray()).setUrl(new MFString51().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString52().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View03").setDescription("ArtDeco03").setPosition(new float[] {0.75f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco03 view").setUrl(new MFString53().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance3 = new ProtoInstance().setName("ArtDeco03")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco03").setParameter(new MFString54().getArray()).setUrl(new MFString55().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString56().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View04").setDescription("ArtDeco04").setPosition(new float[] {2.25f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco04 view").setUrl(new MFString57().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance4 = new ProtoInstance().setName("ArtDeco04")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco04").setParameter(new MFString58().getArray()).setUrl(new MFString59().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString60().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View05").setDescription("ArtDeco05").setPosition(new float[] {3.75f,3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {3.75f,3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco05 view").setUrl(new MFString61().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance5 = new ProtoInstance().setName("ArtDeco05")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco05").setParameter(new MFString62().getArray()).setUrl(new MFString63().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString64().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View06").setDescription("ArtDeco06").setPosition(new float[] {-3.75f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco06 view").setUrl(new MFString65().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance6 = new ProtoInstance().setName("ArtDeco06")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco06").setParameter(new MFString66().getArray()).setUrl(new MFString67().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString68().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View07").setDescription("ArtDeco07").setPosition(new float[] {-2.25f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco07 view").setUrl(new MFString69().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance7 = new ProtoInstance().setName("ArtDeco07")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco07").setParameter(new MFString70().getArray()).setUrl(new MFString71().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString72().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View08").setDescription("ArtDeco08").setPosition(new float[] {-0.75f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco08 view").setUrl(new MFString73().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance8 = new ProtoInstance().setName("ArtDeco08")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco08").setParameter(new MFString74().getArray()).setUrl(new MFString75().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString76().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View09").setDescription("ArtDeco09").setPosition(new float[] {0.75f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco09 view").setUrl(new MFString77().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance9 = new ProtoInstance().setName("ArtDeco09")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco09").setParameter(new MFString78().getArray()).setUrl(new MFString79().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString80().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View10").setDescription("ArtDeco10").setPosition(new float[] {2.25f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco10 view").setUrl(new MFString81().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance10 = new ProtoInstance().setName("ArtDeco10")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco10").setParameter(new MFString82().getArray()).setUrl(new MFString83().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString84().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View11").setDescription("ArtDeco11").setPosition(new float[] {3.75f,2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {3.75f,2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco11 view").setUrl(new MFString85().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance11 = new ProtoInstance().setName("ArtDeco11")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco11").setParameter(new MFString86().getArray()).setUrl(new MFString87().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString88().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View12").setDescription("ArtDeco12").setPosition(new float[] {-3.75f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco12 view").setUrl(new MFString89().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance12 = new ProtoInstance().setName("ArtDeco12")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco12").setParameter(new MFString90().getArray()).setUrl(new MFString91().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString92().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View13").setDescription("ArtDeco13").setPosition(new float[] {-2.25f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco13 view").setUrl(new MFString93().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance13 = new ProtoInstance().setName("ArtDeco13")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco13").setParameter(new MFString94().getArray()).setUrl(new MFString95().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString96().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View14").setDescription("ArtDeco14").setPosition(new float[] {-0.75f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco14 view").setUrl(new MFString97().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance14 = new ProtoInstance().setName("ArtDeco14")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco14").setParameter(new MFString98().getArray()).setUrl(new MFString99().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString100().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View15").setDescription("ArtDeco15").setPosition(new float[] {0.75f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco15 view").setUrl(new MFString101().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance15 = new ProtoInstance().setName("ArtDeco15")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco15").setParameter(new MFString102().getArray()).setUrl(new MFString103().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString104().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View16").setDescription("ArtDeco16").setPosition(new float[] {2.25f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco16 view").setUrl(new MFString105().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance16 = new ProtoInstance().setName("ArtDeco16")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco16").setParameter(new MFString106().getArray()).setUrl(new MFString107().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString108().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View17").setDescription("ArtDeco17").setPosition(new float[] {3.75f,0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {3.75f,0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco17 view").setUrl(new MFString109().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance17 = new ProtoInstance().setName("ArtDeco17")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco17").setParameter(new MFString110().getArray()).setUrl(new MFString111().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString112().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View18").setDescription("ArtDeco18").setPosition(new float[] {-3.75f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco18 view").setUrl(new MFString113().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance18 = new ProtoInstance().setName("ArtDeco18")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco18").setParameter(new MFString114().getArray()).setUrl(new MFString115().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString116().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View19").setDescription("ArtDeco19").setPosition(new float[] {-2.25f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco19 view").setUrl(new MFString117().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance19 = new ProtoInstance().setName("ArtDeco19")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco19").setParameter(new MFString118().getArray()).setUrl(new MFString119().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString120().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View20").setDescription("ArtDeco20").setPosition(new float[] {-0.75f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco20 view").setUrl(new MFString121().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance20 = new ProtoInstance().setName("ArtDeco20")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco20").setParameter(new MFString122().getArray()).setUrl(new MFString123().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString124().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View21").setDescription("ArtDeco21").setPosition(new float[] {0.75f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco21 view").setUrl(new MFString125().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance21 = new ProtoInstance().setName("ArtDeco21")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco21").setParameter(new MFString126().getArray()).setUrl(new MFString127().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString128().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View22").setDescription("ArtDeco22").setPosition(new float[] {2.25f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco22 view").setUrl(new MFString129().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance22 = new ProtoInstance().setName("ArtDeco22")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco22").setParameter(new MFString130().getArray()).setUrl(new MFString131().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString132().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View23").setDescription("ArtDeco23").setPosition(new float[] {3.75f,-0.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {3.75f,-0.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco23 view").setUrl(new MFString133().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance23 = new ProtoInstance().setName("ArtDeco23")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco23").setParameter(new MFString134().getArray()).setUrl(new MFString135().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString136().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View24").setDescription("ArtDeco24").setPosition(new float[] {-3.75f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco24 view").setUrl(new MFString137().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance24 = new ProtoInstance().setName("ArtDeco24")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco24").setParameter(new MFString138().getArray()).setUrl(new MFString139().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString140().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View25").setDescription("ArtDeco25").setPosition(new float[] {-2.25f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco25 view").setUrl(new MFString141().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance25 = new ProtoInstance().setName("ArtDeco25")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco25").setParameter(new MFString142().getArray()).setUrl(new MFString143().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString144().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View26").setDescription("ArtDeco26").setPosition(new float[] {-0.75f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco26 view").setUrl(new MFString145().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance26 = new ProtoInstance().setName("ArtDeco26")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco26").setParameter(new MFString146().getArray()).setUrl(new MFString147().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString148().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View27").setDescription("ArtDeco27").setPosition(new float[] {0.75f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco27 view").setUrl(new MFString149().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance27 = new ProtoInstance().setName("ArtDeco27")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco27").setParameter(new MFString150().getArray()).setUrl(new MFString151().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString152().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View28").setDescription("ArtDeco28").setPosition(new float[] {2.25f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco28 view").setUrl(new MFString153().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance28 = new ProtoInstance().setName("ArtDeco28")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco28").setParameter(new MFString154().getArray()).setUrl(new MFString155().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString156().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View29").setDescription("ArtDeco29").setPosition(new float[] {3.75f,-2.25f,3f}))
          .addChild(new Transform().setTranslation(new float[] {3.75f,-2.25f,0f})
            .addChild(new Anchor().setDescription("ArtDeco29 view").setUrl(new MFString157().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance29 = new ProtoInstance().setName("ArtDeco29")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco29").setParameter(new MFString158().getArray()).setUrl(new MFString159().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString160().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View30").setDescription("ArtDeco30").setPosition(new float[] {-3.75f,-3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-3.75f,-3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco30 view").setUrl(new MFString161().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance30 = new ProtoInstance().setName("ArtDeco30")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco30").setParameter(new MFString162().getArray()).setUrl(new MFString163().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString164().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View31").setDescription("ArtDeco31").setPosition(new float[] {-2.25f,-3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-2.25f,-3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco31 view").setUrl(new MFString165().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance31 = new ProtoInstance().setName("ArtDeco31")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco31").setParameter(new MFString166().getArray()).setUrl(new MFString167().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString168().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View32").setDescription("ArtDeco32").setPosition(new float[] {-0.75f,-3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {-0.75f,-3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco32 view").setUrl(new MFString169().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance32 = new ProtoInstance().setName("ArtDeco32")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco32").setParameter(new MFString170().getArray()).setUrl(new MFString171().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString172().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View33").setDescription("ArtDeco33").setPosition(new float[] {0.75f,-3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {0.75f,-3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco33 view").setUrl(new MFString173().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance33 = new ProtoInstance().setName("ArtDeco33")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco33").setParameter(new MFString174().getArray()).setUrl(new MFString175().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString176().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style")))))))
          .addChild(new Viewpoint().setDEF("View34").setDescription("ArtDeco34").setPosition(new float[] {2.25f,-3.75f,3f}))
          .addChild(new Transform().setTranslation(new float[] {2.25f,-3.75f,0f})
            .addChild(new Anchor().setDescription("ArtDeco34 view").setUrl(new MFString177().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance34 = new ProtoInstance().setName("ArtDeco34")))
                .setGeometry(new Sphere().setUSE("Ball"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0.3f,0.5f})
              .addChild(new Anchor().setDescription("ArtDeco34").setParameter(new MFString178().getArray()).setUrl(new MFString179().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE("TextMat")))
                  .setGeometry(new Text().setString(new MFString180().getArray())
                    .setFontStyle(new FontStyle().setUSE("Style"))))))))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Close_Time").setToField("set_fraction").setToNode("Close_Mover"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Close_Mover").setToField("set_translation").setToNode("Close_travel")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"});
  }
}
protected class MFString24 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"});
  }
}
protected class MFString25 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"});
  }
}
protected class MFString26 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"});
  }
}
protected class MFString27 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"});
  }
}
protected class MFString28 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"});
  }
}
protected class MFString29 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"});
  }
}
protected class MFString30 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"});
  }
}
protected class MFString31 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"});
  }
}
protected class MFString32 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"});
  }
}
protected class MFString33 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"});
  }
}
protected class MFString34 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.x3d#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"});
  }
}
protected class MFFloat35 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.25f,0.5f,0.75f,1f});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,2.5f,0f,0f,0f,0f,0f,-2.5f,0f,0f,0f,0f,0f,2.5f,0f});
  }
}
protected class MFString37 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#Front"});
  }
}
protected class MFString38 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/gridBack.json","../data/gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"});
  }
}
protected class MFString39 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View00"});
  }
}
protected class MFString40 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"});
  }
}
protected class MFString42 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco00"});
  }
}
protected class MFString43 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
protected class MFString44 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString45 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View01"});
  }
}
protected class MFString46 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString47 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"});
  }
}
protected class MFString48 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco01"});
  }
}
protected class MFString49 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View02"});
  }
}
protected class MFString50 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString51 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"});
  }
}
protected class MFString52 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco02"});
  }
}
protected class MFString53 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View03"});
  }
}
protected class MFString54 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString55 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"});
  }
}
protected class MFString56 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco03"});
  }
}
protected class MFString57 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View04"});
  }
}
protected class MFString58 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString59 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"});
  }
}
protected class MFString60 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco04"});
  }
}
protected class MFString61 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View05"});
  }
}
protected class MFString62 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString63 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"});
  }
}
protected class MFString64 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco05"});
  }
}
protected class MFString65 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View06"});
  }
}
protected class MFString66 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString67 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"});
  }
}
protected class MFString68 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco06"});
  }
}
protected class MFString69 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View07"});
  }
}
protected class MFString70 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString71 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"});
  }
}
protected class MFString72 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco07"});
  }
}
protected class MFString73 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View08"});
  }
}
protected class MFString74 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString75 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"});
  }
}
protected class MFString76 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco08"});
  }
}
protected class MFString77 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View09"});
  }
}
protected class MFString78 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString79 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"});
  }
}
protected class MFString80 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco09"});
  }
}
protected class MFString81 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View10"});
  }
}
protected class MFString82 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString83 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"});
  }
}
protected class MFString84 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco10"});
  }
}
protected class MFString85 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View11"});
  }
}
protected class MFString86 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString87 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"});
  }
}
protected class MFString88 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco11"});
  }
}
protected class MFString89 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View12"});
  }
}
protected class MFString90 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString91 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"});
  }
}
protected class MFString92 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco12"});
  }
}
protected class MFString93 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View13"});
  }
}
protected class MFString94 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString95 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"});
  }
}
protected class MFString96 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco13"});
  }
}
protected class MFString97 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View14"});
  }
}
protected class MFString98 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString99 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"});
  }
}
protected class MFString100 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco14"});
  }
}
protected class MFString101 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View15"});
  }
}
protected class MFString102 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString103 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"});
  }
}
protected class MFString104 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco15"});
  }
}
protected class MFString105 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View16"});
  }
}
protected class MFString106 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString107 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"});
  }
}
protected class MFString108 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco16"});
  }
}
protected class MFString109 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View17"});
  }
}
protected class MFString110 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString111 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"});
  }
}
protected class MFString112 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco17"});
  }
}
protected class MFString113 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View18"});
  }
}
protected class MFString114 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString115 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"});
  }
}
protected class MFString116 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco18"});
  }
}
protected class MFString117 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View19"});
  }
}
protected class MFString118 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString119 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"});
  }
}
protected class MFString120 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco19"});
  }
}
protected class MFString121 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View20"});
  }
}
protected class MFString122 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString123 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"});
  }
}
protected class MFString124 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco20"});
  }
}
protected class MFString125 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View21"});
  }
}
protected class MFString126 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString127 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"});
  }
}
protected class MFString128 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco21"});
  }
}
protected class MFString129 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View22"});
  }
}
protected class MFString130 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString131 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"});
  }
}
protected class MFString132 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco22"});
  }
}
protected class MFString133 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View23"});
  }
}
protected class MFString134 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString135 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"});
  }
}
protected class MFString136 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco23"});
  }
}
protected class MFString137 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View24"});
  }
}
protected class MFString138 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString139 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"});
  }
}
protected class MFString140 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco24"});
  }
}
protected class MFString141 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View25"});
  }
}
protected class MFString142 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString143 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"});
  }
}
protected class MFString144 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco25"});
  }
}
protected class MFString145 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View26"});
  }
}
protected class MFString146 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString147 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"});
  }
}
protected class MFString148 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco26"});
  }
}
protected class MFString149 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View27"});
  }
}
protected class MFString150 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString151 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"});
  }
}
protected class MFString152 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco27"});
  }
}
protected class MFString153 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View28"});
  }
}
protected class MFString154 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString155 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"});
  }
}
protected class MFString156 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco28"});
  }
}
protected class MFString157 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View29"});
  }
}
protected class MFString158 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString159 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"});
  }
}
protected class MFString160 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco29"});
  }
}
protected class MFString161 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View30"});
  }
}
protected class MFString162 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString163 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"});
  }
}
protected class MFString164 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco30"});
  }
}
protected class MFString165 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View31"});
  }
}
protected class MFString166 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString167 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"});
  }
}
protected class MFString168 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco31"});
  }
}
protected class MFString169 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View32"});
  }
}
protected class MFString170 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString171 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"});
  }
}
protected class MFString172 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco32"});
  }
}
protected class MFString173 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View33"});
  }
}
protected class MFString174 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString175 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"});
  }
}
protected class MFString176 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco33"});
  }
}
protected class MFString177 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View34"});
  }
}
protected class MFString178 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
protected class MFString179 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"});
  }
}
protected class MFString180 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco34"});
  }
}
}

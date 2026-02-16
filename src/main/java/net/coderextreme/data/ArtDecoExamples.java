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
public class ArtDecoExamples implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ArtDecoExamples().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ArtDecoExamples.new.java.x3d");
    model.toFileJSON("../data/ArtDecoExamples.new.java.x3dj");
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
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ArtDecoExamples.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("David Roussel")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("James Harney, Don Brutzman NPS")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("7 April 2002")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("19 January 2025")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://vrmlstuff.free.fr/materials")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("Universal Media Material Library")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("ArtDecoExamples.x3d")))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco00")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString0().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco01")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString1().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco02")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString2().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco03")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString3().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco04")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString4().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco05")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString5().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco06")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString6().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco07")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString7().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco08")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString8().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco09")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString9().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco10")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString10().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco11")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString11().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco12")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString12().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco13")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString13().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco14")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString14().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco15")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString15().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco16")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString16().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco17")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString17().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco18")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString18().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco19")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString19().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco20")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString20().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco21")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString21().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco22")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString22().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco23")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString23().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco24")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString24().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco25")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString25().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco26")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString26().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco27")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString27().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco28")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString28().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco29")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString29().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco30")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString30().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco31")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString31().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco32")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString32().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco33")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString33().getArray()))
        .addChild(new ExternProtoDeclare().setName(new SFString("ArtDeco34")).setAppinfo(new SFString("UniversalMediaMaterials prototype")).setDocumentation(new SFString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")).setUrl(new MFString34().getArray()))
        .addChild(new Group()
          .addChild(new NavigationInfo().setHeadlight(false))
          .addChild(new Viewpoint().setDEF(new SFString("Front")).setDescription(new SFString("Front view")).setPosition(new float[] {0f ,0f ,12f }))
          .addChild(new Viewpoint().setDEF(new SFString("PersRight")).setDescription(new SFString("Low Right")).setOrientation(new float[] {0.74291f ,0.30772f ,0.59447f ,1.2171f }).setPosition(new float[] {6.9282f ,-6.9282f ,6.9282f }))
          .addChild(new Viewpoint().setDEF(new SFString("PersLeft")).setDescription(new SFString("Low Left")).setOrientation(new float[] {0.74291f ,-0.30772f ,-0.59447f ,1.2171f }).setPosition(new float[] {-6.9282f ,-6.9282f ,6.9282f }))
          .addChild(new Viewpoint().setDEF(new SFString("Back")).setDescription(new SFString("Back view")).setOrientation(new float[] {0f ,1f ,0f ,3.1416f }).setPosition(new float[] {0f ,0f ,-12f }))
          .addChild(new Transform().setDEF(new SFString("Close_travel"))
            .addChild(new PositionInterpolator().setDEF(new SFString("Close_Mover")).setKey(new MFFloat35().getArray()).setKeyValue(new MFVec3f36().getArray()))
            .addChild(new TimeSensor().setDEF(new SFString("Close_Time")).setCycleInterval(12d).setLoop(true))
            .addChild(new Viewpoint().setDEF(new SFString("Close")).setDescription(new SFString("Close Front")).setPosition(new float[] {0f ,0f ,6f })))
          .addChild(new DirectionalLight().setDirection(new float[] {1f ,-1f ,-1f }))
          .addChild(new DirectionalLight().setDirection(new float[] {0f ,1f ,-0.5f }).setIntensity(0.5f ))
          .addChild(new Anchor().setDescription(new SFString("Return to front view")).setUrl(new MFString37().getArray())
            .addChild(new Transform().setTranslation(new float[] {0f ,0f ,-0.5f })
              .addChild(new Inline().setUrl(new MFString38().getArray()))))
          .addChild(new Viewpoint().setDEF(new SFString("View00")).setDescription(new SFString("ArtDeco00")).setPosition(new float[] {-3.75f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco00 view")).setUrl(new MFString39().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance0 = new ProtoInstance().setName(new SFString("ArtDeco00"))))
                .setGeometry(new Sphere().setDEF(new SFString("Ball")).setRadius(0.5f ))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco00 view source documentation")).setParameter(new MFString40().getArray()).setUrl(new MFString41().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDEF(new SFString("TextMat")).setDiffuseColor(new float[] {1f ,1f ,1f })))
                  .setGeometry(new Text().setString(new MFString42().getArray())
                    .setFontStyle(new FontStyle().setDEF(new SFString("Style")).setFamily(new MFString43().getArray()).setJustify(new MFString44().getArray()).setSize(0.3f ).setStyle(new SFString("BOLD"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View01")).setDescription(new SFString("ArtDeco01")).setPosition(new float[] {-2.25f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco01 view")).setUrl(new MFString45().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance1 = new ProtoInstance().setName(new SFString("ArtDeco01"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco01 view source documentation")).setParameter(new MFString46().getArray()).setUrl(new MFString47().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString48().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View02")).setDescription(new SFString("ArtDeco02")).setPosition(new float[] {-0.75f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco02 view")).setUrl(new MFString49().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance2 = new ProtoInstance().setName(new SFString("ArtDeco02"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco02 view source documentation")).setParameter(new MFString50().getArray()).setUrl(new MFString51().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString52().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View03")).setDescription(new SFString("ArtDeco03")).setPosition(new float[] {0.75f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco03 view")).setUrl(new MFString53().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance3 = new ProtoInstance().setName(new SFString("ArtDeco03"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco03 view source documentation")).setParameter(new MFString54().getArray()).setUrl(new MFString55().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString56().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View04")).setDescription(new SFString("ArtDeco04")).setPosition(new float[] {2.25f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco04 view")).setUrl(new MFString57().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance4 = new ProtoInstance().setName(new SFString("ArtDeco04"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco04 view source documentation")).setParameter(new MFString58().getArray()).setUrl(new MFString59().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString60().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View05")).setDescription(new SFString("ArtDeco05")).setPosition(new float[] {3.75f ,3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {3.75f ,3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco05 view")).setUrl(new MFString61().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance5 = new ProtoInstance().setName(new SFString("ArtDeco05"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco05 view source documentation")).setParameter(new MFString62().getArray()).setUrl(new MFString63().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString64().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View06")).setDescription(new SFString("ArtDeco06")).setPosition(new float[] {-3.75f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco06 view")).setUrl(new MFString65().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance6 = new ProtoInstance().setName(new SFString("ArtDeco06"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco06 view source documentation")).setParameter(new MFString66().getArray()).setUrl(new MFString67().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString68().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View07")).setDescription(new SFString("ArtDeco07")).setPosition(new float[] {-2.25f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco07 view")).setUrl(new MFString69().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance7 = new ProtoInstance().setName(new SFString("ArtDeco07"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco07 view source documentation")).setParameter(new MFString70().getArray()).setUrl(new MFString71().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString72().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View08")).setDescription(new SFString("ArtDeco08")).setPosition(new float[] {-0.75f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco08 view")).setUrl(new MFString73().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance8 = new ProtoInstance().setName(new SFString("ArtDeco08"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco08 view source documentation")).setParameter(new MFString74().getArray()).setUrl(new MFString75().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString76().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View09")).setDescription(new SFString("ArtDeco09")).setPosition(new float[] {0.75f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco09 view")).setUrl(new MFString77().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance9 = new ProtoInstance().setName(new SFString("ArtDeco09"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco09 view source documentation")).setParameter(new MFString78().getArray()).setUrl(new MFString79().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString80().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View10")).setDescription(new SFString("ArtDeco10")).setPosition(new float[] {2.25f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco10 view")).setUrl(new MFString81().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance10 = new ProtoInstance().setName(new SFString("ArtDeco10"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco10 view source documentation")).setParameter(new MFString82().getArray()).setUrl(new MFString83().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString84().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View11")).setDescription(new SFString("ArtDeco11")).setPosition(new float[] {3.75f ,2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {3.75f ,2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco11 view")).setUrl(new MFString85().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance11 = new ProtoInstance().setName(new SFString("ArtDeco11"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco11 view source documentation")).setParameter(new MFString86().getArray()).setUrl(new MFString87().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString88().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View12")).setDescription(new SFString("ArtDeco12")).setPosition(new float[] {-3.75f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco12 view")).setUrl(new MFString89().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance12 = new ProtoInstance().setName(new SFString("ArtDeco12"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco12 view source documentation")).setParameter(new MFString90().getArray()).setUrl(new MFString91().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString92().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View13")).setDescription(new SFString("ArtDeco13")).setPosition(new float[] {-2.25f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco13 view")).setUrl(new MFString93().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance13 = new ProtoInstance().setName(new SFString("ArtDeco13"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco13 view source documentation")).setParameter(new MFString94().getArray()).setUrl(new MFString95().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString96().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View14")).setDescription(new SFString("ArtDeco14")).setPosition(new float[] {-0.75f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco14 view")).setUrl(new MFString97().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance14 = new ProtoInstance().setName(new SFString("ArtDeco14"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco14 view source documentation")).setParameter(new MFString98().getArray()).setUrl(new MFString99().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString100().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View15")).setDescription(new SFString("ArtDeco15")).setPosition(new float[] {0.75f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco15 view")).setUrl(new MFString101().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance15 = new ProtoInstance().setName(new SFString("ArtDeco15"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco15 view source documentation")).setParameter(new MFString102().getArray()).setUrl(new MFString103().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString104().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View16")).setDescription(new SFString("ArtDeco16")).setPosition(new float[] {2.25f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco16 view")).setUrl(new MFString105().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance16 = new ProtoInstance().setName(new SFString("ArtDeco16"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco16 view source documentation")).setParameter(new MFString106().getArray()).setUrl(new MFString107().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString108().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View17")).setDescription(new SFString("ArtDeco17")).setPosition(new float[] {3.75f ,0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {3.75f ,0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco17 view")).setUrl(new MFString109().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance17 = new ProtoInstance().setName(new SFString("ArtDeco17"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco17 view source documentation")).setParameter(new MFString110().getArray()).setUrl(new MFString111().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString112().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View18")).setDescription(new SFString("ArtDeco18")).setPosition(new float[] {-3.75f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco18 view")).setUrl(new MFString113().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance18 = new ProtoInstance().setName(new SFString("ArtDeco18"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco18 view source documentation")).setParameter(new MFString114().getArray()).setUrl(new MFString115().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString116().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View19")).setDescription(new SFString("ArtDeco19")).setPosition(new float[] {-2.25f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco19 view")).setUrl(new MFString117().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance19 = new ProtoInstance().setName(new SFString("ArtDeco19"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco19 view source documentation")).setParameter(new MFString118().getArray()).setUrl(new MFString119().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString120().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View20")).setDescription(new SFString("ArtDeco20")).setPosition(new float[] {-0.75f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco20 view")).setUrl(new MFString121().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance20 = new ProtoInstance().setName(new SFString("ArtDeco20"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco20 view source documentation")).setParameter(new MFString122().getArray()).setUrl(new MFString123().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString124().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View21")).setDescription(new SFString("ArtDeco21")).setPosition(new float[] {0.75f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco21 view")).setUrl(new MFString125().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance21 = new ProtoInstance().setName(new SFString("ArtDeco21"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco21 view source documentation")).setParameter(new MFString126().getArray()).setUrl(new MFString127().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString128().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View22")).setDescription(new SFString("ArtDeco22")).setPosition(new float[] {2.25f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco22 view")).setUrl(new MFString129().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance22 = new ProtoInstance().setName(new SFString("ArtDeco22"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco22 view source documentation")).setParameter(new MFString130().getArray()).setUrl(new MFString131().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString132().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View23")).setDescription(new SFString("ArtDeco23")).setPosition(new float[] {3.75f ,-0.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {3.75f ,-0.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco23 view")).setUrl(new MFString133().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance23 = new ProtoInstance().setName(new SFString("ArtDeco23"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco23 view source documentation")).setParameter(new MFString134().getArray()).setUrl(new MFString135().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString136().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View24")).setDescription(new SFString("ArtDeco24")).setPosition(new float[] {-3.75f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco24 view")).setUrl(new MFString137().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance24 = new ProtoInstance().setName(new SFString("ArtDeco24"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco24 view source documentation")).setParameter(new MFString138().getArray()).setUrl(new MFString139().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString140().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View25")).setDescription(new SFString("ArtDeco25")).setPosition(new float[] {-2.25f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco25 view")).setUrl(new MFString141().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance25 = new ProtoInstance().setName(new SFString("ArtDeco25"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco25 view source documentation")).setParameter(new MFString142().getArray()).setUrl(new MFString143().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString144().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View26")).setDescription(new SFString("ArtDeco26")).setPosition(new float[] {-0.75f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco26 view")).setUrl(new MFString145().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance26 = new ProtoInstance().setName(new SFString("ArtDeco26"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco26 view source documentation")).setParameter(new MFString146().getArray()).setUrl(new MFString147().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString148().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View27")).setDescription(new SFString("ArtDeco27")).setPosition(new float[] {0.75f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco27 view")).setUrl(new MFString149().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance27 = new ProtoInstance().setName(new SFString("ArtDeco27"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco27 view source documentation")).setParameter(new MFString150().getArray()).setUrl(new MFString151().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString152().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View28")).setDescription(new SFString("ArtDeco28")).setPosition(new float[] {2.25f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco28 view")).setUrl(new MFString153().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance28 = new ProtoInstance().setName(new SFString("ArtDeco28"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco28 view source documentation")).setParameter(new MFString154().getArray()).setUrl(new MFString155().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString156().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View29")).setDescription(new SFString("ArtDeco29")).setPosition(new float[] {3.75f ,-2.25f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {3.75f ,-2.25f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco29 view")).setUrl(new MFString157().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance29 = new ProtoInstance().setName(new SFString("ArtDeco29"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco29 view source documentation")).setParameter(new MFString158().getArray()).setUrl(new MFString159().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString160().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View30")).setDescription(new SFString("ArtDeco30")).setPosition(new float[] {-3.75f ,-3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-3.75f ,-3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco30 view")).setUrl(new MFString161().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance30 = new ProtoInstance().setName(new SFString("ArtDeco30"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco30 view source documentation")).setParameter(new MFString162().getArray()).setUrl(new MFString163().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString164().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View31")).setDescription(new SFString("ArtDeco31")).setPosition(new float[] {-2.25f ,-3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-2.25f ,-3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco31 view")).setUrl(new MFString165().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance31 = new ProtoInstance().setName(new SFString("ArtDeco31"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco31 view source documentation")).setParameter(new MFString166().getArray()).setUrl(new MFString167().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString168().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View32")).setDescription(new SFString("ArtDeco32")).setPosition(new float[] {-0.75f ,-3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {-0.75f ,-3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco32 view")).setUrl(new MFString169().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance32 = new ProtoInstance().setName(new SFString("ArtDeco32"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco32 view source documentation")).setParameter(new MFString170().getArray()).setUrl(new MFString171().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString172().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View33")).setDescription(new SFString("ArtDeco33")).setPosition(new float[] {0.75f ,-3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {0.75f ,-3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco33 view")).setUrl(new MFString173().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance33 = new ProtoInstance().setName(new SFString("ArtDeco33"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco33 view source documentation")).setParameter(new MFString174().getArray()).setUrl(new MFString175().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString176().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style"))))))))
          .addChild(new Viewpoint().setDEF(new SFString("View34")).setDescription(new SFString("ArtDeco34")).setPosition(new float[] {2.25f ,-3.75f ,3f }))
          .addChild(new Transform().setTranslation(new float[] {2.25f ,-3.75f ,0f })
            .addChild(new Anchor().setDescription(new SFString("ArtDeco34 view")).setUrl(new MFString177().getArray())
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(ProtoInstance34 = new ProtoInstance().setName(new SFString("ArtDeco34"))))
                .setGeometry(new Sphere().setUSE(new SFString("Ball")))))
            .addChild(new Transform().setTranslation(new float[] {0f ,0.3f ,0.5f })
              .addChild(new Anchor().setDescription(new SFString("ArtDeco34 view source documentation")).setParameter(new MFString178().getArray()).setUrl(new MFString179().getArray())
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setUSE(new SFString("TextMat"))))
                  .setGeometry(new Text().setString(new MFString180().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("Style")))))))))
        .addChild(new ROUTE().setFromField(new SFString("fraction_changed")).setFromNode(new SFString("Close_Time")).setToField(new SFString("set_fraction")).setToNode(new SFString("Close_Mover")))
        .addChild(new ROUTE().setFromField(new SFString("value_changed")).setFromNode(new SFString("Close_Mover")).setToField(new SFString("set_translation")).setToNode(new SFString("Close_travel"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco00","ArtDecoPrototypes.wrl#ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco00"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco01","ArtDecoPrototypes.wrl#ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco01"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco03","ArtDecoPrototypes.wrl#ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco03"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco06","ArtDecoPrototypes.wrl#ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco06"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco07","ArtDecoPrototypes.wrl#ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco07"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco10","ArtDecoPrototypes.wrl#ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco10"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco11","ArtDecoPrototypes.wrl#ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco11"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco12","ArtDecoPrototypes.wrl#ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco12"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco14","ArtDecoPrototypes.wrl#ArtDeco14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco14"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco15","ArtDecoPrototypes.wrl#ArtDeco15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco15"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco16","ArtDecoPrototypes.wrl#ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco16"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco17","ArtDecoPrototypes.wrl#ArtDeco17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco17"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco19","ArtDecoPrototypes.wrl#ArtDeco19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco19"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco20","ArtDecoPrototypes.wrl#ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco20"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco22","ArtDecoPrototypes.wrl#ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco22"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco23","ArtDecoPrototypes.wrl#ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco23"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco26","ArtDecoPrototypes.wrl#ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco26"});
  }
}
private class MFString27 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco27","ArtDecoPrototypes.wrl#ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco27"});
  }
}
private class MFString28 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco28","ArtDecoPrototypes.wrl#ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco28"});
  }
}
private class MFString29 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco29","ArtDecoPrototypes.wrl#ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco29"});
  }
}
private class MFString30 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco30","ArtDecoPrototypes.wrl#ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco30"});
  }
}
private class MFString31 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco31","ArtDecoPrototypes.wrl#ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco31"});
  }
}
private class MFString32 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco32","ArtDecoPrototypes.wrl#ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco32"});
  }
}
private class MFString33 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco33","ArtDecoPrototypes.wrl#ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco33"});
  }
}
private class MFString34 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoPrototypes.json#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco34","ArtDecoPrototypes.wrl#ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco34"});
  }
}
private class MFFloat35 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,2.5f ,0f ,0f ,0f ,0f ,0f ,-2.5f ,0f ,0f ,0f ,0f ,0f ,2.5f ,0f });
  }
}
private class MFString37 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#Front"});
  }
}
private class MFString38 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/gridBack.json","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"});
  }
}
private class MFString39 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View00"});
  }
}
private class MFString40 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco00"});
  }
}
private class MFString42 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco00"});
  }
}
private class MFString43 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString44 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString45 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View01"});
  }
}
private class MFString46 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString47 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco01"});
  }
}
private class MFString48 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco01"});
  }
}
private class MFString49 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View02"});
  }
}
private class MFString50 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString51 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco02"});
  }
}
private class MFString52 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco02"});
  }
}
private class MFString53 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View03"});
  }
}
private class MFString54 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString55 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco03"});
  }
}
private class MFString56 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco03"});
  }
}
private class MFString57 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View04"});
  }
}
private class MFString58 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString59 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco04"});
  }
}
private class MFString60 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco04"});
  }
}
private class MFString61 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View05"});
  }
}
private class MFString62 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString63 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco05"});
  }
}
private class MFString64 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco05"});
  }
}
private class MFString65 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View06"});
  }
}
private class MFString66 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString67 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco06"});
  }
}
private class MFString68 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco06"});
  }
}
private class MFString69 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View07"});
  }
}
private class MFString70 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString71 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco07"});
  }
}
private class MFString72 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco07"});
  }
}
private class MFString73 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View08"});
  }
}
private class MFString74 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString75 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco08"});
  }
}
private class MFString76 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco08"});
  }
}
private class MFString77 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View09"});
  }
}
private class MFString78 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString79 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco09"});
  }
}
private class MFString80 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco09"});
  }
}
private class MFString81 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View10"});
  }
}
private class MFString82 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString83 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco10"});
  }
}
private class MFString84 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco10"});
  }
}
private class MFString85 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View11"});
  }
}
private class MFString86 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString87 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco11"});
  }
}
private class MFString88 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco11"});
  }
}
private class MFString89 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View12"});
  }
}
private class MFString90 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString91 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco12"});
  }
}
private class MFString92 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco12"});
  }
}
private class MFString93 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View13"});
  }
}
private class MFString94 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString95 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco3","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco13"});
  }
}
private class MFString96 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco13"});
  }
}
private class MFString97 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View14"});
  }
}
private class MFString98 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString99 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco4","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco14"});
  }
}
private class MFString100 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco14"});
  }
}
private class MFString101 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View15"});
  }
}
private class MFString102 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString103 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco15"});
  }
}
private class MFString104 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco15"});
  }
}
private class MFString105 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View16"});
  }
}
private class MFString106 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString107 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco16"});
  }
}
private class MFString108 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco16"});
  }
}
private class MFString109 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View17"});
  }
}
private class MFString110 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString111 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco17"});
  }
}
private class MFString112 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco17"});
  }
}
private class MFString113 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View18"});
  }
}
private class MFString114 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString115 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco18"});
  }
}
private class MFString116 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco18"});
  }
}
private class MFString117 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View19"});
  }
}
private class MFString118 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString119 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco9","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco19"});
  }
}
private class MFString120 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco19"});
  }
}
private class MFString121 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View20"});
  }
}
private class MFString122 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString123 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco20"});
  }
}
private class MFString124 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco20"});
  }
}
private class MFString125 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View21"});
  }
}
private class MFString126 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString127 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco21"});
  }
}
private class MFString128 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco21"});
  }
}
private class MFString129 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View22"});
  }
}
private class MFString130 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString131 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco22"});
  }
}
private class MFString132 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco22"});
  }
}
private class MFString133 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View23"});
  }
}
private class MFString134 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString135 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco23"});
  }
}
private class MFString136 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco23"});
  }
}
private class MFString137 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View24"});
  }
}
private class MFString138 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString139 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco24"});
  }
}
private class MFString140 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco24"});
  }
}
private class MFString141 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View25"});
  }
}
private class MFString142 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString143 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco25"});
  }
}
private class MFString144 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco25"});
  }
}
private class MFString145 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View26"});
  }
}
private class MFString146 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString147 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco26"});
  }
}
private class MFString148 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco26"});
  }
}
private class MFString149 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View27"});
  }
}
private class MFString150 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString151 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco27"});
  }
}
private class MFString152 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco27"});
  }
}
private class MFString153 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View28"});
  }
}
private class MFString154 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString155 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco28"});
  }
}
private class MFString156 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco28"});
  }
}
private class MFString157 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View29"});
  }
}
private class MFString158 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString159 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco29"});
  }
}
private class MFString160 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco29"});
  }
}
private class MFString161 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View30"});
  }
}
private class MFString162 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString163 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco30"});
  }
}
private class MFString164 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco30"});
  }
}
private class MFString165 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View31"});
  }
}
private class MFString166 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString167 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco31"});
  }
}
private class MFString168 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco31"});
  }
}
private class MFString169 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View32"});
  }
}
private class MFString170 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString171 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco32"});
  }
}
private class MFString172 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco32"});
  }
}
private class MFString173 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View33"});
  }
}
private class MFString174 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString175 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco33"});
  }
}
private class MFString176 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco33"});
  }
}
private class MFString177 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"#View34"});
  }
}
private class MFString178 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_source"});
  }
}
private class MFString179 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../html/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.html#ProtoDeclare_ArtDeco34"});
  }
}
private class MFString180 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDeco34"});
  }
}
}

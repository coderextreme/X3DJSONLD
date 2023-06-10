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
public class Trebuchet {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Trebuchet().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/Trebuchet.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("Trebuchet.x3d"))
        .addMeta(new meta().setName("description").setContent("Working model of a 14th century Trebuchet Catapult."))
        .addMeta(new meta().setName("creator").setContent("LT Joe Roth"))
        .addMeta(new meta().setName("created").setContent("20 June 2001"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("version").setContent("7.8"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Trebuchet.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://trebuchet.com"))
        .addMeta(new meta().setName("reference").setContent("http://members.home.net/dimona"))
        .addMeta(new meta().setName("subject").setContent("trebuchet catapult Monty Python"))
        .addMeta(new meta().setName("reference").setContent("Permission granted for use of the VRML chicken I own a copy of Monty Python and the Holy Grail I have requested permission to use for non profit use. No response received. I will use the sound clips under \"Fair Use\" clause of the DMCA"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/WorkingGroups/media/textures/nature/leaves_5.jpg.htm"))
        .addMeta(new meta().setName("reference").setContent("http://www.revemonde.net/UniversalMedia/textures/nature/leaves_5.jpg.htm"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Trebuchet.x3d"))
        .addChild(new Background().setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setGroundAngle(new MFFloat3().getArray()).setGroundColor(new MFColor4().getArray()).setLeftUrl(new MFString5().getArray()).setRightUrl(new MFString6().getArray()).setSkyAngle(new MFFloat7().getArray()).setSkyColor(new MFColor8().getArray()).setTopUrl(new MFString9().getArray()))
        .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f)
          .setSource(new AudioClip().setDEF("HolyGrail").setDescription("HolyGrail").setLoop(true).setUrl(new MFString10().getArray())))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(new float[] {10000f,1f,10000f}))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new MFString11().getArray()))))
        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.5f,0.5f,0.5f}).setTranslation(new float[] {10.5f,6.5f,4.5f})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("TextAppearance")
              .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setEmissiveColor(new float[] {1f,1f,0f})))
            .setGeometry(new Text().setString(new MFString12().getArray())
              .setFontStyle(new FontStyle()))))
        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.5f,0.5f,0.5f}).setTranslation(new float[] {11f,5.5f,6f})
          .addChild(new Switch().setDEF("Weight").setWhichChoice(0)
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("TextAppearance"))
                .setGeometry(new Text().setString(new MFString13().getArray()))))
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("TextAppearance"))
                .setGeometry(new Text().setString(new MFString14().getArray()))))
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("TextAppearance"))
                .setGeometry(new Text().setString(new MFString15().getArray()))))
            .addChild(new Group()
              .addChild(new Shape()
                .setAppearance(new Appearance().setUSE("TextAppearance"))
                .setGeometry(new Text().setString(new MFString16().getArray())))))
          .addChild(new TouchSensor().setDEF("weightselector").setDescription("weight selector"))
          .addChild(new Transform().setTranslation(new float[] {8f,0f,0f})
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {20f,1f,1f}))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1.0000f))))))
        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setTranslation(new float[] {10f,0.5f,4.5f})
          .addChild(new Transform().setDEF("launch").setTranslation(new float[] {0f,2f,5f})
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))
                .setGeometry(new Text().setString(new MFString17().getArray())
                  .setFontStyle(new FontStyle())))
              .addChild(new Transform().setTranslation(new float[] {2f,0.3f,0f})
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(new float[] {5f,1f,1f}))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setTransparency(1.0000f)))))
              .addChild(new Switch().setDEF("PigdogMonk").setWhichChoice(-1)
                .addChild(new Group()
                  .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f)
                    .setSource(new AudioClip().setDEF("PigDogSound").setDescription("PigDogSound").setUrl(new MFString18().getArray()))))
                .addChild(new Group()
                  .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f)
                    .setSource(new AudioClip().setDEF("MonkSound").setDescription("MonkSound").setUrl(new MFString19().getArray()))))))
            .addChild(new TouchSensor().setDEF("Launch").setDescription("launch!")))
          .addChild(new Transform()
            .addChild(new Switch().setDEF("projectilename").setWhichChoice(0)
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString20().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5000f))))
                .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f).setPriority(1.0000f)
                  .setSource(new AudioClip().setDEF("HolyHandGrenadeSound").setDescription("HolyHandGrenadeSound").setUrl(new MFString21().getArray()))))
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString22().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5000f))))
                .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f)
                  .setSource(new AudioClip().setDEF("CowSound").setDescription("CowSound").setUrl(new MFString23().getArray()))))
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString24().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5000f))))
                .addChild(new Sound().setMaxBack(1000.0000f).setMaxFront(1000.0000f).setPriority(1.0000f)
                  .setSource(new AudioClip().setDEF("HamsterSound").setDescription("HamsterSound").setUrl(new MFString25().getArray())))))))
        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-1.67f})
          .addChild(new Transform().setDEF("aft").setTranslation(new float[] {5f,5f,15f})
            .addChild(new Transform().setTranslation(new float[] {-2.5f,-4.5f,-2f})
              .addChild(new Transform().setUSE("launch")))))
        .addChild(new Transform().setTranslation(new float[] {0f,3f,0f})
          .addChild(new Shape().setDEF("plank")
            .setGeometry(new Box().setSize(new float[] {25f,1f,1f}))
            .setAppearance(new Appearance().setDEF("wood")
              .setTexture(new ImageTexture().setDEF("woodTexture").setUrl(new MFString26().getArray()))))
          .addChild(new Transform().setDEF("angledsupport").setRotation(new float[] {0f,0f,1f,1f}).setTranslation(new float[] {-5f,10f,0f})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setDEF("angledsupport2").setRotation(new float[] {0f,0f,1f,-1f}).setTranslation(new float[] {5f,10f,0f})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setDEF("verticalsupport").setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {0.9f,1f,1f}).setTranslation(new float[] {0f,11f,0f})
            .addChild(new Shape().setUSE("plank"))
            .addComments("Main Verticle Support"))
          .addChild(new Transform().setDEF("horizontalsupport").setScale(new float[] {0.4f,1f,1f}).setTranslation(new float[] {0f,10f,0f})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {0.6f,1f,1f}).setTranslation(new float[] {0f,5f,10f})
            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,0.4f})
              .addChild(new Shape().setUSE("plank"))))
          .addChild(new Transform().setDEF("panel").setTranslation(new float[] {0f,18.2f,-0.3f})
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {5f,5f,0.5f}))
              .setAppearance(new Appearance().setUSE("wood"))))
          .addChild(new Transform().setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,0.6f,2.5f})
            .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f})
              .addChild(new Shape()
                .setGeometry(new Extrusion().setBeginCap(false).setCrossSection(new MFVec2f27().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f28().getArray()))
                .setAppearance(new Appearance().setUSE("wood")))))
          .addChild(new Transform().setDEF("flinger").setCenter(new float[] {7f,0f,0f}).setRotation(new float[] {0f,0f,1f,0.82f}).setScale(new float[] {0.9f,1f,1f}).setTranslation(new float[] {-7f,18f,2.5f})
            .addChild(new Transform()
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new float[] {35f,1f,1f}))
                .setAppearance(new Appearance().setUSE("wood")))
              .addChild(new Transform().setTranslation(new float[] {7f,0f,0f})
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(new float[] {8f,2f,2f}))
                  .setAppearance(new Appearance().setUSE("wood")))))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setScale(new float[] {0.2f,0.2f,0.2f}).setTranslation(new float[] {-15f,-1f,0f})
              .addChild(new Shape().setDEF("Torus")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setSpecularColor(new float[] {1f,1f,1f})))
                .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.5700f).setCrossSection(new MFVec2f29().getArray()).setEndCap(false).setSpine(new MFVec3f30().getArray())))
              .addChild(new Transform().setTranslation(new float[] {1f,0f,2f})
                .addChild(new Shape()
                  .setAppearance(new Appearance().setDEF("rope")
                    .setTexture(new ImageTexture().setUSE("woodTexture")))
                  .setGeometry(new Sphere().setRadius(1.5000f)))
                .addComments("knott")))
            .addComments("The Unicorn")
            .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.2f}).setScale(new float[] {0.2f,0.2f,0.2f}).setTranslation(new float[] {-18.3f,0.3f,0f})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(10.0000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setSpecularColor(new float[] {1f,1f,1f}))))
              .addChild(new Transform().setTranslation(new float[] {0f,-2.5f,0f})
                .addChild(new Shape().setUSE("Torus"))
                .addComments("The Unicorn")
                .addChild(new Transform().setTranslation(new float[] {-2f,0f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(1.5000f))
                    .setAppearance(new Appearance().setUSE("rope")))
                  .addComments("Knott")))
              .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.2f}).setTranslation(new float[] {15f,55f,-11f})
                .addChild(new Transform().setScale(new float[] {5f,5f,5f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.7600f).setCrossSection(new MFVec2f31().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f32().getArray()))))))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,-1.7f}).setTranslation(new float[] {-17f,-4.5f,0f})
              .addChild(new Transform().setScale(new float[] {0.2f,0.2f,0.2f})
                .addChild(new Shape().setUSE("Torus")
                  .addComments("Knot"))
                .addChild(new Transform().setTranslation(new float[] {-1f,0f,1.7f})
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(1.5000f))
                    .setAppearance(new Appearance().setUSE("rope"))))))
            .addChild(new Transform().setDEF("RnS")
              .addChild(new Transform().setDEF("ropes")
                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,-0.82f}).setTranslation(new float[] {7f,-26f,-2.5f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.7600f).setCrossSection(new MFVec2f33().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f34().getArray())))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.7600f).setCrossSection(new MFVec2f35().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f36().getArray())))))
              .addChild(new Transform().setDEF("sling").setRotation(new float[] {0f,0f,1f,-0.82f}).setTranslation(new float[] {-4f,-15.3f,0f})
                .addChild(new Transform()
                  .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-1.57f}).setScale(new float[] {1f,1.3f,1f}).setTranslation(new float[] {0.5f,0f,-1f})
                    .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f})
                      .addChild(new Transform().setScale(new float[] {0.3f,0.3f,0.3f})
                        .addChild(new Shape().setDEF("halfsling")
                          .setAppearance(new Appearance().setDEF("clear")
                            .setMaterial(new Material().setTransparency(0.5000f)))
                          .setGeometry(new Extrusion().setCrossSection(new MFVec2f37().getArray()).setSpine(new MFVec3f38().getArray())))
                        .addChild(new Transform().setScale(new float[] {0.3f,0.3f,0.3f}).setTranslation(new float[] {0f,-3.5f,11.5f})
                          .addChild(new Shape().setUSE("Torus"))
                          .addChild(new Transform().setTranslation(new float[] {0f,0f,2f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("rope"))
                              .setGeometry(new Sphere().setRadius(1.5000f))))))
                      .addChild(new Transform().setScale(new float[] {0.3f,0.3f,0.3f}).setTranslation(new float[] {2f,0f,0f})
                        .addChild(new Shape().setUSE("halfsling"))
                        .addChild(new Transform().setScale(new float[] {0.3f,0.3f,0.3f}).setTranslation(new float[] {0f,-3.5f,11.3f})
                          .addChild(new Shape().setUSE("Torus"))
                          .addChild(new Transform().setTranslation(new float[] {0f,0f,2f})
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("rope"))
                              .setGeometry(new Sphere().setRadius(1.5000f))))))
                      .addChild(new Transform().setTranslation(new float[] {1f,-1f,0f})
                        .addChild(new Shape()
                          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.7850f).setCrossSection(new MFVec2f39().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f40().getArray()))
                          .setAppearance(new Appearance().setUSE("clear")))))
                    .addChild(new TouchSensor().setDEF("LauncheeChoice").setDescription("launcher choice")))
                  .addChild(new Transform().setDEF("projectiletransform").setScale(new float[] {0.01f,0.01f,0.01f})
                    .addChild(new Switch().setDEF("projectile").setWhichChoice(0)
                      .addChild(new Group()
                        .addChild(new Transform().setTranslation(new float[] {0f,0.7f,0f})
                          .addChild(new Shape()
                            .setGeometry(new Sphere().setRadius(0.7000f))
                            .setAppearance(new Appearance().setDEF("black")
                              .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f}).setSpecularColor(new float[] {1f,1f,1f}))))))
                      .addChild(new Group()
                        .addChild(new Transform()
                          .addChild(new Inline().setUrl(new MFString41().getArray()))))
                      .addChild(new Group()
                        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.4f,0.4f,0.4f}).setTranslation(new float[] {0f,0.7f,0f})
                          .addChild(new Inline().setUrl(new MFString42().getArray()))))))))))
          .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,18f,2.5f})
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(8.0000f).setRadius(0.4000f))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f}).setSpecularColor(new float[] {1f,1f,1f}))))
            .addComments("Top Pivot"))
          .addChild(new Transform().setDEF("verticalweight")
            .addChild(new Transform().setTranslation(new float[] {4f,18f,1.8f})
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new float[] {1f,10f,0.5f}))
                .setAppearance(new Appearance().setUSE("wood"))))
            .addChild(new Transform().setTranslation(new float[] {4f,18f,3.2f})
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new float[] {1f,10f,0.5f}))
                .setAppearance(new Appearance().setUSE("wood"))))
            .addChild(new Transform().setTranslation(new float[] {4f,14f,2.5f})
              .addComments("CounterWeight")
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(4.0000f).setRadius(1.5000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f}).setSpecularColor(new float[] {1f,1f,1f})))))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {4f,22f,2.5f})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(2.5000f).setRadius(0.3000f))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f}).setSpecularColor(new float[] {1f,1f,1f}))))))
          .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {0.2f,0.2f,0.2f}).setTranslation(new float[] {-11.5f,-1f,2f})
            .addChild(new Transform().setDEF("screw").setRotation(new float[] {1f,0f,0f,1.57f})
              .addChild(new Shape().setUSE("Torus"))
              .addChild(new Transform().setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,0f,7f})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setHeight(10.0000f).setRadius(0.7000f))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setSpecularColor(new float[] {1f,1f,1f}))))))
            .addChild(new Transform().setTranslation(new float[] {0f,0f,7f})
              .addChild(new Transform().setUSE("screw")))
            .addComments("Release Pin")
            .addChild(new Transform().setDEF("Pin").setRotation(new float[] {1f,0f,0f,-1.57f}).setTranslation(new float[] {0f,0f,-3f})
              .addChild(new Transform().setUSE("screw"))))
          .addChild(new Transform().setTranslation(new float[] {0f,0f,5f})
            .addChild(new Shape().setUSE("plank"))
            .addChild(new Transform().setUSE("angledsupport"))
            .addChild(new Transform().setUSE("angledsupport2"))
            .addChild(new Transform().setUSE("verticalsupport"))
            .addChild(new Transform().setUSE("horizontalsupport"))
            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.6f,1f,1f}).setTranslation(new float[] {0f,-11f,-2.5f})
              .addChild(new Transform().setUSE("horizontalsupport")))
            .addChild(new Transform().setRotation(new float[] {0f,0f,1f,-1.57f}).setScale(new float[] {0.6f,1f,1f}).setTranslation(new float[] {0f,5f,-10f})
              .addChild(new Transform().setRotation(new float[] {0f,1f,0f,0.4f})
                .addChild(new Shape().setUSE("plank"))))
            .addChild(new Transform().setTranslation(new float[] {0f,0f,0.6f})
              .addChild(new Transform().setUSE("panel"))))
          .addChild(new Transform().setTranslation(new float[] {10f,-1f,2.5f})
            .addChild(new Shape().setDEF("Axle")
              .setGeometry(new Box().setSize(new float[] {1f,1f,8f}))
              .setAppearance(new Appearance().setUSE("wood")))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,0f,4.5f})
              .addChild(new Shape().setDEF("wheel")
                .setGeometry(new Cylinder().setRadius(2.0000f))
                .setAppearance(new Appearance().setUSE("wood")))
              .addChild(new Shape().setDEF("tracks")
                .setGeometry(new Sphere().setRadius(1.5000f))
                .setAppearance(new Appearance().setUSE("black")))
              .addChild(new Transform().setTranslation(new float[] {0f,0.55f,0f})
                .addChild(new Shape().setDEF("hub")
                  .setGeometry(new Sphere().setRadius(1.5000f))
                  .setAppearance(new Appearance().setUSE("black")))))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,0f,-4.5f})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new float[] {0f,-0.55f,0f})
                .addChild(new Shape().setUSE("hub")))))
          .addChild(new Transform().setTranslation(new float[] {-10f,-1f,2.5f})
            .addChild(new Shape().setUSE("Axle"))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,0f,4.5f})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new float[] {0f,0.55f,0f})
                .addChild(new Shape().setUSE("hub"))))
            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,0f,-4.5f})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new float[] {0f,-0.55f,0f})
                .addChild(new Shape().setUSE("hub"))))
            .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-0.6f}).setTranslation(new float[] {0f,100f,400f})
              .addChild(new Transform().setTranslation(new float[] {1f,3f,0f})
                .addChild(new Viewpoint().setDescription("Side")))
              .addChild(new Transform().setUSE("launch"))
              .addChild(new Transform()
                .addChild(new TouchSensor().setUSE("LauncheeChoice"))
                .addChild(new Switch().setUSE("projectilename"))
                .addChild(new Transform().setTranslation(new float[] {2.5f,0f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(new float[] {5f,0.5f,0.5f}))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setTransparency(1.0000f))))))
              .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f}).setTranslation(new float[] {0f,-1f,0f})
                .addChild(new TouchSensor().setUSE("weightselector"))
                .addChild(new Switch().setUSE("Weight"))
                .addChild(new Transform().setTranslation(new float[] {8f,0f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(new float[] {17f,1f,0.5f}))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setTransparency(1.0000f)))))))
            .addChild(new Transform().setDEF("ProjectileTransform").setTranslation(new float[] {14.25f,1.25f,0f})
              .addChild(new Switch().setUSE("projectile"))
              .addChild(new Transform().setRotation(new float[] {0f,1f,0f,1.57f}).setTranslation(new float[] {0f,1f,0f})
                .addChild(new Viewpoint().setDescription("Projectile Cam").setPosition(new float[] {0f,0f,15f}))))
            .addChild(new Transform().setTranslation(new float[] {20f,2f,0f})
              .addChild(new Transform().setDEF("Front").setRotation(new float[] {0f,1f,0f,1.57f})
                .addChild(new Viewpoint().setDescription("Fore"))))
            .addChild(new Transform().setTranslation(new float[] {-8f,4f,0f})
              .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-1.57f})
                .addChild(new Viewpoint().setDescription("Aft"))))
            .addChild(new Script().setDEF("WeightScript")
              .addField(new field().setType("SFBool").setName("set_boolean").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFInt32").setName("whichchoice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFFloat").setName("CounterWeight").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	whichchoice =0;\n"+
"	CounterWeight=100;\n"+
"}\n"+
"\n"+
"function set_boolean ( boolean_input, eventTime)\n"+
"{\n"+
"\n"+
"	if ( boolean_input== false ) { return; } // ignore the unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"	if (whichchoice == 0)CounterWeight=50.00;\n"+
"	if (whichchoice == 1)CounterWeight=500.00;\n"+
"	if (whichchoice == 2)CounterWeight=1000.00;\n"+
"	if (whichchoice == 3)CounterWeight=10000.00;\n"+
"        if ( whichchoice ==4 ) { whichchoice = 0; CounterWeight=50; }\n"+
"\n"+
"\n"+
"        Browser.print ('CounterWeight ='+CounterWeight);\n"+
"}"))
            .addChild(new Script().setDEF("LauncheeScript")
              .addField(new field().setType("SFBool").setName("set_boolean").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFInt32").setName("whichchoice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFFloat").setName("ProjectileWeight").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"        whichchoice = whichchoice +1;\n"+
"        if (whichchoice == 0)ProjectileWeight=10.00;\n"+
"        if (whichchoice == 1)ProjectileWeight=1000.00;\n"+
"	if (whichchoice == 2)ProjectileWeight=5;\n"+
"\n"+
"	if ( whichchoice ==3 ) { whichchoice = 0; ProjectileWeight=10.00; }\n"+
"	Browser.print ('Projectile Weight'+ProjectileWeight);\n"+
"}"))
            .addChild(new Script().setDEF("PigdogMonkScript")
              .addField(new field().setType("SFBool").setName("set_boolean").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFInt32").setName("whichchoice").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function set_boolean (boolean_input, eventTime)\n"+
"{\n"+
"	if ( boolean_input== false ) { return; } // ignore unclick\n"+
"\n"+
"        whichchoice = whichchoice +1;\n"+
"\n"+
"        if ( whichchoice ==2 )  whichchoice = 0;\n"+
"\n"+
"\n"+
"}"))
            .addChild(new Script().setDEF("Mover")
              .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName("set_MassCounterWeight").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName("set_MassProjectileWeight").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName("MassCounterWeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
              .addField(new field().setType("SFFloat").setName("MassProjectileWeight").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
              .addField(new field().setType("SFVec3f").setName("transparent").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFVec3f").setName("value_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	MassCounterWeight=100;\n"+
"	MassProjectileWeight=10;\n"+
"	Browser.print ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.print ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.print ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.print ('new MassCounterWeight =' + MassCounterWeight);\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction ( fraction, eventTime )\n"+
"{\n"+
"	var TrebuchetHeight=45;\n"+
"	var Height =25;\n"+
"      	x = (2*(MassCounterWeight/MassProjectileWeight)*Height*fraction)-.5*TrebuchetHeight;\n"+
"	// start at TrebuchetHeight and keep along z axis (z=zero)\n"+
"	y =  (MassCounterWeight/MassProjectileWeight)*Height*Math.sin(fraction*3.14);\n"+
"        z = 0;\n"+
"        transparent = new SFVec3f (1,1,1);\n"+
"     if (y <1.5*TrebuchetHeight  )if (x<TrebuchetHeight)\n"+
"		{\n"+
"		x=x-10;\n"+
"		y=y+1;\n"+
"		transparent = new SFVec3f(.01, .01, .01);\n"+
"			}\n"+
"\n"+
"	value_changed = new SFVec3f (x, y, z);\n"+
"	Browser.print ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}"))))
        .addChild(new TimeSensor().setDEF("clock").setCycleInterval(10d))
        .addChild(new PositionInterpolator().setDEF("verticalweightpath").setKey(new MFFloat43().getArray()).setKeyValue(new MFVec3f44().getArray()))
        .addChild(new OrientationInterpolator().setDEF("flingerangles").setKey(new MFFloat45().getArray()).setKeyValue(new MFRotation46().getArray()))
        .addChild(new PositionInterpolator().setDEF("pinpath").setKey(new MFFloat47().getArray()).setKeyValue(new MFVec3f48().getArray()))
        .addChild(new OrientationInterpolator().setDEF("RnSAngels").setKey(new MFFloat49().getArray()).setKeyValue(new MFRotation50().getArray()))
        .addChild(new PositionInterpolator().setDEF("invisiable").setKey(new MFFloat51().getArray()).setKeyValue(new MFVec3f52().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("invisiable"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("invisiable").setToField("set_scale").setToNode("projectiletransform"))
        .addChild(new ROUTE().setFromField("CounterWeight").setFromNode("WeightScript").setToField("set_MassCounterWeight").setToNode("Mover"))
        .addChild(new ROUTE().setFromField("ProjectileWeight").setFromNode("LauncheeScript").setToField("set_MassProjectileWeight").setToNode("Mover"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("Mover"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Mover").setToField("set_translation").setToNode("ProjectileTransform"))
        .addChild(new ROUTE().setFromField("transparent").setFromNode("Mover").setToField("set_scale").setToNode("ProjectileTransform"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("clock"))
        .addChild(new ROUTE().setFromField("isActive").setFromNode("Launch").setToField("set_boolean").setToNode("PigdogMonkScript"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("PigDogSound"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("Launch").setToField("set_startTime").setToNode("MonkSound"))
        .addChild(new ROUTE().setFromField("whichchoice").setFromNode("PigdogMonkScript").setToField("whichChoice").setToNode("PigdogMonk"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("HolyHandGrenadeSound"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("CowSound"))
        .addChild(new ROUTE().setFromField("touchTime").setFromNode("LauncheeChoice").setToField("set_startTime").setToNode("HamsterSound"))
        .addChild(new ROUTE().setFromField("isActive").setFromNode("LauncheeChoice").setToField("set_boolean").setToNode("LauncheeScript"))
        .addChild(new ROUTE().setFromField("whichchoice").setFromNode("LauncheeScript").setToField("whichChoice").setToNode("projectile"))
        .addChild(new ROUTE().setFromField("whichchoice").setFromNode("LauncheeScript").setToField("whichChoice").setToNode("projectilename"))
        .addChild(new ROUTE().setFromField("isActive").setFromNode("weightselector").setToField("set_boolean").setToNode("WeightScript"))
        .addChild(new ROUTE().setFromField("whichchoice").setFromNode("WeightScript").setToField("whichChoice").setToNode("Weight"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("flingerangles"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("flingerangles").setToField("set_rotation").setToNode("flinger"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("verticalweightpath"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("verticalweightpath").setToField("set_translation").setToNode("verticalweight"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("clock").setToField("set_fraction").setToNode("pinpath"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("pinpath").setToField("set_translation").setToNode("Pin")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.3090f,1.5708f});
  }
}
protected class MFColor4 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.1000f,0.1000f,0.0000f,0.4000f,0.2500f,0.2000f,0.6000f,0.6000f,0.6000f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.3090f,1.5708f});
  }
}
protected class MFColor8 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.2000f,0.7000f,0.0000f,0.5000f,1.0000f,1.0000f,1.0000f,1.0000f});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Sling to Select Projectile"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (50 lbs)"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (500 lbs)"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (1000 lbs)"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (10000 lbs)"});
  }
}
protected class MFString17 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LAUNCH"});
  }
}
protected class MFString18 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"});
  }
}
protected class MFString19 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"});
  }
}
protected class MFString20 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Bowling Ball (10 lbs)"});
  }
}
protected class MFString21 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"});
  }
}
protected class MFString22 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cow (1000 lbs)"});
  }
}
protected class MFString23 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"});
  }
}
protected class MFString24 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Chicken (5 lbs)"});
  }
}
protected class MFString25 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"});
  }
}
protected class MFString26 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"});
  }
}
protected class MFVec2f27 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1.0000f,-0.3800f,0.9200f,-0.3800f,0.7100f,-0.7100f,0.3800f,-0.9200f,0.0000f,-1.0000f,-0.3800f,-0.9200f,-0.7100f,-0.7100f,-0.9200f,-0.3800f,-1.0000f,-0.3800f,-1.0000f,-1.1000f,1.0000f,-1.1000f,1.0000f,-0.3800f});
  }
}
protected class MFVec3f28 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,6.0000f,0.0000f,0.0000f,-11.0000f,0.0000f});
  }
}
protected class MFVec2f29 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.9000f,0.0000f,0.8100f,-0.3400f,0.6300f,-0.6300f,0.3400f,-0.8300f,0.0000f,-0.9000f,-0.3400f,-0.8100f,-0.6300f,-0.6300f,-0.8100f,-0.3400f,-0.9000f,0.0000f,-0.8100f,0.3400f,-0.6300f,0.6300f,-0.3400f,0.8100f,0.0000f,0.9000f,0.3800f,0.8100f,0.6300f,0.6300f,0.8100f,0.3400f,0.9000f,0.0000f});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2.0000f,0.0000f,0.0000f,1.8500f,0.0000f,0.7700f,1.4100f,0.0000f,1.4100f,0.7700f,0.0000f,1.8500f,0.0000f,0.0000f,2.0000f,-0.7700f,0.0000f,1.8500f,-1.4100f,0.0000f,1.4100f,-1.8500f,0.0000f,0.7700f,-2.0000f,0.0000f,0.0000f,-1.8500f,0.0000f,-0.7700f,-1.4100f,0.0000f,-1.4100f,-0.7700f,0.0000f,-1.8500f,0.0000f,0.0000f,-2.0000f,0.7700f,0.0000f,-1.8500f,1.4100f,0.0000f,-1.4100f,1.8500f,0.0000f,-0.7700f,2.0000f,0.0000f,0.0000f});
  }
}
protected class MFVec2f31 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1000f,0.0000f,0.0920f,-0.0380f,0.0710f,-0.0710f,0.0380f,-0.0920f,0.0000f,-0.1000f,-0.0380f,-0.0920f,-0.0710f,-0.0710f,-0.0920f,-0.0380f,-0.1000f,0.0000f,-0.0920f,0.0380f,-0.0710f,0.0710f,-0.0380f,0.0920f,0.0000f,0.1000f,0.0380f,0.0920f,0.0710f,0.0710f,0.0920f,0.0380f,0.1000f,0.0000f});
  }
}
protected class MFVec3f32 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-15.2000f,1.4000f,2.2000f,-12.0000f,-0.8000f,2.2000f});
  }
}
protected class MFVec2f33 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1000f,0.0000f,0.0920f,-0.0380f,0.0710f,-0.0710f,0.0380f,-0.0920f,0.0000f,-0.1000f,-0.0380f,-0.0920f,-0.0710f,-0.0710f,-0.0920f,-0.0380f,-0.1000f,0.0000f,-0.0920f,0.0380f,-0.0710f,0.0710f,-0.0380f,0.0920f,0.0000f,0.1000f,0.0380f,0.0920f,0.0710f,0.0710f,0.0920f,0.0380f,0.1000f,0.0000f});
  }
}
protected class MFVec3f34 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-33.0000f,0.9000f,2.5000f,-18.5000f,1.9000f,2.5500f});
  }
}
protected class MFVec2f35 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1000f,0.0000f,0.0920f,-0.0380f,0.0710f,-0.0710f,0.0380f,-0.0920f,0.0000f,-0.1000f,-0.0380f,-0.0920f,-0.0710f,-0.0710f,-0.0920f,-0.0380f,-0.1000f,0.0000f,-0.0920f,0.0380f,-0.0710f,0.0710f,-0.0380f,0.0920f,0.0000f,0.1000f,0.0380f,0.0920f,0.0710f,0.0710f,0.0920f,0.0380f,0.1000f,0.0000f});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-35.7000f,-0.8000f,2.5000f,-18.8000f,-0.8000f,2.5500f});
  }
}
protected class MFVec2f37 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0000f,0.0000f,5.0000f,0.5000f,7.0000f,1.0000f,8.0000f,2.0000f,9.0000f,3.0000f,11.0000f,3.5000f,11.2000f,4.0000f,11.0000f,5.0000f,9.0000f,6.0000f,8.0000f,6.5000f,7.0000f,6.7000f,5.0000f,6.7000f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFVec3f38 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1000f,0.0000f,0.0000f});
  }
}
protected class MFVec2f39 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1.0000f,0.0000f,0.9200f,-0.3800f,0.7100f,-0.7100f,0.3800f,-0.9200f,0.0000f,-1.0000f,-0.3800f,-0.9200f,-0.7100f,-0.7100f,-0.9200f,-0.3800f,-1.0000f,0.0000f});
  }
}
protected class MFVec3f40 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,-1.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFString41 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"});
  }
}
protected class MFString42 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"});
  }
}
protected class MFFloat43 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1000f,0.2000f,0.2000f,0.3000f,0.9000f});
  }
}
protected class MFVec3f44 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.4000f,1.6000f,0.0000f,1.0000f,-8.0000f,0.0000f,-3.5000f,-12.0000f,0.0000f,-3.5000f,-12.0000f,0.0000f,1.2000f,-8.0000f,0.0000f,1.4000f,1.6000f,0.0000f});
  }
}
protected class MFFloat45 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1000f,0.2000f,0.2000f,0.3000f,0.9000f});
  }
}
protected class MFRotation46 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.8200f,0.0000f,0.0000f,1.0000f,-0.7700f,0.0000f,0.0000f,1.0000f,-1.5700f,0.0000f,0.0000f,1.0000f,-1.5700f,0.0000f,0.0000f,1.0000f,-0.7700f,0.0000f,0.0000f,1.0000f,0.8200f});
  }
}
protected class MFFloat47 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0100f,0.9500f,1.0000f});
  }
}
protected class MFVec3f48 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,-3.0000f,0.0000f,0.0000f,-10.0000f,0.0000f,0.0000f,-10.0000f,0.0000f,0.0000f,-3.0000f});
  }
}
protected class MFFloat49 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.7000f,1.0000f});
  }
}
protected class MFRotation50 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,-3.1400f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat51 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2000f,0.9800f,0.9900f});
  }
}
protected class MFVec3f52 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.0000f,1.0000f,1.0000f,0.0100f,0.0100f,0.0100f,0.0100f,0.0100f,0.0100f,1.0000f,1.0000f,1.0000f});
  }
}
}

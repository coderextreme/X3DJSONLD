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
public class Trebuchet implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new Trebuchet().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Trebuchet.new.java.x3d");
    model.toFileJSON("../data/Trebuchet.new.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
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
        .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
          .setSource(new AudioClip().setDEF("HolyGrail").setDescription("HolyGrail").setLoop(true).setUrl(new MFString10().getArray())))
        .addChild(new Shape()
          .setGeometry(new Box().setSize(new double[] {10000,1,10000}))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new MFString11().getArray()))))
        .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setScale(new double[] {0.5,0.5,0.5}).setTranslation(new double[] {10.5,6.5,4.5})
          .addChild(new Shape()
            .setAppearance(new Appearance().setDEF("TextAppearance")
              .setMaterial(new Material().setDiffuseColor(new double[] {1,0,0}).setEmissiveColor(new double[] {1,1,0})))
            .setGeometry(new Text().setString(new MFString12().getArray())
              .setFontStyle(new FontStyle()))))
        .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setScale(new double[] {0.5,0.5,0.5}).setTranslation(new double[] {11,5.5,6})
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
          .addChild(new Transform().setTranslation(new double[] {8,0,0})
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new double[] {20,1,1}))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setTransparency(1))))))
        .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setTranslation(new double[] {10,0.5,4.5})
          .addChild(new Transform().setDEF("launch").setTranslation(new double[] {0,2,5})
            .addChild(new Billboard()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {1,0,0})))
                .setGeometry(new Text().setString(new MFString17().getArray())
                  .setFontStyle(new FontStyle())))
              .addChild(new Transform().setTranslation(new double[] {2,0.3,0})
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(new double[] {5,1,1}))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setTransparency(1)))))
              .addChild(new Switch().setDEF("PigdogMonk").setWhichChoice(-1)
                .addChild(new Group()
                  .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                    .setSource(new AudioClip().setDEF("PigDogSound").setDescription("PigDogSound").setUrl(new MFString18().getArray()))))
                .addChild(new Group()
                  .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                    .setSource(new AudioClip().setDEF("MonkSound").setDescription("MonkSound").setUrl(new MFString19().getArray()))))))
            .addChild(new TouchSensor().setDEF("Launch").setDescription("launch!")))
          .addChild(new Transform()
            .addChild(new Switch().setDEF("projectilename").setWhichChoice(0)
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString20().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5))))
                .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
                  .setSource(new AudioClip().setDEF("HolyHandGrenadeSound").setDescription("HolyHandGrenadeSound").setUrl(new MFString21().getArray()))))
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString22().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5))))
                .addChild(new Sound().setMaxBack(1000).setMaxFront(1000)
                  .setSource(new AudioClip().setDEF("CowSound").setDescription("CowSound").setUrl(new MFString23().getArray()))))
              .addChild(new Group()
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("TextAppearance"))
                  .setGeometry(new Text().setString(new MFString24().getArray())
                    .setFontStyle(new FontStyle().setSize(0.5))))
                .addChild(new Sound().setMaxBack(1000).setMaxFront(1000).setPriority(1)
                  .setSource(new AudioClip().setDEF("HamsterSound").setDescription("HamsterSound").setUrl(new MFString25().getArray())))))))
        .addChild(new Transform().setRotation(new double[] {0,1,0,-1.67})
          .addChild(new Transform().setDEF("aft").setTranslation(new double[] {5,5,15})
            .addChild(new Transform().setTranslation(new double[] {-2.5,-4.5,-2})
              .addChild(new Transform().setUSE("launch")))))
        .addChild(new Transform().setTranslation(new double[] {0,3,0})
          .addChild(new Shape().setDEF("plank")
            .setGeometry(new Box().setSize(new double[] {25,1,1}))
            .setAppearance(new Appearance().setDEF("wood")
              .setTexture(new ImageTexture().setDEF("woodTexture").setUrl(new MFString26().getArray()))))
          .addChild(new Transform().setDEF("angledsupport").setRotation(new double[] {0,0,1,1}).setTranslation(new double[] {-5,10,0})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setDEF("angledsupport2").setRotation(new double[] {0,0,1,-1}).setTranslation(new double[] {5,10,0})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setDEF("verticalsupport").setRotation(new double[] {0,0,1,1.57}).setScale(new double[] {0.9,1,1}).setTranslation(new double[] {0,11,0})
            .addChild(new Shape().setUSE("plank"))
            .addComments("Main Verticle Support"))
          .addChild(new Transform().setDEF("horizontalsupport").setScale(new double[] {0.4,1,1}).setTranslation(new double[] {0,10,0})
            .addChild(new Shape().setUSE("plank")))
          .addChild(new Transform().setRotation(new double[] {0,0,1,1.57}).setScale(new double[] {0.6,1,1}).setTranslation(new double[] {0,5,10})
            .addChild(new Transform().setRotation(new double[] {0,1,0,0.4})
              .addChild(new Shape().setUSE("plank"))))
          .addChild(new Transform().setDEF("panel").setTranslation(new double[] {0,18.2,-0.3})
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new double[] {5,5,0.5}))
              .setAppearance(new Appearance().setUSE("wood"))))
          .addChild(new Transform().setRotation(new double[] {1,0,0,-1.57}).setTranslation(new double[] {0,0.6,2.5})
            .addChild(new Transform().setRotation(new double[] {0,0,1,1.57})
              .addChild(new Shape()
                .setGeometry(new Extrusion().setBeginCap(false).setCrossSection(new MFVec2f27().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f28().getArray()))
                .setAppearance(new Appearance().setUSE("wood")))))
          .addChild(new Transform().setDEF("flinger").setCenter(new double[] {7,0,0}).setRotation(new double[] {0,0,1,0.82}).setScale(new double[] {0.9,1,1}).setTranslation(new double[] {-7,18,2.5})
            .addChild(new Transform()
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new double[] {35,1,1}))
                .setAppearance(new Appearance().setUSE("wood")))
              .addChild(new Transform().setTranslation(new double[] {7,0,0})
                .addChild(new Shape()
                  .setGeometry(new Box().setSize(new double[] {8,2,2}))
                  .setAppearance(new Appearance().setUSE("wood")))))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setScale(new double[] {0.2,0.2,0.2}).setTranslation(new double[] {-15,-1,0})
              .addChild(new Shape().setDEF("Torus")
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setSpecularColor(new double[] {1,1,1})))
                .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f29().getArray()).setEndCap(false).setSpine(new MFVec3f30().getArray())))
              .addChild(new Transform().setTranslation(new double[] {1,0,2})
                .addChild(new Shape()
                  .setAppearance(new Appearance().setDEF("rope")
                    .setTexture(new ImageTexture().setUSE("woodTexture")))
                  .setGeometry(new Sphere().setRadius(1.5)))
                .addComments("knott")))
            .addComments("The Unicorn")
            .addChild(new Transform().setRotation(new double[] {0,0,1,1.2}).setScale(new double[] {0.2,0.2,0.2}).setTranslation(new double[] {-18.3,0.3,0})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(10))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setSpecularColor(new double[] {1,1,1}))))
              .addChild(new Transform().setTranslation(new double[] {0,-2.5,0})
                .addChild(new Shape().setUSE("Torus"))
                .addComments("The Unicorn")
                .addChild(new Transform().setTranslation(new double[] {-2,0,0})
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(1.5))
                    .setAppearance(new Appearance().setUSE("rope")))
                  .addComments("Knott")))
              .addChild(new Transform().setRotation(new double[] {0,0,1,1.2}).setTranslation(new double[] {15,55,-11})
                .addChild(new Transform().setScale(new double[] {5,5,5})
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f31().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f32().getArray()))))))
            .addChild(new Transform().setRotation(new double[] {1,0,0,-1.7}).setTranslation(new double[] {-17,-4.5,0})
              .addChild(new Transform().setScale(new double[] {0.2,0.2,0.2})
                .addChild(new Shape().setUSE("Torus")
                  .addComments("Knot"))
                .addChild(new Transform().setTranslation(new double[] {-1,0,1.7})
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(1.5))
                    .setAppearance(new Appearance().setUSE("rope"))))))
            .addChild(new Transform().setDEF("RnS")
              .addChild(new Transform().setDEF("ropes")
                .addChild(new Transform().setRotation(new double[] {0,0,1,-0.82}).setTranslation(new double[] {7,-26,-2.5})
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f33().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f34().getArray())))
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setUSE("rope"))
                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.76).setCrossSection(new MFVec2f35().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f36().getArray())))))
              .addChild(new Transform().setDEF("sling").setRotation(new double[] {0,0,1,-0.82}).setTranslation(new double[] {-4,-15.3,0})
                .addChild(new Transform()
                  .addChild(new Transform().setRotation(new double[] {0,1,0,-1.57}).setScale(new double[] {1,1.3,1}).setTranslation(new double[] {0.5,0,-1})
                    .addChild(new Transform().setRotation(new double[] {0,0,1,1.57})
                      .addChild(new Transform().setScale(new double[] {0.3,0.3,0.3})
                        .addChild(new Shape().setDEF("halfsling")
                          .setAppearance(new Appearance().setDEF("clear")
                            .setMaterial(new Material().setTransparency(0.5)))
                          .setGeometry(new Extrusion().setCrossSection(new MFVec2f37().getArray()).setSpine(new MFVec3f38().getArray())))
                        .addChild(new Transform().setScale(new double[] {0.3,0.3,0.3}).setTranslation(new double[] {0,-3.5,11.5})
                          .addChild(new Shape().setUSE("Torus"))
                          .addChild(new Transform().setTranslation(new double[] {0,0,2})
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("rope"))
                              .setGeometry(new Sphere().setRadius(1.5))))))
                      .addChild(new Transform().setScale(new double[] {0.3,0.3,0.3}).setTranslation(new double[] {2,0,0})
                        .addChild(new Shape().setUSE("halfsling"))
                        .addChild(new Transform().setScale(new double[] {0.3,0.3,0.3}).setTranslation(new double[] {0,-3.5,11.3})
                          .addChild(new Shape().setUSE("Torus"))
                          .addChild(new Transform().setTranslation(new double[] {0,0,2})
                            .addChild(new Shape()
                              .setAppearance(new Appearance().setUSE("rope"))
                              .setGeometry(new Sphere().setRadius(1.5))))))
                      .addChild(new Transform().setTranslation(new double[] {1,-1,0})
                        .addChild(new Shape()
                          .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(0.785).setCrossSection(new MFVec2f39().getArray()).setEndCap(false).setSolid(false).setSpine(new MFVec3f40().getArray()))
                          .setAppearance(new Appearance().setUSE("clear")))))
                    .addChild(new TouchSensor().setDEF("LauncheeChoice").setDescription("launcher choice")))
                  .addChild(new Transform().setDEF("projectiletransform").setScale(new double[] {0.01,0.01,0.01})
                    .addChild(new Switch().setDEF("projectile").setWhichChoice(0)
                      .addChild(new Group()
                        .addChild(new Transform().setTranslation(new double[] {0,0.7,0})
                          .addChild(new Shape()
                            .setGeometry(new Sphere().setRadius(0.7))
                            .setAppearance(new Appearance().setDEF("black")
                              .setMaterial(new Material().setDiffuseColor(new double[] {0,0,0}).setSpecularColor(new double[] {1,1,1}))))))
                      .addChild(new Group()
                        .addChild(new Transform()
                          .addChild(new Inline().setUrl(new MFString41().getArray()))))
                      .addChild(new Group()
                        .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setScale(new double[] {0.4,0.4,0.4}).setTranslation(new double[] {0,0.7,0})
                          .addChild(new Inline().setUrl(new MFString42().getArray()))))))))))
          .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {0,18,2.5})
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(8).setRadius(0.4))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new double[] {0,0,0}).setSpecularColor(new double[] {1,1,1}))))
            .addComments("Top Pivot"))
          .addChild(new Transform().setDEF("verticalweight")
            .addChild(new Transform().setTranslation(new double[] {4,18,1.8})
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new double[] {1,10,0.5}))
                .setAppearance(new Appearance().setUSE("wood"))))
            .addChild(new Transform().setTranslation(new double[] {4,18,3.2})
              .addChild(new Shape()
                .setGeometry(new Box().setSize(new double[] {1,10,0.5}))
                .setAppearance(new Appearance().setUSE("wood"))))
            .addChild(new Transform().setTranslation(new double[] {4,14,2.5})
              .addComments("CounterWeight")
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(4).setRadius(1.5))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0,0,0}).setSpecularColor(new double[] {1,1,1})))))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {4,22,2.5})
              .addChild(new Shape()
                .setGeometry(new Cylinder().setHeight(2.5).setRadius(0.3))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0,0,0}).setSpecularColor(new double[] {1,1,1}))))))
          .addChild(new Transform().setRotation(new double[] {0,0,1,1.57}).setScale(new double[] {0.2,0.2,0.2}).setTranslation(new double[] {-11.5,-1,2})
            .addChild(new Transform().setDEF("screw").setRotation(new double[] {1,0,0,1.57})
              .addChild(new Shape().setUSE("Torus"))
              .addChild(new Transform().setRotation(new double[] {1,0,0,-1.57}).setTranslation(new double[] {0,0,7})
                .addChild(new Shape()
                  .setGeometry(new Cylinder().setHeight(10).setRadius(0.7))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setSpecularColor(new double[] {1,1,1}))))))
            .addChild(new Transform().setTranslation(new double[] {0,0,7})
              .addChild(new Transform().setUSE("screw")))
            .addComments("Release Pin")
            .addChild(new Transform().setDEF("Pin").setRotation(new double[] {1,0,0,-1.57}).setTranslation(new double[] {0,0,-3})
              .addChild(new Transform().setUSE("screw"))))
          .addChild(new Transform().setTranslation(new double[] {0,0,5})
            .addChild(new Shape().setUSE("plank"))
            .addChild(new Transform().setUSE("angledsupport"))
            .addChild(new Transform().setUSE("angledsupport2"))
            .addChild(new Transform().setUSE("verticalsupport"))
            .addChild(new Transform().setUSE("horizontalsupport"))
            .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setScale(new double[] {0.6,1,1}).setTranslation(new double[] {0,-11,-2.5})
              .addChild(new Transform().setUSE("horizontalsupport")))
            .addChild(new Transform().setRotation(new double[] {0,0,1,-1.57}).setScale(new double[] {0.6,1,1}).setTranslation(new double[] {0,5,-10})
              .addChild(new Transform().setRotation(new double[] {0,1,0,0.4})
                .addChild(new Shape().setUSE("plank"))))
            .addChild(new Transform().setTranslation(new double[] {0,0,0.6})
              .addChild(new Transform().setUSE("panel"))))
          .addChild(new Transform().setTranslation(new double[] {10,-1,2.5})
            .addChild(new Shape().setDEF("Axle")
              .setGeometry(new Box().setSize(new double[] {1,1,8}))
              .setAppearance(new Appearance().setUSE("wood")))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {0,0,4.5})
              .addChild(new Shape().setDEF("wheel")
                .setGeometry(new Cylinder().setRadius(2))
                .setAppearance(new Appearance().setUSE("wood")))
              .addChild(new Shape().setDEF("tracks")
                .setGeometry(new Sphere().setRadius(1.5))
                .setAppearance(new Appearance().setUSE("black")))
              .addChild(new Transform().setTranslation(new double[] {0,0.55,0})
                .addChild(new Shape().setDEF("hub")
                  .setGeometry(new Sphere().setRadius(1.5))
                  .setAppearance(new Appearance().setUSE("black")))))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {0,0,-4.5})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new double[] {0,-0.55,0})
                .addChild(new Shape().setUSE("hub")))))
          .addChild(new Transform().setTranslation(new double[] {-10,-1,2.5})
            .addChild(new Shape().setUSE("Axle"))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {0,0,4.5})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new double[] {0,0.55,0})
                .addChild(new Shape().setUSE("hub"))))
            .addChild(new Transform().setRotation(new double[] {1,0,0,1.57}).setTranslation(new double[] {0,0,-4.5})
              .addChild(new Shape().setUSE("wheel"))
              .addChild(new Shape().setUSE("tracks"))
              .addChild(new Transform().setTranslation(new double[] {0,-0.55,0})
                .addChild(new Shape().setUSE("hub"))))
            .addChild(new Transform().setRotation(new double[] {0,1,0,-0.6}).setTranslation(new double[] {0,100,400})
              .addChild(new Transform().setTranslation(new double[] {1,3,0})
                .addChild(new Viewpoint().setDescription("Side")))
              .addChild(new Transform().setUSE("launch"))
              .addChild(new Transform()
                .addChild(new TouchSensor().setUSE("LauncheeChoice"))
                .addChild(new Switch().setUSE("projectilename"))
                .addChild(new Transform().setTranslation(new double[] {2.5,0,0})
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(new double[] {5,0.5,0.5}))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setTransparency(1))))))
              .addChild(new Transform().setScale(new double[] {0.5,0.5,0.5}).setTranslation(new double[] {0,-1,0})
                .addChild(new TouchSensor().setUSE("weightselector"))
                .addChild(new Switch().setUSE("Weight"))
                .addChild(new Transform().setTranslation(new double[] {8,0,0})
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(new double[] {17,1,0.5}))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setTransparency(1)))))))
            .addChild(new Transform().setDEF("ProjectileTransform").setTranslation(new double[] {14.25,1.25,0})
              .addChild(new Switch().setUSE("projectile"))
              .addChild(new Transform().setRotation(new double[] {0,1,0,1.57}).setTranslation(new double[] {0,1,0})
                .addChild(new Viewpoint().setDescription("Projectile Cam").setPosition(new double[] {0,0,15}))))
            .addChild(new Transform().setTranslation(new double[] {20,2,0})
              .addChild(new Transform().setDEF("Front").setRotation(new double[] {0,1,0,1.57})
                .addChild(new Viewpoint().setDescription("Fore"))))
            .addChild(new Transform().setTranslation(new double[] {-8,4,0})
              .addChild(new Transform().setRotation(new double[] {0,1,0,-1.57})
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
"        Browser.println ('CounterWeight ='+CounterWeight);\n"+
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
"	Browser.println ('Projectile Weight'+ProjectileWeight);\n"+
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
"	Browser.println ('MassCounterWeight =' + MassCounterWeight);\n"+
"	Browser.println ('MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"\n"+
"function set_MassProjectileWeight (value, timestamp)\n"+
"{\n"+
"	MassProjectileWeight = value;\n"+
"	Browser.println ('new MassProjectileWeight =' + MassProjectileWeight);\n"+
"}\n"+
"function set_MassCounterWeight (value2, timestamp)\n"+
"{\n"+
"	MassCounterWeight = value2;\n"+
"	Browser.println ('new MassCounterWeight =' + MassCounterWeight);\n"+
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
"	Browser.println ('x=' + value_changed[0] + ' y=' + value_changed[1] + ' z=' + value_changed[2]);\n"+
"}"))))
        .addChild(new TimeSensor().setDEF("clock").setCycleInterval(10))
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
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_back.jpg"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_bottom.jpg"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_front.jpg"});
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1.309,1.570796});
  }
}
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0.1,0.1,0,0.4,0.25,0.2,0.6,0.6,0.6});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_left.jpg"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_right.jpg"});
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {1.309,1.57079});
  }
}
private class MFColor8 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new double[] {0,0.2,0.7,0,0.5,1,1,1,1});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/WorkingGroups/media/textures/panoramas/meadow_2_top.jpg"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"holygral.mp3","http://www.nps.navy.mil/code32/vrml/holygral.mp3"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Sling to Select Projectile"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (50 lbs)"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (500 lbs)"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (1000 lbs)"});
  }
}
private class MFString16 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click Here to Change Counter Weight (10000 lbs)"});
  }
}
private class MFString17 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"LAUNCH"});
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"pigdog.wav","http://www.nps.navy.mil/code32/vrml/pigdog.wav"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"monks.wav","http://www.nps.navy.mil/code32/vrml/monks.wav"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Bowling Ball (10 lbs)"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"grenade.wav","http://www.nps.navy.mil/code32/vrml/grenade.wav"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Cow (1000 lbs)"});
  }
}
private class MFString23 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"lavache.wav","http://www.nps.navy.mil/code32/vrml/lavache.wav"});
  }
}
private class MFString24 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Chicken (5 lbs)"});
  }
}
private class MFString25 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"hamster.wav","http://www.nps.navy.mil/code32/vrml/hamster.wav"});
  }
}
private class MFString26 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"wood.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/wood.gif"});
  }
}
private class MFVec2f27 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {1,-0.38,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,-0.38,-1,-1.1,1,-1.1,1,-0.38});
  }
}
private class MFVec3f28 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,6,0,0,-11,0});
  }
}
private class MFVec2f29 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.9,0,0.81,-0.34,0.63,-0.63,0.34,-0.83,0,-0.9,-0.34,-0.81,-0.63,-0.63,-0.81,-0.34,-0.9,0,-0.81,0.34,-0.63,0.63,-0.34,0.81,0,0.9,0.38,0.81,0.63,0.63,0.81,0.34,0.9,0});
  }
}
private class MFVec3f30 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {2,0,0,1.85,0,0.77,1.41,0,1.41,0.77,0,1.85,0,0,2,-0.77,0,1.85,-1.41,0,1.41,-1.85,0,0.77,-2,0,0,-1.85,0,-0.77,-1.41,0,-1.41,-0.77,0,-1.85,0,0,-2,0.77,0,-1.85,1.41,0,-1.41,1.85,0,-0.77,2,0,0});
  }
}
private class MFVec2f31 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
  }
}
private class MFVec3f32 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-15.2,1.4,2.2,-12,-0.8,2.2});
  }
}
private class MFVec2f33 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
  }
}
private class MFVec3f34 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-33,0.9,2.5,-18.5,1.9,2.55});
  }
}
private class MFVec2f35 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0.1,0,0.092,-0.038,0.071,-0.071,0.038,-0.092,0,-0.1,-0.038,-0.092,-0.071,-0.071,-0.092,-0.038,-0.1,0,-0.092,0.038,-0.071,0.071,-0.038,0.092,0,0.1,0.038,0.092,0.071,0.071,0.092,0.038,0.1,0});
  }
}
private class MFVec3f36 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {-35.7,-0.8,2.5,-18.8,-0.8,2.55});
  }
}
private class MFVec2f37 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {0,0,0,5,0.5,7,1,8,2,9,3,11,3.5,11.2,4,11,5,9,6,8,6.5,7,6.7,5,6.7,0,0,0});
  }
}
private class MFVec3f38 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0.1,0,0});
  }
}
private class MFVec2f39 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0});
  }
}
private class MFVec3f40 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-1,0,0,1,0});
  }
}
private class MFString41 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"cow.wrl","http://www.uoguelph.ca/~dchiu/cow.wrl"});
  }
}
private class MFString42 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"vrml_ginger.wrl","http://home.inreach.com/ntamura/vrml/vrml_ginger.wrl"});
  }
}
private class MFFloat43 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.2,0.2,0.3,0.9});
  }
}
private class MFVec3f44 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1.4,1.6,0,1,-8,0,-3.5,-12,0,-3.5,-12,0,1.2,-8,0,1.4,1.6,0});
  }
}
private class MFFloat45 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.1,0.2,0.2,0.3,0.9});
  }
}
private class MFRotation46 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0.82,0,0,1,-0.77,0,0,1,-1.57,0,0,1,-1.57,0,0,1,-0.77,0,0,1,0.82});
  }
}
private class MFFloat47 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.01,0.95,1});
  }
}
private class MFVec3f48 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,-3,0,0,-10,0,0,-10,0,0,-3});
  }
}
private class MFFloat49 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.7,1});
  }
}
private class MFRotation50 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new double[] {0,0,1,0,0,0,1,-3.14,0,0,1,0});
  }
}
private class MFFloat51 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,0.2,0.98,0.99});
  }
}
private class MFVec3f52 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {1,1,1,0.01,0.01,0.01,0.01,0.01,0.01,1,1,1});
  }
}
}

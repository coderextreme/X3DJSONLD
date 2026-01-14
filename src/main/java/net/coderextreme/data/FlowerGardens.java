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
public class FlowerGardens implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new FlowerGardens().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/FlowerGardens.new.java.x3d");
    model.toFileJSON("../data/FlowerGardens.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("FlowerGardens.x3d"))
        .addMeta(new meta().setName("description").setContent("FlowerGardens for HAnim scene Winter and Spring."))
        .addMeta(new meta().setName("creator").setContent("Carol McDonald"))
        .addMeta(new meta().setName("translator").setContent("Joe Williams and Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("27 May 2023"))
        .addMeta(new meta().setName("modified").setContent("Mon, 08 Sep 2025 00:44:02 GMT"))
        .addMeta(new meta().setName("TODO").setContent("DEF/USE for all duplicated nodes to ensure consistency, likely in updated version"))
        .addMeta(new meta().setName("TODO").setContent("update likely uses FlowerSet"))
        .addMeta(new meta().setName("reference").setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/FlowerGardens.x3dv"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerGardens.x3d")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("FlowerGardens.x3d"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new TimeSensor().setDEF("z100sTimer").setCycleInterval(100d).setLoop(true))
        .addChild(new TimeSensor().setDEF("PetalTime").setEnabled(false).setCycleInterval(4d).setLoop(true))
        .addChild(new Group().setDEF("FlowerSet")
          .addChild(new Transform().setDEF("FlowerStem")
            .addChild(new Shape().setDEF("Stem1")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {0f ,0.5f ,0f }).setShininess(1f )))
              .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt321().getArray().append(new MFInt322().getArray()).append(new MFInt323().getArray()).append(new MFInt324().getArray())).setCoordIndex(new MFInt325().getArray().append(new MFInt326().getArray()).append(new MFInt327().getArray()).append(new MFInt328().getArray()))
                .setCoord(new Coordinate().setPoint(new MFVec3f9().getArray().append(new MFVec3f10().getArray()))))))
          .addChild(new Transform().setDEF("FlowerPetal01").setRotation(new float[] {0.447213595486679f ,0.894427190973358f ,0f ,6.2806830713014f })
            .addChild(new Shape().setDEF("FlowerPetal")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(0f ).setDiffuseColor(new float[] {1f ,0f ,0f }).setShininess(1f )))
              .setGeometry(new IndexedFaceSet().setSolid(false).setTexCoordIndex(new MFInt3211().getArray()).setCoordIndex(new MFInt3212().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f13().getArray())))))
          .addChild(new Transform().setDEF("FlowerPetal02").setRotation(new float[] {0.357632443287621f ,0.93386242857721f ,0f ,0.514609449236843f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal03").setRotation(new float[] {0.357361686780161f ,0.933966072628786f ,0f ,1.03154324209863f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal04").setRotation(new float[] {0.356987171395637f ,0.93410928667846f ,0f ,1.55258539661063f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal05").setRotation(new float[] {0.35660715067221f ,0.934254430061452f ,0f ,2.07850590356858f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal06").setRotation(new float[] {0.356325381221908f ,0.934361933458905f ,0f ,2.60877211328971f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal07").setRotation(new float[] {0.35622147913168f ,0.934401550622235f ,0f ,3.14160013586477f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal08").setRotation(new float[] {0.356325386908075f ,0.934361931290445f ,0f ,3.67442812050946f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal09").setRotation(new float[] {0.356607160414557f ,0.934254426342774f ,0f ,4.20469422818038f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal10").setRotation(new float[] {0.356987182481162f ,0.934109282441921f ,0f ,4.73061459936103f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal11").setRotation(new float[] {0.357361696242199f ,0.933966069008343f ,0f ,5.25165662212175f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal12").setRotation(new float[] {0.357632448693354f ,0.933862426507027f ,0f ,5.7685903209904f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerCenterSphere").setTranslation(new float[] {0f ,0.01f ,0f }).setScale(new float[] {1f ,1.5f ,1f })
            .addChild(new Shape().setDEF("FlowerCenter")
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1f ).setDiffuseColor(new float[] {1f ,1f ,0f }).setEmissiveColor(new float[] {1f ,1f ,0f }).setShininess(1f )))
              .setGeometry(new Sphere().setRadius(0.015f ))))
          .addChild(new Transform().setDEF("Stem2").setTranslation(new float[] {0.25f ,0f ,0f })
            .addChild(new Shape().setUSE("Stem1")))
          .addChild(new Transform().setDEF("FlowerPetal01a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.447213595486679f ,0.894427190973358f ,0f ,6.2806830713014f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal02a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.357632443287621f ,0.93386242857721f ,0f ,0.514609449236843f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal03a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.357361686780161f ,0.933966072628786f ,0f ,1.03154324209863f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal04a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.356987171395637f ,0.93410928667846f ,0f ,1.55258539661063f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal05a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.35660715067221f ,0.934254430061452f ,0f ,2.07850590356858f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal06a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.356325381221908f ,0.934361933458905f ,0f ,2.60877211328971f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal07a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.35622147913168f ,0.934401550622235f ,0f ,3.14160013586477f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal08a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.356325386908075f ,0.934361931290445f ,0f ,3.67442812050946f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal09a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.356607160414557f ,0.934254426342774f ,0f ,4.20469422818038f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal10a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.356987182481162f ,0.934109282441921f ,0f ,4.73061459936103f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal11a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.357361696242199f ,0.933966069008343f ,0f ,5.25165662212175f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal12a").setTranslation(new float[] {0.25f ,0f ,0f }).setRotation(new float[] {0.357632448693354f ,0.933862426507027f ,0f ,5.7685903209904f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setTranslation(new float[] {0.25f ,0.01f ,0f }).setScale(new float[] {1f ,1.5f ,1f })
            .addChild(new Shape().setUSE("FlowerCenter")))
          .addChild(new Transform().setTranslation(new float[] {0.5f ,0f ,0f })
            .addChild(new Shape().setUSE("Stem1")))
          .addChild(new Transform().setDEF("FlowerPetal01b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.447213595486679f ,0.894427190973358f ,0f ,6.2806830713014f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal02b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.357632443287621f ,0.93386242857721f ,0f ,0.514609449236843f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal03b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.357361686780161f ,0.933966072628786f ,0f ,1.03154324209863f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal04b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.356987171395637f ,0.93410928667846f ,0f ,1.55258539661063f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal05b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.35660715067221f ,0.934254430061452f ,0f ,2.07850590356858f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal06b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.356325381221908f ,0.934361933458905f ,0f ,2.60877211328971f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal07b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.35622147913168f ,0.934401550622235f ,0f ,3.14160013586477f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal08b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.356325386908075f ,0.934361931290445f ,0f ,3.67442812050946f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal09b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.356607160414557f ,0.934254426342774f ,0f ,4.20469422818038f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal10b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.356987182481162f ,0.934109282441921f ,0f ,4.73061459936103f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal11b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.357361696242199f ,0.933966069008343f ,0f ,5.25165662212175f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setDEF("FlowerPetal12b").setTranslation(new float[] {0.5f ,0f ,0f }).setRotation(new float[] {0.357632448693354f ,0.933862426507027f ,0f ,5.7685903209904f })
            .addChild(new Shape().setUSE("FlowerPetal")))
          .addChild(new Transform().setTranslation(new float[] {0.5f ,0.01f ,0f }).setScale(new float[] {1f ,1.5f ,1f })
            .addChild(new Shape().setUSE("FlowerCenter"))))
        .addChild(new OrientationInterpolator().setDEF("Petal01Move").setKey(new MFFloat14().getArray()).setKeyValue(new MFRotation15().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal02Move").setKey(new MFFloat16().getArray()).setKeyValue(new MFRotation17().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal03Move").setKey(new MFFloat18().getArray()).setKeyValue(new MFRotation19().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal04Move").setKey(new MFFloat20().getArray()).setKeyValue(new MFRotation21().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal05Move").setKey(new MFFloat22().getArray()).setKeyValue(new MFRotation23().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal06Move").setKey(new MFFloat24().getArray()).setKeyValue(new MFRotation25().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal07Move").setKey(new MFFloat26().getArray()).setKeyValue(new MFRotation27().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal08Move").setKey(new MFFloat28().getArray()).setKeyValue(new MFRotation29().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal09Move").setKey(new MFFloat30().getArray()).setKeyValue(new MFRotation31().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal10Move").setKey(new MFFloat32().getArray()).setKeyValue(new MFRotation33().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal11Move").setKey(new MFFloat34().getArray()).setKeyValue(new MFRotation35().getArray()))
        .addChild(new OrientationInterpolator().setDEF("Petal12Move").setKey(new MFFloat36().getArray()).setKeyValue(new MFRotation37().getArray()))
        .addChild(new BooleanSequencer().setDEF("FlowerAnim").setKey(new MFFloat38().getArray()).setKeyValue(new MFBool39().getArray()))
        .addChild(new Transform().setDEF("FlowerGarden").setTranslation(new float[] {-6f ,0f ,0f })
          .addChild(new Transform().setDEF("Flower1a").setTranslation(new float[] {0f ,0.25f ,0f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower1b").setTranslation(new float[] {0.75f ,0.25f ,0f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower1c").setTranslation(new float[] {1.5f ,0.25f ,0f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower2a").setTranslation(new float[] {0f ,0.25f ,0.75f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower2b").setTranslation(new float[] {0.75f ,0.25f ,0.75f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower2c").setTranslation(new float[] {1.5f ,0.25f ,0.75f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3a").setTranslation(new float[] {0f ,0.25f ,1.5f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3b").setTranslation(new float[] {0.75f ,0.25f ,1.5f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3c").setTranslation(new float[] {1.5f ,0.25f ,1.5f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3d").setTranslation(new float[] {0f ,0.25f ,2.25f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3e").setTranslation(new float[] {0.75f ,0.25f ,2.25f })
            .addChild(new Group().setUSE("FlowerSet")))
          .addChild(new Transform().setDEF("Flower3f").setTranslation(new float[] {1.5f ,0.25f ,2.25f }).setScale(new float[] {1f ,2f ,1f })
            .addChild(new Group().setUSE("FlowerSet"))))
        .addChild(new Transform().setDEF("FlowerGarden2").setTranslation(new float[] {9f ,0f ,7f }).setRotation(new float[] {0f ,1f ,0f ,1.8f })
          .addChild(new Transform().setUSE("FlowerGarden")))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal01Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal02Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal03Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal04Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal05Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal06Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal07Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal08Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal09Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal10Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal11Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal12Move").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12a").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12b").setToField("set_rotation"))
        .addChild(new ROUTE().setFromNode("z100sTimer").setFromField("fraction_changed").setToNode("FlowerAnim").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("FlowerAnim").setFromField("value_changed").setToNode("PetalTime").setToField("set_enabled")));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {1f ,1f ,1f });
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {18,334,336,-1,18,336,333,-1,333,336,335,-1,333,335,17,-1,20,328,332,-1,20,332,330,-1,330,332,331,-1,330,331,19,-1,21,325,329,-1,21,329,327,-1,327,329,328,-1,327,328,20,-1,22,324,326,-1,22,326,323,-1,323,326,325,-1,323,325,21,-1,24,318,322,-1,24,322,320,-1,320,322,321,-1,320,321,23,-1,25,315,319,-1,25,319,317,-1,317,319,318,-1,317,318,24,-1,26,314,316,-1,26,316,313,-1,313,316,315,-1,313,315,25,-1,28,308,312,-1,28,312,310,-1,310,312,311,-1,310,311,27,-1,29,305,309,-1,29,309,307,-1,307,309,308,-1,307,308,28,-1,30,304,306,-1,30,306,303,-1,303,306,305,-1,303,305,29,-1,32,298,302,-1,32,302,300,-1,300,302,301,-1,300,301,31,-1,33,297,299,-1,33,299,296,-1,296,299,298,-1,296,298,32,-1,333,17,34,-1,35,18,333,-1,34,35,333,-1,36,19,18,-1,36,18,35,-1,330,19,36,-1,37,20,330,-1,36,37,330,-1,327,20,37,-1,38,21,327,-1,37,38,327,-1,323,21,38,-1,39,22,323,-1,38,39,323,-1,40,23,22,-1,40,22,39,-1,320,23,40,-1,41,24,320,-1,40,41,320,-1,317,24,41,-1,42,25,317,-1,41,42,317,-1,313,25,42,-1,43,26,313,-1,42,43,313,-1,44,27,26,-1,44,26,43,-1,310,27,44,-1,45,28,310,-1,44,45,310,-1,307,28,45,-1,46,29,307,-1,45,46,307,-1,303,29,46,-1,47,30,303,-1,46,47,303,-1,48,31,30,-1,48,30,47,-1,300,31,48,-1,49,32,300,-1,48,49,300,-1,296,32,49,-1,50,33,296,-1,49,50,296,-1,52,35,34,-1,52,34,51,-1,53,36,35,-1,53,35,52,-1,54,37,36,-1,54,36,53,-1,55,38,37,-1,55,37,54,-1,56,39,38,-1,56,38,55,-1,57,40,39,-1,57,39,56,-1,58,41,40,-1,58,40,57,-1,59,42,41,-1,59,41,58,-1,60,43,42,-1,60,42,59,-1,61,44,43,-1,61,43,60,-1,62,45,44,-1,62,44,61,-1,63,46,45,-1,63,45,62,-1,64,47,46,-1,64,46,63,-1,65,48,47,-1,65,47,64,-1,66,49,48,-1,66,48,65,-1,67,50,49,-1,67,49,66,-1,69,52,51,-1,69,51,68,-1,70,53,52,-1,70,52,69,-1,71,54,53,-1,71,53,70,-1,72,55,54,-1,72,54,71,-1,73,56,55,-1,73,55,72,-1,74,57,56,-1,74,56,73,-1,75,58,57,-1,75,57,74,-1,76,59,58,-1,76,58,75,-1,77,60,59,-1,77,59,76,-1,78,61,60,-1,78,60,77,-1,79,62,61,-1,79,61,78,-1,80,63,62,-1,80,62,79,-1,81,64,63,-1,81,63,80,-1,82,65,64,-1,82,64,81,-1,83,66,65,-1,83,65,82,-1,84,67,66,-1,84,66,83,-1,86,69,68,-1,86,68,85,-1,87,70,69,-1,87,69,86,-1,88,71,70,-1,88,70,87,-1,89,72,71,-1,89,71,88,-1,90,73,72,-1,90,72,89,-1,91,74,73,-1,91,73,90,-1,92,75,74,-1,92,74,91,-1,93,76,75,-1,93,75,92,-1,94,77,76,-1,94,76,93,-1,95,78,77,-1,95,77,94,-1,96,79,78,-1,96,78,95,-1,97,80,79,-1,97,79,96,-1,98,81,80,-1,98,80,97,-1,99,82,81,-1,99,81,98,-1,100,83,82,-1,100,82,99,-1,101,84,83,-1,101,83,100,-1,103,86,85,-1,103,85,102,-1,104,87,86,-1,104,86,103,-1,105,88,87,-1,105,87,104,-1,106,89,88,-1,106,88,105,-1,107,90,89,-1,107,89,106,-1,108,91,90,-1,108,90,107,-1,109,92,91,-1,109,91,108,-1,110,93,92,-1,110,92,109,-1,111,94,93,-1,111,93,110,-1,112,95,94,-1,112,94,111,-1,113,96,95,-1,113,95,112,-1});
  }
}
private class MFInt322 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {114,97,96,-1,114,96,113,-1,115,98,97,-1,115,97,114,-1,116,99,98,-1,116,98,115,-1,117,100,99,-1,117,99,116,-1,118,101,100,-1,118,100,117,-1,120,103,102,-1,120,102,119,-1,121,104,103,-1,121,103,120,-1,122,105,104,-1,122,104,121,-1,123,106,105,-1,123,105,122,-1,124,107,106,-1,124,106,123,-1,125,108,107,-1,125,107,124,-1,126,109,108,-1,126,108,125,-1,127,110,109,-1,127,109,126,-1,128,111,110,-1,128,110,127,-1,129,112,111,-1,129,111,128,-1,130,113,112,-1,130,112,129,-1,131,114,113,-1,131,113,130,-1,132,115,114,-1,132,114,131,-1,133,116,115,-1,133,115,132,-1,134,117,116,-1,134,116,133,-1,135,118,117,-1,135,117,134,-1,137,120,119,-1,137,119,136,-1,138,121,120,-1,138,120,137,-1,139,122,121,-1,139,121,138,-1,140,123,122,-1,140,122,139,-1,141,124,123,-1,141,123,140,-1,142,125,124,-1,142,124,141,-1,143,126,125,-1,143,125,142,-1,144,127,126,-1,144,126,143,-1,145,128,127,-1,145,127,144,-1,146,129,128,-1,146,128,145,-1,147,130,129,-1,147,129,146,-1,148,131,130,-1,148,130,147,-1,149,132,131,-1,149,131,148,-1,150,133,132,-1,150,132,149,-1,151,134,133,-1,151,133,150,-1,152,135,134,-1,152,134,151,-1,154,137,136,-1,154,136,153,-1,155,138,137,-1,155,137,154,-1,156,139,138,-1,156,138,155,-1,157,140,139,-1,157,139,156,-1,158,141,140,-1,158,140,157,-1,159,142,141,-1,159,141,158,-1,160,143,142,-1,160,142,159,-1,161,144,143,-1,161,143,160,-1,162,145,144,-1,162,144,161,-1,163,146,145,-1,163,145,162,-1,164,147,146,-1,164,146,163,-1,165,148,147,-1,165,147,164,-1,166,149,148,-1,166,148,165,-1,167,150,149,-1,167,149,166,-1,168,151,150,-1,168,150,167,-1,169,152,151,-1,169,151,168,-1,171,154,153,-1,171,153,170,-1,172,155,154,-1,172,154,171,-1,173,156,155,-1,173,155,172,-1,174,157,156,-1,174,156,173,-1,175,158,157,-1,175,157,174,-1,176,159,158,-1,176,158,175,-1,177,160,159,-1,177,159,176,-1,178,161,160,-1,178,160,177,-1,179,162,161,-1,179,161,178,-1,180,163,162,-1,180,162,179,-1,181,164,163,-1,181,163,180,-1,182,165,164,-1,182,164,181,-1,183,166,165,-1,183,165,182,-1,184,167,166,-1,184,166,183,-1,185,168,167,-1,185,167,184,-1,186,169,168,-1,186,168,185,-1,188,171,170,-1,188,170,187,-1,189,172,171,-1,189,171,188,-1,190,173,172,-1,190,172,189,-1,191,174,173,-1,191,173,190,-1,192,175,174,-1,192,174,191,-1,193,176,175,-1,193,175,192,-1,194,177,176,-1,194,176,193,-1,195,178,177,-1,195,177,194,-1,196,179,178,-1,196,178,195,-1,197,180,179,-1,197,179,196,-1,198,181,180,-1,198,180,197,-1,199,182,181,-1,199,181,198,-1,200,183,182,-1,200,182,199,-1,201,184,183,-1,201,183,200,-1,202,185,184,-1,202,184,201,-1,203,186,185,-1,203,185,202,-1,205,188,187,-1,205,187,204,-1,206,189,188,-1,206,188,205,-1,207,190,189,-1,207,189,206,-1,208,191,190,-1,208,190,207,-1,209,192,191,-1,209,191,208,-1,210,193,192,-1,210,192,209,-1,211,194,193,-1,211,193,210,-1,212,195,194,-1,212,194,211,-1,213,196,195,-1,213,195,212,-1,214,197,196,-1,214,196,213,-1,215,198,197,-1,215,197,214,-1,216,199,198,-1,216,198,215,-1,217,200,199,-1,217,199,216,-1,218,201,200,-1,218,200,217,-1,219,202,201,-1,219,201,218,-1,220,203,202,-1,220,202,219,-1,256,222,205,-1,204,221,256,-1,205,204,256,-1,223,206,205,-1,223,205,222,-1,260,224,207,-1,206,223,260,-1,207,206,260,-1});
  }
}
private class MFInt323 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {264,225,208,-1,207,224,264,-1,208,207,264,-1,267,226,209,-1,208,225,267,-1,209,208,267,-1,227,210,209,-1,227,209,226,-1,270,228,211,-1,210,227,270,-1,211,210,270,-1,274,229,212,-1,211,228,274,-1,212,211,274,-1,277,230,213,-1,212,229,277,-1,213,212,277,-1,231,214,213,-1,231,213,230,-1,280,232,215,-1,214,231,280,-1,215,214,280,-1,284,233,216,-1,215,232,284,-1,216,215,284,-1,287,234,217,-1,216,233,287,-1,217,216,287,-1,235,218,217,-1,235,217,234,-1,290,236,219,-1,218,235,290,-1,219,218,290,-1,294,237,220,-1,219,236,294,-1,220,219,294,-1,255,222,256,-1,255,256,258,-1,258,256,221,-1,258,221,257,-1,259,224,260,-1,259,260,262,-1,262,260,223,-1,262,223,261,-1,263,225,264,-1,263,264,265,-1,265,264,224,-1,265,224,259,-1,266,226,267,-1,266,267,268,-1,268,267,225,-1,268,225,263,-1,269,228,270,-1,269,270,272,-1,272,270,227,-1,272,227,271,-1,273,229,274,-1,273,274,275,-1,275,274,228,-1,275,228,269,-1,276,230,277,-1,276,277,278,-1,278,277,229,-1,278,229,273,-1,279,232,280,-1,279,280,282,-1,282,280,231,-1,282,231,281,-1,283,233,284,-1,283,284,285,-1,285,284,232,-1,285,232,279,-1,286,234,287,-1,286,287,288,-1,288,287,233,-1,288,233,283,-1,289,236,290,-1,289,290,292,-1,292,290,235,-1,292,235,291,-1,293,237,294,-1,293,294,295,-1,295,294,236,-1,295,236,289,-1,336,1,0,-1,2,1,334,-1,2,334,331,-1,0,335,336,-1,1,336,334,-1,4,3,329,-1,4,329,325,-1,4,326,5,-1,7,6,321,-1,7,321,322,-1,6,5,324,-1,6,324,321,-1,8,7,318,-1,8,318,319,-1,2,331,332,-1,3,2,332,-1,3,332,328,-1,331,334,18,-1,331,18,19,-1,3,328,329,-1,4,325,326,-1,321,324,22,-1,321,22,23,-1,7,322,318,-1,5,326,324,-1,315,8,319,-1,10,9,314,-1,10,314,311,-1,315,316,8,-1,316,9,8,-1,9,316,314,-1,311,314,26,-1,311,26,27,-1,312,10,311,-1,11,309,12,-1,12,306,13,-1,15,14,301,-1,15,301,302,-1,14,13,304,-1,14,304,301,-1,15,299,16,-1,312,308,11,-1,312,11,10,-1,11,308,309,-1,12,309,305,-1,13,306,304,-1,12,305,306,-1,15,302,298,-1,16,299,297,-1,30,31,301,-1,30,301,304,-1,15,298,299,-1,223,222,255,-1,223,255,261,-1,239,255,258,-1,261,255,239,-1,261,239,240,-1,258,257,238,-1,227,226,266,-1,227,266,271,-1,241,265,259,-1,242,268,263,-1,263,265,242,-1,259,262,241,-1,262,261,240,-1,238,239,258,-1,262,240,241,-1,241,242,265,-1,268,243,266,-1,242,243,268,-1,243,244,271,-1,243,271,266,-1,244,272,271,-1,245,269,272,-1,269,245,275,-1,275,246,273,-1,246,275,245,-1,244,245,272,-1,231,230,276,-1,231,276,281,-1,281,276,247,-1,281,247,248,-1,248,282,281,-1,276,278,247,-1,235,234,286,-1,235,286,291,-1,250,283,285,-1,251,286,288,-1,288,283,250,-1,285,279,249,-1,279,282,249,-1,246,247,278,-1,246,278,273,-1,282,248,249,-1,249,250,285,-1,291,286,251,-1,291,251,252,-1,250,251,288,-1,253,289,292,-1,253,295,289,-1,253,254,295,-1,254,293,295,-1,252,253,292,-1,252,292,291,-1,346,345,344,-1,347,346,344,-1,347,341,340,-1,343,347,344,-1,342,347,343,-1,342,341,347,-1,340,348,347,-1,351,350,349,-1,351,348,339,-1,352,351,338,-1,340,339,348,-1,351,339,338,-1,352,338,337,-1,349,348,351,-1,364,362,363,-1,367,358,362,-1,362,364,367,-1,360,361,362,-1,362,359,360,-1,362,358,359,-1,366,364,365,-1,358,367,355,-1});
  }
}
private class MFInt324 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {354,367,368,-1,368,353,354,-1,357,358,356,-1,356,358,355,-1,355,367,354,-1,367,364,366,-1});
  }
}
private class MFInt325 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {18,334,336,-1,18,336,333,-1,333,336,335,-1,333,335,17,-1,20,328,332,-1,20,332,330,-1,330,332,331,-1,330,331,19,-1,21,325,329,-1,21,329,327,-1,327,329,328,-1,327,328,20,-1,22,324,326,-1,22,326,323,-1,323,326,325,-1,323,325,21,-1,24,318,322,-1,24,322,320,-1,320,322,321,-1,320,321,23,-1,25,315,319,-1,25,319,317,-1,317,319,318,-1,317,318,24,-1,26,314,316,-1,26,316,313,-1,313,316,315,-1,313,315,25,-1,28,308,312,-1,28,312,310,-1,310,312,311,-1,310,311,27,-1,29,305,309,-1,29,309,307,-1,307,309,308,-1,307,308,28,-1,30,304,306,-1,30,306,303,-1,303,306,305,-1,303,305,29,-1,32,298,302,-1,32,302,300,-1,300,302,301,-1,300,301,31,-1,33,297,299,-1,33,299,296,-1,296,299,298,-1,296,298,32,-1,333,17,34,-1,35,18,333,-1,34,35,333,-1,36,19,18,-1,36,18,35,-1,330,19,36,-1,37,20,330,-1,36,37,330,-1,327,20,37,-1,38,21,327,-1,37,38,327,-1,323,21,38,-1,39,22,323,-1,38,39,323,-1,40,23,22,-1,40,22,39,-1,320,23,40,-1,41,24,320,-1,40,41,320,-1,317,24,41,-1,42,25,317,-1,41,42,317,-1,313,25,42,-1,43,26,313,-1,42,43,313,-1,44,27,26,-1,44,26,43,-1,310,27,44,-1,45,28,310,-1,44,45,310,-1,307,28,45,-1,46,29,307,-1,45,46,307,-1,303,29,46,-1,47,30,303,-1,46,47,303,-1,48,31,30,-1,48,30,47,-1,300,31,48,-1,49,32,300,-1,48,49,300,-1,296,32,49,-1,50,33,296,-1,49,50,296,-1,52,35,34,-1,52,34,51,-1,53,36,35,-1,53,35,52,-1,54,37,36,-1,54,36,53,-1,55,38,37,-1,55,37,54,-1,56,39,38,-1,56,38,55,-1,57,40,39,-1,57,39,56,-1,58,41,40,-1,58,40,57,-1,59,42,41,-1,59,41,58,-1,60,43,42,-1,60,42,59,-1,61,44,43,-1,61,43,60,-1,62,45,44,-1,62,44,61,-1,63,46,45,-1,63,45,62,-1,64,47,46,-1,64,46,63,-1,65,48,47,-1,65,47,64,-1,66,49,48,-1,66,48,65,-1,67,50,49,-1,67,49,66,-1,69,52,51,-1,69,51,68,-1,70,53,52,-1,70,52,69,-1,71,54,53,-1,71,53,70,-1,72,55,54,-1,72,54,71,-1,73,56,55,-1,73,55,72,-1,74,57,56,-1,74,56,73,-1,75,58,57,-1,75,57,74,-1,76,59,58,-1,76,58,75,-1,77,60,59,-1,77,59,76,-1,78,61,60,-1,78,60,77,-1,79,62,61,-1,79,61,78,-1,80,63,62,-1,80,62,79,-1,81,64,63,-1,81,63,80,-1,82,65,64,-1,82,64,81,-1,83,66,65,-1,83,65,82,-1,84,67,66,-1,84,66,83,-1,86,69,68,-1,86,68,85,-1,87,70,69,-1,87,69,86,-1,88,71,70,-1,88,70,87,-1,89,72,71,-1,89,71,88,-1,90,73,72,-1,90,72,89,-1,91,74,73,-1,91,73,90,-1,92,75,74,-1,92,74,91,-1,93,76,75,-1,93,75,92,-1,94,77,76,-1,94,76,93,-1,95,78,77,-1,95,77,94,-1,96,79,78,-1,96,78,95,-1,97,80,79,-1,97,79,96,-1,98,81,80,-1,98,80,97,-1,99,82,81,-1,99,81,98,-1,100,83,82,-1,100,82,99,-1,101,84,83,-1,101,83,100,-1,103,86,85,-1,103,85,102,-1,104,87,86,-1,104,86,103,-1,105,88,87,-1,105,87,104,-1,106,89,88,-1,106,88,105,-1,107,90,89,-1,107,89,106,-1,108,91,90,-1,108,90,107,-1,109,92,91,-1,109,91,108,-1,110,93,92,-1,110,92,109,-1,111,94,93,-1,111,93,110,-1,112,95,94,-1,112,94,111,-1,113,96,95,-1,113,95,112,-1});
  }
}
private class MFInt326 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {114,97,96,-1,114,96,113,-1,115,98,97,-1,115,97,114,-1,116,99,98,-1,116,98,115,-1,117,100,99,-1,117,99,116,-1,118,101,100,-1,118,100,117,-1,120,103,102,-1,120,102,119,-1,121,104,103,-1,121,103,120,-1,122,105,104,-1,122,104,121,-1,123,106,105,-1,123,105,122,-1,124,107,106,-1,124,106,123,-1,125,108,107,-1,125,107,124,-1,126,109,108,-1,126,108,125,-1,127,110,109,-1,127,109,126,-1,128,111,110,-1,128,110,127,-1,129,112,111,-1,129,111,128,-1,130,113,112,-1,130,112,129,-1,131,114,113,-1,131,113,130,-1,132,115,114,-1,132,114,131,-1,133,116,115,-1,133,115,132,-1,134,117,116,-1,134,116,133,-1,135,118,117,-1,135,117,134,-1,137,120,119,-1,137,119,136,-1,138,121,120,-1,138,120,137,-1,139,122,121,-1,139,121,138,-1,140,123,122,-1,140,122,139,-1,141,124,123,-1,141,123,140,-1,142,125,124,-1,142,124,141,-1,143,126,125,-1,143,125,142,-1,144,127,126,-1,144,126,143,-1,145,128,127,-1,145,127,144,-1,146,129,128,-1,146,128,145,-1,147,130,129,-1,147,129,146,-1,148,131,130,-1,148,130,147,-1,149,132,131,-1,149,131,148,-1,150,133,132,-1,150,132,149,-1,151,134,133,-1,151,133,150,-1,152,135,134,-1,152,134,151,-1,154,137,136,-1,154,136,153,-1,155,138,137,-1,155,137,154,-1,156,139,138,-1,156,138,155,-1,157,140,139,-1,157,139,156,-1,158,141,140,-1,158,140,157,-1,159,142,141,-1,159,141,158,-1,160,143,142,-1,160,142,159,-1,161,144,143,-1,161,143,160,-1,162,145,144,-1,162,144,161,-1,163,146,145,-1,163,145,162,-1,164,147,146,-1,164,146,163,-1,165,148,147,-1,165,147,164,-1,166,149,148,-1,166,148,165,-1,167,150,149,-1,167,149,166,-1,168,151,150,-1,168,150,167,-1,169,152,151,-1,169,151,168,-1,171,154,153,-1,171,153,170,-1,172,155,154,-1,172,154,171,-1,173,156,155,-1,173,155,172,-1,174,157,156,-1,174,156,173,-1,175,158,157,-1,175,157,174,-1,176,159,158,-1,176,158,175,-1,177,160,159,-1,177,159,176,-1,178,161,160,-1,178,160,177,-1,179,162,161,-1,179,161,178,-1,180,163,162,-1,180,162,179,-1,181,164,163,-1,181,163,180,-1,182,165,164,-1,182,164,181,-1,183,166,165,-1,183,165,182,-1,184,167,166,-1,184,166,183,-1,185,168,167,-1,185,167,184,-1,186,169,168,-1,186,168,185,-1,188,171,170,-1,188,170,187,-1,189,172,171,-1,189,171,188,-1,190,173,172,-1,190,172,189,-1,191,174,173,-1,191,173,190,-1,192,175,174,-1,192,174,191,-1,193,176,175,-1,193,175,192,-1,194,177,176,-1,194,176,193,-1,195,178,177,-1,195,177,194,-1,196,179,178,-1,196,178,195,-1,197,180,179,-1,197,179,196,-1,198,181,180,-1,198,180,197,-1,199,182,181,-1,199,181,198,-1,200,183,182,-1,200,182,199,-1,201,184,183,-1,201,183,200,-1,202,185,184,-1,202,184,201,-1,203,186,185,-1,203,185,202,-1,205,188,187,-1,205,187,204,-1,206,189,188,-1,206,188,205,-1,207,190,189,-1,207,189,206,-1,208,191,190,-1,208,190,207,-1,209,192,191,-1,209,191,208,-1,210,193,192,-1,210,192,209,-1,211,194,193,-1,211,193,210,-1,212,195,194,-1,212,194,211,-1,213,196,195,-1,213,195,212,-1,214,197,196,-1,214,196,213,-1,215,198,197,-1,215,197,214,-1,216,199,198,-1,216,198,215,-1,217,200,199,-1,217,199,216,-1,218,201,200,-1,218,200,217,-1,219,202,201,-1,219,201,218,-1,220,203,202,-1,220,202,219,-1,256,222,205,-1,204,221,256,-1,205,204,256,-1,223,206,205,-1,223,205,222,-1,260,224,207,-1,206,223,260,-1,207,206,260,-1});
  }
}
private class MFInt327 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {264,225,208,-1,207,224,264,-1,208,207,264,-1,267,226,209,-1,208,225,267,-1,209,208,267,-1,227,210,209,-1,227,209,226,-1,270,228,211,-1,210,227,270,-1,211,210,270,-1,274,229,212,-1,211,228,274,-1,212,211,274,-1,277,230,213,-1,212,229,277,-1,213,212,277,-1,231,214,213,-1,231,213,230,-1,280,232,215,-1,214,231,280,-1,215,214,280,-1,284,233,216,-1,215,232,284,-1,216,215,284,-1,287,234,217,-1,216,233,287,-1,217,216,287,-1,235,218,217,-1,235,217,234,-1,290,236,219,-1,218,235,290,-1,219,218,290,-1,294,237,220,-1,219,236,294,-1,220,219,294,-1,255,222,256,-1,255,256,258,-1,258,256,221,-1,258,221,257,-1,259,224,260,-1,259,260,262,-1,262,260,223,-1,262,223,261,-1,263,225,264,-1,263,264,265,-1,265,264,224,-1,265,224,259,-1,266,226,267,-1,266,267,268,-1,268,267,225,-1,268,225,263,-1,269,228,270,-1,269,270,272,-1,272,270,227,-1,272,227,271,-1,273,229,274,-1,273,274,275,-1,275,274,228,-1,275,228,269,-1,276,230,277,-1,276,277,278,-1,278,277,229,-1,278,229,273,-1,279,232,280,-1,279,280,282,-1,282,280,231,-1,282,231,281,-1,283,233,284,-1,283,284,285,-1,285,284,232,-1,285,232,279,-1,286,234,287,-1,286,287,288,-1,288,287,233,-1,288,233,283,-1,289,236,290,-1,289,290,292,-1,292,290,235,-1,292,235,291,-1,293,237,294,-1,293,294,295,-1,295,294,236,-1,295,236,289,-1,336,1,0,-1,2,1,334,-1,2,334,331,-1,0,335,336,-1,1,336,334,-1,4,3,329,-1,4,329,325,-1,4,326,5,-1,7,6,321,-1,7,321,322,-1,6,5,324,-1,6,324,321,-1,8,7,318,-1,8,318,319,-1,2,331,332,-1,3,2,332,-1,3,332,328,-1,331,334,18,-1,331,18,19,-1,3,328,329,-1,4,325,326,-1,321,324,22,-1,321,22,23,-1,7,322,318,-1,5,326,324,-1,315,8,319,-1,10,9,314,-1,10,314,311,-1,315,316,8,-1,316,9,8,-1,9,316,314,-1,311,314,26,-1,311,26,27,-1,312,10,311,-1,11,309,12,-1,12,306,13,-1,15,14,301,-1,15,301,302,-1,14,13,304,-1,14,304,301,-1,15,299,16,-1,312,308,11,-1,312,11,10,-1,11,308,309,-1,12,309,305,-1,13,306,304,-1,12,305,306,-1,15,302,298,-1,16,299,297,-1,30,31,301,-1,30,301,304,-1,15,298,299,-1,223,222,255,-1,223,255,261,-1,239,255,258,-1,261,255,239,-1,261,239,240,-1,258,257,238,-1,227,226,266,-1,227,266,271,-1,241,265,259,-1,242,268,263,-1,263,265,242,-1,259,262,241,-1,262,261,240,-1,238,239,258,-1,262,240,241,-1,241,242,265,-1,268,243,266,-1,242,243,268,-1,243,244,271,-1,243,271,266,-1,244,272,271,-1,245,269,272,-1,269,245,275,-1,275,246,273,-1,246,275,245,-1,244,245,272,-1,231,230,276,-1,231,276,281,-1,281,276,247,-1,281,247,248,-1,248,282,281,-1,276,278,247,-1,235,234,286,-1,235,286,291,-1,250,283,285,-1,251,286,288,-1,288,283,250,-1,285,279,249,-1,279,282,249,-1,246,247,278,-1,246,278,273,-1,282,248,249,-1,249,250,285,-1,291,286,251,-1,291,251,252,-1,250,251,288,-1,253,289,292,-1,253,295,289,-1,253,254,295,-1,254,293,295,-1,252,253,292,-1,252,292,291,-1,346,345,344,-1,347,346,344,-1,347,341,340,-1,343,347,344,-1,342,347,343,-1,342,341,347,-1,340,348,347,-1,351,350,349,-1,351,348,339,-1,352,351,338,-1,340,339,348,-1,351,339,338,-1,352,338,337,-1,349,348,351,-1,364,362,363,-1,367,358,362,-1,362,364,367,-1,360,361,362,-1,362,359,360,-1,362,358,359,-1,366,364,365,-1,358,367,355,-1});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {354,367,368,-1,368,353,354,-1,357,358,356,-1,356,358,355,-1,355,367,354,-1,367,364,366,-1});
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-0.002022875f ,-0.007740024f ,-0.00301528f ,-0.002240038f ,-0.007063307f ,-0.005670327f ,-0.002109013f ,-0.005234449f ,-0.007394051f ,-0.001639661f ,-0.002576728f ,-0.007936819f ,-0.00097084f ,0.000253732f ,-0.007341742f ,-0.000129539f ,0.003175223f ,-0.005553421f ,0.000765909f ,0.005707268f ,-0.002884633f ,0.001531687f ,0.007302933f ,0f ,0.002022875f ,0.007740024f ,0.00301528f ,0.002240038f ,0.007063307f ,0.005670327f ,0.002109013f ,0.005234449f ,0.007394051f ,0.001639661f ,0.002576728f ,0.007936819f ,0.00097084f ,-0.000253732f ,0.007341742f ,0.000129539f ,-0.003175223f ,0.005553421f ,-0.000765909f ,-0.005707268f ,0.002884633f ,-0.001531687f ,-0.007302933f ,0f ,-0.002022875f ,-0.007740024f ,0.002086147f ,-0.01920748f ,-0.003567731f ,-0.000932817f ,-0.01939429f ,-0.002898382f ,-0.003585642f ,-0.01928158f ,-0.001065078f ,-0.005301403f ,-0.01887781f ,0.001608567f ,-0.005832826f ,-0.01830245f ,0.004461718f ,-0.005223477f ,-0.01757871f ,0.007411753f ,-0.003419966f ,-0.01680839f ,0.009974177f ,-0.000738188f ,-0.01614962f ,0.01159582f ,0.002154778f ,-0.01572707f ,0.01204958f ,0.005173741f ,-0.01554026f ,0.01138023f ,0.007826566f ,-0.01565297f ,0.009546926f ,0.009542327f ,-0.01605674f ,0.006873282f ,0.01007375f ,-0.0166321f ,0.004020131f ,0.009464402f ,-0.01735584f ,0.001070096f ,0.00766089f ,-0.01812616f ,-0.001492329f ,0.004979112f ,-0.01878493f ,-0.003113975f ,0.002086147f ,-0.01920748f ,-0.003567731f ,0.003851785f ,-0.03657144f ,-0.000036454f ,0.000829703f ,-0.0367276f ,0.000626659f ,-0.00182124f ,-0.03663338f ,0.002463726f ,-0.003530263f ,-0.03629588f ,0.005150847f ,-0.004052083f ,-0.03581496f ,0.008023203f ,-0.003430655f ,-0.03521001f ,0.0109974f ,-0.001614287f ,-0.03456612f ,0.01358553f ,0.001078485f ,-0.03401548f ,0.01522917f ,0.003978502f ,-0.03366228f ,0.01569703f ,0.007000585f ,-0.03350613f ,0.01503392f ,0.009651528f ,-0.03360034f ,0.01319685f ,0.01136055f ,-0.03393784f ,0.01050973f ,0.01188237f ,-0.03441877f ,0.007637372f ,0.01126094f ,-0.03502372f ,0.004663179f ,0.009444575f ,-0.0356676f ,0.002075042f ,0.006751802f ,-0.03621824f ,0.000431406f ,0.003851785f ,-0.03657144f ,-0.000036454f ,0.0052964f ,-0.05408161f ,0.002852776f ,0.002271767f ,-0.05420684f ,0.003510787f ,-0.000377637f ,-0.05413128f ,0.005350932f ,-0.002081146f ,-0.05386062f ,0.008049081f ,-0.002595109f ,-0.05347492f ,0.01093715f ,-0.001963799f ,-0.05298976f ,0.01393111f ,-0.000136912f ,-0.05247337f ,0.01654028f ,0.002564856f ,-0.05203177f ,0.01820191f ,0.005470643f ,-0.05174851f ,0.01868131f ,0.008495276f ,-0.05162327f ,0.0180233f ,0.01114468f ,-0.05169883f ,0.01618315f ,0.01284819f ,-0.0519695f ,0.01348501f ,0.01336215f ,-0.0523552f ,0.01059694f ,0.01273084f ,-0.05284036f ,0.007602978f ,0.01090396f ,-0.05335674f ,0.004993803f ,0.008202188f ,-0.05379835f ,0.003332177f ,0.0052964f ,-0.05408161f ,0.002852776f ,0.006419992f ,-0.07170875f ,0.00509996f ,0.003393375f ,-0.07180285f ,0.005754003f ,0.000745168f ,-0.07174607f ,0.007596542f ,-0.000954053f ,-0.07154268f ,0.01030327f ,-0.001461905f ,-0.07125285f ,0.01320356f ,-0.000822909f ,-0.07088828f ,0.01621289f ,0.00101216f ,-0.07050025f ,0.01883843f ,0.003720924f ,-0.07016841f ,0.02051405f ,0.0066312f ,-0.06995555f ,0.02100242f ,0.009657817f ,-0.06986144f ,0.02034838f ,0.01230602f ,-0.06991822f ,0.01850584f ,0.01400524f ,-0.07012161f ,0.01579912f ,0.0145131f ,-0.07041144f ,0.01289883f ,0.0138741f ,-0.07077602f ,0.009889493f ,0.01203903f ,-0.07116405f ,0.007263956f ,0.009330267f ,-0.07149589f ,0.005588336f ,0.006419992f ,-0.07170875f ,0.00509996f ,0.007222552f ,-0.08942338f ,0.00670508f ,0.004194518f ,-0.0894862f ,0.007356288f ,0.001547166f ,-0.0894483f ,0.009200538f ,-0.000148992f ,-0.08931252f ,0.01191339f ,-0.00065248f ,-0.08911903f ,0.01482241f ,-0.000007993f ,-0.08887564f ,0.01784272f ,0.001832919f ,-0.08861659f ,0.02047995f ,0.004546682f ,-0.08839506f ,0.02216556f ,0.007460163f ,-0.08825296f ,0.02266035f ,0.0104882f ,-0.08819014f ,0.02200914f ,0.01313555f ,-0.08822805f ,0.02016489f ,0.01483171f ,-0.08836383f ,0.01745204f ,0.01533519f ,-0.08855731f ,0.01454302f ,0.01469071f ,-0.0888007f ,0.01152271f ,0.01284979f ,-0.08905975f ,0.008885481f ,0.01013603f ,-0.08928128f ,0.007199867f ,0.007222552f ,-0.08942338f ,0.00670508f ,0.007704094f ,-0.1071964f ,0.007668164f ,0.00467521f ,-0.1072278f ,0.008317672f ,0.002028371f ,-0.1072088f ,0.01016295f ,0.000334051f ,-0.1071409f ,0.01287947f ,-0.000166818f ,-0.1070441f ,0.01579373f ,0.000480963f ,-0.1069223f ,0.01882063f ,0.002325381f ,-0.1067926f ,0.02146487f ,0.005042143f ,-0.1066818f ,0.02315648f ,0.007957546f ,-0.1066107f ,0.02365512f ,0.01098643f ,-0.1065792f ,0.02300561f ,0.01363327f ,-0.1065982f ,0.02116033f ,0.01532759f ,-0.1066661f ,0.01844381f ,0.01582846f ,-0.106763f ,0.01552955f ,0.01518068f ,-0.1068848f ,0.01250265f ,0.01333626f ,-0.1070144f ,0.00985841f ,0.0106195f ,-0.1071253f ,0.008166798f ,0.007704094f ,-0.1071964f ,0.007668164f ,0.007864625f ,-0.1249986f ,0.007989226f ,0.004835457f ,-0.1249986f ,0.008638166f ,0.002188789f ,-0.1249986f ,0.01048378f ,0.000495082f ,-0.1249986f ,0.01320154f ,-0.000004914f ,-0.1249986f ,0.01611754f ,0.000643965f ,-0.1249986f ,0.01914664f ,0.002489553f ,-0.1249986f ,0.02179321f ,0.005207313f ,-0.1249986f ,0.02348682f ,0.008123359f ,-0.1249986f ,0.02398674f ,0.01115253f ,-0.1249986f ,0.0233378f ,0.01379919f ,-0.1249986f ,0.02149218f ,0.0154929f ,-0.1249986f ,0.01877443f ,0.0159929f ,-0.1249986f ,0.01585843f ,0.01534402f ,-0.1249986f ,0.01282933f ,0.01349843f ,-0.1249986f ,0.01018275f ,0.01078067f ,-0.1249986f ,0.008489142f ,0.007864625f ,-0.1249986f ,0.007989226f ,0.007704144f ,-0.1428009f ,0.007668264f ,0.004675259f ,-0.1427694f ,0.008317771f ,0.002028421f ,-0.1427884f ,0.01016305f ,0.000334101f ,-0.1428563f ,0.01287957f ,-0.000166768f ,-0.1429531f ,0.01579383f ,0.000481014f ,-0.1430749f ,0.01882073f ,0.002325432f ,-0.1432045f ,0.02146497f ,0.005042194f ,-0.1433154f ,0.02315659f ,0.007957598f ,-0.1433865f ,0.02365522f ,0.01098648f ,-0.1434179f ,0.02300571f ,0.01363332f ,-0.143399f ,0.02116044f ,0.01532764f ,-0.143331f ,0.01844391f ,0.01582851f ,-0.1432342f ,0.01552965f ,0.01518073f ,-0.1431124f ,0.01250275f ,0.01333631f ,-0.1429828f ,0.00985851f ,0.01061955f ,-0.142872f ,0.008166898f ,0.007704144f ,-0.1428009f ,0.007668264f ,0.007222651f ,-0.1605739f ,0.006705278f ,0.004194617f ,-0.1605111f ,0.007356486f ,0.001547265f ,-0.160549f ,0.009200736f ,-0.000148893f ,-0.1606847f ,0.01191359f ,-0.00065238f ,-0.1608782f ,0.01482261f ,-0.000007892f ,-0.1611216f ,0.01784292f ,0.001833021f ,-0.1613806f ,0.02048015f ,0.004546784f ,-0.1616021f ,0.02216577f ,0.007460265f ,-0.1617442f ,0.02266055f ,0.0104883f ,-0.161807f ,0.02200935f ,0.01313565f ,-0.1617691f ,0.0201651f ,0.01483181f ,-0.1616334f ,0.01745224f ,0.0153353f ,-0.1614399f ,0.01454322f ,0.01469081f ,-0.1611965f ,0.01152291f ,0.0128499f ,-0.1609375f ,0.008885682f ,0.01013613f ,-0.160716f ,0.007200066f ,0.007222651f ,-0.1605739f ,0.006705278f ,0.006420146f ,-0.1782884f ,0.005100268f ,0.003393529f ,-0.1781943f ,0.00575431f ,0.000745322f ,-0.1782511f ,0.00759685f ,-0.000953898f ,-0.1784545f ,0.01030358f ,-0.00146175f ,-0.1787443f ,0.01320387f ,-0.000822752f ,-0.1791088f ,0.0162132f ,0.001012317f ,-0.1794969f ,0.01883874f ,0.003721083f ,-0.1798287f ,0.02051437f ,0.006631359f ,-0.1800415f ,0.02100274f ,0.009657976f ,-0.1801356f ,0.0203487f ,0.01230618f ,-0.1800788f ,0.01850616f ,0.0140054f ,-0.1798755f ,0.01579943f ,0.01451326f ,-0.1795857f ,0.01289914f ,0.01387426f ,-0.1792211f ,0.009889807f ,0.01203919f ,-0.1788331f ,0.007264267f ,0.009330422f ,-0.1785013f ,0.005588646f ,0.006420146f ,-0.1782884f ,0.005100268f ,0.005296629f ,-0.1959153f ,0.002853233f ,0.002271995f ,-0.19579f ,0.003511244f ,-0.000377408f ,-0.1958656f ,0.005351389f ,-0.002080917f ,-0.1961362f ,0.008049539f ,-0.002594879f ,-0.1965219f ,0.01093761f ,-0.001963567f ,-0.1970071f ,0.01393157f ,-0.000136679f ,-0.1975234f ,0.01654075f ,0.002565091f ,-0.197965f ,0.01820238f ,0.005470879f ,-0.1982483f ,0.01868178f ,0.008495512f ,-0.1983735f ,0.01802377f ,0.01114492f ,-0.1982979f ,0.01618363f ,0.01284842f ,-0.1980273f ,0.01348548f ,0.01336239f ,-0.1976416f ,0.01059741f ,0.01273108f ,-0.1971565f ,0.007603443f ,0.01090419f ,-0.1966401f ,0.004994265f ,0.008202417f ,-0.1961985f ,0.003332636f ,0.005296629f ,-0.1959153f ,0.002853233f ,0.003852099f ,-0.2134251f ,-0.000035827f ,0.000830016f ,-0.213269f ,0.000627285f ,-0.001820927f ,-0.2133632f ,0.002464353f ,-0.003529948f ,-0.2137007f ,0.005151477f ,-0.004051766f ,-0.2141816f ,0.008023837f ,-0.003430337f ,-0.2147865f ,0.01099803f ,-0.001613967f ,-0.2154304f ,0.01358618f ,0.001078808f ,-0.215981f ,0.01522981f ,0.003978827f ,-0.2163342f ,0.01569768f ,0.007000909f ,-0.2164903f ,0.01503457f ,0.009651852f ,-0.2163961f ,0.0131975f ,0.01136087f ,-0.2160587f ,0.01051037f ,0.01188269f ,-0.2155777f ,0.007638014f ,0.01126126f ,-0.2149728f ,0.004663817f ,0.009444892f ,-0.214329f ,0.002075676f ,0.006752118f ,-0.2137783f ,0.000432036f ,0.003852099f ,-0.2134251f ,-0.000035827f ,0.002086556f ,-0.2307889f ,-0.003566912f ,-0.000932409f ,-0.230602f ,-0.002897565f ,-0.003585233f ,-0.2307148f ,-0.00106426f ,-0.005300993f ,-0.2311185f ,0.001609388f ,-0.005832413f ,-0.2316938f ,0.004462543f ,-0.005223062f ,-0.2324176f ,0.007412584f ,-0.003419547f ,-0.2331879f ,0.009975014f ,-0.000737766f ,-0.2338466f ,0.01159667f ,0.0021552f ,-0.2342691f ,0.01205042f ,0.005174165f ,-0.2344559f ,0.01138108f ,0.007826989f ,-0.2343432f ,0.009547772f ,0.009542749f ,-0.2339395f ,0.006874125f ,0.01007417f ,-0.2333641f ,0.004020969f ,0.009464818f ,-0.2326404f ,0.001070929f ,0.007661304f ,-0.2318701f ,-0.001491502f ,0.004979522f ,-0.2312114f ,-0.003113153f ,0.002086556f ,-0.2307889f ,-0.003566912f ,0f ,-0.2479771f ,-0.007740024f ,-0.00301528f ,-0.24776f ,-0.007063307f ,-0.005670327f ,-0.247891f ,-0.005234449f ,-0.007394051f ,-0.2483603f ,-0.002576728f ,-0.007936819f ,-0.2490292f ,0.000253732f ,-0.007341742f ,-0.2498705f ,0.003175223f ,-0.005553421f ,-0.2507659f ,0.005707268f ,-0.002884633f ,-0.2515317f ,0.007302933f ,0f ,-0.2520229f ,0.007740024f ,0.00301528f ,-0.25224f ,0.007063307f ,0.005670327f ,-0.252109f ,0.005234449f ,0.007394051f ,-0.2516397f ,0.002576728f ,0.007936819f ,-0.2509708f ,-0.000253732f ,0.007341742f ,-0.2501296f ,-0.003175223f ,0.005553421f ,-0.2492341f ,-0.005707268f ,0.002884633f ,-0.2484683f ,-0.007302933f ,0f ,-0.2479771f ,-0.007740024f ,-0.001933789f ,-0.2392047f ,-0.004900325f ,0.000592624f ,-0.2306629f ,-0.003386314f ,0.001083405f ,-0.2394067f ,-0.005573215f ,-0.000409333f ,-0.2392706f ,-0.005390228f ,-0.00630727f ,-0.2397632f ,-0.000403167f ,-0.004587974f ,-0.2308855f ,0.000205124f ,-0.004587681f ,-0.2393266f ,-0.003069157f ,-0.005592042f ,-0.2395113f ,-0.001803013f ,-0.006844146f ,-0.2403855f ,0.002439077f ,-0.005709214f ,-0.2313948f ,0.003056294f ,-0.006718112f ,-0.2400621f ,0.001038499f ,-0.006241657f ,-0.2411681f ,0.005375393f ,-0.005684278f ,-0.2320357f ,0.005925977f ,-0.006699252f ,-0.2407552f ,0.003896027f ,-0.001769913f ,-0.2427136f ,0.009532372f ,-0.002150809f ,-0.2335412f ,0.01092978f ,-0.004445447f ,-0.2420012f ,0.007923215f ,-0.00318006f ,-0.2423833f ,0.008871278f ,0.001119047f ,-0.2431705f ,0.009978118f ,0.000726006f ,-0.2340908f ,0.01196307f ,-0.000308457f ,-0.2429777f ,0.009894148f ,0.00413624f ,-0.2433726f ,0.009305228f ,0.003649132f ,-0.2343951f ,0.01186983f ,0.002611784f ,-0.2433067f ,0.009795131f ,0.008509722f ,-0.242814f ,0.00480807f });
  }
}
private class MFVec3f10 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.008829731f ,-0.2341725f ,0.008278389f ,0.006790133f ,-0.2432507f ,0.00747406f ,0.007794494f ,-0.243066f ,0.006207915f ,0.009046597f ,-0.2421918f ,0.001965826f ,0.00995097f ,-0.2336631f ,0.005427219f ,0.008920563f ,-0.2425152f ,0.003366404f ,0.008444109f ,-0.2414092f ,-0.00097049f ,0.009926034f ,-0.2330223f ,0.002557536f ,0.008901704f ,-0.2418221f ,0.000508876f ,0.003972365f ,-0.2398637f ,-0.005127469f ,0.006392566f ,-0.2315168f ,-0.002446267f ,0.006647899f ,-0.2405761f ,-0.003518311f ,0.005382512f ,-0.240194f ,-0.004466374f ,0.001083405f ,-0.2394067f ,-0.005573215f ,0.00351575f ,-0.2309672f ,-0.003479561f ,0.002510908f ,-0.2395996f ,-0.005489245f ,0.00351534f ,-0.01902915f ,-0.003480381f ,0.001083183f ,-0.01059143f ,-0.005573659f ,0.003972142f ,-0.01013446f ,-0.005127915f ,0.002510686f ,-0.01039858f ,-0.00548969f ,0.006392153f ,-0.01847953f ,-0.002447091f ,0.006647674f ,-0.009422042f ,-0.00351876f ,0.005382288f ,-0.009804192f ,-0.004466821f ,0.009925616f ,-0.01697399f ,0.0025567f ,0.008443884f ,-0.008588986f ,-0.000970941f ,0.00904637f ,-0.007806303f ,0.001965371f ,0.008901478f ,-0.008176036f ,0.000508423f ,0.00995055f ,-0.01633309f ,0.005426378f ,0.008509493f ,-0.007184084f ,0.004807613f ,0.008920335f ,-0.007482947f ,0.003365949f ,0.008829308f ,-0.01582375f ,0.008277544f ,0.006789904f ,-0.006747434f ,0.007473601f ,0.007794265f ,-0.006932123f ,0.006207458f ,0.003648709f ,-0.01560113f ,0.01186898f ,0.004136011f ,-0.006625538f ,0.009304768f ,0.001118818f ,-0.00682757f ,0.00997766f ,0.002611555f ,-0.006691372f ,0.009794673f ,0.000725584f ,-0.0159054f ,0.01196223f ,-0.001770141f ,-0.007284535f ,0.009531916f ,-0.000308685f ,-0.007020421f ,0.00989369f ,-0.002151229f ,-0.01645502f ,0.01092894f ,-0.004445674f ,-0.007996957f ,0.00792276f ,-0.003180288f ,-0.007614807f ,0.008870822f ,-0.005684691f ,-0.01796056f ,0.005925148f ,-0.006241883f ,-0.008830013f ,0.005374942f ,-0.00684437f ,-0.009612695f ,0.00243863f ,-0.006699477f ,-0.009242963f ,0.003895578f ,-0.005709626f ,-0.01860146f ,0.003055471f ,-0.006307492f ,-0.01023492f ,-0.000403612f ,-0.006718335f ,-0.009936052f ,0.001038052f ,-0.004588384f ,-0.0191108f ,0.000204304f ,-0.004587903f ,-0.01067157f ,-0.0030696f ,-0.005592264f ,-0.01048688f ,-0.001803457f ,0.000592215f ,-0.01933342f ,-0.003387132f ,-0.00193401f ,-0.01079346f ,-0.004900767f ,0.001083183f ,-0.01059143f ,-0.005573659f ,-0.000409554f ,-0.01072763f ,-0.005390672f ,0f ,-0.002022875f ,-0.007740024f ,0.002884633f ,-0.001531687f ,-0.007302933f ,0.005553421f ,-0.000765909f ,-0.005707268f ,0.007341742f ,0.000129539f ,-0.003175223f ,0.007936819f ,0.00097084f ,-0.000253732f ,0.007394051f ,0.001639661f ,0.002576728f ,0.005670327f ,0.002109013f ,0.005234449f ,0.00301528f ,0.002240038f ,0.007063307f ,0f ,0.002022875f ,0.007740024f ,-0.002884633f ,0.001531687f ,0.007302933f ,-0.005553421f ,0.000765909f ,0.005707268f ,-0.007341742f ,-0.000129539f ,0.003175223f ,-0.007936819f ,-0.00097084f ,0.000253732f ,-0.007394051f ,-0.001639661f ,-0.002576728f ,-0.005670327f ,-0.002109013f ,-0.005234449f ,-0.00301528f ,-0.002240038f ,-0.007063307f ,0f ,-0.2479771f ,-0.007740024f ,0.002884633f ,-0.2484683f ,-0.007302933f ,0.005553421f ,-0.2492341f ,-0.005707268f ,0.007341742f ,-0.2501296f ,-0.003175223f ,0.007936819f ,-0.2509708f ,-0.000253732f ,0.007394051f ,-0.2516397f ,0.002576728f ,0.005670327f ,-0.252109f ,0.005234449f ,0.00301528f ,-0.25224f ,0.007063307f ,0f ,-0.2520229f ,0.007740024f ,-0.002884633f ,-0.2515317f ,0.007302933f ,-0.005553421f ,-0.2507659f ,0.005707268f ,-0.007341742f ,-0.2498705f ,0.003175223f ,-0.007936819f ,-0.2490292f ,0.000253732f ,-0.007394051f ,-0.2483603f ,-0.002576728f ,-0.005670327f ,-0.247891f ,-0.005234449f ,-0.00301528f ,-0.24776f ,-0.007063307f });
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,13,12,-1,12,15,14,-1,16,15,12,-1,11,10,0,-1,11,0,16,-1,9,1,10,-1,16,12,11,-1,9,2,1,-1,0,10,1,-1,9,8,2,-1,3,2,8,-1,3,7,6,-1,5,4,6,-1,3,6,4,-1,3,8,7,-1,18,36,35,-1,18,35,17,-1,20,38,37,-1,20,37,19,-1,19,37,36,-1,19,36,18,-1,22,40,39,-1,22,39,21,-1,24,42,41,-1,24,41,23,-1,25,43,42,-1,25,42,24,-1,23,41,40,-1,23,40,22,-1,21,39,38,-1,21,38,20,-1,27,45,44,-1,27,44,26,-1,29,47,46,-1,29,46,28,-1,28,46,45,-1,28,45,27,-1,31,49,48,-1,31,48,30,-1,33,51,50,-1,33,50,32,-1,34,52,51,-1,34,51,33,-1,32,50,49,-1,32,49,31,-1,30,48,47,-1,30,47,29,-1,26,44,43,-1,26,43,25,-1,67,65,66,-1,65,67,68,-1,64,65,68,-1,69,63,64,-1,69,53,63,-1,62,63,53,-1,69,64,68,-1,61,62,54,-1,53,54,62,-1,61,54,55,-1,60,61,55,-1,56,59,60,-1,57,58,56,-1,59,56,58,-1,56,60,55,-1});
  }
}
private class MFInt3212 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,13,12,-1,12,15,14,-1,16,15,12,-1,11,10,0,-1,11,0,16,-1,9,1,10,-1,16,12,11,-1,9,2,1,-1,0,10,1,-1,9,8,2,-1,3,2,8,-1,3,7,6,-1,5,4,6,-1,3,6,4,-1,3,8,7,-1,18,36,35,-1,18,35,17,-1,20,38,37,-1,20,37,19,-1,19,37,36,-1,19,36,18,-1,22,40,39,-1,22,39,21,-1,24,42,41,-1,24,41,23,-1,25,43,42,-1,25,42,24,-1,23,41,40,-1,23,40,22,-1,21,39,38,-1,21,38,20,-1,27,45,44,-1,27,44,26,-1,29,47,46,-1,29,46,28,-1,28,46,45,-1,28,45,27,-1,31,49,48,-1,31,48,30,-1,33,51,50,-1,33,50,32,-1,34,52,51,-1,34,51,33,-1,32,50,49,-1,32,49,31,-1,30,48,47,-1,30,47,29,-1,26,44,43,-1,26,43,25,-1,67,65,66,-1,65,67,68,-1,64,65,68,-1,69,63,64,-1,69,53,63,-1,62,63,53,-1,69,64,68,-1,61,62,54,-1,53,54,62,-1,61,54,55,-1,60,61,55,-1,56,59,60,-1,57,58,56,-1,59,56,58,-1,56,60,55,-1});
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.04385769f ,0.02648776f ,0.04485641f ,0.05110346f ,0.0351809f ,0.05806774f ,0.05742626f ,0.04387983f ,0.07175172f ,0.06256038f ,0.05286236f ,0.08657927f ,0.06352045f ,0.06117609f ,0.1021987f ,0.05089261f ,0.05736443f ,0.1011314f ,0.03992543f ,0.04915393f ,0.0907154f ,0.03029698f ,0.04047513f ,0.0787232f ,0.02162369f ,0.03164305f ,0.0659566f ,0.01405397f ,0.02305672f ,0.0531141f ,0.007210886f ,0.01431384f ,0.03960512f ,0.001431621f ,0.005554617f ,0.02553259f ,-0.002379125f ,-0.003031186f ,0.01081163f ,0.003381157f ,-0.007331477f ,-0.000395989f ,0.01643004f ,0.00051167f ,0.008267757f ,0.02624504f ,0.008666251f ,0.01915154f ,0.03583432f ,0.01786377f ,0.03216781f ,0.04385769f ,0.02648776f ,0.04485641f ,0.05110346f ,0.0351809f ,0.05806774f ,0.05742626f ,0.04387983f ,0.07175172f ,0.06256038f ,0.05286236f ,0.08657927f ,0.06352045f ,0.06117609f ,0.1021987f ,0.05089261f ,0.05736443f ,0.1011314f ,0.03992543f ,0.04915393f ,0.0907154f ,0.03029698f ,0.04047513f ,0.0787232f ,0.02162369f ,0.03164305f ,0.0659566f ,0.01405397f ,0.02305672f ,0.0531141f ,0.007210886f ,0.01431384f ,0.03960512f ,0.001431621f ,0.005554617f ,0.02553259f ,-0.002379125f ,-0.003031186f ,0.01081163f ,0.003381157f ,-0.007331477f ,-0.000395989f ,0.01643004f ,0.00051167f ,0.008267757f ,0.02624504f ,0.008666251f ,0.01915154f ,0.03583432f ,0.01786377f ,0.03216781f ,0.04385769f ,0.02648776f ,0.04485641f ,0.04475212f ,0.02302366f ,0.04664526f ,0.05199789f ,0.0317168f ,0.05985659f ,0.05832068f ,0.04041572f ,0.07354058f ,0.06345481f ,0.04939826f ,0.08836813f ,0.06441488f ,0.05771199f ,0.1039876f ,0.05178704f ,0.05390033f ,0.1029202f ,0.04081986f ,0.04568983f ,0.09250425f ,0.03119141f ,0.03701103f ,0.08051205f ,0.02251811f ,0.02817895f ,0.06774545f ,0.0149484f ,0.01959262f ,0.05490296f ,0.008105312f ,0.01084974f ,0.04139397f ,0.002326048f ,0.002090515f ,0.02732145f ,-0.001484698f ,-0.006495288f ,0.01260048f ,0.004275584f ,-0.01079558f ,0.001392865f ,0.01732447f ,-0.002952432f ,0.01005661f ,0.02713947f ,0.00520215f ,0.02094039f ,0.03672875f ,0.01439966f ,0.03395666f ,0.04475212f ,0.02302366f ,0.04664526f ,0.04475212f ,0.02302366f ,0.04664526f ,0.05199789f ,0.0317168f ,0.05985659f ,0.05832068f ,0.04041572f ,0.07354058f ,0.06345481f ,0.04939826f ,0.08836813f ,0.06441488f ,0.05771199f ,0.1039876f ,0.05178704f ,0.05390033f ,0.1029202f ,0.04081986f ,0.04568983f ,0.09250425f ,0.03119141f ,0.03701103f ,0.08051205f ,0.02251811f ,0.02817895f ,0.06774545f ,0.0149484f ,0.01959262f ,0.05490296f ,0.008105312f ,0.01084974f ,0.04139397f ,0.002326048f ,0.002090515f ,0.02732145f ,-0.001484698f ,-0.006495288f ,0.01260048f ,0.004275584f ,-0.01079558f ,0.001392865f ,0.01732447f ,-0.002952432f ,0.01005661f ,0.02713947f ,0.00520215f ,0.02094039f ,0.03672875f ,0.01439966f ,0.03395666f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation15 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,0f ,1f ,0f ,-0.5f ,1f ,0f ,6.28f ,0.5f ,1f ,0f ,6.28f ,0f ,0f ,1f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation17 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,0.5236f ,-0.5f ,1f ,0f ,0.5236f ,0.5f ,1f ,0f ,0.5236f ,0f ,1f ,0f ,0.5236f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation19 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,1.0472f ,-0.5f ,1f ,0f ,1.0472f ,0.5f ,1f ,0f ,1.0472f ,0f ,1f ,0f ,1.0472f });
  }
}
private class MFFloat20 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation21 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,1.5708f ,-0.5f ,1f ,0f ,1.5708f ,0.5f ,1f ,0f ,1.5708f ,0f ,1f ,0f ,1.5708f });
  }
}
private class MFFloat22 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation23 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,2.0944f ,-0.5f ,1f ,0f ,2.0944f ,0.5f ,1f ,0f ,2.0944f ,0f ,1f ,0f ,2.0944f });
  }
}
private class MFFloat24 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation25 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,2.618f ,-0.5f ,1f ,0f ,2.618f ,0.5f ,1f ,0f ,2.618f ,0f ,1f ,0f ,2.618f });
  }
}
private class MFFloat26 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation27 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,3.1416f ,-0.5f ,1f ,0f ,3.1416f ,0.5f ,1f ,0f ,3.1416f ,0f ,1f ,0f ,3.1416f });
  }
}
private class MFFloat28 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation29 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,3.6652f ,-0.5f ,1f ,0f ,3.6652f ,0.5f ,1f ,0f ,3.6652f ,0f ,1f ,0f ,3.6652f });
  }
}
private class MFFloat30 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation31 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,4.1888f ,-0.5f ,1f ,0f ,4.1888f ,0.5f ,1f ,0f ,4.1888f ,0f ,1f ,0f ,4.1888f });
  }
}
private class MFFloat32 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation33 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,4.7124f ,-0.5f ,1f ,0f ,4.7124f ,0.5f ,1f ,0f ,4.7124f ,0f ,1f ,0f ,4.7124f });
  }
}
private class MFFloat34 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation35 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,5.236f ,-0.5f ,1f ,0f ,5.236f ,0.5f ,1f ,0f ,5.236f ,0f ,1f ,0f ,5.236f });
  }
}
private class MFFloat36 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.23f ,0.55f ,1f });
  }
}
private class MFRotation37 {
  private org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0f ,1f ,0f ,5.7596f ,-0.5f ,1f ,0f ,5.7596f ,0.5f ,1f ,0f ,5.7596f ,0f ,1f ,0f ,5.7596f });
  }
}
private class MFFloat38 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.73f ,0.85f ,1f });
  }
}
private class MFBool39 {
  private org.web3d.x3d.jsail.fields.MFBool getArray() {
    return new org.web3d.x3d.jsail.fields.MFBool(new boolean[] {false,true,false,false});
  }
}
}

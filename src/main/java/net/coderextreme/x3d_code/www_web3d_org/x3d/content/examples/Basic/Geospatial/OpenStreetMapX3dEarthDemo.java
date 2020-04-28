package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.Geospatial;
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
public class OpenStreetMapX3dEarthDemo {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new OpenStreetMapX3dEarthDemo().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/OpenStreetMapX3dEarthDemo.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("OpenStreetMapX3dEarthDemo.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Byounghyun Yoo"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://x3d-earth.nps.edu"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d-earth"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
        .addMeta(new metaObject().setName("reference").setContent("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
        .addMeta(new metaObject().setName("subject").setContent("X3D-Earth tile"))
        .addMeta(new metaObject().setName("warning").setContent("under development"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/OpenStreetMapX3dEarthDemo.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("OpenStreetMapToX3D.php, https://www.web3d.org/x3d/content/examples/Basic/GeoSpatial/OpenStreetMapToX3D.php"))
        .addMeta(new metaObject().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("OpenStreetMapX3dEarthDemo.x3d"))
        .addChild(new GroupObject()
          .addComments(new CommentsBlock("28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level 28.225 0.7 Algeria, Africa 13 level"))
          .addChild(new InlineObject().setUrl(new MFStringObject(new MFString0().getArray())))
          .addChild(new GeoViewpointObject().setDescription("Default Viewpoint").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString1().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {0d,0d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setDEF("ORIGIN").setGeoCoords(new double[] {0d,0d,-6378137d}).setGeoSystem(new MFStringObject(new MFString2().getArray()))))
          .addChild(new GeoViewpointObject().setDEF("ZOOM").setDescription("Zoom and Spin").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString3().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.500152d,-0.126236d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM1").setDescription("Orange County Convention Center, Orlando, FL").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString4().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM2").setDescription("Kabul, Afghanistan").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString5().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.53258110649095d,69.13782119750977d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM3").setDescription("Naval Postgraduate School, Monterey, CA").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString6().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM4").setDescription("San Francisco Museum of Modern Art, San Francisco, CA").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString7().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM5").setDescription("Narragansett Bay, Newport, RI").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString8().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM6").setDescription("King's Cross, London, United Kingdom").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString9().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM7").setDescription("Scollay Square, Boston, MA").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString10().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM8").setDescription("San Diego Convention Center, San Diego, CA").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString11().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM9").setDescription("International Plaza Resort and Spa, Orlando, FL").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString12().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM10").setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString13().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDEF("ZOOM11").setDescription("Port of Singapore, Singapore").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString14().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,500000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("0E 0N").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString15().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {0d,0d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("90E 0N").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString16().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {0d,89.9d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("90W 0N").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString17().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {0d,-89.9d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("180E 0N").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString18().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {0d,180d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("North Pole").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString19().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {90d,0d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("South Pole").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString20().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-89.9d,0d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString21().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString22().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString23().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString24().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString25().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Orange County Convention Center, Orlando, FL: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString26().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.424806942669584d,-81.46898746490479d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Kabul, Afghanistan: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString27().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.53258110649095d,69.13782119750977d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Kabul, Afghanistan: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString28().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.53258110649095d,69.13782119750977d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Kabul, Afghanistan: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString29().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.53258110649095d,69.13782119750977d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Kabul, Afghanistan: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString30().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.53258110649095d,69.13782119750977d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString31().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString32().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString33().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString34().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString35().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Naval Postgraduate School, Monterey, CA: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString36().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.596454966540136d,-121.87352389097214d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString37().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString38().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString39().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString40().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString41().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Francisco Museum of Modern Art, San Francisco, CA: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString42().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78588957889747d,-122.40087300539018d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString43().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString44().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString45().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString46().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString47().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Narragansett Bay, Newport, RI: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString48().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.48692107976417d,-71.32715016603471d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString49().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString50().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString51().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString52().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString53().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("King's Cross, London, United Kingdom: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString54().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.5305712322625d,-0.12352377176285152d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString55().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString56().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString57().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString58().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString59().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Scollay Square, Boston, MA: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString60().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {42.36027219744271d,-71.05916529893875d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString61().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString62().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString63().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString64().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString65().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("San Diego Convention Center, San Diego, CA: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString66().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {32.70688495899665d,-117.16055274009707d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString67().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString68().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString69().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString70().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString71().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("International Plaza Resort and Spa, Orlando, FL: 200m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString72().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.41747302782284d,-81.46303564310074d,200d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString73().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString74().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString75().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString76().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString77().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil: 300m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString78().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-7.137685657416106d,-34.845199584960945d,300d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 10000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString79().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,10000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 1000Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString80().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,1000000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 100Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString81().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,100000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 10Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString82().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,10000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 1Km").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString83().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,1000d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("Port of Singapore, Singapore: 500m").setFieldOfView(1.05f).setGeoSystem(new MFStringObject(new MFString84().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {1.26299d,103.837398d,500d})
            .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN")))
          .addChild(new TimeSensorObject().setDEF("TIMER").setCycleInterval(800d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP").setKey(new MFFloatObject(new MFFloat85().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d86().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM").setToField("enabled").setToNode("TIMER"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER").setToField("set_fraction").setToNode("GeoPositionINTERP"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP").setToField("position").setToNode("ZOOM"))
          .addComments(new CommentsBlock("28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL"))
          .addChild(new TimeSensorObject().setDEF("TIMER1").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP1").setKey(new MFFloatObject(new MFFloat87().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d88().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM1").setToField("enabled").setToNode("TIMER1"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER1").setToField("set_fraction").setToNode("GeoPositionINTERP1"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP1").setToField("position").setToNode("ZOOM1"))
          .addComments(new CommentsBlock("34.53258110649095 69.13782119750976 Kabul, Afghanistan"))
          .addChild(new TimeSensorObject().setDEF("TIMER2").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP2").setKey(new MFFloatObject(new MFFloat89().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d90().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM2").setToField("enabled").setToNode("TIMER2"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER2").setToField("set_fraction").setToNode("GeoPositionINTERP2"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP2").setToField("position").setToNode("ZOOM2"))
          .addComments(new CommentsBlock("36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA"))
          .addChild(new TimeSensorObject().setDEF("TIMER3").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP3").setKey(new MFFloatObject(new MFFloat91().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d92().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM3").setToField("enabled").setToNode("TIMER3"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER3").setToField("set_fraction").setToNode("GeoPositionINTERP3"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP3").setToField("position").setToNode("ZOOM3"))
          .addComments(new CommentsBlock("37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA"))
          .addChild(new TimeSensorObject().setDEF("TIMER4").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP4").setKey(new MFFloatObject(new MFFloat93().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d94().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM4").setToField("enabled").setToNode("TIMER4"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER4").setToField("set_fraction").setToNode("GeoPositionINTERP4"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP4").setToField("position").setToNode("ZOOM4"))
          .addComments(new CommentsBlock("41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI"))
          .addChild(new TimeSensorObject().setDEF("TIMER5").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP5").setKey(new MFFloatObject(new MFFloat95().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d96().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM5").setToField("enabled").setToNode("TIMER5"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER5").setToField("set_fraction").setToNode("GeoPositionINTERP5"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP5").setToField("position").setToNode("ZOOM5"))
          .addComments(new CommentsBlock("51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom"))
          .addChild(new TimeSensorObject().setDEF("TIMER6").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP6").setKey(new MFFloatObject(new MFFloat97().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d98().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM6").setToField("enabled").setToNode("TIMER6"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER6").setToField("set_fraction").setToNode("GeoPositionINTERP6"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP6").setToField("position").setToNode("ZOOM6"))
          .addComments(new CommentsBlock("42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA"))
          .addChild(new TimeSensorObject().setDEF("TIMER7").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP7").setKey(new MFFloatObject(new MFFloat99().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d100().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM7").setToField("enabled").setToNode("TIMER7"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER7").setToField("set_fraction").setToNode("GeoPositionINTERP7"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP7").setToField("position").setToNode("ZOOM7"))
          .addComments(new CommentsBlock("32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA"))
          .addChild(new TimeSensorObject().setDEF("TIMER8").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP8").setKey(new MFFloatObject(new MFFloat101().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d102().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM8").setToField("enabled").setToNode("TIMER8"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER8").setToField("set_fraction").setToNode("GeoPositionINTERP8"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP8").setToField("position").setToNode("ZOOM8"))
          .addComments(new CommentsBlock("28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL"))
          .addChild(new TimeSensorObject().setDEF("TIMER9").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP9").setKey(new MFFloatObject(new MFFloat103().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d104().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM9").setToField("enabled").setToNode("TIMER9"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER9").setToField("set_fraction").setToNode("GeoPositionINTERP9"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP9").setToField("position").setToNode("ZOOM9"))
          .addComments(new CommentsBlock("-7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil"))
          .addChild(new TimeSensorObject().setDEF("TIMER10").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP10").setKey(new MFFloatObject(new MFFloat105().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d106().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM10").setToField("enabled").setToNode("TIMER10"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER10").setToField("set_fraction").setToNode("GeoPositionINTERP10"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP10").setToField("position").setToNode("ZOOM10"))
          .addComments(new CommentsBlock("1.26299 103.837398 Port of Singapore, Singapore"))
          .addChild(new TimeSensorObject().setDEF("TIMER11").setCycleInterval(400d).setEnabled(false).setLoop(true))
          .addChild(new GeoPositionInterpolatorObject().setDEF("GeoPositionINTERP11").setKey(new MFFloatObject(new MFFloat107().getArray())).setKeyValue(new MFVec3dObject(new MFVec3d108().getArray())))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("ZOOM11").setToField("enabled").setToNode("TIMER11"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("TIMER11").setToField("set_fraction").setToNode("GeoPositionINTERP11"))
          .addChild(new ROUTEObject().setFromField("geovalue_changed").setFromNode("GeoPositionINTERP11").setToField("position").setToNode("ZOOM11")))
        .addComments(new CommentsBlock("28.424806942669583 -81.46898746490478 Orange County Convention Center, Orlando, FL, 21 level 34.53258110649095 69.13782119750976 Kabul, Afghanistan, 13 level 36.596454966540136 -121.87352389097214 Naval Postgraduate School, Monterey, CA, 19 level 37.78588957889747 -122.40087300539018 San Francisco Museum of Modern Art, San Francisco, CA, 21 level 41.48692107976417 -71.32715016603471 Narragansett Bay, Newport, RI, 19 level 51.5305712322625 -0.12352377176285152 King's Cross, London, United Kingdom, 21 level 42.36027219744271 -71.05916529893875 Scollay Square, Boston, MA, 21 level 32.70688495899665 -117.16055274009707 San Diego Convention Center, San Diego, CA, 21 level 28.41747302782284 -81.46303564310074 International Plaza Resort and Spa, Orlando, FL, 21 level -7.137685657416106 -34.845199584960945 Federal University of Paraiba, Joao Pessoa, Paraiba, Brazil, 18 level 1.26299 103.837398 Port of Singapore, Singapore, 17 level")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"/osmb0m","https://www.web3d.org/x3d/content/examples/Basic/Geospatial//osmb0m"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString56 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString57 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString62 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString63 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString68 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString69 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString72 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString73 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString74 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString75 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString76 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString77 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString78 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString79 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString80 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString81 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString82 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString83 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFString84 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"GD"});
  }
}
protected class MFFloat85 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d86 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,28.424806942669584d,-81.46898746490479d,5000000d,34.53258110649095d,69.13782119750977d,5000000d,36.596454966540136d,-121.87352389097214d,5000000d,37.78588957889747d,-122.40087300539018d,5000000d,41.48692107976417d,-71.32715016603471d,5000000d,51.5305712322625d,-0.12352377176285152d,5000000d,0d,-187d,5000000d,0d,0d,5000000d,0d,180d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat87 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d88 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,28.424806942669584d,-81.46898746490479d,1000000d,28.424806942669584d,-81.46898746490479d,100000d,28.424806942669584d,-81.46898746490479d,10000d,28.424806942669584d,-81.46898746490479d,1000d,28.424806942669584d,-81.46898746490479d,200d,28.424806942669584d,-81.46898746490479d,1000d,28.424806942669584d,-81.46898746490479d,10000d,28.424806942669584d,-81.46898746490479d,100000d,28.424806942669584d,-81.46898746490479d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat89 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d90 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,34.53258110649095d,69.13782119750977d,1000000d,34.53258110649095d,69.13782119750977d,100000d,34.53258110649095d,69.13782119750977d,10000d,34.53258110649095d,69.13782119750977d,100000d,34.53258110649095d,69.13782119750977d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat91 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d92 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,36.596454966540136d,-121.87352389097214d,1000000d,36.596454966540136d,-121.87352389097214d,100000d,36.596454966540136d,-121.87352389097214d,10000d,36.596454966540136d,-121.87352389097214d,1000d,36.596454966540136d,-121.87352389097214d,200d,36.596454966540136d,-121.87352389097214d,1000d,36.596454966540136d,-121.87352389097214d,10000d,36.596454966540136d,-121.87352389097214d,100000d,36.596454966540136d,-121.87352389097214d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat93 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d94 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,37.78588957889747d,-122.40087300539018d,1000000d,37.78588957889747d,-122.40087300539018d,100000d,37.78588957889747d,-122.40087300539018d,10000d,37.78588957889747d,-122.40087300539018d,1000d,37.78588957889747d,-122.40087300539018d,200d,37.78588957889747d,-122.40087300539018d,1000d,37.78588957889747d,-122.40087300539018d,10000d,37.78588957889747d,-122.40087300539018d,100000d,37.78588957889747d,-122.40087300539018d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat95 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d96 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,41.48692107976417d,-71.32715016603471d,1000000d,41.48692107976417d,-71.32715016603471d,100000d,41.48692107976417d,-71.32715016603471d,10000d,41.48692107976417d,-71.32715016603471d,1000d,41.48692107976417d,-71.32715016603471d,200d,41.48692107976417d,-71.32715016603471d,1000d,41.48692107976417d,-71.32715016603471d,10000d,41.48692107976417d,-71.32715016603471d,100000d,41.48692107976417d,-71.32715016603471d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat97 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d98 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,51.5305712322625d,-0.12352377176285152d,1000000d,51.5305712322625d,-0.12352377176285152d,100000d,51.5305712322625d,-0.12352377176285152d,10000d,51.5305712322625d,-0.12352377176285152d,1000d,51.5305712322625d,-0.12352377176285152d,200d,51.5305712322625d,-0.12352377176285152d,1000d,51.5305712322625d,-0.12352377176285152d,10000d,51.5305712322625d,-0.12352377176285152d,100000d,51.5305712322625d,-0.12352377176285152d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat99 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d100 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,42.36027219744271d,-71.05916529893875d,1000000d,42.36027219744271d,-71.05916529893875d,100000d,42.36027219744271d,-71.05916529893875d,10000d,42.36027219744271d,-71.05916529893875d,1000d,42.36027219744271d,-71.05916529893875d,200d,42.36027219744271d,-71.05916529893875d,1000d,42.36027219744271d,-71.05916529893875d,10000d,42.36027219744271d,-71.05916529893875d,100000d,42.36027219744271d,-71.05916529893875d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat101 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d102 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,32.70688495899665d,-117.16055274009707d,1000000d,32.70688495899665d,-117.16055274009707d,100000d,32.70688495899665d,-117.16055274009707d,10000d,32.70688495899665d,-117.16055274009707d,1000d,32.70688495899665d,-117.16055274009707d,200d,32.70688495899665d,-117.16055274009707d,1000d,32.70688495899665d,-117.16055274009707d,10000d,32.70688495899665d,-117.16055274009707d,100000d,32.70688495899665d,-117.16055274009707d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat103 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d104 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,28.41747302782284d,-81.46303564310074d,1000000d,28.41747302782284d,-81.46303564310074d,100000d,28.41747302782284d,-81.46303564310074d,10000d,28.41747302782284d,-81.46303564310074d,1000d,28.41747302782284d,-81.46303564310074d,200d,28.41747302782284d,-81.46303564310074d,1000d,28.41747302782284d,-81.46303564310074d,10000d,28.41747302782284d,-81.46303564310074d,100000d,28.41747302782284d,-81.46303564310074d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat105 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d106 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,-100d,10000000d,-7.137685657416106d,-34.845199584960945d,1000000d,-7.137685657416106d,-34.845199584960945d,100000d,-7.137685657416106d,-34.845199584960945d,10000d,-7.137685657416106d,-34.845199584960945d,1000d,-7.137685657416106d,-34.845199584960945d,300d,-7.137685657416106d,-34.845199584960945d,1000d,-7.137685657416106d,-34.845199584960945d,10000d,-7.137685657416106d,-34.845199584960945d,100000d,-7.137685657416106d,-34.845199584960945d,1000000d,0d,0d,10000000d});
  }
}
protected class MFFloat107 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,0.9f,1f});
  }
}
protected class MFVec3d108 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {0d,0d,10000000d,1.26299d,103.837398d,1000000d,1.26299d,103.837398d,100000d,1.26299d,103.837398d,10000d,1.26299d,103.837398d,1000d,1.26299d,103.837398d,500d,1.26299d,103.837398d,1000d,1.26299d,103.837398d,10000d,1.26299d,103.837398d,100000d,1.26299d,103.837398d,1000000d,0d,0d,10000000d});
  }
}
}

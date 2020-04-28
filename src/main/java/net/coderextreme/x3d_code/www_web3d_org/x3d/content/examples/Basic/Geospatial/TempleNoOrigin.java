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
public class TempleNoOrigin {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new TempleNoOrigin().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/TempleNoOrigin.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("TempleNoOrigin.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Temple without GeoOrigin results in jittery locations due to floating-point roundoff error of geospatial position values."))
        .addMeta(new metaObject().setName("creator").setContent("Martin Reddy SRI authored the original temple scene."))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TempleNoOrigin.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("TempleNoOrigin.x3d"))
        .addChild(new NavigationInfoObject().setAvatarSize(new MFFloatObject(new MFFloat0().getArray())).setSpeed(0.0001f))
        .addChild(new GeoViewpointObject().setDescription("Temple").setGeoSystem(new MFStringObject(new MFString1().getArray())).setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {8167782d,258125d,45d}))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor2().getArray())).setSkyColor(new MFColorObject(new MFColor3().getArray())))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString4().getArray()))
          .addChild(new TransformObject()
            .addChild(new ShapeObject().setDEF("COLUMN")
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0.9f,0.8f}))
                .setTexture(new ImageTextureObject().setDEF("stone6").setUrl(new MFStringObject(new MFString5().getArray()))))
              .setGeometry(new CylinderObject().setHeight(5f).setRadius(0.6f)))))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString6().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167773d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString7().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167775d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString8().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167777d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString9().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString10().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167781d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString11().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167783d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString12().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167785d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString13().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString14().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258115d,2.5d}).setGeoSystem(new MFStringObject(new MFString15().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString16().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString17().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167773d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString18().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167775d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString19().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167777d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString20().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString21().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167781d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString22().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167783d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString23().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167785d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString24().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString25().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258117d,2.5d}).setGeoSystem(new MFStringObject(new MFString26().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258119d,2.5d}).setGeoSystem(new MFStringObject(new MFString27().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258119d,2.5d}).setGeoSystem(new MFStringObject(new MFString28().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258119d,2.5d}).setGeoSystem(new MFStringObject(new MFString29().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258119d,2.5d}).setGeoSystem(new MFStringObject(new MFString30().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258121d,2.5d}).setGeoSystem(new MFStringObject(new MFString31().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258121d,2.5d}).setGeoSystem(new MFStringObject(new MFString32().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258121d,2.5d}).setGeoSystem(new MFStringObject(new MFString33().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258121d,2.5d}).setGeoSystem(new MFStringObject(new MFString34().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258123d,2.5d}).setGeoSystem(new MFStringObject(new MFString35().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258123d,2.5d}).setGeoSystem(new MFStringObject(new MFString36().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258123d,2.5d}).setGeoSystem(new MFStringObject(new MFString37().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258123d,2.5d}).setGeoSystem(new MFStringObject(new MFString38().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258125d,2.5d}).setGeoSystem(new MFStringObject(new MFString39().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258125d,2.5d}).setGeoSystem(new MFStringObject(new MFString40().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258125d,2.5d}).setGeoSystem(new MFStringObject(new MFString41().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258125d,2.5d}).setGeoSystem(new MFStringObject(new MFString42().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258127d,2.5d}).setGeoSystem(new MFStringObject(new MFString43().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258127d,2.5d}).setGeoSystem(new MFStringObject(new MFString44().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258127d,2.5d}).setGeoSystem(new MFStringObject(new MFString45().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258127d,2.5d}).setGeoSystem(new MFStringObject(new MFString46().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258129d,2.5d}).setGeoSystem(new MFStringObject(new MFString47().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258129d,2.5d}).setGeoSystem(new MFStringObject(new MFString48().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258129d,2.5d}).setGeoSystem(new MFStringObject(new MFString49().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258129d,2.5d}).setGeoSystem(new MFStringObject(new MFString50().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258131d,2.5d}).setGeoSystem(new MFStringObject(new MFString51().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258131d,2.5d}).setGeoSystem(new MFStringObject(new MFString52().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258131d,2.5d}).setGeoSystem(new MFStringObject(new MFString53().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258131d,2.5d}).setGeoSystem(new MFStringObject(new MFString54().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString55().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString56().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167773d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString57().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167775d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString58().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167777d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString59().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString60().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167781d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString61().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167783d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString62().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167785d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString63().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString64().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258133d,2.5d}).setGeoSystem(new MFStringObject(new MFString65().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167769d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString66().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167771d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString67().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167773d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString68().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167775d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString69().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167777d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString70().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString71().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167781d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString72().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167783d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString73().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167785d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString74().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167787d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString75().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167789d,258135d,2.5d}).setGeoSystem(new MFStringObject(new MFString76().getArray()))
          .addChild(new ShapeObject().setUSE("COLUMN")))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258125d,-0.5d}).setGeoSystem(new MFStringObject(new MFString77().getArray()))
          .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.13f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setDEF("stone5").setUrl(new MFStringObject(new MFString78().getArray()))))
              .setGeometry(new BoxObject().setSize(new float[] {22f,1f,22f})))))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258125d,-1.5d}).setGeoSystem(new MFStringObject(new MFString79().getArray()))
          .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.13f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setUSE("stone5")))
              .setGeometry(new BoxObject().setSize(new float[] {24f,1f,24f})))))
        .addChild(new GeoLocationObject().setGeoCoords(new double[] {8167779d,258125d,-2.5d}).setGeoSystem(new MFStringObject(new MFString80().getArray()))
          .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.13f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f}))
                .setTexture(new ImageTextureObject().setUSE("stone5")))
              .setGeometry(new BoxObject().setSize(new float[] {26f,1f,26f}))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.000001f,0.000001f,0.000001f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/stone6.png","images/stone6.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone6.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone6.gif"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString56 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString57 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString62 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString63 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString68 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString69 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString72 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString73 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString74 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString75 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString76 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString77 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString78 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/stone5.png","images/stone5.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.png","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/stone5.gif","http://www.ai.sri.com/~reddy/geovrml/examples/temple/stone5.gif"});
  }
}
protected class MFString79 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
protected class MFString80 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z11"});
  }
}
}

package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
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
public class KeyFobWeb3d2013Spain {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new KeyFobWeb3d2013Spain().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/KeyFobWeb3d2013Spain.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("KeyFobWeb3d2013Spain.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Model of a key chain fob with with WEB3D 2013 conference lettering, using the colors of the Spanish flag."))
        .addMeta(new metaObject().setName("creator").setContent("Vincent Marchetti"))
        .addMeta(new metaObject().setName("created").setContent("6 May 2013"))
        .addMeta(new metaObject().setName("translated").setContent("7 May 2013"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("Image").setContent("KeyFobWeb3d2013Spain.png"))
        .addMeta(new metaObject().setName("photo").setContent("KeyFobWeb3d2013Closeup.jpg"))
        .addMeta(new metaObject().setName("photo").setContent("KeyFobWeb3d2013Compare.jpg"))
        .addMeta(new metaObject().setName("warning").setContent("Colored sandstone material is brittle and not suitable for daily use. Strong + Flexible white plastic is better material for 3D printing."))
        .addMeta(new metaObject().setName("reference").setContent("http://www.shapeways.com/model/1127249/keyfobweb3d2013spain.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://web3D2013.org"))
        .addMeta(new metaObject().setName("reference").setContent("KeyFobWeb3d2013BasqueCountry.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://en.wikipedia.org/wiki/Keychain#Key_fob"))
        .addMeta(new metaObject().setName("reference").setContent("http://en.wikipedia.org/wiki/Spain"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("Ashlar-Vellum Argon (CAD) application"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/KeyFobWeb3d2013Spain.x3d"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("KeyFobWeb3d2013Spain.x3d"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new ViewpointObject().setDescription("WEB3D 2013 conference").setFieldOfView(0.16628f).setOrientation(new float[] {0.89f,-0.132f,-0.435f,0.657f}).setPosition(new float[] {-0.061445f,-0.20256f,0.31679f}))
        .addComments(new CommentsBlock("The following transform converts the original coordinate space in inches (as prepared by the Ashlar-Vellum ARGON CAD application to meters"))
        .addChild(new TransformObject().setScale(new float[] {0.0254f,0.0254f,0.0254f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("charactersWebAppearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {0.776f,0.043f,0.118f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f3().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt324().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f5().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f6().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt327().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f8().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f9().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3210().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f11().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f12().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3213().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f14().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f15().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3216().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f17().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f18().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3219().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f20().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f21().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3222().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f23().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f24().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3225().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f26().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f27().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3228().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f29().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f30().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3231().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f32().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f33().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3234().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f35().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f36().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3237().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f38().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f39().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3240().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f41().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f42().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3243().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f44().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f45().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3246().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f47().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f48().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3249().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f50().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f51().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3252().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f53().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f54().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3255().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f56().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f57().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3258().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f59().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f60().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3261().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f62().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f63().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3264().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f65().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f66().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3267().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f68().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f69().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3270().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f71().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f72().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3273().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f74().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f75().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3276().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f77().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f78().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3279().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f80().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f81().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3282().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f83().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f84().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3285().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f86().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f87().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3288().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f89().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f90().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3291().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f92().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f93().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3294().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f95().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f96().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3297().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f98().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f99().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32100().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f101().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f102().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32103().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f104().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f105().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32106().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f107().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f108().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32109().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f110().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f111().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32112().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f113().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f114().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32115().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f116().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f117().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32118().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f119().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f120().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32121().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f122().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f123().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32124().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f125().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f126().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32127().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f128().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f129().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32130().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f131().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f132().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32133().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f134().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f135().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32136().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f137().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f138().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32139().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f140().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f141().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32142().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f143().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f144().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32145().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f146().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f147().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32148().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f149().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f150().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32151().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f152().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f153().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32154().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f155().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f156().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32157().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f158().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f159().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32160().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f161().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f162().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32163().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f164().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f165().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32166().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f167().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f168().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32169().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f170().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f171().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32172().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f173().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f174().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32175().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f176().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f177().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32178().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f179().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f180().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32181().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f182().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f183().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32184().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f185().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f186().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32187().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f188().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f189().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32190().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f191().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f192().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32193().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f194().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f195().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32196().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f197().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f198().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32199().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f200().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f201().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32202().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f203().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f204().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32205().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f206().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f207().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32208().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f209().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f210().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32211().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f212().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f213().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32214().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f215().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f216().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32217().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f218().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f219().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32220().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f221().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f222().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32223().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f224().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f225().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32226().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f227().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f228().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32229().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f230().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f231().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32232().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f233().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f234().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32235().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f236().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f237().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32238().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f239().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f240().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32241().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f242().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f243().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32244().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f245().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f246().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32247().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f248().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f249().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32250().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f251().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f252().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32253().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f254().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f255().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32256().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f257().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f258().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32259().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f260().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f261().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32262().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f263().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f264().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32265().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f266().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f267().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32268().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f269().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f270().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32271().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f272().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f273().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32274().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f275().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f276().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32277().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f278().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f279().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32280().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f281().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f282().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32283().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f284().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f285().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32286().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f287().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f288().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32289().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f290().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f291().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32292().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f293().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f294().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32295().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f296().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f297().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32298().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f299().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f300().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32301().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f302().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f303().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32304().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f305().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f306().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32307().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f308().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f309().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32310().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f311().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f312().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32313().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f314().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f315().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32316().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f317().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f318().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32319().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f320().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f321().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32322().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f323().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f324().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32325().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f326().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f327().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32328().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f329().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f330().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32331().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f332().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f333().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32334().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f335().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f336().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32337().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f338().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f339().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32340().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f341().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f342().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32343().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f344().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f345().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32346().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f347().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f348().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32349().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f350().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f351().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32352().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f353().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f354().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32355().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f356().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f357().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32358().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f359().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f360().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32361().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f362().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f363().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32364().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f365().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f366().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32367().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f368().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f369().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32370().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f371().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f372().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32373().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f374().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f375().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32376().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f377().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f378().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32379().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f380().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f381().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32382().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f383().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f384().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32385().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f386().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f387().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32388().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f389().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f390().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32391().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f392().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f393().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32394().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f395().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f396().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32397().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f398().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f399().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32400().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f401().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f402().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("charactersWebAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32403().getArray()).append(new MFInt32404().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f405().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f406().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("baseplateAppearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32407().getArray()).append(new MFInt32408().getArray()).append(new MFInt32409().getArray()).append(new MFInt32410().getArray()).append(new MFInt32411().getArray()).append(new MFInt32412().getArray()).append(new MFInt32413().getArray()).append(new MFInt32414().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f415().getArray()).append(new MFVec3f416().getArray()).append(new MFVec3f417().getArray()).append(new MFVec3f418().getArray()).append(new MFVec3f419().getArray()).append(new MFVec3f420().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f421().getArray()).append(new MFVec3f422().getArray()).append(new MFVec3f423().getArray()).append(new MFVec3f424().getArray()).append(new MFVec3f425().getArray()).append(new MFVec3f426().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32427().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f428().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f429().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("character3Appearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {0.863f,0.141f,0.122f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32430().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f431().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f432().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32433().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f434().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f435().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32436().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f437().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f438().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32439().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f440().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f441().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32442().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f443().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f444().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32445().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f446().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f447().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32448().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f449().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f450().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32451().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f452().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f453().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32454().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f455().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f456().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32457().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f458().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f459().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32460().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f461().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f462().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32463().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f464().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f465().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32466().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f467().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f468().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32469().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f470().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f471().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32472().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f473().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f474().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32475().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f476().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f477().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32478().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f479().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f480().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32481().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f482().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f483().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32484().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f485().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f486().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32487().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f488().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f489().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32490().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f491().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f492().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32493().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f494().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f495().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32496().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f497().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f498().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32499().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f500().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f501().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32502().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f503().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f504().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32505().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f506().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f507().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32508().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f509().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f510().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32511().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f512().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f513().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32514().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f515().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f516().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32517().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f518().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f519().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32520().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f521().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f522().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32523().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f524().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f525().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32526().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f527().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f528().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32529().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f530().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f531().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32532().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f533().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f534().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32535().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f536().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f537().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32538().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f539().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f540().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32541().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f542().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f543().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32544().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f545().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f546().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32547().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f548().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f549().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32550().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f551().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f552().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32553().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f554().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f555().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32556().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f557().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f558().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32559().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f560().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f561().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32562().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f563().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f564().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32565().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f566().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f567().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32568().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f569().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f570().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32571().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f572().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f573().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32574().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f575().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f576().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32577().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f578().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f579().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32580().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f581().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f582().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32583().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f584().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f585().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32586().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f587().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f588().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32589().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f590().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f591().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32592().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f593().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f594().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32595().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f596().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f597().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32598().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f599().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f600().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32601().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f602().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f603().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("character3Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32604().getArray()).append(new MFInt32605().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f606().getArray()).append(new MFVec3f607().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f608().getArray()).append(new MFVec3f609().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("characterDAppearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {0.863f,0.141f,0.122f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32610().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f611().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f612().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32613().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f614().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f615().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32616().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f617().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f618().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32619().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f620().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f621().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32622().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f623().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f624().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32625().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f626().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f627().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32628().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f629().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f630().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32631().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f632().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f633().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32634().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f635().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f636().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32637().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f638().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f639().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32640().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f641().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f642().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32643().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f644().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f645().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32646().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f647().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f648().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32649().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f650().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f651().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32652().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f653().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f654().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32655().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f656().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f657().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32658().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f659().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f660().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32661().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f662().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f663().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32664().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f665().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f666().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32667().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f668().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f669().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32670().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f671().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f672().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32673().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f674().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f675().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32676().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f677().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f678().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32679().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f680().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f681().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32682().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f683().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f684().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32685().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f686().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f687().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32688().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f689().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f690().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32691().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f692().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f693().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32694().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f695().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f696().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32697().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f698().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f699().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32700().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f701().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f702().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32703().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f704().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f705().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32706().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f707().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f708().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32709().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f710().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f711().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characterDAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32712().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f713().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f714().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32715().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f716().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f717().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("characters2013Appearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,0.584f,0f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32718().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f719().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f720().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32721().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f722().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f723().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32724().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f725().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f726().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32727().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f728().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f729().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32730().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f731().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f732().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32733().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f734().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f735().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32736().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f737().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f738().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32739().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f740().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f741().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32742().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f743().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f744().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32745().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f746().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f747().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32748().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f749().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f750().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32751().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f752().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f753().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32754().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f755().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f756().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32757().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f758().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f759().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32760().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f761().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f762().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32763().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f764().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f765().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32766().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f767().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f768().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32769().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f770().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f771().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32772().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f773().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f774().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32775().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f776().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f777().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32778().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f779().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f780().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32781().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f782().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f783().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32784().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f785().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f786().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32787().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f788().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f789().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32790().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f791().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f792().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32793().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f794().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f795().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32796().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f797().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f798().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32799().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f800().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f801().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32802().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f803().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f804().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32805().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f806().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f807().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32808().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f809().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f810().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32811().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f812().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f813().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32814().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f815().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f816().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32817().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f818().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f819().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32820().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f821().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f822().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32823().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f824().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f825().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32826().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f827().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f828().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32829().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f830().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f831().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32832().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f833().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f834().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32835().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f836().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f837().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32838().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f839().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f840().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32841().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f842().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f843().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32844().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f845().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f846().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32847().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f848().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f849().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32850().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f851().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f852().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32853().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f854().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f855().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32856().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f857().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f858().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32859().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f860().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f861().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32862().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f863().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f864().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32865().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f866().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f867().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32868().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f869().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f870().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32871().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f872().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f873().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32874().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f875().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f876().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32877().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f878().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f879().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32880().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f881().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f882().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32883().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f884().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f885().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32886().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f887().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f888().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32889().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f890().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f891().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32892().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f893().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f894().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32895().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f896().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f897().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32898().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f899().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f900().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32901().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f902().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f903().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32904().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f905().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f906().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32907().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f908().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f909().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32910().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f911().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f912().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32913().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f914().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f915().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32916().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f917().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f918().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32919().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f920().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f921().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32922().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f923().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f924().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32925().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f926().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f927().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32928().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f929().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f930().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32931().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f932().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f933().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32934().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f935().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f936().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32937().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f938().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f939().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32940().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f941().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f942().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32943().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f944().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f945().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32946().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f947().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f948().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32949().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f950().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f951().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32952().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f953().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f954().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32955().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f956().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f957().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32958().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f959().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f960().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32961().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f962().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f963().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32964().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f965().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f966().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32967().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f968().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f969().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32970().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f971().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f972().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32973().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f974().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f975().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32976().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f977().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f978().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32979().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f980().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f981().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32982().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f983().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f984().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32985().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f986().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f987().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32988().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f989().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f990().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32991().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f992().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f993().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32994().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f995().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f996().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt32997().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f998().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f999().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321000().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1001().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1002().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321003().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1004().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1005().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321006().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1007().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1008().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321009().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1010().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1011().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321012().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1013().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1014().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321015().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1016().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1017().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321018().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1019().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1020().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321021().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1022().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1023().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321024().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1025().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1026().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321027().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1028().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1029().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321030().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1031().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1032().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321033().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1034().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1035().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321036().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1037().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1038().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321039().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1040().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1041().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321042().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1043().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1044().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321045().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1046().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1047().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321048().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1049().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1050().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321051().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1052().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1053().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321054().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1055().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1056().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321057().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1058().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1059().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321060().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1061().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1062().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321063().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1064().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1065().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321066().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1067().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1068().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321069().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1070().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1071().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321072().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1073().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1074().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321075().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1076().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1077().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321078().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1079().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1080().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321081().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1082().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1083().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321084().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1085().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1086().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321087().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1088().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1089().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321090().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1091().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1092().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321093().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1094().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1095().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321096().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1097().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1098().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321099().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1100().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1101().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321102().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1103().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1104().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321105().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1106().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1107().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321108().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1109().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1110().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321111().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1112().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1113().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321114().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1115().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1116().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321117().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1118().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1119().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321120().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1121().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1122().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321123().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1124().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1125().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321126().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1127().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1128().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321129().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1130().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1131().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321132().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1133().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1134().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321135().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1136().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1137().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("characters2013Appearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321138().getArray()).append(new MFInt321139().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1140().getArray()).append(new MFVec3f1141().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1142().getArray()).append(new MFVec3f1143().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321144().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1145().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1146().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("sidebarAppearance")
              .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,0.584f,0f}).setShininess(1f)))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321147().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1148().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1149().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321150().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1151().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1152().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321153().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1154().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1155().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321156().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1157().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1158().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321159().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1160().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1161().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321162().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1163().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1164().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321165().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1166().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1167().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321168().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1169().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1170().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321171().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1172().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1173().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("sidebarAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321174().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1175().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1176().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321177().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1178().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1179().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321180().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1181().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1182().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321183().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1184().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1185().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321186().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1187().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1188().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321189().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1190().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1191().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321192().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1193().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1194().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321195().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1196().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1197().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321198().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1199().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1200().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321201().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1202().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1203().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321204().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1205().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1206().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321207().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1208().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1209().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321210().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1211().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1212().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321213().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1214().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1215().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321216().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1217().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1218().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321219().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1220().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1221().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321222().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1223().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1224().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321225().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1226().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1227().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321228().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1229().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1230().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321231().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1232().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1233().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321234().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1235().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1236().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321237().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1238().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1239().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321240().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1241().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1242().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321243().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1244().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1245().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321246().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1247().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1248().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321249().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1250().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1251().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321252().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1253().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1254().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321255().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1256().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1257().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321258().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1259().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1260().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321261().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1262().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1263().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321264().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1265().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1266().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321267().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1268().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1269().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321270().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1271().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1272().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321273().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1274().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1275().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321276().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1277().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1278().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321279().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1280().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1281().getArray())))))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("baseplateAppearance"))
            .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt321282().getArray())).setSolid(false)
              .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1283().getArray())))
              .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f1284().getArray())))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.858824f,0.878431f,0.858824f});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.14408f,0.06378f,0.1f,-0.13208f,0.06378f,0.1f,-0.13208f,0.06378f,0f,-0.14408f,0.06378f,0f});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt324 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13208f,0.06378f,0.1f,-0.13808f,-0.01122f,0.1f,-0.13808f,-0.01122f,0f,-0.13208f,0.06378f,0f});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.99682f,-0.07975f,0f,0.99682f,-0.07975f,0f,0.99682f,-0.07975f,0f,0.99682f,-0.07975f,0f});
  }
}
protected class MFInt327 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13808f,-0.01122f,0.1f,-0.34208f,-0.01122f,0.1f,-0.34208f,-0.01122f,0f,-0.13808f,-0.01122f,0f});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34208f,-0.01122f,0.1f,-0.34208f,0.00078f,0.1f,-0.34208f,0.00078f,0f,-0.34208f,-0.01122f,0f});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f14 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34208f,0.00078f,0.1f,-0.33608f,0.00078f,0.1f,-0.33008f,0.00078f,0.1f,-0.33008f,0.00078f,0f,-0.34208f,0.00078f,0f});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3216 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f17 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.33008f,0.00078f,0.1f,-0.32688f,0.00084f,0.1f,-0.32524f,0.00096f,0.1f,-0.32363f,0.00118f,0.1f,-0.32207f,0.00155f,0.1f,-0.32132f,0.00179f,0.1f,-0.32061f,0.00208f,0.1f,-0.31992f,0.00242f,0.1f,-0.31926f,0.00281f,0.1f,-0.31865f,0.00326f,0.1f,-0.31808f,0.00378f,0.1f,-0.31808f,0.00378f,0f,-0.31865f,0.00326f,0f,-0.31926f,0.00281f,0f,-0.31992f,0.00242f,0f,-0.32061f,0.00208f,0f,-0.32132f,0.00179f,0f,-0.32207f,0.00155f,0f,-0.32363f,0.00118f,0f,-0.32524f,0.00096f,0f,-0.32688f,0.00084f,0f,-0.33008f,0.00078f,0f});
  }
}
protected class MFVec3f18 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.04898f,0.9988f,0f,-0.1029f,0.99469f,0f,-0.17892f,0.98386f,0f,-0.27976f,0.96007f,0f,-0.33996f,0.94044f,0f,-0.40641f,0.91369f,0f,-0.47828f,0.87821f,0f,-0.55403f,0.8325f,0f,-0.63131f,0.77553f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.63131f,0.77553f,0f,-0.55403f,0.8325f,0f,-0.47828f,0.87821f,0f,-0.40641f,0.91369f,0f,-0.33996f,0.94044f,0f,-0.27976f,0.96007f,0f,-0.17892f,0.98386f,0f,-0.1029f,0.99469f,0f,-0.04898f,0.9988f,0f,0f,1f,0f});
  }
}
protected class MFInt3219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1});
  }
}
protected class MFVec3f20 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.31808f,0.00378f,0.1f,-0.31333f,0.00643f,0.1f,-0.31111f,0.00799f,0.1f,-0.30908f,0.00978f,0.1f,-0.30908f,0.00978f,0f,-0.31111f,0.00799f,0f,-0.31333f,0.00643f,0f,-0.31808f,0.00378f,0f});
  }
}
protected class MFVec3f21 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.53972f,0.84184f,0f,-0.61587f,0.78785f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.61587f,0.78785f,0f,-0.53972f,0.84184f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt3222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f23 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.30908f,0.00978f,0.1f,-0.30857f,0.01035f,0.1f,-0.30811f,0.01096f,0.1f,-0.30772f,0.01161f,0.1f,-0.30738f,0.0123f,0.1f,-0.30709f,0.01302f,0.1f,-0.30685f,0.01377f,0.1f,-0.30649f,0.01532f,0.1f,-0.30626f,0.01694f,0.1f,-0.30614f,0.01857f,0.1f,-0.30608f,0.02178f,0.1f,-0.30608f,0.02178f,0f,-0.30614f,0.01857f,0f,-0.30626f,0.01694f,0f,-0.30649f,0.01532f,0f,-0.30685f,0.01377f,0f,-0.30709f,0.01302f,0f,-0.30738f,0.0123f,0f,-0.30772f,0.01161f,0f,-0.30811f,0.01096f,0f,-0.30857f,0.01035f,0f,-0.30908f,0.00978f,0f});
  }
}
protected class MFVec3f24 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.7071f,0.70711f,0f,-0.77553f,0.63132f,0f,-0.8325f,0.55403f,0f,-0.87821f,0.47828f,0f,-0.91369f,0.40641f,0f,-0.94044f,0.33996f,0f,-0.96007f,0.27976f,0f,-0.98386f,0.17892f,0f,-0.99469f,0.1029f,0f,-0.9988f,0.04898f,0f,-1f,0f,0f,-1f,0f,0f,-0.9988f,0.04898f,0f,-0.99469f,0.1029f,0f,-0.98386f,0.17892f,0f,-0.96007f,0.27976f,0f,-0.94044f,0.33996f,0f,-0.91369f,0.40641f,0f,-0.87821f,0.47828f,0f,-0.8325f,0.55403f,0f,-0.77553f,0.63132f,0f,-0.7071f,0.70711f,0f});
  }
}
protected class MFInt3225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f26 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.30608f,0.02178f,0.1f,-0.30608f,0.20178f,0.1f,-0.30608f,0.20178f,0f,-0.30608f,0.02178f,0f});
  }
}
protected class MFVec3f27 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3228 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f29 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.30608f,0.20178f,0.1f,-0.30612f,0.20298f,0.1f,-0.30623f,0.2042f,0.1f,-0.30644f,0.20543f,0.1f,-0.30674f,0.20662f,0.1f,-0.30715f,0.20778f,0.1f,-0.30767f,0.20887f,0.1f,-0.30831f,0.20988f,0.1f,-0.30908f,0.21078f,0.1f,-0.30908f,0.21078f,0f,-0.30831f,0.20988f,0f,-0.30767f,0.20887f,0f,-0.30715f,0.20778f,0f,-0.30674f,0.20662f,0f,-0.30644f,0.20543f,0f,-0.30623f,0.2042f,0f,-0.30612f,0.20298f,0f,-0.30608f,0.20178f,0f});
  }
}
protected class MFVec3f30 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99807f,-0.06217f,0f,-0.99161f,-0.12929f,0f,-0.9791f,-0.20336f,0f,-0.95817f,-0.28619f,0f,-0.92537f,-0.37907f,0f,-0.87609f,-0.48215f,0f,-0.80495f,-0.59334f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.80495f,-0.59334f,0f,-0.87609f,-0.48215f,0f,-0.92537f,-0.37907f,0f,-0.95817f,-0.28619f,0f,-0.9791f,-0.20336f,0f,-0.99161f,-0.12929f,0f,-0.99807f,-0.06217f,0f,-1f,0f,0f});
  }
}
protected class MFInt3231 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {23,0,22,-1,22,0,1,-1,2,22,1,-1,2,21,22,-1,2,3,21,-1,21,3,20,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f32 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.30908f,0.21078f,0.1f,-0.30978f,0.21196f,0.1f,-0.3102f,0.21253f,0.1f,-0.31066f,0.21308f,0.1f,-0.31169f,0.21409f,0.1f,-0.31283f,0.21499f,0.1f,-0.31344f,0.21538f,0.1f,-0.31407f,0.21573f,0.1f,-0.31472f,0.21604f,0.1f,-0.31538f,0.21629f,0.1f,-0.31672f,0.21665f,0.1f,-0.31808f,0.21678f,0.1f,-0.31808f,0.21678f,0f,-0.31672f,0.21665f,0f,-0.31538f,0.21629f,0f,-0.31472f,0.21604f,0f,-0.31407f,0.21573f,0f,-0.31344f,0.21538f,0f,-0.31283f,0.21499f,0f,-0.31169f,0.21409f,0f,-0.31066f,0.21308f,0f,-0.3102f,0.21253f,0f,-0.30978f,0.21196f,0f,-0.30908f,0.21078f,0f});
  }
}
protected class MFVec3f33 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.82362f,-0.56714f,0f,-0.78549f,-0.61888f,0f,-0.74571f,-0.66628f,0f,-0.66063f,-0.75071f,0f,-0.56598f,-0.82442f,0f,-0.51385f,-0.85788f,0f,-0.45769f,-0.88911f,0f,-0.39682f,-0.9179f,0f,-0.33052f,-0.9438f,0f,-0.17903f,-0.98384f,0f,0f,-1f,0f,0f,-1f,0f,-0.17903f,-0.98384f,0f,-0.33052f,-0.9438f,0f,-0.39682f,-0.9179f,0f,-0.45769f,-0.88911f,0f,-0.51385f,-0.85788f,0f,-0.56598f,-0.82442f,0f,-0.66063f,-0.75071f,0f,-0.74571f,-0.66628f,0f,-0.78549f,-0.61888f,0f,-0.82362f,-0.56714f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt3234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f35 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.31808f,0.21678f,0.1f,-0.31933f,0.21789f,0.1f,-0.32069f,0.21885f,0.1f,-0.32215f,0.21969f,0.1f,-0.32367f,0.22043f,0.1f,-0.33008f,0.22278f,0.1f,-0.33008f,0.22278f,0f,-0.32367f,0.22043f,0f,-0.32215f,0.21969f,0f,-0.32069f,0.21885f,0f,-0.31933f,0.21789f,0f,-0.31808f,0.21678f,0f});
  }
}
protected class MFVec3f36 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.61927f,-0.78518f,0f,-0.53747f,-0.84328f,0f,-0.46637f,-0.88459f,0f,-0.40834f,-0.91283f,0f,-0.31623f,-0.94868f,0f,-0.31623f,-0.94868f,0f,-0.40834f,-0.91283f,0f,-0.46637f,-0.88459f,0f,-0.53747f,-0.84328f,0f,-0.61927f,-0.78518f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt3237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,14,-1,14,6,7,-1,13,7,8,-1,12,8,9,-1,11,9,10,-1,11,12,9,-1,14,7,13,-1,13,8,12,-1});
  }
}
protected class MFVec3f38 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.33008f,0.22278f,0.1f,-0.33328f,0.22284f,0.1f,-0.33492f,0.22296f,0.1f,-0.33653f,0.22318f,0.1f,-0.33809f,0.22355f,0.1f,-0.33884f,0.22379f,0.1f,-0.33955f,0.22408f,0.1f,-0.34024f,0.22442f,0.1f,-0.3409f,0.22481f,0.1f,-0.34151f,0.22526f,0.1f,-0.34208f,0.22578f,0.1f,-0.34208f,0.22578f,0f,-0.34151f,0.22526f,0f,-0.3409f,0.22481f,0f,-0.34024f,0.22442f,0f,-0.33955f,0.22408f,0f,-0.33884f,0.22379f,0f,-0.33809f,0.22355f,0f,-0.33653f,0.22318f,0f,-0.33492f,0.22296f,0f,-0.33328f,0.22284f,0f,-0.33008f,0.22278f,0f});
  }
}
protected class MFVec3f39 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.04898f,-0.9988f,0f,-0.1029f,-0.99469f,0f,-0.17892f,-0.98386f,0f,-0.27976f,-0.96007f,0f,-0.33996f,-0.94044f,0f,-0.40641f,-0.91369f,0f,-0.47828f,-0.87821f,0f,-0.55403f,-0.8325f,0f,-0.63131f,-0.77553f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.63131f,-0.77553f,0f,-0.55403f,-0.8325f,0f,-0.47828f,-0.87821f,0f,-0.40641f,-0.91369f,0f,-0.33996f,-0.94044f,0f,-0.27976f,-0.96007f,0f,-0.17892f,-0.98386f,0f,-0.1029f,-0.99469f,0f,-0.04898f,-0.9988f,0f,0f,-1f,0f});
  }
}
protected class MFInt3240 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f41 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34208f,0.22578f,0.1f,-0.34208f,0.23778f,0.1f,-0.34208f,0.23778f,0f,-0.34208f,0.22578f,0f});
  }
}
protected class MFVec3f42 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt3243 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f44 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.34208f,0.23778f,0.1f,-0.15008f,0.23778f,0.1f,-0.15008f,0.23778f,0f,-0.34208f,0.23778f,0f});
  }
}
protected class MFVec3f45 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f47 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15008f,0.23778f,0.1f,-0.15008f,0.17778f,0.1f,-0.15008f,0.17778f,0f,-0.15008f,0.23778f,0f});
  }
}
protected class MFVec3f48 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f50 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15008f,0.17778f,0.1f,-0.16208f,0.17778f,0.1f,-0.16208f,0.17778f,0f,-0.15008f,0.17778f,0f});
  }
}
protected class MFVec3f51 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt3252 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1});
  }
}
protected class MFVec3f53 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16208f,0.17778f,0.1f,-0.16598f,0.18489f,0.1f,-0.17036f,0.19174f,0.1f,-0.18008f,0.20478f,0.1f,-0.18008f,0.20478f,0f,-0.17036f,0.19174f,0f,-0.16598f,0.18489f,0f,-0.16208f,0.17778f,0f});
  }
}
protected class MFVec3f54 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.85889f,-0.51216f,0f,-0.82684f,-0.56243f,0f,-0.78087f,-0.6247f,0f,-0.78087f,-0.6247f,0f,-0.82684f,-0.56243f,0f,-0.85889f,-0.51216f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt3255 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,11,-1,12,13,9,-1,15,7,14,-1,14,8,13,-1,9,10,11,-1});
  }
}
protected class MFVec3f56 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18008f,0.20478f,0.1f,-0.18442f,0.20995f,0.1f,-0.18682f,0.21248f,0.1f,-0.18937f,0.2148f,0.1f,-0.19207f,0.2168f,0.1f,-0.19348f,0.21765f,0.1f,-0.19493f,0.21838f,0.1f,-0.19641f,0.21897f,0.1f,-0.19793f,0.21941f,0.1f,-0.19949f,0.21968f,0.1f,-0.20108f,0.21978f,0.1f,-0.20108f,0.21978f,0f,-0.19949f,0.21968f,0f,-0.19793f,0.21941f,0f,-0.19641f,0.21897f,0f,-0.19493f,0.21838f,0f,-0.19348f,0.21765f,0f,-0.19207f,0.2168f,0f,-0.18937f,0.2148f,0f,-0.18682f,0.21248f,0f,-0.18442f,0.20995f,0f,-0.18008f,0.20478f,0f});
  }
}
protected class MFVec3f57 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.78087f,-0.62469f,0f,-0.74338f,-0.66886f,0f,-0.70197f,-0.7122f,0f,-0.63904f,-0.76917f,0f,-0.54592f,-0.83784f,0f,-0.48458f,-0.87475f,0f,-0.41153f,-0.9114f,0f,-0.32583f,-0.94543f,0f,-0.22745f,-0.97379f,0f,-0.11778f,-0.99304f,0f,0f,-1f,0f,0f,-1f,0f,-0.11778f,-0.99304f,0f,-0.22745f,-0.97379f,0f,-0.32583f,-0.94543f,0f,-0.41153f,-0.9114f,0f,-0.48458f,-0.87475f,0f,-0.54592f,-0.83784f,0f,-0.63904f,-0.76917f,0f,-0.70197f,-0.7122f,0f,-0.74338f,-0.66886f,0f,-0.78087f,-0.62469f,0f});
  }
}
protected class MFInt3258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f59 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20108f,0.21978f,0.1f,-0.20708f,0.21978f,0.1f,-0.21308f,0.21978f,0.1f,-0.21308f,0.21978f,0f,-0.20108f,0.21978f,0f});
  }
}
protected class MFVec3f60 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt3261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f62 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21308f,0.21978f,0.1f,-0.21747f,0.22106f,0.1f,-0.22196f,0.222f,0.1f,-0.22651f,0.22258f,0.1f,-0.23108f,0.22278f,0.1f,-0.23108f,0.22278f,0f,-0.22651f,0.22258f,0f,-0.22196f,0.222f,0f,-0.21747f,0.22106f,0f,-0.21308f,0.21978f,0f});
  }
}
protected class MFVec3f63 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.31623f,-0.94868f,0f,-0.24298f,-0.97003f,0f,-0.16647f,-0.98605f,0f,-0.08575f,-0.99632f,0f,0f,-1f,0f,0f,-1f,0f,-0.08575f,-0.99632f,0f,-0.16647f,-0.98605f,0f,-0.24298f,-0.97003f,0f,-0.31623f,-0.94868f,0f});
  }
}
protected class MFInt3264 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f65 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.23108f,0.22278f,0.1f,-0.27008f,0.22278f,0.1f,-0.27008f,0.22278f,0f,-0.23108f,0.22278f,0f});
  }
}
protected class MFVec3f66 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt3267 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f68 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.27008f,0.22278f,0.1f,-0.27008f,0.12378f,0.1f,-0.27008f,0.12378f,0f,-0.27008f,0.22278f,0f});
  }
}
protected class MFVec3f69 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3270 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f71 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.27008f,0.12378f,0.1f,-0.24308f,0.12378f,0.1f,-0.24308f,0.12378f,0f,-0.27008f,0.12378f,0f});
  }
}
protected class MFVec3f72 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3273 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f74 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24308f,0.12378f,0.1f,-0.23408f,0.12378f,0.1f,-0.22508f,0.12378f,0.1f,-0.22508f,0.12378f,0f,-0.24308f,0.12378f,0f});
  }
}
protected class MFVec3f75 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3276 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f77 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22508f,0.12378f,0.1f,-0.22329f,0.12443f,0.1f,-0.22152f,0.12522f,0.1f,-0.21979f,0.12614f,0.1f,-0.21814f,0.12719f,0.1f,-0.21661f,0.12838f,0.1f,-0.21523f,0.12971f,0.1f,-0.21461f,0.13042f,0.1f,-0.21404f,0.13117f,0.1f,-0.21353f,0.13196f,0.1f,-0.21308f,0.13278f,0.1f,-0.21308f,0.13278f,0f,-0.21353f,0.13196f,0f,-0.21404f,0.13117f,0f,-0.21461f,0.13042f,0f,-0.21523f,0.12971f,0f,-0.21661f,0.12838f,0f,-0.21814f,0.12719f,0f,-0.21979f,0.12614f,0f,-0.22152f,0.12522f,0f,-0.22329f,0.12443f,0f,-0.22508f,0.12378f,0f});
  }
}
protected class MFVec3f78 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.31623f,0.94868f,0f,-0.37459f,0.92719f,0f,-0.43622f,0.89984f,0f,-0.50255f,0.86455f,0f,-0.57451f,0.8185f,0f,-0.65224f,0.75801f,0f,-0.73445f,0.67867f,0f,-0.77619f,0.6305f,0f,-0.81744f,0.57601f,0f,-0.85723f,0.51493f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.85723f,0.51493f,0f,-0.81744f,0.57601f,0f,-0.77619f,0.6305f,0f,-0.73445f,0.67867f,0f,-0.65224f,0.75801f,0f,-0.57451f,0.8185f,0f,-0.50255f,0.86455f,0f,-0.43622f,0.89984f,0f,-0.37459f,0.92719f,0f,-0.31623f,0.94868f,0f});
  }
}
protected class MFInt3279 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f80 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21308f,0.13278f,0.1f,-0.20982f,0.14017f,0.1f,-0.20708f,0.14778f,0.1f,-0.20708f,0.14778f,0f,-0.20982f,0.14017f,0f,-0.21308f,0.13278f,0f});
  }
}
protected class MFVec3f81 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,0.44721f,0f,-0.93071f,0.36575f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.93071f,0.36575f,0f,-0.89443f,0.44721f,0f});
  }
}
protected class MFInt3282 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f83 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20708f,0.14778f,0.1f,-0.20408f,0.15678f,0.1f,-0.20108f,0.16578f,0.1f,-0.20108f,0.16578f,0f,-0.20408f,0.15678f,0f,-0.20708f,0.14778f,0f});
  }
}
protected class MFVec3f84 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt3285 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f86 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20108f,0.16578f,0.1f,-0.18908f,0.16578f,0.1f,-0.18908f,0.16578f,0f,-0.20108f,0.16578f,0f});
  }
}
protected class MFVec3f87 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt3288 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f89 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18908f,0.16578f,0.1f,-0.18908f,0.06678f,0.1f,-0.18908f,0.06678f,0f,-0.18908f,0.16578f,0f});
  }
}
protected class MFVec3f90 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt3291 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f92 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18908f,0.06678f,0.1f,-0.20108f,0.06678f,0.1f,-0.20108f,0.06678f,0f,-0.18908f,0.06678f,0f});
  }
}
protected class MFVec3f93 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt3294 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f95 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20108f,0.06678f,0.1f,-0.20434f,0.07417f,0.1f,-0.20708f,0.08178f,0.1f,-0.20708f,0.08178f,0f,-0.20434f,0.07417f,0f,-0.20108f,0.06678f,0f});
  }
}
protected class MFVec3f96 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.93072f,-0.36575f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.93072f,-0.36575f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt3297 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f98 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20708f,0.08178f,0.1f,-0.20982f,0.08939f,0.1f,-0.21308f,0.09678f,0.1f,-0.21308f,0.09678f,0f,-0.20982f,0.08939f,0f,-0.20708f,0.08178f,0f});
  }
}
protected class MFVec3f99 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.93072f,-0.36575f,0f,-0.89443f,-0.44721f,0f,-0.89443f,-0.44721f,0f,-0.93072f,-0.36575f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32100 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f101 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21308f,0.09678f,0.1f,-0.21582f,0.09936f,0.1f,-0.21873f,0.10176f,0.1f,-0.22182f,0.10392f,0.1f,-0.22508f,0.10578f,0.1f,-0.22508f,0.10578f,0f,-0.22182f,0.10392f,0f,-0.21873f,0.10176f,0f,-0.21582f,0.09936f,0f,-0.21308f,0.09678f,0f});
  }
}
protected class MFVec3f102 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.66349f,-0.74818f,0f,-0.60742f,-0.79438f,0f,-0.5362f,-0.84409f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.5362f,-0.84409f,0f,-0.60742f,-0.79438f,0f,-0.66349f,-0.74818f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32103 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,10,-1,11,12,2,-1,2,3,10,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f104 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22508f,0.10578f,0.1f,-0.22717f,0.10669f,0.1f,-0.22933f,0.10739f,0.1f,-0.23156f,0.10792f,0.1f,-0.23384f,0.1083f,0.1f,-0.23847f,0.10869f,0.1f,-0.24308f,0.10878f,0.1f,-0.24308f,0.10878f,0f,-0.23847f,0.10869f,0f,-0.23384f,0.1083f,0f,-0.23156f,0.10792f,0f,-0.22933f,0.10739f,0f,-0.22717f,0.10669f,0f,-0.22508f,0.10578f,0f});
  }
}
protected class MFVec3f105 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,-0.89443f,0f,-0.35328f,-0.93552f,0f,-0.26836f,-0.96332f,0f,-0.19461f,-0.98088f,0f,-0.13281f,-0.99114f,0f,-0.04437f,-0.99902f,0f,0f,-1f,0f,0f,-1f,0f,-0.04437f,-0.99902f,0f,-0.13281f,-0.99114f,0f,-0.19461f,-0.98088f,0f,-0.26836f,-0.96332f,0f,-0.35328f,-0.93552f,0f,-0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32106 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f107 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24308f,0.10878f,0.1f,-0.27008f,0.10878f,0.1f,-0.27008f,0.10878f,0f,-0.24308f,0.10878f,0f});
  }
}
protected class MFVec3f108 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32109 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f110 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.27008f,0.10878f,0.1f,-0.27008f,0.03378f,0.1f,-0.27008f,0.03378f,0f,-0.27008f,0.10878f,0f});
  }
}
protected class MFVec3f111 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32112 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f113 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.27008f,0.03378f,0.1f,-0.27008f,0.02478f,0.1f,-0.27008f,0.01578f,0.1f,-0.27008f,0.01578f,0f,-0.27008f,0.03378f,0f});
  }
}
protected class MFVec3f114 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32115 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f116 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.27008f,0.01578f,0.1f,-0.26743f,0.01102f,0.1f,-0.26587f,0.00881f,0.1f,-0.26408f,0.00678f,0.1f,-0.26408f,0.00678f,0f,-0.26587f,0.00881f,0f,-0.26743f,0.01102f,0f,-0.27008f,0.01578f,0f});
  }
}
protected class MFVec3f117 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,0.44721f,0f,0.84184f,0.53972f,0f,0.78785f,0.61587f,0f,0.7071f,0.70711f,0f,0.7071f,0.70711f,0f,0.78785f,0.61587f,0f,0.84184f,0.53972f,0f,0.89443f,0.44721f,0f});
  }
}
protected class MFInt32118 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f119 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.26408f,0.00678f,0.1f,-0.26123f,0.00553f,0.1f,-0.25824f,0.00459f,0.1f,-0.25518f,0.00399f,0.1f,-0.25363f,0.00383f,0.1f,-0.25208f,0.00378f,0.1f,-0.25208f,0.00378f,0f,-0.25363f,0.00383f,0f,-0.25518f,0.00399f,0f,-0.25824f,0.00459f,0f,-0.26123f,0.00553f,0f,-0.26408f,0.00678f,0f});
  }
}
protected class MFVec3f120 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,0.89443f,0f,0.35262f,0.93577f,0f,0.24866f,0.96859f,0f,0.13201f,0.99125f,0f,0.06804f,0.99768f,0f,0f,1f,0f,0f,1f,0f,0.06804f,0.99768f,0f,0.13201f,0.99125f,0f,0.24866f,0.96859f,0f,0.35262f,0.93577f,0f,0.44721f,0.89443f,0f});
  }
}
protected class MFInt32121 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f122 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.25208f,0.00378f,0.1f,-0.24008f,0.00378f,0.1f,-0.22808f,0.00378f,0.1f,-0.22808f,0.00378f,0f,-0.25208f,0.00378f,0f});
  }
}
protected class MFVec3f123 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32124 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f125 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22808f,0.00378f,0.1f,-0.22058f,0.00378f,0.1f,-0.21308f,0.00378f,0.1f,-0.21308f,0.00378f,0f,-0.22808f,0.00378f,0f});
  }
}
protected class MFVec3f126 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32127 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f128 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21308f,0.00378f,0.1f,-0.20558f,0.00378f,0.1f,-0.19808f,0.00378f,0.1f,-0.19808f,0.00378f,0f,-0.21308f,0.00378f,0f});
  }
}
protected class MFVec3f129 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32130 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f131 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.19808f,0.00378f,0.1f,-0.19427f,0.00402f,0.1f,-0.19048f,0.00467f,0.1f,-0.18308f,0.00678f,0.1f,-0.18308f,0.00678f,0f,-0.19048f,0.00467f,0f,-0.19427f,0.00402f,0f,-0.19808f,0.00378f,0f});
  }
}
protected class MFVec3f132 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.12161f,0.99258f,0f,-0.21363f,0.97691f,0f,-0.31623f,0.94868f,0f,-0.31623f,0.94868f,0f,-0.21363f,0.97691f,0f,-0.12161f,0.99258f,0f,0f,1f,0f});
  }
}
protected class MFInt32133 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,11,-1,12,13,5,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,5,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,11,7,10,-1});
  }
}
protected class MFVec3f134 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18308f,0.00678f,0.1f,-0.18188f,0.00681f,0.1f,-0.18065f,0.00693f,0.1f,-0.17943f,0.00714f,0.1f,-0.17823f,0.00744f,0.1f,-0.17708f,0.00785f,0.1f,-0.17599f,0.00837f,0.1f,-0.17498f,0.00901f,0.1f,-0.17408f,0.00978f,0.1f,-0.17408f,0.00978f,0f,-0.17498f,0.00901f,0f,-0.17599f,0.00837f,0f,-0.17708f,0.00785f,0f,-0.17823f,0.00744f,0f,-0.17943f,0.00714f,0f,-0.18065f,0.00693f,0f,-0.18188f,0.00681f,0f,-0.18308f,0.00678f,0f});
  }
}
protected class MFVec3f135 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.06216f,0.99807f,0f,-0.12928f,0.99161f,0f,-0.20336f,0.9791f,0f,-0.28619f,0.95817f,0f,-0.37907f,0.92537f,0f,-0.48214f,0.87609f,0f,-0.59334f,0.80495f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.59334f,0.80495f,0f,-0.48214f,0.87609f,0f,-0.37907f,0.92537f,0f,-0.28619f,0.95817f,0f,-0.20336f,0.9791f,0f,-0.12928f,0.99161f,0f,-0.06216f,0.99807f,0f,0f,1f,0f});
  }
}
protected class MFInt32136 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f137 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.17408f,0.00978f,0.1f,-0.16872f,0.01586f,0.1f,-0.16403f,0.02252f,0.1f,-0.15608f,0.03678f,0.1f,-0.15608f,0.03678f,0f,-0.16403f,0.02252f,0f,-0.16872f,0.01586f,0f,-0.17408f,0.00978f,0f});
  }
}
protected class MFVec3f138 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.78785f,0.61587f,0f,-0.84184f,0.53972f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.84184f,0.53972f,0f,-0.78785f,0.61587f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32139 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f140 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15608f,0.03678f,0.1f,-0.1496f,0.05008f,0.1f,-0.14408f,0.06378f,0.1f,-0.14408f,0.06378f,0f,-0.1496f,0.05008f,0f,-0.15608f,0.03678f,0f});
  }
}
protected class MFVec3f141 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,0.44721f,0f,-0.90858f,0.41772f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.90858f,0.41772f,0f,-0.89443f,0.44721f,0f});
  }
}
protected class MFInt32142 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,156,-1,156,2,3,-1,4,156,3,-1,4,5,156,-1,156,5,6,-1,7,156,6,-1,7,8,156,-1,156,8,9,-1,10,156,9,-1,10,11,156,-1,156,11,12,-1,15,12,13,-1,14,15,13,-1,156,12,15,-1,16,156,15,-1,16,17,156,-1,156,17,18,-1,19,156,18,-1,19,20,156,-1,156,20,21,-1,22,156,21,-1,22,155,156,-1,22,23,155,-1,155,23,24,-1,25,155,24,-1,25,26,155,-1,155,26,27,-1,146,27,145,-1,146,155,27,-1,146,147,155,-1,155,147,148,-1,149,155,148,-1,149,150,155,-1,155,150,151,-1,152,155,151,-1,152,153,155,-1,155,153,154,-1,27,28,145,-1,145,28,144,-1,144,28,141,-1,143,141,142,-1,143,144,141,-1,29,139,28,-1,29,138,139,-1,29,30,138,-1,138,30,137,-1,137,30,136,-1,136,30,135,-1,135,30,31,-1,134,31,133,-1,134,135,31,-1,32,129,31,-1,32,33,129,-1,129,33,34,-1,128,34,69,-1,70,128,69,-1,70,127,128,-1,70,126,127,-1,70,125,126,-1,70,124,125,-1,70,123,124,-1,70,122,123,-1,70,121,122,-1,70,119,121,-1,70,118,119,-1,70,117,118,-1,70,116,117,-1,70,115,116,-1,70,114,115,-1,70,113,114,-1,70,112,113,-1,70,107,112,-1,70,106,107,-1,70,93,106,-1,70,71,93,-1,93,71,92,-1,92,71,72,-1,73,92,72,-1,73,74,92,-1,92,74,77,-1,78,92,77,-1,78,79,92,-1,92,79,80,-1,81,92,80,-1,81,82,92,-1,92,82,83,-1,84,92,83,-1,84,85,92,-1,92,85,86,-1,87,92,86,-1,87,88,92,-1,92,88,91,-1,91,88,89,-1,90,91,89,-1,34,35,69,-1,69,35,68,-1,68,35,36,-1,67,36,37,-1,38,67,37,-1,38,66,67,-1,38,39,66,-1,66,39,40,-1,41,66,40,-1,41,65,66,-1,41,42,65,-1,65,42,64,-1,64,42,63,-1,63,42,43,-1,62,43,61,-1,62,63,43,-1,68,36,67,-1,43,44,61,-1,61,44,60,-1,60,44,45,-1,59,45,58,-1,59,60,45,-1,46,56,45,-1,46,55,56,-1,46,50,55,-1,46,47,50,-1,50,47,48,-1,49,50,48,-1,50,51,55,-1,55,51,54,-1,54,51,53,-1,53,51,52,-1,56,57,45,-1,45,57,58,-1,75,76,74,-1,74,76,77,-1,94,95,93,-1,93,95,96,-1,97,93,96,-1,97,98,93,-1,93,98,99,-1,100,93,99,-1,100,101,93,-1,93,101,102,-1,103,93,102,-1,103,104,93,-1,93,104,105,-1,106,93,105,-1,108,110,107,-1,108,109,110,-1,110,111,107,-1,107,111,112,-1,119,120,121,-1,128,129,34,-1,129,130,31,-1,31,130,131,-1,132,31,131,-1,132,133,31,-1,139,140,28,-1,28,140,141,-1});
  }
}
protected class MFVec3f143 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13208f,0.06378f,0.1f,-0.14408f,0.06378f,0.1f,-0.1496f,0.05008f,0.1f,-0.15608f,0.03678f,0.1f,-0.16403f,0.02252f,0.1f,-0.16872f,0.01586f,0.1f,-0.17408f,0.00978f,0.1f,-0.17498f,0.00901f,0.1f,-0.17599f,0.00837f,0.1f,-0.17708f,0.00785f,0.1f,-0.17823f,0.00744f,0.1f,-0.17943f,0.00714f,0.1f,-0.18065f,0.00693f,0.1f,-0.18188f,0.00681f,0.1f,-0.18308f,0.00678f,0.1f,-0.19048f,0.00467f,0.1f,-0.19427f,0.00402f,0.1f,-0.19808f,0.00378f,0.1f,-0.20558f,0.00378f,0.1f,-0.21308f,0.00378f,0.1f,-0.22058f,0.00378f,0.1f,-0.22808f,0.00378f,0.1f,-0.24008f,0.00378f,0.1f,-0.25208f,0.00378f,0.1f,-0.25363f,0.00383f,0.1f,-0.25518f,0.00399f,0.1f,-0.25824f,0.00459f,0.1f,-0.26123f,0.00553f,0.1f,-0.26408f,0.00678f,0.1f,-0.26587f,0.00881f,0.1f,-0.26743f,0.01102f,0.1f,-0.27008f,0.01578f,0.1f,-0.27008f,0.02478f,0.1f,-0.27008f,0.03378f,0.1f,-0.27008f,0.10878f,0.1f,-0.24308f,0.10878f,0.1f,-0.23847f,0.10869f,0.1f,-0.23384f,0.1083f,0.1f,-0.23156f,0.10792f,0.1f,-0.22933f,0.10739f,0.1f,-0.22717f,0.10669f,0.1f,-0.22508f,0.10578f,0.1f,-0.22182f,0.10392f,0.1f,-0.21873f,0.10176f,0.1f,-0.21582f,0.09936f,0.1f,-0.21308f,0.09678f,0.1f,-0.20982f,0.08939f,0.1f,-0.20708f,0.08178f,0.1f,-0.20434f,0.07417f,0.1f,-0.20108f,0.06678f,0.1f,-0.18908f,0.06678f,0.1f,-0.18908f,0.16578f,0.1f,-0.20108f,0.16578f,0.1f,-0.20408f,0.15678f,0.1f,-0.20708f,0.14778f,0.1f,-0.20982f,0.14017f,0.1f,-0.21308f,0.13278f,0.1f,-0.21353f,0.13196f,0.1f,-0.21404f,0.13117f,0.1f,-0.21461f,0.13042f,0.1f,-0.21523f,0.12971f,0.1f,-0.21661f,0.12838f,0.1f,-0.21814f,0.12719f,0.1f,-0.21979f,0.12614f,0.1f,-0.22152f,0.12522f,0.1f,-0.22329f,0.12443f,0.1f,-0.22508f,0.12378f,0.1f,-0.23408f,0.12378f,0.1f,-0.24308f,0.12378f,0.1f,-0.27008f,0.12378f,0.1f,-0.27008f,0.22278f,0.1f,-0.23108f,0.22278f,0.1f,-0.22651f,0.22258f,0.1f,-0.22196f,0.222f,0.1f,-0.21747f,0.22106f,0.1f,-0.21308f,0.21978f,0.1f,-0.20708f,0.21978f,0.1f,-0.20108f,0.21978f,0.1f,-0.19949f,0.21968f,0.1f,-0.19793f,0.21941f,0.1f,-0.19641f,0.21897f,0.1f,-0.19493f,0.21838f,0.1f,-0.19348f,0.21765f,0.1f,-0.19207f,0.2168f,0.1f,-0.18937f,0.2148f,0.1f,-0.18682f,0.21248f,0.1f,-0.18442f,0.20995f,0.1f,-0.18008f,0.20478f,0.1f,-0.17036f,0.19174f,0.1f,-0.16598f,0.18489f,0.1f,-0.16208f,0.17778f,0.1f,-0.15008f,0.17778f,0.1f,-0.15008f,0.23778f,0.1f,-0.34208f,0.23778f,0.1f,-0.34208f,0.22578f,0.1f,-0.34151f,0.22526f,0.1f,-0.3409f,0.22481f,0.1f,-0.34024f,0.22442f,0.1f,-0.33955f,0.22408f,0.1f,-0.33884f,0.22379f,0.1f,-0.33809f,0.22355f,0.1f,-0.33653f,0.22318f,0.1f,-0.33492f,0.22296f,0.1f,-0.33328f,0.22284f,0.1f,-0.33008f,0.22278f,0.1f,-0.32367f,0.22043f,0.1f,-0.32215f,0.21969f,0.1f,-0.32069f,0.21885f,0.1f,-0.31933f,0.21789f,0.1f,-0.31808f,0.21678f,0.1f,-0.31672f,0.21665f,0.1f,-0.31538f,0.21629f,0.1f,-0.31472f,0.21604f,0.1f,-0.31407f,0.21573f,0.1f,-0.31344f,0.21538f,0.1f,-0.31283f,0.21499f,0.1f,-0.31169f,0.21409f,0.1f,-0.31066f,0.21308f,0.1f,-0.3102f,0.21253f,0.1f,-0.30978f,0.21196f,0.1f,-0.30908f,0.21078f,0.1f,-0.30831f,0.20988f,0.1f,-0.30767f,0.20887f,0.1f,-0.30715f,0.20778f,0.1f,-0.30674f,0.20662f,0.1f,-0.30644f,0.20543f,0.1f,-0.30623f,0.2042f,0.1f,-0.30612f,0.20298f,0.1f,-0.30608f,0.20178f,0.1f,-0.30608f,0.02178f,0.1f,-0.30614f,0.01857f,0.1f,-0.30626f,0.01694f,0.1f,-0.30649f,0.01532f,0.1f,-0.30685f,0.01377f,0.1f,-0.30709f,0.01302f,0.1f,-0.30738f,0.0123f,0.1f,-0.30772f,0.01161f,0.1f,-0.30811f,0.01096f,0.1f,-0.30857f,0.01035f,0.1f,-0.30908f,0.00978f,0.1f,-0.31111f,0.00799f,0.1f,-0.31333f,0.00643f,0.1f,-0.31808f,0.00378f,0.1f,-0.31865f,0.00326f,0.1f,-0.31926f,0.00281f,0.1f,-0.31992f,0.00242f,0.1f,-0.32061f,0.00208f,0.1f,-0.32132f,0.00179f,0.1f,-0.32207f,0.00155f,0.1f,-0.32363f,0.00118f,0.1f,-0.32524f,0.00096f,0.1f,-0.32688f,0.00084f,0.1f,-0.33008f,0.00078f,0.1f,-0.33608f,0.00078f,0.1f,-0.34208f,0.00078f,0.1f,-0.34208f,-0.01122f,0.1f,-0.13808f,-0.01122f,0.1f});
  }
}
protected class MFVec3f144 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32145 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f146 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.35108f,0.23778f,0.1f,-0.35108f,0.22578f,0.1f,-0.35108f,0.22578f,0f,-0.35108f,0.23778f,0f});
  }
}
protected class MFVec3f147 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32148 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,10,2,9,-1,9,3,8,-1,4,5,6,-1});
  }
}
protected class MFVec3f149 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.35108f,0.22578f,0.1f,-0.35393f,0.22453f,0.1f,-0.35692f,0.22359f,0.1f,-0.35998f,0.22299f,0.1f,-0.36153f,0.22283f,0.1f,-0.36308f,0.22278f,0.1f,-0.36308f,0.22278f,0f,-0.36153f,0.22283f,0f,-0.35998f,0.22299f,0f,-0.35692f,0.22359f,0f,-0.35393f,0.22453f,0f,-0.35108f,0.22578f,0f});
  }
}
protected class MFVec3f150 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.35262f,-0.93577f,0f,0.24866f,-0.96859f,0f,0.13201f,-0.99125f,0f,0.06804f,-0.99768f,0f,0f,-1f,0f,0f,-1f,0f,0.06804f,-0.99768f,0f,0.13201f,-0.99125f,0f,0.24866f,-0.96859f,0f,0.35262f,-0.93577f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32151 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1});
  }
}
protected class MFVec3f152 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.36308f,0.22278f,0.1f,-0.36783f,0.22013f,0.1f,-0.37005f,0.21856f,0.1f,-0.37208f,0.21678f,0.1f,-0.37208f,0.21678f,0f,-0.37005f,0.21856f,0f,-0.36783f,0.22013f,0f,-0.36308f,0.22278f,0f});
  }
}
protected class MFVec3f153 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.53972f,-0.84184f,0f,0.61587f,-0.78785f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.61587f,-0.78785f,0f,0.53972f,-0.84184f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32154 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,11,-1,12,13,9,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,9,10,11,-1});
  }
}
protected class MFVec3f155 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.37208f,0.21678f,0.1f,-0.37387f,0.21612f,0.1f,-0.37564f,0.21533f,0.1f,-0.37737f,0.21441f,0.1f,-0.37902f,0.21336f,0.1f,-0.38055f,0.21217f,0.1f,-0.38193f,0.21085f,0.1f,-0.38255f,0.21013f,0.1f,-0.38312f,0.20938f,0.1f,-0.38363f,0.2086f,0.1f,-0.38408f,0.20778f,0.1f,-0.38408f,0.20778f,0f,-0.38363f,0.2086f,0f,-0.38312f,0.20938f,0f,-0.38255f,0.21013f,0f,-0.38193f,0.21085f,0f,-0.38055f,0.21217f,0f,-0.37902f,0.21336f,0f,-0.37737f,0.21441f,0f,-0.37564f,0.21533f,0f,-0.37387f,0.21612f,0f,-0.37208f,0.21678f,0f});
  }
}
protected class MFVec3f156 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31623f,-0.94868f,0f,0.37459f,-0.92719f,0f,0.43622f,-0.89984f,0f,0.50255f,-0.86455f,0f,0.57451f,-0.8185f,0f,0.65224f,-0.75801f,0f,0.73445f,-0.67867f,0f,0.77619f,-0.6305f,0f,0.81744f,-0.57601f,0f,0.85724f,-0.51492f,0f,0.89443f,-0.44721f,0f,0.89443f,-0.44721f,0f,0.85724f,-0.51492f,0f,0.81744f,-0.57601f,0f,0.77619f,-0.6305f,0f,0.73445f,-0.67867f,0f,0.65224f,-0.75801f,0f,0.57451f,-0.8185f,0f,0.50255f,-0.86455f,0f,0.43622f,-0.89984f,0f,0.37459f,-0.92719f,0f,0.31623f,-0.94868f,0f});
  }
}
protected class MFInt32157 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f158 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.38408f,0.20778f,0.1f,-0.38519f,0.20653f,0.1f,-0.38615f,0.20516f,0.1f,-0.387f,0.20371f,0.1f,-0.38774f,0.20218f,0.1f,-0.39008f,0.19578f,0.1f,-0.39008f,0.19578f,0f,-0.38774f,0.20218f,0f,-0.387f,0.20371f,0f,-0.38615f,0.20516f,0f,-0.38519f,0.20653f,0f,-0.38408f,0.20778f,0f});
  }
}
protected class MFVec3f159 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.7071f,-0.70711f,0f,0.78518f,-0.61927f,0f,0.84328f,-0.53747f,0f,0.88459f,-0.46637f,0f,0.91283f,-0.40834f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.91283f,-0.40834f,0f,0.88459f,-0.46637f,0f,0.84328f,-0.53747f,0f,0.78518f,-0.61927f,0f,0.7071f,-0.70711f,0f});
  }
}
protected class MFInt32160 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f161 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.39008f,0.19578f,0.1f,-0.40456f,0.14762f,0.1f,-0.42008f,0.09978f,0.1f,-0.42008f,0.09978f,0f,-0.40456f,0.14762f,0f,-0.39008f,0.19578f,0f});
  }
}
protected class MFVec3f162 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.96152f,-0.27472f,0f,0.95405f,-0.29964f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.95405f,-0.29964f,0f,0.96152f,-0.27472f,0f});
  }
}
protected class MFInt32163 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f164 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.42008f,0.09978f,0.1f,-0.43714f,0.04248f,0.1f,-0.45608f,-0.01422f,0.1f,-0.45608f,-0.01422f,0f,-0.43714f,0.04248f,0f,-0.42008f,0.09978f,0f});
  }
}
protected class MFVec3f165 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.96352f,-0.26764f,0f,0.95327f,-0.30212f,0f,0.94386f,-0.33035f,0f,0.94386f,-0.33035f,0f,0.95327f,-0.30212f,0f,0.96352f,-0.26764f,0f});
  }
}
protected class MFInt32166 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f167 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.45608f,-0.01422f,0.1f,-0.47108f,-0.01422f,0.1f,-0.47108f,-0.01422f,0f,-0.45608f,-0.01422f,0f});
  }
}
protected class MFVec3f168 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32169 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f170 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.47108f,-0.01422f,0.1f,-0.53408f,0.17478f,0.1f,-0.53408f,0.17478f,0f,-0.47108f,-0.01422f,0f});
  }
}
protected class MFVec3f171 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32172 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f173 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.53408f,0.17478f,0.1f,-0.60008f,-0.01422f,0.1f,-0.60008f,-0.01422f,0f,-0.53408f,0.17478f,0f});
  }
}
protected class MFVec3f174 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94409f,-0.32968f,0f,0.94409f,-0.32968f,0f,0.94409f,-0.32968f,0f,0.94409f,-0.32968f,0f});
  }
}
protected class MFInt32175 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f176 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.60008f,-0.01422f,0.1f,-0.61508f,-0.01422f,0.1f,-0.61508f,-0.01422f,0f,-0.60008f,-0.01422f,0f});
  }
}
protected class MFVec3f177 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32178 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f179 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.61508f,-0.01422f,0.1f,-0.63348f,0.04866f,0.1f,-0.65108f,0.11178f,0.1f,-0.65108f,0.11178f,0f,-0.63348f,0.04866f,0f,-0.61508f,-0.01422f,0f});
  }
}
protected class MFVec3f180 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.95783f,-0.28735f,0f,-0.9616f,-0.27445f,0f,-0.96476f,-0.26312f,0f,-0.96476f,-0.26312f,0f,-0.9616f,-0.27445f,0f,-0.95783f,-0.28735f,0f});
  }
}
protected class MFInt32181 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f182 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.65108f,0.11178f,0.1f,-0.66332f,0.15671f,0.1f,-0.67508f,0.20178f,0.1f,-0.67508f,0.20178f,0f,-0.66332f,0.15671f,0f,-0.65108f,0.11178f,0f});
  }
}
protected class MFVec3f183 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.96476f,-0.26312f,0f,-0.96559f,-0.26007f,0f,-0.97014f,-0.24253f,0f,-0.97014f,-0.24253f,0f,-0.96559f,-0.26007f,0f,-0.96476f,-0.26312f,0f});
  }
}
protected class MFInt32184 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f185 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.67508f,0.20178f,0.1f,-0.67687f,0.20381f,0.1f,-0.67843f,0.20602f,0.1f,-0.68108f,0.21078f,0.1f,-0.68108f,0.21078f,0f,-0.67843f,0.20602f,0f,-0.67687f,0.20381f,0f,-0.67508f,0.20178f,0f});
  }
}
protected class MFVec3f186 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.78785f,-0.61587f,0f,-0.84184f,-0.53972f,0f,-0.89443f,-0.44721f,0f,-0.89443f,-0.44721f,0f,-0.84184f,-0.53972f,0f,-0.78785f,-0.61587f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32187 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f188 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.68108f,0.21078f,0.1f,-0.68311f,0.21256f,0.1f,-0.68533f,0.21413f,0.1f,-0.69008f,0.21678f,0.1f,-0.69008f,0.21678f,0f,-0.68533f,0.21413f,0f,-0.68311f,0.21256f,0f,-0.68108f,0.21078f,0f});
  }
}
protected class MFVec3f189 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.61587f,-0.78785f,0f,-0.53972f,-0.84184f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.53972f,-0.84184f,0f,-0.61587f,-0.78785f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32190 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f191 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.69008f,0.21678f,0.1f,-0.69211f,0.21856f,0.1f,-0.69433f,0.22013f,0.1f,-0.69908f,0.22278f,0.1f,-0.69908f,0.22278f,0f,-0.69433f,0.22013f,0f,-0.69211f,0.21856f,0f,-0.69008f,0.21678f,0f});
  }
}
protected class MFVec3f192 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.61587f,-0.78785f,0f,-0.53972f,-0.84184f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.53972f,-0.84184f,0f,-0.61587f,-0.78785f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32193 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f194 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.69908f,0.22278f,0.1f,-0.70028f,0.22281f,0.1f,-0.70151f,0.22293f,0.1f,-0.70273f,0.22314f,0.1f,-0.70393f,0.22344f,0.1f,-0.70508f,0.22385f,0.1f,-0.70618f,0.22437f,0.1f,-0.70718f,0.22501f,0.1f,-0.70808f,0.22578f,0.1f,-0.70808f,0.22578f,0f,-0.70718f,0.22501f,0f,-0.70618f,0.22437f,0f,-0.70508f,0.22385f,0f,-0.70393f,0.22344f,0f,-0.70273f,0.22314f,0f,-0.70151f,0.22293f,0f,-0.70028f,0.22281f,0f,-0.69908f,0.22278f,0f});
  }
}
protected class MFVec3f195 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.06216f,-0.99807f,0f,-0.12928f,-0.99161f,0f,-0.20336f,-0.9791f,0f,-0.28619f,-0.95817f,0f,-0.37907f,-0.92537f,0f,-0.48214f,-0.87609f,0f,-0.59334f,-0.80495f,0f,-0.70711f,-0.7071f,0f,-0.70711f,-0.7071f,0f,-0.59334f,-0.80495f,0f,-0.48214f,-0.87609f,0f,-0.37907f,-0.92537f,0f,-0.28619f,-0.95817f,0f,-0.20336f,-0.9791f,0f,-0.12928f,-0.99161f,0f,-0.06216f,-0.99807f,0f,0f,-1f,0f});
  }
}
protected class MFInt32196 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f197 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70808f,0.22578f,0.1f,-0.70808f,0.23778f,0.1f,-0.70808f,0.23778f,0f,-0.70808f,0.22578f,0f});
  }
}
protected class MFVec3f198 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32199 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f200 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70808f,0.23778f,0.1f,-0.60908f,0.23778f,0.1f,-0.60908f,0.23778f,0f,-0.70808f,0.23778f,0f});
  }
}
protected class MFVec3f201 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32202 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f203 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.60908f,0.23778f,0.1f,-0.60908f,0.22578f,0.1f,-0.60908f,0.22578f,0f,-0.60908f,0.23778f,0f});
  }
}
protected class MFVec3f204 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32205 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1});
  }
}
protected class MFVec3f206 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.60908f,0.22578f,0.1f,-0.6195f,0.22363f,0.1f,-0.62478f,0.223f,0.1f,-0.63008f,0.22278f,0.1f,-0.63008f,0.22278f,0f,-0.62478f,0.223f,0f,-0.6195f,0.22363f,0f,-0.60908f,0.22578f,0f});
  }
}
protected class MFVec3f207 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,-0.97014f,0f,0.15091f,-0.98855f,0f,0.08318f,-0.99653f,0f,0f,-1f,0f,0f,-1f,0f,0.08318f,-0.99653f,0f,0.15091f,-0.98855f,0f,0.24254f,-0.97014f,0f});
  }
}
protected class MFInt32208 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,12,-1,13,14,10,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,10,11,12,-1});
  }
}
protected class MFVec3f209 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.63008f,0.22278f,0.1f,-0.634f,0.22156f,0.1f,-0.63601f,0.22072f,0.1f,-0.6379f,0.2197f,0.1f,-0.63877f,0.21912f,0.1f,-0.63956f,0.2185f,0.1f,-0.64027f,0.21784f,0.1f,-0.64089f,0.21712f,0.1f,-0.64139f,0.21636f,0.1f,-0.64176f,0.21555f,0.1f,-0.642f,0.21469f,0.1f,-0.64208f,0.21378f,0.1f,-0.64208f,0.21378f,0f,-0.642f,0.21469f,0f,-0.64176f,0.21555f,0f,-0.64139f,0.21636f,0f,-0.64089f,0.21712f,0f,-0.64027f,0.21784f,0f,-0.63956f,0.2185f,0f,-0.63877f,0.21912f,0f,-0.6379f,0.2197f,0f,-0.63601f,0.22072f,0f,-0.634f,0.22156f,0f,-0.63008f,0.22278f,0f});
  }
}
protected class MFVec3f210 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24253f,-0.97014f,0f,0.35284f,-0.93568f,0f,0.42786f,-0.90384f,0f,0.5242f,-0.8516f,0f,0.58238f,-0.81292f,0f,0.64785f,-0.76177f,0f,0.72007f,-0.6939f,0f,0.79668f,-0.6044f,0f,0.87242f,-0.48875f,0f,0.9385f,-0.34528f,0f,0.98396f,-0.17838f,0f,1f,0f,0f,1f,0f,0f,0.98396f,-0.17838f,0f,0.9385f,-0.34528f,0f,0.87242f,-0.48875f,0f,0.79668f,-0.6044f,0f,0.72007f,-0.6939f,0f,0.64785f,-0.76177f,0f,0.58238f,-0.81292f,0f,0.5242f,-0.8516f,0f,0.42786f,-0.90384f,0f,0.35284f,-0.93568f,0f,0.24253f,-0.97014f,0f});
  }
}
protected class MFInt32211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f212 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.64208f,0.21378f,0.1f,-0.64058f,0.21228f,0.1f,-0.63908f,0.21078f,0.1f,-0.63908f,0.21078f,0f,-0.64058f,0.21228f,0f,-0.64208f,0.21378f,0f});
  }
}
protected class MFVec3f213 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f215 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.63908f,0.21078f,0.1f,-0.63908f,0.20778f,0.1f,-0.63908f,0.20478f,0.1f,-0.63908f,0.20478f,0f,-0.63908f,0.21078f,0f});
  }
}
protected class MFVec3f216 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f218 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.63908f,0.20478f,0.1f,-0.63238f,0.17907f,0.1f,-0.62408f,0.15378f,0.1f,-0.62408f,0.15378f,0f,-0.63238f,0.17907f,0f,-0.63908f,0.20478f,0f});
  }
}
protected class MFVec3f219 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.98058f,0.19611f,0f,0.95556f,0.2948f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.95556f,0.2948f,0f,0.98058f,0.19611f,0f});
  }
}
protected class MFInt32220 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f221 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.62408f,0.15378f,0.1f,-0.60931f,0.10121f,0.1f,-0.59408f,0.04878f,0.1f,-0.59408f,0.04878f,0f,-0.60931f,0.10121f,0f,-0.62408f,0.15378f,0f});
  }
}
protected class MFVec3f222 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.96476f,0.26312f,0f,0.96107f,0.2763f,0f,0.96f,0.28f,0f,0.96f,0.28f,0f,0.96107f,0.2763f,0f,0.96476f,0.26312f,0f});
  }
}
protected class MFInt32223 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f224 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.59408f,0.04878f,0.1f,-0.53408f,0.23478f,0.1f,-0.53408f,0.23478f,0f,-0.59408f,0.04878f,0f});
  }
}
protected class MFVec3f225 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.95171f,0.307f,0f,-0.95171f,0.307f,0f,-0.95171f,0.307f,0f,-0.95171f,0.307f,0f});
  }
}
protected class MFInt32226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f227 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.53408f,0.23478f,0.1f,-0.51608f,0.23478f,0.1f,-0.51608f,0.23478f,0f,-0.53408f,0.23478f,0f});
  }
}
protected class MFVec3f228 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f230 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.51608f,0.23478f,0.1f,-0.45008f,0.04278f,0.1f,-0.45008f,0.04278f,0f,-0.51608f,0.23478f,0f});
  }
}
protected class MFVec3f231 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94569f,0.32508f,0f,0.94569f,0.32508f,0f,0.94569f,0.32508f,0f,0.94569f,0.32508f,0f});
  }
}
protected class MFInt32232 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f233 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.45008f,0.04278f,0.1f,-0.43964f,0.08179f,0.1f,-0.42908f,0.12078f,0.1f,-0.42908f,0.12078f,0f,-0.43964f,0.08179f,0f,-0.45008f,0.04278f,0f});
  }
}
protected class MFVec3f234 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.96623f,0.25766f,0f,-0.96567f,0.25976f,0f,-0.96476f,0.26312f,0f,-0.96476f,0.26312f,0f,-0.96567f,0.25976f,0f,-0.96623f,0.25766f,0f});
  }
}
protected class MFInt32235 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f236 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.42908f,0.12078f,0.1f,-0.42166f,0.1478f,0.1f,-0.41408f,0.17478f,0.1f,-0.41408f,0.17478f,0f,-0.42166f,0.1478f,0f,-0.42908f,0.12078f,0f});
  }
}
protected class MFVec3f237 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.96476f,0.26312f,0f,-0.9637f,0.267f,0f,-0.96152f,0.27472f,0f,-0.96152f,0.27472f,0f,-0.9637f,0.267f,0f,-0.96476f,0.26312f,0f});
  }
}
protected class MFInt32238 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f239 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.41408f,0.17478f,0.1f,-0.4101f,0.18662f,0.1f,-0.40865f,0.19265f,0.1f,-0.40823f,0.1957f,0.1f,-0.40808f,0.19878f,0.1f,-0.40808f,0.19878f,0f,-0.40823f,0.1957f,0f,-0.40865f,0.19265f,0f,-0.4101f,0.18662f,0f,-0.41408f,0.17478f,0f});
  }
}
protected class MFVec3f240 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.95936f,0.28219f,0f,-0.98467f,0.17442f,0f,-0.99544f,0.09537f,0f,-1f,0f,0f,-1f,0f,0f,-0.99544f,0.09537f,0f,-0.98467f,0.17442f,0f,-0.95936f,0.28219f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f242 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.40808f,0.19878f,0.1f,-0.40808f,0.20328f,0.1f,-0.40808f,0.20778f,0.1f,-0.40808f,0.20778f,0f,-0.40808f,0.19878f,0f});
  }
}
protected class MFVec3f243 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32244 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f245 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.40808f,0.20778f,0.1f,-0.40811f,0.20861f,0.1f,-0.40821f,0.20945f,0.1f,-0.40836f,0.21027f,0.1f,-0.40857f,0.21109f,0.1f,-0.40914f,0.21271f,0.1f,-0.40989f,0.21427f,0.1f,-0.41079f,0.21577f,0.1f,-0.41181f,0.2172f,0.1f,-0.41291f,0.21854f,0.1f,-0.41408f,0.21978f,0.1f,-0.41408f,0.21978f,0f,-0.41291f,0.21854f,0f,-0.41181f,0.2172f,0f,-0.41079f,0.21577f,0f,-0.40989f,0.21427f,0f,-0.40914f,0.21271f,0f,-0.40857f,0.21109f,0f,-0.40836f,0.21027f,0f,-0.40821f,0.20945f,0f,-0.40811f,0.20861f,0f,-0.40808f,0.20778f,0f});
  }
}
protected class MFVec3f246 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99702f,-0.07719f,0f,-0.98874f,-0.14963f,0f,-0.97621f,-0.21681f,0f,-0.96042f,-0.27856f,0f,-0.92238f,-0.38629f,0f,-0.8799f,-0.47516f,0f,-0.83613f,-0.54853f,0f,-0.79259f,-0.60975f,0f,-0.7497f,-0.66178f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.7497f,-0.66178f,0f,-0.79259f,-0.60975f,0f,-0.83613f,-0.54853f,0f,-0.8799f,-0.47516f,0f,-0.92238f,-0.38629f,0f,-0.96042f,-0.27856f,0f,-0.97621f,-0.21681f,0f,-0.98874f,-0.14963f,0f,-0.99702f,-0.07719f,0f,-1f,0f,0f});
  }
}
protected class MFInt32247 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f248 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.41408f,0.21978f,0.1f,-0.42745f,0.2233f,0.1f,-0.44108f,0.22578f,0.1f,-0.44108f,0.22578f,0f,-0.42745f,0.2233f,0f,-0.41408f,0.21978f,0f});
  }
}
protected class MFVec3f249 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.31623f,-0.94868f,0f,-0.20488f,-0.97879f,0f,-0.1644f,-0.98639f,0f,-0.1644f,-0.98639f,0f,-0.20488f,-0.97879f,0f,-0.31623f,-0.94868f,0f});
  }
}
protected class MFInt32250 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f251 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44108f,0.22578f,0.1f,-0.44108f,0.23778f,0.1f,-0.44108f,0.23778f,0f,-0.44108f,0.22578f,0f});
  }
}
protected class MFVec3f252 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f254 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44108f,0.23778f,0.1f,-0.35108f,0.23778f,0.1f,-0.35108f,0.23778f,0f,-0.44108f,0.23778f,0f});
  }
}
protected class MFVec3f255 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32256 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,104,-1,104,1,103,-1,103,1,102,-1,102,1,101,-1,101,1,100,-1,100,1,99,-1,99,1,5,-1,98,5,95,-1,96,98,95,-1,96,97,98,-1,1,2,5,-1,5,2,4,-1,4,2,3,-1,95,5,94,-1,94,5,6,-1,7,94,6,-1,7,93,94,-1,7,8,93,-1,93,8,92,-1,92,8,9,-1,91,9,10,-1,90,10,89,-1,90,91,10,-1,92,9,91,-1,10,11,89,-1,89,11,88,-1,88,11,12,-1,86,12,13,-1,14,86,13,-1,14,85,86,-1,14,15,85,-1,85,15,84,-1,84,15,16,-1,83,16,17,-1,82,17,18,-1,19,82,18,-1,19,20,82,-1,82,20,21,-1,81,21,22,-1,23,81,22,-1,23,80,81,-1,23,24,80,-1,80,24,79,-1,79,24,25,-1,78,25,77,-1,78,79,25,-1,88,12,86,-1,87,88,86,-1,84,16,83,-1,83,17,82,-1,82,21,81,-1,77,25,76,-1,76,25,26,-1,27,76,26,-1,27,28,76,-1,76,28,75,-1,75,28,74,-1,74,28,73,-1,73,28,29,-1,72,29,30,-1,71,30,31,-1,70,31,32,-1,33,70,32,-1,33,36,70,-1,33,35,36,-1,33,34,35,-1,73,29,72,-1,72,30,71,-1,71,31,70,-1,37,67,36,-1,37,38,67,-1,67,38,39,-1,66,39,40,-1,65,40,41,-1,42,65,41,-1,42,63,65,-1,42,43,63,-1,63,43,62,-1,62,43,44,-1,52,44,45,-1,46,52,45,-1,46,51,52,-1,46,47,51,-1,51,47,48,-1,49,51,48,-1,49,50,51,-1,67,39,66,-1,66,40,65,-1,62,44,52,-1,61,52,60,-1,61,62,52,-1,53,54,52,-1,52,54,55,-1,56,52,55,-1,56,57,52,-1,52,57,58,-1,59,52,58,-1,59,60,52,-1,63,64,65,-1,67,68,36,-1,36,68,69,-1,70,36,69,-1,98,99,5,-1});
  }
}
protected class MFVec3f257 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.35108f,0.22578f,0.1f,-0.35108f,0.23778f,0.1f,-0.44108f,0.23778f,0.1f,-0.44108f,0.22578f,0.1f,-0.42745f,0.2233f,0.1f,-0.41408f,0.21978f,0.1f,-0.41291f,0.21854f,0.1f,-0.41181f,0.2172f,0.1f,-0.41079f,0.21577f,0.1f,-0.40989f,0.21427f,0.1f,-0.40914f,0.21271f,0.1f,-0.40857f,0.21109f,0.1f,-0.40836f,0.21027f,0.1f,-0.40821f,0.20945f,0.1f,-0.40811f,0.20861f,0.1f,-0.40808f,0.20778f,0.1f,-0.40808f,0.20328f,0.1f,-0.40808f,0.19878f,0.1f,-0.40823f,0.1957f,0.1f,-0.40865f,0.19265f,0.1f,-0.4101f,0.18662f,0.1f,-0.41408f,0.17478f,0.1f,-0.42166f,0.1478f,0.1f,-0.42908f,0.12078f,0.1f,-0.43964f,0.08179f,0.1f,-0.45008f,0.04278f,0.1f,-0.51608f,0.23478f,0.1f,-0.53408f,0.23478f,0.1f,-0.59408f,0.04878f,0.1f,-0.60931f,0.10121f,0.1f,-0.62408f,0.15378f,0.1f,-0.63238f,0.17907f,0.1f,-0.63908f,0.20478f,0.1f,-0.63908f,0.20778f,0.1f,-0.63908f,0.21078f,0.1f,-0.64058f,0.21228f,0.1f,-0.64208f,0.21378f,0.1f,-0.642f,0.21469f,0.1f,-0.64176f,0.21555f,0.1f,-0.64139f,0.21636f,0.1f,-0.64089f,0.21712f,0.1f,-0.64027f,0.21784f,0.1f,-0.63956f,0.2185f,0.1f,-0.63877f,0.21912f,0.1f,-0.6379f,0.2197f,0.1f,-0.63601f,0.22072f,0.1f,-0.634f,0.22156f,0.1f,-0.63008f,0.22278f,0.1f,-0.62478f,0.223f,0.1f,-0.6195f,0.22363f,0.1f,-0.60908f,0.22578f,0.1f,-0.60908f,0.23778f,0.1f,-0.70808f,0.23778f,0.1f,-0.70808f,0.22578f,0.1f,-0.70718f,0.22501f,0.1f,-0.70618f,0.22437f,0.1f,-0.70508f,0.22385f,0.1f,-0.70393f,0.22344f,0.1f,-0.70273f,0.22314f,0.1f,-0.70151f,0.22293f,0.1f,-0.70028f,0.22281f,0.1f,-0.69908f,0.22278f,0.1f,-0.69433f,0.22013f,0.1f,-0.69211f,0.21856f,0.1f,-0.69008f,0.21678f,0.1f,-0.68533f,0.21413f,0.1f,-0.68311f,0.21256f,0.1f,-0.68108f,0.21078f,0.1f,-0.67843f,0.20602f,0.1f,-0.67687f,0.20381f,0.1f,-0.67508f,0.20178f,0.1f,-0.66332f,0.15671f,0.1f,-0.65108f,0.11178f,0.1f,-0.63348f,0.04866f,0.1f,-0.61508f,-0.01422f,0.1f,-0.60008f,-0.01422f,0.1f,-0.53408f,0.17478f,0.1f,-0.47108f,-0.01422f,0.1f,-0.45608f,-0.01422f,0.1f,-0.43714f,0.04248f,0.1f,-0.42008f,0.09978f,0.1f,-0.40456f,0.14762f,0.1f,-0.39008f,0.19578f,0.1f,-0.38774f,0.20218f,0.1f,-0.387f,0.20371f,0.1f,-0.38615f,0.20516f,0.1f,-0.38519f,0.20653f,0.1f,-0.38408f,0.20778f,0.1f,-0.38363f,0.2086f,0.1f,-0.38312f,0.20938f,0.1f,-0.38255f,0.21013f,0.1f,-0.38193f,0.21085f,0.1f,-0.38055f,0.21217f,0.1f,-0.37902f,0.21336f,0.1f,-0.37737f,0.21441f,0.1f,-0.37564f,0.21533f,0.1f,-0.37387f,0.21612f,0.1f,-0.37208f,0.21678f,0.1f,-0.37005f,0.21856f,0.1f,-0.36783f,0.22013f,0.1f,-0.36308f,0.22278f,0.1f,-0.36153f,0.22283f,0.1f,-0.35998f,0.22299f,0.1f,-0.35692f,0.22359f,0.1f,-0.35393f,0.22453f,0.1f});
  }
}
protected class MFVec3f258 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32259 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f260 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00308f,0.00378f,0.1f,0.00803f,0.00437f,0.1f,0.01361f,0.00518f,0.1f,0.01912f,0.00637f,0.1f,0.02447f,0.00798f,0.1f,0.02961f,0.01007f,0.1f,0.03445f,0.01265f,0.1f,0.03673f,0.01414f,0.1f,0.03892f,0.01578f,0.1f,0.03892f,0.01578f,0f,0.03673f,0.01414f,0f,0.03445f,0.01265f,0f,0.02961f,0.01007f,0f,0.02447f,0.00798f,0f,0.01912f,0.00637f,0f,0.01361f,0.00518f,0f,0.00803f,0.00437f,0f,-0.00308f,0.00378f,0f});
  }
}
protected class MFVec3f261 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.11037f,0.99389f,0f,-0.17542f,0.98449f,0f,-0.2486f,0.96861f,0f,-0.33076f,0.94372f,0f,-0.42199f,0.9066f,0f,-0.52106f,0.85352f,0f,-0.57261f,0.81983f,0f,-0.6247f,0.78087f,0f,-0.6247f,0.78087f,0f,-0.57261f,0.81983f,0f,-0.52106f,0.85352f,0f,-0.42199f,0.9066f,0f,-0.33076f,0.94372f,0f,-0.2486f,0.96861f,0f,-0.17542f,0.98449f,0f,-0.11037f,0.99389f,0f,0f,1f,0f});
  }
}
protected class MFInt32262 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,2,6,1,-1,2,5,6,-1,2,4,5,-1,2,3,4,-1});
  }
}
protected class MFVec3f263 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02708f,0.00678f,0.1f,-0.02124f,0.00523f,0.1f,-0.01524f,0.00432f,0.1f,-0.00308f,0.00378f,0.1f,-0.00308f,0.00378f,0f,-0.01524f,0.00432f,0f,-0.02124f,0.00523f,0f,-0.02708f,0.00678f,0f});
  }
}
protected class MFVec3f264 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31623f,0.94868f,0f,0.19851f,0.9801f,0f,0.10626f,0.99434f,0f,0f,1f,0f,0f,1f,0f,0.10626f,0.99434f,0f,0.19851f,0.9801f,0f,0.31623f,0.94868f,0f});
  }
}
protected class MFInt32265 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,16,-1,17,18,6,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,6,7,16,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,12,-1,13,14,10,-1,16,8,15,-1,15,9,14,-1,10,11,12,-1});
  }
}
protected class MFVec3f266 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.03608f,0.02478f,0.1f,-0.03592f,0.02223f,0.1f,-0.03546f,0.01966f,0.1f,-0.0347f,0.01712f,0.1f,-0.03367f,0.01466f,0.1f,-0.03238f,0.01234f,0.1f,-0.03164f,0.01125f,0.1f,-0.03084f,0.01022f,0.1f,-0.02998f,0.00925f,0.1f,-0.02907f,0.00834f,0.1f,-0.0281f,0.00752f,0.1f,-0.02708f,0.00678f,0.1f,-0.02708f,0.00678f,0f,-0.0281f,0.00752f,0f,-0.02907f,0.00834f,0f,-0.02998f,0.00925f,0f,-0.03084f,0.01022f,0f,-0.03164f,0.01125f,0f,-0.03238f,0.01234f,0f,-0.03367f,0.01466f,0f,-0.0347f,0.01712f,0f,-0.03546f,0.01966f,0f,-0.03592f,0.02223f,0f,-0.03608f,0.02478f,0f});
  }
}
protected class MFVec3f267 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99265f,0.121f,0f,0.97277f,0.23176f,0f,0.94187f,0.33598f,0f,0.89953f,0.43686f,0f,0.84372f,0.53678f,0f,0.80971f,0.58683f,0f,0.7709f,0.63695f,0f,0.72665f,0.687f,0f,0.67629f,0.73663f,0f,0.61916f,0.78526f,0f,0.5547f,0.83205f,0f,0.5547f,0.83205f,0f,0.61916f,0.78526f,0f,0.67629f,0.73663f,0f,0.72665f,0.687f,0f,0.7709f,0.63695f,0f,0.80971f,0.58683f,0f,0.84372f,0.53678f,0f,0.89953f,0.43686f,0f,0.94187f,0.33598f,0f,0.97277f,0.23176f,0f,0.99265f,0.121f,0f,1f,0f,0f});
  }
}
protected class MFInt32268 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f269 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.03608f,0.11178f,0.1f,-0.03608f,0.02478f,0.1f,-0.03608f,0.02478f,0f,-0.03608f,0.11178f,0f});
  }
}
protected class MFVec3f270 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32271 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f272 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02708f,0.11178f,0.1f,-0.03608f,0.11178f,0.1f,-0.03608f,0.11178f,0f,-0.02708f,0.11178f,0f});
  }
}
protected class MFVec3f273 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32274 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f275 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00608f,0.11178f,0.1f,-0.02708f,0.11178f,0.1f,-0.02708f,0.11178f,0f,-0.00608f,0.11178f,0f});
  }
}
protected class MFVec3f276 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32277 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f278 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.03592f,0.09678f,0.1f,0.03388f,0.09868f,0.1f,0.03171f,0.10044f,0.1f,0.02701f,0.10356f,0.1f,0.02193f,0.10614f,0.1f,0.01655f,0.10822f,0.1f,0.01097f,0.1098f,0.1f,0.00528f,0.11091f,0.1f,-0.00044f,0.11156f,0.1f,-0.00608f,0.11178f,0.1f,-0.00608f,0.11178f,0f,-0.00044f,0.11156f,0f,0.00528f,0.11091f,0f,0.01097f,0.1098f,0f,0.01655f,0.10822f,0f,0.02193f,0.10614f,0f,0.02701f,0.10356f,0f,0.03171f,0.10044f,0f,0.03388f,0.09868f,0f,0.03592f,0.09678f,0f});
  }
}
protected class MFVec3f279 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.65567f,-0.75505f,0f,-0.60395f,-0.79702f,0f,-0.50233f,-0.86468f,0f,-0.40576f,-0.91398f,0f,-0.31546f,-0.94894f,0f,-0.23115f,-0.97292f,0f,-0.15165f,-0.98843f,0f,-0.07527f,-0.99716f,0f,0f,-1f,0f,0f,-1f,0f,-0.07527f,-0.99716f,0f,-0.15165f,-0.98843f,0f,-0.23115f,-0.97292f,0f,-0.31546f,-0.94894f,0f,-0.40576f,-0.91398f,0f,-0.50233f,-0.86468f,0f,-0.60395f,-0.79702f,0f,-0.65567f,-0.75505f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32280 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f281 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05392f,0.06078f,0.1f,0.05383f,0.0633f,0.1f,0.05357f,0.06582f,0.1f,0.05314f,0.06835f,0.1f,0.05256f,0.07085f,0.1f,0.05094f,0.0758f,0.1f,0.04878f,0.08059f,0.1f,0.04614f,0.08515f,0.1f,0.04308f,0.08942f,0.1f,0.03965f,0.09331f,0.1f,0.03592f,0.09678f,0.1f,0.03592f,0.09678f,0f,0.03965f,0.09331f,0f,0.04308f,0.08942f,0f,0.04614f,0.08515f,0f,0.04878f,0.08059f,0f,0.05094f,0.0758f,0f,0.05256f,0.07085f,0f,0.05314f,0.06835f,0f,0.05357f,0.06582f,0f,0.05383f,0.0633f,0f,0.05392f,0.06078f,0f});
  }
}
protected class MFVec3f282 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99756f,-0.06977f,0f,-0.99076f,-0.13565f,0f,-0.98027f,-0.19765f,0f,-0.9667f,-0.25591f,0f,-0.93208f,-0.36224f,0f,-0.88942f,-0.45709f,0f,-0.8397f,-0.54304f,0f,-0.78267f,-0.62243f,0f,-0.71697f,-0.6971f,0f,-0.64018f,-0.76822f,0f,-0.64018f,-0.76822f,0f,-0.71697f,-0.6971f,0f,-0.78267f,-0.62243f,0f,-0.8397f,-0.54304f,0f,-0.88942f,-0.45709f,0f,-0.93208f,-0.36224f,0f,-0.9667f,-0.25591f,0f,-0.98027f,-0.19765f,0f,-0.99076f,-0.13565f,0f,-0.99756f,-0.06977f,0f,-1f,0f,0f});
  }
}
protected class MFInt32283 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f284 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.03892f,0.01578f,0.1f,0.04093f,0.01795f,0.1f,0.04277f,0.02027f,0.1f,0.04446f,0.02273f,0.1f,0.04598f,0.0253f,0.1f,0.04858f,0.03076f,0.1f,0.05061f,0.03654f,0.1f,0.05212f,0.04254f,0.1f,0.05315f,0.04865f,0.1f,0.05373f,0.05476f,0.1f,0.05392f,0.06078f,0.1f,0.05392f,0.06078f,0f,0.05373f,0.05476f,0f,0.05315f,0.04865f,0f,0.05212f,0.04254f,0f,0.05061f,0.03654f,0f,0.04858f,0.03076f,0f,0.04598f,0.0253f,0f,0.04446f,0.02273f,0f,0.04277f,0.02027f,0f,0.04093f,0.01795f,0f,0.03892f,0.01578f,0f});
  }
}
protected class MFVec3f285 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.75958f,0.65041f,0f,-0.80495f,0.59334f,0f,-0.8436f,0.53698f,0f,-0.87609f,0.48214f,0f,-0.92537f,0.37907f,0f,-0.95817f,0.28619f,0f,-0.9791f,0.20336f,0f,-0.99161f,0.12928f,0f,-0.99807f,0.06216f,0f,-1f,0f,0f,-1f,0f,0f,-0.99807f,0.06216f,0f,-0.99161f,0.12928f,0f,-0.9791f,0.20336f,0f,-0.95817f,0.28619f,0f,-0.92537f,0.37907f,0f,-0.87609f,0.48214f,0f,-0.8436f,0.53698f,0f,-0.80495f,0.59334f,0f,-0.75958f,0.65041f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32286 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f287 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.01508f,0.12678f,0.1f,-0.00292f,0.12732f,0.1f,0.00308f,0.12823f,0.1f,0.00892f,0.12978f,0.1f,0.00892f,0.12978f,0f,0.00308f,0.12823f,0f,-0.00292f,0.12732f,0f,-0.01508f,0.12678f,0f});
  }
}
protected class MFVec3f288 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.10626f,0.99434f,0f,-0.19851f,0.9801f,0f,-0.31623f,0.94868f,0f,-0.31623f,0.94868f,0f,-0.19851f,0.9801f,0f,-0.10626f,0.99434f,0f,0f,1f,0f});
  }
}
protected class MFInt32289 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f290 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.03608f,0.12678f,0.1f,-0.01508f,0.12678f,0.1f,-0.01508f,0.12678f,0f,-0.03608f,0.12678f,0f});
  }
}
protected class MFVec3f291 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32292 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f293 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.03608f,0.22278f,0.1f,-0.03608f,0.12678f,0.1f,-0.03608f,0.12678f,0f,-0.03608f,0.22278f,0f});
  }
}
protected class MFVec3f294 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32295 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f296 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02408f,0.22278f,0.1f,-0.03608f,0.22278f,0.1f,-0.03608f,0.22278f,0f,-0.02408f,0.22278f,0f});
  }
}
protected class MFVec3f297 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32298 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f299 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00908f,0.22278f,0.1f,-0.02408f,0.22278f,0.1f,-0.02408f,0.22278f,0f,-0.00908f,0.22278f,0f});
  }
}
protected class MFVec3f300 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32301 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,18,-1,19,20,2,-1,2,3,18,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f302 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.02692f,0.21078f,0.1f,0.02518f,0.21239f,0.1f,0.02332f,0.21386f,0.1f,0.02136f,0.21521f,0.1f,0.0193f,0.21643f,0.1f,0.01493f,0.2185f,0.1f,0.01031f,0.22013f,0.1f,0.00551f,0.22134f,0.1f,0.00062f,0.22216f,0.1f,-0.00427f,0.22263f,0.1f,-0.00908f,0.22278f,0.1f,-0.00908f,0.22278f,0f,-0.00427f,0.22263f,0f,0.00062f,0.22216f,0f,0.00551f,0.22134f,0f,0.01031f,0.22013f,0f,0.01493f,0.2185f,0f,0.0193f,0.21643f,0f,0.02136f,0.21521f,0f,0.02332f,0.21386f,0f,0.02518f,0.21239f,0f,0.02692f,0.21078f,0f});
  }
}
protected class MFVec3f303 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.65041f,-0.75958f,0f,-0.59334f,-0.80495f,0f,-0.53698f,-0.8436f,0f,-0.48214f,-0.87609f,0f,-0.37907f,-0.92537f,0f,-0.28619f,-0.95817f,0f,-0.20336f,-0.9791f,0f,-0.12928f,-0.99161f,0f,-0.06216f,-0.99807f,0f,0f,-1f,0f,0f,-1f,0f,-0.06216f,-0.99807f,0f,-0.12928f,-0.99161f,0f,-0.20336f,-0.9791f,0f,-0.28619f,-0.95817f,0f,-0.37907f,-0.92537f,0f,-0.48214f,-0.87609f,0f,-0.53698f,-0.8436f,0f,-0.59334f,-0.80495f,0f,-0.65041f,-0.75958f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32304 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f305 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.03892f,0.17778f,0.1f,0.03874f,0.18222f,0.1f,0.03821f,0.18671f,0.1f,0.03731f,0.19118f,0.1f,0.03602f,0.19556f,0.1f,0.03435f,0.19979f,0.1f,0.03229f,0.20378f,0.1f,0.02981f,0.20746f,0.1f,0.02842f,0.20917f,0.1f,0.02692f,0.21078f,0.1f,0.02692f,0.21078f,0f,0.02842f,0.20917f,0f,0.02981f,0.20746f,0f,0.03229f,0.20378f,0f,0.03435f,0.19979f,0f,0.03602f,0.19556f,0f,0.03731f,0.19118f,0f,0.03821f,0.18671f,0f,0.03874f,0.18222f,0f,0.03892f,0.17778f,0f});
  }
}
protected class MFVec3f306 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99689f,-0.07881f,0f,-0.98749f,-0.15769f,0f,-0.97111f,-0.23864f,0f,-0.94629f,-0.32332f,0f,-0.91078f,-0.41289f,0f,-0.86152f,-0.50772f,0f,-0.79485f,-0.6068f,0f,-0.75381f,-0.65709f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.75381f,-0.65709f,0f,-0.79485f,-0.6068f,0f,-0.86152f,-0.50772f,0f,-0.91078f,-0.41289f,0f,-0.94629f,-0.32332f,0f,-0.97111f,-0.23864f,0f,-0.98749f,-0.15769f,0f,-0.99689f,-0.07881f,0f,-1f,0f,0f});
  }
}
protected class MFInt32307 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1});
  }
}
protected class MFVec3f308 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.03592f,0.15678f,0.1f,0.03733f,0.16189f,0.1f,0.03826f,0.16714f,0.1f,0.03877f,0.17246f,0.1f,0.03892f,0.17778f,0.1f,0.03892f,0.17778f,0f,0.03877f,0.17246f,0f,0.03826f,0.16714f,0f,0.03733f,0.16189f,0f,0.03592f,0.15678f,0f});
  }
}
protected class MFVec3f309 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.97601f,0.21771f,0f,-0.99122f,0.1322f,0f,-0.99821f,0.05989f,0f,-1f,0f,0f,-1f,0f,0f,-0.99821f,0.05989f,0f,-0.99122f,0.1322f,0f,-0.97601f,0.21771f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32310 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f311 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.02692f,0.13878f,0.1f,0.03202f,0.14748f,0.1f,0.03414f,0.15206f,0.1f,0.03592f,0.15678f,0.1f,0.03592f,0.15678f,0f,0.03414f,0.15206f,0f,0.03202f,0.14748f,0f,0.02692f,0.13878f,0f});
  }
}
protected class MFVec3f312 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.89248f,0.45108f,0f,-0.92165f,0.38803f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.92165f,0.38803f,0f,-0.89248f,0.45108f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt32313 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f314 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.00892f,0.12978f,0.1f,0.01381f,0.1312f,0.1f,0.01858f,0.13311f,0.1f,0.02086f,0.13427f,0.1f,0.02302f,0.1356f,0.1f,0.02505f,0.1371f,0.1f,0.02692f,0.13878f,0.1f,0.02692f,0.13878f,0f,0.02505f,0.1371f,0f,0.02302f,0.1356f,0f,0.02086f,0.13427f,0f,0.01858f,0.13311f,0f,0.01381f,0.1312f,0f,0.00892f,0.12978f,0f});
  }
}
protected class MFVec3f315 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24253f,0.97014f,0f,-0.32084f,0.94713f,0f,-0.42529f,0.90506f,0f,-0.48778f,0.87297f,0f,-0.55663f,0.83076f,0f,-0.63055f,0.77615f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.63055f,0.77615f,0f,-0.55663f,0.83076f,0f,-0.48778f,0.87297f,0f,-0.42529f,0.90506f,0f,-0.32084f,0.94713f,0f,-0.24253f,0.97014f,0f});
  }
}
protected class MFInt32316 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1});
  }
}
protected class MFVec3f317 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06892f,0.10278f,0.1f,0.07393f,0.09881f,0.1f,0.0787f,0.09452f,0.1f,0.08308f,0.08985f,0.1f,0.08692f,0.08478f,0.1f,0.08692f,0.08478f,0f,0.08308f,0.08985f,0f,0.0787f,0.09452f,0f,0.07393f,0.09881f,0f,0.06892f,0.10278f,0f});
  }
}
protected class MFVec3f318 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.6f,0.8f,0f,0.64283f,0.76601f,0f,0.69744f,0.71664f,0f,0.76189f,0.6477f,0f,0.83205f,0.5547f,0f,0.83205f,0.5547f,0f,0.76189f,0.6477f,0f,0.69744f,0.71664f,0f,0.64283f,0.76601f,0f,0.6f,0.8f,0f});
  }
}
protected class MFInt32319 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1});
  }
}
protected class MFVec3f320 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.08692f,0.08478f,0.1f,0.08911f,0.08152f,0.1f,0.09097f,0.07803f,0.1f,0.09252f,0.07437f,0.1f,0.09377f,0.07056f,0.1f,0.09472f,0.06666f,0.1f,0.09539f,0.06269f,0.1f,0.09579f,0.05872f,0.1f,0.09592f,0.05478f,0.1f,0.09592f,0.05478f,0f,0.09579f,0.05872f,0f,0.09539f,0.06269f,0f,0.09472f,0.06666f,0f,0.09377f,0.07056f,0f,0.09252f,0.07437f,0f,0.09097f,0.07803f,0f,0.08911f,0.08152f,0f,0.08692f,0.08478f,0f});
  }
}
protected class MFVec3f321 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.8f,0.6f,0f,0.85796f,0.51371f,0f,0.90285f,0.42995f,0f,0.93678f,0.34991f,0f,0.96176f,0.27391f,0f,0.97945f,0.20168f,0f,0.99117f,0.13257f,0f,0.99784f,0.0657f,0f,1f,0f,0f,1f,0f,0f,0.99784f,0.0657f,0f,0.99117f,0.13257f,0f,0.97945f,0.20168f,0f,0.96176f,0.27391f,0f,0.93678f,0.34991f,0f,0.90285f,0.42995f,0f,0.85796f,0.51371f,0f,0.8f,0.6f,0f});
  }
}
protected class MFInt32322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f323 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09592f,0.05478f,0.1f,0.09579f,0.05083f,0.1f,0.09539f,0.04686f,0.1f,0.09472f,0.0429f,0.1f,0.09377f,0.03899f,0.1f,0.09252f,0.03519f,0.1f,0.09097f,0.03152f,0.1f,0.08911f,0.02804f,0.1f,0.08692f,0.02478f,0.1f,0.08692f,0.02478f,0f,0.08911f,0.02804f,0f,0.09097f,0.03152f,0f,0.09252f,0.03519f,0f,0.09377f,0.03899f,0f,0.09472f,0.0429f,0f,0.09539f,0.04686f,0f,0.09579f,0.05083f,0f,0.09592f,0.05478f,0f});
  }
}
protected class MFVec3f324 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99784f,-0.0657f,0f,0.99117f,-0.13257f,0f,0.97945f,-0.20168f,0f,0.96176f,-0.27391f,0f,0.93678f,-0.34991f,0f,0.90285f,-0.42995f,0f,0.85796f,-0.51371f,0f,0.8f,-0.6f,0f,0.8f,-0.6f,0f,0.85796f,-0.51371f,0f,0.90285f,-0.42995f,0f,0.93678f,-0.34991f,0f,0.96176f,-0.27391f,0f,0.97945f,-0.20168f,0f,0.99117f,-0.13257f,0f,0.99784f,-0.0657f,0f,1f,0f,0f});
  }
}
protected class MFInt32325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f326 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.08692f,0.02478f,0.1f,0.08527f,0.02173f,0.1f,0.08341f,0.0188f,0.1f,0.07914f,0.01326f,0.1f,0.07426f,0.00823f,0.1f,0.06892f,0.00378f,0.1f,0.06892f,0.00378f,0f,0.07426f,0.00823f,0f,0.07914f,0.01326f,0f,0.08341f,0.0188f,0f,0.08527f,0.02173f,0f,0.08692f,0.02478f,0f});
  }
}
protected class MFVec3f327 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,-0.44721f,0f,0.86193f,-0.50703f,0f,0.82756f,-0.56138f,0f,0.75513f,-0.65557f,0f,0.67928f,-0.73388f,0f,0.6f,-0.8f,0f,0.6f,-0.8f,0f,0.67928f,-0.73388f,0f,0.75513f,-0.65557f,0f,0.82756f,-0.56138f,0f,0.86193f,-0.50703f,0f,0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f329 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06892f,0.00378f,0.1f,0.06274f,-0.00032f,0.1f,0.05609f,-0.00371f,0.1f,0.0491f,-0.00636f,0.1f,0.04192f,-0.00822f,0.1f,0.04192f,-0.00822f,0f,0.0491f,-0.00636f,0f,0.05609f,-0.00371f,0f,0.06274f,-0.00032f,0f,0.06892f,0.00378f,0f});
  }
}
protected class MFVec3f330 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.6f,-0.8f,0f,0.50364f,-0.86392f,0f,0.40516f,-0.91425f,0f,0.30331f,-0.95289f,0f,0.19612f,-0.98058f,0f,0.19612f,-0.98058f,0f,0.30331f,-0.95289f,0f,0.40516f,-0.91425f,0f,0.50364f,-0.86392f,0f,0.6f,-0.8f,0f});
  }
}
protected class MFInt32331 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f332 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04192f,-0.00822f,0.1f,0.02699f,-0.01046f,0.1f,0.01192f,-0.01122f,0.1f,0.01192f,-0.01122f,0f,0.02699f,-0.01046f,0f,0.04192f,-0.00822f,0f});
  }
}
protected class MFVec3f333 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.19612f,-0.98058f,0f,0.09998f,-0.99499f,0f,0f,-1f,0f,0f,-1f,0f,0.09998f,-0.99499f,0f,0.19612f,-0.98058f,0f});
  }
}
protected class MFInt32334 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f335 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.01192f,-0.01122f,0.1f,-0.10508f,-0.01122f,0.1f,-0.10508f,-0.01122f,0f,0.01192f,-0.01122f,0f});
  }
}
protected class MFVec3f336 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32337 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f338 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10508f,-0.01122f,0.1f,-0.10508f,0.00078f,0.1f,-0.10508f,0.00078f,0f,-0.10508f,-0.01122f,0f});
  }
}
protected class MFVec3f339 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32340 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f341 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10508f,0.00078f,0.1f,-0.10058f,0.00078f,0.1f,-0.09608f,0.00078f,0.1f,-0.09608f,0.00078f,0f,-0.10508f,0.00078f,0f});
  }
}
protected class MFVec3f342 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32343 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,15,-1,16,17,5,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,5,6,15,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f344 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.09608f,0.00078f,0.1f,-0.09288f,0.00084f,0.1f,-0.09124f,0.00096f,0.1f,-0.08963f,0.00118f,0.1f,-0.08807f,0.00155f,0.1f,-0.08732f,0.00179f,0.1f,-0.08661f,0.00208f,0.1f,-0.08592f,0.00242f,0.1f,-0.08526f,0.00281f,0.1f,-0.08465f,0.00326f,0.1f,-0.08408f,0.00378f,0.1f,-0.08408f,0.00378f,0f,-0.08465f,0.00326f,0f,-0.08526f,0.00281f,0f,-0.08592f,0.00242f,0f,-0.08661f,0.00208f,0f,-0.08732f,0.00179f,0f,-0.08807f,0.00155f,0f,-0.08963f,0.00118f,0f,-0.09124f,0.00096f,0f,-0.09288f,0.00084f,0f,-0.09608f,0.00078f,0f});
  }
}
protected class MFVec3f345 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.04898f,0.9988f,0f,-0.1029f,0.99469f,0f,-0.17892f,0.98386f,0f,-0.27976f,0.96007f,0f,-0.33996f,0.94044f,0f,-0.40641f,0.91369f,0f,-0.47828f,0.87821f,0f,-0.55403f,0.8325f,0f,-0.63131f,0.77553f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.63131f,0.77553f,0f,-0.55403f,0.8325f,0f,-0.47828f,0.87821f,0f,-0.40641f,0.91369f,0f,-0.33996f,0.94044f,0f,-0.27976f,0.96007f,0f,-0.17892f,0.98386f,0f,-0.1029f,0.99469f,0f,-0.04898f,0.9988f,0f,0f,1f,0f});
  }
}
protected class MFInt32346 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f347 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.08408f,0.00378f,0.1f,-0.07933f,0.00643f,0.1f,-0.07711f,0.00799f,0.1f,-0.07508f,0.00978f,0.1f,-0.07508f,0.00978f,0f,-0.07711f,0.00799f,0f,-0.07933f,0.00643f,0f,-0.08408f,0.00378f,0f});
  }
}
protected class MFVec3f348 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.53972f,0.84184f,0f,-0.61587f,0.78785f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.61587f,0.78785f,0f,-0.53972f,0.84184f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt32349 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f350 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07508f,0.00978f,0.1f,-0.07457f,0.01035f,0.1f,-0.07411f,0.01096f,0.1f,-0.07372f,0.01161f,0.1f,-0.07338f,0.0123f,0.1f,-0.07309f,0.01302f,0.1f,-0.07285f,0.01377f,0.1f,-0.07249f,0.01532f,0.1f,-0.07226f,0.01694f,0.1f,-0.07214f,0.01857f,0.1f,-0.07208f,0.02178f,0.1f,-0.07208f,0.02178f,0f,-0.07214f,0.01857f,0f,-0.07226f,0.01694f,0f,-0.07249f,0.01532f,0f,-0.07285f,0.01377f,0f,-0.07309f,0.01302f,0f,-0.07338f,0.0123f,0f,-0.07372f,0.01161f,0f,-0.07411f,0.01096f,0f,-0.07457f,0.01035f,0f,-0.07508f,0.00978f,0f});
  }
}
protected class MFVec3f351 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.77553f,0.63131f,0f,-0.8325f,0.55403f,0f,-0.87821f,0.47828f,0f,-0.91369f,0.40641f,0f,-0.94044f,0.33996f,0f,-0.96007f,0.27976f,0f,-0.98386f,0.17892f,0f,-0.99469f,0.1029f,0f,-0.9988f,0.04898f,0f,-1f,0f,0f,-1f,0f,0f,-0.9988f,0.04898f,0f,-0.99469f,0.1029f,0f,-0.98386f,0.17892f,0f,-0.96007f,0.27976f,0f,-0.94044f,0.33996f,0f,-0.91369f,0.40641f,0f,-0.87821f,0.47828f,0f,-0.8325f,0.55403f,0f,-0.77553f,0.63131f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32352 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f353 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07208f,0.02178f,0.1f,-0.07208f,0.20178f,0.1f,-0.07208f,0.20178f,0f,-0.07208f,0.02178f,0f});
  }
}
protected class MFVec3f354 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32355 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f356 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07208f,0.20178f,0.1f,-0.07212f,0.20298f,0.1f,-0.07223f,0.2042f,0.1f,-0.07244f,0.20543f,0.1f,-0.07274f,0.20662f,0.1f,-0.07315f,0.20778f,0.1f,-0.07367f,0.20887f,0.1f,-0.07431f,0.20988f,0.1f,-0.07508f,0.21078f,0.1f,-0.07508f,0.21078f,0f,-0.07431f,0.20988f,0f,-0.07367f,0.20887f,0f,-0.07315f,0.20778f,0f,-0.07274f,0.20662f,0f,-0.07244f,0.20543f,0f,-0.07223f,0.2042f,0f,-0.07212f,0.20298f,0f,-0.07208f,0.20178f,0f});
  }
}
protected class MFVec3f357 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99807f,-0.06217f,0f,-0.99161f,-0.12929f,0f,-0.9791f,-0.20336f,0f,-0.95817f,-0.28619f,0f,-0.92537f,-0.37907f,0f,-0.87609f,-0.48214f,0f,-0.80495f,-0.59334f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.80495f,-0.59334f,0f,-0.87609f,-0.48214f,0f,-0.92537f,-0.37907f,0f,-0.95817f,-0.28619f,0f,-0.9791f,-0.20336f,0f,-0.99161f,-0.12929f,0f,-0.99807f,-0.06217f,0f,-1f,0f,0f});
  }
}
protected class MFInt32358 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,11,-1,12,13,5,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,5,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,11,7,10,-1});
  }
}
protected class MFVec3f359 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07508f,0.21078f,0.1f,-0.07586f,0.21218f,0.1f,-0.07675f,0.21352f,0.1f,-0.07776f,0.21479f,0.1f,-0.07887f,0.21599f,0.1f,-0.08007f,0.2171f,0.1f,-0.08134f,0.2181f,0.1f,-0.08268f,0.219f,0.1f,-0.08408f,0.21978f,0.1f,-0.08408f,0.21978f,0f,-0.08268f,0.219f,0f,-0.08134f,0.2181f,0f,-0.08007f,0.2171f,0f,-0.07887f,0.21599f,0f,-0.07776f,0.21479f,0f,-0.07675f,0.21352f,0f,-0.07586f,0.21218f,0f,-0.07508f,0.21078f,0f});
  }
}
protected class MFVec3f360 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.85331f,-0.52141f,0f,-0.80828f,-0.58879f,0f,-0.75959f,-0.6504f,0f,-0.70711f,-0.70711f,0f,-0.6504f,-0.75959f,0f,-0.58879f,-0.80828f,0f,-0.52141f,-0.85331f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.52141f,-0.85331f,0f,-0.58879f,-0.80828f,0f,-0.6504f,-0.75959f,0f,-0.70711f,-0.70711f,0f,-0.75959f,-0.6504f,0f,-0.80828f,-0.58879f,0f,-0.85331f,-0.52141f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32361 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f362 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.08408f,0.21978f,0.1f,-0.08563f,0.21983f,0.1f,-0.08718f,0.21999f,0.1f,-0.09024f,0.22059f,0.1f,-0.09323f,0.22153f,0.1f,-0.09608f,0.22278f,0.1f,-0.09608f,0.22278f,0f,-0.09323f,0.22153f,0f,-0.09024f,0.22059f,0f,-0.08718f,0.21999f,0f,-0.08563f,0.21983f,0f,-0.08408f,0.21978f,0f});
  }
}
protected class MFVec3f363 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.06804f,-0.99768f,0f,-0.13201f,-0.99125f,0f,-0.24866f,-0.96859f,0f,-0.35262f,-0.93577f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.35262f,-0.93577f,0f,-0.24866f,-0.96859f,0f,-0.13201f,-0.99125f,0f,-0.06804f,-0.99768f,0f,0f,-1f,0f});
  }
}
protected class MFInt32364 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f365 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.09608f,0.22278f,0.1f,-0.09728f,0.22281f,0.1f,-0.09851f,0.22293f,0.1f,-0.09973f,0.22314f,0.1f,-0.10093f,0.22344f,0.1f,-0.10208f,0.22385f,0.1f,-0.10318f,0.22437f,0.1f,-0.10418f,0.22501f,0.1f,-0.10508f,0.22578f,0.1f,-0.10508f,0.22578f,0f,-0.10418f,0.22501f,0f,-0.10318f,0.22437f,0f,-0.10208f,0.22385f,0f,-0.10093f,0.22344f,0f,-0.09973f,0.22314f,0f,-0.09851f,0.22293f,0f,-0.09728f,0.22281f,0f,-0.09608f,0.22278f,0f});
  }
}
protected class MFVec3f366 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.06217f,-0.99807f,0f,-0.12929f,-0.99161f,0f,-0.20336f,-0.9791f,0f,-0.28619f,-0.95817f,0f,-0.37907f,-0.92537f,0f,-0.48214f,-0.87609f,0f,-0.59334f,-0.80495f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.59334f,-0.80495f,0f,-0.48214f,-0.87609f,0f,-0.37907f,-0.92537f,0f,-0.28619f,-0.95817f,0f,-0.20336f,-0.9791f,0f,-0.12929f,-0.99161f,0f,-0.06217f,-0.99807f,0f,0f,-1f,0f});
  }
}
protected class MFInt32367 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f368 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10508f,0.22578f,0.1f,-0.10508f,0.23778f,0.1f,-0.10508f,0.23778f,0f,-0.10508f,0.22578f,0f});
  }
}
protected class MFVec3f369 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32370 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f371 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10508f,0.23778f,0.1f,0.00892f,0.23778f,0.1f,0.00892f,0.23778f,0f,-0.10508f,0.23778f,0f});
  }
}
protected class MFVec3f372 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32373 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1});
  }
}
protected class MFVec3f374 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.00892f,0.23778f,0.1f,0.01497f,0.23758f,0.1f,0.02101f,0.23701f,0.1f,0.03292f,0.23478f,0.1f,0.03292f,0.23478f,0f,0.02101f,0.23701f,0f,0.01497f,0.23758f,0f,0.00892f,0.23778f,0f});
  }
}
protected class MFVec3f375 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06358f,0.99798f,0f,0.12495f,0.99216f,0f,0.24253f,0.97014f,0f,0.24253f,0.97014f,0f,0.12495f,0.99216f,0f,0.06358f,0.99798f,0f,0f,1f,0f});
  }
}
protected class MFInt32376 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f377 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.03292f,0.23478f,0.1f,0.04516f,0.23093f,0.1f,0.05692f,0.22578f,0.1f,0.05692f,0.22578f,0f,0.04516f,0.23093f,0f,0.03292f,0.23478f,0f});
  }
}
protected class MFVec3f378 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,0.97014f,0f,0.35319f,0.93555f,0f,0.44721f,0.89443f,0f,0.44721f,0.89443f,0f,0.35319f,0.93555f,0f,0.24254f,0.97014f,0f});
  }
}
protected class MFInt32379 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f380 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05692f,0.22578f,0.1f,0.06487f,0.21714f,0.1f,0.07192f,0.20778f,0.1f,0.07192f,0.20778f,0f,0.06487f,0.21714f,0f,0.05692f,0.22578f,0f});
  }
}
protected class MFVec3f381 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.76566f,0.64324f,0f,0.83205f,0.5547f,0f,0.83205f,0.5547f,0f,0.76566f,0.64324f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32382 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f383 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.07192f,0.20778f,0.1f,0.07394f,0.20483f,0.1f,0.07573f,0.20169f,0.1f,0.07727f,0.1984f,0.1f,0.07855f,0.19499f,0.1f,0.07957f,0.19149f,0.1f,0.08031f,0.18793f,0.1f,0.08077f,0.18435f,0.1f,0.08092f,0.18078f,0.1f,0.08092f,0.18078f,0f,0.08077f,0.18435f,0f,0.08031f,0.18793f,0f,0.07957f,0.19149f,0f,0.07855f,0.19499f,0f,0.07727f,0.1984f,0f,0.07573f,0.20169f,0f,0.07394f,0.20483f,0f,0.07192f,0.20778f,0f});
  }
}
protected class MFVec3f384 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.8f,0.6f,0f,0.84797f,0.53004f,0f,0.88811f,0.45963f,0f,0.92143f,0.38853f,0f,0.94868f,0.31623f,0f,0.97027f,0.24203f,0f,0.98627f,0.16516f,0f,0.9964f,0.08475f,0f,1f,0f,0f,1f,0f,0f,0.9964f,0.08475f,0f,0.98627f,0.16516f,0f,0.97027f,0.24203f,0f,0.94868f,0.31623f,0f,0.92143f,0.38853f,0f,0.88811f,0.45963f,0f,0.84797f,0.53004f,0f,0.8f,0.6f,0f});
  }
}
protected class MFInt32385 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f386 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.08092f,0.18078f,0.1f,0.08081f,0.17768f,0.1f,0.0805f,0.17459f,0.1f,0.0793f,0.16845f,0.1f,0.07741f,0.16248f,0.1f,0.07492f,0.15678f,0.1f,0.07492f,0.15678f,0f,0.07741f,0.16248f,0f,0.0793f,0.16845f,0f,0.0805f,0.17459f,0f,0.08081f,0.17768f,0f,0.08092f,0.18078f,0f});
  }
}
protected class MFVec3f387 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99768f,-0.06804f,0f,0.99125f,-0.13201f,0f,0.96859f,-0.24866f,0f,0.93577f,-0.35262f,0f,0.89443f,-0.44721f,0f,0.89443f,-0.44721f,0f,0.93577f,-0.35262f,0f,0.96859f,-0.24866f,0f,0.99125f,-0.13201f,0f,0.99768f,-0.06804f,0f,1f,0f,0f});
  }
}
protected class MFInt32388 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f389 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.07492f,0.15678f,0.1f,0.06929f,0.14898f,0.1f,0.06292f,0.14178f,0.1f,0.06292f,0.14178f,0f,0.06929f,0.14898f,0f,0.07492f,0.15678f,0f});
  }
}
protected class MFVec3f390 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.83205f,-0.5547f,0f,0.78456f,-0.62005f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.78456f,-0.62005f,0f,0.83205f,-0.5547f,0f});
  }
}
protected class MFInt32391 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f392 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06292f,0.14178f,0.1f,0.0607f,0.13971f,0.1f,0.05833f,0.13777f,0.1f,0.05583f,0.13599f,0.1f,0.05322f,0.13437f,0.1f,0.0505f,0.13293f,0.1f,0.0477f,0.13168f,0.1f,0.04483f,0.13062f,0.1f,0.04192f,0.12978f,0.1f,0.04192f,0.12978f,0f,0.04483f,0.13062f,0f,0.0477f,0.13168f,0f,0.0505f,0.13293f,0f,0.05322f,0.13437f,0f,0.05583f,0.13599f,0f,0.05833f,0.13777f,0f,0.0607f,0.13971f,0f,0.06292f,0.14178f,0f});
  }
}
protected class MFVec3f393 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,-0.70711f,0f,0.65768f,-0.7533f,0f,0.60649f,-0.79509f,0f,0.5533f,-0.83298f,0f,0.49776f,-0.86731f,0f,0.43945f,-0.89827f,0f,0.37783f,-0.92587f,0f,0.31238f,-0.94996f,0f,0.24253f,-0.97014f,0f,0.24253f,-0.97014f,0f,0.31238f,-0.94996f,0f,0.37783f,-0.92587f,0f,0.43945f,-0.89827f,0f,0.49776f,-0.86731f,0f,0.5533f,-0.83298f,0f,0.60649f,-0.79509f,0f,0.65768f,-0.7533f,0f,0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32394 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f395 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04192f,0.12978f,0.1f,0.037f,0.12685f,0.1f,0.03181f,0.12439f,0.1f,0.02643f,0.12237f,0.1f,0.02092f,0.12078f,0.1f,0.02092f,0.12078f,0f,0.02643f,0.12237f,0f,0.03181f,0.12439f,0f,0.037f,0.12685f,0f,0.04192f,0.12978f,0f});
  }
}
protected class MFVec3f396 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5547f,-0.83205f,0f,0.46933f,-0.88303f,0f,0.3887f,-0.92136f,0f,0.31323f,-0.94968f,0f,0.24254f,-0.97014f,0f,0.24254f,-0.97014f,0f,0.31323f,-0.94968f,0f,0.3887f,-0.92136f,0f,0.46933f,-0.88303f,0f,0.5547f,-0.83205f,0f});
  }
}
protected class MFInt32397 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f398 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.02092f,0.12078f,0.1f,0.03292f,0.11778f,0.1f,0.04492f,0.11478f,0.1f,0.04492f,0.11478f,0f,0.03292f,0.11778f,0f,0.02092f,0.12078f,0f});
  }
}
protected class MFVec3f399 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f});
  }
}
protected class MFInt32400 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f401 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04492f,0.11478f,0.1f,0.05724f,0.10939f,0.1f,0.0632f,0.10628f,0.1f,0.06892f,0.10278f,0.1f,0.06892f,0.10278f,0f,0.0632f,0.10628f,0f,0.05724f,0.10939f,0f,0.04492f,0.11478f,0f});
  }
}
protected class MFVec3f402 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37139f,0.92848f,0f,0.43805f,0.89895f,0f,0.49065f,0.87136f,0f,0.5547f,0.83205f,0f,0.5547f,0.83205f,0f,0.49065f,0.87136f,0f,0.43805f,0.89895f,0f,0.37139f,0.92848f,0f});
  }
}
protected class MFInt32403 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {128,0,210,-1,211,128,210,-1,211,127,128,-1,211,126,127,-1,211,212,126,-1,126,212,125,-1,125,212,124,-1,124,212,123,-1,123,212,122,-1,122,212,213,-1,121,213,120,-1,121,122,213,-1,2,208,1,-1,2,3,208,-1,208,3,207,-1,207,3,4,-1,206,4,5,-1,205,5,6,-1,204,6,203,-1,204,205,6,-1,207,4,206,-1,206,5,205,-1,6,7,203,-1,203,7,202,-1,202,7,201,-1,201,7,200,-1,200,7,199,-1,199,7,198,-1,198,7,197,-1,197,7,196,-1,196,7,195,-1,195,7,194,-1,194,7,193,-1,193,7,8,-1,9,193,8,-1,9,133,193,-1,9,10,133,-1,133,10,11,-1,132,11,131,-1,132,133,11,-1,12,162,11,-1,12,161,162,-1,12,13,161,-1,161,13,14,-1,160,14,15,-1,16,160,15,-1,16,159,160,-1,16,17,159,-1,159,17,18,-1,19,159,18,-1,19,158,159,-1,19,20,158,-1,158,20,21,-1,157,21,22,-1,156,22,23,-1,24,156,23,-1,24,155,156,-1,24,25,155,-1,155,25,26,-1,27,155,26,-1,27,28,155,-1,155,28,29,-1,154,29,30,-1,31,154,30,-1,31,32,154,-1,154,32,33,-1,34,154,33,-1,34,153,154,-1,34,35,153,-1,153,35,36,-1,152,36,37,-1,151,37,38,-1,150,38,39,-1,149,39,148,-1,149,150,39,-1,161,14,160,-1,158,21,157,-1,157,22,156,-1,155,29,154,-1,153,36,152,-1,152,37,151,-1,151,38,150,-1,148,39,147,-1,147,39,40,-1,146,40,145,-1,146,147,40,-1,41,143,40,-1,41,142,143,-1,41,141,142,-1,41,42,141,-1,141,42,140,-1,140,42,43,-1,139,43,138,-1,139,140,43,-1,44,136,43,-1,44,52,136,-1,44,51,52,-1,44,50,51,-1,44,49,50,-1,44,48,49,-1,44,47,48,-1,44,46,47,-1,44,45,46,-1,53,134,52,-1,53,58,134,-1,53,54,58,-1,58,54,57,-1,57,54,56,-1,56,54,55,-1,58,59,134,-1,134,59,60,-1,61,134,60,-1,61,62,134,-1,134,62,63,-1,64,134,63,-1,64,65,134,-1,134,65,67,-1,68,134,67,-1,68,69,134,-1,134,69,70,-1,71,134,70,-1,71,72,134,-1,134,72,73,-1,74,134,73,-1,74,133,134,-1,74,191,133,-1,74,75,191,-1,191,75,190,-1,190,75,189,-1,189,75,76,-1,188,76,77,-1,78,188,77,-1,78,187,188,-1,78,79,187,-1,187,79,186,-1,186,79,80,-1,81,186,80,-1,81,185,186,-1,81,82,185,-1,185,82,83,-1,184,83,84,-1,183,84,85,-1,182,85,181,-1,182,183,85,-1,65,66,67,-1,189,76,188,-1,185,83,184,-1,184,84,183,-1,85,86,181,-1,181,86,180,-1,180,86,179,-1,179,86,87,-1,88,179,87,-1,88,178,179,-1,88,177,178,-1,88,176,177,-1,88,89,176,-1,176,89,90,-1,91,176,90,-1,91,101,176,-1,91,92,101,-1,101,92,93,-1,94,101,93,-1,94,95,101,-1,101,95,96,-1,97,101,96,-1,97,98,101,-1,101,98,99,-1,100,101,99,-1,102,103,101,-1,101,103,104,-1,176,104,175,-1,176,101,104,-1,105,168,104,-1,105,221,168,-1,105,106,221,-1,221,106,220,-1,220,106,219,-1,219,106,107,-1,218,107,108,-1,217,108,109,-1,216,109,110,-1,111,216,110,-1,111,215,216,-1,111,112,215,-1,215,112,113,-1,214,113,114,-1,115,214,114,-1,115,116,214,-1,214,116,117,-1,118,214,117,-1,118,213,214,-1,118,119,213,-1,213,119,120,-1,219,107,218,-1,218,108,217,-1,217,109,216,-1,215,113,214,-1,167,129,11,-1,166,11,165,-1,166,167,11,-1,129,130,11,-1,11,130,131,-1,134,135,52,-1,52,135,136,-1,136,137,43,-1,43,137,138,-1,143,144,40,-1,40,144,145,-1,162,163,11,-1});
  }
}
protected class MFInt32404 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,163,164,-1,165,11,164,-1,168,169,104,-1,104,169,170,-1,171,104,170,-1,171,172,104,-1,104,172,173,-1,174,104,173,-1,174,175,104,-1,191,192,133,-1,133,192,193,-1,208,209,1,-1,1,209,210,-1,0,1,210,-1});
  }
}
protected class MFVec3f405 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.08692f,0.08478f,0.1f,0.08308f,0.08985f,0.1f,0.0787f,0.09452f,0.1f,0.07393f,0.09881f,0.1f,0.06892f,0.10278f,0.1f,0.0632f,0.10628f,0.1f,0.05724f,0.10939f,0.1f,0.04492f,0.11478f,0.1f,0.03292f,0.11778f,0.1f,0.02092f,0.12078f,0.1f,0.02643f,0.12237f,0.1f,0.03181f,0.12439f,0.1f,0.037f,0.12685f,0.1f,0.04192f,0.12978f,0.1f,0.04483f,0.13062f,0.1f,0.0477f,0.13168f,0.1f,0.0505f,0.13293f,0.1f,0.05322f,0.13437f,0.1f,0.05583f,0.13599f,0.1f,0.05833f,0.13777f,0.1f,0.0607f,0.13971f,0.1f,0.06292f,0.14178f,0.1f,0.06929f,0.14898f,0.1f,0.07492f,0.15678f,0.1f,0.07741f,0.16248f,0.1f,0.0793f,0.16845f,0.1f,0.0805f,0.17459f,0.1f,0.08081f,0.17768f,0.1f,0.08092f,0.18078f,0.1f,0.08077f,0.18435f,0.1f,0.08031f,0.18793f,0.1f,0.07957f,0.19149f,0.1f,0.07855f,0.19499f,0.1f,0.07727f,0.1984f,0.1f,0.07573f,0.20169f,0.1f,0.07394f,0.20483f,0.1f,0.07192f,0.20778f,0.1f,0.06487f,0.21714f,0.1f,0.05692f,0.22578f,0.1f,0.04516f,0.23093f,0.1f,0.03292f,0.23478f,0.1f,0.02101f,0.23701f,0.1f,0.01497f,0.23758f,0.1f,0.00892f,0.23778f,0.1f,-0.10508f,0.23778f,0.1f,-0.10508f,0.22578f,0.1f,-0.10418f,0.22501f,0.1f,-0.10318f,0.22437f,0.1f,-0.10208f,0.22385f,0.1f,-0.10093f,0.22344f,0.1f,-0.09973f,0.22314f,0.1f,-0.09851f,0.22293f,0.1f,-0.09728f,0.22281f,0.1f,-0.09608f,0.22278f,0.1f,-0.09323f,0.22153f,0.1f,-0.09024f,0.22059f,0.1f,-0.08718f,0.21999f,0.1f,-0.08563f,0.21983f,0.1f,-0.08408f,0.21978f,0.1f,-0.08268f,0.219f,0.1f,-0.08134f,0.2181f,0.1f,-0.08007f,0.2171f,0.1f,-0.07887f,0.21599f,0.1f,-0.07776f,0.21479f,0.1f,-0.07675f,0.21352f,0.1f,-0.07586f,0.21218f,0.1f,-0.07508f,0.21078f,0.1f,-0.07431f,0.20988f,0.1f,-0.07367f,0.20887f,0.1f,-0.07315f,0.20778f,0.1f,-0.07274f,0.20662f,0.1f,-0.07244f,0.20543f,0.1f,-0.07223f,0.2042f,0.1f,-0.07212f,0.20298f,0.1f,-0.07208f,0.20178f,0.1f,-0.07208f,0.02178f,0.1f,-0.07214f,0.01857f,0.1f,-0.07226f,0.01694f,0.1f,-0.07249f,0.01532f,0.1f,-0.07285f,0.01377f,0.1f,-0.07309f,0.01302f,0.1f,-0.07338f,0.0123f,0.1f,-0.07372f,0.01161f,0.1f,-0.07411f,0.01096f,0.1f,-0.07457f,0.01035f,0.1f,-0.07508f,0.00978f,0.1f,-0.07711f,0.00799f,0.1f,-0.07933f,0.00643f,0.1f,-0.08408f,0.00378f,0.1f,-0.08465f,0.00326f,0.1f,-0.08526f,0.00281f,0.1f,-0.08592f,0.00242f,0.1f,-0.08661f,0.00208f,0.1f,-0.08732f,0.00179f,0.1f,-0.08807f,0.00155f,0.1f,-0.08963f,0.00118f,0.1f,-0.09124f,0.00096f,0.1f,-0.09288f,0.00084f,0.1f,-0.09608f,0.00078f,0.1f,-0.10058f,0.00078f,0.1f,-0.10508f,0.00078f,0.1f,-0.10508f,-0.01122f,0.1f,0.01192f,-0.01122f,0.1f,0.02699f,-0.01046f,0.1f,0.04192f,-0.00822f,0.1f,0.0491f,-0.00636f,0.1f,0.05609f,-0.00371f,0.1f,0.06274f,-0.00032f,0.1f,0.06892f,0.00378f,0.1f,0.07426f,0.00823f,0.1f,0.07914f,0.01326f,0.1f,0.08341f,0.0188f,0.1f,0.08527f,0.02173f,0.1f,0.08692f,0.02478f,0.1f,0.08911f,0.02804f,0.1f,0.09097f,0.03152f,0.1f,0.09252f,0.03519f,0.1f,0.09377f,0.03899f,0.1f,0.09472f,0.0429f,0.1f,0.09539f,0.04686f,0.1f,0.09579f,0.05083f,0.1f,0.09592f,0.05478f,0.1f,0.09579f,0.05872f,0.1f,0.09539f,0.06269f,0.1f,0.09472f,0.06666f,0.1f,0.09377f,0.07056f,0.1f,0.09252f,0.07437f,0.1f,0.09097f,0.07803f,0.1f,0.08911f,0.08152f,0.1f,0.00892f,0.12978f,0.1f,0.00308f,0.12823f,0.1f,-0.00292f,0.12732f,0.1f,-0.01508f,0.12678f,0.1f,-0.03608f,0.12678f,0.1f,-0.03608f,0.22278f,0.1f,-0.02408f,0.22278f,0.1f,-0.00908f,0.22278f,0.1f,-0.00427f,0.22263f,0.1f,0.00062f,0.22216f,0.1f,0.00551f,0.22134f,0.1f,0.01031f,0.22013f,0.1f,0.01493f,0.2185f,0.1f,0.0193f,0.21643f,0.1f,0.02136f,0.21521f,0.1f,0.02332f,0.21386f,0.1f,0.02518f,0.21239f,0.1f,0.02692f,0.21078f,0.1f,0.02842f,0.20917f,0.1f,0.02981f,0.20746f,0.1f,0.03229f,0.20378f,0.1f,0.03435f,0.19979f,0.1f,0.03602f,0.19556f,0.1f,0.03731f,0.19118f,0.1f,0.03821f,0.18671f,0.1f,0.03874f,0.18222f,0.1f,0.03892f,0.17778f,0.1f,0.03877f,0.17246f,0.1f,0.03826f,0.16714f,0.1f,0.03733f,0.16189f,0.1f,0.03592f,0.15678f,0.1f,0.03414f,0.15206f,0.1f,0.03202f,0.14748f,0.1f,0.02692f,0.13878f,0.1f,0.02505f,0.1371f,0.1f,0.02302f,0.1356f,0.1f,0.02086f,0.13427f,0.1f,0.01858f,0.13311f,0.1f,0.01381f,0.1312f,0.1f,0.03892f,0.01578f,0.1f,0.03673f,0.01414f,0.1f,0.03445f,0.01265f,0.1f,0.02961f,0.01007f,0.1f,0.02447f,0.00798f,0.1f,0.01912f,0.00637f,0.1f,0.01361f,0.00518f,0.1f,0.00803f,0.00437f,0.1f,-0.00308f,0.00378f,0.1f,-0.01524f,0.00432f,0.1f,-0.02124f,0.00523f,0.1f,-0.02708f,0.00678f,0.1f,-0.0281f,0.00752f,0.1f,-0.02907f,0.00834f,0.1f,-0.02998f,0.00925f,0.1f,-0.03084f,0.01022f,0.1f,-0.03164f,0.01125f,0.1f,-0.03238f,0.01234f,0.1f,-0.03367f,0.01466f,0.1f,-0.0347f,0.01712f,0.1f,-0.03546f,0.01966f,0.1f,-0.03592f,0.02223f,0.1f,-0.03608f,0.02478f,0.1f,-0.03608f,0.11178f,0.1f,-0.02708f,0.11178f,0.1f,-0.00608f,0.11178f,0.1f,-0.00044f,0.11156f,0.1f,0.00528f,0.11091f,0.1f,0.01097f,0.1098f,0.1f,0.01655f,0.10822f,0.1f,0.02193f,0.10614f,0.1f,0.02701f,0.10356f,0.1f,0.03171f,0.10044f,0.1f,0.03388f,0.09868f,0.1f,0.03592f,0.09678f,0.1f,0.03965f,0.09331f,0.1f,0.04308f,0.08942f,0.1f,0.04614f,0.08515f,0.1f,0.04878f,0.08059f,0.1f,0.05094f,0.0758f,0.1f,0.05256f,0.07085f,0.1f,0.05314f,0.06835f,0.1f,0.05357f,0.06582f,0.1f,0.05383f,0.0633f,0.1f,0.05392f,0.06078f,0.1f,0.05373f,0.05476f,0.1f,0.05315f,0.04865f,0.1f,0.05212f,0.04254f,0.1f,0.05061f,0.03654f,0.1f,0.04858f,0.03076f,0.1f,0.04598f,0.0253f,0.1f,0.04446f,0.02273f,0.1f,0.04277f,0.02027f,0.1f,0.04093f,0.01795f,0.1f});
  }
}
protected class MFVec3f406 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32407 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {102,0,105,-1,101,105,100,-1,101,102,105,-1,2,104,1,-1,2,3,104,-1,104,3,4,-1,138,4,5,-1,137,5,6,-1,136,6,7,-1,135,7,8,-1,134,8,9,-1,133,9,10,-1,11,133,10,-1,11,132,133,-1,11,12,132,-1,132,12,131,-1,131,12,13,-1,130,13,14,-1,129,14,15,-1,128,15,16,-1,127,16,17,-1,18,127,17,-1,18,19,127,-1,127,19,1169,-1,500,1169,1170,-1,1171,500,1170,-1,1171,850,500,-1,500,850,499,-1,499,850,498,-1,498,850,497,-1,497,850,496,-1,496,850,851,-1,852,496,851,-1,852,853,496,-1,496,853,854,-1,832,854,831,-1,832,496,854,-1,832,495,496,-1,832,494,495,-1,832,493,494,-1,832,492,493,-1,832,491,492,-1,832,490,491,-1,832,489,490,-1,832,833,489,-1,489,833,488,-1,488,833,834,-1,835,488,834,-1,835,487,488,-1,835,486,487,-1,835,836,486,-1,486,836,485,-1,485,836,484,-1,484,836,483,-1,483,836,482,-1,482,836,481,-1,481,836,480,-1,480,836,479,-1,479,836,478,-1,478,836,477,-1,477,836,476,-1,476,836,475,-1,475,836,474,-1,474,836,837,-1,473,837,472,-1,473,474,837,-1,104,4,138,-1,139,104,138,-1,139,140,104,-1,104,140,141,-1,142,104,141,-1,142,143,104,-1,104,143,144,-1,145,104,144,-1,145,146,104,-1,104,146,147,-1,148,104,147,-1,148,149,104,-1,104,149,150,-1,151,104,150,-1,151,152,104,-1,104,152,153,-1,154,104,153,-1,154,155,104,-1,104,155,267,-1,268,104,267,-1,268,103,104,-1,268,269,103,-1,103,269,270,-1,597,270,596,-1,597,103,270,-1,597,637,103,-1,597,598,637,-1,637,598,599,-1,636,599,600,-1,601,636,600,-1,601,602,636,-1,636,602,603,-1,604,636,603,-1,604,635,636,-1,604,605,635,-1,635,605,606,-1,607,635,606,-1,607,608,635,-1,635,608,782,-1,783,635,782,-1,783,784,635,-1,635,784,785,-1,786,635,785,-1,786,787,635,-1,635,787,788,-1,789,635,788,-1,789,790,635,-1,635,790,791,-1,792,635,791,-1,138,5,137,-1,137,6,136,-1,136,7,135,-1,135,8,134,-1,134,9,133,-1,131,13,130,-1,130,14,129,-1,129,15,128,-1,128,16,127,-1,20,1163,19,-1,20,1162,1163,-1,20,1161,1162,-1,20,1160,1161,-1,20,1159,1160,-1,20,48,1159,-1,20,47,48,-1,20,46,47,-1,20,45,46,-1,20,44,45,-1,20,40,44,-1,20,29,40,-1,20,21,29,-1,29,21,22,-1,23,29,22,-1,23,24,29,-1,29,24,25,-1,26,29,25,-1,26,28,29,-1,26,27,28,-1,30,31,29,-1,29,31,32,-1,33,29,32,-1,33,34,29,-1,29,34,35,-1,36,29,35,-1,36,37,29,-1,29,37,38,-1,39,29,38,-1,39,40,29,-1,41,42,40,-1,40,42,43,-1,44,40,43,-1,49,1149,48,-1,49,1148,1149,-1,49,1147,1148,-1,49,1146,1147,-1,49,1145,1146,-1,49,1128,1145,-1,49,1127,1128,-1,49,1126,1127,-1,49,1125,1126,-1,49,1124,1125,-1,49,1123,1124,-1,49,1122,1123,-1,49,1121,1122,-1,49,1120,1121,-1,49,1119,1120,-1,49,73,1119,-1,49,72,73,-1,49,50,72,-1,72,50,57,-1,71,57,58,-1,59,71,58,-1,59,60,71,-1,71,60,61,-1,62,71,61,-1,62,63,71,-1,71,63,64,-1,65,71,64,-1,65,70,71,-1,65,66,70,-1,70,66,69,-1,69,66,68,-1,68,66,67,-1,50,51,57,-1,57,51,52,-1,53,57,52,-1,53,54,57,-1,57,54,55,-1,56,57,55,-1,72,57,71,-1,73,74,1119,-1,1119,74,1118,-1,1118,74,75,-1,1117,75,76,-1,1116,76,77,-1,1115,77,78,-1,1114,78,1113,-1,1114,1115,78,-1,1118,75,1117,-1,1117,76,1116,-1,1116,77,1115,-1,79,1111,78,-1,79,1110,1111,-1,79,1109,1110,-1});
  }
}
protected class MFInt32408 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {79,1107,1109,-1,79,1106,1107,-1,79,1105,1106,-1,79,1104,1105,-1,79,1103,1104,-1,79,1102,1103,-1,79,1101,1102,-1,79,1261,1101,-1,79,106,1261,-1,79,80,106,-1,106,80,105,-1,105,80,81,-1,82,105,81,-1,82,83,105,-1,105,83,85,-1,86,105,85,-1,86,87,105,-1,105,87,88,-1,89,105,88,-1,89,90,105,-1,105,90,91,-1,92,105,91,-1,92,93,105,-1,105,93,94,-1,95,105,94,-1,95,96,105,-1,105,96,97,-1,98,105,97,-1,98,99,105,-1,105,99,100,-1,83,84,85,-1,104,105,1,-1,1,105,0,-1,103,1353,106,-1,103,1333,1353,-1,103,1332,1333,-1,103,254,1332,-1,103,253,254,-1,103,252,253,-1,103,251,252,-1,103,250,251,-1,103,249,250,-1,103,248,249,-1,103,247,248,-1,103,246,247,-1,103,245,246,-1,103,244,245,-1,103,243,244,-1,103,242,243,-1,103,241,242,-1,103,240,241,-1,103,637,240,-1,240,637,638,-1,639,240,638,-1,639,640,240,-1,240,640,641,-1,642,240,641,-1,642,643,240,-1,240,643,645,-1,646,240,645,-1,646,649,240,-1,646,647,649,-1,649,647,648,-1,108,560,107,-1,108,559,560,-1,108,558,559,-1,108,109,558,-1,558,109,557,-1,557,109,556,-1,556,109,110,-1,555,110,554,-1,555,556,110,-1,110,111,554,-1,554,111,553,-1,553,111,552,-1,552,111,112,-1,551,112,550,-1,551,552,112,-1,550,112,185,-1,186,550,185,-1,186,549,550,-1,186,548,549,-1,186,547,548,-1,186,546,547,-1,186,545,546,-1,186,544,545,-1,186,543,544,-1,186,542,543,-1,186,541,542,-1,186,540,541,-1,186,539,540,-1,186,538,539,-1,186,537,538,-1,186,536,537,-1,186,535,536,-1,186,534,535,-1,186,533,534,-1,186,532,533,-1,186,187,532,-1,532,187,188,-1,189,532,188,-1,189,190,532,-1,532,190,530,-1,531,532,530,-1,112,113,185,-1,185,113,114,-1,184,114,183,-1,184,185,114,-1,183,114,182,-1,182,114,115,-1,181,115,180,-1,181,182,115,-1,116,176,115,-1,116,175,176,-1,116,174,175,-1,116,173,174,-1,116,172,173,-1,116,171,172,-1,116,170,171,-1,116,169,170,-1,116,117,169,-1,169,117,168,-1,168,117,167,-1,167,117,166,-1,166,117,165,-1,165,117,164,-1,164,117,163,-1,163,117,162,-1,162,117,161,-1,161,117,160,-1,160,117,159,-1,159,117,118,-1,119,159,118,-1,119,120,159,-1,159,120,509,-1,510,159,509,-1,510,511,159,-1,159,511,512,-1,212,512,513,-1,514,212,513,-1,514,515,212,-1,212,515,516,-1,517,212,516,-1,517,211,212,-1,517,518,211,-1,211,518,210,-1,210,518,519,-1,520,210,519,-1,520,209,210,-1,520,208,209,-1,520,521,208,-1,208,521,207,-1,207,521,522,-1,206,522,205,-1,206,207,522,-1,120,121,509,-1,509,121,508,-1,508,121,507,-1,507,121,122,-1,506,122,505,-1,506,507,122,-1,122,123,505,-1,505,123,504,-1,504,123,502,-1,503,504,502,-1,502,123,501,-1,501,123,124,-1,500,124,125,-1,126,500,125,-1,126,127,500,-1,500,127,1169,-1,501,124,500,-1,155,156,267,-1,267,156,157,-1,158,267,157,-1,158,107,267,-1,267,107,566,-1,566,107,565,-1,565,107,564,-1,564,107,563,-1,563,107,562,-1,562,107,561,-1,561,107,560,-1,176,177,115,-1,115,177,178,-1,179,115,178,-1,179,180,115,-1,530,190,529,-1,529,190,191,-1,528,191,192,-1,193,528,192,-1,193,194,528,-1,528,194,527,-1,527,194,195,-1,196,527,195,-1,196,526,527,-1,196,197,526,-1,526,197,198,-1,525,198,199,-1,200,525,199,-1,200,524,525,-1,200,201,524,-1,524,201,202,-1,523,202,203,-1,204,523,203,-1,204,205,523,-1,523,205,522,-1,529,191,528,-1,526,198,525,-1,524,202,523,-1});
  }
}
protected class MFInt32409 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {212,159,512,-1,214,657,213,-1,214,215,657,-1,657,215,216,-1,217,657,216,-1,217,218,657,-1,657,218,219,-1,220,657,219,-1,220,655,657,-1,220,653,655,-1,220,652,653,-1,220,221,652,-1,652,221,222,-1,223,652,222,-1,223,224,652,-1,652,224,225,-1,226,652,225,-1,226,227,652,-1,652,227,228,-1,229,652,228,-1,229,230,652,-1,652,230,231,-1,232,652,231,-1,232,233,652,-1,652,233,234,-1,235,652,234,-1,235,236,652,-1,652,236,237,-1,238,652,237,-1,238,239,652,-1,652,239,240,-1,651,240,650,-1,651,652,240,-1,254,255,1332,-1,1332,255,256,-1,257,1332,256,-1,257,258,1332,-1,1332,258,259,-1,260,1332,259,-1,260,261,1332,-1,1332,261,262,-1,263,1332,262,-1,263,264,1332,-1,1332,264,265,-1,266,1332,265,-1,266,213,1332,-1,1332,213,731,-1,732,1332,731,-1,732,734,1332,-1,732,733,734,-1,271,272,270,-1,270,272,596,-1,596,272,273,-1,274,596,273,-1,274,275,596,-1,596,275,276,-1,277,596,276,-1,277,278,596,-1,596,278,279,-1,280,596,279,-1,280,281,596,-1,596,281,282,-1,283,596,282,-1,283,284,596,-1,596,284,285,-1,286,596,285,-1,286,595,596,-1,286,795,595,-1,286,794,795,-1,286,287,794,-1,794,287,288,-1,289,794,288,-1,289,290,794,-1,794,290,291,-1,292,794,291,-1,292,793,794,-1,292,293,793,-1,793,293,294,-1,295,793,294,-1,295,296,793,-1,793,296,297,-1,298,793,297,-1,298,299,793,-1,793,299,300,-1,369,300,301,-1,302,369,301,-1,302,303,369,-1,369,303,304,-1,305,369,304,-1,305,306,369,-1,369,306,307,-1,308,369,307,-1,308,310,369,-1,308,309,310,-1,793,300,369,-1,370,793,369,-1,370,371,793,-1,793,371,392,-1,837,392,393,-1,472,393,471,-1,472,837,393,-1,310,311,369,-1,369,311,312,-1,313,369,312,-1,313,368,369,-1,313,314,368,-1,368,314,367,-1,367,314,315,-1,366,315,365,-1,366,367,315,-1,365,315,364,-1,364,315,316,-1,363,316,362,-1,363,364,316,-1,316,317,362,-1,362,317,318,-1,361,318,360,-1,361,362,318,-1,360,318,359,-1,359,318,319,-1,358,319,357,-1,358,359,319,-1,320,348,319,-1,320,334,348,-1,320,333,334,-1,320,321,333,-1,333,321,322,-1,332,322,323,-1,328,323,327,-1,328,332,323,-1,328,329,332,-1,332,329,331,-1,331,329,330,-1,333,322,332,-1,327,323,326,-1,326,323,324,-1,325,326,324,-1,334,335,348,-1,348,335,347,-1,347,335,346,-1,346,335,336,-1,337,346,336,-1,337,338,346,-1,346,338,339,-1,340,346,339,-1,340,345,346,-1,340,344,345,-1,340,341,344,-1,344,341,343,-1,343,341,342,-1,349,350,348,-1,348,350,351,-1,352,348,351,-1,352,353,348,-1,348,353,354,-1,355,348,354,-1,355,319,348,-1,355,356,319,-1,319,356,357,-1,371,372,392,-1,392,372,373,-1,374,392,373,-1,374,375,392,-1,392,375,376,-1,384,376,383,-1,384,392,376,-1,384,390,392,-1,384,389,390,-1,384,388,389,-1,384,387,388,-1,384,386,387,-1,384,385,386,-1,377,378,376,-1,376,378,379,-1,380,376,379,-1,380,381,376,-1,376,381,382,-1,383,376,382,-1,390,391,392,-1,793,392,837,-1,848,837,838,-1,839,848,838,-1,839,840,848,-1,848,840,847,-1,847,840,841,-1,842,847,841,-1,842,843,847,-1,847,843,844,-1,845,847,844,-1,845,846,847,-1,394,464,393,-1,394,395,464,-1,464,395,396,-1,397,464,396,-1,397,398,464,-1,464,398,399,-1,400,464,399,-1,400,401,464,-1,464,401,402,-1,403,464,402,-1,403,404,464,-1,464,404,405,-1,463,405,462,-1,463,464,405,-1,405,406,462,-1,462,406,407,-1,461,407,408,-1,460,408,409,-1,459,409,410,-1,458,410,457,-1});
  }
}
protected class MFInt32410 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {458,459,410,-1,462,407,461,-1,461,408,460,-1,460,409,459,-1,410,411,457,-1,457,411,456,-1,456,411,455,-1,455,411,412,-1,454,412,413,-1,453,413,414,-1,452,414,415,-1,451,415,416,-1,450,416,417,-1,449,417,418,-1,448,418,419,-1,441,419,420,-1,421,441,420,-1,421,422,441,-1,441,422,423,-1,424,441,423,-1,424,425,441,-1,441,425,426,-1,427,441,426,-1,427,440,441,-1,427,428,440,-1,440,428,439,-1,439,428,429,-1,430,439,429,-1,430,431,439,-1,439,431,432,-1,438,432,437,-1,438,439,432,-1,455,412,454,-1,454,413,453,-1,453,414,452,-1,452,415,451,-1,451,416,450,-1,450,417,449,-1,449,418,448,-1,448,419,441,-1,442,448,441,-1,442,443,448,-1,448,443,447,-1,447,443,444,-1,445,447,444,-1,445,446,447,-1,433,434,432,-1,432,434,435,-1,436,432,435,-1,436,437,432,-1,464,465,393,-1,393,465,466,-1,467,393,466,-1,467,468,393,-1,393,468,469,-1,470,393,469,-1,470,471,393,-1,634,567,821,-1,633,821,632,-1,633,634,821,-1,569,820,568,-1,569,570,820,-1,820,570,571,-1,572,820,571,-1,572,573,820,-1,820,573,819,-1,819,573,574,-1,575,819,574,-1,575,576,819,-1,819,576,818,-1,818,576,577,-1,578,818,577,-1,578,579,818,-1,818,579,580,-1,581,818,580,-1,581,582,818,-1,818,582,796,-1,797,818,796,-1,797,817,818,-1,797,816,817,-1,797,815,816,-1,797,814,815,-1,797,811,814,-1,797,803,811,-1,797,802,803,-1,797,801,802,-1,797,800,801,-1,797,799,800,-1,797,798,799,-1,582,583,796,-1,796,583,584,-1,585,796,584,-1,585,586,796,-1,796,586,587,-1,795,587,588,-1,589,795,588,-1,589,590,795,-1,795,590,591,-1,592,795,591,-1,592,593,795,-1,795,593,594,-1,595,795,594,-1,796,587,795,-1,637,599,636,-1,782,608,781,-1,781,608,609,-1,780,609,779,-1,780,781,609,-1,779,609,778,-1,778,609,610,-1,777,610,776,-1,777,778,610,-1,611,772,610,-1,611,771,772,-1,611,770,771,-1,611,769,770,-1,611,768,769,-1,611,767,768,-1,611,766,767,-1,611,612,766,-1,766,612,765,-1,765,612,764,-1,764,612,763,-1,763,612,613,-1,762,613,761,-1,762,763,613,-1,761,613,760,-1,760,613,614,-1,759,614,758,-1,759,760,614,-1,614,615,758,-1,758,615,757,-1,757,615,756,-1,756,615,616,-1,755,616,617,-1,754,617,753,-1,754,755,617,-1,756,616,755,-1,617,618,753,-1,753,618,752,-1,752,618,751,-1,751,618,750,-1,750,618,749,-1,749,618,619,-1,748,619,620,-1,747,620,621,-1,622,747,621,-1,622,746,747,-1,622,623,746,-1,746,623,745,-1,745,623,744,-1,744,623,624,-1,743,624,625,-1,742,625,854,-1,1332,854,1331,-1,1332,742,854,-1,1332,741,742,-1,1332,740,741,-1,1332,739,740,-1,1332,738,739,-1,1332,737,738,-1,1332,736,737,-1,1332,735,736,-1,1332,734,735,-1,749,619,748,-1,748,620,747,-1,744,624,743,-1,854,625,831,-1,831,625,626,-1,627,831,626,-1,627,628,831,-1,831,628,629,-1,630,831,629,-1,630,821,831,-1,630,631,821,-1,821,631,632,-1,643,644,645,-1,649,650,240,-1,653,654,655,-1,655,656,657,-1,213,657,712,-1,713,213,712,-1,713,714,213,-1,213,714,715,-1,716,213,715,-1,716,717,213,-1,213,717,718,-1,719,213,718,-1,719,720,213,-1,213,720,721,-1,722,213,721,-1,722,723,213,-1,213,723,724,-1,725,213,724,-1,725,726,213,-1,213,726,727,-1,728,213,727,-1,728,729,213,-1,213,729,730,-1,731,213,730,-1,657,658,712,-1,712,658,659,-1,711,659,710,-1,711,712,659,-1,660,701,659,-1,660,700,701,-1,660,699,700,-1,660,661,699,-1,699,661,698,-1,698,661,697,-1});
  }
}
protected class MFInt32411 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {697,661,662,-1,696,662,663,-1,695,663,664,-1,694,664,665,-1,693,665,666,-1,692,666,667,-1,668,692,667,-1,668,669,692,-1,692,669,670,-1,671,692,670,-1,671,672,692,-1,692,672,691,-1,691,672,688,-1,690,688,689,-1,690,691,688,-1,697,662,696,-1,696,663,695,-1,695,664,694,-1,694,665,693,-1,693,666,692,-1,672,673,688,-1,688,673,674,-1,687,674,675,-1,676,687,675,-1,676,686,687,-1,676,677,686,-1,686,677,678,-1,679,686,678,-1,679,680,686,-1,686,680,685,-1,685,680,684,-1,684,680,683,-1,683,680,681,-1,682,683,681,-1,688,674,687,-1,701,702,659,-1,659,702,703,-1,704,659,703,-1,704,705,659,-1,659,705,706,-1,707,659,706,-1,707,708,659,-1,659,708,709,-1,710,659,709,-1,742,743,625,-1,772,773,610,-1,610,773,774,-1,775,610,774,-1,775,776,610,-1,804,805,803,-1,803,805,806,-1,807,803,806,-1,807,808,803,-1,803,808,809,-1,810,803,809,-1,810,811,803,-1,812,813,811,-1,811,813,814,-1,820,821,568,-1,568,821,567,-1,822,829,821,-1,822,828,829,-1,822,827,828,-1,822,826,827,-1,822,823,826,-1,826,823,824,-1,825,826,824,-1,829,830,821,-1,821,830,831,-1,793,837,848,-1,849,793,848,-1,855,1406,854,-1,855,856,1406,-1,1406,856,1405,-1,1405,856,1204,-1,1205,1405,1204,-1,1205,1404,1405,-1,1205,1229,1404,-1,1205,1228,1229,-1,1205,1227,1228,-1,1205,1217,1227,-1,1205,1216,1217,-1,1205,1206,1216,-1,1216,1206,1207,-1,1208,1216,1207,-1,1208,1215,1216,-1,1208,1214,1215,-1,1208,1213,1214,-1,1208,1212,1213,-1,1208,1211,1212,-1,1208,1210,1211,-1,1208,1209,1210,-1,857,1200,856,-1,857,1199,1200,-1,857,858,1199,-1,1199,858,1198,-1,1198,858,859,-1,1197,859,860,-1,861,1197,860,-1,861,1196,1197,-1,861,862,1196,-1,1196,862,1195,-1,1195,862,863,-1,1194,863,1193,-1,1194,1195,863,-1,1198,859,1197,-1,863,864,1193,-1,1193,864,1192,-1,1192,864,1191,-1,1191,864,865,-1,1190,865,866,-1,1189,866,867,-1,1188,867,868,-1,1187,868,869,-1,870,1187,869,-1,870,1186,1187,-1,870,871,1186,-1,1186,871,872,-1,1185,872,873,-1,874,1185,873,-1,874,1184,1185,-1,874,875,1184,-1,1184,875,879,-1,1183,879,880,-1,881,1183,880,-1,881,1182,1183,-1,881,882,1182,-1,1182,882,883,-1,1181,883,884,-1,885,1181,884,-1,885,1180,1181,-1,885,886,1180,-1,1180,886,1179,-1,1179,886,887,-1,1178,887,888,-1,889,1178,888,-1,889,1177,1178,-1,889,991,1177,-1,889,890,991,-1,991,890,891,-1,892,991,891,-1,892,893,991,-1,991,893,989,-1,990,991,989,-1,1191,865,1190,-1,1190,866,1189,-1,1189,867,1188,-1,1188,868,1187,-1,1186,872,1185,-1,879,875,878,-1,878,875,876,-1,877,878,876,-1,1184,879,1183,-1,1182,883,1181,-1,1179,887,1178,-1,894,966,893,-1,894,895,966,-1,966,895,896,-1,897,966,896,-1,897,898,966,-1,966,898,899,-1,900,966,899,-1,900,901,966,-1,966,901,902,-1,904,902,903,-1,904,966,902,-1,904,905,966,-1,966,905,906,-1,907,966,906,-1,907,908,966,-1,966,908,965,-1,965,908,909,-1,910,965,909,-1,910,964,965,-1,910,911,964,-1,964,911,963,-1,963,911,912,-1,962,912,961,-1,962,963,912,-1,912,913,961,-1,961,913,960,-1,960,913,959,-1,959,913,914,-1,915,959,914,-1,915,958,959,-1,915,957,958,-1,915,956,957,-1,915,916,956,-1,956,916,955,-1,955,916,954,-1,954,916,953,-1,953,916,952,-1,952,916,945,-1,951,945,950,-1,951,952,945,-1,916,917,945,-1,945,917,931,-1,932,945,931,-1,932,944,945,-1,932,943,944,-1,932,933,943,-1,943,933,934,-1,935,943,934,-1,935,936,943,-1,943,936,937,-1,942,937,941,-1,942,943,937,-1,931,917,930,-1,930,917,918,-1,919,930,918,-1});
  }
}
protected class MFInt32412 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {919,929,930,-1,919,920,929,-1,929,920,925,-1,926,929,925,-1,926,928,929,-1,926,927,928,-1,921,923,920,-1,921,922,923,-1,923,924,920,-1,920,924,925,-1,937,938,941,-1,941,938,940,-1,940,938,939,-1,946,947,945,-1,945,947,948,-1,949,945,948,-1,949,950,945,-1,966,967,893,-1,893,967,968,-1,969,893,968,-1,969,970,893,-1,893,970,971,-1,972,893,971,-1,972,973,893,-1,893,973,983,-1,989,983,988,-1,989,893,983,-1,974,975,973,-1,973,975,976,-1,977,973,976,-1,977,978,973,-1,973,978,979,-1,980,973,979,-1,980,981,973,-1,973,981,982,-1,983,973,982,-1,984,985,983,-1,983,985,986,-1,987,983,986,-1,987,988,983,-1,992,1070,991,-1,992,1069,1070,-1,992,1068,1069,-1,992,1067,1068,-1,992,1066,1067,-1,992,1065,1066,-1,992,1064,1065,-1,992,993,1064,-1,1064,993,994,-1,995,1064,994,-1,995,996,1064,-1,1064,996,997,-1,998,1064,997,-1,998,999,1064,-1,1064,999,1000,-1,1001,1064,1000,-1,1001,1002,1064,-1,1064,1002,1003,-1,1004,1064,1003,-1,1004,1063,1064,-1,1004,1005,1063,-1,1063,1005,1006,-1,1062,1006,1007,-1,1061,1007,1008,-1,1060,1008,1009,-1,1059,1009,1058,-1,1059,1060,1009,-1,1063,1006,1062,-1,1062,1007,1061,-1,1061,1008,1060,-1,1009,1010,1058,-1,1058,1010,1057,-1,1057,1010,1056,-1,1056,1010,1055,-1,1055,1010,1011,-1,1054,1011,1053,-1,1054,1055,1011,-1,1011,1012,1053,-1,1053,1012,1052,-1,1052,1012,1013,-1,1051,1013,1014,-1,1050,1014,1015,-1,1049,1015,1016,-1,1048,1016,1017,-1,1047,1017,1018,-1,1040,1018,1019,-1,1020,1040,1019,-1,1020,1021,1040,-1,1040,1021,1022,-1,1023,1040,1022,-1,1023,1024,1040,-1,1040,1024,1025,-1,1026,1040,1025,-1,1026,1039,1040,-1,1026,1027,1039,-1,1039,1027,1038,-1,1038,1027,1028,-1,1029,1038,1028,-1,1029,1030,1038,-1,1038,1030,1031,-1,1037,1031,1036,-1,1037,1038,1031,-1,1052,1013,1051,-1,1051,1014,1050,-1,1050,1015,1049,-1,1049,1016,1048,-1,1048,1017,1047,-1,1047,1018,1040,-1,1041,1047,1040,-1,1041,1042,1047,-1,1047,1042,1046,-1,1046,1042,1043,-1,1044,1046,1043,-1,1044,1045,1046,-1,1032,1033,1031,-1,1031,1033,1034,-1,1035,1031,1034,-1,1035,1036,1031,-1,1071,1281,1070,-1,1071,1072,1281,-1,1281,1072,1073,-1,1074,1281,1073,-1,1074,1075,1281,-1,1281,1075,1076,-1,1077,1281,1076,-1,1077,1078,1281,-1,1281,1078,1079,-1,1080,1281,1079,-1,1080,1081,1281,-1,1281,1081,1280,-1,1280,1081,1082,-1,1083,1280,1082,-1,1083,1279,1280,-1,1083,1084,1279,-1,1279,1084,1085,-1,1086,1279,1085,-1,1086,1278,1279,-1,1086,1087,1278,-1,1278,1087,1277,-1,1277,1087,1088,-1,1276,1088,1275,-1,1276,1277,1088,-1,1088,1089,1275,-1,1275,1089,1274,-1,1274,1089,1090,-1,1273,1090,1091,-1,1272,1091,1092,-1,1271,1092,1270,-1,1271,1272,1092,-1,1274,1090,1273,-1,1273,1091,1272,-1,1270,1092,1269,-1,1269,1092,1093,-1,1268,1093,1267,-1,1268,1269,1093,-1,1093,1094,1267,-1,1267,1094,1266,-1,1266,1094,1095,-1,1096,1266,1095,-1,1096,1265,1266,-1,1096,1097,1265,-1,1265,1097,1264,-1,1264,1097,1098,-1,1099,1264,1098,-1,1099,1263,1264,-1,1099,1100,1263,-1,1263,1100,1262,-1,1262,1100,1101,-1,1261,1262,1101,-1,1107,1108,1109,-1,1111,1112,78,-1,78,1112,1113,-1,1128,1129,1145,-1,1145,1129,1144,-1,1144,1129,1143,-1,1143,1129,1130,-1,1131,1143,1130,-1,1131,1142,1143,-1,1131,1132,1142,-1,1142,1132,1141,-1,1141,1132,1133,-1,1140,1133,1134,-1,1139,1134,1135,-1,1138,1135,1136,-1,1137,1138,1136,-1,1141,1133,1140,-1,1140,1134,1139,-1,1139,1135,1138,-1,1149,1150,48,-1,48,1150,1151,-1,1152,48,1151,-1,1152,1153,48,-1,48,1153,1154,-1,1155,48,1154,-1,1155,1156,48,-1,48,1156,1157,-1,1158,48,1157,-1,1158,1159,48,-1,1163,1164,19,-1,19,1164,1165,-1,1166,19,1165,-1,1166,1167,19,-1,19,1167,1168,-1,1169,19,1168,-1,1173,1283,1172,-1,1173,1282,1283,-1,1173,1174,1282,-1,1282,1174,1070,-1,1281,1282,1070,-1,1174,1175,1070,-1});
  }
}
protected class MFInt32413 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1070,1175,1176,-1,991,1176,1177,-1,991,1070,1176,-1,1200,1201,856,-1,856,1201,1202,-1,1203,856,1202,-1,1203,1204,856,-1,1218,1225,1217,-1,1218,1224,1225,-1,1218,1223,1224,-1,1218,1222,1223,-1,1218,1221,1222,-1,1218,1219,1221,-1,1221,1219,1220,-1,1225,1226,1217,-1,1217,1226,1227,-1,1229,1230,1404,-1,1404,1230,1469,-1,1507,1469,1470,-1,1471,1507,1470,-1,1471,1472,1507,-1,1507,1472,1506,-1,1506,1472,1473,-1,1484,1473,1474,-1,1475,1484,1474,-1,1475,1476,1484,-1,1484,1476,1477,-1,1483,1477,1478,-1,1479,1483,1478,-1,1479,1480,1483,-1,1483,1480,1481,-1,1482,1483,1481,-1,1231,1249,1230,-1,1231,1232,1249,-1,1249,1232,1238,-1,1239,1249,1238,-1,1239,1240,1249,-1,1249,1240,1241,-1,1248,1241,1242,-1,1243,1248,1242,-1,1243,1244,1248,-1,1248,1244,1247,-1,1247,1244,1245,-1,1246,1247,1245,-1,1232,1233,1238,-1,1238,1233,1234,-1,1235,1238,1234,-1,1235,1236,1238,-1,1238,1236,1237,-1,1249,1241,1248,-1,1249,1250,1230,-1,1230,1250,1254,-1,1469,1254,1255,-1,1256,1469,1255,-1,1256,1257,1469,-1,1469,1257,1258,-1,1468,1258,1259,-1,1260,1468,1259,-1,1260,106,1468,-1,1260,1261,106,-1,1251,1252,1250,-1,1250,1252,1253,-1,1254,1250,1253,-1,1230,1254,1469,-1,1469,1258,1468,-1,1283,1284,1172,-1,1172,1284,1299,-1,1299,1284,1285,-1,1286,1299,1285,-1,1286,1298,1299,-1,1286,1287,1298,-1,1298,1287,1288,-1,1297,1288,1289,-1,1290,1297,1289,-1,1290,1291,1297,-1,1297,1291,1292,-1,1296,1292,1293,-1,1294,1296,1293,-1,1294,1295,1296,-1,1298,1288,1297,-1,1297,1292,1296,-1,1301,1466,1300,-1,1301,1465,1466,-1,1301,1464,1465,-1,1301,1302,1464,-1,1464,1302,1463,-1,1463,1302,1462,-1,1462,1302,1461,-1,1461,1302,1303,-1,1460,1303,1459,-1,1460,1461,1303,-1,1459,1303,1309,-1,1451,1309,1432,-1,1433,1451,1432,-1,1433,1434,1451,-1,1451,1434,1435,-1,1436,1451,1435,-1,1436,1440,1451,-1,1436,1437,1440,-1,1440,1437,1438,-1,1439,1440,1438,-1,1305,1307,1304,-1,1305,1306,1307,-1,1307,1308,1304,-1,1304,1308,1309,-1,1303,1304,1309,-1,1432,1309,1319,-1,1322,1319,1321,-1,1322,1432,1319,-1,1322,1323,1432,-1,1432,1323,1324,-1,1325,1432,1324,-1,1325,1431,1432,-1,1325,1326,1431,-1,1431,1326,1327,-1,1407,1327,1328,-1,1406,1328,854,-1,1406,1407,1328,-1,1309,1310,1319,-1,1319,1310,1311,-1,1312,1319,1311,-1,1312,1313,1319,-1,1319,1313,1314,-1,1315,1319,1314,-1,1315,1316,1319,-1,1319,1316,1317,-1,1318,1319,1317,-1,1319,1320,1321,-1,1431,1327,1407,-1,1430,1407,1429,-1,1430,1431,1407,-1,1328,1329,854,-1,854,1329,1331,-1,1331,1329,1330,-1,1333,1334,1353,-1,1353,1334,1335,-1,1352,1335,1351,-1,1352,1353,1335,-1,1335,1336,1351,-1,1351,1336,1350,-1,1350,1336,1337,-1,1338,1350,1337,-1,1338,1349,1350,-1,1338,1342,1349,-1,1338,1341,1342,-1,1338,1340,1341,-1,1338,1339,1340,-1,1349,1342,1348,-1,1348,1342,1343,-1,1344,1348,1343,-1,1344,1347,1348,-1,1344,1346,1347,-1,1344,1345,1346,-1,1353,1354,106,-1,106,1354,1355,-1,1402,1355,1379,-1,1401,1379,1384,-1,1385,1401,1384,-1,1385,1386,1401,-1,1401,1386,1387,-1,1388,1401,1387,-1,1388,1400,1401,-1,1388,1389,1400,-1,1400,1389,1390,-1,1391,1400,1390,-1,1391,1392,1400,-1,1400,1392,1393,-1,1394,1400,1393,-1,1394,1395,1400,-1,1400,1395,1396,-1,1397,1400,1396,-1,1397,1398,1400,-1,1400,1398,1399,-1,1379,1355,1378,-1,1378,1355,1356,-1,1374,1356,1373,-1,1374,1378,1356,-1,1374,1375,1378,-1,1378,1375,1376,-1,1377,1378,1376,-1,1356,1357,1373,-1,1373,1357,1372,-1,1372,1357,1358,-1,1359,1372,1358,-1,1359,1360,1372,-1,1372,1360,1361,-1,1362,1372,1361,-1,1362,1363,1372,-1,1372,1363,1364,-1,1371,1364,1365,-1,1366,1371,1365,-1,1366,1367,1371,-1,1371,1367,1368,-1,1369,1371,1368,-1,1369,1370,1371,-1,1372,1364,1371,-1,1380,1381,1379,-1,1379,1381,1382,-1,1383,1379,1382,-1,1383,1384,1379,-1,1401,1402,1379,-1,1355,1402,106,-1,106,1402,1300,-1,1467,1300,1466,-1,1467,106,1300,-1,1467,1468,106,-1,1552,1403,1509,-1,1551,1509,1550,-1,1551,1552,1509,-1,1408,1418,1407,-1});
  }
}
protected class MFInt32414 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1408,1409,1418,-1,1418,1409,1410,-1,1417,1410,1416,-1,1417,1418,1410,-1,1411,1412,1410,-1,1410,1412,1413,-1,1414,1410,1413,-1,1414,1415,1410,-1,1410,1415,1416,-1,1418,1419,1407,-1,1407,1419,1429,-1,1429,1419,1428,-1,1428,1419,1427,-1,1427,1419,1420,-1,1426,1420,1425,-1,1426,1427,1420,-1,1421,1423,1420,-1,1421,1422,1423,-1,1423,1424,1420,-1,1420,1424,1425,-1,1440,1441,1451,-1,1451,1441,1442,-1,1443,1451,1442,-1,1443,1444,1451,-1,1451,1444,1445,-1,1446,1451,1445,-1,1446,1447,1451,-1,1451,1447,1448,-1,1449,1451,1448,-1,1449,1450,1451,-1,1452,1457,1451,-1,1452,1453,1457,-1,1457,1453,1454,-1,1455,1457,1454,-1,1455,1456,1457,-1,1457,1458,1451,-1,1451,1458,1459,-1,1309,1451,1459,-1,1404,1469,1507,-1,1508,1404,1507,-1,1508,1509,1404,-1,1404,1509,1403,-1,1506,1473,1484,-1,1488,1484,1485,-1,1486,1488,1485,-1,1486,1487,1488,-1,1484,1477,1483,-1,1506,1484,1488,-1,1489,1506,1488,-1,1489,1490,1506,-1,1506,1490,1505,-1,1505,1490,1504,-1,1504,1490,1491,-1,1503,1491,1502,-1,1503,1504,1491,-1,1492,1493,1491,-1,1491,1493,1494,-1,1495,1491,1494,-1,1495,1496,1491,-1,1491,1496,1497,-1,1498,1491,1497,-1,1498,1499,1491,-1,1491,1499,1500,-1,1501,1491,1500,-1,1501,1502,1491,-1,1510,1525,1509,-1,1510,1511,1525,-1,1525,1511,1524,-1,1524,1511,1512,-1,1523,1512,1514,-1,1515,1523,1514,-1,1515,1522,1523,-1,1515,1516,1522,-1,1522,1516,1521,-1,1521,1516,1520,-1,1520,1516,1519,-1,1519,1516,1517,-1,1518,1519,1517,-1,1512,1513,1514,-1,1523,1524,1512,-1,1526,1535,1525,-1,1526,1534,1535,-1,1526,1527,1534,-1,1534,1527,1528,-1,1533,1528,1532,-1,1533,1534,1528,-1,1529,1530,1528,-1,1528,1530,1531,-1,1532,1528,1531,-1,1535,1536,1525,-1,1525,1536,1509,-1,1509,1536,1550,-1,1550,1536,1549,-1,1549,1536,1537,-1,1539,1537,1538,-1,1539,1549,1537,-1,1539,1540,1549,-1,1549,1540,1548,-1,1548,1540,1541,-1,1542,1548,1541,-1,1542,1543,1548,-1,1548,1543,1544,-1,1545,1548,1544,-1,1545,1547,1548,-1,1545,1546,1547,-1});
  }
}
protected class MFVec3f415 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.66964f,0.11214f,0f,0.66899f,0.09749f,0f,0.6669f,0.08287f,0f,0.66526f,0.07569f,0f,0.66318f,0.06865f,0f,0.66065f,0.06178f,0f,0.65764f,0.05514f,0f,0.65122f,0.04402f,0f,0.64348f,0.03364f,0f,0.63457f,0.02427f,0f,0.62973f,0.02004f,0f,0.62464f,0.01614f,0f,0.61514f,0.00917f,0f,0.60483f,0.00331f,0f,0.59392f,-0.00138f,0f,0.58264f,-0.00486f,0f,0.55882f,-0.00932f,0f,0.54675f,-0.01047f,0f,0.53464f,-0.01086f,0f,0.43264f,-0.01086f,0f,0.43264f,0.00114f,0f,0.44464f,0.00114f,0f,0.44585f,0.00118f,0f,0.44707f,0.0013f,0f,0.44829f,0.0015f,0f,0.44949f,0.0018f,0f,0.45065f,0.00221f,0f,0.45174f,0.00273f,0f,0.45274f,0.00337f,0f,0.45364f,0.00414f,0f,0.455f,0.00427f,0f,0.45634f,0.00463f,0f,0.457f,0.00489f,0f,0.45765f,0.00519f,0f,0.45828f,0.00554f,0f,0.45889f,0.00593f,0f,0.46004f,0.00683f,0f,0.46106f,0.00785f,0f,0.46152f,0.00839f,0f,0.46194f,0.00896f,0f,0.46264f,0.01014f,0f,0.46341f,0.01104f,0f,0.46406f,0.01205f,0f,0.46458f,0.01314f,0f,0.46498f,0.0143f,0f,0.46528f,0.0155f,0f,0.46549f,0.01672f,0f,0.46561f,0.01794f,0f,0.46564f,0.01914f,0f,0.46564f,0.20214f,0f,0.46561f,0.20335f,0f,0.46549f,0.20457f,0f,0.46528f,0.20579f,0f,0.46498f,0.20699f,0f,0.46458f,0.20815f,0f,0.46406f,0.20924f,0f,0.46341f,0.21024f,0f,0.46264f,0.21114f,0f,0.46187f,0.21254f,0f,0.46097f,0.21388f,0f,0.45996f,0.21516f,0f,0.45885f,0.21635f,0f,0.45766f,0.21746f,0f,0.45638f,0.21847f,0f,0.45504f,0.21937f,0f,0.45364f,0.22014f,0f,0.45079f,0.22139f,0f,0.44781f,0.22233f,0f,0.44474f,0.22293f,0f,0.44319f,0.22309f,0f,0.44164f,0.22314f,0f,0.44044f,0.22318f,0f,0.43922f,0.2233f,0f,0.438f,0.2235f,0f,0.4368f,0.2238f,0f,0.43564f,0.22421f,0f,0.43455f,0.22473f,0f,0.43354f,0.22537f,0f,0.43264f,0.22614f,0f,0.43264f,0.23814f,0f,0.54064f,0.23814f,0f,0.5514f,0.23753f,0f,0.56208f,0.23576f,0f,0.57254f,0.23293f,0f,0.58264f,0.22914f,0f,0.59302f,0.22612f,0f,0.60316f,0.2222f,0f,0.61279f,0.21724f,0f,0.61733f,0.21434f,0f,0.62164f,0.21114f,0f,0.62692f,0.20703f,0f,0.63189f,0.2025f,0f,0.63654f,0.1976f,0f,0.64086f,0.19236f,0f,0.64484f,0.18685f,0f,0.64847f,0.18111f,0f,0.65464f,0.16914f,0f,0.65828f,0.16272f,0f,0.66138f,0.15597f,0f,0.66397f,0.14897f,0f,0.66605f,0.14176f,0f,0.66764f,0.13442f,0f,0.66876f,0.127f,0f,-0.75f,-0.45f,0f,0.75f,-0.45f,0f,0.75f,0.45f,0f,-0.75f,0.45f,0f,0.47443f,-0.31008f,0f,0.46642f,-0.30104f,0f,0.45956f,-0.2911f,0f,0.45395f,-0.28041f,0f,0.44967f,-0.26912f,0f,0.44678f,-0.25739f,0f,0.44532f,-0.24541f,0f,0.44532f,-0.23333f,0f,0.44678f,-0.22134f,0f,0.44967f,-0.20962f,0f,0.45395f,-0.19833f,0f,0.45956f,-0.18763f,0f,0.46642f,-0.1777f,0f,0.47443f,-0.16866f,0f,0.48347f,-0.16065f,0f,0.49341f,-0.15379f,0f,0.5041f,-0.14818f,0f,0.51539f,-0.1439f,0f,0.52711f,-0.14101f,0f,0.5391f,-0.13955f,0f,0.55118f,-0.13955f,0f,0.56316f,-0.14101f,0f,0.57489f,-0.1439f,0f,0.58618f,-0.14818f,0f,0.59687f,-0.15379f,0f,0.60681f,-0.16065f,0f,0.61585f,-0.16866f,0f,0.62386f,-0.1777f,0f,0.63072f,-0.18763f,0f,0.63633f,-0.19833f,0f,0.64061f,-0.20962f,0f,0.6435f,-0.22134f,0f,0.64496f,-0.23333f,0f,0.64496f,-0.24541f,0f,0.6435f,-0.25739f,0f,0.64061f,-0.26912f,0f,0.63633f,-0.28041f,0f,0.63072f,-0.2911f,0f,0.62386f,-0.30104f,0f,0.61585f,-0.31008f,0f,0.60681f,-0.31809f,0f,0.59687f,-0.32495f,0f,0.58618f,-0.33056f,0f,0.57489f,-0.33484f,0f,0.56316f,-0.33773f,0f,0.55118f,-0.33918f,0f,0.5391f,-0.33918f,0f,0.52711f,-0.33773f,0f,0.51539f,-0.33484f,0f,0.5041f,-0.33056f,0f,0.49341f,-0.32495f,0f,0.48347f,-0.31809f,0f,0.40463f,-0.19956f,0f,0.40553f,-0.19961f,0f,0.40642f,-0.19977f,0f,0.40729f,-0.20004f,0f,0.40811f,-0.20042f,0f,0.40889f,-0.20088f,0f,0.4096f,-0.20144f,0f,0.41024f,-0.20208f,0f,0.4108f,-0.2028f,0f,0.41127f,-0.20357f,0f,0.41164f,-0.2044f,0f,0.41191f,-0.20526f,0f,0.41207f,-0.20615f,0f,0.41213f,-0.20706f,0f,0.41207f,-0.20796f,0f,0.41191f,-0.20885f,0f,0.41164f,-0.20972f,0f,0.41127f,-0.21054f,0f,0.4108f,-0.21132f,0f,0.41024f,-0.21203f,0f,0.4096f,-0.21267f,0f,0.40889f,-0.21323f,0f,0.40811f,-0.2137f,0f,0.40729f,-0.21407f,0f,0.40642f,-0.21434f,0f,0.40553f,-0.2145f,0f,0.40463f,-0.21456f,0f,0.28941f,-0.21456f,0f,0.28851f,-0.2145f,0f,0.28762f,-0.21434f,0f,0.28675f,-0.21407f,0f,0.28593f,-0.2137f,0f,0.28515f,-0.21323f,0f,0.28444f,-0.21267f,0f,0.2838f,-0.21203f,0f,0.28324f,-0.21132f,0f,0.28277f,-0.21054f,0f,0.2824f,-0.20972f,0f,0.28213f,-0.20885f,0f,0.28197f,-0.20796f,0f,0.28191f,-0.20706f,0f,0.28197f,-0.20615f,0f,0.28213f,-0.20526f,0f,0.2824f,-0.2044f,0f,0.28277f,-0.20357f,0f,0.28324f,-0.2028f,0f,0.2838f,-0.20208f,0f,0.28444f,-0.20144f,0f,0.28515f,-0.20088f,0f,0.28593f,-0.20042f,0f,0.28675f,-0.20004f,0f,0.28762f,-0.19977f,0f,0.28851f,-0.19961f,0f,0.28941f,-0.19956f,0f,-0.30459f,-0.19956f,0f,-0.30368f,-0.19961f,0f,-0.30279f,-0.19977f,0f,-0.30193f,-0.20004f,0f,-0.3011f,-0.20042f,0f,-0.30033f,-0.20088f,0f,-0.29962f,-0.20144f,0f,-0.29898f,-0.20208f,0f,-0.29842f,-0.2028f,0f,-0.29795f,-0.20357f,0f,-0.29758f,-0.2044f,0f,-0.29731f,-0.20526f,0f,-0.29714f,-0.20615f,0f,-0.29709f,-0.20706f,0f,-0.29714f,-0.20796f,0f,-0.29731f,-0.20885f,0f,-0.29758f,-0.20972f,0f,-0.29795f,-0.21054f,0f,-0.29842f,-0.21132f,0f,-0.29898f,-0.21203f,0f,-0.29962f,-0.21267f,0f,-0.30033f,-0.21323f,0f,-0.3011f,-0.2137f,0f,-0.30193f,-0.21407f,0f,-0.30279f,-0.21434f,0f,-0.30368f,-0.2145f,0f,-0.30459f,-0.21456f,0f,-0.56642f,-0.21456f,0f,-0.56732f,-0.2145f,0f,-0.56822f,-0.21434f,0f,-0.56908f,-0.21407f,0f,-0.56991f,-0.2137f,0f,-0.57068f,-0.21323f,0f,-0.57139f,-0.21267f,0f,-0.57203f,-0.21203f,0f,-0.57259f,-0.21132f,0f,-0.57306f,-0.21054f,0f,-0.57343f,-0.20972f,0f,-0.5737f,-0.20885f,0f,-0.57387f,-0.20796f,0f,-0.57392f,-0.20706f,0f,-0.57387f,-0.20615f,0f,-0.5737f,-0.20526f,0f,-0.57343f,-0.2044f,0f,-0.57306f,-0.20357f,0f,-0.57259f,-0.2028f,0f,-0.57203f,-0.20208f,0f,-0.57139f,-0.20144f,0f,-0.57068f,-0.20088f,0f,-0.56991f,-0.20042f,0f,-0.56908f,-0.20004f,0f,-0.56822f,-0.19977f,0f,-0.56732f,-0.19961f,0f,-0.56642f,-0.19956f,0f,0.18261f,-0.30602f,0f,0.17759f,-0.30575f,0f,0.17259f,-0.30498f,0f,0.16768f,-0.30375f,0f,0.16293f,-0.30208f,0f,0.16081f,-0.30148f,0f,0.15872f,-0.30075f,0f,0.15468f,-0.29893f,0f,0.15082f,-0.29672f,0f,0.14718f,-0.29421f,0f,0.14437f,-0.29213f,0f,0.14177f,-0.28977f,0f,0.13941f,-0.28717f,0f});
  }
}
protected class MFVec3f416 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.13733f,-0.28436f,0f,0.13649f,-0.28148f,0f,0.13587f,-0.27853f,0f,0.13549f,-0.27555f,0f,0.13536f,-0.27255f,0f,0.1354f,-0.27045f,0f,0.13548f,-0.26937f,0f,0.13563f,-0.26832f,0f,0.13587f,-0.26729f,0f,0.13622f,-0.26633f,0f,0.1367f,-0.26545f,0f,0.13733f,-0.26467f,0f,0.13783f,-0.26353f,0f,0.13854f,-0.26244f,0f,0.13941f,-0.26144f,0f,0.14043f,-0.26055f,0f,0.14155f,-0.25982f,0f,0.14274f,-0.25925f,0f,0.14397f,-0.25889f,0f,0.14521f,-0.25877f,0f,0.14679f,-0.25882f,0f,0.14839f,-0.25897f,0f,0.14999f,-0.25924f,0f,0.15157f,-0.25964f,0f,0.15309f,-0.26017f,0f,0.15452f,-0.26085f,0f,0.1552f,-0.26125f,0f,0.15584f,-0.26169f,0f,0.15645f,-0.26218f,0f,0.15702f,-0.26271f,0f,0.1578f,-0.26317f,0f,0.15853f,-0.26374f,0f,0.1592f,-0.26442f,0f,0.15978f,-0.26517f,0f,0.16027f,-0.26598f,0f,0.16064f,-0.26684f,0f,0.16087f,-0.26772f,0f,0.16096f,-0.26861f,0f,0.1608f,-0.27112f,0f,0.16037f,-0.2736f,0f,0.15899f,-0.27846f,0f,0.15817f,-0.28033f,0f,0.15755f,-0.28229f,0f,0.15716f,-0.2843f,0f,0.15705f,-0.28532f,0f,0.15702f,-0.28633f,0f,0.158f,-0.28732f,0f,0.15899f,-0.2883f,0f,0.16032f,-0.28947f,0f,0.16178f,-0.2905f,0f,0.16489f,-0.29224f,0f,0.16591f,-0.29227f,0f,0.16693f,-0.29237f,0f,0.16894f,-0.29277f,0f,0.1709f,-0.29339f,0f,0.17277f,-0.29421f,0f,0.17414f,-0.2948f,0f,0.17556f,-0.29527f,0f,0.17702f,-0.29561f,0f,0.17852f,-0.29586f,0f,0.18155f,-0.29612f,0f,0.18458f,-0.29618f,0f,0.18614f,-0.2961f,0f,0.18769f,-0.29588f,0f,0.18923f,-0.29554f,0f,0.19075f,-0.29507f,0f,0.19223f,-0.2945f,0f,0.19368f,-0.29382f,0f,0.19639f,-0.29224f,0f,0.1996f,-0.2913f,0f,0.20274f,-0.29005f,0f,0.20423f,-0.28929f,0f,0.20565f,-0.28842f,0f,0.20698f,-0.28743f,0f,0.20821f,-0.28633f,0f,0.20957f,-0.28488f,0f,0.21084f,-0.28332f,0f,0.212f,-0.28168f,0f,0.21307f,-0.27996f,0f,0.21401f,-0.27818f,0f,0.21484f,-0.27634f,0f,0.21553f,-0.27446f,0f,0.21608f,-0.27255f,0f,0.21711f,-0.2708f,0f,0.21796f,-0.26895f,0f,0.21865f,-0.26701f,0f,0.21918f,-0.26502f,0f,0.21957f,-0.26297f,0f,0.21983f,-0.26091f,0f,0.22002f,-0.2568f,0f,0.21989f,-0.2538f,0f,0.21951f,-0.25082f,0f,0.21889f,-0.24787f,0f,0.21805f,-0.24499f,0f,0.21688f,-0.24189f,0f,0.21549f,-0.23889f,0f,0.21214f,-0.23317f,0f,0.21151f,-0.23212f,0f,0.21073f,-0.23116f,0f,0.20983f,-0.23029f,0f,0.20882f,-0.22951f,0f,0.20774f,-0.22882f,0f,0.20661f,-0.22822f,0f,0.20544f,-0.2277f,0f,0.20427f,-0.22727f,0f,0.20252f,-0.22624f,0f,0.20067f,-0.22539f,0f,0.19873f,-0.2247f,0f,0.19674f,-0.22417f,0f,0.19469f,-0.22379f,0f,0.19263f,-0.22352f,0f,0.18852f,-0.22333f,0f,0.17474f,-0.22333f,0f,0.17474f,-0.20955f,0f,0.18458f,-0.20955f,0f,0.1875f,-0.20943f,0f,0.19044f,-0.20908f,0f,0.19338f,-0.20849f,0f,0.19625f,-0.20765f,0f,0.19902f,-0.20655f,0f,0.20164f,-0.2052f,0f,0.20406f,-0.20357f,0f,0.20518f,-0.20266f,0f,0.20624f,-0.20167f,0f,0.20737f,-0.20045f,0f,0.20839f,-0.19913f,0f,0.20931f,-0.19773f,0f,0.21013f,-0.19627f,0f,0.2115f,-0.19316f,0f,0.21254f,-0.18986f,0f,0.21329f,-0.18644f,0f,0.21377f,-0.18296f,0f,0.21411f,-0.17608f,0f,0.214f,-0.17317f,0f,0.21365f,-0.17022f,0f,0.21305f,-0.16729f,0f,0.21221f,-0.16441f,0f,0.21112f,-0.16164f,0f,0.20976f,-0.15902f,0f,0.20814f,-0.1566f,0f,0.20722f,-0.15548f,0f,0.20624f,-0.15442f,0f,0.2054f,-0.1534f,0f,0.20446f,-0.15246f,0f,0.20345f,-0.1516f,0f,0.20237f,-0.15081f,0f,0.20122f,-0.15009f,0f,0.20001f,-0.14945f,0f,0.19746f,-0.14837f,0f,0.19477f,-0.14755f,0f,0.19201f,-0.14699f,0f,0.18925f,-0.14666f,0f,0.18655f,-0.14655f,0f,0.18402f,-0.14665f,0f,0.1815f,-0.14697f,0f,0.18025f,-0.14724f,0f,0.17904f,-0.14758f,0f,0.17785f,-0.148f,0f,0.17671f,-0.14852f,0f,0.17359f,-0.15026f,0f,0.17213f,-0.15128f,0f,0.1708f,-0.15246f,0f,0.16768f,-0.15419f,0f,0.16623f,-0.15522f,0f,0.16489f,-0.15639f,0f,0.16391f,-0.15738f,0f,0.16293f,-0.15836f,0f,0.16308f,-0.16087f,0f,0.16351f,-0.16335f,0f,0.16489f,-0.16821f,0f,0.16541f,-0.16935f,0f,0.16583f,-0.17054f,0f,0.16618f,-0.17175f,0f,0.16644f,-0.173f,0f,0.16677f,-0.17552f,0f,0.16686f,-0.17805f,0f,0.16678f,-0.17915f,0f,0.16654f,-0.18023f,0f,0.16616f,-0.18128f,0f,0.16567f,-0.18231f,0f,0.16508f,-0.1833f,0f,0.16442f,-0.18423f,0f,0.16369f,-0.18511f,0f,0.16293f,-0.18592f,0f,0.16156f,-0.18652f,0f,0.16014f,-0.18699f,0f,0.15867f,-0.18733f,0f,0.15718f,-0.18758f,0f,0.15414f,-0.18784f,0f,0.15111f,-0.18789f,0f,0.14999f,-0.18783f,0f,0.14883f,-0.18765f,0f,0.14768f,-0.18734f,0f,0.14657f,-0.18691f,0f,0.14553f,-0.18636f,0f,0.14461f,-0.18568f,0f,0.14383f,-0.18488f,0f,0.14324f,-0.18396f,0f,0.14272f,-0.18281f,0f,0.1423f,-0.18163f,0f,0.14196f,-0.18041f,0f,0.14169f,-0.17917f,0f,0.14137f,-0.17664f,0f,0.14127f,-0.17411f,0f,0.1414f,-0.17112f,0f,0.14178f,-0.16813f,0f,0.1424f,-0.16518f,0f,0.14324f,-0.1623f,0f,0.14787f,-0.15615f,0f,0.15308f,-0.15049f,0f,0.16074f,-0.14521f,0f,0.16883f,-0.14064f,0f,0.17165f,-0.13962f,0f,0.17453f,-0.13878f,0f,0.18043f,-0.13756f,0f,0.18644f,-0.1369f,0f,0.19246f,-0.13671f,0f,0.19816f,-0.137f,0f,0.20102f,-0.13739f,0f,0.20385f,-0.13798f,0f,0.2066f,-0.13877f,0f,0.20926f,-0.1398f,0f,0.21177f,-0.14107f,0f,0.21411f,-0.14261f,0f,0.21838f,-0.1445f,0f,0.2225f,-0.14675f,0f,0.22636f,-0.14939f,0f,0.22817f,-0.15087f,0f,0.22986f,-0.15246f,0f,0.2323f,-0.15508f,0f,0.23449f,-0.15793f,0f,0.23547f,-0.15944f,0f,0.23635f,-0.161f,0f,0.23711f,-0.16261f,0f,0.23774f,-0.16427f,0f,0.23858f,-0.16715f,0f,0.2392f,-0.1701f,0f,0.23958f,-0.17308f,0f,0.23971f,-0.17608f,0f,0.23955f,-0.17858f,0f,0.23912f,-0.18107f,0f,0.23774f,-0.18592f,0f,0.23657f,-0.18902f,0f,0.23518f,-0.19202f,0f,0.23183f,-0.19774f,0f,0.22975f,-0.20054f,0f,0.22739f,-0.20314f,0f,0.22479f,-0.2055f,0f,0.22199f,-0.20758f,0f,0.21773f,-0.20951f,0f,0.21333f,-0.21112f,0f,0.20427f,-0.21349f,0f,0.20427f,-0.21546f,0f,0.21112f,-0.21756f,0f,0.21805f,-0.21939f,0f,0.22167f,-0.22044f,0f,0.2252f,-0.22176f,0f,0.22861f,-0.22338f,0f,0.23183f,-0.2253f,0f,0.2347f,-0.22843f,0f,0.2373f,-0.23179f,0f,0.23963f,-0.23536f,0f,0.24168f,-0.23908f,0f,0.24227f,-0.24004f,0f,0.24281f,-0.24104f,0f,0.24371f,-0.24312f,0f,0.2444f,-0.2453f,0f,0.2449f,-0.24756f,0f,0.24547f,-0.25219f,0f,0.24561f,-0.2568f,0f,0.24552f,-0.25917f,0f,0.24526f,-0.26154f,0f,0.24483f,-0.26391f,0f,0.24425f,-0.26627f,0f,0.24263f,-0.27089f,0f,0.24049f,-0.27536f,0f,0.23788f,-0.2796f,0f,0.23487f,-0.28354f,0f,0.23152f,-0.28712f,0f,0.22789f,-0.29027f,0f});
  }
}
protected class MFVec3f417 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22318f,-0.29399f,0f,0.21803f,-0.29721f,0f,0.21253f,-0.29992f,0f,0.20677f,-0.30213f,0f,0.20081f,-0.30383f,0f,0.19475f,-0.30505f,0f,0.18866f,-0.30578f,0f,-0.00048f,-0.15836f,0f,0.00148f,-0.16046f,0f,0.00331f,-0.1627f,0f,0.00655f,-0.16751f,0f,0.00923f,-0.17267f,0f,0.01133f,-0.17805f,0f,0.0131f,-0.18429f,0f,0.01432f,-0.19068f,0f,0.01504f,-0.19715f,0f,0.01527f,-0.20364f,0f,0.01494f,-0.21073f,0f,0.01389f,-0.2178f,0f,0.01206f,-0.22468f,0f,0.01082f,-0.22799f,0f,0.00936f,-0.23121f,0f,0.00738f,-0.23711f,0f,0.00479f,-0.24282f,0f,0.00325f,-0.24554f,0f,0.00153f,-0.24814f,0f,-0.00036f,-0.25059f,0f,-0.00245f,-0.25286f,0f,-0.00455f,-0.25482f,0f,-0.00679f,-0.25665f,0f,-0.0116f,-0.25989f,0f,-0.01676f,-0.26257f,0f,-0.02214f,-0.26467f,0f,-0.02838f,-0.26644f,0f,-0.03477f,-0.26767f,0f,-0.04124f,-0.26838f,0f,-0.04773f,-0.26861f,0f,-0.05422f,-0.26838f,0f,-0.06069f,-0.26767f,0f,-0.06708f,-0.26644f,0f,-0.07332f,-0.26467f,0f,-0.07863f,-0.26181f,0f,-0.08373f,-0.25857f,0f,-0.08855f,-0.25493f,0f,-0.09301f,-0.25089f,0f,-0.09666f,-0.2459f,0f,-0.09987f,-0.24058f,0f,-0.1026f,-0.23501f,0f,-0.10482f,-0.22924f,0f,-0.10634f,-0.21648f,0f,-0.10679f,-0.20364f,0f,-0.10634f,-0.1908f,0f,-0.10482f,-0.17805f,0f,-0.1026f,-0.17228f,0f,-0.09987f,-0.1667f,0f,-0.09666f,-0.16139f,0f,-0.09301f,-0.15639f,0f,-0.08855f,-0.15235f,0f,-0.08373f,-0.14872f,0f,-0.07863f,-0.14548f,0f,-0.07332f,-0.14261f,0f,-0.07011f,-0.14115f,0f,-0.06679f,-0.13992f,0f,-0.05991f,-0.13808f,0f,-0.05285f,-0.13704f,0f,-0.04576f,-0.13671f,0f,-0.03912f,-0.137f,0f,-0.0325f,-0.13797f,0f,-0.02926f,-0.13876f,0f,-0.0261f,-0.13979f,0f,-0.02306f,-0.14107f,0f,-0.02017f,-0.14261f,0f,-0.01466f,-0.14574f,0f,-0.00947f,-0.14944f,0f,-0.00471f,-0.15366f,0f,-0.13042f,-0.24499f,0f,-0.13042f,-0.26467f,0f,-0.2387f,-0.26467f,0f,-0.2387f,-0.25089f,0f,-0.23801f,-0.24969f,0f,-0.2372f,-0.24855f,0f,-0.23629f,-0.24749f,0f,-0.2353f,-0.24648f,0f,-0.23312f,-0.24465f,0f,-0.23082f,-0.24302f,0f,-0.2277f,-0.24015f,0f,-0.22433f,-0.23755f,0f,-0.22076f,-0.23522f,0f,-0.21704f,-0.23317f,0f,-0.21232f,-0.229f,0f,-0.2072f,-0.2253f,0f,-0.19932f,-0.22136f,0f,-0.19145f,-0.21742f,0f,-0.18443f,-0.2137f,0f,-0.17767f,-0.20955f,0f,-0.17275f,-0.20463f,0f,-0.16782f,-0.19971f,0f,-0.16586f,-0.19577f,0f,-0.16389f,-0.19183f,0f,-0.16287f,-0.188f,0f,-0.16227f,-0.18406f,0f,-0.16192f,-0.17608f,0f,-0.162f,-0.17313f,0f,-0.16228f,-0.17011f,0f,-0.16279f,-0.16707f,0f,-0.16355f,-0.1641f,0f,-0.1646f,-0.16128f,0f,-0.16524f,-0.15994f,0f,-0.16597f,-0.15867f,0f,-0.16678f,-0.15748f,0f,-0.16769f,-0.15636f,0f,-0.16869f,-0.15534f,0f,-0.16979f,-0.15442f,0f,-0.17085f,-0.15344f,0f,-0.17197f,-0.15253f,0f,-0.17439f,-0.1509f,0f,-0.17701f,-0.14955f,0f,-0.17978f,-0.14845f,0f,-0.18265f,-0.14761f,0f,-0.18559f,-0.14702f,0f,-0.18854f,-0.14667f,0f,-0.19145f,-0.14655f,0f,-0.19324f,-0.14663f,0f,-0.19502f,-0.14686f,0f,-0.19678f,-0.14723f,0f,-0.19853f,-0.14772f,0f,-0.20195f,-0.14897f,0f,-0.20523f,-0.15049f,0f,-0.21035f,-0.15418f,0f,-0.21507f,-0.15836f,0f,-0.21492f,-0.16087f,0f,-0.21449f,-0.16335f,0f,-0.21311f,-0.16821f,0f,-0.21259f,-0.16935f,0f,-0.21217f,-0.17054f,0f,-0.21182f,-0.17175f,0f,-0.21156f,-0.173f,0f,-0.21123f,-0.17552f,0f,-0.21114f,-0.17805f,0f,-0.21122f,-0.17915f,0f,-0.21146f,-0.18023f,0f,-0.21184f,-0.18128f,0f,-0.21233f,-0.18231f,0f,-0.21292f,-0.1833f,0f,-0.21358f,-0.18423f,0f,-0.21431f,-0.18511f,0f,-0.21507f,-0.18592f,0f,-0.21644f,-0.18652f,0f,-0.21786f,-0.18699f,0f,-0.21933f,-0.18733f,0f,-0.22082f,-0.18758f,0f,-0.22386f,-0.18784f,0f,-0.22689f,-0.18789f,0f,-0.22798f,-0.18781f,0f,-0.22906f,-0.18757f,0f,-0.23012f,-0.1872f,0f,-0.23115f,-0.1867f,0f,-0.23213f,-0.18611f,0f,-0.23307f,-0.18545f,0f,-0.23395f,-0.18472f,0f,-0.23476f,-0.18396f,0f,-0.23528f,-0.18281f,0f,-0.2357f,-0.18163f,0f,-0.23604f,-0.18041f,0f,-0.23631f,-0.17917f,0f,-0.23663f,-0.17664f,0f,-0.23673f,-0.17411f,0f,-0.23658f,-0.17063f,0f,-0.23617f,-0.16717f,0f,-0.23476f,-0.16033f,0f,-0.23268f,-0.15753f,0f,-0.23032f,-0.15493f,0f,-0.22772f,-0.15257f,0f,-0.22492f,-0.15049f,0f,-0.22322f,-0.1489f,0f,-0.22142f,-0.14743f,0f,-0.21756f,-0.14479f,0f,-0.21344f,-0.14254f,0f,-0.20917f,-0.14064f,0f,-0.20441f,-0.13898f,0f,-0.1995f,-0.13774f,0f,-0.19451f,-0.13697f,0f,-0.18948f,-0.13671f,0f,-0.18453f,-0.13686f,0f,-0.17952f,-0.13736f,0f,-0.17452f,-0.1382f,0f,-0.1696f,-0.13942f,0f,-0.16482f,-0.14104f,0f,-0.16027f,-0.14308f,0f,-0.156f,-0.14557f,0f,-0.15399f,-0.14698f,0f,-0.15207f,-0.14852f,0f,-0.15042f,-0.14964f,0f,-0.14882f,-0.15088f,0f,-0.14729f,-0.15224f,0f,-0.14583f,-0.1537f,0f,-0.14315f,-0.15691f,0f,-0.14083f,-0.16043f,0f,-0.13894f,-0.16419f,0f,-0.13817f,-0.16613f,0f,-0.13752f,-0.1681f,0f,-0.13701f,-0.17009f,0f,-0.13663f,-0.17209f,0f,-0.1364f,-0.17409f,0f,-0.13632f,-0.17608f,0f,-0.13652f,-0.18019f,0f,-0.13678f,-0.18226f,0f,-0.13717f,-0.1843f,0f,-0.1377f,-0.1863f,0f,-0.13838f,-0.18823f,0f,-0.13923f,-0.19008f,0f,-0.14026f,-0.19183f,0f,-0.14081f,-0.19374f,0f,-0.14151f,-0.19562f,0f,-0.14233f,-0.19746f,0f,-0.14328f,-0.19924f,0f,-0.14434f,-0.20096f,0f,-0.14551f,-0.2026f,0f,-0.14678f,-0.20416f,0f,-0.14814f,-0.20561f,0f,-0.15126f,-0.20848f,0f,-0.15463f,-0.21108f,0f,-0.1582f,-0.21341f,0f,-0.16192f,-0.21546f,0f,-0.17465f,-0.22151f,0f,-0.18751f,-0.22727f,0f,-0.19217f,-0.2293f,0f,-0.1967f,-0.23161f,0f,-0.20106f,-0.23422f,0f,-0.20523f,-0.23711f,0f,-0.21332f,-0.24065f,0f,-0.21723f,-0.24269f,0f,-0.22098f,-0.24499f,0f,0.11961f,-0.2568f,0f,0.11961f,-0.26467f,0f,0.04283f,-0.26467f,0f,0.04283f,-0.2568f,0f,0.05268f,-0.2568f,0f,0.0552f,-0.2567f,0f,0.05773f,-0.25638f,0f,0.05897f,-0.25611f,0f,0.06019f,-0.25577f,0f,0.06137f,-0.25535f,0f,0.06252f,-0.25483f,0f,0.06341f,-0.25475f,0f,0.06429f,-0.25451f,0f,0.06515f,-0.25414f,0f,0.06596f,-0.25366f,0f,0.06672f,-0.25307f,0f,0.06739f,-0.2524f,0f,0.06797f,-0.25167f,0f,0.06843f,-0.25089f,0f,0.06906f,-0.25012f,0f,0.06954f,-0.24924f,0f,0.06989f,-0.24827f,0f,0.07013f,-0.24725f,0f,0.07028f,-0.2462f,0f,0.07036f,-0.24512f,0f,0.07039f,-0.24302f,0f,0.07039f,-0.16033f,0f,0.04086f,-0.16033f,0f,0.04086f,-0.15049f,0f,0.04677f,-0.15049f,0f,0.05229f,-0.15026f,0f,0.05779f,-0.14954f,0f,0.0632f,-0.14831f,0f,0.06843f,-0.14655f,0f,0.0727f,-0.14466f,0f,0.07681f,-0.14241f,0f,0.08068f,-0.13977f,0f,0.08248f,-0.13829f,0f,0.08418f,-0.13671f,0f,0.09402f,-0.13671f,0f,0.0931f,-0.14107f,0f,0.09249f,-0.1455f,0f,0.09205f,-0.15442f,0f,0.09205f,-0.17411f,0f,0.09205f,-0.24302f,0f,0.09205f,-0.24893f,0f,0.09256f,-0.24984f,0f});
  }
}
protected class MFVec3f418 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09315f,-0.25072f,0f,0.09381f,-0.25156f,0f,0.09454f,-0.25235f,0f,0.09532f,-0.25307f,0f,0.09616f,-0.25373f,0f,0.09704f,-0.25432f,0f,0.09796f,-0.25483f,0f,0.10046f,-0.25499f,0f,0.10294f,-0.25542f,0f,0.1078f,-0.2568f,0f,0.29253f,-0.02042f,0f,0.28487f,-0.02001f,0f,0.27725f,-0.01884f,0f,0.26978f,-0.01695f,0f,0.26253f,-0.01442f,0f,0.2593f,-0.0135f,0f,0.25612f,-0.01238f,0f,0.24996f,-0.00962f,0f,0.24408f,-0.00625f,0f,0.23853f,-0.00242f,0f,0.23425f,0.00075f,0f,0.23029f,0.00435f,0f,0.2267f,0.00831f,0f,0.22353f,0.01258f,0f,0.22225f,0.01697f,0f,0.22131f,0.02146f,0f,0.22073f,0.02601f,0f,0.22053f,0.03058f,0f,0.22059f,0.03379f,0f,0.22071f,0.03542f,0f,0.22093f,0.03703f,0f,0.2213f,0.03859f,0f,0.22154f,0.03934f,0f,0.22183f,0.04006f,0f,0.22217f,0.04074f,0f,0.22256f,0.0414f,0f,0.22301f,0.04201f,0f,0.22353f,0.04258f,0f,0.22387f,0.04346f,0f,0.22429f,0.04433f,0f,0.22479f,0.04517f,0f,0.22537f,0.04599f,0f,0.226f,0.04677f,0f,0.2267f,0.04751f,0f,0.22745f,0.04821f,0f,0.22825f,0.04886f,0f,0.22908f,0.04945f,0f,0.22995f,0.04998f,0f,0.23085f,0.05045f,0f,0.23177f,0.05084f,0f,0.2327f,0.05116f,0f,0.23364f,0.05139f,0f,0.23459f,0.05153f,0f,0.23553f,0.05158f,0f,0.23793f,0.05151f,0f,0.24038f,0.05127f,0f,0.24282f,0.05086f,0f,0.24522f,0.05026f,0f,0.24753f,0.04944f,0f,0.24972f,0.04841f,0f,0.25075f,0.0478f,0f,0.25173f,0.04712f,0f,0.25266f,0.04639f,0f,0.25353f,0.04558f,0f,0.25471f,0.04488f,0f,0.25528f,0.04446f,0f,0.25583f,0.044f,0f,0.25684f,0.04298f,0f,0.25774f,0.04183f,0f,0.25813f,0.04122f,0f,0.25848f,0.04059f,0f,0.25879f,0.03994f,0f,0.25904f,0.03928f,0f,0.2594f,0.03794f,0f,0.25953f,0.03658f,0f,0.25929f,0.03277f,0f,0.25863f,0.02898f,0f,0.25653f,0.02158f,0f,0.25528f,0.01873f,0f,0.25434f,0.01574f,0f,0.25374f,0.01268f,0f,0.25358f,0.01113f,0f,0.25353f,0.00958f,0f,0.25503f,0.00808f,0f,0.25653f,0.00658f,0f,0.25856f,0.00479f,0f,0.26077f,0.00323f,0f,0.26553f,0.00058f,0f,0.26708f,0.00053f,0f,0.26862f,0.00037f,0f,0.27169f,-0.00023f,0f,0.27468f,-0.00117f,0f,0.27753f,-0.00242f,0f,0.27961f,-0.00333f,0f,0.28178f,-0.00404f,0f,0.28401f,-0.00456f,0f,0.28629f,-0.00494f,0f,0.29091f,-0.00533f,0f,0.29553f,-0.00542f,0f,0.2979f,-0.00531f,0f,0.30027f,-0.00497f,0f,0.30261f,-0.00445f,0f,0.30493f,-0.00373f,0f,0.30719f,-0.00286f,0f,0.30938f,-0.00184f,0f,0.31353f,0.00058f,0f,0.31842f,0.00201f,0f,0.32319f,0.00391f,0f,0.32546f,0.00508f,0f,0.32763f,0.0064f,0f,0.32966f,0.0079f,0f,0.33153f,0.00958f,0f,0.3336f,0.0118f,0f,0.33553f,0.01417f,0f,0.33731f,0.01667f,0f,0.33893f,0.01929f,0f,0.34037f,0.022f,0f,0.34163f,0.0248f,0f,0.34268f,0.02767f,0f,0.34353f,0.03058f,0f,0.3451f,0.03324f,0f,0.34639f,0.03607f,0f,0.34744f,0.03902f,0f,0.34824f,0.04206f,0f,0.34883f,0.04517f,0f,0.34923f,0.04832f,0f,0.34953f,0.05458f,0f,0.34933f,0.05915f,0f,0.34875f,0.0637f,0f,0.34781f,0.06819f,0f,0.34653f,0.07258f,0f,0.34475f,0.07729f,0f,0.34263f,0.08187f,0f,0.33753f,0.09058f,0f,0.33708f,0.0914f,0f,0.33656f,0.09219f,0f,0.336f,0.09294f,0f,0.33538f,0.09365f,0f,0.334f,0.09498f,0f,0.33247f,0.09617f,0f,0.33082f,0.09722f,0f,0.32909f,0.09814f,0f,0.32731f,0.09892f,0f,0.32553f,0.09958f,0f,0.32286f,0.10115f,0f,0.32004f,0.10245f,0f,0.31709f,0.10349f,0f,0.31405f,0.1043f,0f,0.31094f,0.10489f,0f,0.30779f,0.10529f,0f,0.30153f,0.10558f,0f,0.28053f,0.10558f,0f,0.28053f,0.12658f,0f,0.29553f,0.12658f,0f,0.29997f,0.12676f,0f,0.30446f,0.12729f,0f,0.30893f,0.1282f,0f,0.31331f,0.12948f,0f,0.31753f,0.13115f,0f,0.32153f,0.13321f,0f,0.32521f,0.13569f,0f,0.32692f,0.13708f,0f,0.32853f,0.13858f,0f,0.33025f,0.14045f,0f,0.3318f,0.14246f,0f,0.33321f,0.14459f,0f,0.33446f,0.14682f,0f,0.33655f,0.15156f,0f,0.33813f,0.15659f,0f,0.33927f,0.1618f,0f,0.34f,0.1671f,0f,0.34053f,0.17758f,0f,0.34035f,0.18202f,0f,0.33982f,0.18651f,0f,0.33891f,0.19098f,0f,0.33763f,0.19537f,0f,0.33596f,0.19959f,0f,0.33389f,0.20358f,0f,0.33142f,0.20727f,0f,0.33003f,0.20898f,0f,0.32853f,0.21058f,0f,0.32724f,0.21214f,0f,0.32582f,0.21357f,0f,0.32428f,0.21489f,0f,0.32263f,0.21609f,0f,0.32087f,0.21718f,0f,0.31903f,0.21816f,0f,0.31514f,0.21981f,0f,0.31105f,0.22106f,0f,0.30685f,0.22192f,0f,0.30264f,0.22242f,0f,0.29853f,0.22258f,0f,0.29467f,0.22243f,0f,0.29083f,0.22194f,0f,0.28893f,0.22153f,0f,0.28708f,0.22101f,0f,0.28527f,0.22036f,0f,0.28353f,0.21958f,0f,0.27877f,0.21693f,0f,0.27656f,0.21537f,0f,0.27453f,0.21358f,0f,0.26977f,0.21093f,0f,0.26756f,0.20937f,0f,0.26553f,0.20758f,0f,0.26403f,0.20608f,0f,0.26253f,0.20458f,0f,0.26277f,0.20077f,0f,0.26342f,0.19698f,0f,0.26553f,0.18958f,0f,0.26631f,0.18784f,0f,0.26696f,0.18603f,0f,0.26748f,0.18418f,0f,0.26788f,0.18228f,0f,0.26838f,0.17843f,0f,0.26853f,0.17458f,0f,0.26849f,0.17374f,0f,0.2684f,0.17291f,0f,0.26824f,0.17208f,0f,0.26803f,0.17126f,0f,0.26746f,0.16965f,0f,0.26671f,0.16809f,0f,0.26582f,0.16659f,0f,0.2648f,0.16516f,0f,0.26369f,0.16382f,0f,0.26253f,0.16258f,0f,0.26044f,0.16167f,0f,0.25827f,0.16096f,0f,0.25604f,0.16044f,0f,0.25377f,0.16006f,0f,0.24914f,0.15967f,0f,0.24453f,0.15958f,0f,0.24281f,0.15967f,0f,0.24105f,0.15996f,0f,0.23929f,0.16042f,0f,0.2376f,0.16108f,0f,0.23679f,0.16148f,0f,0.23602f,0.16192f,0f,0.2353f,0.16242f,0f,0.23462f,0.16296f,0f,0.23399f,0.16354f,0f,0.23343f,0.16417f,0f,0.23294f,0.16485f,0f,0.23253f,0.16558f,0f,0.23174f,0.16733f,0f,0.2311f,0.16913f,0f,0.23058f,0.17099f,0f,0.23017f,0.17288f,0f,0.22968f,0.17673f,0f,0.22953f,0.18058f,0f,0.22973f,0.18515f,0f,0.23031f,0.1897f,0f,0.23125f,0.19419f,0f,0.23253f,0.19858f,0f,0.23958f,0.20795f,0f,0.24753f,0.21658f,0f,0.25919f,0.22462f,0f,0.27153f,0.23158f,0f,0.27582f,0.23314f,0f,0.28021f,0.23442f,0f,0.2892f,0.23628f,0f,0.29836f,0.23728f,0f,0.30753f,0.23758f,0f,0.31621f,0.23714f,0f,0.32057f,0.23654f,0f,0.32488f,0.23565f,0f,0.32908f,0.23443f,0f,0.33313f,0.23287f,0f,0.33696f,0.23093f,0f,0.34053f,0.22858f,0f,0.34703f,0.2257f,0f,0.35331f,0.22227f,0f,0.35919f,0.21825f,0f,0.36194f,0.216f,0f,0.36453f,0.21358f,0f,0.36823f,0.20958f,0f,0.37158f,0.20523f,0f,0.37307f,0.20294f,0f,0.37441f,0.20056f,0f,0.37557f,0.19811f,0f,0.37653f,0.19558f,0f});
  }
}
protected class MFVec3f419 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37781f,0.19119f,0f,0.37875f,0.1867f,0f,0.37933f,0.18215f,0f,0.37953f,0.17758f,0f,0.37929f,0.17377f,0f,0.37863f,0.16998f,0f,0.37653f,0.16258f,0f,0.37475f,0.15787f,0f,0.37263f,0.15329f,0f,0.36753f,0.14458f,0f,0.36436f,0.14031f,0f,0.36076f,0.13635f,0f,0.3568f,0.13275f,0f,0.35253f,0.12958f,0f,0.34604f,0.12665f,0f,0.33933f,0.12419f,0f,0.32553f,0.12058f,0f,0.32553f,0.11758f,0f,0.33597f,0.11438f,0f,0.34653f,0.11158f,0f,0.35203f,0.10999f,0f,0.35742f,0.10797f,0f,0.36261f,0.10551f,0f,0.36753f,0.10258f,0f,0.3719f,0.09782f,0f,0.37587f,0.09269f,0f,0.37942f,0.08725f,0f,0.38253f,0.08158f,0f,0.38344f,0.08011f,0f,0.38425f,0.0786f,0f,0.38562f,0.07542f,0f,0.38667f,0.0721f,0f,0.38744f,0.06866f,0f,0.38831f,0.06161f,0f,0.38853f,0.05458f,0f,0.38839f,0.05097f,0f,0.38799f,0.04735f,0f,0.38734f,0.04374f,0f,0.38644f,0.04016f,0f,0.38399f,0.0331f,0f,0.38072f,0.0263f,0f,0.37674f,0.01984f,0f,0.37215f,0.01383f,0f,0.36705f,0.00837f,0f,0.36153f,0.00358f,0f,0.35434f,-0.0021f,0f,0.34649f,-0.00699f,0f,0.33812f,-0.01112f,0f,0.32933f,-0.01449f,0f,0.32026f,-0.01709f,0f,0.31102f,-0.01894f,0f,0.30174f,-0.02005f,0f,0.06892f,0.10278f,0f,0.07393f,0.09881f,0f,0.0787f,0.09452f,0f,0.08308f,0.08985f,0f,0.08692f,0.08478f,0f,0.08911f,0.08152f,0f,0.09097f,0.07803f,0f,0.09252f,0.07437f,0f,0.09377f,0.07056f,0f,0.09472f,0.06666f,0f,0.09539f,0.06269f,0f,0.09579f,0.05872f,0f,0.09592f,0.05478f,0f,0.09579f,0.05083f,0f,0.09539f,0.04686f,0f,0.09472f,0.0429f,0f,0.09377f,0.03899f,0f,0.09252f,0.03519f,0f,0.09097f,0.03152f,0f,0.08911f,0.02804f,0f,0.08692f,0.02478f,0f,0.08527f,0.02173f,0f,0.08341f,0.0188f,0f,0.07914f,0.01326f,0f,0.07426f,0.00823f,0f,0.06892f,0.00378f,0f,0.06274f,-0.00032f,0f,0.05609f,-0.00371f,0f,0.0491f,-0.00636f,0f,0.04192f,-0.00822f,0f,0.02699f,-0.01046f,0f,0.01192f,-0.01122f,0f,-0.10508f,-0.01122f,0f,-0.10508f,0.00078f,0f,-0.09608f,0.00078f,0f,-0.09288f,0.00084f,0f,-0.09124f,0.00096f,0f,-0.08963f,0.00118f,0f,-0.08807f,0.00155f,0f,-0.08732f,0.00179f,0f,-0.08661f,0.00208f,0f,-0.08592f,0.00242f,0f,-0.08526f,0.00281f,0f,-0.08465f,0.00326f,0f,-0.08408f,0.00378f,0f,-0.07933f,0.00643f,0f,-0.07711f,0.00799f,0f,-0.07508f,0.00978f,0f,-0.07457f,0.01035f,0f,-0.07411f,0.01096f,0f,-0.07372f,0.01161f,0f,-0.07338f,0.0123f,0f,-0.07309f,0.01302f,0f,-0.07285f,0.01377f,0f,-0.07249f,0.01532f,0f,-0.07226f,0.01694f,0f,-0.07214f,0.01857f,0f,-0.07208f,0.02178f,0f,-0.07208f,0.20178f,0f,-0.07212f,0.20298f,0f,-0.07223f,0.2042f,0f,-0.07244f,0.20543f,0f,-0.07274f,0.20662f,0f,-0.07315f,0.20778f,0f,-0.07367f,0.20887f,0f,-0.07431f,0.20988f,0f,-0.07508f,0.21078f,0f,-0.07586f,0.21218f,0f,-0.07675f,0.21352f,0f,-0.07776f,0.21479f,0f,-0.07887f,0.21599f,0f,-0.08007f,0.2171f,0f,-0.08134f,0.2181f,0f,-0.08268f,0.219f,0f,-0.08408f,0.21978f,0f,-0.08563f,0.21983f,0f,-0.08718f,0.21999f,0f,-0.09024f,0.22059f,0f,-0.09323f,0.22153f,0f,-0.09608f,0.22278f,0f,-0.09728f,0.22281f,0f,-0.09851f,0.22293f,0f,-0.09973f,0.22314f,0f,-0.10093f,0.22344f,0f,-0.10208f,0.22385f,0f,-0.10318f,0.22437f,0f,-0.10418f,0.22501f,0f,-0.10508f,0.22578f,0f,-0.10508f,0.23778f,0f,0.00892f,0.23778f,0f,0.01497f,0.23758f,0f,0.02101f,0.23701f,0f,0.03292f,0.23478f,0f,0.04516f,0.23093f,0f,0.05692f,0.22578f,0f,0.06487f,0.21714f,0f,0.07192f,0.20778f,0f,0.07394f,0.20483f,0f,0.07573f,0.20169f,0f,0.07727f,0.1984f,0f,0.07855f,0.19499f,0f,0.07957f,0.19149f,0f,0.08031f,0.18793f,0f,0.08077f,0.18435f,0f,0.08092f,0.18078f,0f,0.08081f,0.17768f,0f,0.0805f,0.17459f,0f,0.0793f,0.16845f,0f,0.07741f,0.16248f,0f,0.07492f,0.15678f,0f,0.06929f,0.14898f,0f,0.06292f,0.14178f,0f,0.0607f,0.13971f,0f,0.05833f,0.13777f,0f,0.05583f,0.13599f,0f,0.05322f,0.13437f,0f,0.0505f,0.13293f,0f,0.0477f,0.13168f,0f,0.04483f,0.13062f,0f,0.04192f,0.12978f,0f,0.037f,0.12685f,0f,0.03181f,0.12439f,0f,0.02643f,0.12237f,0f,0.02092f,0.12078f,0f,0.03292f,0.11778f,0f,0.04492f,0.11478f,0f,0.05724f,0.10939f,0f,0.0632f,0.10628f,0f,-0.35108f,0.23778f,0f,-0.35108f,0.22578f,0f,-0.35393f,0.22453f,0f,-0.35692f,0.22359f,0f,-0.35998f,0.22299f,0f,-0.36153f,0.22283f,0f,-0.36308f,0.22278f,0f,-0.36783f,0.22013f,0f,-0.37005f,0.21856f,0f,-0.37208f,0.21678f,0f,-0.37387f,0.21612f,0f,-0.37564f,0.21533f,0f,-0.37737f,0.21441f,0f,-0.37902f,0.21336f,0f,-0.38055f,0.21217f,0f,-0.38193f,0.21085f,0f,-0.38255f,0.21013f,0f,-0.38312f,0.20938f,0f,-0.38363f,0.2086f,0f,-0.38408f,0.20778f,0f,-0.38519f,0.20653f,0f,-0.38615f,0.20516f,0f,-0.387f,0.20371f,0f,-0.38774f,0.20218f,0f,-0.39008f,0.19578f,0f,-0.40456f,0.14762f,0f,-0.42008f,0.09978f,0f,-0.43714f,0.04248f,0f,-0.45608f,-0.01422f,0f,-0.47108f,-0.01422f,0f,-0.53408f,0.17478f,0f,-0.60008f,-0.01422f,0f,-0.61508f,-0.01422f,0f,-0.63348f,0.04866f,0f,-0.65108f,0.11178f,0f,-0.66332f,0.15671f,0f,-0.67508f,0.20178f,0f,-0.67687f,0.20381f,0f,-0.67843f,0.20602f,0f,-0.68108f,0.21078f,0f,-0.68311f,0.21256f,0f,-0.68533f,0.21413f,0f,-0.69008f,0.21678f,0f,-0.69211f,0.21856f,0f,-0.69433f,0.22013f,0f,-0.69908f,0.22278f,0f,-0.70028f,0.22281f,0f,-0.70151f,0.22293f,0f,-0.70273f,0.22314f,0f,-0.70393f,0.22344f,0f,-0.70508f,0.22385f,0f,-0.70618f,0.22437f,0f,-0.70718f,0.22501f,0f,-0.70808f,0.22578f,0f,-0.70808f,0.23778f,0f,-0.60908f,0.23778f,0f,-0.60908f,0.22578f,0f,-0.6195f,0.22363f,0f,-0.62478f,0.223f,0f,-0.63008f,0.22278f,0f,-0.634f,0.22156f,0f,-0.63601f,0.22072f,0f,-0.6379f,0.2197f,0f,-0.63877f,0.21912f,0f,-0.63956f,0.2185f,0f,-0.64027f,0.21784f,0f,-0.64089f,0.21712f,0f,-0.64139f,0.21636f,0f,-0.64176f,0.21555f,0f,-0.642f,0.21469f,0f,-0.64208f,0.21378f,0f,-0.64058f,0.21228f,0f,-0.63908f,0.21078f,0f,-0.63908f,0.20478f,0f,-0.63238f,0.17907f,0f,-0.62408f,0.15378f,0f,-0.60931f,0.10121f,0f,-0.59408f,0.04878f,0f,-0.53408f,0.23478f,0f,-0.51608f,0.23478f,0f,-0.45008f,0.04278f,0f,-0.43964f,0.08179f,0f,-0.42908f,0.12078f,0f,-0.42166f,0.1478f,0f,-0.41408f,0.17478f,0f,-0.4101f,0.18662f,0f,-0.40865f,0.19265f,0f,-0.40823f,0.1957f,0f,-0.40808f,0.19878f,0f,-0.40808f,0.20778f,0f,-0.40811f,0.20861f,0f,-0.40821f,0.20945f,0f,-0.40836f,0.21027f,0f,-0.40857f,0.21109f,0f,-0.40914f,0.21271f,0f,-0.40989f,0.21427f,0f,-0.41079f,0.21577f,0f,-0.41181f,0.2172f,0f,-0.41291f,0.21854f,0f,-0.41408f,0.21978f,0f});
  }
}
protected class MFVec3f420 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.42745f,0.2233f,0f,-0.44108f,0.22578f,0f,-0.44108f,0.23778f,0f,-0.14408f,0.06378f,0f,-0.13208f,0.06378f,0f,-0.13808f,-0.01122f,0f,-0.34208f,-0.01122f,0f,-0.34208f,0.00078f,0f,-0.33008f,0.00078f,0f,-0.32688f,0.00084f,0f,-0.32524f,0.00096f,0f,-0.32363f,0.00118f,0f,-0.32207f,0.00155f,0f,-0.32132f,0.00179f,0f,-0.32061f,0.00208f,0f,-0.31992f,0.00242f,0f,-0.31926f,0.00281f,0f,-0.31865f,0.00326f,0f,-0.31808f,0.00378f,0f,-0.31333f,0.00643f,0f,-0.31111f,0.00799f,0f,-0.30908f,0.00978f,0f,-0.30857f,0.01035f,0f,-0.30811f,0.01096f,0f,-0.30772f,0.01161f,0f,-0.30738f,0.0123f,0f,-0.30709f,0.01302f,0f,-0.30685f,0.01377f,0f,-0.30649f,0.01532f,0f,-0.30626f,0.01694f,0f,-0.30614f,0.01857f,0f,-0.30608f,0.02178f,0f,-0.30608f,0.20178f,0f,-0.30612f,0.20298f,0f,-0.30623f,0.2042f,0f,-0.30644f,0.20543f,0f,-0.30674f,0.20662f,0f,-0.30715f,0.20778f,0f,-0.30767f,0.20887f,0f,-0.30831f,0.20988f,0f,-0.30908f,0.21078f,0f,-0.30978f,0.21196f,0f,-0.3102f,0.21253f,0f,-0.31066f,0.21308f,0f,-0.31169f,0.21409f,0f,-0.31283f,0.21499f,0f,-0.31344f,0.21538f,0f,-0.31407f,0.21573f,0f,-0.31472f,0.21604f,0f,-0.31538f,0.21629f,0f,-0.31672f,0.21665f,0f,-0.31808f,0.21678f,0f,-0.31933f,0.21789f,0f,-0.32069f,0.21885f,0f,-0.32215f,0.21969f,0f,-0.32367f,0.22043f,0f,-0.33008f,0.22278f,0f,-0.33328f,0.22284f,0f,-0.33492f,0.22296f,0f,-0.33653f,0.22318f,0f,-0.33809f,0.22355f,0f,-0.33884f,0.22379f,0f,-0.33955f,0.22408f,0f,-0.34024f,0.22442f,0f,-0.3409f,0.22481f,0f,-0.34151f,0.22526f,0f,-0.34208f,0.22578f,0f,-0.34208f,0.23778f,0f,-0.15008f,0.23778f,0f,-0.15008f,0.17778f,0f,-0.16208f,0.17778f,0f,-0.16598f,0.18489f,0f,-0.17036f,0.19174f,0f,-0.18008f,0.20478f,0f,-0.18442f,0.20995f,0f,-0.18682f,0.21248f,0f,-0.18937f,0.2148f,0f,-0.19207f,0.2168f,0f,-0.19348f,0.21765f,0f,-0.19493f,0.21838f,0f,-0.19641f,0.21897f,0f,-0.19793f,0.21941f,0f,-0.19949f,0.21968f,0f,-0.20108f,0.21978f,0f,-0.21308f,0.21978f,0f,-0.21747f,0.22106f,0f,-0.22196f,0.222f,0f,-0.22651f,0.22258f,0f,-0.23108f,0.22278f,0f,-0.27008f,0.22278f,0f,-0.27008f,0.12378f,0f,-0.24308f,0.12378f,0f,-0.22508f,0.12378f,0f,-0.22329f,0.12443f,0f,-0.22152f,0.12522f,0f,-0.21979f,0.12614f,0f,-0.21814f,0.12719f,0f,-0.21661f,0.12838f,0f,-0.21523f,0.12971f,0f,-0.21461f,0.13042f,0f,-0.21404f,0.13117f,0f,-0.21353f,0.13196f,0f,-0.21308f,0.13278f,0f,-0.20982f,0.14017f,0f,-0.20708f,0.14778f,0f,-0.20408f,0.15678f,0f,-0.20108f,0.16578f,0f,-0.18908f,0.16578f,0f,-0.18908f,0.06678f,0f,-0.20108f,0.06678f,0f,-0.20434f,0.07417f,0f,-0.20708f,0.08178f,0f,-0.20982f,0.08939f,0f,-0.21308f,0.09678f,0f,-0.21582f,0.09936f,0f,-0.21873f,0.10176f,0f,-0.22182f,0.10392f,0f,-0.22508f,0.10578f,0f,-0.22717f,0.10669f,0f,-0.22933f,0.10739f,0f,-0.23156f,0.10792f,0f,-0.23384f,0.1083f,0f,-0.23847f,0.10869f,0f,-0.24308f,0.10878f,0f,-0.27008f,0.10878f,0f,-0.27008f,0.03378f,0f,-0.27008f,0.01578f,0f,-0.26743f,0.01102f,0f,-0.26587f,0.00881f,0f,-0.26408f,0.00678f,0f,-0.26123f,0.00553f,0f,-0.25824f,0.00459f,0f,-0.25518f,0.00399f,0f,-0.25363f,0.00383f,0f,-0.25208f,0.00378f,0f,-0.22808f,0.00378f,0f,-0.21308f,0.00378f,0f,-0.19808f,0.00378f,0f,-0.19427f,0.00402f,0f,-0.19048f,0.00467f,0f,-0.18308f,0.00678f,0f,-0.18188f,0.00681f,0f,-0.18065f,0.00693f,0f,-0.17943f,0.00714f,0f,-0.17823f,0.00744f,0f,-0.17708f,0.00785f,0f,-0.17599f,0.00837f,0f,-0.17498f,0.00901f,0f,-0.17408f,0.00978f,0f,-0.16872f,0.01586f,0f,-0.16403f,0.02252f,0f,-0.15608f,0.03678f,0f,-0.1496f,0.05008f,0f});
  }
}
protected class MFVec3f421 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f422 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f423 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f424 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f425 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f426 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32427 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {38,0,37,-1,37,0,1,-1,25,1,2,-1,3,25,2,-1,3,15,25,-1,3,14,15,-1,3,13,14,-1,3,12,13,-1,3,11,12,-1,3,4,11,-1,11,4,10,-1,10,4,5,-1,6,10,5,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1,37,1,25,-1,26,37,25,-1,26,27,37,-1,37,27,28,-1,29,37,28,-1,29,30,37,-1,37,30,31,-1,32,37,31,-1,32,33,37,-1,37,33,34,-1,36,34,35,-1,36,37,34,-1,15,16,25,-1,25,16,17,-1,18,25,17,-1,18,19,25,-1,25,19,20,-1,21,25,20,-1,21,24,25,-1,21,23,24,-1,21,22,23,-1});
  }
}
protected class MFVec3f428 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.01508f,0.12678f,0f,-0.00292f,0.12732f,0f,0.00308f,0.12823f,0f,0.00892f,0.12978f,0f,0.01381f,0.1312f,0f,0.01858f,0.13311f,0f,0.02086f,0.13427f,0f,0.02302f,0.1356f,0f,0.02505f,0.1371f,0f,0.02692f,0.13878f,0f,0.03202f,0.14748f,0f,0.03414f,0.15206f,0f,0.03592f,0.15678f,0f,0.03733f,0.16189f,0f,0.03826f,0.16714f,0f,0.03877f,0.17246f,0f,0.03892f,0.17778f,0f,0.03874f,0.18222f,0f,0.03821f,0.18671f,0f,0.03731f,0.19118f,0f,0.03602f,0.19556f,0f,0.03435f,0.19979f,0f,0.03229f,0.20378f,0f,0.02981f,0.20746f,0f,0.02842f,0.20917f,0f,0.02692f,0.21078f,0f,0.02518f,0.21239f,0f,0.02332f,0.21386f,0f,0.02136f,0.21521f,0f,0.0193f,0.21643f,0f,0.01493f,0.2185f,0f,0.01031f,0.22013f,0f,0.00551f,0.22134f,0f,0.00062f,0.22216f,0f,-0.00427f,0.22263f,0f,-0.00908f,0.22278f,0f,-0.02408f,0.22278f,0f,-0.03608f,0.22278f,0f,-0.03608f,0.12678f,0f});
  }
}
protected class MFVec3f429 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32430 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f431 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.29253f,-0.02042f,0.1f,0.28487f,-0.02001f,0.1f,0.27725f,-0.01884f,0.1f,0.26978f,-0.01695f,0.1f,0.26253f,-0.01442f,0.1f,0.26253f,-0.01442f,0f,0.26978f,-0.01695f,0f,0.27725f,-0.01884f,0f,0.28487f,-0.02001f,0f,0.29253f,-0.02042f,0f});
  }
}
protected class MFVec3f432 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.10395f,-0.99458f,0f,-0.19952f,-0.97989f,0f,-0.28812f,-0.9576f,0f,-0.37139f,-0.92848f,0f,-0.37139f,-0.92848f,0f,-0.28812f,-0.9576f,0f,-0.19952f,-0.97989f,0f,-0.10395f,-0.99458f,0f,0f,-1f,0f});
  }
}
protected class MFInt32433 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f434 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26253f,-0.01442f,0.1f,0.2593f,-0.0135f,0.1f,0.25612f,-0.01238f,0.1f,0.24996f,-0.00962f,0.1f,0.24408f,-0.00625f,0.1f,0.23853f,-0.00242f,0.1f,0.23853f,-0.00242f,0f,0.24408f,-0.00625f,0f,0.24996f,-0.00962f,0f,0.25612f,-0.01238f,0f,0.2593f,-0.0135f,0f,0.26253f,-0.01442f,0f});
  }
}
protected class MFVec3f435 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24254f,-0.97014f,0f,-0.30355f,-0.95282f,0f,-0.35921f,-0.93326f,0f,-0.45562f,-0.89018f,0f,-0.53473f,-0.84502f,0f,-0.6f,-0.8f,0f,-0.6f,-0.8f,0f,-0.53473f,-0.84502f,0f,-0.45562f,-0.89018f,0f,-0.35921f,-0.93326f,0f,-0.30355f,-0.95282f,0f,-0.24254f,-0.97014f,0f});
  }
}
protected class MFInt32436 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f437 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23853f,-0.00242f,0.1f,0.23425f,0.00075f,0.1f,0.23029f,0.00435f,0.1f,0.2267f,0.00831f,0.1f,0.22353f,0.01258f,0.1f,0.22353f,0.01258f,0f,0.2267f,0.00831f,0f,0.23029f,0.00435f,0f,0.23425f,0.00075f,0f,0.23853f,-0.00242f,0f});
  }
}
protected class MFVec3f438 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.5547f,-0.83205f,0f,-0.63491f,-0.77259f,0f,-0.70711f,-0.70711f,0f,-0.77259f,-0.63491f,0f,-0.83205f,-0.5547f,0f,-0.83205f,-0.5547f,0f,-0.77259f,-0.63491f,0f,-0.70711f,-0.70711f,0f,-0.63491f,-0.77259f,0f,-0.5547f,-0.83205f,0f});
  }
}
protected class MFInt32439 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f440 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22353f,0.01258f,0.1f,0.22225f,0.01697f,0.1f,0.22131f,0.02146f,0.1f,0.22073f,0.02601f,0.1f,0.22053f,0.03058f,0.1f,0.22053f,0.03058f,0f,0.22073f,0.02601f,0f,0.22131f,0.02146f,0f,0.22225f,0.01697f,0f,0.22353f,0.01258f,0f});
  }
}
protected class MFVec3f441 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.97003f,-0.24298f,0f,-0.98605f,-0.16647f,0f,-0.99632f,-0.08575f,0f,-1f,0f,0f,-1f,0f,0f,-0.99632f,-0.08575f,0f,-0.98605f,-0.16647f,0f,-0.97003f,-0.24298f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32442 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f443 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22053f,0.03058f,0.1f,0.22059f,0.03379f,0.1f,0.22071f,0.03542f,0.1f,0.22093f,0.03703f,0.1f,0.2213f,0.03859f,0.1f,0.22154f,0.03934f,0.1f,0.22183f,0.04006f,0.1f,0.22217f,0.04074f,0.1f,0.22256f,0.0414f,0.1f,0.22301f,0.04201f,0.1f,0.22353f,0.04258f,0.1f,0.22353f,0.04258f,0f,0.22301f,0.04201f,0f,0.22256f,0.0414f,0f,0.22217f,0.04074f,0f,0.22183f,0.04006f,0f,0.22154f,0.03934f,0f,0.2213f,0.03859f,0f,0.22093f,0.03703f,0f,0.22071f,0.03542f,0f,0.22059f,0.03379f,0f,0.22053f,0.03058f,0f});
  }
}
protected class MFVec3f444 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.9988f,0.04898f,0f,-0.99469f,0.1029f,0f,-0.98386f,0.17892f,0f,-0.96007f,0.27976f,0f,-0.94044f,0.33996f,0f,-0.91369f,0.40641f,0f,-0.87821f,0.47828f,0f,-0.8325f,0.55403f,0f,-0.77553f,0.63131f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.77553f,0.63131f,0f,-0.8325f,0.55403f,0f,-0.87821f,0.47828f,0f,-0.91369f,0.40641f,0f,-0.94044f,0.33996f,0f,-0.96007f,0.27976f,0f,-0.98386f,0.17892f,0f,-0.99469f,0.1029f,0f,-0.9988f,0.04898f,0f,-1f,0f,0f});
  }
}
protected class MFInt32445 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,17,-1,18,19,15,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,15,16,17,-1});
  }
}
protected class MFVec3f446 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22353f,0.04258f,0.1f,0.22387f,0.04346f,0.1f,0.22429f,0.04433f,0.1f,0.22479f,0.04517f,0.1f,0.22537f,0.04599f,0.1f,0.226f,0.04677f,0.1f,0.2267f,0.04751f,0.1f,0.22745f,0.04821f,0.1f,0.22825f,0.04886f,0.1f,0.22908f,0.04945f,0.1f,0.22995f,0.04998f,0.1f,0.23085f,0.05045f,0.1f,0.23177f,0.05084f,0.1f,0.2327f,0.05116f,0.1f,0.23364f,0.05139f,0.1f,0.23459f,0.05153f,0.1f,0.23553f,0.05158f,0.1f,0.23553f,0.05158f,0f,0.23459f,0.05153f,0f,0.23364f,0.05139f,0f,0.2327f,0.05116f,0f,0.23177f,0.05084f,0f,0.23085f,0.05045f,0f,0.22995f,0.04998f,0f,0.22908f,0.04945f,0f,0.22825f,0.04886f,0f,0.22745f,0.04821f,0f,0.2267f,0.04751f,0f,0.226f,0.04677f,0f,0.22537f,0.04599f,0f,0.22479f,0.04517f,0f,0.22429f,0.04433f,0f,0.22387f,0.04346f,0f,0.22353f,0.04258f,0f});
  }
}
protected class MFVec3f447 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.91601f,0.40116f,0f,-0.87909f,0.47666f,0f,-0.83912f,0.54395f,0f,-0.79679f,0.60426f,0f,-0.7524f,0.6587f,0f,-0.70594f,0.70827f,0f,-0.65716f,0.75375f,0f,-0.60561f,0.79576f,0f,-0.55069f,0.83471f,0f,-0.49164f,0.8708f,0f,-0.42758f,0.90398f,0f,-0.35756f,0.93389f,0f,-0.28056f,0.95984f,0f,-0.19567f,0.98067f,0f,-0.1022f,0.99476f,0f,0f,1f,0f,0f,1f,0f,-0.1022f,0.99476f,0f,-0.19567f,0.98067f,0f,-0.28056f,0.95984f,0f,-0.35756f,0.93389f,0f,-0.42758f,0.90398f,0f,-0.49164f,0.8708f,0f,-0.55069f,0.83471f,0f,-0.60561f,0.79576f,0f,-0.65716f,0.75375f,0f,-0.70594f,0.70827f,0f,-0.7524f,0.6587f,0f,-0.79679f,0.60426f,0f,-0.83912f,0.54395f,0f,-0.87909f,0.47666f,0f,-0.91601f,0.40116f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32448 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f449 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23553f,0.05158f,0.1f,0.23793f,0.05151f,0.1f,0.24038f,0.05127f,0.1f,0.24282f,0.05086f,0.1f,0.24522f,0.05026f,0.1f,0.24753f,0.04944f,0.1f,0.24972f,0.04841f,0.1f,0.25075f,0.0478f,0.1f,0.25173f,0.04712f,0.1f,0.25266f,0.04639f,0.1f,0.25353f,0.04558f,0.1f,0.25353f,0.04558f,0f,0.25266f,0.04639f,0f,0.25173f,0.04712f,0f,0.25075f,0.0478f,0f,0.24972f,0.04841f,0f,0.24753f,0.04944f,0f,0.24522f,0.05026f,0f,0.24282f,0.05086f,0f,0.24038f,0.05127f,0f,0.23793f,0.05151f,0f,0.23553f,0.05158f,0f});
  }
}
protected class MFVec3f450 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06216f,0.99807f,0f,0.12928f,0.99161f,0f,0.20336f,0.9791f,0f,0.28619f,0.95817f,0f,0.37907f,0.92537f,0f,0.48214f,0.87609f,0f,0.53698f,0.84359f,0f,0.59334f,0.80495f,0f,0.65041f,0.75958f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.65041f,0.75958f,0f,0.59334f,0.80495f,0f,0.53698f,0.84359f,0f,0.48214f,0.87609f,0f,0.37907f,0.92537f,0f,0.28619f,0.95817f,0f,0.20336f,0.9791f,0f,0.12928f,0.99161f,0f,0.06216f,0.99807f,0f,0f,1f,0f});
  }
}
protected class MFInt32451 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,19,-1,20,21,3,-1,22,2,21,-1,3,4,19,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f452 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25353f,0.04558f,0.1f,0.25471f,0.04488f,0.1f,0.25528f,0.04446f,0.1f,0.25583f,0.044f,0.1f,0.25684f,0.04298f,0.1f,0.25774f,0.04183f,0.1f,0.25813f,0.04122f,0.1f,0.25848f,0.04059f,0.1f,0.25879f,0.03994f,0.1f,0.25904f,0.03928f,0.1f,0.2594f,0.03794f,0.1f,0.25953f,0.03658f,0.1f,0.25953f,0.03658f,0f,0.2594f,0.03794f,0f,0.25904f,0.03928f,0f,0.25879f,0.03994f,0f,0.25848f,0.04059f,0f,0.25813f,0.04122f,0f,0.25774f,0.04183f,0f,0.25684f,0.04298f,0f,0.25583f,0.044f,0f,0.25528f,0.04446f,0f,0.25471f,0.04488f,0f,0.25353f,0.04558f,0f});
  }
}
protected class MFVec3f453 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,0.89443f,0f,0.56714f,0.82362f,0f,0.61888f,0.78549f,0f,0.66627f,0.74571f,0f,0.75071f,0.66063f,0f,0.82442f,0.56598f,0f,0.85788f,0.51385f,0f,0.88911f,0.45769f,0f,0.9179f,0.39682f,0f,0.9438f,0.33052f,0f,0.98384f,0.17903f,0f,1f,0f,0f,1f,0f,0f,0.98384f,0.17903f,0f,0.9438f,0.33052f,0f,0.9179f,0.39682f,0f,0.88911f,0.45769f,0f,0.85788f,0.51385f,0f,0.82442f,0.56598f,0f,0.75071f,0.66063f,0f,0.66627f,0.74571f,0f,0.61888f,0.78549f,0f,0.56714f,0.82362f,0f,0.44721f,0.89443f,0f});
  }
}
protected class MFInt32454 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f455 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25953f,0.03658f,0.1f,0.25929f,0.03277f,0.1f,0.25863f,0.02898f,0.1f,0.25653f,0.02158f,0.1f,0.25653f,0.02158f,0f,0.25863f,0.02898f,0f,0.25929f,0.03277f,0f,0.25953f,0.03658f,0f});
  }
}
protected class MFVec3f456 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,-0.12161f,0f,0.97691f,-0.21363f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.97691f,-0.21363f,0f,0.99258f,-0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt32457 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f458 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25653f,0.02158f,0.1f,0.25528f,0.01873f,0.1f,0.25434f,0.01574f,0.1f,0.25374f,0.01268f,0.1f,0.25358f,0.01113f,0.1f,0.25353f,0.00958f,0.1f,0.25353f,0.00958f,0f,0.25358f,0.01113f,0f,0.25374f,0.01268f,0f,0.25434f,0.01574f,0f,0.25528f,0.01873f,0f,0.25653f,0.02158f,0f});
  }
}
protected class MFVec3f459 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,-0.44722f,0f,0.93577f,-0.35262f,0f,0.96859f,-0.24866f,0f,0.99125f,-0.13201f,0f,0.99768f,-0.06804f,0f,1f,0f,0f,1f,0f,0f,0.99768f,-0.06804f,0f,0.99125f,-0.13201f,0f,0.96859f,-0.24866f,0f,0.93577f,-0.35262f,0f,0.89443f,-0.44722f,0f});
  }
}
protected class MFInt32460 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f461 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25353f,0.00958f,0.1f,0.25503f,0.00808f,0.1f,0.25653f,0.00658f,0.1f,0.25653f,0.00658f,0f,0.25503f,0.00808f,0f,0.25353f,0.00958f,0f});
  }
}
protected class MFVec3f462 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.7071f,0.70711f,0f,0.7071f,0.70711f,0f,0.7071f,0.70711f,0f,0.7071f,0.70711f,0f,0.7071f,0.70711f,0f,0.7071f,0.70711f,0f});
  }
}
protected class MFInt32463 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f464 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.25653f,0.00658f,0.1f,0.25856f,0.00479f,0.1f,0.26077f,0.00323f,0.1f,0.26553f,0.00058f,0.1f,0.26553f,0.00058f,0f,0.26077f,0.00323f,0f,0.25856f,0.00479f,0f,0.25653f,0.00658f,0f});
  }
}
protected class MFVec3f465 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.61587f,0.78785f,0f,0.53972f,0.84184f,0f,0.44721f,0.89443f,0f,0.44721f,0.89443f,0f,0.53972f,0.84184f,0f,0.61587f,0.78785f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32466 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f467 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26553f,0.00058f,0.1f,0.26708f,0.00053f,0.1f,0.26862f,0.00037f,0.1f,0.27169f,-0.00023f,0.1f,0.27468f,-0.00117f,0.1f,0.27753f,-0.00242f,0.1f,0.27753f,-0.00242f,0f,0.27468f,-0.00117f,0f,0.27169f,-0.00023f,0f,0.26862f,0.00037f,0f,0.26708f,0.00053f,0f,0.26553f,0.00058f,0f});
  }
}
protected class MFVec3f468 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06804f,0.99768f,0f,0.13201f,0.99125f,0f,0.24866f,0.96859f,0f,0.35262f,0.93577f,0f,0.44721f,0.89443f,0f,0.44721f,0.89443f,0f,0.35262f,0.93577f,0f,0.24866f,0.96859f,0f,0.13201f,0.99125f,0f,0.06804f,0.99768f,0f,0f,1f,0f});
  }
}
protected class MFInt32469 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1});
  }
}
protected class MFVec3f470 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.27753f,-0.00242f,0.1f,0.27961f,-0.00333f,0.1f,0.28178f,-0.00404f,0.1f,0.28401f,-0.00456f,0.1f,0.28629f,-0.00494f,0.1f,0.29091f,-0.00533f,0.1f,0.29553f,-0.00542f,0.1f,0.29553f,-0.00542f,0f,0.29091f,-0.00533f,0f,0.28629f,-0.00494f,0f,0.28401f,-0.00456f,0f,0.28178f,-0.00404f,0f,0.27961f,-0.00333f,0f,0.27753f,-0.00242f,0f});
  }
}
protected class MFVec3f471 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,0.89443f,0f,0.35328f,0.93552f,0f,0.26836f,0.96332f,0f,0.19461f,0.98088f,0f,0.13281f,0.99114f,0f,0.04437f,0.99902f,0f,0f,1f,0f,0f,1f,0f,0.04437f,0.99902f,0f,0.13281f,0.99114f,0f,0.19461f,0.98088f,0f,0.26836f,0.96332f,0f,0.35328f,0.93552f,0f,0.44721f,0.89443f,0f});
  }
}
protected class MFInt32472 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f473 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.29553f,-0.00542f,0.1f,0.2979f,-0.00531f,0.1f,0.30027f,-0.00497f,0.1f,0.30261f,-0.00445f,0.1f,0.30493f,-0.00373f,0.1f,0.30719f,-0.00286f,0.1f,0.30938f,-0.00184f,0.1f,0.31353f,0.00058f,0.1f,0.31353f,0.00058f,0f,0.30938f,-0.00184f,0f,0.30719f,-0.00286f,0f,0.30493f,-0.00373f,0f,0.30261f,-0.00445f,0f,0.30027f,-0.00497f,0f,0.2979f,-0.00531f,0f,0.29553f,-0.00542f,0f});
  }
}
protected class MFVec3f474 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.09439f,0.99554f,0f,-0.18037f,0.9836f,0f,-0.25818f,0.9661f,0f,-0.32853f,0.94449f,0f,-0.39234f,0.91982f,0f,-0.45064f,0.89271f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.45064f,0.89271f,0f,-0.39234f,0.91982f,0f,-0.32853f,0.94449f,0f,-0.25818f,0.9661f,0f,-0.18037f,0.9836f,0f,-0.09439f,0.99554f,0f,0f,1f,0f});
  }
}
protected class MFInt32475 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f476 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31353f,0.00058f,0.1f,0.31842f,0.00201f,0.1f,0.32319f,0.00391f,0.1f,0.32546f,0.00508f,0.1f,0.32763f,0.0064f,0.1f,0.32966f,0.0079f,0.1f,0.33153f,0.00958f,0.1f,0.33153f,0.00958f,0f,0.32966f,0.0079f,0f,0.32763f,0.0064f,0f,0.32546f,0.00508f,0f,0.32319f,0.00391f,0f,0.31842f,0.00201f,0f,0.31353f,0.00058f,0f});
  }
}
protected class MFVec3f477 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24254f,0.97014f,0f,-0.32084f,0.94713f,0f,-0.42529f,0.90506f,0f,-0.48778f,0.87297f,0f,-0.55663f,0.83076f,0f,-0.63055f,0.77615f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.63055f,0.77615f,0f,-0.55663f,0.83076f,0f,-0.48778f,0.87297f,0f,-0.42529f,0.90506f,0f,-0.32084f,0.94713f,0f,-0.24254f,0.97014f,0f});
  }
}
protected class MFInt32478 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f479 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.33153f,0.00958f,0.1f,0.3336f,0.0118f,0.1f,0.33553f,0.01417f,0.1f,0.33731f,0.01667f,0.1f,0.33893f,0.01929f,0.1f,0.34037f,0.022f,0.1f,0.34163f,0.0248f,0.1f,0.34268f,0.02767f,0.1f,0.34353f,0.03058f,0.1f,0.34353f,0.03058f,0f,0.34268f,0.02767f,0f,0.34163f,0.0248f,0f,0.34037f,0.022f,0f,0.33893f,0.01929f,0f,0.33731f,0.01667f,0f,0.33553f,0.01417f,0f,0.3336f,0.0118f,0f,0.33153f,0.00958f,0f});
  }
}
protected class MFVec3f480 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.7533f,0.65768f,0f,-0.79509f,0.60649f,0f,-0.83298f,0.5533f,0f,-0.86731f,0.49776f,0f,-0.89827f,0.43945f,0f,-0.92587f,0.37783f,0f,-0.94996f,0.31238f,0f,-0.97014f,0.24253f,0f,-0.97014f,0.24253f,0f,-0.94996f,0.31238f,0f,-0.92587f,0.37783f,0f,-0.89827f,0.43945f,0f,-0.86731f,0.49776f,0f,-0.83298f,0.5533f,0f,-0.79509f,0.60649f,0f,-0.7533f,0.65768f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32481 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f482 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34353f,0.03058f,0.1f,0.3451f,0.03324f,0.1f,0.34639f,0.03607f,0.1f,0.34744f,0.03902f,0.1f,0.34824f,0.04206f,0.1f,0.34883f,0.04517f,0.1f,0.34923f,0.04832f,0.1f,0.34953f,0.05458f,0.1f,0.34953f,0.05458f,0f,0.34923f,0.04832f,0f,0.34883f,0.04517f,0f,0.34824f,0.04206f,0f,0.34744f,0.03902f,0f,0.34639f,0.03607f,0f,0.3451f,0.03324f,0f,0.34353f,0.03058f,0f});
  }
}
protected class MFVec3f483 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.88703f,0.46172f,0f,-0.92748f,0.37386f,0f,-0.95608f,0.29311f,0f,-0.97545f,0.22022f,0f,-0.9879f,0.1551f,0f,-0.99526f,0.0972f,0f,-1f,0f,0f,-1f,0f,0f,-0.99526f,0.0972f,0f,-0.9879f,0.1551f,0f,-0.97545f,0.22022f,0f,-0.95608f,0.29311f,0f,-0.92748f,0.37386f,0f,-0.88703f,0.46172f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt32484 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f485 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34953f,0.05458f,0.1f,0.34933f,0.05915f,0.1f,0.34875f,0.0637f,0.1f,0.34781f,0.06819f,0.1f,0.34653f,0.07258f,0.1f,0.34653f,0.07258f,0f,0.34781f,0.06819f,0f,0.34875f,0.0637f,0f,0.34933f,0.05915f,0f,0.34953f,0.05458f,0f});
  }
}
protected class MFVec3f486 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99632f,-0.08575f,0f,-0.98605f,-0.16647f,0f,-0.97003f,-0.24298f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.97003f,-0.24298f,0f,-0.98605f,-0.16647f,0f,-0.99632f,-0.08575f,0f,-1f,0f,0f});
  }
}
protected class MFInt32487 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f488 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34653f,0.07258f,0.1f,0.34475f,0.07729f,0.1f,0.34263f,0.08187f,0.1f,0.33753f,0.09058f,0.1f,0.33753f,0.09058f,0f,0.34263f,0.08187f,0f,0.34475f,0.07729f,0f,0.34653f,0.07258f,0f});
  }
}
protected class MFVec3f489 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.92164f,-0.38803f,0f,-0.89248f,-0.45108f,0f,-0.83205f,-0.5547f,0f,-0.83205f,-0.5547f,0f,-0.89248f,-0.45108f,0f,-0.92164f,-0.38803f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32490 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,18,-1,19,20,2,-1,2,3,18,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f491 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.33753f,0.09058f,0.1f,0.33708f,0.0914f,0.1f,0.33656f,0.09219f,0.1f,0.336f,0.09294f,0.1f,0.33538f,0.09365f,0.1f,0.334f,0.09498f,0.1f,0.33247f,0.09617f,0.1f,0.33082f,0.09722f,0.1f,0.32909f,0.09814f,0.1f,0.32731f,0.09892f,0.1f,0.32553f,0.09958f,0.1f,0.32553f,0.09958f,0f,0.32731f,0.09892f,0f,0.32909f,0.09814f,0f,0.33082f,0.09722f,0f,0.33247f,0.09617f,0f,0.334f,0.09498f,0f,0.33538f,0.09365f,0f,0.336f,0.09294f,0f,0.33656f,0.09219f,0f,0.33708f,0.0914f,0f,0.33753f,0.09058f,0f});
  }
}
protected class MFVec3f492 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.85724f,-0.51492f,0f,-0.81744f,-0.57601f,0f,-0.77619f,-0.6305f,0f,-0.73445f,-0.67867f,0f,-0.65224f,-0.75801f,0f,-0.57451f,-0.8185f,0f,-0.50255f,-0.86455f,0f,-0.43622f,-0.89984f,0f,-0.37459f,-0.92719f,0f,-0.31623f,-0.94868f,0f,-0.31623f,-0.94868f,0f,-0.37459f,-0.92719f,0f,-0.43622f,-0.89984f,0f,-0.50255f,-0.86455f,0f,-0.57451f,-0.8185f,0f,-0.65224f,-0.75801f,0f,-0.73445f,-0.67867f,0f,-0.77619f,-0.6305f,0f,-0.81744f,-0.57601f,0f,-0.85724f,-0.51492f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32493 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f494 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.32553f,0.09958f,0.1f,0.32286f,0.10115f,0.1f,0.32004f,0.10245f,0.1f,0.31709f,0.10349f,0.1f,0.31405f,0.1043f,0.1f,0.31094f,0.10489f,0.1f,0.30779f,0.10529f,0.1f,0.30153f,0.10558f,0.1f,0.30153f,0.10558f,0f,0.30779f,0.10529f,0f,0.31094f,0.10489f,0f,0.31405f,0.1043f,0f,0.31709f,0.10349f,0f,0.32004f,0.10245f,0f,0.32286f,0.10115f,0f,0.32553f,0.09958f,0f});
  }
}
protected class MFVec3f495 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.5547f,-0.83205f,0f,-0.46172f,-0.88703f,0f,-0.37386f,-0.92748f,0f,-0.29311f,-0.95608f,0f,-0.22022f,-0.97545f,0f,-0.15509f,-0.9879f,0f,-0.0972f,-0.99526f,0f,0f,-1f,0f,0f,-1f,0f,-0.0972f,-0.99526f,0f,-0.15509f,-0.9879f,0f,-0.22022f,-0.97545f,0f,-0.29311f,-0.95608f,0f,-0.37386f,-0.92748f,0f,-0.46172f,-0.88703f,0f,-0.5547f,-0.83205f,0f});
  }
}
protected class MFInt32496 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f497 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.30153f,0.10558f,0.1f,0.28053f,0.10558f,0.1f,0.28053f,0.10558f,0f,0.30153f,0.10558f,0f});
  }
}
protected class MFVec3f498 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32499 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f500 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.28053f,0.10558f,0.1f,0.28053f,0.12658f,0.1f,0.28053f,0.12658f,0f,0.28053f,0.10558f,0f});
  }
}
protected class MFVec3f501 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32502 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f503 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.28053f,0.12658f,0.1f,0.29553f,0.12658f,0.1f,0.29553f,0.12658f,0f,0.28053f,0.12658f,0f});
  }
}
protected class MFVec3f504 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32505 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f506 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.29553f,0.12658f,0.1f,0.29997f,0.12676f,0.1f,0.30446f,0.12729f,0.1f,0.30893f,0.1282f,0.1f,0.31331f,0.12948f,0.1f,0.31753f,0.13115f,0.1f,0.32153f,0.13321f,0.1f,0.32521f,0.13569f,0.1f,0.32692f,0.13708f,0.1f,0.32853f,0.13858f,0.1f,0.32853f,0.13858f,0f,0.32692f,0.13708f,0f,0.32521f,0.13569f,0f,0.32153f,0.13321f,0f,0.31753f,0.13115f,0f,0.31331f,0.12948f,0f,0.30893f,0.1282f,0f,0.30446f,0.12729f,0f,0.29997f,0.12676f,0f,0.29553f,0.12658f,0f});
  }
}
protected class MFVec3f507 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.07881f,0.99689f,0f,-0.15769f,0.98749f,0f,-0.23865f,0.97111f,0f,-0.32332f,0.94629f,0f,-0.4129f,0.91078f,0f,-0.50772f,0.86152f,0f,-0.6068f,0.79485f,0f,-0.65709f,0.75381f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.65709f,0.75381f,0f,-0.6068f,0.79485f,0f,-0.50772f,0.86152f,0f,-0.4129f,0.91078f,0f,-0.32332f,0.94629f,0f,-0.23865f,0.97111f,0f,-0.15769f,0.98749f,0f,-0.07881f,0.99689f,0f,0f,1f,0f});
  }
}
protected class MFInt32508 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f509 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.32853f,0.13858f,0.1f,0.33025f,0.14045f,0.1f,0.3318f,0.14246f,0.1f,0.33321f,0.14459f,0.1f,0.33446f,0.14682f,0.1f,0.33655f,0.15156f,0.1f,0.33813f,0.15659f,0.1f,0.33927f,0.1618f,0.1f,0.34f,0.1671f,0.1f,0.34053f,0.17758f,0.1f,0.34053f,0.17758f,0f,0.34f,0.1671f,0f,0.33927f,0.1618f,0f,0.33813f,0.15659f,0f,0.33655f,0.15156f,0f,0.33446f,0.14682f,0f,0.33321f,0.14459f,0f,0.3318f,0.14246f,0f,0.33025f,0.14045f,0f,0.32853f,0.13858f,0f});
  }
}
protected class MFVec3f510 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.76448f,0.64465f,0f,-0.81347f,0.5816f,0f,-0.85444f,0.51955f,0f,-0.88809f,0.45968f,0f,-0.93695f,0.34946f,0f,-0.96722f,0.25394f,0f,-0.98493f,0.17294f,0f,-0.99448f,0.10489f,0f,-1f,0f,0f,-1f,0f,0f,-0.99448f,0.10489f,0f,-0.98493f,0.17294f,0f,-0.96722f,0.25394f,0f,-0.93695f,0.34946f,0f,-0.88809f,0.45968f,0f,-0.85444f,0.51955f,0f,-0.81347f,0.5816f,0f,-0.76448f,0.64465f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32511 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,10,-1,11,12,8,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,8,9,10,-1});
  }
}
protected class MFVec3f512 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34053f,0.17758f,0.1f,0.34035f,0.18202f,0.1f,0.33982f,0.18651f,0.1f,0.33891f,0.19098f,0.1f,0.33763f,0.19537f,0.1f,0.33596f,0.19959f,0.1f,0.33389f,0.20358f,0.1f,0.33142f,0.20727f,0.1f,0.33003f,0.20898f,0.1f,0.32853f,0.21058f,0.1f,0.32853f,0.21058f,0f,0.33003f,0.20898f,0f,0.33142f,0.20727f,0f,0.33389f,0.20358f,0f,0.33596f,0.19959f,0f,0.33763f,0.19537f,0f,0.33891f,0.19098f,0f,0.33982f,0.18651f,0f,0.34035f,0.18202f,0f,0.34053f,0.17758f,0f});
  }
}
protected class MFVec3f513 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99689f,-0.07881f,0f,-0.98749f,-0.15769f,0f,-0.97111f,-0.23864f,0f,-0.94629f,-0.32332f,0f,-0.91078f,-0.41289f,0f,-0.86152f,-0.50772f,0f,-0.79485f,-0.6068f,0f,-0.75381f,-0.65709f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.75381f,-0.65709f,0f,-0.79485f,-0.6068f,0f,-0.86152f,-0.50772f,0f,-0.91078f,-0.41289f,0f,-0.94629f,-0.32332f,0f,-0.97111f,-0.23864f,0f,-0.98749f,-0.15769f,0f,-0.99689f,-0.07881f,0f,-1f,0f,0f});
  }
}
protected class MFInt32514 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {23,0,22,-1,22,0,1,-1,21,1,2,-1,3,21,2,-1,3,20,21,-1,3,4,20,-1,20,4,19,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,1,21,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f515 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.32853f,0.21058f,0.1f,0.32724f,0.21214f,0.1f,0.32582f,0.21357f,0.1f,0.32428f,0.21489f,0.1f,0.32263f,0.21609f,0.1f,0.32087f,0.21718f,0.1f,0.31903f,0.21816f,0.1f,0.31514f,0.21981f,0.1f,0.31105f,0.22106f,0.1f,0.30685f,0.22192f,0.1f,0.30264f,0.22242f,0.1f,0.29853f,0.22258f,0.1f,0.29853f,0.22258f,0f,0.30264f,0.22242f,0f,0.30685f,0.22192f,0f,0.31105f,0.22106f,0f,0.31514f,0.21981f,0f,0.31903f,0.21816f,0f,0.32087f,0.21718f,0f,0.32263f,0.21609f,0f,0.32428f,0.21489f,0f,0.32582f,0.21357f,0f,0.32724f,0.21214f,0f,0.32853f,0.21058f,0f});
  }
}
protected class MFVec3f516 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.8f,-0.6f,0f,-0.74119f,-0.6713f,0f,-0.68011f,-0.73311f,0f,-0.61857f,-0.78573f,0f,-0.55795f,-0.82987f,0f,-0.49922f,-0.86648f,0f,-0.44292f,-0.89656f,0f,-0.33848f,-0.94098f,0f,-0.2444f,-0.96968f,0f,-0.15863f,-0.98734f,0f,-0.07829f,-0.99693f,0f,0f,-1f,0f,0f,-1f,0f,-0.07829f,-0.99693f,0f,-0.15863f,-0.98734f,0f,-0.2444f,-0.96968f,0f,-0.33848f,-0.94098f,0f,-0.44292f,-0.89656f,0f,-0.49922f,-0.86648f,0f,-0.55795f,-0.82987f,0f,-0.61857f,-0.78573f,0f,-0.68011f,-0.73311f,0f,-0.74119f,-0.6713f,0f,-0.8f,-0.6f,0f});
  }
}
protected class MFInt32517 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f518 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.29853f,0.22258f,0.1f,0.29467f,0.22243f,0.1f,0.29083f,0.22194f,0.1f,0.28893f,0.22153f,0.1f,0.28708f,0.22101f,0.1f,0.28527f,0.22036f,0.1f,0.28353f,0.21958f,0.1f,0.28353f,0.21958f,0f,0.28527f,0.22036f,0f,0.28708f,0.22101f,0f,0.28893f,0.22153f,0f,0.29083f,0.22194f,0f,0.29467f,0.22243f,0f,0.29853f,0.22258f,0f});
  }
}
protected class MFVec3f519 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0.07973f,-0.99682f,0f,0.17989f,-0.98369f,0f,0.23845f,-0.97116f,0f,0.3028f,-0.95305f,0f,0.37265f,-0.92797f,0f,0.44721f,-0.89443f,0f,0.44721f,-0.89443f,0f,0.37265f,-0.92797f,0f,0.3028f,-0.95305f,0f,0.23845f,-0.97116f,0f,0.17989f,-0.98369f,0f,0.07973f,-0.99682f,0f,0f,-1f,0f});
  }
}
protected class MFInt32520 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f521 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.28353f,0.21958f,0.1f,0.27877f,0.21693f,0.1f,0.27656f,0.21537f,0.1f,0.27453f,0.21358f,0.1f,0.27453f,0.21358f,0f,0.27656f,0.21537f,0f,0.27877f,0.21693f,0f,0.28353f,0.21958f,0f});
  }
}
protected class MFVec3f522 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44722f,-0.89443f,0f,0.53972f,-0.84184f,0f,0.61587f,-0.78785f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.61587f,-0.78785f,0f,0.53972f,-0.84184f,0f,0.44722f,-0.89443f,0f});
  }
}
protected class MFInt32523 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,5,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1});
  }
}
protected class MFVec3f524 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.27453f,0.21358f,0.1f,0.26977f,0.21093f,0.1f,0.26756f,0.20937f,0.1f,0.26553f,0.20758f,0.1f,0.26553f,0.20758f,0f,0.26756f,0.20937f,0f,0.26977f,0.21093f,0f,0.27453f,0.21358f,0f});
  }
}
protected class MFVec3f525 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.53972f,-0.84184f,0f,0.61587f,-0.78785f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.61587f,-0.78785f,0f,0.53972f,-0.84184f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32526 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f527 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26553f,0.20758f,0.1f,0.26403f,0.20608f,0.1f,0.26253f,0.20458f,0.1f,0.26253f,0.20458f,0f,0.26403f,0.20608f,0f,0.26553f,0.20758f,0f});
  }
}
protected class MFVec3f528 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32529 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f530 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26253f,0.20458f,0.1f,0.26277f,0.20077f,0.1f,0.26342f,0.19698f,0.1f,0.26553f,0.18958f,0.1f,0.26553f,0.18958f,0f,0.26342f,0.19698f,0f,0.26277f,0.20077f,0f,0.26253f,0.20458f,0f});
  }
}
protected class MFVec3f531 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,0.12161f,0f,0.97691f,0.21363f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.97691f,0.21363f,0f,0.99258f,0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt32532 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1});
  }
}
protected class MFVec3f533 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26553f,0.18958f,0.1f,0.26631f,0.18784f,0.1f,0.26696f,0.18603f,0.1f,0.26748f,0.18418f,0.1f,0.26788f,0.18228f,0.1f,0.26838f,0.17843f,0.1f,0.26853f,0.17458f,0.1f,0.26853f,0.17458f,0f,0.26838f,0.17843f,0f,0.26788f,0.18228f,0f,0.26748f,0.18418f,0f,0.26696f,0.18603f,0f,0.26631f,0.18784f,0f,0.26553f,0.18958f,0f});
  }
}
protected class MFVec3f534 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,0.44721f,0f,0.92797f,0.37265f,0f,0.95305f,0.3028f,0f,0.97116f,0.23845f,0f,0.98369f,0.17989f,0f,0.99682f,0.07973f,0f,1f,0f,0f,1f,0f,0f,0.99682f,0.07973f,0f,0.98369f,0.17989f,0f,0.97116f,0.23845f,0f,0.95305f,0.3028f,0f,0.92797f,0.37265f,0f,0.89443f,0.44721f,0f});
  }
}
protected class MFInt32535 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,13,-1,14,15,7,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,7,8,13,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,13,9,12,-1});
  }
}
protected class MFVec3f536 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26853f,0.17458f,0.1f,0.26849f,0.17374f,0.1f,0.2684f,0.17291f,0.1f,0.26824f,0.17208f,0.1f,0.26803f,0.17126f,0.1f,0.26746f,0.16965f,0.1f,0.26671f,0.16809f,0.1f,0.26582f,0.16659f,0.1f,0.2648f,0.16516f,0.1f,0.26369f,0.16382f,0.1f,0.26253f,0.16258f,0.1f,0.26253f,0.16258f,0f,0.26369f,0.16382f,0f,0.2648f,0.16516f,0f,0.26582f,0.16659f,0f,0.26671f,0.16809f,0f,0.26746f,0.16965f,0f,0.26803f,0.17126f,0f,0.26824f,0.17208f,0f,0.2684f,0.17291f,0f,0.26849f,0.17374f,0f,0.26853f,0.17458f,0f});
  }
}
protected class MFVec3f537 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99702f,-0.0772f,0f,0.98874f,-0.14963f,0f,0.97621f,-0.21681f,0f,0.96042f,-0.27857f,0f,0.92238f,-0.38629f,0f,0.8799f,-0.47516f,0f,0.83613f,-0.54853f,0f,0.79259f,-0.60976f,0f,0.7497f,-0.66178f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.7497f,-0.66178f,0f,0.79259f,-0.60976f,0f,0.83613f,-0.54853f,0f,0.8799f,-0.47516f,0f,0.92238f,-0.38629f,0f,0.96042f,-0.27857f,0f,0.97621f,-0.21681f,0f,0.98874f,-0.14963f,0f,0.99702f,-0.0772f,0f,1f,0f,0f});
  }
}
protected class MFInt32538 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1});
  }
}
protected class MFVec3f539 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26253f,0.16258f,0.1f,0.26044f,0.16167f,0.1f,0.25827f,0.16096f,0.1f,0.25604f,0.16044f,0.1f,0.25377f,0.16006f,0.1f,0.24914f,0.15967f,0.1f,0.24453f,0.15958f,0.1f,0.24453f,0.15958f,0f,0.24914f,0.15967f,0f,0.25377f,0.16006f,0f,0.25604f,0.16044f,0f,0.25827f,0.16096f,0f,0.26044f,0.16167f,0f,0.26253f,0.16258f,0f});
  }
}
protected class MFVec3f540 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44722f,-0.89443f,0f,0.35328f,-0.93552f,0f,0.26836f,-0.96332f,0f,0.19461f,-0.98088f,0f,0.13281f,-0.99114f,0f,0.04437f,-0.99902f,0f,0f,-1f,0f,0f,-1f,0f,0.04437f,-0.99902f,0f,0.13281f,-0.99114f,0f,0.19461f,-0.98088f,0f,0.26836f,-0.96332f,0f,0.35328f,-0.93552f,0f,0.44722f,-0.89443f,0f});
  }
}
protected class MFInt32541 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {25,0,24,-1,24,0,1,-1,23,1,2,-1,3,23,2,-1,3,22,23,-1,3,4,22,-1,22,4,21,-1,21,4,5,-1,20,5,6,-1,19,6,7,-1,18,7,8,-1,17,8,9,-1,16,9,10,-1,15,10,11,-1,14,11,12,-1,13,14,12,-1,24,1,23,-1,21,5,20,-1,20,6,19,-1,19,7,18,-1,18,8,17,-1,17,9,16,-1,16,10,15,-1,15,11,14,-1});
  }
}
protected class MFVec3f542 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24453f,0.15958f,0.1f,0.24281f,0.15967f,0.1f,0.24105f,0.15996f,0.1f,0.23929f,0.16042f,0.1f,0.2376f,0.16108f,0.1f,0.23679f,0.16148f,0.1f,0.23602f,0.16192f,0.1f,0.2353f,0.16242f,0.1f,0.23462f,0.16296f,0.1f,0.23399f,0.16354f,0.1f,0.23343f,0.16417f,0.1f,0.23294f,0.16485f,0.1f,0.23253f,0.16558f,0.1f,0.23253f,0.16558f,0f,0.23294f,0.16485f,0f,0.23343f,0.16417f,0f,0.23399f,0.16354f,0f,0.23462f,0.16296f,0f,0.2353f,0.16242f,0f,0.23602f,0.16192f,0f,0.23679f,0.16148f,0f,0.2376f,0.16108f,0f,0.23929f,0.16042f,0f,0.24105f,0.15996f,0f,0.24281f,0.15967f,0f,0.24453f,0.15958f,0f});
  }
}
protected class MFVec3f543 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.10658f,-0.9943f,0f,-0.20754f,-0.97823f,0f,-0.30884f,-0.95111f,0f,-0.41521f,-0.90972f,0f,-0.47139f,-0.88193f,0f,-0.52987f,-0.84808f,0f,-0.59062f,-0.80695f,0f,-0.65321f,-0.75717f,0f,-0.71677f,-0.69731f,0f,-0.77974f,-0.6261f,0f,-0.83992f,-0.54271f,0f,-0.89443f,-0.44721f,0f,-0.89443f,-0.44721f,0f,-0.83992f,-0.54271f,0f,-0.77974f,-0.6261f,0f,-0.71677f,-0.69731f,0f,-0.65321f,-0.75717f,0f,-0.59062f,-0.80695f,0f,-0.52987f,-0.84808f,0f,-0.47139f,-0.88193f,0f,-0.41521f,-0.90972f,0f,-0.30884f,-0.95111f,0f,-0.20754f,-0.97823f,0f,-0.10658f,-0.9943f,0f,0f,-1f,0f});
  }
}
protected class MFInt32544 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {13,0,12,-1,12,0,1,-1,11,1,2,-1,3,11,2,-1,3,10,11,-1,3,4,10,-1,10,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,1,11,-1,9,5,8,-1});
  }
}
protected class MFVec3f545 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23253f,0.16558f,0.1f,0.23174f,0.16733f,0.1f,0.2311f,0.16913f,0.1f,0.23058f,0.17099f,0.1f,0.23017f,0.17288f,0.1f,0.22968f,0.17673f,0.1f,0.22953f,0.18058f,0.1f,0.22953f,0.18058f,0f,0.22968f,0.17673f,0f,0.23017f,0.17288f,0f,0.23058f,0.17099f,0f,0.2311f,0.16913f,0f,0.23174f,0.16733f,0f,0.23253f,0.16558f,0f});
  }
}
protected class MFVec3f546 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.92797f,-0.37265f,0f,-0.95305f,-0.3028f,0f,-0.97116f,-0.23845f,0f,-0.98369f,-0.17989f,0f,-0.99682f,-0.07973f,0f,-1f,0f,0f,-1f,0f,0f,-0.99682f,-0.07973f,0f,-0.98369f,-0.17989f,0f,-0.97116f,-0.23845f,0f,-0.95305f,-0.3028f,0f,-0.92797f,-0.37265f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32547 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1});
  }
}
protected class MFVec3f548 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22953f,0.18058f,0.1f,0.22973f,0.18515f,0.1f,0.23031f,0.1897f,0.1f,0.23125f,0.19419f,0.1f,0.23253f,0.19858f,0.1f,0.23253f,0.19858f,0f,0.23125f,0.19419f,0f,0.23031f,0.1897f,0f,0.22973f,0.18515f,0f,0.22953f,0.18058f,0f});
  }
}
protected class MFVec3f549 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99632f,0.08575f,0f,-0.98605f,0.16647f,0f,-0.97003f,0.24298f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.97003f,0.24298f,0f,-0.98605f,0.16647f,0f,-0.99632f,0.08575f,0f,-1f,0f,0f});
  }
}
protected class MFInt32550 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f551 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23253f,0.19858f,0.1f,0.23958f,0.20795f,0.1f,0.24753f,0.21658f,0.1f,0.24753f,0.21658f,0f,0.23958f,0.20795f,0f,0.23253f,0.19858f,0f});
  }
}
protected class MFVec3f552 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.76566f,0.64324f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.76566f,0.64324f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt32553 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f554 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24753f,0.21658f,0.1f,0.25919f,0.22462f,0.1f,0.27153f,0.23158f,0.1f,0.27153f,0.23158f,0f,0.25919f,0.22462f,0f,0.24753f,0.21658f,0f});
  }
}
protected class MFVec3f555 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.6f,0.8f,0f,-0.53212f,0.84667f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.53212f,0.84667f,0f,-0.6f,0.8f,0f});
  }
}
protected class MFInt32556 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f557 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.27153f,0.23158f,0.1f,0.27582f,0.23314f,0.1f,0.28021f,0.23442f,0.1f,0.2892f,0.23628f,0.1f,0.29836f,0.23728f,0.1f,0.30753f,0.23758f,0.1f,0.30753f,0.23758f,0f,0.29836f,0.23728f,0f,0.2892f,0.23628f,0f,0.28021f,0.23442f,0f,0.27582f,0.23314f,0f,0.27153f,0.23158f,0f});
  }
}
protected class MFVec3f558 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.37139f,0.92848f,0f,-0.31054f,0.95056f,0f,-0.25355f,0.96732f,0f,-0.15234f,0.98833f,0f,-0.06825f,0.99767f,0f,0f,1f,0f,0f,1f,0f,-0.06825f,0.99767f,0f,-0.15234f,0.98833f,0f,-0.25355f,0.96732f,0f,-0.31054f,0.95056f,0f,-0.37139f,0.92848f,0f});
  }
}
protected class MFInt32559 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f560 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.30753f,0.23758f,0.1f,0.31621f,0.23714f,0.1f,0.32057f,0.23654f,0.1f,0.32488f,0.23565f,0.1f,0.32908f,0.23443f,0.1f,0.33313f,0.23287f,0.1f,0.33696f,0.23093f,0.1f,0.34053f,0.22858f,0.1f,0.34053f,0.22858f,0f,0.33696f,0.23093f,0f,0.33313f,0.23287f,0f,0.32908f,0.23443f,0f,0.32488f,0.23565f,0f,0.32057f,0.23654f,0f,0.31621f,0.23714f,0f,0.30753f,0.23758f,0f});
  }
}
protected class MFVec3f561 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.10549f,0.99442f,0f,0.16797f,0.98579f,0f,0.23831f,0.97119f,0f,0.31721f,0.94836f,0f,0.40477f,0.91442f,0f,0.49996f,0.86605f,0f,0.6f,0.8f,0f,0.6f,0.8f,0f,0.49996f,0.86605f,0f,0.40477f,0.91442f,0f,0.31721f,0.94836f,0f,0.23831f,0.97119f,0f,0.16797f,0.98579f,0f,0.10549f,0.99442f,0f,0f,1f,0f});
  }
}
protected class MFInt32562 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f563 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34053f,0.22858f,0.1f,0.34703f,0.2257f,0.1f,0.35331f,0.22227f,0.1f,0.35919f,0.21825f,0.1f,0.36194f,0.216f,0.1f,0.36453f,0.21358f,0.1f,0.36453f,0.21358f,0f,0.36194f,0.216f,0f,0.35919f,0.21825f,0f,0.35331f,0.22227f,0f,0.34703f,0.2257f,0f,0.34053f,0.22858f,0f});
  }
}
protected class MFVec3f564 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37139f,0.92848f,0f,0.44036f,0.89782f,0f,0.51995f,0.8542f,0f,0.60979f,0.79256f,0f,0.65782f,0.75317f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.65782f,0.75317f,0f,0.60979f,0.79256f,0f,0.51995f,0.8542f,0f,0.44036f,0.89782f,0f,0.37139f,0.92848f,0f});
  }
}
protected class MFInt32565 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f566 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.36453f,0.21358f,0.1f,0.36823f,0.20958f,0.1f,0.37158f,0.20523f,0.1f,0.37307f,0.20294f,0.1f,0.37441f,0.20056f,0.1f,0.37557f,0.19811f,0.1f,0.37653f,0.19558f,0.1f,0.37653f,0.19558f,0f,0.37557f,0.19811f,0f,0.37441f,0.20056f,0f,0.37307f,0.20294f,0f,0.37158f,0.20523f,0f,0.36823f,0.20958f,0f,0.36453f,0.21358f,0f});
  }
}
protected class MFVec3f567 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.76123f,0.64848f,0f,0.82277f,0.56837f,0f,0.85532f,0.5181f,0f,0.88802f,0.4598f,0f,0.91968f,0.39267f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.91968f,0.39267f,0f,0.88802f,0.4598f,0f,0.85532f,0.5181f,0f,0.82277f,0.56837f,0f,0.76123f,0.64848f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32568 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f569 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37653f,0.19558f,0.1f,0.37781f,0.19119f,0.1f,0.37875f,0.1867f,0.1f,0.37933f,0.18215f,0.1f,0.37953f,0.17758f,0.1f,0.37953f,0.17758f,0f,0.37933f,0.18215f,0f,0.37875f,0.1867f,0f,0.37781f,0.19119f,0f,0.37653f,0.19558f,0f});
  }
}
protected class MFVec3f570 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94868f,0.31623f,0f,0.97003f,0.24298f,0f,0.98605f,0.16647f,0f,0.99632f,0.08575f,0f,1f,0f,0f,1f,0f,0f,0.99632f,0.08575f,0f,0.98605f,0.16647f,0f,0.97003f,0.24298f,0f,0.94868f,0.31623f,0f});
  }
}
protected class MFInt32571 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f572 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37953f,0.17758f,0.1f,0.37929f,0.17377f,0.1f,0.37863f,0.16998f,0.1f,0.37653f,0.16258f,0.1f,0.37653f,0.16258f,0f,0.37863f,0.16998f,0f,0.37929f,0.17377f,0f,0.37953f,0.17758f,0f});
  }
}
protected class MFVec3f573 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,-0.12161f,0f,0.97691f,-0.21363f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.97691f,-0.21363f,0f,0.99258f,-0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt32574 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f575 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37653f,0.16258f,0.1f,0.37475f,0.15787f,0.1f,0.37263f,0.15329f,0.1f,0.36753f,0.14458f,0.1f,0.36753f,0.14458f,0f,0.37263f,0.15329f,0f,0.37475f,0.15787f,0f,0.37653f,0.16258f,0f});
  }
}
protected class MFVec3f576 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94868f,-0.31623f,0f,0.92164f,-0.38803f,0f,0.89248f,-0.45108f,0f,0.83205f,-0.5547f,0f,0.83205f,-0.5547f,0f,0.89248f,-0.45108f,0f,0.92164f,-0.38803f,0f,0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32577 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f578 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.36753f,0.14458f,0.1f,0.36436f,0.14031f,0.1f,0.36076f,0.13635f,0.1f,0.3568f,0.13275f,0.1f,0.35253f,0.12958f,0.1f,0.35253f,0.12958f,0f,0.3568f,0.13275f,0f,0.36076f,0.13635f,0f,0.36436f,0.14031f,0f,0.36753f,0.14458f,0f});
  }
}
protected class MFVec3f579 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.83205f,-0.5547f,0f,0.77259f,-0.63491f,0f,0.70711f,-0.70711f,0f,0.63491f,-0.77259f,0f,0.5547f,-0.83205f,0f,0.5547f,-0.83205f,0f,0.63491f,-0.77259f,0f,0.70711f,-0.70711f,0f,0.77259f,-0.63491f,0f,0.83205f,-0.5547f,0f});
  }
}
protected class MFInt32580 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f581 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.35253f,0.12958f,0.1f,0.34604f,0.12665f,0.1f,0.33933f,0.12419f,0.1f,0.32553f,0.12058f,0.1f,0.32553f,0.12058f,0f,0.33933f,0.12419f,0f,0.34604f,0.12665f,0f,0.35253f,0.12958f,0f});
  }
}
protected class MFVec3f582 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.37732f,-0.92608f,0f,0.31212f,-0.95004f,0f,0.19612f,-0.98058f,0f,0.19612f,-0.98058f,0f,0.31212f,-0.95004f,0f,0.37732f,-0.92608f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32583 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f584 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.32553f,0.12058f,0.1f,0.32553f,0.11758f,0.1f,0.32553f,0.11758f,0f,0.32553f,0.12058f,0f});
  }
}
protected class MFVec3f585 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32586 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,0,4,-1,4,0,1,-1,3,1,2,-1,3,4,1,-1});
  }
}
protected class MFVec3f587 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.32553f,0.11758f,0.1f,0.33597f,0.11438f,0.1f,0.34653f,0.11158f,0.1f,0.34653f,0.11158f,0f,0.33597f,0.11438f,0f,0.32553f,0.11758f,0f});
  }
}
protected class MFVec3f588 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31623f,0.94868f,0f,0.27229f,0.96222f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.27229f,0.96222f,0f,0.31623f,0.94868f,0f});
  }
}
protected class MFInt32589 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f590 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.34653f,0.11158f,0.1f,0.35203f,0.10999f,0.1f,0.35742f,0.10797f,0.1f,0.36261f,0.10551f,0.1f,0.36753f,0.10258f,0.1f,0.36753f,0.10258f,0f,0.36261f,0.10551f,0f,0.35742f,0.10797f,0f,0.35203f,0.10999f,0f,0.34653f,0.11158f,0f});
  }
}
protected class MFVec3f591 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,0.97014f,0f,0.31323f,0.94968f,0f,0.3887f,0.92136f,0f,0.46933f,0.88303f,0f,0.5547f,0.83205f,0f,0.5547f,0.83205f,0f,0.46933f,0.88303f,0f,0.3887f,0.92136f,0f,0.31323f,0.94968f,0f,0.24254f,0.97014f,0f});
  }
}
protected class MFInt32592 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f593 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.36753f,0.10258f,0.1f,0.3719f,0.09782f,0.1f,0.37587f,0.09269f,0.1f,0.37942f,0.08725f,0.1f,0.38253f,0.08158f,0.1f,0.38253f,0.08158f,0f,0.37942f,0.08725f,0f,0.37587f,0.09269f,0f,0.3719f,0.09782f,0f,0.36753f,0.10258f,0f});
  }
}
protected class MFVec3f594 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.76514f,0.64387f,0f,0.81495f,0.57953f,0f,0.85773f,0.5141f,0f,0.89443f,0.44721f,0f,0.89443f,0.44721f,0f,0.85773f,0.5141f,0f,0.81495f,0.57953f,0f,0.76514f,0.64387f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32595 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f596 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.38253f,0.08158f,0.1f,0.38344f,0.08011f,0.1f,0.38425f,0.0786f,0.1f,0.38562f,0.07542f,0.1f,0.38667f,0.0721f,0.1f,0.38744f,0.06866f,0.1f,0.38831f,0.06161f,0.1f,0.38853f,0.05458f,0.1f,0.38853f,0.05458f,0f,0.38831f,0.06161f,0f,0.38744f,0.06866f,0f,0.38667f,0.0721f,0f,0.38562f,0.07542f,0f,0.38425f,0.0786f,0f,0.38344f,0.08011f,0f,0.38253f,0.08158f,0f});
  }
}
protected class MFVec3f597 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.83205f,0.5547f,0f,0.86597f,0.5001f,0f,0.89465f,0.44677f,0f,0.93799f,0.34667f,0f,0.96612f,0.25811f,0f,0.98322f,0.18244f,0f,0.99763f,0.06877f,0f,1f,0f,0f,1f,0f,0f,0.99763f,0.06877f,0f,0.98322f,0.18244f,0f,0.96612f,0.25811f,0f,0.93799f,0.34667f,0f,0.89465f,0.44677f,0f,0.86597f,0.5001f,0f,0.83205f,0.5547f,0f});
  }
}
protected class MFInt32598 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {21,0,20,-1,20,0,1,-1,19,1,2,-1,3,19,2,-1,3,18,19,-1,3,4,18,-1,18,4,17,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,1,19,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f599 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.38853f,0.05458f,0.1f,0.38839f,0.05097f,0.1f,0.38799f,0.04735f,0.1f,0.38734f,0.04374f,0.1f,0.38644f,0.04016f,0.1f,0.38399f,0.0331f,0.1f,0.38072f,0.0263f,0.1f,0.37674f,0.01984f,0.1f,0.37215f,0.01383f,0.1f,0.36705f,0.00837f,0.1f,0.36153f,0.00358f,0.1f,0.36153f,0.00358f,0f,0.36705f,0.00837f,0f,0.37215f,0.01383f,0f,0.37674f,0.01984f,0f,0.38072f,0.0263f,0f,0.38399f,0.0331f,0f,0.38644f,0.04016f,0f,0.38734f,0.04374f,0f,0.38799f,0.04735f,0f,0.38839f,0.05097f,0f,0.38853f,0.05458f,0f});
  }
}
protected class MFVec3f600 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99721f,-0.07465f,0f,0.98945f,-0.14485f,0f,0.97758f,-0.21056f,0f,0.96232f,-0.27191f,0f,0.92389f,-0.38266f,0f,0.8773f,-0.47993f,0f,0.82386f,-0.5668f,0f,0.76334f,-0.646f,0f,0.69427f,-0.71972f,0f,0.61394f,-0.78935f,0f,0.61394f,-0.78935f,0f,0.69427f,-0.71972f,0f,0.76334f,-0.646f,0f,0.82386f,-0.5668f,0f,0.8773f,-0.47993f,0f,0.92389f,-0.38266f,0f,0.96232f,-0.27191f,0f,0.97758f,-0.21056f,0f,0.98945f,-0.14485f,0f,0.99721f,-0.07465f,0f,1f,0f,0f});
  }
}
protected class MFInt32601 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f602 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.36153f,0.00358f,0.1f,0.35434f,-0.0021f,0.1f,0.34649f,-0.00699f,0.1f,0.33812f,-0.01112f,0.1f,0.32933f,-0.01449f,0.1f,0.32026f,-0.01709f,0.1f,0.31102f,-0.01894f,0.1f,0.30174f,-0.02005f,0.1f,0.29253f,-0.02042f,0.1f,0.29253f,-0.02042f,0f,0.30174f,-0.02005f,0f,0.31102f,-0.01894f,0f,0.32026f,-0.01709f,0f,0.32933f,-0.01449f,0f,0.33812f,-0.01112f,0f,0.34649f,-0.00699f,0f,0.35434f,-0.0021f,0f,0.36153f,0.00358f,0f});
  }
}
protected class MFVec3f603 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.66436f,-0.74741f,0f,0.5742f,-0.81872f,0f,0.48534f,-0.87432f,0f,0.39926f,-0.91684f,0f,0.31628f,-0.94867f,0f,0.23596f,-0.97176f,0f,0.15736f,-0.98754f,0f,0.07921f,-0.99686f,0f,0f,-1f,0f,0f,-1f,0f,0.07921f,-0.99686f,0f,0.15736f,-0.98754f,0f,0.23596f,-0.97176f,0f,0.31628f,-0.94867f,0f,0.39926f,-0.91684f,0f,0.48534f,-0.87432f,0f,0.5742f,-0.81872f,0f,0.66436f,-0.74741f,0f});
  }
}
protected class MFInt32604 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {321,0,8,-1,320,8,9,-1,319,9,10,-1,318,10,238,-1,239,318,238,-1,239,240,318,-1,318,240,241,-1,242,318,241,-1,242,243,318,-1,318,243,244,-1,249,244,248,-1,249,318,244,-1,249,250,318,-1,318,250,251,-1,252,318,251,-1,252,253,318,-1,318,253,254,-1,317,254,255,-1,256,317,255,-1,256,316,317,-1,256,257,316,-1,316,257,315,-1,315,257,281,-1,282,315,281,-1,282,314,315,-1,282,312,314,-1,282,311,312,-1,282,283,311,-1,311,283,310,-1,310,283,284,-1,285,310,284,-1,285,286,310,-1,310,286,287,-1,288,310,287,-1,288,309,310,-1,288,299,309,-1,288,289,299,-1,299,289,290,-1,291,299,290,-1,291,292,299,-1,299,292,293,-1,294,299,293,-1,294,295,299,-1,299,295,296,-1,297,299,296,-1,297,298,299,-1,2,7,1,-1,2,6,7,-1,2,3,6,-1,6,3,5,-1,5,3,4,-1,7,8,1,-1,1,8,0,-1,321,8,320,-1,320,9,319,-1,11,233,10,-1,11,232,233,-1,11,231,232,-1,11,230,231,-1,11,12,230,-1,230,12,229,-1,229,12,228,-1,228,12,227,-1,227,12,226,-1,226,12,13,-1,225,13,224,-1,225,226,13,-1,13,14,224,-1,224,14,223,-1,223,14,222,-1,222,14,221,-1,221,14,15,-1,220,15,219,-1,220,221,15,-1,15,16,219,-1,219,16,218,-1,218,16,217,-1,217,16,17,-1,216,17,215,-1,216,217,17,-1,215,17,214,-1,214,17,18,-1,213,18,19,-1,212,19,20,-1,211,20,21,-1,210,21,22,-1,209,22,23,-1,208,23,207,-1,208,209,23,-1,214,18,213,-1,213,19,212,-1,212,20,211,-1,211,21,210,-1,210,22,209,-1,23,24,207,-1,207,24,25,-1,206,25,26,-1,205,26,27,-1,28,205,27,-1,28,29,205,-1,205,29,204,-1,204,29,30,-1,203,30,202,-1,203,204,30,-1,207,25,206,-1,206,26,205,-1,202,30,201,-1,201,30,31,-1,200,31,199,-1,200,201,31,-1,32,196,31,-1,32,195,196,-1,32,194,195,-1,32,193,194,-1,32,192,193,-1,32,191,192,-1,32,33,191,-1,191,33,190,-1,190,33,189,-1,189,33,188,-1,188,33,187,-1,187,33,34,-1,186,34,35,-1,185,35,36,-1,37,185,36,-1,37,38,185,-1,185,38,39,-1,40,185,39,-1,40,184,185,-1,40,41,184,-1,184,41,183,-1,183,41,42,-1,182,42,181,-1,182,183,42,-1,187,34,186,-1,186,35,185,-1,43,179,42,-1,43,178,179,-1,43,44,178,-1,178,44,177,-1,177,44,176,-1,176,44,45,-1,175,45,174,-1,175,176,45,-1,45,46,174,-1,174,46,173,-1,173,46,172,-1,172,46,47,-1,171,47,170,-1,171,172,47,-1,170,47,169,-1,169,47,48,-1,168,48,49,-1,167,49,50,-1,166,50,51,-1,52,166,51,-1,52,165,166,-1,52,53,165,-1,165,53,164,-1,164,53,54,-1,163,54,55,-1,162,55,56,-1,161,56,57,-1,58,161,57,-1,58,160,161,-1,58,59,160,-1,160,59,60,-1,159,60,61,-1,158,61,157,-1,158,159,61,-1,169,48,168,-1,168,49,167,-1,167,50,166,-1,164,54,163,-1,163,55,162,-1,162,56,161,-1,160,60,159,-1,61,62,157,-1,157,62,156,-1,156,62,155,-1,155,62,154,-1,154,62,63,-1,153,63,64,-1,152,64,151,-1,152,153,64,-1,154,63,153,-1,151,64,150,-1,150,64,65,-1,149,65,148,-1,149,150,65,-1,148,65,147,-1,147,65,66,-1,146,66,145,-1,146,147,66,-1,66,67,145,-1,145,67,68,-1,69,145,68,-1,69,70,145,-1,145,70,71,-1,72,145,71,-1,72,73,145,-1,145,73,74,-1,75,145,74,-1,75,76,145,-1,145,76,77,-1,78,145,77,-1,78,79,145,-1,145,79,80,-1,81,145,80,-1,81,144,145,-1});
  }
}
protected class MFInt32605 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {81,143,144,-1,81,142,143,-1,81,141,142,-1,81,140,141,-1,81,139,140,-1,81,138,139,-1,81,137,138,-1,81,136,137,-1,81,135,136,-1,81,134,135,-1,81,133,134,-1,81,132,133,-1,81,131,132,-1,81,82,131,-1,131,82,130,-1,130,82,83,-1,129,83,107,-1,108,129,107,-1,108,128,129,-1,108,109,128,-1,128,109,110,-1,127,110,126,-1,127,128,110,-1,84,85,83,-1,83,85,106,-1,107,83,106,-1,85,86,106,-1,106,86,87,-1,105,87,88,-1,104,88,89,-1,103,89,102,-1,103,104,89,-1,106,87,105,-1,105,88,104,-1,89,90,102,-1,102,90,91,-1,101,91,92,-1,100,92,99,-1,100,101,92,-1,102,91,101,-1,92,93,99,-1,99,93,98,-1,98,93,97,-1,97,93,96,-1,96,93,94,-1,95,96,94,-1,126,110,125,-1,125,110,111,-1,124,111,123,-1,124,125,111,-1,112,113,111,-1,111,113,114,-1,123,114,115,-1,116,123,115,-1,116,117,123,-1,123,117,118,-1,122,118,119,-1,120,122,119,-1,120,121,122,-1,111,114,123,-1,123,118,122,-1,129,130,83,-1,179,180,42,-1,42,180,181,-1,196,197,31,-1,31,197,198,-1,199,31,198,-1,233,234,10,-1,10,234,235,-1,236,10,235,-1,236,237,10,-1,10,237,238,-1,248,244,247,-1,247,244,245,-1,246,247,245,-1,318,254,317,-1,281,257,280,-1,280,257,258,-1,279,258,278,-1,279,280,258,-1,278,258,277,-1,277,258,259,-1,276,259,275,-1,276,277,259,-1,260,273,259,-1,260,272,273,-1,260,261,272,-1,272,261,271,-1,271,261,270,-1,270,261,269,-1,269,261,268,-1,268,261,267,-1,267,261,262,-1,266,262,265,-1,266,267,262,-1,263,264,262,-1,262,264,265,-1,273,274,259,-1,259,274,275,-1,300,302,299,-1,300,301,302,-1,302,303,299,-1,299,303,304,-1,305,299,304,-1,305,306,299,-1,299,306,307,-1,308,299,307,-1,308,309,299,-1,312,313,314,-1,318,319,10,-1});
  }
}
protected class MFVec3f606 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.26253f,-0.01442f,0.1f,0.26978f,-0.01695f,0.1f,0.27725f,-0.01884f,0.1f,0.28487f,-0.02001f,0.1f,0.29253f,-0.02042f,0.1f,0.30174f,-0.02005f,0.1f,0.31102f,-0.01894f,0.1f,0.32026f,-0.01709f,0.1f,0.32933f,-0.01449f,0.1f,0.33812f,-0.01112f,0.1f,0.34649f,-0.00699f,0.1f,0.35434f,-0.0021f,0.1f,0.36153f,0.00358f,0.1f,0.36705f,0.00837f,0.1f,0.37215f,0.01383f,0.1f,0.37674f,0.01984f,0.1f,0.38072f,0.0263f,0.1f,0.38399f,0.0331f,0.1f,0.38644f,0.04016f,0.1f,0.38734f,0.04374f,0.1f,0.38799f,0.04735f,0.1f,0.38839f,0.05097f,0.1f,0.38853f,0.05458f,0.1f,0.38831f,0.06161f,0.1f,0.38744f,0.06866f,0.1f,0.38667f,0.0721f,0.1f,0.38562f,0.07542f,0.1f,0.38425f,0.0786f,0.1f,0.38344f,0.08011f,0.1f,0.38253f,0.08158f,0.1f,0.37942f,0.08725f,0.1f,0.37587f,0.09269f,0.1f,0.3719f,0.09782f,0.1f,0.36753f,0.10258f,0.1f,0.36261f,0.10551f,0.1f,0.35742f,0.10797f,0.1f,0.35203f,0.10999f,0.1f,0.34653f,0.11158f,0.1f,0.33597f,0.11438f,0.1f,0.32553f,0.11758f,0.1f,0.32553f,0.12058f,0.1f,0.33933f,0.12419f,0.1f,0.34604f,0.12665f,0.1f,0.35253f,0.12958f,0.1f,0.3568f,0.13275f,0.1f,0.36076f,0.13635f,0.1f,0.36436f,0.14031f,0.1f,0.36753f,0.14458f,0.1f,0.37263f,0.15329f,0.1f,0.37475f,0.15787f,0.1f,0.37653f,0.16258f,0.1f,0.37863f,0.16998f,0.1f,0.37929f,0.17377f,0.1f,0.37953f,0.17758f,0.1f,0.37933f,0.18215f,0.1f,0.37875f,0.1867f,0.1f,0.37781f,0.19119f,0.1f,0.37653f,0.19558f,0.1f,0.37557f,0.19811f,0.1f,0.37441f,0.20056f,0.1f,0.37307f,0.20294f,0.1f,0.37158f,0.20523f,0.1f,0.36823f,0.20958f,0.1f,0.36453f,0.21358f,0.1f,0.36194f,0.216f,0.1f,0.35919f,0.21825f,0.1f,0.35331f,0.22227f,0.1f,0.34703f,0.2257f,0.1f,0.34053f,0.22858f,0.1f,0.33696f,0.23093f,0.1f,0.33313f,0.23287f,0.1f,0.32908f,0.23443f,0.1f,0.32488f,0.23565f,0.1f,0.32057f,0.23654f,0.1f,0.31621f,0.23714f,0.1f,0.30753f,0.23758f,0.1f,0.29836f,0.23728f,0.1f,0.2892f,0.23628f,0.1f,0.28021f,0.23442f,0.1f,0.27582f,0.23314f,0.1f,0.27153f,0.23158f,0.1f,0.25919f,0.22462f,0.1f,0.24753f,0.21658f,0.1f,0.23958f,0.20795f,0.1f,0.23253f,0.19858f,0.1f,0.23125f,0.19419f,0.1f,0.23031f,0.1897f,0.1f,0.22973f,0.18515f,0.1f,0.22953f,0.18058f,0.1f,0.22968f,0.17673f,0.1f,0.23017f,0.17288f,0.1f,0.23058f,0.17099f,0.1f,0.2311f,0.16913f,0.1f,0.23174f,0.16733f,0.1f,0.23253f,0.16558f,0.1f,0.23294f,0.16485f,0.1f,0.23343f,0.16417f,0.1f,0.23399f,0.16354f,0.1f,0.23462f,0.16296f,0.1f,0.2353f,0.16242f,0.1f,0.23602f,0.16192f,0.1f,0.23679f,0.16148f,0.1f,0.2376f,0.16108f,0.1f,0.23929f,0.16042f,0.1f,0.24105f,0.15996f,0.1f,0.24281f,0.15967f,0.1f,0.24453f,0.15958f,0.1f,0.24914f,0.15967f,0.1f,0.25377f,0.16006f,0.1f,0.25604f,0.16044f,0.1f,0.25827f,0.16096f,0.1f,0.26044f,0.16167f,0.1f,0.26253f,0.16258f,0.1f,0.26369f,0.16382f,0.1f,0.2648f,0.16516f,0.1f,0.26582f,0.16659f,0.1f,0.26671f,0.16809f,0.1f,0.26746f,0.16965f,0.1f,0.26803f,0.17126f,0.1f,0.26824f,0.17208f,0.1f,0.2684f,0.17291f,0.1f,0.26849f,0.17374f,0.1f,0.26853f,0.17458f,0.1f,0.26838f,0.17843f,0.1f,0.26788f,0.18228f,0.1f,0.26748f,0.18418f,0.1f,0.26696f,0.18603f,0.1f,0.26631f,0.18784f,0.1f,0.26553f,0.18958f,0.1f,0.26342f,0.19698f,0.1f,0.26277f,0.20077f,0.1f,0.26253f,0.20458f,0.1f,0.26403f,0.20608f,0.1f,0.26553f,0.20758f,0.1f,0.26756f,0.20937f,0.1f,0.26977f,0.21093f,0.1f,0.27453f,0.21358f,0.1f,0.27656f,0.21537f,0.1f,0.27877f,0.21693f,0.1f,0.28353f,0.21958f,0.1f,0.28527f,0.22036f,0.1f,0.28708f,0.22101f,0.1f,0.28893f,0.22153f,0.1f,0.29083f,0.22194f,0.1f,0.29467f,0.22243f,0.1f,0.29853f,0.22258f,0.1f,0.30264f,0.22242f,0.1f,0.30685f,0.22192f,0.1f,0.31105f,0.22106f,0.1f,0.31514f,0.21981f,0.1f,0.31903f,0.21816f,0.1f,0.32087f,0.21718f,0.1f,0.32263f,0.21609f,0.1f,0.32428f,0.21489f,0.1f,0.32582f,0.21357f,0.1f,0.32724f,0.21214f,0.1f,0.32853f,0.21058f,0.1f,0.33003f,0.20898f,0.1f,0.33142f,0.20727f,0.1f,0.33389f,0.20358f,0.1f,0.33596f,0.19959f,0.1f,0.33763f,0.19537f,0.1f,0.33891f,0.19098f,0.1f,0.33982f,0.18651f,0.1f,0.34035f,0.18202f,0.1f,0.34053f,0.17758f,0.1f,0.34f,0.1671f,0.1f,0.33927f,0.1618f,0.1f,0.33813f,0.15659f,0.1f,0.33655f,0.15156f,0.1f,0.33446f,0.14682f,0.1f,0.33321f,0.14459f,0.1f,0.3318f,0.14246f,0.1f,0.33025f,0.14045f,0.1f,0.32853f,0.13858f,0.1f,0.32692f,0.13708f,0.1f,0.32521f,0.13569f,0.1f,0.32153f,0.13321f,0.1f,0.31753f,0.13115f,0.1f,0.31331f,0.12948f,0.1f,0.30893f,0.1282f,0.1f,0.30446f,0.12729f,0.1f,0.29997f,0.12676f,0.1f,0.29553f,0.12658f,0.1f,0.28053f,0.12658f,0.1f,0.28053f,0.10558f,0.1f,0.30153f,0.10558f,0.1f,0.30779f,0.10529f,0.1f,0.31094f,0.10489f,0.1f,0.31405f,0.1043f,0.1f,0.31709f,0.10349f,0.1f,0.32004f,0.10245f,0.1f,0.32286f,0.10115f,0.1f,0.32553f,0.09958f,0.1f,0.32731f,0.09892f,0.1f,0.32909f,0.09814f,0.1f,0.33082f,0.09722f,0.1f,0.33247f,0.09617f,0.1f,0.334f,0.09498f,0.1f,0.33538f,0.09365f,0.1f,0.336f,0.09294f,0.1f,0.33656f,0.09219f,0.1f,0.33708f,0.0914f,0.1f,0.33753f,0.09058f,0.1f,0.34263f,0.08187f,0.1f,0.34475f,0.07729f,0.1f,0.34653f,0.07258f,0.1f,0.34781f,0.06819f,0.1f,0.34875f,0.0637f,0.1f,0.34933f,0.05915f,0.1f,0.34953f,0.05458f,0.1f,0.34923f,0.04832f,0.1f,0.34883f,0.04517f,0.1f,0.34824f,0.04206f,0.1f,0.34744f,0.03902f,0.1f,0.34639f,0.03607f,0.1f,0.3451f,0.03324f,0.1f,0.34353f,0.03058f,0.1f,0.34268f,0.02767f,0.1f,0.34163f,0.0248f,0.1f,0.34037f,0.022f,0.1f,0.33893f,0.01929f,0.1f,0.33731f,0.01667f,0.1f,0.33553f,0.01417f,0.1f,0.3336f,0.0118f,0.1f,0.33153f,0.00958f,0.1f,0.32966f,0.0079f,0.1f,0.32763f,0.0064f,0.1f,0.32546f,0.00508f,0.1f,0.32319f,0.00391f,0.1f,0.31842f,0.00201f,0.1f,0.31353f,0.00058f,0.1f,0.30938f,-0.00184f,0.1f,0.30719f,-0.00286f,0.1f,0.30493f,-0.00373f,0.1f,0.30261f,-0.00445f,0.1f,0.30027f,-0.00497f,0.1f,0.2979f,-0.00531f,0.1f,0.29553f,-0.00542f,0.1f,0.29091f,-0.00533f,0.1f,0.28629f,-0.00494f,0.1f,0.28401f,-0.00456f,0.1f,0.28178f,-0.00404f,0.1f,0.27961f,-0.00333f,0.1f,0.27753f,-0.00242f,0.1f,0.27468f,-0.00117f,0.1f,0.27169f,-0.00023f,0.1f,0.26862f,0.00037f,0.1f,0.26708f,0.00053f,0.1f,0.26553f,0.00058f,0.1f,0.26077f,0.00323f,0.1f,0.25856f,0.00479f,0.1f,0.25653f,0.00658f,0.1f,0.25503f,0.00808f,0.1f,0.25353f,0.00958f,0.1f,0.25358f,0.01113f,0.1f,0.25374f,0.01268f,0.1f,0.25434f,0.01574f,0.1f,0.25528f,0.01873f,0.1f,0.25653f,0.02158f,0.1f,0.25863f,0.02898f,0.1f,0.25929f,0.03277f,0.1f,0.25953f,0.03658f,0.1f,0.2594f,0.03794f,0.1f,0.25904f,0.03928f,0.1f,0.25879f,0.03994f,0.1f,0.25848f,0.04059f,0.1f,0.25813f,0.04122f,0.1f,0.25774f,0.04183f,0.1f,0.25684f,0.04298f,0.1f,0.25583f,0.044f,0.1f,0.25528f,0.04446f,0.1f,0.25471f,0.04488f,0.1f,0.25353f,0.04558f,0.1f,0.25266f,0.04639f,0.1f,0.25173f,0.04712f,0.1f,0.25075f,0.0478f,0.1f,0.24972f,0.04841f,0.1f,0.24753f,0.04944f,0.1f,0.24522f,0.05026f,0.1f});
  }
}
protected class MFVec3f607 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24282f,0.05086f,0.1f,0.24038f,0.05127f,0.1f,0.23793f,0.05151f,0.1f,0.23553f,0.05158f,0.1f,0.23459f,0.05153f,0.1f,0.23364f,0.05139f,0.1f,0.2327f,0.05116f,0.1f,0.23177f,0.05084f,0.1f,0.23085f,0.05045f,0.1f,0.22995f,0.04998f,0.1f,0.22908f,0.04945f,0.1f,0.22825f,0.04886f,0.1f,0.22745f,0.04821f,0.1f,0.2267f,0.04751f,0.1f,0.226f,0.04677f,0.1f,0.22537f,0.04599f,0.1f,0.22479f,0.04517f,0.1f,0.22429f,0.04433f,0.1f,0.22387f,0.04346f,0.1f,0.22353f,0.04258f,0.1f,0.22301f,0.04201f,0.1f,0.22256f,0.0414f,0.1f,0.22217f,0.04074f,0.1f,0.22183f,0.04006f,0.1f,0.22154f,0.03934f,0.1f,0.2213f,0.03859f,0.1f,0.22093f,0.03703f,0.1f,0.22071f,0.03542f,0.1f,0.22059f,0.03379f,0.1f,0.22053f,0.03058f,0.1f,0.22073f,0.02601f,0.1f,0.22131f,0.02146f,0.1f,0.22225f,0.01697f,0.1f,0.22353f,0.01258f,0.1f,0.2267f,0.00831f,0.1f,0.23029f,0.00435f,0.1f,0.23425f,0.00075f,0.1f,0.23853f,-0.00242f,0.1f,0.24408f,-0.00625f,0.1f,0.24996f,-0.00962f,0.1f,0.25612f,-0.01238f,0.1f,0.2593f,-0.0135f,0.1f});
  }
}
protected class MFVec3f608 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f609 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32610 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f611 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.60364f,0.03114f,0.1f,0.60947f,0.03937f,0.1f,0.6144f,0.04823f,0.1f,0.61845f,0.05755f,0.1f,0.62164f,0.06714f,0.1f,0.62164f,0.06714f,0f,0.61845f,0.05755f,0f,0.6144f,0.04823f,0f,0.60947f,0.03937f,0f,0.60364f,0.03114f,0f});
  }
}
protected class MFVec3f612 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.78087f,0.6247f,0f,-0.8472f,0.53128f,0f,-0.8972f,0.44162f,0f,-0.93437f,0.35631f,0f,-0.96152f,0.27472f,0f,-0.96152f,0.27472f,0f,-0.93437f,0.35631f,0f,-0.8972f,0.44162f,0f,-0.8472f,0.53128f,0f,-0.78087f,0.6247f,0f});
  }
}
protected class MFInt32613 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f614 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.57664f,0.01014f,0.1f,0.5842f,0.01429f,0.1f,0.5914f,0.01914f,0.1f,0.59478f,0.02183f,0.1f,0.59797f,0.02473f,0.1f,0.60094f,0.02783f,0.1f,0.60364f,0.03114f,0.1f,0.60364f,0.03114f,0f,0.60094f,0.02783f,0f,0.59797f,0.02473f,0f,0.59478f,0.02183f,0f,0.5914f,0.01914f,0f,0.5842f,0.01429f,0f,0.57664f,0.01014f,0f});
  }
}
protected class MFVec3f615 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.5171f,0.85592f,0f,-0.60081f,0.79939f,0f,-0.64759f,0.76199f,0f,-0.69705f,0.71702f,0f,-0.74831f,0.66335f,0f,-0.8f,0.6f,0f,-0.8f,0.6f,0f,-0.74831f,0.66335f,0f,-0.69705f,0.71702f,0f,-0.64759f,0.76199f,0f,-0.60081f,0.79939f,0f,-0.5171f,0.85592f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt32616 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f617 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.53764f,0.00414f,0.1f,0.54757f,0.00439f,0.1f,0.5575f,0.00531f,0.1f,0.56725f,0.00715f,0.1f,0.572f,0.00848f,0.1f,0.57664f,0.01014f,0.1f,0.57664f,0.01014f,0f,0.572f,0.00848f,0f,0.56725f,0.00715f,0f,0.5575f,0.00531f,0f,0.54757f,0.00439f,0f,0.53764f,0.00414f,0f});
  }
}
protected class MFVec3f618 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.05442f,0.99852f,0f,-0.13396f,0.99099f,0f,-0.24002f,0.97077f,0f,-0.30283f,0.95305f,0f,-0.37139f,0.92848f,0f,-0.37139f,0.92848f,0f,-0.30283f,0.95305f,0f,-0.24002f,0.97077f,0f,-0.13396f,0.99099f,0f,-0.05442f,0.99852f,0f,0f,1f,0f});
  }
}
protected class MFInt32619 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f620 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.51064f,0.01014f,0.1f,0.51211f,0.00923f,0.1f,0.51363f,0.00842f,0.1f,0.5168f,0.00705f,0.1f,0.52013f,0.006f,0.1f,0.52356f,0.00523f,0.1f,0.53061f,0.00436f,0.1f,0.53764f,0.00414f,0.1f,0.53764f,0.00414f,0f,0.53061f,0.00436f,0f,0.52356f,0.00523f,0f,0.52013f,0.006f,0f,0.5168f,0.00705f,0f,0.51363f,0.00842f,0f,0.51211f,0.00923f,0f,0.51064f,0.01014f,0f});
  }
}
protected class MFVec3f621 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5547f,0.83205f,0f,0.5001f,0.86597f,0f,0.44677f,0.89465f,0f,0.34667f,0.93799f,0f,0.25811f,0.96612f,0f,0.18244f,0.98322f,0f,0.06877f,0.99763f,0f,0f,1f,0f,0f,1f,0f,0.06877f,0.99763f,0f,0.18244f,0.98322f,0f,0.25811f,0.96612f,0f,0.34667f,0.93799f,0f,0.44677f,0.89465f,0f,0.5001f,0.86597f,0f,0.5547f,0.83205f,0f});
  }
}
protected class MFInt32622 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,17,-1,18,19,5,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,5,6,17,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,13,-1,14,15,9,-1,17,7,16,-1,16,8,15,-1,9,10,13,-1,13,10,11,-1,12,13,11,-1});
  }
}
protected class MFVec3f623 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.50164f,0.03114f,0.1f,0.50177f,0.02823f,0.1f,0.50216f,0.02524f,0.1f,0.50282f,0.02227f,0.1f,0.50377f,0.01937f,0.1f,0.50501f,0.01664f,0.1f,0.50575f,0.01535f,0.1f,0.50656f,0.01414f,0.1f,0.50746f,0.013f,0.1f,0.50844f,0.01195f,0.1f,0.5095f,0.01099f,0.1f,0.51064f,0.01014f,0.1f,0.51064f,0.01014f,0f,0.5095f,0.01099f,0f,0.50844f,0.01195f,0f,0.50746f,0.013f,0f,0.50656f,0.01414f,0f,0.50575f,0.01535f,0f,0.50501f,0.01664f,0f,0.50377f,0.01937f,0f,0.50282f,0.02227f,0f,0.50216f,0.02524f,0f,0.50177f,0.02823f,0f,0.50164f,0.03114f,0f});
  }
}
protected class MFVec3f624 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.9963f,0.08595f,0f,0.98508f,0.17212f,0f,0.96491f,0.26257f,0f,0.93269f,0.36069f,0f,0.88327f,0.46887f,0f,0.84989f,0.52696f,0f,0.80931f,0.58738f,0f,0.76037f,0.64949f,0f,0.70204f,0.71214f,0f,0.63355f,0.7737f,0f,0.5547f,0.83205f,0f,0.5547f,0.83205f,0f,0.63355f,0.7737f,0f,0.70204f,0.71214f,0f,0.76037f,0.64949f,0f,0.80931f,0.58738f,0f,0.84989f,0.52696f,0f,0.88327f,0.46887f,0f,0.93269f,0.36069f,0f,0.96491f,0.26257f,0f,0.98508f,0.17212f,0f,0.9963f,0.08595f,0f,1f,0f,0f});
  }
}
protected class MFInt32625 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f626 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.50164f,0.22014f,0.1f,0.50164f,0.03114f,0.1f,0.50164f,0.03114f,0f,0.50164f,0.22014f,0f});
  }
}
protected class MFVec3f627 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32628 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f629 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.51364f,0.22014f,0.1f,0.50164f,0.22014f,0.1f,0.50164f,0.22014f,0f,0.51364f,0.22014f,0f});
  }
}
protected class MFVec3f630 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32631 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f632 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.52864f,0.22314f,0.1f,0.52483f,0.2229f,0.1f,0.52105f,0.22225f,0.1f,0.51364f,0.22014f,0.1f,0.51364f,0.22014f,0f,0.52105f,0.22225f,0f,0.52483f,0.2229f,0f,0.52864f,0.22314f,0f});
  }
}
protected class MFVec3f633 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0.12161f,-0.99258f,0f,0.21363f,-0.97691f,0f,0.31623f,-0.94868f,0f,0.31623f,-0.94868f,0f,0.21363f,-0.97691f,0f,0.12161f,-0.99258f,0f,0f,-1f,0f});
  }
}
protected class MFInt32634 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {11,0,10,-1,10,0,1,-1,9,1,2,-1,3,9,2,-1,3,8,9,-1,3,4,8,-1,8,4,7,-1,7,4,5,-1,6,7,5,-1,10,1,9,-1});
  }
}
protected class MFVec3f635 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.57064f,0.21414f,0.1f,0.56575f,0.21637f,0.1f,0.56069f,0.21825f,0.1f,0.55021f,0.22104f,0.1f,0.53945f,0.22264f,0.1f,0.52864f,0.22314f,0.1f,0.52864f,0.22314f,0f,0.53945f,0.22264f,0f,0.55021f,0.22104f,0f,0.56069f,0.21825f,0f,0.56575f,0.21637f,0f,0.57064f,0.21414f,0f});
  }
}
protected class MFVec3f636 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,-0.89443f,0f,-0.38082f,-0.92465f,0f,-0.31727f,-0.94834f,0f,-0.19979f,-0.97984f,0f,-0.09477f,-0.9955f,0f,0f,-1f,0f,0f,-1f,0f,-0.09477f,-0.9955f,0f,-0.19979f,-0.97984f,0f,-0.31727f,-0.94834f,0f,-0.38082f,-0.92465f,0f,-0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32637 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f638 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.60064f,0.19014f,0.1f,0.59419f,0.19731f,0.1f,0.58694f,0.20375f,0.1f,0.57904f,0.20938f,0.1f,0.57064f,0.21414f,0.1f,0.57064f,0.21414f,0f,0.57904f,0.20938f,0f,0.58694f,0.20375f,0f,0.59419f,0.19731f,0f,0.60064f,0.19014f,0f});
  }
}
protected class MFVec3f639 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.78087f,-0.62469f,0f,-0.7038f,-0.7104f,0f,-0.62277f,-0.78241f,0f,-0.53764f,-0.84317f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.53764f,-0.84317f,0f,-0.62277f,-0.78241f,0f,-0.7038f,-0.7104f,0f,-0.78087f,-0.62469f,0f});
  }
}
protected class MFInt32640 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,6,-1,7,8,2,-1,2,3,6,-1,6,3,4,-1,5,6,4,-1});
  }
}
protected class MFVec3f641 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.61864f,0.15714f,0.1f,0.61526f,0.16594f,0.1f,0.61109f,0.17443f,0.1f,0.6062f,0.18253f,0.1f,0.60064f,0.19014f,0.1f,0.60064f,0.19014f,0f,0.6062f,0.18253f,0f,0.61109f,0.17443f,0f,0.61526f,0.16594f,0f,0.61864f,0.15714f,0f});
  }
}
protected class MFVec3f642 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.91629f,-0.40051f,0f,-0.87764f,-0.47932f,0f,-0.83268f,-0.55376f,0f,-0.78087f,-0.6247f,0f,-0.78087f,-0.6247f,0f,-0.83268f,-0.55376f,0f,-0.87764f,-0.47932f,0f,-0.91629f,-0.40051f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32643 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f644 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.62764f,0.11214f,0.1f,0.62708f,0.12365f,0.1f,0.6254f,0.13511f,0.1f,0.62259f,0.14633f,0.1f,0.61864f,0.15714f,0.1f,0.61864f,0.15714f,0f,0.62259f,0.14633f,0f,0.6254f,0.13511f,0f,0.62708f,0.12365f,0f,0.62764f,0.11214f,0f});
  }
}
protected class MFVec3f645 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99531f,-0.09674f,0f,-0.98106f,-0.19371f,0f,-0.95628f,-0.29244f,0f,-0.91914f,-0.39392f,0f,-0.91914f,-0.39392f,0f,-0.95628f,-0.29244f,0f,-0.98106f,-0.19371f,0f,-0.99531f,-0.09674f,0f,-1f,0f,0f});
  }
}
protected class MFInt32646 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1});
  }
}
protected class MFVec3f647 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.62164f,0.06714f,0.1f,0.6246f,0.0781f,0.1f,0.62644f,0.08935f,0.1f,0.62764f,0.11214f,0.1f,0.62764f,0.11214f,0f,0.62644f,0.08935f,0f,0.6246f,0.0781f,0f,0.62164f,0.06714f,0f});
  }
}
protected class MFVec3f648 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.97824f,0.20749f,0f,-0.99297f,0.11839f,0f,-1f,0f,0f,-1f,0f,0f,-0.99297f,0.11839f,0f,-0.97824f,0.20749f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32649 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f650 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.66964f,0.11214f,0.1f,0.66899f,0.09749f,0.1f,0.6669f,0.08287f,0.1f,0.66526f,0.07569f,0.1f,0.66318f,0.06865f,0.1f,0.66065f,0.06178f,0.1f,0.65764f,0.05514f,0.1f,0.65764f,0.05514f,0f,0.66065f,0.06178f,0f,0.66318f,0.06865f,0f,0.66526f,0.07569f,0f,0.6669f,0.08287f,0f,0.66899f,0.09749f,0f,0.66964f,0.11214f,0f});
  }
}
protected class MFVec3f651 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99587f,-0.09082f,0f,0.98089f,-0.19457f,0f,0.96771f,-0.25206f,0f,0.9496f,-0.31348f,0f,0.92553f,-0.37868f,0f,0.89443f,-0.44721f,0f,0.89443f,-0.44721f,0f,0.92553f,-0.37868f,0f,0.9496f,-0.31348f,0f,0.96771f,-0.25206f,0f,0.98089f,-0.19457f,0f,0.99587f,-0.09082f,0f,1f,0f,0f});
  }
}
protected class MFInt32652 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,7,-1,8,9,3,-1,10,2,9,-1,3,4,7,-1,7,4,5,-1,6,7,5,-1});
  }
}
protected class MFVec3f653 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.65764f,0.05514f,0.1f,0.65122f,0.04402f,0.1f,0.64348f,0.03364f,0.1f,0.63457f,0.02427f,0.1f,0.62973f,0.02004f,0.1f,0.62464f,0.01614f,0.1f,0.62464f,0.01614f,0f,0.62973f,0.02004f,0f,0.63457f,0.02427f,0f,0.64348f,0.03364f,0f,0.65122f,0.04402f,0f,0.65764f,0.05514f,0f});
  }
}
protected class MFVec3f654 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,-0.44721f,0f,0.83523f,-0.5499f,0f,0.76488f,-0.64417f,0f,0.6813f,-0.732f,0f,0.63357f,-0.77369f,0f,0.58124f,-0.81373f,0f,0.58124f,-0.81373f,0f,0.63357f,-0.77369f,0f,0.6813f,-0.732f,0f,0.76488f,-0.64417f,0f,0.83523f,-0.5499f,0f,0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32655 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f656 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.62464f,0.01614f,0.1f,0.61514f,0.00917f,0.1f,0.60483f,0.00331f,0.1f,0.59392f,-0.00138f,0.1f,0.58264f,-0.00486f,0.1f,0.58264f,-0.00486f,0f,0.59392f,-0.00138f,0f,0.60483f,0.00331f,0f,0.61514f,0.00917f,0f,0.62464f,0.01614f,0f});
  }
}
protected class MFVec3f657 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.64018f,-0.76822f,0f,0.54271f,-0.83992f,0f,0.44454f,-0.89576f,0f,0.34505f,-0.93858f,0f,0.24254f,-0.97014f,0f,0.24254f,-0.97014f,0f,0.34505f,-0.93858f,0f,0.44454f,-0.89576f,0f,0.54271f,-0.83992f,0f,0.64018f,-0.76822f,0f});
  }
}
protected class MFInt32658 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f659 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.58264f,-0.00486f,0.1f,0.55882f,-0.00932f,0.1f,0.54675f,-0.01047f,0.1f,0.53464f,-0.01086f,0.1f,0.53464f,-0.01086f,0f,0.54675f,-0.01047f,0f,0.55882f,-0.00932f,0f,0.58264f,-0.00486f,0f});
  }
}
protected class MFVec3f660 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,-0.97014f,0f,0.12495f,-0.99216f,0f,0.06358f,-0.99798f,0f,0f,-1f,0f,0f,-1f,0f,0.06358f,-0.99798f,0f,0.12495f,-0.99216f,0f,0.24254f,-0.97014f,0f});
  }
}
protected class MFInt32661 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f662 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.53464f,-0.01086f,0.1f,0.43264f,-0.01086f,0.1f,0.43264f,-0.01086f,0f,0.53464f,-0.01086f,0f});
  }
}
protected class MFVec3f663 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32664 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f665 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.43264f,-0.01086f,0.1f,0.43264f,0.00114f,0.1f,0.43264f,0.00114f,0f,0.43264f,-0.01086f,0f});
  }
}
protected class MFVec3f666 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32667 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f668 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.43264f,0.00114f,0.1f,0.43864f,0.00114f,0.1f,0.44464f,0.00114f,0.1f,0.44464f,0.00114f,0f,0.43264f,0.00114f,0f});
  }
}
protected class MFVec3f669 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32670 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1});
  }
}
protected class MFVec3f671 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44464f,0.00114f,0.1f,0.44585f,0.00118f,0.1f,0.44707f,0.0013f,0.1f,0.44829f,0.0015f,0.1f,0.44949f,0.0018f,0.1f,0.45065f,0.00221f,0.1f,0.45174f,0.00273f,0.1f,0.45274f,0.00337f,0.1f,0.45364f,0.00414f,0.1f,0.45364f,0.00414f,0f,0.45274f,0.00337f,0f,0.45174f,0.00273f,0f,0.45065f,0.00221f,0f,0.44949f,0.0018f,0f,0.44829f,0.0015f,0f,0.44707f,0.0013f,0f,0.44585f,0.00118f,0f,0.44464f,0.00114f,0f});
  }
}
protected class MFVec3f672 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.06216f,0.99807f,0f,-0.12928f,0.99161f,0f,-0.20336f,0.9791f,0f,-0.28619f,0.95817f,0f,-0.37907f,0.92537f,0f,-0.48214f,0.87609f,0f,-0.59334f,0.80495f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.59334f,0.80495f,0f,-0.48214f,0.87609f,0f,-0.37907f,0.92537f,0f,-0.28619f,0.95817f,0f,-0.20336f,0.9791f,0f,-0.12928f,0.99161f,0f,-0.06216f,0.99807f,0f,0f,1f,0f});
  }
}
protected class MFInt32673 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f674 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.45364f,0.00414f,0.1f,0.455f,0.00427f,0.1f,0.45634f,0.00463f,0.1f,0.457f,0.00489f,0.1f,0.45765f,0.00519f,0.1f,0.45828f,0.00554f,0.1f,0.45889f,0.00593f,0.1f,0.46004f,0.00683f,0.1f,0.46106f,0.00785f,0.1f,0.46152f,0.00839f,0.1f,0.46194f,0.00896f,0.1f,0.46264f,0.01014f,0.1f,0.46264f,0.01014f,0f,0.46194f,0.00896f,0f,0.46152f,0.00839f,0f,0.46106f,0.00785f,0f,0.46004f,0.00683f,0f,0.45889f,0.00593f,0f,0.45828f,0.00554f,0f,0.45765f,0.00519f,0f,0.457f,0.00489f,0f,0.45634f,0.00463f,0f,0.455f,0.00427f,0f,0.45364f,0.00414f,0f});
  }
}
protected class MFVec3f675 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.17903f,0.98384f,0f,-0.33052f,0.9438f,0f,-0.39682f,0.9179f,0f,-0.45769f,0.88911f,0f,-0.51385f,0.85788f,0f,-0.56598f,0.82442f,0f,-0.66063f,0.75071f,0f,-0.74571f,0.66628f,0f,-0.78549f,0.61888f,0f,-0.82362f,0.56714f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.82362f,0.56714f,0f,-0.78549f,0.61888f,0f,-0.74571f,0.66628f,0f,-0.66063f,0.75071f,0f,-0.56598f,0.82442f,0f,-0.51385f,0.85788f,0f,-0.45769f,0.88911f,0f,-0.39682f,0.9179f,0f,-0.33052f,0.9438f,0f,-0.17903f,0.98384f,0f,0f,1f,0f});
  }
}
protected class MFInt32676 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f677 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.46264f,0.01014f,0.1f,0.46341f,0.01104f,0.1f,0.46406f,0.01205f,0.1f,0.46458f,0.01314f,0.1f,0.46498f,0.0143f,0.1f,0.46528f,0.0155f,0.1f,0.46549f,0.01672f,0.1f,0.46561f,0.01794f,0.1f,0.46564f,0.01914f,0.1f,0.46564f,0.01914f,0f,0.46561f,0.01794f,0f,0.46549f,0.01672f,0f,0.46528f,0.0155f,0f,0.46498f,0.0143f,0f,0.46458f,0.01314f,0f,0.46406f,0.01205f,0f,0.46341f,0.01104f,0f,0.46264f,0.01014f,0f});
  }
}
protected class MFVec3f678 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.80495f,0.59334f,0f,-0.87609f,0.48214f,0f,-0.92537f,0.37907f,0f,-0.95817f,0.28619f,0f,-0.9791f,0.20336f,0f,-0.99161f,0.12928f,0f,-0.99807f,0.06216f,0f,-1f,0f,0f,-1f,0f,0f,-0.99807f,0.06216f,0f,-0.99161f,0.12928f,0f,-0.9791f,0.20336f,0f,-0.95817f,0.28619f,0f,-0.92537f,0.37907f,0f,-0.87609f,0.48214f,0f,-0.80495f,0.59334f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32679 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f680 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.46564f,0.01914f,0.1f,0.46564f,0.20214f,0.1f,0.46564f,0.20214f,0f,0.46564f,0.01914f,0f});
  }
}
protected class MFVec3f681 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32682 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f683 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.46564f,0.20214f,0.1f,0.46561f,0.20335f,0.1f,0.46549f,0.20457f,0.1f,0.46528f,0.20579f,0.1f,0.46498f,0.20699f,0.1f,0.46458f,0.20815f,0.1f,0.46406f,0.20924f,0.1f,0.46341f,0.21024f,0.1f,0.46264f,0.21114f,0.1f,0.46264f,0.21114f,0f,0.46341f,0.21024f,0f,0.46406f,0.20924f,0f,0.46458f,0.20815f,0f,0.46498f,0.20699f,0f,0.46528f,0.20579f,0f,0.46549f,0.20457f,0f,0.46561f,0.20335f,0f,0.46564f,0.20214f,0f});
  }
}
protected class MFVec3f684 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99807f,-0.06216f,0f,-0.99161f,-0.12928f,0f,-0.9791f,-0.20336f,0f,-0.95817f,-0.28619f,0f,-0.92537f,-0.37907f,0f,-0.87609f,-0.48214f,0f,-0.80495f,-0.59334f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.80495f,-0.59334f,0f,-0.87609f,-0.48214f,0f,-0.92537f,-0.37907f,0f,-0.95817f,-0.28619f,0f,-0.9791f,-0.20336f,0f,-0.99161f,-0.12928f,0f,-0.99807f,-0.06216f,0f,-1f,0f,0f});
  }
}
protected class MFInt32685 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,10,-1,11,12,6,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,6,7,10,-1,10,7,8,-1,9,10,8,-1});
  }
}
protected class MFVec3f686 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.46264f,0.21114f,0.1f,0.46187f,0.21254f,0.1f,0.46097f,0.21388f,0.1f,0.45996f,0.21516f,0.1f,0.45885f,0.21635f,0.1f,0.45766f,0.21746f,0.1f,0.45638f,0.21847f,0.1f,0.45504f,0.21937f,0.1f,0.45364f,0.22014f,0.1f,0.45364f,0.22014f,0f,0.45504f,0.21937f,0f,0.45638f,0.21847f,0f,0.45766f,0.21746f,0f,0.45885f,0.21635f,0f,0.45996f,0.21516f,0f,0.46097f,0.21388f,0f,0.46187f,0.21254f,0f,0.46264f,0.21114f,0f});
  }
}
protected class MFVec3f687 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.85331f,-0.52141f,0f,-0.80828f,-0.58879f,0f,-0.75959f,-0.6504f,0f,-0.70711f,-0.70711f,0f,-0.6504f,-0.75959f,0f,-0.58879f,-0.80828f,0f,-0.52141f,-0.85331f,0f,-0.44721f,-0.89443f,0f,-0.44721f,-0.89443f,0f,-0.52141f,-0.85331f,0f,-0.58879f,-0.80828f,0f,-0.6504f,-0.75959f,0f,-0.70711f,-0.70711f,0f,-0.75959f,-0.6504f,0f,-0.80828f,-0.58879f,0f,-0.85331f,-0.52141f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32688 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,8,-1,9,10,2,-1,2,3,8,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,4,5,6,-1});
  }
}
protected class MFVec3f689 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.45364f,0.22014f,0.1f,0.45079f,0.22139f,0.1f,0.44781f,0.22233f,0.1f,0.44474f,0.22293f,0.1f,0.44319f,0.22309f,0.1f,0.44164f,0.22314f,0.1f,0.44164f,0.22314f,0f,0.44319f,0.22309f,0f,0.44474f,0.22293f,0f,0.44781f,0.22233f,0f,0.45079f,0.22139f,0f,0.45364f,0.22014f,0f});
  }
}
protected class MFVec3f690 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44722f,-0.89443f,0f,-0.35262f,-0.93577f,0f,-0.24866f,-0.96859f,0f,-0.13201f,-0.99125f,0f,-0.06804f,-0.99768f,0f,0f,-1f,0f,0f,-1f,0f,-0.06804f,-0.99768f,0f,-0.13201f,-0.99125f,0f,-0.24866f,-0.96859f,0f,-0.35262f,-0.93577f,0f,-0.44722f,-0.89443f,0f});
  }
}
protected class MFInt32691 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f692 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44164f,0.22314f,0.1f,0.44044f,0.22318f,0.1f,0.43922f,0.2233f,0.1f,0.438f,0.2235f,0.1f,0.4368f,0.2238f,0.1f,0.43564f,0.22421f,0.1f,0.43455f,0.22473f,0.1f,0.43354f,0.22537f,0.1f,0.43264f,0.22614f,0.1f,0.43264f,0.22614f,0f,0.43354f,0.22537f,0f,0.43455f,0.22473f,0f,0.43564f,0.22421f,0f,0.4368f,0.2238f,0f,0.438f,0.2235f,0f,0.43922f,0.2233f,0f,0.44044f,0.22318f,0f,0.44164f,0.22314f,0f});
  }
}
protected class MFVec3f693 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.06216f,-0.99807f,0f,-0.12928f,-0.99161f,0f,-0.20336f,-0.9791f,0f,-0.28619f,-0.95817f,0f,-0.37907f,-0.92537f,0f,-0.48214f,-0.87609f,0f,-0.59334f,-0.80495f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.59334f,-0.80495f,0f,-0.48214f,-0.87609f,0f,-0.37907f,-0.92537f,0f,-0.28619f,-0.95817f,0f,-0.20336f,-0.9791f,0f,-0.12928f,-0.99161f,0f,-0.06216f,-0.99807f,0f,0f,-1f,0f});
  }
}
protected class MFInt32694 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f695 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.43264f,0.22614f,0.1f,0.43264f,0.23814f,0.1f,0.43264f,0.23814f,0f,0.43264f,0.22614f,0f});
  }
}
protected class MFVec3f696 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32697 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f698 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.43264f,0.23814f,0.1f,0.54064f,0.23814f,0.1f,0.54064f,0.23814f,0f,0.43264f,0.23814f,0f});
  }
}
protected class MFVec3f699 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32700 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f701 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.54064f,0.23814f,0.1f,0.5514f,0.23753f,0.1f,0.56208f,0.23576f,0.1f,0.57254f,0.23293f,0.1f,0.58264f,0.22914f,0.1f,0.58264f,0.22914f,0f,0.57254f,0.23293f,0f,0.56208f,0.23576f,0f,0.5514f,0.23753f,0f,0.54064f,0.23814f,0f});
  }
}
protected class MFVec3f702 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.11188f,0.99372f,0f,0.21363f,0.97692f,0f,0.30695f,0.95172f,0f,0.39392f,0.91915f,0f,0.39392f,0.91915f,0f,0.30695f,0.95172f,0f,0.21363f,0.97692f,0f,0.11188f,0.99372f,0f,0f,1f,0f});
  }
}
protected class MFInt32703 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f704 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.58264f,0.22914f,0.1f,0.59302f,0.22612f,0.1f,0.60316f,0.2222f,0.1f,0.61279f,0.21724f,0.1f,0.61733f,0.21434f,0.1f,0.62164f,0.21114f,0.1f,0.62164f,0.21114f,0f,0.61733f,0.21434f,0f,0.61279f,0.21724f,0f,0.60316f,0.2222f,0f,0.59302f,0.22612f,0f,0.58264f,0.22914f,0f});
  }
}
protected class MFVec3f705 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24254f,0.97014f,0f,0.31794f,0.94811f,0f,0.40699f,0.91343f,0f,0.51007f,0.86013f,0f,0.56627f,0.82422f,0f,0.6247f,0.78087f,0f,0.6247f,0.78087f,0f,0.56627f,0.82422f,0f,0.51007f,0.86013f,0f,0.40699f,0.91343f,0f,0.31794f,0.94811f,0f,0.24254f,0.97014f,0f});
  }
}
protected class MFInt32706 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f707 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.62164f,0.21114f,0.1f,0.62692f,0.20703f,0.1f,0.63189f,0.2025f,0.1f,0.63654f,0.1976f,0.1f,0.64086f,0.19236f,0.1f,0.64484f,0.18685f,0.1f,0.64847f,0.18111f,0.1f,0.65464f,0.16914f,0.1f,0.65464f,0.16914f,0f,0.64847f,0.18111f,0f,0.64484f,0.18685f,0f,0.64086f,0.19236f,0f,0.63654f,0.1976f,0f,0.63189f,0.2025f,0f,0.62692f,0.20703f,0f,0.62164f,0.21114f,0f});
  }
}
protected class MFVec3f708 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.58124f,0.81373f,0f,0.64505f,0.76414f,0f,0.7008f,0.71336f,0f,0.74938f,0.66214f,0f,0.79168f,0.61093f,0f,0.82857f,0.55989f,0f,0.86081f,0.50893f,0f,0.91381f,0.40614f,0f,0.91381f,0.40614f,0f,0.86081f,0.50893f,0f,0.82857f,0.55989f,0f,0.79168f,0.61093f,0f,0.74938f,0.66214f,0f,0.7008f,0.71336f,0f,0.64505f,0.76414f,0f,0.58124f,0.81373f,0f});
  }
}
protected class MFInt32709 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f710 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.65464f,0.16914f,0.1f,0.65828f,0.16272f,0.1f,0.66138f,0.15597f,0.1f,0.66397f,0.14897f,0.1f,0.66605f,0.14176f,0.1f,0.66764f,0.13442f,0.1f,0.66876f,0.127f,0.1f,0.66964f,0.11214f,0.1f,0.66964f,0.11214f,0f,0.66876f,0.127f,0f,0.66764f,0.13442f,0f,0.66605f,0.14176f,0f,0.66397f,0.14897f,0f,0.66138f,0.15597f,0f,0.65828f,0.16272f,0f,0.65464f,0.16914f,0f});
  }
}
protected class MFVec3f711 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.848f,0.53f,0f,0.89073f,0.45454f,0f,0.92436f,0.38151f,0f,0.95026f,0.31146f,0f,0.96966f,0.24446f,0f,0.98361f,0.18032f,0f,0.99294f,0.11859f,0f,1f,0f,0f,1f,0f,0f,0.99294f,0.11859f,0f,0.98361f,0.18032f,0f,0.96966f,0.24446f,0f,0.95026f,0.31146f,0f,0.92436f,0.38151f,0f,0.89073f,0.45454f,0f,0.848f,0.53f,0f});
  }
}
protected class MFInt32712 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,161,0,-1,1,2,161,-1,161,2,3,-1,160,3,4,-1,5,160,4,-1,5,159,160,-1,5,6,159,-1,159,6,7,-1,158,7,8,-1,157,8,9,-1,10,157,9,-1,10,11,157,-1,157,11,156,-1,156,11,12,-1,13,156,12,-1,13,155,156,-1,13,14,155,-1,155,14,154,-1,154,14,15,-1,16,154,15,-1,16,153,154,-1,16,17,153,-1,153,17,18,-1,152,18,19,-1,151,19,20,-1,21,151,20,-1,21,22,151,-1,151,22,150,-1,150,22,23,-1,149,23,24,-1,148,24,25,-1,147,25,26,-1,146,26,145,-1,146,147,26,-1,161,3,160,-1,159,7,158,-1,158,8,157,-1,153,18,152,-1,152,19,151,-1,150,23,149,-1,149,24,148,-1,148,25,147,-1,26,27,145,-1,145,27,144,-1,144,27,28,-1,143,28,29,-1,142,29,141,-1,142,143,29,-1,144,28,143,-1,30,138,29,-1,30,44,138,-1,30,43,44,-1,30,42,43,-1,30,41,42,-1,30,40,41,-1,30,39,40,-1,30,38,39,-1,30,37,38,-1,30,36,37,-1,30,35,36,-1,30,34,35,-1,30,33,34,-1,30,32,33,-1,30,31,32,-1,44,45,138,-1,138,45,46,-1,47,138,46,-1,47,48,138,-1,138,48,49,-1,50,138,49,-1,50,51,138,-1,138,51,53,-1,54,138,53,-1,54,55,138,-1,138,55,56,-1,57,138,56,-1,57,58,138,-1,138,58,59,-1,60,138,59,-1,60,137,138,-1,60,61,137,-1,137,61,136,-1,136,61,135,-1,135,61,134,-1,134,61,62,-1,63,134,62,-1,63,133,134,-1,63,64,133,-1,133,64,65,-1,132,65,66,-1,131,66,67,-1,130,67,68,-1,129,68,70,-1,128,70,71,-1,72,128,71,-1,72,127,128,-1,72,73,127,-1,127,73,126,-1,126,73,125,-1,125,73,74,-1,124,74,92,-1,123,92,122,-1,123,124,92,-1,51,52,53,-1,133,65,132,-1,132,66,131,-1,131,67,130,-1,68,69,70,-1,129,70,128,-1,74,75,92,-1,92,75,76,-1,77,92,76,-1,77,91,92,-1,77,78,91,-1,91,78,83,-1,84,91,83,-1,84,85,91,-1,91,85,86,-1,87,91,86,-1,87,88,91,-1,91,88,89,-1,90,91,89,-1,83,78,82,-1,82,78,79,-1,81,79,80,-1,81,82,79,-1,93,119,92,-1,93,118,119,-1,93,94,118,-1,118,94,117,-1,117,94,116,-1,116,94,95,-1,115,95,114,-1,115,116,95,-1,114,95,113,-1,113,95,96,-1,112,96,97,-1,111,97,110,-1,111,112,97,-1,113,96,112,-1,97,98,110,-1,110,98,109,-1,109,98,108,-1,108,98,99,-1,107,99,100,-1,101,107,100,-1,101,106,107,-1,101,102,106,-1,106,102,105,-1,105,102,103,-1,104,103,0,-1,161,104,0,-1,108,99,107,-1,105,103,104,-1,119,120,92,-1,92,120,121,-1,122,92,121,-1,124,125,74,-1,129,130,68,-1,138,139,29,-1,29,139,140,-1,141,29,140,-1});
  }
}
protected class MFVec3f713 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.65764f,0.05514f,0.1f,0.66065f,0.06178f,0.1f,0.66318f,0.06865f,0.1f,0.66526f,0.07569f,0.1f,0.6669f,0.08287f,0.1f,0.66899f,0.09749f,0.1f,0.66964f,0.11214f,0.1f,0.66876f,0.127f,0.1f,0.66764f,0.13442f,0.1f,0.66605f,0.14176f,0.1f,0.66397f,0.14897f,0.1f,0.66138f,0.15597f,0.1f,0.65828f,0.16272f,0.1f,0.65464f,0.16914f,0.1f,0.64847f,0.18111f,0.1f,0.64484f,0.18685f,0.1f,0.64086f,0.19236f,0.1f,0.63654f,0.1976f,0.1f,0.63189f,0.2025f,0.1f,0.62692f,0.20703f,0.1f,0.62164f,0.21114f,0.1f,0.61733f,0.21434f,0.1f,0.61279f,0.21724f,0.1f,0.60316f,0.2222f,0.1f,0.59302f,0.22612f,0.1f,0.58264f,0.22914f,0.1f,0.57254f,0.23293f,0.1f,0.56208f,0.23576f,0.1f,0.5514f,0.23753f,0.1f,0.54064f,0.23814f,0.1f,0.43264f,0.23814f,0.1f,0.43264f,0.22614f,0.1f,0.43354f,0.22537f,0.1f,0.43455f,0.22473f,0.1f,0.43564f,0.22421f,0.1f,0.4368f,0.2238f,0.1f,0.438f,0.2235f,0.1f,0.43922f,0.2233f,0.1f,0.44044f,0.22318f,0.1f,0.44164f,0.22314f,0.1f,0.44319f,0.22309f,0.1f,0.44474f,0.22293f,0.1f,0.44781f,0.22233f,0.1f,0.45079f,0.22139f,0.1f,0.45364f,0.22014f,0.1f,0.45504f,0.21937f,0.1f,0.45638f,0.21847f,0.1f,0.45766f,0.21746f,0.1f,0.45885f,0.21635f,0.1f,0.45996f,0.21516f,0.1f,0.46097f,0.21388f,0.1f,0.46187f,0.21254f,0.1f,0.46264f,0.21114f,0.1f,0.46341f,0.21024f,0.1f,0.46406f,0.20924f,0.1f,0.46458f,0.20815f,0.1f,0.46498f,0.20699f,0.1f,0.46528f,0.20579f,0.1f,0.46549f,0.20457f,0.1f,0.46561f,0.20335f,0.1f,0.46564f,0.20214f,0.1f,0.46564f,0.01914f,0.1f,0.46561f,0.01794f,0.1f,0.46549f,0.01672f,0.1f,0.46528f,0.0155f,0.1f,0.46498f,0.0143f,0.1f,0.46458f,0.01314f,0.1f,0.46406f,0.01205f,0.1f,0.46341f,0.01104f,0.1f,0.46264f,0.01014f,0.1f,0.46194f,0.00896f,0.1f,0.46152f,0.00839f,0.1f,0.46106f,0.00785f,0.1f,0.46004f,0.00683f,0.1f,0.45889f,0.00593f,0.1f,0.45828f,0.00554f,0.1f,0.45765f,0.00519f,0.1f,0.457f,0.00489f,0.1f,0.45634f,0.00463f,0.1f,0.455f,0.00427f,0.1f,0.45364f,0.00414f,0.1f,0.45274f,0.00337f,0.1f,0.45174f,0.00273f,0.1f,0.45065f,0.00221f,0.1f,0.44949f,0.0018f,0.1f,0.44829f,0.0015f,0.1f,0.44707f,0.0013f,0.1f,0.44585f,0.00118f,0.1f,0.44464f,0.00114f,0.1f,0.43864f,0.00114f,0.1f,0.43264f,0.00114f,0.1f,0.43264f,-0.01086f,0.1f,0.53464f,-0.01086f,0.1f,0.54675f,-0.01047f,0.1f,0.55882f,-0.00932f,0.1f,0.58264f,-0.00486f,0.1f,0.59392f,-0.00138f,0.1f,0.60483f,0.00331f,0.1f,0.61514f,0.00917f,0.1f,0.62464f,0.01614f,0.1f,0.62973f,0.02004f,0.1f,0.63457f,0.02427f,0.1f,0.64348f,0.03364f,0.1f,0.65122f,0.04402f,0.1f,0.62164f,0.06714f,0.1f,0.61845f,0.05755f,0.1f,0.6144f,0.04823f,0.1f,0.60947f,0.03937f,0.1f,0.60364f,0.03114f,0.1f,0.60094f,0.02783f,0.1f,0.59797f,0.02473f,0.1f,0.59478f,0.02183f,0.1f,0.5914f,0.01914f,0.1f,0.5842f,0.01429f,0.1f,0.57664f,0.01014f,0.1f,0.572f,0.00848f,0.1f,0.56725f,0.00715f,0.1f,0.5575f,0.00531f,0.1f,0.54757f,0.00439f,0.1f,0.53764f,0.00414f,0.1f,0.53061f,0.00436f,0.1f,0.52356f,0.00523f,0.1f,0.52013f,0.006f,0.1f,0.5168f,0.00705f,0.1f,0.51363f,0.00842f,0.1f,0.51211f,0.00923f,0.1f,0.51064f,0.01014f,0.1f,0.5095f,0.01099f,0.1f,0.50844f,0.01195f,0.1f,0.50746f,0.013f,0.1f,0.50656f,0.01414f,0.1f,0.50575f,0.01535f,0.1f,0.50501f,0.01664f,0.1f,0.50377f,0.01937f,0.1f,0.50282f,0.02227f,0.1f,0.50216f,0.02524f,0.1f,0.50177f,0.02823f,0.1f,0.50164f,0.03114f,0.1f,0.50164f,0.22014f,0.1f,0.51364f,0.22014f,0.1f,0.52105f,0.22225f,0.1f,0.52483f,0.2229f,0.1f,0.52864f,0.22314f,0.1f,0.53945f,0.22264f,0.1f,0.55021f,0.22104f,0.1f,0.56069f,0.21825f,0.1f,0.56575f,0.21637f,0.1f,0.57064f,0.21414f,0.1f,0.57904f,0.20938f,0.1f,0.58694f,0.20375f,0.1f,0.59419f,0.19731f,0.1f,0.60064f,0.19014f,0.1f,0.6062f,0.18253f,0.1f,0.61109f,0.17443f,0.1f,0.61526f,0.16594f,0.1f,0.61864f,0.15714f,0.1f,0.62259f,0.14633f,0.1f,0.6254f,0.13511f,0.1f,0.62708f,0.12365f,0.1f,0.62764f,0.11214f,0.1f,0.62644f,0.08935f,0.1f,0.6246f,0.0781f,0.1f});
  }
}
protected class MFVec3f714 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32715 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {53,0,40,-1,41,53,40,-1,41,52,53,-1,41,42,52,-1,52,42,43,-1,44,52,43,-1,44,45,52,-1,52,45,46,-1,47,52,46,-1,47,48,52,-1,52,48,49,-1,50,52,49,-1,50,51,52,-1,0,1,40,-1,40,1,2,-1,11,2,3,-1,4,11,3,-1,4,5,11,-1,11,5,6,-1,10,6,7,-1,9,7,8,-1,9,10,7,-1,40,2,11,-1,12,40,11,-1,12,39,40,-1,12,13,39,-1,39,13,14,-1,15,39,14,-1,15,16,39,-1,39,16,17,-1,18,39,17,-1,18,19,39,-1,39,19,20,-1,21,39,20,-1,21,22,39,-1,39,22,23,-1,24,39,23,-1,24,25,39,-1,39,25,26,-1,27,39,26,-1,27,28,39,-1,39,28,29,-1,30,39,29,-1,30,31,39,-1,39,31,32,-1,33,39,32,-1,33,34,39,-1,39,34,35,-1,36,39,35,-1,36,38,39,-1,36,37,38,-1,11,6,10,-1});
  }
}
protected class MFVec3f716 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00308f,0.00378f,0f,0.00803f,0.00437f,0f,0.01361f,0.00518f,0f,0.01912f,0.00637f,0f,0.02447f,0.00798f,0f,0.02961f,0.01007f,0f,0.03445f,0.01265f,0f,0.03673f,0.01414f,0f,0.03892f,0.01578f,0f,0.04093f,0.01795f,0f,0.04277f,0.02027f,0f,0.04446f,0.02273f,0f,0.04598f,0.0253f,0f,0.04858f,0.03076f,0f,0.05061f,0.03654f,0f,0.05212f,0.04254f,0f,0.05315f,0.04865f,0f,0.05373f,0.05476f,0f,0.05392f,0.06078f,0f,0.05383f,0.0633f,0f,0.05357f,0.06582f,0f,0.05314f,0.06835f,0f,0.05256f,0.07085f,0f,0.05094f,0.0758f,0f,0.04878f,0.08059f,0f,0.04614f,0.08515f,0f,0.04308f,0.08942f,0f,0.03965f,0.09331f,0f,0.03592f,0.09678f,0f,0.03388f,0.09868f,0f,0.03171f,0.10044f,0f,0.02701f,0.10356f,0f,0.02193f,0.10614f,0f,0.01655f,0.10822f,0f,0.01097f,0.1098f,0f,0.00528f,0.11091f,0f,-0.00044f,0.11156f,0f,-0.00608f,0.11178f,0f,-0.02708f,0.11178f,0f,-0.03608f,0.11178f,0f,-0.03608f,0.02478f,0f,-0.03592f,0.02223f,0f,-0.03546f,0.01966f,0f,-0.0347f,0.01712f,0f,-0.03367f,0.01466f,0f,-0.03238f,0.01234f,0f,-0.03164f,0.01125f,0f,-0.03084f,0.01022f,0f,-0.02998f,0.00925f,0f,-0.02907f,0.00834f,0f,-0.0281f,0.00752f,0f,-0.02708f,0.00678f,0f,-0.02124f,0.00523f,0f,-0.01524f,0.00432f,0f});
  }
}
protected class MFVec3f717 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32718 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f719 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.11961f,-0.2568f,0.07f,0.11961f,-0.26467f,0.07f,0.11961f,-0.26467f,0f,0.11961f,-0.2568f,0f});
  }
}
protected class MFVec3f720 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32721 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f722 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.11961f,-0.26467f,0.07f,0.04283f,-0.26467f,0.07f,0.04283f,-0.26467f,0f,0.11961f,-0.26467f,0f});
  }
}
protected class MFVec3f723 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32724 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f725 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04283f,-0.26467f,0.07f,0.04283f,-0.2568f,0.07f,0.04283f,-0.2568f,0f,0.04283f,-0.26467f,0f});
  }
}
protected class MFVec3f726 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32727 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f728 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04283f,-0.2568f,0.07f,0.04775f,-0.2568f,0.07f,0.05268f,-0.2568f,0.07f,0.05268f,-0.2568f,0f,0.04283f,-0.2568f,0f});
  }
}
protected class MFVec3f729 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32730 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f731 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.05268f,-0.2568f,0.07f,0.0552f,-0.2567f,0.07f,0.05773f,-0.25638f,0.07f,0.05897f,-0.25611f,0.07f,0.06019f,-0.25577f,0.07f,0.06137f,-0.25535f,0.07f,0.06252f,-0.25483f,0.07f,0.06252f,-0.25483f,0f,0.06137f,-0.25535f,0f,0.06019f,-0.25577f,0f,0.05897f,-0.25611f,0f,0.05773f,-0.25638f,0f,0.0552f,-0.2567f,0f,0.05268f,-0.2568f,0f});
  }
}
protected class MFVec3f732 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.07973f,0.99682f,0f,-0.17989f,0.98369f,0f,-0.23845f,0.97116f,0f,-0.3028f,0.95306f,0f,-0.37265f,0.92797f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.37265f,0.92797f,0f,-0.3028f,0.95306f,0f,-0.23845f,0.97116f,0f,-0.17989f,0.98369f,0f,-0.07973f,0.99682f,0f,0f,1f,0f});
  }
}
protected class MFInt32733 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f734 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06252f,-0.25483f,0.07f,0.06341f,-0.25475f,0.07f,0.06429f,-0.25451f,0.07f,0.06515f,-0.25414f,0.07f,0.06596f,-0.25366f,0.07f,0.06672f,-0.25307f,0.07f,0.06739f,-0.2524f,0.07f,0.06797f,-0.25167f,0.07f,0.06843f,-0.25089f,0.07f,0.06843f,-0.25089f,0f,0.06797f,-0.25167f,0f,0.06739f,-0.2524f,0f,0.06672f,-0.25307f,0f,0.06596f,-0.25366f,0f,0.06515f,-0.25414f,0f,0.06429f,-0.25451f,0f,0.06341f,-0.25475f,0f,0.06252f,-0.25483f,0f});
  }
}
protected class MFVec3f735 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.17903f,0.98384f,0f,-0.33052f,0.9438f,0f,-0.45769f,0.88911f,0f,-0.56598f,0.82442f,0f,-0.66063f,0.75071f,0f,-0.74571f,0.66627f,0f,-0.82362f,0.56714f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.82362f,0.56714f,0f,-0.74571f,0.66627f,0f,-0.66063f,0.75071f,0f,-0.56598f,0.82442f,0f,-0.45769f,0.88911f,0f,-0.33052f,0.9438f,0f,-0.17903f,0.98384f,0f,0f,1f,0f});
  }
}
protected class MFInt32736 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f737 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06843f,-0.25089f,0.07f,0.06906f,-0.25012f,0.07f,0.06954f,-0.24924f,0.07f,0.06989f,-0.24827f,0.07f,0.07013f,-0.24725f,0.07f,0.07028f,-0.2462f,0.07f,0.07036f,-0.24512f,0.07f,0.07039f,-0.24302f,0.07f,0.07039f,-0.24302f,0f,0.07036f,-0.24512f,0f,0.07028f,-0.2462f,0f,0.07013f,-0.24725f,0f,0.06989f,-0.24827f,0f,0.06954f,-0.24924f,0f,0.06906f,-0.25012f,0f,0.06843f,-0.25089f,0f});
  }
}
protected class MFVec3f738 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.7071f,0.70711f,0f,-0.8325f,0.55403f,0f,-0.91369f,0.40641f,0f,-0.96007f,0.27976f,0f,-0.98386f,0.17892f,0f,-0.99469f,0.1029f,0f,-0.9988f,0.04898f,0f,-1f,0f,0f,-1f,0f,0f,-0.9988f,0.04898f,0f,-0.99469f,0.1029f,0f,-0.98386f,0.17892f,0f,-0.96007f,0.27976f,0f,-0.91369f,0.40641f,0f,-0.8325f,0.55403f,0f,-0.7071f,0.70711f,0f});
  }
}
protected class MFInt32739 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f740 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.07039f,-0.24302f,0.07f,0.07039f,-0.16033f,0.07f,0.07039f,-0.16033f,0f,0.07039f,-0.24302f,0f});
  }
}
protected class MFVec3f741 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32742 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f743 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.07039f,-0.16033f,0.07f,0.04086f,-0.16033f,0.07f,0.04086f,-0.16033f,0f,0.07039f,-0.16033f,0f});
  }
}
protected class MFVec3f744 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32745 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f746 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04086f,-0.16033f,0.07f,0.04086f,-0.15049f,0.07f,0.04086f,-0.15049f,0f,0.04086f,-0.16033f,0f});
  }
}
protected class MFVec3f747 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32748 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f749 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04086f,-0.15049f,0.07f,0.04677f,-0.15049f,0.07f,0.04677f,-0.15049f,0f,0.04086f,-0.15049f,0f});
  }
}
protected class MFVec3f750 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32751 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f752 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.04677f,-0.15049f,0.07f,0.05229f,-0.15026f,0.07f,0.05779f,-0.14954f,0.07f,0.0632f,-0.14831f,0.07f,0.06843f,-0.14655f,0.07f,0.06843f,-0.14655f,0f,0.0632f,-0.14831f,0f,0.05779f,-0.14954f,0f,0.05229f,-0.15026f,0f,0.04677f,-0.15049f,0f});
  }
}
protected class MFVec3f753 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.08453f,0.99642f,0f,-0.1739f,0.98476f,0f,-0.26937f,0.96304f,0f,-0.37139f,0.92848f,0f,-0.37139f,0.92848f,0f,-0.26937f,0.96304f,0f,-0.1739f,0.98476f,0f,-0.08453f,0.99642f,0f,0f,1f,0f});
  }
}
protected class MFInt32754 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f755 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.06843f,-0.14655f,0.07f,0.0727f,-0.14466f,0.07f,0.07681f,-0.14241f,0.07f,0.08068f,-0.13977f,0.07f,0.08248f,-0.13829f,0.07f,0.08418f,-0.13671f,0.07f,0.08418f,-0.13671f,0f,0.08248f,-0.13829f,0f,0.08068f,-0.13977f,0f,0.07681f,-0.14241f,0f,0.0727f,-0.14466f,0f,0.06843f,-0.14655f,0f});
  }
}
protected class MFVec3f756 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.37139f,0.92848f,0f,-0.44036f,0.89782f,0f,-0.51995f,0.8542f,0f,-0.60979f,0.79256f,0f,-0.65782f,0.75317f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.65782f,0.75317f,0f,-0.60979f,0.79256f,0f,-0.51995f,0.8542f,0f,-0.44036f,0.89782f,0f,-0.37139f,0.92848f,0f});
  }
}
protected class MFInt32757 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f758 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.08418f,-0.13671f,0.07f,0.09402f,-0.13671f,0.07f,0.09402f,-0.13671f,0f,0.08418f,-0.13671f,0f});
  }
}
protected class MFVec3f759 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32760 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f761 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09402f,-0.13671f,0.07f,0.0931f,-0.14107f,0.07f,0.09249f,-0.1455f,0.07f,0.09205f,-0.15442f,0.07f,0.09205f,-0.15442f,0f,0.09249f,-0.1455f,0f,0.0931f,-0.14107f,0f,0.09402f,-0.13671f,0f});
  }
}
protected class MFVec3f762 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.97014f,-0.24254f,0f,0.98555f,-0.16937f,0f,0.99451f,-0.10462f,0f,1f,0f,0f,1f,0f,0f,0.99451f,-0.10462f,0f,0.98555f,-0.16937f,0f,0.97014f,-0.24254f,0f});
  }
}
protected class MFInt32763 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f764 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09205f,-0.15442f,0.07f,0.09205f,-0.16427f,0.07f,0.09205f,-0.17411f,0.07f,0.09205f,-0.17411f,0f,0.09205f,-0.15442f,0f});
  }
}
protected class MFVec3f765 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32766 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f767 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09205f,-0.17411f,0.07f,0.09205f,-0.24302f,0.07f,0.09205f,-0.24302f,0f,0.09205f,-0.17411f,0f});
  }
}
protected class MFVec3f768 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32769 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f770 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09205f,-0.24302f,0.07f,0.09205f,-0.24597f,0.07f,0.09205f,-0.24893f,0.07f,0.09205f,-0.24893f,0f,0.09205f,-0.24302f,0f});
  }
}
protected class MFVec3f771 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32772 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {17,0,16,-1,16,0,1,-1,15,1,2,-1,3,15,2,-1,3,14,15,-1,3,4,14,-1,14,4,13,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,1,15,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f773 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09205f,-0.24893f,0.07f,0.09256f,-0.24984f,0.07f,0.09315f,-0.25072f,0.07f,0.09381f,-0.25156f,0.07f,0.09454f,-0.25235f,0.07f,0.09532f,-0.25307f,0.07f,0.09616f,-0.25373f,0.07f,0.09704f,-0.25432f,0.07f,0.09796f,-0.25483f,0.07f,0.09796f,-0.25483f,0f,0.09704f,-0.25432f,0f,0.09616f,-0.25373f,0f,0.09532f,-0.25307f,0f,0.09454f,-0.25235f,0f,0.09381f,-0.25156f,0f,0.09315f,-0.25072f,0f,0.09256f,-0.24984f,0f,0.09205f,-0.24893f,0f});
  }
}
protected class MFVec3f774 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,0.44722f,0f,0.85331f,0.52141f,0f,0.80828f,0.5888f,0f,0.75959f,0.6504f,0f,0.70711f,0.70711f,0f,0.6504f,0.75959f,0f,0.5888f,0.80828f,0f,0.52141f,0.85331f,0f,0.44722f,0.89443f,0f,0.44722f,0.89443f,0f,0.52141f,0.85331f,0f,0.5888f,0.80828f,0f,0.6504f,0.75959f,0f,0.70711f,0.70711f,0f,0.75959f,0.6504f,0f,0.80828f,0.5888f,0f,0.85331f,0.52141f,0f,0.89443f,0.44722f,0f});
  }
}
protected class MFInt32775 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f776 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.09796f,-0.25483f,0.07f,0.10046f,-0.25499f,0.07f,0.10294f,-0.25542f,0.07f,0.1078f,-0.2568f,0.07f,0.1078f,-0.2568f,0f,0.10294f,-0.25542f,0f,0.10046f,-0.25499f,0f,0.09796f,-0.25483f,0f});
  }
}
protected class MFVec3f777 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.12161f,0.99258f,0f,0.21363f,0.97691f,0f,0.31623f,0.94868f,0f,0.31623f,0.94868f,0f,0.21363f,0.97691f,0f,0.12161f,0.99258f,0f,0f,1f,0f});
  }
}
protected class MFInt32778 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,4,-1,4,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f779 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1078f,-0.2568f,0.07f,0.11371f,-0.2568f,0.07f,0.11961f,-0.2568f,0.07f,0.11961f,-0.2568f,0f,0.1078f,-0.2568f,0f});
  }
}
protected class MFVec3f780 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32781 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,53,6,49,-1,50,53,49,-1,50,52,53,-1,50,51,52,-1,49,6,48,-1,48,6,7,-1,47,7,8,-1,46,8,9,-1,10,46,9,-1,10,45,46,-1,10,11,45,-1,45,11,44,-1,44,11,12,-1,42,12,13,-1,41,13,14,-1,40,14,39,-1,40,41,14,-1,48,7,47,-1,47,8,46,-1,44,12,42,-1,43,44,42,-1,42,13,41,-1,15,37,14,-1,15,36,37,-1,15,16,36,-1,36,16,17,-1,35,17,18,-1,19,35,18,-1,19,26,35,-1,19,25,26,-1,19,24,25,-1,19,20,24,-1,24,20,23,-1,23,20,21,-1,22,23,21,-1,36,17,35,-1,26,27,35,-1,35,27,28,-1,29,35,28,-1,29,30,35,-1,35,30,31,-1,34,31,32,-1,33,34,32,-1,35,31,34,-1,37,38,14,-1,14,38,39,-1,54,60,53,-1,54,55,60,-1,60,55,56,-1,57,60,56,-1,57,58,60,-1,60,58,59,-1,60,0,53,-1,53,0,6,-1});
  }
}
protected class MFVec3f782 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.11961f,-0.26467f,0.07f,0.11961f,-0.2568f,0.07f,0.11371f,-0.2568f,0.07f,0.1078f,-0.2568f,0.07f,0.10294f,-0.25542f,0.07f,0.10046f,-0.25499f,0.07f,0.09796f,-0.25483f,0.07f,0.09704f,-0.25432f,0.07f,0.09616f,-0.25373f,0.07f,0.09532f,-0.25307f,0.07f,0.09454f,-0.25235f,0.07f,0.09381f,-0.25156f,0.07f,0.09315f,-0.25072f,0.07f,0.09256f,-0.24984f,0.07f,0.09205f,-0.24893f,0.07f,0.09205f,-0.24597f,0.07f,0.09205f,-0.24302f,0.07f,0.09205f,-0.17411f,0.07f,0.09205f,-0.16427f,0.07f,0.09205f,-0.15442f,0.07f,0.09249f,-0.1455f,0.07f,0.0931f,-0.14107f,0.07f,0.09402f,-0.13671f,0.07f,0.08418f,-0.13671f,0.07f,0.08248f,-0.13829f,0.07f,0.08068f,-0.13977f,0.07f,0.07681f,-0.14241f,0.07f,0.0727f,-0.14466f,0.07f,0.06843f,-0.14655f,0.07f,0.0632f,-0.14831f,0.07f,0.05779f,-0.14954f,0.07f,0.05229f,-0.15026f,0.07f,0.04677f,-0.15049f,0.07f,0.04086f,-0.15049f,0.07f,0.04086f,-0.16033f,0.07f,0.07039f,-0.16033f,0.07f,0.07039f,-0.24302f,0.07f,0.07036f,-0.24512f,0.07f,0.07028f,-0.2462f,0.07f,0.07013f,-0.24725f,0.07f,0.06989f,-0.24827f,0.07f,0.06954f,-0.24924f,0.07f,0.06906f,-0.25012f,0.07f,0.06843f,-0.25089f,0.07f,0.06797f,-0.25167f,0.07f,0.06739f,-0.2524f,0.07f,0.06672f,-0.25307f,0.07f,0.06596f,-0.25366f,0.07f,0.06515f,-0.25414f,0.07f,0.06429f,-0.25451f,0.07f,0.06341f,-0.25475f,0.07f,0.06252f,-0.25483f,0.07f,0.06137f,-0.25535f,0.07f,0.06019f,-0.25577f,0.07f,0.05897f,-0.25611f,0.07f,0.05773f,-0.25638f,0.07f,0.0552f,-0.2567f,0.07f,0.05268f,-0.2568f,0.07f,0.04775f,-0.2568f,0.07f,0.04283f,-0.2568f,0.07f,0.04283f,-0.26467f,0.07f});
  }
}
protected class MFVec3f783 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32784 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f785 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13042f,-0.24499f,0.07f,-0.13042f,-0.26467f,0.07f,-0.13042f,-0.26467f,0f,-0.13042f,-0.24499f,0f});
  }
}
protected class MFVec3f786 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt32787 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f788 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13042f,-0.26467f,0.07f,-0.2387f,-0.26467f,0.07f,-0.2387f,-0.26467f,0f,-0.13042f,-0.26467f,0f});
  }
}
protected class MFVec3f789 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt32790 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f791 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.2387f,-0.26467f,0.07f,-0.2387f,-0.25089f,0.07f,-0.2387f,-0.25089f,0f,-0.2387f,-0.26467f,0f});
  }
}
protected class MFVec3f792 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt32793 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f794 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.2387f,-0.25089f,0.07f,-0.23801f,-0.24969f,0.07f,-0.2372f,-0.24855f,0.07f,-0.23629f,-0.24749f,0.07f,-0.2353f,-0.24648f,0.07f,-0.23312f,-0.24465f,0.07f,-0.23082f,-0.24302f,0.07f,-0.23082f,-0.24302f,0f,-0.23312f,-0.24465f,0f,-0.2353f,-0.24648f,0f,-0.23629f,-0.24749f,0f,-0.2372f,-0.24855f,0f,-0.23801f,-0.24969f,0f,-0.2387f,-0.25089f,0f});
  }
}
protected class MFVec3f795 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,0.44721f,0f,-0.84151f,0.54024f,0f,-0.78693f,0.61704f,0f,-0.73429f,0.67884f,0f,-0.68594f,0.72765f,0f,-0.60698f,0.79472f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.60698f,0.79472f,0f,-0.68594f,0.72765f,0f,-0.73429f,0.67884f,0f,-0.78693f,0.61704f,0f,-0.84151f,0.54024f,0f,-0.89443f,0.44721f,0f});
  }
}
protected class MFInt32796 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {9,0,8,-1,8,0,1,-1,7,1,2,-1,3,7,2,-1,3,6,7,-1,3,4,6,-1,6,4,5,-1,8,1,7,-1});
  }
}
protected class MFVec3f797 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.23082f,-0.24302f,0.07f,-0.2277f,-0.24015f,0.07f,-0.22433f,-0.23755f,0.07f,-0.22076f,-0.23522f,0.07f,-0.21704f,-0.23317f,0.07f,-0.21704f,-0.23317f,0f,-0.22076f,-0.23522f,0f,-0.22433f,-0.23755f,0f,-0.2277f,-0.24015f,0f,-0.23082f,-0.24302f,0f});
  }
}
protected class MFVec3f798 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.64387f,0.76514f,0f,-0.57953f,0.81495f,0f,-0.5141f,0.85773f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.5141f,0.85773f,0f,-0.57953f,0.81495f,0f,-0.64387f,0.76514f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32799 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f800 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21704f,-0.23317f,0.07f,-0.21232f,-0.229f,0.07f,-0.2072f,-0.2253f,0.07f,-0.2072f,-0.2253f,0f,-0.21232f,-0.229f,0f,-0.21704f,-0.23317f,0f});
  }
}
protected class MFVec3f801 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.62005f,0.78456f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.62005f,0.78456f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32802 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f803 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.2072f,-0.2253f,0.07f,-0.19932f,-0.22136f,0.07f,-0.19145f,-0.21742f,0.07f,-0.19145f,-0.21742f,0f,-0.19932f,-0.22136f,0f,-0.2072f,-0.2253f,0f});
  }
}
protected class MFVec3f804 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt32805 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f806 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.19145f,-0.21742f,0.07f,-0.18443f,-0.2137f,0.07f,-0.17767f,-0.20955f,0.07f,-0.17767f,-0.20955f,0f,-0.18443f,-0.2137f,0f,-0.19145f,-0.21742f,0f});
  }
}
protected class MFVec3f807 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.49324f,0.86989f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.49324f,0.86989f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt32808 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f809 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.17767f,-0.20955f,0.07f,-0.17275f,-0.20463f,0.07f,-0.16782f,-0.19971f,0.07f,-0.16782f,-0.19971f,0f,-0.17275f,-0.20463f,0f,-0.17767f,-0.20955f,0f});
  }
}
protected class MFVec3f810 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32811 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f812 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16782f,-0.19971f,0.07f,-0.16586f,-0.19577f,0.07f,-0.16389f,-0.19183f,0.07f,-0.16389f,-0.19183f,0f,-0.16586f,-0.19577f,0f,-0.16782f,-0.19971f,0f});
  }
}
protected class MFVec3f813 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f,-0.89443f,0.44721f,0f});
  }
}
protected class MFInt32814 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f815 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16389f,-0.19183f,0.07f,-0.16287f,-0.188f,0.07f,-0.16227f,-0.18406f,0.07f,-0.16192f,-0.17608f,0.07f,-0.16192f,-0.17608f,0f,-0.16227f,-0.18406f,0f,-0.16287f,-0.188f,0f,-0.16389f,-0.19183f,0f});
  }
}
protected class MFVec3f816 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.9801f,0.19851f,0f,-0.99434f,0.10626f,0f,-1f,0f,0f,-1f,0f,0f,-0.99434f,0.10626f,0f,-0.9801f,0.19851f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32817 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,20,-1,21,22,2,-1,2,3,20,-1,20,3,19,-1,19,3,4,-1,18,4,5,-1,17,5,6,-1,16,6,7,-1,8,16,7,-1,8,15,16,-1,8,14,15,-1,8,9,14,-1,14,9,13,-1,13,9,10,-1,11,13,10,-1,11,12,13,-1,19,4,18,-1,18,5,17,-1,17,6,16,-1});
  }
}
protected class MFVec3f818 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16192f,-0.17608f,0.07f,-0.162f,-0.17313f,0.07f,-0.16228f,-0.17011f,0.07f,-0.16279f,-0.16707f,0.07f,-0.16355f,-0.1641f,0.07f,-0.1646f,-0.16128f,0.07f,-0.16524f,-0.15994f,0.07f,-0.16597f,-0.15867f,0.07f,-0.16678f,-0.15748f,0.07f,-0.16769f,-0.15636f,0.07f,-0.16869f,-0.15534f,0.07f,-0.16979f,-0.15442f,0.07f,-0.16979f,-0.15442f,0f,-0.16869f,-0.15534f,0f,-0.16769f,-0.15636f,0f,-0.16678f,-0.15748f,0f,-0.16597f,-0.15867f,0f,-0.16524f,-0.15994f,0f,-0.1646f,-0.16128f,0f,-0.16355f,-0.1641f,0f,-0.16279f,-0.16707f,0f,-0.16228f,-0.17011f,0f,-0.162f,-0.17313f,0f,-0.16192f,-0.17608f,0f});
  }
}
protected class MFVec3f819 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99825f,-0.05919f,0f,-0.99201f,-0.12616f,0f,-0.97897f,-0.20399f,0f,-0.95526f,-0.29576f,0f,-0.91475f,-0.40402f,0f,-0.88553f,-0.46458f,0f,-0.84859f,-0.52905f,0f,-0.80255f,-0.59658f,0f,-0.74619f,-0.66574f,0f,-0.67868f,-0.73443f,0f,-0.6f,-0.8f,0f,-0.6f,-0.8f,0f,-0.67868f,-0.73443f,0f,-0.74619f,-0.66574f,0f,-0.80255f,-0.59658f,0f,-0.84859f,-0.52905f,0f,-0.88553f,-0.46458f,0f,-0.91475f,-0.40402f,0f,-0.95526f,-0.29576f,0f,-0.97897f,-0.20399f,0f,-0.99201f,-0.12616f,0f,-0.99825f,-0.05919f,0f,-1f,0f,0f});
  }
}
protected class MFInt32820 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f821 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16979f,-0.15442f,0.07f,-0.17085f,-0.15344f,0.07f,-0.17197f,-0.15253f,0.07f,-0.17439f,-0.1509f,0.07f,-0.17701f,-0.14955f,0.07f,-0.17978f,-0.14845f,0.07f,-0.18265f,-0.14761f,0.07f,-0.18559f,-0.14702f,0.07f,-0.18854f,-0.14667f,0.07f,-0.19145f,-0.14655f,0.07f,-0.19145f,-0.14655f,0f,-0.18854f,-0.14667f,0f,-0.18559f,-0.14702f,0f,-0.18265f,-0.14761f,0f,-0.17978f,-0.14845f,0f,-0.17701f,-0.14955f,0f,-0.17439f,-0.1509f,0f,-0.17197f,-0.15253f,0f,-0.17085f,-0.15344f,0f,-0.16979f,-0.15442f,0f});
  }
}
protected class MFVec3f822 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,-0.70711f,0f,-0.65709f,-0.75381f,0f,-0.6068f,-0.79485f,0f,-0.50772f,-0.86152f,0f,-0.4129f,-0.91078f,0f,-0.32332f,-0.94629f,0f,-0.23865f,-0.97111f,0f,-0.15769f,-0.98749f,0f,-0.07881f,-0.99689f,0f,0f,-1f,0f,0f,-1f,0f,-0.07881f,-0.99689f,0f,-0.15769f,-0.98749f,0f,-0.23865f,-0.97111f,0f,-0.32332f,-0.94629f,0f,-0.4129f,-0.91078f,0f,-0.50772f,-0.86152f,0f,-0.6068f,-0.79485f,0f,-0.65709f,-0.75381f,0f,-0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32823 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f824 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.19145f,-0.14655f,0.07f,-0.19324f,-0.14663f,0.07f,-0.19502f,-0.14686f,0.07f,-0.19678f,-0.14723f,0.07f,-0.19853f,-0.14772f,0.07f,-0.20195f,-0.14897f,0.07f,-0.20523f,-0.15049f,0.07f,-0.20523f,-0.15049f,0f,-0.20195f,-0.14897f,0f,-0.19853f,-0.14772f,0f,-0.19678f,-0.14723f,0f,-0.19502f,-0.14686f,0f,-0.19324f,-0.14663f,0f,-0.19145f,-0.14655f,0f});
  }
}
protected class MFVec3f825 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0.08943f,-0.99599f,0f,0.16862f,-0.98568f,0f,0.23736f,-0.97142f,0f,0.29609f,-0.95516f,0f,0.38674f,-0.92219f,0f,0.44721f,-0.89443f,0f,0.44721f,-0.89443f,0f,0.38674f,-0.92219f,0f,0.29609f,-0.95516f,0f,0.23736f,-0.97142f,0f,0.16862f,-0.98568f,0f,0.08943f,-0.99599f,0f,0f,-1f,0f});
  }
}
protected class MFInt32826 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f827 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20523f,-0.15049f,0.07f,-0.21035f,-0.15418f,0.07f,-0.21507f,-0.15836f,0.07f,-0.21507f,-0.15836f,0f,-0.21035f,-0.15418f,0f,-0.20523f,-0.15049f,0f});
  }
}
protected class MFVec3f828 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5547f,-0.83205f,0f,0.62005f,-0.78456f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.62005f,-0.78456f,0f,0.5547f,-0.83205f,0f});
  }
}
protected class MFInt32829 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f830 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21507f,-0.15836f,0.07f,-0.21492f,-0.16087f,0.07f,-0.21449f,-0.16335f,0.07f,-0.21311f,-0.16821f,0.07f,-0.21311f,-0.16821f,0f,-0.21449f,-0.16335f,0f,-0.21492f,-0.16087f,0f,-0.21507f,-0.15836f,0f});
  }
}
protected class MFVec3f831 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,0.12161f,0f,0.97691f,0.21363f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.97691f,0.21363f,0f,0.99258f,0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt32832 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f833 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21311f,-0.16821f,0.07f,-0.21259f,-0.16935f,0.07f,-0.21217f,-0.17054f,0.07f,-0.21182f,-0.17175f,0.07f,-0.21156f,-0.173f,0.07f,-0.21123f,-0.17552f,0.07f,-0.21114f,-0.17805f,0.07f,-0.21114f,-0.17805f,0f,-0.21123f,-0.17552f,0f,-0.21156f,-0.173f,0f,-0.21182f,-0.17175f,0f,-0.21217f,-0.17054f,0f,-0.21259f,-0.16935f,0f,-0.21311f,-0.16821f,0f});
  }
}
protected class MFVec3f834 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,0.44721f,0f,0.92797f,0.37265f,0f,0.95305f,0.3028f,0f,0.97116f,0.23845f,0f,0.98369f,0.17989f,0f,0.99682f,0.07973f,0f,1f,0f,0f,1f,0f,0f,0.99682f,0.07973f,0f,0.98369f,0.17989f,0f,0.97116f,0.23845f,0f,0.95305f,0.3028f,0f,0.92797f,0.37265f,0f,0.89443f,0.44721f,0f});
  }
}
protected class MFInt32835 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f836 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21114f,-0.17805f,0.07f,-0.21122f,-0.17915f,0.07f,-0.21146f,-0.18023f,0.07f,-0.21184f,-0.18128f,0.07f,-0.21233f,-0.18231f,0.07f,-0.21292f,-0.1833f,0.07f,-0.21358f,-0.18423f,0.07f,-0.21431f,-0.18511f,0.07f,-0.21507f,-0.18592f,0.07f,-0.21507f,-0.18592f,0f,-0.21431f,-0.18511f,0f,-0.21358f,-0.18423f,0f,-0.21292f,-0.1833f,0f,-0.21233f,-0.18231f,0f,-0.21184f,-0.18128f,0f,-0.21146f,-0.18023f,0f,-0.21122f,-0.17915f,0f,-0.21114f,-0.17805f,0f});
  }
}
protected class MFVec3f837 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.98874f,-0.14963f,0f,0.96042f,-0.27856f,0f,0.92238f,-0.38629f,0f,0.8799f,-0.47516f,0f,0.83613f,-0.54853f,0f,0.79259f,-0.60975f,0f,0.7497f,-0.66178f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.7497f,-0.66178f,0f,0.79259f,-0.60975f,0f,0.83613f,-0.54853f,0f,0.8799f,-0.47516f,0f,0.92238f,-0.38629f,0f,0.96042f,-0.27856f,0f,0.98874f,-0.14963f,0f,1f,0f,0f});
  }
}
protected class MFInt32838 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f839 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.21507f,-0.18592f,0.07f,-0.21644f,-0.18652f,0.07f,-0.21786f,-0.18699f,0.07f,-0.21933f,-0.18733f,0.07f,-0.22082f,-0.18758f,0.07f,-0.22386f,-0.18784f,0.07f,-0.22689f,-0.18789f,0.07f,-0.22689f,-0.18789f,0f,-0.22386f,-0.18784f,0f,-0.22082f,-0.18758f,0f,-0.21933f,-0.18733f,0f,-0.21786f,-0.18699f,0f,-0.21644f,-0.18652f,0f,-0.21507f,-0.18592f,0f});
  }
}
protected class MFVec3f840 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.35328f,-0.93552f,0f,0.26836f,-0.96332f,0f,0.19461f,-0.98088f,0f,0.13281f,-0.99114f,0f,0.04437f,-0.99902f,0f,0f,-1f,0f,0f,-1f,0f,0.04437f,-0.99902f,0f,0.13281f,-0.99114f,0f,0.19461f,-0.98088f,0f,0.26836f,-0.96332f,0f,0.35328f,-0.93552f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32841 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f842 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22689f,-0.18789f,0.07f,-0.22798f,-0.18781f,0.07f,-0.22906f,-0.18757f,0.07f,-0.23012f,-0.1872f,0.07f,-0.23115f,-0.1867f,0.07f,-0.23213f,-0.18611f,0.07f,-0.23307f,-0.18545f,0.07f,-0.23395f,-0.18472f,0.07f,-0.23476f,-0.18396f,0.07f,-0.23476f,-0.18396f,0f,-0.23395f,-0.18472f,0f,-0.23307f,-0.18545f,0f,-0.23213f,-0.18611f,0f,-0.23115f,-0.1867f,0f,-0.23012f,-0.1872f,0f,-0.22906f,-0.18757f,0f,-0.22798f,-0.18781f,0f,-0.22689f,-0.18789f,0f});
  }
}
protected class MFVec3f843 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.14963f,-0.98874f,0f,-0.27856f,-0.96042f,0f,-0.38629f,-0.92238f,0f,-0.47516f,-0.8799f,0f,-0.54853f,-0.83613f,0f,-0.60975f,-0.79259f,0f,-0.66178f,-0.7497f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.66178f,-0.7497f,0f,-0.60975f,-0.79259f,0f,-0.54853f,-0.83613f,0f,-0.47516f,-0.8799f,0f,-0.38629f,-0.92238f,0f,-0.27856f,-0.96042f,0f,-0.14963f,-0.98874f,0f,0f,-1f,0f});
  }
}
protected class MFInt32844 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f845 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.23476f,-0.18396f,0.07f,-0.23528f,-0.18281f,0.07f,-0.2357f,-0.18163f,0.07f,-0.23604f,-0.18041f,0.07f,-0.23631f,-0.17917f,0.07f,-0.23663f,-0.17664f,0.07f,-0.23673f,-0.17411f,0.07f,-0.23673f,-0.17411f,0f,-0.23663f,-0.17664f,0f,-0.23631f,-0.17917f,0f,-0.23604f,-0.18041f,0f,-0.2357f,-0.18163f,0f,-0.23528f,-0.18281f,0f,-0.23476f,-0.18396f,0f});
  }
}
protected class MFVec3f846 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.92797f,-0.37265f,0f,-0.95305f,-0.3028f,0f,-0.97116f,-0.23845f,0f,-0.98369f,-0.17989f,0f,-0.99682f,-0.07973f,0f,-1f,0f,0f,-1f,0f,0f,-0.99682f,-0.07973f,0f,-0.98369f,-0.17989f,0f,-0.97116f,-0.23845f,0f,-0.95305f,-0.3028f,0f,-0.92797f,-0.37265f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32847 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f848 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.23673f,-0.17411f,0.07f,-0.23658f,-0.17063f,0.07f,-0.23617f,-0.16717f,0.07f,-0.23476f,-0.16033f,0.07f,-0.23476f,-0.16033f,0f,-0.23617f,-0.16717f,0f,-0.23658f,-0.17063f,0f,-0.23673f,-0.17411f,0f});
  }
}
protected class MFVec3f849 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99653f,0.08318f,0f,-0.98855f,0.15091f,0f,-0.97014f,0.24254f,0f,-0.97014f,0.24254f,0f,-0.98855f,0.15091f,0f,-0.99653f,0.08318f,0f,-1f,0f,0f});
  }
}
protected class MFInt32850 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f851 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.23476f,-0.16033f,0.07f,-0.23268f,-0.15753f,0.07f,-0.23032f,-0.15493f,0.07f,-0.22772f,-0.15257f,0.07f,-0.22492f,-0.15049f,0.07f,-0.22492f,-0.15049f,0f,-0.22772f,-0.15257f,0f,-0.23032f,-0.15493f,0f,-0.23268f,-0.15753f,0f,-0.23476f,-0.16033f,0f});
  }
}
protected class MFVec3f852 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.77259f,0.63491f,0f,-0.70711f,0.70711f,0f,-0.63491f,0.77259f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.63491f,0.77259f,0f,-0.70711f,0.70711f,0f,-0.77259f,0.63491f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt32853 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f854 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22492f,-0.15049f,0.07f,-0.22322f,-0.1489f,0.07f,-0.22142f,-0.14743f,0.07f,-0.21756f,-0.14479f,0.07f,-0.21344f,-0.14254f,0.07f,-0.20917f,-0.14064f,0.07f,-0.20917f,-0.14064f,0f,-0.21344f,-0.14254f,0f,-0.21756f,-0.14479f,0f,-0.22142f,-0.14743f,0f,-0.22322f,-0.1489f,0f,-0.22492f,-0.15049f,0f});
  }
}
protected class MFVec3f855 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.65782f,0.75317f,0f,-0.60979f,0.79256f,0f,-0.51995f,0.85419f,0f,-0.44036f,0.89782f,0f,-0.37139f,0.92848f,0f,-0.37139f,0.92848f,0f,-0.44036f,0.89782f,0f,-0.51995f,0.85419f,0f,-0.60979f,0.79256f,0f,-0.65782f,0.75317f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32856 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f857 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20917f,-0.14064f,0.07f,-0.20441f,-0.13898f,0.07f,-0.1995f,-0.13774f,0.07f,-0.19451f,-0.13697f,0.07f,-0.18948f,-0.13671f,0.07f,-0.18948f,-0.13671f,0f,-0.19451f,-0.13697f,0f,-0.1995f,-0.13774f,0f,-0.20441f,-0.13898f,0f,-0.20917f,-0.14064f,0f});
  }
}
protected class MFVec3f858 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.37139f,0.92848f,0f,-0.28812f,0.9576f,0f,-0.19952f,0.97989f,0f,-0.10395f,0.99458f,0f,0f,1f,0f,0f,1f,0f,-0.10395f,0.99458f,0f,-0.19952f,0.97989f,0f,-0.28812f,0.9576f,0f,-0.37139f,0.92848f,0f});
  }
}
protected class MFInt32859 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f860 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18948f,-0.13671f,0.07f,-0.18453f,-0.13686f,0.07f,-0.17952f,-0.13736f,0.07f,-0.17452f,-0.1382f,0.07f,-0.1696f,-0.13942f,0.07f,-0.16482f,-0.14104f,0.07f,-0.16027f,-0.14308f,0.07f,-0.156f,-0.14557f,0.07f,-0.15399f,-0.14698f,0.07f,-0.15207f,-0.14852f,0.07f,-0.15207f,-0.14852f,0f,-0.15399f,-0.14698f,0f,-0.156f,-0.14557f,0f,-0.16027f,-0.14308f,0f,-0.16482f,-0.14104f,0f,-0.1696f,-0.13942f,0f,-0.17452f,-0.1382f,0f,-0.17952f,-0.13736f,0f,-0.18453f,-0.13686f,0f,-0.18948f,-0.13671f,0f});
  }
}
protected class MFVec3f861 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06411f,0.99794f,0f,0.13121f,0.99135f,0f,0.20278f,0.97922f,0f,0.28008f,0.95998f,0f,0.36398f,0.93141f,0f,0.45468f,0.89066f,0f,0.5512f,0.83437f,0f,0.60087f,0.79935f,0f,0.65079f,0.75926f,0f,0.65079f,0.75926f,0f,0.60087f,0.79935f,0f,0.5512f,0.83437f,0f,0.45468f,0.89066f,0f,0.36398f,0.93141f,0f,0.28008f,0.95998f,0f,0.20278f,0.97922f,0f,0.13121f,0.99135f,0f,0.06411f,0.99794f,0f,0f,1f,0f});
  }
}
protected class MFInt32862 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,23,-1,24,25,3,-1,26,2,25,-1,3,4,23,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,19,-1,20,21,7,-1,23,5,22,-1,22,6,21,-1,7,8,19,-1,19,8,18,-1,18,8,9,-1,10,18,9,-1,10,17,18,-1,10,11,17,-1,17,11,16,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,16,12,15,-1});
  }
}
protected class MFVec3f863 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.15207f,-0.14852f,0.07f,-0.15042f,-0.14964f,0.07f,-0.14882f,-0.15088f,0.07f,-0.14729f,-0.15224f,0.07f,-0.14583f,-0.1537f,0.07f,-0.14315f,-0.15691f,0.07f,-0.14083f,-0.16043f,0.07f,-0.13894f,-0.16419f,0.07f,-0.13817f,-0.16613f,0.07f,-0.13752f,-0.1681f,0.07f,-0.13701f,-0.17009f,0.07f,-0.13663f,-0.17209f,0.07f,-0.1364f,-0.17409f,0.07f,-0.13632f,-0.17608f,0.07f,-0.13632f,-0.17608f,0f,-0.1364f,-0.17409f,0f,-0.13663f,-0.17209f,0f,-0.13701f,-0.17009f,0f,-0.13752f,-0.1681f,0f,-0.13817f,-0.16613f,0f,-0.13894f,-0.16419f,0f,-0.14083f,-0.16043f,0f,-0.14315f,-0.15691f,0f,-0.14583f,-0.1537f,0f,-0.14729f,-0.15224f,0f,-0.14882f,-0.15088f,0f,-0.15042f,-0.14964f,0f,-0.15207f,-0.14852f,0f});
  }
}
protected class MFVec3f864 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.53f,0.848f,0f,0.58756f,0.80918f,0f,0.63945f,0.76883f,0f,0.68637f,0.72725f,0f,0.72895f,0.68457f,0f,0.80322f,0.59569f,0f,0.86557f,0.50079f,0f,0.9177f,0.39727f,0f,0.93999f,0.34121f,0f,0.95951f,0.28167f,0f,0.97591f,0.21816f,0f,0.98865f,0.15025f,0f,0.99699f,0.07759f,0f,1f,0f,0f,1f,0f,0f,0.99699f,0.07759f,0f,0.98865f,0.15025f,0f,0.97591f,0.21816f,0f,0.95951f,0.28167f,0f,0.93999f,0.34121f,0f,0.9177f,0.39727f,0f,0.86557f,0.50079f,0f,0.80322f,0.59569f,0f,0.72895f,0.68457f,0f,0.68637f,0.72725f,0f,0.63945f,0.76883f,0f,0.58756f,0.80918f,0f,0.53f,0.848f,0f});
  }
}
protected class MFInt32865 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,13,-1,13,1,2,-1,3,13,2,-1,3,12,13,-1,3,4,12,-1,12,4,11,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f866 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13632f,-0.17608f,0.07f,-0.13652f,-0.18019f,0.07f,-0.13678f,-0.18226f,0.07f,-0.13717f,-0.1843f,0.07f,-0.1377f,-0.1863f,0.07f,-0.13838f,-0.18823f,0.07f,-0.13923f,-0.19008f,0.07f,-0.14026f,-0.19183f,0.07f,-0.14026f,-0.19183f,0f,-0.13923f,-0.19008f,0f,-0.13838f,-0.18823f,0f,-0.1377f,-0.1863f,0f,-0.13717f,-0.1843f,0f,-0.13678f,-0.18226f,0f,-0.13652f,-0.18019f,0f,-0.13632f,-0.17608f,0f});
  }
}
protected class MFVec3f867 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99526f,-0.0972f,0f,0.9879f,-0.15509f,0f,0.97545f,-0.22022f,0f,0.95608f,-0.29311f,0f,0.92748f,-0.37386f,0f,0.88703f,-0.46172f,0f,0.83205f,-0.5547f,0f,0.83205f,-0.5547f,0f,0.88703f,-0.46172f,0f,0.92748f,-0.37386f,0f,0.95608f,-0.29311f,0f,0.97545f,-0.22022f,0f,0.9879f,-0.15509f,0f,0.99526f,-0.0972f,0f,1f,0f,0f});
  }
}
protected class MFInt32868 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,12,-1,13,14,4,-1,16,2,15,-1,15,3,14,-1,4,5,12,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f869 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.14026f,-0.19183f,0.07f,-0.14081f,-0.19374f,0.07f,-0.14151f,-0.19562f,0.07f,-0.14233f,-0.19746f,0.07f,-0.14328f,-0.19924f,0.07f,-0.14434f,-0.20096f,0.07f,-0.14551f,-0.2026f,0.07f,-0.14678f,-0.20416f,0.07f,-0.14814f,-0.20561f,0.07f,-0.14814f,-0.20561f,0f,-0.14678f,-0.20416f,0f,-0.14551f,-0.2026f,0f,-0.14434f,-0.20096f,0f,-0.14328f,-0.19924f,0f,-0.14233f,-0.19746f,0f,-0.14151f,-0.19562f,0f,-0.14081f,-0.19374f,0f,-0.14026f,-0.19183f,0f});
  }
}
protected class MFVec3f870 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.97014f,-0.24254f,0f,0.94996f,-0.31238f,0f,0.92587f,-0.37783f,0f,0.89827f,-0.43945f,0f,0.86731f,-0.49776f,0f,0.83298f,-0.5533f,0f,0.79509f,-0.60649f,0f,0.7533f,-0.65768f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.7533f,-0.65768f,0f,0.79509f,-0.60649f,0f,0.83298f,-0.5533f,0f,0.86731f,-0.49776f,0f,0.89827f,-0.43945f,0f,0.92587f,-0.37783f,0f,0.94996f,-0.31238f,0f,0.97014f,-0.24254f,0f});
  }
}
protected class MFInt32871 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f872 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.14814f,-0.20561f,0.07f,-0.15126f,-0.20848f,0.07f,-0.15463f,-0.21108f,0.07f,-0.1582f,-0.21341f,0.07f,-0.16192f,-0.21546f,0.07f,-0.16192f,-0.21546f,0f,-0.1582f,-0.21341f,0f,-0.15463f,-0.21108f,0f,-0.15126f,-0.20848f,0f,-0.14814f,-0.20561f,0f});
  }
}
protected class MFVec3f873 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,-0.70711f,0f,0.64387f,-0.76514f,0f,0.57953f,-0.81495f,0f,0.5141f,-0.85773f,0f,0.44721f,-0.89443f,0f,0.44721f,-0.89443f,0f,0.5141f,-0.85773f,0f,0.57953f,-0.81495f,0f,0.64387f,-0.76514f,0f,0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32874 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f875 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.16192f,-0.21546f,0.07f,-0.17465f,-0.22151f,0.07f,-0.18751f,-0.22727f,0.07f,-0.18751f,-0.22727f,0f,-0.17465f,-0.22151f,0f,-0.16192f,-0.21546f,0f});
  }
}
protected class MFVec3f876 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.41518f,-0.90974f,0f,0.40614f,-0.91381f,0f,0.40614f,-0.91381f,0f,0.41518f,-0.90974f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32877 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f878 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.18751f,-0.22727f,0.07f,-0.19217f,-0.2293f,0.07f,-0.1967f,-0.23161f,0.07f,-0.20106f,-0.23422f,0.07f,-0.20523f,-0.23711f,0.07f,-0.20523f,-0.23711f,0f,-0.20106f,-0.23422f,0f,-0.1967f,-0.23161f,0f,-0.19217f,-0.2293f,0f,-0.18751f,-0.22727f,0f});
  }
}
protected class MFVec3f879 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37139f,-0.92848f,0f,0.42695f,-0.90427f,0f,0.48353f,-0.87533f,0f,0.54124f,-0.84087f,0f,0.6f,-0.8f,0f,0.6f,-0.8f,0f,0.54124f,-0.84087f,0f,0.48353f,-0.87533f,0f,0.42695f,-0.90427f,0f,0.37139f,-0.92848f,0f});
  }
}
protected class MFInt32880 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f881 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.20523f,-0.23711f,0.07f,-0.21332f,-0.24065f,0.07f,-0.21723f,-0.24269f,0.07f,-0.22098f,-0.24499f,0.07f,-0.22098f,-0.24499f,0f,-0.21723f,-0.24269f,0f,-0.21332f,-0.24065f,0f,-0.20523f,-0.23711f,0f});
  }
}
protected class MFVec3f882 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37139f,-0.92848f,0f,0.43805f,-0.89895f,0f,0.49065f,-0.87136f,0f,0.5547f,-0.83205f,0f,0.5547f,-0.83205f,0f,0.49065f,-0.87136f,0f,0.43805f,-0.89895f,0f,0.37139f,-0.92848f,0f});
  }
}
protected class MFInt32883 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f884 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.22098f,-0.24499f,0.07f,-0.13042f,-0.24499f,0.07f,-0.13042f,-0.24499f,0f,-0.22098f,-0.24499f,0f});
  }
}
protected class MFVec3f885 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt32886 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,152,-1,153,0,152,-1,153,154,0,-1,0,154,155,-1,156,0,155,-1,156,157,0,-1,3,150,2,-1,3,4,150,-1,150,4,149,-1,149,4,148,-1,148,4,5,-1,147,5,6,-1,146,6,7,-1,8,146,7,-1,8,145,146,-1,8,9,145,-1,145,9,144,-1,144,9,10,-1,143,10,142,-1,143,144,10,-1,148,5,147,-1,147,6,146,-1,10,11,142,-1,142,11,141,-1,141,11,12,-1,13,141,12,-1,13,140,141,-1,13,14,140,-1,140,14,15,-1,139,15,16,-1,17,139,16,-1,17,18,139,-1,139,18,138,-1,138,18,19,-1,20,138,19,-1,20,137,138,-1,20,21,137,-1,137,21,22,-1,136,22,23,-1,24,136,23,-1,24,25,136,-1,136,25,135,-1,135,25,26,-1,27,135,26,-1,27,134,135,-1,27,28,134,-1,134,28,29,-1,133,29,30,-1,31,133,30,-1,31,132,133,-1,31,32,132,-1,132,32,131,-1,131,32,33,-1,34,131,33,-1,34,130,131,-1,34,35,130,-1,130,35,36,-1,37,130,36,-1,37,38,130,-1,130,38,39,-1,40,130,39,-1,40,129,130,-1,40,41,129,-1,129,41,42,-1,43,129,42,-1,43,128,129,-1,43,44,128,-1,128,44,127,-1,127,44,45,-1,126,45,125,-1,126,127,45,-1,140,15,139,-1,137,22,136,-1,134,29,133,-1,46,113,45,-1,46,47,113,-1,113,47,48,-1,49,113,48,-1,49,50,113,-1,113,50,51,-1,52,113,51,-1,52,53,113,-1,113,53,112,-1,112,53,111,-1,111,53,54,-1,110,54,109,-1,110,111,54,-1,54,55,109,-1,109,55,108,-1,108,55,107,-1,107,55,56,-1,57,107,56,-1,57,106,107,-1,57,58,106,-1,106,58,105,-1,105,58,59,-1,60,105,59,-1,60,61,105,-1,105,61,62,-1,104,62,63,-1,103,63,64,-1,66,64,65,-1,66,103,64,-1,66,102,103,-1,66,67,102,-1,102,67,68,-1,83,68,69,-1,82,69,81,-1,82,83,69,-1,105,62,104,-1,104,63,103,-1,102,68,83,-1,84,102,83,-1,84,101,102,-1,84,100,101,-1,84,99,100,-1,84,98,99,-1,84,85,98,-1,98,85,97,-1,97,85,86,-1,91,86,90,-1,91,97,86,-1,91,92,97,-1,97,92,96,-1,96,92,93,-1,94,96,93,-1,94,95,96,-1,70,79,69,-1,70,78,79,-1,70,77,78,-1,70,71,77,-1,77,71,76,-1,76,71,72,-1,75,72,73,-1,74,75,73,-1,76,72,75,-1,79,80,69,-1,69,80,81,-1,86,87,90,-1,90,87,89,-1,89,87,88,-1,113,114,45,-1,45,114,115,-1,116,45,115,-1,116,117,45,-1,45,117,118,-1,119,45,118,-1,119,120,45,-1,45,120,121,-1,122,45,121,-1,122,123,45,-1,45,123,124,-1,125,45,124,-1,150,151,2,-1,2,151,152,-1});
  }
}
protected class MFVec3f887 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.13042f,-0.26467f,0.07f,-0.13042f,-0.24499f,0.07f,-0.22098f,-0.24499f,0.07f,-0.21723f,-0.24269f,0.07f,-0.21332f,-0.24065f,0.07f,-0.20523f,-0.23711f,0.07f,-0.20106f,-0.23422f,0.07f,-0.1967f,-0.23161f,0.07f,-0.19217f,-0.2293f,0.07f,-0.18751f,-0.22727f,0.07f,-0.17465f,-0.22151f,0.07f,-0.16192f,-0.21546f,0.07f,-0.1582f,-0.21341f,0.07f,-0.15463f,-0.21108f,0.07f,-0.15126f,-0.20848f,0.07f,-0.14814f,-0.20561f,0.07f,-0.14678f,-0.20416f,0.07f,-0.14551f,-0.2026f,0.07f,-0.14434f,-0.20096f,0.07f,-0.14328f,-0.19924f,0.07f,-0.14233f,-0.19746f,0.07f,-0.14151f,-0.19562f,0.07f,-0.14081f,-0.19374f,0.07f,-0.14026f,-0.19183f,0.07f,-0.13923f,-0.19008f,0.07f,-0.13838f,-0.18823f,0.07f,-0.1377f,-0.1863f,0.07f,-0.13717f,-0.1843f,0.07f,-0.13678f,-0.18226f,0.07f,-0.13652f,-0.18019f,0.07f,-0.13632f,-0.17608f,0.07f,-0.1364f,-0.17409f,0.07f,-0.13663f,-0.17209f,0.07f,-0.13701f,-0.17009f,0.07f,-0.13752f,-0.1681f,0.07f,-0.13817f,-0.16613f,0.07f,-0.13894f,-0.16419f,0.07f,-0.14083f,-0.16043f,0.07f,-0.14315f,-0.15691f,0.07f,-0.14583f,-0.1537f,0.07f,-0.14729f,-0.15224f,0.07f,-0.14882f,-0.15088f,0.07f,-0.15042f,-0.14964f,0.07f,-0.15207f,-0.14852f,0.07f,-0.15399f,-0.14698f,0.07f,-0.156f,-0.14557f,0.07f,-0.16027f,-0.14308f,0.07f,-0.16482f,-0.14104f,0.07f,-0.1696f,-0.13942f,0.07f,-0.17452f,-0.1382f,0.07f,-0.17952f,-0.13736f,0.07f,-0.18453f,-0.13686f,0.07f,-0.18948f,-0.13671f,0.07f,-0.19451f,-0.13697f,0.07f,-0.1995f,-0.13774f,0.07f,-0.20441f,-0.13898f,0.07f,-0.20917f,-0.14064f,0.07f,-0.21344f,-0.14254f,0.07f,-0.21756f,-0.14479f,0.07f,-0.22142f,-0.14743f,0.07f,-0.22322f,-0.1489f,0.07f,-0.22492f,-0.15049f,0.07f,-0.22772f,-0.15257f,0.07f,-0.23032f,-0.15493f,0.07f,-0.23268f,-0.15753f,0.07f,-0.23476f,-0.16033f,0.07f,-0.23617f,-0.16717f,0.07f,-0.23658f,-0.17063f,0.07f,-0.23673f,-0.17411f,0.07f,-0.23663f,-0.17664f,0.07f,-0.23631f,-0.17917f,0.07f,-0.23604f,-0.18041f,0.07f,-0.2357f,-0.18163f,0.07f,-0.23528f,-0.18281f,0.07f,-0.23476f,-0.18396f,0.07f,-0.23395f,-0.18472f,0.07f,-0.23307f,-0.18545f,0.07f,-0.23213f,-0.18611f,0.07f,-0.23115f,-0.1867f,0.07f,-0.23012f,-0.1872f,0.07f,-0.22906f,-0.18757f,0.07f,-0.22798f,-0.18781f,0.07f,-0.22689f,-0.18789f,0.07f,-0.22386f,-0.18784f,0.07f,-0.22082f,-0.18758f,0.07f,-0.21933f,-0.18733f,0.07f,-0.21786f,-0.18699f,0.07f,-0.21644f,-0.18652f,0.07f,-0.21507f,-0.18592f,0.07f,-0.21431f,-0.18511f,0.07f,-0.21358f,-0.18423f,0.07f,-0.21292f,-0.1833f,0.07f,-0.21233f,-0.18231f,0.07f,-0.21184f,-0.18128f,0.07f,-0.21146f,-0.18023f,0.07f,-0.21122f,-0.17915f,0.07f,-0.21114f,-0.17805f,0.07f,-0.21123f,-0.17552f,0.07f,-0.21156f,-0.173f,0.07f,-0.21182f,-0.17175f,0.07f,-0.21217f,-0.17054f,0.07f,-0.21259f,-0.16935f,0.07f,-0.21311f,-0.16821f,0.07f,-0.21449f,-0.16335f,0.07f,-0.21492f,-0.16087f,0.07f,-0.21507f,-0.15836f,0.07f,-0.21035f,-0.15418f,0.07f,-0.20523f,-0.15049f,0.07f,-0.20195f,-0.14897f,0.07f,-0.19853f,-0.14772f,0.07f,-0.19678f,-0.14723f,0.07f,-0.19502f,-0.14686f,0.07f,-0.19324f,-0.14663f,0.07f,-0.19145f,-0.14655f,0.07f,-0.18854f,-0.14667f,0.07f,-0.18559f,-0.14702f,0.07f,-0.18265f,-0.14761f,0.07f,-0.17978f,-0.14845f,0.07f,-0.17701f,-0.14955f,0.07f,-0.17439f,-0.1509f,0.07f,-0.17197f,-0.15253f,0.07f,-0.17085f,-0.15344f,0.07f,-0.16979f,-0.15442f,0.07f,-0.16869f,-0.15534f,0.07f,-0.16769f,-0.15636f,0.07f,-0.16678f,-0.15748f,0.07f,-0.16597f,-0.15867f,0.07f,-0.16524f,-0.15994f,0.07f,-0.1646f,-0.16128f,0.07f,-0.16355f,-0.1641f,0.07f,-0.16279f,-0.16707f,0.07f,-0.16228f,-0.17011f,0.07f,-0.162f,-0.17313f,0.07f,-0.16192f,-0.17608f,0.07f,-0.16227f,-0.18406f,0.07f,-0.16287f,-0.188f,0.07f,-0.16389f,-0.19183f,0.07f,-0.16586f,-0.19577f,0.07f,-0.16782f,-0.19971f,0.07f,-0.17275f,-0.20463f,0.07f,-0.17767f,-0.20955f,0.07f,-0.18443f,-0.2137f,0.07f,-0.19145f,-0.21742f,0.07f,-0.19932f,-0.22136f,0.07f,-0.2072f,-0.2253f,0.07f,-0.21232f,-0.229f,0.07f,-0.21704f,-0.23317f,0.07f,-0.22076f,-0.23522f,0.07f,-0.22433f,-0.23755f,0.07f,-0.2277f,-0.24015f,0.07f,-0.23082f,-0.24302f,0.07f,-0.23312f,-0.24465f,0.07f,-0.2353f,-0.24648f,0.07f,-0.23629f,-0.24749f,0.07f,-0.2372f,-0.24855f,0.07f,-0.23801f,-0.24969f,0.07f,-0.2387f,-0.25089f,0.07f,-0.2387f,-0.26467f,0.07f});
  }
}
protected class MFVec3f888 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32889 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f890 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.04773f,-0.25877f,0.07f,-0.04579f,-0.25871f,0.07f,-0.04384f,-0.25852f,0.07f,-0.03993f,-0.25779f,0.07f,-0.03607f,-0.25661f,0.07f,-0.03234f,-0.25501f,0.07f,-0.0288f,-0.25302f,0.07f,-0.02555f,-0.25067f,0.07f,-0.02405f,-0.24936f,0.07f,-0.02264f,-0.24798f,0.07f,-0.02135f,-0.24652f,0.07f,-0.02017f,-0.24499f,0.07f,-0.02017f,-0.24499f,0f,-0.02135f,-0.24652f,0f,-0.02264f,-0.24798f,0f,-0.02405f,-0.24936f,0f,-0.02555f,-0.25067f,0f,-0.0288f,-0.25302f,0f,-0.03234f,-0.25501f,0f,-0.03607f,-0.25661f,0f,-0.03993f,-0.25779f,0f,-0.04384f,-0.25852f,0f,-0.04579f,-0.25871f,0f,-0.04773f,-0.25877f,0f});
  }
}
protected class MFVec3f891 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.06425f,0.99793f,0f,-0.12521f,0.99213f,0f,-0.23874f,0.97108f,0f,-0.34365f,0.9391f,0f,-0.44283f,0.89661f,0f,-0.53865f,0.84253f,0f,-0.63262f,0.77447f,0f,-0.67904f,0.7341f,0f,-0.72493f,0.68882f,0f,-0.76999f,0.63805f,0f,-0.81373f,0.58124f,0f,-0.81373f,0.58124f,0f,-0.76999f,0.63805f,0f,-0.72493f,0.68882f,0f,-0.67904f,0.7341f,0f,-0.63262f,0.77447f,0f,-0.53865f,0.84253f,0f,-0.44283f,0.89661f,0f,-0.34365f,0.9391f,0f,-0.23874f,0.97108f,0f,-0.12521f,0.99213f,0f,-0.06425f,0.99793f,0f,0f,1f,0f});
  }
}
protected class MFInt32892 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,13,-1,14,15,7,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,7,8,13,-1,13,8,12,-1,12,8,9,-1,10,12,9,-1,10,11,12,-1});
  }
}
protected class MFVec3f893 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07332f,-0.24499f,0.07f,-0.071f,-0.24784f,0.07f,-0.06831f,-0.25047f,0.07f,-0.06531f,-0.25281f,0.07f,-0.06205f,-0.25483f,0.07f,-0.0586f,-0.25649f,0.07f,-0.05502f,-0.25772f,0.07f,-0.05321f,-0.25817f,0.07f,-0.05138f,-0.2585f,0.07f,-0.04955f,-0.2587f,0.07f,-0.04773f,-0.25877f,0.07f,-0.04773f,-0.25877f,0f,-0.04955f,-0.2587f,0f,-0.05138f,-0.2585f,0f,-0.05321f,-0.25817f,0f,-0.05502f,-0.25772f,0f,-0.0586f,-0.25649f,0f,-0.06205f,-0.25483f,0f,-0.06531f,-0.25281f,0f,-0.06831f,-0.25047f,0f,-0.071f,-0.24784f,0f,-0.07332f,-0.24499f,0f});
  }
}
protected class MFVec3f894 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.81373f,0.58124f,0f,0.73743f,0.67542f,0f,0.65704f,0.75386f,0f,0.57212f,0.82017f,0f,0.48101f,0.87672f,0f,0.38121f,0.92449f,0f,0.2697f,0.96294f,0f,0.20857f,0.97801f,0f,0.14338f,0.98967f,0f,0.07389f,0.99727f,0f,0f,1f,0f,0f,1f,0f,0.07389f,0.99727f,0f,0.14338f,0.98967f,0f,0.20857f,0.97801f,0f,0.2697f,0.96294f,0f,0.38121f,0.92449f,0f,0.48101f,0.87672f,0f,0.57212f,0.82017f,0f,0.65704f,0.75386f,0f,0.73743f,0.67542f,0f,0.81373f,0.58124f,0f});
  }
}
protected class MFInt32895 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f896 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.0812f,-0.20364f,0.07f,-0.08085f,-0.21426f,0.07f,-0.07961f,-0.22487f,0.07f,-0.07857f,-0.23009f,0.07f,-0.0772f,-0.23521f,0.07f,-0.07546f,-0.24018f,0.07f,-0.07332f,-0.24499f,0.07f,-0.07332f,-0.24499f,0f,-0.07546f,-0.24018f,0f,-0.0772f,-0.23521f,0f,-0.07857f,-0.23009f,0f,-0.07961f,-0.22487f,0f,-0.08085f,-0.21426f,0f,-0.0812f,-0.20364f,0f});
  }
}
protected class MFVec3f897 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99757f,0.06966f,0f,0.98604f,0.16652f,0f,0.97412f,0.22603f,0f,0.9561f,0.29305f,0f,0.93016f,0.36716f,0f,0.89443f,0.44721f,0f,0.89443f,0.44721f,0f,0.93016f,0.36716f,0f,0.9561f,0.29305f,0f,0.97412f,0.22603f,0f,0.98604f,0.16652f,0f,0.99757f,0.06966f,0f,1f,0f,0f});
  }
}
protected class MFInt32898 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f899 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07332f,-0.1623f,0.07f,-0.07566f,-0.167f,0.07f,-0.07749f,-0.17193f,0.07f,-0.07887f,-0.17704f,0.07f,-0.07987f,-0.18228f,0.07f,-0.08095f,-0.19298f,0.07f,-0.0812f,-0.20364f,0.07f,-0.0812f,-0.20364f,0f,-0.08095f,-0.19298f,0f,-0.07987f,-0.18228f,0f,-0.07887f,-0.17704f,0f,-0.07749f,-0.17193f,0f,-0.07566f,-0.167f,0f,-0.07332f,-0.1623f,0f});
  }
}
protected class MFVec3f900 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.86824f,-0.49614f,0f,0.91864f,-0.3951f,0f,0.95306f,-0.30278f,0f,0.97505f,-0.222f,0f,0.98811f,-0.15378f,0f,0.99853f,-0.05422f,0f,1f,0f,0f,1f,0f,0f,0.99853f,-0.05422f,0f,0.98811f,-0.15378f,0f,0.97505f,-0.222f,0f,0.95306f,-0.30278f,0f,0.91864f,-0.3951f,0f,0.86824f,-0.49614f,0f});
  }
}
protected class MFInt32901 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,23,-1,24,25,3,-1,26,2,25,-1,3,4,23,-1,23,4,5,-1,22,5,21,-1,22,23,5,-1,5,6,21,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1});
  }
}
protected class MFVec3f902 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.04576f,-0.14655f,0.07f,-0.04775f,-0.14663f,0.07f,-0.04975f,-0.14686f,0.07f,-0.05175f,-0.14723f,0.07f,-0.05374f,-0.14775f,0.07f,-0.05571f,-0.1484f,0.07f,-0.05765f,-0.14917f,0.07f,-0.06141f,-0.15106f,0.07f,-0.06493f,-0.15337f,0.07f,-0.06814f,-0.15605f,0.07f,-0.0696f,-0.15751f,0.07f,-0.07096f,-0.15905f,0.07f,-0.07221f,-0.16064f,0.07f,-0.07332f,-0.1623f,0.07f,-0.07332f,-0.1623f,0f,-0.07221f,-0.16064f,0f,-0.07096f,-0.15905f,0f,-0.0696f,-0.15751f,0f,-0.06814f,-0.15605f,0f,-0.06493f,-0.15337f,0f,-0.06141f,-0.15106f,0f,-0.05765f,-0.14917f,0f,-0.05571f,-0.1484f,0f,-0.05374f,-0.14775f,0f,-0.05175f,-0.14723f,0f,-0.04975f,-0.14686f,0f,-0.04775f,-0.14663f,0f,-0.04576f,-0.14655f,0f});
  }
}
protected class MFVec3f903 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0.07759f,-0.99699f,0f,0.15025f,-0.98865f,0f,0.21816f,-0.97591f,0f,0.28167f,-0.95951f,0f,0.34121f,-0.93999f,0f,0.39727f,-0.9177f,0f,0.50079f,-0.86557f,0f,0.59569f,-0.80322f,0f,0.68457f,-0.72895f,0f,0.72725f,-0.68637f,0f,0.76883f,-0.63945f,0f,0.80918f,-0.58756f,0f,0.848f,-0.53f,0f,0.848f,-0.53f,0f,0.80918f,-0.58756f,0f,0.76883f,-0.63945f,0f,0.72725f,-0.68637f,0f,0.68457f,-0.72895f,0f,0.59569f,-0.80322f,0f,0.50079f,-0.86557f,0f,0.39727f,-0.9177f,0f,0.34121f,-0.93999f,0f,0.28167f,-0.95951f,0f,0.21816f,-0.97591f,0f,0.15025f,-0.98865f,0f,0.07759f,-0.99699f,0f,0f,-1f,0f});
  }
}
protected class MFInt32904 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f905 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02017f,-0.1623f,0.07f,-0.02238f,-0.15918f,0.07f,-0.025f,-0.15626f,0.07f,-0.02796f,-0.15358f,0.07f,-0.0312f,-0.15124f,0.07f,-0.03466f,-0.14929f,0.07f,-0.03646f,-0.14849f,0.07f,-0.03828f,-0.14782f,0.07f,-0.04013f,-0.14728f,0.07f,-0.042f,-0.14688f,0.07f,-0.04388f,-0.14663f,0.07f,-0.04576f,-0.14655f,0.07f,-0.04576f,-0.14655f,0f,-0.04388f,-0.14663f,0f,-0.042f,-0.14688f,0f,-0.04013f,-0.14728f,0f,-0.03828f,-0.14782f,0f,-0.03646f,-0.14849f,0f,-0.03466f,-0.14929f,0f,-0.0312f,-0.15124f,0f,-0.02796f,-0.15358f,0f,-0.025f,-0.15626f,0f,-0.02238f,-0.15918f,0f,-0.02017f,-0.1623f,0f});
  }
}
protected class MFVec3f906 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.848f,-0.53f,0f,-0.78112f,-0.62438f,0f,-0.70882f,-0.70539f,0f,-0.62942f,-0.77707f,0f,-0.53996f,-0.84169f,0f,-0.43649f,-0.89971f,0f,-0.37808f,-0.92577f,0f,-0.31444f,-0.94928f,0f,-0.24504f,-0.96951f,0f,-0.16952f,-0.98553f,0f,-0.08775f,-0.99614f,0f,0f,-1f,0f,0f,-1f,0f,-0.08775f,-0.99614f,0f,-0.16952f,-0.98553f,0f,-0.24504f,-0.96951f,0f,-0.31444f,-0.94928f,0f,-0.37808f,-0.92577f,0f,-0.43649f,-0.89971f,0f,-0.53996f,-0.84169f,0f,-0.62942f,-0.77707f,0f,-0.70882f,-0.70539f,0f,-0.78112f,-0.62438f,0f,-0.848f,-0.53f,0f});
  }
}
protected class MFInt32907 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f908 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.01032f,-0.20364f,0.07f,-0.0107f,-0.19283f,0.07f,-0.01216f,-0.18198f,0.07f,-0.01343f,-0.17671f,0.07f,-0.01516f,-0.17163f,0.07f,-0.01738f,-0.16681f,0.07f,-0.0187f,-0.16451f,0.07f,-0.02017f,-0.1623f,0.07f,-0.02017f,-0.1623f,0f,-0.0187f,-0.16451f,0f,-0.01738f,-0.16681f,0f,-0.01516f,-0.17163f,0f,-0.01343f,-0.17671f,0f,-0.01216f,-0.18198f,0f,-0.0107f,-0.19283f,0f,-0.01032f,-0.20364f,0f});
  }
}
protected class MFVec3f909 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99706f,-0.07659f,0f,-0.9804f,-0.19702f,0f,-0.96117f,-0.27596f,0f,-0.92992f,-0.36775f,0f,-0.8822f,-0.47088f,0f,-0.85077f,-0.52554f,0f,-0.81373f,-0.58124f,0f,-0.81373f,-0.58124f,0f,-0.85077f,-0.52554f,0f,-0.8822f,-0.47088f,0f,-0.92992f,-0.36775f,0f,-0.96117f,-0.27596f,0f,-0.9804f,-0.19702f,0f,-0.99706f,-0.07659f,0f,-1f,0f,0f});
  }
}
protected class MFInt32910 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f911 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02017f,-0.24499f,0.07f,-0.01759f,-0.24034f,0.07f,-0.01546f,-0.23545f,0.07f,-0.01375f,-0.23036f,0.07f,-0.01243f,-0.22512f,0.07f,-0.01081f,-0.21439f,0.07f,-0.01032f,-0.20364f,0.07f,-0.01032f,-0.20364f,0f,-0.01081f,-0.21439f,0f,-0.01243f,-0.22512f,0f,-0.01375f,-0.23036f,0f,-0.01546f,-0.23545f,0f,-0.01759f,-0.24034f,0f,-0.02017f,-0.24499f,0f});
  }
}
protected class MFVec3f912 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.848f,0.53f,0f,-0.89747f,0.44108f,0f,-0.93399f,0.3573f,0f,-0.95991f,0.2803f,0f,-0.97755f,0.21069f,0f,-0.99567f,0.09297f,0f,-1f,0f,0f,-1f,0f,0f,-0.99567f,0.09297f,0f,-0.97755f,0.21069f,0f,-0.95991f,0.2803f,0f,-0.93399f,0.3573f,0f,-0.89747f,0.44108f,0f,-0.848f,0.53f,0f});
  }
}
protected class MFInt32913 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f914 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00048f,-0.15836f,0.07f,0.00148f,-0.16046f,0.07f,0.00331f,-0.1627f,0.07f,0.00655f,-0.16751f,0.07f,0.00923f,-0.17267f,0.07f,0.01133f,-0.17805f,0.07f,0.01133f,-0.17805f,0f,0.00923f,-0.17267f,0f,0.00655f,-0.16751f,0f,0.00331f,-0.1627f,0f,0.00148f,-0.16046f,0f,-0.00048f,-0.15836f,0f});
  }
}
protected class MFVec3f915 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.75358f,0.65736f,0f,0.79427f,0.60757f,0f,0.86073f,0.50907f,0f,0.91103f,0.41235f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.91103f,0.41235f,0f,0.86073f,0.50907f,0f,0.79427f,0.60757f,0f,0.75358f,0.65736f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt32916 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f917 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.01133f,-0.17805f,0.07f,0.0131f,-0.18429f,0.07f,0.01432f,-0.19068f,0.07f,0.01504f,-0.19715f,0.07f,0.01527f,-0.20364f,0.07f,0.01527f,-0.20364f,0f,0.01504f,-0.19715f,0f,0.01432f,-0.19068f,0f,0.0131f,-0.18429f,0f,0.01133f,-0.17805f,0f});
  }
}
protected class MFVec3f918 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94868f,0.31623f,0f,0.97333f,0.22942f,0f,0.98898f,0.14807f,0f,0.99742f,0.07184f,0f,1f,0f,0f,1f,0f,0f,0.99742f,0.07184f,0f,0.98898f,0.14807f,0f,0.97333f,0.22942f,0f,0.94868f,0.31623f,0f});
  }
}
protected class MFInt32919 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,6,-1,7,8,4,-1,10,2,9,-1,9,3,8,-1,4,5,6,-1});
  }
}
protected class MFVec3f920 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.01527f,-0.20364f,0.07f,0.01494f,-0.21073f,0.07f,0.01389f,-0.2178f,0.07f,0.01206f,-0.22468f,0.07f,0.01082f,-0.22799f,0.07f,0.00936f,-0.23121f,0.07f,0.00936f,-0.23121f,0f,0.01082f,-0.22799f,0f,0.01206f,-0.22468f,0f,0.01389f,-0.2178f,0f,0.01494f,-0.21073f,0f,0.01527f,-0.20364f,0f});
  }
}
protected class MFVec3f921 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.9955f,-0.09477f,0f,0.97984f,-0.19979f,0f,0.94834f,-0.31727f,0f,0.92465f,-0.38082f,0f,0.89443f,-0.44721f,0f,0.89443f,-0.44721f,0f,0.92465f,-0.38082f,0f,0.94834f,-0.31727f,0f,0.97984f,-0.19979f,0f,0.9955f,-0.09477f,0f,1f,0f,0f});
  }
}
protected class MFInt32922 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f923 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.00936f,-0.23121f,0.07f,0.00738f,-0.23711f,0.07f,0.00479f,-0.24282f,0.07f,0.00325f,-0.24554f,0.07f,0.00153f,-0.24814f,0.07f,-0.00036f,-0.25059f,0.07f,-0.00245f,-0.25286f,0.07f,-0.00245f,-0.25286f,0f,-0.00036f,-0.25059f,0f,0.00153f,-0.24814f,0f,0.00325f,-0.24554f,0f,0.00479f,-0.24282f,0f,0.00738f,-0.23711f,0f,0.00936f,-0.23121f,0f});
  }
}
protected class MFVec3f924 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.96152f,-0.27472f,0f,0.93168f,-0.36329f,0f,0.8852f,-0.46521f,0f,0.85323f,-0.52154f,0f,0.81377f,-0.58118f,0f,0.76549f,-0.64345f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.76549f,-0.64345f,0f,0.81377f,-0.58118f,0f,0.85323f,-0.52154f,0f,0.8852f,-0.46521f,0f,0.93168f,-0.36329f,0f,0.96152f,-0.27472f,0f});
  }
}
protected class MFInt32925 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f926 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.00245f,-0.25286f,0.07f,-0.00455f,-0.25482f,0.07f,-0.00679f,-0.25665f,0.07f,-0.0116f,-0.25989f,0.07f,-0.01676f,-0.26257f,0.07f,-0.02214f,-0.26467f,0.07f,-0.02214f,-0.26467f,0f,-0.01676f,-0.26257f,0f,-0.0116f,-0.25989f,0f,-0.00679f,-0.25665f,0f,-0.00455f,-0.25482f,0f,-0.00245f,-0.25286f,0f});
  }
}
protected class MFVec3f927 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,-0.70711f,0f,0.65736f,-0.75358f,0f,0.60757f,-0.79426f,0f,0.50907f,-0.86073f,0f,0.41235f,-0.91103f,0f,0.31623f,-0.94868f,0f,0.31623f,-0.94868f,0f,0.41235f,-0.91103f,0f,0.50907f,-0.86073f,0f,0.60757f,-0.79426f,0f,0.65736f,-0.75358f,0f,0.70711f,-0.70711f,0f});
  }
}
protected class MFInt32928 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f929 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02214f,-0.26467f,0.07f,-0.02838f,-0.26644f,0.07f,-0.03477f,-0.26767f,0.07f,-0.04124f,-0.26838f,0.07f,-0.04773f,-0.26861f,0.07f,-0.04773f,-0.26861f,0f,-0.04124f,-0.26838f,0f,-0.03477f,-0.26767f,0f,-0.02838f,-0.26644f,0f,-0.02214f,-0.26467f,0f});
  }
}
protected class MFVec3f930 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31623f,-0.94868f,0f,0.22942f,-0.97333f,0f,0.14807f,-0.98898f,0f,0.07184f,-0.99742f,0f,0f,-1f,0f,0f,-1f,0f,0.07184f,-0.99742f,0f,0.14807f,-0.98898f,0f,0.22942f,-0.97333f,0f,0.31623f,-0.94868f,0f});
  }
}
protected class MFInt32931 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f932 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.04773f,-0.26861f,0.07f,-0.05422f,-0.26838f,0.07f,-0.06069f,-0.26767f,0.07f,-0.06708f,-0.26644f,0.07f,-0.07332f,-0.26467f,0.07f,-0.07332f,-0.26467f,0f,-0.06708f,-0.26644f,0f,-0.06069f,-0.26767f,0f,-0.05422f,-0.26838f,0f,-0.04773f,-0.26861f,0f});
  }
}
protected class MFVec3f933 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.07184f,-0.99742f,0f,-0.14807f,-0.98898f,0f,-0.22942f,-0.97333f,0f,-0.31623f,-0.94868f,0f,-0.31623f,-0.94868f,0f,-0.22942f,-0.97333f,0f,-0.14807f,-0.98898f,0f,-0.07184f,-0.99742f,0f,0f,-1f,0f});
  }
}
protected class MFInt32934 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f935 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07332f,-0.26467f,0.07f,-0.07863f,-0.26181f,0.07f,-0.08373f,-0.25857f,0.07f,-0.08855f,-0.25493f,0.07f,-0.09301f,-0.25089f,0.07f,-0.09301f,-0.25089f,0f,-0.08855f,-0.25493f,0f,-0.08373f,-0.25857f,0f,-0.07863f,-0.26181f,0f,-0.07332f,-0.26467f,0f});
  }
}
protected class MFVec3f936 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,-0.89443f,0f,-0.50497f,-0.86314f,0f,-0.56791f,-0.82309f,0f,-0.63569f,-0.77194f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.63569f,-0.77194f,0f,-0.56791f,-0.82309f,0f,-0.50497f,-0.86314f,0f,-0.44721f,-0.89443f,0f});
  }
}
protected class MFInt32937 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f938 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.09301f,-0.25089f,0.07f,-0.09666f,-0.2459f,0.07f,-0.09987f,-0.24058f,0.07f,-0.1026f,-0.23501f,0.07f,-0.10482f,-0.22924f,0.07f,-0.10482f,-0.22924f,0f,-0.1026f,-0.23501f,0f,-0.09987f,-0.24058f,0f,-0.09666f,-0.2459f,0f,-0.09301f,-0.25089f,0f});
  }
}
protected class MFVec3f939 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.78087f,-0.6247f,0f,-0.83268f,-0.55376f,0f,-0.87764f,-0.47932f,0f,-0.91629f,-0.40051f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.91629f,-0.40051f,0f,-0.87764f,-0.47932f,0f,-0.83268f,-0.55376f,0f,-0.78087f,-0.6247f,0f});
  }
}
protected class MFInt32940 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f941 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10482f,-0.22924f,0.07f,-0.10634f,-0.21648f,0.07f,-0.10679f,-0.20364f,0.07f,-0.10679f,-0.20364f,0f,-0.10634f,-0.21648f,0f,-0.10482f,-0.22924f,0f});
  }
}
protected class MFVec3f942 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.98639f,-0.1644f,0f,-0.99727f,-0.07382f,0f,-1f,0f,0f,-1f,0f,0f,-0.99727f,-0.07382f,0f,-0.98639f,-0.1644f,0f});
  }
}
protected class MFInt32943 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f944 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10679f,-0.20364f,0.07f,-0.10634f,-0.1908f,0.07f,-0.10482f,-0.17805f,0.07f,-0.10482f,-0.17805f,0f,-0.10634f,-0.1908f,0f,-0.10679f,-0.20364f,0f});
  }
}
protected class MFVec3f945 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99727f,0.07382f,0f,-0.98639f,0.1644f,0f,-0.98639f,0.1644f,0f,-0.99727f,0.07382f,0f,-1f,0f,0f});
  }
}
protected class MFInt32946 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f947 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.10482f,-0.17805f,0.07f,-0.1026f,-0.17228f,0.07f,-0.09987f,-0.1667f,0.07f,-0.09666f,-0.16139f,0.07f,-0.09301f,-0.15639f,0.07f,-0.09301f,-0.15639f,0f,-0.09666f,-0.16139f,0f,-0.09987f,-0.1667f,0f,-0.1026f,-0.17228f,0f,-0.10482f,-0.17805f,0f});
  }
}
protected class MFVec3f948 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.91629f,0.40051f,0f,-0.87764f,0.47932f,0f,-0.83268f,0.55376f,0f,-0.78087f,0.6247f,0f,-0.78087f,0.6247f,0f,-0.83268f,0.55376f,0f,-0.87764f,0.47932f,0f,-0.91629f,0.40051f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32949 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f950 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.09301f,-0.15639f,0.07f,-0.08855f,-0.15235f,0.07f,-0.08373f,-0.14872f,0.07f,-0.07863f,-0.14548f,0.07f,-0.07332f,-0.14261f,0.07f,-0.07332f,-0.14261f,0f,-0.07863f,-0.14548f,0f,-0.08373f,-0.14872f,0f,-0.08855f,-0.15235f,0f,-0.09301f,-0.15639f,0f});
  }
}
protected class MFVec3f951 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.63569f,0.77194f,0f,-0.56791f,0.82309f,0f,-0.50497f,0.86314f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.50497f,0.86314f,0f,-0.56791f,0.82309f,0f,-0.63569f,0.77194f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt32952 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,7,-1,8,9,3,-1,10,2,9,-1,3,4,7,-1,7,4,6,-1,6,4,5,-1});
  }
}
protected class MFVec3f953 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.07332f,-0.14261f,0.07f,-0.07011f,-0.14115f,0.07f,-0.06679f,-0.13992f,0.07f,-0.05991f,-0.13808f,0.07f,-0.05285f,-0.13704f,0.07f,-0.04576f,-0.13671f,0.07f,-0.04576f,-0.13671f,0f,-0.05285f,-0.13704f,0f,-0.05991f,-0.13808f,0f,-0.06679f,-0.13992f,0f,-0.07011f,-0.14115f,0f,-0.07332f,-0.14261f,0f});
  }
}
protected class MFVec3f954 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.44721f,0.89443f,0f,-0.38082f,0.92465f,0f,-0.31727f,0.94834f,0f,-0.19979f,0.97984f,0f,-0.09477f,0.9955f,0f,0f,1f,0f,0f,1f,0f,-0.09477f,0.9955f,0f,-0.19979f,0.97984f,0f,-0.31727f,0.94834f,0f,-0.38082f,0.92465f,0f,-0.44721f,0.89443f,0f});
  }
}
protected class MFInt32955 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f956 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.04576f,-0.13671f,0.07f,-0.03912f,-0.137f,0.07f,-0.0325f,-0.13797f,0.07f,-0.02926f,-0.13876f,0.07f,-0.0261f,-0.13979f,0.07f,-0.02306f,-0.14107f,0.07f,-0.02017f,-0.14261f,0.07f,-0.02017f,-0.14261f,0f,-0.02306f,-0.14107f,0f,-0.0261f,-0.13979f,0f,-0.02926f,-0.13876f,0f,-0.0325f,-0.13797f,0f,-0.03912f,-0.137f,0f,-0.04576f,-0.13671f,0f});
  }
}
protected class MFVec3f957 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.09039f,0.99591f,0f,0.20481f,0.9788f,0f,0.27236f,0.9622f,0f,0.34699f,0.93787f,0f,0.42819f,0.90369f,0f,0.5145f,0.85749f,0f,0.5145f,0.85749f,0f,0.42819f,0.90369f,0f,0.34699f,0.93787f,0f,0.27236f,0.9622f,0f,0.20481f,0.9788f,0f,0.09039f,0.99591f,0f,0f,1f,0f});
  }
}
protected class MFInt32958 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f959 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.02017f,-0.14261f,0.07f,-0.01466f,-0.14574f,0.07f,-0.00947f,-0.14944f,0.07f,-0.00471f,-0.15366f,0.07f,-0.00048f,-0.15836f,0.07f,-0.00048f,-0.15836f,0f,-0.00471f,-0.15366f,0f,-0.00947f,-0.14944f,0f,-0.01466f,-0.14574f,0f,-0.02017f,-0.14261f,0f});
  }
}
protected class MFVec3f960 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,0.89443f,0f,0.53764f,0.84317f,0f,0.62277f,0.78241f,0f,0.7038f,0.7104f,0f,0.78087f,0.6247f,0f,0.78087f,0.6247f,0f,0.7038f,0.7104f,0f,0.62277f,0.78241f,0f,0.53764f,0.84317f,0f,0.44721f,0.89443f,0f});
  }
}
protected class MFInt32961 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {67,0,130,-1,131,67,130,-1,131,66,67,-1,131,65,66,-1,131,132,65,-1,65,132,64,-1,64,132,63,-1,63,132,133,-1,62,133,61,-1,62,63,133,-1,2,129,1,-1,2,3,129,-1,129,3,128,-1,128,3,4,-1,5,128,4,-1,5,127,128,-1,5,6,127,-1,127,6,126,-1,126,6,7,-1,125,7,124,-1,125,126,7,-1,7,8,124,-1,124,8,123,-1,123,8,122,-1,122,8,9,-1,121,9,120,-1,121,122,9,-1,10,114,9,-1,10,11,114,-1,114,11,12,-1,13,114,12,-1,13,14,114,-1,114,14,15,-1,113,15,16,-1,112,16,111,-1,112,113,16,-1,114,15,113,-1,111,16,110,-1,110,16,17,-1,109,17,108,-1,109,110,17,-1,17,18,108,-1,108,18,107,-1,107,18,106,-1,106,18,19,-1,20,106,19,-1,20,105,106,-1,20,21,105,-1,105,21,104,-1,104,21,103,-1,103,21,22,-1,102,22,101,-1,102,103,22,-1,22,23,101,-1,101,23,100,-1,100,23,24,-1,99,24,25,-1,26,99,25,-1,26,98,99,-1,26,27,98,-1,98,27,97,-1,97,27,28,-1,29,97,28,-1,29,96,97,-1,29,30,96,-1,96,30,95,-1,95,30,94,-1,94,30,31,-1,32,94,31,-1,32,93,94,-1,32,33,93,-1,93,33,92,-1,92,33,34,-1,91,34,35,-1,36,91,35,-1,36,90,91,-1,36,37,90,-1,90,37,89,-1,89,37,38,-1,88,38,39,-1,87,39,40,-1,86,40,41,-1,85,41,42,-1,84,42,83,-1,84,85,42,-1,100,24,99,-1,92,34,91,-1,89,38,88,-1,88,39,87,-1,87,40,86,-1,86,41,85,-1,42,43,83,-1,83,43,82,-1,82,43,81,-1,81,43,80,-1,80,43,44,-1,79,44,45,-1,46,79,45,-1,46,47,79,-1,79,47,48,-1,49,79,48,-1,49,50,79,-1,79,50,78,-1,78,50,77,-1,77,50,76,-1,76,50,75,-1,75,50,74,-1,74,50,73,-1,73,50,72,-1,72,50,71,-1,71,50,70,-1,70,50,69,-1,69,50,68,-1,68,50,51,-1,52,68,51,-1,52,137,68,-1,52,53,137,-1,137,53,54,-1,136,54,55,-1,56,136,55,-1,56,57,136,-1,136,57,135,-1,135,57,58,-1,134,58,59,-1,60,134,59,-1,60,133,134,-1,60,61,133,-1,80,44,79,-1,137,54,136,-1,135,58,134,-1,114,115,9,-1,9,115,116,-1,117,9,116,-1,117,118,9,-1,9,118,119,-1,120,9,119,-1,129,130,1,-1,1,130,0,-1});
  }
}
protected class MFVec3f962 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.01133f,-0.17805f,0.07f,0.00923f,-0.17267f,0.07f,0.00655f,-0.16751f,0.07f,0.00331f,-0.1627f,0.07f,0.00148f,-0.16046f,0.07f,-0.00048f,-0.15836f,0.07f,-0.00471f,-0.15366f,0.07f,-0.00947f,-0.14944f,0.07f,-0.01466f,-0.14574f,0.07f,-0.02017f,-0.14261f,0.07f,-0.02306f,-0.14107f,0.07f,-0.0261f,-0.13979f,0.07f,-0.02926f,-0.13876f,0.07f,-0.0325f,-0.13797f,0.07f,-0.03912f,-0.137f,0.07f,-0.04576f,-0.13671f,0.07f,-0.05285f,-0.13704f,0.07f,-0.05991f,-0.13808f,0.07f,-0.06679f,-0.13992f,0.07f,-0.07011f,-0.14115f,0.07f,-0.07332f,-0.14261f,0.07f,-0.07863f,-0.14548f,0.07f,-0.08373f,-0.14872f,0.07f,-0.08855f,-0.15235f,0.07f,-0.09301f,-0.15639f,0.07f,-0.09666f,-0.16139f,0.07f,-0.09987f,-0.1667f,0.07f,-0.1026f,-0.17228f,0.07f,-0.10482f,-0.17805f,0.07f,-0.10634f,-0.1908f,0.07f,-0.10679f,-0.20364f,0.07f,-0.10634f,-0.21648f,0.07f,-0.10482f,-0.22924f,0.07f,-0.1026f,-0.23501f,0.07f,-0.09987f,-0.24058f,0.07f,-0.09666f,-0.2459f,0.07f,-0.09301f,-0.25089f,0.07f,-0.08855f,-0.25493f,0.07f,-0.08373f,-0.25857f,0.07f,-0.07863f,-0.26181f,0.07f,-0.07332f,-0.26467f,0.07f,-0.06708f,-0.26644f,0.07f,-0.06069f,-0.26767f,0.07f,-0.05422f,-0.26838f,0.07f,-0.04773f,-0.26861f,0.07f,-0.04124f,-0.26838f,0.07f,-0.03477f,-0.26767f,0.07f,-0.02838f,-0.26644f,0.07f,-0.02214f,-0.26467f,0.07f,-0.01676f,-0.26257f,0.07f,-0.0116f,-0.25989f,0.07f,-0.00679f,-0.25665f,0.07f,-0.00455f,-0.25482f,0.07f,-0.00245f,-0.25286f,0.07f,-0.00036f,-0.25059f,0.07f,0.00153f,-0.24814f,0.07f,0.00325f,-0.24554f,0.07f,0.00479f,-0.24282f,0.07f,0.00738f,-0.23711f,0.07f,0.00936f,-0.23121f,0.07f,0.01082f,-0.22799f,0.07f,0.01206f,-0.22468f,0.07f,0.01389f,-0.2178f,0.07f,0.01494f,-0.21073f,0.07f,0.01527f,-0.20364f,0.07f,0.01504f,-0.19715f,0.07f,0.01432f,-0.19068f,0.07f,0.0131f,-0.18429f,0.07f,-0.02017f,-0.24499f,0.07f,-0.02135f,-0.24652f,0.07f,-0.02264f,-0.24798f,0.07f,-0.02405f,-0.24936f,0.07f,-0.02555f,-0.25067f,0.07f,-0.0288f,-0.25302f,0.07f,-0.03234f,-0.25501f,0.07f,-0.03607f,-0.25661f,0.07f,-0.03993f,-0.25779f,0.07f,-0.04384f,-0.25852f,0.07f,-0.04579f,-0.25871f,0.07f,-0.04773f,-0.25877f,0.07f,-0.04955f,-0.2587f,0.07f,-0.05138f,-0.2585f,0.07f,-0.05321f,-0.25817f,0.07f,-0.05502f,-0.25772f,0.07f,-0.0586f,-0.25649f,0.07f,-0.06205f,-0.25483f,0.07f,-0.06531f,-0.25281f,0.07f,-0.06831f,-0.25047f,0.07f,-0.071f,-0.24784f,0.07f,-0.07332f,-0.24499f,0.07f,-0.07546f,-0.24018f,0.07f,-0.0772f,-0.23521f,0.07f,-0.07857f,-0.23009f,0.07f,-0.07961f,-0.22487f,0.07f,-0.08085f,-0.21426f,0.07f,-0.0812f,-0.20364f,0.07f,-0.08095f,-0.19298f,0.07f,-0.07987f,-0.18228f,0.07f,-0.07887f,-0.17704f,0.07f,-0.07749f,-0.17193f,0.07f,-0.07566f,-0.167f,0.07f,-0.07332f,-0.1623f,0.07f,-0.07221f,-0.16064f,0.07f,-0.07096f,-0.15905f,0.07f,-0.0696f,-0.15751f,0.07f,-0.06814f,-0.15605f,0.07f,-0.06493f,-0.15337f,0.07f,-0.06141f,-0.15106f,0.07f,-0.05765f,-0.14917f,0.07f,-0.05571f,-0.1484f,0.07f,-0.05374f,-0.14775f,0.07f,-0.05175f,-0.14723f,0.07f,-0.04975f,-0.14686f,0.07f,-0.04775f,-0.14663f,0.07f,-0.04576f,-0.14655f,0.07f,-0.04388f,-0.14663f,0.07f,-0.042f,-0.14688f,0.07f,-0.04013f,-0.14728f,0.07f,-0.03828f,-0.14782f,0.07f,-0.03646f,-0.14849f,0.07f,-0.03466f,-0.14929f,0.07f,-0.0312f,-0.15124f,0.07f,-0.02796f,-0.15358f,0.07f,-0.025f,-0.15626f,0.07f,-0.02238f,-0.15918f,0.07f,-0.02017f,-0.1623f,0.07f,-0.0187f,-0.16451f,0.07f,-0.01738f,-0.16681f,0.07f,-0.01516f,-0.17163f,0.07f,-0.01343f,-0.17671f,0.07f,-0.01216f,-0.18198f,0.07f,-0.0107f,-0.19283f,0.07f,-0.01032f,-0.20364f,0.07f,-0.01081f,-0.21439f,0.07f,-0.01243f,-0.22512f,0.07f,-0.01375f,-0.23036f,0.07f,-0.01546f,-0.23545f,0.07f,-0.01759f,-0.24034f,0.07f});
  }
}
protected class MFVec3f963 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt32964 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f965 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.18261f,-0.30602f,0.07f,0.17759f,-0.30575f,0.07f,0.17259f,-0.30498f,0.07f,0.16768f,-0.30375f,0.07f,0.16293f,-0.30208f,0.07f,0.16293f,-0.30208f,0f,0.16768f,-0.30375f,0f,0.17259f,-0.30498f,0f,0.17759f,-0.30575f,0f,0.18261f,-0.30602f,0f});
  }
}
protected class MFVec3f966 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.10395f,-0.99458f,0f,-0.19952f,-0.97989f,0f,-0.28811f,-0.9576f,0f,-0.37139f,-0.92848f,0f,-0.37139f,-0.92848f,0f,-0.28811f,-0.9576f,0f,-0.19952f,-0.97989f,0f,-0.10395f,-0.99458f,0f,0f,-1f,0f});
  }
}
protected class MFInt32967 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f968 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16293f,-0.30208f,0.07f,0.16081f,-0.30148f,0.07f,0.15872f,-0.30075f,0.07f,0.15468f,-0.29893f,0.07f,0.15082f,-0.29672f,0.07f,0.14718f,-0.29421f,0.07f,0.14718f,-0.29421f,0f,0.15082f,-0.29672f,0f,0.15468f,-0.29893f,0f,0.15872f,-0.30075f,0f,0.16081f,-0.30148f,0f,0.16293f,-0.30208f,0f});
  }
}
protected class MFVec3f969 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24254f,-0.97014f,0f,-0.30355f,-0.95282f,0f,-0.35921f,-0.93325f,0f,-0.45562f,-0.89018f,0f,-0.53474f,-0.84502f,0f,-0.6f,-0.8f,0f,-0.6f,-0.8f,0f,-0.53474f,-0.84502f,0f,-0.45562f,-0.89018f,0f,-0.35921f,-0.93325f,0f,-0.30355f,-0.95282f,0f,-0.24254f,-0.97014f,0f});
  }
}
protected class MFInt32970 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f971 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.14718f,-0.29421f,0.07f,0.14437f,-0.29213f,0.07f,0.14177f,-0.28977f,0.07f,0.13941f,-0.28717f,0.07f,0.13733f,-0.28436f,0.07f,0.13733f,-0.28436f,0f,0.13941f,-0.28717f,0f,0.14177f,-0.28977f,0f,0.14437f,-0.29213f,0f,0.14718f,-0.29421f,0f});
  }
}
protected class MFVec3f972 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.5547f,-0.83205f,0f,-0.63491f,-0.77259f,0f,-0.70711f,-0.70711f,0f,-0.77259f,-0.63491f,0f,-0.83205f,-0.5547f,0f,-0.83205f,-0.5547f,0f,-0.77259f,-0.63491f,0f,-0.70711f,-0.70711f,0f,-0.63491f,-0.77259f,0f,-0.5547f,-0.83205f,0f});
  }
}
protected class MFInt32973 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f974 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.13733f,-0.28436f,0.07f,0.13649f,-0.28148f,0.07f,0.13587f,-0.27853f,0.07f,0.13549f,-0.27555f,0.07f,0.13536f,-0.27255f,0.07f,0.13536f,-0.27255f,0f,0.13549f,-0.27555f,0f,0.13587f,-0.27853f,0f,0.13649f,-0.28148f,0f,0.13733f,-0.28436f,0f});
  }
}
protected class MFVec3f975 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.97003f,-0.24298f,0f,-0.98605f,-0.16646f,0f,-0.99632f,-0.08575f,0f,-1f,0f,0f,-1f,0f,0f,-0.99632f,-0.08575f,0f,-0.98605f,-0.16646f,0f,-0.97003f,-0.24298f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt32976 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f977 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.13536f,-0.27255f,0.07f,0.1354f,-0.27045f,0.07f,0.13548f,-0.26937f,0.07f,0.13563f,-0.26832f,0.07f,0.13587f,-0.26729f,0.07f,0.13622f,-0.26633f,0.07f,0.1367f,-0.26545f,0.07f,0.13733f,-0.26467f,0.07f,0.13733f,-0.26467f,0f,0.1367f,-0.26545f,0f,0.13622f,-0.26633f,0f,0.13587f,-0.26729f,0f,0.13563f,-0.26832f,0f,0.13548f,-0.26937f,0f,0.1354f,-0.27045f,0f,0.13536f,-0.27255f,0f});
  }
}
protected class MFVec3f978 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.9988f,0.04898f,0f,-0.99469f,0.1029f,0f,-0.98386f,0.17892f,0f,-0.96007f,0.27975f,0f,-0.91369f,0.40641f,0f,-0.8325f,0.55403f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.8325f,0.55403f,0f,-0.91369f,0.40641f,0f,-0.96007f,0.27975f,0f,-0.98386f,0.17892f,0f,-0.99469f,0.1029f,0f,-0.9988f,0.04898f,0f,-1f,0f,0f});
  }
}
protected class MFInt32979 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f980 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.13733f,-0.26467f,0.07f,0.13783f,-0.26353f,0.07f,0.13854f,-0.26244f,0.07f,0.13941f,-0.26144f,0.07f,0.14043f,-0.26055f,0.07f,0.14155f,-0.25982f,0.07f,0.14274f,-0.25925f,0.07f,0.14397f,-0.25889f,0.07f,0.14521f,-0.25877f,0.07f,0.14521f,-0.25877f,0f,0.14397f,-0.25889f,0f,0.14274f,-0.25925f,0f,0.14155f,-0.25982f,0f,0.14043f,-0.26055f,0f,0.13941f,-0.26144f,0f,0.13854f,-0.26244f,0f,0.13783f,-0.26353f,0f,0.13733f,-0.26467f,0f});
  }
}
protected class MFVec3f981 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,0.31623f,0f,-0.87909f,0.47666f,0f,-0.79679f,0.60426f,0f,-0.70594f,0.70827f,0f,-0.60561f,0.79576f,0f,-0.49164f,0.8708f,0f,-0.35756f,0.93389f,0f,-0.19567f,0.98067f,0f,0f,1f,0f,0f,1f,0f,-0.19567f,0.98067f,0f,-0.35756f,0.93389f,0f,-0.49164f,0.8708f,0f,-0.60561f,0.79576f,0f,-0.70594f,0.70827f,0f,-0.79679f,0.60426f,0f,-0.87909f,0.47666f,0f,-0.94868f,0.31623f,0f});
  }
}
protected class MFInt32982 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,12,-1,13,14,8,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,8,9,12,-1,12,9,10,-1,11,12,10,-1});
  }
}
protected class MFVec3f983 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.14521f,-0.25877f,0.07f,0.14679f,-0.25882f,0.07f,0.14839f,-0.25897f,0.07f,0.14999f,-0.25924f,0.07f,0.15157f,-0.25964f,0.07f,0.15309f,-0.26017f,0.07f,0.15452f,-0.26085f,0.07f,0.1552f,-0.26125f,0.07f,0.15584f,-0.26169f,0.07f,0.15645f,-0.26218f,0.07f,0.15702f,-0.26271f,0.07f,0.15702f,-0.26271f,0f,0.15645f,-0.26218f,0f,0.15584f,-0.26169f,0f,0.1552f,-0.26125f,0f,0.15452f,-0.26085f,0f,0.15309f,-0.26017f,0f,0.15157f,-0.25964f,0f,0.14999f,-0.25924f,0f,0.14839f,-0.25897f,0f,0.14679f,-0.25882f,0f,0.14521f,-0.25877f,0f});
  }
}
protected class MFVec3f984 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06217f,0.99807f,0f,0.12928f,0.99161f,0f,0.20336f,0.9791f,0f,0.28619f,0.95817f,0f,0.37907f,0.92537f,0f,0.48214f,0.87609f,0f,0.53698f,0.84359f,0f,0.59334f,0.80495f,0f,0.65041f,0.75958f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.65041f,0.75958f,0f,0.59334f,0.80495f,0f,0.53698f,0.84359f,0f,0.48214f,0.87609f,0f,0.37907f,0.92537f,0f,0.28619f,0.95817f,0f,0.20336f,0.9791f,0f,0.12928f,0.99161f,0f,0.06217f,0.99807f,0f,0f,1f,0f});
  }
}
protected class MFInt32985 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f986 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15702f,-0.26271f,0.07f,0.1578f,-0.26317f,0.07f,0.15853f,-0.26374f,0.07f,0.1592f,-0.26442f,0.07f,0.15978f,-0.26517f,0.07f,0.16027f,-0.26598f,0.07f,0.16064f,-0.26684f,0.07f,0.16087f,-0.26772f,0.07f,0.16096f,-0.26861f,0.07f,0.16096f,-0.26861f,0f,0.16087f,-0.26772f,0f,0.16064f,-0.26684f,0f,0.16027f,-0.26598f,0f,0.15978f,-0.26517f,0f,0.1592f,-0.26442f,0f,0.15853f,-0.26374f,0f,0.1578f,-0.26317f,0f,0.15702f,-0.26271f,0f});
  }
}
protected class MFVec3f987 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,0.89443f,0f,0.56714f,0.82362f,0f,0.66628f,0.74571f,0f,0.75071f,0.66063f,0f,0.82442f,0.56598f,0f,0.88911f,0.45769f,0f,0.9438f,0.33052f,0f,0.98384f,0.17902f,0f,1f,0f,0f,1f,0f,0f,0.98384f,0.17902f,0f,0.9438f,0.33052f,0f,0.88911f,0.45769f,0f,0.82442f,0.56598f,0f,0.75071f,0.66063f,0f,0.66628f,0.74571f,0f,0.56714f,0.82362f,0f,0.44721f,0.89443f,0f});
  }
}
protected class MFInt32988 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f989 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16096f,-0.26861f,0.07f,0.1608f,-0.27112f,0.07f,0.16037f,-0.2736f,0.07f,0.15899f,-0.27846f,0.07f,0.15899f,-0.27846f,0f,0.16037f,-0.2736f,0f,0.1608f,-0.27112f,0f,0.16096f,-0.26861f,0f});
  }
}
protected class MFVec3f990 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,-0.12161f,0f,0.97691f,-0.21363f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.97691f,-0.21363f,0f,0.99258f,-0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt32991 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f992 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15899f,-0.27846f,0.07f,0.15817f,-0.28033f,0.07f,0.15755f,-0.28229f,0.07f,0.15716f,-0.2843f,0.07f,0.15705f,-0.28532f,0.07f,0.15702f,-0.28633f,0.07f,0.15702f,-0.28633f,0f,0.15705f,-0.28532f,0f,0.15716f,-0.2843f,0f,0.15755f,-0.28229f,0f,0.15817f,-0.28033f,0f,0.15899f,-0.27846f,0f});
  }
}
protected class MFVec3f993 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,-0.44721f,0f,0.93577f,-0.35262f,0f,0.96859f,-0.24866f,0f,0.99125f,-0.13201f,0f,0.99768f,-0.06804f,0f,1f,0f,0f,1f,0f,0f,0.99768f,-0.06804f,0f,0.99125f,-0.13201f,0f,0.96859f,-0.24866f,0f,0.93577f,-0.35262f,0f,0.89443f,-0.44721f,0f});
  }
}
protected class MFInt32994 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f995 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15702f,-0.28633f,0.07f,0.158f,-0.28732f,0.07f,0.15899f,-0.2883f,0.07f,0.15899f,-0.2883f,0f,0.158f,-0.28732f,0f,0.15702f,-0.28633f,0f});
  }
}
protected class MFVec3f996 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.7071f,0f,0.70711f,0.7071f,0f,0.70711f,0.7071f,0f,0.70711f,0.7071f,0f,0.70711f,0.7071f,0f,0.70711f,0.7071f,0f});
  }
}
protected class MFInt32997 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f998 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15899f,-0.2883f,0.07f,0.16032f,-0.28947f,0.07f,0.16178f,-0.2905f,0.07f,0.16489f,-0.29224f,0.07f,0.16489f,-0.29224f,0f,0.16178f,-0.2905f,0f,0.16032f,-0.28947f,0f,0.15899f,-0.2883f,0f});
  }
}
protected class MFVec3f999 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.61587f,0.78785f,0f,0.53972f,0.84184f,0f,0.44721f,0.89443f,0f,0.44721f,0.89443f,0f,0.53972f,0.84184f,0f,0.61587f,0.78785f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt321000 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f1001 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16489f,-0.29224f,0.07f,0.16591f,-0.29227f,0.07f,0.16693f,-0.29237f,0.07f,0.16894f,-0.29277f,0.07f,0.1709f,-0.29339f,0.07f,0.17277f,-0.29421f,0.07f,0.17277f,-0.29421f,0f,0.1709f,-0.29339f,0f,0.16894f,-0.29277f,0f,0.16693f,-0.29237f,0f,0.16591f,-0.29227f,0f,0.16489f,-0.29224f,0f});
  }
}
protected class MFVec3f1002 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.06804f,0.99768f,0f,0.13201f,0.99125f,0f,0.24866f,0.96859f,0f,0.35262f,0.93577f,0f,0.44721f,0.89443f,0f,0.44721f,0.89443f,0f,0.35262f,0.93577f,0f,0.24866f,0.96859f,0f,0.13201f,0.99125f,0f,0.06804f,0.99768f,0f,0f,1f,0f});
  }
}
protected class MFInt321003 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,8,-1,9,10,4,-1,12,2,11,-1,11,3,10,-1,4,5,8,-1,8,5,7,-1,7,5,6,-1});
  }
}
protected class MFVec3f1004 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.17277f,-0.29421f,0.07f,0.17414f,-0.2948f,0.07f,0.17556f,-0.29527f,0.07f,0.17702f,-0.29561f,0.07f,0.17852f,-0.29586f,0.07f,0.18155f,-0.29612f,0.07f,0.18458f,-0.29618f,0.07f,0.18458f,-0.29618f,0f,0.18155f,-0.29612f,0f,0.17852f,-0.29586f,0f,0.17702f,-0.29561f,0f,0.17556f,-0.29527f,0f,0.17414f,-0.2948f,0f,0.17277f,-0.29421f,0f});
  }
}
protected class MFVec3f1005 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44722f,0.89443f,0f,0.35328f,0.93552f,0f,0.26836f,0.96332f,0f,0.19462f,0.98088f,0f,0.13281f,0.99114f,0f,0.04437f,0.99902f,0f,0f,1f,0f,0f,1f,0f,0.04437f,0.99902f,0f,0.13281f,0.99114f,0f,0.19462f,0.98088f,0f,0.26836f,0.96332f,0f,0.35328f,0.93552f,0f,0.44722f,0.89443f,0f});
  }
}
protected class MFInt321006 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,10,-1,11,12,4,-1,14,2,13,-1,13,3,12,-1,4,5,10,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,10,6,9,-1});
  }
}
protected class MFVec3f1007 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.18458f,-0.29618f,0.07f,0.18614f,-0.2961f,0.07f,0.18769f,-0.29588f,0.07f,0.18923f,-0.29554f,0.07f,0.19075f,-0.29507f,0.07f,0.19223f,-0.2945f,0.07f,0.19368f,-0.29382f,0.07f,0.19639f,-0.29224f,0.07f,0.19639f,-0.29224f,0f,0.19368f,-0.29382f,0f,0.19223f,-0.2945f,0f,0.19075f,-0.29507f,0f,0.18923f,-0.29554f,0f,0.18769f,-0.29588f,0f,0.18614f,-0.2961f,0f,0.18458f,-0.29618f,0f});
  }
}
protected class MFVec3f1008 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.09439f,0.99554f,0f,-0.18037f,0.9836f,0f,-0.25818f,0.9661f,0f,-0.32853f,0.94449f,0f,-0.39234f,0.91982f,0f,-0.45064f,0.89271f,0f,-0.5547f,0.83205f,0f,-0.5547f,0.83205f,0f,-0.45064f,0.89271f,0f,-0.39234f,0.91982f,0f,-0.32853f,0.94449f,0f,-0.25818f,0.9661f,0f,-0.18037f,0.9836f,0f,-0.09439f,0.99554f,0f,0f,1f,0f});
  }
}
protected class MFInt321009 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,9,-1,10,11,3,-1,12,2,11,-1,3,4,9,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,9,5,8,-1});
  }
}
protected class MFVec3f1010 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.19639f,-0.29224f,0.07f,0.1996f,-0.2913f,0.07f,0.20274f,-0.29005f,0.07f,0.20423f,-0.28929f,0.07f,0.20565f,-0.28842f,0.07f,0.20698f,-0.28743f,0.07f,0.20821f,-0.28633f,0.07f,0.20821f,-0.28633f,0f,0.20698f,-0.28743f,0f,0.20565f,-0.28842f,0f,0.20423f,-0.28929f,0f,0.20274f,-0.29005f,0f,0.1996f,-0.2913f,0f,0.19639f,-0.29224f,0f});
  }
}
protected class MFVec3f1011 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.24253f,0.97014f,0f,-0.32084f,0.94713f,0f,-0.42529f,0.90506f,0f,-0.48778f,0.87296f,0f,-0.55663f,0.83076f,0f,-0.63055f,0.77615f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.63055f,0.77615f,0f,-0.55663f,0.83076f,0f,-0.48778f,0.87296f,0f,-0.42529f,0.90506f,0f,-0.32084f,0.94713f,0f,-0.24253f,0.97014f,0f});
  }
}
protected class MFInt321012 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,12,-1,13,14,4,-1,16,2,15,-1,15,3,14,-1,4,5,12,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f1013 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20821f,-0.28633f,0.07f,0.20957f,-0.28488f,0.07f,0.21084f,-0.28332f,0.07f,0.212f,-0.28168f,0.07f,0.21307f,-0.27996f,0.07f,0.21401f,-0.27818f,0.07f,0.21484f,-0.27634f,0.07f,0.21553f,-0.27446f,0.07f,0.21608f,-0.27255f,0.07f,0.21608f,-0.27255f,0f,0.21553f,-0.27446f,0f,0.21484f,-0.27634f,0f,0.21401f,-0.27818f,0f,0.21307f,-0.27996f,0f,0.212f,-0.28168f,0f,0.21084f,-0.28332f,0f,0.20957f,-0.28488f,0f,0.20821f,-0.28633f,0f});
  }
}
protected class MFVec3f1014 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.7533f,0.65768f,0f,-0.79509f,0.60649f,0f,-0.83298f,0.5533f,0f,-0.86731f,0.49776f,0f,-0.89827f,0.43945f,0f,-0.92587f,0.37783f,0f,-0.94996f,0.31238f,0f,-0.97014f,0.24253f,0f,-0.97014f,0.24253f,0f,-0.94996f,0.31238f,0f,-0.92587f,0.37783f,0f,-0.89827f,0.43945f,0f,-0.86731f,0.49776f,0f,-0.83298f,0.5533f,0f,-0.79509f,0.60649f,0f,-0.7533f,0.65768f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt321015 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,12,-1,13,14,2,-1,2,3,12,-1,12,3,11,-1,11,3,4,-1,5,11,4,-1,5,10,11,-1,5,6,10,-1,10,6,9,-1,9,6,7,-1,8,9,7,-1});
  }
}
protected class MFVec3f1016 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21608f,-0.27255f,0.07f,0.21711f,-0.2708f,0.07f,0.21796f,-0.26895f,0.07f,0.21865f,-0.26701f,0.07f,0.21918f,-0.26502f,0.07f,0.21957f,-0.26297f,0.07f,0.21983f,-0.26091f,0.07f,0.22002f,-0.2568f,0.07f,0.22002f,-0.2568f,0f,0.21983f,-0.26091f,0f,0.21957f,-0.26297f,0f,0.21918f,-0.26502f,0f,0.21865f,-0.26701f,0f,0.21796f,-0.26895f,0f,0.21711f,-0.2708f,0f,0.21608f,-0.27255f,0f});
  }
}
protected class MFVec3f1017 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.88703f,0.46172f,0f,-0.92748f,0.37386f,0f,-0.95608f,0.29311f,0f,-0.97545f,0.22022f,0f,-0.9879f,0.1551f,0f,-0.99526f,0.0972f,0f,-1f,0f,0f,-1f,0f,0f,-0.99526f,0.0972f,0f,-0.9879f,0.1551f,0f,-0.97545f,0.22022f,0f,-0.95608f,0.29311f,0f,-0.92748f,0.37386f,0f,-0.88703f,0.46172f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt321018 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {9,0,8,-1,8,0,1,-1,7,1,2,-1,3,7,2,-1,3,6,7,-1,3,4,6,-1,6,4,5,-1,8,1,7,-1});
  }
}
protected class MFVec3f1019 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22002f,-0.2568f,0.07f,0.21989f,-0.2538f,0.07f,0.21951f,-0.25082f,0.07f,0.21889f,-0.24787f,0.07f,0.21805f,-0.24499f,0.07f,0.21805f,-0.24499f,0f,0.21889f,-0.24787f,0f,0.21951f,-0.25082f,0f,0.21989f,-0.2538f,0f,0.22002f,-0.2568f,0f});
  }
}
protected class MFVec3f1020 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99632f,-0.08575f,0f,-0.98605f,-0.16647f,0f,-0.97003f,-0.24298f,0f,-0.94868f,-0.31623f,0f,-0.94868f,-0.31623f,0f,-0.97003f,-0.24298f,0f,-0.98605f,-0.16647f,0f,-0.99632f,-0.08575f,0f,-1f,0f,0f});
  }
}
protected class MFInt321021 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f1022 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21805f,-0.24499f,0.07f,0.21688f,-0.24189f,0.07f,0.21549f,-0.23889f,0.07f,0.21214f,-0.23317f,0.07f,0.21214f,-0.23317f,0f,0.21549f,-0.23889f,0f,0.21688f,-0.24189f,0f,0.21805f,-0.24499f,0f});
  }
}
protected class MFVec3f1023 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.94868f,-0.31623f,0f,-0.92164f,-0.38803f,0f,-0.89248f,-0.45108f,0f,-0.83205f,-0.5547f,0f,-0.83205f,-0.5547f,0f,-0.89248f,-0.45108f,0f,-0.92164f,-0.38803f,0f,-0.94868f,-0.31623f,0f});
  }
}
protected class MFInt321024 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f1025 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21214f,-0.23317f,0.07f,0.21151f,-0.23212f,0.07f,0.21073f,-0.23116f,0.07f,0.20983f,-0.23029f,0.07f,0.20882f,-0.22951f,0.07f,0.20774f,-0.22882f,0.07f,0.20661f,-0.22822f,0.07f,0.20544f,-0.2277f,0.07f,0.20427f,-0.22727f,0.07f,0.20427f,-0.22727f,0f,0.20544f,-0.2277f,0f,0.20661f,-0.22822f,0f,0.20774f,-0.22882f,0f,0.20882f,-0.22951f,0f,0.20983f,-0.23029f,0f,0.21073f,-0.23116f,0f,0.21151f,-0.23212f,0f,0.21214f,-0.23317f,0f});
  }
}
protected class MFVec3f1026 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.81744f,-0.57601f,0f,-0.73445f,-0.67867f,0f,-0.65224f,-0.75801f,0f,-0.57451f,-0.8185f,0f,-0.50255f,-0.86455f,0f,-0.43622f,-0.89984f,0f,-0.37459f,-0.92719f,0f,-0.31623f,-0.94868f,0f,-0.31623f,-0.94868f,0f,-0.37459f,-0.92719f,0f,-0.43622f,-0.89984f,0f,-0.50255f,-0.86455f,0f,-0.57451f,-0.8185f,0f,-0.65224f,-0.75801f,0f,-0.73445f,-0.67867f,0f,-0.81744f,-0.57601f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt321027 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,11,-1,12,13,3,-1,14,2,13,-1,3,4,11,-1,11,4,5,-1,10,5,9,-1,10,11,5,-1,5,6,9,-1,9,6,7,-1,8,9,7,-1});
  }
}
protected class MFVec3f1028 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20427f,-0.22727f,0.07f,0.20252f,-0.22624f,0.07f,0.20067f,-0.22539f,0.07f,0.19873f,-0.2247f,0.07f,0.19674f,-0.22417f,0.07f,0.19469f,-0.22379f,0.07f,0.19263f,-0.22352f,0.07f,0.18852f,-0.22333f,0.07f,0.18852f,-0.22333f,0f,0.19263f,-0.22352f,0f,0.19469f,-0.22379f,0f,0.19674f,-0.22417f,0f,0.19873f,-0.2247f,0f,0.20067f,-0.22539f,0f,0.20252f,-0.22624f,0f,0.20427f,-0.22727f,0f});
  }
}
protected class MFVec3f1029 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.5547f,-0.83205f,0f,-0.46172f,-0.88703f,0f,-0.37386f,-0.92748f,0f,-0.29311f,-0.95608f,0f,-0.22022f,-0.97545f,0f,-0.15509f,-0.9879f,0f,-0.0972f,-0.99526f,0f,0f,-1f,0f,0f,-1f,0f,-0.0972f,-0.99526f,0f,-0.15509f,-0.9879f,0f,-0.22022f,-0.97545f,0f,-0.29311f,-0.95608f,0f,-0.37386f,-0.92748f,0f,-0.46172f,-0.88703f,0f,-0.5547f,-0.83205f,0f});
  }
}
protected class MFInt321030 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1031 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.18852f,-0.22333f,0.07f,0.17474f,-0.22333f,0.07f,0.17474f,-0.22333f,0f,0.18852f,-0.22333f,0f});
  }
}
protected class MFVec3f1032 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321033 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1034 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.17474f,-0.22333f,0.07f,0.17474f,-0.20955f,0.07f,0.17474f,-0.20955f,0f,0.17474f,-0.22333f,0f});
  }
}
protected class MFVec3f1035 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt321036 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1037 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.17474f,-0.20955f,0.07f,0.18458f,-0.20955f,0.07f,0.18458f,-0.20955f,0f,0.17474f,-0.20955f,0f});
  }
}
protected class MFVec3f1038 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321039 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,10,-1,11,12,8,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,8,9,10,-1});
  }
}
protected class MFVec3f1040 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.18458f,-0.20955f,0.07f,0.1875f,-0.20943f,0.07f,0.19044f,-0.20908f,0.07f,0.19338f,-0.20849f,0.07f,0.19625f,-0.20765f,0.07f,0.19902f,-0.20655f,0.07f,0.20164f,-0.2052f,0.07f,0.20406f,-0.20357f,0.07f,0.20518f,-0.20266f,0.07f,0.20624f,-0.20167f,0.07f,0.20624f,-0.20167f,0f,0.20518f,-0.20266f,0f,0.20406f,-0.20357f,0f,0.20164f,-0.2052f,0f,0.19902f,-0.20655f,0f,0.19625f,-0.20765f,0f,0.19338f,-0.20849f,0f,0.19044f,-0.20908f,0f,0.1875f,-0.20943f,0f,0.18458f,-0.20955f,0f});
  }
}
protected class MFVec3f1041 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,-0.07881f,0.99689f,0f,-0.15769f,0.98749f,0f,-0.23864f,0.97111f,0f,-0.32332f,0.94629f,0f,-0.41289f,0.91078f,0f,-0.50772f,0.86152f,0f,-0.6068f,0.79485f,0f,-0.65709f,0.75381f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.65709f,0.75381f,0f,-0.6068f,0.79485f,0f,-0.50772f,0.86152f,0f,-0.41289f,0.91078f,0f,-0.32332f,0.94629f,0f,-0.23864f,0.97111f,0f,-0.15769f,0.98749f,0f,-0.07881f,0.99689f,0f,0f,1f,0f});
  }
}
protected class MFInt321042 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,19,-1,19,1,18,-1,18,1,2,-1,17,2,3,-1,16,3,4,-1,15,4,5,-1,14,5,6,-1,13,6,7,-1,12,7,8,-1,11,8,9,-1,10,11,9,-1,18,2,17,-1,17,3,16,-1,16,4,15,-1,15,5,14,-1,14,6,13,-1,13,7,12,-1,12,8,11,-1});
  }
}
protected class MFVec3f1043 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20624f,-0.20167f,0.07f,0.20737f,-0.20045f,0.07f,0.20839f,-0.19913f,0.07f,0.20931f,-0.19773f,0.07f,0.21013f,-0.19627f,0.07f,0.2115f,-0.19316f,0.07f,0.21254f,-0.18986f,0.07f,0.21329f,-0.18644f,0.07f,0.21377f,-0.18296f,0.07f,0.21411f,-0.17608f,0.07f,0.21411f,-0.17608f,0f,0.21377f,-0.18296f,0f,0.21329f,-0.18644f,0f,0.21254f,-0.18986f,0f,0.2115f,-0.19316f,0f,0.21013f,-0.19627f,0f,0.20931f,-0.19773f,0f,0.20839f,-0.19913f,0f,0.20737f,-0.20045f,0f,0.20624f,-0.20167f,0f});
  }
}
protected class MFVec3f1044 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.70711f,0.70711f,0f,-0.76448f,0.64464f,0f,-0.81347f,0.5816f,0f,-0.85444f,0.51955f,0f,-0.88809f,0.45968f,0f,-0.93695f,0.34946f,0f,-0.96722f,0.25394f,0f,-0.98493f,0.17294f,0f,-0.99448f,0.10489f,0f,-1f,0f,0f,-1f,0f,0f,-0.99448f,0.10489f,0f,-0.98493f,0.17294f,0f,-0.96722f,0.25394f,0f,-0.93695f,0.34946f,0f,-0.88809f,0.45968f,0f,-0.85444f,0.51955f,0f,-0.81347f,0.5816f,0f,-0.76448f,0.64464f,0f,-0.70711f,0.70711f,0f});
  }
}
protected class MFInt321045 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {19,0,18,-1,18,0,1,-1,17,1,2,-1,16,2,3,-1,15,3,4,-1,14,4,5,-1,6,14,5,-1,6,13,14,-1,6,12,13,-1,6,7,12,-1,12,7,11,-1,11,7,8,-1,10,8,9,-1,10,11,8,-1,18,1,17,-1,17,2,16,-1,16,3,15,-1,15,4,14,-1});
  }
}
protected class MFVec3f1046 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21411f,-0.17608f,0.07f,0.214f,-0.17317f,0.07f,0.21365f,-0.17022f,0.07f,0.21305f,-0.16729f,0.07f,0.21221f,-0.16441f,0.07f,0.21112f,-0.16164f,0.07f,0.20976f,-0.15902f,0.07f,0.20814f,-0.1566f,0.07f,0.20722f,-0.15548f,0.07f,0.20624f,-0.15442f,0.07f,0.20624f,-0.15442f,0f,0.20722f,-0.15548f,0f,0.20814f,-0.1566f,0f,0.20976f,-0.15902f,0f,0.21112f,-0.16164f,0f,0.21221f,-0.16441f,0f,0.21305f,-0.16729f,0f,0.21365f,-0.17022f,0f,0.214f,-0.17317f,0f,0.21411f,-0.17608f,0f});
  }
}
protected class MFVec3f1047 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99689f,-0.07881f,0f,-0.98749f,-0.15769f,0f,-0.97111f,-0.23864f,0f,-0.94629f,-0.32332f,0f,-0.91078f,-0.41289f,0f,-0.86152f,-0.50772f,0f,-0.79485f,-0.6068f,0f,-0.75381f,-0.65709f,0f,-0.70711f,-0.70711f,0f,-0.70711f,-0.70711f,0f,-0.75381f,-0.65709f,0f,-0.79485f,-0.6068f,0f,-0.86152f,-0.50772f,0f,-0.91078f,-0.41289f,0f,-0.94629f,-0.32332f,0f,-0.97111f,-0.23864f,0f,-0.98749f,-0.15769f,0f,-0.99689f,-0.07881f,0f,-1f,0f,0f});
  }
}
protected class MFInt321048 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,18,-1,19,20,4,-1,22,2,21,-1,21,3,20,-1,4,5,18,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f1049 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20624f,-0.15442f,0.07f,0.2054f,-0.1534f,0.07f,0.20446f,-0.15246f,0.07f,0.20345f,-0.1516f,0.07f,0.20237f,-0.15081f,0.07f,0.20122f,-0.15009f,0.07f,0.20001f,-0.14945f,0.07f,0.19746f,-0.14837f,0.07f,0.19477f,-0.14755f,0.07f,0.19201f,-0.14699f,0.07f,0.18925f,-0.14666f,0.07f,0.18655f,-0.14655f,0.07f,0.18655f,-0.14655f,0f,0.18925f,-0.14666f,0f,0.19201f,-0.14699f,0f,0.19477f,-0.14755f,0f,0.19746f,-0.14837f,0f,0.20001f,-0.14945f,0f,0.20122f,-0.15009f,0f,0.20237f,-0.15081f,0f,0.20345f,-0.1516f,0f,0.20446f,-0.15246f,0f,0.2054f,-0.1534f,0f,0.20624f,-0.15442f,0f});
  }
}
protected class MFVec3f1050 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.8f,-0.6f,0f,-0.74119f,-0.6713f,0f,-0.68011f,-0.73311f,0f,-0.61857f,-0.78573f,0f,-0.55796f,-0.82987f,0f,-0.49922f,-0.86648f,0f,-0.44292f,-0.89656f,0f,-0.33848f,-0.94098f,0f,-0.2444f,-0.96968f,0f,-0.15863f,-0.98734f,0f,-0.07829f,-0.99693f,0f,0f,-1f,0f,0f,-1f,0f,-0.07829f,-0.99693f,0f,-0.15863f,-0.98734f,0f,-0.2444f,-0.96968f,0f,-0.33848f,-0.94098f,0f,-0.44292f,-0.89656f,0f,-0.49922f,-0.86648f,0f,-0.55796f,-0.82987f,0f,-0.61857f,-0.78573f,0f,-0.68011f,-0.73311f,0f,-0.74119f,-0.6713f,0f,-0.8f,-0.6f,0f});
  }
}
protected class MFInt321051 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,7,-1,8,9,5,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,5,6,7,-1});
  }
}
protected class MFVec3f1052 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.18655f,-0.14655f,0.07f,0.18402f,-0.14665f,0.07f,0.1815f,-0.14697f,0.07f,0.18025f,-0.14724f,0.07f,0.17904f,-0.14758f,0.07f,0.17785f,-0.148f,0.07f,0.17671f,-0.14852f,0.07f,0.17671f,-0.14852f,0f,0.17785f,-0.148f,0f,0.17904f,-0.14758f,0f,0.18025f,-0.14724f,0f,0.1815f,-0.14697f,0f,0.18402f,-0.14665f,0f,0.18655f,-0.14655f,0f});
  }
}
protected class MFVec3f1053 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0.07973f,-0.99682f,0f,0.17989f,-0.98369f,0f,0.23845f,-0.97116f,0f,0.3028f,-0.95305f,0f,0.37265f,-0.92797f,0f,0.44721f,-0.89443f,0f,0.44721f,-0.89443f,0f,0.37265f,-0.92797f,0f,0.3028f,-0.95305f,0f,0.23845f,-0.97116f,0f,0.17989f,-0.98369f,0f,0.07973f,-0.99682f,0f,0f,-1f,0f});
  }
}
protected class MFInt321054 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f1055 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.17671f,-0.14852f,0.07f,0.17359f,-0.15026f,0.07f,0.17213f,-0.15128f,0.07f,0.1708f,-0.15246f,0.07f,0.1708f,-0.15246f,0f,0.17213f,-0.15128f,0f,0.17359f,-0.15026f,0f,0.17671f,-0.14852f,0f});
  }
}
protected class MFVec3f1056 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.53972f,-0.84184f,0f,0.61587f,-0.78785f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.61587f,-0.78785f,0f,0.53972f,-0.84184f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt321057 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f1058 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1708f,-0.15246f,0.07f,0.16768f,-0.15419f,0.07f,0.16623f,-0.15522f,0.07f,0.16489f,-0.15639f,0.07f,0.16489f,-0.15639f,0f,0.16623f,-0.15522f,0f,0.16768f,-0.15419f,0f,0.1708f,-0.15246f,0f});
  }
}
protected class MFVec3f1059 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.53972f,-0.84184f,0f,0.61586f,-0.78785f,0f,0.7071f,-0.70711f,0f,0.7071f,-0.70711f,0f,0.61586f,-0.78785f,0f,0.53972f,-0.84184f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt321060 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f1061 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16489f,-0.15639f,0.07f,0.16391f,-0.15738f,0.07f,0.16293f,-0.15836f,0.07f,0.16293f,-0.15836f,0f,0.16391f,-0.15738f,0f,0.16489f,-0.15639f,0f});
  }
}
protected class MFVec3f1062 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,-0.7071f,0f,0.70711f,-0.7071f,0f,0.70711f,-0.7071f,0f,0.70711f,-0.7071f,0f,0.70711f,-0.7071f,0f,0.70711f,-0.7071f,0f});
  }
}
protected class MFInt321063 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1});
  }
}
protected class MFVec3f1064 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16293f,-0.15836f,0.07f,0.16308f,-0.16087f,0.07f,0.16351f,-0.16335f,0.07f,0.16489f,-0.16821f,0.07f,0.16489f,-0.16821f,0f,0.16351f,-0.16335f,0f,0.16308f,-0.16087f,0f,0.16293f,-0.15836f,0f});
  }
}
protected class MFVec3f1065 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,0.12161f,0f,0.97691f,0.21363f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.97691f,0.21363f,0f,0.99258f,0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt321066 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f1067 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16489f,-0.16821f,0.07f,0.16541f,-0.16935f,0.07f,0.16583f,-0.17054f,0.07f,0.16618f,-0.17175f,0.07f,0.16644f,-0.173f,0.07f,0.16677f,-0.17552f,0.07f,0.16686f,-0.17805f,0.07f,0.16686f,-0.17805f,0f,0.16677f,-0.17552f,0f,0.16644f,-0.173f,0f,0.16618f,-0.17175f,0f,0.16583f,-0.17054f,0f,0.16541f,-0.16935f,0f,0.16489f,-0.16821f,0f});
  }
}
protected class MFVec3f1068 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.89443f,0.44721f,0f,0.92797f,0.37265f,0f,0.95305f,0.3028f,0f,0.97116f,0.23845f,0f,0.98369f,0.17989f,0f,0.99682f,0.07973f,0f,1f,0f,0f,1f,0f,0f,0.99682f,0.07973f,0f,0.98369f,0.17989f,0f,0.97116f,0.23845f,0f,0.95305f,0.3028f,0f,0.92797f,0.37265f,0f,0.89443f,0.44721f,0f});
  }
}
protected class MFInt321069 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f1070 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16686f,-0.17805f,0.07f,0.16678f,-0.17915f,0.07f,0.16654f,-0.18023f,0.07f,0.16616f,-0.18128f,0.07f,0.16567f,-0.18231f,0.07f,0.16508f,-0.1833f,0.07f,0.16442f,-0.18423f,0.07f,0.16369f,-0.18511f,0.07f,0.16293f,-0.18592f,0.07f,0.16293f,-0.18592f,0f,0.16369f,-0.18511f,0f,0.16442f,-0.18423f,0f,0.16508f,-0.1833f,0f,0.16567f,-0.18231f,0f,0.16616f,-0.18128f,0f,0.16654f,-0.18023f,0f,0.16678f,-0.17915f,0f,0.16686f,-0.17805f,0f});
  }
}
protected class MFVec3f1071 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.98874f,-0.14963f,0f,0.96042f,-0.27856f,0f,0.92238f,-0.38629f,0f,0.8799f,-0.47516f,0f,0.83613f,-0.54853f,0f,0.79259f,-0.60975f,0f,0.7497f,-0.66178f,0f,0.70711f,-0.70711f,0f,0.70711f,-0.70711f,0f,0.7497f,-0.66178f,0f,0.79259f,-0.60975f,0f,0.83613f,-0.54853f,0f,0.8799f,-0.47516f,0f,0.92238f,-0.38629f,0f,0.96042f,-0.27856f,0f,0.98874f,-0.14963f,0f,1f,0f,0f});
  }
}
protected class MFInt321072 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f1073 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16293f,-0.18592f,0.07f,0.16156f,-0.18652f,0.07f,0.16014f,-0.18699f,0.07f,0.15867f,-0.18733f,0.07f,0.15718f,-0.18758f,0.07f,0.15414f,-0.18784f,0.07f,0.15111f,-0.18789f,0.07f,0.15111f,-0.18789f,0f,0.15414f,-0.18784f,0f,0.15718f,-0.18758f,0f,0.15867f,-0.18733f,0f,0.16014f,-0.18699f,0f,0.16156f,-0.18652f,0f,0.16293f,-0.18592f,0f});
  }
}
protected class MFVec3f1074 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.35328f,-0.93552f,0f,0.26836f,-0.96332f,0f,0.19461f,-0.98088f,0f,0.13281f,-0.99114f,0f,0.04437f,-0.99902f,0f,0f,-1f,0f,0f,-1f,0f,0.04437f,-0.99902f,0f,0.13281f,-0.99114f,0f,0.19461f,-0.98088f,0f,0.26836f,-0.96332f,0f,0.35328f,-0.93552f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt321075 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f1076 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15111f,-0.18789f,0.07f,0.14999f,-0.18783f,0.07f,0.14883f,-0.18765f,0.07f,0.14768f,-0.18734f,0.07f,0.14657f,-0.18691f,0.07f,0.14553f,-0.18636f,0.07f,0.14461f,-0.18568f,0.07f,0.14383f,-0.18488f,0.07f,0.14324f,-0.18396f,0.07f,0.14324f,-0.18396f,0f,0.14383f,-0.18488f,0f,0.14461f,-0.18568f,0f,0.14553f,-0.18636f,0f,0.14657f,-0.18691f,0f,0.14768f,-0.18734f,0f,0.14883f,-0.18765f,0f,0.14999f,-0.18783f,0f,0.15111f,-0.18789f,0f});
  }
}
protected class MFVec3f1077 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.10658f,-0.9943f,0f,-0.20754f,-0.97823f,0f,-0.30884f,-0.95111f,0f,-0.41521f,-0.90972f,0f,-0.52987f,-0.84808f,0f,-0.65321f,-0.75717f,0f,-0.77974f,-0.6261f,0f,-0.89443f,-0.44721f,0f,-0.89443f,-0.44721f,0f,-0.77974f,-0.6261f,0f,-0.65321f,-0.75717f,0f,-0.52987f,-0.84808f,0f,-0.41521f,-0.90972f,0f,-0.30884f,-0.95111f,0f,-0.20754f,-0.97823f,0f,-0.10658f,-0.9943f,0f,0f,-1f,0f});
  }
}
protected class MFInt321078 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f1079 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.14324f,-0.18396f,0.07f,0.14272f,-0.18281f,0.07f,0.1423f,-0.18163f,0.07f,0.14196f,-0.18041f,0.07f,0.14169f,-0.17917f,0.07f,0.14137f,-0.17664f,0.07f,0.14127f,-0.17411f,0.07f,0.14127f,-0.17411f,0f,0.14137f,-0.17664f,0f,0.14169f,-0.17917f,0f,0.14196f,-0.18041f,0f,0.1423f,-0.18163f,0f,0.14272f,-0.18281f,0f,0.14324f,-0.18396f,0f});
  }
}
protected class MFVec3f1080 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.89443f,-0.44721f,0f,-0.92797f,-0.37265f,0f,-0.95305f,-0.3028f,0f,-0.97116f,-0.23845f,0f,-0.98369f,-0.17989f,0f,-0.99682f,-0.07973f,0f,-1f,0f,0f,-1f,0f,0f,-0.99682f,-0.07973f,0f,-0.98369f,-0.17989f,0f,-0.97116f,-0.23845f,0f,-0.95305f,-0.3028f,0f,-0.92797f,-0.37265f,0f,-0.89443f,-0.44721f,0f});
  }
}
protected class MFInt321081 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f1082 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.14127f,-0.17411f,0.07f,0.1414f,-0.17112f,0.07f,0.14178f,-0.16813f,0.07f,0.1424f,-0.16518f,0.07f,0.14324f,-0.1623f,0.07f,0.14324f,-0.1623f,0f,0.1424f,-0.16518f,0f,0.14178f,-0.16813f,0f,0.1414f,-0.17112f,0f,0.14127f,-0.17411f,0f});
  }
}
protected class MFVec3f1083 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-0.99632f,0.08575f,0f,-0.98605f,0.16647f,0f,-0.97003f,0.24298f,0f,-0.94868f,0.31623f,0f,-0.94868f,0.31623f,0f,-0.97003f,0.24298f,0f,-0.98605f,0.16647f,0f,-0.99632f,0.08575f,0f,-1f,0f,0f});
  }
}
protected class MFInt321084 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f1085 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.14324f,-0.1623f,0.07f,0.14787f,-0.15615f,0.07f,0.15308f,-0.15049f,0.07f,0.15308f,-0.15049f,0f,0.14787f,-0.15615f,0f,0.14324f,-0.1623f,0f});
  }
}
protected class MFVec3f1086 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.83205f,0.5547f,0f,-0.76566f,0.64324f,0f,-0.70711f,0.70711f,0f,-0.70711f,0.70711f,0f,-0.76566f,0.64324f,0f,-0.83205f,0.5547f,0f});
  }
}
protected class MFInt321087 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f1088 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.15308f,-0.15049f,0.07f,0.16074f,-0.14521f,0.07f,0.16883f,-0.14064f,0.07f,0.16883f,-0.14064f,0f,0.16074f,-0.14521f,0f,0.15308f,-0.15049f,0f});
  }
}
protected class MFVec3f1089 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.6f,0.8f,0f,-0.53212f,0.84667f,0f,-0.44721f,0.89443f,0f,-0.44721f,0.89443f,0f,-0.53212f,0.84667f,0f,-0.6f,0.8f,0f});
  }
}
protected class MFInt321090 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f1091 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16883f,-0.14064f,0.07f,0.17165f,-0.13962f,0.07f,0.17453f,-0.13878f,0.07f,0.18043f,-0.13756f,0.07f,0.18644f,-0.1369f,0.07f,0.19246f,-0.13671f,0.07f,0.19246f,-0.13671f,0f,0.18644f,-0.1369f,0f,0.18043f,-0.13756f,0f,0.17453f,-0.13878f,0f,0.17165f,-0.13962f,0f,0.16883f,-0.14064f,0f});
  }
}
protected class MFVec3f1092 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.37139f,0.92848f,0f,-0.31054f,0.95056f,0f,-0.25355f,0.96732f,0f,-0.15234f,0.98833f,0f,-0.06825f,0.99767f,0f,0f,1f,0f,0f,1f,0f,-0.06825f,0.99767f,0f,-0.15234f,0.98833f,0f,-0.25355f,0.96732f,0f,-0.31054f,0.95056f,0f,-0.37139f,0.92848f,0f});
  }
}
protected class MFInt321093 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f1094 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.19246f,-0.13671f,0.07f,0.19816f,-0.137f,0.07f,0.20102f,-0.13739f,0.07f,0.20385f,-0.13798f,0.07f,0.2066f,-0.13877f,0.07f,0.20926f,-0.1398f,0.07f,0.21177f,-0.14107f,0.07f,0.21411f,-0.14261f,0.07f,0.21411f,-0.14261f,0f,0.21177f,-0.14107f,0f,0.20926f,-0.1398f,0f,0.2066f,-0.13877f,0f,0.20385f,-0.13798f,0f,0.20102f,-0.13739f,0f,0.19816f,-0.137f,0f,0.19246f,-0.13671f,0f});
  }
}
protected class MFVec3f1095 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.10549f,0.99442f,0f,0.16797f,0.98579f,0f,0.23831f,0.97119f,0f,0.31721f,0.94836f,0f,0.40477f,0.91442f,0f,0.49996f,0.86605f,0f,0.6f,0.8f,0f,0.6f,0.8f,0f,0.49996f,0.86605f,0f,0.40477f,0.91442f,0f,0.31721f,0.94836f,0f,0.23831f,0.97119f,0f,0.16797f,0.98579f,0f,0.10549f,0.99442f,0f,0f,1f,0f});
  }
}
protected class MFInt321096 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f1097 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21411f,-0.14261f,0.07f,0.21838f,-0.1445f,0.07f,0.2225f,-0.14675f,0.07f,0.22636f,-0.14939f,0.07f,0.22817f,-0.15087f,0.07f,0.22986f,-0.15246f,0.07f,0.22986f,-0.15246f,0f,0.22817f,-0.15087f,0f,0.22636f,-0.14939f,0f,0.2225f,-0.14675f,0f,0.21838f,-0.1445f,0f,0.21411f,-0.14261f,0f});
  }
}
protected class MFVec3f1098 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.37139f,0.92848f,0f,0.44036f,0.89782f,0f,0.51995f,0.8542f,0f,0.60979f,0.79256f,0f,0.65782f,0.75317f,0f,0.70711f,0.70711f,0f,0.70711f,0.70711f,0f,0.65782f,0.75317f,0f,0.60979f,0.79256f,0f,0.51995f,0.8542f,0f,0.44036f,0.89782f,0f,0.37139f,0.92848f,0f});
  }
}
protected class MFInt321099 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,13,-1,13,1,12,-1,12,1,2,-1,11,2,3,-1,10,3,4,-1,9,4,5,-1,8,5,6,-1,7,8,6,-1,12,2,11,-1,11,3,10,-1,10,4,9,-1,9,5,8,-1});
  }
}
protected class MFVec3f1100 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22986f,-0.15246f,0.07f,0.2323f,-0.15508f,0.07f,0.23449f,-0.15793f,0.07f,0.23547f,-0.15944f,0.07f,0.23635f,-0.161f,0.07f,0.23711f,-0.16261f,0.07f,0.23774f,-0.16427f,0.07f,0.23774f,-0.16427f,0f,0.23711f,-0.16261f,0f,0.23635f,-0.161f,0f,0.23547f,-0.15944f,0f,0.23449f,-0.15793f,0f,0.2323f,-0.15508f,0f,0.22986f,-0.15246f,0f});
  }
}
protected class MFVec3f1101 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.76123f,0.64848f,0f,0.82277f,0.56837f,0f,0.85532f,0.5181f,0f,0.88802f,0.4598f,0f,0.91968f,0.39267f,0f,0.94868f,0.31623f,0f,0.94868f,0.31623f,0f,0.91968f,0.39267f,0f,0.88802f,0.4598f,0f,0.85532f,0.5181f,0f,0.82277f,0.56837f,0f,0.76123f,0.64848f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt321102 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f1103 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23774f,-0.16427f,0.07f,0.23858f,-0.16715f,0.07f,0.2392f,-0.1701f,0.07f,0.23958f,-0.17308f,0.07f,0.23971f,-0.17608f,0.07f,0.23971f,-0.17608f,0f,0.23958f,-0.17308f,0f,0.2392f,-0.1701f,0f,0.23858f,-0.16715f,0f,0.23774f,-0.16427f,0f});
  }
}
protected class MFVec3f1104 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94868f,0.31623f,0f,0.97003f,0.24298f,0f,0.98605f,0.16646f,0f,0.99632f,0.08575f,0f,1f,0f,0f,1f,0f,0f,0.99632f,0.08575f,0f,0.98605f,0.16646f,0f,0.97003f,0.24298f,0f,0.94868f,0.31623f,0f});
  }
}
protected class MFInt321105 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {7,0,6,-1,6,0,1,-1,5,1,2,-1,3,5,2,-1,3,4,5,-1,6,1,5,-1});
  }
}
protected class MFVec3f1106 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23971f,-0.17608f,0.07f,0.23955f,-0.17858f,0.07f,0.23912f,-0.18107f,0.07f,0.23774f,-0.18592f,0.07f,0.23774f,-0.18592f,0f,0.23912f,-0.18107f,0f,0.23955f,-0.17858f,0f,0.23971f,-0.17608f,0f});
  }
}
protected class MFVec3f1107 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99258f,-0.12161f,0f,0.97691f,-0.21363f,0f,0.94868f,-0.31623f,0f,0.94868f,-0.31623f,0f,0.97691f,-0.21363f,0f,0.99258f,-0.12161f,0f,1f,0f,0f});
  }
}
protected class MFInt321108 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f1109 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23774f,-0.18592f,0.07f,0.23657f,-0.18902f,0.07f,0.23518f,-0.19202f,0.07f,0.23183f,-0.19774f,0.07f,0.23183f,-0.19774f,0f,0.23518f,-0.19202f,0f,0.23657f,-0.18902f,0f,0.23774f,-0.18592f,0f});
  }
}
protected class MFVec3f1110 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.94868f,-0.31623f,0f,0.92164f,-0.38803f,0f,0.89248f,-0.45108f,0f,0.83205f,-0.5547f,0f,0.83205f,-0.5547f,0f,0.89248f,-0.45108f,0f,0.92164f,-0.38803f,0f,0.94868f,-0.31623f,0f});
  }
}
protected class MFInt321111 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f1112 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23183f,-0.19774f,0.07f,0.22975f,-0.20054f,0.07f,0.22739f,-0.20314f,0.07f,0.22479f,-0.2055f,0.07f,0.22199f,-0.20758f,0.07f,0.22199f,-0.20758f,0f,0.22479f,-0.2055f,0f,0.22739f,-0.20314f,0f,0.22975f,-0.20054f,0f,0.23183f,-0.19774f,0f});
  }
}
protected class MFVec3f1113 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.83205f,-0.5547f,0f,0.77259f,-0.63491f,0f,0.70711f,-0.70711f,0f,0.63491f,-0.77259f,0f,0.5547f,-0.83205f,0f,0.5547f,-0.83205f,0f,0.63491f,-0.77259f,0f,0.70711f,-0.70711f,0f,0.77259f,-0.63491f,0f,0.83205f,-0.5547f,0f});
  }
}
protected class MFInt321114 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,7,-1,7,1,6,-1,6,1,2,-1,5,2,3,-1,4,5,3,-1,6,2,5,-1});
  }
}
protected class MFVec3f1115 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22199f,-0.20758f,0.07f,0.21773f,-0.20951f,0.07f,0.21333f,-0.21112f,0.07f,0.20427f,-0.21349f,0.07f,0.20427f,-0.21349f,0f,0.21333f,-0.21112f,0f,0.21773f,-0.20951f,0f,0.22199f,-0.20758f,0f});
  }
}
protected class MFVec3f1116 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.44721f,-0.89443f,0f,0.37732f,-0.92608f,0f,0.31212f,-0.95004f,0f,0.19612f,-0.98058f,0f,0.19612f,-0.98058f,0f,0.31212f,-0.95004f,0f,0.37732f,-0.92608f,0f,0.44721f,-0.89443f,0f});
  }
}
protected class MFInt321117 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1118 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20427f,-0.21349f,0.07f,0.20427f,-0.21546f,0.07f,0.20427f,-0.21546f,0f,0.20427f,-0.21349f,0f});
  }
}
protected class MFVec3f1119 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt321120 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,5,-1,5,1,4,-1,4,1,2,-1,3,4,2,-1});
  }
}
protected class MFVec3f1121 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.20427f,-0.21546f,0.07f,0.21112f,-0.21756f,0.07f,0.21805f,-0.21939f,0.07f,0.21805f,-0.21939f,0f,0.21112f,-0.21756f,0f,0.20427f,-0.21546f,0f});
  }
}
protected class MFVec3f1122 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.31623f,0.94868f,0f,0.27229f,0.96222f,0f,0.24254f,0.97014f,0f,0.24254f,0.97014f,0f,0.27229f,0.96222f,0f,0.31623f,0.94868f,0f});
  }
}
protected class MFInt321123 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f1124 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.21805f,-0.21939f,0.07f,0.22167f,-0.22044f,0.07f,0.2252f,-0.22176f,0.07f,0.22861f,-0.22338f,0.07f,0.23183f,-0.2253f,0.07f,0.23183f,-0.2253f,0f,0.22861f,-0.22338f,0f,0.2252f,-0.22176f,0f,0.22167f,-0.22044f,0f,0.21805f,-0.21939f,0f});
  }
}
protected class MFVec3f1125 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24253f,0.97014f,0f,0.31323f,0.94968f,0f,0.3887f,0.92136f,0f,0.46933f,0.88302f,0f,0.5547f,0.83205f,0f,0.5547f,0.83205f,0f,0.46933f,0.88302f,0f,0.3887f,0.92136f,0f,0.31323f,0.94968f,0f,0.24253f,0.97014f,0f});
  }
}
protected class MFInt321126 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,9,-1,9,1,8,-1,8,1,2,-1,7,2,3,-1,6,3,4,-1,5,6,4,-1,8,2,7,-1,7,3,6,-1});
  }
}
protected class MFVec3f1127 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.23183f,-0.2253f,0.07f,0.2347f,-0.22843f,0.07f,0.2373f,-0.23179f,0.07f,0.23963f,-0.23536f,0.07f,0.24168f,-0.23908f,0.07f,0.24168f,-0.23908f,0f,0.23963f,-0.23536f,0f,0.2373f,-0.23179f,0f,0.2347f,-0.22843f,0f,0.23183f,-0.2253f,0f});
  }
}
protected class MFVec3f1128 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.76513f,0.64387f,0f,0.81495f,0.57953f,0f,0.85773f,0.5141f,0f,0.89443f,0.44721f,0f,0.89443f,0.44721f,0f,0.85773f,0.5141f,0f,0.81495f,0.57953f,0f,0.76513f,0.64387f,0f,0.70711f,0.70711f,0f});
  }
}
protected class MFInt321129 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,15,-1,15,1,14,-1,14,1,2,-1,13,2,3,-1,12,3,4,-1,11,4,5,-1,10,5,6,-1,9,6,7,-1,8,9,7,-1,14,2,13,-1,13,3,12,-1,12,4,11,-1,11,5,10,-1,10,6,9,-1});
  }
}
protected class MFVec3f1130 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24168f,-0.23908f,0.07f,0.24227f,-0.24004f,0.07f,0.24281f,-0.24104f,0.07f,0.24371f,-0.24312f,0.07f,0.2444f,-0.2453f,0.07f,0.2449f,-0.24756f,0.07f,0.24547f,-0.25219f,0.07f,0.24561f,-0.2568f,0.07f,0.24561f,-0.2568f,0f,0.24547f,-0.25219f,0f,0.2449f,-0.24756f,0f,0.2444f,-0.2453f,0f,0.24371f,-0.24312f,0f,0.24281f,-0.24104f,0f,0.24227f,-0.24004f,0f,0.24168f,-0.23908f,0f});
  }
}
protected class MFVec3f1131 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.83205f,0.5547f,0f,0.86597f,0.5001f,0f,0.89465f,0.44677f,0f,0.93799f,0.34667f,0f,0.96612f,0.25811f,0f,0.98322f,0.18244f,0f,0.99763f,0.06877f,0f,1f,0f,0f,1f,0f,0f,0.99763f,0.06877f,0f,0.98322f,0.18244f,0f,0.96612f,0.25811f,0f,0.93799f,0.34667f,0f,0.89465f,0.44677f,0f,0.86597f,0.5001f,0f,0.83205f,0.5547f,0f});
  }
}
protected class MFInt321132 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,21,-1,21,1,20,-1,20,1,2,-1,19,2,3,-1,18,3,4,-1,17,4,5,-1,16,5,6,-1,15,6,7,-1,14,7,8,-1,13,8,9,-1,12,9,10,-1,11,12,10,-1,20,2,19,-1,19,3,18,-1,18,4,17,-1,17,5,16,-1,16,6,15,-1,15,7,14,-1,14,8,13,-1,13,9,12,-1});
  }
}
protected class MFVec3f1133 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.24561f,-0.2568f,0.07f,0.24552f,-0.25917f,0.07f,0.24526f,-0.26154f,0.07f,0.24483f,-0.26391f,0.07f,0.24425f,-0.26627f,0.07f,0.24263f,-0.27089f,0.07f,0.24049f,-0.27536f,0.07f,0.23788f,-0.2796f,0.07f,0.23487f,-0.28354f,0.07f,0.23152f,-0.28712f,0.07f,0.22789f,-0.29027f,0.07f,0.22789f,-0.29027f,0f,0.23152f,-0.28712f,0f,0.23487f,-0.28354f,0f,0.23788f,-0.2796f,0f,0.24049f,-0.27536f,0f,0.24263f,-0.27089f,0f,0.24425f,-0.26627f,0f,0.24483f,-0.26391f,0f,0.24526f,-0.26154f,0f,0.24552f,-0.25917f,0f,0.24561f,-0.2568f,0f});
  }
}
protected class MFVec3f1134 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0.99721f,-0.07465f,0f,0.98945f,-0.14485f,0f,0.97758f,-0.21056f,0f,0.96232f,-0.27191f,0f,0.92389f,-0.38266f,0f,0.8773f,-0.47993f,0f,0.82386f,-0.5668f,0f,0.76334f,-0.646f,0f,0.69427f,-0.71972f,0f,0.61394f,-0.78935f,0f,0.61394f,-0.78935f,0f,0.69427f,-0.71972f,0f,0.76334f,-0.646f,0f,0.82386f,-0.5668f,0f,0.8773f,-0.47993f,0f,0.92389f,-0.38266f,0f,0.96232f,-0.27191f,0f,0.97758f,-0.21056f,0f,0.98945f,-0.14485f,0f,0.99721f,-0.07465f,0f,1f,0f,0f});
  }
}
protected class MFInt321135 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,17,-1,17,1,16,-1,16,1,2,-1,15,2,3,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,2,15,-1,15,3,14,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,11,7,10,-1});
  }
}
protected class MFVec3f1136 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.22789f,-0.29027f,0.07f,0.22318f,-0.29399f,0.07f,0.21803f,-0.29721f,0.07f,0.21253f,-0.29992f,0.07f,0.20677f,-0.30213f,0.07f,0.20081f,-0.30383f,0.07f,0.19475f,-0.30505f,0.07f,0.18866f,-0.30578f,0.07f,0.18261f,-0.30602f,0.07f,0.18261f,-0.30602f,0f,0.18866f,-0.30578f,0f,0.19475f,-0.30505f,0f,0.20081f,-0.30383f,0f,0.20677f,-0.30213f,0f,0.21253f,-0.29992f,0f,0.21803f,-0.29721f,0f,0.22318f,-0.29399f,0f,0.22789f,-0.29027f,0f});
  }
}
protected class MFVec3f1137 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.66436f,-0.74741f,0f,0.5742f,-0.81872f,0f,0.48534f,-0.87432f,0f,0.39926f,-0.91684f,0f,0.31628f,-0.94867f,0f,0.23596f,-0.97176f,0f,0.15736f,-0.98754f,0f,0.07921f,-0.99686f,0f,0f,-1f,0f,0f,-1f,0f,0.07921f,-0.99686f,0f,0.15736f,-0.98754f,0f,0.23596f,-0.97176f,0f,0.31628f,-0.94867f,0f,0.39926f,-0.91684f,0f,0.48534f,-0.87432f,0f,0.5742f,-0.81872f,0f,0.66436f,-0.74741f,0f});
  }
}
protected class MFInt321138 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {299,0,8,-1,298,8,9,-1,297,9,10,-1,296,10,230,-1,231,296,230,-1,231,232,296,-1,296,232,233,-1,234,296,233,-1,234,235,296,-1,296,235,236,-1,241,236,240,-1,241,296,236,-1,241,242,296,-1,296,242,243,-1,244,296,243,-1,244,245,296,-1,296,245,246,-1,295,246,247,-1,248,295,247,-1,248,294,295,-1,248,249,294,-1,294,249,293,-1,293,249,270,-1,271,293,270,-1,271,292,293,-1,271,290,292,-1,271,289,290,-1,271,272,289,-1,289,272,288,-1,288,272,273,-1,274,288,273,-1,274,275,288,-1,288,275,287,-1,287,275,280,-1,286,280,285,-1,286,287,280,-1,2,7,1,-1,2,6,7,-1,2,3,6,-1,6,3,5,-1,5,3,4,-1,7,8,1,-1,1,8,0,-1,299,8,298,-1,298,9,297,-1,11,225,10,-1,11,224,225,-1,11,223,224,-1,11,222,223,-1,11,12,222,-1,222,12,221,-1,221,12,220,-1,220,12,219,-1,219,12,218,-1,218,12,13,-1,217,13,216,-1,217,218,13,-1,13,14,216,-1,216,14,215,-1,215,14,214,-1,214,14,213,-1,213,14,15,-1,212,15,211,-1,212,213,15,-1,15,16,211,-1,211,16,210,-1,210,16,209,-1,209,16,17,-1,208,17,207,-1,208,209,17,-1,207,17,206,-1,206,17,18,-1,205,18,19,-1,204,19,20,-1,203,20,21,-1,202,21,22,-1,201,22,23,-1,200,23,199,-1,200,201,23,-1,206,18,205,-1,205,19,204,-1,204,20,203,-1,203,21,202,-1,202,22,201,-1,23,24,199,-1,199,24,25,-1,198,25,26,-1,197,26,27,-1,28,197,27,-1,28,29,197,-1,197,29,196,-1,196,29,30,-1,195,30,194,-1,195,196,30,-1,199,25,198,-1,198,26,197,-1,30,31,194,-1,194,31,193,-1,193,31,192,-1,192,31,191,-1,191,31,190,-1,190,31,32,-1,189,32,188,-1,189,190,32,-1,33,185,32,-1,33,184,185,-1,33,183,184,-1,33,182,183,-1,33,181,182,-1,33,34,181,-1,181,34,180,-1,180,34,35,-1,179,35,36,-1,37,179,36,-1,37,38,179,-1,179,38,39,-1,40,179,39,-1,40,178,179,-1,40,41,178,-1,178,41,177,-1,177,41,42,-1,176,42,175,-1,176,177,42,-1,180,35,179,-1,43,173,42,-1,43,172,173,-1,43,44,172,-1,172,44,171,-1,171,44,170,-1,170,44,45,-1,169,45,168,-1,169,170,45,-1,45,46,168,-1,168,46,167,-1,167,46,166,-1,166,46,47,-1,165,47,164,-1,165,166,47,-1,164,47,163,-1,163,47,48,-1,162,48,49,-1,161,49,50,-1,160,50,51,-1,52,160,51,-1,52,159,160,-1,52,53,159,-1,159,53,158,-1,158,53,54,-1,157,54,55,-1,156,55,56,-1,155,56,57,-1,58,155,57,-1,58,154,155,-1,58,59,154,-1,154,59,60,-1,153,60,61,-1,152,61,62,-1,63,152,62,-1,63,64,152,-1,152,64,65,-1,66,152,65,-1,66,67,152,-1,152,67,68,-1,151,68,69,-1,150,69,149,-1,150,151,69,-1,163,48,162,-1,162,49,161,-1,161,50,160,-1,158,54,157,-1,157,55,156,-1,156,56,155,-1,154,60,153,-1,153,61,152,-1,152,68,151,-1,69,70,149,-1,149,70,148,-1,148,70,71,-1,147,71,146,-1,147,148,71,-1,71,72,146,-1,146,72,145,-1,145,72,144,-1,144,72,73,-1,143,73,74,-1,142,74,75,-1,141,75,140,-1,141,142,75,-1,144,73,143,-1,143,74,142,-1,75,76,140,-1,140,76,139,-1,139,76,77,-1,78,139,77,-1,78,79,139,-1,139,79,80,-1,81,139,80,-1,81,138,139,-1,81,137,138,-1,81,136,137,-1,81,135,136,-1,81,134,135,-1,81,133,134,-1,81,132,133,-1,81,131,132,-1,81,130,131,-1,81,129,130,-1,81,128,129,-1,81,127,128,-1,81,126,127,-1});
  }
}
protected class MFInt321139 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {81,125,126,-1,81,82,125,-1,125,82,124,-1,124,82,83,-1,123,83,103,-1,104,123,103,-1,104,122,123,-1,104,105,122,-1,122,105,106,-1,121,106,120,-1,121,122,106,-1,84,85,83,-1,83,85,102,-1,103,83,102,-1,85,86,102,-1,102,86,87,-1,101,87,88,-1,100,88,89,-1,99,89,98,-1,99,100,89,-1,102,87,101,-1,101,88,100,-1,89,90,98,-1,98,90,91,-1,92,98,91,-1,92,97,98,-1,92,93,97,-1,97,93,96,-1,96,93,94,-1,95,96,94,-1,120,106,119,-1,119,106,107,-1,118,107,117,-1,118,119,107,-1,108,109,107,-1,107,109,110,-1,117,110,111,-1,112,117,111,-1,112,113,117,-1,117,113,114,-1,116,114,115,-1,116,117,114,-1,107,110,117,-1,123,124,83,-1,173,174,42,-1,42,174,175,-1,185,186,32,-1,32,186,187,-1,188,32,187,-1,225,226,10,-1,10,226,227,-1,228,10,227,-1,228,229,10,-1,10,229,230,-1,240,236,239,-1,239,236,237,-1,238,239,237,-1,296,246,295,-1,270,249,269,-1,269,249,250,-1,268,250,267,-1,268,269,250,-1,267,250,266,-1,266,250,251,-1,265,251,264,-1,265,266,251,-1,252,262,251,-1,252,261,262,-1,252,253,261,-1,261,253,260,-1,260,253,259,-1,259,253,258,-1,258,253,257,-1,257,253,256,-1,256,253,254,-1,255,256,254,-1,262,263,251,-1,251,263,264,-1,275,276,280,-1,280,276,277,-1,278,280,277,-1,278,279,280,-1,281,282,280,-1,280,282,283,-1,284,280,283,-1,284,285,280,-1,290,291,292,-1,296,297,10,-1});
  }
}
protected class MFVec3f1140 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.16293f,-0.30208f,0.07f,0.16768f,-0.30375f,0.07f,0.17259f,-0.30498f,0.07f,0.17759f,-0.30575f,0.07f,0.18261f,-0.30602f,0.07f,0.18866f,-0.30578f,0.07f,0.19475f,-0.30505f,0.07f,0.20081f,-0.30383f,0.07f,0.20677f,-0.30213f,0.07f,0.21253f,-0.29992f,0.07f,0.21803f,-0.29721f,0.07f,0.22318f,-0.29399f,0.07f,0.22789f,-0.29027f,0.07f,0.23152f,-0.28712f,0.07f,0.23487f,-0.28354f,0.07f,0.23788f,-0.2796f,0.07f,0.24049f,-0.27536f,0.07f,0.24263f,-0.27089f,0.07f,0.24425f,-0.26627f,0.07f,0.24483f,-0.26391f,0.07f,0.24526f,-0.26154f,0.07f,0.24552f,-0.25917f,0.07f,0.24561f,-0.2568f,0.07f,0.24547f,-0.25219f,0.07f,0.2449f,-0.24756f,0.07f,0.2444f,-0.2453f,0.07f,0.24371f,-0.24312f,0.07f,0.24281f,-0.24104f,0.07f,0.24227f,-0.24004f,0.07f,0.24168f,-0.23908f,0.07f,0.23963f,-0.23536f,0.07f,0.2373f,-0.23179f,0.07f,0.2347f,-0.22843f,0.07f,0.23183f,-0.2253f,0.07f,0.22861f,-0.22338f,0.07f,0.2252f,-0.22176f,0.07f,0.22167f,-0.22044f,0.07f,0.21805f,-0.21939f,0.07f,0.21112f,-0.21756f,0.07f,0.20427f,-0.21546f,0.07f,0.20427f,-0.21349f,0.07f,0.21333f,-0.21112f,0.07f,0.21773f,-0.20951f,0.07f,0.22199f,-0.20758f,0.07f,0.22479f,-0.2055f,0.07f,0.22739f,-0.20314f,0.07f,0.22975f,-0.20054f,0.07f,0.23183f,-0.19774f,0.07f,0.23518f,-0.19202f,0.07f,0.23657f,-0.18902f,0.07f,0.23774f,-0.18592f,0.07f,0.23912f,-0.18107f,0.07f,0.23955f,-0.17858f,0.07f,0.23971f,-0.17608f,0.07f,0.23958f,-0.17308f,0.07f,0.2392f,-0.1701f,0.07f,0.23858f,-0.16715f,0.07f,0.23774f,-0.16427f,0.07f,0.23711f,-0.16261f,0.07f,0.23635f,-0.161f,0.07f,0.23547f,-0.15944f,0.07f,0.23449f,-0.15793f,0.07f,0.2323f,-0.15508f,0.07f,0.22986f,-0.15246f,0.07f,0.22817f,-0.15087f,0.07f,0.22636f,-0.14939f,0.07f,0.2225f,-0.14675f,0.07f,0.21838f,-0.1445f,0.07f,0.21411f,-0.14261f,0.07f,0.21177f,-0.14107f,0.07f,0.20926f,-0.1398f,0.07f,0.2066f,-0.13877f,0.07f,0.20385f,-0.13798f,0.07f,0.20102f,-0.13739f,0.07f,0.19816f,-0.137f,0.07f,0.19246f,-0.13671f,0.07f,0.18644f,-0.1369f,0.07f,0.18043f,-0.13756f,0.07f,0.17453f,-0.13878f,0.07f,0.17165f,-0.13962f,0.07f,0.16883f,-0.14064f,0.07f,0.16074f,-0.14521f,0.07f,0.15308f,-0.15049f,0.07f,0.14787f,-0.15615f,0.07f,0.14324f,-0.1623f,0.07f,0.1424f,-0.16518f,0.07f,0.14178f,-0.16813f,0.07f,0.1414f,-0.17112f,0.07f,0.14127f,-0.17411f,0.07f,0.14137f,-0.17664f,0.07f,0.14169f,-0.17917f,0.07f,0.14196f,-0.18041f,0.07f,0.1423f,-0.18163f,0.07f,0.14272f,-0.18281f,0.07f,0.14324f,-0.18396f,0.07f,0.14383f,-0.18488f,0.07f,0.14461f,-0.18568f,0.07f,0.14553f,-0.18636f,0.07f,0.14657f,-0.18691f,0.07f,0.14768f,-0.18734f,0.07f,0.14883f,-0.18765f,0.07f,0.14999f,-0.18783f,0.07f,0.15111f,-0.18789f,0.07f,0.15414f,-0.18784f,0.07f,0.15718f,-0.18758f,0.07f,0.15867f,-0.18733f,0.07f,0.16014f,-0.18699f,0.07f,0.16156f,-0.18652f,0.07f,0.16293f,-0.18592f,0.07f,0.16369f,-0.18511f,0.07f,0.16442f,-0.18423f,0.07f,0.16508f,-0.1833f,0.07f,0.16567f,-0.18231f,0.07f,0.16616f,-0.18128f,0.07f,0.16654f,-0.18023f,0.07f,0.16678f,-0.17915f,0.07f,0.16686f,-0.17805f,0.07f,0.16677f,-0.17552f,0.07f,0.16644f,-0.173f,0.07f,0.16618f,-0.17175f,0.07f,0.16583f,-0.17054f,0.07f,0.16541f,-0.16935f,0.07f,0.16489f,-0.16821f,0.07f,0.16351f,-0.16335f,0.07f,0.16308f,-0.16087f,0.07f,0.16293f,-0.15836f,0.07f,0.16391f,-0.15738f,0.07f,0.16489f,-0.15639f,0.07f,0.16623f,-0.15522f,0.07f,0.16768f,-0.15419f,0.07f,0.1708f,-0.15246f,0.07f,0.17213f,-0.15128f,0.07f,0.17359f,-0.15026f,0.07f,0.17671f,-0.14852f,0.07f,0.17785f,-0.148f,0.07f,0.17904f,-0.14758f,0.07f,0.18025f,-0.14724f,0.07f,0.1815f,-0.14697f,0.07f,0.18402f,-0.14665f,0.07f,0.18655f,-0.14655f,0.07f,0.18925f,-0.14666f,0.07f,0.19201f,-0.14699f,0.07f,0.19477f,-0.14755f,0.07f,0.19746f,-0.14837f,0.07f,0.20001f,-0.14945f,0.07f,0.20122f,-0.15009f,0.07f,0.20237f,-0.15081f,0.07f,0.20345f,-0.1516f,0.07f,0.20446f,-0.15246f,0.07f,0.2054f,-0.1534f,0.07f,0.20624f,-0.15442f,0.07f,0.20722f,-0.15548f,0.07f,0.20814f,-0.1566f,0.07f,0.20976f,-0.15902f,0.07f,0.21112f,-0.16164f,0.07f,0.21221f,-0.16441f,0.07f,0.21305f,-0.16729f,0.07f,0.21365f,-0.17022f,0.07f,0.214f,-0.17317f,0.07f,0.21411f,-0.17608f,0.07f,0.21377f,-0.18296f,0.07f,0.21329f,-0.18644f,0.07f,0.21254f,-0.18986f,0.07f,0.2115f,-0.19316f,0.07f,0.21013f,-0.19627f,0.07f,0.20931f,-0.19773f,0.07f,0.20839f,-0.19913f,0.07f,0.20737f,-0.20045f,0.07f,0.20624f,-0.20167f,0.07f,0.20518f,-0.20266f,0.07f,0.20406f,-0.20357f,0.07f,0.20164f,-0.2052f,0.07f,0.19902f,-0.20655f,0.07f,0.19625f,-0.20765f,0.07f,0.19338f,-0.20849f,0.07f,0.19044f,-0.20908f,0.07f,0.1875f,-0.20943f,0.07f,0.18458f,-0.20955f,0.07f,0.17474f,-0.20955f,0.07f,0.17474f,-0.22333f,0.07f,0.18852f,-0.22333f,0.07f,0.19263f,-0.22352f,0.07f,0.19469f,-0.22379f,0.07f,0.19674f,-0.22417f,0.07f,0.19873f,-0.2247f,0.07f,0.20067f,-0.22539f,0.07f,0.20252f,-0.22624f,0.07f,0.20427f,-0.22727f,0.07f,0.20544f,-0.2277f,0.07f,0.20661f,-0.22822f,0.07f,0.20774f,-0.22882f,0.07f,0.20882f,-0.22951f,0.07f,0.20983f,-0.23029f,0.07f,0.21073f,-0.23116f,0.07f,0.21151f,-0.23212f,0.07f,0.21214f,-0.23317f,0.07f,0.21549f,-0.23889f,0.07f,0.21688f,-0.24189f,0.07f,0.21805f,-0.24499f,0.07f,0.21889f,-0.24787f,0.07f,0.21951f,-0.25082f,0.07f,0.21989f,-0.2538f,0.07f,0.22002f,-0.2568f,0.07f,0.21983f,-0.26091f,0.07f,0.21957f,-0.26297f,0.07f,0.21918f,-0.26502f,0.07f,0.21865f,-0.26701f,0.07f,0.21796f,-0.26895f,0.07f,0.21711f,-0.2708f,0.07f,0.21608f,-0.27255f,0.07f,0.21553f,-0.27446f,0.07f,0.21484f,-0.27634f,0.07f,0.21401f,-0.27818f,0.07f,0.21307f,-0.27996f,0.07f,0.212f,-0.28168f,0.07f,0.21084f,-0.28332f,0.07f,0.20957f,-0.28488f,0.07f,0.20821f,-0.28633f,0.07f,0.20698f,-0.28743f,0.07f,0.20565f,-0.28842f,0.07f,0.20423f,-0.28929f,0.07f,0.20274f,-0.29005f,0.07f,0.1996f,-0.2913f,0.07f,0.19639f,-0.29224f,0.07f,0.19368f,-0.29382f,0.07f,0.19223f,-0.2945f,0.07f,0.19075f,-0.29507f,0.07f,0.18923f,-0.29554f,0.07f,0.18769f,-0.29588f,0.07f,0.18614f,-0.2961f,0.07f,0.18458f,-0.29618f,0.07f,0.18155f,-0.29612f,0.07f,0.17852f,-0.29586f,0.07f,0.17702f,-0.29561f,0.07f,0.17556f,-0.29527f,0.07f,0.17414f,-0.2948f,0.07f,0.17277f,-0.29421f,0.07f,0.1709f,-0.29339f,0.07f,0.16894f,-0.29277f,0.07f,0.16693f,-0.29237f,0.07f,0.16591f,-0.29227f,0.07f,0.16489f,-0.29224f,0.07f,0.16178f,-0.2905f,0.07f,0.16032f,-0.28947f,0.07f,0.15899f,-0.2883f,0.07f,0.158f,-0.28732f,0.07f,0.15702f,-0.28633f,0.07f,0.15705f,-0.28532f,0.07f,0.15716f,-0.2843f,0.07f,0.15755f,-0.28229f,0.07f,0.15817f,-0.28033f,0.07f,0.15899f,-0.27846f,0.07f,0.16037f,-0.2736f,0.07f,0.1608f,-0.27112f,0.07f,0.16096f,-0.26861f,0.07f,0.16087f,-0.26772f,0.07f,0.16064f,-0.26684f,0.07f,0.16027f,-0.26598f,0.07f,0.15978f,-0.26517f,0.07f,0.1592f,-0.26442f,0.07f,0.15853f,-0.26374f,0.07f,0.1578f,-0.26317f,0.07f,0.15702f,-0.26271f,0.07f,0.15645f,-0.26218f,0.07f,0.15584f,-0.26169f,0.07f,0.1552f,-0.26125f,0.07f,0.15452f,-0.26085f,0.07f,0.15309f,-0.26017f,0.07f,0.15157f,-0.25964f,0.07f,0.14999f,-0.25924f,0.07f,0.14839f,-0.25897f,0.07f,0.14679f,-0.25882f,0.07f,0.14521f,-0.25877f,0.07f,0.14397f,-0.25889f,0.07f,0.14274f,-0.25925f,0.07f,0.14155f,-0.25982f,0.07f,0.14043f,-0.26055f,0.07f,0.13941f,-0.26144f,0.07f,0.13854f,-0.26244f,0.07f,0.13783f,-0.26353f,0.07f});
  }
}
protected class MFVec3f1141 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.13733f,-0.26467f,0.07f,0.1367f,-0.26545f,0.07f,0.13622f,-0.26633f,0.07f,0.13587f,-0.26729f,0.07f,0.13563f,-0.26832f,0.07f,0.13548f,-0.26937f,0.07f,0.1354f,-0.27045f,0.07f,0.13536f,-0.27255f,0.07f,0.13549f,-0.27555f,0.07f,0.13587f,-0.27853f,0.07f,0.13649f,-0.28148f,0.07f,0.13733f,-0.28436f,0.07f,0.13941f,-0.28717f,0.07f,0.14177f,-0.28977f,0.07f,0.14437f,-0.29213f,0.07f,0.14718f,-0.29421f,0.07f,0.15082f,-0.29672f,0.07f,0.15468f,-0.29893f,0.07f,0.15872f,-0.30075f,0.07f,0.16081f,-0.30148f,0.07f});
  }
}
protected class MFVec3f1142 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3f1143 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt321144 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,28,0,-1,1,2,28,-1,28,2,3,-1,4,28,3,-1,4,5,28,-1,28,5,6,-1,7,28,6,-1,7,8,28,-1,28,8,9,-1,10,28,9,-1,10,11,28,-1,28,11,12,-1,13,28,12,-1,13,14,28,-1,28,14,15,-1,16,28,15,-1,16,17,28,-1,28,17,18,-1,19,28,18,-1,19,20,28,-1,28,20,21,-1,27,21,22,-1,26,22,23,-1,25,23,24,-1,25,26,23,-1,28,21,27,-1,27,22,26,-1,28,29,0,-1,0,29,30,-1,57,30,31,-1,56,31,32,-1,55,32,49,-1,54,49,53,-1,54,55,49,-1,0,30,57,-1,57,31,56,-1,33,47,32,-1,33,46,47,-1,33,45,46,-1,33,44,45,-1,33,43,44,-1,33,42,43,-1,33,41,42,-1,33,40,41,-1,33,34,40,-1,40,34,35,-1,36,40,35,-1,36,37,40,-1,40,37,39,-1,39,37,38,-1,47,48,32,-1,32,48,49,-1,49,50,53,-1,53,50,51,-1,52,53,51,-1,55,56,32,-1});
  }
}
protected class MFVec3f1145 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.60364f,0.03114f,0f,0.60947f,0.03937f,0f,0.6144f,0.04823f,0f,0.61845f,0.05755f,0f,0.62164f,0.06714f,0f,0.6246f,0.0781f,0f,0.62644f,0.08935f,0f,0.62764f,0.11214f,0f,0.62708f,0.12365f,0f,0.6254f,0.13511f,0f,0.62259f,0.14633f,0f,0.61864f,0.15714f,0f,0.61526f,0.16594f,0f,0.61109f,0.17443f,0f,0.6062f,0.18253f,0f,0.60064f,0.19014f,0f,0.59419f,0.19731f,0f,0.58694f,0.20375f,0f,0.57904f,0.20938f,0f,0.57064f,0.21414f,0f,0.56575f,0.21637f,0f,0.56069f,0.21825f,0f,0.55021f,0.22104f,0f,0.53945f,0.22264f,0f,0.52864f,0.22314f,0f,0.52483f,0.2229f,0f,0.52105f,0.22225f,0f,0.51364f,0.22014f,0f,0.50164f,0.22014f,0f,0.50164f,0.03114f,0f,0.50177f,0.02823f,0f,0.50216f,0.02524f,0f,0.50282f,0.02227f,0f,0.50377f,0.01937f,0f,0.50501f,0.01664f,0f,0.50575f,0.01535f,0f,0.50656f,0.01414f,0f,0.50746f,0.013f,0f,0.50844f,0.01195f,0f,0.5095f,0.01099f,0f,0.51064f,0.01014f,0f,0.51211f,0.00923f,0f,0.51363f,0.00842f,0f,0.5168f,0.00705f,0f,0.52013f,0.006f,0f,0.52356f,0.00523f,0f,0.53061f,0.00436f,0f,0.53764f,0.00414f,0f,0.54757f,0.00439f,0f,0.5575f,0.00531f,0f,0.56725f,0.00715f,0f,0.572f,0.00848f,0f,0.57664f,0.01014f,0f,0.5842f,0.01429f,0f,0.5914f,0.01914f,0f,0.59478f,0.02183f,0f,0.59797f,0.02473f,0f,0.60094f,0.02783f,0f});
  }
}
protected class MFVec3f1146 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt321147 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1});
  }
}
protected class MFVec3f1148 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.40463f,-0.19956f,0.05f,0.40553f,-0.19961f,0.05f,0.40642f,-0.19977f,0.05f,0.40729f,-0.20004f,0.05f,0.40811f,-0.20042f,0.05f,0.40889f,-0.20088f,0.05f,0.4096f,-0.20144f,0.05f,0.41024f,-0.20208f,0.05f,0.4108f,-0.2028f,0.05f,0.41127f,-0.20357f,0.05f,0.41164f,-0.2044f,0.05f,0.41191f,-0.20526f,0.05f,0.41207f,-0.20615f,0.05f,0.41213f,-0.20706f,0.05f,0.41207f,-0.20796f,0.05f,0.41191f,-0.20885f,0.05f,0.41164f,-0.20972f,0.05f,0.41127f,-0.21054f,0.05f,0.4108f,-0.21132f,0.05f,0.41024f,-0.21203f,0.05f,0.4096f,-0.21267f,0.05f,0.40889f,-0.21323f,0.05f,0.40811f,-0.2137f,0.05f,0.40729f,-0.21407f,0.05f,0.40642f,-0.21434f,0.05f,0.40553f,-0.2145f,0.05f,0.40463f,-0.21456f,0.05f,0.40463f,-0.21456f,0f,0.40553f,-0.2145f,0f,0.40642f,-0.21434f,0f,0.40729f,-0.21407f,0f,0.40811f,-0.2137f,0f,0.40889f,-0.21323f,0f,0.4096f,-0.21267f,0f,0.41024f,-0.21203f,0f,0.4108f,-0.21132f,0f,0.41127f,-0.21054f,0f,0.41164f,-0.20972f,0f,0.41191f,-0.20885f,0f,0.41207f,-0.20796f,0f,0.41213f,-0.20706f,0f,0.41207f,-0.20615f,0f,0.41191f,-0.20526f,0f,0.41164f,-0.2044f,0f,0.41127f,-0.20357f,0f,0.4108f,-0.2028f,0f,0.41024f,-0.20208f,0f,0.4096f,-0.20144f,0f,0.40889f,-0.20088f,0f,0.40811f,-0.20042f,0f,0.40729f,-0.20004f,0f,0.40642f,-0.19977f,0f,0.40553f,-0.19961f,0f,0.40463f,-0.19956f,0f});
  }
}
protected class MFVec3f1149 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.12054f,0.99271f,0f,0.23932f,0.97094f,0f,0.3546f,0.93502f,0f,0.46472f,0.88546f,0f,0.56806f,0.82298f,0f,0.66312f,0.74851f,0f,0.74851f,0.66312f,0f,0.82298f,0.56806f,0f,0.88546f,0.46472f,0f,0.93502f,0.3546f,0f,0.97094f,0.23932f,0f,0.99271f,0.12054f,0f,1f,0f,0f,0.99271f,-0.12054f,0f,0.97094f,-0.23932f,0f,0.93502f,-0.3546f,0f,0.88546f,-0.46472f,0f,0.82298f,-0.56806f,0f,0.74851f,-0.66312f,0f,0.66312f,-0.74851f,0f,0.56806f,-0.82298f,0f,0.46472f,-0.88546f,0f,0.3546f,-0.93502f,0f,0.23932f,-0.97094f,0f,0.12054f,-0.99271f,0f,0f,-1f,0f,0f,-1f,0f,0.12054f,-0.99271f,0f,0.23932f,-0.97094f,0f,0.3546f,-0.93502f,0f,0.46472f,-0.88546f,0f,0.56806f,-0.82298f,0f,0.66312f,-0.74851f,0f,0.74851f,-0.66312f,0f,0.82298f,-0.56806f,0f,0.88546f,-0.46472f,0f,0.93502f,-0.3546f,0f,0.97094f,-0.23932f,0f,0.99271f,-0.12054f,0f,1f,0f,0f,0.99271f,0.12054f,0f,0.97094f,0.23932f,0f,0.93502f,0.3546f,0f,0.88546f,0.46472f,0f,0.82298f,0.56806f,0f,0.74851f,0.66312f,0f,0.66312f,0.74851f,0f,0.56806f,0.82298f,0f,0.46472f,0.88546f,0f,0.3546f,0.93502f,0f,0.23932f,0.97094f,0f,0.12054f,0.99271f,0f,0f,1f,0f});
  }
}
protected class MFInt321150 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1151 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.40463f,-0.21456f,0.05f,0.28941f,-0.21456f,0.05f,0.28941f,-0.21456f,0f,0.40463f,-0.21456f,0f});
  }
}
protected class MFVec3f1152 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321153 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1});
  }
}
protected class MFVec3f1154 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.28941f,-0.21456f,0.05f,0.28851f,-0.2145f,0.05f,0.28762f,-0.21434f,0.05f,0.28675f,-0.21407f,0.05f,0.28593f,-0.2137f,0.05f,0.28515f,-0.21323f,0.05f,0.28444f,-0.21267f,0.05f,0.2838f,-0.21203f,0.05f,0.28324f,-0.21132f,0.05f,0.28277f,-0.21054f,0.05f,0.2824f,-0.20972f,0.05f,0.28213f,-0.20885f,0.05f,0.28197f,-0.20796f,0.05f,0.28191f,-0.20706f,0.05f,0.28197f,-0.20615f,0.05f,0.28213f,-0.20526f,0.05f,0.2824f,-0.2044f,0.05f,0.28277f,-0.20357f,0.05f,0.28324f,-0.2028f,0.05f,0.2838f,-0.20208f,0.05f,0.28444f,-0.20144f,0.05f,0.28515f,-0.20088f,0.05f,0.28593f,-0.20042f,0.05f,0.28675f,-0.20004f,0.05f,0.28762f,-0.19977f,0.05f,0.28851f,-0.19961f,0.05f,0.28941f,-0.19956f,0.05f,0.28941f,-0.19956f,0f,0.28851f,-0.19961f,0f,0.28762f,-0.19977f,0f,0.28675f,-0.20004f,0f,0.28593f,-0.20042f,0f,0.28515f,-0.20088f,0f,0.28444f,-0.20144f,0f,0.2838f,-0.20208f,0f,0.28324f,-0.2028f,0f,0.28277f,-0.20357f,0f,0.2824f,-0.2044f,0f,0.28213f,-0.20526f,0f,0.28197f,-0.20615f,0f,0.28191f,-0.20706f,0f,0.28197f,-0.20796f,0f,0.28213f,-0.20885f,0f,0.2824f,-0.20972f,0f,0.28277f,-0.21054f,0f,0.28324f,-0.21132f,0f,0.2838f,-0.21203f,0f,0.28444f,-0.21267f,0f,0.28515f,-0.21323f,0f,0.28593f,-0.2137f,0f,0.28675f,-0.21407f,0f,0.28762f,-0.21434f,0f,0.28851f,-0.2145f,0f,0.28941f,-0.21456f,0f});
  }
}
protected class MFVec3f1155 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.12054f,-0.99271f,0f,-0.23932f,-0.97094f,0f,-0.3546f,-0.93502f,0f,-0.46472f,-0.88546f,0f,-0.56806f,-0.82298f,0f,-0.66312f,-0.74851f,0f,-0.74851f,-0.66312f,0f,-0.82298f,-0.56806f,0f,-0.88546f,-0.46472f,0f,-0.93502f,-0.3546f,0f,-0.97094f,-0.23932f,0f,-0.99271f,-0.12054f,0f,-1f,0f,0f,-0.99271f,0.12054f,0f,-0.97094f,0.23932f,0f,-0.93502f,0.3546f,0f,-0.88546f,0.46472f,0f,-0.82298f,0.56806f,0f,-0.74851f,0.66312f,0f,-0.66312f,0.74851f,0f,-0.56806f,0.82298f,0f,-0.46472f,0.88546f,0f,-0.3546f,0.93502f,0f,-0.23932f,0.97094f,0f,-0.12054f,0.99271f,0f,0f,1f,0f,0f,1f,0f,-0.12054f,0.99271f,0f,-0.23932f,0.97094f,0f,-0.3546f,0.93502f,0f,-0.46472f,0.88546f,0f,-0.56806f,0.82298f,0f,-0.66312f,0.74851f,0f,-0.74851f,0.66312f,0f,-0.82298f,0.56806f,0f,-0.88546f,0.46472f,0f,-0.93502f,0.3546f,0f,-0.97094f,0.23932f,0f,-0.99271f,0.12054f,0f,-1f,0f,0f,-0.99271f,-0.12054f,0f,-0.97094f,-0.23932f,0f,-0.93502f,-0.3546f,0f,-0.88546f,-0.46472f,0f,-0.82298f,-0.56806f,0f,-0.74851f,-0.66312f,0f,-0.66312f,-0.74851f,0f,-0.56806f,-0.82298f,0f,-0.46472f,-0.88546f,0f,-0.3546f,-0.93502f,0f,-0.23932f,-0.97094f,0f,-0.12054f,-0.99271f,0f,0f,-1f,0f});
  }
}
protected class MFInt321156 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1157 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.28941f,-0.19956f,0.05f,0.40463f,-0.19956f,0.05f,0.40463f,-0.19956f,0f,0.28941f,-0.19956f,0f});
  }
}
protected class MFVec3f1158 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321159 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,47,6,46,-1,47,0,6,-1,47,53,0,-1,47,48,53,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,51,52,-1,6,7,46,-1,46,7,45,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,11,43,10,-1,11,42,43,-1,11,41,42,-1,11,12,41,-1,41,12,13,-1,40,13,39,-1,40,41,13,-1,45,8,44,-1,44,9,43,-1,13,14,39,-1,39,14,15,-1,38,15,37,-1,38,39,15,-1,15,16,37,-1,37,16,17,-1,36,17,35,-1,36,37,17,-1,17,18,35,-1,35,18,34,-1,34,18,19,-1,33,19,20,-1,27,20,26,-1,27,33,20,-1,27,32,33,-1,27,31,32,-1,27,30,31,-1,27,29,30,-1,27,28,29,-1,34,19,33,-1,20,21,26,-1,26,21,22,-1,23,26,22,-1,23,24,26,-1,26,24,25,-1});
  }
}
protected class MFVec3f1160 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.40463f,-0.21456f,0.05f,0.40553f,-0.2145f,0.05f,0.40642f,-0.21434f,0.05f,0.40729f,-0.21407f,0.05f,0.40811f,-0.2137f,0.05f,0.40889f,-0.21323f,0.05f,0.4096f,-0.21267f,0.05f,0.41024f,-0.21203f,0.05f,0.4108f,-0.21132f,0.05f,0.41127f,-0.21054f,0.05f,0.41164f,-0.20972f,0.05f,0.41191f,-0.20885f,0.05f,0.41207f,-0.20796f,0.05f,0.41213f,-0.20706f,0.05f,0.41207f,-0.20615f,0.05f,0.41191f,-0.20526f,0.05f,0.41164f,-0.2044f,0.05f,0.41127f,-0.20357f,0.05f,0.4108f,-0.2028f,0.05f,0.41024f,-0.20208f,0.05f,0.4096f,-0.20144f,0.05f,0.40889f,-0.20088f,0.05f,0.40811f,-0.20042f,0.05f,0.40729f,-0.20004f,0.05f,0.40642f,-0.19977f,0.05f,0.40553f,-0.19961f,0.05f,0.40463f,-0.19956f,0.05f,0.28941f,-0.19956f,0.05f,0.28851f,-0.19961f,0.05f,0.28762f,-0.19977f,0.05f,0.28675f,-0.20004f,0.05f,0.28593f,-0.20042f,0.05f,0.28515f,-0.20088f,0.05f,0.28444f,-0.20144f,0.05f,0.2838f,-0.20208f,0.05f,0.28324f,-0.2028f,0.05f,0.28277f,-0.20357f,0.05f,0.2824f,-0.2044f,0.05f,0.28213f,-0.20526f,0.05f,0.28197f,-0.20615f,0.05f,0.28191f,-0.20706f,0.05f,0.28197f,-0.20796f,0.05f,0.28213f,-0.20885f,0.05f,0.2824f,-0.20972f,0.05f,0.28277f,-0.21054f,0.05f,0.28324f,-0.21132f,0.05f,0.2838f,-0.21203f,0.05f,0.28444f,-0.21267f,0.05f,0.28515f,-0.21323f,0.05f,0.28593f,-0.2137f,0.05f,0.28675f,-0.21407f,0.05f,0.28762f,-0.21434f,0.05f,0.28851f,-0.2145f,0.05f,0.28941f,-0.21456f,0.05f});
  }
}
protected class MFVec3f1161 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt321162 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1});
  }
}
protected class MFVec3f1163 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.29537f,-0.19956f,0.05f,-0.29447f,-0.19961f,0.05f,-0.29358f,-0.19977f,0.05f,-0.29271f,-0.20004f,0.05f,-0.29189f,-0.20042f,0.05f,-0.29111f,-0.20088f,0.05f,-0.2904f,-0.20144f,0.05f,-0.28976f,-0.20208f,0.05f,-0.2892f,-0.2028f,0.05f,-0.28873f,-0.20357f,0.05f,-0.28836f,-0.2044f,0.05f,-0.28809f,-0.20526f,0.05f,-0.28793f,-0.20615f,0.05f,-0.28787f,-0.20706f,0.05f,-0.28793f,-0.20796f,0.05f,-0.28809f,-0.20885f,0.05f,-0.28836f,-0.20972f,0.05f,-0.28873f,-0.21054f,0.05f,-0.2892f,-0.21132f,0.05f,-0.28976f,-0.21203f,0.05f,-0.2904f,-0.21267f,0.05f,-0.29111f,-0.21323f,0.05f,-0.29189f,-0.2137f,0.05f,-0.29271f,-0.21407f,0.05f,-0.29358f,-0.21434f,0.05f,-0.29447f,-0.2145f,0.05f,-0.29537f,-0.21456f,0.05f,-0.29537f,-0.21456f,0f,-0.29447f,-0.2145f,0f,-0.29358f,-0.21434f,0f,-0.29271f,-0.21407f,0f,-0.29189f,-0.2137f,0f,-0.29111f,-0.21323f,0f,-0.2904f,-0.21267f,0f,-0.28976f,-0.21203f,0f,-0.2892f,-0.21132f,0f,-0.28873f,-0.21054f,0f,-0.28836f,-0.20972f,0f,-0.28809f,-0.20885f,0f,-0.28793f,-0.20796f,0f,-0.28787f,-0.20706f,0f,-0.28793f,-0.20615f,0f,-0.28809f,-0.20526f,0f,-0.28836f,-0.2044f,0f,-0.28873f,-0.20357f,0f,-0.2892f,-0.2028f,0f,-0.28976f,-0.20208f,0f,-0.2904f,-0.20144f,0f,-0.29111f,-0.20088f,0f,-0.29189f,-0.20042f,0f,-0.29271f,-0.20004f,0f,-0.29358f,-0.19977f,0f,-0.29447f,-0.19961f,0f,-0.29537f,-0.19956f,0f});
  }
}
protected class MFVec3f1164 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.12054f,0.99271f,0f,0.23932f,0.97094f,0f,0.3546f,0.93502f,0f,0.46472f,0.88546f,0f,0.56806f,0.82298f,0f,0.66312f,0.74851f,0f,0.74851f,0.66312f,0f,0.82298f,0.56806f,0f,0.88546f,0.46472f,0f,0.93502f,0.3546f,0f,0.97094f,0.23932f,0f,0.99271f,0.12054f,0f,1f,0f,0f,0.99271f,-0.12054f,0f,0.97094f,-0.23932f,0f,0.93502f,-0.3546f,0f,0.88546f,-0.46472f,0f,0.82298f,-0.56806f,0f,0.74851f,-0.66312f,0f,0.66312f,-0.74851f,0f,0.56806f,-0.82298f,0f,0.46472f,-0.88546f,0f,0.3546f,-0.93502f,0f,0.23932f,-0.97094f,0f,0.12054f,-0.99271f,0f,0f,-1f,0f,0f,-1f,0f,0.12054f,-0.99271f,0f,0.23932f,-0.97094f,0f,0.3546f,-0.93502f,0f,0.46472f,-0.88546f,0f,0.56806f,-0.82298f,0f,0.66312f,-0.74851f,0f,0.74851f,-0.66312f,0f,0.82298f,-0.56806f,0f,0.88546f,-0.46472f,0f,0.93502f,-0.3546f,0f,0.97094f,-0.23932f,0f,0.99271f,-0.12054f,0f,1f,0f,0f,0.99271f,0.12054f,0f,0.97094f,0.23932f,0f,0.93502f,0.3546f,0f,0.88546f,0.46472f,0f,0.82298f,0.56806f,0f,0.74851f,0.66312f,0f,0.66312f,0.74851f,0f,0.56806f,0.82298f,0f,0.46472f,0.88546f,0f,0.3546f,0.93502f,0f,0.23932f,0.97094f,0f,0.12054f,0.99271f,0f,0f,1f,0f});
  }
}
protected class MFInt321165 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1166 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.29537f,-0.21456f,0.05f,-0.41059f,-0.21456f,0.05f,-0.41059f,-0.21456f,0f,-0.29537f,-0.21456f,0f});
  }
}
protected class MFVec3f1167 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321168 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {53,0,52,-1,52,0,1,-1,51,1,2,-1,50,2,3,-1,49,3,4,-1,48,4,5,-1,47,5,6,-1,46,6,7,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,42,10,11,-1,41,11,12,-1,40,12,13,-1,39,13,14,-1,38,14,15,-1,37,15,16,-1,36,16,17,-1,35,17,18,-1,34,18,19,-1,33,19,20,-1,32,20,21,-1,31,21,22,-1,30,22,23,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,52,1,51,-1,51,2,50,-1,50,3,49,-1,49,4,48,-1,48,5,47,-1,47,6,46,-1,46,7,45,-1,45,8,44,-1,44,9,43,-1,43,10,42,-1,42,11,41,-1,41,12,40,-1,40,13,39,-1,39,14,38,-1,38,15,37,-1,37,16,36,-1,36,17,35,-1,35,18,34,-1,34,19,33,-1,33,20,32,-1,32,21,31,-1,31,22,30,-1,30,23,29,-1,29,24,28,-1});
  }
}
protected class MFVec3f1169 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.41059f,-0.21456f,0.05f,-0.41149f,-0.2145f,0.05f,-0.41238f,-0.21434f,0.05f,-0.41325f,-0.21407f,0.05f,-0.41407f,-0.2137f,0.05f,-0.41485f,-0.21323f,0.05f,-0.41556f,-0.21267f,0.05f,-0.4162f,-0.21203f,0.05f,-0.41676f,-0.21132f,0.05f,-0.41723f,-0.21054f,0.05f,-0.4176f,-0.20972f,0.05f,-0.41787f,-0.20885f,0.05f,-0.41803f,-0.20796f,0.05f,-0.41809f,-0.20706f,0.05f,-0.41803f,-0.20615f,0.05f,-0.41787f,-0.20526f,0.05f,-0.4176f,-0.2044f,0.05f,-0.41723f,-0.20357f,0.05f,-0.41676f,-0.2028f,0.05f,-0.4162f,-0.20208f,0.05f,-0.41556f,-0.20144f,0.05f,-0.41485f,-0.20088f,0.05f,-0.41407f,-0.20042f,0.05f,-0.41325f,-0.20004f,0.05f,-0.41238f,-0.19977f,0.05f,-0.41149f,-0.19961f,0.05f,-0.41059f,-0.19956f,0.05f,-0.41059f,-0.19956f,0f,-0.41149f,-0.19961f,0f,-0.41238f,-0.19977f,0f,-0.41325f,-0.20004f,0f,-0.41407f,-0.20042f,0f,-0.41485f,-0.20088f,0f,-0.41556f,-0.20144f,0f,-0.4162f,-0.20208f,0f,-0.41676f,-0.2028f,0f,-0.41723f,-0.20357f,0f,-0.4176f,-0.2044f,0f,-0.41787f,-0.20526f,0f,-0.41803f,-0.20615f,0f,-0.41809f,-0.20706f,0f,-0.41803f,-0.20796f,0f,-0.41787f,-0.20885f,0f,-0.4176f,-0.20972f,0f,-0.41723f,-0.21054f,0f,-0.41676f,-0.21132f,0f,-0.4162f,-0.21203f,0f,-0.41556f,-0.21267f,0f,-0.41485f,-0.21323f,0f,-0.41407f,-0.2137f,0f,-0.41325f,-0.21407f,0f,-0.41238f,-0.21434f,0f,-0.41149f,-0.2145f,0f,-0.41059f,-0.21456f,0f});
  }
}
protected class MFVec3f1170 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,-0.12054f,-0.99271f,0f,-0.23932f,-0.97094f,0f,-0.3546f,-0.93502f,0f,-0.46472f,-0.88546f,0f,-0.56806f,-0.82298f,0f,-0.66312f,-0.74851f,0f,-0.74851f,-0.66312f,0f,-0.82298f,-0.56806f,0f,-0.88546f,-0.46472f,0f,-0.93502f,-0.3546f,0f,-0.97094f,-0.23932f,0f,-0.99271f,-0.12054f,0f,-1f,0f,0f,-0.99271f,0.12054f,0f,-0.97094f,0.23932f,0f,-0.93502f,0.3546f,0f,-0.88546f,0.46472f,0f,-0.82298f,0.56806f,0f,-0.74851f,0.66312f,0f,-0.66312f,0.74851f,0f,-0.56806f,0.82298f,0f,-0.46472f,0.88546f,0f,-0.3546f,0.93502f,0f,-0.23932f,0.97094f,0f,-0.12054f,0.99271f,0f,0f,1f,0f,0f,1f,0f,-0.12054f,0.99271f,0f,-0.23932f,0.97094f,0f,-0.3546f,0.93502f,0f,-0.46472f,0.88546f,0f,-0.56806f,0.82298f,0f,-0.66312f,0.74851f,0f,-0.74851f,0.66312f,0f,-0.82298f,0.56806f,0f,-0.88546f,0.46472f,0f,-0.93502f,0.3546f,0f,-0.97094f,0.23932f,0f,-0.99271f,0.12054f,0f,-1f,0f,0f,-0.99271f,-0.12054f,0f,-0.97094f,-0.23932f,0f,-0.93502f,-0.3546f,0f,-0.88546f,-0.46472f,0f,-0.82298f,-0.56806f,0f,-0.74851f,-0.66312f,0f,-0.66312f,-0.74851f,0f,-0.56806f,-0.82298f,0f,-0.46472f,-0.88546f,0f,-0.3546f,-0.93502f,0f,-0.23932f,-0.97094f,0f,-0.12054f,-0.99271f,0f,0f,-1f,0f});
  }
}
protected class MFInt321171 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1172 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.41059f,-0.19956f,0.05f,-0.29537f,-0.19956f,0.05f,-0.29537f,-0.19956f,0f,-0.41059f,-0.19956f,0f});
  }
}
protected class MFVec3f1173 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321174 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1,4,0,3,-1,4,5,0,-1,0,5,6,-1,47,6,46,-1,47,0,6,-1,47,53,0,-1,47,48,53,-1,53,48,49,-1,50,53,49,-1,50,51,53,-1,53,51,52,-1,6,7,46,-1,46,7,45,-1,45,7,8,-1,44,8,9,-1,43,9,10,-1,11,43,10,-1,11,42,43,-1,11,41,42,-1,11,12,41,-1,41,12,13,-1,40,13,39,-1,40,41,13,-1,45,8,44,-1,44,9,43,-1,13,14,39,-1,39,14,15,-1,38,15,37,-1,38,39,15,-1,15,16,37,-1,37,16,17,-1,36,17,35,-1,36,37,17,-1,17,18,35,-1,35,18,34,-1,34,18,19,-1,33,19,20,-1,27,20,26,-1,27,33,20,-1,27,32,33,-1,27,31,32,-1,27,30,31,-1,27,29,30,-1,27,28,29,-1,34,19,33,-1,20,21,26,-1,26,21,22,-1,23,26,22,-1,23,24,26,-1,26,24,25,-1});
  }
}
protected class MFVec3f1175 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.29537f,-0.21456f,0.05f,-0.29447f,-0.2145f,0.05f,-0.29358f,-0.21434f,0.05f,-0.29271f,-0.21407f,0.05f,-0.29189f,-0.2137f,0.05f,-0.29111f,-0.21323f,0.05f,-0.2904f,-0.21267f,0.05f,-0.28976f,-0.21203f,0.05f,-0.2892f,-0.21132f,0.05f,-0.28873f,-0.21054f,0.05f,-0.28836f,-0.20972f,0.05f,-0.28809f,-0.20885f,0.05f,-0.28793f,-0.20796f,0.05f,-0.28787f,-0.20706f,0.05f,-0.28793f,-0.20615f,0.05f,-0.28809f,-0.20526f,0.05f,-0.28836f,-0.2044f,0.05f,-0.28873f,-0.20357f,0.05f,-0.2892f,-0.2028f,0.05f,-0.28976f,-0.20208f,0.05f,-0.2904f,-0.20144f,0.05f,-0.29111f,-0.20088f,0.05f,-0.29189f,-0.20042f,0.05f,-0.29271f,-0.20004f,0.05f,-0.29358f,-0.19977f,0.05f,-0.29447f,-0.19961f,0.05f,-0.29537f,-0.19956f,0.05f,-0.41059f,-0.19956f,0.05f,-0.41149f,-0.19961f,0.05f,-0.41238f,-0.19977f,0.05f,-0.41325f,-0.20004f,0.05f,-0.41407f,-0.20042f,0.05f,-0.41485f,-0.20088f,0.05f,-0.41556f,-0.20144f,0.05f,-0.4162f,-0.20208f,0.05f,-0.41676f,-0.2028f,0.05f,-0.41723f,-0.20357f,0.05f,-0.4176f,-0.2044f,0.05f,-0.41787f,-0.20526f,0.05f,-0.41803f,-0.20615f,0.05f,-0.41809f,-0.20706f,0.05f,-0.41803f,-0.20796f,0.05f,-0.41787f,-0.20885f,0.05f,-0.4176f,-0.20972f,0.05f,-0.41723f,-0.21054f,0.05f,-0.41676f,-0.21132f,0.05f,-0.4162f,-0.21203f,0.05f,-0.41556f,-0.21267f,0.05f,-0.41485f,-0.21323f,0.05f,-0.41407f,-0.2137f,0.05f,-0.41325f,-0.21407f,0.05f,-0.41238f,-0.21434f,0.05f,-0.41149f,-0.2145f,0.05f,-0.41059f,-0.21456f,0.05f});
  }
}
protected class MFVec3f1176 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt321177 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,103,0,-1,1,102,103,-1,1,2,102,-1,102,2,101,-1,101,2,3,-1,100,3,4,-1,99,4,5,-1,98,5,6,-1,97,6,7,-1,96,7,8,-1,95,8,9,-1,94,9,10,-1,93,10,11,-1,92,11,12,-1,91,12,13,-1,90,13,14,-1,89,14,15,-1,88,15,16,-1,87,16,17,-1,86,17,18,-1,85,18,19,-1,84,19,20,-1,83,20,21,-1,82,21,22,-1,81,22,23,-1,80,23,24,-1,79,24,25,-1,78,25,26,-1,77,26,27,-1,76,27,28,-1,75,28,29,-1,74,29,30,-1,73,30,31,-1,72,31,32,-1,71,32,33,-1,70,33,34,-1,69,34,35,-1,68,35,36,-1,67,36,37,-1,66,37,38,-1,65,38,39,-1,64,39,40,-1,63,40,41,-1,62,41,42,-1,61,42,43,-1,60,43,44,-1,59,44,45,-1,58,45,46,-1,57,46,47,-1,56,47,48,-1,55,48,49,-1,54,49,50,-1,53,50,51,-1,52,51,0,-1,103,52,0,-1,101,3,100,-1,100,4,99,-1,99,5,98,-1,98,6,97,-1,97,7,96,-1,96,8,95,-1,95,9,94,-1,94,10,93,-1,93,11,92,-1,92,12,91,-1,91,13,90,-1,90,14,89,-1,89,15,88,-1,88,16,87,-1,87,17,86,-1,86,18,85,-1,85,19,84,-1,84,20,83,-1,83,21,82,-1,82,22,81,-1,81,23,80,-1,80,24,79,-1,79,25,78,-1,78,26,77,-1,77,27,76,-1,76,28,75,-1,75,29,74,-1,74,30,73,-1,73,31,72,-1,72,32,71,-1,71,33,70,-1,70,34,69,-1,69,35,68,-1,68,36,67,-1,67,37,66,-1,66,38,65,-1,65,39,64,-1,64,40,63,-1,63,41,62,-1,62,42,61,-1,61,43,60,-1,60,44,59,-1,59,45,58,-1,58,46,57,-1,57,47,56,-1,56,48,55,-1,55,49,54,-1,54,50,53,-1,53,51,52,-1});
  }
}
protected class MFVec3f1178 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.47443f,-0.31008f,-0.04f,0.46642f,-0.30104f,-0.04f,0.45956f,-0.2911f,-0.04f,0.45395f,-0.28041f,-0.04f,0.44967f,-0.26912f,-0.04f,0.44678f,-0.25739f,-0.04f,0.44532f,-0.24541f,-0.04f,0.44532f,-0.23333f,-0.04f,0.44678f,-0.22134f,-0.04f,0.44967f,-0.20962f,-0.04f,0.45395f,-0.19833f,-0.04f,0.45956f,-0.18763f,-0.04f,0.46642f,-0.1777f,-0.04f,0.47443f,-0.16866f,-0.04f,0.48347f,-0.16065f,-0.04f,0.49341f,-0.15379f,-0.04f,0.5041f,-0.14818f,-0.04f,0.51539f,-0.1439f,-0.04f,0.52711f,-0.14101f,-0.04f,0.5391f,-0.13955f,-0.04f,0.55118f,-0.13955f,-0.04f,0.56316f,-0.14101f,-0.04f,0.57489f,-0.1439f,-0.04f,0.58618f,-0.14818f,-0.04f,0.59687f,-0.15379f,-0.04f,0.60681f,-0.16065f,-0.04f,0.61585f,-0.16866f,-0.04f,0.62386f,-0.1777f,-0.04f,0.63072f,-0.18763f,-0.04f,0.63633f,-0.19833f,-0.04f,0.64061f,-0.20962f,-0.04f,0.6435f,-0.22134f,-0.04f,0.64496f,-0.23333f,-0.04f,0.64496f,-0.24541f,-0.04f,0.6435f,-0.25739f,-0.04f,0.64061f,-0.26912f,-0.04f,0.63633f,-0.28041f,-0.04f,0.63072f,-0.2911f,-0.04f,0.62386f,-0.30104f,-0.04f,0.61585f,-0.31008f,-0.04f,0.60681f,-0.31809f,-0.04f,0.59687f,-0.32495f,-0.04f,0.58618f,-0.33056f,-0.04f,0.57489f,-0.33484f,-0.04f,0.56316f,-0.33773f,-0.04f,0.55118f,-0.33918f,-0.04f,0.5391f,-0.33918f,-0.04f,0.52711f,-0.33773f,-0.04f,0.51539f,-0.33484f,-0.04f,0.5041f,-0.33056f,-0.04f,0.49341f,-0.32495f,-0.04f,0.48347f,-0.31809f,-0.04f,0.47443f,-0.31008f,0f,0.48347f,-0.31809f,0f,0.49341f,-0.32495f,0f,0.5041f,-0.33056f,0f,0.51539f,-0.33484f,0f,0.52711f,-0.33773f,0f,0.5391f,-0.33918f,0f,0.55118f,-0.33918f,0f,0.56316f,-0.33773f,0f,0.57489f,-0.33484f,0f,0.58618f,-0.33056f,0f,0.59687f,-0.32495f,0f,0.60681f,-0.31809f,0f,0.61585f,-0.31008f,0f,0.62386f,-0.30104f,0f,0.63072f,-0.2911f,0f,0.63633f,-0.28041f,0f,0.64061f,-0.26912f,0f,0.6435f,-0.25739f,0f,0.64496f,-0.24541f,0f,0.64496f,-0.23333f,0f,0.6435f,-0.22134f,0f,0.64061f,-0.20962f,0f,0.63633f,-0.19833f,0f,0.63072f,-0.18763f,0f,0.62386f,-0.1777f,0f,0.61585f,-0.16866f,0f,0.60681f,-0.16065f,0f,0.59687f,-0.15379f,0f,0.58618f,-0.14818f,0f,0.57489f,-0.1439f,0f,0.56316f,-0.14101f,0f,0.55118f,-0.13955f,0f,0.5391f,-0.13955f,0f,0.52711f,-0.14101f,0f,0.51539f,-0.1439f,0f,0.5041f,-0.14818f,0f,0.49341f,-0.15379f,0f,0.48347f,-0.16065f,0f,0.47443f,-0.16866f,0f,0.46642f,-0.1777f,0f,0.45956f,-0.18763f,0f,0.45395f,-0.19833f,0f,0.44967f,-0.20962f,0f,0.44678f,-0.22134f,0f,0.44532f,-0.23333f,0f,0.44532f,-0.24541f,0f,0.44678f,-0.25739f,0f,0.44967f,-0.26912f,0f,0.45395f,-0.28041f,0f,0.45956f,-0.2911f,0f,0.46642f,-0.30104f,0f});
  }
}
protected class MFVec3f1179 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.70711f,0.70711f,0f,0.78718f,0.61672f,0f,0.85578f,0.51734f,0f,0.9119f,0.41041f,0f,0.95472f,0.2975f,0f,0.98362f,0.18026f,0f,0.99818f,0.06038f,0f,0.99818f,-0.06038f,0f,0.98362f,-0.18026f,0f,0.95472f,-0.2975f,0f,0.9119f,-0.41041f,0f,0.85578f,-0.51734f,0f,0.78718f,-0.61672f,0f,0.70711f,-0.70711f,0f,0.61672f,-0.78718f,0f,0.51734f,-0.85578f,0f,0.41041f,-0.9119f,0f,0.2975f,-0.95472f,0f,0.18026f,-0.98362f,0f,0.06038f,-0.99818f,0f,-0.06038f,-0.99818f,0f,-0.18026f,-0.98362f,0f,-0.2975f,-0.95472f,0f,-0.41041f,-0.9119f,0f,-0.51734f,-0.85578f,0f,-0.61672f,-0.78718f,0f,-0.70711f,-0.70711f,0f,-0.78718f,-0.61672f,0f,-0.85578f,-0.51734f,0f,-0.9119f,-0.41041f,0f,-0.95472f,-0.2975f,0f,-0.98362f,-0.18026f,0f,-0.99818f,-0.06038f,0f,-0.99818f,0.06038f,0f,-0.98362f,0.18026f,0f,-0.95472f,0.2975f,0f,-0.9119f,0.41041f,0f,-0.85578f,0.51734f,0f,-0.78718f,0.61672f,0f,-0.70711f,0.70711f,0f,-0.61672f,0.78718f,0f,-0.51734f,0.85578f,0f,-0.41041f,0.9119f,0f,-0.2975f,0.95472f,0f,-0.18026f,0.98362f,0f,-0.06038f,0.99818f,0f,0.06038f,0.99818f,0f,0.18026f,0.98362f,0f,0.2975f,0.95472f,0f,0.41041f,0.9119f,0f,0.51734f,0.85578f,0f,0.61672f,0.78718f,0f,0.70711f,0.70711f,0f,0.61672f,0.78718f,0f,0.51734f,0.85578f,0f,0.41041f,0.9119f,0f,0.2975f,0.95472f,0f,0.18026f,0.98362f,0f,0.06038f,0.99818f,0f,-0.06038f,0.99818f,0f,-0.18026f,0.98362f,0f,-0.2975f,0.95472f,0f,-0.41041f,0.9119f,0f,-0.51734f,0.85578f,0f,-0.61672f,0.78718f,0f,-0.70711f,0.70711f,0f,-0.78718f,0.61672f,0f,-0.85578f,0.51734f,0f,-0.9119f,0.41041f,0f,-0.95472f,0.2975f,0f,-0.98362f,0.18026f,0f,-0.99818f,0.06038f,0f,-0.99818f,-0.06038f,0f,-0.98362f,-0.18026f,0f,-0.95472f,-0.2975f,0f,-0.9119f,-0.41041f,0f,-0.85578f,-0.51734f,0f,-0.78718f,-0.61672f,0f,-0.70711f,-0.70711f,0f,-0.61672f,-0.78718f,0f,-0.51734f,-0.85578f,0f,-0.41041f,-0.9119f,0f,-0.2975f,-0.95472f,0f,-0.18026f,-0.98362f,0f,-0.06038f,-0.99818f,0f,0.06038f,-0.99818f,0f,0.18026f,-0.98362f,0f,0.2975f,-0.95472f,0f,0.41041f,-0.9119f,0f,0.51734f,-0.85578f,0f,0.61672f,-0.78718f,0f,0.70711f,-0.70711f,0f,0.78718f,-0.61672f,0f,0.85578f,-0.51734f,0f,0.9119f,-0.41041f,0f,0.95472f,-0.2975f,0f,0.98362f,-0.18026f,0f,0.99818f,-0.06038f,0f,0.99818f,0.06038f,0f,0.98362f,0.18026f,0f,0.95472f,0.2975f,0f,0.9119f,0.41041f,0f,0.85578f,0.51734f,0f,0.78718f,0.61672f,0f});
  }
}
protected class MFInt321180 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,52,0,-1,1,103,52,-1,1,2,103,-1,103,2,102,-1,102,2,3,-1,101,3,4,-1,100,4,5,-1,99,5,6,-1,98,6,7,-1,97,7,8,-1,96,8,9,-1,95,9,10,-1,94,10,11,-1,93,11,12,-1,92,12,13,-1,91,13,14,-1,90,14,15,-1,89,15,16,-1,88,16,17,-1,87,17,18,-1,86,18,19,-1,85,19,20,-1,84,20,21,-1,83,21,22,-1,82,22,23,-1,81,23,24,-1,80,24,25,-1,79,25,26,-1,78,26,27,-1,77,27,28,-1,76,28,29,-1,75,29,30,-1,74,30,31,-1,73,31,32,-1,72,32,33,-1,71,33,34,-1,70,34,35,-1,69,35,36,-1,68,36,37,-1,67,37,38,-1,66,38,39,-1,65,39,40,-1,64,40,41,-1,63,41,42,-1,62,42,43,-1,61,43,44,-1,60,44,45,-1,59,45,46,-1,58,46,47,-1,57,47,48,-1,56,48,49,-1,55,49,50,-1,54,50,51,-1,53,51,0,-1,52,53,0,-1,102,3,101,-1,101,4,100,-1,100,5,99,-1,99,6,98,-1,98,7,97,-1,97,8,96,-1,96,9,95,-1,95,10,94,-1,94,11,93,-1,93,12,92,-1,92,13,91,-1,91,14,90,-1,90,15,89,-1,89,16,88,-1,88,17,87,-1,87,18,86,-1,86,19,85,-1,85,20,84,-1,84,21,83,-1,83,22,82,-1,82,23,81,-1,81,24,80,-1,80,25,79,-1,79,26,78,-1,78,27,77,-1,77,28,76,-1,76,29,75,-1,75,30,74,-1,74,31,73,-1,73,32,72,-1,72,33,71,-1,71,34,70,-1,70,35,69,-1,69,36,68,-1,68,37,67,-1,67,38,66,-1,66,39,65,-1,65,40,64,-1,64,41,63,-1,63,42,62,-1,62,43,61,-1,61,44,60,-1,60,45,59,-1,59,46,58,-1,58,47,57,-1,57,48,56,-1,56,49,55,-1,55,50,54,-1,54,51,53,-1});
  }
}
protected class MFVec3f1181 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.54514f,-0.33937f,-0.29819f,0.53309f,-0.33864f,-0.29841f,0.52121f,-0.33646f,-0.29906f,0.50968f,-0.33287f,-0.30014f,0.49867f,-0.32791f,-0.30163f,0.48833f,-0.32167f,-0.3035f,0.47883f,-0.31422f,-0.30573f,0.47029f,-0.30568f,-0.3083f,0.46284f,-0.29617f,-0.31115f,0.45659f,-0.28584f,-0.31425f,0.45164f,-0.27483f,-0.31755f,0.44804f,-0.2633f,-0.32101f,0.44587f,-0.25142f,-0.32457f,0.44514f,-0.23937f,-0.32819f,0.44587f,-0.22731f,-0.33181f,0.44804f,-0.21544f,-0.33537f,0.45164f,-0.20391f,-0.33883f,0.45659f,-0.1929f,-0.34213f,0.46284f,-0.18256f,-0.34523f,0.47029f,-0.17306f,-0.34808f,0.47883f,-0.16452f,-0.35065f,0.48833f,-0.15707f,-0.35288f,0.49867f,-0.15082f,-0.35475f,0.50968f,-0.14587f,-0.35624f,0.52121f,-0.14227f,-0.35732f,0.53309f,-0.1401f,-0.35797f,0.54514f,-0.13937f,-0.35819f,0.55719f,-0.1401f,-0.35797f,0.56907f,-0.14227f,-0.35732f,0.5806f,-0.14587f,-0.35624f,0.59161f,-0.15082f,-0.35475f,0.60195f,-0.15707f,-0.35288f,0.61145f,-0.16452f,-0.35065f,0.61999f,-0.17306f,-0.34808f,0.62744f,-0.18256f,-0.34523f,0.63368f,-0.1929f,-0.34213f,0.63864f,-0.20391f,-0.33883f,0.64223f,-0.21544f,-0.33537f,0.64441f,-0.22731f,-0.33181f,0.64514f,-0.23937f,-0.32819f,0.64441f,-0.25142f,-0.32457f,0.64223f,-0.2633f,-0.32101f,0.63864f,-0.27483f,-0.31755f,0.63368f,-0.28584f,-0.31425f,0.62744f,-0.29617f,-0.31115f,0.61999f,-0.30568f,-0.3083f,0.61145f,-0.31422f,-0.30573f,0.60195f,-0.32167f,-0.3035f,0.59161f,-0.32791f,-0.30163f,0.5806f,-0.33287f,-0.30014f,0.56907f,-0.33646f,-0.29906f,0.55719f,-0.33864f,-0.29841f,0.54514f,-0.33937f,-0.26951f,0.55719f,-0.33864f,-0.2697f,0.56907f,-0.33646f,-0.27028f,0.5806f,-0.33287f,-0.27124f,0.59161f,-0.32791f,-0.27256f,0.60195f,-0.32167f,-0.27423f,0.61145f,-0.31422f,-0.27621f,0.61999f,-0.30568f,-0.27849f,0.62744f,-0.29617f,-0.28102f,0.63368f,-0.28584f,-0.28378f,0.63864f,-0.27483f,-0.28672f,0.64223f,-0.2633f,-0.28979f,0.64441f,-0.25142f,-0.29296f,0.64514f,-0.23937f,-0.29617f,0.64441f,-0.22731f,-0.29939f,0.64223f,-0.21544f,-0.30256f,0.63864f,-0.20391f,-0.30563f,0.63368f,-0.1929f,-0.30857f,0.62744f,-0.18256f,-0.31132f,0.61999f,-0.17306f,-0.31386f,0.61145f,-0.16452f,-0.31613f,0.60195f,-0.15707f,-0.31812f,0.59161f,-0.15082f,-0.31979f,0.5806f,-0.14587f,-0.32111f,0.56907f,-0.14227f,-0.32207f,0.55719f,-0.1401f,-0.32265f,0.54514f,-0.13937f,-0.32284f,0.53309f,-0.1401f,-0.32265f,0.52121f,-0.14227f,-0.32207f,0.50968f,-0.14587f,-0.32111f,0.49867f,-0.15082f,-0.31979f,0.48833f,-0.15707f,-0.31812f,0.47883f,-0.16452f,-0.31613f,0.47029f,-0.17306f,-0.31386f,0.46284f,-0.18256f,-0.31132f,0.45659f,-0.1929f,-0.30857f,0.45164f,-0.20391f,-0.30563f,0.44804f,-0.21544f,-0.30256f,0.44587f,-0.22731f,-0.29939f,0.44514f,-0.23937f,-0.29617f,0.44587f,-0.25142f,-0.29296f,0.44804f,-0.2633f,-0.28979f,0.45164f,-0.27483f,-0.28672f,0.45659f,-0.28584f,-0.28378f,0.46284f,-0.29617f,-0.28102f,0.47029f,-0.30568f,-0.27849f,0.47883f,-0.31422f,-0.27621f,0.48833f,-0.32167f,-0.27423f,0.49867f,-0.32791f,-0.27256f,0.50968f,-0.33287f,-0.27124f,0.52121f,-0.33646f,-0.27028f,0.53309f,-0.33864f,-0.2697f});
  }
}
protected class MFVec3f1182 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0.12054f,0.99271f,0f,0.23932f,0.97094f,0f,0.3546f,0.93502f,0f,0.46472f,0.88546f,0f,0.56806f,0.82298f,0f,0.66312f,0.74851f,0f,0.74851f,0.66312f,0f,0.82298f,0.56806f,0f,0.88546f,0.46472f,0f,0.93502f,0.3546f,0f,0.97094f,0.23932f,0f,0.99271f,0.12054f,0f,1f,0f,0f,0.99271f,-0.12054f,0f,0.97094f,-0.23932f,0f,0.93502f,-0.3546f,0f,0.88546f,-0.46472f,0f,0.82298f,-0.56806f,0f,0.74851f,-0.66312f,0f,0.66312f,-0.74851f,0f,0.56806f,-0.82298f,0f,0.46472f,-0.88546f,0f,0.3546f,-0.93502f,0f,0.23932f,-0.97094f,0f,0.12054f,-0.99271f,0f,0f,-1f,0f,-0.12054f,-0.99271f,0f,-0.23932f,-0.97094f,0f,-0.3546f,-0.93502f,0f,-0.46472f,-0.88546f,0f,-0.56806f,-0.82298f,0f,-0.66312f,-0.74851f,0f,-0.74851f,-0.66312f,0f,-0.82298f,-0.56806f,0f,-0.88546f,-0.46472f,0f,-0.93502f,-0.3546f,0f,-0.97094f,-0.23932f,0f,-0.99271f,-0.12054f,0f,-1f,0f,0f,-0.99271f,0.12054f,0f,-0.97094f,0.23932f,0f,-0.93502f,0.3546f,0f,-0.88546f,0.46472f,0f,-0.82298f,0.56806f,0f,-0.74851f,0.66312f,0f,-0.66312f,0.74851f,0f,-0.56806f,0.82298f,0f,-0.46472f,0.88546f,0f,-0.3546f,0.93502f,0f,-0.23932f,0.97094f,0f,-0.12054f,0.99271f,0f,0f,1f,0f,-0.12054f,0.99271f,0f,-0.23932f,0.97094f,0f,-0.3546f,0.93502f,0f,-0.46472f,0.88546f,0f,-0.56806f,0.82298f,0f,-0.66312f,0.74851f,0f,-0.74851f,0.66312f,0f,-0.82298f,0.56806f,0f,-0.88546f,0.46472f,0f,-0.93502f,0.3546f,0f,-0.97094f,0.23932f,0f,-0.99271f,0.12054f,0f,-1f,0f,0f,-0.99271f,-0.12054f,0f,-0.97094f,-0.23932f,0f,-0.93502f,-0.3546f,0f,-0.88546f,-0.46472f,0f,-0.82298f,-0.56806f,0f,-0.74851f,-0.66312f,0f,-0.66312f,-0.74851f,0f,-0.56806f,-0.82298f,0f,-0.46472f,-0.88546f,0f,-0.3546f,-0.93502f,0f,-0.23932f,-0.97094f,0f,-0.12054f,-0.99271f,0f,0f,-1f,0f,0.12054f,-0.99271f,0f,0.23932f,-0.97094f,0f,0.3546f,-0.93502f,0f,0.46472f,-0.88546f,0f,0.56806f,-0.82298f,0f,0.66312f,-0.74851f,0f,0.74851f,-0.66312f,0f,0.82298f,-0.56806f,0f,0.88546f,-0.46472f,0f,0.93502f,-0.3546f,0f,0.97094f,-0.23932f,0f,0.99271f,-0.12054f,0f,1f,0f,0f,0.99271f,0.12054f,0f,0.97094f,0.23932f,0f,0.93502f,0.3546f,0f,0.88546f,0.46472f,0f,0.82298f,0.56806f,0f,0.74851f,0.66312f,0f,0.66312f,0.74851f,0f,0.56806f,0.82298f,0f,0.46472f,0.88546f,0f,0.3546f,0.93502f,0f,0.23932f,0.97094f,0f,0.12054f,0.99271f,0f});
  }
}
protected class MFInt321183 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,4,30,3,-1,4,29,30,-1,4,5,29,-1,29,5,28,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,1,31,-1,31,2,30,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1});
  }
}
protected class MFVec3f1184 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,0.405f,-0.04f,-0.75f,0.40919f,-0.04018f,-0.75f,0.41335f,-0.0407f,-0.75f,0.41745f,-0.04157f,-0.75f,0.42146f,-0.04278f,-0.75f,0.42535f,-0.04433f,-0.75f,0.42909f,-0.04622f,-0.75f,0.43263f,-0.04843f,-0.75f,0.43595f,-0.05097f,-0.75f,0.43901f,-0.05381f,-0.75f,0.44177f,-0.05694f,-0.75f,0.44418f,-0.06033f,-0.75f,0.44622f,-0.06395f,-0.75f,0.44785f,-0.06779f,-0.75f,0.44904f,-0.07177f,-0.75f,0.44976f,-0.07585f,-0.75f,0.45f,-0.08f,-0.4f,0.45f,-0.08f,-0.4f,0.44982f,-0.07641f,-0.4f,0.44925f,-0.07273f,-0.4f,0.44826f,-0.069f,-0.4f,0.44684f,-0.06528f,-0.4f,0.44497f,-0.06163f,-0.4f,0.44266f,-0.05812f,-0.4f,0.43994f,-0.05479f,-0.4f,0.43682f,-0.05172f,-0.4f,0.43336f,-0.04895f,-0.4f,0.42962f,-0.04652f,-0.4f,0.42567f,-0.04447f,-0.4f,0.42156f,-0.04281f,-0.4f,0.41738f,-0.04155f,-0.4f,0.41319f,-0.04067f,-0.4f,0.40904f,-0.04017f,-0.4f,0.405f,-0.04f});
  }
}
protected class MFVec3f1185 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,-1f,0f,-0.08281f,-0.99657f,0f,-0.16549f,-0.98621f,0f,-0.24789f,-0.96879f,0f,-0.32979f,-0.94405f,0f,-0.41092f,-0.91167f,0f,-0.49075f,-0.8713f,0f,-0.56869f,-0.82255f,0f,-0.64408f,-0.76496f,0f,-0.71606f,-0.69804f,0f,-0.78315f,-0.62184f,0f,-0.84391f,-0.53649f,0f,-0.89696f,-0.44211f,0f,-0.94066f,-0.33936f,0f,-0.97311f,-0.23036f,0f,-0.99317f,-0.11667f,0f,-1f,0f,0f,-1f,0f,0f,-0.99489f,-0.10098f,0f,-0.97901f,-0.20381f,0f,-0.95188f,-0.30649f,0f,-0.9135f,-0.40685f,0f,-0.8644f,-0.50281f,0f,-0.80557f,-0.5925f,0f,-0.73837f,-0.67439f,0f,-0.66436f,-0.74741f,0f,-0.58519f,-0.81089f,0f,-0.50245f,-0.8646f,0f,-0.41761f,-0.90863f,0f,-0.33195f,-0.9433f,0f,-0.24655f,-0.96913f,0f,-0.16231f,-0.98674f,0f,-0.07994f,-0.9968f,0f,0f,-1f});
  }
}
protected class MFInt321186 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1187 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.405f,-0.04f,-0.75f,0.405f,-0.04f,-0.4f,0.405f,-0.04f,-0.4f,-0.405f,-0.04f});
  }
}
protected class MFVec3f1188 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f});
  }
}
protected class MFInt321189 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,28,4,5,-1,27,5,6,-1,26,6,7,-1,25,7,8,-1,24,8,9,-1,23,9,10,-1,22,10,11,-1,21,11,12,-1,20,12,13,-1,14,20,13,-1,14,19,20,-1,14,15,19,-1,19,15,18,-1,18,15,16,-1,17,18,16,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,29,4,28,-1,28,5,27,-1,27,6,26,-1,26,7,25,-1,25,8,24,-1,24,9,23,-1,23,10,22,-1,22,11,21,-1,21,12,20,-1});
  }
}
protected class MFVec3f1190 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.45f,-0.08f,-0.75f,-0.44976f,-0.07585f,-0.75f,-0.44904f,-0.07177f,-0.75f,-0.44785f,-0.06779f,-0.75f,-0.44622f,-0.06395f,-0.75f,-0.44418f,-0.06033f,-0.75f,-0.44176f,-0.05694f,-0.75f,-0.43901f,-0.05381f,-0.75f,-0.43595f,-0.05096f,-0.75f,-0.43263f,-0.04843f,-0.75f,-0.42909f,-0.04622f,-0.75f,-0.42535f,-0.04433f,-0.75f,-0.42146f,-0.04278f,-0.75f,-0.41745f,-0.04157f,-0.75f,-0.41335f,-0.0407f,-0.75f,-0.40919f,-0.04018f,-0.75f,-0.405f,-0.04f,-0.4f,-0.405f,-0.04f,-0.4f,-0.40904f,-0.04017f,-0.4f,-0.41319f,-0.04067f,-0.4f,-0.41738f,-0.04155f,-0.4f,-0.42156f,-0.04281f,-0.4f,-0.42567f,-0.04447f,-0.4f,-0.42962f,-0.04652f,-0.4f,-0.43336f,-0.04895f,-0.4f,-0.43682f,-0.05172f,-0.4f,-0.43994f,-0.05479f,-0.4f,-0.44266f,-0.05812f,-0.4f,-0.44497f,-0.06163f,-0.4f,-0.44684f,-0.06528f,-0.4f,-0.44826f,-0.069f,-0.4f,-0.44925f,-0.07273f,-0.4f,-0.44982f,-0.07641f,-0.4f,-0.45f,-0.08f});
  }
}
protected class MFVec3f1191 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,0.99317f,-0.11669f,0f,0.97309f,-0.23042f,0f,0.94061f,-0.33949f,0f,0.8969f,-0.44224f,0f,0.84386f,-0.53656f,0f,0.78311f,-0.62188f,0f,0.71603f,-0.69807f,0f,0.64405f,-0.76499f,0f,0.56866f,-0.82257f,0f,0.49074f,-0.87131f,0f,0.41093f,-0.91167f,0f,0.32979f,-0.94405f,0f,0.24794f,-0.96877f,0f,0.1656f,-0.98619f,0f,0.0829f,-0.99656f,0f,0f,-1f,0f,0f,-1f,0f,0.07994f,-0.9968f,0f,0.16231f,-0.98674f,0f,0.24655f,-0.96913f,0f,0.33195f,-0.9433f,0f,0.41761f,-0.90863f,0f,0.50245f,-0.8646f,0f,0.58519f,-0.81089f,0f,0.66436f,-0.74741f,0f,0.73837f,-0.67439f,0f,0.80557f,-0.5925f,0f,0.8644f,-0.50281f,0f,0.9135f,-0.40685f,0f,0.95188f,-0.30649f,0f,0.97901f,-0.20381f,0f,0.99489f,-0.10098f,0f,1f,0f});
  }
}
protected class MFInt321192 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1193 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.45f,-0.21024f,-0.75f,-0.45f,-0.08f,-0.4f,-0.45f,-0.08f,-0.4f,-0.45f,-0.21024f});
  }
}
protected class MFVec3f1194 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321195 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,2,32,1,-1,2,31,32,-1,2,3,31,-1,31,3,30,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1});
  }
}
protected class MFVec3f1196 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.41793f,-0.24856f,-0.75f,-0.42116f,-0.24758f,-0.75f,-0.4243f,-0.24638f,-0.75f,-0.42736f,-0.24496f,-0.75f,-0.43031f,-0.24332f,-0.75f,-0.43312f,-0.24147f,-0.75f,-0.43578f,-0.23942f,-0.75f,-0.43828f,-0.23716f,-0.75f,-0.44059f,-0.23472f,-0.75f,-0.44269f,-0.2321f,-0.75f,-0.44455f,-0.22932f,-0.75f,-0.44617f,-0.22639f,-0.75f,-0.44753f,-0.22332f,-0.75f,-0.4486f,-0.22014f,-0.75f,-0.44937f,-0.2169f,-0.75f,-0.44984f,-0.21359f,-0.75f,-0.45f,-0.21024f,-0.4f,-0.45f,-0.21024f,-0.4f,-0.44987f,-0.21326f,-0.4f,-0.44948f,-0.21633f,-0.4f,-0.4488f,-0.21942f,-0.4f,-0.44784f,-0.2225f,-0.4f,-0.44658f,-0.22554f,-0.4f,-0.44503f,-0.22852f,-0.4f,-0.4432f,-0.23139f,-0.4f,-0.4411f,-0.23412f,-0.4f,-0.43876f,-0.23669f,-0.4f,-0.43619f,-0.23907f,-0.4f,-0.43343f,-0.24125f,-0.4f,-0.43052f,-0.24319f,-0.4f,-0.42747f,-0.2449f,-0.4f,-0.42434f,-0.24636f,-0.4f,-0.42115f,-0.24758f,-0.4f,-0.41793f,-0.24856f});
  }
}
protected class MFVec3f1197 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.25766f,0.96623f,0f,0.32355f,0.94621f,0f,0.38891f,0.92127f,0f,0.45358f,0.89121f,0f,0.51733f,0.85579f,0f,0.57971f,0.81482f,0f,0.64034f,0.76809f,0f,0.69876f,0.71535f,0f,0.75431f,0.65652f,0f,0.80612f,0.59175f,0f,0.85351f,0.52107f,0f,0.89574f,0.44457f,0f,0.93196f,0.36257f,0f,0.96109f,0.27624f,0f,0.98246f,0.18648f,0f,0.99556f,0.09409f,0f,1f,0f,0f,1f,0f,0f,0.9964f,0.08481f,0f,0.98534f,0.17062f,0f,0.96661f,0.25625f,0f,0.94024f,0.34052f,0f,0.90649f,0.42222f,0f,0.86587f,0.50027f,0f,0.81904f,0.57373f,0f,0.76682f,0.64186f,0f,0.71011f,0.7041f,0f,0.6498f,0.7601f,0f,0.5868f,0.80973f,0f,0.52195f,0.85298f,0f,0.45599f,0.88999f,0f,0.38959f,0.92099f,0f,0.32332f,0.94629f,0f,0.25766f,0.96623f});
  }
}
protected class MFInt321198 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1199 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.01293f,-0.35656f,-0.75f,-0.41793f,-0.24856f,-0.4f,-0.41793f,-0.24856f,-0.4f,-0.01293f,-0.35656f});
  }
}
protected class MFVec3f1200 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f});
  }
}
protected class MFInt321201 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {17,0,16,-1,16,0,1,-1,15,1,2,-1,14,2,3,-1,13,3,4,-1,5,13,4,-1,5,12,13,-1,5,6,12,-1,12,6,11,-1,11,6,7,-1,10,7,8,-1,9,10,8,-1,16,1,15,-1,15,2,14,-1,14,3,13,-1,11,7,10,-1});
  }
}
protected class MFVec3f1202 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,0.01293f,-0.35656f,-0.75f,0.00975f,-0.35729f,-0.75f,0.00652f,-0.35782f,-0.75f,0.00327f,-0.35814f,-0.75f,0f,-0.35824f,-0.75f,-0.00327f,-0.35814f,-0.75f,-0.00652f,-0.35782f,-0.75f,-0.00975f,-0.35729f,-0.75f,-0.01293f,-0.35656f,-0.4f,-0.01293f,-0.35656f,-0.4f,-0.00979f,-0.35729f,-0.4f,-0.00657f,-0.35781f,-0.4f,-0.0033f,-0.35814f,-0.4f,0f,-0.35824f,-0.4f,0.0033f,-0.35814f,-0.4f,0.00657f,-0.35781f,-0.4f,0.00979f,-0.35729f,-0.4f,0.01293f,-0.35656f});
  }
}
protected class MFVec3f1203 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.25766f,0.96623f,0f,-0.19347f,0.98111f,0f,-0.12908f,0.99163f,0f,-0.06458f,0.99791f,0f,0f,1f,0f,0.06458f,0.99791f,0f,0.12908f,0.99163f,0f,0.19347f,0.98111f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.19432f,0.98094f,0f,0.13005f,0.99151f,0f,0.06518f,0.99787f,0f,0f,1f,0f,-0.06518f,0.99787f,0f,-0.13005f,0.99151f,0f,-0.19432f,0.98094f,0f,-0.25766f,0.96623f});
  }
}
protected class MFInt321204 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1205 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,0.41793f,-0.24856f,-0.75f,0.01293f,-0.35656f,-0.4f,0.01293f,-0.35656f,-0.4f,0.41793f,-0.24856f});
  }
}
protected class MFVec3f1206 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f});
  }
}
protected class MFInt321207 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,28,4,5,-1,27,5,6,-1,26,6,7,-1,25,7,8,-1,24,8,9,-1,23,9,10,-1,22,10,11,-1,21,11,12,-1,20,12,13,-1,19,13,14,-1,18,14,15,-1,16,18,15,-1,16,17,18,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,29,4,28,-1,28,5,27,-1,27,6,26,-1,26,7,25,-1,25,8,24,-1,24,9,23,-1,23,10,22,-1,22,11,21,-1,21,12,20,-1,20,13,19,-1,19,14,18,-1});
  }
}
protected class MFVec3f1208 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,0.45f,-0.21024f,-0.75f,0.44984f,-0.21359f,-0.75f,0.44937f,-0.21691f,-0.75f,0.44859f,-0.22017f,-0.75f,0.44752f,-0.22335f,-0.75f,0.44616f,-0.22642f,-0.75f,0.44453f,-0.22935f,-0.75f,0.44266f,-0.23214f,-0.75f,0.44057f,-0.23475f,-0.75f,0.43827f,-0.23718f,-0.75f,0.43577f,-0.23943f,-0.75f,0.4331f,-0.24148f,-0.75f,0.43029f,-0.24333f,-0.75f,0.42735f,-0.24496f,-0.75f,0.4243f,-0.24638f,-0.75f,0.42116f,-0.24758f,-0.75f,0.41793f,-0.24856f,-0.4f,0.41793f,-0.24856f,-0.4f,0.42115f,-0.24758f,-0.4f,0.42434f,-0.24636f,-0.4f,0.42747f,-0.2449f,-0.4f,0.43052f,-0.24319f,-0.4f,0.43343f,-0.24125f,-0.4f,0.43619f,-0.23907f,-0.4f,0.43876f,-0.23669f,-0.4f,0.4411f,-0.23412f,-0.4f,0.4432f,-0.23139f,-0.4f,0.44503f,-0.22852f,-0.4f,0.44658f,-0.22554f,-0.4f,0.44784f,-0.2225f,-0.4f,0.4488f,-0.21942f,-0.4f,0.44948f,-0.21633f,-0.4f,0.44987f,-0.21326f,-0.4f,0.45f,-0.21024f});
  }
}
protected class MFVec3f1209 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-0.99556f,0.09415f,0f,-0.98239f,0.18682f,0f,-0.96085f,0.27707f,0f,-0.93159f,0.36351f,0f,-0.89539f,0.44529f,0f,-0.853f,0.52191f,0f,-0.80547f,0.59264f,0f,-0.75367f,0.65725f,0f,-0.69833f,0.71578f,0f,-0.64005f,0.76833f,0f,-0.57938f,0.81506f,0f,-0.51704f,0.85596f,0f,-0.45344f,0.89129f,0f,-0.38888f,0.92129f,0f,-0.32356f,0.94621f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.32332f,0.94629f,0f,-0.38959f,0.92099f,0f,-0.45599f,0.88999f,0f,-0.52195f,0.85298f,0f,-0.5868f,0.80973f,0f,-0.6498f,0.7601f,0f,-0.71011f,0.7041f,0f,-0.76682f,0.64186f,0f,-0.81904f,0.57373f,0f,-0.86587f,0.50027f,0f,-0.90649f,0.42222f,0f,-0.94024f,0.34052f,0f,-0.96661f,0.25625f,0f,-0.98534f,0.17062f,0f,-0.9964f,0.08481f,0f,-1f,0f});
  }
}
protected class MFInt321210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1211 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,0.45f,-0.08f,-0.75f,0.45f,-0.21024f,-0.4f,0.45f,-0.21024f,-0.4f,0.45f,-0.08f});
  }
}
protected class MFVec3f1212 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {76,0,30,-1,31,76,30,-1,31,32,76,-1,76,32,33,-1,34,76,33,-1,34,75,76,-1,34,74,75,-1,34,73,74,-1,34,72,73,-1,34,71,72,-1,34,70,71,-1,34,69,70,-1,34,68,69,-1,34,67,68,-1,34,35,67,-1,67,35,36,-1,37,67,36,-1,37,38,67,-1,67,38,66,-1,66,38,65,-1,65,38,39,-1,64,39,40,-1,63,40,41,-1,62,41,42,-1,61,42,60,-1,61,62,42,-1,2,29,1,-1,2,28,29,-1,2,3,28,-1,28,3,17,-1,18,28,17,-1,18,19,28,-1,28,19,20,-1,21,28,20,-1,21,22,28,-1,28,22,23,-1,24,28,23,-1,24,25,28,-1,28,25,26,-1,27,28,26,-1,4,5,3,-1,3,5,6,-1,7,3,6,-1,7,8,3,-1,3,8,9,-1,10,3,9,-1,10,11,3,-1,3,11,12,-1,13,3,12,-1,13,14,3,-1,3,14,15,-1,16,3,15,-1,16,17,3,-1,29,30,1,-1,1,30,0,-1,65,39,64,-1,64,40,63,-1,63,41,62,-1,42,43,60,-1,60,43,59,-1,59,43,44,-1,58,44,45,-1,57,45,46,-1,56,46,55,-1,56,57,46,-1,59,44,58,-1,58,45,57,-1,46,47,55,-1,55,47,54,-1,54,47,48,-1,53,48,49,-1,52,49,50,-1,51,52,50,-1,54,48,53,-1,53,49,52,-1});
  }
}
protected class MFVec3f1214 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.4f,-0.41793f,-0.24856f,-0.4f,-0.42115f,-0.24758f,-0.4f,-0.42434f,-0.24636f,-0.4f,-0.42747f,-0.2449f,-0.4f,-0.43052f,-0.24319f,-0.4f,-0.43343f,-0.24125f,-0.4f,-0.43619f,-0.23907f,-0.4f,-0.43876f,-0.23669f,-0.4f,-0.4411f,-0.23412f,-0.4f,-0.4432f,-0.23139f,-0.4f,-0.44503f,-0.22852f,-0.4f,-0.44658f,-0.22554f,-0.4f,-0.44784f,-0.2225f,-0.4f,-0.4488f,-0.21942f,-0.4f,-0.44948f,-0.21633f,-0.4f,-0.44987f,-0.21326f,-0.4f,-0.45f,-0.21024f,-0.4f,-0.45f,-0.08f,-0.4f,-0.44982f,-0.07641f,-0.4f,-0.44925f,-0.07273f,-0.4f,-0.44826f,-0.069f,-0.4f,-0.44684f,-0.06528f,-0.4f,-0.44497f,-0.06163f,-0.4f,-0.44266f,-0.05812f,-0.4f,-0.43994f,-0.05479f,-0.4f,-0.43682f,-0.05172f,-0.4f,-0.43336f,-0.04895f,-0.4f,-0.42962f,-0.04652f,-0.4f,-0.42567f,-0.04447f,-0.4f,-0.42156f,-0.04281f,-0.4f,-0.41738f,-0.04155f,-0.4f,-0.41319f,-0.04067f,-0.4f,-0.40904f,-0.04017f,-0.4f,-0.405f,-0.04f,-0.4f,0.405f,-0.04f,-0.4f,0.40904f,-0.04017f,-0.4f,0.41319f,-0.04067f,-0.4f,0.41738f,-0.04155f,-0.4f,0.42156f,-0.04281f,-0.4f,0.42567f,-0.04447f,-0.4f,0.42962f,-0.04652f,-0.4f,0.43336f,-0.04895f,-0.4f,0.43682f,-0.05172f,-0.4f,0.43994f,-0.05479f,-0.4f,0.44266f,-0.05812f,-0.4f,0.44497f,-0.06163f,-0.4f,0.44684f,-0.06528f,-0.4f,0.44826f,-0.069f,-0.4f,0.44925f,-0.07273f,-0.4f,0.44982f,-0.07641f,-0.4f,0.45f,-0.08f,-0.4f,0.45f,-0.21024f,-0.4f,0.44987f,-0.21326f,-0.4f,0.44948f,-0.21633f,-0.4f,0.4488f,-0.21942f,-0.4f,0.44784f,-0.2225f,-0.4f,0.44658f,-0.22554f,-0.4f,0.44503f,-0.22852f,-0.4f,0.4432f,-0.23139f,-0.4f,0.4411f,-0.23412f,-0.4f,0.43876f,-0.23669f,-0.4f,0.43619f,-0.23907f,-0.4f,0.43343f,-0.24125f,-0.4f,0.43052f,-0.24319f,-0.4f,0.42747f,-0.2449f,-0.4f,0.42434f,-0.24636f,-0.4f,0.42115f,-0.24758f,-0.4f,0.41793f,-0.24856f,-0.4f,0.01293f,-0.35656f,-0.4f,0.00979f,-0.35729f,-0.4f,0.00657f,-0.35781f,-0.4f,0.0033f,-0.35814f,-0.4f,0f,-0.35824f,-0.4f,-0.0033f,-0.35814f,-0.4f,-0.00657f,-0.35781f,-0.4f,-0.00979f,-0.35729f,-0.4f,-0.01293f,-0.35656f});
  }
}
protected class MFVec3f1215 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt321216 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,17,0,-1,1,16,17,-1,1,15,16,-1,1,14,15,-1,1,13,14,-1,1,12,13,-1,1,11,12,-1,1,10,11,-1,1,9,10,-1,1,8,9,-1,1,7,8,-1,1,6,7,-1,1,5,6,-1,1,4,5,-1,1,2,4,-1,4,2,55,-1,55,2,54,-1,54,2,53,-1,53,2,52,-1,52,2,51,-1,51,2,50,-1,50,2,49,-1,49,2,48,-1,48,2,47,-1,47,2,46,-1,46,2,45,-1,45,2,44,-1,44,2,43,-1,43,2,42,-1,42,2,3,-1,41,3,40,-1,41,42,3,-1,0,30,3,-1,0,29,30,-1,0,28,29,-1,0,27,28,-1,0,26,27,-1,0,25,26,-1,0,24,25,-1,0,23,24,-1,0,22,23,-1,0,21,22,-1,0,20,21,-1,0,19,20,-1,0,18,19,-1,0,17,18,-1,30,31,3,-1,3,31,32,-1,33,3,32,-1,33,34,3,-1,3,34,35,-1,36,3,35,-1,36,37,3,-1,3,37,38,-1,39,3,38,-1,39,40,3,-1});
  }
}
protected class MFVec3f1217 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.01293f,-0.35656f,0.375f,-0.41793f,-0.24856f,0.75f,-0.41793f,-0.24856f,0.75f,-0.01293f,-0.35656f,0.54514f,-0.33937f,-0.26951f,0.53309f,-0.33864f,-0.2697f,0.52121f,-0.33646f,-0.27028f,0.50968f,-0.33287f,-0.27124f,0.49867f,-0.32791f,-0.27256f,0.48833f,-0.32167f,-0.27423f,0.47883f,-0.31422f,-0.27621f,0.47029f,-0.30568f,-0.27849f,0.46284f,-0.29617f,-0.28102f,0.45659f,-0.28584f,-0.28378f,0.45164f,-0.27483f,-0.28672f,0.44804f,-0.2633f,-0.28979f,0.44587f,-0.25142f,-0.29296f,0.44514f,-0.23937f,-0.29617f,0.44587f,-0.22731f,-0.29939f,0.44804f,-0.21544f,-0.30256f,0.45164f,-0.20391f,-0.30563f,0.45659f,-0.1929f,-0.30857f,0.46284f,-0.18256f,-0.31132f,0.47029f,-0.17306f,-0.31386f,0.47883f,-0.16452f,-0.31613f,0.48833f,-0.15707f,-0.31812f,0.49867f,-0.15082f,-0.31979f,0.50968f,-0.14587f,-0.32111f,0.52121f,-0.14227f,-0.32207f,0.53309f,-0.1401f,-0.32265f,0.54514f,-0.13937f,-0.32284f,0.55719f,-0.1401f,-0.32265f,0.56907f,-0.14227f,-0.32207f,0.5806f,-0.14587f,-0.32111f,0.59161f,-0.15082f,-0.31979f,0.60195f,-0.15707f,-0.31812f,0.61145f,-0.16452f,-0.31613f,0.61999f,-0.17306f,-0.31386f,0.62744f,-0.18256f,-0.31132f,0.63368f,-0.1929f,-0.30857f,0.63864f,-0.20391f,-0.30563f,0.64223f,-0.21544f,-0.30256f,0.64441f,-0.22731f,-0.29939f,0.64514f,-0.23937f,-0.29617f,0.64441f,-0.25142f,-0.29296f,0.64223f,-0.2633f,-0.28979f,0.63864f,-0.27483f,-0.28672f,0.63368f,-0.28584f,-0.28378f,0.62744f,-0.29617f,-0.28102f,0.61999f,-0.30568f,-0.27849f,0.61145f,-0.31422f,-0.27621f,0.60195f,-0.32167f,-0.27423f,0.59161f,-0.32791f,-0.27256f,0.5806f,-0.33287f,-0.27124f,0.56907f,-0.33646f,-0.27028f,0.55719f,-0.33864f,-0.2697f});
  }
}
protected class MFVec3f1218 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f});
  }
}
protected class MFInt321219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {17,0,16,-1,16,0,1,-1,2,16,1,-1,2,15,16,-1,2,3,15,-1,15,3,14,-1,14,3,4,-1,13,4,5,-1,12,5,6,-1,11,6,7,-1,10,7,9,-1,10,11,7,-1,14,4,13,-1,13,5,12,-1,12,6,11,-1,7,8,9,-1});
  }
}
protected class MFVec3f1220 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,0.01293f,-0.35656f,0.375f,0.00979f,-0.35729f,0.375f,0.00657f,-0.35781f,0.375f,0.0033f,-0.35814f,0.375f,0f,-0.35824f,0.375f,-0.0033f,-0.35814f,0.375f,-0.00657f,-0.35781f,0.375f,-0.00979f,-0.35729f,0.375f,-0.01293f,-0.35656f,0.75f,-0.01293f,-0.35656f,0.75f,-0.00979f,-0.35729f,0.75f,-0.00657f,-0.35781f,0.75f,-0.0033f,-0.35814f,0.75f,0f,-0.35824f,0.75f,0.0033f,-0.35814f,0.75f,0.00657f,-0.35781f,0.75f,0.00979f,-0.35729f,0.75f,0.01293f,-0.35656f});
  }
}
protected class MFVec3f1221 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.25766f,0.96623f,0f,-0.19432f,0.98094f,0f,-0.13005f,0.99151f,0f,-0.06518f,0.99787f,0f,0f,1f,0f,0.06518f,0.99787f,0f,0.13005f,0.99151f,0f,0.19432f,0.98094f,0f,0.25766f,0.96623f,0f,0.25766f,0.96623f,0f,0.19432f,0.98094f,0f,0.13005f,0.99151f,0f,0.06518f,0.99787f,0f,0f,1f,0f,-0.06518f,0.99787f,0f,-0.13005f,0.99151f,0f,-0.19432f,0.98094f,0f,-0.25766f,0.96623f});
  }
}
protected class MFInt321222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1223 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,0.41793f,-0.24856f,0.375f,0.01293f,-0.35656f,0.75f,0.01293f,-0.35656f,0.75f,0.41793f,-0.24856f});
  }
}
protected class MFVec3f1224 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f});
  }
}
protected class MFInt321225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1});
  }
}
protected class MFVec3f1226 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,0.45f,-0.21024f,0.375f,0.44987f,-0.21326f,0.375f,0.44948f,-0.21633f,0.375f,0.4488f,-0.21942f,0.375f,0.44784f,-0.2225f,0.375f,0.44658f,-0.22554f,0.375f,0.44503f,-0.22852f,0.375f,0.4432f,-0.23139f,0.375f,0.4411f,-0.23412f,0.375f,0.43876f,-0.23669f,0.375f,0.43619f,-0.23907f,0.375f,0.43343f,-0.24125f,0.375f,0.43052f,-0.24319f,0.375f,0.42747f,-0.2449f,0.375f,0.42434f,-0.24636f,0.375f,0.42115f,-0.24758f,0.375f,0.41793f,-0.24856f,0.75f,0.41793f,-0.24856f,0.75f,0.42115f,-0.24758f,0.75f,0.42434f,-0.24636f,0.75f,0.42747f,-0.2449f,0.75f,0.43052f,-0.24319f,0.75f,0.43343f,-0.24125f,0.75f,0.43619f,-0.23907f,0.75f,0.43876f,-0.23669f,0.75f,0.4411f,-0.23412f,0.75f,0.4432f,-0.23139f,0.75f,0.44503f,-0.22852f,0.75f,0.44658f,-0.22554f,0.75f,0.44784f,-0.2225f,0.75f,0.4488f,-0.21942f,0.75f,0.44948f,-0.21633f,0.75f,0.44987f,-0.21326f,0.75f,0.45f,-0.21024f});
  }
}
protected class MFVec3f1227 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-0.9964f,0.08481f,0f,-0.98534f,0.17062f,0f,-0.96661f,0.25625f,0f,-0.94024f,0.34052f,0f,-0.90649f,0.42222f,0f,-0.86587f,0.50027f,0f,-0.81904f,0.57373f,0f,-0.76682f,0.64186f,0f,-0.71011f,0.7041f,0f,-0.6498f,0.7601f,0f,-0.5868f,0.80973f,0f,-0.52195f,0.85298f,0f,-0.45599f,0.88999f,0f,-0.38959f,0.92099f,0f,-0.32332f,0.94629f,0f,-0.25766f,0.96623f,0f,-0.25766f,0.96623f,0f,-0.32332f,0.94629f,0f,-0.38959f,0.92099f,0f,-0.45599f,0.88999f,0f,-0.52195f,0.85298f,0f,-0.5868f,0.80973f,0f,-0.6498f,0.7601f,0f,-0.71011f,0.7041f,0f,-0.76682f,0.64186f,0f,-0.81904f,0.57373f,0f,-0.86587f,0.50027f,0f,-0.90649f,0.42222f,0f,-0.94024f,0.34052f,0f,-0.96661f,0.25625f,0f,-0.98534f,0.17062f,0f,-0.9964f,0.08481f,0f,-1f,0f});
  }
}
protected class MFInt321228 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1229 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,0.45f,-0.08f,0.375f,0.45f,-0.21024f,0.75f,0.45f,-0.21024f,0.75f,0.45f,-0.08f});
  }
}
protected class MFVec3f1230 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321231 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,31,1,2,-1,3,31,2,-1,3,30,31,-1,3,4,30,-1,30,4,29,-1,29,4,5,-1,28,5,6,-1,27,6,26,-1,27,28,6,-1,32,1,31,-1,29,5,28,-1,6,7,26,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1});
  }
}
protected class MFVec3f1232 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,0.405f,-0.04f,0.375f,0.40904f,-0.04017f,0.375f,0.41319f,-0.04067f,0.375f,0.41738f,-0.04155f,0.375f,0.42156f,-0.04281f,0.375f,0.42567f,-0.04447f,0.375f,0.42962f,-0.04652f,0.375f,0.43336f,-0.04895f,0.375f,0.43682f,-0.05172f,0.375f,0.43994f,-0.05479f,0.375f,0.44266f,-0.05812f,0.375f,0.44497f,-0.06163f,0.375f,0.44684f,-0.06528f,0.375f,0.44826f,-0.069f,0.375f,0.44925f,-0.07273f,0.375f,0.44982f,-0.07641f,0.375f,0.45f,-0.08f,0.75f,0.45f,-0.08f,0.75f,0.44982f,-0.07641f,0.75f,0.44925f,-0.07273f,0.75f,0.44826f,-0.069f,0.75f,0.44684f,-0.06528f,0.75f,0.44497f,-0.06163f,0.75f,0.44266f,-0.05812f,0.75f,0.43994f,-0.05479f,0.75f,0.43682f,-0.05172f,0.75f,0.43336f,-0.04895f,0.75f,0.42962f,-0.04652f,0.75f,0.42567f,-0.04447f,0.75f,0.42156f,-0.04281f,0.75f,0.41738f,-0.04155f,0.75f,0.41319f,-0.04067f,0.75f,0.40904f,-0.04017f,0.75f,0.405f,-0.04f});
  }
}
protected class MFVec3f1233 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,-1f,0f,-0.07994f,-0.9968f,0f,-0.16231f,-0.98674f,0f,-0.24655f,-0.96913f,0f,-0.33195f,-0.9433f,0f,-0.41761f,-0.90863f,0f,-0.50245f,-0.8646f,0f,-0.58519f,-0.81089f,0f,-0.66436f,-0.74741f,0f,-0.73837f,-0.67439f,0f,-0.80557f,-0.5925f,0f,-0.8644f,-0.50281f,0f,-0.9135f,-0.40685f,0f,-0.95188f,-0.30649f,0f,-0.97901f,-0.20381f,0f,-0.99489f,-0.10098f,0f,-1f,0f,0f,-1f,0f,0f,-0.99489f,-0.10098f,0f,-0.97901f,-0.20381f,0f,-0.95188f,-0.30649f,0f,-0.9135f,-0.40685f,0f,-0.8644f,-0.50281f,0f,-0.80557f,-0.5925f,0f,-0.73837f,-0.67439f,0f,-0.66436f,-0.74741f,0f,-0.58519f,-0.81089f,0f,-0.50245f,-0.8646f,0f,-0.41761f,-0.90863f,0f,-0.33195f,-0.9433f,0f,-0.24655f,-0.96913f,0f,-0.16231f,-0.98674f,0f,-0.07994f,-0.9968f,0f,0f,-1f});
  }
}
protected class MFInt321234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,48,0,-1,1,47,48,-1,1,46,47,-1,1,45,46,-1,1,44,45,-1,1,43,44,-1,1,42,43,-1,1,41,42,-1,1,40,41,-1,1,39,40,-1,1,38,39,-1,1,37,38,-1,1,36,37,-1,1,2,36,-1,36,2,35,-1,35,2,34,-1,34,2,33,-1,33,2,32,-1,32,2,31,-1,31,2,30,-1,30,2,29,-1,29,2,28,-1,28,2,27,-1,27,2,26,-1,26,2,3,-1,25,3,24,-1,25,26,3,-1,0,11,3,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,55,4,-1,0,54,55,-1,0,53,54,-1,0,52,53,-1,0,51,52,-1,0,50,51,-1,0,49,50,-1,0,48,49,-1,11,12,3,-1,3,12,13,-1,14,3,13,-1,14,15,3,-1,3,15,16,-1,17,3,16,-1,17,18,3,-1,3,18,19,-1,20,3,19,-1,20,21,3,-1,3,21,22,-1,23,3,22,-1,23,24,3,-1});
  }
}
protected class MFVec3f1235 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.405f,-0.04f,0.375f,0.405f,-0.04f,0.75f,0.405f,-0.04f,0.75f,-0.405f,-0.04f,0.47443f,-0.31008f,-0.04f,0.48347f,-0.31809f,-0.04f,0.49341f,-0.32495f,-0.04f,0.5041f,-0.33056f,-0.04f,0.51539f,-0.33484f,-0.04f,0.52711f,-0.33773f,-0.04f,0.5391f,-0.33918f,-0.04f,0.55118f,-0.33918f,-0.04f,0.56316f,-0.33773f,-0.04f,0.57489f,-0.33484f,-0.04f,0.58618f,-0.33056f,-0.04f,0.59687f,-0.32495f,-0.04f,0.60681f,-0.31809f,-0.04f,0.61585f,-0.31008f,-0.04f,0.62386f,-0.30104f,-0.04f,0.63072f,-0.2911f,-0.04f,0.63633f,-0.28041f,-0.04f,0.64061f,-0.26912f,-0.04f,0.6435f,-0.25739f,-0.04f,0.64496f,-0.24541f,-0.04f,0.64496f,-0.23333f,-0.04f,0.6435f,-0.22134f,-0.04f,0.64061f,-0.20962f,-0.04f,0.63633f,-0.19833f,-0.04f,0.63072f,-0.18763f,-0.04f,0.62386f,-0.1777f,-0.04f,0.61585f,-0.16866f,-0.04f,0.60681f,-0.16065f,-0.04f,0.59687f,-0.15379f,-0.04f,0.58618f,-0.14818f,-0.04f,0.57489f,-0.1439f,-0.04f,0.56316f,-0.14101f,-0.04f,0.55118f,-0.13955f,-0.04f,0.5391f,-0.13955f,-0.04f,0.52711f,-0.14101f,-0.04f,0.51539f,-0.1439f,-0.04f,0.5041f,-0.14818f,-0.04f,0.49341f,-0.15379f,-0.04f,0.48347f,-0.16065f,-0.04f,0.47443f,-0.16866f,-0.04f,0.46642f,-0.1777f,-0.04f,0.45956f,-0.18763f,-0.04f,0.45395f,-0.19833f,-0.04f,0.44967f,-0.20962f,-0.04f,0.44678f,-0.22134f,-0.04f,0.44532f,-0.23333f,-0.04f,0.44532f,-0.24541f,-0.04f,0.44678f,-0.25739f,-0.04f,0.44967f,-0.26912f,-0.04f,0.45395f,-0.28041f,-0.04f,0.45956f,-0.2911f,-0.04f,0.46642f,-0.30104f,-0.04f});
  }
}
protected class MFVec3f1236 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f});
  }
}
protected class MFInt321237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {33,0,32,-1,32,0,1,-1,31,1,2,-1,30,2,3,-1,29,3,4,-1,5,29,4,-1,5,28,29,-1,5,6,28,-1,28,6,27,-1,27,6,26,-1,26,6,7,-1,8,26,7,-1,8,25,26,-1,8,9,25,-1,25,9,24,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,19,-1,20,21,13,-1,32,1,31,-1,31,2,30,-1,30,3,29,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,13,14,19,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,19,15,18,-1});
  }
}
protected class MFVec3f1238 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.45f,-0.08f,0.375f,-0.44982f,-0.07641f,0.375f,-0.44925f,-0.07273f,0.375f,-0.44826f,-0.069f,0.375f,-0.44684f,-0.06528f,0.375f,-0.44497f,-0.06163f,0.375f,-0.44266f,-0.05812f,0.375f,-0.43994f,-0.05479f,0.375f,-0.43682f,-0.05172f,0.375f,-0.43336f,-0.04895f,0.375f,-0.42962f,-0.04652f,0.375f,-0.42567f,-0.04447f,0.375f,-0.42156f,-0.04281f,0.375f,-0.41738f,-0.04155f,0.375f,-0.41319f,-0.04067f,0.375f,-0.40904f,-0.04017f,0.375f,-0.405f,-0.04f,0.75f,-0.405f,-0.04f,0.75f,-0.40904f,-0.04017f,0.75f,-0.41319f,-0.04067f,0.75f,-0.41738f,-0.04155f,0.75f,-0.42156f,-0.04281f,0.75f,-0.42567f,-0.04447f,0.75f,-0.42962f,-0.04652f,0.75f,-0.43336f,-0.04895f,0.75f,-0.43682f,-0.05172f,0.75f,-0.43994f,-0.05479f,0.75f,-0.44266f,-0.05812f,0.75f,-0.44497f,-0.06163f,0.75f,-0.44684f,-0.06528f,0.75f,-0.44826f,-0.069f,0.75f,-0.44925f,-0.07273f,0.75f,-0.44982f,-0.07641f,0.75f,-0.45f,-0.08f});
  }
}
protected class MFVec3f1239 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,0.99489f,-0.10098f,0f,0.97901f,-0.20381f,0f,0.95188f,-0.30649f,0f,0.9135f,-0.40685f,0f,0.8644f,-0.50281f,0f,0.80557f,-0.5925f,0f,0.73837f,-0.67439f,0f,0.66436f,-0.74741f,0f,0.58519f,-0.81089f,0f,0.50245f,-0.8646f,0f,0.41761f,-0.90863f,0f,0.33195f,-0.9433f,0f,0.24655f,-0.96913f,0f,0.16231f,-0.98674f,0f,0.07994f,-0.9968f,0f,0f,-1f,0f,0f,-1f,0f,0.07994f,-0.9968f,0f,0.16231f,-0.98674f,0f,0.24655f,-0.96913f,0f,0.33195f,-0.9433f,0f,0.41761f,-0.90863f,0f,0.50245f,-0.8646f,0f,0.58519f,-0.81089f,0f,0.66436f,-0.74741f,0f,0.73837f,-0.67439f,0f,0.80557f,-0.5925f,0f,0.8644f,-0.50281f,0f,0.9135f,-0.40685f,0f,0.95188f,-0.30649f,0f,0.97901f,-0.20381f,0f,0.99489f,-0.10098f,0f,1f,0f});
  }
}
protected class MFInt321240 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1241 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.45f,-0.21024f,0.375f,-0.45f,-0.08f,0.75f,-0.45f,-0.08f,0.75f,-0.45f,-0.21024f});
  }
}
protected class MFVec3f1242 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321243 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,33,-1,33,1,32,-1,32,1,2,-1,31,2,3,-1,30,3,4,-1,29,4,5,-1,28,5,6,-1,27,6,7,-1,26,7,8,-1,25,8,9,-1,24,9,10,-1,23,10,11,-1,22,11,12,-1,21,12,13,-1,20,13,14,-1,19,14,15,-1,18,15,16,-1,17,18,16,-1,32,2,31,-1,31,3,30,-1,30,4,29,-1,29,5,28,-1,28,6,27,-1,27,7,26,-1,26,8,25,-1,25,9,24,-1,24,10,23,-1,23,11,22,-1,22,12,21,-1,21,13,20,-1,20,14,19,-1,19,15,18,-1});
  }
}
protected class MFVec3f1244 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.41793f,-0.24856f,0.375f,-0.42115f,-0.24758f,0.375f,-0.42434f,-0.24636f,0.375f,-0.42747f,-0.2449f,0.375f,-0.43052f,-0.24319f,0.375f,-0.43343f,-0.24125f,0.375f,-0.43619f,-0.23907f,0.375f,-0.43876f,-0.23669f,0.375f,-0.4411f,-0.23412f,0.375f,-0.4432f,-0.23139f,0.375f,-0.44503f,-0.22852f,0.375f,-0.44658f,-0.22554f,0.375f,-0.44784f,-0.2225f,0.375f,-0.4488f,-0.21942f,0.375f,-0.44948f,-0.21633f,0.375f,-0.44987f,-0.21326f,0.375f,-0.45f,-0.21024f,0.75f,-0.45f,-0.21024f,0.75f,-0.44987f,-0.21326f,0.75f,-0.44948f,-0.21633f,0.75f,-0.4488f,-0.21942f,0.75f,-0.44784f,-0.2225f,0.75f,-0.44658f,-0.22554f,0.75f,-0.44503f,-0.22852f,0.75f,-0.4432f,-0.23139f,0.75f,-0.4411f,-0.23412f,0.75f,-0.43876f,-0.23669f,0.75f,-0.43619f,-0.23907f,0.75f,-0.43343f,-0.24125f,0.75f,-0.43052f,-0.24319f,0.75f,-0.42747f,-0.2449f,0.75f,-0.42434f,-0.24636f,0.75f,-0.42115f,-0.24758f,0.75f,-0.41793f,-0.24856f});
  }
}
protected class MFVec3f1245 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.25766f,0.96623f,0f,0.32332f,0.94629f,0f,0.38959f,0.92099f,0f,0.45599f,0.88999f,0f,0.52195f,0.85298f,0f,0.5868f,0.80973f,0f,0.6498f,0.7601f,0f,0.71011f,0.7041f,0f,0.76682f,0.64186f,0f,0.81904f,0.57373f,0f,0.86587f,0.50027f,0f,0.90649f,0.42222f,0f,0.94024f,0.34052f,0f,0.96661f,0.25625f,0f,0.98534f,0.17062f,0f,0.9964f,0.08481f,0f,1f,0f,0f,1f,0f,0f,0.9964f,0.08481f,0f,0.98534f,0.17062f,0f,0.96661f,0.25625f,0f,0.94024f,0.34052f,0f,0.90649f,0.42222f,0f,0.86587f,0.50027f,0f,0.81904f,0.57373f,0f,0.76682f,0.64186f,0f,0.71011f,0.7041f,0f,0.6498f,0.7601f,0f,0.5868f,0.80973f,0f,0.52195f,0.85298f,0f,0.45599f,0.88999f,0f,0.38959f,0.92099f,0f,0.32332f,0.94629f,0f,0.25766f,0.96623f});
  }
}
protected class MFInt321246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {76,0,47,-1,48,76,47,-1,48,75,76,-1,48,49,75,-1,75,49,74,-1,74,49,61,-1,62,74,61,-1,62,63,74,-1,74,63,64,-1,65,74,64,-1,65,66,74,-1,74,66,67,-1,68,74,67,-1,68,69,74,-1,74,69,70,-1,71,74,70,-1,71,72,74,-1,74,72,73,-1,2,43,1,-1,2,3,43,-1,43,3,4,-1,5,43,4,-1,5,6,43,-1,43,6,7,-1,8,43,7,-1,8,9,43,-1,43,9,10,-1,42,10,41,-1,42,43,10,-1,11,39,10,-1,11,12,39,-1,39,12,38,-1,38,12,13,-1,37,13,14,-1,36,14,15,-1,35,15,16,-1,17,35,16,-1,17,34,35,-1,17,18,34,-1,34,18,33,-1,33,18,19,-1,32,19,20,-1,31,20,21,-1,22,31,21,-1,22,30,31,-1,22,23,30,-1,30,23,29,-1,29,23,24,-1,28,24,25,-1,27,25,26,-1,27,28,25,-1,38,13,37,-1,37,14,36,-1,36,15,35,-1,33,19,32,-1,32,20,31,-1,29,24,28,-1,39,40,10,-1,10,40,41,-1,43,44,1,-1,1,44,45,-1,46,1,45,-1,46,47,1,-1,1,47,0,-1,50,52,49,-1,50,51,52,-1,52,53,49,-1,49,53,54,-1,55,49,54,-1,55,56,49,-1,49,56,57,-1,58,49,57,-1,58,59,49,-1,49,59,60,-1,61,49,60,-1});
  }
}
protected class MFVec3f1247 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.375f,-0.41793f,-0.24856f,0.375f,-0.01293f,-0.35656f,0.375f,-0.00979f,-0.35729f,0.375f,-0.00657f,-0.35781f,0.375f,-0.0033f,-0.35814f,0.375f,0f,-0.35824f,0.375f,0.0033f,-0.35814f,0.375f,0.00657f,-0.35781f,0.375f,0.00979f,-0.35729f,0.375f,0.01293f,-0.35656f,0.375f,0.41793f,-0.24856f,0.375f,0.42115f,-0.24758f,0.375f,0.42434f,-0.24636f,0.375f,0.42747f,-0.2449f,0.375f,0.43052f,-0.24319f,0.375f,0.43343f,-0.24125f,0.375f,0.43619f,-0.23907f,0.375f,0.43876f,-0.23669f,0.375f,0.4411f,-0.23412f,0.375f,0.4432f,-0.23139f,0.375f,0.44503f,-0.22852f,0.375f,0.44658f,-0.22554f,0.375f,0.44784f,-0.2225f,0.375f,0.4488f,-0.21942f,0.375f,0.44948f,-0.21633f,0.375f,0.44987f,-0.21326f,0.375f,0.45f,-0.21024f,0.375f,0.45f,-0.08f,0.375f,0.44982f,-0.07641f,0.375f,0.44925f,-0.07273f,0.375f,0.44826f,-0.069f,0.375f,0.44684f,-0.06528f,0.375f,0.44497f,-0.06163f,0.375f,0.44266f,-0.05812f,0.375f,0.43994f,-0.05479f,0.375f,0.43682f,-0.05172f,0.375f,0.43336f,-0.04895f,0.375f,0.42962f,-0.04652f,0.375f,0.42567f,-0.04447f,0.375f,0.42156f,-0.04281f,0.375f,0.41738f,-0.04155f,0.375f,0.41319f,-0.04067f,0.375f,0.40904f,-0.04017f,0.375f,0.405f,-0.04f,0.375f,-0.405f,-0.04f,0.375f,-0.40904f,-0.04017f,0.375f,-0.41319f,-0.04067f,0.375f,-0.41738f,-0.04155f,0.375f,-0.42156f,-0.04281f,0.375f,-0.42567f,-0.04447f,0.375f,-0.42962f,-0.04652f,0.375f,-0.43336f,-0.04895f,0.375f,-0.43682f,-0.05172f,0.375f,-0.43994f,-0.05479f,0.375f,-0.44266f,-0.05812f,0.375f,-0.44497f,-0.06163f,0.375f,-0.44684f,-0.06528f,0.375f,-0.44826f,-0.069f,0.375f,-0.44925f,-0.07273f,0.375f,-0.44982f,-0.07641f,0.375f,-0.45f,-0.08f,0.375f,-0.45f,-0.21024f,0.375f,-0.44987f,-0.21326f,0.375f,-0.44948f,-0.21633f,0.375f,-0.4488f,-0.21942f,0.375f,-0.44784f,-0.2225f,0.375f,-0.44658f,-0.22554f,0.375f,-0.44503f,-0.22852f,0.375f,-0.4432f,-0.23139f,0.375f,-0.4411f,-0.23412f,0.375f,-0.43876f,-0.23669f,0.375f,-0.43619f,-0.23907f,0.375f,-0.43343f,-0.24125f,0.375f,-0.43052f,-0.24319f,0.375f,-0.42747f,-0.2449f,0.375f,-0.42434f,-0.24636f,0.375f,-0.42115f,-0.24758f});
  }
}
protected class MFVec3f1248 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt321249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,54,0,-1,1,53,54,-1,1,52,53,-1,1,51,52,-1,1,50,51,-1,1,49,50,-1,1,48,49,-1,1,47,48,-1,1,46,47,-1,1,45,46,-1,1,44,45,-1,1,43,44,-1,1,2,43,-1,43,2,42,-1,42,2,41,-1,41,2,40,-1,40,2,39,-1,39,2,38,-1,38,2,37,-1,37,2,36,-1,36,2,35,-1,35,2,34,-1,34,2,33,-1,33,2,32,-1,32,2,3,-1,31,3,30,-1,31,32,3,-1,0,17,3,-1,0,16,17,-1,0,15,16,-1,0,14,15,-1,0,13,14,-1,0,12,13,-1,0,11,12,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,55,4,-1,0,54,55,-1,17,18,3,-1,3,18,19,-1,20,3,19,-1,20,21,3,-1,3,21,22,-1,23,3,22,-1,23,24,3,-1,3,24,25,-1,26,3,25,-1,26,27,3,-1,3,27,28,-1,29,3,28,-1,29,30,3,-1});
  }
}
protected class MFVec3f1250 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,-0.46437f,-0.26069f,-0.75f,-0.46437f,-0.26069f,-0.75f,-0.01437f,-0.39569f,0.75f,-0.01437f,-0.39569f,0.54514f,-0.33937f,-0.29819f,0.55719f,-0.33864f,-0.29841f,0.56907f,-0.33646f,-0.29906f,0.5806f,-0.33287f,-0.30014f,0.59161f,-0.32791f,-0.30163f,0.60195f,-0.32167f,-0.3035f,0.61145f,-0.31422f,-0.30573f,0.61999f,-0.30568f,-0.3083f,0.62744f,-0.29617f,-0.31115f,0.63368f,-0.28584f,-0.31425f,0.63864f,-0.27483f,-0.31755f,0.64223f,-0.2633f,-0.32101f,0.64441f,-0.25142f,-0.32457f,0.64514f,-0.23937f,-0.32819f,0.64441f,-0.22731f,-0.33181f,0.64223f,-0.21544f,-0.33537f,0.63864f,-0.20391f,-0.33883f,0.63368f,-0.1929f,-0.34213f,0.62744f,-0.18256f,-0.34523f,0.61999f,-0.17306f,-0.34808f,0.61145f,-0.16452f,-0.35065f,0.60195f,-0.15707f,-0.35288f,0.59161f,-0.15082f,-0.35475f,0.5806f,-0.14587f,-0.35624f,0.56907f,-0.14227f,-0.35732f,0.55719f,-0.1401f,-0.35797f,0.54514f,-0.13937f,-0.35819f,0.53309f,-0.1401f,-0.35797f,0.52121f,-0.14227f,-0.35732f,0.50968f,-0.14587f,-0.35624f,0.49867f,-0.15082f,-0.35475f,0.48833f,-0.15707f,-0.35288f,0.47883f,-0.16452f,-0.35065f,0.47029f,-0.17306f,-0.34808f,0.46284f,-0.18256f,-0.34523f,0.45659f,-0.1929f,-0.34213f,0.45164f,-0.20391f,-0.33883f,0.44804f,-0.21544f,-0.33537f,0.44587f,-0.22731f,-0.33181f,0.44514f,-0.23937f,-0.32819f,0.44587f,-0.25142f,-0.32457f,0.44804f,-0.2633f,-0.32101f,0.45164f,-0.27483f,-0.31755f,0.45659f,-0.28584f,-0.31425f,0.46284f,-0.29617f,-0.31115f,0.47029f,-0.30568f,-0.3083f,0.47883f,-0.31422f,-0.30573f,0.48833f,-0.32167f,-0.3035f,0.49867f,-0.32791f,-0.30163f,0.50968f,-0.33287f,-0.30014f,0.52121f,-0.33646f,-0.29906f,0.53309f,-0.33864f,-0.29841f});
  }
}
protected class MFVec3f1251 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f});
  }
}
protected class MFInt321252 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f1253 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,-0.46437f,-0.26069f,0.75f,-0.46983f,-0.2587f,0.75f,-0.47502f,-0.25609f,0.75f,-0.47987f,-0.25289f,0.75f,-0.48433f,-0.24915f,0.75f,-0.48831f,-0.24493f,0.75f,-0.49178f,-0.24026f,0.75f,-0.49469f,-0.23523f,0.75f,-0.49699f,-0.22989f,0.75f,-0.49865f,-0.22432f,0.75f,-0.49966f,-0.2186f,0.75f,-0.5f,-0.2128f,-0.75f,-0.5f,-0.2128f,-0.75f,-0.49966f,-0.2186f,-0.75f,-0.49865f,-0.22432f,-0.75f,-0.49699f,-0.22989f,-0.75f,-0.49469f,-0.23523f,-0.75f,-0.49178f,-0.24026f,-0.75f,-0.48831f,-0.24493f,-0.75f,-0.48433f,-0.24915f,-0.75f,-0.47987f,-0.25289f,-0.75f,-0.47502f,-0.25609f,-0.75f,-0.46983f,-0.2587f,-0.75f,-0.46437f,-0.26069f});
  }
}
protected class MFVec3f1254 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-0.28735f,-0.95783f,0f,-0.39655f,-0.91801f,0f,-0.5004f,-0.86579f,0f,-0.59749f,-0.80188f,0f,-0.6865f,-0.72713f,0f,-0.76624f,-0.64255f,0f,-0.83563f,-0.54929f,0f,-0.89373f,-0.44861f,0f,-0.93975f,-0.34187f,0f,-0.97307f,-0.23052f,0f,-0.99324f,-0.11604f,0f,-1f,0f,0f,-1f,0f,0f,-0.99324f,-0.11604f,0f,-0.97307f,-0.23052f,0f,-0.93975f,-0.34187f,0f,-0.89373f,-0.44861f,0f,-0.83563f,-0.54929f,0f,-0.76624f,-0.64255f,0f,-0.6865f,-0.72713f,0f,-0.59749f,-0.80188f,0f,-0.5004f,-0.86579f,0f,-0.39655f,-0.91801f,0f,-0.28735f,-0.95783f});
  }
}
protected class MFInt321255 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,73,0,-1,1,72,73,-1,1,2,72,-1,72,2,71,-1,71,2,70,-1,70,2,3,-1,69,3,4,-1,68,4,5,-1,67,5,66,-1,67,68,5,-1,70,3,69,-1,69,4,68,-1,5,6,66,-1,66,6,65,-1,65,6,7,-1,64,7,8,-1,63,8,9,-1,62,9,10,-1,11,62,10,-1,11,61,62,-1,11,60,61,-1,11,12,60,-1,60,12,59,-1,59,12,58,-1,58,12,13,-1,134,13,133,-1,134,58,13,-1,65,7,64,-1,64,8,63,-1,63,9,62,-1,13,14,133,-1,133,14,132,-1,132,14,131,-1,131,14,15,-1,130,15,16,-1,129,16,128,-1,129,130,16,-1,131,15,130,-1,16,17,128,-1,128,17,127,-1,127,17,126,-1,126,17,18,-1,125,18,124,-1,125,126,18,-1,19,40,18,-1,19,39,40,-1,19,20,39,-1,39,20,38,-1,38,20,21,-1,37,21,22,-1,36,22,23,-1,35,23,24,-1,34,24,25,-1,33,25,26,-1,32,26,27,-1,31,27,28,-1,30,28,29,-1,30,31,28,-1,38,21,37,-1,37,22,36,-1,36,23,35,-1,35,24,34,-1,34,25,33,-1,33,26,32,-1,32,27,31,-1,40,41,18,-1,18,41,42,-1,110,42,109,-1,110,18,42,-1,110,111,18,-1,18,111,112,-1,113,18,112,-1,113,114,18,-1,18,114,115,-1,116,18,115,-1,116,117,18,-1,18,117,118,-1,119,18,118,-1,119,120,18,-1,18,120,121,-1,122,18,121,-1,122,123,18,-1,18,123,124,-1,43,96,42,-1,43,95,96,-1,43,94,95,-1,43,93,94,-1,43,92,93,-1,43,44,92,-1,92,44,91,-1,91,44,90,-1,90,44,89,-1,89,44,88,-1,88,44,87,-1,87,44,86,-1,86,44,85,-1,85,44,84,-1,84,44,83,-1,83,44,82,-1,82,44,81,-1,81,44,80,-1,80,44,79,-1,79,44,78,-1,78,44,77,-1,77,44,76,-1,76,44,45,-1,55,45,54,-1,55,76,45,-1,55,56,76,-1,76,56,57,-1,0,76,57,-1,0,75,76,-1,0,74,75,-1,0,73,74,-1,46,47,45,-1,45,47,48,-1,49,45,48,-1,49,50,45,-1,45,50,51,-1,52,45,51,-1,52,53,45,-1,45,53,54,-1,96,97,42,-1,42,97,98,-1,99,42,98,-1,99,100,42,-1,42,100,101,-1,102,42,101,-1,102,103,42,-1,42,103,104,-1,105,42,104,-1,105,106,42,-1,42,106,107,-1,108,42,107,-1,108,109,42,-1});
  }
}
protected class MFVec3f1256 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,-0.5f,-0.2128f,0.75f,-0.49966f,-0.2186f,0.75f,-0.49865f,-0.22432f,0.75f,-0.49699f,-0.22989f,0.75f,-0.49469f,-0.23523f,0.75f,-0.49178f,-0.24026f,0.75f,-0.48831f,-0.24493f,0.75f,-0.48433f,-0.24915f,0.75f,-0.47987f,-0.25289f,0.75f,-0.47502f,-0.25609f,0.75f,-0.46983f,-0.2587f,0.75f,-0.46437f,-0.26069f,0.75f,-0.01437f,-0.39569f,0.75f,-0.0087f,-0.39704f,0.75f,-0.00291f,-0.39771f,0.75f,0.00291f,-0.39771f,0.75f,0.0087f,-0.39704f,0.75f,0.01437f,-0.39569f,0.75f,0.46437f,-0.26069f,0.75f,0.46983f,-0.2587f,0.75f,0.47502f,-0.25609f,0.75f,0.47987f,-0.25289f,0.75f,0.48433f,-0.24915f,0.75f,0.48831f,-0.24493f,0.75f,0.49178f,-0.24026f,0.75f,0.49469f,-0.23523f,0.75f,0.49699f,-0.22989f,0.75f,0.49865f,-0.22432f,0.75f,0.49966f,-0.2186f,0.75f,0.5f,-0.2128f,0.75f,0.5f,-0.05f,0.75f,0.49964f,-0.04397f,0.75f,0.49855f,-0.03803f,0.75f,0.49675f,-0.03227f,0.75f,0.49427f,-0.02676f,0.75f,0.49115f,-0.0216f,0.75f,0.48743f,-0.01684f,0.75f,0.48316f,-0.01257f,0.75f,0.4784f,-0.00885f,0.75f,0.47324f,-0.00573f,0.75f,0.46773f,-0.00325f,0.75f,0.46197f,-0.00145f,0.75f,0.45603f,-0.00036f,0.75f,0.45f,0f,0.75f,-0.45f,0f,0.75f,-0.45603f,-0.00036f,0.75f,-0.46197f,-0.00145f,0.75f,-0.46773f,-0.00325f,0.75f,-0.47324f,-0.00573f,0.75f,-0.4784f,-0.00885f,0.75f,-0.48316f,-0.01257f,0.75f,-0.48743f,-0.01684f,0.75f,-0.49115f,-0.0216f,0.75f,-0.49427f,-0.02676f,0.75f,-0.49675f,-0.03227f,0.75f,-0.49855f,-0.03803f,0.75f,-0.49964f,-0.04397f,0.75f,-0.5f,-0.05f,0.75f,-0.01293f,-0.35656f,0.75f,-0.41793f,-0.24856f,0.75f,-0.42115f,-0.24758f,0.75f,-0.42434f,-0.24636f,0.75f,-0.42747f,-0.2449f,0.75f,-0.43052f,-0.24319f,0.75f,-0.43343f,-0.24125f,0.75f,-0.43619f,-0.23907f,0.75f,-0.43876f,-0.23669f,0.75f,-0.4411f,-0.23412f,0.75f,-0.4432f,-0.23139f,0.75f,-0.44503f,-0.22852f,0.75f,-0.44658f,-0.22554f,0.75f,-0.44784f,-0.2225f,0.75f,-0.4488f,-0.21942f,0.75f,-0.44948f,-0.21633f,0.75f,-0.44987f,-0.21326f,0.75f,-0.45f,-0.21024f,0.75f,-0.45f,-0.08f,0.75f,-0.44982f,-0.07641f,0.75f,-0.44925f,-0.07273f,0.75f,-0.44826f,-0.069f,0.75f,-0.44684f,-0.06528f,0.75f,-0.44497f,-0.06163f,0.75f,-0.44266f,-0.05812f,0.75f,-0.43994f,-0.05479f,0.75f,-0.43682f,-0.05172f,0.75f,-0.43336f,-0.04895f,0.75f,-0.42962f,-0.04652f,0.75f,-0.42567f,-0.04447f,0.75f,-0.42156f,-0.04281f,0.75f,-0.41738f,-0.04155f,0.75f,-0.41319f,-0.04067f,0.75f,-0.40904f,-0.04017f,0.75f,-0.405f,-0.04f,0.75f,0.405f,-0.04f,0.75f,0.40904f,-0.04017f,0.75f,0.41319f,-0.04067f,0.75f,0.41738f,-0.04155f,0.75f,0.42156f,-0.04281f,0.75f,0.42567f,-0.04447f,0.75f,0.42962f,-0.04652f,0.75f,0.43336f,-0.04895f,0.75f,0.43682f,-0.05172f,0.75f,0.43994f,-0.05479f,0.75f,0.44266f,-0.05812f,0.75f,0.44497f,-0.06163f,0.75f,0.44684f,-0.06528f,0.75f,0.44826f,-0.069f,0.75f,0.44925f,-0.07273f,0.75f,0.44982f,-0.07641f,0.75f,0.45f,-0.08f,0.75f,0.45f,-0.21024f,0.75f,0.44987f,-0.21326f,0.75f,0.44948f,-0.21633f,0.75f,0.4488f,-0.21942f,0.75f,0.44784f,-0.2225f,0.75f,0.44658f,-0.22554f,0.75f,0.44503f,-0.22852f,0.75f,0.4432f,-0.23139f,0.75f,0.4411f,-0.23412f,0.75f,0.43876f,-0.23669f,0.75f,0.43619f,-0.23907f,0.75f,0.43343f,-0.24125f,0.75f,0.43052f,-0.24319f,0.75f,0.42747f,-0.2449f,0.75f,0.42434f,-0.24636f,0.75f,0.42115f,-0.24758f,0.75f,0.41793f,-0.24856f,0.75f,0.01293f,-0.35656f,0.75f,0.00979f,-0.35729f,0.75f,0.00657f,-0.35781f,0.75f,0.0033f,-0.35814f,0.75f,0f,-0.35824f,0.75f,-0.0033f,-0.35814f,0.75f,-0.00657f,-0.35781f,0.75f,-0.00979f,-0.35729f});
  }
}
protected class MFVec3f1257 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt321258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,11,-1,11,1,10,-1,10,1,2,-1,9,2,3,-1,8,3,4,-1,7,4,5,-1,6,7,5,-1,10,2,9,-1,9,3,8,-1,8,4,7,-1});
  }
}
protected class MFVec3f1259 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,0.01437f,-0.39569f,0.75f,0.0087f,-0.39704f,0.75f,0.00291f,-0.39771f,0.75f,-0.00291f,-0.39771f,0.75f,-0.0087f,-0.39704f,0.75f,-0.01437f,-0.39569f,-0.75f,-0.01437f,-0.39569f,-0.75f,-0.0087f,-0.39704f,-0.75f,-0.00291f,-0.39771f,-0.75f,0.00291f,-0.39771f,-0.75f,0.0087f,-0.39704f,-0.75f,0.01437f,-0.39569f});
  }
}
protected class MFVec3f1260 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.28735f,-0.95783f,0f,0.17398f,-0.98475f,0f,0.05826f,-0.9983f,0f,-0.05826f,-0.9983f,0f,-0.17398f,-0.98475f,0f,-0.28735f,-0.95783f,0f,-0.28735f,-0.95783f,0f,-0.17398f,-0.98475f,0f,-0.05826f,-0.9983f,0f,0.05826f,-0.9983f,0f,0.17398f,-0.98475f,0f,0.28735f,-0.95783f});
  }
}
protected class MFInt321261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,4,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,26,2,25,-1,25,3,24,-1,24,4,23,-1,23,5,22,-1,22,6,21,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1});
  }
}
protected class MFVec3f1262 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,-0.5f,-0.05f,0.75f,-0.49964f,-0.04397f,0.75f,-0.49855f,-0.03803f,0.75f,-0.49675f,-0.03227f,0.75f,-0.49427f,-0.02676f,0.75f,-0.49115f,-0.0216f,0.75f,-0.48743f,-0.01684f,0.75f,-0.48316f,-0.01257f,0.75f,-0.4784f,-0.00885f,0.75f,-0.47324f,-0.00573f,0.75f,-0.46773f,-0.00325f,0.75f,-0.46197f,-0.00145f,0.75f,-0.45603f,-0.00036f,0.75f,-0.45f,0f,-0.75f,-0.45f,0f,-0.75f,-0.45603f,-0.00036f,-0.75f,-0.46197f,-0.00145f,-0.75f,-0.46773f,-0.00325f,-0.75f,-0.47324f,-0.00573f,-0.75f,-0.4784f,-0.00885f,-0.75f,-0.48316f,-0.01257f,-0.75f,-0.48743f,-0.01684f,-0.75f,-0.49115f,-0.0216f,-0.75f,-0.49427f,-0.02676f,-0.75f,-0.49675f,-0.03227f,-0.75f,-0.49855f,-0.03803f,-0.75f,-0.49964f,-0.04397f,-0.75f,-0.5f,-0.05f});
  }
}
protected class MFVec3f1263 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-0.99271f,0.12054f,0f,-0.97094f,0.23932f,0f,-0.93502f,0.3546f,0f,-0.88546f,0.46472f,0f,-0.82298f,0.56806f,0f,-0.74851f,0.66312f,0f,-0.66312f,0.74851f,0f,-0.56806f,0.82298f,0f,-0.46472f,0.88546f,0f,-0.3546f,0.93502f,0f,-0.23932f,0.97094f,0f,-0.12054f,0.99271f,0f,0f,1f,0f,0f,1f,0f,-0.12054f,0.99271f,0f,-0.23932f,0.97094f,0f,-0.3546f,0.93502f,0f,-0.46472f,0.88546f,0f,-0.56806f,0.82298f,0f,-0.66312f,0.74851f,0f,-0.74851f,0.66312f,0f,-0.82298f,0.56806f,0f,-0.88546f,0.46472f,0f,-0.93502f,0.3546f,0f,-0.97094f,0.23932f,0f,-0.99271f,0.12054f,0f,-1f,0f});
  }
}
protected class MFInt321264 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {69,0,54,-1,55,69,54,-1,55,68,69,-1,55,67,68,-1,55,66,67,-1,55,65,66,-1,55,56,65,-1,65,56,64,-1,64,56,57,-1,63,57,58,-1,62,58,59,-1,61,59,60,-1,61,62,59,-1,0,1,54,-1,54,1,2,-1,3,54,2,-1,3,17,54,-1,3,4,17,-1,17,4,16,-1,16,4,5,-1,15,5,14,-1,15,16,5,-1,5,6,14,-1,14,6,13,-1,13,6,7,-1,12,7,8,-1,9,12,8,-1,9,10,12,-1,12,10,11,-1,13,7,12,-1,54,17,53,-1,53,17,18,-1,52,18,19,-1,51,19,20,-1,50,20,21,-1,49,21,22,-1,48,22,23,-1,24,48,23,-1,24,47,48,-1,24,25,47,-1,47,25,46,-1,46,25,26,-1,45,26,44,-1,45,46,26,-1,53,18,52,-1,52,19,51,-1,51,20,50,-1,50,21,49,-1,49,22,48,-1,26,27,44,-1,44,27,43,-1,43,27,28,-1,42,28,29,-1,41,29,30,-1,40,30,31,-1,39,31,32,-1,38,32,33,-1,37,33,34,-1,36,34,35,-1,36,37,34,-1,43,28,42,-1,42,29,41,-1,41,30,40,-1,40,31,39,-1,39,32,38,-1,38,33,37,-1,64,57,63,-1,63,58,62,-1});
  }
}
protected class MFVec3f1265 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.04773f,-0.25877f,0f,-0.04579f,-0.25871f,0f,-0.04384f,-0.25852f,0f,-0.03993f,-0.25779f,0f,-0.03607f,-0.25661f,0f,-0.03234f,-0.25501f,0f,-0.0288f,-0.25302f,0f,-0.02555f,-0.25067f,0f,-0.02405f,-0.24936f,0f,-0.02264f,-0.24798f,0f,-0.02135f,-0.24652f,0f,-0.02017f,-0.24499f,0f,-0.01759f,-0.24034f,0f,-0.01546f,-0.23545f,0f,-0.01375f,-0.23036f,0f,-0.01243f,-0.22512f,0f,-0.01081f,-0.21439f,0f,-0.01032f,-0.20364f,0f,-0.0107f,-0.19283f,0f,-0.01216f,-0.18198f,0f,-0.01343f,-0.17671f,0f,-0.01516f,-0.17163f,0f,-0.01738f,-0.16681f,0f,-0.0187f,-0.16451f,0f,-0.02017f,-0.1623f,0f,-0.02238f,-0.15918f,0f,-0.025f,-0.15626f,0f,-0.02796f,-0.15358f,0f,-0.0312f,-0.15124f,0f,-0.03466f,-0.14929f,0f,-0.03646f,-0.14849f,0f,-0.03828f,-0.14782f,0f,-0.04013f,-0.14728f,0f,-0.042f,-0.14688f,0f,-0.04388f,-0.14663f,0f,-0.04576f,-0.14655f,0f,-0.04775f,-0.14663f,0f,-0.04975f,-0.14686f,0f,-0.05175f,-0.14723f,0f,-0.05374f,-0.14775f,0f,-0.05571f,-0.1484f,0f,-0.05765f,-0.14917f,0f,-0.06141f,-0.15106f,0f,-0.06493f,-0.15337f,0f,-0.06814f,-0.15605f,0f,-0.0696f,-0.15751f,0f,-0.07096f,-0.15905f,0f,-0.07221f,-0.16064f,0f,-0.07332f,-0.1623f,0f,-0.07566f,-0.167f,0f,-0.07749f,-0.17193f,0f,-0.07887f,-0.17704f,0f,-0.07987f,-0.18228f,0f,-0.08095f,-0.19298f,0f,-0.0812f,-0.20364f,0f,-0.08085f,-0.21426f,0f,-0.07961f,-0.22487f,0f,-0.07857f,-0.23009f,0f,-0.0772f,-0.23521f,0f,-0.07546f,-0.24018f,0f,-0.07332f,-0.24499f,0f,-0.071f,-0.24784f,0f,-0.06831f,-0.25047f,0f,-0.06531f,-0.25281f,0f,-0.06205f,-0.25483f,0f,-0.0586f,-0.25649f,0f,-0.05502f,-0.25772f,0f,-0.05321f,-0.25817f,0f,-0.05138f,-0.2585f,0f,-0.04955f,-0.2587f,0f});
  }
}
protected class MFVec3f1266 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt321267 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,23,-1,23,1,22,-1,22,1,2,-1,21,2,3,-1,20,3,4,-1,19,4,5,-1,18,5,6,-1,17,6,7,-1,16,7,8,-1,15,8,9,-1,14,9,10,-1,13,10,11,-1,12,13,11,-1,22,2,21,-1,21,3,20,-1,20,4,19,-1,19,5,18,-1,18,6,17,-1,17,7,16,-1,16,8,15,-1,15,9,14,-1,14,10,13,-1});
  }
}
protected class MFVec3f1268 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,0.5f,-0.2128f,0.75f,0.49966f,-0.2186f,0.75f,0.49865f,-0.22432f,0.75f,0.49699f,-0.22989f,0.75f,0.49469f,-0.23523f,0.75f,0.49178f,-0.24026f,0.75f,0.48831f,-0.24493f,0.75f,0.48433f,-0.24915f,0.75f,0.47987f,-0.25289f,0.75f,0.47502f,-0.25609f,0.75f,0.46983f,-0.2587f,0.75f,0.46437f,-0.26069f,-0.75f,0.46437f,-0.26069f,-0.75f,0.46983f,-0.2587f,-0.75f,0.47502f,-0.25609f,-0.75f,0.47987f,-0.25289f,-0.75f,0.48433f,-0.24915f,-0.75f,0.48831f,-0.24493f,-0.75f,0.49178f,-0.24026f,-0.75f,0.49469f,-0.23523f,-0.75f,0.49699f,-0.22989f,-0.75f,0.49865f,-0.22432f,-0.75f,0.49966f,-0.2186f,-0.75f,0.5f,-0.2128f});
  }
}
protected class MFVec3f1269 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,0.99324f,-0.11604f,0f,0.97307f,-0.23052f,0f,0.93975f,-0.34187f,0f,0.89373f,-0.44861f,0f,0.83563f,-0.54929f,0f,0.76624f,-0.64255f,0f,0.6865f,-0.72713f,0f,0.59749f,-0.80188f,0f,0.5004f,-0.86579f,0f,0.39655f,-0.91801f,0f,0.28735f,-0.95783f,0f,0.28735f,-0.95783f,0f,0.39655f,-0.91801f,0f,0.5004f,-0.86579f,0f,0.59749f,-0.80188f,0f,0.6865f,-0.72713f,0f,0.76624f,-0.64255f,0f,0.83563f,-0.54929f,0f,0.89373f,-0.44861f,0f,0.93975f,-0.34187f,0f,0.97307f,-0.23052f,0f,0.99324f,-0.11604f,0f,1f,0f});
  }
}
protected class MFInt321270 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,-1,3,1,2,-1});
  }
}
protected class MFVec3f1271 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,0.01437f,-0.39569f,-0.75f,0.01437f,-0.39569f,-0.75f,0.46437f,-0.26069f,0.75f,0.46437f,-0.26069f});
  }
}
protected class MFVec3f1272 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0.28735f,-0.95783f,0f,0.28735f,-0.95783f,0f,0.28735f,-0.95783f,0f,0.28735f,-0.95783f});
  }
}
protected class MFInt321273 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,27,-1,27,1,26,-1,26,1,2,-1,25,2,3,-1,24,3,4,-1,23,4,5,-1,22,5,6,-1,21,6,7,-1,20,7,8,-1,19,8,9,-1,18,9,10,-1,17,10,11,-1,16,11,12,-1,15,12,13,-1,14,15,13,-1,26,2,25,-1,25,3,24,-1,24,4,23,-1,23,5,22,-1,22,6,21,-1,21,7,20,-1,20,8,19,-1,19,9,18,-1,18,10,17,-1,17,11,16,-1,16,12,15,-1});
  }
}
protected class MFVec3f1274 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,0.45f,0f,0.75f,0.45603f,-0.00036f,0.75f,0.46197f,-0.00145f,0.75f,0.46773f,-0.00325f,0.75f,0.47324f,-0.00573f,0.75f,0.4784f,-0.00885f,0.75f,0.48316f,-0.01257f,0.75f,0.48743f,-0.01684f,0.75f,0.49115f,-0.0216f,0.75f,0.49427f,-0.02676f,0.75f,0.49675f,-0.03227f,0.75f,0.49855f,-0.03803f,0.75f,0.49964f,-0.04397f,0.75f,0.5f,-0.05f,-0.75f,0.5f,-0.05f,-0.75f,0.49964f,-0.04397f,-0.75f,0.49855f,-0.03803f,-0.75f,0.49675f,-0.03227f,-0.75f,0.49427f,-0.02676f,-0.75f,0.49115f,-0.0216f,-0.75f,0.48743f,-0.01684f,-0.75f,0.48316f,-0.01257f,-0.75f,0.4784f,-0.00885f,-0.75f,0.47324f,-0.00573f,-0.75f,0.46773f,-0.00325f,-0.75f,0.46197f,-0.00145f,-0.75f,0.45603f,-0.00036f,-0.75f,0.45f,0f});
  }
}
protected class MFVec3f1275 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,1f,0f,0.12054f,0.99271f,0f,0.23932f,0.97094f,0f,0.3546f,0.93502f,0f,0.46472f,0.88546f,0f,0.56806f,0.82298f,0f,0.66312f,0.74851f,0f,0.74851f,0.66312f,0f,0.82298f,0.56806f,0f,0.88546f,0.46472f,0f,0.93502f,0.3546f,0f,0.97094f,0.23932f,0f,0.99271f,0.12054f,0f,1f,0f,0f,1f,0f,0f,0.99271f,0.12054f,0f,0.97094f,0.23932f,0f,0.93502f,0.3546f,0f,0.88546f,0.46472f,0f,0.82298f,0.56806f,0f,0.74851f,0.66312f,0f,0.66312f,0.74851f,0f,0.56806f,0.82298f,0f,0.46472f,0.88546f,0f,0.3546f,0.93502f,0f,0.23932f,0.97094f,0f,0.12054f,0.99271f,0f,0f,1f});
  }
}
protected class MFInt321276 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1277 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.75f,0.5f,-0.2128f,-0.75f,0.5f,-0.2128f,-0.75f,0.5f,-0.05f,0.75f,0.5f,-0.05f});
  }
}
protected class MFVec3f1278 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFInt321279 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,0,-1,0,2,3,-1});
  }
}
protected class MFVec3f1280 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.5f,-0.2128f,0.75f,-0.5f,-0.2128f,0.75f,-0.5f,-0.05f,-0.75f,-0.5f,-0.05f});
  }
}
protected class MFVec3f1281 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f});
  }
}
protected class MFInt321282 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,132,0,-1,1,2,132,-1,132,2,131,-1,131,2,3,-1,130,3,4,-1,129,4,5,-1,128,5,127,-1,128,129,5,-1,131,3,130,-1,130,4,129,-1,5,6,127,-1,127,6,126,-1,126,6,7,-1,125,7,8,-1,124,8,123,-1,124,125,8,-1,126,7,125,-1,8,9,123,-1,123,9,122,-1,122,9,10,-1,121,10,120,-1,121,122,10,-1,10,11,120,-1,120,11,119,-1,119,11,12,-1,24,12,13,-1,14,24,13,-1,14,15,24,-1,24,15,16,-1,17,24,16,-1,17,18,24,-1,24,18,19,-1,20,24,19,-1,20,21,24,-1,24,21,22,-1,23,24,22,-1,119,12,24,-1,118,24,117,-1,118,119,24,-1,25,105,24,-1,25,104,105,-1,25,103,104,-1,25,102,103,-1,25,26,102,-1,102,26,101,-1,101,26,100,-1,100,26,99,-1,99,26,98,-1,98,26,97,-1,97,26,96,-1,96,26,95,-1,95,26,94,-1,94,26,93,-1,93,26,92,-1,92,26,91,-1,91,26,90,-1,90,26,89,-1,89,26,88,-1,88,26,87,-1,87,26,86,-1,86,26,85,-1,85,26,51,-1,84,51,83,-1,84,85,51,-1,26,27,51,-1,51,27,28,-1,29,51,28,-1,29,50,51,-1,29,30,50,-1,50,30,49,-1,49,30,31,-1,48,31,32,-1,47,32,33,-1,46,33,34,-1,45,34,35,-1,44,35,36,-1,43,36,37,-1,42,37,38,-1,41,38,39,-1,40,41,39,-1,49,31,48,-1,48,32,47,-1,47,33,46,-1,46,34,45,-1,45,35,44,-1,44,36,43,-1,43,37,42,-1,42,38,41,-1,52,68,51,-1,52,67,68,-1,52,66,67,-1,52,53,66,-1,66,53,65,-1,65,53,64,-1,64,53,54,-1,57,54,56,-1,57,64,54,-1,57,63,64,-1,57,62,63,-1,57,61,62,-1,57,60,61,-1,57,59,60,-1,57,0,59,-1,59,0,58,-1,58,0,134,-1,134,0,133,-1,133,0,132,-1,54,55,56,-1,68,69,51,-1,51,69,70,-1,71,51,70,-1,71,72,51,-1,51,72,73,-1,74,51,73,-1,74,75,51,-1,51,75,76,-1,77,51,76,-1,77,78,51,-1,51,78,79,-1,80,51,79,-1,80,81,51,-1,51,81,82,-1,83,51,82,-1,105,106,24,-1,24,106,107,-1,108,24,107,-1,108,109,24,-1,24,109,110,-1,111,24,110,-1,111,112,24,-1,24,112,113,-1,114,24,113,-1,114,115,24,-1,24,115,116,-1,117,24,116,-1});
  }
}
protected class MFVec3f1283 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.75f,-0.46437f,-0.26069f,-0.75f,-0.46983f,-0.2587f,-0.75f,-0.47502f,-0.25609f,-0.75f,-0.47987f,-0.25289f,-0.75f,-0.48433f,-0.24915f,-0.75f,-0.48831f,-0.24493f,-0.75f,-0.49178f,-0.24026f,-0.75f,-0.49469f,-0.23523f,-0.75f,-0.49699f,-0.22989f,-0.75f,-0.49865f,-0.22432f,-0.75f,-0.49966f,-0.2186f,-0.75f,-0.5f,-0.2128f,-0.75f,-0.5f,-0.05f,-0.75f,-0.49964f,-0.04397f,-0.75f,-0.49855f,-0.03803f,-0.75f,-0.49675f,-0.03227f,-0.75f,-0.49427f,-0.02676f,-0.75f,-0.49115f,-0.0216f,-0.75f,-0.48743f,-0.01684f,-0.75f,-0.48316f,-0.01257f,-0.75f,-0.4784f,-0.00885f,-0.75f,-0.47324f,-0.00573f,-0.75f,-0.46773f,-0.00325f,-0.75f,-0.46197f,-0.00145f,-0.75f,-0.45603f,-0.00036f,-0.75f,-0.45f,0f,-0.75f,0.45f,0f,-0.75f,0.45603f,-0.00036f,-0.75f,0.46197f,-0.00145f,-0.75f,0.46773f,-0.00325f,-0.75f,0.47324f,-0.00573f,-0.75f,0.4784f,-0.00885f,-0.75f,0.48316f,-0.01257f,-0.75f,0.48743f,-0.01684f,-0.75f,0.49115f,-0.0216f,-0.75f,0.49427f,-0.02676f,-0.75f,0.49675f,-0.03227f,-0.75f,0.49855f,-0.03803f,-0.75f,0.49964f,-0.04397f,-0.75f,0.5f,-0.05f,-0.75f,0.5f,-0.2128f,-0.75f,0.49966f,-0.2186f,-0.75f,0.49865f,-0.22432f,-0.75f,0.49699f,-0.22989f,-0.75f,0.49469f,-0.23523f,-0.75f,0.49178f,-0.24026f,-0.75f,0.48831f,-0.24493f,-0.75f,0.48433f,-0.24915f,-0.75f,0.47987f,-0.25289f,-0.75f,0.47502f,-0.25609f,-0.75f,0.46983f,-0.2587f,-0.75f,0.46437f,-0.26069f,-0.75f,0.01437f,-0.39569f,-0.75f,0.0087f,-0.39704f,-0.75f,0.00291f,-0.39771f,-0.75f,-0.00291f,-0.39771f,-0.75f,-0.0087f,-0.39704f,-0.75f,-0.01437f,-0.39569f,-0.75f,-0.41793f,-0.24856f,-0.75f,-0.01293f,-0.35656f,-0.75f,-0.00975f,-0.35729f,-0.75f,-0.00652f,-0.35782f,-0.75f,-0.00327f,-0.35814f,-0.75f,0f,-0.35824f,-0.75f,0.00327f,-0.35814f,-0.75f,0.00652f,-0.35782f,-0.75f,0.00975f,-0.35729f,-0.75f,0.01293f,-0.35656f,-0.75f,0.41793f,-0.24856f,-0.75f,0.42116f,-0.24758f,-0.75f,0.4243f,-0.24638f,-0.75f,0.42735f,-0.24496f,-0.75f,0.43029f,-0.24333f,-0.75f,0.4331f,-0.24148f,-0.75f,0.43577f,-0.23943f,-0.75f,0.43827f,-0.23718f,-0.75f,0.44057f,-0.23475f,-0.75f,0.44266f,-0.23214f,-0.75f,0.44453f,-0.22935f,-0.75f,0.44616f,-0.22642f,-0.75f,0.44752f,-0.22335f,-0.75f,0.44859f,-0.22017f,-0.75f,0.44937f,-0.21691f,-0.75f,0.44984f,-0.21359f,-0.75f,0.45f,-0.21024f,-0.75f,0.45f,-0.08f,-0.75f,0.44976f,-0.07585f,-0.75f,0.44904f,-0.07177f,-0.75f,0.44785f,-0.06779f,-0.75f,0.44622f,-0.06395f,-0.75f,0.44418f,-0.06033f,-0.75f,0.44177f,-0.05694f,-0.75f,0.43901f,-0.05381f,-0.75f,0.43595f,-0.05097f,-0.75f,0.43263f,-0.04843f,-0.75f,0.42909f,-0.04622f,-0.75f,0.42535f,-0.04433f,-0.75f,0.42146f,-0.04278f,-0.75f,0.41745f,-0.04157f,-0.75f,0.41335f,-0.0407f,-0.75f,0.40919f,-0.04018f,-0.75f,0.405f,-0.04f,-0.75f,-0.405f,-0.04f,-0.75f,-0.40919f,-0.04018f,-0.75f,-0.41335f,-0.0407f,-0.75f,-0.41745f,-0.04157f,-0.75f,-0.42146f,-0.04278f,-0.75f,-0.42535f,-0.04433f,-0.75f,-0.42909f,-0.04622f,-0.75f,-0.43263f,-0.04843f,-0.75f,-0.43595f,-0.05096f,-0.75f,-0.43901f,-0.05381f,-0.75f,-0.44176f,-0.05694f,-0.75f,-0.44418f,-0.06033f,-0.75f,-0.44622f,-0.06395f,-0.75f,-0.44785f,-0.06779f,-0.75f,-0.44904f,-0.07177f,-0.75f,-0.44976f,-0.07585f,-0.75f,-0.45f,-0.08f,-0.75f,-0.45f,-0.21024f,-0.75f,-0.44984f,-0.21359f,-0.75f,-0.44937f,-0.2169f,-0.75f,-0.4486f,-0.22014f,-0.75f,-0.44753f,-0.22332f,-0.75f,-0.44617f,-0.22639f,-0.75f,-0.44455f,-0.22932f,-0.75f,-0.44269f,-0.2321f,-0.75f,-0.44059f,-0.23472f,-0.75f,-0.43828f,-0.23716f,-0.75f,-0.43578f,-0.23942f,-0.75f,-0.43312f,-0.24147f,-0.75f,-0.43031f,-0.24332f,-0.75f,-0.42736f,-0.24496f,-0.75f,-0.4243f,-0.24638f,-0.75f,-0.42116f,-0.24758f});
  }
}
protected class MFVec3f1284 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
}

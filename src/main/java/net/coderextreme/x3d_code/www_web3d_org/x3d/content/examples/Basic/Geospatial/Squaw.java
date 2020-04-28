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
public class Squaw {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Squaw().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/Squaw.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("Squaw.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This model was output using the GeoVRML export capabilities of ESRI's 3D Analyst Extension for ArcView/ArcInfo 8.1 product (official release date Q1 2001). This example is created by combining an ortho image (retouched to have a blue color) with a DEM of the squaw valley, near Lake Tahoe. Coordinates are UTM."))
        .addMeta(new metaObject().setName("creator").setContent("Salvador Bayarri, ESRI"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 January 2020"))
        .addMeta(new metaObject().setName("warning").setContent("check GeoOrigin JSON Schema errors"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Squaw.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("ArcScene Document"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new DirectionalLightObject().setAmbientIntensity(0.3f).setDirection(new float[] {0.612372f,-0.612372f,-0.5f}))
        .addChild(new DirectionalLightObject().setAmbientIntensity(0.3f).setDirection(new float[] {-0.612372f,0.612372f,0.5f}))
        .addChild(new GeoViewpointObject().setDescription("default").setFieldOfView(0.3f).setGeoSystem(new MFStringObject(new MFString2().getArray())).setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {4342525.5d,740604d,26366.119141d})
          .setGeoOrigin(new GeoOriginObject().setDEF("ORIGIN").setGeoCoords(new double[] {4342525.5d,740604d,0d}).setGeoSystem(new MFStringObject(new MFString3().getArray())).setRotateYUp(true)))
        .addChild(new GroupObject()
          .addChild(new GroupObject()
            .addChild(new GroupObject()
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4340965.855617d,738223.363583d,2183.5d}).setChild1Url(new MFStringObject(new MFString4().getArray())).setGeoSystem(new MFStringObject(new MFString5().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString6().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4340105.411173d,737558.999947d,0d}).setGeoSystem(new MFStringObject(new MFString7().getArray())).setHeight(new MFDoubleObject(new MFDouble8().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f9().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4342525.411173d,738223.363583d,2096.5d}).setChild1Url(new MFStringObject(new MFString10().getArray())).setGeoSystem(new MFStringObject(new MFString11().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString12().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4341718.744506d,737558.999947d,0d}).setGeoSystem(new MFStringObject(new MFString13().getArray())).setHeight(new MFDoubleObject(new MFDouble14().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f15().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4344084.966729d,738223.363583d,2307.5d}).setChild1Url(new MFStringObject(new MFString16().getArray())).setGeoSystem(new MFStringObject(new MFString17().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString18().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4343332.07784d,737558.999947d,0d}).setGeoSystem(new MFStringObject(new MFString19().getArray())).setHeight(new MFDoubleObject(new MFDouble20().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f21().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4340965.855617d,739385.999947d,2137d}).setChild1Url(new MFStringObject(new MFString22().getArray())).setGeoSystem(new MFStringObject(new MFString23().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString24().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4340105.411173d,738776.999947d,0d}).setGeoSystem(new MFStringObject(new MFString25().getArray())).setHeight(new MFDoubleObject(new MFDouble26().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f27().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4342525.411173d,739385.999947d,2078d}).setChild1Url(new MFStringObject(new MFString28().getArray())).setGeoSystem(new MFStringObject(new MFString29().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString30().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4341718.744506d,738776.999947d,0d}).setGeoSystem(new MFStringObject(new MFString31().getArray())).setHeight(new MFDoubleObject(new MFDouble32().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f33().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4344084.966729d,739385.999947d,2160d}).setChild1Url(new MFStringObject(new MFString34().getArray())).setGeoSystem(new MFStringObject(new MFString35().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString36().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4343332.07784d,738776.999947d,0d}).setGeoSystem(new MFStringObject(new MFString37().getArray())).setHeight(new MFDoubleObject(new MFDouble38().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f39().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4340965.855617d,740603.999947d,2054.5d}).setChild1Url(new MFStringObject(new MFString40().getArray())).setGeoSystem(new MFStringObject(new MFString41().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString42().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4340105.411173d,739994.999947d,0d}).setGeoSystem(new MFStringObject(new MFString43().getArray())).setHeight(new MFDoubleObject(new MFDouble44().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f45().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4342525.411173d,740603.999947d,2001.5d}).setChild1Url(new MFStringObject(new MFString46().getArray())).setGeoSystem(new MFStringObject(new MFString47().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString48().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4341718.744506d,739994.999947d,0d}).setGeoSystem(new MFStringObject(new MFString49().getArray())).setHeight(new MFDoubleObject(new MFDouble50().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f51().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4344084.966729d,740603.999947d,1993.5d}).setChild1Url(new MFStringObject(new MFString52().getArray())).setGeoSystem(new MFStringObject(new MFString53().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString54().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4343332.07784d,739994.999947d,0d}).setGeoSystem(new MFStringObject(new MFString55().getArray())).setHeight(new MFDoubleObject(new MFDouble56().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f57().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4340965.855617d,741821.999947d,1999.5d}).setChild1Url(new MFStringObject(new MFString58().getArray())).setGeoSystem(new MFStringObject(new MFString59().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString60().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4340105.411173d,741212.999947d,0d}).setGeoSystem(new MFStringObject(new MFString61().getArray())).setHeight(new MFDoubleObject(new MFDouble62().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f63().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4342525.411173d,741821.999947d,1974.5d}).setChild1Url(new MFStringObject(new MFString64().getArray())).setGeoSystem(new MFStringObject(new MFString65().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString66().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4341718.744506d,741212.999947d,0d}).setGeoSystem(new MFStringObject(new MFString67().getArray())).setHeight(new MFDoubleObject(new MFDouble68().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f69().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4344084.966729d,741821.999947d,1968d}).setChild1Url(new MFStringObject(new MFString70().getArray())).setGeoSystem(new MFStringObject(new MFString71().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString72().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4343332.07784d,741212.999947d,0d}).setGeoSystem(new MFStringObject(new MFString73().getArray())).setHeight(new MFDoubleObject(new MFDouble74().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f75().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4340965.855617d,742984.636311d,2110d}).setChild1Url(new MFStringObject(new MFString76().getArray())).setGeoSystem(new MFStringObject(new MFString77().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString78().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4340105.411173d,742430.999947d,0d}).setGeoSystem(new MFStringObject(new MFString79().getArray())).setHeight(new MFDoubleObject(new MFDouble80().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f81().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4342525.411173d,742984.636311d,2139d}).setChild1Url(new MFStringObject(new MFString82().getArray())).setGeoSystem(new MFStringObject(new MFString83().getArray())).setRange(32266.666f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString84().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4341718.744506d,742430.999947d,0d}).setGeoSystem(new MFStringObject(new MFString85().getArray())).setHeight(new MFDoubleObject(new MFDouble86().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f87().getArray())))))))
              .addChild(new GroupObject()
                .addChild(new GeoLODObject().setCenter(new double[] {4344084.966729d,742984.636311d,2146.5d}).setChild1Url(new MFStringObject(new MFString88().getArray())).setGeoSystem(new MFStringObject(new MFString89().getArray())).setRange(32266.666016f)
                  .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                  .addRootNode(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setAmbientIntensity(0.9f).setDiffuseColor(new float[] {1f,1f,1f}).setShininess(1f))
                      .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString90().getArray()))))
                    .setGeometry(new GeoElevationGridObject().setCcw(false).setCreaseAngle(0.5d).setGeoGridOrigin(new double[] {4343332.07784d,742430.999947d,0d}).setGeoSystem(new MFStringObject(new MFString91().getArray())).setHeight(new MFDoubleObject(new MFDouble92().getArray())).setSolid(false).setXDimension(12).setXSpacing(110.727273d).setZDimension(16).setZSpacing(107.555556d)
                      .setGeoOrigin(new GeoOriginObject().setUSE("ORIGIN"))
                      .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f93().getArray())))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Generated by ArcScene"});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD000.x3d","SquawLOD000.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD000.wrl"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw000.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw000.jpg"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble8 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2329.3235d,2313.5854d,2299.391d,2275.616d,2256.039d,2260.0962d,2289.158d,2271.813d,2238.2546d,2197.2583d,2197.0254d,2191.4873d,2347.3486d,2335.9705d,2334.4636d,2310.3198d,2300.1436d,2301.7083d,2327.3105d,2306.9065d,2269.2075d,2272.4438d,2277.2268d,2259.9924d,2324.4512d,2327.937d,2327.8057d,2355.8127d,2351.5278d,2327.844d,2359.7432d,2348.2917d,2344.7896d,2346.933d,2351.8403d,2317.3809d,2260.7942d,2244.5767d,2278.2122d,2316.3586d,2369.1987d,2361.4321d,2400.2903d,2433.8323d,2417.2075d,2405.2341d,2375.6465d,2319.5723d,2212.3452d,2208.6716d,2234.9226d,2267.0046d,2337.9177d,2392.6184d,2426.8293d,2398.9465d,2362.3994d,2354.4067d,2328.372d,2282.9204d,2167.161d,2181.4133d,2213.636d,2236.2078d,2313.598d,2374.3333d,2407.246d,2363.7896d,2303.0686d,2293.6387d,2270.1267d,2237.201d,2132.7415d,2144.4775d,2174.186d,2210.1062d,2280.8323d,2301.4646d,2355.8303d,2340.571d,2277.2136d,2242.3328d,2212.0452d,2177.2761d,2115.583d,2112.4795d,2145.5403d,2181.982d,2215.5664d,2251.8013d,2302.9058d,2334.7576d,2261.484d,2216.8936d,2168.3252d,2124.937d,2114.5303d,2094.5557d,2110.916d,2140.6736d,2160.4922d,2189.18d,2247.8813d,2290.4324d,2232.3865d,2196.364d,2145.4688d,2097.808d,2125.037d,2094.0676d,2085.1157d,2102.8755d,2117.5635d,2139.3987d,2178.549d,2216.4192d,2215.9407d,2183.5945d,2152.8882d,2092.8313d,2146.487d,2106.3318d,2076.0364d,2070.912d,2066.6345d,2091.1626d,2115.5227d,2140.9346d,2170.787d,2133.0254d,2149.257d,2098.3916d,2160.4246d,2120.979d,2080.5337d,2041.1898d,2033.8505d,2034.8027d,2054.8235d,2068.0283d,2074.1362d,2067.1904d,2111.412d,2088.023d,2173.7083d,2143.2349d,2099.622d,2046.184d,2012.2407d,2003.6333d,2011.8926d,2016.37d,2010.5881d,2026.3867d,2051.0427d,2074.8013d,2142.583d,2130.767d,2115.1829d,2062.7073d,2020.409d,1997.4125d,1976.6835d,1974.5184d,1972.6257d,1988.7704d,2006.338d,2031.0764d,2154.8599d,2122.5051d,2114.582d,2090.3965d,2051.5745d,2013.7977d,1980.3584d,1954.7443d,1948.5576d,1957.8701d,1971.0928d,1984.4761d,2180.9685d,2148.4246d,2149.0056d,2137.7288d,2113.009d,2056.9636d,1995.1066d,1964.7443d,1938.6082d,1933.9183d,1935.9152d,1944.5244d});
  }
}
protected class MFVec2f9 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD002.x3d","SquawLOD002.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD002.wrl"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw001.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw001.jpg"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble14 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2180.9685d,2148.4246d,2149.0056d,2137.7288d,2113.009d,2056.9636d,1995.1066d,1964.7443d,1938.6082d,1933.9183d,1935.9152d,1944.5244d,2209.458d,2216.7104d,2204.653d,2198.453d,2182.4434d,2091.891d,2018.3699d,1969.1554d,1936.018d,1910.8464d,1899.8698d,1912.1348d,2264.5613d,2272.577d,2256.3728d,2258.9214d,2194.878d,2115.1028d,2030.0139d,1972.2294d,1933.6703d,1906.0397d,1899d,1905d,2317.1863d,2295.0413d,2276.7664d,2235.2446d,2116.6594d,2038.4d,1971.9784d,1935.3444d,1909.4764d,1897.692d,1897.9d,1901d,2257.7222d,2239.9724d,2197.4197d,2123.6772d,2037.7554d,1983.4236d,1929.5378d,1909.9863d,1898.404d,1897d,1897d,1897.0767d,2202.869d,2191.7654d,2142.4949d,2053.548d,1990.2023d,1939.548d,1911.5261d,1902.9148d,1900.7291d,1897.8802d,1898d,1899.6111d,2152.1667d,2169.2693d,2094.893d,2012.7882d,1957.3932d,1922.2246d,1911.6998d,1909.3667d,1906.1112d,1903.2538d,1904.3667d,1910.5613d,2100.5112d,2123.9849d,2064.5093d,1991.5566d,1953.2466d,1926.5347d,1918.6604d,1918.037d,1912.1222d,1911.1222d,1915.2053d,1922.7178d,2055.9517d,2088.1155d,2017.1643d,1971.5265d,1956.4977d,1948.9252d,1933.8778d,1932.5585d,1931.2076d,1934.9789d,1955.269d,1945.6333d,2032.0068d,2035.5822d,1991.371d,1959.7269d,1960.7255d,1959.6333d,1949.1263d,1962.0962d,1968.4854d,1972.013d,1978.4016d,1987.7893d,2001.1986d,1991.2222d,1972.9037d,1962.4176d,1973.1824d,1978.5264d,1989.5033d,1986.7446d,2000.4027d,2003.0809d,2009.3628d,2036.617d,2024.2324d,1994.4548d,1980.289d,1993.8573d,1989.8229d,1996.8694d,2019.3412d,2008.242d,2024.1299d,2028.6176d,2044.5609d,2076.8745d,2048.8943d,2026.3489d,2010.7596d,2017.2242d,2009.0247d,2021.2875d,2058.6306d,2029.0409d,2051.8503d,2068.3547d,2100.4111d,2125.992d,2092.8835d,2078.788d,2048.5938d,2053.6104d,2032.16d,2042.243d,2047.5261d,2060.2224d,2096.2808d,2123.748d,2150.9355d,2183.464d,2107.7832d,2092.583d,2079.9265d,2064.8508d,2046.16d,2052.7656d,2061.491d,2106.4392d,2148.4497d,2177.387d,2201.1274d,2230.9197d,2122.199d,2103.7354d,2083.1382d,2071.0537d,2060.3333d,2075.2478d,2096.3955d,2154.1497d,2204.2864d,2225.68d,2264.758d,2275.6052d});
  }
}
protected class MFVec2f15 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD004.x3d","SquawLOD004.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD004.wrl"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw002.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw002.jpg"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble20 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2122.199d,2103.7354d,2083.1382d,2071.0537d,2060.3333d,2075.2478d,2096.3955d,2154.1497d,2204.2864d,2225.68d,2264.758d,2275.6052d,2148.7534d,2136.5955d,2121.6438d,2103.7073d,2086.0283d,2105.1968d,2119.8738d,2156.0933d,2219.1794d,2272.65d,2321.0122d,2322.633d,2206.1875d,2198.191d,2155.5898d,2120.9414d,2133.4387d,2140.0974d,2143.1404d,2191.768d,2218.1814d,2277.5398d,2323.7722d,2335.2024d,2258.4663d,2222.2246d,2163.5798d,2163.6255d,2185.1719d,2181.8723d,2196.2847d,2206.131d,2273.5571d,2300.9797d,2325.6094d,2322.8328d,2281.583d,2215.4563d,2176.096d,2222.257d,2249.6665d,2239.111d,2265.261d,2249.7346d,2290.856d,2352.6003d,2361.787d,2313.8772d,2298.259d,2234.4277d,2215.347d,2265.7659d,2316.9292d,2297.9688d,2327.4792d,2323.652d,2323.7766d,2357.095d,2347.0427d,2315.7815d,2328.0022d,2253.8777d,2255.7017d,2307.465d,2346.9004d,2370.8167d,2387.618d,2380.4607d,2367.8494d,2361.3535d,2320.9297d,2282.3623d,2348.4893d,2279.5803d,2279.826d,2318.4285d,2370.458d,2421.2632d,2397.8086d,2364.136d,2340.9133d,2330.272d,2320.2473d,2264.908d,2351.611d,2331.959d,2332.4324d,2363.488d,2396.2732d,2413.2515d,2361.6162d,2316.767d,2293.5444d,2276.0764d,2277.3098d,2255.522d,2375.5188d,2388.2512d,2397.1824d,2413.8396d,2433.2961d,2403.55d,2348.212d,2307.6785d,2281.607d,2267.4077d,2246.7893d,2192.8442d,2409.3862d,2426.8303d,2453.8062d,2470.605d,2444.9954d,2400.439d,2357.68d,2316.2156d,2300.6895d,2285.0762d,2252.3228d,2208.775d,2455.1804d,2473.152d,2496.866d,2487.9138d,2447.608d,2408.1626d,2368.8035d,2337.607d,2302.9885d,2265.5432d,2222.2603d,2195.7136d,2471.1846d,2512.3284d,2540.1562d,2503.4844d,2461.7764d,2421.417d,2386.6272d,2334.6938d,2283.2776d,2243.15d,2209.3572d,2154.9387d,2456.1257d,2513.3706d,2552.601d,2498.2844d,2455.8923d,2424.983d,2392.0852d,2345.2703d,2293.5562d,2255.9072d,2206.3503d,2152.8594d,2426.5452d,2485.6313d,2530.8103d,2478.5427d,2426.486d,2376.6792d,2346.095d,2301.1208d,2251.9045d,2220.5928d,2204.1128d,2164.1497d,2409.9045d,2473.2603d,2505.173d,2480.4548d,2445.2856d,2394.3657d,2331.6829d,2269.8806d,2238.3916d,2221.0718d,2219.3477d,2188.8708d});
  }
}
protected class MFVec2f21 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD006.x3d","SquawLOD006.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD006.wrl"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw003.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw003.jpg"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble26 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2191.4873d,2211.294d,2166.4824d,2126.1445d,2078.1746d,2026.377d,1996.7596d,1984.0361d,1972.744d,1967.2771d,1969.6078d,1977.5806d,2259.9924d,2253.7822d,2203.749d,2164.631d,2105.7969d,2073.9133d,2036.6664d,2010.0524d,1986.4948d,1972.1747d,1965d,1959.987d,2317.3809d,2312.8508d,2244.0703d,2196.1218d,2154.8308d,2139.8672d,2095.5837d,2065.958d,2018.2158d,1981.2336d,1972.5486d,1965.5486d,2319.5723d,2329.4128d,2299.0728d,2244.2175d,2196.7097d,2201.796d,2160.8948d,2116.604d,2056.3806d,2007.9646d,1985.9362d,1984.8754d,2282.9204d,2276.7979d,2327.0837d,2275.4333d,2225.6755d,2189.3289d,2160.241d,2125.527d,2075.709d,2010.85d,2019.9753d,2030.525d,2237.201d,2211.3948d,2269.9402d,2283.7705d,2234.8635d,2187.7725d,2151.1448d,2102.7615d,2051.9163d,2068.4214d,2069.4702d,2072.2332d,2177.2761d,2170.5571d,2213.4226d,2275.7664d,2249.5027d,2201.516d,2142.542d,2118.9333d,2125.0405d,2126.0864d,2126.1653d,2120.528d,2124.937d,2146.4724d,2178.8442d,2245.3357d,2224.108d,2193.4734d,2184.0588d,2177.6963d,2190.639d,2179.5984d,2185.2468d,2158.2375d,2097.808d,2123.4192d,2155.2058d,2200.3662d,2252.0652d,2233.2483d,2234.422d,2238.2256d,2264.3916d,2238.4626d,2214.8635d,2167.737d,2092.8313d,2082.4414d,2116.4143d,2184.1426d,2246.9094d,2256.3364d,2253.2517d,2296.4578d,2298.6907d,2261.1597d,2233.4575d,2196.0332d,2098.3916d,2059.54d,2098.7686d,2173.3008d,2219.526d,2227.8967d,2216.4792d,2247.352d,2250.8787d,2218.5745d,2200.4792d,2193.178d,2088.023d,2044.8103d,2084.58d,2147.6296d,2185.0173d,2178.18d,2164.6748d,2180.2583d,2195.8945d,2165.1184d,2163.4092d,2164.1584d,2074.8013d,2021.9296d,2065.1865d,2119.6187d,2144.39d,2129.273d,2098.0757d,2112.9858d,2121.7683d,2114.1187d,2126.137d,2111.3103d,2031.0764d,1994.0187d,2042.2219d,2065.3865d,2084.3694d,2092.652d,2049.7295d,2063.9993d,2076.7932d,2072.5125d,2095.725d,2082.375d,1984.4761d,1962.2999d,2005.7219d,2018.1904d,2032.025d,2035.8129d,2024.7372d,2022.7612d,2049.136d,2044.1897d,2063.6995d,2053.996d,1944.5244d,1958.2495d,1966.8876d,1973.993d,1981.9917d,1983.993d,1981.2577d,1984.6127d,1997.8762d,2011.949d,2026.0217d,2021.9945d});
  }
}
protected class MFVec2f27 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD008.x3d","SquawLOD008.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD008.wrl"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw004.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw004.jpg"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble32 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1944.5244d,1958.2495d,1966.8876d,1973.993d,1981.9917d,1983.993d,1981.2577d,1984.6127d,1997.8762d,2011.949d,2026.0217d,2021.9945d,1912.1348d,1921.3866d,1926.3179d,1924.3243d,1930.0555d,1933.4667d,1931.164d,1938.0555d,1944.4181d,1963.9915d,1977.6669d,1986.4333d,1905d,1908.6555d,1907.8466d,1901d,1895.0647d,1894.2034d,1905.5647d,1904.3112d,1898.733d,1906.1869d,1926.3145d,1938.7877d,1901d,1902d,1901d,1897.4818d,1891.409d,1885.4027d,1884.9d,1885.9d,1886d,1882d,1888.0272d,1903.71d,1897.0767d,1898d,1896.6189d,1894.4122d,1890.409d,1887d,1885d,1883d,1883d,1882d,1884.0272d,1887.1444d,1899.6111d,1899.6111d,1900.6111d,1899.6111d,1896.0201d,1890.742d,1889d,1887d,1884d,1883d,1882d,1882d,1910.5613d,1925.9694d,1931.7333d,1929.5818d,1915.2925d,1898.5797d,1894.5337d,1889.4875d,1887.3667d,1885.3955d,1882.9728d,1882d,1922.7178d,1936.1222d,1953.5676d,1962.604d,1945.0626d,1912.9171d,1902.2444d,1901.0233d,1895.3481d,1888.1621d,1884d,1882d,1945.6333d,1966.1283d,1977.6877d,1971.4185d,1950.9404d,1936.2649d,1924.6655d,1916.9464d,1906.996d,1890.2075d,1887d,1883.9878d,1987.7893d,2004.9121d,2014.2357d,1986.5354d,1971.5258d,1961.9d,1950.4336d,1938.6484d,1922.2979d,1894.091d,1887d,1884.57d,2036.617d,2059.1667d,2033.0449d,2000.2233d,1989.8055d,1994.9086d,1984.0414d,1964.1595d,1934.4752d,1906.851d,1889.3783d,1887d,2076.8745d,2090.1511d,2065.3215d,2033.5778d,2030.8187d,2034.3949d,2006.8542d,1978.5538d,1948.3809d,1922.2743d,1907.1172d,1890.1744d,2125.992d,2124.4446d,2101.3728d,2086.1182d,2094.5d,2084.509d,2043.6545d,2008.0009d,1971.0482d,1938.0319d,1914.8481d,1900.8d,2183.464d,2160.6426d,2144.0315d,2141.3506d,2165.5889d,2142.4028d,2101.7153d,2049.8977d,2016.1798d,1962.5227d,1934.2566d,1915.211d,2230.9197d,2194.962d,2197.8037d,2176.1626d,2208.247d,2185.9468d,2157.49d,2106.6575d,2060.0605d,2005.2701d,1964.9897d,1937.1333d,2275.6052d,2246.6833d,2247.9424d,2224.1484d,2237.2576d,2223.3425d,2194.8606d,2148.503d,2087.3152d,2061.7727d,2001.3909d,1987.8167d});
  }
}
protected class MFVec2f33 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD010.x3d","SquawLOD010.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD010.wrl"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw005.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw005.jpg"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble38 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2275.6052d,2246.6833d,2247.9424d,2224.1484d,2237.2576d,2223.3425d,2194.8606d,2148.503d,2087.3152d,2061.7727d,2001.3909d,1987.8167d,2322.633d,2299.0903d,2281.1091d,2260.0376d,2262.2542d,2266.5408d,2225.7363d,2173.827d,2142.0269d,2103.0823d,2040.3993d,2035.896d,2335.2024d,2287.7864d,2252.759d,2245.0535d,2244.8982d,2267.6523d,2223.643d,2184.7637d,2151.6353d,2115.3442d,2076.7512d,2064.5588d,2322.8328d,2275.4133d,2225.9612d,2210.9722d,2206.9722d,2207.7153d,2190.7563d,2171.8188d,2135.9587d,2099.8794d,2088.825d,2096.4966d,2313.8772d,2268.7122d,2220.34d,2185.9565d,2159.074d,2158.6182d,2150.558d,2134.8418d,2117.4053d,2081.829d,2072.0527d,2094.0032d,2315.7815d,2281.3503d,2245.8552d,2214.119d,2169.7322d,2114.6826d,2103.8804d,2089.9978d,2084.6504d,2067.1775d,2033.6686d,2059.7305d,2282.3623d,2272.939d,2253.9187d,2222.4148d,2174.5303d,2126.8608d,2078.434d,2052.505d,2040.7598d,2059.946d,2018.3921d,2015.039d,2264.908d,2219.8054d,2205.3625d,2179.7744d,2151.8708d,2124.738d,2094.7256d,2067.52d,2040.2769d,2016.3433d,2017.2339d,2008.4106d,2255.522d,2208.4094d,2144.6885d,2129.0652d,2120.4016d,2105.274d,2092.5273d,2065.5728d,2035.6881d,2014.412d,2007.8909d,1986.0292d,2192.8442d,2167.9294d,2130.4436d,2094.0447d,2074.9502d,2065.569d,2061.0747d,2039.7047d,2016.8004d,2024.7771d,1994.4803d,2001.0681d,2208.775d,2160.7021d,2105.4917d,2081.486d,2079.1814d,2051.3953d,2054.9653d,2052.1584d,2050.3862d,2036.759d,2020.4407d,2040.0529d,2195.7136d,2155.2808d,2102.491d,2131.673d,2120.8142d,2086.1648d,2099.7395d,2099.0283d,2074.5796d,2042.6755d,2042.667d,2072.525d,2154.9387d,2139.786d,2122.9868d,2152.582d,2124.5186d,2121.7595d,2129.032d,2121.3818d,2084.3545d,2058.0774d,2059.0593d,2083.3d,2152.8594d,2136.2754d,2153.245d,2170.9028d,2152.2146d,2152.3542d,2145.1665d,2118.8333d,2094.3545d,2062.2336d,2062.1096d,2075.7485d,2164.1497d,2162.6606d,2182.0205d,2196.1611d,2188.407d,2181.949d,2170.9102d,2129.3638d,2087.2188d,2055.9617d,2041.1327d,2052.2712d,2188.8708d,2190.4255d,2206.4714d,2224.389d,2224.5703d,2217.2073d,2192.5586d,2156.863d,2113.881d,2064.8462d,2034.2357d,2027.2002d});
  }
}
protected class MFVec2f39 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD012.x3d","SquawLOD012.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD012.wrl"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw006.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw006.jpg"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble44 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1977.5806d,1971.5132d,1982.4066d,1991.5437d,2000.6062d,1978.172d,1960.1556d,1967.1897d,1979.1421d,2009.2241d,2050.106d,2056.8416d,1959.987d,1956.0436d,1956.148d,1962.2078d,1968.752d,1958.1488d,1947.8708d,1950.8708d,1960.3354d,1975.1533d,1994.7068d,2010.3541d,1965.5486d,1959.5486d,1965.0972d,1959.4713d,1951.4314d,1946.3394d,1938.2544d,1939.4514d,1940.7592d,1953.792d,1957.7301d,1971.3541d,1984.8754d,1989.8777d,1990.9362d,1981.9362d,1982.5133d,1978.9362d,1960.3358d,1935.7374d,1932.032d,1941.485d,1938.0583d,1947.9607d,2030.525d,2023.9229d,2008.6042d,2003.0931d,1997.775d,2003.55d,1993.9102d,1964.1136d,1928.0302d,1935.5837d,1930.292d,1932.5125d,2072.2332d,2034.0753d,2014.1229d,2015.8931d,2021.7314d,2015.9105d,2009.2706d,1983.3706d,1942.9546d,1924.2455d,1923.3324d,1924.9d,2120.528d,2077.762d,2037.2445d,2016.7539d,2007.4712d,2008.6068d,2004.1432d,1976.8845d,1941.1116d,1923.2455d,1920.8127d,1922.9774d,2158.2375d,2095.1365d,2044.9965d,2021.5332d,2010.5074d,1998.9922d,1976.0367d,1945.3884d,1923.3182d,1920.3541d,1918.0612d,1917.3187d,2167.737d,2119.2668d,2076.1956d,2056.6248d,2038.4396d,2022.7322d,2007.6594d,1974.394d,1932.767d,1921.0653d,1917.0112d,1912.9413d,2196.0332d,2140.6743d,2132.7893d,2114.633d,2079.0613d,2049.0422d,2029.412d,1999.1727d,1980.2694d,1943.1356d,1923.0837d,1916.1d,2193.178d,2172.6355d,2179.2034d,2162.7275d,2113.8538d,2068.4688d,2037.9786d,2010.3325d,2009.8083d,1986.7179d,1934.9976d,1924.0042d,2164.1584d,2166.7056d,2178.0305d,2170.619d,2122.4363d,2078.9326d,2043.5645d,2021.3909d,2012.3182d,1992.3933d,1948.6691d,1957.9355d,2111.3103d,2133.072d,2140.7708d,2132.4731d,2105.4417d,2077.866d,2049.4133d,2034.1675d,2016.886d,1998.04d,1980.2291d,1982.843d,2082.375d,2101.6956d,2111.675d,2104.5193d,2090.6091d,2080.9368d,2073.7886d,2061.2058d,2040.1239d,2017.6104d,2004.6322d,1994.5088d,2053.996d,2055.5273d,2089.6636d,2092.233d,2096.0364d,2100.582d,2097.6274d,2085.9458d,2068.9854d,2045.7574d,2027.9186d,2007.3057d,2021.9945d,2040.3427d,2060.2388d,2074.9958d,2059.9963d,2093.3875d,2113.5337d,2108.3938d,2085.6382d,2055.4934d,2048.174d,2023.2015d});
  }
}
protected class MFVec2f45 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.x3d","SquawLOD014.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD014.wrl"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw007.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw007.jpg"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble50 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2021.9945d,2040.3427d,2060.2388d,2074.9958d,2059.9963d,2093.3875d,2113.5337d,2108.3938d,2085.6382d,2055.4934d,2048.174d,2023.2015d,1986.4333d,2002.2283d,2010.3809d,2028.0555d,2034.2776d,2065.1606d,2091.5566d,2124.7698d,2099.4126d,2068.8342d,2055.9343d,2029.3d,1938.7877d,1951.4506d,1963.5232d,1971.3873d,2000.0094d,2053.2776d,2093.9202d,2123.8738d,2120.4243d,2098.4397d,2074.5515d,2049.9233d,1903.71d,1909.7173d,1920.8455d,1944.4364d,1973.8727d,2024.5009d,2066.7454d,2103.018d,2111.6d,2113.8755d,2103.5454d,2076.6d,1887.1444d,1892.4899d,1902.9344d,1920.296d,1944.4617d,1982.8912d,2030.9707d,2072.5212d,2076.4333d,2087.087d,2108.9683d,2097.1d,1882d,1886.0671d,1888.539d,1897.8308d,1924.5616d,1958.841d,2003.5955d,2034.1647d,2041.7778d,2043.9213d,2056.3828d,2071.0278d,1882d,1883d,1884d,1890.9575d,1907.2667d,1932.1212d,1967.9728d,1984.39d,2005.6954d,2012.2667d,2010.094d,2045.5d,1882d,1882d,1883d,1889.2793d,1888.9523d,1910.0898d,1937.1697d,1940.8516d,1967.2025d,1990.6323d,1993.8778d,2012.3556d,1883.9878d,1882d,1882.03d,1885.039d,1886.0477d,1892.2284d,1910.6586d,1917.5104d,1942.6914d,1967.999d,1969.6111d,1985.1788d,1884.57d,1883d,1882d,1881.1167d,1883d,1886.17d,1893.9031d,1898.59d,1916.6652d,1944.519d,1948.3455d,1950.0266d,1887d,1884d,1882.7545d,1881.3889d,1881d,1884d,1886.8197d,1887.3722d,1895.904d,1914.5879d,1936.155d,1932.6111d,1890.1744d,1886d,1884d,1882.6818d,1881d,1882d,1882.4589d,1884d,1886.8556d,1887.9646d,1903.1963d,1914.5667d,1900.8d,1889d,1887d,1884.9681d,1882d,1881d,1881d,1881d,1881.1d,1882.779d,1885.0828d,1887d,1915.211d,1900.7678d,1896.0657d,1888.3374d,1887d,1884d,1882.304d,1881.2562d,1880d,1880d,1880d,1881.3445d,1937.1333d,1928.2333d,1924.3989d,1915.4111d,1911.8424d,1889d,1886d,1885d,1883d,1882d,1878.1727d,1878d,1987.8167d,1974.8394d,1957.7637d,1927.4773d,1920.6742d,1912.0364d,1889.7848d,1888d,1887d,1884.8743d,1881.0288d,1878.1666d});
  }
}
protected class MFVec2f51 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD016.x3d","SquawLOD016.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD016.wrl"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw008.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw008.jpg"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble56 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1987.8167d,1974.8394d,1957.7637d,1927.4773d,1920.6742d,1912.0364d,1889.7848d,1888d,1887d,1884.8743d,1881.0288d,1878.1666d,2035.896d,2006.3264d,1989.1813d,1957.7177d,1935.4452d,1931.1482d,1916.1814d,1898.227d,1889d,1888.5609d,1886.5186d,1884.4181d,2064.5588d,2051.3398d,2023.7761d,1997.0387d,1968.4033d,1947.3739d,1937.6776d,1921.576d,1914.4017d,1905.3899d,1898.8478d,1897.675d,2096.4966d,2069.482d,2037.023d,2013.4775d,1987.4417d,1975.3073d,1972.5641d,1960.6757d,1947.5211d,1935.8339d,1926.8152d,1919.9452d,2094.0032d,2065.365d,2040.0781d,2048.0054d,2023.3853d,2014.5555d,2012.382d,2005.223d,1994.0237d,1982.039d,1967.2311d,1954.4819d,2059.7305d,2060.5586d,2033.6772d,2006.6472d,2020.3984d,2019.757d,2038.2489d,2037.641d,2031.3833d,2022.7246d,2012.556d,2004.2875d,2015.039d,2025.769d,2023.2025d,1974.709d,1978.5193d,1979.4752d,2001.5996d,2040.6724d,2048.8054d,2053.1633d,2040.1143d,2030.6667d,2008.4106d,1970.111d,1971.1462d,1944.7916d,1936.4785d,1941.123d,1983.3413d,1997.8958d,2004.5802d,2032.9503d,2030.3032d,2026.2306d,1986.0292d,1990.2891d,1984.2799d,1983.4166d,1975.2806d,1937.9711d,1938.2181d,1951.0416d,1980.7415d,1999.9592d,2015.6459d,2009.6459d,2001.0681d,2023.6272d,2023.0754d,2019.8483d,2010.4506d,1964.6926d,1932.0704d,1928.8973d,1940.5874d,1974.6609d,2001.4137d,1998.5302d,2040.0529d,2058.579d,2059.7722d,2053.261d,2024.2385d,1988.6827d,1957.194d,1923.0674d,1912.4274d,1945.5438d,1972.4615d,1988.9807d,2072.525d,2089.3308d,2088.367d,2064.0454d,2033.0701d,2018.7614d,1994.2284d,1956.2496d,1916.1102d,1916.5477d,1959.2568d,1976.2875d,2083.3d,2108.936d,2093.477d,2071.0354d,2046.2181d,2031.0579d,2006.3909d,1969.8588d,1928.5168d,1897.7227d,1932.1868d,1962.6681d,2075.7485d,2080.927d,2067.4004d,2052.461d,2039.1577d,2006.1945d,2002.3516d,1951.2283d,1929.4874d,1911.8846d,1893.8601d,1943.6973d,2052.2712d,2046.3875d,2041.1421d,2037.4048d,2010.3192d,1985.3473d,1973.7417d,1969.9529d,1956.378d,1931.3617d,1893.4548d,1908.1167d,2027.2002d,2022.9564d,2028.2455d,2026.4839d,2010.7225d,2007.1998d,2009.7362d,2005.2577d,1969.019d,1930.8079d,1907.6793d,1874.0453d});
  }
}
protected class MFVec2f57 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD018.x3d","SquawLOD018.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD018.wrl"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw009.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw009.jpg"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble62 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2056.8416d,2062.9976d,2096.2065d,2106.0125d,2145.2527d,2137.9768d,2108.52d,2074.944d,2019.0728d,1961.1813d,1925.3875d,1898.8806d,2010.3541d,2025.2997d,2041.5742d,2055.9714d,2106.3086d,2119.2485d,2095.198d,2070.8254d,2013.1091d,1950.5436d,1900.2917d,1888d,1971.3541d,1986.2997d,2011.5424d,2030.6877d,2069.215d,2102.0474d,2085.3274d,2041.4059d,1996.614d,1937.9777d,1893.1182d,1888d,1947.9607d,1966.0094d,1990.1868d,2021.5046d,2064.229d,2083.096d,2078.0017d,2027.7916d,1983.1046d,1931.213d,1892.1301d,1891.6681d,1932.5125d,1951.1871d,1961.9285d,1993.3102d,2030.2534d,2049.2795d,2072.6545d,2018.9097d,1969.4602d,1927.3364d,1888.6273d,1899.5162d,1924.9d,1939.7524d,1942.1564d,1961.0519d,1990.9609d,2022.6337d,2061.7224d,2036.227d,1968.8813d,1901.5576d,1889.6273d,1896.7d,1922.9774d,1947.8909d,1926.5121d,1935.8918d,1963.7026d,1992.2784d,2005.3884d,2025.3689d,1956.51d,1892.68d,1888.7736d,1890.6321d,1917.3187d,1923.6987d,1919.3087d,1924.4723d,1951.432d,1967.4166d,1955.6339d,1962.716d,1931.9712d,1905.136d,1886d,1888.4d,1912.9413d,1912d,1911.9377d,1913.0529d,1934.3644d,1936.7389d,1925.1968d,1914.8042d,1900.4844d,1894.8618d,1887d,1888.4457d,1916.1d,1910.0132d,1907d,1907d,1910.1909d,1912.3794d,1909.179d,1900.591d,1896.7517d,1891.7312d,1887d,1899.624d,1924.0042d,1917.833d,1911.9956d,1909d,1905.8091d,1902.0958d,1902.0958d,1901.591d,1909.0728d,1887.4987d,1886d,1921.7084d,1957.9355d,1952.0703d,1924.2782d,1913.2854d,1908d,1904.1453d,1893.8109d,1894.0854d,1894.545d,1886d,1889.9841d,1941.2d,1982.843d,1961.0889d,1939.3951d,1927.905d,1911.1588d,1913.743d,1903.6566d,1888.8949d,1887d,1885.669d,1902.2545d,1937.5d,1994.5088d,1986.3478d,1973.4086d,1957.6898d,1912.9406d,1901.8988d,1897.1078d,1892.9335d,1884.3557d,1885.5546d,1897.6273d,1939.7512d,2007.3057d,1994.6093d,1982.981d,1960.1093d,1921.062d,1907.8898d,1900.6637d,1888.9348d,1878.0364d,1882.5546d,1897.8895d,1945.0746d,2023.2015d,2005.0287d,1999.9531d,1977.291d,1931.6196d,1914.7378d,1900.6641d,1893.5914d,1877.5566d,1879.9994d,1894.1355d,1947.499d});
  }
}
protected class MFVec2f63 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD020.x3d","SquawLOD020.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD020.wrl"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw010.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw010.jpg"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble68 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2023.2015d,2005.0287d,1999.9531d,1977.291d,1931.6196d,1914.7378d,1900.6641d,1893.5914d,1877.5566d,1879.9994d,1894.1355d,1947.499d,2029.3d,2007.0272d,1984.4979d,1960.4677d,1933.2202d,1923.798d,1920.2173d,1916.1146d,1904.8234d,1877.3715d,1892.509d,1947.789d,2049.9233d,2024.7434d,2003.5823d,1962.8717d,1929.8969d,1920.9192d,1929.6555d,1916.6964d,1892.695d,1885.3716d,1910.2545d,1960.2444d,2076.6d,2048.4546d,2019.8727d,1970.8336d,1934.4464d,1911.2373d,1918.2363d,1896.8682d,1877.1482d,1895.9636d,1912.6273d,1972.73d,2097.1d,2072.199d,2022.956d,1977.6284d,1942.2828d,1915.3282d,1901.6252d,1882.4116d,1894.301d,1916.4102d,1930.194d,1966.6877d,2071.0278d,2046.0924d,2008.2526d,1972.4232d,1940.5126d,1916.8616d,1886.8995d,1877.5201d,1901.8691d,1926.3313d,1946.8656d,1960.3112d,2045.5d,2053.705d,2011.406d,1960.409d,1914.7639d,1890.1091d,1868.4203d,1893.1848d,1913.3303d,1934.297d,1946.6273d,1970.1d,2012.3556d,2024.6879d,1999.6248d,1954.5272d,1912.6182d,1872.0869d,1888.1313d,1905.4813d,1904.6923d,1923.5001d,1952.3312d,1981.6078d,1985.1788d,1994.3667d,1989.1222d,1958.9098d,1912.3352d,1869.4406d,1883.836d,1887.3667d,1892.6266d,1923.6636d,1953.8818d,1989.4d,1950.0266d,1962.0728d,1964.3667d,1951.9385d,1918.2363d,1877.1061d,1862d,1864.3667d,1891.2324d,1931.0149d,1963.2852d,1995.7333d,1932.6111d,1928.8712d,1930.4722d,1920.7732d,1903.6495d,1879.6338d,1865.6637d,1862d,1891.5383d,1925.2748d,1962.104d,1991.6222d,1914.5667d,1911.7151d,1893.4222d,1884.4918d,1877.8556d,1873.7363d,1867.6637d,1863.0853d,1871.4628d,1908.5482d,1953.4185d,1990.1d,1887d,1893.0754d,1886.9546d,1876d,1873.0809d,1868.7627d,1863.6973d,1859.591d,1860.4818d,1899.5728d,1943.1364d,1989.5d,1881.3445d,1881.3445d,1877.3445d,1876.9225d,1871.8749d,1867d,1861.6637d,1854.7318d,1857.6478d,1904.1362d,1957.4475d,2001.5144d,1878d,1876.0161d,1875d,1873d,1871d,1867d,1863.4111d,1855.591d,1855.9636d,1902.0253d,1962.3558d,2013.3889d,1878.1666d,1876.0045d,1874d,1868.9803d,1869d,1869d,1866d,1858.591d,1852.8773d,1894.7727d,1957.9697d,2000.4667d});
  }
}
protected class MFVec2f69 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD022.x3d","SquawLOD022.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD022.wrl"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString72 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw011.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw011.jpg"});
  }
}
protected class MFString73 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble74 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1878.1666d,1876.0045d,1874d,1868.9803d,1869d,1869d,1866d,1858.591d,1852.8773d,1894.7727d,1957.9697d,2000.4667d,1884.4181d,1883.4181d,1879.9735d,1867.1323d,1866d,1868d,1867d,1859.8379d,1851.7622d,1883.959d,1928.456d,1973.9639d,1897.675d,1895.675d,1887.7994d,1874.7637d,1863.031d,1866d,1867.5558d,1862.1818d,1852.9636d,1896.8284d,1959.7671d,1988.9125d,1919.9452d,1908.2639d,1893.2115d,1881.1388d,1870.066d,1857.5405d,1868.3363d,1861.7727d,1859.9594d,1912.5436d,1997.0436d,2020.148d,1954.4819d,1942.7328d,1923.291d,1902.5074d,1879.2946d,1868.4127d,1851d,1851d,1887.7255d,1958.7607d,2035.4293d,2051.8557d,2004.2875d,1993.5065d,1979.2925d,1935.6118d,1886.6182d,1866.6405d,1851d,1856.9141d,1929.9371d,2027.4159d,2083.9775d,2071.7534d,2030.6667d,2015.0546d,1986.3029d,1928.3213d,1886.3289d,1856.4728d,1853.1733d,1862.2108d,1906.1086d,1980.1676d,2078.6707d,2095.9607d,2026.2306d,2004.0818d,1964.8834d,1918.7107d,1878.1232d,1851.6884d,1853.022d,1860.4476d,1881.0215d,1970.8794d,2025.4098d,2074.8762d,2009.6459d,2006.3558d,1963.4186d,1902.7771d,1851.3317d,1848d,1853d,1853d,1866.7566d,1920.4612d,1995.0553d,2030.477d,1998.5302d,1995.5345d,1944.271d,1890.7269d,1845.8446d,1845.4675d,1854d,1851.6835d,1862.1901d,1908.8983d,1960.703d,1978.8319d,1988.9807d,1974.3201d,1920.6617d,1880.4524d,1840d,1848.3146d,1853d,1850.409d,1864.6385d,1916.4972d,1951.0883d,1995.2931d,1976.2875d,1955.5238d,1903.621d,1870.9148d,1840d,1845.6511d,1851.1815d,1851d,1871.5398d,1921.1035d,1970.1364d,2015.4413d,1962.6681d,1957.0499d,1900.8636d,1871.7917d,1844.8091d,1842d,1846d,1851d,1890.441d,1943.4551d,1986.6368d,2021.1096d,1943.6973d,1939.194d,1895.4122d,1870.3123d,1847.7043d,1840d,1845.3363d,1851d,1894.9882d,1957.6748d,1977.0262d,1998.459d,1908.1167d,1919.3367d,1886.0382d,1865.7789d,1849.8091d,1840d,1844.3363d,1854.8182d,1886.7617d,1925.9762d,1921.6902d,1950.3167d,1874.0453d,1907.3456d,1875.6188d,1859.5077d,1848.8091d,1840d,1844.3363d,1851d,1881.1292d,1885.6895d,1903.8646d,1914.1292d});
  }
}
protected class MFVec2f75 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString76 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD024.x3d","SquawLOD024.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD024.wrl"});
  }
}
protected class MFString77 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString78 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw012.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw012.jpg"});
  }
}
protected class MFString79 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble80 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1898.8806d,1889.2903d,1888.4912d,1908.545d,1955.062d,2026.9188d,2104.0916d,2157.3757d,2170.7097d,2165.718d,2162.7097d,2155.7097d,1888d,1888d,1899.553d,1941.8146d,1997.467d,2071.5967d,2134.947d,2174.878d,2179.1292d,2177.1292d,2174.1292d,2168.1292d,1888d,1897.7543d,1928.6503d,1974.2601d,2031.5089d,2104.4915d,2158.2578d,2189.184d,2189.5486d,2188.5486d,2185.9656d,2184.743d,1891.6681d,1905.352d,1952.1522d,2010.0956d,2060.4248d,2131.5835d,2171.353d,2195.7488d,2200.608d,2201.9087d,2201.936d,2201.936d,1899.5162d,1908.0807d,1949.341d,2025.4272d,2096.0933d,2151.0632d,2184.1875d,2203.1365d,2214.527d,2219.775d,2219.0305d,2216.3875d,1896.7d,1907.1296d,1956.976d,2040.5447d,2108.3315d,2169.1045d,2201.0554d,2217.5073d,2231.4905d,2238.6084d,2239.031d,2232.4197d,1890.6321d,1921.9213d,1975.309d,2047.5079d,2122.8848d,2181.212d,2214.7278d,2233.9504d,2251.1733d,2265.6572d,2261.8699d,2248.0642d,1888.4d,1935.4034d,2001.58d,2072.2573d,2148.1646d,2200.2244d,2236.5667d,2258.184d,2278.658d,2289.2632d,2284.9192d,2264.257d,1888.4457d,1959.6852d,2023.2109d,2088.4304d,2158.534d,2210.696d,2255.4868d,2283.6936d,2300.4907d,2310.1958d,2296.8613d,2269.6113d,1899.624d,1976.1301d,2063.1797d,2136.456d,2185.1133d,2237.329d,2277.5195d,2311.2031d,2329.845d,2331.0283d,2298.466d,2274.675d,1921.7084d,2004.4537d,2081.9312d,2154.051d,2213.47d,2257.0542d,2300.5916d,2327.7249d,2332.0344d,2327.057d,2300.417d,2293.8083d,1941.2d,2002.2412d,2077.2285d,2143.7336d,2213.0798d,2255.9343d,2295.6724d,2318.5066d,2325.2437d,2322.057d,2311.4585d,2310.3237d,1937.5d,1998.9103d,2067.686d,2142.3342d,2212.6592d,2250.3616d,2282.5674d,2306.7546d,2319.6172d,2327.4934d,2324.7432d,2320.95d,1939.7512d,2028.9956d,2116.5671d,2168.447d,2208.0693d,2240.0522d,2268.4126d,2295.2466d,2318.36d,2329d,2331.6472d,2325.8372d,1945.0746d,2022.5021d,2099.4065d,2155.7712d,2211.495d,2245.5784d,2271.355d,2300.9336d,2319.36d,2325.9834d,2327d,2325d,1947.499d,2006.4841d,2076.1533d,2147.8206d,2206.6577d,2241.5757d,2268.411d,2299.245d,2316.999d,2327.9714d,2329d,2325.9998d});
  }
}
protected class MFVec2f81 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString82 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD026.x3d"});
  }
}
protected class MFString83 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString84 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw013.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw13.jpg"});
  }
}
protected class MFString85 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble86 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {1947.499d,2006.4841d,2076.1533d,2147.8206d,2206.6577d,2241.5757d,2268.411d,2299.245d,2316.999d,2327.9714d,2329d,2325.9998d,1947.789d,2025.2507d,2092.33d,2148.3213d,2166.3813d,2186.9438d,2228.1787d,2273.2288d,2305.1824d,2312.2048d,2316.5767d,2317.4111d,1960.2444d,2034.4034d,2102.4934d,2105.2778d,2113.4517d,2137.5457d,2173.2625d,2226.022d,2275.4824d,2276.9854d,2282.2761d,2284.6223d,1972.73d,2027.0533d,2045.7682d,2080.737d,2092.9915d,2109.052d,2151.5874d,2188.2932d,2245.4844d,2256.943d,2269.1077d,2264.1807d,1966.6877d,2002.5309d,2043.8126d,2081.3328d,2090.8418d,2110.9602d,2139.6816d,2171.0256d,2235.1d,2260.823d,2282.9373d,2280.3225d,1960.3112d,1989.8845d,2026.8539d,2057.9102d,2102.3555d,2123.8157d,2120.802d,2167.1333d,2233.2993d,2277.526d,2304.6147d,2291.417d,1970.1d,1986.1614d,2016.7095d,2054.847d,2106.6162d,2116.181d,2130.233d,2156.88d,2213.0613d,2294.2427d,2309.2034d,2280.5605d,1981.6078d,1988.2346d,2005.9539d,2040.6658d,2065.4895d,2108.4563d,2122.7861d,2142.2466d,2207.4058d,2284.6504d,2297.3728d,2268.4893d,1989.4d,2001.6333d,2013.5111d,2042.3624d,2065.8296d,2084.6943d,2115.925d,2143.467d,2204.9673d,2259.3752d,2267.6614d,2258.782d,1995.7333d,2025.8243d,2052.3254d,2068.2515d,2079.6763d,2098.2117d,2132.55d,2170.4587d,2169.3577d,2199.143d,2247.0676d,2278.3887d,1991.6222d,2023.4034d,2060.854d,2083.8147d,2082.948d,2098.1895d,2125.8862d,2138.8333d,2144.1113d,2171.1086d,2244.526d,2273.9998d,1990.1d,2029.3228d,2065.6682d,2080.3472d,2097.9148d,2108.5261d,2116d,2123.245d,2142.4526d,2172.0024d,2240.5579d,2258.8274d,1989.5d,2026.1694d,2049.2842d,2080.5068d,2099.7234d,2106.9526d,2123.1611d,2136.574d,2163.8613d,2208.643d,2241.432d,2245.9058d,2001.5144d,2031.9783d,2069.3872d,2102.7725d,2113.9373d,2117.8367d,2134.9307d,2155.1533d,2179.687d,2212.9246d,2230.7837d,2241.7615d,2013.3889d,2049.653d,2085.5903d,2127.0718d,2123.817d,2127.7424d,2144.686d,2164.8176d,2202.115d,2218.9832d,2228d,2224.3147d,2000.4667d,2045.9894d,2077.1528d,2090.753d,2094.5105d,2121.8855d,2150.4126d,2179.3713d,2208.0806d,2225.1619d,2225.7646d,2214.9675d});
  }
}
protected class MFVec2f87 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
protected class MFString88 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SquawLOD028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD028.x3d","SquawLOD028.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SquawLOD028.wrl"});
  }
}
protected class MFString89 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFString90 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/squaw014.jpg","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/squaw014.jpg"});
  }
}
protected class MFString91 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"UTM","Z10","N"});
  }
}
protected class MFDouble92 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {2000.4667d,2045.9894d,2077.1528d,2090.753d,2094.5105d,2121.8855d,2150.4126d,2179.3713d,2208.0806d,2225.1619d,2225.7646d,2214.9675d,1973.9639d,2015.824d,2044.2587d,2053.7708d,2077.9438d,2104.216d,2130.0784d,2158.9924d,2197.3953d,2228.9314d,2220.6597d,2217.418d,1988.9125d,2008.0807d,2021.95d,2051.2603d,2069.5183d,2087.9421d,2124.25d,2150.3352d,2183.1028d,2220.7808d,2232.258d,2238.318d,2020.148d,2022.7766d,2053.4119d,2077.424d,2096.4287d,2099.7708d,2125.0535d,2155.2466d,2197.3257d,2234.2498d,2247.9897d,2256.2568d,2051.8557d,2054.7861d,2072.0605d,2092.9597d,2116.5059d,2130.5554d,2130.3972d,2153.4165d,2193.234d,2238.591d,2259.2593d,2268.545d,2071.7534d,2074.1765d,2080.7217d,2099.607d,2123.832d,2151.77d,2153.9714d,2174.5342d,2201.912d,2245.8296d,2272.7747d,2278.1917d,2095.9607d,2082.0806d,2086.6433d,2096.2478d,2127.6484d,2160.2964d,2173.3057d,2210.0872d,2237.596d,2266.4607d,2289.6135d,2302.061d,2074.8762d,2056.9897d,2056.7773d,2097.9102d,2133.7444d,2151.6877d,2168.4146d,2209.9402d,2262.1694d,2294.841d,2339.719d,2341.1687d,2030.477d,2028.0677d,2052.967d,2090.5562d,2114.8523d,2128.87d,2149.872d,2177.1982d,2225.0242d,2274.0972d,2315.8928d,2342.223d,1978.8319d,2021.0963d,2057.9194d,2076.756d,2085.99d,2111.5051d,2135.275d,2158.6672d,2197.0276d,2266.3108d,2313.1658d,2303.6233d,1995.2931d,2036.435d,2060.2505d,2053.6138d,2075.921d,2102.6663d,2123.6692d,2142.87d,2173.7058d,2229.0857d,2269.864d,2282.4197d,2015.4413d,2044.1926d,2041.6989d,2046.9943d,2069.3022d,2070.4114d,2102.9775d,2116.1753d,2147.2117d,2185.0103d,2217.074d,2255.9717d,2021.1096d,2036.8822d,2022.3743d,2053.6484d,2067.9175d,2035.9884d,2069.1472d,2087.1826d,2123.5928d,2140.8518d,2194.9014d,2246.7134d,1998.459d,1999.4203d,2016.3168d,2054.3218d,2054.5737d,2012.7327d,2023.0583d,2048.4514d,2075.9988d,2127.955d,2177.172d,2217.4138d,1950.3167d,1956.6191d,1999.384d,2020.5559d,2017.7311d,1988.3441d,1990.8011d,2019.189d,2063.3855d,2093.2776d,2124.8118d,2175.294d,1914.1292d,1947.009d,1978.1115d,1978.1292d,1983.044d,1956.0769d,1963.4441d,1991.868d,2018.7557d,2060.588d,2104.619d,2159.1968d});
  }
}
protected class MFVec2f93 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.00391f,0.00391f,0.09091f,0.00391f,0.18182f,0.00391f,0.27273f,0.00391f,0.36364f,0.00391f,0.45455f,0.00391f,0.54545f,0.00391f,0.63636f,0.00391f,0.72727f,0.00391f,0.81818f,0.00391f,0.90909f,0.00391f,0.99609f,0.00391f,0.00391f,0.06667f,0.09091f,0.06667f,0.18182f,0.06667f,0.27273f,0.06667f,0.36364f,0.06667f,0.45455f,0.06667f,0.54545f,0.06667f,0.63636f,0.06667f,0.72727f,0.06667f,0.81818f,0.06667f,0.90909f,0.06667f,0.99609f,0.06667f,0.00391f,0.13333f,0.09091f,0.13333f,0.18182f,0.13333f,0.27273f,0.13333f,0.36364f,0.13333f,0.45455f,0.13333f,0.54545f,0.13333f,0.63636f,0.13333f,0.72727f,0.13333f,0.81818f,0.13333f,0.90909f,0.13333f,0.99609f,0.13333f,0.00391f,0.2f,0.09091f,0.2f,0.18182f,0.2f,0.27273f,0.2f,0.36364f,0.2f,0.45455f,0.2f,0.54545f,0.2f,0.63636f,0.2f,0.72727f,0.2f,0.81818f,0.2f,0.90909f,0.2f,0.99609f,0.2f,0.00391f,0.26667f,0.09091f,0.26667f,0.18182f,0.26667f,0.27273f,0.26667f,0.36364f,0.26667f,0.45455f,0.26667f,0.54545f,0.26667f,0.63636f,0.26667f,0.72727f,0.26667f,0.81818f,0.26667f,0.90909f,0.26667f,0.99609f,0.26667f,0.00391f,0.33333f,0.09091f,0.33333f,0.18182f,0.33333f,0.27273f,0.33333f,0.36364f,0.33333f,0.45455f,0.33333f,0.54545f,0.33333f,0.63636f,0.33333f,0.72727f,0.33333f,0.81818f,0.33333f,0.90909f,0.33333f,0.99609f,0.33333f,0.00391f,0.4f,0.09091f,0.4f,0.18182f,0.4f,0.27273f,0.4f,0.36364f,0.4f,0.45455f,0.4f,0.54545f,0.4f,0.63636f,0.4f,0.72727f,0.4f,0.81818f,0.4f,0.90909f,0.4f,0.99609f,0.4f,0.00391f,0.46667f,0.09091f,0.46667f,0.18182f,0.46667f,0.27273f,0.46667f,0.36364f,0.46667f,0.45455f,0.46667f,0.54545f,0.46667f,0.63636f,0.46667f,0.72727f,0.46667f,0.81818f,0.46667f,0.90909f,0.46667f,0.99609f,0.46667f,0.00391f,0.53333f,0.09091f,0.53333f,0.18182f,0.53333f,0.27273f,0.53333f,0.36364f,0.53333f,0.45455f,0.53333f,0.54545f,0.53333f,0.63636f,0.53333f,0.72727f,0.53333f,0.81818f,0.53333f,0.90909f,0.53333f,0.99609f,0.53333f,0.00391f,0.6f,0.09091f,0.6f,0.18182f,0.6f,0.27273f,0.6f,0.36364f,0.6f,0.45455f,0.6f,0.54545f,0.6f,0.63636f,0.6f,0.72727f,0.6f,0.81818f,0.6f,0.90909f,0.6f,0.99609f,0.6f,0.00391f,0.66667f,0.09091f,0.66667f,0.18182f,0.66667f,0.27273f,0.66667f,0.36364f,0.66667f,0.45455f,0.66667f,0.54545f,0.66667f,0.63636f,0.66667f,0.72727f,0.66667f,0.81818f,0.66667f,0.90909f,0.66667f,0.99609f,0.66667f,0.00391f,0.73333f,0.09091f,0.73333f,0.18182f,0.73333f,0.27273f,0.73333f,0.36364f,0.73333f,0.45455f,0.73333f,0.54545f,0.73333f,0.63636f,0.73333f,0.72727f,0.73333f,0.81818f,0.73333f,0.90909f,0.73333f,0.99609f,0.73333f,0.00391f,0.8f,0.09091f,0.8f,0.18182f,0.8f,0.27273f,0.8f,0.36364f,0.8f,0.45455f,0.8f,0.54545f,0.8f,0.63636f,0.8f,0.72727f,0.8f,0.81818f,0.8f,0.90909f,0.8f,0.99609f,0.8f,0.00391f,0.86667f,0.09091f,0.86667f,0.18182f,0.86667f,0.27273f,0.86667f,0.36364f,0.86667f,0.45455f,0.86667f,0.54545f,0.86667f,0.63636f,0.86667f,0.72727f,0.86667f,0.81818f,0.86667f,0.90909f,0.86667f,0.99609f,0.86667f,0.00391f,0.93333f,0.09091f,0.93333f,0.18182f,0.93333f,0.27273f,0.93333f,0.36364f,0.93333f,0.45455f,0.93333f,0.54545f,0.93333f,0.63636f,0.93333f,0.72727f,0.93333f,0.81818f,0.93333f,0.90909f,0.93333f,0.99609f,0.93333f,0.00391f,0.99609f,0.09091f,0.99609f,0.18182f,0.99609f,0.27273f,0.99609f,0.36364f,0.99609f,0.45455f,0.99609f,0.54545f,0.99609f,0.63636f,0.99609f,0.72727f,0.99609f,0.81818f,0.99609f,0.90909f,0.99609f,0.99609f,0.99609f});
  }
}
}

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
public class Mexico {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Mexico().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/Mexico.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("Mexico.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This GeoVRML scene was converted from an original ESRI Shape file by the Bashir Research ShapeViz tool. This particular example shows a number of layers for Mexico, including state boundaries, rivers, roads, lakes, and cities. The ShapeViz tool with GeoVRML export is freely available from http://www.my3d.com/ShapeViz.htm."))
        .addMeta(new metaObject().setName("creator").setContent("Matt Fadoul, Bashir Reasearch"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("Image").setContent("Mexico.png"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.my3d.com/ShapeViz.htm"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/Mexico.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Mexico.x3d"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new GroupObject().setDEF("ViewpointGroup")
          .addChild(new GeoViewpointObject().setDescription("states").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {23.635678291d,-101.928688049d,3668080.629822409d})
            .setGeoOrigin(new GeoOriginObject().setDEF("GEOORIGIN").setGeoCoords(new double[] {23.63569d,-101.92869d,0d})))
          .addChild(new GeoViewpointObject().setDescription("rivers").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {24.080378532d,-102.849819183d,2943331.220375903d})
            .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("roads_rt").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {23.617524147d,-101.940013885d,3644597.341377297d})
            .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("lakes").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {19.216386795d,-99.892372131d,853055.157236008d})
            .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))
          .addChild(new GeoViewpointObject().setDescription("cities").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new double[] {24.625250816d,-101.779296875d,3262794.748839078d})
            .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN"))))
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt321().getArray())).setCoordIndex(new MFInt32Object(new MFInt322().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor3().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d4().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt325().getArray())).setCoordIndex(new MFInt32Object(new MFInt326().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor7().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d8().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt329().getArray())).setCoordIndex(new MFInt32Object(new MFInt3210().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor11().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d12().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3213().getArray())).setCoordIndex(new MFInt32Object(new MFInt3214().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor15().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d16().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3217().getArray())).setCoordIndex(new MFInt32Object(new MFInt3218().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor19().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d20().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3221().getArray())).setCoordIndex(new MFInt32Object(new MFInt3222().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor23().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d24().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3225().getArray())).setCoordIndex(new MFInt32Object(new MFInt3226().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor27().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d28().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3229().getArray())).setCoordIndex(new MFInt32Object(new MFInt3230().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor31().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d32().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3233().getArray())).setCoordIndex(new MFInt32Object(new MFInt3234().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor35().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d36().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3237().getArray())).setCoordIndex(new MFInt32Object(new MFInt3238().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor39().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d40().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3241().getArray())).setCoordIndex(new MFInt32Object(new MFInt3242().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor43().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d44().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3245().getArray())).setCoordIndex(new MFInt32Object(new MFInt3246().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor47().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d48().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3249().getArray())).setCoordIndex(new MFInt32Object(new MFInt3250().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor51().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d52().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3253().getArray())).setCoordIndex(new MFInt32Object(new MFInt3254().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor55().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d56().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3257().getArray())).setCoordIndex(new MFInt32Object(new MFInt3258().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor59().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d60().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3261().getArray())).setCoordIndex(new MFInt32Object(new MFInt3262().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor63().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d64().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3265().getArray())).setCoordIndex(new MFInt32Object(new MFInt3266().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor67().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d68().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3269().getArray())).setCoordIndex(new MFInt32Object(new MFInt3270().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor71().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d72().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3273().getArray())).setCoordIndex(new MFInt32Object(new MFInt3274().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor75().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d76().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3277().getArray())).setCoordIndex(new MFInt32Object(new MFInt3278().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor79().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d80().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3281().getArray())).setCoordIndex(new MFInt32Object(new MFInt3282().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor83().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d84().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3285().getArray())).setCoordIndex(new MFInt32Object(new MFInt3286().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor87().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d88().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3289().getArray())).setCoordIndex(new MFInt32Object(new MFInt3290().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor91().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d92().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3293().getArray())).setCoordIndex(new MFInt32Object(new MFInt3294().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor95().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d96().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt3297().getArray())).setCoordIndex(new MFInt32Object(new MFInt3298().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor99().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d100().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32101().getArray())).setCoordIndex(new MFInt32Object(new MFInt32102().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor103().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d104().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32105().getArray())).setCoordIndex(new MFInt32Object(new MFInt32106().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor107().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d108().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32109().getArray())).setCoordIndex(new MFInt32Object(new MFInt32110().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor111().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d112().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32113().getArray())).setCoordIndex(new MFInt32Object(new MFInt32114().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor115().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d116().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32117().getArray())).setCoordIndex(new MFInt32Object(new MFInt32118().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor119().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d120().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32121().getArray())).setCoordIndex(new MFInt32Object(new MFInt32122().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor123().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d124().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32125().getArray())).setCoordIndex(new MFInt32Object(new MFInt32126().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor127().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d128().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN"))))))
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32129().getArray())).setCoordIndex(new MFInt32Object(new MFInt32130().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor131().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d132().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32133().getArray())).setCoordIndex(new MFInt32Object(new MFInt32134().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor135().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d136().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32137().getArray())).setCoordIndex(new MFInt32Object(new MFInt32138().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor139().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d140().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32141().getArray())).setCoordIndex(new MFInt32Object(new MFInt32142().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor143().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d144().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32145().getArray())).setCoordIndex(new MFInt32Object(new MFInt32146().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor147().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d148().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32149().getArray())).setCoordIndex(new MFInt32Object(new MFInt32150().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor151().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d152().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32153().getArray())).setCoordIndex(new MFInt32Object(new MFInt32154().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor155().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d156().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32157().getArray())).setCoordIndex(new MFInt32Object(new MFInt32158().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor159().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d160().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32161().getArray())).setCoordIndex(new MFInt32Object(new MFInt32162().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor163().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d164().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32165().getArray())).setCoordIndex(new MFInt32Object(new MFInt32166().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor167().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d168().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32169().getArray())).setCoordIndex(new MFInt32Object(new MFInt32170().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor171().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d172().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32173().getArray())).setCoordIndex(new MFInt32Object(new MFInt32174().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor175().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d176().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32177().getArray())).setCoordIndex(new MFInt32Object(new MFInt32178().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor179().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d180().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32181().getArray())).setCoordIndex(new MFInt32Object(new MFInt32182().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor183().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d184().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32185().getArray())).setCoordIndex(new MFInt32Object(new MFInt32186().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor187().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d188().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32189().getArray())).setCoordIndex(new MFInt32Object(new MFInt32190().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor191().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d192().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32193().getArray())).setCoordIndex(new MFInt32Object(new MFInt32194().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor195().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d196().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32197().getArray())).setCoordIndex(new MFInt32Object(new MFInt32198().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor199().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d200().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32201().getArray())).setCoordIndex(new MFInt32Object(new MFInt32202().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor203().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d204().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32205().getArray())).setCoordIndex(new MFInt32Object(new MFInt32206().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor207().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d208().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32209().getArray())).setCoordIndex(new MFInt32Object(new MFInt32210().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor211().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d212().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32213().getArray())).setCoordIndex(new MFInt32Object(new MFInt32214().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor215().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d216().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32217().getArray())).setCoordIndex(new MFInt32Object(new MFInt32218().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor219().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d220().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32221().getArray())).setCoordIndex(new MFInt32Object(new MFInt32222().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor223().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d224().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32225().getArray())).setCoordIndex(new MFInt32Object(new MFInt32226().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor227().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d228().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32229().getArray())).setCoordIndex(new MFInt32Object(new MFInt32230().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor231().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d232().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32233().getArray())).setCoordIndex(new MFInt32Object(new MFInt32234().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor235().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d236().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32237().getArray())).setCoordIndex(new MFInt32Object(new MFInt32238().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor239().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d240().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32241().getArray())).setCoordIndex(new MFInt32Object(new MFInt32242().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor243().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d244().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32245().getArray())).setCoordIndex(new MFInt32Object(new MFInt32246().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor247().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d248().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN"))))))
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32249().getArray())).setCoordIndex(new MFInt32Object(new MFInt32250().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor251().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d252().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32253().getArray())).setCoordIndex(new MFInt32Object(new MFInt32254().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor255().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d256().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32257().getArray())).setCoordIndex(new MFInt32Object(new MFInt32258().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor259().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d260().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32261().getArray())).setCoordIndex(new MFInt32Object(new MFInt32262().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor263().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d264().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32265().getArray())).setCoordIndex(new MFInt32Object(new MFInt32266().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor267().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d268().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32269().getArray())).setCoordIndex(new MFInt32Object(new MFInt32270().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor271().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d272().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32273().getArray())).setCoordIndex(new MFInt32Object(new MFInt32274().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor275().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d276().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32277().getArray())).setCoordIndex(new MFInt32Object(new MFInt32278().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor279().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d280().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32281().getArray())).setCoordIndex(new MFInt32Object(new MFInt32282().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor283().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d284().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32285().getArray())).setCoordIndex(new MFInt32Object(new MFInt32286().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor287().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d288().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32289().getArray())).setCoordIndex(new MFInt32Object(new MFInt32290().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor291().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d292().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32293().getArray())).setCoordIndex(new MFInt32Object(new MFInt32294().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor295().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d296().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32297().getArray())).setCoordIndex(new MFInt32Object(new MFInt32298().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor299().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d300().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32301().getArray())).setCoordIndex(new MFInt32Object(new MFInt32302().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor303().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d304().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32305().getArray())).setCoordIndex(new MFInt32Object(new MFInt32306().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor307().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d308().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32309().getArray())).setCoordIndex(new MFInt32Object(new MFInt32310().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor311().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d312().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32313().getArray())).setCoordIndex(new MFInt32Object(new MFInt32314().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor315().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d316().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32317().getArray())).setCoordIndex(new MFInt32Object(new MFInt32318().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor319().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d320().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32321().getArray())).setCoordIndex(new MFInt32Object(new MFInt32322().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor323().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d324().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32325().getArray())).setCoordIndex(new MFInt32Object(new MFInt32326().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor327().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d328().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32329().getArray())).setCoordIndex(new MFInt32Object(new MFInt32330().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor331().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d332().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32333().getArray())).setCoordIndex(new MFInt32Object(new MFInt32334().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor335().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d336().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32337().getArray())).setCoordIndex(new MFInt32Object(new MFInt32338().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor339().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d340().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32341().getArray())).setCoordIndex(new MFInt32Object(new MFInt32342().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor343().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d344().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32345().getArray())).setCoordIndex(new MFInt32Object(new MFInt32346().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor347().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d348().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32349().getArray())).setCoordIndex(new MFInt32Object(new MFInt32350().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor351().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d352().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32353().getArray())).setCoordIndex(new MFInt32Object(new MFInt32354().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor355().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d356().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32357().getArray())).setCoordIndex(new MFInt32Object(new MFInt32358().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor359().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d360().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN"))))))
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32361().getArray())).setCoordIndex(new MFInt32Object(new MFInt32362().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor363().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d364().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32365().getArray())).setCoordIndex(new MFInt32Object(new MFInt32366().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor367().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d368().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new IndexedLineSetObject().setColorIndex(new MFInt32Object(new MFInt32369().getArray())).setCoordIndex(new MFInt32Object(new MFInt32370().getArray()))
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor371().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d372().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN"))))))
        .addChild(new GroupObject()
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor373().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d374().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor375().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d376().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor377().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d378().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor379().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d380().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor381().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d382().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor383().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d384().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor385().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d386().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor387().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d388().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor389().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d390().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor391().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d392().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor393().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d394().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor395().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d396().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor397().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d398().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor399().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d400().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor401().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d402().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor403().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d404().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor405().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d406().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor407().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d408().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor409().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d410().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor411().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d412().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor413().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d414().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor415().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d416().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor417().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d418().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor419().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d420().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor421().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d422().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor423().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d424().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor425().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d426().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor427().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d428().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor429().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d430().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor431().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d432().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor433().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d434().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor435().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d436().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor437().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d438().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor439().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d440().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor441().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d442().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))
          .addChild(new ShapeObject()
            .setGeometry(new PointSetObject()
              .setColor(new ColorObject().setColor(new MFColorObject(new MFColor443().getArray())))
              .setCoord(new GeoCoordinateObject().setPoint(new MFVec3dObject(new MFVec3d444().getArray()))
                .setGeoOrigin(new GeoOriginObject().setUSE("GEOORIGIN")))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.4f,0.4f,1f});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,0,-1,14,15,16,17,18,19,20,21,22,14,-1,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,23,-1});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d4 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {29.017776d,-113.139717d,0d,29.067776d,-113.24057d,0d,29.286663d,-113.450844d,0d,29.303055d,-113.511948d,0d,29.439163d,-113.600281d,0d,29.505833d,-113.573898d,0d,29.583611d,-113.588623d,0d,29.482498d,-113.405289d,0d,29.403332d,-113.365013d,0d,29.32d,-113.381958d,0d,29.294167d,-113.184174d,0d,29.141109d,-113.189453d,0d,29.058887d,-113.124451d,0d,29.017776d,-113.139717d,0d,28.024719d,-115.179459d,0d,28.098888d,-115.303886d,0d,28.090275d,-115.355293d,0d,28.228333d,-115.249733d,0d,28.31583d,-115.280563d,0d,28.370552d,-115.240837d,0d,28.308887d,-115.178886d,0d,28.178886d,-115.146118d,0d,28.024719d,-115.179459d,0d,31.947489d,-115.017899d,0d,31.957222d,-115.035278d,0d,31.907776d,-115.01445d,0d,31.896385d,-114.953056d,0d,31.805553d,-114.873901d,0d,31.796665d,-114.823898d,0d,31.643608d,-114.779449d,0d,31.526386d,-114.85112d,0d,31.15472d,-114.881119d,0d,31.059998d,-114.818069d,0d,30.996109d,-114.829727d,0d,30.924999d,-114.705292d,0d,30.651108d,-114.693893d,0d,30.487778d,-114.624451d,0d,30.198608d,-114.659729d,0d,30.00111d,-114.545288d,0d,29.919167d,-114.413353d,0d,29.798054d,-114.376953d,0d,29.759163d,-114.304459d,0d,29.784721d,-114.263344d,0d,29.75861d,-114.206123d,0d,29.595833d,-114.056122d,0d,29.35722d,-113.728348d,0d,29.261665d,-113.650848d,0d,29.208611d,-113.654716d,0d,29.110275d,-113.54834d,0d,28.956387d,-113.546402d,0d,28.891388d,-113.50473d,0d,28.892498d,-113.453056d,0d,28.939163d,-113.463623d,0d,28.964996d,-113.412514d,0d,28.908607d,-113.348343d,0d,28.79583d,-113.343338d,0d,28.830276d,-113.231667d,0d,28.814442d,-113.194168d,0d,28.479721d,-113.111954d,0d,28.437496d,-113.018066d,0d,28.433331d,-112.862793d,0d,28.275555d,-112.872513d,0d,28.193054d,-112.787781d,0d,28.02972d,-112.778633d,0d,28.00222d,-112.721947d,0d,27.999741d,-112.722397d,0d,28.00054d,-114.140823d,0d,28.023888d,-114.128616d,0d,28.178333d,-114.111954d,0d,28.261665d,-114.182793d,0d,28.398888d,-114.097504d,0d,28.527222d,-114.063606d,0d,28.594444d,-114.143066d,0d,28.671665d,-114.161957d,0d,28.683609d,-114.264183d,0d,28.713608d,-114.261673d,0d,28.829998d,-114.392502d,0d,28.88583d,-114.405289d,0d,28.93861d,-114.490837d,0d,28.929165d,-114.541122d,0d,28.975277d,-114.55751d,0d,29.021942d,-114.613617d,0d,29.114441d,-114.648064d,0d,29.134998d,-114.710007d,0d,29.199444d,-114.744453d,0d,29.377499d,-114.950287d,0d,29.427757d,-115.1875d,0d,29.489166d,-115.232513d,0d,29.626389d,-115.469452d,0d,29.62833d,-115.526123d,0d,29.696388d,-115.572777d,0d,29.76833d,-115.693893d,0d,29.866943d,-115.694458d,0d,29.930275d,-115.729172d,0d,29.954441d,-115.808327d,0d,30.107498d,-115.783073d,0d,30.331944d,-115.826401d,0d,30.384441d,-115.868057d,0d,30.398052d,-115.968063d,0d,30.445553d,-115.929169d,0d,30.496666d,-115.98056d,0d,30.444721d,-115.957779d,0d,30.438889d,-116.013344d,0d,30.373055d,-115.991386d,0d,30.442776d,-116.036392d,0d,30.797775d,-116.054169d,0d,30.89222d,-116.206947d,0d,30.957775d,-116.257507d,0d,30.97361d,-116.326683d,0d,31.089722d,-116.301682d,0d,31.213886d,-116.336937d,0d,31.424999d,-116.494453d,0d,31.469997d,-116.593338d,0d,31.555275d,-116.677513d,0d,31.586666d,-116.637512d,0d,31.658886d,-116.635277d,0d,31.748055d,-116.72168d,0d,31.738609d,-116.625839d,0d,31.840275d,-116.603058d,0d,31.916943d,-116.744171d,0d,31.983887d,-116.78418d,0d,31.996109d,-116.848892d,0d,32.228333d,-116.909729d,0d,32.299995d,-117.026672d,0d,32.455826d,-117.122223d,0d,32.535332d,-117.122375d,0d,32.619408d,-116.106125d,0d,32.72081d,-114.72126d,0d,32.615993d,-114.808601d,0d,32.504448d,-114.819305d,0d,32.473049d,-114.936699d,0d,32.36861d,-114.964203d,0d,32.254669d,-115.041496d,0d,32.136108d,-114.998901d,0d,31.947489d,-115.017899d,0d});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,0,-1,8,9,10,11,12,13,14,15,16,17,18,19,8,-1,20,21,22,23,24,25,20,-1,26,27,28,29,30,31,26,-1,32,33,34,35,32,-1,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,36,-1});
  }
}
protected class MFColor7 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d8 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.802776d,-111.206123d,0d,25.834164d,-111.230293d,0d,26.038887d,-111.191391d,0d,26.074444d,-111.08667d,0d,26.004444d,-111.099457d,0d,25.971386d,-111.069168d,0d,26.003609d,-111.142227d,0d,25.802776d,-111.206123d,0d,25.281109d,-112.133621d,0d,24.844997d,-112.202507d,0d,24.714722d,-112.132782d,0d,24.647778d,-112.142227d,0d,24.594719d,-112.070847d,0d,24.518055d,-112.052231d,0d,24.662498d,-112.179169d,0d,24.708885d,-112.153343d,0d,24.784164d,-112.180557d,0d,24.810555d,-112.304169d,0d,24.914997d,-112.236679d,0d,25.281109d,-112.133621d,0d,25.08884d,-110.696091d,0d,25.033886d,-110.578903d,0d,24.88472d,-110.532227d,0d,24.93111d,-110.64389d,0d,25.0425d,-110.708893d,0d,25.08884d,-110.696091d,0d,24.328331d,-111.708069d,0d,24.532497d,-112.016678d,0d,24.541111d,-111.836937d,0d,24.492496d,-111.826134d,0d,24.391666d,-111.694733d,0d,24.328331d,-111.708069d,0d,24.131943d,-109.788353d,0d,24.187496d,-109.871399d,0d,24.368889d,-109.915558d,0d,24.131943d,-109.788353d,0d,27.999741d,-112.722397d,0d,27.834721d,-112.752502d,0d,27.806942d,-112.705841d,0d,27.721386d,-112.67334d,0d,27.712776d,-112.625839d,0d,27.630554d,-112.572777d,0d,27.62722d,-112.503891d,0d,27.539997d,-112.344452d,0d,27.341663d,-112.292793d,0d,27.238609d,-112.203339d,0d,27.232777d,-112.230011d,0d,27.197498d,-112.22168d,0d,27.101944d,-111.955292d,0d,27.076942d,-111.94751d,0d,27.053333d,-112.004181d,0d,27.00111d,-112.030838d,0d,26.839443d,-111.898064d,0d,26.738888d,-111.917236d,0d,26.563889d,-111.761948d,0d,26.552776d,-111.730293d,0d,26.602219d,-111.685287d,0d,26.707222d,-111.806122d,0d,26.872498d,-111.868622d,0d,26.901108d,-111.847778d,0d,26.72361d,-111.560837d,0d,26.564999d,-111.556953d,0d,26.513611d,-111.44223d,0d,26.417774d,-111.479446d,0d,26.345554d,-111.401398d,0d,26.236942d,-111.395569d,0d,26.107777d,-111.321121d,0d,25.958332d,-111.361954d,0d,25.844719d,-111.325012d,0d,25.836388d,-111.293327d,0d,25.780277d,-111.299728d,0d,25.715832d,-111.228058d,0d,25.577499d,-111.165283d,0d,25.525555d,-111.018341d,0d,25.419167d,-111.019447d,0d,25.308887d,-110.946121d,0d,25.173054d,-110.911118d,0d,25.088333d,-110.855011d,0d,25.019722d,-110.746674d,0d,24.908886d,-110.690842d,0d,24.796944d,-110.668327d,0d,24.674164d,-110.726669d,0d,24.578331d,-110.734177d,0d,24.380554d,-110.688904d,0d,24.284443d,-110.612793d,0d,24.221664d,-110.505836d,0d,24.188889d,-110.304169d,0d,24.16d,-110.340012d,0d,24.18222d,-110.398903d,0d,24.115833d,-110.354172d,0d,24.189163d,-110.269447d,0d,24.334442d,-110.300003d,0d,24.351944d,-110.213623d,0d,24.249443d,-110.13945d,0d,24.164165d,-110.003342d,0d,24.043888d,-109.958893d,0d,24.022499d,-109.920288d,0d,24.053055d,-109.819458d,0d,24.021385d,-109.794449d,0d,23.916386d,-109.823624d,0d,23.797775d,-109.697777d,0d,23.66d,-109.686401d,0d,23.575554d,-109.478348d,0d,23.454166d,-109.404167d,0d,23.232777d,-109.435013d,0d,23.155552d,-109.488342d,0d,23.053886d,-109.665558d,0d,22.989441d,-109.705002d,0d,22.917774d,-109.813057d,0d,22.863888d,-109.95195d,0d,22.902496d,-110.025009d,0d,22.986664d,-110.080566d,0d,23.328331d,-110.171951d,0d,23.415276d,-110.248611d,0d,23.567497d,-110.316681d,0d,23.731667d,-110.634453d,0d,24.112221d,-111.041672d,0d,24.334442d,-111.47084d,0d,24.310276d,-111.377792d,0d,24.459721d,-111.602783d,0d,24.57972d,-111.655006d,0d,24.593887d,-111.685287d,0d,24.546944d,-111.706123d,0d,24.562496d,-111.793617d,0d,24.522778d,-111.765556d,0d,24.513611d,-111.808327d,0d,24.642498d,-111.82695d,0d,24.746666d,-111.931122d,0d,24.886387d,-112.001953d,0d,24.7575d,-111.973892d,0d,24.76083d,-112.03418d,0d,24.853054d,-112.041397d,0d,24.769722d,-112.051964d,0d,24.735832d,-112.094452d,0d,24.768608d,-112.070847d,0d,24.878052d,-112.125839d,0d,24.956387d,-112.078613d,0d,25.025833d,-112.096123d,0d,24.901108d,-112.148903d,0d,24.894165d,-112.179459d,0d,25.053886d,-112.124184d,0d,25.1675d,-112.128067d,0d,25.272221d,-112.068069d,0d,25.685276d,-112.070847d,0d,25.717777d,-112.078903d,0d,25.69833d,-112.088348d,0d,25.568333d,-112.085281d,0d,25.524166d,-112.113342d,0d,25.773609d,-112.112503d,0d,26.014721d,-112.228348d,0d,26.093609d,-112.309174d,0d,26.082497d,-112.341949d,0d,26.254997d,-112.378342d,0d,26.291386d,-112.430008d,0d,26.268887d,-112.486389d,0d,26.29583d,-112.541672d,0d,26.325832d,-112.536957d,0d,26.329166d,-112.670837d,0d,26.41222d,-112.781113d,0d,26.436386d,-112.770844d,0d,26.644997d,-113.103348d,0d,26.689442d,-113.079727d,0d,26.672222d,-113.116669d,0d,26.711388d,-113.229172d,0d,26.780552d,-113.231667d,0d,26.880554d,-113.128067d,0d,26.958885d,-113.128342d,0d,26.970276d,-113.178619d,0d,26.874996d,-113.185013d,0d,26.817497d,-113.241386d,0d,26.82222d,-113.203613d,0d,26.796108d,-113.243347d,0d,26.742775d,-113.25029d,0d,26.821663d,-113.445847d,0d,26.824165d,-113.401123d,0d,26.844719d,-113.438606d,0d,26.745831d,-113.532791d,0d,26.736942d,-113.597504d,0d,26.836666d,-113.730293d,0d,26.974163d,-113.835564d,0d,27.000553d,-113.90834d,0d,26.982777d,-114.001404d,0d,27.096664d,-114.087784d,0d,27.147499d,-114.170013d,0d,27.165554d,-114.243896d,0d,27.143887d,-114.281113d,0d,27.184719d,-114.410568d,0d,27.231941d,-114.433617d,0d,27.242222d,-114.478622d,0d,27.413609d,-114.513634d,0d,27.487499d,-114.608337d,0d,27.533886d,-114.736679d,0d,27.621944d,-114.799454d,0d,27.646111d,-114.862793d,0d,27.658054d,-114.843903d,0d,27.694443d,-114.872223d,0d,27.670555d,-114.90834d,0d,27.720833d,-114.950844d,0d,27.722221d,-115.006668d,0d,27.831108d,-115.059723d,0d,27.862778d,-115.041122d,0d,27.831665d,-114.998611d,0d,27.836388d,-114.855827d,0d,27.76722d,-114.613617d,0d,27.769444d,-114.501404d,0d,27.878887d,-114.347229d,0d,27.781387d,-114.33223d,0d,27.732498d,-114.2789d,0d,27.693054d,-114.165848d,0d,27.714722d,-114.04834d,0d,27.686665d,-114.002228d,0d,27.719997d,-113.97139d,0d,27.770554d,-114.036118d,0d,27.716942d,-114.161118d,0d,27.769444d,-114.225853d,0d,27.832775d,-114.237228d,0d,27.865555d,-114.310562d,0d,27.946388d,-114.285004d,0d,28.00021d,-114.218269d,0d,28.049442d,-114.157227d,0d,28.000549d,-114.159302d,0d,27.962776d,-114.160568d,0d,28.00054d,-114.140823d,0d,27.999741d,-112.722397d,0d});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,0,-1,7,8,9,10,11,12,7,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,13,-1});
  }
}
protected class MFColor11 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d12 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.565311d,-106.621078d,0d,21.693886d,-106.647507d,0d,21.715832d,-106.585564d,0d,21.69083d,-106.530006d,0d,21.612778d,-106.485291d,0d,21.513054d,-106.515007d,0d,21.565311d,-106.621078d,0d,21.41972d,-106.39917d,0d,21.450275d,-106.511398d,0d,21.510555d,-106.47168d,0d,21.503052d,-106.34639d,0d,21.468609d,-106.327217d,0d,21.41972d,-106.39917d,0d,20.693254d,-105.271591d,0d,20.767776d,-105.322777d,0d,20.753887d,-105.417236d,0d,20.785d,-105.544449d,0d,20.819721d,-105.467506d,0d,21.017498d,-105.318619d,0d,21.06472d,-105.241386d,0d,21.227776d,-105.213058d,0d,21.347775d,-105.238617d,0d,21.450275d,-105.180847d,0d,21.520275d,-105.221123d,0d,21.521664d,-105.279716d,0d,21.607777d,-105.436401d,0d,21.775276d,-105.497513d,0d,21.987778d,-105.654167d,0d,22.286663d,-105.640289d,0d,22.468361d,-105.714577d,0d,22.47311d,-105.694702d,0d,22.486179d,-105.644302d,0d,22.548889d,-105.454498d,0d,22.681391d,-105.479401d,0d,22.75305d,-105.575302d,0d,22.836941d,-105.541702d,0d,22.903891d,-105.444199d,0d,22.971109d,-105.487801d,0d,23.040831d,-105.462799d,0d,23.067459d,-105.4021d,0d,23.034719d,-105.3125d,0d,23.039721d,-105.171997d,0d,22.924721d,-104.914703d,0d,22.783051d,-104.879997d,0d,22.67889d,-104.9981d,0d,22.54833d,-104.9981d,0d,22.67667d,-104.7575d,0d,22.624439d,-104.660599d,0d,22.4725d,-104.612503d,0d,22.410271d,-104.491402d,0d,22.451389d,-104.345001d,0d,22.31921d,-104.311401d,0d,22.26454d,-104.329597d,0d,22.076389d,-104.402802d,0d,21.78583d,-104.093597d,0d,21.598049d,-104.152802d,0d,21.54722d,-104.207199d,0d,21.374969d,-103.944901d,0d,21.287781d,-103.961403d,0d,21.21139d,-104.042503d,0d,21.177731d,-104.227699d,0d,20.97805d,-104.209999d,0d,20.86083d,-104.275002d,0d,20.70805d,-104.285599d,0d,20.82972d,-104.467201d,0d,20.916109d,-104.535004d,0d,20.923611d,-104.625d,0d,21.012779d,-104.721901d,0d,21.02055d,-104.769997d,0d,20.92555d,-104.948898d,0d,20.92528d,-105.083298d,0d,20.693254d,-105.271591d,0d});
  }
}
protected class MFInt3213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,0,-1});
  }
}
protected class MFColor15 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d16 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.85664d,-101.524902d,0d,21.772779d,-101.588303d,0d,21.65694d,-101.543602d,0d,21.533331d,-101.632004d,0d,21.32666d,-101.576401d,0d,21.24305d,-101.658302d,0d,21.150551d,-101.839996d,0d,21.102221d,-101.848297d,0d,20.81389d,-102.074699d,0d,20.773609d,-102.091904d,0d,20.59111d,-101.978302d,0d,20.464439d,-102.089203d,0d,20.38908d,-102.108803d,0d,20.34305d,-102.2117d,0d,20.338051d,-102.443604d,0d,20.22916d,-102.6222d,0d,20.19689d,-102.7724d,0d,20.16391d,-102.8881d,0d,20.09222d,-103.048897d,0d,20.02389d,-103.096397d,0d,19.98917d,-103.086403d,0d,19.98139d,-103.038902d,0d,19.899719d,-103.022003d,0d,19.95245d,-102.929001d,0d,19.931379d,-102.9151d,0d,19.89959d,-102.807602d,0d,19.89974d,-102.789703d,0d,19.882401d,-102.741501d,0d,19.818609d,-102.726997d,0d,19.75705d,-102.830002d,0d,19.70668d,-102.823799d,0d,19.592501d,-102.7631d,0d,19.47361d,-102.7481d,0d,19.49139d,-102.6092d,0d,19.40694d,-102.573097d,0d,19.22444d,-102.6745d,0d,19.254999d,-102.768097d,0d,19.17528d,-102.968903d,0d,19.096661d,-102.975601d,0d,19.03611d,-103.095001d,0d,18.955d,-103.132797d,0d,19.066669d,-103.285301d,0d,18.97444d,-103.348297d,0d,18.96722d,-103.479599d,0d,19.072781d,-103.524696d,0d,19.325279d,-103.491997d,0d,19.48027d,-103.644203d,0d,19.3925d,-103.8228d,0d,19.51833d,-104.067802d,0d,19.46389d,-104.146698d,0d,19.383051d,-104.129204d,0d,19.31916d,-104.2556d,0d,19.271111d,-104.386902d,0d,19.284719d,-104.429497d,0d,19.23027d,-104.473099d,0d,19.253889d,-104.540001d,0d,19.143499d,-104.594597d,0d,19.168053d,-104.662781d,0d,19.23d,-104.735001d,0d,19.220833d,-104.809723d,0d,19.288609d,-104.796951d,0d,19.280277d,-104.885277d,0d,19.344997d,-104.992508d,0d,19.44833d,-105.069733d,0d,19.564999d,-105.102509d,0d,19.679722d,-105.269997d,0d,20.026108d,-105.518623d,0d,20.219166d,-105.561951d,0d,20.371666d,-105.674728d,0d,20.424164d,-105.676964d,0d,20.489998d,-105.560287d,0d,20.513054d,-105.351959d,0d,20.574165d,-105.244171d,0d,20.644444d,-105.238068d,0d,20.693254d,-105.271591d,0d,20.92528d,-105.083298d,0d,20.92555d,-104.948898d,0d,21.02055d,-104.769997d,0d,21.012779d,-104.721901d,0d,20.923611d,-104.625d,0d,20.916109d,-104.535004d,0d,20.82972d,-104.467201d,0d,20.70805d,-104.285599d,0d,20.86083d,-104.275002d,0d,20.97805d,-104.209999d,0d,21.177731d,-104.227699d,0d,21.21139d,-104.042503d,0d,21.287781d,-103.961403d,0d,21.374969d,-103.944901d,0d,21.54722d,-104.207199d,0d,21.598049d,-104.152802d,0d,21.78583d,-104.093597d,0d,22.076389d,-104.402802d,0d,22.26454d,-104.329597d,0d,22.34222d,-104.144203d,0d,22.36805d,-103.950302d,0d,22.51083d,-103.9217d,0d,22.58194d,-104.029404d,0d,22.658609d,-103.994202d,0d,22.764721d,-104.007004d,0d,22.723049d,-103.802002d,0d,22.636669d,-103.770599d,0d,22.577221d,-103.870796d,0d,22.489441d,-103.833603d,0d,22.461109d,-103.883904d,0d,22.183889d,-103.868599d,0d,22.576389d,-103.741402d,0d,22.57333d,-103.658897d,0d,22.524719d,-103.614998d,0d,22.14599d,-103.700897d,0d,22.11278d,-103.682503d,0d,22.081671d,-103.638298d,0d,22.11729d,-103.522301d,0d,22.327499d,-103.371696d,0d,22.435551d,-103.409203d,0d,22.505831d,-103.372498d,0d,22.36861d,-103.179497d,0d,22.307779d,-103.201401d,0d,22.28611d,-103.055603d,0d,22.147779d,-103.1278d,0d,22.090269d,-103.091103d,0d,21.975281d,-103.170799d,0d,21.9825d,-103.293098d,0d,21.933331d,-103.394203d,0d,21.848049d,-103.446999d,0d,21.785549d,-103.547798d,0d,21.731939d,-103.509499d,0d,21.59305d,-103.514198d,0d,21.46139d,-103.650299d,0d,21.51639d,-103.733597d,0d,21.38694d,-103.702797d,0d,21.251659d,-103.753098d,0d,21.22389d,-103.765602d,0d,21.203329d,-103.737d,0d,21.24194d,-103.646103d,0d,21.188049d,-103.6017d,0d,21.198059d,-103.542801d,0d,21.05444d,-103.055801d,0d,21.1875d,-103.085602d,0d,21.30666d,-103.034401d,0d,21.284719d,-102.962196d,0d,21.328609d,-102.9067d,0d,21.320551d,-102.833603d,0d,21.381941d,-102.687202d,0d,21.54694d,-102.639198d,0d,21.617769d,-102.769699d,0d,21.724171d,-102.741402d,0d,21.763889d,-102.644997d,0d,21.68722d,-102.493103d,0d,21.65555d,-102.240303d,0d,21.76861d,-102.083298d,0d,21.851669d,-102.046097d,0d,21.883051d,-101.965302d,0d,22.011761d,-101.846199d,0d,22.01527d,-101.800301d,0d,21.85664d,-101.524902d,0d});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,0,-1});
  }
}
protected class MFColor19 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d20 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.011761d,-101.846199d,0d,21.883051d,-101.965302d,0d,21.851669d,-102.046097d,0d,21.76861d,-102.083298d,0d,21.65555d,-102.240303d,0d,21.68722d,-102.493103d,0d,21.763889d,-102.644997d,0d,21.724171d,-102.741402d,0d,21.82333d,-102.8517d,0d,21.930269d,-102.844704d,0d,22.08333d,-102.706902d,0d,22.27833d,-102.635002d,0d,22.337219d,-102.4506d,0d,22.458891d,-102.325798d,0d,22.45639d,-102.287201d,0d,22.355829d,-102.273598d,0d,22.372219d,-102.2192d,0d,22.324169d,-102.1558d,0d,22.285271d,-102.154404d,0d,22.25194d,-102.0242d,0d,22.137779d,-102.056396d,0d,22.114441d,-101.936401d,0d,22.011761d,-101.846199d,0d});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,0,-1});
  }
}
protected class MFColor23 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d24 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.20451d,-100.280296d,0d,20.05722d,-100.348602d,0d,19.90778d,-100.4814d,0d,19.985279d,-100.679199d,0d,19.9275d,-100.8414d,0d,19.941111d,-100.898399d,0d,20.036659d,-100.915298d,0d,20.059719d,-100.984497d,0d,20.08639d,-101.154404d,0d,20.02389d,-101.274399d,0d,20.035271d,-101.361099d,0d,20.08d,-101.409203d,0d,20.17861d,-101.399399d,0d,20.333679d,-101.460602d,0d,20.31805d,-101.606903d,0d,20.19083d,-101.673897d,0d,20.211941d,-101.820801d,0d,20.191111d,-101.888901d,0d,20.211109d,-101.920303d,0d,20.364441d,-101.9506d,0d,20.36729d,-101.980598d,0d,20.326941d,-101.994202d,0d,20.403049d,-101.995598d,0d,20.38908d,-102.108803d,0d,20.464439d,-102.089203d,0d,20.59111d,-101.978302d,0d,20.773609d,-102.091904d,0d,20.81389d,-102.074699d,0d,21.102221d,-101.848297d,0d,21.150551d,-101.839996d,0d,21.24305d,-101.658302d,0d,21.32666d,-101.576401d,0d,21.533331d,-101.632004d,0d,21.65694d,-101.543602d,0d,21.772779d,-101.588303d,0d,21.85664d,-101.524902d,0d,21.834999d,-101.426697d,0d,21.861389d,-101.3228d,0d,21.7675d,-101.203903d,0d,21.745001d,-100.968597d,0d,21.56889d,-100.751701d,0d,21.50639d,-100.608101d,0d,21.515551d,-100.549698d,0d,21.650551d,-100.432503d,0d,21.64889d,-100.296997d,0d,21.58626d,-100.193199d,0d,21.41918d,-99.790543d,0d,21.30361d,-99.777512d,0d,21.23889d,-99.724731d,0d,21.17416d,-99.823334d,0d,21.201389d,-99.961121d,0d,21.180269d,-100.009499d,0d,21.09d,-100.029404d,0d,21.04833d,-100.080597d,0d,20.90222d,-100.110001d,0d,20.925831d,-100.368103d,0d,20.946659d,-100.405296d,0d,20.924999d,-100.466103d,0d,20.691111d,-100.600601d,0d,20.609171d,-100.493301d,0d,20.37361d,-100.449203d,0d,20.33111d,-100.3881d,0d,20.290831d,-100.404404d,0d,20.20451d,-100.280296d,0d});
  }
}
protected class MFInt3225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,0,-1});
  }
}
protected class MFColor27 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d28 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.93804d,-100.122803d,0d,20.08222d,-100.182503d,0d,20.20451d,-100.280296d,0d,20.290831d,-100.404404d,0d,20.33111d,-100.3881d,0d,20.37361d,-100.449203d,0d,20.609171d,-100.493301d,0d,20.691111d,-100.600601d,0d,20.924999d,-100.466103d,0d,20.946659d,-100.405296d,0d,20.925831d,-100.368103d,0d,20.90222d,-100.110001d,0d,21.04833d,-100.080597d,0d,21.09d,-100.029404d,0d,21.180269d,-100.009499d,0d,21.201389d,-99.961121d,0d,21.17416d,-99.823334d,0d,21.23889d,-99.724731d,0d,21.30361d,-99.777512d,0d,21.41918d,-99.790543d,0d,21.52166d,-99.743057d,0d,21.55472d,-99.690567d,0d,21.423889d,-99.579727d,0d,21.461109d,-99.411957d,0d,21.55666d,-99.366959d,0d,21.56389d,-99.296677d,0d,21.62583d,-99.25528d,0d,21.64389d,-99.200012d,0d,21.28722d,-99.087784d,0d,21.26832d,-99.043259d,0d,21.157101d,-99.034607d,0d,21.18166d,-99.065292d,0d,21.112499d,-99.218613d,0d,21.148701d,-99.294373d,0d,21.101391d,-99.317497d,0d,21.098049d,-99.373901d,0d,21.04528d,-99.345001d,0d,20.915279d,-99.390289d,0d,20.81555d,-99.494453d,0d,20.71944d,-99.51918d,0d,20.661131d,-99.489906d,0d,20.512501d,-99.819458d,0d,20.27d,-99.829102d,0d,20.242769d,-99.950287d,0d,20.129999d,-99.962227d,0d,19.93804d,-100.122803d,0d});
  }
}
protected class MFInt3229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,0,-1});
  }
}
protected class MFColor31 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d32 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.5854d,-98.659409d,0d,19.595551d,-98.655563d,0d,19.73889d,-98.58139d,0d,19.83889d,-98.695007d,0d,19.84972d,-98.872627d,0d,19.803329d,-98.914459d,0d,19.807501d,-98.958069d,0d,19.86722d,-98.976669d,0d,19.9925d,-98.94278d,0d,20.041941d,-99.030838d,0d,19.97694d,-99.203613d,0d,19.820271d,-99.277786d,0d,19.77611d,-99.381958d,0d,19.883051d,-99.428337d,0d,19.951941d,-99.519447d,0d,20.08194d,-99.485573d,0d,20.145d,-99.559174d,0d,20.138611d,-99.663353d,0d,20.27d,-99.829102d,0d,20.512501d,-99.819458d,0d,20.661131d,-99.489906d,0d,20.71944d,-99.51918d,0d,20.81555d,-99.494453d,0d,20.915279d,-99.390289d,0d,21.04528d,-99.345001d,0d,21.098049d,-99.373901d,0d,21.101391d,-99.317497d,0d,21.148701d,-99.294373d,0d,21.112499d,-99.218613d,0d,21.18166d,-99.065292d,0d,21.157101d,-99.034607d,0d,21.26832d,-99.043259d,0d,21.29361d,-98.943069d,0d,21.21611d,-98.905563d,0d,21.184999d,-98.811111d,0d,21.215d,-98.62001d,0d,21.33444d,-98.605827d,0d,21.39889d,-98.515007d,0d,21.352221d,-98.477226d,0d,21.24194d,-98.487228d,0d,21.15416d,-98.410568d,0d,21.15222d,-98.337509d,0d,21.233891d,-98.298889d,0d,21.213051d,-98.263062d,0d,21.183611d,-98.272903d,0d,21.12978d,-98.288162d,0d,21.157221d,-98.212509d,0d,21.07472d,-98.130569d,0d,21.01944d,-98.153061d,0d,21.0275d,-98.176392d,0d,20.961941d,-98.220001d,0d,20.83083d,-98.23056d,0d,20.85861d,-98.366959d,0d,20.790279d,-98.421112d,0d,20.75639d,-98.510834d,0d,20.7125d,-98.498901d,0d,20.718611d,-98.424454d,0d,20.501659d,-98.566116d,0d,20.37639d,-98.494743d,0d,20.359171d,-98.452789d,0d,20.441111d,-98.402237d,0d,20.434999d,-98.335007d,0d,20.661659d,-98.095291d,0d,20.6425d,-98.030838d,0d,20.606939d,-98.029449d,0d,20.506941d,-98.042793d,0d,20.432171d,-98.098183d,0d,20.32472d,-98.162514d,0d,20.31389d,-98.238068d,0d,20.276939d,-98.245827d,0d,20.21722d,-98.244743d,0d,20.198891d,-98.134171d,0d,20.105d,-98.09584d,0d,19.846109d,-98.258057d,0d,19.672779d,-98.143066d,0d,19.71389d,-98.257507d,0d,19.640551d,-98.315002d,0d,19.589439d,-98.343903d,0d,19.64472d,-98.492233d,0d,19.5854d,-98.659409d,0d});
  }
}
protected class MFInt3233 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,0,-1});
  }
}
protected class MFColor35 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d36 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.96722d,-103.479599d,0d,18.97444d,-103.348297d,0d,19.066669d,-103.285301d,0d,18.955d,-103.132797d,0d,19.03611d,-103.095001d,0d,19.096661d,-102.975601d,0d,19.17528d,-102.968903d,0d,19.254999d,-102.768097d,0d,19.22444d,-102.6745d,0d,19.40694d,-102.573097d,0d,19.49139d,-102.6092d,0d,19.47361d,-102.7481d,0d,19.592501d,-102.7631d,0d,19.70668d,-102.823799d,0d,19.75705d,-102.830002d,0d,19.818609d,-102.726997d,0d,19.882401d,-102.741501d,0d,19.89974d,-102.789703d,0d,19.89959d,-102.807602d,0d,19.931379d,-102.9151d,0d,19.95245d,-102.929001d,0d,19.899719d,-103.022003d,0d,19.98139d,-103.038902d,0d,19.98917d,-103.086403d,0d,20.02389d,-103.096397d,0d,20.09222d,-103.048897d,0d,20.16391d,-102.8881d,0d,20.19689d,-102.7724d,0d,20.22916d,-102.6222d,0d,20.338051d,-102.443604d,0d,20.34305d,-102.2117d,0d,20.38908d,-102.108803d,0d,20.403049d,-101.995598d,0d,20.326941d,-101.994202d,0d,20.36729d,-101.980598d,0d,20.364441d,-101.9506d,0d,20.211109d,-101.920303d,0d,20.191111d,-101.888901d,0d,20.211941d,-101.820801d,0d,20.19083d,-101.673897d,0d,20.31805d,-101.606903d,0d,20.333679d,-101.460602d,0d,20.17861d,-101.399399d,0d,20.08d,-101.409203d,0d,20.035271d,-101.361099d,0d,20.02389d,-101.274399d,0d,20.08639d,-101.154404d,0d,20.059719d,-100.984497d,0d,20.036659d,-100.915298d,0d,19.941111d,-100.898399d,0d,19.9275d,-100.8414d,0d,19.985279d,-100.679199d,0d,19.90778d,-100.4814d,0d,20.05722d,-100.348602d,0d,20.20451d,-100.280296d,0d,20.08222d,-100.182503d,0d,19.93804d,-100.122803d,0d,19.87722d,-100.056999d,0d,19.827221d,-100.144203d,0d,19.64139d,-100.186996d,0d,19.415831d,-100.138901d,0d,19.334721d,-100.297203d,0d,19.262779d,-100.284203d,0d,18.98333d,-100.533897d,0d,18.94055d,-100.529404d,0d,18.85972d,-100.586403d,0d,18.78607d,-100.682602d,0d,18.860189d,-100.728104d,0d,18.791109d,-100.769699d,0d,18.525551d,-100.720596d,0d,18.402241d,-100.593597d,0d,18.353331d,-100.624496d,0d,18.387501d,-100.6856d,0d,18.472219d,-100.793098d,0d,18.477501d,-100.915298d,0d,18.450001d,-100.909401d,0d,18.44194d,-100.946701d,0d,18.51722d,-101.011101d,0d,18.50111d,-101.087502d,0d,18.533609d,-101.295601d,0d,18.479204d,-101.451614d,0d,18.485439d,-101.509819d,0d,18.524933d,-101.574257d,0d,18.60808d,-101.619987d,0d,18.595608d,-101.844475d,0d,18.537405d,-101.877739d,0d,18.290047d,-101.863182d,0d,18.261391d,-101.900299d,0d,18.202221d,-101.987503d,0d,18.17416d,-102.146103d,0d,17.921894d,-102.180855d,0d,17.922497d,-102.188904d,0d,18.023331d,-102.487503d,0d,18.06583d,-102.74501d,0d,18.189999d,-103.029449d,0d,18.31361d,-103.450012d,0d,18.500832d,-103.579178d,0d,18.577499d,-103.698624d,0d,18.621387d,-103.686951d,0d,18.688068d,-103.745483d,0d,18.775829d,-103.683098d,0d,18.791941d,-103.631104d,0d,18.889999d,-103.610802d,0d,18.88166d,-103.577499d,0d,18.96722d,-103.479599d,0d});
  }
}
protected class MFInt3237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3238 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,0,-1});
  }
}
protected class MFColor39 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d40 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.47576d,-98.627983d,0d,19.40583d,-98.666122d,0d,19.165279d,-98.636948d,0d,18.996759d,-98.662231d,0d,18.968889d,-98.753891d,0d,19.089029d,-98.963852d,0d,19.137779d,-98.939178d,0d,19.30611d,-98.967506d,0d,19.372219d,-99.028343d,0d,19.454439d,-99.031677d,0d,19.47583d,-99.085281d,0d,19.540831d,-99.113068d,0d,19.40583d,-99.224457d,0d,19.35778d,-99.340561d,0d,19.142441d,-99.284866d,0d,19.090549d,-99.324448d,0d,18.9725d,-99.304169d,0d,18.882219d,-99.429733d,0d,18.66671d,-99.496536d,0d,18.764999d,-99.650558d,0d,18.63389d,-99.795837d,0d,18.65778d,-99.888634d,0d,18.60722d,-100.0933d,0d,18.516109d,-100.122498d,0d,18.397499d,-100.259499d,0d,18.390829d,-100.305603d,0d,18.52833d,-100.386101d,0d,18.809999d,-100.455002d,0d,18.84445d,-100.527802d,0d,18.85972d,-100.586403d,0d,18.94055d,-100.529404d,0d,18.98333d,-100.533897d,0d,19.262779d,-100.284203d,0d,19.334721d,-100.297203d,0d,19.415831d,-100.138901d,0d,19.64139d,-100.186996d,0d,19.827221d,-100.144203d,0d,19.87722d,-100.056999d,0d,19.93804d,-100.122803d,0d,20.129999d,-99.962227d,0d,20.242769d,-99.950287d,0d,20.27d,-99.829102d,0d,20.138611d,-99.663353d,0d,20.145d,-99.559174d,0d,20.08194d,-99.485573d,0d,19.951941d,-99.519447d,0d,19.883051d,-99.428337d,0d,19.77611d,-99.381958d,0d,19.820271d,-99.277786d,0d,19.97694d,-99.203613d,0d,20.041941d,-99.030838d,0d,19.9925d,-98.94278d,0d,19.86722d,-98.976669d,0d,19.807501d,-98.958069d,0d,19.803329d,-98.914459d,0d,19.84972d,-98.872627d,0d,19.83889d,-98.695007d,0d,19.73889d,-98.58139d,0d,19.595551d,-98.655563d,0d,19.5854d,-98.659409d,0d,19.577499d,-98.712784d,0d,19.47576d,-98.627983d,0d});
  }
}
protected class MFInt3241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3242 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,0,-1});
  }
}
protected class MFColor43 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d44 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.142441d,-99.284866d,0d,19.35778d,-99.340561d,0d,19.40583d,-99.224457d,0d,19.540831d,-99.113068d,0d,19.47583d,-99.085281d,0d,19.454439d,-99.031677d,0d,19.372219d,-99.028343d,0d,19.30611d,-98.967506d,0d,19.137779d,-98.939178d,0d,19.089029d,-98.963852d,0d,19.06139d,-99.031403d,0d,19.11611d,-99.133621d,0d,19.142441d,-99.284866d,0d});
  }
}
protected class MFInt3245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,0,-1});
  }
}
protected class MFColor47 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d48 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.688068d,-103.745483d,0d,18.896385d,-104.004463d,0d,19.008053d,-104.315002d,0d,19.095276d,-104.327789d,0d,19.090832d,-104.448334d,0d,19.143499d,-104.594597d,0d,19.253889d,-104.540001d,0d,19.23027d,-104.473099d,0d,19.284719d,-104.429497d,0d,19.271111d,-104.386902d,0d,19.31916d,-104.2556d,0d,19.383051d,-104.129204d,0d,19.46389d,-104.146698d,0d,19.51833d,-104.067802d,0d,19.3925d,-103.8228d,0d,19.48027d,-103.644203d,0d,19.325279d,-103.491997d,0d,19.072781d,-103.524696d,0d,18.96722d,-103.479599d,0d,18.88166d,-103.577499d,0d,18.889999d,-103.610802d,0d,18.791941d,-103.631104d,0d,18.775829d,-103.683098d,0d,18.688068d,-103.745483d,0d});
  }
}
protected class MFInt3249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3250 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,0,-1});
  }
}
protected class MFColor51 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d52 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.996759d,-98.662231d,0d,18.905001d,-98.656403d,0d,18.79833d,-98.744743d,0d,18.692499d,-98.665283d,0d,18.719021d,-98.749924d,0d,18.43861d,-98.671112d,0d,18.418329d,-98.695282d,0d,18.495001d,-98.819168d,0d,18.415001d,-98.922501d,0d,18.37079d,-99.050491d,0d,18.53389d,-99.149437d,0d,18.526661d,-99.227783d,0d,18.459721d,-99.256393d,0d,18.463329d,-99.311684d,0d,18.66671d,-99.496536d,0d,18.882219d,-99.429733d,0d,18.9725d,-99.304169d,0d,19.090549d,-99.324448d,0d,19.142441d,-99.284866d,0d,19.11611d,-99.133621d,0d,19.06139d,-99.031403d,0d,19.089029d,-98.963852d,0d,18.968889d,-98.753891d,0d,18.996759d,-98.662231d,0d});
  }
}
protected class MFInt3253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3254 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,0,-1});
  }
}
protected class MFColor55 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d56 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.845297d,-90.373375d,0d,20.941666d,-90.338898d,0d,20.86323d,-90.386696d,0d,20.781666d,-90.436401d,0d,20.86323d,-90.407791d,0d,20.925831d,-90.385834d,0d,21.025276d,-90.335846d,0d,21.160275d,-90.1064d,0d,21.189472d,-90d,0d,21.284443d,-89.771118d,0d,21.411663d,-88.848618d,0d,21.447777d,-88.708069d,0d,21.533886d,-88.601669d,0d,21.568886d,-88.451401d,0d,21.553608d,-88.271118d,0d,21.584999d,-88.086395d,0d,21.567219d,-88.243347d,0d,21.606667d,-88.156952d,0d,21.602776d,-87.994171d,0d,21.536663d,-87.70723d,0d,21.551388d,-87.86528d,0d,21.505554d,-87.754456d,0d,21.498333d,-87.616669d,0d,21.520275d,-87.689453d,0d,21.52861d,-87.655289d,0d,21.502314d,-87.539154d,0d,21.024719d,-87.540558d,0d,20.6625d,-87.753891d,0d,19.651939d,-89.418327d,0d,20.49444d,-90.028343d,0d,20.44305d,-90.065002d,0d,20.489719d,-90.226959d,0d,20.557779d,-90.20668d,0d,20.55389d,-90.378067d,0d,20.845297d,-90.373375d,0d});
  }
}
protected class MFInt3257 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,0,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,11,-1});
  }
}
protected class MFColor59 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d60 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.638054d,-91.834457d,0d,18.659443d,-91.841949d,0d,18.753609d,-91.646118d,0d,18.78833d,-91.553345d,0d,18.770554d,-91.523895d,0d,18.748608d,-91.524445d,0d,18.736664d,-91.622513d,0d,18.657497d,-91.691391d,0d,18.659443d,-91.723343d,0d,18.695553d,-91.703064d,0d,18.638054d,-91.834457d,0d,18.651676d,-92.478287d,0d,18.728333d,-91.9814d,0d,18.611111d,-91.858902d,0d,18.581108d,-91.878342d,0d,18.591663d,-91.940567d,0d,18.628052d,-91.946396d,0d,18.614719d,-92.005005d,0d,18.590553d,-91.991669d,0d,18.594719d,-92.034454d,0d,18.54472d,-92.050568d,0d,18.543331d,-91.95668d,0d,18.500832d,-91.886124d,0d,18.583885d,-91.97084d,0d,18.575275d,-91.903061d,0d,18.528889d,-91.87056d,0d,18.516666d,-91.889725d,0d,18.495831d,-91.825562d,0d,18.430553d,-91.857224d,0d,18.379997d,-91.803345d,0d,18.442776d,-91.814178d,0d,18.441387d,-91.771118d,0d,18.484444d,-91.801956d,0d,18.439442d,-91.475006d,0d,18.492496d,-91.481949d,0d,18.461388d,-91.538345d,0d,18.518055d,-91.490845d,0d,18.565277d,-91.334167d,0d,18.618889d,-91.303345d,0d,18.644165d,-91.189728d,0d,18.62833d,-91.297501d,0d,18.740833d,-91.263626d,0d,18.811108d,-91.414459d,0d,18.957222d,-91.237228d,0d,18.8825d,-91.37529d,0d,18.82d,-91.420288d,0d,18.808609d,-91.511124d,0d,18.897221d,-91.430008d,0d,19.002777d,-91.174454d,0d,19.11861d,-90.997513d,0d,19.31583d,-90.756668d,0d,19.762218d,-90.681122d,0d,19.881386d,-90.523346d,0d,19.975277d,-90.454727d,0d,20.085278d,-90.500565d,0d,20.398052d,-90.465012d,0d,20.520832d,-90.491119d,0d,20.727776d,-90.458618d,0d,20.816666d,-90.383621d,0d,20.845297d,-90.373375d,0d,20.55389d,-90.378067d,0d,20.557779d,-90.20668d,0d,20.489719d,-90.226959d,0d,20.44305d,-90.065002d,0d,20.49444d,-90.028343d,0d,19.651939d,-89.418327d,0d,17.819162d,-89.430443d,0d,17.820652d,-90.982422d,0d,17.967779d,-90.983063d,0d,17.97611d,-91.188606d,0d,18.06333d,-91.321121d,0d,18.09944d,-91.453903d,0d,18.096661d,-91.609177d,0d,17.95083d,-91.626404d,0d,17.951389d,-91.855293d,0d,18.01778d,-91.979446d,0d,18.157221d,-92.157791d,0d,18.51194d,-92.153061d,0d,18.51305d,-92.421677d,0d,18.651676d,-92.478287d,0d});
  }
}
protected class MFInt3261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3262 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,0,-1});
  }
}
protected class MFColor63 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d64 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.43083d,-96.750633d,0d,18.385d,-96.726387d,0d,18.284719d,-96.787514d,0d,18.240829d,-96.886673d,0d,18.150551d,-96.962784d,0d,18.13833d,-97.080002d,0d,18.17944d,-97.20668d,0d,18.160271d,-97.281403d,0d,18.102779d,-97.369743d,0d,17.977779d,-97.449448d,0d,18.172779d,-97.641403d,0d,18.293329d,-97.613892d,0d,18.340549d,-97.648064d,0d,18.309441d,-97.719177d,0d,18.172779d,-97.796402d,0d,17.992769d,-97.738892d,0d,17.924999d,-97.844452d,0d,17.998791d,-97.922623d,0d,18.03278d,-97.94278d,0d,18.025d,-98.15918d,0d,17.909719d,-98.246948d,0d,17.92305d,-98.309723d,0d,17.89222d,-98.347778d,0d,17.99416d,-98.448624d,0d,17.97333d,-98.616959d,0d,18.011391d,-98.763062d,0d,18.134439d,-98.83168d,0d,18.125271d,-98.904167d,0d,18.202221d,-98.927231d,0d,18.23778d,-99.031403d,0d,18.37079d,-99.050491d,0d,18.415001d,-98.922501d,0d,18.495001d,-98.819168d,0d,18.418329d,-98.695282d,0d,18.43861d,-98.671112d,0d,18.719021d,-98.749924d,0d,18.692499d,-98.665283d,0d,18.79833d,-98.744743d,0d,18.905001d,-98.656403d,0d,18.996759d,-98.662231d,0d,19.165279d,-98.636948d,0d,19.40583d,-98.666122d,0d,19.47576d,-98.627983d,0d,19.42194d,-98.468338d,0d,19.36694d,-98.460564d,0d,19.095551d,-98.198624d,0d,19.120831d,-98.082497d,0d,19.20277d,-97.993622d,0d,19.156389d,-97.901947d,0d,19.204439d,-97.843903d,0d,19.28167d,-97.834167d,0d,19.28611d,-97.656403d,0d,19.35639d,-97.613342d,0d,19.374439d,-97.684174d,0d,19.45639d,-97.775009d,0d,19.435551d,-97.847229d,0d,19.50972d,-97.882782d,0d,19.541389d,-97.845573d,0d,19.62639d,-97.964172d,0d,19.61611d,-98.011124d,0d,19.67778d,-98.001106d,0d,19.672779d,-98.143066d,0d,19.846109d,-98.258057d,0d,20.105d,-98.09584d,0d,20.198891d,-98.134171d,0d,20.21722d,-98.244743d,0d,20.276939d,-98.245827d,0d,20.31389d,-98.238068d,0d,20.32472d,-98.162514d,0d,20.432171d,-98.098183d,0d,20.51972d,-97.963058d,0d,20.66666d,-97.948624d,0d,20.70639d,-97.883057d,0d,20.805d,-97.873901d,0d,20.793051d,-97.733902d,0d,20.650551d,-97.742233d,0d,20.58861d,-97.579178d,0d,20.490299d,-97.570648d,0d,20.41777d,-97.628891d,0d,20.469721d,-97.693336d,0d,20.439899d,-97.758873d,0d,20.25528d,-97.752792d,0d,20.176109d,-97.692497d,0d,20.168329d,-97.614731d,0d,20.10667d,-97.564453d,0d,20.121111d,-97.515007d,0d,20.239719d,-97.470573d,0d,20.26222d,-97.412231d,0d,20.263729d,-97.381447d,0d,20.147221d,-97.146393d,0d,20.1175d,-97.137222d,0d,19.89555d,-97.309448d,0d,19.75d,-97.285278d,0d,19.683889d,-97.308899d,0d,19.61972d,-97.354446d,0d,19.585831d,-97.440002d,0d,19.53833d,-97.353348d,0d,19.40139d,-97.334457d,0d,19.37361d,-97.246399d,0d,19.30666d,-97.185562d,0d,19.307779d,-97.056122d,0d,19.2675d,-97.001678d,0d,19.18305d,-97.079727d,0d,19.193609d,-97.170013d,0d,19.16d,-97.264717d,0d,19.02639d,-97.250839d,0d,18.88722d,-97.247787d,0d,18.76944d,-97.345291d,0d,18.6325d,-97.272781d,0d,18.64333d,-97.14418d,0d,18.476669d,-97.03862d,0d,18.55278d,-96.80751d,0d,18.43083d,-96.750633d,0d});
  }
}
protected class MFInt3265 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3266 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,0,-1,99,100,101,102,103,104,105,106,99,-1});
  }
}
protected class MFColor67 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d68 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.482929d,-88.2995d,0d,18.477612d,-88.483948d,0d,18.235832d,-88.600021d,0d,18.185555d,-88.681122d,0d,18.061195d,-88.710587d,0d,17.936951d,-88.83757d,0d,17.87756d,-88.840973d,0d,18.005833d,-89.035843d,0d,17.956066d,-89.143051d,0d,17.818886d,-89.141953d,0d,17.819162d,-89.430443d,0d,19.651939d,-89.418327d,0d,20.6625d,-87.753891d,0d,21.024719d,-87.540558d,0d,21.502314d,-87.539154d,0d,21.493889d,-87.501953d,0d,21.463886d,-87.486389d,0d,21.436943d,-87.240845d,0d,21.487778d,-87.141113d,0d,21.554722d,-87.129181d,0d,21.567219d,-87.170013d,0d,21.527496d,-87.256668d,0d,21.552219d,-87.341675d,0d,21.504166d,-87.396118d,0d,21.526943d,-87.414459d,0d,21.57972d,-87.360291d,0d,21.561665d,-87.26889d,0d,21.623333d,-87.112503d,0d,21.578331d,-87.003342d,0d,21.429443d,-86.908066d,0d,21.430275d,-86.828339d,0d,21.183331d,-86.813339d,0d,21.151386d,-86.738892d,0d,21.032497d,-86.783066d,0d,21.012497d,-86.825287d,0d,20.838333d,-86.878342d,0d,20.614719d,-87.067505d,0d,20.503887d,-87.226395d,0d,20.214722d,-87.430008d,0d,20.092777d,-87.471954d,0d,19.895554d,-87.433334d,0d,19.868399d,-87.434532d,0d,19.847431d,-87.442871d,0d,19.776386d,-87.472229d,0d,19.831665d,-87.480011d,0d,19.853632d,-87.447334d,0d,19.909164d,-87.441391d,0d,19.943054d,-87.484451d,0d,19.87611d,-87.459732d,0d,19.802219d,-87.520569d,0d,19.796665d,-87.585007d,0d,19.62722d,-87.664459d,0d,19.678333d,-87.657227d,0d,19.674721d,-87.738892d,0d,19.592777d,-87.730286d,0d,19.561943d,-87.660843d,0d,19.505276d,-87.670013d,0d,19.560276d,-87.566956d,0d,19.5425d,-87.446121d,0d,19.580666d,-87.418442d,0d,19.600277d,-87.43251d,0d,19.571663d,-87.436676d,0d,19.581387d,-87.527237d,0d,19.579441d,-87.444458d,0d,19.634163d,-87.4375d,0d,19.578888d,-87.411667d,0d,19.44722d,-87.465561d,0d,19.400276d,-87.531677d,0d,19.395554d,-87.570557d,0d,19.434444d,-87.542511d,0d,19.399998d,-87.626404d,0d,19.318054d,-87.676392d,0d,19.247776d,-87.6875d,0d,19.210831d,-87.640289d,0d,19.316666d,-87.552231d,0d,19.326385d,-87.5d,0d,19.282219d,-87.511398d,0d,19.313889d,-87.461121d,0d,19.215275d,-87.539734d,0d,18.764999d,-87.652237d,0d,18.667774d,-87.729736d,0d,18.412498d,-87.759171d,0d,18.310833d,-87.828064d,0d,18.19083d,-87.847504d,0d,18.235554d,-87.853897d,0d,18.241108d,-87.891113d,0d,18.320274d,-87.857513d,0d,18.286388d,-87.885559d,0d,18.438053d,-87.924728d,0d,18.51722d,-88.080841d,0d,18.681389d,-88.001114d,0d,18.869442d,-88.037506d,0d,18.720833d,-88.122513d,0d,18.782219d,-88.13028d,0d,18.684719d,-88.253067d,0d,18.73333d,-88.188614d,0d,18.670555d,-88.194458d,0d,18.686665d,-88.150848d,0d,18.482929d,-88.2995d,0d,20.255554d,-86.993347d,0d,20.391666d,-87.020004d,0d,20.539444d,-86.938904d,0d,20.564442d,-86.900284d,0d,20.541664d,-86.828903d,0d,20.590553d,-86.735001d,0d,20.353886d,-86.885559d,0d,20.255554d,-86.993347d,0d});
  }
}
protected class MFInt3269 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3270 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,0,-1});
  }
}
protected class MFColor71 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d72 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.672779d,-98.143066d,0d,19.67778d,-98.001106d,0d,19.61611d,-98.011124d,0d,19.62639d,-97.964172d,0d,19.541389d,-97.845573d,0d,19.50972d,-97.882782d,0d,19.435551d,-97.847229d,0d,19.45639d,-97.775009d,0d,19.374439d,-97.684174d,0d,19.35639d,-97.613342d,0d,19.28611d,-97.656403d,0d,19.28167d,-97.834167d,0d,19.204439d,-97.843903d,0d,19.156389d,-97.901947d,0d,19.20277d,-97.993622d,0d,19.120831d,-98.082497d,0d,19.095551d,-98.198624d,0d,19.36694d,-98.460564d,0d,19.42194d,-98.468338d,0d,19.47576d,-98.627983d,0d,19.577499d,-98.712784d,0d,19.5854d,-98.659409d,0d,19.64472d,-98.492233d,0d,19.589439d,-98.343903d,0d,19.640551d,-98.315002d,0d,19.71389d,-98.257507d,0d,19.672779d,-98.143066d,0d});
  }
}
protected class MFInt3273 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3274 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,0,-1});
  }
}
protected class MFColor75 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d76 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.37079d,-99.050491d,0d,18.23778d,-99.031403d,0d,18.202221d,-98.927231d,0d,18.125271d,-98.904167d,0d,18.134439d,-98.83168d,0d,18.011391d,-98.763062d,0d,17.97333d,-98.616959d,0d,17.99416d,-98.448624d,0d,17.89222d,-98.347778d,0d,17.865829d,-98.321121d,0d,17.68861d,-98.37973d,0d,17.532499d,-98.37973d,0d,17.411659d,-98.303337d,0d,17.248329d,-98.290848d,0d,17.112499d,-98.075012d,0d,17.041109d,-98.013344d,0d,16.884159d,-98.056671d,0d,16.76d,-98.08168d,0d,16.70083d,-98.167793d,0d,16.702669d,-98.240372d,0d,16.645281d,-98.206123d,0d,16.545d,-98.329727d,0d,16.405001d,-98.328056d,0d,16.383329d,-98.468613d,0d,16.319344d,-98.554688d,0d,16.553055d,-98.782227d,0d,16.524441d,-98.864731d,0d,16.596943d,-99.036957d,0d,16.708332d,-99.69223d,0d,16.787498d,-99.849731d,0d,16.814442d,-99.837784d,0d,16.870277d,-99.878067d,0d,16.825554d,-99.900009d,0d,16.882221d,-99.938904d,0d,16.941666d,-100.078339d,0d,16.955555d,-100.186401d,0d,17.266941d,-101.048607d,0d,17.358887d,-101.104446d,0d,17.518608d,-101.417793d,0d,17.621944d,-101.497787d,0d,17.617775d,-101.556122d,0d,17.666943d,-101.633057d,0d,17.87611d,-101.787781d,0d,17.977497d,-101.950012d,0d,17.988888d,-102.047234d,0d,17.919167d,-102.144447d,0d,17.921894d,-102.180855d,0d,18.17416d,-102.146103d,0d,18.202221d,-101.987503d,0d,18.261391d,-101.900299d,0d,18.290047d,-101.863182d,0d,18.537405d,-101.877739d,0d,18.595608d,-101.844475d,0d,18.60808d,-101.619987d,0d,18.524933d,-101.574257d,0d,18.485439d,-101.509819d,0d,18.479204d,-101.451614d,0d,18.533609d,-101.295601d,0d,18.50111d,-101.087502d,0d,18.51722d,-101.011101d,0d,18.44194d,-100.946701d,0d,18.450001d,-100.909401d,0d,18.477501d,-100.915298d,0d,18.472219d,-100.793098d,0d,18.387501d,-100.6856d,0d,18.353331d,-100.624496d,0d,18.402241d,-100.593597d,0d,18.525551d,-100.720596d,0d,18.791109d,-100.769699d,0d,18.860189d,-100.728104d,0d,18.78607d,-100.682602d,0d,18.85972d,-100.586403d,0d,18.84445d,-100.527802d,0d,18.809999d,-100.455002d,0d,18.52833d,-100.386101d,0d,18.390829d,-100.305603d,0d,18.397499d,-100.259499d,0d,18.516109d,-100.122498d,0d,18.60722d,-100.0933d,0d,18.65778d,-99.888634d,0d,18.63389d,-99.795837d,0d,18.764999d,-99.650558d,0d,18.66671d,-99.496536d,0d,18.463329d,-99.311684d,0d,18.459721d,-99.256393d,0d,18.526661d,-99.227783d,0d,18.53389d,-99.149437d,0d,18.37079d,-99.050491d,0d});
  }
}
protected class MFInt3277 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3278 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,0,-1});
  }
}
protected class MFColor79 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d80 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.43083d,-96.750633d,0d,18.522221d,-96.635559d,0d,18.68111d,-96.674179d,0d,18.541109d,-96.405838d,0d,18.388611d,-96.356949d,0d,18.29166d,-96.25473d,0d,18.213921d,-96.236687d,0d,18.180269d,-96.205292d,0d,18.185551d,-96.161392d,0d,18.14167d,-96.150284d,0d,18.16408d,-96.09465d,0d,18.11916d,-95.862228d,0d,18.05139d,-95.804459d,0d,17.941111d,-95.799454d,0d,17.77916d,-95.915558d,0d,17.524719d,-95.790283d,0d,17.501659d,-95.725014d,0d,17.533051d,-95.560013d,0d,17.633051d,-95.439178d,0d,17.64139d,-95.364182d,0d,17.73333d,-95.210281d,0d,17.64819d,-95.205582d,0d,17.59477d,-95.251709d,0d,17.346661d,-95.069168d,0d,17.335831d,-95.001106d,0d,17.2225d,-94.967216d,0d,17.172779d,-94.328056d,0d,17.15028d,-93.873428d,0d,17.01222d,-93.868057d,0d,17.01305d,-93.905289d,0d,16.881941d,-93.90918d,0d,16.80055d,-94.041397d,0d,16.653049d,-94.035843d,0d,16.51d,-94.123062d,0d,16.283331d,-94.036392d,0d,16.150949d,-94.083435d,0d,16.226944d,-94.136673d,0d,16.196941d,-94.205292d,0d,16.219997d,-94.295288d,0d,16.294441d,-94.368057d,0d,16.278889d,-94.424454d,0d,16.200554d,-94.416122d,0d,16.134163d,-94.271118d,0d,16.176388d,-94.341675d,0d,16.16222d,-94.221954d,0d,16.118889d,-94.181671d,0d,16.095171d,-94.090172d,0d,16.089443d,-94.068069d,0d,15.996387d,-93.962509d,0d,16.036648d,-94.062775d,0d,16.170277d,-94.395569d,0d,16.187222d,-94.5289d,0d,16.196663d,-94.724731d,0d,16.258053d,-94.615845d,0d,16.318333d,-94.578064d,0d,16.361942d,-94.667236d,0d,16.257774d,-94.789734d,0d,16.286388d,-94.808624d,0d,16.331944d,-94.773056d,0d,16.427498d,-94.861954d,0d,16.274719d,-95.06723d,0d,16.251942d,-94.870834d,0d,16.283607d,-94.835007d,0d,16.256107d,-94.83168d,0d,16.240833d,-94.931671d,0d,16.22472d,-94.778336d,0d,16.194164d,-94.756958d,0d,16.202499d,-95.13501d,0d,16.164719d,-95.145004d,0d,16.149719d,-95.220291d,0d,16.05611d,-95.359177d,0d,16.013054d,-95.366394d,0d,15.978054d,-95.420288d,0d,15.818609d,-95.944458d,0d,15.691666d,-96.181946d,0d,15.68861d,-96.436111d,0d,15.64361d,-96.47612d,0d,15.727499d,-96.839447d,0d,15.913332d,-97.196671d,0d,15.968611d,-97.785004d,0d,16.021385d,-97.871124d,0d,16.061943d,-97.87001d,0d,16.196941d,-98.167236d,0d,16.183887d,-98.064453d,0d,16.214165d,-98.098068d,0d,16.261387d,-98.398895d,0d,16.319344d,-98.554688d,0d,16.383329d,-98.468613d,0d,16.405001d,-98.328056d,0d,16.545d,-98.329727d,0d,16.645281d,-98.206123d,0d,16.702669d,-98.240372d,0d,16.70083d,-98.167793d,0d,16.76d,-98.08168d,0d,16.884159d,-98.056671d,0d,17.041109d,-98.013344d,0d,17.112499d,-98.075012d,0d,17.248329d,-98.290848d,0d,17.411659d,-98.303337d,0d,17.532499d,-98.37973d,0d,17.68861d,-98.37973d,0d,17.865829d,-98.321121d,0d,17.89222d,-98.347778d,0d,17.92305d,-98.309723d,0d,17.909719d,-98.246948d,0d,18.025d,-98.15918d,0d,18.03278d,-97.94278d,0d,17.998791d,-97.922623d,0d,17.924999d,-97.844452d,0d,17.992769d,-97.738892d,0d,18.172779d,-97.796402d,0d,18.309441d,-97.719177d,0d,18.340549d,-97.648064d,0d,18.293329d,-97.613892d,0d,18.172779d,-97.641403d,0d,17.977779d,-97.449448d,0d,18.102779d,-97.369743d,0d,18.160271d,-97.281403d,0d,18.17944d,-97.20668d,0d,18.13833d,-97.080002d,0d,18.150551d,-96.962784d,0d,18.240829d,-96.886673d,0d,18.284719d,-96.787514d,0d,18.385d,-96.726387d,0d,18.43083d,-96.750633d,0d});
  }
}
protected class MFInt3281 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3282 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,0,-1});
  }
}
protected class MFColor83 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d84 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.37546d,-93.589401d,0d,17.45277d,-93.667511d,0d,17.522499d,-93.6539d,0d,17.561371d,-93.689362d,0d,17.683611d,-93.741959d,0d,17.722219d,-93.857788d,0d,17.74972d,-93.864731d,0d,17.745831d,-93.923889d,0d,17.83139d,-93.968063d,0d,17.88055d,-94.075287d,0d,17.991659d,-94.051392d,0d,18.068609d,-94.092789d,0d,18.15583d,-94.094452d,0d,18.209143d,-94.137825d,0d,18.303333d,-93.867508d,0d,18.254166d,-93.886673d,0d,18.261944d,-93.7939d,0d,18.333611d,-93.739182d,0d,18.352219d,-93.580002d,0d,18.407776d,-93.570282d,0d,18.311665d,-93.843613d,0d,18.423054d,-93.578064d,0d,18.439163d,-93.153336d,0d,18.372776d,-93.172226d,0d,18.388054d,-93.117783d,0d,18.338886d,-93.126953d,0d,18.40361d,-93.087784d,0d,18.43222d,-93.138901d,0d,18.445831d,-92.926117d,0d,18.539997d,-92.767227d,0d,18.583885d,-92.703613d,0d,18.429165d,-92.6689d,0d,18.551666d,-92.660568d,0d,18.619442d,-92.687225d,0d,18.651676d,-92.478287d,0d,18.51305d,-92.421677d,0d,18.51194d,-92.153061d,0d,18.157221d,-92.157791d,0d,18.01778d,-91.979446d,0d,17.951389d,-91.855293d,0d,17.95083d,-91.626404d,0d,18.096661d,-91.609177d,0d,18.09944d,-91.453903d,0d,18.06333d,-91.321121d,0d,17.97611d,-91.188606d,0d,17.967779d,-90.983063d,0d,17.820652d,-90.982422d,0d,17.256107d,-90.983902d,0d,17.241108d,-91.4375d,0d,17.32666d,-91.388062d,0d,17.38694d,-91.426392d,0d,17.40416d,-91.496117d,0d,17.4699d,-91.507584d,0d,17.50555d,-91.665283d,0d,17.64472d,-91.664169d,0d,17.714161d,-91.698624d,0d,17.726669d,-91.793617d,0d,17.773689d,-91.772873d,0d,17.855551d,-91.786667d,0d,17.88916d,-91.823334d,0d,17.88722d,-91.912514d,0d,17.854719d,-91.945557d,0d,17.89555d,-91.950562d,0d,17.91222d,-91.989899d,0d,17.832781d,-92.077789d,0d,17.78861d,-92.068619d,0d,17.78944d,-92.153633d,0d,17.71694d,-92.365837d,0d,17.66777d,-92.386673d,0d,17.36166d,-92.761673d,0d,17.40444d,-92.83223d,0d,17.530279d,-92.905563d,0d,17.54472d,-92.986107d,0d,17.73027d,-93.013062d,0d,17.91889d,-92.994743d,0d,17.943609d,-93.142227d,0d,17.99139d,-93.264183d,0d,17.959721d,-93.309448d,0d,17.60778d,-93.391953d,0d,17.50861d,-93.526672d,0d,17.37546d,-93.589401d,0d});
  }
}
protected class MFInt3285 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3286 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,0,-1});
  }
}
protected class MFColor87 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d88 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.241108d,-91.4375d,0d,17.176388d,-91.352783d,0d,17.178333d,-91.277237d,0d,17.035553d,-91.184448d,0d,17.010277d,-91.118347d,0d,16.902775d,-91.06279d,0d,16.868053d,-90.98584d,0d,16.903053d,-90.983337d,0d,16.899166d,-90.955292d,0d,16.871944d,-90.966125d,0d,16.82972d,-90.921112d,0d,16.804996d,-90.803345d,0d,16.72646d,-90.714279d,0d,16.644165d,-90.658066d,0d,16.583054d,-90.665283d,0d,16.581387d,-90.631668d,0d,16.519165d,-90.645004d,0d,16.510555d,-90.611115d,0d,16.483887d,-90.634171d,0d,16.484997d,-90.546402d,0d,16.458332d,-90.481674d,0d,16.426109d,-90.480835d,0d,16.415554d,-90.395844d,0d,16.365276d,-90.378891d,0d,16.359722d,-90.420288d,0d,16.340832d,-90.391113d,0d,16.252777d,-90.459457d,0d,16.237221d,-90.436401d,0d,16.19083d,-90.459732d,0d,16.1675d,-90.427505d,0d,16.106388d,-90.460846d,0d,16.102219d,-90.431671d,0d,16.074718d,-90.458069d,0d,16.074997d,-91.729172d,0d,15.26222d,-92.211395d,0d,15.077776d,-92.065842d,0d,14.994444d,-92.149734d,0d,14.897499d,-92.141678d,0d,14.843611d,-92.185837d,0d,14.675833d,-92.154449d,0d,14.588333d,-92.187225d,0d,14.550547d,-92.24678d,0d,15.105555d,-92.79834d,0d,15.170555d,-92.844452d,0d,15.151943d,-92.775284d,0d,15.086666d,-92.743896d,0d,15.17111d,-92.76918d,0d,15.208887d,-92.845566d,0d,15.181665d,-92.851395d,0d,15.259165d,-92.97612d,0d,15.481388d,-93.194168d,0d,15.759722d,-93.546402d,0d,15.99472d,-93.928894d,0d,16.016109d,-93.929459d,0d,15.99861d,-93.881958d,0d,16.021664d,-93.855835d,0d,16.087776d,-93.89418d,0d,16.136944d,-94.073624d,0d,16.150949d,-94.083435d,0d,16.283331d,-94.036392d,0d,16.51d,-94.123062d,0d,16.653049d,-94.035843d,0d,16.80055d,-94.041397d,0d,16.881941d,-93.90918d,0d,17.01305d,-93.905289d,0d,17.01222d,-93.868057d,0d,17.15028d,-93.873428d,0d,17.307501d,-93.626953d,0d,17.37546d,-93.589401d,0d,17.50861d,-93.526672d,0d,17.60778d,-93.391953d,0d,17.959721d,-93.309448d,0d,17.99139d,-93.264183d,0d,17.943609d,-93.142227d,0d,17.91889d,-92.994743d,0d,17.73027d,-93.013062d,0d,17.54472d,-92.986107d,0d,17.530279d,-92.905563d,0d,17.40444d,-92.83223d,0d,17.36166d,-92.761673d,0d,17.66777d,-92.386673d,0d,17.71694d,-92.365837d,0d,17.78944d,-92.153633d,0d,17.78861d,-92.068619d,0d,17.832781d,-92.077789d,0d,17.91222d,-91.989899d,0d,17.89555d,-91.950562d,0d,17.854719d,-91.945557d,0d,17.88722d,-91.912514d,0d,17.88916d,-91.823334d,0d,17.855551d,-91.786667d,0d,17.773689d,-91.772873d,0d,17.726669d,-91.793617d,0d,17.714161d,-91.698624d,0d,17.64472d,-91.664169d,0d,17.50555d,-91.665283d,0d,17.4699d,-91.507584d,0d,17.40416d,-91.496117d,0d,17.38694d,-91.426392d,0d,17.32666d,-91.388062d,0d,17.241108d,-91.4375d,0d});
  }
}
protected class MFInt3289 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3290 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,0,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,11,-1});
  }
}
protected class MFColor91 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d92 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.756386d,-112.296402d,0d,28.87833d,-112.564178d,0d,28.961388d,-112.486389d,0d,29.06583d,-112.496948d,0d,29.186108d,-112.456947d,0d,29.253052d,-112.268623d,0d,29.146942d,-112.264183d,0d,28.981667d,-112.200844d,0d,28.811665d,-112.26445d,0d,28.781666d,-112.248062d,0d,28.756386d,-112.296402d,0d,31.343348d,-109.045006d,0d,31.343451d,-108.827309d,0d,31.192221d,-108.891403d,0d,31.15694d,-108.836098d,0d,31.205d,-108.798103d,0d,30.6325d,-108.735001d,0d,30.57583d,-108.677803d,0d,29.992769d,-108.558098d,0d,29.40111d,-108.613602d,0d,29.400829d,-108.707802d,0d,28.771111d,-108.623901d,0d,28.69639d,-108.689499d,0d,28.289169d,-108.565598d,0d,28.212219d,-108.652496d,0d,28.29833d,-108.880798d,0d,28.30555d,-108.976997d,0d,28.275829d,-109.022003d,0d,28.29916d,-109.055801d,0d,28.175831d,-109.1464d,0d,27.785d,-108.913902d,0d,27.71167d,-108.8097d,0d,27.59944d,-108.775002d,0d,27.52d,-108.655296d,0d,27.40416d,-108.667503d,0d,27.31916d,-108.636398d,0d,27.151939d,-108.665298d,0d,27.038059d,-108.604202d,0d,26.96133d,-108.471298d,0d,26.865829d,-108.476997d,0d,26.83194d,-108.486397d,0d,26.338423d,-109.143547d,0d,26.376389d,-109.15834d,0d,26.332775d,-109.248337d,0d,26.448055d,-109.241119d,0d,26.535831d,-109.276947d,0d,26.686943d,-109.473343d,0d,26.703888d,-109.434448d,0d,26.729443d,-109.505569d,0d,26.764999d,-109.517502d,0d,26.733608d,-109.566681d,0d,26.68222d,-109.508904d,0d,26.702774d,-109.627502d,0d,26.675278d,-109.698624d,0d,26.736385d,-109.806671d,0d,26.986385d,-109.946953d,0d,26.941666d,-109.882233d,0d,27.105274d,-109.962509d,0d,27.095833d,-110.063339d,0d,27.155277d,-110.314728d,0d,27.264164d,-110.414726d,0d,27.299164d,-110.509743d,0d,27.311665d,-110.446404d,0d,27.384163d,-110.49028d,0d,27.367496d,-110.553886d,0d,27.533886d,-110.577217d,0d,27.656109d,-110.635834d,0d,27.678886d,-110.569168d,0d,27.678608d,-110.601669d,0d,27.719166d,-110.5914d,0d,27.738052d,-110.544449d,0d,27.747776d,-110.60112d,0d,27.822777d,-110.609451d,0d,27.840832d,-110.516113d,0d,27.866386d,-110.509743d,0d,27.887218d,-110.603622d,0d,27.859997d,-110.610001d,0d,27.9175d,-110.775558d,0d,27.905277d,-110.847778d,0d,27.924721d,-110.810013d,0d,27.986385d,-110.850281d,0d,27.895832d,-110.891678d,0d,27.894444d,-110.859177d,0d,27.835552d,-110.879181d,0d,27.967499d,-110.99501d,0d,27.935555d,-111.10112d,0d,28.056389d,-111.238892d,0d,28.327499d,-111.45668d,0d,28.379166d,-111.435837d,0d,28.464722d,-111.695557d,0d,28.588333d,-111.763344d,0d,28.761665d,-111.947243d,0d,28.783886d,-111.904449d,0d,28.747219d,-111.863617d,0d,28.799721d,-111.855293d,0d,28.833054d,-111.968903d,0d,28.963608d,-112.110291d,0d,28.9725d,-112.164726d,0d,29.13472d,-112.166122d,0d,29.184998d,-112.223068d,0d,29.301941d,-112.210564d,0d,29.335278d,-112.28862d,0d,29.32333d,-112.336403d,0d,29.292774d,-112.339447d,0d,29.32972d,-112.391678d,0d,29.380276d,-112.410278d,0d,29.500553d,-112.377228d,0d,29.713333d,-112.577789d,0d,29.900276d,-112.66362d,0d,29.916943d,-112.743057d,0d,30.208611d,-112.756119d,0d,30.276943d,-112.818336d,0d,30.27861d,-112.86084d,0d,30.342777d,-112.842789d,0d,30.431664d,-112.871674d,0d,30.698887d,-113.08139d,0d,30.814442d,-113.117233d,0d,30.949444d,-113.080566d,0d,31.068607d,-113.120293d,0d,31d,-113.068069d,0d,31.173885d,-113.042236d,0d,31.23222d,-113.09668d,0d,31.230553d,-113.142227d,0d,31.202774d,-113.106117d,0d,31.199718d,-113.136398d,0d,31.288887d,-113.238892d,0d,31.266941d,-113.271667d,0d,31.243889d,-113.217789d,0d,31.241108d,-113.253067d,0d,31.349442d,-113.635834d,0d,31.352776d,-113.611679d,0d,31.496944d,-113.638344d,0d,31.609165d,-113.885559d,0d,31.601387d,-113.943336d,0d,31.660275d,-113.960007d,0d,31.572498d,-113.981949d,0d,31.568054d,-113.945557d,0d,31.517776d,-113.99057d,0d,31.492775d,-114.046677d,0d,31.504444d,-114.169724d,0d,31.76083d,-114.583893d,0d,31.767776d,-114.696953d,0d,31.947489d,-115.017899d,0d,32.136108d,-114.998901d,0d,32.254669d,-115.041496d,0d,32.36861d,-114.964203d,0d,32.473049d,-114.936699d,0d,32.504448d,-114.819305d,0d,32.487114d,-114.820969d,0d,32.04356d,-113.328377d,0d,31.431438d,-111.368866d,0d,31.335535d,-111.07132d,0d,31.337559d,-110.451942d,0d,31.343348d,-109.045006d,0d});
  }
}
protected class MFInt3293 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3294 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,0,-1});
  }
}
protected class MFColor95 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d96 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {26.96133d,-108.471298d,0d,27.038059d,-108.604202d,0d,27.151939d,-108.665298d,0d,27.31916d,-108.636398d,0d,27.40416d,-108.667503d,0d,27.52d,-108.655296d,0d,27.59944d,-108.775002d,0d,27.71167d,-108.8097d,0d,27.785d,-108.913902d,0d,28.175831d,-109.1464d,0d,28.29916d,-109.055801d,0d,28.275829d,-109.022003d,0d,28.30555d,-108.976997d,0d,28.29833d,-108.880798d,0d,28.212219d,-108.652496d,0d,28.289169d,-108.565598d,0d,28.69639d,-108.689499d,0d,28.771111d,-108.623901d,0d,29.400829d,-108.707802d,0d,29.40111d,-108.613602d,0d,29.992769d,-108.558098d,0d,30.57583d,-108.677803d,0d,30.6325d,-108.735001d,0d,31.205d,-108.798103d,0d,31.15694d,-108.836098d,0d,31.192221d,-108.891403d,0d,31.343451d,-108.827309d,0d,31.343742d,-108.21006d,0d,31.786804d,-108.20266d,0d,31.784981d,-107.282997d,0d,31.786198d,-106.538971d,0d,31.733763d,-106.383041d,0d,31.478128d,-106.212753d,0d,31.393818d,-105.99836d,0d,31.17078d,-105.76973d,0d,31.086428d,-105.603218d,0d,30.998285d,-105.554382d,0d,30.90251d,-105.409065d,0d,30.853081d,-105.390312d,0d,30.816507d,-105.313782d,0d,30.831949d,-105.287598d,0d,30.797653d,-105.258186d,0d,30.812086d,-105.21434d,0d,30.68787d,-105.060562d,0d,30.684334d,-104.997543d,0d,30.641325d,-104.986931d,0d,30.570557d,-104.890678d,0d,30.392263d,-104.852997d,0d,30.376448d,-104.806473d,0d,30.35047d,-104.813957d,0d,30.238489d,-104.702614d,0d,30.148964d,-104.674759d,0d,30.057302d,-104.696495d,0d,29.909283d,-104.67437d,0d,29.807936d,-104.57756d,0d,29.679466d,-104.535248d,0d,29.550611d,-104.377594d,0d,29.484041d,-104.204735d,0d,29.400715d,-104.164383d,0d,29.328119d,-104.045631d,0d,29.26726d,-103.786995d,0d,29.28124d,-103.767761d,0d,29.229795d,-103.782158d,0d,29.230349d,-103.739853d,0d,29.190632d,-103.720314d,0d,29.146646d,-103.526237d,0d,29.072134d,-103.474075d,0d,29.032108d,-103.37545d,0d,29.050339d,-103.335518d,0d,28.997732d,-103.290146d,0d,27.87055d,-103.954697d,0d,26.661079d,-103.630898d,0d,26.728889d,-103.8442d,0d,26.75639d,-104.188301d,0d,26.350559d,-104.551102d,0d,26.355551d,-104.607498d,0d,26.45055d,-104.725601d,0d,26.433331d,-104.7967d,0d,26.492769d,-104.843903d,0d,26.45944d,-105.010002d,0d,26.521391d,-105.121902d,0d,26.541389d,-105.138298d,0d,26.458891d,-105.326103d,0d,26.58778d,-105.585297d,0d,26.662781d,-105.636902d,0d,26.655001d,-105.753899d,0d,26.83861d,-106.027496d,0d,26.735001d,-106.091904d,0d,26.76944d,-106.126999d,0d,26.75222d,-106.153297d,0d,26.591391d,-106.172203d,0d,26.415001d,-106.239502d,0d,26.368891d,-106.344704d,0d,26.37639d,-106.449997d,0d,26.147499d,-106.3675d,0d,26.08d,-106.403099d,0d,26.021111d,-106.520798d,0d,25.789169d,-106.5336d,0d,25.622499d,-106.740303d,0d,25.606091d,-107.084099d,0d,25.775551d,-107.151703d,0d,25.943331d,-107.299698d,0d,26.11528d,-107.366402d,0d,26.200279d,-107.784401d,0d,26.639999d,-107.846703d,0d,26.819719d,-108.003899d,0d,26.9475d,-108.035599d,0d,26.972771d,-108.220596d,0d,27.040831d,-108.248901d,0d,27.06139d,-108.305298d,0d,27.03083d,-108.404999d,0d,26.96133d,-108.471298d,0d});
  }
}
protected class MFInt3297 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt3298 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,0,-1});
  }
}
protected class MFColor99 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d100 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.997732d,-103.290146d,0d,28.986374d,-103.28035d,0d,29.007454d,-103.266586d,0d,28.978682d,-103.153465d,0d,29.190863d,-102.988098d,0d,29.229036d,-102.866173d,0d,29.269203d,-102.908325d,0d,29.353371d,-102.883011d,0d,29.411844d,-102.822205d,0d,29.530146d,-102.804726d,0d,29.744225d,-102.676361d,0d,29.732338d,-102.637611d,0d,29.778248d,-102.5765d,0d,29.7495d,-102.551949d,0d,29.785456d,-102.503098d,0d,29.767946d,-102.384796d,0d,29.845289d,-102.367561d,0d,29.880116d,-102.324333d,0d,29.784571d,-102.063995d,0d,29.818773d,-101.97332d,0d,29.788502d,-101.924225d,0d,29.814125d,-101.819099d,0d,29.779999d,-101.805206d,0d,29.787167d,-101.759094d,0d,29.75696d,-101.639671d,0d,29.76515d,-101.58149d,0d,29.81012d,-101.543953d,0d,29.763018d,-101.538345d,0d,29.788691d,-101.470467d,0d,29.760586d,-101.448425d,0d,29.769905d,-101.401276d,0d,29.745434d,-101.4161d,0d,29.657162d,-101.368401d,0d,29.652431d,-101.305862d,0d,29.58091d,-101.308929d,0d,29.62875d,-101.254585d,0d,29.526474d,-101.261429d,0d,29.473553d,-101.06736d,0d,29.373255d,-101.009056d,0d,29.242502d,-100.796989d,0d,29.166571d,-100.768608d,0d,29.080072d,-100.66877d,0d,28.92235d,-100.647224d,0d,28.894222d,-100.58979d,0d,28.660988d,-100.49791d,0d,28.589733d,-100.403175d,0d,28.544191d,-100.419533d,0d,28.500811d,-100.345802d,0d,28.478651d,-100.37677d,0d,28.394182d,-100.35157d,0d,28.32036d,-100.292892d,0d,28.280354d,-100.29792d,0d,28.241457d,-100.223465d,0d,28.201935d,-100.214073d,0d,28.154282d,-100.096924d,0d,28.00346d,-99.993309d,0d,27.986881d,-99.941856d,0d,27.797686d,-99.874733d,0d,27.780107d,-99.815727d,0d,27.770838d,-99.807816d,0d,27.635281d,-99.973068d,0d,27.79417d,-100.182503d,0d,27.709999d,-100.311401d,0d,27.400829d,-100.428299d,0d,27.395d,-100.584999d,0d,27.235279d,-100.8228d,0d,27.02639d,-100.795303d,0d,27.046671d,-100.759201d,0d,27.010281d,-100.699997d,0d,27.07111d,-100.6586d,0d,27.03055d,-100.549698d,0d,26.86722d,-100.532799d,0d,26.77194d,-100.565598d,0d,26.75083d,-100.615799d,0d,26.62833d,-100.694702d,0d,26.707781d,-100.794197d,0d,26.37055d,-101.218597d,0d,26.149441d,-101.035797d,0d,26.111389d,-100.949402d,0d,26.05694d,-100.913399d,0d,25.98778d,-100.917503d,0d,25.918051d,-100.832497d,0d,25.743891d,-100.819702d,0d,25.61166d,-100.709999d,0d,25.60833d,-100.642197d,0d,25.553329d,-100.634499d,0d,25.52833d,-100.571999d,0d,25.49861d,-100.577797d,0d,25.53639d,-100.6745d,0d,25.49d,-100.691704d,0d,25.44416d,-100.581703d,0d,25.327221d,-100.441704d,0d,25.325001d,-100.302803d,0d,25.275829d,-100.189697d,0d,25.254999d,-100.259201d,0d,25.190929d,-100.190903d,0d,25.213631d,-100.229202d,0d,25.157499d,-100.374702d,0d,25.211941d,-100.437202d,0d,25.228331d,-100.543602d,0d,25.19861d,-100.708603d,0d,25.15555d,-100.773102d,0d,25.038891d,-100.825302d,0d,24.93111d,-100.698303d,0d,24.89278d,-100.787201d,0d,24.559999d,-100.823898d,0d,24.601391d,-100.8722d,0d,24.58972d,-100.996399d,0d,24.81028d,-101.242203d,0d,24.77861d,-101.321098d,0d,24.82111d,-101.360298d,0d,24.761391d,-101.445297d,0d,24.75444d,-101.579697d,0d,24.78833d,-101.610001d,0d,24.858061d,-101.585602d,0d,24.90583d,-101.746399d,0d,25.026939d,-101.837502d,0d,25.15555d,-102.257202d,0d,25.11805d,-102.665802d,0d,25.07583d,-102.666901d,0d,24.86166d,-102.829201d,0d,24.696659d,-102.811401d,0d,24.798611d,-102.951698d,0d,24.84972d,-103.160301d,0d,24.90444d,-103.238899d,0d,25.058889d,-103.259201d,0d,25.150551d,-103.398598d,0d,25.275961d,-103.5047d,0d,25.333611d,-103.428902d,0d,25.385281d,-103.412804d,0d,25.465269d,-103.484497d,0d,25.541941d,-103.484703d,0d,25.74333d,-103.325798d,0d,26.07555d,-103.336098d,0d,26.284439d,-103.2789d,0d,26.38389d,-103.322502d,0d,26.661079d,-103.630898d,0d,27.87055d,-103.954697d,0d,28.997732d,-103.290146d,0d});
  }
}
protected class MFInt32101 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32102 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,0,-1});
  }
}
protected class MFColor103 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d104 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.067459d,-105.4021d,0d,23.040831d,-105.462799d,0d,22.971109d,-105.487801d,0d,22.903891d,-105.444199d,0d,22.836941d,-105.541702d,0d,22.75305d,-105.575302d,0d,22.681391d,-105.479401d,0d,22.548889d,-105.454498d,0d,22.486179d,-105.644302d,0d,22.47311d,-105.694702d,0d,22.468361d,-105.714577d,0d,22.524441d,-105.720573d,0d,22.532497d,-105.756393d,0d,22.660275d,-105.816963d,0d,22.816109d,-106.000839d,0d,22.850555d,-105.983902d,0d,22.827221d,-106.0289d,0d,23.047497d,-106.218338d,0d,23.184444d,-106.378616d,0d,23.180553d,-106.424728d,0d,23.401108d,-106.522507d,0d,23.647499d,-106.802231d,0d,23.868889d,-106.919167d,0d,24.203609d,-107.374733d,0d,24.248608d,-107.396393d,0d,24.493889d,-107.795837d,0d,24.515553d,-107.779716d,0d,24.340015d,-107.497414d,0d,24.380276d,-107.551964d,0d,24.356941d,-107.49501d,0d,24.392776d,-107.475281d,0d,24.520275d,-107.525009d,0d,24.521942d,-107.585281d,0d,24.5d,-107.595573d,0d,24.498333d,-107.553337d,0d,24.451664d,-107.635834d,0d,24.495552d,-107.670013d,0d,24.498608d,-107.741669d,0d,24.587219d,-107.808327d,0d,24.63583d,-107.934723d,0d,24.525276d,-107.811401d,0d,24.645275d,-107.992233d,0d,24.778053d,-108.060013d,0d,24.75d,-107.991959d,0d,24.768608d,-107.974457d,0d,24.835278d,-108.010559d,0d,24.961941d,-107.989464d,0d,24.998886d,-108.050293d,0d,24.831108d,-108.040558d,0d,24.819443d,-108.101387d,0d,25.027496d,-108.228622d,0d,25.09861d,-108.326134d,0d,25.102497d,-108.278633d,0d,24.980831d,-108.179169d,0d,24.9725d,-108.127502d,0d,25.017776d,-108.132233d,0d,25.028053d,-108.163353d,0d,25.056942d,-108.142792d,0d,25.014164d,-108.100571d,0d,25.004444d,-107.999733d,0d,25.086941d,-108.05806d,0d,25.123886d,-108.125839d,0d,25.108055d,-108.167236d,0d,25.169998d,-108.219177d,0d,25.167221d,-108.352509d,0d,25.203331d,-108.355827d,0d,25.186665d,-108.314453d,0d,25.241386d,-108.316963d,0d,25.263054d,-108.363068d,0d,25.142776d,-108.398621d,0d,25.20583d,-108.393623d,0d,25.263054d,-108.436951d,0d,25.355274d,-108.728058d,0d,25.344528d,-108.590683d,0d,25.394444d,-108.652786d,0d,25.379444d,-108.770279d,0d,25.401943d,-108.726669d,0d,25.442497d,-108.747223d,0d,25.431942d,-108.775558d,0d,25.542221d,-108.767792d,0d,25.561386d,-108.898903d,0d,25.507221d,-108.877792d,0d,25.456108d,-108.920013d,0d,25.498886d,-108.945557d,0d,25.495552d,-109.012222d,0d,25.459999d,-109.029449d,0d,25.526108d,-109.108902d,0d,25.577499d,-109.056953d,0d,25.569443d,-108.996674d,0d,25.536942d,-108.979446d,0d,25.589443d,-108.97139d,0d,25.670277d,-108.878342d,0d,25.798332d,-108.828056d,0d,25.695d,-108.900848d,0d,25.587776d,-109.06778d,0d,25.578053d,-109.136948d,0d,25.647778d,-109.172234d,0d,25.679722d,-109.257782d,0d,25.555275d,-109.156952d,0d,25.630276d,-109.249733d,0d,25.641109d,-109.406113d,0d,25.658886d,-109.300293d,0d,25.708885d,-109.287514d,0d,25.763611d,-109.373611d,0d,25.678608d,-109.399727d,0d,25.759441d,-109.40834d,0d,25.790276d,-109.443336d,0d,25.860287d,-109.416748d,0d,26.014442d,-109.430283d,0d,26.306664d,-109.256393d,0d,26.15361d,-109.285278d,0d,26.339165d,-109.214737d,0d,26.325275d,-109.165283d,0d,26.276943d,-109.152786d,0d,26.264721d,-109.175293d,0d,26.209164d,-109.10112d,0d,26.281666d,-109.081947d,0d,26.30722d,-109.131393d,0d,26.338423d,-109.143547d,0d,26.83194d,-108.486397d,0d,26.865829d,-108.476997d,0d,26.96133d,-108.471298d,0d,27.03083d,-108.404999d,0d,27.06139d,-108.305298d,0d,27.040831d,-108.248901d,0d,26.972771d,-108.220596d,0d,26.9475d,-108.035599d,0d,26.819719d,-108.003899d,0d,26.639999d,-107.846703d,0d,26.200279d,-107.784401d,0d,26.11528d,-107.366402d,0d,25.943331d,-107.299698d,0d,25.775551d,-107.151703d,0d,25.606091d,-107.084099d,0d,25.294439d,-107.124702d,0d,25.148609d,-107.107498d,0d,24.84194d,-106.948898d,0d,24.770281d,-106.885002d,0d,24.76333d,-106.821098d,0d,24.5725d,-106.638603d,0d,24.301941d,-106.519203d,0d,24.284719d,-106.396103d,0d,24.39027d,-106.249199d,0d,24.211941d,-106.002197d,0d,24.09889d,-105.959702d,0d,24.055269d,-105.908096d,0d,23.75972d,-105.885803d,0d,23.55666d,-105.763298d,0d,23.469721d,-105.7164d,0d,23.28722d,-105.684196d,0d,23.253441d,-105.633904d,0d,23.14444d,-105.5289d,0d,23.147221d,-105.416702d,0d,23.067459d,-105.4021d,0d});
  }
}
protected class MFInt32105 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32106 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,0,-1});
  }
}
protected class MFColor107 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d108 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.31921d,-104.311401d,0d,22.451389d,-104.345001d,0d,22.410271d,-104.491402d,0d,22.4725d,-104.612503d,0d,22.624439d,-104.660599d,0d,22.67667d,-104.7575d,0d,22.54833d,-104.9981d,0d,22.67889d,-104.9981d,0d,22.783051d,-104.879997d,0d,22.924721d,-104.914703d,0d,23.039721d,-105.171997d,0d,23.034719d,-105.3125d,0d,23.067459d,-105.4021d,0d,23.147221d,-105.416702d,0d,23.14444d,-105.5289d,0d,23.253441d,-105.633904d,0d,23.28722d,-105.684196d,0d,23.469721d,-105.7164d,0d,23.55666d,-105.763298d,0d,23.75972d,-105.885803d,0d,24.055269d,-105.908096d,0d,24.09889d,-105.959702d,0d,24.211941d,-106.002197d,0d,24.39027d,-106.249199d,0d,24.284719d,-106.396103d,0d,24.301941d,-106.519203d,0d,24.5725d,-106.638603d,0d,24.76333d,-106.821098d,0d,24.770281d,-106.885002d,0d,24.84194d,-106.948898d,0d,25.148609d,-107.107498d,0d,25.294439d,-107.124702d,0d,25.606091d,-107.084099d,0d,25.622499d,-106.740303d,0d,25.789169d,-106.5336d,0d,26.021111d,-106.520798d,0d,26.08d,-106.403099d,0d,26.147499d,-106.3675d,0d,26.37639d,-106.449997d,0d,26.368891d,-106.344704d,0d,26.415001d,-106.239502d,0d,26.591391d,-106.172203d,0d,26.75222d,-106.153297d,0d,26.76944d,-106.126999d,0d,26.735001d,-106.091904d,0d,26.83861d,-106.027496d,0d,26.655001d,-105.753899d,0d,26.662781d,-105.636902d,0d,26.58778d,-105.585297d,0d,26.458891d,-105.326103d,0d,26.541389d,-105.138298d,0d,26.521391d,-105.121902d,0d,26.45944d,-105.010002d,0d,26.492769d,-104.843903d,0d,26.433331d,-104.7967d,0d,26.45055d,-104.725601d,0d,26.355551d,-104.607498d,0d,26.350559d,-104.551102d,0d,26.75639d,-104.188301d,0d,26.728889d,-103.8442d,0d,26.661079d,-103.630898d,0d,26.38389d,-103.322502d,0d,26.284439d,-103.2789d,0d,26.07555d,-103.336098d,0d,25.74333d,-103.325798d,0d,25.541941d,-103.484703d,0d,25.465269d,-103.484497d,0d,25.385281d,-103.412804d,0d,25.333611d,-103.428902d,0d,25.275961d,-103.5047d,0d,25.150551d,-103.398598d,0d,25.058889d,-103.259201d,0d,24.90444d,-103.238899d,0d,24.84972d,-103.160301d,0d,24.798611d,-102.951698d,0d,24.696659d,-102.811401d,0d,24.86166d,-102.829201d,0d,25.07583d,-102.666901d,0d,24.828609d,-102.504997d,0d,24.452221d,-102.513603d,0d,24.458891d,-102.735298d,0d,24.433889d,-102.767197d,0d,24.47611d,-103.267502d,0d,24.275551d,-103.612503d,0d,24.182501d,-103.600601d,0d,24.073059d,-103.850899d,0d,23.861389d,-103.875603d,0d,23.73694d,-103.858597d,0d,23.674721d,-103.808296d,0d,23.623329d,-103.919701d,0d,23.573059d,-103.936699d,0d,23.4475d,-104.078102d,0d,23.195829d,-104.0961d,0d,23.14278d,-104.169701d,0d,23.062771d,-104.201103d,0d,22.42194d,-104.258598d,0d,22.31921d,-104.311401d,0d});
  }
}
protected class MFInt32109 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32110 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,0,-1});
  }
}
protected class MFColor111 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d112 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.85664d,-101.524902d,0d,22.01527d,-101.800301d,0d,22.011761d,-101.846199d,0d,22.114441d,-101.936401d,0d,22.137779d,-102.056396d,0d,22.25194d,-102.0242d,0d,22.285271d,-102.154404d,0d,22.324169d,-102.1558d,0d,22.372219d,-102.2192d,0d,22.355829d,-102.273598d,0d,22.45639d,-102.287201d,0d,22.458891d,-102.325798d,0d,22.337219d,-102.4506d,0d,22.27833d,-102.635002d,0d,22.08333d,-102.706902d,0d,21.930269d,-102.844704d,0d,21.82333d,-102.8517d,0d,21.724171d,-102.741402d,0d,21.617769d,-102.769699d,0d,21.54694d,-102.639198d,0d,21.381941d,-102.687202d,0d,21.320551d,-102.833603d,0d,21.328609d,-102.9067d,0d,21.284719d,-102.962196d,0d,21.30666d,-103.034401d,0d,21.1875d,-103.085602d,0d,21.05444d,-103.055801d,0d,21.198059d,-103.542801d,0d,21.188049d,-103.6017d,0d,21.24194d,-103.646103d,0d,21.203329d,-103.737d,0d,21.22389d,-103.765602d,0d,21.251659d,-103.753098d,0d,21.38694d,-103.702797d,0d,21.51639d,-103.733597d,0d,21.46139d,-103.650299d,0d,21.59305d,-103.514198d,0d,21.731939d,-103.509499d,0d,21.785549d,-103.547798d,0d,21.848049d,-103.446999d,0d,21.933331d,-103.394203d,0d,21.9825d,-103.293098d,0d,21.975281d,-103.170799d,0d,22.090269d,-103.091103d,0d,22.147779d,-103.1278d,0d,22.28611d,-103.055603d,0d,22.307779d,-103.201401d,0d,22.36861d,-103.179497d,0d,22.505831d,-103.372498d,0d,22.435551d,-103.409203d,0d,22.327499d,-103.371696d,0d,22.11729d,-103.522301d,0d,22.081671d,-103.638298d,0d,22.11278d,-103.682503d,0d,22.14599d,-103.700897d,0d,22.524719d,-103.614998d,0d,22.57333d,-103.658897d,0d,22.576389d,-103.741402d,0d,22.183889d,-103.868599d,0d,22.461109d,-103.883904d,0d,22.489441d,-103.833603d,0d,22.577221d,-103.870796d,0d,22.636669d,-103.770599d,0d,22.723049d,-103.802002d,0d,22.764721d,-104.007004d,0d,22.658609d,-103.994202d,0d,22.58194d,-104.029404d,0d,22.51083d,-103.9217d,0d,22.36805d,-103.950302d,0d,22.34222d,-104.144203d,0d,22.26454d,-104.329597d,0d,22.31921d,-104.311401d,0d,22.42194d,-104.258598d,0d,23.062771d,-104.201103d,0d,23.14278d,-104.169701d,0d,23.195829d,-104.0961d,0d,23.4475d,-104.078102d,0d,23.573059d,-103.936699d,0d,23.623329d,-103.919701d,0d,23.674721d,-103.808296d,0d,23.73694d,-103.858597d,0d,23.861389d,-103.875603d,0d,24.073059d,-103.850899d,0d,24.182501d,-103.600601d,0d,24.275551d,-103.612503d,0d,24.47611d,-103.267502d,0d,24.433889d,-102.767197d,0d,24.458891d,-102.735298d,0d,24.452221d,-102.513603d,0d,24.828609d,-102.504997d,0d,25.07583d,-102.666901d,0d,25.11805d,-102.665802d,0d,25.15555d,-102.257202d,0d,25.026939d,-101.837502d,0d,24.90583d,-101.746399d,0d,24.858061d,-101.585602d,0d,24.78833d,-101.610001d,0d,24.75444d,-101.579697d,0d,24.761391d,-101.445297d,0d,24.82111d,-101.360298d,0d,24.77861d,-101.321098d,0d,24.81028d,-101.242203d,0d,24.58972d,-100.996399d,0d,24.601391d,-100.8722d,0d,24.559999d,-100.823898d,0d,24.398609d,-100.981903d,0d,24.113331d,-101.173103d,0d,23.89805d,-101.402199d,0d,23.69389d,-101.685303d,0d,23.610001d,-101.734703d,0d,23.54805d,-101.8703d,0d,23.37361d,-102.057503d,0d,23.388611d,-102.192802d,0d,23.333611d,-102.193604d,0d,23.217501d,-102.280602d,0d,23.11305d,-102.194504d,0d,23.00222d,-102.245003d,0d,22.81028d,-102.142799d,0d,22.755831d,-102.081398d,0d,22.62055d,-101.934402d,0d,22.49313d,-101.870796d,0d,22.460831d,-101.708298d,0d,22.598049d,-101.570801d,0d,22.61861d,-101.481102d,0d,22.59417d,-101.375d,0d,22.535271d,-101.311401d,0d,22.454439d,-101.298897d,0d,22.39555d,-101.360603d,0d,22.07917d,-101.328598d,0d,21.85664d,-101.524902d,0d});
  }
}
protected class MFInt32113 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32114 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,0,-1});
  }
}
protected class MFColor115 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d116 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.24111d,-100.057198d,0d,23.120831d,-100.089203d,0d,23.12722d,-100.025803d,0d,23.00222d,-99.908073d,0d,22.93055d,-99.936401d,0d,22.83889d,-100.048599d,0d,22.80389d,-100.016701d,0d,22.615d,-99.530563d,0d,22.726669d,-99.536118d,0d,22.63343d,-99.424438d,0d,22.67944d,-99.378067d,0d,22.44611d,-99.231117d,0d,22.340549d,-98.879463d,0d,22.41917d,-98.686111d,0d,22.418489d,-98.616089d,0d,22.228331d,-98.345573d,0d,22.017139d,-98.469254d,0d,21.99868d,-98.481369d,0d,21.974131d,-98.499947d,0d,21.975269d,-98.588562d,0d,21.941111d,-98.573334d,0d,21.951389d,-98.518623d,0d,21.933331d,-98.555008d,0d,21.911659d,-98.537231d,0d,21.884439d,-98.563904d,0d,21.83667d,-98.521118d,0d,21.85194d,-98.49028d,0d,21.782221d,-98.450844d,0d,21.720551d,-98.525284d,0d,21.728331d,-98.56279d,0d,21.68944d,-98.56279d,0d,21.694719d,-98.612793d,0d,21.608891d,-98.642227d,0d,21.52833d,-98.524437d,0d,21.39889d,-98.515007d,0d,21.33444d,-98.605827d,0d,21.215d,-98.62001d,0d,21.184999d,-98.811111d,0d,21.21611d,-98.905563d,0d,21.29361d,-98.943069d,0d,21.26832d,-99.043259d,0d,21.28722d,-99.087784d,0d,21.64389d,-99.200012d,0d,21.62583d,-99.25528d,0d,21.56389d,-99.296677d,0d,21.55666d,-99.366959d,0d,21.461109d,-99.411957d,0d,21.423889d,-99.579727d,0d,21.55472d,-99.690567d,0d,21.52166d,-99.743057d,0d,21.41918d,-99.790543d,0d,21.58626d,-100.193199d,0d,21.64889d,-100.296997d,0d,21.650551d,-100.432503d,0d,21.515551d,-100.549698d,0d,21.50639d,-100.608101d,0d,21.56889d,-100.751701d,0d,21.745001d,-100.968597d,0d,21.7675d,-101.203903d,0d,21.861389d,-101.3228d,0d,21.834999d,-101.426697d,0d,21.85664d,-101.524902d,0d,22.07917d,-101.328598d,0d,22.39555d,-101.360603d,0d,22.454439d,-101.298897d,0d,22.535271d,-101.311401d,0d,22.59417d,-101.375d,0d,22.61861d,-101.481102d,0d,22.598049d,-101.570801d,0d,22.460831d,-101.708298d,0d,22.49313d,-101.870796d,0d,22.62055d,-101.934402d,0d,22.755831d,-102.081398d,0d,22.81028d,-102.142799d,0d,23.00222d,-102.245003d,0d,23.11305d,-102.194504d,0d,23.217501d,-102.280602d,0d,23.333611d,-102.193604d,0d,23.388611d,-102.192802d,0d,23.37361d,-102.057503d,0d,23.54805d,-101.8703d,0d,23.610001d,-101.734703d,0d,23.69389d,-101.685303d,0d,23.89805d,-101.402199d,0d,24.113331d,-101.173103d,0d,24.398609d,-100.981903d,0d,24.559999d,-100.823898d,0d,24.290831d,-100.589699d,0d,24.137501d,-100.562202d,0d,23.959999d,-100.601402d,0d,23.747499d,-100.417198d,0d,23.61083d,-100.468102d,0d,23.41222d,-100.427803d,0d,23.27833d,-100.455299d,0d,23.216391d,-100.434402d,0d,23.194441d,-100.371902d,0d,23.248051d,-100.303299d,0d,23.24111d,-100.057198d,0d});
  }
}
protected class MFInt32117 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32118 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,0,-1});
  }
}
protected class MFColor119 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d120 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {27.665857d,-99.718163d,0d,27.52305d,-99.915848d,0d,27.4475d,-99.894997d,0d,27.45694d,-99.800293d,0d,27.413059d,-99.748337d,0d,27.159161d,-99.699173d,0d,26.91361d,-99.733063d,0d,26.89917d,-99.633904d,0d,26.852501d,-99.566391d,0d,26.66222d,-99.631119d,0d,26.67305d,-99.501106d,0d,26.62833d,-99.415009d,0d,26.51d,-99.382507d,0d,26.453609d,-99.446671d,0d,26.355d,-99.387222d,0d,26.36083d,-99.316116d,0d,26.291109d,-99.248611d,0d,26.290001d,-99.176964d,0d,26.07778d,-99.113739d,0d,26.09548d,-99.012077d,0d,26.08872d,-98.99649d,0d,25.993891d,-98.896667d,0d,26.057779d,-98.815292d,0d,26.040831d,-98.585007d,0d,25.987221d,-98.556396d,0d,25.52055d,-98.569168d,0d,25.49305d,-98.450562d,0d,25.422779d,-98.443893d,0d,25.07375d,-98.904716d,0d,25.07666d,-98.92485d,0d,25.074169d,-98.992783d,0d,25.122499d,-99.041397d,0d,25.046671d,-99.106117d,0d,25.05139d,-99.150558d,0d,25.01222d,-99.142502d,0d,24.87611d,-99.195282d,0d,24.775829d,-99.163887d,0d,24.804159d,-99.258904d,0d,24.75666d,-99.413887d,0d,24.643049d,-99.56778d,0d,24.65444d,-99.592789d,0d,24.52861d,-99.731667d,0d,24.47389d,-99.674179d,0d,24.497219d,-99.627228d,0d,24.36805d,-99.557243d,0d,24.217501d,-99.611954d,0d,24.076941d,-99.6064d,0d,23.99361d,-99.491119d,0d,23.89361d,-99.450562d,0d,23.89472d,-99.498901d,0d,23.76333d,-99.597778d,0d,23.74667d,-99.838623d,0d,23.53167d,-99.95639d,0d,23.372499d,-99.888344d,0d,23.410271d,-100.0242d,0d,23.355d,-100.071999d,0d,23.316111d,-100.042801d,0d,23.24111d,-100.057198d,0d,23.248051d,-100.303299d,0d,23.194441d,-100.371902d,0d,23.216391d,-100.434402d,0d,23.27833d,-100.455299d,0d,23.41222d,-100.427803d,0d,23.61083d,-100.468102d,0d,23.747499d,-100.417198d,0d,23.959999d,-100.601402d,0d,24.137501d,-100.562202d,0d,24.290831d,-100.589699d,0d,24.559999d,-100.823898d,0d,24.89278d,-100.787201d,0d,24.93111d,-100.698303d,0d,25.038891d,-100.825302d,0d,25.15555d,-100.773102d,0d,25.19861d,-100.708603d,0d,25.228331d,-100.543602d,0d,25.211941d,-100.437202d,0d,25.157499d,-100.374702d,0d,25.213631d,-100.229202d,0d,25.190929d,-100.190903d,0d,25.254999d,-100.259201d,0d,25.275829d,-100.189697d,0d,25.325001d,-100.302803d,0d,25.327221d,-100.441704d,0d,25.44416d,-100.581703d,0d,25.49d,-100.691704d,0d,25.53639d,-100.6745d,0d,25.49861d,-100.577797d,0d,25.52833d,-100.571999d,0d,25.553329d,-100.634499d,0d,25.60833d,-100.642197d,0d,25.61166d,-100.709999d,0d,25.743891d,-100.819702d,0d,25.918051d,-100.832497d,0d,25.98778d,-100.917503d,0d,26.05694d,-100.913399d,0d,26.111389d,-100.949402d,0d,26.149441d,-101.035797d,0d,26.37055d,-101.218597d,0d,26.707781d,-100.794197d,0d,26.62833d,-100.694702d,0d,26.75083d,-100.615799d,0d,26.77194d,-100.565598d,0d,26.86722d,-100.532799d,0d,27.03055d,-100.549698d,0d,27.07111d,-100.6586d,0d,27.010281d,-100.699997d,0d,27.046671d,-100.759201d,0d,27.02639d,-100.795303d,0d,27.235279d,-100.8228d,0d,27.395d,-100.584999d,0d,27.400829d,-100.428299d,0d,27.709999d,-100.311401d,0d,27.79417d,-100.182503d,0d,27.635281d,-99.973068d,0d,27.770838d,-99.807816d,0d,27.665857d,-99.718163d,0d});
  }
}
protected class MFInt32121 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32122 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,0,-1});
  }
}
protected class MFColor123 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d124 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.954569d,-97.172218d,0d,25.707497d,-97.168625d,0d,25.432499d,-97.290558d,0d,25.124165d,-97.480286d,0d,24.784721d,-97.584167d,0d,24.322498d,-97.688065d,0d,23.789719d,-97.726959d,0d,23.783886d,-97.818069d,0d,23.765831d,-97.755844d,0d,23.647499d,-97.753342d,0d,23.750553d,-97.723343d,0d,23.300831d,-97.766403d,0d,22.90583d,-97.741394d,0d,22.849442d,-97.755569d,0d,22.924999d,-97.758896d,0d,22.773609d,-97.805847d,0d,22.733887d,-97.872513d,0d,22.708611d,-97.847778d,0d,22.606667d,-97.890289d,0d,22.581108d,-97.865845d,0d,22.66222d,-97.828064d,0d,22.518055d,-97.84584d,0d,22.268055d,-97.776871d,0d,22.268049d,-97.776871d,0d,22.22131d,-97.876129d,0d,22.27194d,-97.925568d,0d,22.326389d,-97.913353d,0d,22.382771d,-98.101959d,0d,22.47139d,-98.193069d,0d,22.468611d,-98.293327d,0d,22.398331d,-98.313904d,0d,22.440281d,-98.490013d,0d,22.418489d,-98.616089d,0d,22.41917d,-98.686111d,0d,22.340549d,-98.879463d,0d,22.44611d,-99.231117d,0d,22.67944d,-99.378067d,0d,22.63343d,-99.424438d,0d,22.726669d,-99.536118d,0d,22.615d,-99.530563d,0d,22.80389d,-100.016701d,0d,22.83889d,-100.048599d,0d,22.93055d,-99.936401d,0d,23.00222d,-99.908073d,0d,23.12722d,-100.025803d,0d,23.120831d,-100.089203d,0d,23.24111d,-100.057198d,0d,23.316111d,-100.042801d,0d,23.355d,-100.071999d,0d,23.410271d,-100.0242d,0d,23.372499d,-99.888344d,0d,23.53167d,-99.95639d,0d,23.74667d,-99.838623d,0d,23.76333d,-99.597778d,0d,23.89472d,-99.498901d,0d,23.89361d,-99.450562d,0d,23.99361d,-99.491119d,0d,24.076941d,-99.6064d,0d,24.217501d,-99.611954d,0d,24.36805d,-99.557243d,0d,24.497219d,-99.627228d,0d,24.47389d,-99.674179d,0d,24.52861d,-99.731667d,0d,24.65444d,-99.592789d,0d,24.643049d,-99.56778d,0d,24.75666d,-99.413887d,0d,24.804159d,-99.258904d,0d,24.775829d,-99.163887d,0d,24.87611d,-99.195282d,0d,25.01222d,-99.142502d,0d,25.05139d,-99.150558d,0d,25.046671d,-99.106117d,0d,25.122499d,-99.041397d,0d,25.074169d,-98.992783d,0d,25.07666d,-98.92485d,0d,25.07375d,-98.904716d,0d,25.422779d,-98.443893d,0d,25.49305d,-98.450562d,0d,25.52055d,-98.569168d,0d,25.987221d,-98.556396d,0d,26.040831d,-98.585007d,0d,26.057779d,-98.815292d,0d,25.993891d,-98.896667d,0d,26.08872d,-98.99649d,0d,26.09548d,-99.012077d,0d,26.07778d,-99.113739d,0d,26.290001d,-99.176964d,0d,26.291109d,-99.248611d,0d,26.36083d,-99.316116d,0d,26.355d,-99.387222d,0d,26.453609d,-99.446671d,0d,26.51d,-99.382507d,0d,26.62833d,-99.415009d,0d,26.67305d,-99.501106d,0d,26.66222d,-99.631119d,0d,26.852501d,-99.566391d,0d,26.89917d,-99.633904d,0d,26.91361d,-99.733063d,0d,27.159161d,-99.699173d,0d,27.413059d,-99.748337d,0d,27.45694d,-99.800293d,0d,27.4475d,-99.894997d,0d,27.52305d,-99.915848d,0d,27.665857d,-99.718163d,0d,27.661558d,-99.714493d,0d,27.612627d,-99.549187d,0d,27.504284d,-99.526741d,0d,27.490755d,-99.490494d,0d,27.318653d,-99.543587d,0d,27.269884d,-99.465271d,0d,27.199198d,-99.437157d,0d,27.028648d,-99.455063d,0d,26.99555d,-99.392715d,0d,26.94663d,-99.390518d,0d,26.857361d,-99.285522d,0d,26.579889d,-99.165817d,0d,26.545729d,-99.168678d,0d,26.48834d,-99.101471d,0d,26.419531d,-99.106728d,0d,26.395309d,-98.93927d,0d,26.360329d,-98.908897d,0d,26.375071d,-98.819832d,0d,26.242056d,-98.677917d,0d,26.260454d,-98.599968d,0d,26.201544d,-98.488518d,0d,26.220911d,-98.453392d,0d,26.156031d,-98.384521d,0d,26.15868d,-98.347191d,0d,26.111647d,-98.327934d,0d,26.132809d,-98.292274d,0d,26.120895d,-98.271355d,0d,26.098104d,-98.291946d,0d,26.055376d,-98.200691d,0d,26.065758d,-98.083214d,0d,26.034626d,-98.076347d,0d,26.059395d,-98.04007d,0d,26.060141d,-97.867432d,0d,26.023445d,-97.647972d,0d,25.962002d,-97.612923d,0d,25.954172d,-97.574936d,0d,25.933231d,-97.590088d,0d,25.845198d,-97.434349d,0d,25.845362d,-97.385643d,0d,25.917021d,-97.380989d,0d,25.938663d,-97.304436d,0d,25.965124d,-97.307144d,0d,25.954569d,-97.172218d,0d});
  }
}
protected class MFInt32125 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32126 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,0,-1});
  }
}
protected class MFColor127 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFVec3d128 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.37546d,-93.589401d,0d,17.307501d,-93.626953d,0d,17.15028d,-93.873428d,0d,17.172779d,-94.328056d,0d,17.2225d,-94.967216d,0d,17.335831d,-95.001106d,0d,17.346661d,-95.069168d,0d,17.59477d,-95.251709d,0d,17.64819d,-95.205582d,0d,17.73333d,-95.210281d,0d,17.64139d,-95.364182d,0d,17.633051d,-95.439178d,0d,17.533051d,-95.560013d,0d,17.501659d,-95.725014d,0d,17.524719d,-95.790283d,0d,17.77916d,-95.915558d,0d,17.941111d,-95.799454d,0d,18.05139d,-95.804459d,0d,18.11916d,-95.862228d,0d,18.16408d,-96.09465d,0d,18.14167d,-96.150284d,0d,18.185551d,-96.161392d,0d,18.180269d,-96.205292d,0d,18.213921d,-96.236687d,0d,18.29166d,-96.25473d,0d,18.388611d,-96.356949d,0d,18.541109d,-96.405838d,0d,18.68111d,-96.674179d,0d,18.522221d,-96.635559d,0d,18.43083d,-96.750633d,0d,18.55278d,-96.80751d,0d,18.476669d,-97.03862d,0d,18.64333d,-97.14418d,0d,18.6325d,-97.272781d,0d,18.76944d,-97.345291d,0d,18.88722d,-97.247787d,0d,19.02639d,-97.250839d,0d,19.16d,-97.264717d,0d,19.193609d,-97.170013d,0d,19.18305d,-97.079727d,0d,19.2675d,-97.001678d,0d,19.307779d,-97.056122d,0d,19.30666d,-97.185562d,0d,19.37361d,-97.246399d,0d,19.40139d,-97.334457d,0d,19.53833d,-97.353348d,0d,19.585831d,-97.440002d,0d,19.61972d,-97.354446d,0d,19.683889d,-97.308899d,0d,19.75d,-97.285278d,0d,19.89555d,-97.309448d,0d,20.1175d,-97.137222d,0d,20.147221d,-97.146393d,0d,20.263729d,-97.381447d,0d,20.26222d,-97.412231d,0d,20.239719d,-97.470573d,0d,20.121111d,-97.515007d,0d,20.10667d,-97.564453d,0d,20.168329d,-97.614731d,0d,20.176109d,-97.692497d,0d,20.25528d,-97.752792d,0d,20.439899d,-97.758873d,0d,20.469721d,-97.693336d,0d,20.41777d,-97.628891d,0d,20.490299d,-97.570648d,0d,20.58861d,-97.579178d,0d,20.650551d,-97.742233d,0d,20.793051d,-97.733902d,0d,20.805d,-97.873901d,0d,20.70639d,-97.883057d,0d,20.66666d,-97.948624d,0d,20.51972d,-97.963058d,0d,20.432171d,-98.098183d,0d,20.506941d,-98.042793d,0d,20.606939d,-98.029449d,0d,20.6425d,-98.030838d,0d,20.661659d,-98.095291d,0d,20.434999d,-98.335007d,0d,20.441111d,-98.402237d,0d,20.359171d,-98.452789d,0d,20.37639d,-98.494743d,0d,20.501659d,-98.566116d,0d,20.718611d,-98.424454d,0d,20.7125d,-98.498901d,0d,20.75639d,-98.510834d,0d,20.790279d,-98.421112d,0d,20.85861d,-98.366959d,0d,20.83083d,-98.23056d,0d,20.961941d,-98.220001d,0d,21.0275d,-98.176392d,0d,21.01944d,-98.153061d,0d,21.07472d,-98.130569d,0d,21.157221d,-98.212509d,0d,21.12978d,-98.288162d,0d,21.183611d,-98.272903d,0d,21.213051d,-98.263062d,0d,21.233891d,-98.298889d,0d,21.15222d,-98.337509d,0d,21.15416d,-98.410568d,0d,21.24194d,-98.487228d,0d,21.352221d,-98.477226d,0d,21.39889d,-98.515007d,0d,21.52833d,-98.524437d,0d,21.608891d,-98.642227d,0d,21.694719d,-98.612793d,0d,21.68944d,-98.56279d,0d,21.728331d,-98.56279d,0d,21.720551d,-98.525284d,0d,21.782221d,-98.450844d,0d,21.85194d,-98.49028d,0d,21.83667d,-98.521118d,0d,21.884439d,-98.563904d,0d,21.911659d,-98.537231d,0d,21.933331d,-98.555008d,0d,21.951389d,-98.518623d,0d,21.941111d,-98.573334d,0d,21.975269d,-98.588562d,0d,21.974131d,-98.499947d,0d,21.99868d,-98.481369d,0d,22.017139d,-98.469254d,0d,22.228331d,-98.345573d,0d,22.418489d,-98.616089d,0d,22.440281d,-98.490013d,0d,22.398331d,-98.313904d,0d,22.468611d,-98.293327d,0d,22.47139d,-98.193069d,0d,22.382771d,-98.101959d,0d,22.326389d,-97.913353d,0d,22.27194d,-97.925568d,0d,22.22131d,-97.876129d,0d,22.268049d,-97.776871d,0d,22.157776d,-97.779175d,0d,21.976944d,-97.699173d,0d,21.774998d,-97.556122d,0d,21.564163d,-97.31723d,0d,21.467777d,-97.328613d,0d,21.271111d,-97.416672d,0d,21.434166d,-97.476669d,0d,21.471943d,-97.386948d,0d,21.538055d,-97.369736d,0d,21.789165d,-97.620285d,0d,21.899166d,-97.6539d,0d,22.088608d,-97.781403d,0d,21.934719d,-97.714737d,0d,21.671108d,-97.670288d,0d,21.487778d,-97.568069d,0d,21.483608d,-97.486679d,0d,21.371944d,-97.483337d,0d,20.812775d,-97.200562d,0d,20.676109d,-97.171402d,0d,20.157219d,-96.676392d,0d,19.861664d,-96.447784d,0d,19.31472d,-96.276947d,0d,19.228611d,-96.166946d,0d,19.22361d,-96.116119d,0d,19.101665d,-96.084457d,0d,19.060276d,-96.039459d,0d,19.058331d,-95.970566d,0d,18.871944d,-95.902237d,0d,18.811943d,-95.780289d,0d,18.803608d,-95.753067d,0d,18.763332d,-95.757507d,0d,18.863888d,-95.949722d,0d,18.746109d,-95.808899d,0d,18.754166d,-95.875839d,0d,18.715553d,-95.846115d,0d,18.744442d,-95.774734d,0d,18.671944d,-95.571671d,0d,18.750553d,-95.732788d,0d,18.795555d,-95.731674d,0d,18.717499d,-95.574173d,0d,18.711109d,-95.212784d,0d,18.613052d,-95.051392d,0d,18.558052d,-95.01889d,0d,18.522499d,-94.802231d,0d,18.190331d,-94.579788d,0d,18.146664d,-94.478897d,0d,18.198608d,-94.16806d,0d,18.209143d,-94.137825d,0d,18.15583d,-94.094452d,0d,18.068609d,-94.092789d,0d,17.991659d,-94.051392d,0d,17.88055d,-94.075287d,0d,17.83139d,-93.968063d,0d,17.745831d,-93.923889d,0d,17.74972d,-93.864731d,0d,17.722219d,-93.857788d,0d,17.683611d,-93.741959d,0d,17.561371d,-93.689362d,0d,17.522499d,-93.6539d,0d,17.45277d,-93.667511d,0d,17.37546d,-93.589401d,0d});
  }
}
protected class MFInt32129 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1});
  }
}
protected class MFInt32130 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1});
  }
}
protected class MFColor131 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d132 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.275204d,-98.745834d,0d,21.180553d,-98.781403d,0d,21.074997d,-98.956116d,0d,21.011944d,-98.962509d,0d,21.018055d,-99.003616d,0d,20.945d,-99.056122d,0d,20.846943d,-99.022232d,0d,20.816387d,-98.961395d,0d,20.581944d,-98.888626d,0d,20.522221d,-98.835281d,0d,20.334999d,-98.811401d,0d,20.325832d,-98.730835d,0d,20.283886d,-98.697784d,0d});
  }
}
protected class MFInt32133 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,-1,57,58,59,60,61,62,63,64,65,66,67,68,69,70,-1,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,-1,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,-1,125,126,127,128,129,130,131,132,133,134,135,-1});
  }
}
protected class MFInt32134 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,-1,57,58,59,60,61,62,63,64,65,66,67,68,69,70,-1,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,-1,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,-1,125,126,127,128,129,130,131,132,133,134,135,-1});
  }
}
protected class MFColor135 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d136 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.930553d,-102.915558d,0d,19.899151d,-102.807343d,0d,19.83083d,-102.891403d,0d,19.771942d,-102.829453d,0d,19.473053d,-102.780289d,0d,19.424999d,-102.74501d,0d,19.377777d,-102.781403d,0d,19.298862d,-102.778625d,0d,19.356941d,-102.812225d,0d,19.447498d,-103.06723d,0d,19.556942d,-103.064728d,0d,19.298862d,-102.778625d,0d,19.174721d,-102.771393d,0d,19.053055d,-102.637222d,0d,19.013611d,-102.487228d,0d,18.899441d,-102.31778d,0d,18.853886d,-102.131958d,0d,18.84861d,-102.07251d,0d,18.89222d,-102.080292d,0d,18.91333d,-102.052231d,0d,18.818607d,-102.024727d,0d,18.901386d,-102.001106d,0d,18.886665d,-101.973068d,0d,18.912498d,-101.950287d,0d,18.798054d,-102.000839d,0d,18.761665d,-101.966667d,0d,18.794167d,-101.935013d,0d,18.758053d,-101.933617d,0d,18.752499d,-101.870293d,0d,18.730831d,-101.892502d,0d,18.692497d,-101.871117d,0d,18.742222d,-101.809448d,0d,18.62833d,-101.852783d,0d,18.670555d,-101.705566d,0d,18.618332d,-101.68306d,0d,18.617496d,-101.651123d,0d,18.676388d,-101.621948d,0d,18.594166d,-101.603348d,0d,18.599163d,-101.561684d,0d,18.534721d,-101.559174d,0d,18.498608d,-101.513344d,0d,18.533607d,-101.295563d,0d,18.853886d,-102.131958d,0d,18.783886d,-102.016403d,0d,18.731667d,-102.00029d,0d,18.715275d,-101.926392d,0d,18.679996d,-101.9375d,0d,18.675278d,-101.876106d,0d,18.649998d,-101.911392d,0d,18.619999d,-101.877228d,0d,18.514442d,-101.91806d,0d,18.494442d,-101.888344d,0d,18.439999d,-101.888634d,0d,18.475277d,-101.994743d,0d,18.407776d,-101.896118d,0d,18.317219d,-101.870293d,0d,18.261387d,-101.900284d,0d,18.533607d,-101.295563d,0d,18.462219d,-101.347229d,0d,18.46611d,-101.436111d,0d,18.427219d,-101.427231d,0d,18.515831d,-101.587784d,0d,18.59222d,-101.634171d,0d,18.532219d,-101.725853d,0d,18.576942d,-101.76918d,0d,18.547775d,-101.847778d,0d,18.491665d,-101.87001d,0d,18.29583d,-101.85112d,0d,18.289444d,-101.787231d,0d,18.239166d,-101.836403d,0d,18.261387d,-101.900284d,0d,18.533607d,-101.295563d,0d,18.50111d,-101.087509d,0d,18.51722d,-101.011124d,0d,18.441944d,-100.946671d,0d,18.449997d,-100.909454d,0d,18.477497d,-100.915283d,0d,18.472221d,-100.79306d,0d,18.406387d,-100.732788d,0d,18.415276d,-100.69223d,0d,18.305832d,-100.695557d,0d,18.334442d,-100.628067d,0d,18.202499d,-100.540848d,0d,18.19833d,-100.493347d,0d,18.148888d,-100.496948d,0d,18.170277d,-100.330002d,0d,18.109997d,-100.335556d,0d,18.124996d,-100.270279d,0d,18.050831d,-100.111115d,0d,17.969719d,-100.040283d,0d,17.954166d,-99.960846d,0d,17.994999d,-99.763062d,0d,17.921665d,-99.536118d,0d,17.952499d,-99.394455d,0d,17.90583d,-99.257507d,0d,17.890831d,-99.03389d,0d,17.972221d,-98.932785d,0d,18.025555d,-98.929459d,0d,18.035275d,-98.830002d,0d,18.120472d,-98.756485d,0d,18.075275d,-98.636124d,0d,18.108055d,-98.634171d,0d,18.111111d,-98.579178d,0d,18.189781d,-98.480087d,0d,18.261387d,-101.900284d,0d,18.202221d,-101.987503d,0d,18.174164d,-102.146118d,0d,17.921665d,-102.179749d,0d,18.189781d,-98.480087d,0d,18.323055d,-98.401398d,0d,18.401943d,-98.271393d,0d,18.506664d,-98.253616d,0d,18.588608d,-98.190842d,0d,18.679722d,-97.994736d,0d,18.761665d,-97.906113d,0d,18.812775d,-97.920288d,0d,18.83083d,-97.99556d,0d,18.936386d,-98.115845d,0d,18.921665d,-98.155289d,0d,18.964443d,-98.273056d,0d,19.041386d,-98.222778d,0d,19.124722d,-98.218338d,0d,19.283054d,-98.283615d,0d,19.344997d,-98.132782d,0d,19.428886d,-98.025848d,0d,18.189781d,-98.480087d,0d,18.199165d,-98.404449d,0d,18.162777d,-98.335007d,0d,18.03611d,-98.292786d,0d,17.9725d,-98.160004d,0d,17.673885d,-98.108337d,0d,17.614166d,-98.005569d,0d,17.463055d,-97.946671d,0d,17.44083d,-97.886124d,0d,17.257221d,-97.778336d,0d,17.052776d,-97.773346d,0d});
  }
}
protected class MFInt32137 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,-1});
  }
}
protected class MFInt32138 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,-1});
  }
}
protected class MFColor139 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d140 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.904055d,-109.619186d,0d,28.930832d,-109.583618d,0d,29.101665d,-109.655563d,0d,29.12833d,-109.579178d,0d,29.102219d,-109.410278d,0d,29.234444d,-109.235001d,0d,29.424999d,-109.227509d,0d,29.441109d,-109.258347d,0d,29.540955d,-109.233902d,0d,29.847775d,-109.301956d,0d,29.985275d,-109.259171d,0d,30.009163d,-109.293625d,0d,30.026943d,-109.26001d,0d,30.076111d,-109.259171d,0d,30.116943d,-109.316116d,0d,30.211666d,-109.309723d,0d,30.334164d,-109.376114d,0d,30.514999d,-109.338623d,0d,30.646664d,-109.374725d,0d,30.684998d,-109.316956d,0d,30.713608d,-109.341675d,0d,30.736664d,-109.290848d,0d,30.809719d,-109.253342d,0d,30.826111d,-109.17334d,0d,30.813889d,-109.113342d,0d,30.614441d,-108.957504d,0d,30.5425d,-108.965836d,0d,30.438053d,-108.917786d,0d,30.293053d,-108.962509d,0d,30.275276d,-108.892792d,0d,30.221943d,-108.901123d,0d,30.185276d,-108.813904d,0d,30.01722d,-108.757233d,0d,29.970276d,-108.683624d,0d,29.85083d,-108.628616d,0d,29.80611d,-108.569458d,0d,29.674442d,-108.552505d,0d,29.567219d,-108.423889d,0d,29.503887d,-108.41806d,0d});
  }
}
protected class MFInt32141 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1});
  }
}
protected class MFInt32142 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1});
  }
}
protected class MFColor143 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d144 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {32.720833d,-114.721245d,0d,32.72081d,-114.72126d,0d,32.615993d,-114.808601d,0d,32.504448d,-114.819305d,0d,32.473049d,-114.936699d,0d,32.36861d,-114.964203d,0d,32.254669d,-115.041496d,0d,32.136108d,-114.998901d,0d,31.947489d,-115.017899d,0d});
  }
}
protected class MFInt32145 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,-1});
  }
}
protected class MFInt32146 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,-1});
  }
}
protected class MFColor147 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d148 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {27.844444d,-106.904175d,0d,27.816109d,-106.622513d,0d,27.846943d,-106.484451d,0d,27.890553d,-106.425842d,0d,27.823055d,-106.252228d,0d,27.878052d,-106.197784d,0d,27.917221d,-106.083344d,0d,27.907497d,-105.924179d,0d,27.988888d,-105.765839d,0d,28.044167d,-105.768066d,0d,28.148888d,-105.676964d,0d,28.179996d,-105.543625d,0d,28.34705d,-105.395676d,0d,28.468887d,-105.431396d,0d,28.602776d,-105.388901d,0d,28.636944d,-105.462784d,0d,28.74361d,-105.459167d,0d,28.791386d,-105.488892d,0d,28.830276d,-105.461121d,0d,28.875832d,-105.311401d,0d,28.921108d,-105.328339d,0d,28.921387d,-105.298615d,0d,29.00861d,-105.266403d,0d,29.048332d,-105.14917d,0d,29.162777d,-105.055008d,0d,29.246387d,-105.055283d,0d,29.256107d,-104.998611d,0d,29.316109d,-104.961945d,0d,29.338608d,-104.904449d,0d,29.376389d,-104.921402d,0d,29.421944d,-104.877228d,0d,29.495831d,-104.865005d,0d,29.551109d,-104.902237d,0d,29.50222d,-104.715286d,0d,29.570274d,-104.595001d,0d,29.529442d,-104.48056d,0d,29.598488d,-104.436172d,0d,28.34705d,-105.395676d,0d,28.236111d,-105.27417d,0d,28.153332d,-105.310287d,0d,28.044167d,-105.270279d,0d,27.924721d,-105.175003d,0d,27.701942d,-105.15834d,0d,27.640553d,-105.222504d,0d,27.542221d,-105.435287d,0d,27.558331d,-105.550003d,0d,27.528332d,-105.585564d,0d,27.53083d,-105.710281d,0d,27.566109d,-105.737793d,0d,27.40472d,-105.853348d,0d,27.413609d,-105.877228d,0d,27.325554d,-105.95668d,0d,27.348331d,-106.034729d,0d,27.41972d,-106.103622d,0d,27.408333d,-106.141113d,0d,27.445831d,-106.209457d,0d,27.406502d,-106.276276d,0d,27.241108d,-106.290558d,0d,27.209999d,-106.332504d,0d,27.031109d,-106.3414d,0d,26.763885d,-106.282501d,0d,26.701942d,-106.22139d,0d,26.5075d,-106.244446d,0d,26.366108d,-106.195007d,0d,26.305832d,-106.330841d,0d,26.396664d,-106.428894d,0d,26.433052d,-106.429169d,0d});
  }
}
protected class MFInt32149 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1});
  }
}
protected class MFInt32150 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1});
  }
}
protected class MFColor151 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d152 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.546547d,-101.160309d,0d,20.488888d,-101.150558d,0d,20.470276d,-101.085281d,0d,20.387218d,-101.013336d,0d,20.28833d,-101.011124d,0d,20.267498d,-100.920837d,0d,20.140553d,-100.883896d,0d,20.059166d,-100.759735d,0d,20.026386d,-100.670563d,0d,20.071388d,-100.51973d,0d,19.953331d,-100.410004d,0d,19.911942d,-100.318344d,0d,20.088608d,-100.168335d,0d,20.020554d,-100.068069d,0d,19.863331d,-99.977234d,0d,19.851665d,-99.920563d,0d,19.829998d,-99.935562d,0d,19.733887d,-99.864182d,0d,19.645832d,-99.862503d,0d,19.596107d,-99.779175d,0d,19.50111d,-99.749176d,0d,19.369164d,-99.541397d,0d,19.129997d,-99.502792d,0d});
  }
}
protected class MFInt32153 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1});
  }
}
protected class MFInt32154 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1});
  }
}
protected class MFColor155 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d156 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.224968d,-92.217453d,0d,18.226109d,-92.306671d,0d,18.289997d,-92.479172d,0d,18.38472d,-92.580566d,0d,18.406712d,-92.665619d,0d,18.171108d,-92.730286d,0d,18.159721d,-92.692505d,0d,18.123333d,-92.701126d,0d,18.073887d,-92.757233d,0d,18.04583d,-92.873901d,0d,17.958332d,-92.911118d,0d,17.966663d,-92.978058d,0d,17.92396d,-93.024986d,0d,17.943609d,-93.142227d,0d,17.99139d,-93.264183d,0d,17.959721d,-93.309448d,0d,17.60778d,-93.391953d,0d,17.51564d,-93.51712d,0d,17.37833d,-93.449448d,0d,17.362778d,-93.408066d,0d,17.324718d,-93.430008d,0d,17.366943d,-93.499176d,0d,17.352219d,-93.543335d,0d,17.240276d,-93.534729d,0d,17.184692d,-93.596085d,0d,17.161663d,-93.575012d,0d,17.181942d,-93.505844d,0d,17.131664d,-93.494171d,0d,17.094444d,-93.394455d,0d,17.041664d,-93.388626d,0d,17.006386d,-93.28334d,0d,17.035831d,-93.20723d,0d,16.966942d,-93.107513d,0d,16.873608d,-93.113617d,0d,16.84111d,-93.068619d,0d,16.799164d,-93.074173d,0d,16.719166d,-93.021957d,0d,16.576385d,-92.89917d,0d,16.51722d,-92.763901d,0d,16.40472d,-92.756119d,0d,16.297775d,-92.823898d,0d,16.182777d,-92.596954d,0d,16.251389d,-92.498901d,0d,16.147499d,-92.536118d,0d,15.912498d,-92.103058d,0d,15.854166d,-92.065567d,0d,15.896666d,-92.138901d,0d,15.784166d,-92.235001d,0d,15.690277d,-92.153061d,0d,15.597221d,-92.160278d,0d,15.539165d,-92.116394d,0d,15.439924d,-92.106071d,0d});
  }
}
protected class MFInt32157 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFInt32158 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFColor159 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d160 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.144279d,-91.147797d,0d,16.09861d,-91.029175d,0d,16.136665d,-90.911957d,0d,16.177219d,-90.882507d,0d,16.20472d,-90.90889d,0d,16.217777d,-90.851669d,0d,16.31361d,-90.87001d,0d,16.336941d,-90.763336d,0d,16.425831d,-90.761124d,0d,16.470833d,-90.722778d,0d,16.416386d,-90.719452d,0d,16.459999d,-90.676392d,0d,16.494164d,-90.696396d,0d,16.505554d,-90.665283d,0d,16.577221d,-90.683899d,0d,16.644274d,-90.658142d,0d});
  }
}
protected class MFInt32161 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFInt32162 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFColor163 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d164 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.196892d,-102.7724d,0d,20.229164d,-102.622223d,0d,20.338055d,-102.443619d,0d,20.343052d,-102.21167d,0d,20.38908d,-102.108803d,0d,20.403053d,-101.99556d,0d,20.326942d,-101.994171d,0d,20.367367d,-101.980637d,0d,20.364441d,-101.950562d,0d,20.211094d,-101.920303d,0d,20.191103d,-101.888863d,0d,20.211752d,-101.820625d,0d,20.19083d,-101.673889d,0d,20.318054d,-101.606949d,0d,20.333693d,-101.460594d,0d,20.345833d,-101.4375d,0d,20.423611d,-101.384171d,0d,20.48d,-101.38945d,0d,20.546108d,-101.325562d,0d,20.539719d,-101.280563d,0d,20.583054d,-101.236954d,0d,20.546547d,-101.160309d,0d,20.479721d,-100.807785d,0d,20.521385d,-100.756958d,0d,20.554996d,-100.773346d,0d,20.615276d,-100.737228d,0d,20.831665d,-100.836945d,0d,20.909721d,-100.783615d,0d,21.050831d,-100.799454d,0d,21.129166d,-100.818893d,0d,21.313332d,-100.994736d,0d,21.364166d,-101.148346d,0d,21.315277d,-101.284729d,0d});
  }
}
protected class MFInt32165 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,-1,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1,52,53,54,-1});
  }
}
protected class MFInt32166 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,-1,38,39,40,41,42,43,44,45,46,47,48,49,50,51,-1,52,53,54,-1});
  }
}
protected class MFColor167 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d168 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.268055d,-97.777512d,0d,22.213886d,-97.849167d,0d,22.208885d,-97.994736d,0d,22.146111d,-98.011948d,0d,22.143887d,-98.051956d,0d,22.107498d,-98.035843d,0d,22.101944d,-98.065292d,0d,22.078888d,-98.028336d,0d,22.077499d,-98.107224d,0d,22.032776d,-98.113892d,0d,22.066387d,-98.14418d,0d,22.053608d,-98.173065d,0d,22.102776d,-98.151123d,0d,22.085552d,-98.18306d,0d,22.111664d,-98.201401d,0d,22.044441d,-98.280838d,0d,22.065277d,-98.334457d,0d,22.020275d,-98.365845d,0d,22.041111d,-98.402512d,0d,21.957497d,-98.426392d,0d,21.97526d,-98.588562d,0d,21.941109d,-98.573334d,0d,21.951385d,-98.518616d,0d,21.933331d,-98.555008d,0d,21.911663d,-98.537231d,0d,21.884441d,-98.563904d,0d,21.836666d,-98.521118d,0d,21.851944d,-98.49028d,0d,21.782219d,-98.450836d,0d,21.720554d,-98.525284d,0d,21.728333d,-98.56279d,0d,21.689442d,-98.56279d,0d,21.694721d,-98.612793d,0d,21.608828d,-98.642265d,0d,21.476109d,-98.815567d,0d,21.413887d,-98.810562d,0d,21.309998d,-98.715836d,0d,21.275204d,-98.745834d,0d,21.145832d,-99.290283d,0d,21.101387d,-99.317505d,0d,21.093609d,-99.376404d,0d,21.045277d,-99.345001d,0d,20.925831d,-99.386124d,0d,20.867775d,-99.426392d,0d,20.852219d,-99.478897d,0d,20.72583d,-99.51918d,0d,20.626942d,-99.454178d,0d,20.535553d,-99.246948d,0d,20.455555d,-99.20668d,0d,20.25111d,-99.199448d,0d,20.159164d,-99.351959d,0d,19.968887d,-99.309448d,0d,21.275204d,-98.745834d,0d,21.113888d,-99.20668d,0d,21.145832d,-99.290283d,0d});
  }
}
protected class MFInt32169 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1});
  }
}
protected class MFInt32170 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,-1});
  }
}
protected class MFColor171 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d172 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {30.528889d,-109.573059d,0d,30.308331d,-109.635284d,0d,30.165833d,-109.795013d,0d,30.008053d,-109.782791d,0d,29.961941d,-109.741959d,0d,29.874722d,-109.743622d,0d,29.799999d,-109.681396d,0d,29.533333d,-109.616959d,0d,29.446941d,-109.664169d,0d,29.386108d,-109.651123d,0d,29.355831d,-109.758621d,0d,29.10611d,-109.710854d,0d,28.904055d,-109.619186d,0d});
  }
}
protected class MFInt32173 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1});
  }
}
protected class MFInt32174 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1});
  }
}
protected class MFColor175 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d176 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.035831d,-105.097229d,0d,24.244442d,-105.186951d,0d,24.302776d,-105.151947d,0d,24.359444d,-105.19223d,0d,24.433331d,-105.161118d,0d,24.759998d,-105.327515d,0d,24.818886d,-105.313065d,0d,24.876663d,-105.362793d,0d,25.216389d,-105.448059d,0d,25.544167d,-105.153061d,0d,25.519444d,-105.096954d,0d,25.581944d,-105.006119d,0d,25.584999d,-104.939178d,0d,25.495831d,-104.881668d,0d,25.457497d,-104.892502d,0d,25.312775d,-104.69751d,0d,25.308887d,-104.62001d,0d,25.139164d,-104.5289d,0d,25.126942d,-104.325287d,0d,25.266941d,-104.044174d,0d,25.269722d,-103.728897d,0d,25.449165d,-103.729172d,0d,25.539444d,-103.49501d,0d,25.678055d,-103.349731d,0d,25.691944d,-103.265564d,0d,25.751389d,-103.204178d,0d,25.679996d,-103.039459d,0d,25.692776d,-102.878616d,0d});
  }
}
protected class MFInt32177 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFInt32178 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFColor179 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d180 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.967545d,-108.739258d,0d,28.90583d,-108.709167d,0d,28.820454d,-108.720795d,0d,28.707222d,-108.66362d,0d,28.631664d,-108.5625d,0d,29.540955d,-109.233902d,0d,29.527775d,-109.170837d,0d,29.367222d,-109.011948d,0d,29.376663d,-108.964172d,0d,29.182777d,-108.881393d,0d,29.163887d,-108.806946d,0d,28.967545d,-108.739258d,0d,28.976665d,-108.692505d,0d,29.083611d,-108.703613d,0d,29.184719d,-108.570007d,0d,29.317776d,-108.583344d,0d,29.388332d,-108.485001d,0d,29.384441d,-108.381668d,0d,29.346664d,-108.34639d,0d,29.226387d,-108.348618d,0d,29.0425d,-108.26973d,0d,29.009998d,-108.220001d,0d,28.784721d,-108.09584d,0d,28.773609d,-107.959167d,0d,28.955555d,-107.933334d,0d,29.00972d,-107.862793d,0d,28.906944d,-107.778625d,0d,28.722221d,-107.693893d,0d,28.640831d,-107.505844d,0d,28.295277d,-107.428345d,0d,28.13472d,-107.51918d,0d,28.120831d,-107.623901d,0d,28.182499d,-107.641678d,0d});
  }
}
protected class MFInt32181 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,-1});
  }
}
protected class MFInt32182 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,-1});
  }
}
protected class MFColor183 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d184 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.238052d,-100.26918d,0d,25.137775d,-100.14418d,0d,25.045277d,-100.123901d,0d,25.014164d,-100.029724d,0d,25.038055d,-99.93251d,0d,25.165833d,-99.859726d,0d,25.156666d,-99.800568d,0d,25.25111d,-99.65889d,0d,25.362221d,-99.563614d,0d,25.489719d,-99.529175d,0d,25.494164d,-99.446671d,0d,25.522778d,-99.430283d,0d,25.503609d,-99.358612d,0d,25.536663d,-99.323059d,0d,25.685276d,-99.287506d,0d,25.719166d,-99.218063d,0d,25.781944d,-99.233063d,0d,25.801666d,-99.175568d,0d,26.07333d,-99.188339d,0d,26.056389d,-99.134445d,0d,26.101944d,-99.041946d,0d,26.064442d,-99.003067d,0d,26.112499d,-98.987228d,0d,26.126942d,-98.937225d,0d,26.180832d,-98.958344d,0d,26.200275d,-98.915283d,0d,26.374718d,-98.82196d,0d});
  }
}
protected class MFInt32185 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1});
  }
}
protected class MFInt32186 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1});
  }
}
protected class MFColor187 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d188 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.866386d,-109.414169d,0d,25.838333d,-109.34668d,0d,25.95472d,-109.246399d,0d,25.934719d,-109.129456d,0d,25.958332d,-109.045013d,0d,25.924721d,-108.95668d,0d,26.023888d,-108.880844d,0d,26.09111d,-108.758621d,0d,26.175552d,-108.734451d,0d,26.281666d,-108.779724d,0d,26.34222d,-108.682236d,0d,26.51346d,-108.574432d,0d,26.545555d,-108.520279d,0d,26.64333d,-108.5d,0d,26.824444d,-108.549454d,0d,26.811665d,-108.415009d,0d,26.854721d,-108.356125d,0d,26.920277d,-108.33223d,0d,26.888611d,-108.268616d,0d,26.904442d,-108.193069d,0d,26.877499d,-108.170013d,0d,26.898609d,-108.055847d,0d,26.945274d,-107.993347d,0d,26.891388d,-107.923889d,0d,26.89333d,-107.874176d,0d,26.812496d,-107.788071d,0d,26.718609d,-107.503616d,0d,26.731941d,-107.42778d,0d,26.63858d,-107.260986d,0d,26.674999d,-107.049454d,0d,26.653332d,-106.967514d,0d,26.543053d,-106.827789d,0d,26.473888d,-106.848892d,0d,26.008888d,-106.65889d,0d});
  }
}
protected class MFInt32189 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,-1,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,-1,139,140,141,142,143,144,145,146,-1});
  }
}
protected class MFInt32190 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,-1,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,-1,139,140,141,142,143,144,145,146,-1});
  }
}
protected class MFColor191 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d192 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {31.786207d,-106.538994d,0d,31.786198d,-106.538971d,0d,31.733763d,-106.383041d,0d,31.478128d,-106.212753d,0d,31.393818d,-105.99836d,0d,31.17078d,-105.76973d,0d,31.086428d,-105.603218d,0d,30.998285d,-105.554382d,0d,30.90251d,-105.409065d,0d,30.853081d,-105.390312d,0d,30.816507d,-105.313782d,0d,30.831949d,-105.287598d,0d,30.797653d,-105.258186d,0d,30.812086d,-105.21434d,0d,30.68787d,-105.060562d,0d,30.684334d,-104.997543d,0d,30.641325d,-104.986931d,0d,30.570557d,-104.890678d,0d,30.392263d,-104.852997d,0d,30.376448d,-104.806473d,0d,30.35047d,-104.813957d,0d,30.238489d,-104.702614d,0d,30.148964d,-104.674759d,0d,30.057302d,-104.696495d,0d,29.909283d,-104.67437d,0d,29.807936d,-104.57756d,0d,29.679466d,-104.535248d,0d,29.598488d,-104.436172d,0d,29.550611d,-104.377594d,0d,29.484041d,-104.204735d,0d,29.400715d,-104.164383d,0d,29.328119d,-104.045631d,0d,29.26726d,-103.786995d,0d,29.28124d,-103.767761d,0d,29.229795d,-103.782158d,0d,29.230349d,-103.739853d,0d,29.190632d,-103.720314d,0d,29.146646d,-103.526237d,0d,29.072134d,-103.474075d,0d,29.032108d,-103.37545d,0d,29.050339d,-103.335518d,0d,28.986374d,-103.28035d,0d,29.007454d,-103.266586d,0d,28.978682d,-103.153465d,0d,29.190863d,-102.988098d,0d,29.229036d,-102.866173d,0d,29.269203d,-102.908325d,0d,29.353371d,-102.883011d,0d,29.411844d,-102.822205d,0d,29.530146d,-102.804726d,0d,29.744225d,-102.676361d,0d,29.732338d,-102.637611d,0d,29.778248d,-102.5765d,0d,29.7495d,-102.551949d,0d,29.785456d,-102.503098d,0d,29.767946d,-102.384796d,0d,29.845289d,-102.367561d,0d,29.880116d,-102.324333d,0d,29.784571d,-102.063995d,0d,29.818773d,-101.97332d,0d,29.788502d,-101.924225d,0d,29.814125d,-101.819099d,0d,29.779999d,-101.805206d,0d,29.787167d,-101.759094d,0d,29.75696d,-101.639671d,0d,29.76515d,-101.58149d,0d,29.81012d,-101.543953d,0d,29.763018d,-101.538345d,0d,29.788691d,-101.470467d,0d,29.760586d,-101.448425d,0d,29.769905d,-101.401276d,0d,29.745434d,-101.4161d,0d,29.661259d,-101.370613d,0d,29.657162d,-101.368401d,0d,29.652431d,-101.305862d,0d,29.58091d,-101.308929d,0d,29.62875d,-101.254585d,0d,29.526474d,-101.261429d,0d,29.473553d,-101.06736d,0d,29.373255d,-101.009056d,0d,29.242502d,-100.796989d,0d,29.166571d,-100.768608d,0d,29.080072d,-100.66877d,0d,28.92235d,-100.647224d,0d,28.894222d,-100.58979d,0d,28.660988d,-100.49791d,0d,28.589733d,-100.403175d,0d,28.544191d,-100.419533d,0d,28.500811d,-100.345802d,0d,28.478651d,-100.37677d,0d,28.394182d,-100.35157d,0d,28.32036d,-100.292892d,0d,28.280354d,-100.29792d,0d,28.241457d,-100.223465d,0d,28.201935d,-100.214073d,0d,28.154282d,-100.096924d,0d,28.00346d,-99.993309d,0d,27.986881d,-99.941856d,0d,27.797686d,-99.874733d,0d,27.780107d,-99.815727d,0d,27.661558d,-99.714493d,0d,27.612627d,-99.549187d,0d,27.504284d,-99.526741d,0d,27.490755d,-99.490494d,0d,27.318653d,-99.543587d,0d,27.269884d,-99.465271d,0d,27.199198d,-99.437157d,0d,27.028648d,-99.455063d,0d,26.99555d,-99.392715d,0d,26.94663d,-99.390518d,0d,26.857361d,-99.285522d,0d,26.855658d,-99.28479d,0d,26.374718d,-98.82196d,0d,26.375071d,-98.819832d,0d,26.242056d,-98.677917d,0d,26.260454d,-98.599968d,0d,26.201544d,-98.488518d,0d,26.220911d,-98.453392d,0d,26.156031d,-98.384521d,0d,26.15868d,-98.347191d,0d,26.111647d,-98.327934d,0d,26.132809d,-98.292274d,0d,26.120895d,-98.271355d,0d,26.098104d,-98.291946d,0d,26.055376d,-98.200691d,0d,26.065758d,-98.083214d,0d,26.034626d,-98.076347d,0d,26.059395d,-98.04007d,0d,26.060141d,-97.867432d,0d,26.023445d,-97.647972d,0d,25.962002d,-97.612923d,0d,25.954172d,-97.574936d,0d,25.933231d,-97.590088d,0d,25.845198d,-97.434349d,0d,25.845362d,-97.385643d,0d,25.917021d,-97.380989d,0d,25.938663d,-97.304436d,0d,25.965124d,-97.307144d,0d,25.954569d,-97.172226d,0d,26.855658d,-99.28479d,0d,26.579889d,-99.165817d,0d,26.545729d,-99.168678d,0d,26.48834d,-99.101471d,0d,26.419531d,-99.106728d,0d,26.395309d,-98.93927d,0d,26.360329d,-98.908897d,0d,26.374718d,-98.82196d,0d});
  }
}
protected class MFInt32193 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1});
  }
}
protected class MFInt32194 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1});
  }
}
protected class MFColor195 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d196 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.313457d,-102.776718d,0d,20.25972d,-102.72084d,0d,20.196892d,-102.7724d,0d,21.202572d,-104.078079d,0d,21.148609d,-104.049454d,0d,21.086388d,-103.884171d,0d,21.006107d,-103.882507d,0d,20.933887d,-103.771393d,0d,20.926941d,-103.650284d,0d,20.996944d,-103.526398d,0d,21.049721d,-103.517227d,0d,21.054996d,-103.429459d,0d,20.735275d,-103.277786d,0d,20.617775d,-103.13501d,0d,20.456108d,-103.159729d,0d,20.407219d,-103.100281d,0d,20.388332d,-102.80806d,0d,20.349442d,-102.767792d,0d,20.313457d,-102.776718d,0d,20.339996d,-103.029449d,0d,20.280552d,-103.171112d,0d,20.282776d,-103.362793d,0d,20.254444d,-103.425842d,0d,20.161388d,-103.173889d,0d,20.195553d,-103.055847d,0d,20.167774d,-102.899437d,0d,20.103886d,-102.810013d,0d,20.169167d,-102.686684d,0d,20.200832d,-102.692497d,0d,20.196892d,-102.7724d,0d});
  }
}
protected class MFInt32197 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFInt32198 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,-1});
  }
}
protected class MFColor199 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d200 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.91333d,-102.473892d,0d,28.916664d,-102.401947d,0d,28.875275d,-102.353897d,0d,28.651665d,-102.258347d,0d,28.613331d,-102.121948d,0d,28.560276d,-102.083069d,0d,28.539444d,-101.925842d,0d,28.46833d,-101.850845d,0d,28.362778d,-101.601959d,0d,28.201111d,-101.488617d,0d,28.15583d,-101.367233d,0d,27.967499d,-101.311951d,0d,27.96833d,-101.25029d,0d,27.847221d,-101.131119d,0d,27.817219d,-101.051682d,0d,27.695831d,-100.951126d,0d,27.631386d,-100.71167d,0d,27.549442d,-100.71167d,0d,27.499443d,-100.661118d,0d,27.52972d,-100.61557d,0d,27.481941d,-100.498611d,0d,27.314442d,-100.342224d,0d,27.238888d,-100.128067d,0d,27.178608d,-100.090836d,0d,27.16861d,-99.969452d,0d,27.13472d,-99.951126d,0d,27.058331d,-99.99501d,0d,27.003609d,-99.958618d,0d,26.964996d,-99.858063d,0d,26.899719d,-99.854736d,0d,26.899166d,-99.633896d,0d,26.779999d,-99.463348d,0d,26.855658d,-99.28479d,0d});
  }
}
protected class MFInt32201 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1});
  }
}
protected class MFInt32202 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1});
  }
}
protected class MFColor203 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d204 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.202572d,-104.078079d,0d,21.287777d,-103.961395d,0d,21.359722d,-103.955841d,0d,21.531109d,-103.850845d,0d,21.738609d,-103.776123d,0d,21.928055d,-103.790848d,0d,22.018887d,-103.701675d,0d,22.121422d,-103.680511d,0d,22.217499d,-103.741669d,0d,22.396111d,-103.726959d,0d,22.469166d,-103.675842d,0d,22.60611d,-103.675293d,0d,22.708332d,-103.568619d,0d,22.887497d,-103.481125d,0d,22.974442d,-103.456955d,0d,23.013332d,-103.496948d,0d,21.673054d,-105.448334d,0d,21.679996d,-105.362228d,0d,21.722775d,-105.313614d,0d,21.707222d,-105.286118d,0d,21.75d,-105.271393d,0d,21.728886d,-105.234726d,0d,21.799164d,-105.217514d,0d,21.804996d,-105.063606d,0d,21.72583d,-105.013062d,0d,21.778889d,-104.833069d,0d,21.82333d,-104.814453d,0d,21.853054d,-104.730286d,0d,21.71611d,-104.621399d,0d,21.475277d,-104.516953d,0d,21.471943d,-104.45723d,0d,21.269165d,-104.326401d,0d,21.24472d,-104.263062d,0d,21.177776d,-104.227509d,0d,21.202572d,-104.078079d,0d});
  }
}
protected class MFInt32205 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,14,15,16,17,18,-1,19,20,21,22,23,24,25,-1,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,-1});
  }
}
protected class MFInt32206 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,14,15,16,17,18,-1,19,20,21,22,23,24,25,-1,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,-1});
  }
}
protected class MFColor207 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d208 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.338375d,-96.647049d,0d,18.340832d,-96.589737d,0d,18.402775d,-96.686951d,0d,18.419998d,-96.567505d,0d,18.381664d,-96.537231d,0d,18.373055d,-96.601395d,0d,18.315552d,-96.463058d,0d,18.236664d,-96.39666d,0d,18.338375d,-96.647049d,0d,18.303055d,-96.604446d,0d,18.297222d,-96.641953d,0d,18.196663d,-96.601959d,0d,18.12833d,-96.50528d,0d,18.160275d,-96.425003d,0d,18.092777d,-96.40918d,0d,18.173611d,-96.385834d,0d,18.224442d,-96.433624d,0d,18.194721d,-96.358902d,0d,18.236664d,-96.39666d,0d,18.643608d,-96.966675d,0d,18.674442d,-96.901947d,0d,18.584442d,-96.858337d,0d,18.543331d,-96.790558d,0d,18.473053d,-96.784454d,0d,18.384998d,-96.726395d,0d,18.338375d,-96.647049d,0d,18.236664d,-96.39666d,0d,18.300278d,-96.327515d,0d,18.213797d,-96.236572d,0d,18.180269d,-96.205292d,0d,18.185551d,-96.161392d,0d,18.14167d,-96.150284d,0d,18.16408d,-96.09465d,0d,18.162281d,-96.085342d,0d,18.177498d,-96.06723d,0d,18.16111d,-96.035278d,0d,18.219166d,-96.024445d,0d,18.186665d,-95.998337d,0d,18.256386d,-95.982513d,0d,18.218609d,-95.95723d,0d,18.25d,-95.944733d,0d,18.236942d,-95.899734d,0d,18.265831d,-95.908066d,0d,18.32222d,-95.811401d,0d,18.370831d,-95.803345d,0d,18.314442d,-95.751404d,0d,18.368332d,-95.76001d,0d,18.379997d,-95.709732d,0d,18.546665d,-95.724731d,0d,18.60083d,-95.696671d,0d,18.600555d,-95.66362d,0d,18.641388d,-95.631958d,0d,18.698055d,-95.638901d,0d});
  }
}
protected class MFInt32209 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1});
  }
}
protected class MFInt32210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1});
  }
}
protected class MFColor211 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d212 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {31.221386d,-110.494736d,0d,31.168331d,-110.463348d,0d,31.082497d,-110.476395d,0d,31.004444d,-110.568344d,0d,30.809444d,-110.703613d,0d,30.693886d,-110.669174d,0d,30.22361d,-110.720001d,0d,29.821388d,-110.579178d,0d,29.601387d,-110.554459d,0d,29.514442d,-110.726959d,0d,29.295277d,-110.859451d,0d,29.190552d,-110.859726d,0d,29.074791d,-110.919052d,0d,29.116108d,-111.072784d,0d,29.102776d,-111.170837d,0d,28.902222d,-111.480011d,0d,28.881107d,-111.635834d,0d,28.791664d,-111.782501d,0d,28.798885d,-111.854446d,0d});
  }
}
protected class MFInt32213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1});
  }
}
protected class MFInt32214 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,-1});
  }
}
protected class MFColor215 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d216 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.600555d,-95.66362d,0d,18.513054d,-95.585556d,0d,18.429443d,-95.587509d,0d,18.359165d,-95.531952d,0d,18.235554d,-95.508621d,0d,18.257774d,-95.471115d,0d,18.176666d,-95.417236d,0d,18.104721d,-95.239731d,0d,18.037498d,-95.236679d,0d,17.941666d,-95.141678d,0d,17.819878d,-95.156845d,0d,17.793053d,-95.121948d,0d,17.745277d,-95.122223d,0d,17.621666d,-95.249176d,0d,17.504997d,-95.302505d,0d,17.43861d,-95.414734d,0d,17.396111d,-95.582504d,0d,17.217777d,-95.719727d,0d,17.18111d,-95.710556d,0d,17.174721d,-95.756119d,0d,17.114166d,-95.80751d,0d,17.013054d,-95.834457d,0d,17.019165d,-95.965012d,0d});
  }
}
protected class MFInt32217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1});
  }
}
protected class MFInt32218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1});
  }
}
protected class MFColor219 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d220 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.93861d,-99.982788d,0d,24.004166d,-99.796112d,0d,24.110832d,-99.818619d,0d,24.156387d,-99.776398d,0d,24.134441d,-99.697784d,0d,24.176388d,-99.639175d,0d,24.139999d,-99.560013d,0d,24.171387d,-99.506119d,0d,24.148052d,-99.422501d,0d,24.189442d,-99.336395d,0d,24.170555d,-99.285278d,0d,24.117222d,-99.279449d,0d,24.083885d,-99.190292d,0d,24.066666d,-98.95668d,0d,24.020554d,-98.772507d,0d,23.965832d,-98.686401d,0d,23.991386d,-98.621124d,0d,23.937222d,-98.587234d,0d,23.968887d,-98.514725d,0d,23.916943d,-98.483902d,0d,23.968887d,-98.482788d,0d,23.962219d,-98.4375d,0d,24.014721d,-98.424728d,0d,24.052498d,-98.362793d,0d,23.986664d,-98.260559d,0d,23.838333d,-98.204178d,0d,23.802776d,-98.24501d,0d,23.716942d,-98.193344d,0d,23.776665d,-98.162781d,0d,23.722778d,-98.042526d,0d,23.792221d,-97.980835d,0d,23.783928d,-97.817978d,0d});
  }
}
protected class MFInt32221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,-1,23,24,25,26,-1,27,28,29,30,31,-1});
  }
}
protected class MFInt32222 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,-1,23,24,25,26,-1,27,28,29,30,31,-1});
  }
}
protected class MFColor223 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d224 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.705862d,-106.484642d,0d,24.730553d,-106.404449d,0d,24.8475d,-106.275848d,0d,24.851944d,-106.168335d,0d,25.015274d,-106.00473d,0d,24.705862d,-106.484642d,0d,24.631107d,-106.392792d,0d,24.654163d,-106.333618d,0d,24.592499d,-106.190292d,0d,24.525555d,-106.128616d,0d,24.57222d,-105.845001d,0d,24.254166d,-107.417786d,0d,24.299999d,-107.400284d,0d,24.37722d,-107.269455d,0d,24.44611d,-107.102234d,0d,24.458332d,-106.940567d,0d,24.491386d,-106.95195d,0d,24.528889d,-106.890289d,0d,24.527222d,-106.803345d,0d,24.59861d,-106.781677d,0d,24.629997d,-106.705841d,0d,24.658607d,-106.71167d,0d,24.705862d,-106.484642d,0d,24.57222d,-105.845001d,0d,24.708611d,-105.785278d,0d,24.779163d,-105.788895d,0d,24.951385d,-105.887222d,0d,24.57222d,-105.845001d,0d,24.643055d,-105.725006d,0d,24.630833d,-105.619171d,0d,24.538055d,-105.573898d,0d,24.548332d,-105.476669d,0d});
  }
}
protected class MFInt32225 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1});
  }
}
protected class MFInt32226 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,-1});
  }
}
protected class MFColor227 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d228 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.192497d,-104.65889d,0d,24.196941d,-104.609177d,0d,24.12833d,-104.583344d,0d,24.084721d,-104.445282d,0d,24.025276d,-104.398895d,0d,24.029442d,-104.329453d,0d,23.93222d,-104.308624d,0d,23.881386d,-104.258896d,0d,23.791111d,-104.290848d,0d,23.72472d,-104.245285d,0d,23.633331d,-104.339737d,0d,23.21722d,-104.474731d,0d,23.184719d,-104.534454d,0d,23.168888d,-104.743347d,0d,23.112221d,-104.796112d,0d,23.020554d,-105.008057d,0d,22.84972d,-105.001114d,0d,22.821941d,-104.921677d,0d,22.741386d,-104.89418d,0d,22.679996d,-104.918625d,0d,22.584442d,-104.881393d,0d,22.50333d,-104.925003d,0d,22.49472d,-104.999176d,0d,22.434166d,-105.040558d,0d,22.324718d,-105.036957d,0d,22.079998d,-104.920837d,0d,21.969166d,-104.947235d,0d,21.945274d,-104.980011d,0d,21.980274d,-105.056122d,0d,21.937222d,-105.085846d,0d,21.972775d,-105.118622d,0d,21.933609d,-105.408066d,0d,21.841473d,-105.464523d,0d,21.815926d,-105.527229d,0d});
  }
}
protected class MFInt32229 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFInt32230 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFColor231 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d232 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.755833d,-100.960556d,0d,21.843052d,-100.901123d,0d,21.898052d,-100.814728d,0d,21.867775d,-100.750839d,0d,21.803886d,-100.725006d,0d,21.75861d,-100.532227d,0d,21.679996d,-100.411118d,0d,21.639164d,-100.267792d,0d,21.467777d,-100.051117d,0d,21.456944d,-99.867157d,0d,21.511387d,-99.726959d,0d,21.48d,-99.646118d,0d,21.318333d,-99.49501d,0d,21.166664d,-99.42334d,0d,21.145832d,-99.290283d,0d});
  }
}
protected class MFInt32233 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1});
  }
}
protected class MFInt32234 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1});
  }
}
protected class MFColor235 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d236 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.64571d,-99.198563d,0d,21.678055d,-99.165009d,0d,21.709442d,-99.181396d,0d,21.811665d,-99.140015d,0d,21.816944d,-98.996948d,0d,21.84222d,-99.000565d,0d,21.831665d,-98.965561d,0d,21.859444d,-98.955292d,0d,21.853054d,-98.818893d,0d,21.942497d,-98.813614d,0d,21.922775d,-98.758347d,0d,21.988331d,-98.75d,0d,22.002499d,-98.627502d,0d,21.97526d,-98.588562d,0d});
  }
}
protected class MFInt32237 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1});
  }
}
protected class MFInt32238 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,-1});
  }
}
protected class MFColor239 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d240 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.998055d,-92.186401d,0d,16.885277d,-92.060562d,0d,16.888885d,-91.985291d,0d,16.836109d,-91.89917d,0d,16.828331d,-91.819458d,0d,16.869442d,-91.808624d,0d,16.874443d,-91.760834d,0d,16.77972d,-91.621674d,0d,16.705555d,-91.576126d,0d,16.575832d,-91.574448d,0d,16.523888d,-91.531403d,0d,16.484722d,-91.418335d,0d,16.424721d,-91.400009d,0d,16.38472d,-91.338898d,0d,16.321941d,-91.340836d,0d,16.308052d,-91.305557d,0d,16.242496d,-91.289459d,0d,16.207222d,-91.200836d,0d,16.144279d,-91.147797d,0d});
  }
}
protected class MFInt32241 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,-1,55,56,57,58,59,-1});
  }
}
protected class MFInt32242 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,-1,55,56,57,58,59,-1});
  }
}
protected class MFColor243 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d244 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.656666d,-92.480835d,0d,18.493053d,-92.410278d,0d,18.406666d,-92.275558d,0d,18.327221d,-92.276947d,0d,18.224968d,-92.217453d,0d,18.11861d,-92.184448d,0d,18.088486d,-92.121872d,0d,18.00222d,-92.140839d,0d,17.963055d,-92.116394d,0d,17.91194d,-91.990211d,0d,17.91222d,-91.989899d,0d,17.89555d,-91.950562d,0d,17.854719d,-91.945557d,0d,17.88722d,-91.912514d,0d,17.88916d,-91.823334d,0d,17.855551d,-91.786667d,0d,17.773689d,-91.772873d,0d,17.726669d,-91.793617d,0d,17.714161d,-91.698624d,0d,17.714056d,-91.69857d,0d,17.738331d,-91.620285d,0d,17.771664d,-91.657501d,0d,17.781387d,-91.62056d,0d,17.826664d,-91.616119d,0d,17.81361d,-91.569168d,0d,17.746944d,-91.551956d,0d,17.802498d,-91.513626d,0d,17.76083d,-91.479446d,0d,17.764954d,-91.424698d,0d,17.700832d,-91.452515d,0d,17.702499d,-91.376114d,0d,17.642498d,-91.402786d,0d,17.591389d,-91.357788d,0d,17.565277d,-91.406403d,0d,17.583332d,-91.511124d,0d,17.488331d,-91.430557d,0d,17.486111d,-91.504456d,0d,17.469774d,-91.507561d,0d,17.40416d,-91.496117d,0d,17.38694d,-91.426392d,0d,17.32666d,-91.388062d,0d,17.241108d,-91.4375d,0d,17.176388d,-91.352783d,0d,17.178333d,-91.277237d,0d,17.035553d,-91.184448d,0d,17.010277d,-91.118347d,0d,16.902775d,-91.06279d,0d,16.868053d,-90.98584d,0d,16.903053d,-90.983337d,0d,16.899166d,-90.955292d,0d,16.871944d,-90.966125d,0d,16.82972d,-90.921112d,0d,16.804996d,-90.803345d,0d,16.72646d,-90.714279d,0d,16.644274d,-90.658142d,0d,18.088486d,-92.121872d,0d,18.121666d,-92.08168d,0d,18.237778d,-92.084732d,0d,18.355d,-91.901123d,0d,18.429165d,-91.857788d,0d});
  }
}
protected class MFInt32245 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1});
  }
}
protected class MFInt32246 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1});
  }
}
protected class MFColor247 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec3d248 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.904055d,-109.619186d,0d,28.75222d,-109.636673d,0d,28.600277d,-109.552505d,0d,28.53083d,-109.550568d,0d,28.534164d,-109.521393d,0d,28.46833d,-109.520004d,0d,28.173611d,-109.68251d,0d,28.143055d,-109.798065d,0d,28.168331d,-109.83223d,0d,28.1325d,-109.878891d,0d,27.989719d,-109.789726d,0d,27.942497d,-109.802231d,0d,27.90583d,-109.870827d,0d,27.958611d,-109.917793d,0d,27.834181d,-109.894508d,0d,27.637775d,-109.922226d,0d,27.5425d,-110.113068d,0d,27.571663d,-110.131393d,0d,27.594166d,-110.29834d,0d,27.641941d,-110.369446d,0d,27.592499d,-110.463348d,0d,27.657776d,-110.599167d,0d});
  }
}
protected class MFInt32249 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,-1,75,76,77,78,79,80,81,82,83,84,-1});
  }
}
protected class MFInt32250 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,-1,75,76,77,78,79,80,81,82,83,84,-1});
  }
}
protected class MFColor251 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d252 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {32.43959d,-116.885757d,0d,32.543209d,-117.03643d,0d,31.896618d,-116.385307d,0d,31.968904d,-116.444038d,0d,32.305485d,-116.830315d,0d,32.431988d,-116.882271d,0d,32.43959d,-116.885757d,0d,23.870314d,-110.237244d,0d,24.143749d,-110.315926d,0d,24.093601d,-110.377701d,0d,24.117935d,-110.467201d,0d,24.052151d,-110.573074d,0d,24.093901d,-110.642754d,0d,24.088165d,-110.721504d,0d,24.143246d,-110.78701d,0d,24.161293d,-110.918495d,0d,24.362677d,-111.021622d,0d,24.58708d,-111.46447d,0d,25.249636d,-111.774185d,0d,25.387354d,-111.563606d,0d,25.579559d,-111.400673d,0d,25.673662d,-111.243713d,0d,25.814568d,-111.356651d,0d,25.999163d,-111.371185d,0d,26.063721d,-111.367966d,0d,26.311281d,-111.521507d,0d,26.50771d,-111.686951d,0d,26.538803d,-111.755272d,0d,26.724468d,-111.932243d,0d,26.847898d,-111.907677d,0d,26.917139d,-112.026085d,0d,27.144161d,-112.155815d,0d,27.192501d,-112.225853d,0d,27.295702d,-112.282539d,0d,27.390583d,-112.320915d,0d,27.414722d,-112.62645d,0d,27.319918d,-112.801674d,0d,27.297045d,-113.058197d,0d,27.42931d,-113.262093d,0d,27.658258d,-113.385422d,0d,27.724733d,-113.453476d,0d,27.908989d,-113.878326d,0d,28.058762d,-113.879868d,0d,28.385597d,-113.814224d,0d,28.508675d,-113.892174d,0d,28.678246d,-114.001579d,0d,28.805994d,-114.105667d,0d,28.827322d,-114.105751d,0d,28.92938d,-114.156456d,0d,29.236906d,-114.152481d,0d,29.383621d,-114.38102d,0d,29.721819d,-114.676506d,0d,29.734533d,-114.727013d,0d,29.894936d,-114.87886d,0d,29.965479d,-115.167435d,0d,30.060726d,-115.28833d,0d,30.06834d,-115.430153d,0d,30.135904d,-115.406448d,0d,30.147312d,-115.426849d,0d,30.151155d,-115.574112d,0d,30.306892d,-115.639229d,0d,30.314381d,-115.647255d,0d,30.369352d,-115.829399d,0d,30.388498d,-115.861313d,0d,30.773729d,-115.918274d,0d,30.857912d,-115.934517d,0d,31.09864d,-116.119125d,0d,31.143026d,-116.125931d,0d,31.268017d,-116.177338d,0d,31.392353d,-116.319237d,0d,31.499413d,-116.355293d,0d,31.569332d,-116.3881d,0d,31.691055d,-116.416931d,0d,31.822073d,-116.394341d,0d,31.896618d,-116.385307d,0d,23.870314d,-110.237244d,0d,23.81599d,-110.036758d,0d,23.700369d,-109.877739d,0d,23.691715d,-109.698799d,0d,23.485506d,-109.668381d,0d,23.409185d,-109.53965d,0d,23.316252d,-109.490097d,0d,23.295511d,-109.43187d,0d,23.140821d,-109.52449d,0d,23.070078d,-109.673195d,0d});
  }
}
protected class MFInt32253 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFInt32254 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1});
  }
}
protected class MFColor255 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d256 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {32.43959d,-116.885757d,0d,32.470196d,-116.731171d,0d,32.571735d,-116.622414d,0d,32.568512d,-116.486961d,0d,32.473213d,-116.132484d,0d,32.547771d,-116.030319d,0d,32.572636d,-116.036514d,0d,32.542397d,-115.996605d,0d,32.599739d,-115.664093d,0d,32.596684d,-115.577354d,0d,32.616192d,-115.441002d,0d,30.54118d,-111.112427d,0d,30.679808d,-110.888161d,0d,30.784163d,-110.853111d,0d,32.616192d,-115.441002d,0d,32.551559d,-115.281265d,0d,32.519333d,-115.001297d,0d,32.272617d,-114.12458d,0d,32.129677d,-113.887253d,0d,31.887037d,-112.859627d,0d,31.723276d,-112.86525d,0d,31.270943d,-112.515839d,0d,30.969397d,-112.363396d,0d,30.730307d,-112.168503d,0d,30.680529d,-112.055031d,0d,30.711977d,-111.829559d,0d,30.598764d,-111.557106d,0d,30.54118d,-111.112427d,0d,30.784163d,-110.853111d,0d,30.898882d,-110.704315d,0d,30.877583d,-110.644997d,0d,30.997288d,-110.561745d,0d,31.015898d,-110.204285d,0d,31.066158d,-110.124832d,0d,31.15984d,-110.077156d,0d,31.184343d,-109.950241d,0d,31.26931d,-109.816849d,0d,31.268726d,-109.71904d,0d,31.322495d,-109.556908d,0d,31.229496d,-109.381332d,0d,31.126078d,-109.354744d,0d,31.078344d,-109.297218d,0d,30.825306d,-109.223557d,0d,30.861403d,-109.150322d,0d,30.732306d,-109.057899d,0d,30.745899d,-109.006844d,0d,30.788086d,-109.010605d,0d,30.901699d,-108.930893d,0d,30.756287d,-108.384811d,0d,30.870306d,-108.273994d,0d,30.924532d,-108.144119d,0d,31.035378d,-108.136757d,0d,31.171463d,-107.892174d,0d,31.29974d,-107.777931d,0d,31.383419d,-107.745422d,0d,31.38299d,-107.62738d,0d,31.480352d,-107.305252d,0d,31.623533d,-106.899857d,0d,31.671961d,-106.856094d,0d,31.714188d,-106.593849d,0d,31.648981d,-106.430351d,0d});
  }
}
protected class MFInt32257 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,6,7,8,9,-1});
  }
}
protected class MFInt32258 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,6,7,8,9,-1});
  }
}
protected class MFColor259 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d260 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {32.663681d,-115.48423d,0d,32.616192d,-115.441002d,0d,31.094307d,-114.994446d,0d,31.459946d,-115.06958d,0d,31.725409d,-115.134689d,0d,32d,-115.227364d,0d,32.152256d,-115.30188d,0d,32.179638d,-115.315277d,0d,32.364883d,-115.336418d,0d,32.616192d,-115.441002d,0d});
  }
}
protected class MFInt32261 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,-1,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,-1,103,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1});
  }
}
protected class MFInt32262 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,3,4,5,6,-1,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,24,25,26,27,28,29,30,31,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,-1,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,-1,103,104,105,106,107,-1,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1});
  }
}
protected class MFColor263 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d264 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {30.54118d,-111.112427d,0d,30.679808d,-110.888161d,0d,30.784163d,-110.853111d,0d,31.33567d,-110.940628d,0d,31.20158d,-110.975006d,0d,30.956421d,-110.850159d,0d,30.784163d,-110.853111d,0d,23.224892d,-106.168228d,0d,23.187336d,-106.129333d,0d,23.161917d,-106.092873d,0d,22.985418d,-105.844131d,0d,22.836628d,-105.792519d,0d,22.703089d,-105.604469d,0d,22.567677d,-105.592606d,0d,22.498989d,-105.366966d,0d,22.120592d,-105.212959d,0d,21.944927d,-105.218536d,0d,21.832077d,-105.119667d,0d,21.676146d,-105.053596d,0d,21.639311d,-104.977318d,0d,21.493214d,-104.892281d,0d,20.275204d,-103.450874d,0d,20.221594d,-103.424881d,0d,20.140547d,-103.171112d,0d,20.1667d,-103.040405d,0d,20.144951d,-102.878304d,0d,20.095583d,-102.831764d,0d,20.064245d,-102.719322d,0d,19.989132d,-102.718239d,0d,20.023218d,-102.552696d,0d,19.954714d,-102.422874d,0d,19.957161d,-102.315712d,0d,19.990507d,-102.289902d,0d,19.863182d,-102.184608d,0d,19.799131d,-101.790466d,0d,25.472294d,-108.098274d,0d,25.495544d,-108.300308d,0d,25.816797d,-108.819824d,0d,25.808027d,-108.980591d,0d,25.957237d,-109.055954d,0d,26.020258d,-109.017097d,0d,26.024868d,-109.018288d,0d,26.279146d,-108.841064d,0d,26.492893d,-108.964241d,0d,26.810253d,-109.358795d,0d,26.944801d,-109.431816d,0d,27.104483d,-109.450546d,0d,27.481644d,-109.932358d,0d,27.590359d,-109.920486d,0d,27.617018d,-109.957748d,0d,27.599201d,-110.088982d,0d,27.642542d,-110.295845d,0d,27.750015d,-110.282951d,0d,27.87319d,-110.362656d,0d,27.952892d,-110.543793d,0d,28.036219d,-110.851738d,0d,28.098986d,-110.964722d,0d,28.279699d,-111.039276d,0d,28.524342d,-111.050034d,0d,28.817974d,-110.957779d,0d,29.039721d,-110.95871d,0d,29.035095d,-110.840439d,0d,29.105139d,-110.83593d,0d,29.14016d,-110.861412d,0d,29.114822d,-110.915421d,0d,29.808159d,-111.058899d,0d,29.913309d,-111.115501d,0d,30.42905d,-111.089874d,0d,30.54118d,-111.112427d,0d,23.224892d,-106.168228d,0d,23.227858d,-106.171303d,0d,23.374748d,-106.286354d,0d,23.408033d,-106.322533d,0d,23.649204d,-106.586037d,0d,23.871372d,-106.623314d,0d,23.89245d,-106.684471d,0d,24.100832d,-106.838203d,0d,24.166582d,-107.010742d,0d,24.296494d,-107.091942d,0d,24.450788d,-107.09758d,0d,24.67161d,-107.290001d,0d,19.799131d,-101.790466d,0d,19.62435d,-101.472679d,0d,19.704283d,-101.231194d,0d,19.687668d,-101.021667d,0d,19.647865d,-100.963089d,0d,19.682077d,-100.837311d,0d,19.629675d,-100.788612d,0d,19.670914d,-100.731392d,0d,19.627232d,-100.706406d,0d,19.582884d,-100.726334d,0d,19.512527d,-100.679329d,0d,19.439211d,-100.551018d,0d,19.452835d,-100.496826d,0d,19.491589d,-100.49028d,0d,19.496439d,-100.377029d,0d,19.426846d,-100.348625d,0d,19.45434d,-100.281395d,0d,19.399708d,-100.079399d,0d,19.424067d,-99.874313d,0d,19.288778d,-99.715317d,0d,19.302246d,-99.359688d,0d,19.41357d,-99.19352d,0d,24.67161d,-107.290001d,0d,24.990499d,-107.567886d,0d,25.224886d,-107.889015d,0d,25.335003d,-107.943054d,0d,25.472294d,-108.098274d,0d,21.493214d,-104.892281d,0d,21.355833d,-104.698128d,0d,21.302744d,-104.662804d,0d,21.198561d,-104.655235d,0d,21.062811d,-104.535851d,0d,21.023954d,-104.389977d,0d,21.078365d,-104.230293d,0d,20.915455d,-103.974144d,0d,20.921545d,-103.838478d,0d,20.890976d,-103.841148d,0d,20.869661d,-103.769577d,0d,20.752672d,-103.645012d,0d,20.718145d,-103.491615d,0d,20.661514d,-103.401123d,0d,20.424953d,-103.551392d,0d,20.275204d,-103.450874d,0d});
  }
}
protected class MFInt32265 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,-1});
  }
}
protected class MFInt32266 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,-1});
  }
}
protected class MFColor267 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d268 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.070078d,-109.673195d,0d,22.997831d,-109.717316d,0d,22.94335d,-109.79332d,0d,23.056536d,-109.881607d,0d,23.376068d,-109.981598d,0d,23.454323d,-110.033768d,0d,23.637312d,-110.212059d,0d,23.870314d,-110.237244d,0d});
  }
}
protected class MFInt32269 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFInt32270 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFColor271 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d272 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.799131d,-101.790466d,0d,19.724541d,-101.84362d,0d,19.579763d,-101.834503d,0d,19.491081d,-101.875458d,0d,19.462227d,-102.008812d,0d,19.39884d,-102.060547d,0d,19.086586d,-102.06324d,0d,18.82872d,-102.142357d,0d,18.729322d,-102.250862d,0d,18.460737d,-102.082695d,0d,18.445805d,-102.115463d,0d,18.420746d,-102.107101d,0d,18.356106d,-102.290848d,0d,18.217785d,-102.256866d,0d,18.144608d,-102.280098d,0d});
  }
}
protected class MFInt32273 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,-1});
  }
}
protected class MFInt32274 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,-1,42,43,44,45,46,47,48,49,50,51,52,53,-1});
  }
}
protected class MFColor275 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d276 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.024342d,-104.660835d,0d,24.032331d,-104.650497d,0d,24.091698d,-104.5737d,0d,24.139606d,-104.594421d,0d,24.225914d,-104.472549d,0d,24.366438d,-104.376244d,0d,24.498625d,-104.027138d,0d,24.586128d,-103.924782d,0d,24.731934d,-103.84362d,0d,24.781229d,-103.739624d,0d,24.856518d,-103.700005d,0d,24.934017d,-103.708008d,0d,25.026827d,-103.771454d,0d,25.104204d,-103.766754d,0d,25.194582d,-103.697754d,0d,25.237925d,-103.61747d,0d,25.479076d,-103.686096d,0d,25.586136d,-103.49382d,0d,25.423786d,-100.985268d,0d,25.5767d,-100.902924d,0d,25.693258d,-100.642288d,0d,25.695953d,-100.521721d,0d,25.645479d,-100.424919d,0d,25.661518d,-100.315491d,0d,23.224892d,-106.168228d,0d,23.32909d,-105.986488d,0d,23.431519d,-105.904549d,0d,23.467356d,-105.925484d,0d,23.532267d,-105.849083d,0d,23.546982d,-105.871788d,0d,23.563587d,-105.837318d,0d,23.632105d,-105.842552d,0d,23.642336d,-105.757652d,0d,23.734167d,-105.670197d,0d,23.750202d,-105.520332d,0d,23.725809d,-105.484245d,0d,23.863384d,-105.242661d,0d,23.881601d,-105.025124d,0d,23.852272d,-104.991249d,0d,23.933325d,-104.943947d,0d,23.93771d,-104.852753d,0d,24.024342d,-104.660835d,0d,25.586136d,-103.49382d,0d,25.767546d,-103.327164d,0d,25.785414d,-103.113213d,0d,25.756607d,-102.967339d,0d,25.628334d,-102.874825d,0d,25.582762d,-102.712219d,0d,25.679468d,-102.414024d,0d,25.647137d,-102.007973d,0d,25.665314d,-101.564018d,0d,25.445992d,-101.297379d,0d,25.457779d,-101.044319d,0d,25.423786d,-100.985268d,0d});
  }
}
protected class MFInt32277 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,-1,40,41,42,43,44,45,46,-1,47,48,49,50,51,52,-1,53,54,55,56,57,58,59,60,61,62,63,64,65,-1,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,-1,85,86,87,88,89,-1,90,91,-1,92,93,-1,94,95,-1});
  }
}
protected class MFInt32278 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,21,22,23,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,-1,37,38,39,-1,40,41,42,43,44,45,46,-1,47,48,49,50,51,52,-1,53,54,55,56,57,58,59,60,61,62,63,64,65,-1,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,-1,85,86,87,88,89,-1,90,91,-1,92,93,-1,94,95,-1});
  }
}
protected class MFColor279 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d280 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {30.375763d,-106.528961d,0d,29.96657d,-106.356911d,0d,29.863655d,-106.38707d,0d,29.562792d,-106.321785d,0d,29.533701d,-106.375275d,0d,29.435904d,-106.419907d,0d,29.030767d,-106.332344d,0d,28.852625d,-106.211212d,0d,28.7859d,-106.205513d,0d,28.627302d,-106.052208d,0d,28.588751d,-105.962372d,0d,28.517448d,-105.934052d,0d,28.447113d,-105.714027d,0d,28.273399d,-105.487144d,0d,28.24509d,-105.364212d,0d,28.175879d,-105.364128d,0d,28.086439d,-105.288208d,0d,27.980944d,-105.290298d,0d,27.85368d,-105.192032d,0d,27.671978d,-105.1586d,0d,27.616222d,-105.108162d,0d,30.91466d,-106.461983d,0d,30.751783d,-106.516068d,0d,30.375763d,-106.528961d,0d,24.024342d,-104.660835d,0d,23.994865d,-104.37262d,0d,23.899738d,-104.338875d,0d,23.842047d,-104.238251d,0d,23.837915d,-104.163452d,0d,23.751865d,-104.043961d,0d,23.776722d,-103.851929d,0d,23.675238d,-103.667809d,0d,23.663448d,-103.4487d,0d,23.62569d,-103.338478d,0d,23.550045d,-103.228378d,0d,23.53343d,-103.129074d,0d,23.301493d,-102.95546d,0d,27.616222d,-105.108162d,0d,27.433376d,-104.942749d,0d,27.127773d,-104.929451d,0d,20.57135d,-100.254082d,0d,20.597322d,-100.385635d,0d,20.523989d,-100.635132d,0d,20.507996d,-101.010437d,0d,20.588995d,-101.228096d,0d,20.654287d,-101.29039d,0d,20.645681d,-101.383125d,0d,20.57135d,-100.254082d,0d,20.284483d,-99.749786d,0d,20.237417d,-99.595963d,0d,20.25024d,-99.511459d,0d,20.176903d,-99.352173d,0d,20.213205d,-99.226784d,0d,20.645681d,-101.383125d,0d,20.823408d,-101.328453d,0d,20.879549d,-101.337814d,0d,21.118149d,-101.68869d,0d,21.356747d,-101.894547d,0d,21.497101d,-102.091034d,0d,21.515814d,-102.217354d,0d,21.642132d,-102.264137d,0d,22.329859d,-102.287529d,0d,22.516996d,-102.376419d,0d,22.540388d,-102.47467d,0d,22.732203d,-102.479347d,0d,22.860922d,-102.606789d,0d,27.127773d,-104.929451d,0d,26.927877d,-105.642357d,0d,26.880972d,-105.600662d,0d,26.834066d,-105.605873d,0d,26.688135d,-105.543335d,0d,26.448393d,-105.491211d,0d,26.370216d,-105.3088d,0d,26.307674d,-105.162872d,0d,25.541542d,-104.573936d,0d,25.312223d,-104.636482d,0d,25.207987d,-104.579147d,0d,25.009939d,-104.490547d,0d,24.858797d,-104.469704d,0d,24.759773d,-104.532242d,0d,24.676384d,-104.636482d,0d,24.4627d,-104.69902d,0d,24.254229d,-104.69902d,0d,24.103086d,-104.688599d,0d,24.024342d,-104.660835d,0d,31.648981d,-106.430351d,0d,31.5107d,-106.472038d,0d,31.392599d,-106.454376d,0d,31.28479d,-106.502052d,0d,30.91466d,-106.461983d,0d,31.766573d,-106.487953d,0d,31.648981d,-106.430351d,0d,20.645681d,-101.383125d,0d,20.4615d,-101.505623d,0d,23.301493d,-102.95546d,0d,22.860922d,-102.606789d,0d});
  }
}
protected class MFInt32281 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,-1,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,22,23,24,25,26,-1});
  }
}
protected class MFInt32282 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,-1,2,3,4,5,-1,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,22,23,24,25,26,-1});
  }
}
protected class MFColor283 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d284 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.301493d,-102.95546d,0d,22.860922d,-102.606789d,0d,27.127773d,-104.929451d,0d,26.766773d,-104.345673d,0d,26.087996d,-103.694946d,0d,25.586136d,-103.49382d,0d,23.301493d,-102.95546d,0d,23.601339d,-102.933815d,0d,23.711967d,-102.961525d,0d,24d,-103.21302d,0d,24.281029d,-103.405823d,0d,24.381063d,-103.397491d,0d,24.495949d,-103.337265d,0d,24.598242d,-103.346947d,0d,24.685823d,-103.220757d,0d,24.728739d,-103.28257d,0d,24.785429d,-103.276978d,0d,24.810911d,-103.358337d,0d,24.98357d,-103.468666d,0d,25.038723d,-103.561996d,0d,25.35512d,-103.484673d,0d,25.586136d,-103.49382d,0d,22.860922d,-102.606789d,0d,22.588581d,-101.662354d,0d,22.422155d,-101.467026d,0d,22.314558d,-101.165009d,0d,22.150076d,-100.958588d,0d});
  }
}
protected class MFInt32285 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,-1});
  }
}
protected class MFInt32286 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,-1,32,33,34,-1,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,-1});
  }
}
protected class MFColor287 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d288 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.661514d,-103.401123d,0d,20.742765d,-103.284332d,0d,20.818914d,-103.334175d,0d,20.837465d,-103.262131d,0d,20.965343d,-103.185692d,0d,21.210663d,-103.190208d,0d,21.460262d,-103.098869d,0d,21.513769d,-103.108261d,0d,21.615784d,-103.060249d,0d,21.616909d,-103.001236d,0d,21.646088d,-102.985168d,0d,21.785721d,-102.977707d,0d,21.883698d,-102.896576d,0d,22.028128d,-102.876518d,0d,22.135408d,-102.824547d,0d,22.340126d,-102.890503d,0d,22.637173d,-102.727257d,0d,22.860922d,-102.606789d,0d,23.367022d,-102.247009d,0d,23.827105d,-101.747009d,0d,23.977531d,-101.676712d,0d,24.022009d,-101.589798d,0d,24.218184d,-101.449539d,0d,24.458008d,-101.373405d,0d,24.586679d,-101.357048d,0d,24.617489d,-101.381737d,0d,24.742405d,-101.170006d,0d,24.855642d,-101.076584d,0d,25.038427d,-101.066246d,0d,25.106113d,-101.111847d,0d,25.271309d,-101.090424d,0d,25.423786d,-100.985268d,0d,20.661514d,-103.401123d,0d,20.424953d,-103.551392d,0d,20.275204d,-103.450874d,0d,19.008768d,-103.801155d,0d,19.244282d,-103.73291d,0d,19.320915d,-103.604965d,0d,19.380632d,-103.55304d,0d,19.455811d,-103.487679d,0d,19.498274d,-103.52697d,0d,19.537647d,-103.51123d,0d,19.530596d,-103.454704d,0d,19.624609d,-103.427261d,0d,19.661642d,-103.481712d,0d,19.80294d,-103.481392d,0d,19.853539d,-103.514015d,0d,19.886969d,-103.599808d,0d,20.106674d,-103.434906d,0d,20.275204d,-103.450874d,0d});
  }
}
protected class MFInt32289 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,-1,20,21,22,23,24,25,-1,26,27,28,29,30,31,-1,32,33,34,35,36,37,-1,38,39,-1,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1});
  }
}
protected class MFInt32290 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,-1,20,21,22,23,24,25,-1,26,27,28,29,30,31,-1,32,33,34,35,36,37,-1,38,39,-1,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1});
  }
}
protected class MFColor291 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d292 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.687895d,-100.507858d,0d,28.576075d,-100.603363d,0d,28.375847d,-100.851273d,0d,28.342655d,-100.83728d,0d,28.260691d,-101.036057d,0d,28.157881d,-101.111534d,0d,27.938107d,-101.207726d,0d,27.838095d,-101.118759d,0d,27.651119d,-101.18605d,0d,27.202919d,-101.225555d,0d,26.902363d,-101.42337d,0d,26.790661d,-101.422913d,0d,26.589436d,-101.349068d,0d,26.057337d,-101.358406d,0d,25.925846d,-101.218658d,0d,25.920883d,-101.155441d,0d,25.776947d,-101.108986d,0d,25.608295d,-101.101852d,0d,25.516914d,-100.989365d,0d,25.423786d,-100.985268d,0d,21.155891d,-100.578461d,0d,21.006674d,-100.44445d,0d,20.914978d,-100.410767d,0d,20.821438d,-100.456139d,0d,20.693626d,-100.244087d,0d,20.57135d,-100.254082d,0d,21.646311d,-100.729752d,0d,21.609833d,-100.761345d,0d,21.536938d,-100.7537d,0d,21.378288d,-100.687027d,0d,21.327749d,-100.605309d,0d,21.155891d,-100.578461d,0d,22.150076d,-100.958588d,0d,22.074324d,-100.867599d,0d,21.894302d,-100.790955d,0d,21.752676d,-100.684731d,0d,21.69916d,-100.683983d,0d,21.646311d,-100.729752d,0d,22.150076d,-100.958588d,0d,22.39724d,-100.770203d,0d,25.423786d,-100.985268d,0d,25.43045d,-100.799637d,0d,25.286919d,-100.785332d,0d,25.228416d,-100.816521d,0d,25.000124d,-100.515259d,0d,24.801102d,-100.32122d,0d,24.586952d,-100.262642d,0d,24.499142d,-100.289322d,0d,24.381418d,-100.393639d,0d,24.099627d,-100.377472d,0d,23.652328d,-100.644066d,0d,22.963512d,-100.472076d,0d,22.928789d,-100.405396d,0d,22.691181d,-100.242348d,0d,22.64863d,-100.163574d,0d,22.590441d,-100.14463d,0d,22.39724d,-100.770203d,0d,22.442316d,-100.688705d,0d,22.567307d,-100.642822d,0d,22.625837d,-100.52845d,0d,22.603907d,-100.454987d,0d,22.640717d,-100.339783d,0d,22.565733d,-100.263611d,0d,22.433073d,-100.280258d,0d,22.48457d,-100.18158d,0d,22.590441d,-100.14463d,0d});
  }
}
protected class MFInt32293 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFInt32294 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFColor295 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d296 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.552048d,-98.139206d,0d,23.240459d,-98.806984d,0d,23.284264d,-98.86306d,0d,23.316828d,-99.001144d,0d});
  }
}
protected class MFInt32297 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,-1,47,48,-1,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1});
  }
}
protected class MFInt32298 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,-1,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,-1,47,48,-1,49,50,51,52,53,54,55,-1,56,57,58,59,60,61,62,63,64,65,-1});
  }
}
protected class MFColor299 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d300 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.182058d,-99.825386d,0d,24.888042d,-99.67585d,0d,24.851357d,-99.54924d,0d,24.598148d,-99.530495d,0d,24.553719d,-99.552185d,0d,24.475384d,-99.48703d,0d,24.353951d,-99.503288d,0d,24.201632d,-99.374725d,0d,24.067932d,-99.122108d,0d,23.865622d,-99.099861d,0d,23.731661d,-99.1297d,0d,20.213205d,-99.226784d,0d,20.248194d,-99.193428d,0d,20.364769d,-99.20977d,0d,20.446262d,-99.169304d,0d,20.48398d,-99.216835d,0d,20.480146d,-99.285919d,0d,20.52504d,-99.315994d,0d,20.574461d,-99.342583d,0d,20.745178d,-99.343338d,0d,20.857513d,-99.229851d,0d,20.999046d,-99.206131d,0d,21.06579d,-99.033119d,0d,21.126606d,-99.006805d,0d,21.132895d,-98.965027d,0d,21.258003d,-98.926682d,0d,21.254196d,-98.954224d,0d,21.368958d,-98.995796d,0d,21.413019d,-98.982307d,0d,21.432686d,-98.902275d,0d,21.517632d,-98.999367d,0d,21.873034d,-98.937073d,0d,21.9942d,-99.012428d,0d,22.056784d,-98.974785d,0d,22.17075d,-98.968033d,0d,22.544601d,-99.085342d,0d,22.618355d,-99.015785d,0d,22.691832d,-99.018112d,0d,22.729034d,-98.963905d,0d,22.8069d,-98.953896d,0d,22.840504d,-99.017517d,0d,22.940926d,-99.021027d,0d,23.116316d,-99.116783d,0d,23.236368d,-99.098038d,0d,23.316828d,-99.001144d,0d,23.511118d,-98.970161d,0d,23.731661d,-99.1297d,0d,27.495365d,-99.505257d,0d,26.973494d,-99.764336d,0d,19.41357d,-99.19352d,0d,19.518841d,-99.104202d,0d,19.542397d,-99.215279d,0d,19.783434d,-99.217712d,0d,19.805984d,-99.109367d,0d,20.064898d,-99.221558d,0d,20.213205d,-99.226784d,0d,26.973494d,-99.764336d,0d,26.79808d,-99.854614d,0d,26.511772d,-100.170555d,0d,26.266239d,-100.086716d,0d,26.003197d,-100.118904d,0d,25.802551d,-100.274178d,0d,25.661518d,-100.315491d,0d,25.296284d,-100.04393d,0d,25.198332d,-99.903748d,0d,25.182058d,-99.825386d,0d});
  }
}
protected class MFInt32301 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1});
  }
}
protected class MFInt32302 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,-1,14,15,16,17,18,19,20,21,22,23,24,25,26,27,-1});
  }
}
protected class MFColor303 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d304 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.661514d,-103.401123d,0d,20.630972d,-103.335098d,0d,20.64897d,-103.302322d,0d,20.605377d,-103.284157d,0d,20.565752d,-103.20784d,0d,20.568527d,-103.137581d,0d,20.626701d,-103.044334d,0d,20.542063d,-102.792984d,0d,20.536898d,-102.533905d,0d,20.564648d,-102.418266d,0d,20.439716d,-102.130661d,0d,20.367588d,-102.100578d,0d,20.341768d,-102.033562d,0d,20.4615d,-101.505623d,0d,21.493214d,-104.892281d,0d,21.355833d,-104.698128d,0d,21.302744d,-104.662804d,0d,21.198561d,-104.655235d,0d,21.062811d,-104.535851d,0d,21.023954d,-104.389977d,0d,21.078365d,-104.230293d,0d,20.915455d,-103.974144d,0d,20.921545d,-103.838478d,0d,20.890976d,-103.841148d,0d,20.869661d,-103.769577d,0d,20.752672d,-103.645012d,0d,20.718145d,-103.491615d,0d,20.661514d,-103.401123d,0d});
  }
}
protected class MFInt32305 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1,15,16,17,18,19,20,-1,21,22,23,24,-1});
  }
}
protected class MFInt32306 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1,15,16,17,18,19,20,-1,21,22,23,24,-1});
  }
}
protected class MFColor307 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d308 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.575291d,-99.406898d,0d,18.548277d,-99.444046d,0d,18.478022d,-99.433578d,0d,18.360361d,-99.538109d,0d,18.30254d,-99.507301d,0d,18.177538d,-99.554832d,0d,18.027479d,-99.548294d,0d,17.948101d,-99.594398d,0d,17.572342d,-99.524986d,0d,17.469566d,-99.46489d,0d,17.2997d,-99.480263d,0d,17.167742d,-99.535995d,0d,17.177837d,-99.589317d,0d,17.072594d,-99.764061d,0d,16.973055d,-99.788254d,0d,19.048128d,-99.248398d,0d,19.032898d,-99.269493d,0d,18.880486d,-99.228859d,0d,18.777821d,-99.243256d,0d,18.650505d,-99.303459d,0d,18.575291d,-99.406898d,0d,19.048128d,-99.248398d,0d,19.22541d,-99.157684d,0d,19.332987d,-99.223442d,0d,19.41357d,-99.19352d,0d});
  }
}
protected class MFInt32309 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1,9,10,11,12,-1});
  }
}
protected class MFInt32310 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1,9,10,11,12,-1});
  }
}
protected class MFColor311 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d312 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.590441d,-100.14463d,0d,22.998074d,-99.720909d,0d,23.164762d,-99.688164d,0d,23.381365d,-99.526474d,0d,23.414675d,-99.382187d,0d,23.621468d,-99.288574d,0d,23.620636d,-99.198792d,0d,23.711945d,-99.175018d,0d,23.731661d,-99.1297d,0d,24.215221d,-98.482697d,0d,24.113234d,-98.618385d,0d,24.08322d,-98.835922d,0d,23.731661d,-99.1297d,0d});
  }
}
protected class MFInt32313 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFInt32314 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFColor315 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d316 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.805984d,-99.109367d,0d,19.771376d,-98.969696d,0d,19.680708d,-98.983902d,0d,19.634996d,-98.908195d,0d,19.675167d,-98.894913d,0d,19.715181d,-98.791824d,0d,19.862965d,-98.624435d,0d,20.066603d,-98.447701d,0d,20.168119d,-98.269272d,0d,20.120255d,-98.107719d,0d,20.220081d,-98.038231d,0d,20.244551d,-97.979568d,0d,20.370296d,-97.936493d,0d,20.446707d,-97.801117d,0d,20.500025d,-97.541389d,0d,20.553864d,-97.473671d,0d});
  }
}
protected class MFInt32317 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,-1});
  }
}
protected class MFInt32318 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,-1});
  }
}
protected class MFColor319 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d320 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.08523d,-98.179771d,0d,19.037792d,-97.885719d,0d,18.82015d,-97.497185d,0d,18.88798d,-97.387329d,0d,18.819281d,-97.161865d,0d,18.90996d,-96.945564d,0d,18.803608d,-96.694603d,0d,18.754721d,-96.65686d,0d,18.745605d,-96.561478d,0d,18.820313d,-96.318474d,0d,18.909311d,-96.195236d,0d,19.021902d,-96.127014d,0d,19.08523d,-98.179771d,0d,19.352221d,-98.613258d,0d,19.308344d,-98.697372d,0d,19.295914d,-98.924278d,0d,19.410889d,-99.068184d,0d,19.41357d,-99.19352d,0d});
  }
}
protected class MFInt32321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFInt32322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFColor323 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d324 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.597588d,-98.457626d,0d,18.758331d,-98.88559d,0d,18.959896d,-99.074524d,0d,19.048128d,-99.248398d,0d});
  }
}
protected class MFInt32325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,-1,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,-1,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,-1,95,96,97,98,99,100,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1});
  }
}
protected class MFInt32326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,18,19,20,21,22,23,-1,24,25,26,27,28,29,30,31,-1,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,-1,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,-1,95,96,97,98,99,100,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,-1});
  }
}
protected class MFColor327 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d328 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.86894d,-89.211723d,0d,20.712622d,-88.831978d,0d,20.697565d,-88.585876d,0d,20.636906d,-88.501091d,0d,20.627832d,-88.411438d,0d,20.702188d,-88.116859d,0d,20.6653d,-87.928345d,0d,20.88195d,-87.642769d,0d,20.881342d,-87.513733d,0d,21.018162d,-87.14608d,0d,21.14485d,-86.950653d,0d,21.153467d,-86.874031d,0d,25.883553d,-97.502464d,0d,25.820112d,-97.516495d,0d,25.559734d,-97.666901d,0d,25.473478d,-97.800728d,0d,25.405941d,-97.843803d,0d,25.351694d,-97.87291d,0d,25.272974d,-97.863312d,0d,25.070154d,-98.067566d,0d,24.861349d,-98.136253d,0d,24.734112d,-98.258232d,0d,24.527622d,-98.308548d,0d,24.215221d,-98.482697d,0d,17.939884d,-94.91053d,0d,17.935884d,-94.756737d,0d,17.995174d,-94.648735d,0d,17.989706d,-94.558357d,0d,18.092995d,-94.449791d,0d,17.991005d,-94.135719d,0d,17.969498d,-93.824997d,0d,17.986191d,-93.575592d,0d,22.552048d,-98.139206d,0d,22.500866d,-98.093765d,0d,22.471405d,-97.989594d,0d,22.337139d,-97.874229d,0d,22.172544d,-97.804863d,0d,21.538063d,-97.656395d,0d,21.26465d,-97.720596d,0d,21.068329d,-97.733643d,0d,20.943687d,-97.687492d,0d,20.809071d,-97.555901d,0d,20.553864d,-97.473671d,0d,20.525909d,-97.425392d,0d,20.587448d,-97.23793d,0d,20.540451d,-97.170601d,0d,20.47328d,-97.168716d,0d,20.456907d,-97.099007d,0d,20.487619d,-97.029152d,0d,20.465519d,-96.982559d,0d,20.264511d,-96.798889d,0d,20.054998d,-96.623894d,0d,19.997725d,-96.624718d,0d,19.856476d,-96.452431d,0d,19.768435d,-96.423698d,0d,19.395088d,-96.354507d,0d,19.359386d,-96.386688d,0d,19.33814d,-96.49321d,0d,19.308132d,-96.48246d,0d,19.260933d,-96.366074d,0d,19.197392d,-96.339447d,0d,19.134657d,-96.131004d,0d,19.103949d,-96.097252d,0d,19.021902d,-96.127014d,0d,17.986191d,-93.575592d,0d,18.000158d,-93.36692d,0d,18.050104d,-93.353287d,0d,18.16737d,-93.395493d,0d,18.232862d,-93.344139d,0d,18.275938d,-93.214264d,0d,18.321667d,-93.114883d,0d,18.40859d,-93.074997d,0d,18.424953d,-92.666962d,0d,18.655306d,-92.431908d,0d,18.616743d,-92.220963d,0d,18.368708d,-91.800781d,0d,18.403479d,-91.480698d,0d,18.644823d,-91.17186d,0d,19.022383d,-91.117584d,0d,19.168417d,-90.848701d,0d,19.34409d,-90.739265d,0d,19.443964d,-90.693642d,0d,19.757013d,-90.643776d,0d,19.837225d,-90.54026d,0d,19.854727d,-90.465454d,0d,19.815163d,-90.37574d,0d,19.823214d,-90.251915d,0d,20.029461d,-90.227814d,0d,20.320906d,-90.05072d,0d,20.47154d,-90.075218d,0d,20.574766d,-90.042519d,0d,20.64563d,-89.895027d,0d,20.838844d,-89.784897d,0d,20.953684d,-89.648926d,0d,20.960619d,-89.563545d,0d,22.552048d,-98.139206d,0d,22.714354d,-98.095413d,0d,22.83111d,-98.102768d,0d,22.871113d,-98.040947d,0d,22.913448d,-98.067474d,0d,23.210781d,-98.009369d,0d,23.462679d,-98.030922d,0d,24.001862d,-98.265152d,0d,24.060282d,-98.380791d,0d,24.215221d,-98.482697d,0d,20.960619d,-89.563545d,0d,20.903982d,-89.43618d,0d,20.886251d,-89.253777d,0d,20.86894d,-89.211723d,0d,17.939884d,-94.91053d,0d,18.077738d,-94.948494d,0d,18.127485d,-95.149895d,0d,18.202795d,-95.275223d,0d,18.195469d,-95.32045d,0d,18.255165d,-95.350014d,0d,18.2822d,-95.408539d,0d,18.422756d,-95.322929d,0d,18.40625d,-95.354996d,0d,18.466917d,-95.436882d,0d,18.588509d,-95.438889d,0d,18.634838d,-95.529205d,0d,18.648184d,-95.574722d,0d,18.698786d,-95.864273d,0d,19.021902d,-96.127014d,0d});
  }
}
protected class MFInt32329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1});
  }
}
protected class MFInt32330 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,-1});
  }
}
protected class MFColor331 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d332 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.939884d,-94.91053d,0d,17.722456d,-95.061859d,0d,17.391521d,-95.049347d,0d,17.31098d,-95.085251d,0d,17.039845d,-94.984329d,0d,16.78919d,-95.021255d,0d,16.653492d,-94.953468d,0d,16.549036d,-94.943344d,0d,16.429951d,-95.020432d,0d});
  }
}
protected class MFInt32333 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,-1,10,11,12,13,14,15,16,17,18,19,20,21,-1});
  }
}
protected class MFInt32334 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,-1,10,11,12,13,14,15,16,17,18,19,20,21,-1});
  }
}
protected class MFColor335 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d336 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.615751d,-90.735664d,0d,18.5716d,-90.440063d,0d,18.654247d,-90.349014d,0d,18.700626d,-89.984428d,0d,18.666136d,-89.82605d,0d,18.505243d,-89.450172d,0d,18.450397d,-89.209167d,0d,18.476088d,-88.701736d,0d,18.526745d,-88.467751d,0d,18.498857d,-88.308769d,0d,18.000158d,-93.36692d,0d,18.031494d,-93.232971d,0d,17.995743d,-93.154686d,0d,17.995392d,-92.973969d,0d,17.947151d,-92.850967d,0d,17.685812d,-92.548058d,0d,17.685146d,-92.035683d,0d,17.793982d,-91.832817d,0d,17.963949d,-91.734299d,0d,18.335466d,-91.262138d,0d,18.639891d,-91.024651d,0d,18.615751d,-90.735664d,0d});
  }
}
protected class MFInt32337 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,-1,6,7,8,9,10,-1,11,12,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,-1,45,46,47,48,49,-1,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1});
  }
}
protected class MFInt32338 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,-1,6,7,8,9,10,-1,11,12,-1,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,-1,45,46,47,48,49,-1,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,-1});
  }
}
protected class MFColor339 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d340 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {15.679814d,-92.002853d,0d,15.624648d,-91.973312d,0d,15.609671d,-91.868225d,0d,15.456043d,-91.783806d,0d,15.38443d,-91.608521d,0d,15.33855d,-91.586662d,0d,16.429951d,-95.020432d,0d,16.480515d,-94.787132d,0d,16.55839d,-94.613464d,0d,16.483866d,-94.373947d,0d,16.373005d,-94.217224d,0d,16.318861d,-95.227936d,0d,16.429951d,-95.020432d,0d,18.597588d,-98.457626d,0d,18.231064d,-98.192993d,0d,18.223942d,-98.128731d,0d,18.178593d,-98.079948d,0d,18.20694d,-98.055412d,0d,18.141006d,-97.976654d,0d,17.748631d,-97.745461d,0d,17.651411d,-97.475342d,0d,17.576334d,-97.437195d,0d,17.447424d,-97.227951d,0d,17.334009d,-97.169701d,0d,17.304653d,-97.082413d,0d,17.220715d,-97.042435d,0d,17.285149d,-96.95446d,0d,17.28051d,-96.875153d,0d,17.230774d,-96.803749d,0d,17.077991d,-96.728851d,0d,16.908539d,-96.33345d,0d,16.689621d,-96.29171d,0d,16.565197d,-96.360123d,0d,16.554066d,-96.317352d,0d,16.428566d,-96.247955d,0d,16.519722d,-96.186531d,0d,16.483879d,-96.062004d,0d,16.540174d,-96.023277d,0d,16.499414d,-95.908516d,0d,16.396528d,-95.821381d,0d,16.407925d,-95.572365d,0d,16.443705d,-95.494957d,0d,16.427877d,-95.423889d,0d,16.362221d,-95.370941d,0d,16.318861d,-95.227936d,0d,19.08523d,-98.179771d,0d,19.047203d,-98.208977d,0d,19.012741d,-98.326492d,0d,18.903294d,-98.447144d,0d,18.597588d,-98.457626d,0d,15.679814d,-92.002853d,0d,15.74985d,-91.959908d,0d,15.834765d,-91.956581d,0d,15.876572d,-91.987976d,0d,16.050711d,-92.010185d,0d,16.249224d,-92.123886d,0d,16.500332d,-92.308899d,0d,16.57132d,-92.515366d,0d,16.618788d,-92.518715d,0d,16.742098d,-92.633812d,0d,16.745964d,-92.796021d,0d,16.714258d,-92.842064d,0d,16.760284d,-92.954086d,0d,16.702497d,-93.009041d,0d,16.739128d,-93.016678d,0d,16.748276d,-93.150635d,0d,16.801481d,-93.242867d,0d,16.748333d,-93.32888d,0d,16.77656d,-93.420662d,0d,16.740021d,-93.503418d,0d,16.682997d,-93.537361d,0d,16.68301d,-93.719582d,0d,16.53442d,-93.89389d,0d,16.373005d,-94.217224d,0d});
  }
}
protected class MFInt32341 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1,30,31,32,33,34,35,36,37,38,39,40,-1,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,-1});
  }
}
protected class MFInt32342 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,-1,30,31,32,33,34,35,36,37,38,39,40,-1,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,-1,81,82,83,84,85,86,87,88,89,-1});
  }
}
protected class MFColor343 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d344 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.429951d,-95.020432d,0d,16.480515d,-94.787132d,0d,16.55839d,-94.613464d,0d,16.483866d,-94.373947d,0d,16.373005d,-94.217224d,0d,21.493214d,-104.892281d,0d,21.383429d,-104.900276d,0d,21.33341d,-104.935654d,0d,21.209827d,-104.893776d,0d,21.1476d,-104.960922d,0d,21.152859d,-104.967896d,0d,20.844645d,-105.156799d,0d,20.679756d,-105.010231d,0d,20.514866d,-105.046867d,0d,20.469063d,-105.175117d,0d,20.075161d,-105.138474d,0d,19.791185d,-104.955269d,0d,19.818666d,-104.891144d,0d,19.672098d,-104.799538d,0d,19.470566d,-104.543045d,0d,19.498047d,-104.442276d,0d,19.397282d,-104.35067d,0d,19.223232d,-104.094177d,0d,19.168268d,-103.97509d,0d,19.049181d,-103.84684d,0d,19.008768d,-103.801155d,0d,18.83849d,-103.608665d,0d,18.783525d,-103.498741d,0d,18.462908d,-103.288048d,0d,18.144608d,-102.280098d,0d,16.373005d,-94.217224d,0d,16.333509d,-94.123131d,0d,16.352427d,-94.015182d,0d,15.887415d,-93.52813d,0d,15.672867d,-93.180313d,0d,15.472094d,-93.012817d,0d,15.476068d,-92.953285d,0d,15.417994d,-92.896896d,0d,15.326547d,-92.667076d,0d,15.173183d,-92.54612d,0d,15.127095d,-92.446632d,0d,18.144608d,-102.280098d,0d,18.133129d,-102.243752d,0d,18.151449d,-102.13382d,0d,18.123968d,-101.785721d,0d,17.81251d,-101.446785d,0d,17.65678d,-101.153648d,0d,17.537693d,-101.043716d,0d,17.482731d,-100.95211d,0d,17.418608d,-100.887993d,0d,17.345324d,-100.658974d,0d,17.381966d,-100.512405d,0d,17.29952d,-100.448288d,0d,17.152952d,-100.200951d,0d,17.107149d,-100.100182d,0d,17.125469d,-100.054382d,0d,16.988062d,-99.834526d,0d,16.973055d,-99.788254d,0d,16.878136d,-99.49559d,0d,16.9331d,-99.403984d,0d,16.841494d,-99.321541d,0d,16.868975d,-99.138329d,0d,16.685764d,-98.680305d,0d,16.332382d,-98.042252d,0d,16.292742d,-97.836288d,0d,16.13232d,-97.720634d,0d,16.062849d,-97.315384d,0d,16.081169d,-96.994766d,0d,15.861317d,-96.564217d,0d,15.879638d,-96.381012d,0d,15.879638d,-96.178879d,0d,15.901526d,-96.135475d,0d,15.933111d,-96.072845d,0d,15.903186d,-95.806862d,0d,15.977557d,-95.696358d,0d,15.97562d,-95.630959d,0d,16.112514d,-95.371048d,0d,16.179623d,-95.25d,0d,16.199068d,-95.214188d,0d,16.318861d,-95.227936d,0d,16.429951d,-95.020432d,0d,15.127095d,-92.446632d,0d,14.922773d,-92.366173d,0d,14.887837d,-92.236244d,0d,14.968704d,-92.149193d,0d,14.911367d,-92.090904d,0d,14.708068d,-92.097382d,0d,14.694201d,-91.797836d,0d,14.571367d,-91.771904d,0d,14.573575d,-91.643166d,0d});
  }
}
protected class MFInt32345 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFInt32346 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,-1});
  }
}
protected class MFColor347 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d348 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {15.127095d,-92.446632d,0d,15.046827d,-92.361229d,0d,15.073133d,-92.30233d,0d,15.172206d,-92.32605d,0d,15.121696d,-92.276833d,0d,15.132233d,-92.245087d,0d,15.221604d,-92.188744d,0d,15.236886d,-92.229866d,0d,15.258617d,-92.20713d,0d,15.31003d,-92.235451d,0d,15.444288d,-92.115601d,0d,15.519155d,-92.111244d,0d,15.581017d,-92.152855d,0d,15.660292d,-92.141098d,0d,15.700028d,-92.088043d,0d,15.679814d,-92.002853d,0d});
  }
}
protected class MFInt32349 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,-1});
  }
}
protected class MFInt32350 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,-1});
  }
}
protected class MFColor351 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d352 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.34409d,-90.739265d,0d,19.186144d,-90.734428d,0d,19.087061d,-90.698013d,0d,18.993145d,-90.742775d,0d,18.865164d,-90.687386d,0d,18.662304d,-90.754066d,0d,18.615751d,-90.735664d,0d});
  }
}
protected class MFInt32353 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFInt32354 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,-1});
  }
}
protected class MFColor355 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d356 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.153467d,-86.874031d,0d,21.156889d,-86.843597d,0d,20.831976d,-86.893883d,0d,20.615273d,-87.100624d,0d,20.478672d,-87.280624d,0d,20.245478d,-87.432922d,0d,20.1772d,-87.584038d,0d,20.018738d,-87.638832d,0d,19.945473d,-87.779297d,0d,19.605963d,-88.028534d,0d,19.463673d,-88.040497d,0d,19.258795d,-88.132408d,0d,18.956121d,-88.1745d,0d,18.737715d,-88.363083d,0d,18.526745d,-88.467751d,0d});
  }
}
protected class MFInt32357 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1});
  }
}
protected class MFInt32358 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,-1});
  }
}
protected class MFColor359 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f,0f,0.666667f,0f});
  }
}
protected class MFVec3d360 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.67161d,-107.290001d,0d,24.990499d,-107.567886d,0d,25.224886d,-107.889015d,0d,25.335003d,-107.943054d,0d,25.472294d,-108.098274d,0d});
  }
}
protected class MFInt32361 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32362 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,0,-1});
  }
}
protected class MFColor363 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f});
  }
}
protected class MFVec3d364 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.261387d,-101.900284d,0d,18.317219d,-101.870293d,0d,18.407776d,-101.896118d,0d,18.475277d,-101.994743d,0d,18.439999d,-101.888634d,0d,18.494442d,-101.888344d,0d,18.514442d,-101.91806d,0d,18.619999d,-101.877228d,0d,18.649998d,-101.911392d,0d,18.675278d,-101.876106d,0d,18.679996d,-101.9375d,0d,18.715275d,-101.926392d,0d,18.731667d,-102.00029d,0d,18.783886d,-102.016403d,0d,18.853886d,-102.131958d,0d,18.84861d,-102.07251d,0d,18.89222d,-102.080292d,0d,18.91333d,-102.052231d,0d,18.818607d,-102.024727d,0d,18.901386d,-102.001106d,0d,18.886665d,-101.973068d,0d,18.912498d,-101.950287d,0d,18.798054d,-102.000839d,0d,18.761665d,-101.966667d,0d,18.794167d,-101.935013d,0d,18.758053d,-101.933617d,0d,18.752499d,-101.870293d,0d,18.730831d,-101.892502d,0d,18.692497d,-101.871117d,0d,18.742222d,-101.809448d,0d,18.62833d,-101.852783d,0d,18.670555d,-101.705566d,0d,18.618332d,-101.68306d,0d,18.617496d,-101.651123d,0d,18.676388d,-101.621948d,0d,18.594166d,-101.603348d,0d,18.599163d,-101.561684d,0d,18.534721d,-101.559174d,0d,18.498608d,-101.513344d,0d,18.533607d,-101.295563d,0d,18.462219d,-101.347229d,0d,18.46611d,-101.436111d,0d,18.427219d,-101.427231d,0d,18.515831d,-101.587784d,0d,18.59222d,-101.634171d,0d,18.532219d,-101.725853d,0d,18.576942d,-101.76918d,0d,18.547775d,-101.847778d,0d,18.491665d,-101.87001d,0d,18.29583d,-101.85112d,0d,18.289444d,-101.787231d,0d,18.239166d,-101.836403d,0d,18.261387d,-101.900284d,0d});
  }
}
protected class MFInt32365 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32366 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,0,-1});
  }
}
protected class MFColor367 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f});
  }
}
protected class MFVec3d368 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.313457d,-102.776718d,0d,20.25972d,-102.72084d,0d,20.196892d,-102.7724d,0d,20.200832d,-102.692497d,0d,20.169167d,-102.686684d,0d,20.103886d,-102.810013d,0d,20.167774d,-102.899437d,0d,20.195553d,-103.055847d,0d,20.161388d,-103.173889d,0d,20.254444d,-103.425842d,0d,20.282776d,-103.362793d,0d,20.280552d,-103.171112d,0d,20.339996d,-103.029449d,0d,20.313457d,-102.776718d,0d});
  }
}
protected class MFInt32369 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1});
  }
}
protected class MFInt32370 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0,-1});
  }
}
protected class MFColor371 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f});
  }
}
protected class MFVec3d372 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.236664d,-96.39666d,0d,18.194721d,-96.358902d,0d,18.224442d,-96.433624d,0d,18.173611d,-96.385834d,0d,18.092777d,-96.40918d,0d,18.160275d,-96.425003d,0d,18.12833d,-96.50528d,0d,18.196663d,-96.601959d,0d,18.297222d,-96.641953d,0d,18.303055d,-96.604446d,0d,18.338375d,-96.647049d,0d,18.340832d,-96.589737d,0d,18.402775d,-96.686951d,0d,18.419998d,-96.567505d,0d,18.381664d,-96.537231d,0d,18.373055d,-96.601395d,0d,18.315552d,-96.463058d,0d,18.236664d,-96.39666d,0d});
  }
}
protected class MFColor373 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d374 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.677353d,-100.317085d,0d});
  }
}
protected class MFColor375 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d376 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.203833d,-106.416069d,0d});
  }
}
protected class MFColor377 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d378 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.673592d,-103.343796d,0d});
  }
}
protected class MFColor379 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d380 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.243235d,-97.842628d,0d});
  }
}
protected class MFColor381 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d382 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.427046d,-99.127571d,0d});
  }
}
protected class MFColor383 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d384 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.048632d,-98.192947d,0d});
  }
}
protected class MFColor385 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d386 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.006832d,-96.085243d,0d});
  }
}
protected class MFColor387 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d388 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.907431d,-96.951347d,0d});
  }
}
protected class MFColor389 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d390 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.821869d,-89.552864d,0d});
  }
}
protected class MFColor391 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d392 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {32.620205d,-115.294235d,0d});
  }
}
protected class MFColor393 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d394 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.853348d,-102.18634d,0d});
  }
}
protected class MFColor395 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d396 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.803988d,-90.544662d,0d});
  }
}
protected class MFColor397 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d398 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.189831d,-110.25386d,0d});
  }
}
protected class MFColor399 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d400 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.630297d,-92.995163d,0d});
  }
}
protected class MFColor401 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d402 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {28.560297d,-105.975159d,0d});
  }
}
protected class MFColor403 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d404 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {25.441856d,-100.995827d,0d});
  }
}
protected class MFColor405 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d406 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.210365d,-103.684097d,0d});
  }
}
protected class MFColor407 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d408 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.02d,-104.400002d,0d});
  }
}
protected class MFColor409 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d410 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.01d,-101.150002d,0d});
  }
}
protected class MFColor411 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d412 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.357059d,-99.383369d,0d});
  }
}
protected class MFColor413 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d414 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.097059d,-98.700447d,0d});
  }
}
protected class MFColor415 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d416 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.663355d,-101.073204d,0d});
  }
}
protected class MFColor417 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d418 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.320496d,-99.531281d,0d});
  }
}
protected class MFColor419 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d420 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.950079d,-99.181175d,0d});
  }
}
protected class MFColor421 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d422 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {21.530447d,-104.782417d,0d});
  }
}
protected class MFColor423 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d424 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {20.50074d,-100.241173d,0d});
  }
}
protected class MFColor425 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d426 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {18.551239d,-88.264359d,0d});
  }
}
protected class MFColor427 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d428 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.136719d,-100.969238d,0d});
  }
}
protected class MFColor429 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d430 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {24.713339d,-107.455559d,0d});
  }
}
protected class MFColor431 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d432 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {29.020445d,-110.834221d,0d});
  }
}
protected class MFColor433 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d434 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {17.967558d,-92.862549d,0d});
  }
}
protected class MFColor435 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d436 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.27763d,-98.197227d,0d});
  }
}
protected class MFColor437 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d438 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {19.46773d,-96.925476d,0d});
  }
}
protected class MFColor439 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d440 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {22.759216d,-102.722939d,0d});
  }
}
protected class MFColor441 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d442 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {23.735147d,-99.148109d,0d});
  }
}
protected class MFColor443 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,1f});
  }
}
protected class MFVec3d444 {
  protected MFVec3dObject getArray() {
    return new MFVec3dObject(new double[] {16.974386d,-99.931496d,0d});
  }
}
}

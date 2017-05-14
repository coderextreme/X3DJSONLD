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
public class CarDemoMain {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CarDemoMain().initialize().toFileJSON("CarDemoMain.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("xj3d_RigidBodyPhysics").setLevel(2))
        .addComponent(new componentObject().setName("xj3d_IODevice").setLevel(2))
        .addComments(new CommentsBlock("TODO: upgrade component <component level='2' name='RigidBodyPhysics'/>"))
        .addMeta(new metaObject().setName("title").setContent("CarDemoMain.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Example scene for RigidBodyPhysics component, runnable as Xj3D application and invoked using shell script runogl"))
        .addMeta(new metaObject().setName("creator").setContent("Alan Hudson and Justin Couch"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 January 2008"))
        .addMeta(new metaObject().setName("translated").setContent("30 December 2008"))
        .addMeta(new metaObject().setName("modified").setContent("2 May 2017"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.xj3d.org/extensions/index.html#Physics"))
        .addMeta(new metaObject().setName("warning").setContent("Test scene includes custom Xj3D components and elements, will not validate"))
        .addMeta(new metaObject().setName("warning").setContent("Test scene under development, runogl fails http://bugzilla.xj3d.org/show_bug.cgi?id=556"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/runogl"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/main.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/worldModel.x3dv"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/CameraControl.java"))
        .addMeta(new metaObject().setName("reference").setContent("originals/car/CarControlScript.java"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.xj3d.org/extensions/rigid_physics_examples.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/rigid_physics.html"))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/CarDemoMain.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("Xj3D converter, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html"))
        .addMeta(new metaObject().setName("translated").setContent("14 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("14 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new GroupObject()
          .addChild(new GroupObject().setDEF("CAR-CONTAINER")
            .addChild(new SwitchObject().setDEF("DEBUG-GEOM").setWhichChoice(0)
              .addChild(new GroupObject()
                .addChild(new TransformObject().setDEF("ACTIVE-SECTOR-INDICATOR")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,1f,0f}).setTransparency(0.5f)))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject().setDEF("FRONT-LEFT-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setDEF("DEBUG-POINTER-APP")
                      .setMaterial(new MaterialObject())
                      .setLineProperties(new LinePropertiesObject().setLinetype(2)))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt320().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor2().getArray()))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject().setDEF("FRONT-RIGHT-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt323().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f4().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor5().getArray()))))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-MIN").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject().setDEF("FRONT-LEFT-TX-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt326().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f7().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor8().getArray()))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject().setDEF("FRONT-RIGHT-TX-DEBUG-POINTER")
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt329().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f10().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor11().getArray()))))))
                .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX-DEBUG-MAX").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt3212().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f13().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor14().getArray()))))))
                .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject().setUSE("DEBUG-POINTER-APP"))
                    .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt3215().getArray()))
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f16().getArray())))
                      .setColor(new ColorObject().setColor(new MFColorObject(new MFColor17().getArray()))))))))
            .addChild(new TransformObject().setDEF("FRONT-LEFT-WHEEL-TX").setTranslation(new float[] {-1.1f,0.5f,-1.5f})
              .addChild(new TransformObject().setDEF("WHEEL-SHAPE").setRotation(new float[] {0f,0f,1f,1.572f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,0f,1f})))
                  .setGeometry(new CylinderObject().setHeight(0.1f).setRadius(0.5f))))
              .addChild(new GroupObject().setDEF("JOINT-INDICATOR-LEFT")
                .addChild(new ShapeObject()
                  .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt3218().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f19().getArray())))
                    .setColor(new ColorObject().setColor(new MFColorObject(new MFColor20().getArray())))))
                .addChild(new ShapeObject().setDEF("JOINT-SPHERE")
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0f,1f,1f})))
                  .setGeometry(new SphereObject().setRadius(0.1f)))))
            .addChild(new TransformObject().setDEF("FRONT-RIGHT-WHEEL-TX").setTranslation(new float[] {1.1f,0.5f,-1.5f})
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setDEF("JOINT-INDICATOR-RIGHT")
                .addChild(new ShapeObject()
                  .setGeometry(new LineSetObject().setVertexCount(new MFInt32Object(new MFInt3221().getArray()))
                    .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f22().getArray())))
                    .setColor(new ColorObject().setColor(new MFColorObject(new MFColor23().getArray())))))
                .addChild(new ShapeObject().setUSE("JOINT-SPHERE"))))
            .addChild(new TransformObject().setDEF("BACK-LEFT-WHEEL-TX").setTranslation(new float[] {-1.1f,0.5f,1.5f})
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setUSE("JOINT-INDICATOR-LEFT")))
            .addChild(new TransformObject().setDEF("BACK-RIGHT-WHEEL-TX").setTranslation(new float[] {1.1f,0.5f,1.5f})
              .addChild(new TransformObject().setUSE("WHEEL-SHAPE"))
              .addChild(new GroupObject().setUSE("JOINT-INDICATOR-RIGHT")))
            .addChild(new TransformObject().setDEF("CAR-BODY-TX")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0.8f,0.8f,0f})))
                .setGeometry(new BoxObject().setDEF("CHASSIS-BOX").setSize(new float[] {2.2f,0.05f,5f})))
              .addChild(new TransformObject().setDEF("SPEED-INDICATOR").setTranslation(new float[] {1.2f,1f,0f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("SPEED-INDICATOR-COLOR")))
                  .setGeometry(new BoxObject().setSize(new float[] {0.1f,1f,0.1f}))))
              .addChild(new TransformObject().setTranslation(new float[] {0f,0.4f,0f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0f,0f,0.8f}).setTransparency(0.5f)))
                  .setGeometry(new BoxObject().setDEF("CHASSIS-PROXY-GEOM").setSize(new float[] {2.25f,0.4f,5.1f})))
                .addChild(new TransformObject().setTranslation(new float[] {1f,0.1f,2.65f})
                  .addChild(new ShapeObject().setDEF("BRAKE-LIGHT-GEOM")
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("BRAKE-LIGHT-COLOR").setDiffuseColor(new float[] {0.1f,0f,0f}).setEmissiveColor(new float[] {0.1f,0f,0f})))
                    .setGeometry(new BoxObject().setSize(new float[] {0.1f,0.2f,0.1f}))))
                .addChild(new TransformObject().setTranslation(new float[] {-1f,0.1f,2.65f})
                  .addChild(new ShapeObject().setUSE("BRAKE-LIGHT-GEOM")))
                .addChild(new TransformObject().setTranslation(new float[] {0.9f,0.1f,2.65f})
                  .addChild(new ShapeObject().setDEF("REVERSE-LIGHT-GEOM")
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("REVERSE-LIGHT-COLOR").setDiffuseColor(new float[] {0.1f,0.1f,0.1f}).setEmissiveColor(new float[] {0.1f,0.1f,0.1f})))
                    .setGeometry(new BoxObject().setSize(new float[] {0.1f,0.1f,0.1f}))))
                .addChild(new TransformObject().setTranslation(new float[] {-0.9f,0.1f,2.65f})
                  .addChild(new ShapeObject().setUSE("REVERSE-LIGHT-GEOM")))))
            .addChild(new TransformObject().setDEF("CAMERA-TX")
              .addChild(new TransformObject()
                .addChild(new ViewpointObject().setDEF("Camera03").setDescription("AutoCam").setPosition(new float[] {0f,0f,0f}))))))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"NONE"}).setSpeed(10f))
        .addChild(new InlineObject())
        .addChild(new ShapeObject().setDEF("ENEMY-GEOM"))
        .addChild(new TransformObject().setDEF("carGroup").setRotation(new float[] {0.006813f,-0.9999f,0.01227f,-4.155f}).setTranslation(new float[] {-82.59f,6.8f,-48.1f})
          .addChild(new TransformObject().setDEF("carCamTransform").setTranslation(new float[] {0f,1f,5f})
            .addChild(new ViewpointObject().setDEF("Camera03-OLD").setDescription("Car 3rd Person").setPosition(new float[] {0f,0f,5f}))))
        .addChild(new TimeSensorObject().setDEF("cam_car_chase-TIMER").setCycleInterval(120d).setEnabled(false).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("cam_car_chase-POS-INTERP").setKey(new MFFloatObject(new MFFloat24().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f25().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("cam_car_chase-ROT-INTERP").setKey(new MFFloatObject(new MFFloat26().getArray())).setKeyValue(new MFRotationObject(new MFRotation27().getArray())))
        .addChild(new KeySensorObject().setDEF("keysensor"))
        .addChild(new SwitchObject().setDEF("DEBUG_TERRAIN").setWhichChoice(0)
          .addChild(new GroupObject().setDEF("TERRAIN-CONTAINER")
            .addChild(new CollidableShapeObject().setDEF("Road-v-001").setTranslation(new float[] {124.936f,-0.5f,-461.607f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("ROAD-APP")
                  .setMaterial(new MaterialObject().setEmissiveColor(new float[] {1f,0f,0f})))
                .setGeometry(new BoxObject().setSize(new float[] {1250f,1f,800f}))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-002").setTranslation(new float[] {-417.631f,-0.5f,24.7947f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {200f,1f,250f}))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-003").setTranslation(new float[] {675.143f,-0.5f,17.6217f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {200f,1f,250f}))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-004").setTranslation(new float[] {138.008f,-0.5f,23.1087f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {1000f,1f,60f}))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-006").setRotation(new float[] {0f,0f,-1f,0.135494f}).setTranslation(new float[] {347.056f,4.87479f,-376.17f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("RAMP_APP")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f}))
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString28().getArray()))))
                .setGeometry(new BoxObject().setSize(new float[] {90f,1f,70f}))))
            .addChild(new CollidableShapeObject().setDEF("Road-v-007").setTranslation(new float[] {301.193f,1.4f,-376.315f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("ROAD-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {3f,20f,70f}))))
            .addChild(new CollidableShapeObject().setDEF("Sand-v-001").setTranslation(new float[] {101.232f,-0.55f,-31.8107f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("SAND-APP")
                  .setMaterial(new MaterialObject().setAmbientIntensity(0.258621f).setDiffuseColor(new float[] {0.58f,0.27f,0.01f}).setShininess(0.07f).setSpecularColor(new float[] {0.43f,0.2f,0f}))
                  .setTexture(new ImageTextureObject()))
                .setGeometry(new BoxObject().setSize(new float[] {1000f,1f,60f}))))
            .addChild(new CollidableShapeObject().setDEF("Sand-v-002").setTranslation(new float[] {108.906f,-0.55f,93.8712f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("SAND-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {1000f,1f,100f}))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001a").setTranslation(new float[] {750f,10f,-360f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setDEF("WALL-APP")
                  .setMaterial(new MaterialObject().setEmissiveColor(new float[] {0.5f,0.5f,0.5f}).setTransparency(0.2f)))
                .setGeometry(new BoxObject().setSize(new float[] {1f,20f,1000f}))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001b").setTranslation(new float[] {-500f,10f,-360f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {1f,20f,1000f}))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001c").setTranslation(new float[] {125f,10f,140.99f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {1250f,20f,1f}))))
            .addChild(new CollidableShapeObject().setDEF("WALL-v-001d").setTranslation(new float[] {125f,10f,-859.733f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {1250f,20f,1f}))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-002").setTranslation(new float[] {-163.362f,24f,-589.528f})
              .setShape(new ShapeObject()
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {40f,48f,40f}))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-003").setTranslation(new float[] {-100.093f,19f,-587.841f})
              .setShape(new ShapeObject().setDEF("SmallBulding")
                .setAppearance(new AppearanceObject().setUSE("WALL-APP"))
                .setGeometry(new BoxObject().setSize(new float[] {40f,38f,40f}))))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-004").setTranslation(new float[] {-314.972f,19f,-656.376f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-005").setTranslation(new float[] {-314.723f,19f,-580.647f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-006").setTranslation(new float[] {-269.737f,19f,-452.626f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-007").setTranslation(new float[] {-217.782f,19f,-450.082f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-008").setTranslation(new float[] {-83.8395f,19f,-351.859f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-009").setTranslation(new float[] {-348.799f,19f,-511.969f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-010").setTranslation(new float[] {-23.9812f,19f,-501.768f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))
            .addChild(new CollidableShapeObject().setDEF("Wall-v-011").setTranslation(new float[] {-101.759f,19f,-451.126f})
              .setShape(new ShapeObject().setUSE("SmallBulding")))))
        .addChild(new ScriptObject().setDEF("physicsSectorScript")
          .addField(new fieldObject().setType("SFTime").setName("sector1").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector2").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector3").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector4").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector5").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector6").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector7").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector8").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("sector9").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector1Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector2Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector3Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector4Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector5Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector6Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector7Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector8Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("sector9Enabled").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    function sector1(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector1');\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector2(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector2');\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector3(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector3');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = true;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector4(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector4');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = true;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector5(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector5');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = true;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector6(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector6');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = true;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = false;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector7(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector7');\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = true;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = false;\n"+
"       }\n"+
"    }\n"+
"    function sector8(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector8');\n"+
"\n"+
"        sector1Enabled = false;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = true;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
"    function sector9(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector9');\n"+
"\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
"\n"+
"    function sector9(val) {\n"+
"       if (val) {\n"+
"Browser.println('Physics Sector9');\n"+
"\n"+
"        sector1Enabled = true;\n"+
"        sector2Enabled = false;\n"+
"        sector3Enabled = false;\n"+
"        sector4Enabled = false;\n"+
"        sector5Enabled = false;\n"+
"        sector6Enabled = false;\n"+
"        sector7Enabled = false;\n"+
"        sector8Enabled = true;\n"+
"        sector9Enabled = true;\n"+
"       }\n"+
"    }\n"+
""))
        .addChild(new RigidBodyCollectionObject().setDEF("BODY-COLLECTION").setConstantForceMix(0.005f).setContactSurfaceThickness(0.001f).setEnabled(false).setIterations(20)
          .addBodies(new RigidBodyObject().setDEF("CAR-BODY").setAutoDamp(true).setEnabled(false).setMass(900f).setPosition(new float[] {0f,1.25f,0f})
            .setMassDensityModel(new BoxObject().setUSE("CHASSIS-BOX"))
            .setGeometry(new CollidableShapeObject().setDEF("CAR-BODY-GEOM")
              .setShape(new ShapeObject()
                .setGeometry(new BoxObject().setUSE("CHASSIS-BOX")))))
          .addBodies(new RigidBodyObject().setDEF("FRONT-LEFT-WHEEL-BODY").setAngularDampingFactor(0f).setAutoDamp(true).setEnabled(false).setMass(20f).setPosition(new float[] {-0.9f,1.5f,-2.5f}).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("FRONT-LEFT-WHEEL-GEOM")
              .setShape(new ShapeObject().setDEF("WHEEL-GEOM")
                .setGeometry(new SphereObject().setDEF("WHEEL-MASS").setRadius(0.5f)))))
          .addBodies(new RigidBodyObject().setDEF("FRONT-RIGHT-WHEEL-BODY").setAngularDampingFactor(0f).setAutoDamp(true).setEnabled(false).setMass(20f).setPosition(new float[] {0.9f,1.5f,-2.5f}).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("FRONT-RIGHT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM"))))
          .addBodies(new RigidBodyObject().setDEF("BACK-LEFT-WHEEL-BODY").setAngularDampingFactor(0f).setAutoDamp(true).setEnabled(false).setMass(20f).setPosition(new float[] {-0.9f,1.5f,2.5f}).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("BACK-LEFT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM"))))
          .addBodies(new RigidBodyObject().setDEF("BACK-RIGHT-WHEEL-BODY").setAngularDampingFactor(0f).setAutoDamp(true).setEnabled(false).setMass(20f).setPosition(new float[] {0.9f,1.5f,2.5f}).setUseFiniteRotation(true)
            .setMassDensityModel(new SphereObject().setUSE("WHEEL-MASS"))
            .setGeometry(new CollidableShapeObject().setDEF("BACK-RIGHT-WHEEL-GEOM")
              .setShape(new ShapeObject().setUSE("WHEEL-GEOM")))))
        .addChild(new CollisionSensorObject().setDEF("COLLISION-OUTPUT")
          .setCollider(new CollisionCollectionObject().setDEF("COLLISION-GROUP").setBounce(0.3f).setEnabled(false).setFrictionCoefficients(new float[] {500f,500f}).setMinBounceSpeed(0.3f).setSoftnessConstantForceMix(0.001f)
            .addCollidables(new CollidableShapeObject().setUSE("FRONT-LEFT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("FRONT-RIGHT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("BACK-LEFT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("BACK-RIGHT-WHEEL-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("CAR-BODY-GEOM"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-001"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-003"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-004"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-006"))
            .addCollidables(new CollidableShapeObject().setUSE("Road-v-007"))
            .addCollidables(new CollidableShapeObject().setUSE("Sand-v-001"))
            .addCollidables(new CollidableShapeObject().setUSE("Sand-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001a"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001b"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001c"))
            .addCollidables(new CollidableShapeObject().setUSE("WALL-v-001d"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-002"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-003"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-004"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-005"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-006"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-007"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-008"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-009"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-010"))
            .addCollidables(new CollidableShapeObject().setUSE("Wall-v-011"))))
        .addChild(new ScriptObject().setDEF("CAR-CONTROL-SCRIPT").setDirectOutput(true).setUrl(new MFStringObject(new MFString29().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("resetRequest").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("startingPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFRotation").setName("startingOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("wheelBodyRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("chassisBodyDimensions").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("speedLimit").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("steeringLimitAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("steeringDeadspot").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("maxEngineTorque").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("maxBrakingTorque").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("maxEngineRevs").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("roadFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("wallFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("sandFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("grassFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("otherFrictionCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("sideSlipCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("brakeBias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("engineFrontPercentage").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("engineRearPercentage").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("dragCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFFloat").setName("downforceCoefficient").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFBool").setName("reverseSelected").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("carVelocity").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("carOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("currentSteeringAngle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("wheelAcceleratorInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("wheelDirectionInput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("frontWheelOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("rearWheelOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("correctedChassisOrientation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("frontWheelMinStop").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("frontWheelMaxStop").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("frontLeftWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("frontRightWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("rearLeftWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("rearRightWheelSpeed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("frontWheelTorque").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("rearWheelTorque").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("frontLeftAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("frontRightAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("rearLeftAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("rearRightAxleAxis").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("MFVec3f").setName("frictionForces").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("chassisPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("chassisOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("frontLeftWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("frontLeftWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("frontRightWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("frontRightWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("backLeftWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("backLeftWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("backRightWheelPosition_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("backRightWheelOrientation_reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("enablePhysics").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("speed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("revs").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("brakesApplied").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("reversing").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFNode").setName("chassis").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("CAR-BODY-GEOM")))
          .addField(new fieldObject().setType("SFNode").setName("frontLeftWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("FRONT-LEFT-WHEEL-GEOM")))
          .addField(new fieldObject().setType("SFNode").setName("frontRightWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("FRONT-RIGHT-WHEEL-GEOM")))
          .addField(new fieldObject().setType("SFNode").setName("backLeftWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("BACK-LEFT-WHEEL-GEOM")))
          .addField(new fieldObject().setType("SFNode").setName("backRightWheel").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("BACK-RIGHT-WHEEL-GEOM")))
          .addField(new fieldObject().setType("MFNode").setName("bigTerrainBox").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("MFNode").setName("roadTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("Road-v-001"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-002"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-003"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-004"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-006"))
            .addChild(new CollidableShapeObject().setUSE("Road-v-007")))
          .addField(new fieldObject().setType("MFNode").setName("sandTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("Sand-v-001"))
            .addChild(new CollidableShapeObject().setUSE("Sand-v-002")))
          .addField(new fieldObject().setType("MFNode").setName("grassTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("MFNode").setName("wallTerrain").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001a"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001b"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001c"))
            .addChild(new CollidableShapeObject().setUSE("WALL-v-001d"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-002"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-003"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-004"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-005"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-006"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-007"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-008"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-009"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-010"))
            .addChild(new CollidableShapeObject().setUSE("Wall-v-011")))
          .addField(new fieldObject().setType("MFNode").setName("bodies").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new RigidBodyObject().setUSE("CAR-BODY"))
            .addChild(new RigidBodyObject().setUSE("FRONT-LEFT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("FRONT-RIGHT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("BACK-LEFT-WHEEL-BODY"))
            .addChild(new RigidBodyObject().setUSE("BACK-RIGHT-WHEEL-BODY")))
          .addField(new fieldObject().setType("MFNode").setName("joints").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new DoubleAxisHingeJointObject().setDEF("FRONT-LEFT-JOINT").setAnchorPoint(new float[] {-0.9f,1.5f,-2.5f}).setAxis1(new float[] {0f,1f,0f}).setAxis2(new float[] {-1f,0f,0f}).setForceOutput(new MFStringObject(new MFString30().getArray())).setMaxAngle1(0f).setMaxTorque2(100f).setMinAngle1(0f).setStop1ErrorCorrection(0.98f).setSuspensionErrorCorrection(0.9f).setSuspensionForce(0.003f)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("FRONT-LEFT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("FRONT-RIGHT-JOINT").setAnchorPoint(new float[] {0.9f,1.5f,-2.5f}).setAxis1(new float[] {0f,1f,0f}).setAxis2(new float[] {1f,0f,0f}).setForceOutput(new MFStringObject(new MFString31().getArray())).setMaxAngle1(0f).setMaxTorque2(100f).setMinAngle1(0f).setStop1ErrorCorrection(0.98f).setSuspensionErrorCorrection(0.9f).setSuspensionForce(0.003f)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("FRONT-RIGHT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("BACK-LEFT-JOINT").setAnchorPoint(new float[] {-0.9f,1.5f,2.5f}).setAxis1(new float[] {0f,1f,0f}).setAxis2(new float[] {-1f,0f,0f}).setForceOutput(new MFStringObject(new MFString32().getArray())).setMaxAngle1(0f).setMaxTorque2(100f).setMinAngle1(0f).setStop1ErrorCorrection(0.98f).setSuspensionErrorCorrection(0.9f).setSuspensionForce(0.003f)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("BACK-LEFT-WHEEL-BODY")))
            .addChild(new DoubleAxisHingeJointObject().setDEF("BACK-RIGHT-JOINT").setAnchorPoint(new float[] {0.9f,1.5f,2.5f}).setAxis1(new float[] {0f,1f,0f}).setAxis2(new float[] {1f,0f,0f}).setForceOutput(new MFStringObject(new MFString33().getArray())).setMaxAngle1(0f).setMaxTorque2(100f).setMinAngle1(0f).setStop1ErrorCorrection(0.98f).setSuspensionErrorCorrection(0.9f).setSuspensionForce(0.003f)
              .setBody1(new RigidBodyObject().setUSE("CAR-BODY"))
              .setBody2(new RigidBodyObject().setUSE("BACK-RIGHT-WHEEL-BODY"))))
          .addField(new fieldObject().setType("MFNode").setName("collisionContacts").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("correctedContacts").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("connectJoints").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new KeySensorObject().setDEF("KEYS"))
        .addChild(new TimeSensorObject().setDEF("KEYTIMER").setLoop(true))
        .addChild(new ScriptObject().setDEF("KEYSC")
          .addField(new fieldObject().setType("SFInt32").setName("actionKeyPress").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("decay").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("dir").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("accel").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("reverse").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("reset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    var accelVar = 0;\n"+
"    var dirVar = 0;\n"+
"    var accelFactor = 0.1;\n"+
"    var dirFactor = 0.5;\n"+
"    var decayVar = 0.1;\n"+
"    var applyDecay = false;\n"+
"    \n"+
"    function decay(val) {\n"+
"       if (!applyDecay)\n"+
"          return;\n"+
"          \n"+
"       if (dir >= decayVar) {\n"+
"          dir = dir - decayVar;          \n"+
"          if (dir < -1)\n"+
"             dir = -1;\n"+
"       } else if (dir <= -decayVar) {\n"+
"          dir = dir + decayVar;\n"+
"          \n"+
"          if (dir > 1)\n"+
"             dir = 1;\n"+
"       } else {\n"+
"          dir = 0;\n"+
"          \n"+
"          applyDecay = false;\n"+
"       }   \n"+
"    }\n"+
"    \n"+
"    function actionKeyPress(val) {\n"+
"        applyDecay = true;\n"+
"        \n"+
"    	if (val == 17) {\n"+
"    	   accelVar = accelVar + accelFactor;\n"+
"    	   \n"+
"    	   if (accelVar > 1)\n"+
"    	      accelVar = 1.0;\n"+
"    	      \n"+
"    	   accel = accelVar;\n"+
"    	} else if (val == 18) {\n"+
"    	   accelVar = accelVar - accelFactor;\n"+
"    	   \n"+
"    	   if (accelVar < -1)\n"+
"    	      accelVar = -1.0;\n"+
"    	      \n"+
"    	   accel = accelVar;\n"+
"    	} else if (val == 19) {\n"+
"    	   dirVar = dirVar - dirFactor;\n"+
"    	   \n"+
"    	   if (dirVar < -1)\n"+
"    	      dirVar = -1.0;\n"+
"    	      \n"+
"    	   dir = dirVar;\n"+
"    	} else if (val == 20) {\n"+
"    	   dirVar = dirVar + dirFactor;\n"+
"    	   \n"+
"    	   if (dirVar > 1)\n"+
"    	      dirVar = 1.0;\n"+
"    	      \n"+
"    	   dir = dirVar;\n"+
"    	} else {\n"+
"    	   dir = 0;\n"+
"    	   accel = 0;\n"+
"    	}\n"+
"    }\n"+
""))
        .addChild(new ScriptObject().setDEF("UI-CONTROL-SCRIPT")
          .addField(new fieldObject().setType("SFFloat").setName("speed").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("revs").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("brakesApplied").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("reversing").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("maxSpeed").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFColor").setName("brakeLightColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFColor").setName("reverseLightColor").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("speedScale").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("speedFraction").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"    function brakesApplied(val) {\n"+
"      if(val)\n"+
"        brakeLightColor.r = 1;\n"+
"      else\n"+
"        brakeLightColor.r = 0.1;\n"+
"    }\n"+
"\n"+
"    function reversing(val) {\n"+
"      if(val) {\n"+
"        reverseLightColor.r = 1;\n"+
"        reverseLightColor.g = 1;\n"+
"        reverseLightColor.b = 1;\n"+
"      } else {\n"+
"        reverseLightColor.r = 0.1;\n"+
"        reverseLightColor.g = 0.1;\n"+
"        reverseLightColor.b = 0.1;\n"+
"      }\n"+
"    }\n"+
"\n"+
"    function speed(val) {\n"+
"      speedScale.x = 1;\n"+
"      speedScale.y = val / maxSpeed;\n"+
"      speedScale.z = 1;\n"+
"      speedFraction = val / maxSpeed;\n"+
"    }\n"+
""))
        .addChild(new ColorInterpolatorObject().setDEF("SPEED-COLOR").setKey(new MFFloatObject(new MFFloat34().getArray())).setKeyValue(new MFColorObject(new MFColor35().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-HINGE-WHEEL-INTERP").setKey(new MFFloatObject(new MFFloat36().getArray())).setKeyValue(new MFRotationObject(new MFRotation37().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-HINGE-WHEEL-INTERP").setKey(new MFFloatObject(new MFFloat38().getArray())).setKeyValue(new MFRotationObject(new MFRotation39().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-HINGE-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat40().getArray())).setKeyValue(new MFRotationObject(new MFRotation41().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-HINGE-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat42().getArray())).setKeyValue(new MFRotationObject(new MFRotation43().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-MAXSTOP-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat44().getArray())).setKeyValue(new MFRotationObject(new MFRotation45().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat46().getArray())).setKeyValue(new MFRotationObject(new MFRotation47().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-LEFT-MINSTOP-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat48().getArray())).setKeyValue(new MFRotationObject(new MFRotation49().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("FRONT-RIGHT-MINSTOP-ANGLE-INTERP").setKey(new MFFloatObject(new MFFloat50().getArray())).setKeyValue(new MFRotationObject(new MFRotation51().getArray())))
        .addChild(new ViewpointObject().setDescription("Other position").setPosition(new float[] {0f,2f,10f}))
        .addChild(new ViewpointObject().setDescription("Top down view of starting position").setOrientation(new float[] {1f,0f,0f,-1.5712f}).setPosition(new float[] {-114.86f,20f,-66.1922f}))
        .addChild(new ViewpointObject().setDEF("CHASSIS-VIEW").setDescription("Chassis starting position").setPosition(new float[] {0f,0f,0f}))
        .addChild(new BackgroundObject().setSkyAngle(new MFFloatObject(new MFFloat52().getArray())).setSkyColor(new MFColorObject(new MFColor53().getArray())))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"NONE"}))
        .addChild(new ScriptObject().setDEF("CAMERA-CONTROL-SCRIPT").setUrl(new MFStringObject(new MFString54().getArray()))
          .addField(new fieldObject().setType("SFVec3f").setName("carPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("resetPosition").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("resetOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("cameraTranslation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFRotation").setName("cameraRotation").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("height").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("chainLength").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("cam_car_chase-TIMER").setToField("set_fraction").setToNode("cam_car_chase-POS-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-POS-INTERP").setToField("translation").setToNode("carGroup"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("cam_car_chase-TIMER").setToField("set_fraction").setToNode("cam_car_chase-ROT-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-ROT-INTERP").setToField("rotation").setToNode("carGroup"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-POS-INTERP").setToField("translation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("cam_car_chase-ROT-INTERP").setToField("rotation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("BACK-LEFT-WHEEL-BODY").setToField("translation").setToNode("BACK-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("BACK-LEFT-WHEEL-BODY").setToField("rotation").setToNode("BACK-LEFT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("BACK-RIGHT-WHEEL-BODY").setToField("translation").setToNode("BACK-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("BACK-RIGHT-WHEEL-BODY").setToField("rotation").setToNode("BACK-RIGHT-WHEEL-TX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("CAR-BODY").setToField("translation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("CAR-BODY").setToField("rotation").setToNode("CAR-BODY-TX"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("throttleSlider").setFromNode("WHEEL").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("button2").setFromNode("WHEEL").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("button3").setFromNode("WHEEL").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("leftStickX").setFromNode("GAMEPAD").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("rightStickY").setFromNode("GAMEPAD").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("l1Button").setFromNode("GAMEPAD").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("r1Button").setFromNode("GAMEPAD").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("actionKeyPress").setFromNode("KEYS").setToField("actionKeyPress").setToNode("KEYSC"))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("KEYTIMER").setToField("decay").setToNode("KEYSC"))
        .addChild(new ROUTEObject().setFromField("dir").setFromNode("KEYSC").setToField("wheelDirectionInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("accel").setFromNode("KEYSC").setToField("wheelAcceleratorInput").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reverse").setFromNode("KEYSC").setToField("reverseSelected").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reset").setFromNode("KEYSC").setToField("resetRequest").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("contacts").setFromNode("COLLISION-OUTPUT").setToField("collisionContacts").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("linearVelocity").setFromNode("CAR-BODY").setToField("carVelocity").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("orientation").setFromNode("CAR-BODY").setToField("carOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-LEFT-JOINT").setToField("frontWheelOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-LEFT-JOINT").setToField("rearWheelOrientation").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-LEFT-JOINT").setToField("currentSteeringAngle").setToNode("CAR-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-LEFT-JOINT").setToField("finiteRotationAxis").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("FRONT-RIGHT-JOINT").setToField("finiteRotationAxis").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-LEFT-JOINT").setToField("finiteRotationAxis").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("body2Axis").setFromNode("BACK-RIGHT-JOINT").setToField("finiteRotationAxis").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("COLLISION-GROUP"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("enablePhysics").setFromNode("CAR-CONTROL-SCRIPT").setToField("enabled").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("FRONT-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("FRONT-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("backLeftWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("BACK-LEFT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("backRightWheelPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("anchorPoint").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("backRightWheelOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("BACK-RIGHT-WHEEL-BODY"))
        .addChild(new ROUTEObject().setFromField("frontWheelMinStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("minAngle1").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMinStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("minAngle1").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMaxStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxAngle1").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelMaxStop").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxAngle1").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearLeftWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearRightWheelSpeed").setFromNode("CAR-CONTROL-SCRIPT").setToField("desiredAngularVelocity2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearWheelTorque").setFromNode("CAR-CONTROL-SCRIPT").setToField("maxTorque2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontLeftAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("FRONT-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frontRightAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("FRONT-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearLeftAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("BACK-LEFT-JOINT"))
        .addChild(new ROUTEObject().setFromField("rearRightAxleAxis").setFromNode("CAR-CONTROL-SCRIPT").setToField("axis2").setToNode("BACK-RIGHT-JOINT"))
        .addChild(new ROUTEObject().setFromField("frictionForces").setFromNode("CAR-CONTROL-SCRIPT").setToField("forces").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("correctedContacts").setFromNode("CAR-CONTROL-SCRIPT").setToField("set_contacts").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("correctedChassisOrientation").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CAR-BODY"))
        .addChild(new ROUTEObject().setFromField("connectJoints").setFromNode("CAR-CONTROL-SCRIPT").setToField("joints").setToNode("BODY-COLLECTION"))
        .addChild(new ROUTEObject().setFromField("speed").setFromNode("CAR-CONTROL-SCRIPT").setToField("speed").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("revs").setFromNode("CAR-CONTROL-SCRIPT").setToField("revs").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("brakesApplied").setFromNode("CAR-CONTROL-SCRIPT").setToField("brakesApplied").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("reversing").setFromNode("CAR-CONTROL-SCRIPT").setToField("reversing").setToNode("UI-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("brakeLightColor").setFromNode("UI-CONTROL-SCRIPT").setToField("emissiveColor").setToNode("BRAKE-LIGHT-COLOR"))
        .addChild(new ROUTEObject().setFromField("reverseLightColor").setFromNode("UI-CONTROL-SCRIPT").setToField("emissiveColor").setToNode("REVERSE-LIGHT-COLOR"))
        .addChild(new ROUTEObject().setFromField("speedScale").setFromNode("UI-CONTROL-SCRIPT").setToField("scale").setToNode("SPEED-INDICATOR"))
        .addChild(new ROUTEObject().setFromField("speedFraction").setFromNode("UI-CONTROL-SCRIPT").setToField("set_fraction").setToNode("SPEED-COLOR"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("SPEED-COLOR").setToField("emissiveColor").setToNode("SPEED-INDICATOR-COLOR"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("set_fraction").setToNode("FRONT-LEFT-HINGE-WHEEL-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-HINGE-WHEEL-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("wheelX").setFromNode("WHEEL").setToField("set_fraction").setToNode("FRONT-RIGHT-HINGE-WHEEL-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-HINGE-WHEEL-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-HINGE-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-HINGE-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("hinge1Angle").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-HINGE-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-HINGE-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("maxAngle1").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-MAXSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-MAXSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("maxAngle1").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-MAXSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("minAngle1").setFromNode("FRONT-LEFT-JOINT").setToField("set_fraction").setToNode("FRONT-LEFT-MINSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-LEFT-MINSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("minAngle1").setFromNode("FRONT-RIGHT-JOINT").setToField("set_fraction").setToNode("FRONT-RIGHT-MINSTOP-ANGLE-INTERP"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FRONT-RIGHT-MINSTOP-ANGLE-INTERP").setToField("rotation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-HINGE"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MAX"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-LEFT-WHEEL-BODY").setToField("translation").setToNode("FRONT-LEFT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("FRONT-RIGHT-WHEEL-BODY").setToField("translation").setToNode("FRONT-RIGHT-WHEEL-TX-DEBUG-MIN"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("position").setToNode("CHASSIS-VIEW"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("orientation").setToNode("CHASSIS-VIEW"))
        .addChild(new ROUTEObject().setFromField("position").setFromNode("CAR-BODY").setToField("carPosition").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("chassisPosition_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("resetPosition").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("chassisOrientation_reset").setFromNode("CAR-CONTROL-SCRIPT").setToField("resetOrientation").setToNode("CAMERA-CONTROL-SCRIPT"))
        .addChild(new ROUTEObject().setFromField("cameraTranslation").setFromNode("CAMERA-CONTROL-SCRIPT").setToField("translation").setToNode("CAMERA-TX"))
        .addChild(new ROUTEObject().setFromField("cameraRotation").setFromNode("CAMERA-CONTROL-SCRIPT").setToField("rotation").setToNode("CAMERA-TX")))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt323 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f});
  }
}
protected class MFColor5 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt326 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f});
  }
}
protected class MFColor8 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,0f,1f,1f,0f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f});
  }
}
protected class MFColor11 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f13 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f});
  }
}
protected class MFColor14 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,1f});
  }
}
protected class MFInt3215 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2});
  }
}
protected class MFVec3f16 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f});
  }
}
protected class MFColor17 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2,2});
  }
}
protected class MFVec3f19 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f,0f,0f,0f,0f,1f,0f});
  }
}
protected class MFColor20 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2,2});
  }
}
protected class MFVec3f22 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f,0f,0f,0f,0f,1f,0f});
  }
}
protected class MFColor23 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,0f,1f,1f,0f,1f,1f,1f,1f,1f,1f});
  }
}
protected class MFFloat24 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.005f,0.01f,0.015f,0.02f,0.025f,0.03f,0.035f,0.04f,0.045f,0.05f,0.055f,0.06f,0.065f,0.07f,0.075f,0.08f,0.085f,0.09f,0.095f,0.1f,0.105f,0.11f,0.115f,0.12f,0.125f,0.13f,0.135f,0.14f,0.145f,0.15f,0.155f,0.16f,0.165f,0.17f,0.175f,0.18f,0.185f,0.19f,0.195f,0.2f,0.205f,0.21f,0.215f,0.22f,0.225f,0.23f,0.235f,0.24f,0.245f,0.25f,0.255f,0.26f,0.265f,0.27f,0.275f,0.28f,0.285f,0.29f,0.295f,0.3f,0.305f,0.31f,0.315f,0.32f,0.325f,0.33f,0.335f,0.34f,0.345f,0.35f,0.355f,0.36f,0.365f,0.37f,0.375f,0.38f,0.385f,0.39f,0.395f,0.4f,0.405f,0.41f,0.415f,0.42f,0.425f,0.43f,0.435f,0.44f,0.445f,0.45f,0.455f,0.46f,0.465f,0.47f,0.475f,0.48f,0.485f,0.49f,0.495f,0.5f,0.505f,0.51f,0.515f,0.52f,0.525f,0.53f,0.535f,0.54f,0.545f,0.55f,0.555f,0.56f,0.565f,0.57f,0.575f,0.58f,0.585f,0.59f,0.595f,0.6f,0.605f,0.61f,0.615f,0.62f,0.625f,0.63f,0.635f,0.64f,0.645f,0.65f,0.655f,0.66f,0.665f,0.67f,0.675f,0.68f,0.685f,0.69f,0.695f,0.7f,0.705f,0.71f,0.715f,0.72f,0.725f,0.73f,0.735f,0.74f,0.745f,0.75f,0.755f,0.76f,0.765f,0.77f,0.775f,0.78f,0.785f,0.79f,0.795f,0.8f,0.805f,0.81f,0.815f,0.82f,0.825f,0.83f,0.835f,0.84f,0.845f,0.85f,0.855f,0.86f,0.865f,0.87f,0.875f,0.88f,0.885f,0.89f,0.895f,0.9f,0.905f,0.91f,0.915f,0.92f,0.925f,0.93f,0.935f,0.94f,0.945f,0.95f,0.955f,0.96f,0.965f,0.97f,0.975f,0.98f,0.985f,0.99f,0.995f,1f});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-82.59f,6.8f,-46.1f,-62.37f,7.482f,-34.12f,-45.75f,8.077f,-24.49f,-30.63f,8.902f,-15.22f,-14.28f,9.772f,-7.022f,2.577f,10.66f,0.2272f,19.5f,11.58f,7.357f,36.34f,12.33f,14.35f,53.06f,12.96f,21.47f,69.88f,13.31f,28.19f,86.65f,13.45f,34.39f,103f,13.08f,41.36f,120.3f,12.53f,47.38f,137.9f,11.52f,53.08f,156f,11.13f,55.74f,174.3f,10.82f,56.99f,192.6f,10.72f,59.23f,210.8f,10.17f,59.67f,229.1f,9.332f,58.07f,247.3f,7.655f,57.25f,265.2f,6.045f,56.14f,283.9f,3.88f,56.28f,305.8f,3.112f,54.26f,324.5f,3.111f,54.26f,340.3f,3.338f,51.85f,353.7f,3.376f,40.25f,367f,2.986f,24.67f,368.9f,2.698f,4.603f,367f,2.426f,-16.23f,352.9f,2.476f,-24.65f,333f,2.496f,-27.47f,313.1f,2.5f,-26.23f,296.2f,2.472f,-22.66f,278.8f,2.428f,-17.45f,260.8f,2.399f,-12.16f,243f,2.371f,-7.717f,225f,2.348f,-3.115f,206.7f,2.312f,-2.477f,188.5f,2.288f,-3.483f,169.7f,2.239f,-1.287f,149.8f,2.275f,-3.75f,131.7f,2.358f,-8.071f,114.9f,2.463f,-14.18f,100.4f,2.562f,-25.71f,90.72f,2.614f,-41.85f,86.37f,2.654f,-60.62f,85.63f,2.678f,-79.14f,89.62f,2.695f,-96.48f,93.92f,2.706f,-114.4f,98.32f,2.705f,-132.4f,102.4f,2.704f,-150f,106.6f,2.701f,-168.2f,109.9f,2.699f,-186.9f,113.2f,2.697f,-205f,116.3f,2.703f,-223.3f,119.5f,2.677f,-242.2f,124.6f,2.671f,-260.7f,136f,2.586f,-274.3f,147.6f,2.655f,-286.3f,162.2f,2.934f,-297f,180.1f,3.192f,-305.3f,198f,3.424f,-311.6f,216.3f,3.605f,-313.4f,234.2f,3.771f,-315.6f,252.3f,3.92f,-317.4f,270.7f,4.05f,-318.9f,289.1f,4.156f,-319.6f,307.5f,4.109f,-319.7f,325.9f,4.208f,-318.6f,344.3f,4.346f,-316.6f,362.7f,4.906f,-314.4f,380.4f,5.254f,-311.4f,397.7f,5.339f,-306.8f,415.4f,5.254f,-302.2f,432.7f,5.108f,-297.5f,449.9f,4.975f,-292.7f,467.4f,4.904f,-287.6f,485.2f,4.894f,-282f,503.5f,4.918f,-276.8f,521.7f,4.979f,-272.2f,539.2f,5.025f,-264.4f,559.5f,5.217f,-261.1f,577.1f,5.521f,-259.7f,592.7f,5.536f,-260f,609.2f,5.673f,-266.6f,625.8f,5.681f,-275.3f,637.2f,5.98f,-287.9f,643.5f,6.524f,-304.4f,647.8f,7.731f,-322.9f,649.2f,8.83f,-341.2f,645.5f,9.758f,-359.2f,641.8f,10.57f,-377.1f,637.5f,11.32f,-394.9f,633.8f,12.09f,-413f,630.2f,12.87f,-431.1f,626.9f,13.65f,-449.2f,623.2f,14.43f,-467.1f,619.5f,15.2f,-484.9f,615.9f,15.99f,-502.7f,612.4f,16.78f,-520.8f,609.1f,17.56f,-538.7f,606.3f,18.33f,-556.6f,603.1f,19.09f,-574.6f,600.8f,19.84f,-592.7f,596.6f,20.53f,-610f,590.4f,21.21f,-626.5f,586.1f,21.66f,-643.9f,578.2f,22.27f,-660.2f,565.8f,23.26f,-673.1f,551.5f,23.85f,-684.5f,537.3f,24.29f,-693.4f,522.5f,24.88f,-701.2f,502.6f,26.11f,-708.5f,483.1f,27.4f,-715f,465.6f,28.76f,-718.8f,447.7f,30.48f,-721f,429.6f,32.79f,-721.6f,411.5f,35.32f,-721.8f,393.4f,38.14f,-721.8f,375.3f,41.01f,-721.1f,357.2f,43.63f,-720.4f,338.9f,45.85f,-719.5f,320.6f,47.65f,-720f,302.5f,49.12f,-721.8f,284.2f,49.91f,-722f,266.1f,50.75f,-721.8f,248f,51.6f,-721.1f,229.9f,52.98f,-719.5f,211.4f,54.62f,-717.8f,193.6f,55.88f,-716.9f,181f,56.93f,-715.5f,170.3f,57.06f,-717.5f,159.7f,57.14f,-721f,147.3f,57.03f,-725.2f,134f,56.99f,-730.3f,119.9f,57.01f,-733.3f,106.6f,57.88f,-737.3f,93.7f,58.32f,-738.9f,79.87f,57.82f,-736.2f,79.41f,56.84f,-725.4f,77.53f,54.88f,-714.7f,76.89f,51.27f,-700.9f,68.47f,48.1f,-691.1f,59.62f,45.34f,-683.6f,47.72f,44.12f,-676.4f,30.01f,41.79f,-672.2f,11.54f,39.43f,-669.3f,-6.463f,36.79f,-672.5f,-24.68f,34.26f,-675.1f,-42.89f,31.75f,-677.3f,-61.71f,29.48f,-681.1f,-85.61f,27.17f,-677.3f,-108.9f,25.76f,-662.8f,-126.4f,24.6f,-648f,-139.1f,23.79f,-629.3f,-144.8f,22.49f,-606.4f,-147.4f,21.33f,-586.7f,-145.9f,20.34f,-568.9f,-142.3f,19.44f,-553.3f,-130.3f,18f,-528.6f,-113.8f,15.9f,-492.6f,-104.1f,14.73f,-472.3f,-97.49f,13.85f,-457.7f,-91.04f,12.82f,-440.9f,-86.09f,11.67f,-422.3f,-85.55f,10.82f,-402.1f,-87.88f,10.06f,-383.9f,-95.84f,9.198f,-368.4f,-107.3f,8.613f,-354.6f,-121.1f,8.209f,-342.7f,-137f,8.053f,-333.2f,-153.3f,7.908f,-324.3f,-170f,7.788f,-316.4f,-186.6f,7.674f,-308.6f,-203.2f,7.56f,-300.9f,-220.1f,7.47f,-293.7f,-236.8f,7.35f,-285.5f,-253f,7.234f,-276.5f,-269.2f,6.995f,-268.4f,-284.8f,6.757f,-259.6f,-300.1f,6.612f,-253.3f,-313.8f,6.511f,-248.3f,-327.9f,6.508f,-238.7f,-328.8f,6.546f,-225.6f,-324f,6.535f,-213f,-314f,6.51f,-201.5f,-299.1f,6.324f,-190.4f,-283.3f,6.095f,-180.7f,-267.9f,5.805f,-170.6f,-252.8f,5.539f,-160.5f,-237.7f,5.251f,-150.2f,-222.7f,5.056f,-139.5f,-207.9f,4.936f,-128.7f,-192.7f,4.93f,-118.5f,-177.7f,4.997f,-108.3f,-162.6f,5.143f,-97.98f,-147.5f,5.369f,-87.61f,-132.3f,5.653f,-77.38f,-116.4f,6.003f,-67.74f,-100.5f,6.361f,-57.64f,-82.59f,6.8f,-46.1f});
  }
}
protected class MFFloat26 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.005f,0.01f,0.015f,0.02f,0.025f,0.03f,0.035f,0.04f,0.045f,0.05f,0.055f,0.06f,0.065f,0.07f,0.075f,0.08f,0.085f,0.09f,0.095f,0.1f,0.105f,0.11f,0.115f,0.12f,0.125f,0.13f,0.135f,0.14f,0.145f,0.15f,0.155f,0.16f,0.165f,0.17f,0.175f,0.18f,0.185f,0.19f,0.195f,0.2f,0.205f,0.21f,0.215f,0.22f,0.225f,0.23f,0.235f,0.24f,0.245f,0.25f,0.255f,0.26f,0.265f,0.27f,0.275f,0.28f,0.285f,0.29f,0.295f,0.3f,0.305f,0.31f,0.315f,0.32f,0.325f,0.33f,0.335f,0.34f,0.345f,0.35f,0.355f,0.36f,0.365f,0.37f,0.375f,0.38f,0.385f,0.39f,0.395f,0.4f,0.405f,0.41f,0.415f,0.42f,0.425f,0.43f,0.435f,0.44f,0.445f,0.45f,0.455f,0.46f,0.465f,0.47f,0.475f,0.48f,0.485f,0.49f,0.495f,0.5f,0.505f,0.51f,0.515f,0.52f,0.525f,0.53f,0.535f,0.54f,0.545f,0.55f,0.555f,0.56f,0.565f,0.57f,0.575f,0.58f,0.585f,0.59f,0.595f,0.6f,0.605f,0.61f,0.615f,0.62f,0.625f,0.63f,0.635f,0.64f,0.645f,0.65f,0.655f,0.66f,0.665f,0.67f,0.675f,0.68f,0.685f,0.69f,0.695f,0.7f,0.705f,0.71f,0.715f,0.72f,0.725f,0.73f,0.735f,0.74f,0.745f,0.75f,0.755f,0.76f,0.765f,0.77f,0.775f,0.78f,0.785f,0.79f,0.795f,0.8f,0.805f,0.81f,0.815f,0.82f,0.825f,0.83f,0.835f,0.84f,0.845f,0.85f,0.855f,0.86f,0.865f,0.87f,0.875f,0.88f,0.885f,0.89f,0.895f,0.9f,0.905f,0.91f,0.915f,0.92f,0.925f,0.93f,0.935f,0.94f,0.945f,0.95f,0.955f,0.96f,0.965f,0.97f,0.975f,0.98f,0.985f,0.99f,0.995f,1f});
  }
}
protected class MFRotation27 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0.006813f,-0.9999f,0.01227f,-4.155f,0.008468f,-0.9999f,0.01499f,-4.17f,0.0112f,-0.9997f,0.01951f,-4.184f,0.012f,-0.9997f,0.01954f,-4.243f,0.01241f,-0.9997f,0.01934f,-4.282f,0.0113f,-0.9998f,0.01751f,-4.287f,0.00833f,-0.9999f,0.01283f,-4.293f,0.005032f,-1f,0.007728f,-4.296f,0.0001064f,-1f,0.00016f,-4.315f,-0.004939f,-1f,-0.007298f,-4.331f,-0.01123f,-0.9998f,-0.01653f,-4.335f,-0.01465f,-0.9997f,-0.0202f,-4.396f,-0.01819f,-0.9996f,-0.02355f,-4.457f,-0.01259f,-0.9998f,-0.01455f,-4.568f,-0.01216f,-0.9998f,-0.01333f,-4.621f,-0.01397f,-0.9998f,-0.01528f,-4.623f,0.02539f,0.9993f,0.02583f,-1.589f,0.0371f,0.9987f,0.0355f,-1.528f,0.04743f,0.9978f,0.04625f,-1.548f,0.04668f,0.9979f,0.04507f,-1.538f,0.04263f,0.9982f,0.04123f,-1.539f,0.01831f,0.9997f,0.01608f,-1.442f,0.002981f,1f,0.002377f,-1.346f,0.003686f,1f,0.002119f,-1.044f,0.0197f,0.9998f,0.006598f,-0.6466f,0.06883f,0.9976f,0.01236f,-0.3561f,0.1277f,-0.9918f,-0.009755f,-0.1537f,0.0265f,-0.9996f,-0.007593f,-0.5582f,0.00428f,-1f,-0.002994f,-1.221f,0.003623f,-1f,-0.003378f,-1.501f,0.003552f,-1f,-0.003945f,-1.676f,0.003677f,-1f,-0.004492f,-1.77f,0.003642f,-1f,-0.004669f,-1.817f,0.003532f,-1f,-0.004394f,-1.787f,0.003678f,-1f,-0.004347f,-1.737f,0.003838f,-1f,-0.004295f,-1.683f,0.00444f,-1f,-0.004325f,-1.545f,0.004366f,-1f,-0.004015f,-1.487f,0.003943f,-1f,-0.003682f,-1.502f,0.002829f,-1f,-0.002169f,-1.308f,0.001765f,-1f,-0.001138f,-1.145f,0.001966f,-1f,-0.000992f,-0.9346f,0.004464f,-1f,-0.001472f,-0.6368f,0.01489f,-0.9999f,-0.002438f,-0.3246f,0.0684f,-0.9977f,-0.002774f,-0.08126f,0.05839f,0.9983f,0.003113f,-0.1067f,0.02621f,0.9997f,0.003279f,-0.249f,0.02607f,0.9997f,0.003471f,-0.2649f,0.02794f,0.9996f,0.003665f,-0.261f,0.02929f,0.9996f,0.003668f,-0.2492f,0.03071f,0.9995f,0.003686f,-0.239f,0.03326f,0.9994f,0.003678f,-0.2204f,0.03103f,0.9995f,0.00367f,-0.2355f,0.02881f,0.9996f,0.00366f,-0.2528f,0.02226f,0.9997f,0.00383f,-0.3409f,0.01283f,0.9999f,0.003359f,-0.5122f,0.006523f,1f,0.002811f,-0.8137f,-0.001283f,1f,-0.0006491f,-0.9365f,-0.005889f,1f,-0.003555f,-1.086f,-0.003506f,1f,-0.002509f,-1.242f,-0.002375f,1f,-0.001917f,-1.358f,-0.00105f,1f,-0.000975f,-1.497f,-0.0005828f,1f,-0.0005423f,-1.499f,0f,1f,0f,-1.523f,0.0006321f,1f,0.000621f,-1.553f,-0.001247f,-1f,-0.001276f,-4.689f,-0.002221f,-1f,-0.002371f,-4.647f,0.0006834f,-1f,0.0007693f,-4.594f,0.002608f,-1f,0.003065f,-4.552f,0.005679f,-1f,0.00685f,-4.526f,0.001657f,-1f,0.002102f,-4.476f,-0.002623f,-1f,-0.003525f,-4.421f,-0.004588f,-1f,-0.006159f,-4.422f,-0.005234f,-1f,-0.007088f,-4.414f,-0.004443f,-1f,-0.006067f,-4.406f,-0.003333f,-1f,-0.004585f,-4.399f,-0.002337f,-1f,-0.003232f,-4.394f,-0.001732f,-1f,-0.002339f,-4.417f,-0.001067f,-1f,-0.001414f,-4.434f,-0.0004932f,-1f,-0.0006638f,-4.42f,0.00133f,-1f,0.001463f,-4.617f,-0.002762f,1f,-0.002598f,-1.51f,0.0001712f,1f,0.0001324f,-1.317f,-0.003318f,1f,-0.001938f,-1.057f,-0.008097f,1f,-0.003699f,-0.857f,-0.04174f,0.9991f,-0.01169f,-0.5467f,-0.1274f,0.9917f,-0.01805f,-0.2839f,-0.3406f,0.9399f,-0.0244f,-0.1521f,-0.9828f,-0.1844f,0.004405f,-0.04859f,-0.2223f,-0.9748f,0.01955f,-0.18f,-0.1959f,-0.9805f,0.01769f,-0.1837f,-0.1755f,-0.9843f,0.01672f,-0.1929f,-0.2006f,-0.9795f,0.01711f,-0.1737f,-0.2069f,-0.9782f,0.01709f,-0.1686f,-0.213f,-0.9769f,0.01709f,-0.1639f,-0.2005f,-0.9796f,0.01736f,-0.1764f,-0.2025f,-0.9791f,0.01743f,-0.1754f,-0.2127f,-0.977f,0.01741f,-0.1671f,-0.222f,-0.9749f,0.01722f,-0.1588f,-0.2296f,-0.9731f,0.01704f,-0.1522f,-0.2331f,-0.9723f,0.01676f,-0.1476f,-0.2018f,-0.9793f,0.01638f,-0.1654f,-0.1775f,-0.984f,0.01591f,-0.1816f,-0.1088f,-0.9939f,0.01501f,-0.2757f,-0.07828f,-0.9968f,0.01412f,-0.3581f,-0.0632f,-0.9979f,0.01267f,-0.3964f,-0.05145f,-0.9986f,0.01578f,-0.5959f,-0.04383f,-0.9989f,0.01929f,-0.8299f,-0.02789f,-0.9995f,0.01431f,-0.9485f,-0.02498f,-0.9996f,0.01456f,-1.056f,-0.03264f,-0.9993f,0.02078f,-1.135f,-0.04034f,-0.9988f,0.02832f,-1.225f,-0.04472f,-0.9984f,0.03358f,-1.29f,-0.05088f,-0.9978f,0.04226f,-1.388f,-0.05779f,-0.997f,0.05194f,-1.467f,-0.06605f,-0.9958f,0.06289f,-1.526f,-0.06953f,-0.9953f,0.06736f,-1.544f,-0.07211f,-0.9949f,0.07119f,-1.563f,-0.0676f,-0.9954f,0.06765f,-1.576f,-0.06018f,-0.9964f,0.05985f,-1.569f,-0.0499f,-0.9976f,0.049f,-1.555f,-0.04129f,-0.9984f,0.03873f,-1.509f,-0.03193f,-0.9991f,0.02935f,-1.488f,-0.02117f,-0.9996f,0.02068f,-1.548f,-0.02214f,-0.9995f,0.02215f,-1.572f,-0.02553f,-0.9993f,0.02612f,-1.594f,-0.03197f,-0.9989f,0.03307f,-1.606f,-0.03325f,-0.9989f,0.0339f,-1.591f,-0.0253f,-0.9994f,0.02416f,-1.525f,-0.01739f,-0.9997f,0.0154f,-1.45f,0.002328f,-1f,-0.001778f,-1.304f,0.005608f,-1f,-0.00414f,-1.272f,0.0096f,-0.9999f,-0.007223f,-1.29f,0.007995f,-0.9999f,-0.006446f,-1.357f,0.008529f,-0.9999f,-0.007984f,-1.505f,0.009671f,-0.9999f,-0.01052f,-1.655f,0.02633f,-0.9989f,-0.03954f,-1.968f,0.02941f,-0.9971f,-0.0705f,-2.353f,0.01406f,-0.9956f,-0.09264f,-2.842f,0.02508f,-0.993f,-0.1156f,-2.717f,0.03637f,-0.9909f,-0.1293f,-2.598f,0.05382f,-0.993f,-0.105f,-2.2f,0.05445f,-0.9947f,-0.08679f,-2.026f,0.04423f,-0.9972f,-0.06055f,-1.882f,0.06106f,-0.9958f,-0.06866f,-1.692f,0.06938f,-0.9952f,-0.06964f,-1.579f,0.08475f,-0.9938f,-0.07195f,-1.414f,0.07884f,-0.9945f,-0.06865f,-1.438f,0.07166f,-0.9953f,-0.06499f,-1.478f,0.05672f,-0.9968f,-0.05656f,-1.571f,0.0359f,-0.9983f,-0.04621f,-1.822f,0.01567f,-0.9994f,-0.02997f,-2.178f,0.01129f,-0.9995f,-0.02859f,-2.39f,0.006174f,-0.9997f,-0.02543f,-2.665f,0.003213f,-0.9995f,-0.03158f,-2.939f,0.0004052f,-0.9995f,-0.03242f,-3.117f,-0.002454f,-0.9995f,-0.03144f,-3.297f,-0.004565f,-0.9995f,-0.03087f,-3.435f,-0.006414f,-0.9995f,-0.02982f,-3.565f,-0.006017f,-0.9995f,-0.03018f,-3.535f,-0.005782f,-0.9995f,-0.03043f,-3.517f,-0.004953f,-0.9995f,-0.03145f,-3.454f,-0.00336f,-0.9995f,-0.03152f,-3.354f,-0.001179f,-0.9995f,-0.03065f,-3.218f,0.001952f,-0.9997f,-0.02531f,-2.988f,0.004557f,-0.9997f,-0.02433f,-2.771f,0.007829f,-0.9997f,-0.02317f,-2.49f,0.007298f,-0.9998f,-0.0166f,-2.313f,0.006208f,-0.9999f,-0.01167f,-2.164f,0.004698f,-1f,-0.007807f,-2.058f,0.00454f,-1f,-0.007213f,-2.018f,0.004463f,-1f,-0.006813f,-1.982f,0.00443f,-1f,-0.006738f,-1.978f,0.004412f,-1f,-0.006705f,-1.978f,0.004378f,-1f,-0.006671f,-1.98f,0.004624f,-1f,-0.007342f,-2.018f,0.004843f,-1f,-0.007982f,-2.051f,0.005715f,-0.9999f,-0.00945f,-2.054f,0.005056f,-0.9999f,-0.008898f,-2.108f,0.003634f,-1f,-0.006937f,-2.177f,0.002201f,-1f,-0.005743f,-2.41f,0.0006766f,-1f,-0.00403f,-2.809f,-0.0006182f,-1f,-0.004311f,-3.426f,-0.001735f,-1f,-0.005669f,-3.736f,-0.002944f,-1f,-0.00691f,-3.947f,-0.004618f,-0.9999f,-0.009269f,-4.066f,-0.005489f,-0.9999f,-0.01031f,-4.12f,-0.005622f,-0.9999f,-0.01089f,-4.094f,-0.005248f,-0.9999f,-0.01027f,-4.086f,-0.004855f,-0.9999f,-0.00961f,-4.077f,-0.003567f,-1f,-0.007168f,-4.065f,-0.002444f,-1f,-0.004901f,-4.067f,-0.001167f,-1f,-0.002277f,-4.089f,-0.0001237f,-1f,-0.0002417f,-4.088f,0.0009202f,-1f,0.001799f,-4.087f,0.001855f,-1f,0.003596f,-4.094f,0.002665f,-1f,0.005084f,-4.107f,0.003413f,-1f,0.006335f,-4.13f,0.003873f,-1f,0.00724f,-4.124f,0.004619f,-1f,0.008618f,-4.126f,0.006813f,-0.9999f,0.01227f,-4.155f});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"originals/car/textures/wall-stone-001.jpg","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/textures/wall-stone-001.jpg"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"originals/car/CarControlScript.class","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/CarControlScript.class"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"body2Axis","hinge1Angle"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"body2Axis","hinge1Angle"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"body2Axis"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"body2Axis"});
  }
}
protected class MFFloat34 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.8f,0.9f,1f});
  }
}
protected class MFColor35 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f,1f,1f,0f,1f,0f,0f,0f,0f,1f});
  }
}
protected class MFFloat36 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-1f,0f,1f});
  }
}
protected class MFRotation37 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat38 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-1f,0f,1f});
  }
}
protected class MFRotation39 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat40 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation41 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat42 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation43 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat44 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation45 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat46 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation47 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat48 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation49 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat50 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {-0.5236f,0f,0.5236f});
  }
}
protected class MFRotation51 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0.5236f,0f,1f,0f,0f,0f,1f,0f,-0.5236f});
  }
}
protected class MFFloat52 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.5712f,3.142f});
  }
}
protected class MFColor53 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"originals/car/CameraControl.class","http://www.web3d.org/x3d/content/examples/Basic/RigidBodyPhysics/originals/car/CameraControl.class"});
  }
}
}

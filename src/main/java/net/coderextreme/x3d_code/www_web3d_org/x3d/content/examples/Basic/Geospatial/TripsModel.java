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
public class TripsModel {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new TripsModel().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/TripsModel.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("TripsModel.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Individual trip locations and links, integrated as Inline into TripsAroundWorld."))
        .addMeta(new metaObject().setName("creator").setContent("Martin Reddy, SRI"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/TripsModel.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("TripsModel.x3d"))
        .addChild(new GroupObject()
          .addChild(new GeoViewpointObject().setDescription("Model 1").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-22.9062d,-43.1748d,5000100d}))
          .addChild(new GeoMetadataObject().setSummary(new MFStringObject(new MFString0().getArray())))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {-22.9062d,-43.1748d,50100d})
            .addChild(new AnchorObject().setDescription("Rio De Janeiro").setParameter(new MFStringObject(new MFString1().getArray())).setUrl(new MFStringObject(new MFString2().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 2").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {20.9458d,-86.8608d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {20.9458d,-86.8608d,50100d})
            .addChild(new AnchorObject().setDescription("Cancun").setParameter(new MFStringObject(new MFString3().getArray())).setUrl(new MFStringObject(new MFString4().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 3").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {20.9817d,-89.6103d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {20.9817d,-89.6103d,50100d})
            .addChild(new AnchorObject().setDescription("Merida").setParameter(new MFStringObject(new MFString5().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 4").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {20.405d,-89.53d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {20.405d,-89.53d,50100d})
            .addChild(new AnchorObject().setDescription("Uxmal").setParameter(new MFStringObject(new MFString6().getArray())).setUrl(new MFStringObject(new MFString7().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 5").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.5758d,77.1958d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {28.5758d,77.1958d,50100d})
            .addChild(new AnchorObject().setDescription("New Delhi").setParameter(new MFStringObject(new MFString8().getArray())).setUrl(new MFStringObject(new MFString9().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 6").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {27.1892d,78.0128d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {27.1892d,78.0128d,50100d})
            .addChild(new AnchorObject().setDescription("Agra").setParameter(new MFStringObject(new MFString10().getArray())).setUrl(new MFStringObject(new MFString11().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 7").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {25.3111d,83.012d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {25.3111d,83.012d,50100d})
            .addChild(new AnchorObject().setDescription("Varanasi").setParameter(new MFStringObject(new MFString12().getArray())).setUrl(new MFStringObject(new MFString13().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 8").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {25.4438d,78.5688d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {25.4438d,78.5688d,50100d})
            .addChild(new AnchorObject().setDescription("Khajuraho").setParameter(new MFStringObject(new MFString14().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 9").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {13.7342d,100.5292d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {13.7342d,100.5292d,50100d})
            .addChild(new AnchorObject().setDescription("Bangkok").setParameter(new MFStringObject(new MFString15().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 10").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {22.2766d,114.1525d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {22.2766d,114.1525d,50100d})
            .addChild(new AnchorObject().setDescription("Hong Kong").setParameter(new MFStringObject(new MFString16().getArray())).setUrl(new MFStringObject(new MFString17().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 11").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {22.19532d,113.54744d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {22.19532d,113.54744d,50100d})
            .addChild(new AnchorObject().setDescription("Macau").setParameter(new MFStringObject(new MFString18().getArray())).setUrl(new MFStringObject(new MFString19().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 12").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-31.9397d,115.7619d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {-31.9397d,115.7619d,50100d})
            .addChild(new AnchorObject().setDescription("Perth").setParameter(new MFStringObject(new MFString20().getArray())).setUrl(new MFStringObject(new MFString21().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 13").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-23.7d,133.8717d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {-23.7d,133.8717d,50100d})
            .addChild(new AnchorObject().setDescription("Alice Springs").setParameter(new MFStringObject(new MFString22().getArray())).setUrl(new MFStringObject(new MFString23().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 14").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-34.9333d,138.6d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {-34.9333d,138.6d,50100d})
            .addChild(new AnchorObject().setDescription("Adelaide").setParameter(new MFStringObject(new MFString24().getArray())).setUrl(new MFStringObject(new MFString25().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 15").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {-33.9689d,151.1283d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {-33.9689d,151.1283d,50100d})
            .addChild(new AnchorObject().setDescription("Sydney").setParameter(new MFStringObject(new MFString26().getArray())).setUrl(new MFStringObject(new MFString27().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 16").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.97d,23.72d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.97d,23.72d,50100d})
            .addChild(new AnchorObject().setDescription("Athens").setParameter(new MFStringObject(new MFString28().getArray())).setUrl(new MFStringObject(new MFString29().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 17").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {35.2667d,25.7167d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {35.2667d,25.7167d,50100d})
            .addChild(new AnchorObject().setDescription("Elounda").setParameter(new MFStringObject(new MFString30().getArray())).setUrl(new MFStringObject(new MFString31().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 18").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.129d,-5.352d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {36.129d,-5.352d,50100d})
            .addChild(new AnchorObject().setDescription("Gibraltar").setParameter(new MFStringObject(new MFString32().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 19").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {48.85424d,2.34486d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {48.85424d,2.34486d,50100d})
            .addChild(new AnchorObject().setDescription("Paris").setParameter(new MFStringObject(new MFString33().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 20").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {44.84138d,1.75535d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {44.84138d,1.75535d,50100d})
            .addChild(new AnchorObject().setDescription("Padirac").setParameter(new MFStringObject(new MFString34().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 21").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {57.71622d,-3.28994d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {57.71622d,-3.28994d,50100d})
            .addChild(new AnchorObject().setDescription("Lossiemouth").setParameter(new MFStringObject(new MFString35().getArray())).setUrl(new MFStringObject(new MFString36().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 22").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {55.85767d,-4.24283d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {55.85767d,-4.24283d,50100d})
            .addChild(new AnchorObject().setDescription("Glasgow").setParameter(new MFStringObject(new MFString37().getArray())).setUrl(new MFStringObject(new MFString38().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 23").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {55.95381d,-3.20087d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {55.95381d,-3.20087d,50100d})
            .addChild(new AnchorObject().setDescription("Edinburgh").setParameter(new MFStringObject(new MFString39().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 24").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.50595d,-0.12689d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {51.50595d,-0.12689d,50100d})
            .addChild(new AnchorObject().setDescription("London").setParameter(new MFStringObject(new MFString40().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 25").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.88481d,0.90342d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {51.88481d,0.90342d,50100d})
            .addChild(new AnchorObject().setDescription("Colchester").setParameter(new MFStringObject(new MFString41().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 26").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {54.77742d,-1.573719d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {54.77742d,-1.573719d,50100d})
            .addChild(new AnchorObject().setDescription("Durham").setParameter(new MFStringObject(new MFString42().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 27").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {54.9921d,-7.3116d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {54.9921d,-7.3116d,50100d})
            .addChild(new AnchorObject().setDescription("Derry").setParameter(new MFStringObject(new MFString43().getArray())).setUrl(new MFStringObject(new MFString44().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 28").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {54.5938d,-5.9231d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {54.5938d,-5.9231d,50100d})
            .addChild(new AnchorObject().setDescription("Belfast").setParameter(new MFStringObject(new MFString45().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 29").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.78572d,-122.42142d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.78572d,-122.42142d,50100d})
            .addChild(new AnchorObject().setDescription("San Francisco CA").setParameter(new MFStringObject(new MFString46().getArray())).setUrl(new MFStringObject(new MFString47().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 30").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {34.052207d,-118.24344d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {34.052207d,-118.24344d,50100d})
            .addChild(new AnchorObject().setDescription("Los Angeles CA").setParameter(new MFStringObject(new MFString48().getArray())).setUrl(new MFStringObject(new MFString49().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 31").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {37.893026d,-119.581559d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.893026d,-119.581559d,50100d})
            .addChild(new AnchorObject().setDescription("Yosemite").setParameter(new MFStringObject(new MFString50().getArray())).setUrl(new MFStringObject(new MFString51().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 32").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.522546d,-116.917641d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {36.522546d,-116.917641d,50100d})
            .addChild(new AnchorObject().setDescription("Death Valley").setParameter(new MFStringObject(new MFString52().getArray())).setUrl(new MFStringObject(new MFString53().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 33").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {40.755486d,-73.986148d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {40.755486d,-73.986148d,50100d})
            .addChild(new AnchorObject().setDescription("New York NY").setParameter(new MFStringObject(new MFString54().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 34").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {38.892076d,-77.031942d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {38.892076d,-77.031942d,50100d})
            .addChild(new AnchorObject().setDescription("Washington DC").setParameter(new MFStringObject(new MFString55().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 35").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {28.564086d,-81.364457d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {28.564086d,-81.364457d,50100d})
            .addChild(new AnchorObject().setDescription("Orlando FL").setParameter(new MFStringObject(new MFString56().getArray())).setUrl(new MFStringObject(new MFString57().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 36").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {29.955863d,-90.072585d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {29.955863d,-90.072585d,50100d})
            .addChild(new AnchorObject().setDescription("New Orleans LA").setParameter(new MFStringObject(new MFString58().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 37").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {40.026881d,-105.251025d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {40.026881d,-105.251025d,50100d})
            .addChild(new AnchorObject().setDescription("Boulder CO").setParameter(new MFStringObject(new MFString59().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 38").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {39.118556d,-94.627072d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {39.118556d,-94.627072d,50100d})
            .addChild(new AnchorObject().setDescription("Kansas City KS").setParameter(new MFStringObject(new MFString60().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 39").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.828402d,-108.004633d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {36.828402d,-108.004633d,50100d})
            .addChild(new AnchorObject().setDescription("Aztec NM").setParameter(new MFStringObject(new MFString61().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 40").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {35.678502d,-105.954149d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {35.678502d,-105.954149d,50100d})
            .addChild(new AnchorObject().setDescription("Santa Fe NM").setParameter(new MFStringObject(new MFString62().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 41").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.158861d,-115.147437d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {36.158861d,-115.147437d,50100d})
            .addChild(new AnchorObject().setDescription("Las Vegas NV").setParameter(new MFStringObject(new MFString63().getArray())).setUrl(new MFStringObject(new MFString64().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 42").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {47.612224d,-122.338469d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {47.612224d,-122.338469d,50100d})
            .addChild(new AnchorObject().setDescription("Seattle WA").setParameter(new MFStringObject(new MFString65().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 43").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {41.39d,-70.65d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {41.39d,-70.65d,50100d})
            .addChild(new AnchorObject().setDescription("Martha's Vineyard MA").setParameter(new MFStringObject(new MFString66().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 44").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {36.046441d,-112.153457d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {36.046441d,-112.153457d,50100d})
            .addChild(new AnchorObject().setDescription("Grand Canyon AZ").setParameter(new MFStringObject(new MFString67().getArray())).setUrl(new MFStringObject(new MFString68().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 45").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {40.440219d,-121.527441d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {40.440219d,-121.527441d,50100d})
            .addChild(new AnchorObject().setDescription("Lassen Park CA").setParameter(new MFStringObject(new MFString69().getArray())).setUrl(new MFStringObject(new MFString70().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))
          .addChild(new GeoViewpointObject().setDescription("Model 46").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {51.17d,-115.57d,5000100d}))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {51.17d,-115.57d,50100d})
            .addChild(new AnchorObject().setDescription("Banff").setParameter(new MFStringObject(new MFString71().getArray()))
              .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,3.14159f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
                  .setGeometry(new ConeObject().setBottomRadius(50000f).setHeight(100000f))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"title","Martin's Trips","software","text2geovrml (C) 2000 SRI International","models","46"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/rio1.jpg"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico1.jpg"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mx/mexico4.jpg"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/hauz.jpg"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/taj1.jpg"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/ganga.jpg"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/night3.jpg"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=hk/saopaulo.jpg"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/perthdad.jpg"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/ayers1.jpg"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/adelaide.jpg"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=oz/opera2.jpg"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/athens.jpg"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=greece/Spin.gif"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Lossie/snowman1.gif"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/Strath/Nonsense.gif"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=gif/NI/Gang.gif"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/sfbay.jpg"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/cement.jpg"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum4.jpg"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=death/badwater.jpg"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString56 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString57 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=jpg/disney1.jpg"});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString62 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString63 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum15.jpg"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString68 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=mum/mum8.jpg"});
  }
}
protected class MFString69 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"http://www.ai.sri.com/cgi-bin/show_img.pl?img=lassen/Lassen4.jpg"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_martinstrips"});
  }
}
}

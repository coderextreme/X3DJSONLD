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
public class SriCampus {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SriCampus().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/SriCampus.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("SriCampus.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This example shows a 3D model of the SRI International campus in Menlo Park, CA. All of the 152 buildings have been georeferenced to their actual location on the earth using GeoLocation nodes. These have been overlayed directly on a terrain model built using a GeoElevationGrid and 1m resolution USGS imagery."))
        .addMeta(new metaObject().setName("creator").setContent("Aaron Heller, SRI International"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.ai.sri.com/~reddy/geovrml/examples/sricampus/world.wrl"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("SriCampus.x3d"))
        .addChild(new GeoViewpointObject().setDEF("martins_office").setDescription("Martin's Office +1000m").setOrientation(new float[] {1f,0f,0f,-1.5707964f}).setPosition(new double[] {37.45657629289387d,-122.1772098019601d,1000d})
          .setGeoOrigin(new GeoOriginObject().setDEF("LVCS-ORIGIN").setGeoCoords(new double[] {37.45657629289387d,-122.1772098019601d,10d})))
        .addChild(new GroupObject()
          .addChild(new NavigationInfoObject().setSpeed(100f))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4572702942313d,-122.17285272090446d,13.575352419167757d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString0().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45855087547784d,-122.17299719228961d,6.5414795177057385d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString1().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455090143380325d,-122.17577908304841d,6.858270224183798d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString2().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45587247434353d,-122.17549681473791d,5.48073857370764d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.060658f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString3().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45696959896483d,-122.17349356475091d,2.5236815866082907d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.56828195f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString4().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45752986169077d,-122.17255239265334d,3.0489128064364195d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.55716646f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString5().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45508901792349d,-122.1744509895613d,5.380065024830401d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString6().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45636316454118d,-122.17448723463019d,2.573365761898458d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.54725033f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString7().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45502643073463d,-122.17742528313674d,3.3866771683096886d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString8().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45588879799328d,-122.17524623801918d,4.98465908691287d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1260338f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString9().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456517519745695d,-122.17328336441369d,2.713802792131901d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1507866f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString10().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45600155148939d,-122.17599240217977d,18.010228152386844d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.21222101f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString11().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45723685203812d,-122.17511987604118d,15.92335551790893d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString12().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45503421704476d,-122.17670563469521d,3.221325115300715d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString13().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45660302303386d,-122.17497866580095d,4.641824320890009d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString14().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455662812713115d,-122.17815579828473d,7.127999701537192d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString15().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454777118864726d,-122.17428652336147d,5.93625679705292d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5545655f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString16().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4586277365655d,-122.173191886012d,6.549256028607488d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString17().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456656900883765d,-122.17432461409655d,4.092642282135785d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString18().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45589196793829d,-122.17661290206827d,13.849743553437293d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString19().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454742097706344d,-122.176075551685d,9.548194108530879d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5448796f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString20().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.459343100583965d,-122.17577382427473d,2.365921502932906d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,2.5693567f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString21().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45829026053256d,-122.17403444710365d,5.760875140316784d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0156201f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString22().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45491557328823d,-122.17726006224677d,3.0214025918394327d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString23().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45591917814891d,-122.17571403160821d,8.78000576607883d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.2759828f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString24().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45657326482748d,-122.17430275688713d,2.487428056076169d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString25().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457954698100075d,-122.17548056555404d,17.594010497443378d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString26().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45590585076085d,-122.1751944596797d,3.552113295532763d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.50157756f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString27().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45610913695282d,-122.17399622245125d,4.362026927061379d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString28().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4547116922646d,-122.17681020280229d,3.355502273887396d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString29().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45766070886009d,-122.17599575766377d,5.076752241700888d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString30().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45796451160252d,-122.17613803796557d,6.220091599971056d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString31().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45677350057518d,-122.17749573363987d,2.197195878252387d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.9981249f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString32().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45807779112422d,-122.17411764890807d,5.709648999385536d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0156201f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString33().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454882244588006d,-122.17692956544983d,4.7519437577575445d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString34().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45597603145201d,-122.17611074695542d,18.00964650325477d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.21222101f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString35().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457230040769886d,-122.17267919332014d,13.204680165275931d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString36().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45480613981243d,-122.17386945372586d,4.2101172199472785d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString37().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45708528417106d,-122.17296111448651d,9.479117675684392d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString38().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4557183207063d,-122.17555223488635d,3.840058395639062d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString39().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45634044951326d,-122.1756935597244d,15.859837665222585d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,3.1311207f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString40().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45592566042719d,-122.17660938487437d,13.852261767722666d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString41().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457529892816005d,-122.17256711496873d,11.012683819048107d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.53855884f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString42().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45482242600392d,-122.17658734313235d,4.471417527645826d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString43().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45914867841565d,-122.17542440073804d,2.6793939722701907d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString44().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45657629289387d,-122.1772098019601d,17.19216455705464d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5530734f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString45().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455442192677d,-122.17682685627666d,8.63792418781668d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString46().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456380605079985d,-122.17571867583752d,7.213743315078318d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.54237884f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString47().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454818712921295d,-122.17585322698552d,4.202082556672394d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5448796f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString48().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4550502471287d,-122.17682036348906d,3.8518225820735097d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString49().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45746330669514d,-122.17345143211628d,2.9129314199090004d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.56828195f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString50().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454442875116044d,-122.17594377760844d,6.156108728609979d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.55922556f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString51().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45879701654415d,-122.17393522056128d,6.569330669008195d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString52().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45582234818999d,-122.17715115863376d,17.133673508651555d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5530734f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString53().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45585039052191d,-122.17529710799967d,6.946160456165671d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0208304f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString54().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457508873176856d,-122.172491886199d,14.514393392950296d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString55().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45513578302731d,-122.17717506959657d,3.4812645660713315d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString56().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45719839591745d,-122.17509532185987d,7.586426428519189d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.58450484f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString57().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4569883265308d,-122.1729676712078d,6.5581301134079695d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0149409f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString58().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45456145819844d,-122.17689486975709d,7.527868615463376d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString59().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45740319412557d,-122.17618841369759d,5.0026247035712d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString60().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455980832229784d,-122.1754127566971d,5.2845821883529425d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1260338f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString61().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4572507076156d,-122.17266351614354d,13.141504678875208d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString62().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45512771849234d,-122.17753368161324d,6.1585897551849484d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString63().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45648897149806d,-122.17474510430961d,4.042569777928293d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString64().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457545419520336d,-122.17647045693873d,6.57679077796638d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString65().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4567782426038d,-122.17300057286778d,8.243166682310402d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.60314816f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString66().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45460042628699d,-122.17581565926682d,6.317391004413366d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.55802435f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString67().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45671927239422d,-122.17710406092134d,17.201877245679498d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5530734f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString68().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45847639259631d,-122.1732855152507d,6.537731416523457d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString69().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455910343615315d,-122.17664992226594d,13.851592540740967d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString70().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45579582804456d,-122.17533034339407d,4.9784933580085635d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0204762f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString71().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455199117886465d,-122.17701342699323d,4.017314109019935d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString72().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45742307208743d,-122.17284002175455d,15.32203997951001d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString73().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455266201390465d,-122.17506929403226d,6.281517929397523d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString74().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.458249512657666d,-122.17582503824109d,13.063681640662253d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString75().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45703379139092d,-122.17608269698908d,17.61487079691142d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString76().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.459349758117824d,-122.17577994880298d,12.226319789886475d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.52879757f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString77().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455523631670935d,-122.17826624724431d,4.396789534017444d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.012785f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString78().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45748923066822d,-122.1757325976501d,17.814282183535397d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString79().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45622632561962d,-122.17423430878904d,4.528802731074393d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString80().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45501807177614d,-122.17719105822079d,4.006106214597821d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString81().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45465566409258d,-122.17698610464193d,3.2464131880551577d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString82().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45712962221045d,-122.17265941441853d,13.401793683879077d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString83().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45692498803204d,-122.17769601887738d,16.93729296978563d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString84().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456814457875936d,-122.1769710991232d,2.2080116970464587d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString85().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45440500608271d,-122.17564484966901d,5.874921953305602d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.55922556f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString86().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45887150100618d,-122.17364689701466d,6.572895417921245d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString87().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457302044512346d,-122.17262076560766d,13.290771765634418d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString88().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45787902024201d,-122.17202008954384d,4.758735476993024d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString89().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456270157439285d,-122.17655409213577d,17.732382902875543d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.21222101f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString90().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455202658874605d,-122.17537929382321d,10.800645593553782d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString91().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45826209565133d,-122.17595626355404d,11.577650134451687d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString92().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45544706135105d,-122.17542250128548d,6.491053903475404d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString93().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.458398889705016d,-122.1730916119198d,6.529909424483776d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString94().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45590814672539d,-122.1765990028583d,13.850803661160171d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString95().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456286881934034d,-122.17435595010173d,2.799916968680918d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5626132f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString96().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45598740170031d,-122.17375297634354d,4.297718069516122d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString97().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45632012788061d,-122.17701436276613d,8.888750216923654d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.2759828f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString98().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.456845922281055d,-122.17669512470076d,5.616073635406792d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString99().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455818973641165d,-122.17500576498591d,5.202997267246246d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString100().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45606574957878d,-122.17762711789798d,17.579336941242218d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5530734f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString101().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45679915195322d,-122.17630003052214d,18.843943851068616d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString102().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457331549143376d,-122.1726072752575d,13.708675358444452d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString103().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45520547056154d,-122.17781585094826d,3.2565740747377276d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString104().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.454810121643106d,-122.1772881517725d,3.4585653822869062d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString105().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4574835594975d,-122.17250934197735d,14.512516235001385d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString106().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457111007051886d,-122.17287436027812d,7.242378053255379d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.65482974f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString107().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.458031005215425d,-122.1719256683745d,4.770276533439755d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString108().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45515720353775d,-122.17406431710243d,4.3671683901920915d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString109().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45934859760897d,-122.17577724891385d,3.8770384145900607d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1220884f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString110().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45552187784782d,-122.1767457842618d,8.714063614606857d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString111().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45487218593971d,-122.177110948491d,4.0440065916627645d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString112().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45714986360583d,-122.17352452743128d,4.084409800358117d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString113().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45736742589547d,-122.17254854118927d,12.031191472895443d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.45392746f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString114().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45525714274129d,-122.17507028895217d,6.794414064846933d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString115().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45527295154821d,-122.17532124323364d,6.476923021487892d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString116().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45692705603369d,-122.1733747901541d,4.366944617591798d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5485743f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString117().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45785850917333d,-122.17548124695458d,17.76672370173037d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString118().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4562485875788d,-122.17668959142121d,18.037382354959846d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.21222101f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString119().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45810786809718d,-122.17212035970775d,4.777719925157726d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString120().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455266201390465d,-122.17506929403226d,6.281517929397523d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString121().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45592875610246d,-122.17663227644208d,13.852776668034494d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString122().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45795652492048d,-122.17221399048172d,4.766224743798375d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.33597755f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString123().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45714439718839d,-122.17676921602542d,5.741842704825103d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString124().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.458446345493876d,-122.17621659673107d,12.486853444948792d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString125().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45479119875997d,-122.17587485217825d,12.241555511020124d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString126().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455637529653934d,-122.17805175366064d,9.068381279706955d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString127().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45763170885517d,-122.17283667995618d,3.710161382332444d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.51614106f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString128().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4552030561581d,-122.17537929603283d,17.37209532316774d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString129().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45932899377421d,-122.17558236032434d,6.673216645605862d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString130().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45589059230768d,-122.17663857154662d,13.849952574819326d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.06768273f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString131().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45918042954255d,-122.1754082085766d,5.576121235266328d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5679538f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString132().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45513105519014d,-122.17542623141605d,15.226345616392791d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.6047001f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString133().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455833276710194d,-122.17782281798755d,4.371283515356481d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString134().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455470051193934d,-122.1764647666282d,4.49514652043581d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1285856f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString135().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45657234678347d,-122.17339401563034d,2.7787711387500167d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-2.1507866f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString136().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45631310248525d,-122.17629745601054d,23.58098861668259d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString137().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455171973416775d,-122.17478671098695d,5.2806648556143045d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString138().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457562174137806d,-122.17653367409845d,5.033575700595975d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString139().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45801521983128d,-122.1757853295299d,6.195992290042341d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString140().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45625863524508d,-122.17663801938741d,9.305874523706734d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.22040787f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString141().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.457739055012425d,-122.1734358580361d,5.76438597496599d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.0156201f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString142().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45598818694582d,-122.17605942042513d,9.153055736795068d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,0.22040787f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString143().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.4576116909627d,-122.17360001041664d,5.102806192822754d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString144().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45894836101852d,-122.17384159223147d,6.580874713137746d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString145().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45776336144376d,-122.17341476074354d,5.653091097250581d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5436424f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString146().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45516876487382d,-122.17770066739573d,3.311441686935723d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString147().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.455490754774395d,-122.1758039372311d,3.435827133245766d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5448796f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString148().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45752755262736d,-122.17293579558574d,11.593646936118603d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject()
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString149().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45714391701085d,-122.17638076991432d,4.629718789830804d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-0.5600868f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString150().getArray())))))))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {37.45871951472387d,-122.1737413157338d,6.561306121759117d})
            .setGeoOrigin(new GeoOriginObject().setUSE("LVCS-ORIGIN"))
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,0f})
              .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,-1.2557627f})
                .addChild(new TransformObject()
                  .addChild(new InlineObject().setUrl(new MFStringObject(new MFString151().getArray())))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus000.x3d","SriCampus000.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus000.x3d"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus001.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus001.x3d","SriCampus001.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus001.x3d"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d","SriCampus002.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus003.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus003.x3d","SriCampus003.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus003.x3d"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus004.x3d","SriCampus004.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus004.x3d"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus005.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d","SriCampus005.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus006.x3d","SriCampus006.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus005.x3d"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus007.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus007.x3d","SriCampus007.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus007.x3d"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus008.x3d","SriCampus008.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus008.x3d"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus009.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus009.x3d","SriCampus009.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus009.x3d"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus010.x3d","SriCampus010.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus010.x3d"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus011.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus011.x3d","SriCampus011.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus011.x3d"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus012.x3d","SriCampus012.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus012.x3d"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus013.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus013.x3d","SriCampus013.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus013.x3d"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus014.x3d","SriCampus014.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus014.x3d"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus015.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus015.x3d","SriCampus015.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus015.x3d"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus016.x3d","SriCampus016.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus016.x3d"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus017.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus017.x3d","SriCampus017.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus017.x3d"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus018.x3d","SriCampus018.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus018.x3d"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus019.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus019.x3d","SriCampus019.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus019.x3d"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus020.x3d","SriCampus020.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus020.x3d"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus021.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus021.x3d","SriCampus021.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus021.x3d"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus022.x3d","SriCampus022.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus022.x3d"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus023.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus023.x3d","SriCampus023.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus023.x3d"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus024.x3d","SriCampus024.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus024.x3d"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus025.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus025.x3d","SriCampus025.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus025.x3d"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus026.x3d","SriCampus026.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus026.x3d"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus027.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus027.x3d","SriCampus027.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus027.x3d"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus028.x3d","SriCampus028.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus028.x3d"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus029.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus029.x3d","SriCampus029.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus029.x3d"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus030.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus030.x3d","SriCampus030.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus030.x3d"});
  }
}
protected class MFString31 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus031.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus031.x3d","SriCampus031.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus031.x3d"});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus032.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus032.x3d","SriCampus032.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus032.x3d"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus033.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus033.x3d","SriCampus033.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus033.x3d"});
  }
}
protected class MFString34 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus034.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus034.x3d","SriCampus034.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus034.x3d"});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus035.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus035.x3d","SriCampus035.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus035.x3d"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus036.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus036.x3d","SriCampus036.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus036.x3d"});
  }
}
protected class MFString37 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus037.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus037.x3d","SriCampus037.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus037.x3d"});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus038.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus038.x3d","SriCampus038.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus038.x3d"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus039.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus039.x3d","SriCampus039.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus039.x3d"});
  }
}
protected class MFString40 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus040.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d","SriCampus040.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus040.x3d"});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus041.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus041.x3d","SriCampus041.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus041.x3d"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus042.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus042.x3d","SriCampus042.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus042.x3d"});
  }
}
protected class MFString43 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus043.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus043.x3d","SriCampus043.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus043.x3d"});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus044.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus044.x3d","SriCampus044.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus044.x3d"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus045.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus045.x3d","SriCampus045.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus045.x3d"});
  }
}
protected class MFString46 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus046.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus046.x3d","SriCampus046.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus046.x3d"});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus047.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus047.x3d","SriCampus047.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus047.x3d"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus048.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus048.x3d","SriCampus048.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus048.x3d"});
  }
}
protected class MFString49 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus049.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus049.x3d","SriCampus049.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus049.x3d"});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus050.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus050.x3d","SriCampus050.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus050.x3d"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus051.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus051.x3d","SriCampus051.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus051.x3d"});
  }
}
protected class MFString52 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus052.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus052.x3d","SriCampus052.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus052.x3d"});
  }
}
protected class MFString53 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus053.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus053.x3d","SriCampus053.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus053.x3d"});
  }
}
protected class MFString54 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus054.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus054.x3d","SriCampus054.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus054.x3d"});
  }
}
protected class MFString55 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus055.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus055.x3d","SriCampus055.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus055.x3d"});
  }
}
protected class MFString56 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus056.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus056.x3d","SriCampus056.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus056.x3d"});
  }
}
protected class MFString57 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus057.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus057.x3d","SriCampus057.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus057.x3d"});
  }
}
protected class MFString58 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus058.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus058.x3d","SriCampus058.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus058.x3d"});
  }
}
protected class MFString59 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus059.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus059.x3d","SriCampus059.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus059.x3d"});
  }
}
protected class MFString60 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus060.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus060.x3d","SriCampus060.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus060.x3d"});
  }
}
protected class MFString61 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus061.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus061.x3d","SriCampus061.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus061.x3d"});
  }
}
protected class MFString62 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus062.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus062.x3d","SriCampus062.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus062.x3d"});
  }
}
protected class MFString63 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus063.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus063.x3d","SriCampus063.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus063.x3d"});
  }
}
protected class MFString64 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus064.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus064.x3d","SriCampus064.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus064.x3d"});
  }
}
protected class MFString65 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus065.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus065.x3d","SriCampus065.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus065.x3d"});
  }
}
protected class MFString66 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus066.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus066.x3d","SriCampus066.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus066.x3d"});
  }
}
protected class MFString67 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus067.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus067.x3d","SriCampus067.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus067.x3d"});
  }
}
protected class MFString68 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus068.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus068.x3d","SriCampus068.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus068.x3d"});
  }
}
protected class MFString69 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus069.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus069.x3d","SriCampus069.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus069.x3d"});
  }
}
protected class MFString70 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus070.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus070.x3d","SriCampus070.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus070.x3d"});
  }
}
protected class MFString71 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus071.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus071.x3d","SriCampus071.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus071.x3d"});
  }
}
protected class MFString72 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus072.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus072.x3d","SriCampus072.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus072.x3d"});
  }
}
protected class MFString73 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus073.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus073.x3d","SriCampus073.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus073.x3d"});
  }
}
protected class MFString74 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus074.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus074.x3d","SriCampus074.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus074.x3d"});
  }
}
protected class MFString75 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus075.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus075.x3d","SriCampus075.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus075.x3d"});
  }
}
protected class MFString76 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus076.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus076.x3d","SriCampus076.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus076.x3d"});
  }
}
protected class MFString77 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus077.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus077.x3d","SriCampus077.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus077.x3d"});
  }
}
protected class MFString78 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus078.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus078.x3d","SriCampus078.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus078.x3d"});
  }
}
protected class MFString79 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus079.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus079.x3d","SriCampus079.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus079.x3d"});
  }
}
protected class MFString80 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus080.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus080.x3d","SriCampus080.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus080.x3d"});
  }
}
protected class MFString81 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus081.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus081.x3d","SriCampus081.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus081.x3d"});
  }
}
protected class MFString82 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus082.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus082.x3d","SriCampus082.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus082.x3d"});
  }
}
protected class MFString83 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus083.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus083.x3d","SriCampus083.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus083.x3d"});
  }
}
protected class MFString84 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus084.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus084.x3d","SriCampus084.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus084.x3d"});
  }
}
protected class MFString85 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus085.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus085.x3d","SriCampus085.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus085.x3d"});
  }
}
protected class MFString86 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus086.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus086.x3d","SriCampus086.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus086.x3d"});
  }
}
protected class MFString87 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus087.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus087.x3d","SriCampus087.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus087.x3d"});
  }
}
protected class MFString88 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus088.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus088.x3d","SriCampus088.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus088.x3d"});
  }
}
protected class MFString89 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus089.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus089.x3d","SriCampus089.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus089.x3d"});
  }
}
protected class MFString90 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus090.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus090.x3d","SriCampus090.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus090.x3d"});
  }
}
protected class MFString91 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus091.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus091.x3d","SriCampus091.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus091.x3d"});
  }
}
protected class MFString92 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus092.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus092.x3d","SriCampus092.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus092.x3d"});
  }
}
protected class MFString93 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus093.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus093.x3d","SriCampus093.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus093.x3d"});
  }
}
protected class MFString94 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus094.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus094.x3d","SriCampus094.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus094.x3d"});
  }
}
protected class MFString95 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus095.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus095.x3d","SriCampus095.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus095.x3d"});
  }
}
protected class MFString96 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus096.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus096.x3d","SriCampus096.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus096.x3d"});
  }
}
protected class MFString97 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus097.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus097.x3d","SriCampus097.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus097.x3d"});
  }
}
protected class MFString98 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus098.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus098.x3d","SriCampus098.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus098.x3d"});
  }
}
protected class MFString99 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus099.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus099.x3d","SriCampus099.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus099.x3d"});
  }
}
protected class MFString100 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus100.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus100.x3d","SriCampus100.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus100.x3d"});
  }
}
protected class MFString101 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus101.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus101.x3d","SriCampus101.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus101.x3d"});
  }
}
protected class MFString102 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus102.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus102.x3d","SriCampus102.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus102.x3d"});
  }
}
protected class MFString103 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus103.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus103.x3d","SriCampus103.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus103.x3d"});
  }
}
protected class MFString104 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus104.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus104.x3d","SriCampus104.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus104.x3d"});
  }
}
protected class MFString105 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus105.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus105.x3d","SriCampus105.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus105.x3d"});
  }
}
protected class MFString106 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus106.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus106.x3d","SriCampus106.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus106.x3d"});
  }
}
protected class MFString107 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus107.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus107.x3d","SriCampus107.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus107.x3d"});
  }
}
protected class MFString108 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus108.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus108.x3d","SriCampus108.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus108.x3d"});
  }
}
protected class MFString109 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus109.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus109.x3d","SriCampus109.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus109.x3d"});
  }
}
protected class MFString110 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus110.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus110.x3d","SriCampus110.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus110.x3d"});
  }
}
protected class MFString111 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus111.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus111.x3d","SriCampus111.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus111.x3d"});
  }
}
protected class MFString112 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus112.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus112.x3d","SriCampus112.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus112.x3d"});
  }
}
protected class MFString113 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus113.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus113.x3d","SriCampus113.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus113.x3d"});
  }
}
protected class MFString114 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus114.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus114.x3d","SriCampus114.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus114.x3d"});
  }
}
protected class MFString115 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus115.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus115.x3d","SriCampus115.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus115.x3d"});
  }
}
protected class MFString116 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus116.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus116.x3d","SriCampus116.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus116.x3d"});
  }
}
protected class MFString117 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus117.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus117.x3d","SriCampus117.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus117.x3d"});
  }
}
protected class MFString118 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus118.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus118.x3d","SriCampus118.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus118.x3d"});
  }
}
protected class MFString119 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus119.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus119.x3d","SriCampus119.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus119.x3d"});
  }
}
protected class MFString120 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus120.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus120.x3d","SriCampus120.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus120.x3d"});
  }
}
protected class MFString121 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus121.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus121.x3d","SriCampus121.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus121.x3d"});
  }
}
protected class MFString122 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus122.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus122.x3d","SriCampus122.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus122.x3d"});
  }
}
protected class MFString123 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus123.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus123.x3d","SriCampus123.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus123.x3d"});
  }
}
protected class MFString124 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus124.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus124.x3d","SriCampus124.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus124.x3d"});
  }
}
protected class MFString125 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus125.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus125.x3d","SriCampus125.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus125.x3d"});
  }
}
protected class MFString126 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus126.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus126.x3d","SriCampus126.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus126.x3d"});
  }
}
protected class MFString127 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus127.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus127.x3d","SriCampus127.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus127.x3d"});
  }
}
protected class MFString128 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus128.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus128.x3d","SriCampus128.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus128.x3d"});
  }
}
protected class MFString129 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus129.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d","SriCampus129.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d"});
  }
}
protected class MFString130 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus130.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus130.x3d","SriCampus130.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus130.x3d"});
  }
}
protected class MFString131 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus131.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus131.x3d","SriCampus131.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus131.x3d"});
  }
}
protected class MFString132 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus132.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus132.x3d","SriCampus132.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus132.x3d"});
  }
}
protected class MFString133 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus133.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus133.x3d","SriCampus133.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus133.x3d"});
  }
}
protected class MFString134 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus134.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus134.x3d","SriCampus134.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus134.x3d"});
  }
}
protected class MFString135 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus135.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus135.x3d","SriCampus135.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus135.x3d"});
  }
}
protected class MFString136 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus136.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus136.x3d","SriCampus136.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus136.x3d"});
  }
}
protected class MFString137 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus137.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus137.x3d","SriCampus137.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus137.x3d"});
  }
}
protected class MFString138 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus138.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus138.x3d","SriCampus138.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus138.x3d"});
  }
}
protected class MFString139 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus139.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus139.x3d","SriCampus139.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus139.x3d"});
  }
}
protected class MFString140 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus140.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus140.x3d","SriCampus140.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus140.x3d"});
  }
}
protected class MFString141 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus141.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus141.x3d","SriCampus141.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus141.x3d"});
  }
}
protected class MFString142 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus142.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus142.x3d","SriCampus142.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus142.x3d"});
  }
}
protected class MFString143 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus143.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus143.x3d","SriCampus143.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus143.x3d"});
  }
}
protected class MFString144 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus144.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus144.x3d","SriCampus144.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus144.x3d"});
  }
}
protected class MFString145 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus145.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus145.x3d","SriCampus145.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus145.x3d"});
  }
}
protected class MFString146 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus146.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus146.x3d","SriCampus146.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus146.x3d"});
  }
}
protected class MFString147 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus147.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus147.x3d","SriCampus147.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus147.x3d"});
  }
}
protected class MFString148 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus148.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus148.x3d","SriCampus148.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus148.x3d"});
  }
}
protected class MFString149 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus149.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d","SriCampus149.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus149.x3d"});
  }
}
protected class MFString150 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus150.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus150.x3d","SriCampus150.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus150.x3d"});
  }
}
protected class MFString151 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"SriCampus151.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus151.x3d","SriCampus151.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus151.x3d"});
  }
}
}

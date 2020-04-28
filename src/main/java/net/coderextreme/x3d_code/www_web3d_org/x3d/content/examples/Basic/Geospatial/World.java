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
public class World {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new World().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/World.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("World.x3d"))
        .addMeta(new metaObject().setName("description").setContent("World selector for different vertical exaggeration and texturing."))
        .addMeta(new metaObject().setName("creator").setContent("Martin Reddy SRI authored the original scene."))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("translated").setContent("22 April 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.geovrml.org/examples"))
        .addMeta(new metaObject().setName("subject").setContent("X3D geospatial example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/World.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("World.x3d"))
        .addChild(new GroupObject()
          .addChild(new GeoViewpointObject().setDescription("Initial GeoViewpoint").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new double[] {35d,-70d,13000000d}))
          .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyAngle(new MFFloatObject(new MFFloat1().getArray())).setSkyColor(new MFColorObject(new MFColor2().getArray())))
          .addChild(new GeoLocationObject().setGeoCoords(new double[] {35d,-70d,10000000d})
            .addChild(new TransformObject().setTranslation(new float[] {-1000000f,0f,-600000f})
              .addChild(new TouchSensorObject().setDEF("Touch1").setDescription("x1"))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString3().getArray()))))
                .setGeometry(new BoxObject().setDEF("BOX").setSize(new float[] {200000f,200000f,200000f}))))
            .addChild(new TransformObject().setTranslation(new float[] {-1000000f,0f,-300000f})
              .addChild(new TouchSensorObject().setDEF("Touch50").setDescription("x50"))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString4().getArray()))))
                .setGeometry(new BoxObject().setUSE("BOX"))))
            .addChild(new TransformObject().setTranslation(new float[] {-1000000f,0f,0f})
              .addChild(new TouchSensorObject().setDEF("Touch200").setDescription("x200"))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString5().getArray()))))
                .setGeometry(new BoxObject().setUSE("BOX"))))
            .addChild(new TransformObject().setTranslation(new float[] {-1000000f,0f,300000f})
              .addChild(new TouchSensorObject().setDEF("TouchShaded").setDescription("Shaded"))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString6().getArray()))))
                .setGeometry(new BoxObject().setUSE("BOX"))))
            .addChild(new TransformObject().setTranslation(new float[] {-1000000f,0f,600000f})
              .addChild(new TouchSensorObject().setDEF("TouchTextured").setDescription("Textured"))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString7().getArray()))))
                .setGeometry(new BoxObject().setUSE("BOX")))))
          .addChild(new SphereSensorObject().setDEF("GeoSphere").setDescription("click and drag to rotate"))
          .addChild(new TransformObject().setDEF("GeoXform")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.75f,0.75f,0.75f}))
                .setTexture(new ImageTextureObject().setDEF("TEX")))
              .setGeometry(new GeoElevationGridObject().setDEF("GEOEG").setGeoGridOrigin(new double[] {-90d,-180d,0d}).setHeight(new MFDoubleObject(new MFDouble8().getArray()).append(new MFDouble9().getArray()).append(new MFDouble10().getArray()).append(new MFDouble11().getArray()).append(new MFDouble12().getArray())).setSolid(false).setXDimension(84).setXSpacing(4.34d).setYScale(200f).setZDimension(42).setZSpacing(4.34d)))))
        .addChild(new ScriptObject().setDEF("Return1")
          .addField(new fieldObject().setType("SFFloat").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 1.0;\n"+
"}"))
        .addChild(new ScriptObject().setDEF("Return50")
          .addField(new fieldObject().setType("SFFloat").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 50.0;\n"+
"}"))
        .addChild(new ScriptObject().setDEF("Return200")
          .addField(new fieldObject().setType("SFFloat").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = 200.0;\n"+
"}"))
        .addChild(new ScriptObject().setDEF("ReturnShaded")
          .addField(new fieldObject().setType("MFString").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = new MFString('');\n"+
"}"))
        .addChild(new ScriptObject().setDEF("ReturnTextured")
          .addField(new fieldObject().setType("MFString").setName("value_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("set_value").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_value( value ) { \n"+
"           if ( value == true ) value_changed = new MFString ('images/earth.gif', 'https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/earth.gif'); \n"+
"// Browser.print ('value_changed=' + value_changed);\n"+
"}"))
        .addChild(new ROUTEObject().setFromField("rotation_changed").setFromNode("GeoSphere").setToField("set_rotation").setToNode("GeoXform"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("Touch1").setToField("set_value").setToNode("Return1"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Return1").setToField("set_yScale").setToNode("GEOEG"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("Touch50").setToField("set_value").setToNode("Return50"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Return50").setToField("set_yScale").setToNode("GEOEG"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("Touch200").setToField("set_value").setToNode("Return200"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("Return200").setToField("set_yScale").setToNode("GEOEG"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TouchTextured").setToField("set_value").setToNode("ReturnTextured"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("ReturnTextured").setToField("set_url").setToNode("TEX"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TouchShaded").setToField("set_value").setToNode("ReturnShaded"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("ReturnShaded").setToField("set_url").setToNode("TEX")))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f});
  }
}
protected class MFFloat1 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.57f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,1f,0f,0f,0f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/x1.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x1.gif"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/x50.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x50.gif"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/x200.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/x200.gif"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/shaded.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/shaded.gif"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/textured.gif","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/images/textured.gif"});
  }
}
protected class MFDouble8 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,2632d,2777d,2826d,1692d,833d,858d,1097d,1115d,1255d,1812d,1168d,3404d,2970d,2584d,2389d,2397d,2504d,2550d,2040d,1980d,1913d,1563d,1636d,1389d,1332d,1419d,1562d,1748d,1767d,1788d,1799d,1854d,1923d,2042d,2126d,2169d,2308d,2405d,2484d,2531d,2576d,2604d,2634d,2666d,2697d,2710d,2727d,2770d,2858d,2968d,3093d,3160d,3202d,3242d,3278d,3296d,3305d,3312d,3309d,3300d,3291d,3274d,3247d,3218d,3186d,3152d,3114d,3098d,3085d,3051d,3017d,2996d,2942d,2893d,2854d,2817d,2807d,2772d,2681d,2543d,2497d,2401d,2567d,0d,0d,0d,0d,0d,0d,67d,550d,435d,358d,497d,677d,838d,997d,1189d,1437d,1706d,1996d,2092d,2208d,2070d,1777d,1377d,942d,403d,259d,315d,0d,0d,0d,0d,0d,0d,456d,778d,839d,1069d,1288d,1609d,1800d,1939d,2012d,2114d,2292d,2463d,2524d,2611d,2769d,2968d,3075d,3239d,3411d,3524d,3626d,3700d,3744d,3796d,3891d,3963d,4002d,4031d,3983d,3869d,3755d,3667d,3598d,3446d,3358d,3236d,3141d,3034d,2914d,2709d,2637d,2524d,2371d,2216d,2044d,1652d,1981d,225d,0d,0d,0d,0d,0d,0d,0d,0d,0d,322d,0d,37d,1228d,1681d,2041d,2173d,2024d,1885d,1524d,1282d,1221d,1282d,1372d,1435d,1448d,1019d,535d,717d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,598d,1404d,1551d,1795d,1945d,2227d,2352d,2553d,2865d,2959d,3173d,3298d,3383d,3538d,3618d,3718d,3793d,3700d,3562d,3453d,3254d,3007d,2883d,2810d,2857d,2990d,3144d,3427d,3615d,3714d,3697d,3580d,3493d,3377d,3263d,3180d,3101d,3020d,2864d,2706d,2612d,2534d,2504d,2417d,2299d,1341d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,297d,0d,0d,5d,0d,0d,0d,0d,0d,1443d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,39d,1220d,2018d,1763d,2713d,3086d,3016d,2961d,2668d,3135d,2431d,2599d,2898d,2976d,2987d,3121d,2927d,2529d,1546d,107d,1395d,2135d,2760d,3163d,3367d,3449d,3383d,3249d,2992d,2899d,2957d,3022d,3096d,3190d,3046d,2822d,2622d,2375d,2334d,2309d,2300d,1847d,2476d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,50d,0d,1003d,1508d,1734d,2013d,2027d,1685d,1091d,0d,0d,1257d,1723d,1848d,2153d,2267d,2164d,2236d,2003d,1686d,1641d,2005d,2047d,2054d,2341d,2022d,1226d,626d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1544d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,295d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d});
  }
}
protected class MFDouble9 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1225d,930d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,847d,9d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,47d,555d,152d,25d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1520d,236d,60d,19d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,34d,0d,0d,0d,151d,83d,69d,343d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,2080d,230d,41d,152d,128d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,929d,1261d,1427d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,489d,440d,234d,239d,173d,6d,90d,156d,570d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,3490d,939d,104d,147d,677d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1331d,959d,1146d,1572d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,43d,555d,486d,616d,700d,168d,72d,273d,504d,104d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,2855d,2083d,142d,392d,317d,589d,792d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1320d,1280d,969d,655d,147d,0d,0d,723d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,253d,308d,495d,617d,339d,298d,276d,300d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,4016d,1245d,298d,121d,800d,921d,773d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,460d,1109d,1104d,919d,850d,816d,7d,0d,299d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,133d,641d,198d,235d,0d,380d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,3058d,467d,139d,476d,357d,359d,416d,425d,187d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1580d,1303d,1125d,1275d,1197d,609d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,167d,28d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,4575d,219d,203d,97d,97d,200d,305d,316d,560d,353d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1120d,934d,1129d,967d,1344d,461d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d});
  }
}
protected class MFDouble10 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,320d,109d,87d,72d,46d,91d,192d,228d,60d,220d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,48d,555d,609d,588d,1488d,1229d,771d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1d,0d,0d,0d,146d,0d,0d,0d,3312d,34d,0d,304d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1988d,153d,92d,57d,100d,302d,195d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,520d,314d,409d,457d,2134d,1133d,1487d,13d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,105d,0d,318d,614d,0d,0d,437d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,266d,91d,1005d,174d,192d,85d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,715d,487d,456d,605d,707d,847d,716d,243d,177d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1539d,1234d,0d,0d,91d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,51d,1823d,73d,143d,37d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,583d,304d,96d,305d,227d,627d,549d,464d,893d,393d,323d,1085d,933d,725d,0d,0d,0d,0d,0d,0d,0d,70d,0d,0d,0d,0d,0d,0d,0d,0d,0d,148d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,64d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,114d,301d,309d,304d,212d,601d,309d,293d,449d,837d,590d,439d,2082d,627d,0d,0d,0d,0d,0d,0d,0d,880d,0d,0d,0d,0d,0d,0d,92d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,116d,553d,164d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,68d,183d,327d,337d,356d,455d,436d,256d,414d,652d,460d,373d,499d,0d,948d,939d,0d,0d,0d,0d,0d,579d,31d,0d,0d,0d,0d,860d,288d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1874d,2200d,0d,0d,0d,0d,50d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,145d,282d,206d,363d,608d,571d,559d,1135d,573d,659d,354d,329d,0d,1393d,652d,208d,62d,0d,0d,0d,0d,293d,321d,157d,0d,66d,1483d,1336d,22d,7d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,47d,191d,1562d,153d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,202d,327d,304d,317d,473d,1249d,820d,608d,325d,304d,216d,340d,497d,847d,840d,88d,0d,0d,0d,240d,44d,253d,136d,66d,26d,432d,166d,1881d,496d,156d,142d,506d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,202d,1907d,1030d,298d,1d,1d,0d,46d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1241d,597d,400d,328d,385d,644d,558d,41d,6d,208d,673d,803d,582d,277d,0d,2354d,468d,1176d,343d,109d,215d,878d,4548d,4629d,5201d,4052d,4100d,373d,529d,182d,49d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,853d,628d,2316d,1250d,362d,102d,39d,176d,195d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1343d,1084d,693d,23d,0d,0d,0d,0d,0d,0d,796d,366d,1344d,1763d,872d,1866d,2290d,3269d,909d,4633d,4397d,4795d,5100d,4767d,4470d,3575d,1189d,717d,45d,14d,0d,0d,0d,650d,0d,0d,0d,0d,0d,0d,0d,0d,0d});
  }
}
protected class MFDouble11 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,943d,1481d,2986d,3002d,1219d,612d,243d,254d,139d,436d,91d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,400d,38d,0d,0d,0d,0d,0d,0d,387d,1053d,1569d,581d,1510d,-28d,59d,127d,190d,578d,2985d,2929d,1214d,1252d,3839d,2668d,4832d,2986d,1262d,1107d,69d,2d,0d,119d,0d,0d,300d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,2092d,1768d,1648d,2027d,1313d,667d,366d,180d,206d,175d,365d,270d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,770d,568d,0d,0d,235d,0d,362d,173d,0d,0d,0d,13d,3422d,-28d,164d,52d,160d,230d,2431d,2131d,5436d,2864d,1453d,450d,1577d,972d,1081d,1160d,1402d,795d,54d,581d,0d,0d,300d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,426d,1008d,1304d,913d,854d,550d,427d,287d,276d,321d,365d,380d,365d,29d,374d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,100d,255d,1977d,2462d,165d,88d,345d,174d,31d,0d,22d,1d,-28d,-8d,132d,95d,230d,501d,325d,405d,1907d,798d,2072d,1822d,2448d,1530d,1256d,1048d,979d,181d,171d,136d,340d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,1515d,922d,1163d,714d,711d,578d,268d,395d,381d,203d,79d,232d,421d,540d,609d,153d,81d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,16d,21d,232d,310d,432d,227d,225d,159d,188d,146d,128d,44d,27d,106d,225d,220d,321d,415d,346d,342d,1986d,1928d,1537d,1746d,1464d,722d,1139d,819d,767d,640d,130d,728d,588d,680d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,103d,0d,0d,0d,0d,0d,0d,243d,623d,1219d,975d,754d,618d,476d,366d,252d,175d,126d,65d,0d,152d,426d,476d,512d,79d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,42d,0d,0d,141d,129d,206d,141d,132d,134d,146d,136d,530d,179d,130d,112d,108d,147d,201d,955d,727d,684d,565d,619d,973d,1419d,1076d,1122d,460d,909d,0d,0d,0d,0d,0d,407d,746d,0d,0d,0d,0d,0d,0d,0d,0d,129d,243d,0d,0d,0d,1110d,1297d,1872d,596d,448d,764d,264d,210d,414d,305d,0d,0d,0d,0d,9d,158d,0d,79d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,885d,146d,24d,0d,56d,98d,71d,184d,121d,190d,178d,201d,490d,72d,46d,89d,92d,33d,125d,118d,477d,368d,351d,655d,487d,1309d,441d,564d,497d,208d,438d,693d,0d,601d,175d,0d,668d,0d,0d,0d,0d,0d,1d,0d,0d,61d,879d,1219d,706d,678d,560d,1273d,1896d,319d,390d,283d,464d,361d,320d,158d,134d,0d,0d,0d,0d,0d,198d,318d,0d,0d,0d,2120d,2563d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,600d,257d,0d,143d,96d,157d,92d,11d,242d,197d,139d,784d,143d,23d,104d,88d,68d,94d,273d,498d,345d,451d,339d,307d,347d,117d,155d,108d,233d,1126d,1577d,1707d,1185d,471d,1125d,576d,1009d,135d,97d,546d,0d,0d,0d,164d,483d,1268d,1300d,856d,490d,887d,218d,158d,257d,548d,173d,0d,121d,24d,0d,75d,189d,122d,0d,0d,0d,365d,0d,0d,0d,21d,1168d,2546d,2897d,2119d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,517d,432d,184d,280d,159d,262d,0d,50d,41d,40d,151d,148d,116d,29d,25d,54d,117d,442d,657d,911d,206d,321d,400d,362d,217d,52d,251d,432d,156d,316d,56d,286d,38d,80d,36d,203d,298d,404d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,151d,175d,198d,275d,81d,0d,101d,313d,0d,0d,152d,0d,0d,0d,0d,0d,0d,1857d,2357d,2752d,3054d,3004d,2215d,1577d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,311d,0d,0d,0d,28d,0d,5d,52d,18d,13d,51d,71d,155d,134d,115d,49d,62d,214d,0d,0d,15d,13d,2d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,77d,0d,0d,0d,94d,19d,100d,0d,310d,0d,0d,0d,278d,640d,568d,1033d,1747d,2306d,2570d,2481d,2393d,2257d,2345d,1d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,272d,0d,0d,0d,0d,0d,0d,0d,11d,276d,184d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d});
  }
}
protected class MFDouble12 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,181d,519d,600d,1844d,971d,609d,378d,1194d,1228d,1152d,1378d,1783d,1183d,913d,339d,967d,745d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,276d,0d,0d,41d,0d,0d,0d,0d,0d,0d,0d,36d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d,0d});
  }
}
}

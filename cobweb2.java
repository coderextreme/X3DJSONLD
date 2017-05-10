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
public class cobweb2 {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new cobweb2().initialize().toFileJSON("cobweb2.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("geo.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geo.x3d"))
        .addMeta(new metaObject().setName("translated").setContent("13 March 2016"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("translated").setContent("10 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("10 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,4f}).setOrientation(new float[] {1f,0f,0f,0f}).setDescription("Bubbles in action"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new ProtoDeclareObject().setName("Bubble")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.25f))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
              .addChild(new ScriptObject().setDEF("bounce")
                .addField(new fieldObject().setType("SFVec3f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1 1 1"))
                .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType("SFVec3f").setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType("SFVec3f").setName("scalvel").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .setSourceCode("ecmascript:\n"+
"function initialize() {\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"}\n"+
"\n"+
"function set_translation(value) {\n"+
"   translation = value;\n"+
"}\n"+
"\n"+
"function set_scale(value) {\n"+
"   scale = value;\n"+
"}\n"+
"\n"+
"function translation_changed() {\n"+
"	return translation;\n"+
"}\n"+
"\n"+
"function set_fraction(value) {\n"+
"    if (typeof translation === 'undefined') {\n"+
"		translation = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof velocity === 'undefined') {\n"+
"		velocity = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scalevel === 'undefined') {\n"+
"		scalevel = [0, 0, 0];\n"+
"    }\n"+
"    if (typeof scale === 'undefined') {\n"+
"		scale = [1, 1, 1];\n"+
"    }\n"+
"    translation = new SFVec3f(	translation[0] + velocity[0], translation[1] + velocity[1], translation[2] + velocity[2]);\n"+
"    scale = new SFVec3f(scale[0] + scalvel[0], scale[1] + scalvel[1], scale[2] + scalvel[2]);\n"+
"    for (var j = 0; j < 3; j++) {\n"+
"	    // if you get to far away or too big, explode\n"+
"	    if ( Math.abs(translation[j]) > 256) {\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"	    if (Math.abs(scale[j]) > 20) {\n"+
"		scale[j] = scale[j]/2;\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"    }\n"+
"}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10d).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("translation_changed").setToNode("bounce").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("scale_changed").setToNode("bounce").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleA"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleB"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleC"))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"});
  }
}
}

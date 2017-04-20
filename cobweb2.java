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
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("geo.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geo.x3d"))
        .addMeta(new metaObject().setName("translated").setContent("13 March 2016"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new MFStringObject(MFString0())))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,4f}).setOrientation(new float[] {1f,0f,0f,0f}).setDescription("Bubbles in action"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(MFString1())).setBottomUrl(new MFStringObject(MFString2())).setFrontUrl(new MFStringObject(MFString3())).setLeftUrl(new MFStringObject(MFString4())).setRightUrl(new MFStringObject(MFString5())).setTopUrl(new MFStringObject(MFString6())))
        .addChild(new ProtoDeclareObject().setName("Bubble")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.25f))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f))))
              .addChild(new ScriptObject().setDEF("bounce")
                .addField(new fieldObject().setName("scale").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("1 1 1"))
                .addField(new fieldObject().setName("translation").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0"))
                .addField(new fieldObject().setName("velocity").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0"))
                .addField(new fieldObject().setName("scalvel").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0"))
                .addField(new fieldObject().setName("set_fraction").setAccessType("inputOnly").setType(fieldObject.TYPE_SFFLOAT))
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
"    for (var j = 0; j &lt; 3; j++) {\n"+
"	    // if you get to far away or too big, explode\n"+
"	    if ( Math.abs(translation[j]) &gt; 256) {\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"	    if (Math.abs(scale[j]) &gt; 20) {\n"+
"		scale[j] = scale[j]/2;\n"+
"		translation[j] = 0;\n"+
"		initialize();\n"+
"	    }\n"+
"    }\n"+
"}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("bubbleClock").setCycleInterval(10).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("translation_changed").setToNode("bounce").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("transform").setFromField("scale_changed").setToNode("bounce").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTEObject().setFromNode("bounce").setFromField("scale_changed").setToNode("transform").setToField("set_scale"))
              .addChild(new ROUTEObject().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction")))))
        .addChild(new ProtoInstanceObject().setName("Bubble").setDEF("bubbleA"))
        .addChild(new ProtoInstanceObject().setName("Bubble").setDEF("bubbleB"))
        .addChild(new ProtoInstanceObject().setName("Bubble").setDEF("bubbleC"))
        .addChild(new ProtoInstanceObject().setName("Bubble").setDEF("bubbleD")))      ;
    }
private MFStringObject MFString0() {
  return new MFStringObject( new String[] {"EXAMINE"})
;
}
private MFStringObject MFString1() {
  return new MFStringObject( new String[] {"cubemap/BK.png","http://coderextreme.net/X3DJSONLD/cubemap/BK.png"})
;
}
private MFStringObject MFString2() {
  return new MFStringObject( new String[] {"cubemap/BT.png","http://coderextreme.net/X3DJSONLD/cubemap/BT.png"})
;
}
private MFStringObject MFString3() {
  return new MFStringObject( new String[] {"cubemap/FR.png","http://coderextreme.net/X3DJSONLD/cubemap/FR.png"})
;
}
private MFStringObject MFString4() {
  return new MFStringObject( new String[] {"cubemap/LF.png","http://coderextreme.net/X3DJSONLD/cubemap/LF.png"})
;
}
private MFStringObject MFString5() {
  return new MFStringObject( new String[] {"cubemap/RT.png","http://coderextreme.net/X3DJSONLD/cubemap/RT.png"})
;
}
private MFStringObject MFString6() {
  return new MFStringObject( new String[] {"cubemap/TP.png","http://coderextreme.net/X3DJSONLD/cubemap/TP.png"})
;
}
}

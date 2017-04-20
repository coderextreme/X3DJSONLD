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
public class bubbles {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new bubbles().initialize().toFileJSON("bubbles.new.json");
    }
    public X3DObject initialize() {
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
        .addMeta(new metaObject().setName("title").setContent("bubbles.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bubbles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("not sure what this is")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new MFStringObject(MFString0())))
        .addChild(new ViewpointObject().setDEF("Tour").setDescription("Tour Views"))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,4f}).setDescription("sphere in road"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(MFString1())).setBottomUrl(new MFStringObject(MFString2())).setFrontUrl(new MFStringObject(MFString3())).setLeftUrl(new MFStringObject(MFString4())).setRightUrl(new MFStringObject(MFString5())).setTopUrl(new MFStringObject(MFString6())))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setDEF("_01_-_Default")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString7())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString8())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString9())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString10())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString11())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString12()))))
              .addShaders(new ComposedShaderObject().setDEF("ComposedShader").setLanguage("GLSL")
                .addField(new fieldObject().setName("cube").setAccessType("inputOutput").setType(fieldObject.TYPE_SFINT32).setValue("0"))
                .addField(new fieldObject().setName("chromaticDispersion").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setName("bias").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("0.5"))
                .addField(new fieldObject().setName("scale").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("0.5"))
                .addField(new fieldObject().setName("power").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("2"))
                .addParts(new ShaderPartObject().setUrl(new MFStringObject(MFString13())).setType("VERTEX"))
                .addParts(new ShaderPartObject().setUrl(new MFStringObject(MFString14())).setType("FRAGMENT"))))))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("TourPosition").setKey(new MFFloatObject(MFFloat15())).setKeyValue(new MFVec3fObject(MFVec3f16())))
        .addChild(new OrientationInterpolatorObject().setDEF("TourOrientation").setKey(new MFFloatObject(MFFloat17())).setKeyValue(new MFRotationObject(MFRotation18())))
        .addChild(new ScriptObject().setDEF("RandomTourTime")
          .addField(new fieldObject().setName("set_cycle").setAccessType("inputOnly").setType(fieldObject.TYPE_SFTIME))
          .addField(new fieldObject().setName("lastKey").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("0"))
          .addField(new fieldObject().setName("orientations").setAccessType("inputOutput").setType(fieldObject.TYPE_MFROTATION).setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
          .addField(new fieldObject().setName("positions").setAccessType("inputOutput").setType(fieldObject.TYPE_MFVEC3F).setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
          .addField(new fieldObject().setName("position").setAccessType("outputOnly").setType(fieldObject.TYPE_MFVEC3F))
          .addField(new fieldObject().setName("orientation").setAccessType("outputOnly").setType(fieldObject.TYPE_MFROTATION))
          .setSourceCode("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"                        //var positions = [[0, 0, 10], [-10, 0, 0], [0, 0, -10], [10, 0, 0], [0, 0, 10], [0, 10, 0], [0, 0, 10], [0, -10, 0], [0, 0, 10]];\n"+
"                        //var orientations = [[0, 1, 0, 0], [0, 1, 0, -1.57], [0, 1, 0, 3.14], [0, 1, 0, 1.57], [0, 1, 0, 0] [1, 0, 0, -1.57], [0, 1, 0, 0], [1, 0, 0, 1.57], [0, 1, 0, 0]];\n"+
"                        //Browser.println(lastKey);\n"+
"                        var ov = lastKey;\n"+
"                        // Browser.println(ov);      \n"+
"                        //Browser.println(positions.length);                  \n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        // Browser.println(lastKey);\n"+
"                        var vc = lastKey;\n"+
"                        \n"+
"                        // Browser.println(orientations[ov]);\n"+
"                        // Browser.println(orientations[vc]);\n"+
"                        orientation = new MFRotation();\n"+
"                        orientation[0] = new SFRotation(orientations[ov][0], orientations[ov][1], orientations[ov][2], orientations[ov][3]);\n"+
"                        orientation[1] = new SFRotation(orientations[vc][0], orientations[vc][1], orientations[vc][2], orientations[vc][3]);\n"+
"                        // Browser.println(positions[ov]);\n"+
"                        // Browser.println(positions[vc]);\n"+
"                        position = new MFVec3f();\n"+
"                        position[0] = new SFVec3f(positions[ov][0],positions[ov][1],positions[ov][2]);\n"+
"                        position[1] = new SFVec3f(positions[vc][0],positions[vc][1],positions[vc][2]);\n"+
"                    // }\n"+
"               }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("orientation").setToNode("TourOrientation").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position").setToNode("TourPosition").setToField("keyValue"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")))      ;
    }
private MFStringObject MFString0() {
  return new MFStringObject( new String[] {"EXAMINE"})
;
}
private MFStringObject MFString1() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_back.png"})
;
}
private MFStringObject MFString2() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_bottom.png"})
;
}
private MFStringObject MFString3() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_front.png"})
;
}
private MFStringObject MFString4() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_left.png"})
;
}
private MFStringObject MFString5() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_right.png"})
;
}
private MFStringObject MFString6() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_top.png"})
;
}
private MFStringObject MFString7() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_back.png"})
;
}
private MFStringObject MFString8() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_bottom.png"})
;
}
private MFStringObject MFString9() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_front.png"})
;
}
private MFStringObject MFString10() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_left.png"})
;
}
private MFStringObject MFString11() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_right.png"})
;
}
private MFStringObject MFString12() {
  return new MFStringObject( new String[] {"cubemap/all_probes/uffizi_cross/uffizi_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/uffizi_cross/uffizi_top.png"})
;
}
private MFStringObject MFString13() {
  return new MFStringObject( new String[] {"cobweb_bubbles.vs","http://coderextreme.net/X3DJSONLD/cobweb_bubbles.vs"})
;
}
private MFStringObject MFString14() {
  return new MFStringObject( new String[] {"pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"})
;
}
private MFFloatObject MFFloat15() {
  return new MFFloatObject( new float[] {0f,1f})
;
}
private MFVec3fObject MFVec3f16() {
  return new MFVec3fObject( new float[] {0f,0f,10f,0f,0f,-10f})
;
}
private MFFloatObject MFFloat17() {
  return new MFFloatObject( new float[] {0f,1f})
;
}
private MFRotationObject MFRotation18() {
  return new MFRotationObject( new float[] {0f,1f,0f,0f,0f,1f,0f,3.1416f})
;
}
}

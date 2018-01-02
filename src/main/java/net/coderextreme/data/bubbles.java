package net.coderextreme.data;
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
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new bubbles().initialize().toFileJSON("../data/bubbles.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("bubbles.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/bubbles.x3d"))
        .addMeta(new metaObject().setName("description").setContent("not sure what this is")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new ViewpointObject().setDEF("Tour").setDescription("Tour Views"))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,4f}).setDescription("sphere in road"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setDEF("_01_-_Default")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(new MFStringObject(new MFString6().getArray())))
                .setBottom(new ImageTextureObject().setUrl(new MFStringObject(new MFString7().getArray())))
                .setFront(new ImageTextureObject().setUrl(new MFStringObject(new MFString8().getArray())))
                .setLeft(new ImageTextureObject().setUrl(new MFStringObject(new MFString9().getArray())))
                .setRight(new ImageTextureObject().setUrl(new MFStringObject(new MFString10().getArray())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(new MFString11().getArray()))))
              .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                .addField(new fieldObject().setType("SFInt32").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray()))))
              .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                .addField(new fieldObject().setType("SFInt32").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString14().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString15().getArray())))))))
        .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5d).setLoop(true))
        .addChild(new PositionInterpolatorObject().setDEF("TourPosition").setKey(new MFFloatObject(new MFFloat16().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f17().getArray())))
        .addChild(new OrientationInterpolatorObject().setDEF("TourOrientation").setKey(new MFFloatObject(new MFFloat18().getArray())).setKeyValue(new MFRotationObject(new MFRotation19().getArray())))
        .addChild(new ScriptObject().setDEF("RandomTourTime")
          .addField(new fieldObject().setType("SFTime").setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("lastKey").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new fieldObject().setType("MFRotation").setName("orientations").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 1 0 0 0 1 0 -1.57 0 1 0 3.14 0 1 0 1.57 0 1 0 0 1 0 0 -1.57 0 1 0 0 1 0 0 1.57 0 1 0 0"))
          .addField(new fieldObject().setType("MFVec3f").setName("positions").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 10 -10 0 0 0 0 -10 10 0 0 0 0 10 0 10 0 0 0 10 0 -10 0 0 0 10"))
          .addField(new fieldObject().setType("MFVec3f").setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("MFRotation").setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFRotation").setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"               function set_cycle(value) {\n"+
"                        var ov = lastKey;\n"+
"                        do {\n"+
"                            lastKey = Math.round(Math.random()*(positions.length-1));\n"+
"                        } while (lastKey === ov);\n"+
"                        var vc = lastKey;\n"+
"                        \n"+
"                        orientation_changed = new MFRotation();\n"+
"                        orientation_changed[0] = new SFRotation(orientations[ov].x, orientations[ov].y, orientations[ov].z, orientations[ov].w);\n"+
"                        orientation_changed[1] = new SFRotation(orientations[vc].x, orientations[vc].y, orientations[vc].z, orientations[vc].w);\n"+
"                        position_changed = new MFVec3f();\n"+
"                        position_changed[0] = new SFVec3f(positions[ov].x,positions[ov].y,positions[ov].z);\n"+
"                        position_changed[1] = new SFVec3f(positions[vc].x,positions[vc].y,positions[vc].z);\n"+
"                    // }\n"+
"               }\n"+
""))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime_changed").setToNode("RandomTourTime").setToField("set_cycle"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("orientation_changed").setToNode("TourOrientation").setToField("set_keyValue"))
        .addChild(new ROUTEObject().setFromNode("RandomTourTime").setFromField("position_changed").setToNode("TourPosition").setToField("set_keyValue"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourOrientation").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourOrientation").setFromField("value_changed").setToNode("Tour").setToField("set_orientation"))
        .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("TourPosition").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("TourPosition").setFromField("value_changed").setToNode("Tour").setToField("set_position")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/uffizi_cross/uffizi_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/uffizi_cross/uffizi_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/cobweb.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/pc_bubbles.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x3dom.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/pc_bubbles.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/pc_bubbles.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFFloat16 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f17 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,10f,0f,0f,-10f});
  }
}
protected class MFFloat18 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFRotation19 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,3.1416f});
  }
}
}

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
public class flowers {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new flowers().initialize().toFileJSON("../data/flowers.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("flowers.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new ProtoDeclareObject().setName("flower")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
                  .setTexture(new ComposedCubeMapTextureObject().setDEF("texture")
                    .setBack(new ImageTextureObject().setUrl(new MFStringObject(new MFString6().getArray())))
                    .setBottom(new ImageTextureObject().setUrl(new MFStringObject(new MFString7().getArray())))
                    .setFront(new ImageTextureObject().setUrl(new MFStringObject(new MFString8().getArray())))
                    .setLeft(new ImageTextureObject().setUrl(new MFStringObject(new MFString9().getArray())))
                    .setRight(new ImageTextureObject().setUrl(new MFStringObject(new MFString10().getArray())))
                    .setTop(new ImageTextureObject().setUrl(new MFStringObject(new MFString11().getArray()))))
                  .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                    .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray()))))
                  .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                    .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString14().getArray())))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString15().getArray()))))
                  .addShaders(new ComposedShaderObject().setDEF("shader").setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                    .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString16().getArray())))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString17().getArray())))))
                .addComments(new CommentsBlock("<Sphere></Sphere>"))
                .setGeometry(new IndexedFaceSetObject().setConvex(false).setDEF("Orbit")
                  .setCoord(new CoordinateObject().setDEF("OrbitCoordinates")))))
            .addChild(new ScriptObject().setDEF("Bounce")
              .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType("SFVec3f").setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType("SFTime").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFVec3f").setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("MFInt32").setName("coordIndexes").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .setSourceCode("ecmascript: function newBubble() { translation = new SFVec3f(0, 0, 0); velocity = new SFVec3f( Math.random() - 0.5, Math.random() - 0.5, Math.random() - 0.5); } function set_fraction() { translation = new SFVec3f( translation.x + velocity.x, translation.y + velocity.y, translation.z + velocity.z); if (Math.abs(translation.x) > 10) { newBubble(); } else if (Math.abs(translation.y) > 10) { newBubble(); } else if (Math.abs(translation.z) > 10) { newBubble(); } else { velocity = new SFVec3f( velocity.x + Math.random() * 0.2 - 0.1, velocity.y + Math.random() * 0.2 - 0.1, velocity.z + Math.random() * 0.2 - 0.1 ); } animate_flowers(); } function initialize() { var cis = []; newBubble(); resolution = 100; updateCoordinates(resolution); for ( i = 0; i < resolution-1; i++) { for ( j = 0; j < resolution-1; j++) { cis.push(i*resolution+j); cis.push(i*resolution+j+1); cis.push((i+1)*resolution+j+1); cis.push((i+1)*resolution+j); cis.push(-1); } } coordIndexes = new MFInt32(cis); } function updateCoordinates(resolution) { theta = 0.0; phi = 0.0; delta = (2 * 3.141592653) / (resolution-1); var crds = []; for ( i = 0; i < resolution; i++) { for ( j = 0; j < resolution; j++) { rho = a + b * Math.cos(c * theta) * Math.cos(d * phi); crds.push(new SFVec3f( rho * Math.cos(phi) * Math.cos(theta), rho * Math.cos(phi) * Math.sin(theta), rho * Math.sin(phi) )); theta += delta; } phi += delta; coordinates = new MFVec3f(crds); } } function animate_flowers(fraction, eventTime) { choice = Math.floor(Math.random() * 4); switch (choice) { case 0: a += Math.random() * 0.2 - 0.1; break; case 1: b += Math.random() * 0.2 - 0.1; break; case 2: c += Math.random() * 2 - 1; break; case 3: d += Math.random() * 2 - 1; break; } if (a > 1) { a = 0.5; } if (b > 1) { b = 0.5; } if (c < 1) { c = 4; } if (d < 1) { d = 4; } if (c > 10) { c = 4; } if (d > 10) { d = 4; } resolution = 100; updateCoordinates(resolution); }\n"+
""))
            .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(0.15d).setLoop(true))
            .addChild(new TimeSensorObject().setDEF("SongTime").setLoop(true))
            .addChild(new SoundObject().setMaxBack(100f).setMaxFront(100f).setMinBack(20f).setMinFront(20f)
              .setSource(new AudioClipObject().setDEF("AudioClip").setDescription("Chandubabamusic #1").setUrl(new MFStringObject(new MFString18().getArray()))))
            .addChild(new ROUTEObject().setFromField("cycleTime").setFromNode("SongTime").setToField("startTime").setToNode("AudioClip"))
            .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("cycleTime").setToNode("Bounce").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("Bounce").setFromField("translation").setToNode("transform").setToField("set_translation"))
            .addComments(new CommentsBlock("<ROUTE fromField=\"coordIndexes\"fromNode=\"Bounce\"toField=\"set_coordIndex\"toNode=\"Orbit\"/> <ROUTE fromField=\"coordinates\"fromNode=\"Bounce\"toField=\"set_point\"toNode=\"OrbitCoordinates\"/>"))))
        .addChild(new TransformObject()
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("flower"))
          .addComments(new CommentsBlock("<ProtoInstance name=\"flower\"/> <ProtoInstance name=\"flower\"/>"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/common.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/gl_flowers_chromatic.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x3dom.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/pc_bubbles.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x_ite.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/pc_bubbles.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_bubbles.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/chandubabamusic1.wav".replaceAll("\"", "\\\"")});
  }
}
}

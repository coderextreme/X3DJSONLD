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
public class mirror2 {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new mirror2().initialize().toFileJSON("../data/mirror2.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("mirro2.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/mirro2.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a mirrored sphere")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(new float[] {0f,5f,100f}).setDescription("Switch background and images texture"))
        .addChild(new BackgroundObject().setDEF("cube").setLeftUrl(new MFStringObject(new MFString0().getArray())).setRightUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setBackUrl(new MFStringObject(new MFString3().getArray())).setTopUrl(new MFStringObject(new MFString4().getArray())).setBottomUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setDEF("backShader").setUrl(new MFStringObject(new MFString6().getArray())))
                .setBottom(new ImageTextureObject().setDEF("bottomShader").setUrl(new MFStringObject(new MFString7().getArray())))
                .setFront(new ImageTextureObject().setDEF("frontShader").setUrl(new MFStringObject(new MFString8().getArray())))
                .setLeft(new ImageTextureObject().setDEF("leftShader").setUrl(new MFStringObject(new MFString9().getArray())))
                .setRight(new ImageTextureObject().setDEF("rightShader").setUrl(new MFStringObject(new MFString10().getArray())))
                .setTop(new ImageTextureObject().setDEF("topShader").setUrl(new MFStringObject(new MFString11().getArray()))))
              .addShaders(new ComposedShaderObject().setDEF("cobweb").setLanguage("GLSL")
                .addComments(new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFInt32").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray()))))
              .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                .addComments(new CommentsBlock("http://hypertextbook.com/facts/2005/JustinChe.shtml"))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFInt32").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString14().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString15().getArray())))))
            .setGeometry(new SphereObject().setRadius(30f)))
          .addChild(new ScriptObject().setDEF("UrlSelector").setDirectOutput(true)
            .addField(new fieldObject().setType("MFString").setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
            .addField(new fieldObject().setType("MFString").setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
            .addField(new fieldObject().setType("MFString").setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
            .addField(new fieldObject().setType("MFString").setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
            .addField(new fieldObject().setType("MFString").setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
            .addField(new fieldObject().setType("MFString").setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
            .addField(new fieldObject().setType("MFString").setName("front_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("back_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("left_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("right_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("top_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("bottom_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
""))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(45d).setLoop(true))
          .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("cube").setToField("frontUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("cube").setToField("backUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("cube").setToField("leftUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("cube").setToField("rightUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("cube").setToField("topUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("cube").setToField("bottomUrl"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
          .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_back.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_front.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_left.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_right.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png".replaceAll("\"", "\\\""),"https://coderextreme.net/images/all_probes/beach_cross/beach_top.png".replaceAll("\"", "\\\"")});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/cobweb.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/cobweb.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/mix.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/mix.fs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x3dom.vs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/x3dom.vs".replaceAll("\"", "\\\"")});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/mix.fs".replaceAll("\"", "\\\""),"https://coderextreme.net/X3DJSONLD/shaders/mix.fs".replaceAll("\"", "\\\"")});
  }
}
}

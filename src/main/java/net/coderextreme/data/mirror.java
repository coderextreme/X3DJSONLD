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
public class mirror {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new mirror().initialize().toFileJSON("../data/mirror.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(1))
        .addComponent(new component().setName("Grouping").setLevel(1))
        .addMeta(new meta().setName("title").setContent("mirror.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/mirror.x3d"))
        .addMeta(new meta().setName("description").setContent("sphere with alternating backgrounds")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(new float[] {0f,5f,100f}).setDescription("Switch background and images texture"))
        .addChild(new TextureBackground()
          .setLeftTexture(new ImageTexture().setDEF("leftBack").setUrl(new MFString0().getArray()))
          .setRightTexture(new ImageTexture().setDEF("rightBack").setUrl(new MFString1().getArray()))
          .setFrontTexture(new ImageTexture().setDEF("frontBack").setUrl(new MFString2().getArray()))
          .setBackTexture(new ImageTexture().setDEF("backBack").setUrl(new MFString3().getArray()))
          .setTopTexture(new ImageTexture().setDEF("topBack").setUrl(new MFString4().getArray()))
          .setBottomTexture(new ImageTexture().setDEF("bottomBack").setUrl(new MFString5().getArray())))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTexture()
                .setBackTexture(new ImageTexture().setDEF("backShader").setUrl(new MFString6().getArray()))
                .setBottomTexture(new ImageTexture().setDEF("bottomShader").setUrl(new MFString7().getArray()))
                .setFrontTexture(new ImageTexture().setDEF("frontShader").setUrl(new MFString8().getArray()))
                .setLeftTexture(new ImageTexture().setDEF("leftShader").setUrl(new MFString9().getArray()))
                .setRightTexture(new ImageTexture().setDEF("rightShader").setUrl(new MFString10().getArray()))
                .setTopTexture(new ImageTexture().setDEF("topShader").setUrl(new MFString11().getArray())))
              .addShaders(new ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                .addComments("http://hypertextbook.com/facts/2005/JustinChe.shtml")
                .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType("SFInt32").setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString12().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString13().getArray())))
              .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addComments("http://hypertextbook.com/facts/2005/JustinChe.shtml")
                .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new field().setType("SFInt32").setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString14().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString15().getArray()))))
            .setGeometry(new Sphere().setRadius(30f)))
          .addChild(new Script().setDEF("UrlSelector").setDirectOutput(true)
            .addField(new field().setType("MFString").setName("frontUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
            .addField(new field().setType("MFString").setName("backUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
            .addField(new field().setType("MFString").setName("leftUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
            .addField(new field().setType("MFString").setName("rightUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
            .addField(new field().setType("MFString").setName("topUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
            .addField(new field().setType("MFString").setName("bottomUrls").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
            .addField(new field().setType("MFString").setName("front_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("MFString").setName("back_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("MFString").setName("left_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("MFString").setName("right_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("MFString").setName("top_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("MFString").setName("bottom_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFInt32").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("-1"))
            .setSourceCode("ecmascript:\n"+
"        function set_fraction( f, tm ) {\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"	    if (side > frontUrls.length-1) {\n"+
"	    	side = 0;\n"+
"	    }\n"+
"	    if (side != old) {\n"+
"	    	    Browser.print(f+\" \"+side);\n"+
"	    	    old = side;\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"		    back_changed[0] = backUrls[side];\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"		    top_changed[0] = topUrls[side];\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }"))
          .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(45d).setLoop(true))
          .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomBack").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
          .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/images/all_probes/beach_cross/beach_back.png"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/images/all_probes/beach_cross/beach_bottom.png"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/images/all_probes/beach_cross/beach_front.png"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/images/all_probes/beach_cross/beach_left.png"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/images/all_probes/beach_cross/beach_right.png"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/images/all_probes/beach_cross/beach_top.png"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/x_ite.vs"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/src/main/shaders/mix.fs"});
  }
}
}

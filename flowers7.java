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
public class flowers7 {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new flowers7().initialize().toFileJSON("flowers7.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("flowers7.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/flowers7.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a flower"))
        .addMeta(new metaObject().setName("translated").setContent("14 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("15 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new BackgroundObject().setDEF("background").setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,40f}).setDescription("Transparent rose"))
        .addChild(new TransformObject().setDEF("Rose01")
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
                .addField(new fieldObject().setType("SFInt32").setName("set_cube").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addField(new fieldObject().setType("SFVec3f").setName("set_chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("set_bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("set_power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2"))
                .addField(new fieldObject().setType("SFFloat").setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10"))
                .addField(new fieldObject().setType("SFFloat").setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1"))
                .addField(new fieldObject().setType("SFFloat").setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                .addField(new fieldObject().setType("SFFloat").setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                .addField(new fieldObject().setType("SFFloat").setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addField(new fieldObject().setType("SFFloat").setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray())))))
            .setGeometry(new SphereObject().setSolid(false).setRadius(20f))))
        .addChild(new ScriptObject().setDEF("UrlSelector").setDirectOutput(true)
          .addField(new fieldObject().setType("MFString").setName("frontUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_front.png\" \"cubemap/all_probes/building_cross/building_front.png\" \"cubemap/all_probes/campus_cross/campus_front.png\" \"cubemap/all_probes/galileo_cross/galileo_front.png\" \"cubemap/all_probes/grace_cross/grace_front.png\" \"cubemap/all_probes/kitchen_cross/kitchen_front.png\" \"cubemap/all_probes/rnl_cross/rnl_front.png\" \"cubemap/all_probes/stpeters_cross/stpeters_front.png\" \"cubemap/all_probes/uffizi_cross/uffizi_front.png\""))
          .addField(new fieldObject().setType("MFString").setName("backUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_back.png\" \"cubemap/all_probes/building_cross/building_back.png\" \"cubemap/all_probes/campus_cross/campus_back.png\" \"cubemap/all_probes/galileo_cross/galileo_back.png\" \"cubemap/all_probes/grace_cross/grace_back.png\" \"cubemap/all_probes/kitchen_cross/kitchen_back.png\" \"cubemap/all_probes/rnl_cross/rnl_back.png\" \"cubemap/all_probes/stpeters_cross/stpeters_back.png\" \"cubemap/all_probes/uffizi_cross/uffizi_back.png\""))
          .addField(new fieldObject().setType("MFString").setName("leftUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_left.png\" \"cubemap/all_probes/building_cross/building_left.png\" \"cubemap/all_probes/campus_cross/campus_left.png\" \"cubemap/all_probes/galileo_cross/galileo_left.png\" \"cubemap/all_probes/grace_cross/grace_left.png\" \"cubemap/all_probes/kitchen_cross/kitchen_left.png\" \"cubemap/all_probes/rnl_cross/rnl_left.png\" \"cubemap/all_probes/stpeters_cross/stpeters_left.png\" \"cubemap/all_probes/uffizi_cross/uffizi_left.png\""))
          .addField(new fieldObject().setType("MFString").setName("rightUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_right.png\" \"cubemap/all_probes/building_cross/building_right.png\" \"cubemap/all_probes/campus_cross/campus_right.png\" \"cubemap/all_probes/galileo_cross/galileo_right.png\" \"cubemap/all_probes/grace_cross/grace_right.png\" \"cubemap/all_probes/kitchen_cross/kitchen_right.png\" \"cubemap/all_probes/rnl_cross/rnl_right.png\" \"cubemap/all_probes/stpeters_cross/stpeters_right.png\" \"cubemap/all_probes/uffizi_cross/uffizi_right.png\""))
          .addField(new fieldObject().setType("MFString").setName("topUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_top.png\" \"cubemap/all_probes/building_cross/building_top.png\" \"cubemap/all_probes/campus_cross/campus_top.png\" \"cubemap/all_probes/galileo_cross/galileo_top.png\" \"cubemap/all_probes/grace_cross/grace_top.png\" \"cubemap/all_probes/kitchen_cross/kitchen_top.png\" \"cubemap/all_probes/rnl_cross/rnl_top.png\" \"cubemap/all_probes/stpeters_cross/stpeters_top.png\" \"cubemap/all_probes/uffizi_cross/uffizi_top.png\""))
          .addField(new fieldObject().setType("MFString").setName("bottomUrls").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("\"cubemap/all_probes/beach_cross/beach_bottom.png\" \"cubemap/all_probes/building_cross/building_bottom.png\" \"cubemap/all_probes/campus_cross/campus_bottom.png\" \"cubemap/all_probes/galileo_cross/galileo_bottom.png\" \"cubemap/all_probes/grace_cross/grace_bottom.png\" \"cubemap/all_probes/kitchen_cross/kitchen_bottom.png\" \"cubemap/all_probes/rnl_cross/rnl_bottom.png\" \"cubemap/all_probes/stpeters_cross/stpeters_bottom.png\" \"cubemap/all_probes/uffizi_cross/uffizi_bottom.png\""))
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
"            var side = Math.floor(f*frontUrls.length);\n"+
"            if (side > frontUrls.length-1) {\n"+
"                side = 0;\n"+
"            }\n"+
"            if (side != old) {\n"+
"                    old = side;\n"+
"                    front_changed[0] = frontUrls[side];\n"+
"                    back_changed[0] = backUrls[side];\n"+
"                    left_changed[0] = leftUrls[side];\n"+
"                    right_changed[0] = rightUrls[side];\n"+
"                    top_changed[0] = topUrls[side];\n"+
"                    bottom_changed[0] = bottomUrls[side];\n"+
"            }\n"+
"        }\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(45d).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("background").setToField("frontUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("background").setToField("backUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("background").setToField("leftUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("background").setToField("rightUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("background").setToField("topUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("background").setToField("bottomUrl"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("front_changed").setToNode("frontShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("back_changed").setToNode("backShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("left_changed").setToNode("leftShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("right_changed").setToNode("rightShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("top_changed").setToNode("topShader").setToField("url"))
        .addChild(new ROUTEObject().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("bottomShader").setToField("url"))
        .addChild(new ScriptObject().setDEF("Animate").setDirectOutput(true)
          .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("a_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("10"))
          .addField(new fieldObject().setType("SFFloat").setName("b_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("1"))
          .addField(new fieldObject().setType("SFFloat").setName("c_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20"))
          .addField(new fieldObject().setType("SFFloat").setName("d_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("20"))
          .addField(new fieldObject().setType("SFFloat").setName("tdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0"))
          .addField(new fieldObject().setType("SFFloat").setName("pdelta_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setValue("0"))
          .addField(new fieldObject().setType("SFFloat").setName("set_a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10"))
          .addField(new fieldObject().setType("SFFloat").setName("set_b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1"))
          .addField(new fieldObject().setType("SFFloat").setName("set_c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
          .addField(new fieldObject().setType("SFFloat").setName("set_d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
          .addField(new fieldObject().setType("SFFloat").setName("set_tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
          .addField(new fieldObject().setType("SFFloat").setName("set_pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function set_a(value) {\n"+
"	a = value;\n"+
"}\n"+
"\n"+
"function set_b(value) {\n"+
"	b = value;\n"+
"}\n"+
"\n"+
"function set_c(value) {\n"+
"	c = value;\n"+
"}\n"+
"\n"+
"function set_d(value) {\n"+
"	d = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_tdelta(value) {\n"+
"	tdelta = value;\n"+
"}\n"+
"\n"+
"function set_fraction() {\n"+
"	var choice = Math.floor(Math.random() * 4);\n"+
"	if (choice == 0) {\n"+
"		set_a(a + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 1) {\n"+
"		set_b(b + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 2) {\n"+
"		set_c(c + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	} else if (choice == 3) {\n"+
"		set_d(d + Math.floor(Math.random() * 2) * 2 - 1);\n"+
"	}\n"+
"	set_tdelta(tdelta + 0.5);\n"+
"	set_pdelta(pdelta + 0.5);\n"+
"	if (a < 1) {\n"+
"		set_a(10);\n"+
"	}\n"+
"	if (b < 1) {\n"+
"		set_b(10);\n"+
"	}\n"+
"	if (c < 1) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (c > 20) {\n"+
"		set_c(4);\n"+
"	}\n"+
"	if (d < 1) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	if (d > 20) {\n"+
"		set_d(4);\n"+
"	}\n"+
"	// console.log(a, b, c, d, tdelta, pdelta);\n"+
"}\n"+
""))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a_changed").setToNode("cobweb").setToField("set_a"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b_changed").setToNode("cobweb").setToField("set_b"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c_changed").setToNode("cobweb").setToField("set_c"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d_changed").setToNode("cobweb").setToField("set_d"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta_changed").setToNode("cobweb").setToField("set_pdelta"))
        .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta_changed").setToNode("cobweb").setToField("set_tdelta")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_back.png"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_bottom.png"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_front.png"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_left.png"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_right.png"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_top.png"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_back.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_back.png"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_bottom.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_bottom.png"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_front.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_front.png"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_left.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_left.png"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_right.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_right.png"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cubemap/all_probes/beach_cross/beach_top.png","http://coderextreme.net/X3DJSONLD/cubemap/all_probes/beach_cross/beach_top.png"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"cobweb_flowers_input.vs","http://coderextreme.net/X3DJSONLD/cobweb_flowers_input.vs"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"pc_input_flowers.fs","http://coderextreme.net/X3DJSONLD/pc_input_flowers.fs"});
  }
}
}

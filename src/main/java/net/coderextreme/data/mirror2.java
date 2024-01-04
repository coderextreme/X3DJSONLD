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
public class mirror2 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new mirror2().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/mirror2.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("mirror2.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("generator").setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy"))
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1)))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Switch background and images texture").setPosition(new float[] {0f,5f,100f}))
        .addChild(new Background().setDEF("cube").setFrontUrl(new MFString0().getArray()).setBackUrl(new MFString1().getArray()).setLeftUrl(new MFString2().getArray()).setRightUrl(new MFString3().getArray()).setTopUrl(new MFString4().getArray()).setBottomUrl(new MFString5().getArray()))
        .addChild(new Transform()
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTexture())
              .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(new MFString6().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString7().getArray()))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2")))
              .addShaders(new ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                .addParts(new ShaderPart().setUrl(new MFString8().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString9().getArray()))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2"))))
            .setGeometry(new Sphere().setRadius(30f)))
          .addChild(new Script().setDEF("UrlSelector").setDirectOutput(true)
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("frontUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_front.png\" \"../resources/images/all_probes/building_cross/building_front.png\" \"../resources/images/all_probes/campus_cross/campus_front.png\" \"../resources/images/all_probes/galileo_cross/galileo_front.png\" \"../resources/images/all_probes/grace_cross/grace_front.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_front.png\" \"../resources/images/all_probes/rnl_cross/rnl_front.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_front.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("backUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_back.png\" \"../resources/images/all_probes/building_cross/building_back.png\" \"../resources/images/all_probes/campus_cross/campus_back.png\" \"../resources/images/all_probes/galileo_cross/galileo_back.png\" \"../resources/images/all_probes/grace_cross/grace_back.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_back.png\" \"../resources/images/all_probes/rnl_cross/rnl_back.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_back.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("leftUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_left.png\" \"../resources/images/all_probes/building_cross/building_left.png\" \"../resources/images/all_probes/campus_cross/campus_left.png\" \"../resources/images/all_probes/galileo_cross/galileo_left.png\" \"../resources/images/all_probes/grace_cross/grace_left.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_left.png\" \"../resources/images/all_probes/rnl_cross/rnl_left.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_left.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("rightUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_right.png\" \"../resources/images/all_probes/building_cross/building_right.png\" \"../resources/images/all_probes/campus_cross/campus_right.png\" \"../resources/images/all_probes/galileo_cross/galileo_right.png\" \"../resources/images/all_probes/grace_cross/grace_right.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_right.png\" \"../resources/images/all_probes/rnl_cross/rnl_right.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_right.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("topUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_top.png\" \"../resources/images/all_probes/building_cross/building_top.png\" \"../resources/images/all_probes/campus_cross/campus_top.png\" \"../resources/images/all_probes/galileo_cross/galileo_top.png\" \"../resources/images/all_probes/grace_cross/grace_top.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_top.png\" \"../resources/images/all_probes/rnl_cross/rnl_top.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_top.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("bottomUrls").setValue("\"../resources/images/all_probes/beach_cross/beach_bottom.png\" \"../resources/images/all_probes/building_cross/building_bottom.png\" \"../resources/images/all_probes/campus_cross/campus_bottom.png\" \"../resources/images/all_probes/galileo_cross/galileo_bottom.png\" \"../resources/images/all_probes/grace_cross/grace_bottom.png\" \"../resources/images/all_probes/kitchen_cross/kitchen_bottom.png\" \"../resources/images/all_probes/rnl_cross/rnl_bottom.png\" \"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"../resources/images/all_probes/uffizi_cross/uffizi_bottom.png\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("front_changed"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("back_changed"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("left_changed"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("right_changed"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("top_changed"))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setName("bottom_changed"))
            .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
            .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("old").setValue("-1"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"        function set_fraction( f, tm ) {\n"+
"\n"+
"	    var side = Math.floor(f*frontUrls.length);\n"+
"\n"+
"	    if (side > frontUrls.length-1) {\n"+
"\n"+
"	    	side = 0;\n"+
"\n"+
"	    }\n"+
"\n"+
"	    if (side != old) {\n"+
"\n"+
"	    	    // Browser.print(f+\" \"+side);\n"+
"\n"+
"	    	    old = side;\n"+
"\n"+
"		    front_changed[0] = frontUrls[side];\n"+
"\n"+
"		    back_changed[0] = backUrls[side];\n"+
"\n"+
"		    left_changed[0] = leftUrls[side];\n"+
"\n"+
"		    right_changed[0] = rightUrls[side];\n"+
"\n"+
"		    top_changed[0] = topUrls[side];\n"+
"\n"+
"		    bottom_changed[0] = bottomUrls[side];\n"+
"\n"+
"            }\n"+
"\n"+
"        }"))
          .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(45d).setLoop(true)))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("UrlSelector").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("front_changed").setToNode("cube").setToField("frontUrl"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("back_changed").setToNode("cube").setToField("backUrl"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("left_changed").setToNode("cube").setToField("leftUrl"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("right_changed").setToNode("cube").setToField("rightUrl"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("top_changed").setToNode("cube").setToField("topUrl"))
        .addChild(new ROUTE().setFromNode("UrlSelector").setFromField("bottom_changed").setToNode("cube").setToField("bottomUrl")))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_front.png"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_back.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_left.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_right.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_top.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/beach_cross/beach_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/beach_cross/beach_bottom.png"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x_itemix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_itemix.fs"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x3dom.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/mix.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/mix.fs"});
  }
}
}

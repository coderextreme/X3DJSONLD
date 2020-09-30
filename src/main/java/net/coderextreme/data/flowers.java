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
public class flowers {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new flowers().initialize().toFileJSON("../data/flowers.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addMeta(new meta().setName("title").setContent("flowers.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new Background().setBackUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString0().getArray())).setBottomUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString1().getArray())).setFrontUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString2().getArray())).setLeftUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString3().getArray())).setRightUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString4().getArray())).setTopUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString5().getArray())).setSkyColor(new org.web3d.x3d.jsail.fields.MFColor(new MFColor6().getArray())).setTransparency(0f))
        .addChild(new ProtoDeclare().setName("flower")
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("animate_transform").setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
              .addChild(new Shape().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f})
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
                  .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                    .setBack(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString7().getArray())))
                    .setBottom(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString8().getArray())))
                    .setFront(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString9().getArray())))
                    .setLeft(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString10().getArray())))
                    .setRight(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString11().getArray())))
                    .setTop(new ImageTexture().setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString12().getArray()))))
                  .addShaders(new ComposedShader().setDEF("x3dom").setLanguage("GLSL")
                    .addField(new field().setType("SFInt32").setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
                    .addParts(new ShaderPart().setType("VERTEX").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString13().getArray())))
                    .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString14().getArray()))))
                  .addShaders(new ComposedShader().setDEF("x_ite").setLanguage("GLSL")
                    .addField(new field().setType("SFNode").setName("cube").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                    .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("2"))
                    .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("10"))
                    .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("1"))
                    .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("20"))
                    .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("20"))
                    .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addParts(new ShaderPart().setType("VERTEX").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString15().getArray())))
                    .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new org.web3d.x3d.jsail.fields.MFString(new MFString16().getArray())))))
                .setGeometry(new Sphere())))
            .addX3DScript(new X3DScript().setDEF("Animate")
              .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5")))
            .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5d).setLoop(true))
            .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("translation_changed").setToNode("animate_transform").setToField("set_translation"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("flower"))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("flower"))
        .addChild(ProtoInstance2 = new ProtoInstance().setName("flower")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFColor6 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,0f});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString10 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString11 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString12 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString13 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"});
  }
}
protected class MFString14 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"});
  }
}
protected class MFString15 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"});
  }
}
protected class MFString16 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"});
  }
}
}

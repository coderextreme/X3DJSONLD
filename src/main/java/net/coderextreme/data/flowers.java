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
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Scripting").setLevel(1))
        .addComponent(new componentObject().setName("Shaders").setLevel(1))
        .addComponent(new componentObject().setName("CubeMapTexturing").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("flowers.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("5 or more prismatic flowers"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/flowers.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new ProtoDeclareObject().setName("flower")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("animate_transform")
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
                  .addShaders(new ComposedShaderObject().setDEF("x3dom").setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFInt32").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                    .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("10"))
                    .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
                    .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("20"))
                    .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                    .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray()))))
                  .addShaders(new ComposedShaderObject().setDEF("x_ite").setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                    .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                    .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                    .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("2"))
                    .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("10"))
                    .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("1"))
                    .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                    .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("20"))
                    .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0"))
                    .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString14().getArray())))
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString15().getArray())))))
                .setGeometry(new SphereObject())))
            .addChild(new ScriptObject().setDEF("Animate")
              .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType("SFVec3f").setName("velocity").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType("SFFloat").setName("set_fraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
              .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
              .setSourceCode("ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"			    velocity = new SFVec3f(\n"+
"			    	Math.random() - 0.5,\n"+
"				Math.random() - 0.5,\n"+
"				Math.random() - 0.5);\n"+
"			}\n"+
"			function set_fraction() {\n"+
"			    translation = new SFVec3f(\n"+
"			    	translation.x + velocity.x,\n"+
"				translation.y + velocity.y,\n"+
"				translation.z + velocity.z);\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"					initialize();\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"					initialize();\n"+
"				    } else {\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"				    }\n"+
"			    }\n"+
"			    animate_flowers();\n"+
"			}\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 1:\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"					break;\n"+
"				case 2:\n"+
"					c += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					d += Math.random() * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				tdelta += 0.5;\n"+
"				pdelta += 0.5;\n"+
"				if (a > 1) {\n"+
"					a =  0.5;\n"+
"				}\n"+
"				if (b > 1) {\n"+
"					b =  0.5;\n"+
"				}\n"+
"				if (c < 1) {\n"+
"					c =  4;\n"+
"				}\n"+
"				if (d < 1) {\n"+
"					d =  4;\n"+
"				}\n"+
"				if (c > 10) {\n"+
"					c = 4;\n"+
"				}\n"+
"				if (d > 10) {\n"+
"					d = 4;\n"+
"				}\n"+
"			}"))
            .addChild(new TimeSensorObject().setDEF("TourTime").setCycleInterval(5d).setLoop(true))
            .addChild(new ROUTEObject().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("translation_changed").setToNode("animate_transform").setToField("set_translation"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("x_ite").setToField("a"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("x_ite").setToField("b"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("x_ite").setToField("c"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("x_ite").setToField("d"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("x_ite").setToField("pdelta"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("x_ite").setToField("tdelta"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("a").setToNode("x3dom").setToField("a"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("b").setToNode("x3dom").setToField("b"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("c").setToNode("x3dom").setToField("c"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("d").setToNode("x3dom").setToField("d"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("pdelta").setToNode("x3dom").setToField("pdelta"))
            .addChild(new ROUTEObject().setFromNode("Animate").setFromField("tdelta").setToNode("x3dom").setToField("tdelta"))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("flower"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("flower"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("flower")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x3dom_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../shaders/common.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs"});
  }
}
}

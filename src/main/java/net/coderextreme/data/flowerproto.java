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
public class flowerproto {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new flowerproto().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/flowerproto.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("flowerproto.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("A flower proto with configurable shaders"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
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
        .addChild(new ProtoDeclare().setName("FlowerProto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("vertex").setValue("\"../shaders/gl_flowers_chromatic.vs\""))
            .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("fragment").setValue("\"../shaders/pc_flowers.fs\"")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
                  .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                    .setFrontTexture(new ImageTexture().setUrl(new MFString0().getArray()))
                    .setBackTexture(new ImageTexture().setUrl(new MFString1().getArray()))
                    .setLeftTexture(new ImageTexture().setUrl(new MFString2().getArray()))
                    .setRightTexture(new ImageTexture().setUrl(new MFString3().getArray()))
                    .setTopTexture(new ImageTexture().setUrl(new MFString4().getArray()))
                    .setBottomTexture(new ImageTexture().setUrl(new MFString5().getArray())))
                  .addShaders(new ComposedShader().setDEF("shader").setLanguage("GLSL")
                    .addParts(new ShaderPart()
                      .setSourceCode("../shaders/gl_flowers_chromatic.vs")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("vertex"))))
                    .addParts(new ShaderPart().setType("FRAGMENT")
                      .setSourceCode("../shaders/pc_flowers.fs")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("fragment"))))
                    .addField(new field().setType("SFInt32").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("cube"))
                    .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("chromaticDispertion").setValue("0.98 1 1.033"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("bias").setValue("0.5"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("0.5"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("power").setValue("2"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("10"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("1"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("20"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("20"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta"))
                    .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta"))))
                .setGeometry(new Sphere()))
              .addChild(new Script().setDEF("Animate")
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("translation"))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("velocity"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("a").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("b").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("c").setValue("3"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("d").setValue("3"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("tdelta").setValue("0.5"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("pdelta").setValue("0.5"))
                .setSourceCode("ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"\n"+
"			    translation = new SFVec3f(0, 0, 0);\n"+
"\n"+
"			    velocity = new SFVec3f(\n"+
"\n"+
"			    	Math.random() - 0.5,\n"+
"\n"+
"				Math.random() - 0.5,\n"+
"\n"+
"				Math.random() - 0.5);\n"+
"\n"+
"			}\n"+
"\n"+
"			function set_fraction() {\n"+
"\n"+
"			    translation = new SFVec3f(\n"+
"\n"+
"			    	translation.x + velocity.x,\n"+
"\n"+
"				translation.y + velocity.y,\n"+
"\n"+
"				translation.z + velocity.z);\n"+
"\n"+
"			    for (var j = 0; j <= 2; j++) {\n"+
"\n"+
"				    if (Math.abs(translation.x) > 10) {\n"+
"\n"+
"					initialize();\n"+
"\n"+
"				    } else if (Math.abs(translation.y) > 10) {\n"+
"\n"+
"					initialize();\n"+
"\n"+
"				    } else if (Math.abs(translation.z) > 10) {\n"+
"\n"+
"					initialize();\n"+
"\n"+
"				    } else {\n"+
"\n"+
"					velocity.x += Math.random() * 0.2 - 0.1;\n"+
"\n"+
"					velocity.y += Math.random() * 0.2 - 0.1;\n"+
"\n"+
"					velocity.z += Math.random() * 0.2 - 0.1;\n"+
"\n"+
"				    }\n"+
"\n"+
"			    }\n"+
"\n"+
"			    animate_flowers();\n"+
"\n"+
"			}\n"+
"\n"+
"\n"+
"			function animate_flowers(fraction, eventTime) {\n"+
"\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"\n"+
"				switch (choice) {\n"+
"\n"+
"				case 0:\n"+
"\n"+
"					a += Math.random() * 0.2 - 0.1;\n"+
"\n"+
"					break;\n"+
"\n"+
"				case 1:\n"+
"\n"+
"					b += Math.random() * 0.2 - 0.1;\n"+
"\n"+
"					break;\n"+
"\n"+
"				case 2:\n"+
"\n"+
"					c += Math.random() * 2 - 1;\n"+
"\n"+
"					break;\n"+
"\n"+
"				case 3:\n"+
"\n"+
"					d += Math.random() * 2 - 1;\n"+
"\n"+
"					break;\n"+
"\n"+
"				}\n"+
"\n"+
"				tdelta += 0.5;\n"+
"\n"+
"				pdelta += 0.5;\n"+
"\n"+
"				if (a > 1) {\n"+
"\n"+
"					a =  0.5;\n"+
"\n"+
"				}\n"+
"\n"+
"				if (b > 1) {\n"+
"\n"+
"					b =  0.5;\n"+
"\n"+
"				}\n"+
"\n"+
"				if (c < 1) {\n"+
"\n"+
"					c =  4;\n"+
"\n"+
"				}\n"+
"\n"+
"				if (d < 1) {\n"+
"\n"+
"					d =  4;\n"+
"\n"+
"				}\n"+
"\n"+
"				if (c > 10) {\n"+
"\n"+
"					c = 4;\n"+
"\n"+
"				}\n"+
"\n"+
"				if (d > 10) {\n"+
"\n"+
"					d = 4;\n"+
"\n"+
"				}\n"+
"\n"+
"			}"))
              .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5d).setLoop(true)))
            .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("translation").setToNode("transform").setToField("translation"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("shader").setToField("a"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("shader").setToField("b"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("shader").setToField("c"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("shader").setToField("d"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
            .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("shader").setToField("pdelta")))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
}

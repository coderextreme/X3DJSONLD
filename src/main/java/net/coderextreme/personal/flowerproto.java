package net.coderextreme.personal;
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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class flowerproto implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new flowerproto().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../personal/flowerproto.new.java.x3d");
    model.toFileJSON("../personal/flowerproto.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(3))
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addComponent(new component().setName("CubeMapTexturing").setLevel(1))
        .addComponent(new component().setName("Texturing").setLevel(1))
        .addComponent(new component().setName("Rendering").setLevel(1))
        .addComponent(new component().setName("Shape").setLevel(4))
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("flowerproto.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("A flower proto with configurable shaders"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.x3d")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("FlowerProto")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFString").setName("vertex").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/gl_flowers_chromatic.vs\""))
            .addField(new field().setType("MFString").setName("fragment").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("\"https://coderextreme.net/X3DJSONLD/src/main/shaders/pc_flowers.fs\"")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0.7,0.7,0.7}).setSpecularColor(new double[] {0.5,0.5,0.5}))
                  .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                    .setBackTexture(new ImageTexture().setUrl(new MFString0().getArray()))
                    .setBottomTexture(new ImageTexture().setUrl(new MFString1().getArray()))
                    .setFrontTexture(new ImageTexture().setUrl(new MFString2().getArray()))
                    .setLeftTexture(new ImageTexture().setUrl(new MFString3().getArray()))
                    .setRightTexture(new ImageTexture().setUrl(new MFString4().getArray()))
                    .setTopTexture(new ImageTexture().setUrl(new MFString5().getArray())))
                  .addShaders(new ComposedShader().setDEF("shader").setLanguage("GLSL")
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
                    .addComments("<field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"/> </field>")
                    .addParts(new ShaderPart().setType("VERTEX")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("vertex"))))
                    .addParts(new ShaderPart().setType("FRAGMENT")
                      .setIS(new IS()
                        .addConnect(new connect().setNodeField("url").setProtoField("fragment"))))))
                .setGeometry(new Sphere()))
              .addChild(new Script().setDEF("Animate")
                .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType("SFVec3f").setName("velocity").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("SFFloat").setName("a").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("b").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("c").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new field().setType("SFFloat").setName("d").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("3"))
                .addField(new field().setType("SFFloat").setName("tdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("pdelta").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .setSourceCode("ecmascript:\n"+
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
              .addChild(new TimeSensor().setDEF("TourTime").setCycleInterval(5).setLoop(true))
              .addChild(new ROUTE().setFromNode("TourTime").setFromField("fraction_changed").setToNode("Animate").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("translation_changed").setToNode("transform").setToField("set_translation"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("a").setToNode("shader").setToField("a"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("b").setToNode("shader").setToField("b"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("c").setToNode("shader").setToField("c"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("d").setToNode("shader").setToField("d"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("tdelta").setToNode("shader").setToField("tdelta"))
              .addChild(new ROUTE().setFromNode("Animate").setFromField("pdelta").setToNode("shader").setToField("pdelta"))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
}

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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class flowers implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new flowers().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/flowers.new.java.x3d");
    model.toFileJSON("../data/flowers.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("Scripting")).setLevel(1))
        .addComponent(new component().setName(new SFString("EnvironmentalEffects")).setLevel(3))
        .addComponent(new component().setName(new SFString("Shaders")).setLevel(1))
        .addComponent(new component().setName(new SFString("CubeMapTexturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Texturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Rendering")).setLevel(1))
        .addComponent(new component().setName(new SFString("Shape")).setLevel(4))
        .addComponent(new component().setName(new SFString("Grouping")).setLevel(3))
        .addComponent(new component().setName(new SFString("Core")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("flowers.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("5 or more prismatic flowers")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/flowers.x3d"))))
      .setScene(new Scene()
        .addChild(new NavigationInfo())
        .addComments(new CommentsBlock("Images courtesy of Paul Debevec's Light Probe Image Gallery"))
        .addChild(new Background().setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setLeftUrl(new MFString3().getArray()).setRightUrl(new MFString4().getArray()).setTopUrl(new MFString5().getArray()))
        .addChild(new ProtoDeclare().setName(new SFString("flower"))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF(new SFString("animate_transform"))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,0.7f ,0.7f }).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f }))
                  .setTexture(new ComposedCubeMapTexture().setDEF(new SFString("texture"))
                    .setBackTexture(new ImageTexture().setUrl(new MFString6().getArray()))
                    .setBottomTexture(new ImageTexture().setUrl(new MFString7().getArray()))
                    .setFrontTexture(new ImageTexture().setUrl(new MFString8().getArray()))
                    .setLeftTexture(new ImageTexture().setUrl(new MFString9().getArray()))
                    .setRightTexture(new ImageTexture().setUrl(new MFString10().getArray()))
                    .setTopTexture(new ImageTexture().setUrl(new MFString11().getArray())))
                  .addComments(new CommentsBlock("<ComposedShader DEF='x3dom' language=\"GLSL\">"))
                  .addComments(new CommentsBlock("<field name='cube' type='SFInt32' accessType='inputOutput' value='0'></field>"))
                  .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">"))
                  .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"/>"))
                  .addComments(new CommentsBlock("</field>"))
                  .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1.0 1.033'></field>"))
                  .addComments(new CommentsBlock("<field name='bias' type='SFFloat' accessType='inputOutput' value='0.5'></field>"))
                  .addComments(new CommentsBlock("<field name='scale' type='SFFloat' accessType='inputOutput' value='0.5'></field>"))
                  .addComments(new CommentsBlock("<field name='power' type='SFFloat' accessType='inputOutput' value='2'></field>"))
                  .addComments(new CommentsBlock("<field name='a' type='SFFloat' accessType='inputOutput' value='10'></field>"))
                  .addComments(new CommentsBlock("<field name='b' type='SFFloat' accessType='inputOutput' value='1'></field>"))
                  .addComments(new CommentsBlock("<field name='c' type='SFFloat' accessType='inputOutput' value='20'></field>"))
                  .addComments(new CommentsBlock("<field name='d' type='SFFloat' accessType='inputOutput' value='20'></field>"))
                  .addComments(new CommentsBlock("<field name='tdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
                  .addComments(new CommentsBlock("<field name='pdelta' type='SFFloat' accessType='inputOutput' value='0'></field>"))
                  .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom_flowers_chromatic.vs\"'></ShaderPart>"))
                  .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart>"))
                  .addComments(new CommentsBlock("</ComposedShader>"))
                  .addShaders(new ComposedShader().setDEF(new SFString("x_ite")).setLanguage(new SFString("GLSL"))
                    .addField(new field().setType("SFNode").setName(new SFString("cube")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
                      .addChild(new ComposedCubeMapTexture().setUSE(new SFString("texture"))))
                    .addField(new field().setType("SFVec3f").setName(new SFString("chromaticDispertion")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.98 1 1.033")))
                    .addField(new field().setType("SFFloat").setName(new SFString("bias")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0.5")))
                    .addField(new field().setType("SFFloat").setName(new SFString("scale")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0.5")))
                    .addField(new field().setType("SFFloat").setName(new SFString("power")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("2")))
                    .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("10")))
                    .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("1")))
                    .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("20")))
                    .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("20")))
                    .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0")))
                    .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("0")))
                    .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString12().getArray()))
                    .addParts(new ShaderPart().setType("FRAGMENT").setUrl(new MFString13().getArray()))))
                .setGeometry(new Sphere())))
            .addChild(new Script().setDEF(new SFString("Animate"))
              .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
              .addField(new field().setType("SFVec3f").setName(new SFString("velocity")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
              .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName(new SFString("a")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
              .addField(new field().setType("SFFloat").setName(new SFString("b")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
              .addField(new field().setType("SFFloat").setName(new SFString("c")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("3")))
              .addField(new field().setType("SFFloat").setName(new SFString("d")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("3")))
              .addField(new field().setType("SFFloat").setName(new SFString("tdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
              .addField(new field().setType("SFFloat").setName(new SFString("pdelta")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.5")))
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
"				tdelta = tdelta + 0.5;\n"+
"				pdelta = pdelta + 0.5;\n"+
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
            .addChild(new TimeSensor().setDEF(new SFString("TourTime")).setCycleInterval(5d).setLoop(true))
            .addChild(new ROUTE().setFromNode(new SFString("TourTime")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("Animate")).setToField(new SFString("set_fraction")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("translation_changed")).setToNode(new SFString("animate_transform")).setToField(new SFString("set_translation")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("a")).setToNode(new SFString("x_ite")).setToField(new SFString("a")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("b")).setToNode(new SFString("x_ite")).setToField(new SFString("b")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("c")).setToNode(new SFString("x_ite")).setToField(new SFString("c")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("d")).setToNode(new SFString("x_ite")).setToField(new SFString("d")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("pdelta")).setToNode(new SFString("x_ite")).setToField(new SFString("pdelta")))
            .addChild(new ROUTE().setFromNode(new SFString("Animate")).setFromField(new SFString("tdelta")).setToNode(new SFString("x_ite")).setToField(new SFString("tdelta")))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='a' toNode='x3dom' toField='a'/>"))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='b' toNode='x3dom' toField='b'/>"))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='c' toNode='x3dom' toField='c'/>"))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='d' toNode='x3dom' toField='d'/>"))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='pdelta' toNode='x3dom' toField='pdelta'/>"))
            .addComments(new CommentsBlock("<ROUTE fromNode='Animate' fromField='tdelta' toNode='x3dom' toField='tdelta'/>"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("flower")))
        .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("flower")))
        .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("flower"))));
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
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs"});
  }
}
}

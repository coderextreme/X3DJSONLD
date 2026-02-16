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
public class ball implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ball().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ball.new.java.x3d");
    model.toFileJSON("../data/ball.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("EnvironmentalEffects")).setLevel(3))
        .addComponent(new component().setName(new SFString("Shaders")).setLevel(1))
        .addComponent(new component().setName(new SFString("CubeMapTexturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Texturing")).setLevel(1))
        .addComponent(new component().setName(new SFString("Rendering")).setLevel(1))
        .addComponent(new component().setName(new SFString("Grouping")).setLevel(3))
        .addComponent(new component().setName(new SFString("Core")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ball.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/ball.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("a prismatic sphere"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("ball.x3d")))
        .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
        .addChild(new Viewpoint().setDescription(new SFString("Tour Views")).setPosition(new float[] {0f ,0f ,12f }))
        .addChild(new Background().setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setLeftUrl(new MFString3().getArray()).setRightUrl(new MFString4().getArray()).setTopUrl(new MFString5().getArray()))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,0.7f ,0.7f }).setSpecularColor(new float[] {0.5f ,0.5f ,0.5f }))
              .setTexture(new ComposedCubeMapTexture().setDEF(new SFString("texture"))
                .setBackTexture(new ImageTexture().setUrl(new MFString6().getArray()))
                .setBottomTexture(new ImageTexture().setUrl(new MFString7().getArray()))
                .setFrontTexture(new ImageTexture().setUrl(new MFString8().getArray()))
                .setLeftTexture(new ImageTexture().setUrl(new MFString9().getArray()))
                .setRightTexture(new ImageTexture().setUrl(new MFString10().getArray()))
                .setTopTexture(new ImageTexture().setUrl(new MFString11().getArray())))
              .addComments(new CommentsBlock("<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'>"))
              .addComments(new CommentsBlock("<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/>"))
              .addComments(new CommentsBlock("<field name='power' accessType='initializeOnly' type='SFFloat' value='2'/>"))
              .addComments(new CommentsBlock("</ShaderProgram>"))
              .addComments(new CommentsBlock("<ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/>"))
              .addComments(new CommentsBlock("</ProgramShader>"))
              .addComments(new CommentsBlock("<ComposedShader language='GLSL'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"))
              .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">"))
              .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"))
              .addComments(new CommentsBlock("</field>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"))
              .addComments(new CommentsBlock("<ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"'></ShaderPart>"))
              .addComments(new CommentsBlock("<ShaderPart DEF='commonfs' url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' type='FRAGMENT'></ShaderPart>"))
              .addComments(new CommentsBlock("</ComposedShader>"))
              .addComments(new CommentsBlock("<ComposedShader language='GLSL'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"))
              .addComments(new CommentsBlock("<field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\">"))
              .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"))
              .addComments(new CommentsBlock("</field>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"))
              .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"'></ShaderPart>"))
              .addComments(new CommentsBlock("<ShaderPart USE='commonfs'></ShaderPart>"))
              .addComments(new CommentsBlock("</ComposedShader>"))
              .addComments(new CommentsBlock("<ComposedShader language='GLSL'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"))
              .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">"))
              .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"))
              .addComments(new CommentsBlock("</field>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"))
              .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"'></ShaderPart>"))
              .addComments(new CommentsBlock("<ShaderPart USE='commonfs'></ShaderPart>"))
              .addComments(new CommentsBlock("</ComposedShader>"))
              .addComments(new CommentsBlock("<ComposedShader language='GLSL'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field>"))
              .addComments(new CommentsBlock("<field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field>"))
              .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"'></ShaderPart>"))
              .addComments(new CommentsBlock("<ShaderPart USE='commonfs'></ShaderPart>"))
              .addComments(new CommentsBlock("</ComposedShader>"))
              .addComments(new CommentsBlock("<ComposedShader language='GLSL'>"))
              .addComments(new CommentsBlock("<field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field>"))
              .addComments(new CommentsBlock("<field name='cube' type='SFNode' accessType=\"inputOutput\">"))
              .addComments(new CommentsBlock("<ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture>"))
              .addComments(new CommentsBlock("</field>"))
              .addComments(new CommentsBlock("<field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field>"))
              .addComments(new CommentsBlock("<field name='power' accessType='inputOutput' type='SFFloat' value='2'></field>"))
              .addComments(new CommentsBlock("<ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"'></ShaderPart>"))
              .addComments(new CommentsBlock("<ShaderPart USE=\"commonfs\"></ShaderPart>"))
              .addComments(new CommentsBlock("</ComposedShader>"))
              .addShaders(new ComposedShader().setLanguage(new SFString("GLSL"))
                .addField(new field().setType("SFVec3f").setName(new SFString("chromaticDispertion")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.98 1 1.033")))
                .addField(new field().setType("SFNode").setName(new SFString("cube")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ComposedCubeMapTexture().setUSE(new SFString("texture"))))
                .addField(new field().setType("SFFloat").setName(new SFString("bias")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("scale")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.5")))
                .addField(new field().setType("SFFloat").setName(new SFString("power")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("2")))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString12().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF(new SFString("commonfs")).setUrl(new MFString13().getArray()))
                .addComments(new CommentsBlock("<ShaderPart USE=\"commonfs\"></ShaderPart>")))))));
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"});
  }
}
}

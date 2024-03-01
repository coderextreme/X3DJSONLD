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
public class ball implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ball().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../personal/ball.new.java.x3d");
    model.toFileJSON("../personal/ball.new.java.json");
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
        .addComponent(new component().setName("Grouping").setLevel(3))
        .addComponent(new component().setName("Core").setLevel(1))
        .addMeta(new meta().setName("title").setContent("ball.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("generator").setContent("manual"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/ball.x3d"))
        .addMeta(new meta().setName("description").setContent("a prismatic sphere")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ball.x3d"))
        .addChild(new NavigationInfo().setType("\"ANY\" \"EXAMINE\" \"FLY\" \"LOOKAT\""))
        .addChild(new Viewpoint().setDescription("Tour Views").setPosition(new double[] {0,0,12}))
        .addChild(new Background().setBackUrl(new MFString0().getArray()).setBottomUrl(new MFString1().getArray()).setFrontUrl(new MFString2().getArray()).setLeftUrl(new MFString3().getArray()).setRightUrl(new MFString4().getArray()).setTopUrl(new MFString5().getArray()))
        .addChild(new Transform()
          .addChild(new Shape()
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.7,0.7,0.7}).setSpecularColor(new double[] {0.5,0.5,0.5}))
              .setTexture(new ComposedCubeMapTexture().setDEF("texture")
                .setBackTexture(new ImageTexture().setUrl(new MFString6().getArray()))
                .setBottomTexture(new ImageTexture().setUrl(new MFString7().getArray()))
                .setFrontTexture(new ImageTexture().setUrl(new MFString8().getArray()))
                .setLeftTexture(new ImageTexture().setUrl(new MFString9().getArray()))
                .setRightTexture(new ImageTexture().setUrl(new MFString10().getArray()))
                .setTopTexture(new ImageTexture().setUrl(new MFString11().getArray())))
              .addComments("<ProgramShader DEF='ProgramShader' containerField='shaders' language='GLSL'> <ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.vs\"' containerField='programs' type='VERTEX'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'/> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'/> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'/> </ShaderProgram> <ShaderProgram url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl.fs\"' containerField='programs' type='FRAGMENT'/> </ProgramShader>")
              .addComments("<ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"../shaders/castle.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart DEF='commonfs' url='\"../shaders/common.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/common.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='fw_Texture_unit0' type='SFNode' accessType=\"initializeOnly\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/contact.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/octaga.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='initializeOnly' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' accessType='initializeOnly' type='SFInt32' value='0'></field> <field name='bias' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='scale' accessType='initializeOnly' type='SFFloat' value='0.5'></field> <field name='power' accessType='initializeOnly' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/instant.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE='commonfs'></ShaderPart> </ComposedShader> <ComposedShader language='GLSL'> <field name='chromaticDispertion' accessType='inputOutput' type='SFVec3f' value='0.98 1 1.033'></field> <field name='cube' type='SFNode' accessType=\"inputOutput\"> <ComposedCubeMapTexture USE=\"texture\"></ComposedCubeMapTexture> </field> <field name='bias' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='scale' accessType='inputOutput' type='SFFloat' value='0.5'></field> <field name='power' accessType='inputOutput' type='SFFloat' value='2'></field> <ShaderPart url='\"https://coderextreme.net/X3DJSONLD/src/main/shaders/x3dom.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart> <ShaderPart USE=\"commonfs\"></ShaderPart> </ComposedShader>")
              .addShaders(new ComposedShader().setLanguage("GLSL")
                .addField(new field().setType("SFVec3f").setName("chromaticDispertion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.98 1 1.033"))
                .addField(new field().setType("SFNode").setName("cube").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                  .addChild(new ComposedCubeMapTexture().setUSE("texture")))
                .addField(new field().setType("SFFloat").setName("bias").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("scale").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.5"))
                .addField(new field().setType("SFFloat").setName("power").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2"))
                .addParts(new ShaderPart().setType("VERTEX").setUrl(new MFString12().getArray()))
                .addParts(new ShaderPart().setType("FRAGMENT").setDEF("commonfs").setUrl(new MFString13().getArray()))
                .addComments("<ShaderPart USE=\"commonfs\"></ShaderPart>"))))))      ;
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
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/x_ite.vs","https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../shaders/commonnew.fs","https://coderextreme.net/X3DJSONLD/src/main/shaders/commonnew.fs"});
  }
}
}

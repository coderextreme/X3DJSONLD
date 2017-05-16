package net.coderextreme.json;
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
public class x3domflower {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new x3domflower().initialize().toFileJSON("../new/json/x3domflower.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("bub.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("description").setContent("3 prismatic spheres"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/bub.x3d")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject())
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(new MFString0().getArray())).setBottomUrl(new MFStringObject(new MFString1().getArray())).setFrontUrl(new MFStringObject(new MFString2().getArray())).setLeftUrl(new MFStringObject(new MFString3().getArray())).setRightUrl(new MFStringObject(new MFString4().getArray())).setTopUrl(new MFStringObject(new MFString5().getArray())))
        .addChild(new TransformObject()
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
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString12().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString13().getArray())))))
            .setGeometry(new SphereObject().setRadius(20f))))
        .addChild(new TransformObject().setTranslation(new float[] {-2f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(new MFStringObject(new MFString14().getArray())))
                .setBottom(new ImageTextureObject().setUrl(new MFStringObject(new MFString15().getArray())))
                .setFront(new ImageTextureObject().setUrl(new MFStringObject(new MFString16().getArray())))
                .setLeft(new ImageTextureObject().setUrl(new MFStringObject(new MFString17().getArray())))
                .setRight(new ImageTextureObject().setUrl(new MFStringObject(new MFString18().getArray())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(new MFString19().getArray()))))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString20().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString21().getArray())))))
            .setGeometry(new SphereObject().setRadius(20f))))
        .addChild(new TransformObject().setTranslation(new float[] {2f,0f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setBack(new ImageTextureObject().setUrl(new MFStringObject(new MFString22().getArray())))
                .setBottom(new ImageTextureObject().setUrl(new MFStringObject(new MFString23().getArray())))
                .setFront(new ImageTextureObject().setUrl(new MFStringObject(new MFString24().getArray())))
                .setLeft(new ImageTextureObject().setUrl(new MFStringObject(new MFString25().getArray())))
                .setRight(new ImageTextureObject().setUrl(new MFStringObject(new MFString26().getArray())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(new MFString27().getArray()))))
              .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                .addField(new fieldObject().setType("SFInt32").setName("xxxcube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
                .addField(new fieldObject().setType("SFNode").setName("cube").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
                  .addChild(new ComposedCubeMapTextureObject().setUSE("texture")))
                .addField(new fieldObject().setType("SFVec3f").setName("chromaticDispertion").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setType("SFFloat").setName("bias").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("power").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
                .addField(new fieldObject().setType("SFFloat").setName("a").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("b").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("c").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("d").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("3"))
                .addField(new fieldObject().setType("SFFloat").setName("tdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addField(new fieldObject().setType("SFFloat").setName("pdelta").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setValue("0.5"))
                .addParts(new ShaderPartObject().setType("VERTEX").setUrl(new MFStringObject(new MFString28().getArray())))
                .addParts(new ShaderPartObject().setType("FRAGMENT").setUrl(new MFStringObject(new MFString29().getArray())))))
            .setGeometry(new SphereObject().setRadius(20f)))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"x3dom_flowers_chromatic.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString19 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"x3dom_flowers_chromatic.vs","http://coderextreme.net/X3DJSONLD/x3dom.vs"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"});
  }
}
protected class MFString22 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_back.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_bottom.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_front.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"});
  }
}
protected class MFString25 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_left.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_right.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"images/all_probes/stpeters_cross/stpeters_top.png","http://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png"});
  }
}
protected class MFString28 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"x3dom_flowers_plain.vs","http://coderextreme.net/X3DJSONLD/x3dom_flowers_plain.vs"});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"plain.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"});
  }
}
}

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
public class geo {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new geo().initialize().toFileJSON("geo.new.json");
    }
    public X3DObject initialize() {
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("geo.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/geo.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a sphere")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new MFStringObject(MFString0())))
        .addChild(new ViewpointObject().setDEF("Tour").setDescription("Tour Views"))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,4f}).setDescription("sphere in road"))
        .addChild(new BackgroundObject().setBackUrl(new MFStringObject(MFString1())).setBottomUrl(new MFStringObject(MFString2())).setFrontUrl(new MFStringObject(MFString3())).setLeftUrl(new MFStringObject(MFString4())).setRightUrl(new MFStringObject(MFString5())).setTopUrl(new MFStringObject(MFString6())))
        .addChild(new TransformObject().setDEF("Rose01")
          .addChild(new ShapeObject()
            .setGeometry(new SphereObject())
            .setAppearance(new AppearanceObject().setDEF("_01_-_Default")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setSpecularColor(new float[] {0.5f,0.5f,0.5f}))
              .setTexture(new ComposedCubeMapTextureObject()
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString7())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString8())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString9())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString10())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString11())))
                .setTop(new ImageTextureObject().setUrl(new MFStringObject(MFString12()))))
              .addShaders(new ComposedShaderObject().setDEF("ComposedShader").setLanguage("GLSL")
                .addField(new fieldObject().setName("cube").setAccessType("inputOutput").setType(fieldObject.TYPE_SFINT32).setValue("0"))
                .addField(new fieldObject().setName("chromaticDispersion").setAccessType("inputOutput").setType(fieldObject.TYPE_SFVEC3F).setValue("0.98 1 1.033"))
                .addField(new fieldObject().setName("bias").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("0.5"))
                .addField(new fieldObject().setName("scale").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("0.5"))
                .addField(new fieldObject().setName("power").setAccessType("inputOutput").setType(fieldObject.TYPE_SFFLOAT).setValue("2"))
                .addParts(new ShaderPartObject().setUrl(new MFStringObject(MFString13())).setType("VERTEX"))
                .addParts(new ShaderPartObject().setUrl(new MFStringObject(MFString14())).setType("FRAGMENT")))))))      ;
    }
private MFStringObject MFString0() {
  return new MFStringObject( new String[] {"EXAMINE"})
;
}
private MFStringObject MFString1() {
  return new MFStringObject( new String[] {"bBK.png","http://coderextreme.net/bug/bBK.png"})
;
}
private MFStringObject MFString2() {
  return new MFStringObject( new String[] {"bBT.png","http://coderextreme.net/bug/bBT.png"})
;
}
private MFStringObject MFString3() {
  return new MFStringObject( new String[] {"bFR.png","http://coderextreme.net/bug/bFR.png"})
;
}
private MFStringObject MFString4() {
  return new MFStringObject( new String[] {"bLF.png","http://coderextreme.net/bug/bLF.png"})
;
}
private MFStringObject MFString5() {
  return new MFStringObject( new String[] {"bRT.png","http://coderextreme.net/bug/bRT.png"})
;
}
private MFStringObject MFString6() {
  return new MFStringObject( new String[] {"bTP.png","http://coderextreme.net/bug/bTP.png"})
;
}
private MFStringObject MFString7() {
  return new MFStringObject( new String[] {"bBK.png","http://coderextreme.net/bug/bBK.png"})
;
}
private MFStringObject MFString8() {
  return new MFStringObject( new String[] {"bBT.png","http://coderextreme.net/bug/bBT.png"})
;
}
private MFStringObject MFString9() {
  return new MFStringObject( new String[] {"bFR.png","http://coderextreme.net/bug/bFR.png"})
;
}
private MFStringObject MFString10() {
  return new MFStringObject( new String[] {"bLF.png","http://coderextreme.net/bug/bLF.png"})
;
}
private MFStringObject MFString11() {
  return new MFStringObject( new String[] {"bRT.png","http://coderextreme.net/bug/bRT.png"})
;
}
private MFStringObject MFString12() {
  return new MFStringObject( new String[] {"bTP.png","http://coderextreme.net/bug/bTP.png"})
;
}
private MFStringObject MFString13() {
  return new MFStringObject( new String[] {"cobweb_bubbles.vs","http://coderextreme.net/X3DJSONLD/cobweb_bubbles.vs"})
;
}
private MFStringObject MFString14() {
  return new MFStringObject( new String[] {"pc_bubbles.fs","http://coderextreme.net/X3DJSONLD/pc_bubbles.fs"})
;
}
}

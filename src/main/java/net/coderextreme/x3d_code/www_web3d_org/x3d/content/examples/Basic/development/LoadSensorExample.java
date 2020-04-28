package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
public class LoadSensorExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new LoadSensorExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/LoadSensorExample.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("LoadSensorExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("LoadSensor test: default initial view means no functionality, active view means load in progress, final view means LoadSensor (and loading) success."))
        .addMeta(new metaObject().setName("created").setContent("16 August 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, Alan Hudson"))
        .addMeta(new metaObject().setName("warning").setContent("LoadSensor only supported by X3D-compliant browsers. LoadSensor is not implemented in VRML 97."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Do not copy this ExternProtoDeclare, it is used for providing automatic support in X3dToVrml97.xslt and X3D-Edit"))
        .addChild(new WorldInfoObject().setTitle("LoadSensorExample.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("LoadSensor").setAppinfo("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.").setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFTime").setName("timeOut").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFNode").setName("watchList").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("MFNode").setName("set_watchList").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("isActive").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFBool").setName("isLoaded").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFTime").setName("loadTime").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("progress").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)))
        .addChild(new GroupObject()
          .addChild(new ViewpointObject().setDEF("NotLoadedView").setDescription("Not loaded texture").setPosition(new float[] {0f,0f,6f}))
          .addChild(new ViewpointObject().setDEF("ActiveView").setDescription("Loading textures"))
          .addChild(new ViewpointObject().setDEF("LoadedView").setDescription("Texture loading complete").setOrientation(new float[] {0f,1f,0f,3.14159f}).setPosition(new float[] {0f,0f,-10f}))
          .addChild(new GroupObject()
            .addChild(new TransformObject().setTranslation(new float[] {-1f,0f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject())
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setDEF("EarthImage").setUrl(new MFStringObject(new MFString1().getArray()))))))
            .addChild(new TransformObject().setTranslation(new float[] {1f,0f,0f})
              .addChild(new ShapeObject()
                .setGeometry(new BoxObject())
                .setAppearance(new AppearanceObject()
                  .setTexture(new ImageTextureObject().setDEF("JavaBoardImage").setUrl(new MFStringObject(new MFString2().getArray())))))))
          .addChild(new LoadSensorObject().setDEF("Loader").setTimeOut(4d)
            .addWatchList(new ImageTextureObject().setUSE("EarthImage"))
            .addWatchList(new ImageTextureObject().setUSE("JavaBoardImage")))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("Loader").setToField("set_bind").setToNode("ActiveView"))
          .addChild(new ROUTEObject().setFromField("isLoaded").setFromNode("Loader").setToField("set_bind").setToNode("LoadedView"))
          .addChild(new TransformObject().setTranslation(new float[] {0f,0f,7f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("Font").setJustify(new MFStringObject(new MFString4().getArray())).setSize(0.5f)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.5f,0.1f})))))
          .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,3.14159f}).setTranslation(new float[] {0f,0f,-7f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("Font")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.1f,0.5f,0.1f})))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"LoadSensorPrototype.wrl#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.wrl#LoadSensor","LoadSensorPrototype.x3d#LoadSensor","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d#LoadSensor"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"earth-topo.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"JavaBoardSmileForTheCamera.jpg","https://www.web3d.org/x3d/content/examples/Basic/development/JavaBoardSmileForTheCamera.jpg"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"LoadSensor active"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"LoadSensor success"});
  }
}
}

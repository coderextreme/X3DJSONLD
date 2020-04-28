package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
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
public class CatiaHubAssemblyInline {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CatiaHubAssemblyInline().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interactive").setVersion("3.1")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("CADGeometry").setLevel(2))
        .addMeta(new metaObject().setName("title").setContent("CatiaHubAssemblyInline.x3d"))
        .addMeta(new metaObject().setName("description").setContent("CatiaHubAssembly model demonstrating external referencing of geometry files using Prototype with Inline."))
        .addMeta(new metaObject().setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
        .addMeta(new metaObject().setName("translator").setContent("Xj3D, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("created").setContent("25 July 2012"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D CAD CADInterchange profile"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubAssemblyInline.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("CatiaHubAssemblyInline.x3d"))
        .addChild(new ViewpointObject().setDescription("Hello CatiaHubAssemblyInline").setPosition(new float[] {0f,0f,1f}))
        .addChild(new TransformObject().setDEF("RootTransform")
          .addChild(new CADAssemblyObject().setName("Hub_Assembly")
            .addChild(new TransformObject().setDEF("TransformCatiaHubDiscWithHoles")
              .addChild(new CADAssemblyObject().setName("disc_with_holes")
                .addChild(new InlineObject().setDEF("CatiaHubDiscWithHoles").setUrl(new MFStringObject(new MFString0().getArray())))))
            .addChild(new TransformObject().setDEF("TransformCatiaHubCap").setTranslation(new float[] {0f,0f,0.03f})
              .addChild(new CADAssemblyObject().setName("cap")
                .addChild(new InlineObject().setDEF("CatiaHubCap").setUrl(new MFStringObject(new MFString1().getArray())))))
            .addChild(new TransformObject().setDEF("TransformCatiaHubGasket")
              .addChild(new CADAssemblyObject().setName("sleeve_sub_assembly")
                .addChild(new TransformObject().setDEF("Transform").setTranslation(new float[] {0f,0f,0.05f})
                  .addChild(new InlineObject().setDEF("CatiaHubGasket").setUrl(new MFStringObject(new MFString2().getArray()))))))
            .addChild(new TransformObject().setDEF("TransformCatiaHubBushing").setTranslation(new float[] {0f,0f,0.085f})
              .addChild(new CADAssemblyObject().setName("cylinder")
                .addChild(new InlineObject().setDEF("CatiaHubBushing").setUrl(new MFStringObject(new MFString3().getArray()))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CatiaHubDiscWithHoles.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.x3d","CatiaHubDiscWithHoles.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubDiscWithHoles.wrl"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CatiaHubCap.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d","CatiaHubCap.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CatiaHubGasket.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.x3d","CatiaHubGasket.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubGasket.wrl"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CatiaHubBushing.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.x3d","CatiaHubBushing.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubBushing.wrl"});
  }
}
}

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
public class CatiaHubCap {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CatiaHubCap().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CatiaHubCap.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CatiaHubCap.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Provide a Cap part for use by CatiaHubAssemblyInline using CADAssembly and Inline nodes."))
        .addMeta(new metaObject().setName("creator").setContent("Hyokwang Lee, PartDB Co., Ltd."))
        .addMeta(new metaObject().setName("translator").setContent("Xj3D, http://www.xj3d.org"))
        .addMeta(new metaObject().setName("created").setContent("25 July 2012"))
        .addMeta(new metaObject().setName("modified").setContent("28 November 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-X3DAbstractSpecification/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("subject").setContent("X3D CAD CADInterchange profile"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CatiaHubCap.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("CATIA V5 R18 and PartDB Converter with Xj3D"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString0().getArray())).setTitle("CatiaHubCap.x3d"))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","FLY"}))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new ViewpointObject().setDescription("Main Viewpoint").setFieldOfView(0.471225f).setOrientation(new float[] {0.326678f,0.502925f,0.800218f,2.185925f}).setPosition(new float[] {0.411502f,0.183945f,0.216403f}))
        .addChild(new ViewpointObject().setDescription("Iso View").setFieldOfView(0.471225f).setOrientation(new float[] {0.187053f,0.451587f,0.872399f,2.448076f}).setPosition(new float[] {0.288675f,0.288675f,0.288675f}))
        .addChild(new ViewpointObject().setDescription("Front View").setFieldOfView(0.471225f).setOrientation(new float[] {0.57735f,0.57735f,0.57735f,2.094395f}).setPosition(new float[] {0.5f,0f,0f}))
        .addChild(new ViewpointObject().setDescription("Back View").setFieldOfView(0.471225f).setOrientation(new float[] {0.57735f,-0.57735f,-0.57735f,2.094395f}).setPosition(new float[] {-0.5f,0f,0f}))
        .addChild(new ViewpointObject().setDescription("Left View").setFieldOfView(0.471225f).setOrientation(new float[] {1f,-0.000173f,0.000173f,1.570796f}).setPosition(new float[] {0f,-0.5f,0f}))
        .addChild(new ViewpointObject().setDescription("Right View").setFieldOfView(0.471225f).setOrientation(new float[] {-0.000122f,-0.707107f,-0.707107f,3.141348f}).setPosition(new float[] {0f,0.5f,0f}))
        .addChild(new ViewpointObject().setDescription("Top View").setFieldOfView(0.471225f).setOrientation(new float[] {0f,0f,1f,1.570796f}).setPosition(new float[] {0f,0f,0.5f}))
        .addChild(new ViewpointObject().setDescription("Bottom View").setFieldOfView(0.471225f).setOrientation(new float[] {0.707107f,0.707107f,0f,3.141593f}).setPosition(new float[] {0f,0f,-0.5f}))
        .addChild(new TransformObject().setScale(new float[] {0.001f,0.001f,0.001f})
          .addChild(new GroupObject()
            .addChild(new GroupObject()
              .addChild(new GroupObject()
                .addChild(new GroupObject().setDEF("_03E3C7E8")
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("_material0").setDiffuseColor(new float[] {0.94902f,0.635294f,0.341176f})))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt322().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f4().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt325().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f6().getArray())))
                      .setNormal(new NormalObject().setVector(new MFVec3fObject(new MFVec3f7().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt328().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f9().getArray())))))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("_material0")))
                    .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3210().getArray())).setSolid(false)
                      .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f11().getArray())))))))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"File created using CATIA"});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt322 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-75f,0f,0f,-75f,0f,20f,-74.2366f,10.6736f,0f,-74.2366f,10.6736f,20f,-71.962f,21.1299f,0f,-71.962f,21.1299f,20f,-68.2224f,31.1561f,0f,-68.2224f,31.1561f,20f,-63.094f,40.5481f,0f,-63.094f,40.5481f,20f,-56.6812f,49.1146f,0f,-56.6812f,49.1146f,20f,-49.1146f,56.6812f,0f,-49.1146f,56.6812f,20f,-40.5481f,63.094f,0f,-40.5481f,63.094f,20f,-31.1561f,68.2224f,0f,-31.1561f,68.2224f,20f,-21.1299f,71.962f,0f,-21.1299f,71.962f,20f,-10.6736f,74.2366f,0f,-10.6736f,74.2366f,20f,0f,75f,0f,0f,75f,20f,10.6736f,74.2366f,0f,10.6736f,74.2366f,20f,21.1299f,71.962f,0f,21.1299f,71.962f,20f,31.1561f,68.2224f,0f,31.1561f,68.2224f,20f,40.5481f,63.094f,0f,40.5481f,63.094f,20f,49.1146f,56.6812f,0f,49.1146f,56.6812f,20f,56.6812f,49.1146f,0f,56.6812f,49.1146f,20f,63.094f,40.5481f,0f,63.094f,40.5481f,20f,68.2224f,31.1561f,0f,68.2224f,31.1561f,20f,71.962f,21.1299f,0f,71.962f,21.1299f,20f,74.2366f,10.6736f,0f,74.2366f,10.6736f,20f,75f,0f,0f,75f,0f,20f});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1f,0f,0f,-1f,0f,0f,-0.989822f,0.142308f,0f,-0.989822f,0.142308f,0f,-0.959498f,0.281716f,0f,-0.959498f,0.281716f,0f,-0.909645f,0.415387f,0f,-0.909645f,0.415387f,0f,-0.841257f,0.540635f,0f,-0.841257f,0.540635f,0f,-0.755771f,0.654836f,0f,-0.755771f,0.654836f,0f,-0.654836f,0.755771f,0f,-0.654836f,0.755771f,0f,-0.540635f,0.841257f,0f,-0.540635f,0.841257f,0f,-0.415387f,0.909645f,0f,-0.415387f,0.909645f,0f,-0.281716f,0.959498f,0f,-0.281716f,0.959498f,0f,-0.142308f,0.989822f,0f,-0.142308f,0.989822f,0f,0f,1f,0f,0f,1f,0f,0.142308f,0.989822f,0f,0.142308f,0.989822f,0f,0.281716f,0.959498f,0f,0.281716f,0.959498f,0f,0.415387f,0.909645f,0f,0.415387f,0.909645f,0f,0.540635f,0.841257f,0f,0.540635f,0.841257f,0f,0.654836f,0.755771f,0f,0.654836f,0.755771f,0f,0.755771f,0.654836f,0f,0.755771f,0.654836f,0f,0.841257f,0.540635f,0f,0.841257f,0.540635f,0f,0.909645f,0.415387f,0f,0.909645f,0.415387f,0f,0.959498f,0.281716f,0f,0.959498f,0.281716f,0f,0.989822f,0.142308f,0f,0.989822f,0.142308f,0f,1f,0f,0f,1f,0f,0f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,3,5,4,-1,4,5,6,-1,5,7,6,-1,6,7,8,-1,7,9,8,-1,8,9,10,-1,9,11,10,-1,10,11,12,-1,11,13,12,-1,12,13,14,-1,13,15,14,-1,14,15,16,-1,15,17,16,-1,16,17,18,-1,17,19,18,-1,18,19,20,-1,19,21,20,-1,20,21,22,-1,21,23,22,-1,22,23,24,-1,23,25,24,-1,24,25,26,-1,25,27,26,-1,26,27,28,-1,27,29,28,-1,28,29,30,-1,29,31,30,-1,30,31,32,-1,31,33,32,-1,32,33,34,-1,33,35,34,-1,34,35,36,-1,35,37,36,-1,36,37,38,-1,37,39,38,-1,38,39,40,-1,39,41,40,-1,40,41,42,-1,41,43,42,-1,42,43,44,-1,43,45,44,-1});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {75f,0f,0f,75f,0f,20f,74.2366f,-10.6736f,0f,74.2366f,-10.6736f,20f,71.962f,-21.1299f,0f,71.962f,-21.1299f,20f,68.2224f,-31.1561f,0f,68.2224f,-31.1561f,20f,63.094f,-40.5481f,0f,63.094f,-40.5481f,20f,56.6812f,-49.1146f,0f,56.6812f,-49.1146f,20f,49.1146f,-56.6812f,0f,49.1146f,-56.6812f,20f,40.5481f,-63.094f,0f,40.5481f,-63.094f,20f,31.1561f,-68.2224f,0f,31.1561f,-68.2224f,20f,21.1299f,-71.962f,0f,21.1299f,-71.962f,20f,10.6736f,-74.2366f,0f,10.6736f,-74.2366f,20f,0f,-75f,0f,0f,-75f,20f,-10.6736f,-74.2366f,0f,-10.6736f,-74.2366f,20f,-21.1299f,-71.962f,0f,-21.1299f,-71.962f,20f,-31.1561f,-68.2224f,0f,-31.1561f,-68.2224f,20f,-40.5481f,-63.094f,0f,-40.5481f,-63.094f,20f,-49.1146f,-56.6812f,0f,-49.1146f,-56.6812f,20f,-56.6812f,-49.1146f,0f,-56.6812f,-49.1146f,20f,-63.094f,-40.5481f,0f,-63.094f,-40.5481f,20f,-68.2224f,-31.1561f,0f,-68.2224f,-31.1561f,20f,-71.962f,-21.1299f,0f,-71.962f,-21.1299f,20f,-74.2366f,-10.6736f,0f,-74.2366f,-10.6736f,20f,-75f,0f,0f,-75f,0f,20f});
  }
}
protected class MFVec3f7 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,1f,0f,0f,0.989822f,-0.142308f,0f,0.989822f,-0.142308f,0f,0.959498f,-0.281716f,0f,0.959498f,-0.281716f,0f,0.909645f,-0.415387f,0f,0.909645f,-0.415387f,0f,0.841257f,-0.540635f,0f,0.841257f,-0.540635f,0f,0.755771f,-0.654836f,0f,0.755771f,-0.654836f,0f,0.654836f,-0.755771f,0f,0.654836f,-0.755771f,0f,0.540635f,-0.841257f,0f,0.540635f,-0.841257f,0f,0.415387f,-0.909645f,0f,0.415387f,-0.909645f,0f,0.281716f,-0.959498f,0f,0.281716f,-0.959498f,0f,0.142308f,-0.989822f,0f,0.142308f,-0.989822f,0f,0f,-1f,0f,0f,-1f,0f,-0.142308f,-0.989822f,0f,-0.142308f,-0.989822f,0f,-0.281716f,-0.959498f,0f,-0.281716f,-0.959498f,0f,-0.415387f,-0.909645f,0f,-0.415387f,-0.909645f,0f,-0.540635f,-0.841257f,0f,-0.540635f,-0.841257f,0f,-0.654836f,-0.755771f,0f,-0.654836f,-0.755771f,0f,-0.755771f,-0.654836f,0f,-0.755771f,-0.654836f,0f,-0.841257f,-0.540635f,0f,-0.841257f,-0.540635f,0f,-0.909645f,-0.415387f,0f,-0.909645f,-0.415387f,0f,-0.959498f,-0.281716f,0f,-0.959498f,-0.281716f,0f,-0.989822f,-0.142308f,0f,-0.989822f,-0.142308f,0f,-1f,0f,0f,-1f,0f,0f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {2,1,3,-1,1,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,75f,0f,10.6736f,74.2366f,0f,-10.6736f,74.2366f,0f,-21.1299f,71.962f,0f,21.1299f,71.962f,0f,-31.1561f,68.2224f,0f,31.1561f,68.2224f,0f,-40.5481f,63.094f,0f,40.5481f,63.094f,0f,-49.1146f,56.6812f,0f,49.1146f,56.6812f,0f,-56.6812f,49.1146f,0f,56.6812f,49.1146f,0f,-63.094f,40.5481f,0f,63.094f,40.5481f,0f,-68.2224f,31.1561f,0f,68.2224f,31.1561f,0f,-71.962f,21.1299f,0f,71.962f,21.1299f,0f,-74.2366f,10.6736f,0f,74.2366f,10.6736f,0f,-75f,0f,0f,75f,0f,0f,-74.2366f,-10.6736f,0f,74.2366f,-10.6736f,0f,-71.962f,-21.1299f,0f,71.962f,-21.1299f,0f,-68.2224f,-31.1561f,0f,68.2224f,-31.1561f,0f,-63.094f,-40.5481f,0f,63.094f,-40.5481f,0f,-56.6812f,-49.1146f,0f,56.6812f,-49.1146f,0f,-49.1146f,-56.6812f,0f,49.1146f,-56.6812f,0f,-40.5481f,-63.094f,0f,40.5481f,-63.094f,0f,-31.1561f,-68.2224f,0f,31.1561f,-68.2224f,0f,-21.1299f,-71.962f,0f,21.1299f,-71.962f,0f,-10.6736f,-74.2366f,0f,10.6736f,-74.2366f,0f,0f,-75f,0f});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,0,3,-1,0,4,3,-1,3,4,5,-1,4,6,5,-1,5,6,7,-1,6,8,7,-1,7,8,9,-1,8,10,9,-1,9,10,11,-1,10,12,11,-1,11,12,13,-1,12,14,13,-1,13,14,15,-1,14,16,15,-1,15,16,17,-1,16,18,17,-1,17,18,19,-1,18,20,19,-1,19,20,21,-1,20,22,21,-1,21,22,23,-1,22,24,23,-1,23,24,25,-1,24,26,25,-1,25,26,27,-1,26,28,27,-1,27,28,29,-1,28,30,29,-1,29,30,31,-1,30,32,31,-1,31,32,33,-1,32,34,33,-1,33,34,35,-1,34,36,35,-1,35,36,37,-1,36,38,37,-1,37,38,39,-1,38,40,39,-1,39,40,41,-1,40,42,41,-1,41,42,43,-1,0,1,2,-1});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-10.6736f,74.2366f,20f,10.6736f,74.2366f,20f,0f,75f,20f,21.1299f,71.962f,20f,-21.1299f,71.962f,20f,31.1561f,68.2224f,20f,-31.1561f,68.2224f,20f,40.5481f,63.094f,20f,-40.5481f,63.094f,20f,49.1146f,56.6812f,20f,-49.1146f,56.6812f,20f,56.6812f,49.1146f,20f,-56.6812f,49.1146f,20f,63.094f,40.5481f,20f,-63.094f,40.5481f,20f,68.2224f,31.1561f,20f,-68.2224f,31.1561f,20f,71.962f,21.1299f,20f,-71.962f,21.1299f,20f,74.2366f,10.6736f,20f,-74.2366f,10.6736f,20f,75f,0f,20f,-75f,0f,20f,74.2366f,-10.6736f,20f,-74.2366f,-10.6736f,20f,71.962f,-21.1299f,20f,-71.962f,-21.1299f,20f,68.2224f,-31.1561f,20f,-68.2224f,-31.1561f,20f,63.094f,-40.5481f,20f,-63.094f,-40.5481f,20f,56.6812f,-49.1146f,20f,-56.6812f,-49.1146f,20f,49.1146f,-56.6812f,20f,-49.1146f,-56.6812f,20f,40.5481f,-63.094f,20f,-40.5481f,-63.094f,20f,31.1561f,-68.2224f,20f,-31.1561f,-68.2224f,20f,21.1299f,-71.962f,20f,-21.1299f,-71.962f,20f,10.6736f,-74.2366f,20f,-10.6736f,-74.2366f,20f,0f,-75f,20f});
  }
}
}

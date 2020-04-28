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
public class MaterialExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new MaterialExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/MaterialExample.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("MaterialExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Material node example for X3D-Edit MaterialEditor, which uses Scene Access Interface (SAI) externally to select/deselect different shapes, axes and lights while modifying Material values."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("17 December 2006"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("subject").setContent("X3D-Edit example"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MaterialExample.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("src/www.web3d.org/x3d/tools/X3dEdit3.3/X3D/src/org/web3d/x3d/templates/MaterialExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("MaterialExample.x3d"))
        .addChild(new ViewpointObject().setDEF("ViewpointNode").setDescription("default").setPosition(new float[] {0f,0f,4f}))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE"}).setHeadlight(false))
        .addChild(new BackgroundObject().setDEF("BackgroundNode"))
        .addChild(new DirectionalLightObject().setDEF("DirectionalLightNode").setDirection(new float[] {-0.707f,0f,-0.707f}))
        .addChild(new ShapeObject().setDEF("ShapeNode")
          .setGeometry(new SphereObject())
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDEF("MaterialNode"))))
        .addChild(new SwitchObject().setDEF("AxesSwitch").setWhichChoice(0)
          .addChild(new GroupObject()
            .addChild(new GroupObject().setDEF("xAxis")
              .addChild(new ShapeObject()
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt320().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f1().getArray()))))
                .setAppearance(new AppearanceObject().setDEF("AppearanceRed")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0.8f,0f,0f}))))
              .addChild(new TransformObject().setTranslation(new float[] {1.4f,0f,0f})
                .addChild(new BillboardObject()
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
                      .setFontStyle(new FontStyleObject().setDEF("LabelStyle").setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.3f)))
                    .setAppearance(new AppearanceObject().setUSE("AppearanceRed"))))))
            .addChild(new GroupObject().setDEF("yAxis")
              .addChild(new ShapeObject()
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt324().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f5().getArray()))))
                .setAppearance(new AppearanceObject().setDEF("AppearanceGreen")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0f,0.8f,0f}))))
              .addChild(new TransformObject().setTranslation(new float[] {0f,1.4f,0f})
                .addChild(new BillboardObject().setAxisOfRotation(new float[] {0f,0f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
                      .setFontStyle(new FontStyleObject().setUSE("LabelStyle")))
                    .setAppearance(new AppearanceObject().setUSE("AppearanceGreen"))))))
            .addChild(new GroupObject().setDEF("zAxis")
              .addChild(new ShapeObject()
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt327().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f8().getArray()))))
                .setAppearance(new AppearanceObject().setDEF("AppearanceBlue")
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0f,0f,0.8f}))))
              .addChild(new TransformObject().setTranslation(new float[] {0f,0f,1.4f})
                .addChild(new BillboardObject().setAxisOfRotation(new float[] {0f,0f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                      .setFontStyle(new FontStyleObject().setUSE("LabelStyle")))
                    .setAppearance(new AppearanceObject().setUSE("AppearanceBlue"))))))))
        .addChild(new SwitchObject().setDEF("LightDirectionVectorSwitch").setWhichChoice(0)
          .addChild(new TransformObject().setScale(new float[] {1.25f,1.25f,1.25f})
            .addChild(new ShapeObject()
              .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt3210().getArray()))
                .addComments(new CommentsBlock("negate direction-vector values so that line approaches from light direction towards origin"))
                .setCoord(new CoordinateObject().setDEF("LightDirectionCoordinateNode").setPoint(new MFVec3fObject(new MFVec3f11().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDEF("LightDirectionLineMaterial").setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,1f,1f})))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1.25f,0f,0f});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"x"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFInt324 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f5 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,1.25f,0f});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"y"});
  }
}
protected class MFInt327 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0f,1.25f});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"z"});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.707f,0f,0.707f,0f,0f,0f});
  }
}
}

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
public class CADPartChildNoTransformation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CADPartChildNoTransformation().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("CADInterchange").setVersion("3.1")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("CADGeometry").setLevel(2))
        .addComponent(new componentObject().setName("EnvironmentalEffects").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("CADPartChildNoTransformation.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."))
        .addMeta(new metaObject().setName("creator").setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"))
        .addMeta(new metaObject().setName("translator").setContent("Vince Marchetti bushing generation using python scripts"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
        .addMeta(new metaObject().setName("warning").setContent("This scene is intended for specification development only."))
        .addMeta(new metaObject().setName("created").setContent("29 June 2012"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("CADPartChildNoTransformation.x3d"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new ViewpointObject().setDescription("Hello CAD bushing").setOrientation(new float[] {1f,0f,0f,-0.321751f}).setPosition(new float[] {0f,5f,15f}))
        .addChild(new CADAssemblyObject().setName("DesignPatternAssembly")
          .addChild(new CADPartObject().setName("CADPartExample")
            .addComments(new CommentsBlock("the rotation and translation attributes serve to position the bushing within the assembly"))
            .addChild(new CADFaceObject().setName("outerSurface")
              .setShape(new ShapeObject()
                .addComments(new CommentsBlock("note solid='true' and so one-sided external rendering only"))
                .setGeometry(new CylinderObject().setBottom(false).setHeight(3f).setRadius(2f).setTop(false))
                .setAppearance(new AppearanceObject().setDEF("AppearanceGrey")
                  .setMaterial(new MaterialObject()))))
            .addChild(new CADFaceObject().setName("innerSurface")
              .setShape(new ShapeObject()
                .addComments(new CommentsBlock("note solid='false' and so two-sided internal + external rendering"))
                .setGeometry(new CylinderObject().setBottom(false).setHeight(3f).setSolid(false).setTop(false))
                .setAppearance(new AppearanceObject().setUSE("AppearanceGrey"))))
            .addChild(new CADFaceObject().setName("topCap")
              .setShape(new ShapeObject()
                .setGeometry(new IndexedTriangleSetObject().setIndex(new MFInt32Object(new MFInt321().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f2().getArray()))))
                .setAppearance(new AppearanceObject().setUSE("AppearanceGrey"))))
            .addChild(new CADFaceObject().setName("bottomCap")
              .setShape(new ShapeObject()
                .setGeometry(new IndexedTriangleSetObject().setIndex(new MFInt32Object(new MFInt323().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f4().getArray()))))
                .setAppearance(new AppearanceObject().setUSE("AppearanceGrey")))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.9607843f,1f,0.9607843f});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {2f,1.5f,0f,1f,1.5f,0f,1.9616f,1.5f,0.3902f,0.9808f,1.5f,0.1951f,1.8478f,1.5f,0.7654f,0.9239f,1.5f,0.3827f,1.6629f,1.5f,1.1111f,0.8315f,1.5f,0.5556f,1.4142f,1.5f,1.4142f,0.7071f,1.5f,0.7071f,1.1111f,1.5f,1.6629f,0.5556f,1.5f,0.8315f,0.7654f,1.5f,1.8478f,0.3827f,1.5f,0.9239f,0.3902f,1.5f,1.9616f,0.1951f,1.5f,0.9808f,0f,1.5f,2f,0f,1.5f,1f,-0.3902f,1.5f,1.9616f,-0.1951f,1.5f,0.9808f,-0.7654f,1.5f,1.8478f,-0.3827f,1.5f,0.9239f,-1.1111f,1.5f,1.6629f,-0.5556f,1.5f,0.8315f,-1.4142f,1.5f,1.4142f,-0.7071f,1.5f,0.7071f,-1.6629f,1.5f,1.1111f,-0.8315f,1.5f,0.5556f,-1.8478f,1.5f,0.7654f,-0.9239f,1.5f,0.3827f,-1.9616f,1.5f,0.3902f,-0.9808f,1.5f,0.1951f,-2f,1.5f,0f,-1f,1.5f,0f,-1.9616f,1.5f,-0.3902f,-0.9808f,1.5f,-0.1951f,-1.8478f,1.5f,-0.7654f,-0.9239f,1.5f,-0.3827f,-1.6629f,1.5f,-1.1111f,-0.8315f,1.5f,-0.5556f,-1.4142f,1.5f,-1.4142f,-0.7071f,1.5f,-0.7071f,-1.1111f,1.5f,-1.6629f,-0.5556f,1.5f,-0.8315f,-0.7654f,1.5f,-1.8478f,-0.3827f,1.5f,-0.9239f,-0.3902f,1.5f,-1.9616f,-0.1951f,1.5f,-0.9808f,0f,1.5f,-2f,0f,1.5f,-1f,0.3902f,1.5f,-1.9616f,0.1951f,1.5f,-0.9808f,0.7654f,1.5f,-1.8478f,0.3827f,1.5f,-0.9239f,1.1111f,1.5f,-1.6629f,0.5556f,1.5f,-0.8315f,1.4142f,1.5f,-1.4142f,0.7071f,1.5f,-0.7071f,1.6629f,1.5f,-1.1111f,0.8315f,1.5f,-0.5556f,1.8478f,1.5f,-0.7654f,0.9239f,1.5f,-0.3827f,1.9616f,1.5f,-0.3902f,0.9808f,1.5f,-0.1951f,2f,1.5f,0f,1f,1.5f,0f});
  }
}
protected class MFInt323 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
  }
}
protected class MFVec3f4 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {2f,-1.5f,0f,1f,-1.5f,0f,1.9616f,-1.5f,-0.3902f,0.9808f,-1.5f,-0.1951f,1.8478f,-1.5f,-0.7654f,0.9239f,-1.5f,-0.3827f,1.6629f,-1.5f,-1.1111f,0.8315f,-1.5f,-0.5556f,1.4142f,-1.5f,-1.4142f,0.7071f,-1.5f,-0.7071f,1.1111f,-1.5f,-1.6629f,0.5556f,-1.5f,-0.8315f,0.7654f,-1.5f,-1.8478f,0.3827f,-1.5f,-0.9239f,0.3902f,-1.5f,-1.9616f,0.1951f,-1.5f,-0.9808f,0f,-1.5f,-2f,0f,-1.5f,-1f,-0.3902f,-1.5f,-1.9616f,-0.1951f,-1.5f,-0.9808f,-0.7654f,-1.5f,-1.8478f,-0.3827f,-1.5f,-0.9239f,-1.1111f,-1.5f,-1.6629f,-0.5556f,-1.5f,-0.8315f,-1.4142f,-1.5f,-1.4142f,-0.7071f,-1.5f,-0.7071f,-1.6629f,-1.5f,-1.1111f,-0.8315f,-1.5f,-0.5556f,-1.8478f,-1.5f,-0.7654f,-0.9239f,-1.5f,-0.3827f,-1.9616f,-1.5f,-0.3902f,-0.9808f,-1.5f,-0.1951f,-2f,-1.5f,0f,-1f,-1.5f,0f,-1.9616f,-1.5f,0.3902f,-0.9808f,-1.5f,0.1951f,-1.8478f,-1.5f,0.7654f,-0.9239f,-1.5f,0.3827f,-1.6629f,-1.5f,1.1111f,-0.8315f,-1.5f,0.5556f,-1.4142f,-1.5f,1.4142f,-0.7071f,-1.5f,0.7071f,-1.1111f,-1.5f,1.6629f,-0.5556f,-1.5f,0.8315f,-0.7654f,-1.5f,1.8478f,-0.3827f,-1.5f,0.9239f,-0.3902f,-1.5f,1.9616f,-0.1951f,-1.5f,0.9808f,0f,-1.5f,2f,0f,-1.5f,1f,0.3902f,-1.5f,1.9616f,0.1951f,-1.5f,0.9808f,0.7654f,-1.5f,1.8478f,0.3827f,-1.5f,0.9239f,1.1111f,-1.5f,1.6629f,0.5556f,-1.5f,0.8315f,1.4142f,-1.5f,1.4142f,0.7071f,-1.5f,0.7071f,1.6629f,-1.5f,1.1111f,0.8315f,-1.5f,0.5556f,1.8478f,-1.5f,0.7654f,0.9239f,-1.5f,0.3827f,1.9616f,-1.5f,0.3902f,0.9808f,-1.5f,0.1951f,2f,-1.5f,0f,1f,-1.5f,0f});
  }
}
}

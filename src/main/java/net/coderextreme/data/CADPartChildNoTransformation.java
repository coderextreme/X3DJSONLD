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
public class CADPartChildNoTransformation {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new CADPartChildNoTransformation().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/CADPartChildNoTransformation.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("CADInterchange").setVersion("3.1")
      .setHead(new head()
        .addComponent(new component().setName("CADGeometry").setLevel(2))
        .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
        .addMeta(new meta().setName("title").setContent("CADPartChildNoTransformation.x3d"))
        .addMeta(new meta().setName("description").setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."))
        .addMeta(new meta().setName("creator").setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"))
        .addMeta(new meta().setName("translator").setContent("Vince Marchetti bushing generation using python scripts"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
        .addMeta(new meta().setName("warning").setContent("This scene is intended for specification development only."))
        .addMeta(new meta().setName("created").setContent("29 June 2012"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("CADPartChildNoTransformation.x3d"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Viewpoint().setDescription("Hello CAD bushing").setOrientation(new float[] {1f,0f,0f,-0.321751f}).setPosition(new float[] {0f,5f,15f}))
        .addChild(new CADAssembly().setName("DesignPatternAssembly")
          .addChild(new CADPart().setName("CADPartExample")
            .addComments("the rotation and translation attributes serve to position the bushing within the assembly")
            .addChild(new CADFace().setName("outerSurface")
              .setShape(new Shape()
                .addComments("note solid='true' and so one-sided external rendering only")
                .setGeometry(new Cylinder().setBottom(false).setHeight(3f).setRadius(2f).setTop(false))
                .setAppearance(new Appearance().setDEF("AppearanceGrey")
                  .setMaterial(new Material()))))
            .addChild(new CADFace().setName("innerSurface")
              .setShape(new Shape()
                .addComments("note solid='false' and so two-sided internal + external rendering")
                .setGeometry(new Cylinder().setBottom(false).setHeight(3f).setSolid(false).setTop(false))
                .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
            .addChild(new CADFace().setName("topCap")
              .setShape(new Shape()
                .setGeometry(new IndexedTriangleSet().setIndex(new MFInt321().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f2().getArray())))
                .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
            .addChild(new CADFace().setName("bottomCap")
              .setShape(new Shape()
                .setGeometry(new IndexedTriangleSet().setIndex(new MFInt323().getArray())
                  .setCoord(new Coordinate().setPoint(new MFVec3f4().getArray())))
                .setAppearance(new Appearance().setUSE("AppearanceGrey")))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.9607843f,1f,0.9607843f});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2f,1.5f,0f,1f,1.5f,0f,1.9616f,1.5f,0.3902f,0.9808f,1.5f,0.1951f,1.8478f,1.5f,0.7654f,0.9239f,1.5f,0.3827f,1.6629f,1.5f,1.1111f,0.8315f,1.5f,0.5556f,1.4142f,1.5f,1.4142f,0.7071f,1.5f,0.7071f,1.1111f,1.5f,1.6629f,0.5556f,1.5f,0.8315f,0.7654f,1.5f,1.8478f,0.3827f,1.5f,0.9239f,0.3902f,1.5f,1.9616f,0.1951f,1.5f,0.9808f,0f,1.5f,2f,0f,1.5f,1f,-0.3902f,1.5f,1.9616f,-0.1951f,1.5f,0.9808f,-0.7654f,1.5f,1.8478f,-0.3827f,1.5f,0.9239f,-1.1111f,1.5f,1.6629f,-0.5556f,1.5f,0.8315f,-1.4142f,1.5f,1.4142f,-0.7071f,1.5f,0.7071f,-1.6629f,1.5f,1.1111f,-0.8315f,1.5f,0.5556f,-1.8478f,1.5f,0.7654f,-0.9239f,1.5f,0.3827f,-1.9616f,1.5f,0.3902f,-0.9808f,1.5f,0.1951f,-2f,1.5f,0f,-1f,1.5f,0f,-1.9616f,1.5f,-0.3902f,-0.9808f,1.5f,-0.1951f,-1.8478f,1.5f,-0.7654f,-0.9239f,1.5f,-0.3827f,-1.6629f,1.5f,-1.1111f,-0.8315f,1.5f,-0.5556f,-1.4142f,1.5f,-1.4142f,-0.7071f,1.5f,-0.7071f,-1.1111f,1.5f,-1.6629f,-0.5556f,1.5f,-0.8315f,-0.7654f,1.5f,-1.8478f,-0.3827f,1.5f,-0.9239f,-0.3902f,1.5f,-1.9616f,-0.1951f,1.5f,-0.9808f,0f,1.5f,-2f,0f,1.5f,-1f,0.3902f,1.5f,-1.9616f,0.1951f,1.5f,-0.9808f,0.7654f,1.5f,-1.8478f,0.3827f,1.5f,-0.9239f,1.1111f,1.5f,-1.6629f,0.5556f,1.5f,-0.8315f,1.4142f,1.5f,-1.4142f,0.7071f,1.5f,-0.7071f,1.6629f,1.5f,-1.1111f,0.8315f,1.5f,-0.5556f,1.8478f,1.5f,-0.7654f,0.9239f,1.5f,-0.3827f,1.9616f,1.5f,-0.3902f,0.9808f,1.5f,-0.1951f,2f,1.5f,0f,1f,1.5f,0f});
  }
}
protected class MFInt323 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65});
  }
}
protected class MFVec3f4 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {2f,-1.5f,0f,1f,-1.5f,0f,1.9616f,-1.5f,-0.3902f,0.9808f,-1.5f,-0.1951f,1.8478f,-1.5f,-0.7654f,0.9239f,-1.5f,-0.3827f,1.6629f,-1.5f,-1.1111f,0.8315f,-1.5f,-0.5556f,1.4142f,-1.5f,-1.4142f,0.7071f,-1.5f,-0.7071f,1.1111f,-1.5f,-1.6629f,0.5556f,-1.5f,-0.8315f,0.7654f,-1.5f,-1.8478f,0.3827f,-1.5f,-0.9239f,0.3902f,-1.5f,-1.9616f,0.1951f,-1.5f,-0.9808f,0f,-1.5f,-2f,0f,-1.5f,-1f,-0.3902f,-1.5f,-1.9616f,-0.1951f,-1.5f,-0.9808f,-0.7654f,-1.5f,-1.8478f,-0.3827f,-1.5f,-0.9239f,-1.1111f,-1.5f,-1.6629f,-0.5556f,-1.5f,-0.8315f,-1.4142f,-1.5f,-1.4142f,-0.7071f,-1.5f,-0.7071f,-1.6629f,-1.5f,-1.1111f,-0.8315f,-1.5f,-0.5556f,-1.8478f,-1.5f,-0.7654f,-0.9239f,-1.5f,-0.3827f,-1.9616f,-1.5f,-0.3902f,-0.9808f,-1.5f,-0.1951f,-2f,-1.5f,0f,-1f,-1.5f,0f,-1.9616f,-1.5f,0.3902f,-0.9808f,-1.5f,0.1951f,-1.8478f,-1.5f,0.7654f,-0.9239f,-1.5f,0.3827f,-1.6629f,-1.5f,1.1111f,-0.8315f,-1.5f,0.5556f,-1.4142f,-1.5f,1.4142f,-0.7071f,-1.5f,0.7071f,-1.1111f,-1.5f,1.6629f,-0.5556f,-1.5f,0.8315f,-0.7654f,-1.5f,1.8478f,-0.3827f,-1.5f,0.9239f,-0.3902f,-1.5f,1.9616f,-0.1951f,-1.5f,0.9808f,0f,-1.5f,2f,0f,-1.5f,1f,0.3902f,-1.5f,1.9616f,0.1951f,-1.5f,0.9808f,0.7654f,-1.5f,1.8478f,0.3827f,-1.5f,0.9239f,1.1111f,-1.5f,1.6629f,0.5556f,-1.5f,0.8315f,1.4142f,-1.5f,1.4142f,0.7071f,-1.5f,0.7071f,1.6629f,-1.5f,1.1111f,0.8315f,-1.5f,0.5556f,1.8478f,-1.5f,0.7654f,0.9239f,-1.5f,0.3827f,1.9616f,-1.5f,0.3902f,0.9808f,-1.5f,0.1951f,2f,-1.5f,0f,1f,-1.5f,0f});
  }
}
}
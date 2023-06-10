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
public class GridXZ_20x20Fixed {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new GridXZ_20x20Fixed().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/GridXZ_20x20Fixed.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("GridXZ_20x20Fixed.x3d"))
        .addMeta(new meta().setName("creator").setContent("MV4204 class"))
        .addMeta(new meta().setName("created").setContent("3 September 2000"))
        .addMeta(new meta().setName("modified").setContent("30 March 2016"))
        .addMeta(new meta().setName("reference").setContent("GridXY_20x20Fixed.x3d"))
        .addMeta(new meta().setName("reference").setContent("GridYZ_20x20Fixed.x3d"))
        .addMeta(new meta().setName("description").setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."))
        .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)").setOrientation(new float[] {1f,0f,0f,-0.4f}).setPosition(new float[] {0f,10f,25f}))
        .addChild(new Transform().setDEF("GridLocation")
          .addChild(new Group()
            .addChild(new Shape().setDEF("LinesAlignedAlongZ")
              .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
                .setCoord(new Coordinate().setDEF("EndPoints").setPoint(new MFVec3f2().getArray()))
                .setColor(new Color().setColor(new MFColor3().getArray()))))
            .addChild(new Transform().setDEF("LinesAlignedAlongX").setRotation(new float[] {0f,1f,0f,1.57079f})
              .addChild(new Shape().setUSE("LinesAlignedAlongZ")))
            .addChild(new Transform().setTranslation(new float[] {0f,-0.5f,0f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF("CenterTextNode").setString(new MFString4().getArray())
                    .setFontStyle(new FontStyle().setDEF("FS4").setJustify(new MFString5().getArray()).setSize(0.4000f)))
                  .setAppearance(new Appearance().setDEF("DefaultAppearance")
                    .setMaterial(new Material())))))
            .addChild(new Transform().setTranslation(new float[] {10f,-0.5f,10f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString6().getArray())
                    .setFontStyle(new FontStyle().setUSE("FS4")))
                  .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
            .addChild(new Transform().setTranslation(new float[] {10f,-0.5f,-10f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString7().getArray())
                    .setFontStyle(new FontStyle().setUSE("FS4")))
                  .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
            .addChild(new Transform().setTranslation(new float[] {-10f,-0.5f,10f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString8().getArray())
                    .setFontStyle(new FontStyle().setUSE("FS4")))
                  .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
            .addChild(new Transform().setTranslation(new float[] {-10f,-0.5f,-10f})
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString9().getArray())
                    .setFontStyle(new FontStyle().setUSE("FS4")))
                  .setAppearance(new Appearance().setUSE("DefaultAppearance"))))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1});
  }
}
protected class MFVec3f2 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,-10.0000f,0.0000f,10.0000f,-9.0000f,0.0000f,10.0000f,-8.0000f,0.0000f,10.0000f,-7.0000f,0.0000f,10.0000f,-6.0000f,0.0000f,10.0000f,-5.0000f,0.0000f,10.0000f,-4.0000f,0.0000f,10.0000f,-3.0000f,0.0000f,10.0000f,-2.0000f,0.0000f,10.0000f,-1.0000f,0.0000f,10.0000f,0.0000f,0.0000f,10.0000f,1.0000f,0.0000f,10.0000f,2.0000f,0.0000f,10.0000f,3.0000f,0.0000f,10.0000f,4.0000f,0.0000f,10.0000f,5.0000f,0.0000f,10.0000f,6.0000f,0.0000f,10.0000f,7.0000f,0.0000f,10.0000f,8.0000f,0.0000f,10.0000f,9.0000f,0.0000f,10.0000f,10.0000f,0.0000f,10.0000f,-10.0000f,0.0000f,-10.0000f,-9.0000f,0.0000f,-10.0000f,-8.0000f,0.0000f,-10.0000f,-7.0000f,0.0000f,-10.0000f,-6.0000f,0.0000f,-10.0000f,-5.0000f,0.0000f,-10.0000f,-4.0000f,0.0000f,-10.0000f,-3.0000f,0.0000f,-10.0000f,-2.0000f,0.0000f,-10.0000f,-1.0000f,0.0000f,-10.0000f,0.0000f,0.0000f,-10.0000f,1.0000f,0.0000f,-10.0000f,2.0000f,0.0000f,-10.0000f,3.0000f,0.0000f,-10.0000f,4.0000f,0.0000f,-10.0000f,5.0000f,0.0000f,-10.0000f,6.0000f,0.0000f,-10.0000f,7.0000f,0.0000f,-10.0000f,8.0000f,0.0000f,-10.0000f,9.0000f,0.0000f,-10.0000f,10.0000f,0.0000f,-10.0000f});
  }
}
protected class MFColor3 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4000f,0.4000f,0.4000f,0.8000f,0.2000f,0.0000f,0.4000f,0.1000f,0.0500f});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"origin"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10 0 10"});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10 0 -10"});
  }
}
protected class MFString8 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"-10 0 10"});
  }
}
protected class MFString9 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"-10 0 -10"});
  }
}
}

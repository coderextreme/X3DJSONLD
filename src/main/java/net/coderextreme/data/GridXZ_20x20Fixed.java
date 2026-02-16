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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class GridXZ_20x20Fixed implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new GridXZ_20x20Fixed().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/GridXZ_20x20Fixed.new.java.x3d");
    model.toFileJSON("../data/GridXZ_20x20Fixed.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("3.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("GridXZ_20x20Fixed.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("MV4204 class")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("3 September 2000")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("28 November 2019")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("GridXY_20x20Fixed.x3d")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("GridYZ_20x20Fixed.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("GridXZ_20x20Fixed.x3d")))
        .addChild(new Viewpoint().setDescription(new SFString("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)")).setOrientation(new float[] {1f ,0f ,0f ,-0.4f }).setPosition(new float[] {0f ,10f ,25f }))
        .addChild(new Transform().setDEF(new SFString("GridLocation"))
          .addChild(new Group()
            .addChild(new Shape().setDEF(new SFString("LinesAlignedAlongZ"))
              .setGeometry(new IndexedLineSet().setColorIndex(new MFInt320().getArray()).setColorPerVertex(false).setCoordIndex(new MFInt321().getArray())
                .setCoord(new Coordinate().setDEF(new SFString("EndPoints")).setPoint(new MFVec3f2().getArray()))
                .setColor(new Color().setColor(new MFColor3().getArray()))))
            .addChild(new Transform().setDEF(new SFString("LinesAlignedAlongX")).setRotation(new float[] {0f ,1f ,0f ,1.57079f })
              .addChild(new Shape().setUSE(new SFString("LinesAlignedAlongZ"))))
            .addChild(new Transform().setTranslation(new float[] {0f ,-0.5f ,0f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setDEF(new SFString("CenterTextNode")).setString(new MFString4().getArray())
                    .setFontStyle(new FontStyle().setDEF(new SFString("FS4")).setJustify(new MFString5().getArray()).setSize(0.4f )))
                  .setAppearance(new Appearance().setDEF(new SFString("DefaultAppearance"))
                    .setMaterial(new Material())))))
            .addChild(new Transform().setTranslation(new float[] {10f ,-0.5f ,10f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString6().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("FS4"))))
                  .setAppearance(new Appearance().setUSE(new SFString("DefaultAppearance"))))))
            .addChild(new Transform().setTranslation(new float[] {10f ,-0.5f ,-10f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString7().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("FS4"))))
                  .setAppearance(new Appearance().setUSE(new SFString("DefaultAppearance"))))))
            .addChild(new Transform().setTranslation(new float[] {-10f ,-0.5f ,10f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString8().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("FS4"))))
                  .setAppearance(new Appearance().setUSE(new SFString("DefaultAppearance"))))))
            .addChild(new Transform().setTranslation(new float[] {-10f ,-0.5f ,-10f })
              .addChild(new Billboard()
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString9().getArray())
                    .setFontStyle(new FontStyle().setUSE(new SFString("FS4"))))
                  .setAppearance(new Appearance().setUSE(new SFString("DefaultAppearance")))))))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1});
  }
}
private class MFInt321 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1});
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,-10f ,0f ,10f ,-9f ,0f ,10f ,-8f ,0f ,10f ,-7f ,0f ,10f ,-6f ,0f ,10f ,-5f ,0f ,10f ,-4f ,0f ,10f ,-3f ,0f ,10f ,-2f ,0f ,10f ,-1f ,0f ,10f ,0f ,0f ,10f ,1f ,0f ,10f ,2f ,0f ,10f ,3f ,0f ,10f ,4f ,0f ,10f ,5f ,0f ,10f ,6f ,0f ,10f ,7f ,0f ,10f ,8f ,0f ,10f ,9f ,0f ,10f ,10f ,0f ,10f ,-10f ,0f ,-10f ,-9f ,0f ,-10f ,-8f ,0f ,-10f ,-7f ,0f ,-10f ,-6f ,0f ,-10f ,-5f ,0f ,-10f ,-4f ,0f ,-10f ,-3f ,0f ,-10f ,-2f ,0f ,-10f ,-1f ,0f ,-10f ,0f ,0f ,-10f ,1f ,0f ,-10f ,2f ,0f ,-10f ,3f ,0f ,-10f ,4f ,0f ,-10f ,5f ,0f ,-10f ,6f ,0f ,-10f ,7f ,0f ,-10f ,8f ,0f ,-10f ,9f ,0f ,-10f ,10f ,0f ,-10f });
  }
}
private class MFColor3 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4f ,0.4f ,0.4f ,0.8f ,0.2f ,0f ,0.4f ,0.1f ,0.05f });
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"origin"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10 0 10"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"10 0 -10"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"-10 0 10"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"-10 0 -10"});
  }
}
}

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
public class indexedfaceset_pixeltexture_whole {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new indexedfaceset_pixeltexture_whole().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/indexedfaceset_pixeltexture_whole.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("3.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("indexedfaceset_pixeltexture_whole.x3d"))
        .addMeta(new meta().setName("warning").setContent("file did not transform to vrml97"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-front.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-rear.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-top.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-bottom.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-left.jpg"))
        .addMeta(new meta().setName("Image").setContent("indexedfaceset_pixeltexture_whole-right.jpg"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("13 January 2014"))
        .addMeta(new meta().setName("description").setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription("Front View"))
        .addChild(new Viewpoint().setDescription("Rear View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,0f,-10f}))
        .addChild(new Viewpoint().setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,10f,0f}))
        .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(new float[] {1f,0f,0f,1.57f}).setPosition(new float[] {0f,-10f,0f}))
        .addChild(new Viewpoint().setDescription("Right View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {10f,0f,0f}))
        .addChild(new Viewpoint().setDescription("Left View").setOrientation(new float[] {0f,1f,0f,-1.57f}).setPosition(new float[] {-10f,0f,0f}))
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setImage(new int[] {2,2,4,0xFF0000FF,16711935,0xFFFFFFFF,0xFFFF00FF})))
          .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setCoordIndex(new MFInt320().getArray()).setCreaseAngle(0.5f).setTexCoordIndex(new MFInt321().getArray())
            .setColor(new Color().setColor(new MFColor2().getArray()))
            .setCoord(new Coordinate().setPoint(new MFVec3f3().getArray()))
            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f4().getArray())))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
  }
}
protected class MFInt321 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
  }
}
protected class MFColor2 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2f,1f,1f,-2f,-1f,1f,2f,1f,1f,2f,-1f,1f,2f,1f,-1f,2f,-1f,-1f,-2f,1f,-1f,-2f,-1f,-1f});
  }
}
protected class MFVec2f4 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0f,1f,0f,0f,1f,1f,1f,0f});
  }
}
}

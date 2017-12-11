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
public class indexedfaceset_pixeltexture_part {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new indexedfaceset_pixeltexture_part().initialize().toFileJSON("../data/indexedfaceset_pixeltexture_part.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("indexedfaceset_pixeltexture_part.x3d"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-front.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-rear.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-top.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-bottom.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-left.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("indexedfaceset_pixeltexture_part-right.jpg"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new metaObject().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new metaObject().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new metaObject().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d"))
        .addMeta(new metaObject().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new metaObject().setName("translated").setContent("21 January 2001"))
        .addMeta(new metaObject().setName("modified").setContent("13 January 2014"))
        .addMeta(new metaObject().setName("description").setContent("Test of browser ability to map a partial portion of an PixelTexture onto an IndexedFaceSet geometry. Only the yellow portion of four equal sized red, green, yellow and white squares in the pixel texture map all the faces of the cube."))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_part.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDescription("Front View"))
        .addChild(new ViewpointObject().setDescription("Rear View").setOrientation(new float[] {0f,1f,0f,3.14f}).setPosition(new float[] {0f,0f,-10f}))
        .addChild(new ViewpointObject().setDescription("Top View").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,10f,0f}))
        .addChild(new ViewpointObject().setDescription("Bottom View").setOrientation(new float[] {1f,0f,0f,1.57f}).setPosition(new float[] {0f,-10f,0f}))
        .addChild(new ViewpointObject().setDescription("Right View").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {10f,0f,0f}))
        .addChild(new ViewpointObject().setDescription("Left View").setOrientation(new float[] {0f,1f,0f,-1.57f}).setPosition(new float[] {-10f,0f,0f}))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","FLY","ANY"}))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject())
            .setTexture(new PixelTextureObject().setImage(new int[] {2,2,4,0xFF0000FF,16711935,0xFFFFFFFF,0xFFFF00FF})))
          .setGeometry(new IndexedFaceSetObject().setColorPerVertex(false).setCoordIndex(new MFInt32Object(new MFInt320().getArray())).setCreaseAngle(0.5f).setTexCoordIndex(new MFInt32Object(new MFInt321().getArray()))
            .setColor(new ColorObject().setColor(new MFColorObject(new MFColor2().getArray())))
            .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f3().getArray())))
            .setTexCoord(new TextureCoordinateObject().setPoint(new MFVec2fObject(new MFVec2f4().getArray()))))))      ;
    return X3D0;
    }
protected class MFInt320 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
  }
}
protected class MFInt321 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f,0f,1f,0f});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-2f,1f,1f,-2f,-1f,1f,2f,1f,1f,2f,-1f,1f,2f,1f,-1f,2f,-1f,-1f,-2f,1f,-1f,-2f,-1f,-1f});
  }
}
protected class MFVec2f4 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.5f,1f,0.5f,0.5f,1f,1f,1f,0.5f});
  }
}
}

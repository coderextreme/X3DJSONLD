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
public class rgb_alpha {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new rgb_alpha().initialize().toFileJSON("../data/rgb_alpha.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Interchange").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("rgb_alpha.x3d"))
        .addMeta(new metaObject().setName("Image").setContent("rgb_alpha-front.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("rgb_alpha-rear.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("rgb_alpha-top.jpg"))
        .addMeta(new metaObject().setName("Image").setContent("rgb_alpha-bottom.jpg"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new metaObject().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new metaObject().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new metaObject().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d"))
        .addMeta(new metaObject().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new metaObject().setName("translated").setContent("21 January 2001"))
        .addMeta(new metaObject().setName("modified").setContent("16 January 2011"))
        .addMeta(new metaObject().setName("description").setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."))
        .addMeta(new metaObject().setName("identifier").setContent("http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","FLY","ANY"}))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setTranslation(new float[] {6.14221f,0.0694613f,-0.000999451f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new PixelTextureObject().setDEF("RgbOpacityCheckerboard").setImage(new int[] {2,2,4,0xFF0000FF,0xFFFF0000,0xFFFF0000,0xFF0000FF})))
              .setGeometry(new BoxObject())))
          .addChild(new TransformObject().setTranslation(new float[] {-4.85443f,0.0694381f,-0.00149918f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new PixelTextureObject().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new SphereObject())))
          .addChild(new TransformObject().setTranslation(new float[] {-1.47341f,0.036672f,-0.00175095f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new PixelTextureObject().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new ConeObject())))
          .addChild(new TransformObject().setTranslation(new float[] {2.31094f,0.0694206f,-0.00187683f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())
                .setTexture(new PixelTextureObject().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new CylinderObject())))))      ;
    return X3D0;
    }
}

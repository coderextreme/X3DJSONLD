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
public class rgb_alpha implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new rgb_alpha().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/rgb_alpha.new.java.x3d");
    model.toFileJSON("../data/rgb_alpha.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Interchange").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("rgb_alpha.x3d"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-front.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-rear.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-top.jpg"))
        .addMeta(new meta().setName("Image").setContent("rgb_alpha-bottom.jpg"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("16 January 2011"))
        .addMeta(new meta().setName("description").setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../../license.html")))
      .setScene(new Scene()
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
        .addChild(new Group()
          .addChild(new Transform().setTranslation(new double[] {6.14221f,0.0694613f,-0.000999451f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setDEF("RgbOpacityCheckerboard").setImage(new int[] {2,2,4,0xFF0000FF,0xFFFF0000,0xFFFF0000,0xFF0000FF})))
              .setGeometry(new Box())))
          .addChild(new Transform().setTranslation(new double[] {-4.85443f,0.0694381f,-0.00149918f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Sphere())))
          .addChild(new Transform().setTranslation(new double[] {-1.47341f,0.036672f,-0.00175095f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Cone())))
          .addChild(new Transform().setTranslation(new double[] {2.31094f,0.0694206f,-0.00187683f})
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material())
                .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
              .setGeometry(new Cylinder())))));
    return X3D0;
    }
}

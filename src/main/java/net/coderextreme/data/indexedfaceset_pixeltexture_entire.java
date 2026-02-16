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
public class indexedfaceset_pixeltexture_entire implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new indexedfaceset_pixeltexture_entire().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/indexedfaceset_pixeltexture_entire.new.java.x3d");
    model.toFileJSON("../data/indexedfaceset_pixeltexture_entire.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Interchange")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("indexedfaceset_pixeltexture_entire.x3d")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://www.nist.gov/vrml.html")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("http://www.itl.nist.gov/div897/ctg/vrml/members.html")))
        .addMeta(new meta().setName(new SFString("disclaimer")).setContent(new SFString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Michael Kass NIST, Don Brutzman NPS")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("21 January 2001")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("13 January 2014")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry.")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../../license.html"))))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDescription(new SFString("Front View")))
        .addChild(new Viewpoint().setDescription(new SFString("Rear View")).setOrientation(new float[] {0f ,1f ,0f ,3.14f }).setPosition(new float[] {0f ,0f ,-10f }))
        .addChild(new Viewpoint().setDescription(new SFString("Top View")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new float[] {0f ,10f ,0f }))
        .addChild(new Viewpoint().setDescription(new SFString("Bottom View")).setOrientation(new float[] {1f ,0f ,0f ,1.57f }).setPosition(new float[] {0f ,-10f ,0f }))
        .addChild(new Viewpoint().setDescription(new SFString("Right View")).setOrientation(new float[] {0f ,1f ,0f ,1.57f }).setPosition(new float[] {10f ,0f ,0f }))
        .addChild(new Viewpoint().setDescription(new SFString("Left View")).setOrientation(new float[] {0f ,1f ,0f ,-1.57f }).setPosition(new float[] {-10f ,0f ,0f }))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
        .addComments(new CommentsBlock("<Environment id=\"gamma\" gammaCorrectionDefault=\"none\"></Environment>"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setImage(new int[] {2,2,4,0xFF0000FF,16711935,0xFFFFFFFF,0xFFFF00FF}).setRepeatS(false).setRepeatT(false)
              .setTextureProperties(new TextureProperties().setMagnificationFilter(new SFString("NEAREST_PIXEL")))))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt320().getArray())
            .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray())))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2f ,1.5f ,1f ,-2f ,-1.5f ,1f ,2f ,1.5f ,1f ,2f ,-1.5f ,1f ,2f ,1.5f ,-1f ,2f ,-1.5f ,-1f ,-2f ,1.5f ,-1f ,-2f ,-1.5f ,-1f });
  }
}
}

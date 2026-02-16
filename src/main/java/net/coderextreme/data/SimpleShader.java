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
public class SimpleShader implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new SimpleShader().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/SimpleShader.new.java.x3d");
    model.toFileJSON("../data/SimpleShader.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComments(new CommentsBlock("meta content='under development' name='warning'/"))
        .addComponent(new component().setName(new SFString("Shaders")).setLevel(1))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("SimpleShader.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Simple shader example")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Stewart")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("26 May 2009")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("15 October 2009")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 October 2019")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://www.opengl.org/wiki/Fragment_Shader")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("X3D shader example")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("originals/simpleShader.x3dv")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("ShaderTutorialInstantReality.pdf")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Titania V3.0.3, http://titania.create3000.de")))
        .addMeta(new meta().setName(new SFString("info")).setContent(new SFString("World of Titania")))
        .addMeta(new meta().setName(new SFString("outputStyle")).setContent(new SFString("nicest")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../../license.html"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("myPrototype"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("myInputRange")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.95 0.44 0.22"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF(new SFString("TR"))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0.5f ,0.5f ,0.9f }))
                  .addShaders(new ComposedShader().setLanguage(new SFString("GLSL"))
                    .addField(new field().setType("SFVec3f").setName(new SFString("decis")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("decis")).setProtoField(new SFString("myInputRange"))))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT")))
                  .addShaders(new ComposedShader().setDEF(new SFString("Cobweb")).setLanguage(new SFString("GLSL"))
                    .addField(new field().setType("SFVec3f").setName(new SFString("decis")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("0.95 0.77 0.44")))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT").setDEF(new SFString("_1")))))
                .setGeometry(new Sphere().setRadius(1.75f ))))))
        .addChild(new WorldInfo().setTitle(new SFString("SimpleShader"))
          .setMetadata(new MetadataSet().setName(new SFString("Titania")).setDEF(new SFString("Titania")).setReference(new SFString("http://titania.create3000.de"))
            .setMetadata(new MetadataSet().setName(new SFString("Selection")).setDEF(new SFString("Selection")).setReference(new SFString("http://titania.create3000.de"))
              .setMetadata(new MetadataSet().setName(new SFString("nodes")).setDEF(new SFString("nodes")).setReference(new SFString("http://titania.create3000.de"))
                .addComments(new CommentsBlock("NULL"))))
            .setMetadata(new MetadataSet().setName(new SFString("NavigationInfo")).setDEF(new SFString("NavigationInfo")).setReference(new SFString("http://titania.create3000.de"))
              .setMetadata(new MetadataString().setName(new SFString("type")).setDEF(new SFString("type")).setReference(new SFString("http://titania.create3000.de")).setValue(new MFString0().getArray())))
            .setMetadata(new MetadataSet().setName(new SFString("Viewpoint")).setDEF(new SFString("Viewpoint")).setReference(new SFString("http://titania.create3000.de"))
              .addValue(new MetadataDouble().setName(new SFString("position")).setDEF(new SFString("position")).setReference(new SFString("http://titania.create3000.de")).setValue(new MFDouble1().getArray()))
              .addValue(new MetadataDouble().setName(new SFString("orientation")).setDEF(new SFString("orientation")).setReference(new SFString("http://titania.create3000.de")).setValue(new MFDouble2().getArray()))
              .addValue(new MetadataDouble().setName(new SFString("centerOfRotation")).setDEF(new SFString("centerOfRotation")).setReference(new SFString("http://titania.create3000.de")).setValue(new MFDouble3().getArray())))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("myPrototype"))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"EXAMINE"});
  }
}
private class MFDouble1 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {6.24067728185014d,0.00250837343276661d,2.92117542307615d});
  }
}
private class MFDouble2 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-0.110173424710488d,0.990158061907379d,-0.0863065984000336d,1.21146676119191d});
  }
}
private class MFDouble3 {
  private org.web3d.x3d.jsail.fields.MFDouble getArray() {
    return new org.web3d.x3d.jsail.fields.MFDouble(new double[] {-0.808320198626341d,-0.358072370409949d,0.22817191560906d});
  }
}
}

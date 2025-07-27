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
    ConfigurationProperties.setStripTrailingZeroes(false);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new SimpleShader().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/SimpleShader.new.java.x3d");
    model.toFileJSON("../data/SimpleShader.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("Shaders").setLevel(1))
        .addMeta(new meta().setName("title").setContent("SimpleShader.x3d"))
        .addMeta(new meta().setName("description").setContent("Simple shader example"))
        .addMeta(new meta().setName("creator").setContent("John Stewart"))
        .addMeta(new meta().setName("translator").setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"))
        .addMeta(new meta().setName("created").setContent("26 May 2009"))
        .addMeta(new meta().setName("translated").setContent("15 October 2009"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/Fragment_Shader"))
        .addMeta(new meta().setName("reference").setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"))
        .addMeta(new meta().setName("subject").setContent("X3D shader example"))
        .addMeta(new meta().setName("reference").setContent("originals/simpleShader.x3dv"))
        .addMeta(new meta().setName("reference").setContent("ShaderTutorialInstantReality.pdf"))
        .addMeta(new meta().setName("generator").setContent("Titania V3.0.3, http://titania.create3000.de"))
        .addMeta(new meta().setName("info").setContent("World of Titania"))
        .addMeta(new meta().setName("outputStyle").setContent("nicest"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"))
        .addMeta(new meta().setName("license").setContent("../../license.html"))
        .addComments(new CommentsBlock("meta content='under development' name='warning'/")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("myPrototype")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("myInputRange").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.44 0.22")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("TR")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {0.5f,0.5f,0.9f}))
                  .addShaders(new ComposedShader().setLanguage("GLSL")
                    .addField(new field().setType("SFVec3f").setName("decis").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("decis").setProtoField("myInputRange")))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT")))
                  .addShaders(new ComposedShader().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new field().setType("SFVec3f").setName("decis").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0.95 0.77 0.44"))
                    .addParts(new ShaderPart().setType("VERTEX"))
                    .addParts(new ShaderPart().setType("FRAGMENT").setDEF("_1"))))
                .setGeometry(new Sphere().setRadius(1.75f))))))
        .addChild(new WorldInfo().setTitle("SimpleShader")
          .setMetadata(new MetadataSet().setName("Titania").setDEF("Titania").setReference("http://titania.create3000.de")
            .setMetadata(new MetadataSet().setName("Selection").setDEF("Selection").setReference("http://titania.create3000.de")
              .setMetadata(new MetadataSet().setName("nodes").setDEF("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock("NULL"))))
            .setMetadata(new MetadataSet().setName("NavigationInfo").setDEF("NavigationInfo").setReference("http://titania.create3000.de")
              .setMetadata(new MetadataString().setName("type").setDEF("type").setReference("http://titania.create3000.de").setValue(new MFString0().getArray())))
            .setMetadata(new MetadataSet().setName("Viewpoint").setDEF("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDouble().setName("position").setDEF("position").setReference("http://titania.create3000.de").setValue(new MFDouble1().getArray()))
              .addValue(new MetadataDouble().setName("orientation").setDEF("orientation").setReference("http://titania.create3000.de").setValue(new MFDouble2().getArray()))
              .addValue(new MetadataDouble().setName("centerOfRotation").setDEF("centerOfRotation").setReference("http://titania.create3000.de").setValue(new MFDouble3().getArray())))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("myPrototype")));
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

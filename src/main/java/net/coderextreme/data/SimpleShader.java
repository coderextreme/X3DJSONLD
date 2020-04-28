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
public class SimpleShader {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new SimpleShader().initialize().toFileJSON("../data/SimpleShader.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addComponent(new componentObject().setLevel(1).setName("Shaders"))
        .addMeta(new metaObject().setContent("SimpleShader.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Simple shader example").setName("description"))
        .addMeta(new metaObject().setContent("John Stewart").setName("creator"))
        .addMeta(new metaObject().setContent("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick").setName("translator"))
        .addMeta(new metaObject().setContent("26 May 2009").setName("created"))
        .addMeta(new metaObject().setContent("15 October 2009").setName("translated"))
        .addMeta(new metaObject().setContent("20 October 2019").setName("modified"))
        .addMeta(new metaObject().setContent("http://www.opengl.org/wiki/Fragment_Shader").setName("reference"))
        .addMeta(new metaObject().setContent("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader").setName("reference"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest").setName("reference"))
        .addMeta(new metaObject().setContent("X3D shader example").setName("subject"))
        .addMeta(new metaObject().setContent("originals/simpleShader.x3dv").setName("reference"))
        .addMeta(new metaObject().setContent("ShaderTutorialInstantReality.pdf").setName("reference"))
        .addMeta(new metaObject().setContent("Titania V3.0.3, http://titania.create3000.de").setName("generator"))
        .addMeta(new metaObject().setContent("World of Titania").setName("comment"))
        .addMeta(new metaObject().setContent("nicest").setName("outputStyle"))
        .addMeta(new metaObject().setContent("under development").setName("warning"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("../../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("myPrototype")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("myInputRange").setValue("0.95 0.44 0.22")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("TR")
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.5f,0.5f,0.9f}))
                  .addShaders(new ComposedShaderObject().setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("decis"))
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("decis").setProtoField("myInputRange")))
                    .addParts(new ShaderPartObject())
                    .addParts(new ShaderPartObject().setType("FRAGMENT")))
                  .addShaders(new ComposedShaderObject().setDEF("Cobweb").setLanguage("GLSL")
                    .addField(new fieldObject().setType("SFVec3f").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("decis").setValue("0.95 0.77 0.44"))
                    .addParts(new ShaderPartObject())
                    .addParts(new ShaderPartObject().setType("FRAGMENT").setDEF("_1"))))
                .setGeometry(new SphereObject().setRadius(1.75f))))))
        .addChild(new WorldInfoObject().setTitle("SimpleShader")
          .setMetadata(new MetadataSetObject().setDEF("Titania").setName("Titania").setReference("http://titania.create3000.de")
            .addValue(new MetadataSetObject().setDEF("Selection").setName("Selection").setReference("http://titania.create3000.de")
              .setValue(new MetadataSetObject().setDEF("nodes").setName("nodes").setReference("http://titania.create3000.de")
                .addComments(new CommentsBlock(" NULL "))))
            .addValue(new MetadataSetObject().setDEF("NavigationInfo").setName("NavigationInfo").setReference("http://titania.create3000.de")
              .setValue(new MetadataStringObject().setDEF("type").setName("type").setReference("http://titania.create3000.de").setValue(new MFStringObject(new MFString0().getArray()))))
            .addValue(new MetadataSetObject().setDEF("Viewpoint").setName("Viewpoint").setReference("http://titania.create3000.de")
              .addValue(new MetadataDoubleObject().setDEF("position").setName("position").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble1().getArray())))
              .addValue(new MetadataDoubleObject().setDEF("orientation").setName("orientation").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble2().getArray())))
              .addValue(new MetadataDoubleObject().setDEF("centerOfRotation").setName("centerOfRotation").setReference("http://titania.create3000.de").setValue(new MFDoubleObject(new MFDouble3().getArray()))))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("myPrototype")))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"EXAMINE"});
  }
}
protected class MFDouble1 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {6.24067728185014d,0.00250837343276661d,2.92117542307615d});
  }
}
protected class MFDouble2 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {-0.110173424710488d,0.990158061907379d,-0.0863065984000336d,1.21146676119191d});
  }
}
protected class MFDouble3 {
  protected MFDoubleObject getArray() {
    return new MFDoubleObject(new double[] {-0.808320198626341d,-0.358072370409949d,0.22817191560906d});
  }
}
}

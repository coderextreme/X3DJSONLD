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
public class asmallbox {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new asmallbox().initialize().toFileJSON("../data/asmallbox.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("abox.x3d").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("generator").setContent("manual").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/abox.x3d").setDir("").setHttp_equiv("").setLang("").setScheme(""))
        .addMeta(new metaObject().setName("description").setContent("a box").setDir("").setHttp_equiv("").setLang("").setScheme("")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("anyShape").setAppinfo("").setDocumentation("")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("").setDocumentation("").setValue("")
              .addChild(new ShapeObject().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setCssClass("")
                .setGeometry(new SphereObject().setRadius(1f).setSolid(true).setCssClass("")))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setCenter(new float[] {0f,0f,0f}).setRotation(new float[] {0f,0f,1f,0f}).setScale(new float[] {1f,1f,1f}).setScaleOrientation(new float[] {0f,0f,1f,0f}).setTranslation(new float[] {0f,0f,0f}).setCssClass("")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("children").setProtoField("myShape"))))))
        .addChild(new ProtoDeclareObject().setName("one").setAppinfo("").setDocumentation("")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("MFNode").setName("myShape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("").setDocumentation("").setValue("")
              .addChild(new ShapeObject().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setCssClass("")
                .setGeometry(new CylinderObject().setBottom(true).setHeight(2f).setRadius(1f).setSide(true).setSolid(true).setTop(true).setCssClass("")))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setCenter(new float[] {0f,0f,0f}).setRotation(new float[] {0f,0f,1f,0f}).setScale(new float[] {1f,1f,1f}).setScaleOrientation(new float[] {0f,0f,1f,0f}).setTranslation(new float[] {0f,0f,0f}).setCssClass("")
              .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("anyShape").setCssClass("")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("myShape").setProtoField("myShape")))))))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("one").setCssClass("")))      ;
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("myShape").setValue("")
            .addChild(new ShapeObject().setBboxCenter(new float[] {0f,0f,0f}).setBboxSize(new float[] {-1f,-1f,-1f}).setCssClass("")
              .setGeometry(new BoxObject().setSize(new float[] {0.125f,0.125f,0.125f}).setSolid(true).setCssClass(""))));
    return X3D0;
    }
}

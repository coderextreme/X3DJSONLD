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
public class Figure31_7DonutExternalPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Figure31_7DonutExternalPrototype().initialize().toFileJSON("../data/Figure31_7DonutExternalPrototype.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setContent("Figure31_7DonutExternalPrototype.x3d").setName("title"))
        .addMeta(new metaObject().setContent("Figure 31.7, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland").setName("creator"))
        .addMeta(new metaObject().setContent("http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig07.htm").setName("reference"))
        .addMeta(new metaObject().setContent("Don Brutzman").setName("translator"))
        .addMeta(new metaObject().setContent("22 November 2000").setName("created"))
        .addMeta(new metaObject().setContent("20 October 2019").setName("modified"))
        .addMeta(new metaObject().setContent("A donut shape built using prototypes: the Donut geometry node and the LightOak appearance node. Also see Figures 30.5 and 31.6 for comparison.").setName("description"))
        .addMeta(new metaObject().setContent("https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_7DonutExternalPrototype.x3d").setName("identifier"))
        .addMeta(new metaObject().setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit").setName("generator"))
        .addMeta(new metaObject().setContent("../../license.html").setName("license")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("Figure31_7DonutExternalPrototype.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("Donut").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("crossSectionRadius"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("spineRadius"))
          .addField(new fieldObject().setType("SFInt32").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("crossSectionResolution"))
          .addField(new fieldObject().setType("SFInt32").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setName("spineResolution"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_crossSectionRadius"))
          .addField(new fieldObject().setType("SFFloat").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_spineRadius")))
        .addChild(new ExternProtoDeclareObject().setName("LightOak").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFNode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setName("textureTransform")))
        .addChild(new ViewpointObject().setDescription("Click to pick a size").setOrientation(new float[] {1f,0f,0f,-0.52f}).setPosition(new float[] {0f,7f,12f}))
        .addComments(new CommentsBlock(" Donut instances from prototypes "))
        .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("Donut"))
            .setAppearance(ProtoInstance1 = new ProtoInstanceObject().setName("LightOak"))))
        .addComments(new CommentsBlock(" Hmmm, what size donut do you really want? "))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10d).setLoop(true))
        .addChild(new ScalarInterpolatorObject().setDEF("DonutThickness").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFFloatObject(new MFFloat3().getArray())))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setDEF("SpecialtyOfTheHouse").setName("Donut"))
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString4().getArray())))))
          .addChild(new TouchSensorObject().setDEF("StopSizeChanges").setDescription("touch to stop size changes")))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("DonutThickness"))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("DonutThickness").setToField("set_crossSectionRadius").setToNode("SpecialtyOfTheHouse"))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("StopSizeChanges").setToField("stopTime").setToNode("Clock")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("1"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("textureTransform")
                .addChild(new TextureTransformObject().setCenter(new float[] {0f,5f}).setRotation(0.758f).setScale(new float[] {2f,0.5f}).setTranslation(new float[] {0.5f,0f})));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Figure31_6DonutPrototype.wrl#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.wrl#Donut","Figure31_6DonutPrototype.x3d#Donut","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_6DonutPrototype.x3d#Donut"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_4WoodAppearancePrototypesLibrary.x3d#LightOak"});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.4f,0.5f,0.9f,1f});
  }
}
protected class MFFloat3 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.75f,1.25f,1.25f,0.75f,0.75f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../Chapter17Textures/icing.jpg","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter17Textures/icing.jpg"});
  }
}
}

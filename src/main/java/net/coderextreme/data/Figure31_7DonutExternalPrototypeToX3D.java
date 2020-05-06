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
public class Figure31_7DonutExternalPrototypeToX3D {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new Figure31_7DonutExternalPrototypeToX3D().initialize().toFileJSON("../data/Figure31_7DonutExternalPrototypeToX3D.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setVersion("3.1").setProfile("Full")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta(new metaObject().setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
        .addMeta(new metaObject().setName("creator").setContent("*enter name of original author here*"))
        .addMeta(new metaObject().setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
        .addMeta(new metaObject().setName("created").setContent("*enter date of initial version here*"))
        .addMeta(new metaObject().setName("translated").setContent("03 December 2011"))
        .addMeta(new metaObject().setName("modified").setContent("03 December 2011"))
        .addMeta(new metaObject().setName("version").setContent("*enter version here*"))
        .addMeta(new metaObject().setName("reference").setContent("*enter reference citation or relative/online url here*"))
        .addMeta(new metaObject().setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
        .addMeta(new metaObject().setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
        .addMeta(new metaObject().setName("rights").setContent("*enter copyright information here* Example:  Copyright (c) Web3D Consortium Inc. 2006"))
        .addMeta(new metaObject().setName("drawing").setContent("*enter drawing filename/url here*"))
        .addMeta(new metaObject().setName("image").setContent("*enter image filename/url here*"))
        .addMeta(new metaObject().setName("MovingImage").setContent("*enter movie filename/url here*"))
        .addMeta(new metaObject().setName("photo").setContent("*enter photo filename/url here*"))
        .addMeta(new metaObject().setName("subject").setContent("*enter subject keywords here*"))
        .addMeta(new metaObject().setName("accessRights").setContent("*enter permission statements or url here*"))
        .addMeta(new metaObject().setName("warning").setContent("*insert any known warnings, bugs or errors here*"))
        .addMeta(new metaObject().setName("identifier").setContent("http://*enter online url address for this file here*/test\\\\Figure31.7DonutExternalPrototypeToX3D.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","ANY"}))
        .addChild(new ExternProtoDeclareObject().setName("Donut").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFFloat").setName("crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("set_spineRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFFloat").setName("set_crossSectionRadius").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFInt32").setName("spineResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFInt32").setName("crossSectionResolution").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFFloat").setName("spineRadius").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)))
        .addChild(new ExternProtoDeclareObject().setName("LightOak").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("SFNode").setName("textureTransform").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addChild(new ViewpointObject().setPosition(new float[] {0f,7f,12f}).setOrientation(new float[] {1f,0f,0f,-0.52f}).setDescription("Click to pick a size"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("LightOak"))
            .setGeometry(ProtoInstance1 = new ProtoInstanceObject().setName("Donut"))))
        .addChild(new TimeSensorObject().setDEF("Clock").setLoop(true).setCycleInterval(10d))
        .addChild(new ScalarInterpolatorObject().setDEF("DonutThickness").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFFloatObject(new MFFloat3().getArray())))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setTexture(new ImageTextureObject().setUrl(new MFStringObject(new MFString4().getArray()))))
            .setGeometry(ProtoInstance2 = new ProtoInstanceObject().setName("Donut").setDEF("SpecialtyOfTheHouse")))
          .addChild(new TouchSensorObject().setDEF("StopSizeChanges")))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("DonutThickness").setToField("set_fraction"))
        .addChild(new ROUTEObject().setFromNode("DonutThickness").setFromField("value_changed").setToNode("SpecialtyOfTheHouse").setToField("set_crossSectionRadius"))
        .addChild(new ROUTEObject().setFromNode("StopSizeChanges").setFromField("touchTime").setToNode("Clock").setToField("stopTime")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("textureTransform")
                .addChild(new TextureTransformObject().setCenter(new float[] {0f,5f}).setRotation(0.758f).setScale(new float[] {2f,0.5f}).setTranslation(new float[] {0.5f,0f})));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("crossSectionRadius").setValue("0.5"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("spineRadius").setValue("2"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Figure31.6DonutPrototype.wrl#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.wrl#Donut","Figure31.6DonutPrototype.x3d#Donut","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.6DonutPrototype.x3d#Donut"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.wrl#LightOak","Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter31-Prototypes/Figure31.4WoodAppearancePrototypesLibrary.x3d#LightOak"});
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
    return new MFStringObject(new java.lang.String[] {"../Chapter17-Textures/icing.jpg","http://www.web3d.org/x3d/content/examples/Vrml2.0Sourcebook/Chapter17-Textures/icing.jpg"});
  }
}
}

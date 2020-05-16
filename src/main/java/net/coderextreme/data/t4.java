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
public class t4 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new t4().initialize().toFileJSON("../data/t4.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
ProtoInstanceObject ProtoInstance13 = null;
ProtoInstanceObject ProtoInstance14 = null;
ProtoInstanceObject ProtoInstance15 = null;
ProtoInstanceObject ProtoInstance16 = null;
ProtoInstanceObject ProtoInstance17 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Networking").setLevel(2))
        .addComponent(new componentObject().setName("Core").setLevel(2))
        .addMeta(new metaObject().setName("title").setContent("t4.x3d"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new metaObject().setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta(new metaObject().setName("source").setContent("t1.wrl"))
        .addMeta(new metaObject().setName("description").setContent("Test Case for Proto Expander"))
        .addMeta(new metaObject().setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html")))
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","FLY","WALK"}).setSpeed(3f).setAvatarSize(new MFFloatObject(new MFFloat0().getArray())))
        .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
        .addChild(new ViewpointObject().setDescription("looking North").setPosition(new float[] {0f,60f,110f}).setOrientation(new float[] {1f,0f,0f,-0.699999988079071f}).setFieldOfView(0.785398125648499f))
        .addChild(new ProtoDeclareObject().setName("org")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("posi").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFColor").setName("col").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("posi")))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f})
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new SphereObject().setRadius(5.10000002384186f))))))
        .addChild(new ProtoDeclareObject().setName("r")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("pos").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("n")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("pos").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclareObject().setName("i")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("pos").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("org")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new TransformObject().setTranslation(new float[] {-468f,0f,315f})
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString1().getArray())).setDescription("High Peak Community Arts")
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString2().getArray())).setDescription("People Express")
            .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString3().getArray())).setDescription("QArts/Studios")
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString4().getArray())).setDescription("First Movement")
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString5().getArray())).setDescription("City Arts")
            .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("i")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString6().getArray())).setDescription("Indigo Dance Group (Salamanda Tandem)")
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString7().getArray())).setDescription("Watering Seeds")
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString8().getArray())).setDescription("Fased In The Arts")
            .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString9().getArray())).setDescription("27a Access Artspace")
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString10().getArray())).setDescription("Bamboozle Theatre Company")
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString11().getArray())).setDescription("Mantle Community Arts")
            .addChild(ProtoInstance13 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString12().getArray())).setDescription("Artlink East")
            .addChild(ProtoInstance14 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString13().getArray())).setDescription("Creations")
            .addChild(ProtoInstance15 = new ProtoInstanceObject().setName("r")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString14().getArray())).setDescription("New Perspectives")
            .addChild(ProtoInstance16 = new ProtoInstanceObject().setName("n")))
          .addChild(new AnchorObject().setUrl(new MFStringObject(new MFString15().getArray())).setDescription("UKan2")
            .addChild(ProtoInstance17 = new ProtoInstanceObject().setName("r")))))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("col").setValue("0 0.300000011920929 1"));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("col").setValue("1 0 0.200000002980232"));
ProtoInstance2
              .addFieldValue(new fieldValueObject().setName("col").setValue("0.600000023841858 0 0.600000023841858"));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("pos").setValue("400 0.100000001490116 -385"));
ProtoInstance4
              .addFieldValue(new fieldValueObject().setName("pos").setValue("429.899993896484 0.100000001490116 -319.600006103516"));
ProtoInstance5
              .addFieldValue(new fieldValueObject().setName("pos").setValue("430 0.100000001490116 -335"));
ProtoInstance6
              .addFieldValue(new fieldValueObject().setName("pos").setValue("429.899993896484 0.100000001490116 -360.299987792969"));
ProtoInstance7
              .addFieldValue(new fieldValueObject().setName("pos").setValue("455.899993896484 0.100000001490116 -341.299987792969"));
ProtoInstance8
              .addFieldValue(new fieldValueObject().setName("pos").setValue("456.100006103516 0.100000001490116 -341.5"));
ProtoInstance9
              .addFieldValue(new fieldValueObject().setName("pos").setValue("454 0.100000001490116 -361.299987792969"));
ProtoInstance10
              .addFieldValue(new fieldValueObject().setName("pos").setValue("440 0.100000001490116 -350"));
ProtoInstance11
              .addFieldValue(new fieldValueObject().setName("pos").setValue("458.899993896484 0.100000001490116 -304.299987792969"));
ProtoInstance12
              .addFieldValue(new fieldValueObject().setName("pos").setValue("457.100006103516 0.100000001490116 -300.799987792969"));
ProtoInstance13
              .addFieldValue(new fieldValueObject().setName("pos").setValue("442.399993896484 0.100000001490116 -314.5"));
ProtoInstance14
              .addFieldValue(new fieldValueObject().setName("pos").setValue("491.600006103516 0.100000001490116 -335.700012207031"));
ProtoInstance15
              .addFieldValue(new fieldValueObject().setName("pos").setValue("467 0.100000001490116 -243.899993896484"));
ProtoInstance16
              .addFieldValue(new fieldValueObject().setName("pos").setValue("457.399993896484 0.100000001490116 -262.700012207031"));
ProtoInstance17
              .addFieldValue(new fieldValueObject().setName("pos").setValue("458.700012207031 0.100000001490116 -262.700012207031"));
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {200f,200f,120f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {", ","javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
}

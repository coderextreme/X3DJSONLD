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
public class t4 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new t4().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/t4.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("t4.x3d"))
        .addMeta(new meta().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
        .addMeta(new meta().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
        .addMeta(new meta().setName("creator").setContent("Andreas Plesch and John Carlson"))
        .addMeta(new meta().setName("source").setContent("t1.wrl"))
        .addMeta(new meta().setName("description").setContent("Test Case for Proto Expander"))
        .addComponent(new component().setName("Networking").setLevel(2))
        .addComponent(new component().setName("Core").setLevel(2)))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("org")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("posi"))
            .addField(new field().setType("SFColor").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("col")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform()
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f})
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("col")))))
                .setGeometry(new Sphere().setRadius(5.1f)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("posi"))))))
        .addChild(new ProtoDeclare().setName("r")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance0 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("n")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance1 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new ProtoDeclare().setName("i")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("pos")))
          .setProtoBody(new ProtoBody()
            .addChild(ProtoInstance2 = new ProtoInstance().setName("org")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("posi").setProtoField("pos"))))))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"WALK\"").setAvatarSize(new MFFloat0().getArray()).setSpeed(3f))
        .addChild(new WorldInfo().setTitle("Arts Mapper"))
        .addChild(new Viewpoint().setDescription("looking North").setPosition(new float[] {0f,60f,110f}).setOrientation(new float[] {1f,0f,0f,-0.699999988079071f}).setFieldOfView(0.7853981f))
        .addChild(new Transform().setTranslation(new float[] {-468f,0f,315f})
          .addChild(new Anchor().setDescription("High Peak Community Arts").setUrl(new MFString1().getArray())
            .addChild(ProtoInstance3 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("People Express").setUrl(new MFString2().getArray())
            .addChild(ProtoInstance4 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("QArts/Studios").setUrl(new MFString3().getArray())
            .addChild(ProtoInstance5 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("First Movement").setUrl(new MFString4().getArray())
            .addChild(ProtoInstance6 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("City Arts").setUrl(new MFString5().getArray())
            .addChild(ProtoInstance7 = new ProtoInstance().setName("i")))
          .addChild(new Anchor().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new MFString6().getArray())
            .addChild(ProtoInstance8 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Watering Seeds").setUrl(new MFString7().getArray())
            .addChild(ProtoInstance9 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Fased In The Arts").setUrl(new MFString8().getArray())
            .addChild(ProtoInstance10 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("27a Access Artspace").setUrl(new MFString9().getArray())
            .addChild(ProtoInstance11 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("Bamboozle Theatre Company").setUrl(new MFString10().getArray())
            .addChild(ProtoInstance12 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Mantle Community Arts").setUrl(new MFString11().getArray())
            .addChild(ProtoInstance13 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Artlink East").setUrl(new MFString12().getArray())
            .addChild(ProtoInstance14 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("Creations").setUrl(new MFString13().getArray())
            .addChild(ProtoInstance15 = new ProtoInstance().setName("r")))
          .addChild(new Anchor().setDescription("New Perspectives").setUrl(new MFString14().getArray())
            .addChild(ProtoInstance16 = new ProtoInstance().setName("n")))
          .addChild(new Anchor().setDescription("UKan2").setUrl(new MFString15().getArray())
            .addChild(ProtoInstance17 = new ProtoInstance().setName("r")))))      ;
ProtoInstance0
              .addFieldValue(new fieldValue().setName("col").setValue("0 0.3 1"));
ProtoInstance1
              .addFieldValue(new fieldValue().setName("col").setValue("1 0 0.2"));
ProtoInstance2
              .addFieldValue(new fieldValue().setName("col").setValue("0.6 0 0.6"));
ProtoInstance3
              .addFieldValue(new fieldValue().setName("pos").setValue("400 0.1 -385"));
ProtoInstance4
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -319.6"));
ProtoInstance5
              .addFieldValue(new fieldValue().setName("pos").setValue("430 0.1 -335"));
ProtoInstance6
              .addFieldValue(new fieldValue().setName("pos").setValue("429.9 0.1 -360.3"));
ProtoInstance7
              .addFieldValue(new fieldValue().setName("pos").setValue("455.9 0.1 -341.3"));
ProtoInstance8
              .addFieldValue(new fieldValue().setName("pos").setValue("456.1 0.1 -341.5"));
ProtoInstance9
              .addFieldValue(new fieldValue().setName("pos").setValue("454 0.1 -361.3"));
ProtoInstance10
              .addFieldValue(new fieldValue().setName("pos").setValue("440 0.1 -350"));
ProtoInstance11
              .addFieldValue(new fieldValue().setName("pos").setValue("458.9 0.1 -304.3"));
ProtoInstance12
              .addFieldValue(new fieldValue().setName("pos").setValue("457.1 0.1 -300.8"));
ProtoInstance13
              .addFieldValue(new fieldValue().setName("pos").setValue("442.4 0.1 -314.5"));
ProtoInstance14
              .addFieldValue(new fieldValue().setName("pos").setValue("491.6 0.1 -335.7"));
ProtoInstance15
              .addFieldValue(new fieldValue().setName("pos").setValue("467 0.1 -243.9"));
ProtoInstance16
              .addFieldValue(new fieldValue().setName("pos").setValue("457.4 0.1 -262.7"));
ProtoInstance17
              .addFieldValue(new fieldValue().setName("pos").setValue("458.7 0.1 -262.7"));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {200f,200f,120f});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString11 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString12 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString13 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString14 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
private class MFString15 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"});
  }
}
}

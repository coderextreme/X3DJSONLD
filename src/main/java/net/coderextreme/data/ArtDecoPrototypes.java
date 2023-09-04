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
public class ArtDecoPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ArtDecoPrototypes().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ArtDecoPrototypes.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ArtDecoPrototypes.x3d"))
        .addMeta(new meta().setName("description").setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
        .addMeta(new meta().setName("creator").setContent("David Roussel"))
        .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
        .addMeta(new meta().setName("created").setContent("7 April 2002"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
        .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("ArtDeco00")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.282435f,0.085159f,0.134462f}).setSpecularColor(new float[] {0.276305f,0.11431f,0.139857f}).setShininess(0.127273f))))
        .addChild(new ProtoDeclare().setName("ArtDeco01")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.254777f).setDiffuseColor(new float[] {0.685208f,0.134679f,0.332385f}).setSpecularColor(new float[] {0.122449f,0.050035f,0.050035f}).setShininess(0.071429f))))
        .addChild(new ProtoDeclare().setName("ArtDeco02")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(1f).setDiffuseColor(new float[] {0.536861f,0.0529f,0.245479f}).setSpecularColor(new float[] {0.805292f,0.765198f,0.747416f}).setShininess(0.832432f))))
        .addChild(new ProtoDeclare().setName("ArtDeco03")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.248649f).setDiffuseColor(new float[] {1f,0.452381f,0.40339f}).setSpecularColor(new float[] {0.686486f,0.396903f,0.419275f}).setShininess(0.902703f))))
        .addChild(new ProtoDeclare().setName("ArtDeco04")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.748016f,0.298362f,0.342624f}).setSpecularColor(new float[] {0.345455f,0.345455f,0.345455f}).setShininess(0.69697f))))
        .addChild(new ProtoDeclare().setName("ArtDeco05")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.24359f).setDiffuseColor(new float[] {0.945455f,0.318988f,0.321717f}).setSpecularColor(new float[] {0.072727f,0.021705f,0.010732f}).setShininess(0.018182f))))
        .addChild(new ProtoDeclare().setName("ArtDeco06")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25946f).setDiffuseColor(new float[] {0.228655f,0.195513f,0.425484f}).setSpecularColor(new float[] {0.324504f,0.404255f,0.404255f}).setShininess(0.542553f))))
        .addChild(new ProtoDeclare().setName("ArtDeco07")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.333333f).setDiffuseColor(new float[] {0.200348f,0.100857f,0.320833f}).setSpecularColor(new float[] {0.311358f,0.387879f,0.387879f}).setShininess(0.133333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco08")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424f).setDiffuseColor(new float[] {0.330519f,0.3389f,0.6f}).setSpecularColor(new float[] {0.290909f,0.290909f,0.290909f}).setShininess(0.787879f))))
        .addChild(new ProtoDeclare().setName("ArtDeco09")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.333333f).setDiffuseColor(new float[] {0.237059f,0.096273f,0.215625f}).setSpecularColor(new float[] {0.311358f,0.387879f,0.387879f}).setShininess(0.133333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco10")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242425f).setDiffuseColor(new float[] {0.304f,0.09025f,0.207364f}).setSpecularColor(new float[] {0.6665f,0.579046f,0.830303f}).setShininess(0.072727f))))
        .addChild(new ProtoDeclare().setName("ArtDeco11")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.258928f).setDiffuseColor(new float[] {0.335631f,0.207672f,0.238304f}).setSpecularColor(new float[] {0.198631f,0.075403f,0.138803f}).setEmissiveColor(new float[] {0.010638f,0.010638f,0.010638f}).setShininess(0.021277f))))
        .addChild(new ProtoDeclare().setName("ArtDeco12")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240838f).setDiffuseColor(new float[] {0.876873f,0.14715f,0.00856f}).setSpecularColor(new float[] {0.193878f,0.029416f,0.029416f}).setShininess(0.076531f))))
        .addChild(new ProtoDeclare().setName("ArtDeco13")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.794445f,0.249425f,0f}).setSpecularColor(new float[] {0.62904f,0.194211f,0.033663f}).setShininess(0.551515f))))
        .addChild(new ProtoDeclare().setName("ArtDeco14")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.510609f,0.17264f,0.059872f}).setSpecularColor(new float[] {0.533333f,0.533333f,0.533333f}).setShininess(0.933333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco15")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.255814f).setDiffuseColor(new float[] {0.914894f,0.444404f,0.348914f}).setSpecularColor(new float[] {0.345745f,0.143066f,0f}).setShininess(0.12766f))))
        .addChild(new ProtoDeclare().setName("ArtDeco16")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240838f).setDiffuseColor(new float[] {0.876873f,0.323147f,0.199564f}).setSpecularColor(new float[] {0.816327f,0.278677f,0.278677f}).setShininess(0.80102f))))
        .addChild(new ProtoDeclare().setName("ArtDeco17")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424f).setDiffuseColor(new float[] {0.515625f,0.315496f,0.252441f}).setSpecularColor(new float[] {0.533333f,0.533333f,0.533333f}).setShininess(0.933333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco18")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.264706f).setDiffuseColor(new float[] {0f,0.346939f,0.253624f}).setSpecularColor(new float[] {0f,0.311074f,0.357143f}).setShininess(0.316327f))))
        .addChild(new ProtoDeclare().setName("ArtDeco19")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.259259f).setDiffuseColor(new float[] {0f,0.251004f,0.239248f}).setSpecularColor(new float[] {0.177935f,0.249369f,0.229278f}).setShininess(0.060606f))))
        .addChild(new ProtoDeclare().setName("ArtDeco20")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.24f).setDiffuseColor(new float[] {0.228298f,0.385771f,0.186794f}).setSpecularColor(new float[] {0.200464f,0.300145f,0.293518f}).setShininess(0.393939f))))
        .addChild(new ProtoDeclare().setName("ArtDeco21")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setDiffuseColor(new float[] {0.315389f,0.544f,0.258052f}).setSpecularColor(new float[] {0.456f,0.456f,0.456f}).setShininess(0.509389f))))
        .addChild(new ProtoDeclare().setName("ArtDeco22")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.246032f).setDiffuseColor(new float[] {0.251104f,0.312562f,0.201724f}).setSpecularColor(new float[] {0.209184f,0.113842f,0.111328f}).setShininess(0.086735f))))
        .addChild(new ProtoDeclare().setName("ArtDeco23")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424f).setDiffuseColor(new float[] {0.392348f,0.456f,0.417708f}).setSpecularColor(new float[] {0.533333f,0.533333f,0.533333f}).setShininess(0.933333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco24")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.253968f).setDiffuseColor(new float[] {1f,0.854922f,0f}).setSpecularColor(new float[] {0.872449f,0.247119f,0.254214f}).setShininess(1f))))
        .addChild(new ProtoDeclare().setName("ArtDeco25")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25641f).setDiffuseColor(new float[] {0.795918f,0.505869f,0.093315f}).setSpecularColor(new float[] {0.923469f,0.428866f,0.006369f}).setShininess(0.397959f))))
        .addChild(new ProtoDeclare().setName("ArtDeco26")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(1f).setDiffuseColor(new float[] {0.331633f,0.296582f,0.279057f}).setSpecularColor(new float[] {0.311224f,0.25183f,0.133042f}).setShininess(0.096939f))))
        .addChild(new ProtoDeclare().setName("ArtDeco27")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.263158f).setDiffuseColor(new float[] {0.345455f,0.163262f,0.122622f}).setSpecularColor(new float[] {0.212121f,0.107475f,0f}).setShininess(0.048649f))))
        .addChild(new ProtoDeclare().setName("ArtDeco28")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240506f).setDiffuseColor(new float[] {0.277281f,0.104336f,0.0799f}).setSpecularColor(new float[] {0.305587f,0.141916f,0.270572f}).setShininess(0.09697f))))
        .addChild(new ProtoDeclare().setName("ArtDeco29")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.215686f).setDiffuseColor(new float[] {0.087034f,0.025888f,0f}).setSpecularColor(new float[] {0.224138f,0.104091f,0.104091f}).setShininess(0.045918f))))
        .addChild(new ProtoDeclare().setName("ArtDeco30")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setSpecularColor(new float[] {0.293243f,0.297387f,0.290421f}).setShininess(0.081633f))))
        .addChild(new ProtoDeclare().setName("ArtDeco31")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25641f).setDiffuseColor(new float[] {0.236364f,0.236364f,0.236364f}).setSpecularColor(new float[] {0.29697f,0.245839f,0.295962f}).setShininess(0.054546f))))
        .addChild(new ProtoDeclare().setName("ArtDeco32")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424f).setDiffuseColor(new float[] {0.38087f,0.382957f,0.417708f}).setSpecularColor(new float[] {0.533333f,0.533333f,0.533333f}).setShininess(0.933333f))))
        .addChild(new ProtoDeclare().setName("ArtDeco33")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.230089f).setDiffuseColor(new float[] {0.610811f,0.610811f,0.610811f}).setSpecularColor(new float[] {0.767568f,0.756757f,0.764964f}).setShininess(0.897297f))))
        .addChild(new ProtoDeclare().setName("ArtDeco34")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25f).setSpecularColor(new float[] {0.2f,0.2f,0.2f}).setShininess(0f))))
        .addChild(new WorldInfo().setTitle("ArtDecoPrototypes.x3d"))
        .addChild(new Anchor().setDescription("ArtDecoPrototypeExample").setUrl(new MFString0().getArray()).setParameter(new MFString1().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.8f,0.4f,0f})))
            .setGeometry(new Text().setString(new MFString2().getArray())
              .setFontStyle(new FontStyle().setSize(0.8f).setJustify(new MFString3().getArray()))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

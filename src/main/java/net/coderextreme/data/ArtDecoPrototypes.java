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
public class ArtDecoPrototypes implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ArtDecoPrototypes().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ArtDecoPrototypes.new.java.x3d");
    model.toFileJSON("../data/ArtDecoPrototypes.new.java.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.0")
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
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ArtDecoPrototypes.x3d"))
        .addChild(new ProtoDeclare().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.282435,0.085159,0.134462}).setShininess(0.127273).setSpecularColor(new double[] {0.276305,0.11431,0.139857}))))
        .addChild(new ProtoDeclare().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.254777).setDiffuseColor(new double[] {0.685208,0.134679,0.332385}).setShininess(0.071429).setSpecularColor(new double[] {0.122449,0.050035,0.050035}))))
        .addChild(new ProtoDeclare().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .addComments("computed conversion ambientIntensity=1.745282, normalized to 1.0")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(1).setDiffuseColor(new double[] {0.536861,0.0529,0.245479}).setShininess(0.832432).setSpecularColor(new double[] {0.805292,0.765198,0.747416}))))
        .addChild(new ProtoDeclare().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.248649).setDiffuseColor(new double[] {1,0.452381,0.40339}).setShininess(0.902703).setSpecularColor(new double[] {0.686486,0.396903,0.419275}))))
        .addChild(new ProtoDeclare().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.748016,0.298362,0.342624}).setShininess(0.69697).setSpecularColor(new double[] {0.345455,0.345455,0.345455}))))
        .addChild(new ProtoDeclare().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.24359).setDiffuseColor(new double[] {0.945455,0.318988,0.321717}).setShininess(0.018182).setSpecularColor(new double[] {0.072727,0.021705,0.010732}))))
        .addChild(new ProtoDeclare().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25946).setDiffuseColor(new double[] {0.228655,0.195513,0.425484}).setShininess(0.542553).setSpecularColor(new double[] {0.324504,0.404255,0.404255}))))
        .addChild(new ProtoDeclare().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(new double[] {0.200348,0.100857,0.320833}).setShininess(0.133333).setSpecularColor(new double[] {0.311358,0.387879,0.387879}))))
        .addChild(new ProtoDeclare().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(new double[] {0.330519,0.3389,0.6}).setShininess(0.787879).setSpecularColor(new double[] {0.290909,0.290909,0.290909}))))
        .addChild(new ProtoDeclare().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(new double[] {0.237059,0.096273,0.215625}).setShininess(0.133333).setSpecularColor(new double[] {0.311358,0.387879,0.387879}))))
        .addChild(new ProtoDeclare().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242425).setDiffuseColor(new double[] {0.304,0.09025,0.207364}).setShininess(0.072727).setSpecularColor(new double[] {0.6665,0.579046,0.830303}))))
        .addChild(new ProtoDeclare().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.258928).setDiffuseColor(new double[] {0.335631,0.207672,0.238304}).setEmissiveColor(new double[] {0.010638,0.010638,0.010638}).setShininess(0.021277).setSpecularColor(new double[] {0.198631,0.075403,0.138803}))))
        .addChild(new ProtoDeclare().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(new double[] {0.876873,0.14715,0.00856}).setShininess(0.076531).setSpecularColor(new double[] {0.193878,0.029416,0.029416}))))
        .addChild(new ProtoDeclare().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.794445,0.249425,0}).setShininess(0.551515).setSpecularColor(new double[] {0.62904,0.194211,0.033663}))))
        .addChild(new ProtoDeclare().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.510609,0.17264,0.059872}).setShininess(0.933333).setSpecularColor(new double[] {0.533333,0.533333,0.533333}))))
        .addChild(new ProtoDeclare().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.255814).setDiffuseColor(new double[] {0.914894,0.444404,0.348914}).setShininess(0.12766).setSpecularColor(new double[] {0.345745,0.143066,0}))))
        .addChild(new ProtoDeclare().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(new double[] {0.876873,0.323147,0.199564}).setShininess(0.80102).setSpecularColor(new double[] {0.816327,0.278677,0.278677}))))
        .addChild(new ProtoDeclare().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(new double[] {0.515625,0.315496,0.252441}).setShininess(0.933333).setSpecularColor(new double[] {0.533333,0.533333,0.533333}))))
        .addChild(new ProtoDeclare().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.264706).setDiffuseColor(new double[] {0,0.346939,0.253624}).setShininess(0.316327).setSpecularColor(new double[] {0,0.311074,0.357143}))))
        .addChild(new ProtoDeclare().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.259259).setDiffuseColor(new double[] {0,0.251004,0.239248}).setShininess(0.060606).setSpecularColor(new double[] {0.177935,0.249369,0.229278}))))
        .addChild(new ProtoDeclare().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.24).setDiffuseColor(new double[] {0.228298,0.385771,0.186794}).setShininess(0.393939).setSpecularColor(new double[] {0.200464,0.300145,0.293518}))))
        .addChild(new ProtoDeclare().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(new double[] {0.315389,0.544,0.258052}).setShininess(0.509389).setSpecularColor(new double[] {0.456,0.456,0.456}))))
        .addChild(new ProtoDeclare().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.246032).setDiffuseColor(new double[] {0.251104,0.312562,0.201724}).setShininess(0.086735).setSpecularColor(new double[] {0.209184,0.113842,0.111328}))))
        .addChild(new ProtoDeclare().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(new double[] {0.392348,0.456,0.417708}).setShininess(0.933333).setSpecularColor(new double[] {0.533333,0.533333,0.533333}))))
        .addChild(new ProtoDeclare().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.253968).setDiffuseColor(new double[] {1,0.854922,0}).setShininess(1).setSpecularColor(new double[] {0.872449,0.247119,0.254214}))))
        .addChild(new ProtoDeclare().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(new double[] {0.795918,0.505869,0.093315}).setShininess(0.397959).setSpecularColor(new double[] {0.923469,0.428866,0.006369}))))
        .addChild(new ProtoDeclare().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .addComments("computed conversion ambientIntensity=2.226234, normalized to 1.0")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(1).setDiffuseColor(new double[] {0.331633,0.296582,0.279057}).setShininess(0.096939).setSpecularColor(new double[] {0.311224,0.25183,0.133042}))))
        .addChild(new ProtoDeclare().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.263158).setDiffuseColor(new double[] {0.345455,0.163262,0.122622}).setShininess(0.048649).setSpecularColor(new double[] {0.212121,0.107475,0}))))
        .addChild(new ProtoDeclare().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.240506).setDiffuseColor(new double[] {0.277281,0.104336,0.0799}).setShininess(0.09697).setSpecularColor(new double[] {0.305587,0.141916,0.270572}))))
        .addChild(new ProtoDeclare().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.215686).setDiffuseColor(new double[] {0.087034,0.025888,0}).setShininess(0.045918).setSpecularColor(new double[] {0.224138,0.104091,0.104091}))))
        .addChild(new ProtoDeclare().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0).setDiffuseColor(new double[] {0,0,0}).setShininess(0.081633).setSpecularColor(new double[] {0.293243,0.297387,0.290421}))))
        .addChild(new ProtoDeclare().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(new double[] {0.236364,0.236364,0.236364}).setShininess(0.054546).setSpecularColor(new double[] {0.29697,0.245839,0.295962}))))
        .addChild(new ProtoDeclare().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(new double[] {0.38087,0.382957,0.417708}).setShininess(0.933333).setSpecularColor(new double[] {0.533333,0.533333,0.533333}))))
        .addChild(new ProtoDeclare().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.230089).setDiffuseColor(new double[] {0.610811,0.610811,0.610811}).setShininess(0.897297).setSpecularColor(new double[] {0.767568,0.756757,0.764964}))))
        .addChild(new ProtoDeclare().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
          .setProtoBody(new ProtoBody()
            .addChild(new Material().setAmbientIntensity(0.25).setShininess(0).setSpecularColor(new double[] {0.2,0.2,0.2}))))
        .addChild(new Anchor().setDescription("ArtDecoPrototypeExample").setParameter(new MFString0().getArray()).setUrl(new MFString1().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.8,0.4,0})))
            .setGeometry(new Text().setString(new MFString2().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString3().getArray()).setSize(0.8))))))      ;
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"});
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

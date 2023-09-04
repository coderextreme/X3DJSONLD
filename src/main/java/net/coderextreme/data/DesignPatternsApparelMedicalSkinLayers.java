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
public class DesignPatternsApparelMedicalSkinLayers {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new DesignPatternsApparelMedicalSkinLayers().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta(new meta().setName("description").setContent("Design patterns for skin and apparel using HAnim2 standard in X3D4"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("creator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("creator").setContent("Dick Puk"))
        .addMeta(new meta().setName("created").setContent("23 December 2022"))
        .addMeta(new meta().setName("modified").setContent("2 July 2023"))
        .addMeta(new meta().setName("reference").setContent("DesignPatternsApparelVariations.txt"))
        .addMeta(new meta().setName("reference").setContent("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"))
        .addMeta(new meta().setName("reference").setContent("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"))
        .addMeta(new meta().setName("reference").setContent("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"))
        .addMeta(new meta().setName("warning").setContent("Under development. This template example does not produce renderable HAnim models."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("HAnimHumanoid skin design patterns for apparel, medical"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Group().setDEF("MultipleHumanoids")
          .setMetadata(new MetadataString().setName("HAnimArchitecture").setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile").setValue(new MFString1().getArray())))
        .addChild(new Viewpoint().setDEF("ViewHelpText").setDescription("Select text to see website").setPosition(new float[] {0f,0f,12f}))
        .addChild(new Anchor().setDescription("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches").setUrl(new MFString2().getArray()).setParameter(new MFString3().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.9f,0.9f,0.9f})))
            .setGeometry(new Text().setString(new MFString4().getArray())
              .setFontStyle(new FontStyle().setFamily(new MFString5().getArray()).setStyle("BOLD").setSize(0.6f).setJustify(new MFString6().getArray()))))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1f)))
            .setGeometry(new Box().setSize(new float[] {11f,2f,0.001f})))))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0.6f,0.6f});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"E.4 Multiple humanoids per file"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=blank"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

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
public class DesignPatternsApparelMedicalSkinLayers implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new DesignPatternsApparelMedicalSkinLayers().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/DesignPatternsApparelMedicalSkinLayers.new.java.x3d");
    model.toFileJSON("../data/DesignPatternsApparelMedicalSkinLayers.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("HAnim")).setLevel(2))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("DesignPatternsApparelMedicalSkinLayers.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Design patterns for skin and apparel using HAnim2 standard in X3D4")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Joe D. Williams")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Dick Puk")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("23 December 2022")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("2 July 2023")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("DesignPatternsApparelVariations.txt")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid")))
        .addMeta(new meta().setName(new SFString("warning")).setContent(new SFString("Under development. This template example does not produce renderable HAnim models.")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("HAnimHumanoid skin design patterns for apparel, medical")))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Group().setDEF(new SFString("MultipleHumanoids"))
          .setMetadata(new MetadataString().setName(new SFString("HAnimArchitecture")).setReference(new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile")).setValue(new MFString1().getArray()))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SimpleSkeleton")).setDEF(new SFString("a_SimpleSkeleton")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("a_SimpleSkeleton").setName(new SFString("humanoid_root")).setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))
                .addChild(new Shape().setDEF(new SFString("JointVisualization")))
                .addChild(new Shape().setDEF(new SFString("SegmentVisualization")))
                .addChild(new HAnimSite().setName(new SFString("feature01_tip")).setDEF(new SFString("a_feature01_tip"))
                  .addChild(new Shape().setDEF(new SFString("SiteVisualization")))))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SimpleSkeletonMesh")).setDEF(new SFString("b_SimpleSkeletonMesh")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("b_SimpleSkeletonMesh").setName(new SFString("humanoid_root")).setUlimit(new MFFloat4().getArray()).setLlimit(new MFFloat5().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))
                .addChild(new Shape()
                  .setGeometry(new IndexedFaceSet().setDEF(new SFString("SegmentBoneMesh")))))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SkinIndexedGeometry")).setDEF(new SFString("c_SkinIndexedGeometry")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("c_SkinIndexedGeometry").setName(new SFString("humanoid_root")).setUlimit(new MFFloat6().getArray()).setLlimit(new MFFloat7().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addSkin(new IndexedFaceSet().setDEF(new SFString("SkinMeshIFS"))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SkinShapeIndexedGeometry")).setDEF(new SFString("d_SkinShapeIndexedGeometry")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("d_SkinShapeIndexedGeometry").setName(new SFString("humanoid_root")).setUlimit(new MFFloat8().getArray()).setLlimit(new MFFloat9().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addSkin(new Shape()
              .setGeometry(new IndexedFaceSet().setUSE(new SFString("SkinMeshIFS")))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SkinSwitchShapeIndexedGeometry")).setDEF(new SFString("e_SkinSwitchShapeIndexedGeometry")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("e_SkinSwitchShapeIndexedGeometry").setName(new SFString("humanoid_root")).setUlimit(new MFFloat10().getArray()).setLlimit(new MFFloat11().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addComments(new CommentsBlock("TODO show X3D4.0 addition of <Switch DEF='AlternativeSkins' containerField='skin'>"))
            .addSkin(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF(new SFString("IndexedSkinMeshIFS"))
                .setCoord(new Coordinate().setDEF(new SFString("SkinMeshCoordinate"))))))
          .addComments(new CommentsBlock("similarly for LOD"))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("SynthesizedSkinShapeIndexedTwoPartGeometry")).setDEF(new SFString("f_SynthesizedSkinShapeIndexedTwoPartGeometry")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("f_SynthesizedSkinShapeIndexedTwoPartGeometry").setName(new SFString("humanoid_root")).setUlimit(new MFFloat12().getArray()).setLlimit(new MFFloat13().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addSkin(new Shape()
              .setGeometry(new IndexedFaceSet().setDEF(new SFString("TwoPartIndexedSkinMesh"))
                .setCoord(new Coordinate().setDEF(new SFString("TwoPartSkinMesh"))))))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("ApparelSkinIndexedGeometryMultipleShapes")).setDEF(new SFString("g_ApparelSkinIndexedGeometryMultipleShapes")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("g_ApparelSkinIndexedGeometryMultipleShapes").setName(new SFString("humanoid_root")).setUlimit(new MFFloat14().getArray()).setLlimit(new MFFloat15().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addSkin(new Shape())
            .addComments(new CommentsBlock("allow multiple Shape nodes with containerField='apparel', one for each layer of clothing"))
            .addComments(new CommentsBlock("TODO proposed for X3D4.1 <Shape containerField='apparel'/>")))
          .addComments(new CommentsBlock("=============================="))
          .addChild(new HAnimHumanoid("MultipleHumanoids").setName(new SFString("AnatomySkinIndexedGeometryMultipleShapes")).setDEF(new SFString("h_AnatomySkinIndexedGeometryMultipleShapes")).setVersion(new SFString("2.0"))
            .addSkeleton(new HAnimJoint("h_AnatomySkinIndexedGeometryMultipleShapes").setName(new SFString("humanoid_root")).setUlimit(new MFFloat16().getArray()).setLlimit(new MFFloat17().getArray())
              .addChild(new HAnimSegment().setName(new SFString("sacrum"))))
            .addComments(new CommentsBlock("allow multiple Shape nodes with containerField='skin', one for each layer of skin"))
            .addSkin(new Shape()))
          .addComments(new CommentsBlock("==============================")))
        .addChild(new Viewpoint().setDEF(new SFString("ViewHelpText")).setDescription(new SFString("Select text to see website")).setPosition(new float[] {0f ,0f ,12f }))
        .addComments(new CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"))
        .addChild(new Anchor().setDescription(new SFString("DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches")).setParameter(new MFString18().getArray()).setUrl(new MFString19().getArray())
          .addChild(new Shape()
            .addComments(new CommentsBlock("TODO adjust Text string and Box size, then set Material transparency='1'"))
            .setGeometry(new Text().setString(new MFString20().getArray())
              .setFontStyle(new FontStyle().setFamily(new MFString21().getArray()).setJustify(new MFString22().getArray()).setSize(0.6f ).setStyle(new SFString("BOLD"))))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.9f ,0.9f ,0.9f }))))
          .addChild(new Shape()
            .addComments(new CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."))
            .setGeometry(new Box().setSize(new float[] {11f ,2f ,0.001f }))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1f ))))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f ,0.6f ,0.6f });
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"E.4 Multiple humanoids per file"});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat5 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat9 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat13 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFFloat17 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,0f });
  }
}
private class MFString18 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=blank"});
  }
}
private class MFString19 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"});
  }
}
private class MFString20 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"});
  }
}
private class MFString21 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString22 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

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
public class Tongue implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Tongue().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Tongue.new.java.x3d");
    model.toFileJSON("../data/Tongue.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("HAnim").setLevel(3))
        .addMeta(new meta().setName("title").setContent("Tongue.x3d"))
        .addMeta(new meta().setName("description").setContent("Facial Action Coding System (FACS) example for Action Unit (AU) 27, Mouth Stretch Morpher, Tongue Derivated."))
        .addMeta(new meta().setName("creator").setContent("Yujin Jung"))
        .addMeta(new meta().setName("translator").setContent("Chul Hee Jung"))
        .addMeta(new meta().setName("translator").setContent("Myeong Won Lee"))
        .addMeta(new meta().setName("created").setContent("25 April 2022"))
        .addMeta(new meta().setName("modified").setContent("27 October 2024"))
        .addMeta(new meta().setName("translator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("translator").setContent("Joe D. Williams"))
        .addMeta(new meta().setName("reference").setContent("https://en.wikipedia.org/wiki/Facial_Action_Coding_System"))
        .addMeta(new meta().setName("reference").setContent("https://web.cs.wpi.edu/~matt/courses/cs563/talks/face_anim/ekman.html"))
        .addMeta(new meta().setName("reference").setContent("Bryn Farnsworth, FACS Visual Guidebook https://imotions.com/blog/learning/research-fundamentals/facial-action-coding-system"))
        .addMeta(new meta().setName("generator").setContent("Suwon VRLAB X3D Converter"))
        .addMeta(new meta().setName("MovingImage").setContent("originals/SuwonHAnimFacialMotionConverter.mp4"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/Tongue.x3d"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDEF("HelloJin").setDescription("Hello Jin! 안녕하세요 진!").setPosition(new float[] {0f ,20f ,60f }))
        .addChild(new TimeSensor().setDEF("JinMouthStretch_Clock").setCycleInterval(0.99d).setLoop(true))
        .addChild(new EXPORT().setLocalDEF("JinMouthStretch_Clock").setAS("JinMouthStretch_Clock"))
        .addChild(new ScalarInterpolator().setDEF("AnimationAdapter_JinMouthStretch").setKey(new MFFloat0().getArray()).setKeyValue(new MFFloat1().getArray()))
        .addChild(new HAnimHumanoid().setName("humanoid").setDEF("hanim_humanoid").setVersion("2.0")
          .addSkeleton(new HAnimJoint("hanim_humanoid").setName("humanoid_root").setDEF("hanim_root").setUlimit(new MFFloat2().getArray()).setLlimit(new MFFloat3().getArray())
            .addChild(new HAnimSegment("hanim_root").setName("sacrum").setDEF("hanim_sacrum")
              .addChild(new WorldInfo().setTitle("Tongue.x3d"))
              .addChild(new Background().setSkyColor(new MFColor4().getArray()))
              .addChild(new NavigationInfo().setType("\"EXAMINE\"")))
            .addChild(new HAnimJoint("hanim_root").setName("skullbase").setDEF("hanim_skullbase").setUlimit(new MFFloat5().getArray()).setLlimit(new MFFloat6().getArray())
              .addChild(new HAnimSegment("hanim_skullbase").setName("tongue").setDEF("hanim_Tongue")
                .addChild(new Transform().setDEF("Tongue").setTranslation(new float[] {0f ,8.886f ,11.1f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance().setDEF("BaseAppearance")
                      .setMaterial(new Material().setDEF("BaseMaterial").setAmbientIntensity(1f ).setDiffuseColor(new float[] {0.588f ,0.588f ,0.588f }).setShininess(0.145f ))
                      .setTexture(new ImageTexture().setDEF("JinImageAtlas").setUrl(new MFString7().getArray())))
                    .setGeometry(new IndexedFaceSet().setDEF("Tongue-FACES").setCoordIndex(new MFInt328().getArray().append(new MFInt329().getArray())).setCreaseAngle(3.14159f ).setSolid(false).setTexCoordIndex(new MFInt3210().getArray().append(new MFInt3211().getArray()))
                      .setTexCoord(new TextureCoordinate().setDEF("Tongue-TEXCOORD").setPoint(new MFVec2f12().getArray()))
                      .setCoord(new Coordinate().setDEF("Tongue_COORD").setPoint(new MFVec3f13().getArray())))))
                .setCoord(new Coordinate().setUSE("Tongue_COORD"))
                .addDisplacers(new HAnimDisplacer("hanim_Tongue").setName("tongue_morphinterpolator").setDEF("Tongue_MorphInterpolator_JinMouthStretch").setCoordIndex(new MFInt3214().getArray()).setDisplacements(new MFVec3f15().getArray())))))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_root"))
          .addJoints(new HAnimJoint("hanim_humanoid").setUSE("hanim_skullbase")))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("AnimationAdapter_JinMouthStretch").setToField("weight").setToNode("Tongue_MorphInterpolator_JinMouthStretch"))
        .addChild(new ROUTE().setFromNode("JinMouthStretch_Clock").setFromField("fraction_changed").setToNode("AnimationAdapter_JinMouthStretch").setToField("set_fraction")));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.25f ,0.5f ,0.75f ,1f });
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f ,0.5f ,0f });
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
private class MFColor4 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.8f ,0.9f ,1f });
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
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"JinImageAtlas.jpg","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/FacialAnimation/JinImageAtlas.jpg"});
  }
}
private class MFInt328 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,59,32,-1,32,62,0,-1,8,75,32,-1,32,59,8,-1,20,95,32,-1,32,75,20,-1,17,62,32,-1,32,95,17,-1,4,89,33,-1,33,74,4,-1,18,96,33,-1,33,89,18,-1,29,92,33,-1,33,96,29,-1,11,74,33,-1,33,92,11,-1,12,79,34,-1,34,82,12,-1,22,97,34,-1,34,79,22,-1,31,94,34,-1,34,97,31,-1,15,82,34,-1,34,94,15,-1,1,72,35,-1,35,67,1,-1,9,77,35,-1,35,72,9,-1,10,64,35,-1,35,77,10,-1,5,67,35,-1,35,64,5,-1,2,71,36,-1,36,70,2,-1,8,78,36,-1,36,71,8,-1,11,66,36,-1,36,78,11,-1,6,70,36,-1,36,66,6,-1,8,71,37,-1,37,75,8,-1,2,60,37,-1,37,71,2,-1,24,98,37,-1,37,60,24,-1,20,75,37,-1,37,98,20,-1,10,73,38,-1,38,76,10,-1,7,65,38,-1,38,73,7,-1,27,99,38,-1,38,65,27,-1,21,76,38,-1,38,99,21,-1,9,61,39,-1,39,77,9,-1,3,69,39,-1,39,61,3,-1,7,73,39,-1,39,69,7,-1,10,77,39,-1,39,73,10,-1,8,59,40,-1,40,78,8,-1,0,68,40,-1,40,59,0,-1,4,74,40,-1,40,68,4,-1,11,78,40,-1,40,74,11,-1,0,62,41,-1,41,83,0,-1,17,100,41,-1,41,62,17,-1,22,79,41,-1,41,100,22,-1,12,83,41,-1,41,79,12,-1,1,67,42,-1,42,84,1,-1,5,85,42,-1,42,67,5,-1,14,80,42,-1,42,85,14,-1,13,84,42,-1,42,80,13,-1,5,63,43,-1,43,85,5,-1,26,101,43,-1,43,63,26,-1,23,81,43,-1,43,101,23,-1,14,85,43,-1,43,81,14,-1,4,68,44,-1,44,86,4,-1,0,83,44,-1,44,68,0,-1,12,82,44,-1,44,83,12,-1,15,86,44,-1,44,82,15,-1,28,91,45,-1,45,110,28,-1,9,72,45,-1,45,91,9,-1,1,88,45,-1,45,72,1,-1,25,110,45,-1,45,88,25,-1,26,63,46,-1,46,111,26,-1,5,64,46,-1,46,63,5,-1,10,76,46,-1,46,64,10,-1,21,111,46,-1,46,76,21,-1,30,93,47,-1,47,112,30,-1,13,80,47,-1,47,93,13,-1,14,81,47,-1,47,80,14,-1,23,112,47,-1,47,81,23,-1,16,87,48,-1,48,113,16,-1,3,61,48,-1,48,87,3,-1,9,91,48,-1,48,61,9,-1,28,113,48,-1,48,91,28,-1,19,90,49,-1,49,114,19,-1,6,66,49,-1,49,90,6,-1,11,92,49,-1,49,66,11,-1,29,114,49,-1,49,92,29,-1,25,88,50,-1,50,115,25,-1,1,84,50,-1,50,88,1,-1,13,93,50,-1,50,84,13,-1,30,115,50,-1,50,93,30,-1,18,89,51,-1,51,116,18,-1,4,86,51,-1,51,89,4,-1,15,94,51,-1,51,86,15,-1,31,116,51,-1,51,94,31,-1,20,106,52,-1,52,95,20,-1,28,110,52,-1,52,106,28,-1,25,103,52,-1,52,110,25,-1,17,95,52,-1,52,103,17,-1,18,104,53,-1,53,96,18,-1,26,111,53,-1,53,104,26,-1,21,107,53,-1,53,111,21,-1,29,96,53,-1,53,107,29,-1,22,108,54,-1,54,97,22,-1,30,112,54,-1,54,108,30,-1,23,109,54,-1,54,112,23,-1,31,97,54,-1,54,109,31,-1,24,102,55,-1,55,98,24,-1,16,113,55,-1,55,102,16,-1,28,106,55,-1,55,113,28,-1,20,98,55,-1,55,106,20,-1,27,105,56,-1,56,99,27,-1,19,114,56,-1,56,105,19,-1,29,107,56,-1,56,114,29,-1,21,99,56,-1,56,107,21,-1,17,103,57,-1,57,100,17,-1,25,115,57,-1,57,103,25,-1,30,108,57,-1,57,115,30,-1,22,100,57,-1,57,108,22,-1,26,104,58,-1,58,101,26,-1});
  }
}
private class MFInt329 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {18,116,58,-1,58,104,18,-1,31,109,58,-1,58,116,31,-1,23,101,58,-1,58,109,23,-1});
  }
}
private class MFInt3210 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,2,3,0,-1,4,5,2,-1,2,1,4,-1,6,7,2,-1,2,5,6,-1,8,3,2,-1,2,7,8,-1,9,10,11,-1,11,12,9,-1,13,14,11,-1,11,10,13,-1,15,16,11,-1,11,14,15,-1,17,12,11,-1,11,16,17,-1,18,19,20,-1,20,21,18,-1,22,23,20,-1,20,19,22,-1,24,25,20,-1,20,23,24,-1,26,21,20,-1,20,25,26,-1,27,28,29,-1,29,30,27,-1,31,32,29,-1,29,28,31,-1,33,34,29,-1,29,32,33,-1,35,30,29,-1,29,34,35,-1,36,37,38,-1,38,39,36,-1,4,40,38,-1,38,37,4,-1,17,41,38,-1,38,40,17,-1,42,39,38,-1,38,41,42,-1,4,37,43,-1,43,5,4,-1,36,44,43,-1,43,37,36,-1,45,46,43,-1,43,44,45,-1,6,5,43,-1,43,46,6,-1,33,47,48,-1,48,49,33,-1,50,51,48,-1,48,47,50,-1,52,53,48,-1,48,51,52,-1,54,49,48,-1,48,53,54,-1,31,55,56,-1,56,32,31,-1,57,58,56,-1,56,55,57,-1,50,47,56,-1,56,58,50,-1,33,32,56,-1,56,47,33,-1,4,1,59,-1,59,40,4,-1,0,60,59,-1,59,1,0,-1,9,12,59,-1,59,60,9,-1,17,40,59,-1,59,12,17,-1,0,3,61,-1,61,62,0,-1,8,63,61,-1,61,3,8,-1,22,19,61,-1,61,63,22,-1,18,62,61,-1,61,19,18,-1,27,30,64,-1,64,65,27,-1,35,66,64,-1,64,30,35,-1,67,68,64,-1,64,66,67,-1,69,65,64,-1,64,68,69,-1,35,70,71,-1,71,66,35,-1,72,73,71,-1,71,70,72,-1,74,75,71,-1,71,73,74,-1,67,66,71,-1,71,75,67,-1,9,60,76,-1,76,77,9,-1,0,62,76,-1,76,60,0,-1,18,21,76,-1,76,62,18,-1,26,77,76,-1,76,21,26,-1,78,79,80,-1,80,81,78,-1,31,28,80,-1,80,79,31,-1,27,82,80,-1,80,28,27,-1,83,81,80,-1,80,82,83,-1,72,70,84,-1,84,85,72,-1,35,34,84,-1,84,70,35,-1,33,49,84,-1,84,34,33,-1,54,85,84,-1,84,49,54,-1,86,87,88,-1,88,89,86,-1,69,68,88,-1,88,87,69,-1,67,75,88,-1,88,68,67,-1,74,89,88,-1,88,75,74,-1,90,91,92,-1,92,93,90,-1,57,55,92,-1,92,91,57,-1,31,79,92,-1,92,55,31,-1,78,93,92,-1,92,79,78,-1,94,95,96,-1,96,97,94,-1,42,41,96,-1,96,95,42,-1,17,16,96,-1,96,41,17,-1,15,97,96,-1,96,16,15,-1,83,82,98,-1,98,99,83,-1,27,65,98,-1,98,82,27,-1,69,87,98,-1,98,65,69,-1,86,99,98,-1,98,87,86,-1,13,10,100,-1,100,101,13,-1,9,77,100,-1,100,10,9,-1,26,25,100,-1,100,77,26,-1,24,101,100,-1,100,25,24,-1,6,102,103,-1,103,7,6,-1,78,81,103,-1,103,102,78,-1,83,104,103,-1,103,81,83,-1,8,7,103,-1,103,104,8,-1,13,105,106,-1,106,14,13,-1,72,85,106,-1,106,105,72,-1,54,107,106,-1,106,85,54,-1,15,14,106,-1,106,107,15,-1,22,108,109,-1,109,23,22,-1,86,89,109,-1,109,108,86,-1,74,110,109,-1,109,89,74,-1,24,23,109,-1,109,110,24,-1,45,111,112,-1,112,46,45,-1,90,93,112,-1,112,111,90,-1,78,102,112,-1,112,93,78,-1,6,46,112,-1,112,102,6,-1,52,113,114,-1,114,53,52,-1,94,97,114,-1,114,113,94,-1,15,107,114,-1,114,97,15,-1,54,53,114,-1,114,107,54,-1,8,104,115,-1,115,63,8,-1,83,99,115,-1,115,104,83,-1,86,108,115,-1,115,99,86,-1,22,63,115,-1,115,108,22,-1,72,105,116,-1,116,73,72,-1});
  }
}
private class MFInt3211 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {13,101,116,-1,116,105,13,-1,24,110,116,-1,116,101,24,-1,74,73,116,-1,116,110,74,-1});
  }
}
private class MFVec2f12 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.6665f ,0.04796f ,0.6621f ,0.05829f ,0.6755f ,0.05429f ,0.678f ,0.04407f ,0.6594f ,0.0736f ,0.6739f ,0.06941f ,0.6934f ,0.06941f ,0.6938f ,0.05429f ,0.6944f ,0.04387f ,0.6665f ,0.07002f ,0.678f ,0.07332f ,0.6755f ,0.08631f ,0.6621f ,0.08231f ,0.6944f ,0.07293f ,0.6938f ,0.08631f ,0.6934f ,0.103f ,0.6739f ,0.103f ,0.6594f ,0.09877f ,0.6775f ,0.03908f ,0.6841f ,0.03457f ,0.685f ,0.04057f ,0.677f ,0.04467f ,0.6959f ,0.03299f ,0.6961f ,0.03821f ,0.6959f ,0.0483f ,0.6841f ,0.05084f ,0.6775f ,0.0521f ,0.7593f ,0.04796f ,0.7636f ,0.05829f ,0.7681f ,0.0703f ,0.7631f ,0.05909f ,0.7664f ,0.0736f ,0.7713f ,0.08619f ,0.7664f ,0.09877f ,0.7636f ,0.08231f ,0.7593f ,0.07002f ,0.6584f ,0.1215f ,0.6584f ,0.09583f ,0.6535f ,0.1086f ,0.6535f ,0.1343f ,0.6545f ,0.08619f ,0.6584f ,0.1214f ,0.6584f ,0.1471f ,0.6734f ,0.09157f ,0.6734f ,0.1172f ,0.6932f ,0.1172f ,0.6932f ,0.09157f ,0.7673f ,0.1214f ,0.7524f ,0.1256f ,0.7519f ,0.103f ,0.7673f ,0.1471f ,0.7524f ,0.1513f ,0.7326f ,0.1513f ,0.7326f ,0.1256f ,0.7324f ,0.103f ,0.7673f ,0.09583f ,0.7723f ,0.1086f ,0.7673f ,0.1215f ,0.7723f ,0.1343f ,0.6577f ,0.0703f ,0.6627f ,0.05909f ,0.6813f ,0.03662f ,0.6723f ,0.04066f ,0.6952f ,0.03583f ,0.7565f ,0.05069f ,0.7535f ,0.04066f ,0.7535f ,0.05994f ,0.7482f ,0.0521f ,0.7488f ,0.04467f ,0.7482f ,0.03908f ,0.7478f ,0.07332f ,0.7445f ,0.06163f ,0.7314f ,0.07293f ,0.7306f ,0.06006f ,0.7299f ,0.0483f ,0.7417f ,0.05084f ,0.6693f ,0.05069f ,0.6723f ,0.05994f ,0.7324f ,0.06941f ,0.7519f ,0.06941f ,0.7503f ,0.05429f ,0.732f ,0.05429f ,0.7478f ,0.04407f ,0.7314f ,0.04387f ,0.7503f ,0.08631f ,0.732f ,0.08631f ,0.7299f ,0.03299f ,0.7417f ,0.03457f ,0.7408f ,0.04057f ,0.7296f ,0.03821f ,0.7326f ,0.1172f ,0.7524f ,0.1172f ,0.7524f ,0.09157f ,0.7326f ,0.09157f ,0.6932f ,0.1513f ,0.6734f ,0.1513f ,0.6734f ,0.1256f ,0.6932f ,0.1256f ,0.7445f ,0.03662f ,0.7306f ,0.03583f ,0.6813f ,0.06163f ,0.6952f ,0.06006f ,0.7129f ,0.06941f ,0.7129f ,0.05429f ,0.7129f ,0.04381f ,0.7129f ,0.0728f ,0.7129f ,0.08631f ,0.7129f ,0.103f ,0.7129f ,0.03246f ,0.7129f ,0.03742f ,0.7129f ,0.04745f ,0.7129f ,0.1172f ,0.7129f ,0.09157f ,0.7129f ,0.1513f ,0.7129f ,0.1256f ,0.7129f ,0.03556f ,0.7129f ,0.05954f });
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1.331f ,-0.2299f ,0.7138f ,1.331f ,-0.2299f ,0.7138f ,-1.563f ,0.07305f ,-1.268f ,1.563f ,0.07305f ,-1.268f ,-1.331f ,-0.07451f ,0.7385f ,1.331f ,-0.07451f ,0.7385f ,-1.563f ,0.2531f ,-1.239f ,1.563f ,0.2531f ,-1.239f ,-1.536f ,-0.127f ,-0.00304f ,1.536f ,-0.127f ,-0.00304f ,1.536f ,0.05032f ,0.0252f ,-1.536f ,0.05032f ,0.0252f ,-1.015f ,-0.2542f ,1.071f ,1.015f ,-0.2542f ,1.071f ,1.015f ,-0.1625f ,1.086f ,-1.015f ,-0.1625f ,1.086f ,0.5645f ,0.04305f ,-1.272f ,-0.5313f ,-0.257f ,0.7253f ,-0.5313f ,-0.05236f ,0.7579f ,-0.5645f ,0.2831f ,-1.234f ,-0.5607f ,-0.1565f ,-0.007746f ,0.5607f ,0.07987f ,0.02991f ,-0.4876f ,-0.283f ,1.2f ,0.4876f ,-0.1751f ,1.217f ,-0.5645f ,0.04305f ,-1.272f ,0.5313f ,-0.257f ,0.7253f ,0.5313f ,-0.05236f ,0.7579f ,0.5645f ,0.2831f ,-1.234f ,0.5607f ,-0.1565f ,-0.007746f ,-0.5607f ,0.07987f ,0.02991f ,0.4876f ,-0.283f ,1.2f ,-0.4876f ,-0.1751f ,1.217f ,-1.073f ,-0.2176f ,0.4108f ,-1.073f ,0.007936f ,0.4467f ,-0.7997f ,-0.2294f ,1.21f ,1.585f ,-0.1049f ,0.4287f ,-1.706f ,0.05553f ,-0.5782f ,-1.134f ,-0.06447f ,-0.5973f ,1.134f ,0.1755f ,-0.559f ,1.706f ,0.05553f ,-0.5782f ,-1.585f ,-0.1049f ,0.4287f ,-0.9063f ,-0.2816f ,0.9715f ,1.251f ,-0.187f ,0.9442f ,0.9063f ,-0.1054f ,0.9996f ,-1.251f ,-0.187f ,0.9442f ,1.073f ,-0.2176f ,0.4108f ,1.073f ,0.007936f ,0.4467f ,0.7997f ,-0.2294f ,1.21f ,1.134f ,-0.06447f ,-0.5973f ,-1.134f ,0.1755f ,-0.559f ,0.9063f ,-0.2816f ,0.9715f ,-0.9063f ,-0.1054f ,0.9996f ,0f ,-0.2176f ,0.4108f ,0f ,0.007936f ,0.4467f ,0f ,-0.2425f ,1.293f ,0f ,-0.06447f ,-0.5973f ,0f ,0.1755f ,-0.559f ,0f ,-0.2846f ,1.013f ,0f ,-0.1157f ,1.04f ,-1.457f ,-0.1894f ,0.4153f ,-1.134f ,0.04305f ,-1.272f ,1.563f ,-0.03447f ,-0.5925f ,-1.001f ,-0.2565f ,0.7175f ,1.001f ,-0.05045f ,0.7503f ,1.457f ,-0.02026f ,0.4422f ,1.134f ,0.2831f ,-1.234f ,-1.563f ,0.1455f ,-0.5638f ,1.441f ,-0.1518f ,0.7236f ,-1.441f ,-0.1518f ,0.7236f ,1.706f ,0.1631f ,-1.253f ,-1.706f ,0.1631f ,-1.253f ,-1.563f ,-0.03447f ,-0.5925f ,1.457f ,-0.1894f ,0.4153f ,1.563f ,0.1455f ,-0.5638f ,-1.457f ,-0.02026f ,0.4422f ,-1.119f ,-0.1565f ,-0.007746f ,1.119f ,0.07987f ,0.02991f ,1.676f ,-0.03833f ,0.01108f ,-1.676f ,-0.03833f ,0.01108f ,-0.8264f ,-0.2777f ,1.145f ,1.031f ,-0.2122f ,1.103f ,0.8264f ,-0.1631f ,1.163f ,-1.031f ,-0.2122f ,1.103f ,-1.165f ,-0.2565f ,0.9437f ,1.165f ,-0.2565f ,0.9437f ,1.165f ,-0.1207f ,0.9654f ,-1.165f ,-0.1207f ,0.9654f ,1.134f ,0.04305f ,-1.272f ,1.001f ,-0.2565f ,0.7175f ,-1.001f ,-0.05045f ,0.7503f ,-1.134f ,0.2831f ,-1.234f ,1.119f ,-0.1565f ,-0.007746f ,-1.119f ,0.07987f ,0.02991f ,0.8264f ,-0.2777f ,1.145f ,-0.8264f ,-0.1631f ,1.163f ,-0.5493f ,-0.2176f ,0.4108f ,-0.5493f ,0.007936f ,0.4467f ,-0.4809f ,-0.2392f ,1.272f ,-0.5645f ,-0.06447f ,-0.5973f ,0.5645f ,0.1755f ,-0.559f ,-0.5076f ,-0.2838f ,1.003f ,0.5076f ,-0.1131f ,1.03f ,0f ,0.04305f ,-1.272f ,0f ,-0.2572f ,0.7279f ,0f ,-0.053f ,0.7605f ,0f ,0.2831f ,-1.234f ,0f ,-0.1565f ,-0.007746f ,0f ,0.07987f ,0.02991f ,0f ,-0.2847f ,1.218f ,0f ,-0.1791f ,1.235f ,0.5493f ,-0.2176f ,0.4108f ,0.5493f ,0.007936f ,0.4467f ,0.4809f ,-0.2392f ,1.272f ,0.5645f ,-0.06447f ,-0.5973f ,-0.5645f ,0.1755f ,-0.559f ,0.5076f ,-0.2838f ,1.003f ,-0.5076f ,-0.1131f ,1.03f });
  }
}
private class MFInt3214 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116});
  }
}
private class MFVec3f15 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-1.3011f ,-0.5882f ,0f ,-1.3011f ,-0.5882f ,0f ,-0.1823f ,0.11f ,0f ,-0.1474f ,0.036f ,0f ,-1.3165f ,-0.5403f ,0f ,-1.3165f ,-0.5403f ,0f ,-0.1823f ,0.11f ,0f ,-0.1499f ,0.048f ,0f ,-1.154f ,-0.3156f ,0f ,-1.154f ,-0.3156f ,0f ,-1.0543f ,-0.2883f ,0f ,-1.0543f ,-0.2883f ,0f ,-1.4118f ,-0.614f ,0f ,-1.4118f ,-0.614f ,0f ,-1.4215f ,-0.5862f ,0f ,-1.4215f ,-0.5862f ,0f ,-0.1469f ,0.033f ,0f ,-1.303f ,-0.5972f ,0f ,-1.3236f ,-0.5343f ,0f ,-0.1504f ,0.05f ,0f ,-1.1455f ,-0.3322f ,0f ,-1.0581f ,-0.2783f ,0f ,-1.508f ,-0.6254f ,0f ,-1.5299f ,-0.5751f ,0f ,-0.1469f ,0.033f ,0f ,-1.303f ,-0.5972f ,0f ,-1.3236f ,-0.5343f ,0f ,-0.1504f ,0.05f ,0f ,-1.1455f ,-0.3322f ,0f ,-1.0581f ,-0.2783f ,0f ,-1.508f ,-0.6254f ,0f ,-1.5299f ,-0.5751f ,0f ,-1.1594f ,-0.4717f ,0f ,-1.2139f ,-0.3495f ,0f ,-1.5196f ,-0.6002f ,0f ,-1.2771f ,-0.4418f ,0f ,-0.7623f ,-0.1091f ,0f ,-0.7467f ,-0.1522f ,0f ,-0.7779f ,-0.0661f ,0f ,-0.7623f ,-0.1091f ,0f ,-1.2771f ,-0.4418f ,0f ,-1.3794f ,-0.6176f ,0f ,-1.376f ,-0.5863f ,0f ,-1.3976f ,-0.5635f ,0f ,-1.376f ,-0.5863f ,0f ,-1.1594f ,-0.4717f ,0f ,-1.2139f ,-0.3495f ,0f ,-1.5196f ,-0.6002f ,0f ,-0.7467f ,-0.1522f ,0f ,-0.7779f ,-0.0661f ,0f ,-1.3794f ,-0.6176f ,0f ,-1.3976f ,-0.5635f ,0f ,-1.1594f ,-0.4717f ,0f ,-1.2139f ,-0.3495f ,0f ,-1.5585f ,-0.6173f ,0f ,-0.7467f ,-0.1522f ,0f ,-0.7779f ,-0.0661f ,0f ,-1.3924f ,-0.6203f ,0f ,-1.4093f ,-0.5685f ,0f ,-1.1636f ,-0.4622f ,0f ,-0.1469f ,0.033f ,0f ,-0.7506f ,-0.1415f ,0f ,-1.3005f ,-0.5967f ,0f ,-1.3216f ,-0.5334f ,0f ,-1.2107f ,-0.3581f ,0f ,-0.1504f ,0.05f ,0f ,-0.774f ,-0.0768f ,0f ,-1.3082f ,-0.564f ,0f ,-1.3082f ,-0.564f ,0f ,-0.1487f ,0.042f ,0f ,-0.1823f ,0.109f ,0f ,-0.7506f ,-0.1415f ,0f ,-1.1636f ,-0.4622f ,0f ,-0.774f ,-0.0768f ,0f ,-1.2107f ,-0.3581f ,0f ,-1.1455f ,-0.3322f ,0f ,-1.0581f ,-0.2783f ,0f ,-1.0047f ,-0.2827f ,0f ,-1.0047f ,-0.2827f ,0f ,-1.4823f ,-0.6158f ,0f ,-1.4248f ,-0.6028f ,0f ,-1.5049f ,-0.5622f ,0f ,-1.4248f ,-0.6028f ,0f ,-1.3715f ,-0.6082f ,0f ,-1.3715f ,-0.6082f ,0f ,-1.3853f ,-0.5666f ,0f ,-1.3853f ,-0.5666f ,0f ,-0.1469f ,0.033f ,0f ,-1.3005f ,-0.5967f ,0f ,-1.3216f ,-0.5334f ,0f ,-0.1504f ,0.05f ,0f ,-1.1455f ,-0.3322f ,0f ,-1.0581f ,-0.2783f ,0f ,-1.4823f ,-0.6158f ,0f ,-1.5049f ,-0.5622f ,0f ,-1.1594f ,-0.4717f ,0f ,-1.2139f ,-0.3495f ,0f ,-1.5488f ,-0.6128f ,0f ,-0.7467f ,-0.1522f ,0f ,-0.7779f ,-0.0661f ,0f ,-1.3892f ,-0.62f ,0f ,-1.4069f ,-0.5673f ,0f ,-0.1469f ,0.033f ,0f ,-1.3038f ,-0.5974f ,0f ,-1.325f ,-0.5347f ,0f ,-0.1504f ,0.05f ,0f ,-1.1455f ,-0.3322f ,0f ,-1.0581f ,-0.2783f ,0f ,-1.5163f ,-0.6283f ,0f ,-1.5379f ,-0.5794f ,0f ,-1.1594f ,-0.4717f ,0f ,-1.2139f ,-0.3495f ,0f ,-1.5488f ,-0.6128f ,0f ,-0.7467f ,-0.1522f ,0f ,-0.7779f ,-0.0661f ,0f ,-1.3892f ,-0.62f ,0f ,-1.4069f ,-0.5673f });
  }
}
}

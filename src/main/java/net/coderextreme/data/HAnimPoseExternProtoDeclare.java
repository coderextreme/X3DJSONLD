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
public class HAnimPoseExternProtoDeclare implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new HAnimPoseExternProtoDeclare().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/HAnimPoseExternProtoDeclare.new.java.x3d");
    model.toFileJSON("../data/HAnimPoseExternProtoDeclare.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("HAnimPoseExternProtoDeclare.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Define ExternProtoDeclare for an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("1 November 2025")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("14 December 2025")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Joe Williams")))
        .addMeta(new meta().setName(new SFString("contributor")).setContent(new SFString("Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures")))
        .addMeta(new meta().setName(new SFString("specificationSection")).setContent(new SFString("HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses")))
        .addMeta(new meta().setName(new SFString("specificationUrl")).setContent(new SFString("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclare.x3d")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("https://www.web3d.org/x3d/content/examples/license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setDEF(new SFString("ModelInfo")).setInfo(new MFString0().getArray()).setTitle(new SFString("HAnimPoseExternProtoDeclare")))
        .addChild(new Background().setSkyColor(new MFColor1().getArray()))
        .addChild(new NavigationInfo())
        .addChild(new ExternProtoDeclare().setName(new SFString("HAnimPose")).setAppinfo(new SFString("Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.")).setUrl(new MFString2().getArray())
          .addField(new field().setType("SFNode").setName(new SFString("parentHAnimHumanoid")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("HAnimHumanoid for this Pose to act upon")))
          .addField(new field().setType("SFString").setName(new SFString("name")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("name of this pose")))
          .addField(new field().setType("MFNode").setName(new SFString("children")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("joint values to apply to HAnimHumanoid"))
            .addComments(new CommentsBlock("initializating Joint nodes (if any) go here")))
          .addField(new field().setType("SFString").setName(new SFString("description")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("explanation of purpose")))
          .addField(new field().setType("SFBool").setName(new SFString("enabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("default value true")))
          .addField(new field().setType("SFInt32").setName(new SFString("loa")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("default is no loa")))
          .addField(new field().setType("SFTime").setName(new SFString("transitionDuration")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("how many seconds to achieve the pose")))
          .addField(new field().setType("SFNode").setName(new SFString("metadata")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("single Metadata* node")))
          .addField(new field().setType("SFBool").setName(new SFString("isActive")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("event indicating when pose transition is active")))
          .addField(new field().setType("SFBool").setName(new SFString("commencePose")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1")))
          .addField(new field().setType("SFBool").setName(new SFString("resetAllJoints")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("reset the skeleton to I pose with all joints zeroed")))
          .addField(new field().setType("SFFloat").setName(new SFString("set_fraction")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("allows transition to proceed incrementally from fraction [0..10")))
          .addField(new field().setType("SFTime").setName(new SFString("set_startTime")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("starts the animation clock")))
          .addField(new field().setType("SFBool").setName(new SFString("isLoaded")).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo(new SFString("possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE")))
          .addField(new field().setType("SFBool").setName(new SFString("traceEnabled")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("debug trace to Browser output console this is a local prototype field"))))
        .addChild(new Viewpoint().setDescription(new SFString("HAnimPoseExternProtoDeclare description")).setPosition(new float[] {0f ,1f ,4f }))
        .addChild(new Transform().setDEF(new SFString("DisplayHeader1")).setTranslation(new float[] {0f ,1.5f ,0f })
          .addChild(new Anchor().setDescription(new SFString("go to HAnimPoseExternProtoDeclareIndex page")).setParameter(new MFString3().getArray()).setUrl(new MFString4().getArray())
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString5().getArray())
                .setFontStyle(new FontStyle().setDEF(new SFString("HeaderFont")).setFamily(new MFString6().getArray()).setJustify(new MFString7().getArray()).setSize(0.15f ).setStyle(new SFString("BOLD"))))
              .setAppearance(new Appearance().setDEF(new SFString("PoseTextAppearance"))
                .setMaterial(new Material().setDiffuseColor(new float[] {0.1f ,0.3f ,0.5f }))))
            .addChild(new Shape()
              .setGeometry(new Box().setSize(new float[] {3.5f ,0.5f ,0.001f }))
              .setAppearance(new Appearance().setDEF(new SFString("TransparentAppearance"))
                .setMaterial(new Material().setTransparency(1f ))))))
        .addChild(new Transform().setDEF(new SFString("DisplayHeader2")).setTranslation(new float[] {0f ,0.5f ,0f })
          .addChild(new Anchor().setDescription(new SFString("go to HAnimPosePrototypeIndex page")).setParameter(new MFString8().getArray()).setUrl(new MFString9().getArray())
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString10().getArray())
                .setFontStyle(new FontStyle().setUSE(new SFString("HeaderFont"))))
              .setAppearance(new Appearance().setUSE(new SFString("PoseTextAppearance")))))
          .addChild(new Shape()
            .setGeometry(new Box().setSize(new float[] {2.6f ,0.5f ,0.001f }))
            .setAppearance(new Appearance().setUSE(new SFString("TransparentAppearance"))))));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Design to illustrate a potential HAnimPose node"});
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.6f ,0.6f ,0.8f });
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Filename.x3d#HAnimPose","https://some.address.org/Filename.x3d#HAnimPose"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExternProtoDeclareIndex.html"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Utility scene","HAnimPoseExternProtoDeclare.x3d"});
  }
}
private class MFString6 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"SANS"});
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFString8 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"target=_blank"});
  }
}
private class MFString9 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeIndex.html"});
  }
}
private class MFString10 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"This model supports","HAnimPosePrototype.x3d"});
  }
}
}

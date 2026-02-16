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
public class pp3 implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new pp3().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/pp3.new.java.x3d");
    model.toFileJSON("../data/pp3.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("pp3.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("translator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("5 May 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("23 Dec 2022")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("A process pipeline between three spheres (try typing on spheres and blue")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/x3d/pp3.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("Process"))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments(new CommentsBlock("left"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,1f ,0f }).setTransparency(0.5f )))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f ).setCrossSection(new MFVec2f0().getArray()).setSpine(new MFVec3f1().getArray())))
                .addComments(new CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("right"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0.7f ,1f }).setTransparency(0.5f )))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f ).setCrossSection(new MFVec2f2().getArray()).setSpine(new MFVec3f3().getArray())))
                .addChild(new Transform().setTranslation(new float[] {2f ,0f ,0f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDEF(new SFString("MaterialLightBlue")).setDiffuseColor(new float[] {1f ,1f ,1f })))
                    .setGeometry(new Text().setDEF(new SFString("RightString")).setString(new MFString4().getArray()))))
                .addChild(new StringSensor().setDEF(new SFString("RightSensor")).setEnabled(false))
                .addChild(new TouchSensor().setDescription(new SFString("touch to activate")).setDEF(new SFString("RightTouch"))))
              .addComments(new CommentsBlock("up"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0.7f ,1f }).setTransparency(0.5f )))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f ).setCrossSection(new MFVec2f5().getArray()).setSpine(new MFVec3f6().getArray())))
                .addChild(new Transform().setTranslation(new float[] {-0.5f ,2f ,0f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE(new SFString("MaterialLightBlue"))))
                    .setGeometry(new Text().setDEF(new SFString("UpString")).setString(new MFString7().getArray()))))
                .addChild(new StringSensor().setDEF(new SFString("UpSensor")).setEnabled(false))
                .addChild(new TouchSensor().setDescription(new SFString("touch to activate")).setDEF(new SFString("UpTouch"))))
              .addComments(new CommentsBlock("down"))
              .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f })
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f ,1f ,0f }).setTransparency(0.5f )))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f ).setCrossSection(new MFVec2f8().getArray()).setSpine(new MFVec3f9().getArray())))
                .addComments(new CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("center"))
              .addChild(new Transform()
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0.7f })))
                  .setGeometry(new Sphere()))
                .addChild(new Transform().setScale(new float[] {0.5f ,0.5f ,0.5f }).setTranslation(new float[] {-0.5f ,0f ,1f })
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE(new SFString("MaterialLightBlue"))))
                    .setGeometry(new Text().setDEF(new SFString("CenterString")))))
                .addChild(new StringSensor().setDEF(new SFString("CenterSensor")).setEnabled(false))
                .addChild(new TouchSensor().setDescription(new SFString("touch to activate")).setDEF(new SFString("CenterTouch")))))
            .addChild(new Script().setDEF(new SFString("RightSingleToMultiString"))
              .addField(new field().setType("SFString").setName(new SFString("set_rightstring")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("MFString").setName(new SFString("rightlines")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}"))
            .addChild(new Script().setDEF(new SFString("UpSingleToMultiString"))
              .addField(new field().setType("SFString").setName(new SFString("set_upstring")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("MFString").setName(new SFString("uplines")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}"))
            .addChild(new Script().setDEF(new SFString("CenterSingleToMultiString"))
              .addField(new field().setType("SFString").setName(new SFString("set_centerstring")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("MFString").setName(new SFString("centerlines")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}"))
            .addChild(new ROUTE().setFromField(new SFString("enteredText")).setFromNode(new SFString("CenterSensor")).setToField(new SFString("set_centerstring")).setToNode(new SFString("CenterSingleToMultiString")))
            .addChild(new ROUTE().setFromField(new SFString("centerlines")).setFromNode(new SFString("CenterSingleToMultiString")).setToField(new SFString("set_string")).setToNode(new SFString("CenterString")))
            .addChild(new ROUTE().setFromField(new SFString("isOver")).setFromNode(new SFString("CenterTouch")).setToField(new SFString("set_enabled")).setToNode(new SFString("CenterSensor")))
            .addChild(new ROUTE().setFromField(new SFString("enteredText")).setFromNode(new SFString("RightSensor")).setToField(new SFString("set_rightstring")).setToNode(new SFString("RightSingleToMultiString")))
            .addChild(new ROUTE().setFromField(new SFString("rightlines")).setFromNode(new SFString("RightSingleToMultiString")).setToField(new SFString("set_string")).setToNode(new SFString("RightString")))
            .addChild(new ROUTE().setFromField(new SFString("isOver")).setFromNode(new SFString("RightTouch")).setToField(new SFString("set_enabled")).setToNode(new SFString("RightSensor")))
            .addChild(new ROUTE().setFromField(new SFString("enteredText")).setFromNode(new SFString("UpSensor")).setToField(new SFString("set_upstring")).setToNode(new SFString("UpSingleToMultiString")))
            .addChild(new ROUTE().setFromField(new SFString("uplines")).setFromNode(new SFString("UpSingleToMultiString")).setToField(new SFString("set_string")).setToNode(new SFString("UpString")))
            .addChild(new ROUTE().setFromField(new SFString("isOver")).setFromNode(new SFString("UpTouch")).setToField(new SFString("set_enabled")).setToNode(new SFString("UpSensor")))))
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription(new SFString("Process pipes")).setOrientation(new float[] {1f ,0f ,0f ,-0.4f }).setPosition(new float[] {0f ,5f ,12f }))
        .addChild(new Transform().setTranslation(new float[] {0f ,-2.5f ,0f })
          .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("Process"))))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("Process"))))
        .addChild(new Transform().setTranslation(new float[] {0f ,2.5f ,0f })
          .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("Process")))));
    return X3D0;
    }
private class MFVec2f0 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.5f ,0f ,0f ,-2f ,0f ,0f ,-1.5f ,0f ,0f });
  }
}
private class MFVec2f2 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.5f ,0f ,0f ,2f ,0f ,0f ,2.5f ,0f ,0f });
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r"});
  }
}
private class MFVec2f5 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f6 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,1.5f ,0f ,0f ,2f ,0f ,0f ,2.5f ,0f });
  }
}
private class MFString7 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"u"});
  }
}
private class MFVec2f8 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-2.5f ,0f ,0f ,-2f ,0f ,0f ,-1.5f ,0f });
  }
}
}

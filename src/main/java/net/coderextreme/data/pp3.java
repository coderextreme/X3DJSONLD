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
public class pp3 {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new pp3().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/pp3.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("pp3.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("translator").setContent("John Carlson"))
        .addMeta(new meta().setName("created").setContent("5 May 2015"))
        .addMeta(new meta().setName("modified").setContent("23 Dec 2022"))
        .addMeta(new meta().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new meta().setName("generator").setContent("manual")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Process")
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addComments("left")
              .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,1f,0f}).setTransparency(0.5f)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f).setCrossSection(new MFVec2f0().getArray()).setSpine(new MFVec3f1().getArray())))
                .addComments("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>"))
              .addComments("right")
              .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f,0.7f,1f}).setTransparency(0.5f)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f).setCrossSection(new MFVec2f2().getArray()).setSpine(new MFVec3f3().getArray())))
                .addChild(new Transform().setTranslation(new float[] {2f,0f,0f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDEF("MaterialLightBlue").setDiffuseColor(new float[] {1f,1f,1f})))
                    .setGeometry(new Text().setDEF("RightString").setString(new MFString4().getArray()))))
                .addChild(new StringSensor().setDEF("RightSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments("up")
              .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0f,0.7f,1f}).setTransparency(0.5f)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f).setCrossSection(new MFVec2f5().getArray()).setSpine(new MFVec3f6().getArray())))
                .addChild(new Transform().setTranslation(new float[] {-0.5f,2f,0f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("UpString").setString(new MFString7().getArray()))))
                .addChild(new StringSensor().setDEF("UpSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments("down")
              .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {0.7f,1f,0f}).setTransparency(0.5f)))
                  .setGeometry(new Extrusion().setCreaseAngle(0.785f).setCrossSection(new MFVec2f8().getArray()).setSpine(new MFVec3f9().getArray())))
                .addComments("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>"))
              .addComments("center")
              .addChild(new Transform()
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0.7f})))
                  .setGeometry(new Sphere()))
                .addChild(new Transform().setScale(new float[] {0.5f,0.5f,0.5f}).setTranslation(new float[] {-0.5f,0f,1f})
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("MaterialLightBlue")))
                    .setGeometry(new Text().setDEF("CenterString"))))
                .addChild(new StringSensor().setDEF("CenterSensor").setEnabled(false))
                .addChild(new TouchSensor().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new Script().setDEF("RightSingleToMultiString")
              .addField(new field("RightSingleToMultiString").setType("SFString").setName("set_rightstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field("RightSingleToMultiString").setType("MFString").setName("rightlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}"))
            .addChild(new Script().setDEF("UpSingleToMultiString")
              .addField(new field("UpSingleToMultiString").setType("SFString").setName("set_upstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field("UpSingleToMultiString").setType("MFString").setName("uplines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}"))
            .addChild(new Script().setDEF("CenterSingleToMultiString")
              .addField(new field("CenterSingleToMultiString").setType("SFString").setName("set_centerstring").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field("CenterSingleToMultiString").setType("MFString").setName("centerlines").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new ROUTE().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new ROUTE().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new ROUTE().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new ROUTE().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new ROUTE().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new NavigationInfo())
        .addChild(new Viewpoint().setDescription("Process pipes").setOrientation(new float[] {1f,0f,0f,-0.4f}).setPosition(new float[] {0f,5f,12f}))
        .addChild(new Transform().setTranslation(new float[] {0f,-2.5f,0f})
          .addChild(ProtoInstance0 = new ProtoInstance().setName("Process")))
        .addChild(new Transform()
          .addChild(ProtoInstance1 = new ProtoInstance().setName("Process")))
        .addChild(new Transform().setTranslation(new float[] {0f,2.5f,0f})
          .addChild(ProtoInstance2 = new ProtoInstance().setName("Process"))))      ;
    return X3D0;
    }
protected class MFVec2f0 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f1 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-2.5f,0f,0f,-1.5f,0f,0f});
  }
}
protected class MFVec2f2 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {1.5f,0f,0f,2.5f,0f,0f});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"r"});
  }
}
protected class MFVec2f5 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f6 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,1.5f,0f,0f,2.5f,0f});
  }
}
protected class MFString7 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"u"});
  }
}
protected class MFVec2f8 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f9 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-2.5f,0f,0f,-1.5f,0f});
  }
}
}

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
public class pp3 {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new pp3().initialize().toFileJSON("../data/pp3.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("pp3.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("translator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("created").setContent("5 May 2015"))
        .addMeta(new metaObject().setName("modified").setContent("05 May 2017"))
        .addMeta(new metaObject().setName("description").setContent("A process pipeline between three spheres (try typing on spheres and blue"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/x3d/pp3.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("manual")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("Process")
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addComments(new CommentsBlock("left"))
              .addChild(new TransformObject().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,1f,0f}).setTransparency(0.5f)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new MFVec2f0().getArray())).setSpine(new MFVec3fObject(new MFVec3f1().getArray()))))
                .addComments(new CommentsBlock("<Transform translation=\"-2.5 0 0\"> <Shape> <Text DEF=\"LeftString\" string='\"l\"'/> </Shape> </Transform> <StringSensor DEF=\"LeftSensor\" enabled=\"false\"/> <TouchSensor DEF=\"LeftTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("right"))
              .addChild(new TransformObject().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0.7f,1f}).setTransparency(0.5f)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new MFVec2f2().getArray())).setSpine(new MFVec3fObject(new MFVec3f3().getArray()))))
                .addChild(new TransformObject().setTranslation(new float[] {2f,0f,0f})
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDEF("MaterialLightBlue").setDiffuseColor(new float[] {1f,1f,1f})))
                    .setGeometry(new TextObject().setDEF("RightString").setString(new MFStringObject(new MFString4().getArray())))))
                .addChild(new StringSensorObject().setDEF("RightSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("RightTouch")))
              .addComments(new CommentsBlock("up"))
              .addChild(new TransformObject().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0.7f,1f}).setTransparency(0.5f)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new MFVec2f5().getArray())).setSpine(new MFVec3fObject(new MFVec3f6().getArray()))))
                .addChild(new TransformObject().setTranslation(new float[] {-0.5f,2f,0f})
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                    .setGeometry(new TextObject().setDEF("UpString").setString(new MFStringObject(new MFString7().getArray())))))
                .addChild(new StringSensorObject().setDEF("UpSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("UpTouch")))
              .addComments(new CommentsBlock("down"))
              .addChild(new TransformObject().setScale(new float[] {0.5f,0.5f,0.5f})
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,1f,0f}).setTransparency(0.5f)))
                  .setGeometry(new ExtrusionObject().setCreaseAngle(0.785f).setCrossSection(new MFVec2fObject(new MFVec2f8().getArray())).setSpine(new MFVec3fObject(new MFVec3f9().getArray()))))
                .addComments(new CommentsBlock("<Transform translation=\"-0.5 -2.5 0\"> <Shape> <Text DEF=\"DownString\" string='\"d\"'/> </Shape> </Transform> <StringSensor DEF=\"DownSensor\" enabled=\"false\"/> <TouchSensor description='touch to activate' DEF=\"DownTouch\" enabled=\"true\"/>")))
              .addComments(new CommentsBlock("center"))
              .addChild(new TransformObject()
                .addChild(new ShapeObject()
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0.7f})))
                  .setGeometry(new SphereObject()))
                .addChild(new TransformObject().setScale(new float[] {0.5f,0.5f,0.5f}).setTranslation(new float[] {-0.5f,0f,1f})
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("MaterialLightBlue")))
                    .setGeometry(new TextObject().setDEF("CenterString"))))
                .addChild(new StringSensorObject().setDEF("CenterSensor").setEnabled(false))
                .addChild(new TouchSensorObject().setDescription("touch to activate").setDEF("CenterTouch"))))
            .addChild(new ScriptObject().setDEF("RightSingleToMultiString")
              .addField(new fieldObject().setType("SFString").setName("set_rightstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFString").setName("rightlines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	rightlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_rightstring(rightstr) {\n"+
"	rightlines = new MFString(rightstr);\n"+
"}\n"+
""))
            .addChild(new ScriptObject().setDEF("UpSingleToMultiString")
              .addField(new fieldObject().setType("SFString").setName("set_upstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFString").setName("uplines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	uplines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_upstring(upstr) {\n"+
"	uplines = new MFString(upstr);\n"+
"}\n"+
""))
            .addChild(new ScriptObject().setDEF("CenterSingleToMultiString")
              .addField(new fieldObject().setType("SFString").setName("set_centerstring").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFString").setName("centerlines").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"	centerlines = new MFString(\"\");\n"+
"}\n"+
"\n"+
"function set_centerstring(centerstr) {\n"+
"	centerlines = new MFString(centerstr);\n"+
"}\n"+
""))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("CenterSensor").setToField("set_centerstring").setToNode("CenterSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("centerlines").setFromNode("CenterSingleToMultiString").setToField("set_string").setToNode("CenterString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("CenterTouch").setToField("set_enabled").setToNode("CenterSensor"))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("RightSensor").setToField("set_rightstring").setToNode("RightSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("rightlines").setFromNode("RightSingleToMultiString").setToField("set_string").setToNode("RightString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("RightTouch").setToField("set_enabled").setToNode("RightSensor"))
            .addChild(new ROUTEObject().setFromField("enteredText").setFromNode("UpSensor").setToField("set_upstring").setToNode("UpSingleToMultiString"))
            .addChild(new ROUTEObject().setFromField("uplines").setFromNode("UpSingleToMultiString").setToField("set_string").setToNode("UpString"))
            .addChild(new ROUTEObject().setFromField("isOver").setFromNode("UpTouch").setToField("set_enabled").setToNode("UpSensor"))))
        .addChild(new NavigationInfoObject())
        .addChild(new ViewpointObject().setDescription("Process pipes").setOrientation(new float[] {1f,0f,0f,-0.4f}).setPosition(new float[] {0f,5f,12f}))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2.5f,0f})
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject()
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("Process")))
        .addChild(new TransformObject().setTranslation(new float[] {0f,2.5f,0f})
          .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("Process"))))      ;
    return X3D0;
    }
protected class MFVec2f0 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f1 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-2.5f,0f,0f,-1.5f,0f,0f});
  }
}
protected class MFVec2f2 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f3 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1.5f,0f,0f,2.5f,0f,0f});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"r".replaceAll("\"", "\\\"")});
  }
}
protected class MFVec2f5 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,1.5f,0f,0f,2.5f,0f});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"u".replaceAll("\"", "\\\"")});
  }
}
protected class MFVec2f8 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,-2.5f,0f,0f,-1.5f,0f});
  }
}
}

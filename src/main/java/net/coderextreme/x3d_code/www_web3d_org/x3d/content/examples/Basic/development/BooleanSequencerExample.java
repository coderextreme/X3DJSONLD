package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.development;
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
public class BooleanSequencerExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new BooleanSequencerExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/BooleanSequencerExample.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("BooleanSequencerExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This example shows how to use the BooleanSequencer prototype in an animated scenario."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman, Estuko Lippi, Jeff Weekley, Jane Wu"))
        .addMeta(new metaObject().setName("created").setContent("10 August 2001"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
        .addMeta(new metaObject().setName("subject").setContent("boolean sequencer"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/BooleanSequencerExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("BooleanSequencerExample.x3d"))
        .addChild(new GroupObject().setDEF("HUDGroup")
          .addChild(new ProximitySensorObject().setDEF("WhereSensor").setSize(new float[] {1000f,1000f,1000f}))
          .addChild(new TransformObject().setDEF("BillboardWhereTransform")
            .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,-0.03f}).setTranslation(new float[] {0f,0f,-12f})
              .addChild(new BillboardObject()
                .addChild(new TransformObject().setDEF("BillboardPlaneTransform")
                  .addChild(new TouchSensorObject().setDEF("Toucher").setDescription("Click text to start clock and run multiple BooleanSequencers"))
                  .addChild(new ShapeObject()
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,1f})))
                    .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                      .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString1().getArray())))))))))
          .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_translation").setToNode("BillboardWhereTransform"))
          .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_rotation").setToNode("BillboardWhereTransform")))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10d))
        .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("Toucher").setToField("set_startTime").setToNode("Clock"))
        .addChild(new ViewpointObject().setDEF("FrontUpViewpoint").setDescription("View 0, Front Up"))
        .addChild(new GroupObject().setDEF("AnimatedView1")
          .addChild(new ViewpointObject().setDEF("LeftViewpoint").setDescription("View 1, Left").setOrientation(new float[] {0f,1f,0f,-1.57f}).setPosition(new float[] {-10f,0f,0f}))
          .addChild(new BooleanSequencerObject().setDEF("LeftViewBinder").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFBoolObject(new MFBool3().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("LeftViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("LeftViewBinder").setToField("set_bind").setToNode("LeftViewpoint")))
        .addChild(new GroupObject().setDEF("AnimatedView2")
          .addChild(new ViewpointObject().setDEF("BackViewpoint").setDescription("View 2, Back").setOrientation(new float[] {0f,1f,0f,-3.14f}).setPosition(new float[] {0f,0f,-10f}))
          .addChild(new BooleanSequencerObject().setDEF("BackViewBinder").setKey(new MFFloatObject(new MFFloat4().getArray())).setKeyValue(new MFBoolObject(new MFBool5().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("BackViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BackViewBinder").setToField("set_bind").setToNode("BackViewpoint")))
        .addChild(new GroupObject().setDEF("AnimatedView3")
          .addChild(new ViewpointObject().setDEF("RightViewpoint").setDescription("View 3, Right").setOrientation(new float[] {0f,1f,0f,1.57f}).setPosition(new float[] {10f,0f,0f}))
          .addChild(new BooleanSequencerObject().setDEF("RightViewBinder").setKey(new MFFloatObject(new MFFloat6().getArray())).setKeyValue(new MFBoolObject(new MFBool7().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("RightViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("RightViewBinder").setToField("set_bind").setToNode("RightViewpoint")))
        .addChild(new GroupObject().setDEF("AnimatedView4")
          .addChild(new ViewpointObject().setDEF("TopViewpoint").setDescription("View 4, Top").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,10f,0f}))
          .addChild(new BooleanSequencerObject().setDEF("TopViewBinder").setKey(new MFFloatObject(new MFFloat8().getArray())).setKeyValue(new MFBoolObject(new MFBool9().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TopViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("TopViewBinder").setToField("set_bind").setToNode("TopViewpoint")))
        .addChild(new GroupObject().setDEF("AnimatedView5")
          .addChild(new ViewpointObject().setDEF("FrontDownViewpoint").setDescription("View 5, Front Down").setOrientation(new float[] {1f,0f,0f,-3.14f}).setPosition(new float[] {0f,0f,-10f}))
          .addChild(new BooleanSequencerObject().setDEF("FrontDownViewBinder").setKey(new MFFloatObject(new MFFloat10().getArray())).setKeyValue(new MFBoolObject(new MFBool11().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("FrontDownViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FrontDownViewBinder").setToField("set_bind").setToNode("FrontDownViewpoint")))
        .addChild(new GroupObject().setDEF("AnimatedView6")
          .addChild(new ViewpointObject().setDEF("BottomViewpoint").setDescription("View 6, Bottom").setOrientation(new float[] {1f,0f,0f,1.57f}).setPosition(new float[] {0f,-10f,0f}))
          .addChild(new BooleanSequencerObject().setDEF("BottomViewBinder").setKey(new MFFloatObject(new MFFloat12().getArray())).setKeyValue(new MFBoolObject(new MFBool13().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("BottomViewBinder"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BottomViewBinder").setToField("set_bind").setToNode("BottomViewpoint")))
        .addChild(new SwitchObject().setDEF("DebugSwitch").setWhichChoice(0)
          .addChild(new GroupObject()
            .addChild(new ScriptObject().setDEF("Debug")
              .addField(new fieldObject().setType("SFFloat").setName("setFraction").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setFrontUpViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setLeftViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setBackViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setRightViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setTopViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setFrontDownViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setBottomViewBind").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setFrontUpBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setLeftBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setBackBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setRightBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setTopBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setFrontDownBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("setBottomBSOutput").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function setFraction(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('fraction =' + value);\n"+
"}\n"+
"\n"+
"function setFrontUpViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('FrontUpView bind:' + value);\n"+
"}\n"+
"\n"+
"function setLeftViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('LeftView bind:' + value);\n"+
"}\n"+
"\n"+
"function setBackViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BackView bind:' + value);\n"+
"}\n"+
"\n"+
"function setRightViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('RightView bind:' + value);\n"+
"}\n"+
"\n"+
"function setTopViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('TopView bind:' + value);\n"+
"}\n"+
"\n"+
"function setFrontDownViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('FrontDownView bind:' + value);\n"+
"}\n"+
"\n"+
"function setBottomViewBind(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BottomView bind:' + value);\n"+
"}\n"+
"\n"+
"function setFrontUpBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for FrontUpViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setLeftBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for LeftViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setBackBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for BackViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setRightBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for RightViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setTopBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for TopViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setFrontDownBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for FrontDownViewpoint:' + value);\n"+
"}\n"+
"\n"+
"function setBottomBSOutput(value, timeStamp)\n"+
"{\n"+
"	Browser.print ('BooleanSequencer output for BottomViewpoint:' + value);\n"+
"}"))
            .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("setFraction").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("FrontUpViewpoint").setToField("setFrontUpViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("LeftViewpoint").setToField("setLeftViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("BackViewpoint").setToField("setBackViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("RightViewpoint").setToField("setRightViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("TopViewpoint").setToField("setTopViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("FrontDownViewpoint").setToField("setFrontDownViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("isBound").setFromNode("BottomViewpoint").setToField("setBottomViewBind").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("LeftViewBinder").setToField("setLeftBSOutput").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BackViewBinder").setToField("setBackBSOutput").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("RightViewBinder").setToField("setRightBSOutput").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("TopViewBinder").setToField("setTopBSOutput").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("FrontDownViewBinder").setToField("setFrontDownBSOutput").setToNode("Debug"))
            .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("BottomViewBinder").setToField("setBottomBSOutput").setToNode("Debug"))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0f})))
            .setGeometry(new BoxObject().setSize(new float[] {2f,0.1f,0.35f})))
          .addChild(new TransformObject().setTranslation(new float[] {-1f,0f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))
              .setGeometry(new SphereObject().setRadius(0.2f))))
          .addChild(new TransformObject().setTranslation(new float[] {1f,0f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f})))
              .setGeometry(new SphereObject().setRadius(0.2f)))))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f})))
            .setGeometry(new ConeObject()))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Click text to start clock, run","multiple BooleanSequencers","","","","See Viewpoint description","for bound Viewpoint number"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.25f});
  }
}
protected class MFBool3 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {false,true,false});
  }
}
protected class MFFloat4 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.375f,0.475f});
  }
}
protected class MFBool5 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {false,true,false});
  }
}
protected class MFFloat6 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,0.6f});
  }
}
protected class MFBool7 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {false,true,false});
  }
}
protected class MFFloat8 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.625f,0.725f});
  }
}
protected class MFBool9 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {true,false});
  }
}
protected class MFFloat10 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.75f,0.85f});
  }
}
protected class MFBool11 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {true,false});
  }
}
protected class MFFloat12 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.875f,0.975f});
  }
}
protected class MFBool13 {
  protected MFBoolObject getArray() {
    return new MFBoolObject(new boolean[] {true,false});
  }
}
}

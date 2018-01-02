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
public class BindingOperations {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new BindingOperations().initialize().toFileJSON("../data/BindingOperations.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("BindingOperations.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("5 January 2008"))
        .addMeta(new metaObject().setName("modified").setContent("22 July 2013"))
        .addMeta(new metaObject().setName("reference").setContent("BindingOperations.console.txt"))
        .addMeta(new metaObject().setName("reference").setContent("BindingStackOperations.png"))
        .addMeta(new metaObject().setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007"))
        .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setDEF("View1").setCenterOfRotation(new float[] {-6f,0f,0f}).setDescription("Viewpoint 1").setPosition(new float[] {-6f,0f,5f}))
        .addChild(new ViewpointObject().setDEF("View2").setCenterOfRotation(new float[] {-2f,0f,0f}).setDescription("Viewpoint 2").setPosition(new float[] {-2f,0f,5f}))
        .addChild(new ViewpointObject().setDEF("View3").setCenterOfRotation(new float[] {2f,0f,0f}).setDescription("Viewpoint 3").setPosition(new float[] {2f,0f,5f}))
        .addChild(new ViewpointObject().setDEF("View4").setCenterOfRotation(new float[] {6f,0f,0f}).setDescription("Viewpoint 4").setPosition(new float[] {6f,0f,5f}))
        .addComments(new CommentsBlock("Script initialization ought to first bind view5 below."))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setDEF("Text1").setTranslation(new float[] {-6f,0f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString0().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("CenterJustify").setJustify(new MFStringObject(new MFString1().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f})))))
          .addChild(new TransformObject().setDEF("Text2").setTranslation(new float[] {-2f,0f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,0f})))))
          .addChild(new TransformObject().setDEF("Text3").setTranslation(new float[] {2f,0f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0f,1f})))))
          .addChild(new TransformObject().setDEF("Text4").setTranslation(new float[] {6f,0f,0f})
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
                .setFontStyle(new FontStyleObject().setUSE("CenterJustify")))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject())))))
        .addComments(new CommentsBlock("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9."))
        .addComments(new CommentsBlock("It does not need to be studied in this chapter."))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-3f,8f})
          .addComments(new CommentsBlock("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script."))
          .addChild(new ViewpointObject().setDEF("ClickToAnimateView").setDescription("Select animation sequence").setPosition(new float[] {0f,0f,7f}))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString6().getArray()))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.4f,0f}))))
          .addChild(new ShapeObject()
            .setGeometry(new BoxObject().setSize(new float[] {7f,1f,0.02f}))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(1f))))
          .addChild(new TouchSensorObject().setDEF("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
          .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(10d))
          .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TextTouchSensor").setToField("set_startTime").setToNode("Clock"))
          .addChild(new IntegerSequencerObject().setDEF("TimingSequencer").setKey(new MFFloatObject(new MFFloat7().getArray())).setKeyValue(new MFInt32Object(new MFInt328().getArray())))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TimingSequencer"))
          .addChild(new ScriptObject().setDEF("BindingSequencerEngine")
            .addField(new fieldObject().setType("SFInt32").setName("set_timeEvent").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("bindView1").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("bindView2").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("bindView3").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("bindView4").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("bindView5").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("view1Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("view2Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("view3Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("view4Bound").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFInt32").setName("priorInputvalue").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("-1"))
            .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"    bindView5 = true;\n"+
"    Browser.print ('Timing script initialized and ready for activation');\n"+
"}\n"+
"function set_timeEvent (inputValue)\n"+
"{\n"+
"    if (inputValue == priorInputvalue)\n"+
"    {\n"+
"        return; // ignore repeated inputs\n"+
"    }\n"+
"    // new value provided\n"+
"    priorInputvalue = inputValue;\n"+
"    // Browser.print ('\\ntimeEvent inputValue=' + inputValue);\n"+
"        \n"+
"    // mimics user execution of Figure 4.1 steps t_0 through t_8\n"+
"    if (inputValue == 0)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t0');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 1)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t1');\n"+
"        bindView2 = true;\n"+
"    }\n"+
"    else if (inputValue == 2)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t2');\n"+
"        bindView3 = true;\n"+
"    }\n"+
"    else if (inputValue == 3)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t3');\n"+
"        bindView3 = false;\n"+
"    }\n"+
"    else if (inputValue == 4)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t4');\n"+
"        bindView1 = true;\n"+
"    }\n"+
"    else if (inputValue == 5)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t5');\n"+
"        bindView2 = false;\n"+
"    }\n"+
"    else if (inputValue == 6)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t6');\n"+
"        bindView1 = false;\n"+
"    }\n"+
"    else if (inputValue == 7)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t7');\n"+
"        bindView4 = true;\n"+
"\n"+
"    }\n"+
"    else if (inputValue == 8)\n"+
"    {\n"+
"        Browser.print ('\\n===========\\n time t8');\n"+
"        Browser.print (', no action, all done');\n"+
"        Browser.print ('\\n\\n');\n"+
"    }\n"+
"}\n"+
"\n"+
"function view1Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view1Bound ' + (inputValue));\n"+
"    if (priorInputvalue == -1) Browser.print ('\\n');\n"+
"}\n"+
"function view2Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view2Bound ' + (inputValue));\n"+
"}\n"+
"function view3Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view3Bound ' + (inputValue));\n"+
"}\n"+
"function view4Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view4Bound ' + (inputValue));\n"+
"}\n"+
"function view5Bound (inputValue)\n"+
"{\n"+
"    Browser.print (', view5Bound ' + (inputValue));\n"+
"}\n"+
""))
          .addComments(new CommentsBlock("drive Script with TimeSensor clock"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("TimingSequencer").setToField("set_timeEvent").setToNode("BindingSequencerEngine"))
          .addComments(new CommentsBlock("Script will bind and unbind Viewpoint nodes"))
          .addChild(new ROUTEObject().setFromField("bindView1").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View1"))
          .addChild(new ROUTEObject().setFromField("bindView2").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View2"))
          .addChild(new ROUTEObject().setFromField("bindView3").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View3"))
          .addChild(new ROUTEObject().setFromField("bindView4").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View4"))
          .addChild(new ROUTEObject().setFromField("bindView5").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("ClickToAnimateView"))
          .addComments(new CommentsBlock("Viewpoint nodes report bind and unbind events"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View1").setToField("view1Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View2").setToField("view2Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View3").setToField("view3Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTEObject().setFromField("isBound").setFromNode("View4").setToField("view4Bound").setToNode("BindingSequencerEngine"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"View".replaceAll("\"", "\\\""),"# 1".replaceAll("\"", "\\\"")});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"View".replaceAll("\"", "\\\""),"# 2".replaceAll("\"", "\\\"")});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"View".replaceAll("\"", "\\\""),"# 3".replaceAll("\"", "\\\"")});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"View".replaceAll("\"", "\\\""),"# 4".replaceAll("\"", "\\\"")});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Click here to animate".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"BEGIN".replaceAll("\"", "\\\"")});
  }
}
protected class MFFloat7 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
protected class MFInt328 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,4,5,6,7,8,10});
  }
}
}

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
public class BindingOperations {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new BindingOperations().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/BindingOperations.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("BindingOperations.x3d"))
        .addMeta(new meta().setName("description").setContent("Illustrate Viewpoint binding operations (in gory detail!) as described in Chapter 4 concepts. Scene design: a TimeSensor clock drives and IntegerSequencer for each t0/t1/etc. event, and a customized Script node sends bind/unbind events to the correct Viewpoint. Display the browser console to see occurrence of each event."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("created").setContent("5 January 2008"))
        .addMeta(new meta().setName("modified").setContent("22 July 2013"))
        .addMeta(new meta().setName("reference").setContent("BindingOperations.console.txt"))
        .addMeta(new meta().setName("reference").setContent("BindingStackOperations.png"))
        .addMeta(new meta().setName("reference").setContent("X3D for Web Authors, Section 2.5.1, Figure 4.1"))
        .addMeta(new meta().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new meta().setName("rights").setContent("Copyright Don Brutzman and Leonard Daly 2007"))
        .addMeta(new meta().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter04ViewingNavigation/BindingOperations.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new Viewpoint().setDEF("View1").setCenterOfRotation(new float[] {-6f,0f,0f}).setDescription("Viewpoint 1").setPosition(new float[] {-6f,0f,5f}))
        .addChild(new Viewpoint().setDEF("View2").setCenterOfRotation(new float[] {-2f,0f,0f}).setDescription("Viewpoint 2").setPosition(new float[] {-2f,0f,5f}))
        .addChild(new Viewpoint().setDEF("View3").setCenterOfRotation(new float[] {2f,0f,0f}).setDescription("Viewpoint 3").setPosition(new float[] {2f,0f,5f}))
        .addChild(new Viewpoint().setDEF("View4").setCenterOfRotation(new float[] {6f,0f,0f}).setDescription("Viewpoint 4").setPosition(new float[] {6f,0f,5f}))
        .addComments("Script initialization ought to first bind view5 below.")
        .addChild(new Group()
          .addChild(new Transform().setDEF("Text1").setTranslation(new float[] {-6f,0f,0f})
            .addChild(new Shape("Text1")
              .setGeometry(new Text().setString(new MFString0().getArray())
                .setFontStyle(new FontStyle().setDEF("CenterJustify").setJustify(new MFString1().getArray())))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f})))))
          .addChild(new Transform().setDEF("Text2").setTranslation(new float[] {-2f,0f,0f})
            .addChild(new Shape("Text2")
              .setGeometry(new Text().setString(new MFString2().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f})))))
          .addChild(new Transform().setDEF("Text3").setTranslation(new float[] {2f,0f,0f})
            .addChild(new Shape("Text3")
              .setGeometry(new Text().setString(new MFString3().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f})))))
          .addChild(new Transform().setDEF("Text4").setTranslation(new float[] {6f,0f,0f})
            .addChild(new Shape("Text4")
              .setGeometry(new Text().setString(new MFString4().getArray())
                .setFontStyle(new FontStyle().setUSE("CenterJustify")))
              .setAppearance(new Appearance()
                .setMaterial(new Material())))))
        .addComments("The following advanced animation sequence uses nodes covered in Chapters 7, 8 and 9.")
        .addComments("It does not need to be studied in this chapter.")
        .addChild(new Transform().setTranslation(new float[] {0f,-3f,8f})
          .addComments("notice this next Viewpoint has been transformed with the text, so its position is relative. it is called view5 in the Script.")
          .addChild(new Viewpoint().setDEF("ClickToAnimateView").setDescription("Select animation sequence").setPosition(new float[] {0f,0f,7f}))
          .addChild(new Shape()
            .setGeometry(new Text().setString(new MFString5().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString6().getArray())))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.8f,0.4f,0f}))))
          .addChild(new Shape()
            .setGeometry(new Box().setSize(new float[] {7f,1f,0.02f}))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setTransparency(1f))))
          .addChild(new TouchSensor().setDEF("TextTouchSensor").setDescription("Click to begin animating viewpoint selections"))
          .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(10d))
          .addChild(new ROUTE().setFromField("touchTime").setFromNode("TextTouchSensor").setToField("set_startTime").setToNode("Clock"))
          .addChild(new IntegerSequencer().setDEF("TimingSequencer").setKey(new MFFloat7().getArray()).setKeyValue(new MFInt328().getArray()))
          .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("TimingSequencer"))
          .addChild(new Script().setDEF("BindingSequencerEngine")
            .addField(new field("BindingSequencerEngine").setType("SFInt32").setName("set_timeEvent").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("bindView1").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("bindView2").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("bindView3").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("bindView4").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("bindView5").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("view1Bound").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("view2Bound").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("view3Bound").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFBool").setName("view4Bound").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field("BindingSequencerEngine").setType("SFInt32").setName("priorInputvalue").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("-1"))
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
"\n"+
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
"}"))
          .addComments("drive Script with TimeSensor clock")
          .addChild(new ROUTE().setFromField("value_changed").setFromNode("TimingSequencer").setToField("set_timeEvent").setToNode("BindingSequencerEngine"))
          .addComments("Script will bind and unbind Viewpoint nodes")
          .addChild(new ROUTE().setFromField("bindView1").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View1"))
          .addChild(new ROUTE().setFromField("bindView2").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View2"))
          .addChild(new ROUTE().setFromField("bindView3").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View3"))
          .addChild(new ROUTE().setFromField("bindView4").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("View4"))
          .addChild(new ROUTE().setFromField("bindView5").setFromNode("BindingSequencerEngine").setToField("set_bind").setToNode("ClickToAnimateView"))
          .addComments("Viewpoint nodes report bind and unbind events")
          .addChild(new ROUTE().setFromField("isBound").setFromNode("View1").setToField("view1Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTE().setFromField("isBound").setFromNode("View2").setToField("view2Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTE().setFromField("isBound").setFromNode("View3").setToField("view3Bound").setToNode("BindingSequencerEngine"))
          .addChild(new ROUTE().setFromField("isBound").setFromNode("View4").setToField("view4Bound").setToNode("BindingSequencerEngine"))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"View","# 1"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"View","# 2"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"View","# 3"});
  }
}
protected class MFString4 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"View","# 4"});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Click here to animate"});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","BEGIN"});
  }
}
protected class MFFloat7 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f,0.8f,1f});
  }
}
protected class MFInt328 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,4,5,6,7,8,10});
  }
}
}

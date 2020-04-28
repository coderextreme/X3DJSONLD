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
public class IntegerSequencerExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new IntegerSequencerExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/IntegerSequencerExample.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
ProtoInstanceObject ProtoInstance6 = null;
ProtoInstanceObject ProtoInstance7 = null;
ProtoInstanceObject ProtoInstance8 = null;
ProtoInstanceObject ProtoInstance9 = null;
ProtoInstanceObject ProtoInstance10 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("IntegerSequencerExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This example shows how to use the IntegerSequencer prototype in an animated scenario."))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("13 April 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#ScalarInterpolator"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
        .addMeta(new metaObject().setName("subject").setContent("integer sequencer"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/IntegerSequencerExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("IntegerSequencerExample.x3d"))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(12d).setEnabled(false).setLoop(true))
        .addChild(new IntegerSequencerObject().setDEF("IntegerSequencerInstance").setKey(new MFFloatObject(new MFFloat2().getArray())).setKeyValue(new MFInt32Object(new MFInt323().getArray())))
        .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("IntegerSequencerInstance"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,2f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString4().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString5().getArray()))))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.4f,0.6f,0.8f}))))
          .addChild(new TouchSensorObject().setDEF("TouchToStart").setDescription("Touch To Start"))
          .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TouchToStart").setToField("set_startTime").setToNode("Clock"))
          .addChild(new ROUTEObject().setFromField("isOver").setFromNode("TouchToStart").setToField("enabled").setToNode("Clock"))
          .addComments(new CommentsBlock("background box to simplify touching"))
          .addChild(new TransformObject().setTranslation(new float[] {0f,0f,-0.5f})
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(new float[] {11f,2f,0.1f}))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.2f,0.2f}).setTransparency(0.95f))))))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,-2.5f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString6().getArray()))
              .setFontStyle(new FontStyleObject().setDEF("PreviousNextFont").setJustify(new MFStringObject(new MFString7().getArray())).setSize(0.7f)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.6f,0.4f}))))
          .addChild(new TouchSensorObject().setDEF("TouchPrevious").setDescription("touch for previous"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TouchPrevious").setToField("previous").setToNode("IntegerSequencerInstance")))
        .addChild(new TransformObject().setTranslation(new float[] {3f,-2.5f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString8().getArray()))
              .setFontStyle(new FontStyleObject().setUSE("PreviousNextFont")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.8f,0.6f,0.4f}))))
          .addChild(new TouchSensorObject().setDEF("TouchNext").setDescription("touch for next"))
          .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TouchNext").setToField("next").setToNode("IntegerSequencerInstance")))
        .addComments(new CommentsBlock("Interesting materials from Universal Media library"))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco02").setUrl(new MFStringObject(new MFString9().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco04").setUrl(new MFStringObject(new MFString10().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco05").setUrl(new MFStringObject(new MFString11().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco08").setUrl(new MFStringObject(new MFString12().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco09").setUrl(new MFStringObject(new MFString13().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco13").setUrl(new MFStringObject(new MFString14().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco18").setUrl(new MFStringObject(new MFString15().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco21").setUrl(new MFStringObject(new MFString16().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco24").setUrl(new MFStringObject(new MFString17().getArray())))
        .addChild(new ExternProtoDeclareObject().setName("ArtDeco25").setUrl(new MFStringObject(new MFString18().getArray())))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-0.5f,0f})
          .addChild(new SwitchObject().setDEF("CountDownSwitch").setWhichChoice(0)
            .addChild(new GroupObject()
              .addChild(new ShapeObject()
                .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat19().getArray())).setString(new MFStringObject(new MFString20().getArray()))
                  .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString21().getArray()))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(ProtoInstance0 = new ProtoInstanceObject().setName("ArtDeco02")))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat22().getArray())).setString(new MFStringObject(new MFString23().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString24().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance1 = new ProtoInstanceObject().setName("ArtDeco09"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat25().getArray())).setString(new MFStringObject(new MFString26().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString27().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance2 = new ProtoInstanceObject().setName("ArtDeco08"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat28().getArray())).setString(new MFStringObject(new MFString29().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString30().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance3 = new ProtoInstanceObject().setName("ArtDeco18"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat31().getArray())).setString(new MFStringObject(new MFString32().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString33().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance4 = new ProtoInstanceObject().setName("ArtDeco21"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat34().getArray())).setString(new MFStringObject(new MFString35().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString36().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance5 = new ProtoInstanceObject().setName("ArtDeco24"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat37().getArray())).setString(new MFStringObject(new MFString38().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString39().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance6 = new ProtoInstanceObject().setName("ArtDeco25"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat40().getArray())).setString(new MFStringObject(new MFString41().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString42().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance7 = new ProtoInstanceObject().setName("ArtDeco13"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat43().getArray())).setString(new MFStringObject(new MFString44().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString45().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance8 = new ProtoInstanceObject().setName("ArtDeco05"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat46().getArray())).setString(new MFStringObject(new MFString47().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString48().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance9 = new ProtoInstanceObject().setName("ArtDeco04"))))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setLength(new MFFloatObject(new MFFloat49().getArray())).setString(new MFStringObject(new MFString50().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString51().getArray()))))
              .setAppearance(new AppearanceObject()
                .setMaterial(ProtoInstance10 = new ProtoInstanceObject().setName("ArtDeco02"))))))
        .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("IntegerSequencerInstance").setToField("whichChoice").setToNode("CountDownSwitch")))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.2f,0.2f,0.2f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.2f,0.2f,0.2f});
  }
}
protected class MFFloat2 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.08333f,0.1667f,0.25f,0.3333f,0.4167f,0.5f,0.5833f,0.6666f,0.75f,0.8333f,0.9167f,1f});
  }
}
protected class MFInt323 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {10,9,8,7,6,5,4,3,2,1,0,-1,10});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"IntegerSequencer => Switch","touch blue text to count down"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"click for","previous key","(count up)"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"click for","next key","(count down)"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco02","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco02"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco04","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco04"});
  }
}
protected class MFString11 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco05","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco05"});
  }
}
protected class MFString12 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco08","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco08"});
  }
}
protected class MFString13 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco09","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco09"});
  }
}
protected class MFString14 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco13","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco13"});
  }
}
protected class MFString15 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco18","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco18"});
  }
}
protected class MFString16 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco21","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco21"});
  }
}
protected class MFString17 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco24","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco24"});
  }
}
protected class MFString18 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../UniversalMediaMaterials/ArtDecoPrototypes.wrl#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoDemo.wrl#ArtDeco25","../UniversalMediaMaterials/ArtDecoPrototypes.x3d#ArtDeco25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoExamples.x3d#ArtDeco25"});
  }
}
protected class MFFloat19 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 0"});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat22 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString23 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 1"});
  }
}
protected class MFString24 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat25 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString26 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 2"});
  }
}
protected class MFString27 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat28 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString29 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 3"});
  }
}
protected class MFString30 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat31 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString32 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 4"});
  }
}
protected class MFString33 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat34 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString35 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 5"});
  }
}
protected class MFString36 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat37 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString38 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 6"});
  }
}
protected class MFString39 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat40 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString41 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 7"});
  }
}
protected class MFString42 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat43 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString44 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 8"});
  }
}
protected class MFString45 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat46 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString47 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 9"});
  }
}
protected class MFString48 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat49 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFString50 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"child choice 10"});
  }
}
protected class MFString51 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

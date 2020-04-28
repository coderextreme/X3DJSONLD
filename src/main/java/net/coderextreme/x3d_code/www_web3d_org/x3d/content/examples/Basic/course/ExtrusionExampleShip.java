package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.course;
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
public class ExtrusionExampleShip {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ExtrusionExampleShip().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/ExtrusionExampleShip.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ExtrusionExampleShip.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("3 September 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("Ship model for drawing several different Extrusion spines and cross sections - see ExtrusionCrossSectionExampleShip for corresponding use of ExtrusionCrossSectionPrototype."))
        .addMeta(new metaObject().setName("Image").setContent("ExtrusionExampleShip.png"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionExampleShip.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionExampleTorus.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionPrototype.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("VRML 97 Specification, 6.18 Extrusion"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion"))
        .addMeta(new metaObject().setName("Image").setContent("VRML 97 Specification, Figure 6.6"))
        .addMeta(new metaObject().setName("Image").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/Images/Extrusion.gif"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionExampleShip.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Example instance"))
        .addChild(new WorldInfoObject().setTitle("ExtrusionExampleShip.x3d"))
        .addChild(new NavigationInfoObject().setSpeed(4f))
        .addChild(new ViewpointObject().setDescription("ship hull").setPosition(new float[] {0f,0f,40f}))
        .addChild(new ViewpointObject().setDescription("stack").setPosition(new float[] {8f,5f,20f}))
        .addChild(new ViewpointObject().setDescription("smoke extrusion start").setPosition(new float[] {6.8f,7f,10f}))
        .addChild(new ViewpointObject().setDescription("forward starboard quarter").setOrientation(new float[] {0f,1f,0f,0.5f}).setPosition(new float[] {20f,3f,25f}))
        .addChild(new TransformObject().setRotation(new float[] {0f,1f,0f,1.57f}).setTranslation(new float[] {15f,30f,0f})
          .addChild(new ViewpointObject().setDescription("touch smoke to animate").setOrientation(new float[] {1f,0f,0f,-1f}).setPosition(new float[] {0f,0f,0f})))
        .addChild(new BackgroundObject().setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyAngle(new MFFloatObject(new MFFloat1().getArray())).setSkyColor(new MFColorObject(new MFColor2().getArray())))
        .addComments(new CommentsBlock("===================="))
        .addChild(new TransformObject().setDEF("SmokePosition").setTranslation(new float[] {5.8f,7f,0f})
          .addComments(new CommentsBlock("Smoke shows that crossSection, spine, scale and orientation can be animated"))
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setDEF("Smoke").setCreaseAngle(1f).setCrossSection(new MFVec2fObject(new MFVec2f3().getArray())).setOrientation(new MFRotationObject(new MFRotation4().getArray())).setScale(new MFVec2fObject(new MFVec2f5().getArray())).setSolid(false).setSpine(new MFVec3fObject(new MFVec3f6().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,0.9f,0.9f}).setTransparency(0.3f))))
          .addChild(new TouchSensorObject().setDEF("TouchSmoke").setDescription("click smoke to animate"))
          .addChild(new TimeSensorObject().setDEF("SmokeClock").setCycleInterval(30d).setStartTime(-1d))
          .addChild(new CoordinateInterpolatorObject().setDEF("SmokeSpineInterpolator").setKey(new MFFloatObject(new MFFloat7().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f8().getArray())))
          .addChild(new ROUTEObject().setFromField("touchTime").setFromNode("TouchSmoke").setToField("startTime").setToNode("SmokeClock"))
          .addChild(new ROUTEObject().setFromField("fraction_changed").setFromNode("SmokeClock").setToField("set_fraction").setToNode("SmokeSpineInterpolator"))
          .addChild(new ROUTEObject().setFromField("value_changed").setFromNode("SmokeSpineInterpolator").setToField("set_spine").setToNode("Smoke")))
        .addChild(new TransformObject().setDEF("SuperstructurePosition").setTranslation(new float[] {12f,1f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setDEF("Superstructure").setCrossSection(new MFVec2fObject(new MFVec2f9().getArray())).setScale(new MFVec2fObject(new MFVec2f10().getArray())).setSpine(new MFVec3fObject(new MFVec3f11().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.3f,0.6f,0.6f})))))
        .addChild(new TransformObject().setDEF("StackPosition").setTranslation(new float[] {8f,1f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setDEF("Stack").setCreaseAngle(1f).setCrossSection(new MFVec2fObject(new MFVec2f12().getArray())).setOrientation(new MFRotationObject(new MFRotation13().getArray())).setScale(new MFVec2fObject(new MFVec2f14().getArray())).setSpine(new MFVec3fObject(new MFVec3f15().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.3f,0.3f,0.3f}).setTransparency(0.5f)))))
        .addChild(new TransformObject().setDEF("HullPosition").setTranslation(new float[] {0f,1f,0f})
          .addChild(new ShapeObject()
            .setGeometry(new ExtrusionObject().setDEF("Hull").setCreaseAngle(3.14f).setCrossSection(new MFVec2fObject(new MFVec2f16().getArray())).setOrientation(new MFRotationObject(new MFRotation17().getArray())).setScale(new MFVec2fObject(new MFVec2f18().getArray())).setSolid(false).setSpine(new MFVec3fObject(new MFVec3f19().getArray())))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.5f,0.5f,0.5f})))))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Display world coordinate axes at (0 0 0)"))
        .addChild(new TransformObject().setScale(new float[] {5f,5f,5f})
          .addChild(new InlineObject().setDEF("CoordinateAxes").setUrl(new MFStringObject(new MFString20().getArray()))))
        .addComments(new CommentsBlock("Display smoke extrusion coordinate axes: y along spine, x pointing up"))
        .addChild(new TransformObject().setTranslation(new float[] {6f,8.5f,0f})
          .addChild(new TransformObject().setRotation(new float[] {0f,0f,1f,1.57f})
            .addChild(new InlineObject().setUSE("CoordinateAxes")))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.7f,0.7f,0.7f});
  }
}
protected class MFFloat1 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.05f,1.5f,1.59f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.6f,0.6f,0.4f,0.4f,0.4f,0.7f,0.3f,0.3f,0.6f,0.1f,0.1f,0.3f});
  }
}
protected class MFVec2f3 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,1f,-1f,0f,0f,-0.5f,1.5f,0f,0f,1f});
  }
}
protected class MFRotation4 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,-0.4f,0f,1f,0f,0f,1f,0f,0f,0.4f});
  }
}
protected class MFVec2f5 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.8f,0.7f,0.7f,0.6f,0.6f,0.5f,0.5f,0.3f,0.4f,0.2f});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f,-2f,0f,0f,-3f,0f,0f,-5f,0f,0f});
  }
}
protected class MFFloat7 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.2f,0.5f,0.8f,1f});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,-1f,0f,0f,-2f,0f,0f,-3f,0f,0f,-5f,0f,0f,0f,0f,0f,-2f,0f,0f,-4f,-0.5f,0f,-6f,-1f,0f,-8f,-2f,0f,0f,0f,0f,-4f,0f,0f,-8f,-1f,0f,-13f,-2f,0f,-20f,-2.5f,0f,0f,0f,0f,-2f,0f,0f,-4f,-0.5f,0f,-6f,-1f,0f,-8f,-2f,0f,0f,0f,0f,-1f,0f,0f,-2f,0f,0f,-3f,0f,0f,-5f,0f,0f});
  }
}
protected class MFVec2f9 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.1f,1f,0.1f,-1f,-1f,-1f,-1f,1f,0.1f,1f});
  }
}
protected class MFVec2f10 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {6f,2f,6f,2f,6f,2f,1f,1.8f,1f,1.8f});
  }
}
protected class MFVec3f11 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,1f,0f,0f,1.95f,0f,0f,1.96f,0f,0f,3f,0f});
  }
}
protected class MFVec2f12 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f});
  }
}
protected class MFRotation13 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,0f,1f,0.4f});
  }
}
protected class MFVec2f14 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,1f,1f,1f,0.9f,0.85f,0.8f,0.4f});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.1f,2f,0f,0f,5f,0f,-0.4f,5.6f,0f,-1f,6f,0f});
  }
}
protected class MFVec2f16 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f});
  }
}
protected class MFRotation17 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,0f,0f,1f,0f,0f,0f,0f,1f,-0.5f});
  }
}
protected class MFVec2f18 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {3f,4f,4f,4f,4f,4f,4f,4f,5f,0.1f});
  }
}
protected class MFVec3f19 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-20f,0f,0f,-17f,0f,0f,0f,0f,0f,10f,0f,0f,22f,1f,0f});
  }
}
protected class MFString20 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
}

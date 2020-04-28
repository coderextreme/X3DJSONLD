package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
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
public class ClipPlaneExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ClipPlaneExample().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/ClipPlaneExample.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Rendering").setLevel(5))
        .addMeta(new metaObject().setName("title").setContent("ClipPlaneExample.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Nicholas Polys, Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("20 February 2013"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped."))
        .addMeta(new metaObject().setName("reference").setContent("ClipPlaneExample.x3d"))
        .addMeta(new metaObject().setName("Image").setContent("ClipPlaneExampleFront.png"))
        .addMeta(new metaObject().setName("Image").setContent("ClipPlaneExampleOblique.png"))
        .addMeta(new metaObject().setName("Image").setContent("ClipPlaneExampleOverhead.png"))
        .addMeta(new metaObject().setName("Image").setContent("ClipPlaneExampleSide.png"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("Vivaty Studio"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("TODO Schematron error for orientation='0 0 0 0'"))
        .addChild(new ViewpointObject().setDescription("ClipPlanes front view").setPosition(new float[] {0f,1f,10f}))
        .addChild(new ViewpointObject().setDescription("ClipPlanes oblique view").setOrientation(new float[] {1f,0f,0f,-0.851966f}).setPosition(new float[] {0f,8f,7f}))
        .addChild(new ViewpointObject().setDescription("ClipPlanes overhead view").setOrientation(new float[] {1f,0f,0f,-1.570796f}).setPosition(new float[] {0f,12f,0f}))
        .addChild(new ViewpointObject().setDescription("ClipPlanes side view").setOrientation(new float[] {-0.03326f,0.99889f,0.03326f,1.571904f}).setPosition(new float[] {15f,1f,0f}))
        .addChild(new BackgroundObject().setDEF("WhiteBackground").setGroundColor(new MFColorObject(new MFColor0().getArray())).setSkyColor(new MFColorObject(new MFColor1().getArray())))
        .addChild(new GroupObject().setDEF("ClipPlaneGroup")
          .addComments(new CommentsBlock("ClipPlane nodes affect peers and children"))
          .addChild(new ClipPlaneObject().setDEF("ClipPlaneHorizontal"))
          .addChild(new ClipPlaneObject().setDEF("ClipPlaneVertical").setPlane(new float[] {0f,0f,-1f,0f}))
          .addComments(new CommentsBlock("Non-standard scripting animation test for ClipPlane <PythonScript DEF=\"PS\" url=\"OpacityMapStyle.py\" /> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='PS' toField='planeEquation'/> <ROUTE fromNode='PS' fromField='planeEquation' toNode='CP' toField='plane'/>"))
          .addComments(new CommentsBlock("<TimeSensor DEF='timer' cycleInterval='13.000' loop='true' startTime='0.000'/> <ROUTE fromNode='timer' fromField='fraction_changed' toNode='timer_pos0' toField='set_fraction'/> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='move' toField='set_translation'/>"))
          .addChild(new GroupObject().setDEF("PrimitiveShapes")
            .addChild(new WorldInfoObject().setInfo(new MFStringObject(new MFString2().getArray())).setTitle("primitives"))
            .addChild(new TransformObject().setDEF("dad_Box1").setTranslation(new float[] {-3f,0f,0f})
              .addChild(new ShapeObject().setDEF("Box1")
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("Red").setAmbientIntensity(0.2f).setDiffuseColor(new float[] {1f,0f,0f}).setShininess(0.2f)))
                .setGeometry(new BoxObject().setDEF("GeoBox1").setSolid(false))))
            .addChild(new TransformObject().setDEF("dad_Cylinder1").setTranslation(new float[] {-1f,0f,0f})
              .addChild(new ShapeObject().setDEF("Cylinder1")
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("Green").setAmbientIntensity(0.2f).setDiffuseColor(new float[] {0f,1f,0f}).setShininess(0.2f)))
                .setGeometry(new CylinderObject().setDEF("GeoCylinder1").setSolid(false))))
            .addChild(new TransformObject().setDEF("dad_Cone1").setTranslation(new float[] {1f,0f,0f})
              .addChild(new ShapeObject().setDEF("Cone1")
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("Blue").setAmbientIntensity(0.2f).setDiffuseColor(new float[] {0f,0f,1f}).setShininess(0.2f)))
                .setGeometry(new ConeObject().setDEF("GeoCone1").setSolid(false))))
            .addChild(new TransformObject().setDEF("dad_Sphere1").setTranslation(new float[] {3f,0f,0f})
              .addChild(new ShapeObject().setDEF("Sphere1")
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("Shiny_Yellow").setAmbientIntensity(0.2f).setDiffuseColor(new float[] {1f,1f,0f}).setShininess(0.1f).setSpecularColor(new float[] {1f,1f,0f})))
                .setGeometry(new SphereObject().setDEF("GeoSphere1").setSolid(false))))
            .addChild(new TransformObject().setDEF("dad_Light1").setTranslation(new float[] {0f,5f,0f})
              .addChild(new PointLightObject().setDEF("Light1")))
            .addChild(new TransformObject().setDEF("dad_Background1").setTranslation(new float[] {-0.73213f,4.14112f,0f})
              .addChild(new BackgroundObject().setDEF("Background1").setGroundColor(new MFColorObject(new MFColor3().getArray())).setSkyColor(new MFColorObject(new MFColor4().getArray())))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,3f,0f})
            .addChild(new GroupObject().setUSE("PrimitiveShapes"))))
        .addComments(new CommentsBlock("Keep boundary lines outside of scope of the two clipping planes so that they can illustrate boundaries without being cut off"))
        .addChild(new GroupObject().setDEF("BoundaryLines")
          .addChild(new TransformObject().setDEF("move").setTranslation(new float[] {0f,0.00001f,0f})
            .addChild(new ShapeObject().setDEF("PlaneOutlineHorizontal")
              .setAppearance(new AppearanceObject().setDEF("BoundaryLineAppearance")
                .setMaterial(new MaterialObject().setAmbientIntensity(0.2f).setEmissiveColor(new float[] {0.1f,0.1f,0.1f})))
              .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt325().getArray()))
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f6().getArray()))))))
          .addChild(new PositionInterpolatorObject().setDEF("timer_pos0").setKey(new MFFloatObject(new MFFloat7().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f8().getArray())))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,-1.578f})
            .addChild(new TransformObject().setDEF("move2").setTranslation(new float[] {0f,0.00001f,0f})
              .addChild(new ShapeObject().setDEF("PlaneOutlineVertical")
                .setAppearance(new AppearanceObject().setUSE("BoundaryLineAppearance"))
                .addComments(new CommentsBlock("also includes center line"))
                .setGeometry(new IndexedLineSetObject().setCoordIndex(new MFInt32Object(new MFInt329().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f10().getArray())))))))))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFColor1 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"This Web3D Content was created with Vivaty Studio, a Web3D authoring tool","www.mediamachines.com"});
  }
}
protected class MFColor3 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFColor4 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,1f,1f});
  }
}
protected class MFInt325 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,0,-1});
  }
}
protected class MFVec3f6 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {5f,0f,-2f,5f,0f,2f,-5f,0f,2f,-5f,0f,-2f});
  }
}
protected class MFFloat7 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0.5f,1f});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,2f,0f,0f,-2f,0f,0f,2f,0f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,0,-1,4,5,-1});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {5f,0f,-2f,5f,0f,4f,-5f,0f,4f,-5f,0f,-2f,5f,0f,0f,-5f,0f,0f});
  }
}
}

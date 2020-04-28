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
public class AdditiveSubtractiveLight {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new AdditiveSubtractiveLight().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("AdditiveSubtractiveLight.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This example tests various color combination capabilities, and also demonstrating that filtering (negative colors) are not supported in the X3D/VRML color model. Discussion follows. There are 2 ways to combine colors: Additive (e.g. a TV screen, overlapping spotlights, or pointillist art), for example [red + green = yellow] [1 0 0 + 0 1 0 = 1 1 0]. Subtractive (e.g. mixing paints or stacking filters), for example [white background + yellow filter + cyan filter = green] [1 1 1 + 0 0 -1 + -1 0 0 = 0 1 0]."))
        .addMeta(new metaObject().setName("creator").setContent("Miriam English"))
        .addMeta(new metaObject().setName("translator").setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman and MV4205 class"))
        .addMeta(new metaObject().setName("created").setContent("6 May 2003"))
        .addMeta(new metaObject().setName("translated").setContent("6 May 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("additive-subtractiveLight2.7May2003.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.rgbworld.com/color.html"))
        .addMeta(new metaObject().setName("Image").setContent("AdditiveSubtractiveLight.png"))
        .addMeta(new metaObject().setName("subject").setContent("additive subtractive light examples"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AdditiveSubtractiveLight.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("AdditiveSubtractiveLight.x3d"))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE"}).setHeadlight(false))
        .addChild(new ViewpointObject().setDescription("entry").setJump(false).setPosition(new float[] {0f,-1f,14f}))
        .addChild(new ViewpointObject().setDescription("side").setJump(false).setOrientation(new float[] {0f,1f,0f,-0.7f}).setPosition(new float[] {-5f,-1f,3f}))
        .addChild(new TransformObject().setTranslation(new float[] {-6.2f,0f,-1f})
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {-3f,2.8f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(1f).setDiffuseColor(new float[] {1f,1f,1f})))
              .setGeometry(new ElevationGridObject().setHeight(new MFFloatObject(new MFFloat0().getArray())).setXDimension(20).setXSpacing(0.3f).setZDimension(20).setZSpacing(0.3f))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-4.1f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.5f,0.5f,0.5f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString2().getArray()))))))
          .addChild(new TransformObject().setTranslation(new float[] {0f,0.6f,0.3f})
            .addChild(new TransformObject().setTranslation(new float[] {-0.6f,0f,0f})
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,0f,0f})))
                .setGeometry(new SphereObject().setRadius(0.2f)))
              .addChild(new PointLightObject().setAmbientIntensity(0.5f).setAttenuation(new float[] {0f,1f,0f}).setColor(new float[] {1f,0f,0f})))
            .addChild(new TransformObject().setTranslation(new float[] {0f,-1.2f,0f})
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0f,1f,0f})))
                .setGeometry(new SphereObject().setRadius(0.2f)))
              .addChild(new PointLightObject().setAmbientIntensity(0.5f).setAttenuation(new float[] {0f,1f,0f}).setColor(new float[] {0f,1f,0f})))
            .addChild(new TransformObject().setTranslation(new float[] {0.6f,0f,0f})
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0f,0f,1f})))
                .setGeometry(new SphereObject().setRadius(0.2f)))
              .addChild(new PointLightObject().setAmbientIntensity(0.5f).setAttenuation(new float[] {0f,1f,0f}).setColor(new float[] {0f,0f,1f})))))
        .addChild(new TransformObject().setTranslation(new float[] {3f,-0.1f,-1f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {1f,1f,1f})))
            .setGeometry(new BoxObject().setSize(new float[] {13f,6f,0.01f})))
          .addChild(new TransformObject().setTranslation(new float[] {0f,-4.1f,0.1f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {0.5f,0.5f,0.5f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString4().getArray())))))))
        .addChild(new TransformObject().setTranslation(new float[] {-1f,1f,0f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,-3f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString6().getArray())).setSize(0.6f)))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {-0.5f,0.2f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,1f,1f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0.5f,0.2f,-0.01f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,0f,1f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,-0.68f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,1f,0f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f)))))
        .addChild(new TransformObject().setTranslation(new float[] {2.5f,1f,0f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,-3f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString8().getArray())).setSize(0.6f)))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {-0.5f,0.2f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {0f,1f,1f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0.5f,0.2f,-0.01f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,0f,1f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,-0.68f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setEmissiveColor(new float[] {1f,1f,0f}).setShininess(0f).setTransparency(0.5f)))
              .setGeometry(new CylinderObject().setHeight(0.01f)))))
        .addChild(new TransformObject().setTranslation(new float[] {6f,1f,0f})
          .addChild(new TransformObject().setTranslation(new float[] {0f,-2.5f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString10().getArray())).setSize(0.6f)))))
          .addChild(new TransformObject().setRotation(new float[] {1f,0f,0f,1.57f}).setScale(new float[] {2f,2f,2f})
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0f,1f,1f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3211().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f12().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,0f,1f}).setEmissiveColor(new float[] {1f,0f,1f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3213().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f14().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,1f,0f}).setEmissiveColor(new float[] {1f,1f,0f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3215().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f16().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {1f,0f,0f}).setEmissiveColor(new float[] {1f,0f,0f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3217().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f18().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,1f,0f}).setEmissiveColor(new float[] {0f,1f,0f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3219().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f20().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,1f}).setEmissiveColor(new float[] {0f,0f,1f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3221().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f22().getArray()))))))
            .addChild(new TransformObject()
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setAmbientIntensity(0f).setDiffuseColor(new float[] {0f,0f,0f}).setShininess(0f)))
                .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3223().getArray()))
                  .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f24().getArray())))))))))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f,0f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"additive","(correct)"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"subtractive","(incorrect)"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"diffuse only"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"emissive only"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"how it","should look","(faked)"});
  }
}
protected class MFString10 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {3,4,5,-1,3,5,2,-1,2,5,1,-1,1,5,0,-1,0,5,13,-1,13,5,14,-1,14,5,15,-1,15,5,16,-1,16,5,17,-1,17,5,18,-1,18,5,19,-1,19,5,20,-1,20,5,21,-1,21,5,22,-1,12,23,22,-1,12,5,11,-1,11,5,10,-1,10,5,9,-1,9,5,8,-1,8,5,7,-1,5,6,7,-1,5,12,22,-1});
  }
}
protected class MFVec3f12 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.0013f,0f,-0.5314f,-0.1193f,0f,-0.5813f,-0.2487f,0f,-0.5983f,-0.3781f,0f,-0.5813f,-0.4987f,0f,-0.5314f,-0.6023f,0f,-0.4519f,-0.6818f,0f,-0.3483f,-0.7317f,0f,-0.2277f,-0.7487f,0f,-0.0983f,-0.7317f,0f,0.0311f,-0.6818f,0f,0.1517f,-0.6023f,0f,0.2552f,-0.4987f,0f,0.3347f,0.0029f,0f,-0.5301f,-0.099f,0f,-0.4519f,-0.1785f,0f,-0.3483f,-0.2284f,0f,-0.2277f,-0.2455f,0f,-0.0983f,-0.2453f,0f,-0.0967f,-0.3478f,0f,-0.018f,-0.4272f,0f,0.0855f,-0.4772f,0f,0.2061f,-0.4942f,0f,0.3355f,-0.4941f,0f,0.3366f});
  }
}
protected class MFInt3213 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {16,4,17,-1,17,6,18,-1,18,12,19,-1,19,12,20,-1,12,21,20,-1,12,18,13,-1,13,7,14,-1,8,15,14,-1,8,14,7,-1,7,18,6,-1,6,17,5,-1,5,17,4,-1,4,16,3,-1,3,16,2,-1,2,16,1,-1,1,16,0,-1,0,16,11,-1,11,16,10,-1,16,9,10,-1,18,7,13,-1});
  }
}
protected class MFVec3f14 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.7545f,0f,-0.0983f,0.7375f,0f,-0.2277f,0.6875f,0f,-0.3483f,0.6081f,0f,-0.4519f,0.5045f,0f,-0.5314f,0.3839f,0f,-0.5813f,0.2545f,0f,-0.5983f,0.1251f,0f,-0.5813f,0.0045f,0f,-0.5314f,0.6081f,0f,0.2552f,0.6875f,0f,0.1517f,0.7375f,0f,0.0311f,0.2342f,0f,-0.2277f,0.1843f,0f,-0.3483f,0.1048f,0f,-0.4519f,0.0029f,0f,-0.5301f,0.5056f,0f,0.3339f,0.4887f,0f,0.2061f,0.4388f,0f,0.0855f,0.3593f,0f,-0.018f,0.2558f,0f,-0.0975f,0.2511f,0f,-0.0994f});
  }
}
protected class MFInt3215 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {12,8,13,-1,13,10,14,-1,14,19,15,-1,15,18,16,-1,18,17,16,-1,18,15,19,-1,19,14,20,-1,20,11,21,-1,21,0,22,-1,0,23,22,-1,0,21,11,-1,11,14,10,-1,10,13,9,-1,6,12,5,-1,5,12,4,-1,4,12,3,-1,3,12,2,-1,12,1,2,-1,7,8,12,-1,6,7,12,-1,8,9,13,-1,14,11,20,-1});
  }
}
protected class MFVec3f16 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5058f,0f,0.3355f,-0.4772f,0f,0.4649f,-0.4272f,0f,0.5855f,-0.3478f,0f,0.6891f,-0.2442f,0f,0.7685f,-0.1236f,0f,0.8185f,0.0058f,0f,0.8355f,0.1352f,0f,0.8185f,0.2558f,0f,0.7685f,0.3593f,0f,0.6891f,0.4388f,0f,0.5855f,0.4887f,0f,0.4649f,-0.4941f,0f,0.3366f,-0.3781f,0f,0.3846f,-0.2487f,0f,0.4017f,-0.1193f,0f,0.3846f,0.0013f,0f,0.3347f,0.0029f,0f,0.3334f,0.0045f,0f,0.3347f,0.1251f,0f,0.3846f,0.2545f,0f,0.4017f,0.3839f,0f,0.3846f,0.5045f,0f,0.3347f,0.5056f,0f,0.3339f});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {9,8,7,-1,9,7,15,-1,15,7,12,-1,12,7,13,-1,13,7,14,-1,14,7,11,-1,4,10,11,-1,4,7,3,-1,3,7,2,-1,2,7,1,-1,1,7,0,-1,0,7,5,-1,7,6,5,-1,7,4,11,-1});
  }
}
protected class MFVec3f18 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.5056f,0f,0.3339f,0.4887f,0f,0.2061f,0.4388f,0f,0.0855f,0.3593f,0f,-0.018f,0.2558f,0f,-0.0975f,0.5045f,0f,0.3347f,0.3839f,0f,0.3846f,0.2545f,0f,0.4017f,0.1251f,0f,0.3846f,0.0045f,0f,0.3347f,0.2511f,0f,-0.0994f,0.2513f,0f,-0.0983f,0.1048f,0f,0.2552f,0.1843f,0f,0.1517f,0.2342f,0f,0.0311f,0.0029f,0f,0.3334f});
  }
}
protected class MFInt3219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {8,1,9,-1,9,2,10,-1,10,2,11,-1,3,12,11,-1,3,11,2,-1,2,9,1,-1,1,8,0,-1,0,8,13,-1,13,8,7,-1,7,8,6,-1,6,8,5,-1,8,4,5,-1});
  }
}
protected class MFVec3f20 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-0.3781f,0f,0.3846f,-0.2487f,0f,0.4017f,-0.1193f,0f,0.3846f,0.0013f,0f,0.3347f,-0.3478f,0f,-0.018f,-0.4272f,0f,0.0855f,-0.4772f,0f,0.2061f,-0.4942f,0f,0.3355f,-0.2453f,0f,-0.0967f,-0.2284f,0f,0.0311f,-0.1785f,0f,0.1517f,-0.099f,0f,0.2552f,0.0029f,0f,0.3334f,-0.4941f,0f,0.3366f});
  }
}
protected class MFInt3221 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {1,2,11,-1,1,11,0,-1,0,11,12,-1,12,11,7,-1,7,11,8,-1,8,11,9,-1,9,11,10,-1,10,11,13,-1,13,11,6,-1,6,11,5,-1,5,11,4,-1,11,3,4,-1});
  }
}
protected class MFVec3f22 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.2342f,0f,-0.2277f,0.1843f,0f,-0.3483f,0.1048f,0f,-0.4519f,-0.099f,0f,-0.4519f,-0.1785f,0f,-0.3483f,-0.2284f,0f,-0.2277f,-0.2455f,0f,-0.0983f,0.1352f,0f,-0.1475f,0.0058f,0f,-0.1645f,-0.1236f,0f,-0.1475f,-0.2442f,0f,-0.0975f,0.0029f,0f,-0.5301f,0.2511f,0f,-0.0994f,-0.2453f,0f,-0.0967f});
  }
}
protected class MFInt3223 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {5,6,7,-1,5,7,4,-1,4,7,13,-1,13,7,11,-1,11,7,10,-1,10,7,9,-1,9,7,8,-1,8,7,12,-1,12,7,0,-1,0,7,3,-1,3,7,2,-1,7,1,2,-1});
  }
}
protected class MFVec3f24 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0.2513f,0f,-0.0983f,0.1048f,0f,0.2552f,0.1843f,0f,0.1517f,0.2342f,0f,0.0311f,-0.2284f,0f,0.0311f,-0.1785f,0f,0.1517f,-0.099f,0f,0.2552f,0.0029f,0f,0.3334f,0.1352f,0f,-0.1475f,0.0058f,0f,-0.1645f,-0.1236f,0f,-0.1475f,-0.2442f,0f,-0.0975f,0.2511f,0f,-0.0994f,-0.2453f,0f,-0.0967f});
  }
}
}

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
public class AllVrml97Nodes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new AllVrml97Nodes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/development/AllVrml97Nodes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("AllVrml97Nodes.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 January 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("List all VRML nodes in a single nonrendering scene as a convenient simple test for translation programs. Used for early development of X3D-Edit and Xj3D."))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/development/AllVrml97Nodes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setDEF("WORLDINFO").setTitle("VRML test scene: x3d/content/AllVrml97Nodes.wrl"))
        .addChild(new WorldInfoObject().setDEF("DTD_TAGSET_CANDIDATES"))
        .addChild(new WorldInfoObject().setDEF("Xj3D_BUGS_AND_ISSUES"))
        .addChild(new WorldInfoObject().setDEF("Xj3D_FIXES"))
        .addChild(new WorldInfoObject().setDEF("XEENA_BUGS_AND_ISSUES"))
        .addChild(new WorldInfoObject().setDEF("XEENA_FIXES"))
        .addChild(new BackgroundObject().setDEF("BACKGROUND").setGroundColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new FogObject().setDEF("FOG"))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","ANY","FLY"}).setDEF("NAVIGATIONINFO"))
        .addChild(new ViewpointObject().setDEF("VIEWPOINT"))
        .addChild(new AnchorObject().setDEF("ANCHOR")
          .addChild(new BillboardObject().setDEF("Billboard")
            .addChild(new ShapeObject().setDEF("SHAPE_BOX")
              .setGeometry(new BoxObject().setDEF("BOX"))
              .setAppearance(new AppearanceObject().setDEF("APPEARANCE")
                .setTexture(new ImageTextureObject().setDEF("IMAGETEXTURE").setUrl(new MFStringObject(new MFString1().getArray())))
                .setMaterial(new MaterialObject().setDEF("MATERIAL")))))
          .addChild(new CollisionObject().setDEF("COLLISION")
            .addChild(new GroupObject().setDEF("PROXY_GROUP")
              .addChild(new ShapeObject().setDEF("PROXY_SHAPE")
                .setGeometry(new BoxObject().setDEF("PROXY_BOX"))))
            .addChild(new ShapeObject().setDEF("SHAPE_CONE")
              .setGeometry(new ConeObject().setDEF("CONE"))
              .setAppearance(new AppearanceObject())))
          .addChild(new GroupObject().setDEF("GROUP")
            .addChild(new ShapeObject().setDEF("SHAPE_CYLINDER")
              .setGeometry(new CylinderObject().setDEF("CYLINDER"))
              .setAppearance(new AppearanceObject())))
          .addChild(new InlineObject().setDEF("INLINE").setUrl(new MFStringObject(new MFString2().getArray())))
          .addChild(new InlineObject().setDEF("INLINE_HELLO_WORLD").setUrl(new MFStringObject(new MFString3().getArray())))
          .addChild(new LODObject().setDEF("LOD").setRange(new MFFloatObject(new MFFloat4().getArray()))
            .addChild(new ShapeObject().setDEF("SHAPE_ELEVATIONGRID")
              .setGeometry(new ElevationGridObject().setDEF("ELEVATIONGRID").setHeight(new MFFloatObject(new MFFloat5().getArray())))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE")))
            .addChild(new ShapeObject().setDEF("SHAPE_EXTRUSION")
              .setGeometry(new ExtrusionObject().setDEF("EXTRUSION").setCrossSection(new MFVec2fObject(new MFVec2f6().getArray())).setScale(new MFVec2fObject(new MFVec2f7().getArray())).setSpine(new MFVec3fObject(new MFVec3f8().getArray())))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE"))))
          .addChild(new SwitchObject().setDEF("SWITCH").setWhichChoice(-1)
            .addChild(new ShapeObject().setDEF("SHAPE_TEXTURETRANSFORM_INDEXEDFACESET")
              .setGeometry(new IndexedFaceSetObject().setDEF("INDEXEDFACESET").setColorIndex(new MFInt32Object(new MFInt329().getArray())).setCoordIndex(new MFInt32Object(new MFInt3210().getArray())).setNormalIndex(new MFInt32Object(new MFInt3211().getArray())).setTexCoordIndex(new MFInt32Object(new MFInt3212().getArray()))
                .setColor(new ColorObject().setDEF("COLOR").setColor(new MFColorObject(new MFColor13().getArray())))
                .setCoord(new CoordinateObject().setDEF("COORDINATE").setPoint(new MFVec3fObject(new MFVec3f14().getArray())))
                .setNormal(new NormalObject().setDEF("NORMAL").setVector(new MFVec3fObject(new MFVec3f15().getArray())))
                .setTexCoord(new TextureCoordinateObject().setDEF("TEXTURECOORDINATE").setPoint(new MFVec2fObject(new MFVec2f16().getArray()))))
              .setAppearance(new AppearanceObject().setDEF("APPEARANCE_TEXTURETRANSFORM")
                .setTexture(new ImageTextureObject().setUSE("IMAGETEXTURE"))
                .setMaterial(new MaterialObject())
                .setTextureTransform(new TextureTransformObject().setDEF("TEXTURETRANSFORM").setCenter(new float[] {0.5f,0.5f}))))
            .addChild(new ShapeObject().setDEF("SHAPE_INDEXEDLINESET")
              .setGeometry(new IndexedLineSetObject().setDEF("INDEXEDLINESET").setColorIndex(new MFInt32Object(new MFInt3217().getArray())).setCoordIndex(new MFInt32Object(new MFInt3218().getArray()))
                .setCoord(new CoordinateObject().setUSE("COORDINATE"))
                .setColor(new ColorObject().setUSE("COLOR")))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE")))
            .addChild(new ShapeObject().setDEF("SHAPE_POINTSET")
              .setGeometry(new PointSetObject().setDEF("POINTSET")
                .setColor(new ColorObject().setUSE("COLOR"))
                .setCoord(new CoordinateObject().setUSE("COORDINATE")))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE")))
            .addChild(new ShapeObject().setDEF("SHAPE_MOVIETEXTURE")
              .setGeometry(new IndexedFaceSetObject().setCoordIndex(new MFInt32Object(new MFInt3219().getArray())).setSolid(false)
                .setCoord(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f20().getArray()))))
              .setAppearance(new AppearanceObject())))
          .addChild(new TransformObject().setDEF("TRANSFORM")
            .addChild(new ShapeObject().setDEF("SHAPE_SPHERE")
              .setGeometry(new SphereObject().setDEF("SPHERE"))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE")))
            .addChild(new ShapeObject().setDEF("SHAPE_TEXT")
              .setGeometry(new TextObject().setDEF("TEXT").setString(new MFStringObject(new MFString21().getArray()))
                .setFontStyle(new FontStyleObject().setDEF("FONTSTYLE")))
              .setAppearance(new AppearanceObject().setUSE("APPEARANCE"))))
          .addChild(new SoundObject().setDEF("SOUND")
            .setSource(new AudioClipObject().setDEF("AUDIOCLIP").setDescription("AudioClip")))
          .addChild(new GroupObject().setDEF("GROUP_LIGHTS")
            .addChild(new DirectionalLightObject().setDEF("DIRECTIONALLIGHT"))
            .addChild(new PointLightObject().setDEF("POINTLIGHT"))
            .addChild(new SpotLightObject().setDEF("SPOTLIGHT").setBeamWidth(1.570796f).setCutOffAngle(0.785398f)))
          .addChild(new GroupObject().setDEF("GROUP_INTERPOLATORS")
            .addChild(new ColorInterpolatorObject().setDEF("COLORINTERPOLATOR").setKey(new MFFloatObject(new MFFloat22().getArray())).setKeyValue(new MFColorObject(new MFColor23().getArray())))
            .addChild(new CoordinateInterpolatorObject().setDEF("COORDINATEINTERPOLATOR").setKey(new MFFloatObject(new MFFloat24().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f25().getArray())))
            .addChild(new NormalInterpolatorObject().setDEF("NORMALINTERPOLATOR").setKey(new MFFloatObject(new MFFloat26().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f27().getArray())))
            .addChild(new OrientationInterpolatorObject().setDEF("ORIENTATIONINTERPOLATOR").setKey(new MFFloatObject(new MFFloat28().getArray())).setKeyValue(new MFRotationObject(new MFRotation29().getArray())))
            .addChild(new PositionInterpolatorObject().setDEF("POSITIONINTERPOLATOR").setKey(new MFFloatObject(new MFFloat30().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f31().getArray())))
            .addChild(new ScalarInterpolatorObject().setDEF("SCALARINTERPOLATOR").setKey(new MFFloatObject(new MFFloat32().getArray())).setKeyValue(new MFFloatObject(new MFFloat33().getArray()))))
          .addChild(new GroupObject().setDEF("GROUP_SENSORS")
            .addChild(new CylinderSensorObject().setDEF("CYLINDERSENSOR"))
            .addChild(new PlaneSensorObject().setDEF("PLANESENSOR"))
            .addChild(new ProximitySensorObject().setDEF("PROXIMITYSENSOR"))
            .addChild(new SphereSensorObject().setDEF("SPHERESENSOR"))
            .addChild(new TimeSensorObject().setDEF("TIMESENSOR"))
            .addChild(new TouchSensorObject().setDEF("TOUCHSENSOR"))
            .addChild(new VisibilitySensorObject().setDEF("VISIBILITYSENSOR"))))
        .addChild(new WorldInfoObject().setDEF("Xj3D_NODE_TRANSLATION_STATUS"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TOUCHSENSOR").setToField("enabled").setToNode("TOUCHSENSOR")))      ;
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../icons/cube.gif","https://www.web3d.org/x3d/content/examples/Basic/development/../icons/cube.gif"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"inlineTestFileOne.wrl","inlineTestFileTwo.wrl","inlineTestFileEmbedding%20Blanks%20In%20Name.wrl"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/HelloWorld.wrl"});
  }
}
protected class MFFloat4 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f});
  }
}
protected class MFFloat5 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1f,2f,3f,4f});
  }
}
protected class MFVec2f6 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,1f,1f,-1f,-1f,-1f,-1f,1f,1f,1f});
  }
}
protected class MFVec2f7 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,1f,1f,1f});
  }
}
protected class MFVec3f8 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,1f,0f});
  }
}
protected class MFInt329 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,0,1});
  }
}
protected class MFInt3210 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3});
  }
}
protected class MFInt3211 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3});
  }
}
protected class MFInt3212 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3});
  }
}
protected class MFColor13 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {1f,0f,0f,0f,1f,0f});
  }
}
protected class MFVec3f14 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0f,1f,1f,1f,1f});
  }
}
protected class MFVec3f15 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {1f,0f,0f,0f,1f,0f,0f,0f,1f,0f,0f,1f});
  }
}
protected class MFVec2f16 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.1f,0.1f,0.9f,0.1f,0.9f,0.9f,0.1f,0.9f});
  }
}
protected class MFInt3217 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,0,1});
  }
}
protected class MFInt3218 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3});
  }
}
protected class MFInt3219 {
  protected MFInt32Object getArray() {
    return new MFInt32Object(new int[] {0,1,2,3,-1});
  }
}
protected class MFVec3f20 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,1f,0f,0f,1f,1f,0f,0f,1f,0f});
  }
}
protected class MFString21 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {" first line of text","second line of text"});
  }
}
protected class MFFloat22 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFColor23 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0f,0f,0f});
  }
}
protected class MFFloat24 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFVec3f25 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFFloat26 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFVec3f27 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFFloat28 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFRotation29 {
  protected MFRotationObject getArray() {
    return new MFRotationObject(new float[] {0f,0f,1f,0f});
  }
}
protected class MFFloat30 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFVec3f31 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f});
  }
}
protected class MFFloat32 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
protected class MFFloat33 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f});
  }
}
}

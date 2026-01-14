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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class bobblespheres implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new bobblespheres().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/bobblespheres.new.java.x3d");
    model.toFileJSON("../data/bobblespheres.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addComponent(new component().setName("X_ITE").setLevel(1))
        .addMeta(new meta().setName("title").setContent("Bobble Spheres Full Animation (Final Working)"))
        .addMeta(new meta().setName("description").setContent("Full scene with corrected Script nodes that use the initialize() function to safely reference nodes and prevent race conditions."))
        .addMeta(new meta().setName("creator").setContent("Generated from Python script")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("Bobble Spheres (PBR Full Animation)"))
        .addChild(new NavigationInfo())
        .addChild(new Background().setSkyAngle(new MFFloat0().getArray()).setSkyColor(new MFColor1().getArray()))
        .addChild(new Viewpoint().setDescription("Initial Camera").setPosition(new float[] {-70f ,15f ,-25f }).setOrientation(new float[] {0.147f ,0.989f ,0.005f ,-1.82f }).setFieldOfView(0.349f ))
        .addChild(new DirectionalLight().setDirection(new float[] {-0.5f ,-1f ,-0.5f }).setIntensity(2f ))
        .addComments(new CommentsBlock("Static objects"))
        .addChild(new Transform().setTranslation(new float[] {0f ,-1000f ,-1f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(new float[] {0.5f ,0.5f ,0.5f })))
            .setGeometry(new Sphere().setRadius(1000f ))))
        .addChild(new Transform().setTranslation(new float[] {0f ,1f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(new float[] {0.9f ,0.9f ,0.9f }).setTransmissionFactor("0.9").setRoughness(0f ).setIndexOfRefraction("1.5")))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(new float[] {-4f ,1f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(new float[] {1f ,0.95f ,0.9f }).setTransmissionFactor("0.8").setRoughness(0.05f ).setIndexOfRefraction("1.1")))
            .setGeometry(new Sphere())))
        .addChild(new Transform().setTranslation(new float[] {4f ,1f ,0f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setBaseColor(new float[] {0.7f ,0.6f ,0.5f }).setRoughness(0.1f )))
            .setGeometry(new Sphere())))
        .addComments(new CommentsBlock("=== DYNAMICALLY GENERATED SPHERES ==="))
        .addComments(new CommentsBlock("Example: Matte Sphere with animated color and roughness (Using initialize())"))
        .addChild(new Transform().setDEF("T_0").setTranslation(new float[] {-10.871f ,0.2f ,-10.453f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setDEF("M_0").setBaseColor(new float[] {0.627f ,0.003f ,0.165f })))
            .setGeometry(new Sphere().setRadius(0.2f ))))
        .addChild(new TimeSensor().setDEF("C_0").setCycleInterval(5.21d).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_0").setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
        .addChild(new ColorInterpolator().setDEF("CI_0").setKey(new MFFloat4().getArray()).setKeyValue(new MFColor5().getArray()))
        .addChild(new ScalarInterpolator().setDEF("SI_0").setKey(new MFFloat6().getArray()).setKeyValue(new MFFloat7().getArray()))
        .addChild(new Script().setDEF("Animator_0")
          .addField(new field().setType("SFColor").setName("set_color").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFFloat").setName("set_roughness").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFNode").setName("targetMaterial").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PhysicalMaterial().setUSE("M_0")))
          .setSourceCode("ecmascript:\n"+
"        var matNode = null; // Variable to hold the material node reference\n"+
"\n"+
"        function initialize() {\n"+
"          // This function runs AFTER the targetMaterial field is connected.\n"+
"          // We safely store the reference to the actual material node.\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_color(value, timestamp) {\n"+
"          if (matNode) { // Check if the node reference was stored\n"+
"            matNode.baseColor = value;\n"+
"          }\n"+
"        }\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }"))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("PI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_0").setFromField("value_changed").setToNode("T_0").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("CI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("CI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_color"))
        .addChild(new ROUTE().setFromNode("C_0").setFromField("fraction_changed").setToNode("SI_0").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_0").setFromField("value_changed").setToNode("Animator_0").setToField("set_roughness"))
        .addComments(new CommentsBlock("Example: Metal Sphere with animated roughness (Using initialize())"))
        .addChild(new Transform().setDEF("T_1").setTranslation(new float[] {-10.411f ,0.2f ,-9.16f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setDEF("M_1").setBaseColor(new float[] {0.707f ,0.888f ,0.536f }).setRoughness(0.2f )))
            .setGeometry(new Sphere().setRadius(0.2f ))))
        .addChild(new TimeSensor().setDEF("C_1").setCycleInterval(4.15d).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_1").setKey(new MFFloat8().getArray()).setKeyValue(new MFVec3f9().getArray()))
        .addChild(new ScalarInterpolator().setDEF("SI_1").setKey(new MFFloat10().getArray()).setKeyValue(new MFFloat11().getArray()))
        .addChild(new Script().setDEF("Animator_1")
          .addField(new field().setType("SFFloat").setName("set_roughness").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFNode").setName("targetMaterial").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PhysicalMaterial().setUSE("M_1")))
          .setSourceCode("ecmascript:\n"+
"        var matNode = null;\n"+
"\n"+
"        function initialize() {\n"+
"          matNode = targetMaterial.value;\n"+
"        }\n"+
"\n"+
"        function set_roughness(value, timestamp) {\n"+
"          if (matNode) {\n"+
"            matNode.roughness = value;\n"+
"          }\n"+
"        }"))
        .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("PI_1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_1").setFromField("value_changed").setToNode("T_1").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_1").setFromField("fraction_changed").setToNode("SI_1").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_1").setFromField("value_changed").setToNode("Animator_1").setToField("set_roughness"))
        .addComments(new CommentsBlock("The extension-based spheres were already correct and need no changes"))
        .addChild(new Transform().setDEF("T_2").setTranslation(new float[] {-10.155f ,0.2f ,-8.324f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(0.05f )
                .setIORMaterialExtension(new IORMaterialExtension().setDEF("IOR_2").setIndexOfRefraction("1.5"))))
            .setGeometry(new Sphere().setRadius(0.2f ))))
        .addChild(new TimeSensor().setDEF("C_2").setCycleInterval(3.88d).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_2").setKey(new MFFloat12().getArray()).setKeyValue(new MFVec3f13().getArray()))
        .addChild(new ScalarInterpolator().setDEF("SI_2").setKey(new MFFloat14().getArray()).setKeyValue(new MFFloat15().getArray()))
        .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("PI_2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_2").setFromField("value_changed").setToNode("T_2").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_2").setFromField("fraction_changed").setToNode("SI_2").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_2").setFromField("value_changed").setToNode("IOR_2").setToField("set_indexOfRefraction"))
        .addChild(new Transform().setDEF("T_3").setTranslation(new float[] {-10.518f ,0.2f ,-7.283f })
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new PhysicalMaterial().setTransmissionFactor("0.95").setRoughness(0.05f ).setIndexOfRefraction("1.33")
                .setIridescenceMaterialExtension(new IridescenceMaterialExtension().setDEF("IRI_3").setIridescence("1").setIridescenceIndexOfRefraction("1.3").setIridescenceThicknessMinimum("100"))))
            .setGeometry(new Sphere().setRadius(0.2f ))))
        .addChild(new TimeSensor().setDEF("C_3").setCycleInterval(6d).setLoop(true))
        .addChild(new PositionInterpolator().setDEF("PI_3").setKey(new MFFloat16().getArray()).setKeyValue(new MFVec3f17().getArray()))
        .addChild(new ScalarInterpolator().setDEF("SI_3").setKey(new MFFloat18().getArray()).setKeyValue(new MFFloat19().getArray()))
        .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("PI_3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("PI_3").setFromField("value_changed").setToNode("T_3").setToField("set_translation"))
        .addChild(new ROUTE().setFromNode("C_3").setFromField("fraction_changed").setToNode("SI_3").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SI_3").setFromField("value_changed").setToNode("IRI_3").setToField("set_iridescenceThicknessMaximum")));
    return X3D0;
    }
private class MFFloat0 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f });
  }
}
private class MFColor1 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.15f ,0.25f ,0.8f ,0.9f ,0.9f ,0.9f });
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-10.871f ,0.2f ,-10.453f ,-10.871f ,0.6f ,-10.453f ,-10.871f ,0.2f ,-10.453f });
  }
}
private class MFFloat4 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFColor5 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.627f ,0.003f ,0.165f ,0.011f ,0.583f ,0.443f ,0.627f ,0.003f ,0.165f });
  }
}
private class MFFloat6 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFFloat7 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1f ,0.4f ,1f });
  }
}
private class MFFloat8 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f9 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-10.411f ,0.2f ,-9.16f ,-10.411f ,0.6f ,-9.16f ,-10.411f ,0.2f ,-9.16f });
  }
}
private class MFFloat10 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFFloat11 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.5f ,0f ,0.5f });
  }
}
private class MFFloat12 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f13 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-10.155f ,0.2f ,-8.324f ,-10.155f ,0.6f ,-8.324f ,-10.155f ,0.2f ,-8.324f });
  }
}
private class MFFloat14 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFFloat15 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.4f ,1.7f ,1.4f });
  }
}
private class MFFloat16 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFVec3f17 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-10.518f ,0.2f ,-7.283f ,-10.518f ,0.6f ,-7.283f ,-10.518f ,0.2f ,-7.283f });
  }
}
private class MFFloat18 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0.5f ,1f });
  }
}
private class MFFloat19 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {100f ,700f ,100f });
  }
}
}

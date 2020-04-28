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
public class CreateVrmlFromStringRandomBoxes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CreateVrmlFromStringRandomBoxes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/CreateVrmlFromStringRandomBoxes.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.1")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CreateVrmlFromStringRandomBoxes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Sample world constructed in a Script node using the EcmaScript Browser call createVrmlFromString."))
        .addMeta(new metaObject().setName("creator").setContent("Vincent Gardet"))
        .addMeta(new metaObject().setName("translator").setContent("Curt Blais"))
        .addMeta(new metaObject().setName("contributor").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("23 April 2002"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("CreateX3dFromStringRandomSpheres.x3d"))
        .addMeta(new metaObject().setName("Image").setContent("CreateVrmlFromStringRandomBoxes.png"))
        .addMeta(new metaObject().setName("reference").setContent("See CreateVrmlFromString tutorial at"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.gardet.nom.fr/vrmlcity/tut_cvfs.htm"))
        .addMeta(new metaObject().setName("subject").setContent("create VRML from string, javascript"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/CreateVrmlFromStringRandomBoxes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("CreateVrmlFromStringRandomBoxes.x3d"))
        .addChild(new NavigationInfoObject().setType(new java.lang.String[] {"EXAMINE","WALK","ANY"}).setAvatarSize(new MFFloatObject(new MFFloat0().getArray())).setHeadlight(false).setSpeed(5f))
        .addChild(new BackgroundObject().setSkyAngle(new MFFloatObject(new MFFloat1().getArray())).setSkyColor(new MFColorObject(new MFColor2().getArray())))
        .addChild(new DirectionalLightObject().setDirection(new float[] {0f,-0.5f,-1f}))
        .addChild(new DirectionalLightObject().setDirection(new float[] {-1f,-0.5f,0.5f}).setIntensity(0.9f))
        .addChild(new DirectionalLightObject().setDirection(new float[] {1f,-0.5f,0.5f}).setIntensity(0.8f))
        .addChild(new ViewpointObject().setDescription("Interaction view").setPosition(new float[] {50f,1.6f,150f}))
        .addChild(new ViewpointObject().setDescription("Plan (top-down) view").setOrientation(new float[] {1f,0f,0f,-1.54f}).setPosition(new float[] {50f,200f,50f}))
        .addChild(new ShapeObject()
          .setAppearance(new AppearanceObject()
            .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.3f,0.3f,1f}).setTransparency(0.5f)))
          .setGeometry(new BoxObject().setSize(new float[] {1000f,0.01f,1000f})))
        .addChild(new TransformObject().setTranslation(new float[] {50f,1.6f,140f})
          .addChild(new BillboardObject()
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.1f,0.3f,0.2f}).setEmissiveColor(new float[] {0.3f,0.6f,0.9f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString3().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString4().getArray())))))
            .addChild(new TouchSensorObject().setDEF("TouchText").setDescription("Touch text to recompute random boxes"))
            .addComments(new CommentsBlock("Transparent Box makes the text much more accessible/clickable"))
            .addChild(new ShapeObject()
              .setGeometry(new BoxObject().setSize(new float[] {8f,2f,0.1f}))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setTransparency(1f))))))
        .addComments(new CommentsBlock("ROOT is used at initialize time as parent for randomly generated Shape children"))
        .addChild(new GroupObject().setDEF("HoldsAutogeneratedContent")
          .addComments(new CommentsBlock("content added here at run time")))
        .addChild(new ScriptObject().setDEF("BoxGeneratorScript").setDirectOutput(true)
          .addField(new fieldObject().setType("SFNode").setName("ModifiableExternalNode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new GroupObject().setUSE("HoldsAutogeneratedContent")))
          .addField(new fieldObject().setType("SFBool").setName("recompute").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"function R () {\n"+
"	return Math.random();\n"+
"}\n"+
"function recompute (isActive) {\n"+
"	if (isActive==true) initialize();\n"+
"}\n"+
"\n"+
"function initialize() {\n"+
"  for (i=0; i < 10; i++) {\n"+
"    rand1 = 100*R();\n"+
"    rand2 = 100*R();\n"+
"    rand3 = 20*R();\n"+
"    rand4 = 40*R();\n"+
"    rand5 = 20*R();\n"+
"    sceneString ='Transform {                                                    \\n' +\n"+
"                      '   translation ' + rand1 + ' 0 ' + rand2 + ' \\n' +\n"+
"                      '   children [                                            \\n' +\n"+
"                      '           Shape {                                       \\n' +\n"+
"                      '                   appearance Appearance {               \\n' +\n"+
"                      '                      material Material {                \\n' +\n"+
"                      '                         diffuseColor ' + R() + ' ' + R() + ' ' + R() + '\\n' +\n"+
"                      '                      }                                  \\n' +\n"+
"                      '                   }                                     \\n' +\n"+
"                      '                   geometry Box {                        \\n' +\n"+
"                      '                      size ' + rand3 + ' ' + rand4 + ' ' + rand5 + '\\n' +\n"+
"                      '                   }                                     \\n' +\n"+
"                      '           }                                             \\n' +\n"+
"                      '   ]                                                     \\n' +\n"+
"                      '}                                                        \\n' +\n"+
"                      '#########################################################\\n';\n"+
"       Browser.print (sceneString);\n"+
"       newNode = Browser.createVrmlFromString(sceneString);\n"+
"//     newNode = Browser.createX3dFromString(sceneString);\n"+
"       ModifiableExternalNode.children[i] = newNode[0];\n"+
"  }\n"+
"}"))
        .addChild(new ROUTEObject().setFromField("isActive").setFromNode("TouchText").setToField("recompute").setToNode("BoxGeneratorScript")))      ;
    return X3D0;
    }
protected class MFFloat0 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.1f,1.6f,2f});
  }
}
protected class MFFloat1 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {1.1f,1.57f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.3f,0.3f,1f,0.4f,0.4f,1f,0.7f,0.7f,0.9f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Ten random boxes","computed at runtime"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

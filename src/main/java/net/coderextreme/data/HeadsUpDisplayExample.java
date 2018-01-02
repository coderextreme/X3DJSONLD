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
public class HeadsUpDisplayExample {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new HeadsUpDisplayExample().initialize().toFileJSON("../data/HeadsUpDisplayExample.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("HeadsUpDisplayExample.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen."))
        .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("15 July 2006"))
        .addMeta(new metaObject().setName("modified").setContent("24 October 2016"))
        .addMeta(new metaObject().setName("reference").setContent("HeadsUpDisplayPrototype.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.web3d.org/x3d/content/examples/X3dResources.html"))
        .addMeta(new metaObject().setName("rights").setContent("Copyright 2006, Daly Realism and Don Brutzman"))
        .addMeta(new metaObject().setName("subject").setContent("X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"))
        .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Simple Heads-Up Display (HUD) Prototype\n"+
" \n"+
" Manages the display of a HUD and maintains its position on the screen.\n"+
" Changes to fieldOfView (in Viewpoint node) will change screen position\n"+
" \n"+
" Fields:\n"+
" hudSize Size of HUD (initializeOnly - SFVec3f) default=\"1 1 .01\"\n"+
" hudColor Color of HUD (inputOutput - SFColor) default=\"1 1 1\"\n"+
" screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default=\"0 0 0\"\n"+
" hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\n"+
" position_changed Current viewer location (outputOnly - SFVec3f)\n"+
" orientation_changed Current viewer orientation (outputOnly - SFRotation)\n"+
" \n"+
" \n"+
""))
        .addChild(new ExternProtoDeclareObject().setName("HeadsUpDisplay").setAppinfo("Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("SFVec3f").setName("screenOffset").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("offset position for HUD relative to current view location, default 0 0 -5"))
          .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3D content positioned at HUD offset"))
          .addField(new fieldObject().setType("SFVec3f").setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD position update (in world coordinates) relative to original location"))
          .addField(new fieldObject().setType("SFRotation").setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("HUD orientation update relative to original location")))
        .addChild(new BackgroundObject().setDEF("SandyShallowBottom").setGroundAngle(new MFFloatObject(new MFFloat1().getArray())).setGroundColor(new MFColorObject(new MFColor2().getArray())).setSkyAngle(new MFFloatObject(new MFFloat3().getArray())).setSkyColor(new MFColorObject(new MFColor4().getArray())))
        .addChild(new ViewpointObject().setDescription("Heads-up display (HUD)"))
        .addComments(new CommentsBlock("ProtoDeclare is the \"cookie cutter\" template, ProtoInstance creates an actual occurrence"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("HeadsUpDisplay").setDEF("HeadsUpDisplayInstance")
          .addComments(new CommentsBlock("example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view")))
        .addChild(new InlineObject().setUrl(new MFStringObject(new MFString7().getArray()))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("screenOffset").setValue("-0.75 1 -5"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString6().getArray())).setSize(0.3f)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.894118f,0.819608f,1f})))));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HeadsUpDisplayPrototype.x3d#HeadsUpDisplay".replaceAll("\"", "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay".replaceAll("\"", "\\\""),"HeadsUpDisplayPrototype.wrl#HeadsUpDisplay".replaceAll("\"", "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay".replaceAll("\"", "\\\"")});
  }
}
protected class MFFloat1 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.05f,1.52f,1.56f,1.5707f});
  }
}
protected class MFColor2 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.2f,0.2f,0f,0.3f,0.3f,0f,0.5f,0.5f,0.3f,0.1f,0.3f,0.4f,0f,0.2f,0.4f});
  }
}
protected class MFFloat3 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0.04f,0.05f,0.1f,1.309f,1.57f});
  }
}
protected class MFColor4 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.8f,0.8f,0.2f,0.8f,0.8f,0.2f,0.1f,0.1f,0.6f,0.1f,0.1f,0.6f,0.1f,0.25f,0.8f,0.6f,0.6f,0.9f});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"HUD text stays fixed".replaceAll("\"", "\\\""),"while user navigates".replaceAll("\"", "\\\"")});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE".replaceAll("\"", "\\\""),"MIDDLE".replaceAll("\"", "\\\"")});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../HelloWorld.x3d".replaceAll("\"", "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d".replaceAll("\"", "\\\""),"../HelloWorld.wrl".replaceAll("\"", "\\\""),"http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl".replaceAll("\"", "\\\"")});
  }
}
}

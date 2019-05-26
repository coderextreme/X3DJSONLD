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
public class ViewPositionOrientationPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ViewPositionOrientationPrototype().initialize().toFileJSON("../data/ViewPositionOrientationPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ViewPositionOrientationPrototype.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Leonard Daly and Don Brutzman"))
        .addMeta(new metaObject().setName("translator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("1 November 2000"))
        .addMeta(new metaObject().setName("modified").setContent("27 May 2017"))
        .addMeta(new metaObject().setName("description").setContent("ViewPositionOrientation prototype provides local position and orientation as user navigates, with optional console output"))
        .addMeta(new metaObject().setName("info").setContent("Note fix: metadata is no longer an allowed ProtoDeclare field name, since ProtoInstance already includes a metadata field"))
        .addMeta(new metaObject().setName("reference").setContent("ViewPositionOrientationExample.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIExample.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/WhereAmIPrototype.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.realism.com/Web3D/Examples#WhereAmI"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl"))
        .addMeta(new metaObject().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Thanks to Leonard Daly for the original design of this prototype"))
        .addChild(new ProtoDeclareObject().setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFBool").setName("enabled").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("set_traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
            .addField(new fieldObject().setType("SFVec3f").setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
            .addField(new fieldObject().setType("SFRotation").setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
            .addField(new fieldObject().setType("MFString").setName("outputViewpointString").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ProximitySensorObject().setDEF("WhereSensor").setSize(new float[] {1000000000f,1000000000f,1000000000f})
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("enabled").setProtoField("enabled"))))
            .addComments(new CommentsBlock("it's a big old world out there! large box likely handles most use cases."))
            .addChild(new ScriptObject().setDEF("OutputPositionOrientation")
              .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFBool").setName("set_traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFVec3f").setName("set_position").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFRotation").setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFVec3f").setName("position").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
              .addField(new fieldObject().setType("SFRotation").setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 1 0 0"))
              .addField(new fieldObject().setType("SFVec3f").setName("position_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFRotation").setName("orientation_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("MFString").setName("outputViewpointString").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled"))
                .addConnect(new connectObject().setNodeField("set_traceEnabled").setProtoField("set_traceEnabled"))
                .addConnect(new connectObject().setNodeField("position_changed").setProtoField("position_changed"))
                .addConnect(new connectObject().setNodeField("orientation_changed").setProtoField("orientation_changed"))
                .addConnect(new connectObject().setNodeField("outputViewpointString").setProtoField("outputViewpointString")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function roundoff (value, digits) // for local use only\n"+
"{\n"+
"	var resolution = 1;\n"+
"	for (i = 1; i <= digits; i++ )\n"+
"	{\n"+
"		resolution *= 10;\n"+
"	}\n"+
"	return Math.round (value*resolution) / resolution; // round to resolution\n"+
"}\n"+
"function outputViewpoint ()\n"+
"{\n"+
"  var holdString = \n"+
"        '<Viewpoint position=\"' +\n"+
"		roundoff (position.x, 1) + ' ' +\n"+
"		roundoff (position.y, 1) + ' ' +\n"+
"		roundoff (position.z, 1) +\n"+
"        '\" orientation=\"' +\n"+
"		roundoff (orientation.x, 3) + ' ' +\n"+
"		roundoff (orientation.y, 3) + ' ' +\n"+
"		roundoff (orientation.z, 3) + ' ' +\n"+
"		roundoff (orientation.angle, 4) + '\"/>' ;\n"+
"   tracePrint (holdString);\n"+
"   outputViewpointString = new MFString (holdString);\n"+
"}\n"+
"function set_position (value)\n"+
"{\n"+
"	position = value; // save persistent value\n"+
"	position_changed = position; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_orientation (value)\n"+
"{\n"+
"	orientation = value; // save persistent value\n"+
"	orientation_changed = orientation; // output event\n"+
"	outputViewpoint ();\n"+
"}\n"+
"function set_traceEnabled (value)\n"+
"{\n"+
"	traceEnabled = value;\n"+
"	alwaysPrint ('traceEnabled=' + traceEnabled);\n"+
"}\n"+
"function alwaysPrint (text)\n"+
"{\n"+
"	Browser.print ('[ViewPositionOrientation] ' + text + '\\n');\n"+
"}\n"+
"function tracePrint (text)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (text);\n"+
"}"))
            .addChild(new ROUTEObject().setFromField("position_changed").setFromNode("WhereSensor").setToField("set_position").setToNode("OutputPositionOrientation"))
            .addChild(new ROUTEObject().setFromField("orientation_changed").setFromNode("WhereSensor").setToField("set_orientation").setToNode("OutputPositionOrientation"))))
        .addComments(new CommentsBlock("===================="))
        .addChild(new ViewpointObject().setDescription("ViewPositionOrientation prototype").setPosition(new float[] {0f,0f,14f}))
        .addChild(new AnchorObject().setDescription("ViewPositionOrientation Example").setParameter(new MFStringObject(new MFString0().getArray())).setUrl(new MFStringObject(new MFString1().getArray()))
          .addChild(new ShapeObject()
            .setGeometry(new TextObject().setString(new MFStringObject(new MFString2().getArray()))
              .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(1.2f)))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.6f,0.8f,0.4f}))))
          .addComments(new CommentsBlock("Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip"))
          .addChild(new ShapeObject()
            .addComments(new CommentsBlock("Author TODO: to adjust transparent Box as text-selection assist, set width and height to match size, then set transparency='1' to make invisible."))
            .setGeometry(new BoxObject().setSize(new float[] {16f,7f,0.001f}))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(1f))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ViewPositionOrientationExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.x3d","ViewPositionOrientationExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationExample.wrl"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ViewPositionOrientationPrototype","is a prototype definition file","","Click this text to see","ViewPositionOrientationExample"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

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
public class arc {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new arc().initialize().toFileJSON("arc.new.json");
    }
    public X3DObject initialize() {
      return new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("arc.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new metaObject().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,5f}).setDescription("a moving graph"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new TransformObject().setDEF("cylinder1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
            .setGeometry(new CylinderObject().setRadius(0.1f))))
        .addChild(new TransformObject().setDEF("cylinder2")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
            .setGeometry(new CylinderObject().setRadius(0.1f))))
        .addChild(new TransformObject().setDEF("cylinder3")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
            .setGeometry(new CylinderObject().setRadius(0.1f))))
        .addChild(new ProtoDeclareObject().setName("point")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("node")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("translation")))
              .addChild(new ShapeObject()
                .setGeometry(new SphereObject().setRadius(0.1f))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,0f}))))
              .addChild(new PositionInterpolatorObject().setDEF("PI1").setKey(new MFFloatObject(new MFFloat1().getArray())).setKeyValue(new MFVec3fObject(new MFVec3f2().getArray())))
              .addChild(new ScriptObject().setDEF("MB1")
                .addField(new fieldObject().setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("50 50 0"))
                .addField(new fieldObject().setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setType(fieldObject.TYPE_SFVEC3F).setValue("0 0 0"))
                .addField(new fieldObject().setName("location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFTIME))
                .addField(new fieldObject().setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setType(fieldObject.TYPE_MFVEC3F))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("CL1").setCycleInterval(3).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("location"))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction").setToNode("PI1").setToField("fraction"))
              .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value").setToNode("node").setToField("translation")))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclareObject().setName("x3dconnector")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
            .addField(new fieldObject().setName("endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("S1")
              .addField(new fieldObject().setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
              .addField(new fieldObject().setName("endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connectObject().setNodeField("connectornode").setProtoField("connectornode"))
                .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
"            function recompute(startpoint,endpoint){\n"+
"                var dif = endpoint.subtract(startpoint);\n"+
"                var dist = dif.length()*.5;\n"+
"                var dif2 = dif.multiply(.5);\n"+
"                var norm = dif.normalize();\n"+
"                var trans = startpoint.add(dif2);\n"+
"                connectornode.scale = new SFVec3f(1.0,dist,1.0);\n"+
"                connectornode.translation = trans;\n"+
"                connectornode.rotation = new SFRotation(new SFVec3f(0.0,1.0,0.0),norm);\n"+
"                //Browser.print('norm='+norm.toString());\n"+
"                //Browser.print('rotation='+rotation.toString());\n"+
"            }\n"+
"            function initialize(){\n"+
"                recompute(startnode.translation,endnode.translation);\n"+
"            }\n"+
"            function set_startpoint(val,t){\n"+
"                recompute(val,endnode.translation);\n"+
"            }\n"+
"            function set_endpoint(val,t){\n"+
"                recompute(startnode.translation,val);\n"+
"            }\n"+
""))))
        .addChild(new ProtoInstanceObject().setName("point").setDEF("start"))
        .addChild(new ProtoInstanceObject().setName("point").setDEF("end1"))
        .addChild(new ProtoInstanceObject().setName("point").setDEF("end2"))
        .addChild(new ProtoInstanceObject().setName("point").setDEF("end3"))
        .addChild(new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1")
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("start")))
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("end1")))
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder1"))))
        .addChild(new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2")
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("start")))
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("end2")))
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder2"))))
        .addChild(new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3")
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("start")))
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new ProtoInstanceObject().setName("point").setUSE("end3")))
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("cylinder3"))))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector1").setToField("startpoint"))
        .addChild(new ROUTEObject().setFromNode("end1").setFromField("translation").setToNode("connector1").setToField("endpoint"))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector2").setToField("startpoint"))
        .addChild(new ROUTEObject().setFromNode("end2").setFromField("translation").setToNode("connector2").setToField("endpoint"))
        .addChild(new ROUTEObject().setFromNode("start").setFromField("translation").setToNode("connector3").setToField("startpoint"))
        .addChild(new ROUTEObject().setFromNode("end3").setFromField("translation").setToNode("connector3").setToField("endpoint")))      ;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.4f,0.4f,0.4f});
  }
}
protected class MFFloat1 {
  protected MFFloatObject getArray() {
    return new MFFloatObject(new float[] {0f,1f});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,5f,0f});
  }
}
}

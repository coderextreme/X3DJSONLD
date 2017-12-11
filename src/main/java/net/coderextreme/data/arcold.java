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
public class arcold {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new arcold().initialize().toFileJSON("../data/arcold.new.json");
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
ProtoInstanceObject ProtoInstance11 = null;
ProtoInstanceObject ProtoInstance12 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("arc.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("John Carlson"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/arc.x3d"))
        .addMeta(new metaObject().setName("description").setContent("an attempt to implement an arc in a graph")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,5f}).setDescription("a moving graph"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new TransformObject().setDEF("trans1")
          .addChild(new TransformObject().setDEF("rotscale1")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new CylinderObject().setRadius(0.1f)))))
        .addChild(new TransformObject().setDEF("trans2")
          .addChild(new TransformObject().setDEF("rotscale2")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new CylinderObject().setRadius(0.1f)))))
        .addChild(new TransformObject().setDEF("trans3")
          .addChild(new TransformObject().setDEF("rotscale3")
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f})))
              .setGeometry(new CylinderObject().setRadius(0.1f)))))
        .addChild(new ProtoDeclareObject().setName("point")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
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
                .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new fieldObject().setType("SFVec3f").setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new fieldObject().setType("SFTime").setName("set_location").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
                .addField(new fieldObject().setType("MFVec3f").setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}\n"+
""))
              .addChild(new TimeSensorObject().setDEF("CL1").setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("cycleTime").setToNode("MB1").setToField("set_location"))
              .addChild(new ROUTEObject().setFromNode("CL1").setFromField("fraction_changed").setToNode("PI1").setToField("set_fraction"))
              .addChild(new ROUTEObject().setFromNode("MB1").setFromField("keyValue").setToNode("PI1").setToField("keyValue"))
              .addChild(new ROUTEObject().setFromNode("PI1").setFromField("value_changed").setToNode("node").setToField("set_translation")))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclareObject().setName("x3dconnector")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFNode").setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("SFNode").setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("SFNode").setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("SFNode").setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
            .addField(new fieldObject().setType("SFVec3f").setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFVec3f").setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("S1")
              .addField(new fieldObject().setType("SFNode").setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFNode").setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFNode").setName("transnode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFNode").setName("rotscalenode").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFVec3f").setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFVec3f").setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connectObject().setNodeField("transnode").setProtoField("transnode"))
                .addConnect(new connectObject().setNodeField("rotscalenode").setProtoField("rotscalenode"))
                .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }\n"+
""))))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("point").setDEF("G1"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("point").setDEF("G2"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("point").setDEF("G3"))
        .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("point").setDEF("G4"))
        .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance7 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance10 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance5 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance6 = new ProtoInstanceObject().setUSE("G2")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("transnode")
            .addChild(new TransformObject().setUSE("trans1")));
ProtoInstance4
          .addFieldValue(new fieldValueObject().setName("rotscalenode")
            .addChild(new TransformObject().setUSE("rotscale1")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance8 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance9 = new ProtoInstanceObject().setUSE("G3")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("transnode")
            .addChild(new TransformObject().setUSE("trans2")));
ProtoInstance7
          .addFieldValue(new fieldValueObject().setName("rotscalenode")
            .addChild(new TransformObject().setUSE("rotscale2")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(ProtoInstance11 = new ProtoInstanceObject().setUSE("G1")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(ProtoInstance12 = new ProtoInstanceObject().setUSE("G4")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("transnode")
            .addChild(new TransformObject().setUSE("trans3")));
ProtoInstance10
          .addFieldValue(new fieldValueObject().setName("rotscalenode")
            .addChild(new TransformObject().setUSE("rotscale3")));
    return X3D0;
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

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
public class x3dconnectorProto {
  public static void main(String[] args) {
    ConfigurationProperties.setShowDefaultAttributes(true);
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_nativeJava);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new x3dconnectorProto().initialize().toFileJSON("x3dconnectorProto.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("x3dconnectorProto"))
        .addMeta(new metaObject().setName("creator").setContent("Lost, Doug Sanden I think"))
        .addMeta(new metaObject().setName("generator").setContent("manual"))
        .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d"))
        .addMeta(new metaObject().setName("description").setContent("a generic proto to connect two objects"))
        .addMeta(new metaObject().setName("translated").setContent("02 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3dToJson.xslt, http://www.web3d.org/x3d/stylesheets/X3dToJson.html"))
        .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: http://www.web3d.org/wiki/index.php/X3D_JSON_Encoding"))
        .addMeta(new metaObject().setName("translated").setContent("2 May 2017"))
        .addMeta(new metaObject().setName("generator").setContent("X3DJSONLD: https://github.com/coderextreme/X3DJSONLD")))
      .setScene(new SceneObject()
        .addChild(new ViewpointObject().setPosition(new float[] {0f,0f,5f}).setDescription("Only Viewpoint"))
        .addChild(new BackgroundObject().setSkyColor(new MFColorObject(new MFColor0().getArray())))
        .addChild(new TransformObject().setDEF("G1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.2f,0.2f})))
            .setGeometry(new SphereObject().setRadius(0.1f)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS1"))
          .addChild(new ROUTEObject().setFromNode("PS1").setFromField("translation_changed").setToNode("G1").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G2").setTranslation(new float[] {1f,-1f,0.01f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.2f})))
            .setGeometry(new SphereObject().setRadius(0.1f)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS2"))
          .addChild(new ROUTEObject().setFromNode("PS2").setFromField("translation_changed").setToNode("G2").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G3").setTranslation(new float[] {1f,1f,0.01f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.2f})))
            .setGeometry(new SphereObject().setRadius(0.1f)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS3"))
          .addChild(new ROUTEObject().setFromNode("PS3").setFromField("translation_changed").setToNode("G3").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("G4").setTranslation(new float[] {-1f,1f,0.01f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.2f})))
            .setGeometry(new SphereObject().setRadius(0.1f)))
          .addChild(new PlaneSensorObject().setDescription("Grab to move").setDEF("PS4"))
          .addChild(new ROUTEObject().setFromNode("PS4").setFromField("translation_changed").setToNode("G4").setToField("set_translation")))
        .addChild(new TransformObject().setDEF("C1")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f}).setTransparency(0.5f)))
            .setGeometry(new CylinderObject().setRadius(0.05f))))
        .addChild(new TransformObject().setDEF("C2")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f}).setTransparency(0.5f)))
            .setGeometry(new CylinderObject().setRadius(0.05f))))
        .addChild(new TransformObject().setDEF("C3")
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.2f,0.7f,0.7f}).setTransparency(0.5f)))
            .setGeometry(new CylinderObject().setRadius(0.05f))))
        .addChild(new ProtoDeclareObject().setName("x3dconnector")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
            .addField(new fieldObject().setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
            .addField(new fieldObject().setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("S1")
              .addField(new fieldObject().setName("startnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("endnode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("connectornode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setType(fieldObject.TYPE_SFNODE))
              .addField(new fieldObject().setName("set_startpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
              .addField(new fieldObject().setName("set_endpoint").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setType(fieldObject.TYPE_SFVEC3F))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("startnode").setProtoField("startnode"))
                .addConnect(new connectObject().setNodeField("endnode").setProtoField("endnode"))
                .addConnect(new connectObject().setNodeField("connectornode").setProtoField("connectornode"))
                .addConnect(new connectObject().setNodeField("set_startpoint").setProtoField("set_startpoint"))
                .addConnect(new connectObject().setNodeField("set_endpoint").setProtoField("set_endpoint")))
              .setSourceCode("ecmascript:\n"+
"            function recompute(startpoint,endpoint){\n"+
"	        if (typeof endpoint === 'undefined') {\n"+
"			return;\n"+
"		}\n"+
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
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector1"))
        .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector2"))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("x3dconnector").setDEF("connector3"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector1").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G2").setFromField("translation_changed").setToNode("connector1").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector2").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G3").setFromField("translation_changed").setToNode("connector2").setToField("set_endpoint"))
        .addChild(new ROUTEObject().setFromNode("G1").setFromField("translation_changed").setToNode("connector3").setToField("set_startpoint"))
        .addChild(new ROUTEObject().setFromNode("G4").setFromField("translation_changed").setToNode("connector3").setToField("set_endpoint")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G2")));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C1")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G3")));
ProtoInstance1
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C2")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("startnode")
            .addChild(new TransformObject().setUSE("G1")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("endnode")
            .addChild(new TransformObject().setUSE("G4")));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("connectornode")
            .addChild(new TransformObject().setUSE("C3")));
    return X3D0;
    }
protected class MFColor0 {
  protected MFColorObject getArray() {
    return new MFColorObject(new float[] {0.4f,0.4f,0.4f});
  }
}
}

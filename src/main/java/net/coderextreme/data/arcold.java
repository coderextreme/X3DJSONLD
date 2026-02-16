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
public class arcold implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new arcold().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/arcold.new.java.x3d");
    model.toFileJSON("../data/arcold.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("arcold.x3d")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John Carlson")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("manual")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("an attempt to implement an arc in a graph"))))
      .setScene(new Scene()
        .addChild(new Viewpoint().setPosition(new float[] {0f ,0f ,5f }).setDescription(new SFString("a moving graph")))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()))
        .addChild(new Transform().setDEF(new SFString("trans1"))
          .addChild(new Transform().setDEF(new SFString("rotscale1"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f ,0.7f ,0.7f })))
              .setGeometry(new Cylinder().setRadius(0.1f )))))
        .addChild(new Transform().setDEF(new SFString("trans2"))
          .addChild(new Transform().setDEF(new SFString("rotscale2"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f ,0.7f ,0.7f })))
              .setGeometry(new Cylinder().setRadius(0.1f )))))
        .addChild(new Transform().setDEF(new SFString("trans3"))
          .addChild(new Transform().setDEF(new SFString("rotscale3"))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new float[] {0.2f ,0.7f ,0.7f })))
              .setGeometry(new Cylinder().setRadius(0.1f )))))
        .addChild(new ProtoDeclare().setName(new SFString("point"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF(new SFString("node"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("translation"))))
              .addChild(new Shape()
                .setGeometry(new Sphere().setRadius(0.1f ))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f }))))
              .addChild(new PositionInterpolator().setDEF(new SFString("PI1")).setKey(new MFFloat1().getArray()).setKeyValue(new MFVec3f2().getArray()))
              .addChild(new Script().setDEF(new SFString("MB1"))
                .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50 50 0")))
                .addField(new field().setType("SFVec3f").setName(new SFString("old")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
                .addField(new field().setType("SFTime").setName(new SFString("set_location")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("MFVec3f").setName(new SFString("keyValue")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}"))
              .addChild(new TimeSensor().setDEF(new SFString("CL1")).setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTE().setFromNode(new SFString("CL1")).setFromField(new SFString("cycleTime")).setToNode(new SFString("MB1")).setToField(new SFString("set_location")))
              .addChild(new ROUTE().setFromNode(new SFString("CL1")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("PI1")).setToField(new SFString("set_fraction")))
              .addChild(new ROUTE().setFromNode(new SFString("MB1")).setFromField(new SFString("keyValue")).setToNode(new SFString("PI1")).setToField(new SFString("keyValue")))
              .addChild(new ROUTE().setFromNode(new SFString("PI1")).setFromField(new SFString("value_changed")).setToNode(new SFString("node")).setToField(new SFString("set_translation"))))))
        .addComments(new CommentsBlock("from doug sanden"))
        .addChild(new ProtoDeclare().setName(new SFString("x3dconnector"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName(new SFString("startnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName(new SFString("endnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName(new SFString("transnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFNode").setName(new SFString("rotscalenode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .addField(new field().setType("SFVec3f").setName(new SFString("set_startpoint")).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName(new SFString("set_endpoint")).setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Script().setDEF(new SFString("S1"))
              .addField(new field().setType("SFNode").setName(new SFString("startnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName(new SFString("endnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName(new SFString("transnode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName(new SFString("rotscalenode")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFVec3f").setName(new SFString("set_startpoint")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFVec3f").setName(new SFString("set_endpoint")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("startnode")).setProtoField(new SFString("startnode")))
                .addConnect(new connect().setNodeField(new SFString("endnode")).setProtoField(new SFString("endnode")))
                .addConnect(new connect().setNodeField(new SFString("transnode")).setProtoField(new SFString("transnode")))
                .addConnect(new connect().setNodeField(new SFString("rotscalenode")).setProtoField(new SFString("rotscalenode")))
                .addConnect(new connect().setNodeField(new SFString("set_startpoint")).setProtoField(new SFString("set_startpoint")))
                .addConnect(new connect().setNodeField(new SFString("set_endpoint")).setProtoField(new SFString("set_endpoint"))))
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
"        }"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("point")).setDEF(new SFString("G1")))
        .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("point")).setDEF(new SFString("G2")))
        .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("point")).setDEF(new SFString("G3")))
        .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("point")).setDEF(new SFString("G4")))
        .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("x3dconnector")).setDEF(new SFString("connector1")))
        .addChild(ProtoInstance7 = new ProtoInstance().setName(new SFString("x3dconnector")).setDEF(new SFString("connector2")))
        .addChild(ProtoInstance10 = new ProtoInstance().setName(new SFString("x3dconnector")).setDEF(new SFString("connector3")))
        .addChild(new ROUTE().setFromNode(new SFString("G1")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector1")).setToField(new SFString("set_startpoint")))
        .addChild(new ROUTE().setFromNode(new SFString("G2")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector1")).setToField(new SFString("set_endpoint")))
        .addChild(new ROUTE().setFromNode(new SFString("G1")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector2")).setToField(new SFString("set_startpoint")))
        .addChild(new ROUTE().setFromNode(new SFString("G3")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector2")).setToField(new SFString("set_endpoint")))
        .addChild(new ROUTE().setFromNode(new SFString("G1")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector3")).setToField(new SFString("set_startpoint")))
        .addChild(new ROUTE().setFromNode(new SFString("G4")).setFromField(new SFString("translation_changed")).setToNode(new SFString("connector3")).setToField(new SFString("set_endpoint"))));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("startnode"))
            .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G1"))));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("endnode"))
            .addChild(ProtoInstance6 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G2"))));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("transnode"))
            .addChild(new Transform().setUSE(new SFString("trans1"))));
ProtoInstance4
          .addFieldValue(new fieldValue().setName(new SFString("rotscalenode"))
            .addChild(new Transform().setUSE(new SFString("rotscale1"))));
ProtoInstance7
          .addFieldValue(new fieldValue().setName(new SFString("startnode"))
            .addChild(ProtoInstance8 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G1"))));
ProtoInstance7
          .addFieldValue(new fieldValue().setName(new SFString("endnode"))
            .addChild(ProtoInstance9 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G3"))));
ProtoInstance7
          .addFieldValue(new fieldValue().setName(new SFString("transnode"))
            .addChild(new Transform().setUSE(new SFString("trans2"))));
ProtoInstance7
          .addFieldValue(new fieldValue().setName(new SFString("rotscalenode"))
            .addChild(new Transform().setUSE(new SFString("rotscale2"))));
ProtoInstance10
          .addFieldValue(new fieldValue().setName(new SFString("startnode"))
            .addChild(ProtoInstance11 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G1"))));
ProtoInstance10
          .addFieldValue(new fieldValue().setName(new SFString("endnode"))
            .addChild(ProtoInstance12 = new ProtoInstance().setName(new SFString("point")).setUSE(new SFString("G4"))));
ProtoInstance10
          .addFieldValue(new fieldValue().setName(new SFString("transnode"))
            .addChild(new Transform().setUSE(new SFString("trans3"))));
ProtoInstance10
          .addFieldValue(new fieldValue().setName(new SFString("rotscalenode"))
            .addChild(new Transform().setUSE(new SFString("rotscale3"))));
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.4f ,0.4f ,0.4f });
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFVec3f2 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,5f ,0f });
  }
}
}

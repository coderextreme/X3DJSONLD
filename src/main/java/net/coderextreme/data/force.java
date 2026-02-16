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
public class force implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new force().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/force.new.java.x3d");
    model.toFileJSON("../data/force.new.java.x3dj");
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
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addComponent(new component().setName(new SFString("Scripting")).setLevel(1))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("John W Carlson")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("December 13 2015")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("July 14 2025")))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("force.x3d")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("beginnings of a force directed graph in 3D")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("node"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("position")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF(new SFString("transform"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("position"))))
                .addChild(new Shape()
                  .setGeometry(new Sphere())
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f ,0f ,0f }))))
                .addChild(new Transform().setTranslation(new float[] {1f ,0f ,0f })
                  .addChild(new Shape()
                    .setGeometry(new Text().setString(new MFString0().getArray())
                      .setFontStyle(new FontStyle().setJustify(new MFString1().getArray()).setSize(5f )))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,1f }))))))
              .addChild(new PositionInterpolator().setDEF(new SFString("NodePosition")).setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
              .addChild(new Script().setDEF(new SFString("MoveBall"))
                .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50 50 0")))
                .addField(new field().setType("SFVec3f").setName(new SFString("old")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
                .addField(new field().setType("SFTime").setName(new SFString("set_cycle")).setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field().setType("MFVec3f").setName(new SFString("keyValue")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"			function set_cycle(value) {\n"+
"				old = translation;\n"+
"				translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"				keyValue = new MFVec3f(old, translation);\n"+
"			}"))
              .addChild(new TimeSensor().setDEF(new SFString("nodeClock")).setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTE().setFromNode(new SFString("nodeClock")).setFromField(new SFString("cycleTime")).setToNode(new SFString("MoveBall")).setToField(new SFString("set_cycle")))
              .addChild(new ROUTE().setFromNode(new SFString("nodeClock")).setFromField(new SFString("fraction_changed")).setToNode(new SFString("NodePosition")).setToField(new SFString("set_fraction")))
              .addChild(new ROUTE().setFromNode(new SFString("MoveBall")).setFromField(new SFString("keyValue")).setToNode(new SFString("NodePosition")).setToField(new SFString("keyValue")))
              .addChild(new ROUTE().setFromNode(new SFString("NodePosition")).setFromField(new SFString("value_changed")).setToNode(new SFString("transform")).setToField(new SFString("set_translation"))))))
        .addChild(new ProtoDeclare().setName(new SFString("cyl"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("set_positionA")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
            .addField(new field().setType("SFVec3f").setName(new SFString("set_positionB")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50 50 50"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new Extrusion().setDEF(new SFString("extrusion")).setCreaseAngle(0.785f ).setCrossSection(new MFVec2f4().getArray()).setSpine(new MFVec3f5().getArray()))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f ,1f ,0f }))))
              .addChild(new Script().setDEF(new SFString("MoveCylinder"))
                .addField(new field().setType("MFVec3f").setName(new SFString("spine")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 -50 0 0 0 0 0 50 0")))
                .addField(new field().setType("SFVec3f").setName(new SFString("endA")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0 0 0")))
                .addField(new field().setType("SFVec3f").setName(new SFString("endB")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("50 50 50")))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("endA")).setProtoField(new SFString("set_positionA")))
                  .addConnect(new connect().setNodeField(new SFString("endB")).setProtoField(new SFString("set_positionB"))))
                .setSourceCode("ecmascript:\n"+
"			function set_endA(value) {\n"+
"				spine = new MFVec3f(value, spine[1]);\n"+
"			}\n"+
"\n"+
"			function set_endB(value) {\n"+
"				spine = new MFVec3f(spine[0], value);\n"+
"			}"))
              .addChild(new ROUTE().setFromNode(new SFString("MoveCylinder")).setFromField(new SFString("spine")).setToNode(new SFString("extrusion")).setToField(new SFString("set_spine"))))))
        .addChild(new Transform().setDEF(new SFString("HoldsContent")).setScale(new float[] {0.1f ,0.1f ,0.1f })
          .addChild(new PlaneSensor().setDEF(new SFString("clickGenerator")).setMinPosition(new float[] {-50f ,-50f }).setMaxPosition(new float[] {50f ,50f }).setDescription(new SFString("click on background to add nodes, click on nodes to add links")))
          .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("node")).setDEF(new SFString("nodeA")))
          .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("node")).setDEF(new SFString("nodeB")))
          .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("node")).setDEF(new SFString("nodeC")))
          .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("node")).setDEF(new SFString("nodeD")))
          .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("cyl")).setDEF(new SFString("linkA")))
          .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("cyl")).setDEF(new SFString("linkB")))
          .addChild(ProtoInstance6 = new ProtoInstance().setName(new SFString("cyl")).setDEF(new SFString("linkC"))))
        .addChild(new Script().setDEF(new SFString("clickHandler"))
          .addField(new field().setType("SFInt32").setName(new SFString("counter")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0")))
          .addField(new field().setType("SFBool").setName(new SFString("add_node")).setAccessType(field.ACCESSTYPE_INPUTONLY).setValue(new SFString("false")))
          .addComments(new CommentsBlock("<field accessType=\"outputOnly\" name=\"node_changed\" type=\"SFNode\"/>"))
          .addComments(new CommentsBlock("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\">"))
          .addComments(new CommentsBlock("<Transform USE=\"HoldsContent\"/>"))
          .addComments(new CommentsBlock("</field>"))
          .setSourceCode("ecmascript:\n"+
"	function add_node(value) {\n"+
"                // Browser.print('hey ', counter);\n"+
"                counter = counter++;\n"+
"		Browser.appendTo(Browser.getDocument().querySelector(\"field [name=ModifiableNode]\"),\n"+
"			{ \"ProtoInstance\":\n"+
"				{ \"@name\":\"node\",\n"+
"				  \"@DEF\":\"node'+counter+'\",\n"+
"				  \"fieldValue\": [\n"+
"					{\n"+
"						 \"@name\":\"position\",\n"+
"						 \"@value\":[0.0,0.0,0.0]\n"+
"					}\n"+
"				  ]\n"+
"				}\n"+
"			});\n"+
"\n"+
"        }"))
        .addChild(new ROUTE().setFromNode(new SFString("clickGenerator")).setFromField(new SFString("isActive")).setToNode(new SFString("clickHandler")).setToField(new SFString("add_node")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeA")).setFromField(new SFString("position")).setToNode(new SFString("linkA")).setToField(new SFString("set_positionA")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeB")).setFromField(new SFString("position")).setToNode(new SFString("linkA")).setToField(new SFString("set_positionB")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeA")).setFromField(new SFString("position")).setToNode(new SFString("linkB")).setToField(new SFString("set_positionA")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeC")).setFromField(new SFString("position")).setToNode(new SFString("linkB")).setToField(new SFString("set_positionB")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeA")).setFromField(new SFString("position")).setToNode(new SFString("linkC")).setToField(new SFString("set_positionA")))
        .addChild(new ROUTE().setFromNode(new SFString("nodeD")).setFromField(new SFString("position")).setToNode(new SFString("linkC")).setToField(new SFString("set_positionB"))));
ProtoInstance0
            .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("0 0 0")));
ProtoInstance1
            .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("50 50 50")));
ProtoInstance2
            .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("-50 -50 -50")));
ProtoInstance3
            .addFieldValue(new fieldValue().setName(new SFString("position")).setValue(new SFString("50 50 -50")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Node"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
private class MFFloat2 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,1f });
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,5f ,0f });
  }
}
private class MFVec2f4 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f ,0f ,0.92f ,-0.38f ,0.71f ,-0.71f ,0.38f ,-0.92f ,0f ,-1f ,-0.38f ,-0.92f ,-0.71f ,-0.71f ,-0.92f ,-0.38f ,-1f ,0f ,-0.92f ,0.38f ,-0.71f ,0.71f ,-0.38f ,0.92f ,0f ,1f ,0.38f ,0.92f ,0.71f ,0.71f ,0.92f ,0.38f ,1f ,0f });
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,-50f ,0f ,0f ,0f ,0f ,0f ,50f ,0f });
  }
}
}

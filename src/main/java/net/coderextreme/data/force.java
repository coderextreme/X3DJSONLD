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
public class force {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new force().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/force.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Scripting").setLevel(1))
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("title").setContent("force.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/force.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Transform().setDEF("transform")
                .setIS(new IS("transform")
                  .addConnect(new connect().setNodeField("translation").setProtoField("position")))
                .addChild(new Shape("transform")
                  .setGeometry(new Sphere())
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}))))
                .addChild(new Transform("transform").setTranslation(new float[] {1f,0f,0f})
                  .addChild(new Shape()
                    .setGeometry(new Text().setString(new MFString0().getArray())
                      .setFontStyle(new FontStyle().setJustify(new MFString1().getArray()).setSize(5f)))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,1f}))))))
              .addChild(new PositionInterpolator().setDEF("NodePosition").setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
              .addChild(new Script().setDEF("MoveBall")
                .addField(new field("MoveBall").setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
                .addField(new field("MoveBall").setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
                .addField(new field("MoveBall").setType("SFTime").setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field("MoveBall").setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                .setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}"))
              .addChild(new TimeSensor().setDEF("nodeClock").setCycleInterval(3d).setLoop(true))
              .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
              .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
              .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
              .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation")))))
        .addChild(new ProtoDeclare().setName("cylinder")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("set_positionA").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("set_positionB").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new Shape()
                .setGeometry(new Extrusion().setDEF("extrusion").setCreaseAngle(0.785f).setCrossSection(new MFVec2f4().getArray()).setSpine(new MFVec3f5().getArray()))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f,1f,0f}))))
              .addChild(new Script().setDEF("MoveCylinder")
                .addField(new field("MoveCylinder").setType("MFVec3f").setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0"))
                .addField(new field("MoveCylinder").setType("SFVec3f").setName("set_endA").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .addField(new field("MoveCylinder").setType("SFVec3f").setName("set_endB").setAccessType(field.ACCESSTYPE_INPUTONLY))
                .setIS(new IS("MoveCylinder")
                  .addConnect(new connect().setNodeField("set_endA").setProtoField("set_positionA"))
                  .addConnect(new connect().setNodeField("set_endB").setProtoField("set_positionB")))
                .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === 'undefined') {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"\n"+
"                function set_spine(value) {\n"+
"                    spine = value;\n"+
"                }"))
              .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine")))))
        .addChild(new Transform().setDEF("HoldsContent").setScale(new float[] {0.1f,0.1f,0.1f})
          .addChild(new PlaneSensor("HoldsContent").setDEF("clickGenerator").setMinPosition(new float[] {-50f,-50f}).setMaxPosition(new float[] {50f,50f}).setDescription("click on background to add nodes, click on nodes to add links"))
          .addChild(ProtoInstance0 = new ProtoInstance("HoldsContent").setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new ProtoInstance("HoldsContent").setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new ProtoInstance("HoldsContent").setName("node").setDEF("nodeC"))
          .addChild(ProtoInstance3 = new ProtoInstance("HoldsContent").setName("node").setDEF("nodeD"))
          .addChild(ProtoInstance4 = new ProtoInstance("HoldsContent").setName("cylinder").setDEF("linkA"))
          .addChild(ProtoInstance5 = new ProtoInstance("HoldsContent").setName("cylinder").setDEF("linkB"))
          .addChild(ProtoInstance6 = new ProtoInstance("HoldsContent").setName("cylinder").setDEF("linkC")))
        .addChild(new Script().setDEF("clickHandler")
          .addField(new field("clickHandler").setType("SFInt32").setName("counter").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0"))
          .addField(new field("clickHandler").setType("SFNode").setName("node_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field("clickHandler").setType("SFBool").setName("add_node").setAccessType(field.ACCESSTYPE_INPUTONLY).setValue("false"))
          .addComments("<field name=\"ModifiableNode\" type=\"SFNode\" accessType=\"inputOutput\"> <Transform USE=\"HoldsContent\"/> </field>")
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
        .addChild(new ROUTE().setFromNode("clickGenerator").setFromField("isActive").setToNode("clickHandler").setToField("add_node"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkB").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeC").setFromField("position").setToNode("linkB").setToField("set_positionB"))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkC").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeD").setFromField("position").setToNode("linkC").setToField("set_positionB")))      ;
ProtoInstance0
            .addFieldValue(new fieldValue("nodeA").setName("position").setValue("0 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue("nodeB").setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new fieldValue("nodeC").setName("position").setValue("-50 -50 -50"));
ProtoInstance3
            .addFieldValue(new fieldValue("nodeD").setName("position").setValue("50 50 -50"));
ProtoInstance4
            .addFieldValue(new fieldValue("linkA").setName("set_positionA").setValue("0 0 0"));
ProtoInstance4
            .addFieldValue(new fieldValue("linkA").setName("set_positionB").setValue("50 50 50"));
ProtoInstance5
            .addFieldValue(new fieldValue("linkB").setName("set_positionA").setValue("0 0 0"));
ProtoInstance5
            .addFieldValue(new fieldValue("linkB").setName("set_positionB").setValue("-50 -50 -50"));
ProtoInstance6
            .addFieldValue(new fieldValue("linkC").setName("set_positionA").setValue("50 50 50"));
ProtoInstance6
            .addFieldValue(new fieldValue("linkC").setName("set_positionB").setValue("50 50 -50"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Node"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat2 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f,1f});
  }
}
protected class MFVec3f3 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,0f,0f,0f,5f,0f});
  }
}
protected class MFVec2f4 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec3f5 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f,-50f,0f,0f,50f,0f});
  }
}
}

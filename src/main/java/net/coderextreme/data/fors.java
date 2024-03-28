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
public class fors implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new fors().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/fors.new.java.x3d");
    model.toFileJSON("../data/fors.new.java.json");
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
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("creator").setContent("John W Carlson"))
        .addMeta(new meta().setName("created").setContent("December 13 2015"))
        .addMeta(new meta().setName("title").setContent("fors.x3d"))
        .addMeta(new meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"))
        .addMeta(new meta().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new meta().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("position").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("position")))
              .addChild(new Shape()
                .setGeometry(new Sphere())
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new double[] {1,0,0}))))
              .addChild(new Transform().setTranslation(new double[] {1,0,0})
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new MFString0().getArray())
                    .setFontStyle(new FontStyle().setJustify(new MFString1().getArray()).setSize(5)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(new double[] {0,0,1}))))))
            .addChild(new PositionInterpolator().setDEF("NodePosition").setKey(new MFFloat2().getArray()).setKeyValue(new MFVec3f3().getArray()))
            .addChild(new Script().setDEF("MoveBall")
              .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
              .addField(new field().setType("SFVec3f").setName("old").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new field().setType("SFTime").setName("set_cycle").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("MFVec3f").setName("keyValue").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}"))
            .addChild(new TimeSensor().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
            .addChild(new ROUTE().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
            .addChild(new ROUTE().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
            .addChild(new ROUTE().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
            .addChild(new ROUTE().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(new ProtoDeclare().setName("cyl")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName("set_positionA").setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setType("SFVec3f").setName("set_positionB").setAccessType(field.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Shape()
              .setGeometry(new Extrusion().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection(new MFVec2f4().getArray()).setSpine(new MFVec3f5().getArray()))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(new double[] {0,1,0}))))
            .addChild(new Script().setDEF("MoveCylinder")
              .addField(new field().setType("MFVec3f").setName("spine").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 50 0"))
              .addField(new field().setType("SFVec3f").setName("set_endA").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFVec3f").setName("set_endB").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .setIS(new IS()
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
            .addChild(new ROUTE().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
        .addChild(new Transform().setDEF("HoldsContent").setScale(new double[] {0.1,0.1,0.1})
          .addChild(new PlaneSensor().setDEF("clickGenerator").setMinPosition(new double[] {-50,-50}).setMaxPosition(new double[] {50,50}).setDescription("click on background to add nodes, click on nodes to add links"))
          .addChild(ProtoInstance0 = new ProtoInstance().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new ProtoInstance().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new ProtoInstance().setName("cyl").setDEF("linkA")))
        .addChild(new ROUTE().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("set_positionA"))
        .addChild(new ROUTE().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("set_positionB")))      ;
ProtoInstance0
            .addFieldValue(new fieldValue().setName("position").setValue("0 0 0"));
ProtoInstance1
            .addFieldValue(new fieldValue().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new fieldValue().setName("set_positionA").setValue("0 0 0"));
ProtoInstance2
            .addFieldValue(new fieldValue().setName("set_positionB").setValue("50 50 50"));
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
    return new org.web3d.x3d.jsail.fields.MFFloat(new double[] {0,1});
  }
}
private class MFVec3f3 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0,5,0});
  }
}
private class MFVec2f4 {
  private org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new double[] {1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
  }
}
private class MFVec3f5 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,-50,0,0,50,0});
  }
}
}

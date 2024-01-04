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
public class bubble {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new bubble().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/bubble.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("bubble.x3d"))
        .addMeta(new meta().setName("creator").setContent("John Carlson"))
        .addMeta(new meta().setName("description").setContent("Tour around a prismatic sphere"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("Bubble")
          .setProtoInterface(new ProtoInterface())
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("transform")
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,0f,0f}).setTransparency(0.2f)))
                .setGeometry(new Sphere().setRadius(0.25f)))
              .addChild(new Script().setDEF("bounce")
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scale").setValue("1 1 1"))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("translation"))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("velocity"))
                .addField(new field().setType("SFVec3f").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("scalvel"))
                .addField(new field().setType("SFFloat").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
                .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize() {\n"+
"\n"+
"    velocity = new SFVec3f(Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125, Math.random() * 0.25 - 0.125);\n"+
"\n"+
"\n"+
"    scalvel = new SFVec3f(Math.random() * 0.4, Math.random() * 0.4, Math.random() * 0.4);\n"+
"\n"+
"}\n"+
"\n"+
"\n"+
"function set_fraction(value) {\n"+
"\n"+
"	translation = new SFVec3f(\n"+
"\n"+
"		translation.x + velocity.x,\n"+
"\n"+
"		translation.y + velocity.y,\n"+
"\n"+
"		translation.z + velocity.z);\n"+
"\n"+
"	scale = new SFVec3f(\n"+
"\n"+
"		scale.x + scalvel.x,\n"+
"\n"+
"		scale.y + scalvel.y,\n"+
"\n"+
"		scale.z + scalvel.z);\n"+
"\n"+
"        // if you get to far away or too big, explode\n"+
"\n"+
"        if ( Math.abs(translation.x) > 256) {\n"+
"\n"+
"		translation.x = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"        if ( Math.abs(translation.y) > 256) {\n"+
"\n"+
"		translation.y = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"        if ( Math.abs(translation.z) > 256) {\n"+
"\n"+
"		translation.z = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"	if (Math.abs(scale.x) > 20) {\n"+
"\n"+
"		scale.x = scale.x/2;\n"+
"\n"+
"		translation.x = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"	if (Math.abs(scale.y) > 20) {\n"+
"\n"+
"		scale.y = scale.y/2;\n"+
"\n"+
"		translation.y = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"	if (Math.abs(scale.z) > 20) {\n"+
"\n"+
"		scale.z = scale.z/2;\n"+
"\n"+
"		translation.z = 0;\n"+
"\n"+
"		initialize();\n"+
"\n"+
"	}\n"+
"\n"+
"}"))
              .addChild(new TimeSensor().setDEF("bubbleClock").setCycleInterval(10d).setLoop(true)))
            .addChild(new ROUTE().setFromNode("bounce").setFromField("translation").setToNode("transform").setToField("translation"))
            .addChild(new ROUTE().setFromNode("bounce").setFromField("scale").setToNode("transform").setToField("scale"))
            .addChild(new ROUTE().setFromNode("bubbleClock").setFromField("fraction_changed").setToNode("bounce").setToField("set_fraction"))))
        .addChild(new NavigationInfo().setType("\"EXAMINE\""))
        .addChild(new Viewpoint().setDescription("Bubble in action").setPosition(new float[] {0f,0f,4f}))
        .addChild(ProtoInstance0 = new ProtoInstance().setDEF("bubbleA").setName("Bubble")))      ;
    return X3D0;
    }
}

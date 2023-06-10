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
public class NancyDivingProtoInstances {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new NancyDivingProtoInstances().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/NancyDivingProtoInstances.new.json");
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
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
ProtoInstance ProtoInstance35 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("NancyDivingProtoInstances.x3d"))
        .addMeta(new meta().setName("description").setContent("Nancy having fun scuba diving - developmental model using ProtoInstance instead of HAnim native tags, do not use this pattern."))
        .addMeta(new meta().setName("warning").setContent("This is a developmental example, use HAnim native tags as shown in other examples instead of the prototypes and ProtoInstances shown here."))
        .addMeta(new meta().setName("creator").setContent("Etsuko Lippi"))
        .addMeta(new meta().setName("translators").setContent("Tom Miller and Don Brutzman, NPS"))
        .addMeta(new meta().setName("created").setContent("19 November 2001"))
        .addMeta(new meta().setName("modified").setContent("4 July 2020"))
        .addMeta(new meta().setName("TODO").setContent("left arm motion still has a problem"))
        .addMeta(new meta().setName("creator").setContent("Cindy Ballreich cindy@ballreich.net 3Name3D"))
        .addMeta(new meta().setName("rights").setContent("1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDivingProtoInstances.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new ExternProtoDeclare().setName("Joint").setAppinfo("The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Joint.html").setUrl(new MFString0().getArray())
          .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFFloat").setName("llimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFRotation").setName("limitOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFFloat").setName("stiffness").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFFloat").setName("ulimit").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("MFInt32").setName("skinCoordIndex").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("MFFloat").setName("skinCoordWeight").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY)))
        .addChild(new ExternProtoDeclare().setName("Segment").setAppinfo("The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc) of the humanoid figure is represented by a Segment node.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Segment.html").setUrl(new MFString1().getArray())
          .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFVec3f").setName("centerOfMass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFNode").setName("coord").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("contains Coordinate nodes"))
          .addField(new field().setType("MFNode").setName("displacers").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("contains Displacer nodes"))
          .addField(new field().setType("SFFloat").setName("mass").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFFloat").setName("momentsOfInertia").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("addChildren").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("MFNode").setName("removeChildren").setAccessType(field.ACCESSTYPE_INPUTONLY)))
        .addChild(new ExternProtoDeclare().setName("Humanoid").setAppinfo("The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html").setUrl(new MFString2().getArray())
          .addField(new field().setType("SFVec3f").setName("bboxCenter").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFVec3f").setName("bboxSize").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFVec3f").setName("center").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("humanoidBody").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 1.1 field container for body geometry Hint: replaced by 2.0 skeleton").setDocumentation("http://HAnim.org/Specifications/HAnim1.1/#humanoid"))
          .addField(new field().setType("MFString").setName("info").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("joints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Joint nodes"))
          .addField(new field().setType("SFString").setName("name").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFRotation").setName("rotation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFVec3f").setName("scale").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFRotation").setName("scaleOrientation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("MFNode").setName("segments").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Segment nodes"))
          .addField(new field().setType("MFNode").setName("sites").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Site nodes"))
          .addField(new field().setType("SFVec3f").setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFString").setName("version").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("legal values: 1.1 or 2.0"))
          .addField(new field().setType("MFNode").setName("viewpoints").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Container field for Viewpoint nodes"))
          .addField(new field().setType("SFNode").setName("skinNormal").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0"))
          .addField(new field().setType("SFString").setName("humanoidVersion").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Version of the humanoid being modeled. Hint: HAnim version 2.0"))
          .addField(new field().setType("MFNode").setName("skeleton").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody").setDocumentation("http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html"))
          .addField(new field().setType("SFNode").setName("skinCoord").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Hint: HAnim version 2.0")))
        .addComments("====================")
        .addChild(new ExternProtoDeclare().setName("ViewPositionOrientation").setAppinfo("ViewPositionOrientation provides provides console output of local position and orientation as user navigates").setUrl(new MFString3().getArray())
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not ViewPositionOrientation sends output to console"))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output internal trace messages for debugging this node, intended for developer use only"))
          .addField(new field().setType("SFBool").setName("set_traceEnabled").setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Ability to turn output tracing on/off at runtime"))
          .addField(new field().setType("SFVec3f").setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local position"))
          .addField(new field().setType("SFRotation").setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output local orientation"))
          .addField(new field().setType("MFString").setName("outputViewpointString").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("MFString value of new Viewpoint, suitable for use in string field of a Text node")))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("ViewPositionOrientation").setDEF("ExampleViewPositionOrientation"))
        .addComments("Example use: https://savage.nps.edu/Savage/Tools/Animation/ViewPositionOrientationExample.x3d")
        .addComments("====================")
        .addComments("Start scene graph.")
        .addChild(ProtoInstance1 = new ProtoInstance().setName("ViewPositionOrientation"))
        .addChild(new Background().setSkyColor(new MFColor4().getArray()))
        .addChild(new NavigationInfo().setType(new java.lang.String[] {"EXAMINE"}).setAvatarSize(new MFFloat5().getArray()).setSpeed(0.5000f))
        .addChild(new Viewpoint().setDescription("Nancy diving default viewpoint").setPosition(new float[] {-0.8f,0f,3.1f}))
        .addChild(new LOD()
          .addChild(new Group().setDEF("Viewpoint")
            .addComments("High Resolution")
            .addChild(new Viewpoint().setDescription("Nancy front viewpoint").setOrientation(new float[] {-0.354f,0.878f,-0.321f,4.5485f}).setPosition(new float[] {-2.2f,-0.7f,0f}))
            .addChild(new Viewpoint().setDescription("Nancy above viewpoint").setOrientation(new float[] {-0.126f,-0.978f,-0.168f,1.5385f}).setPosition(new float[] {-3f,0.5f,0f}))
            .addChild(new Viewpoint().setDescription("Nancy back viewpoint").setOrientation(new float[] {0.037f,0.999f,-0.011f,1.572f}).setPosition(new float[] {0.7f,0.1f,0f}))
            .addChild(new Viewpoint().setDescription("Nancy side viewpoint").setOrientation(new float[] {0.121f,0.987f,-0.105f,3.2682f}).setPosition(new float[] {-1.2f,-0.2f,-1.5f}))
            .addChild(new Viewpoint().setDescription("Nancy viewpoint through her goggles").setOrientation(new float[] {-0.357f,0.872f,0.335f,1.5225f}).setPosition(new float[] {-1.5f,0.1f,0f}))
            .addChild(new Group().setDEF("HighResolution")
              .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f})
                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f})
                  .addChild(new WorldInfo().setInfo(new MFString6().getArray()).setTitle("Nancy - an HAnim compliant avatar by 3Name3D"))
                  .addChild(ProtoInstance2 = new ProtoInstance().setName("Humanoid").setDEF("Humanoid")))))))
        .addChild(new Script().setDEF("finWarpScript")
          .addField(new field().setType("SFRotation").setName("set_rotationL").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFRotation").setName("set_rotationR").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFBool").setName("fin_warpL").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFBool").setName("fin_warpR").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setSourceCode("ecmascript:\n"+
"\n"+
"\n"+
"var positionX;\n"+
"var positionY;\n"+
"var positionZ;\n"+
"var rotation;\n"+
"\n"+
"function initialize()\n"+
"{\n"+
"    	positionX = 0.0;\n"+
"	positionY = 0.0;\n"+
"	positionZ = 0.0;\n"+
"	rotation = 0.0;\n"+
"}\n"+
"\n"+
"function set_rotationL( value, timeStamp)\n"+
"{\n"+
"	rotationFinL = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinL = value;\n"+
"	//print ('rotationFinL[0] ' + rotationFinL[0]);\n"+
"	if (rotationFinL[0] <= 0)\n"+
"	{\n"+
"		fin_warpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpL = 1;\n"+
"	}\n"+
"	\n"+
"}\n"+
"\n"+
"function set_rotationR( value, timeStamp)\n"+
"{\n"+
"	rotationFinR = new SFRotation(positionX, positionY, positionZ, rotation);\n"+
"	rotationFinR = value;\n"+
"	//print ('rotationFin[0] ' + rotationFinR[0]);\n"+
"	if (rotationFinR[0] <= 0)\n"+
"	{\n"+
"		fin_warpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		fin_warpR = 1;\n"+
"	}\n"+
"	\n"+
"}"))
        .addChild(new Group().setDEF("Animations")
          .addChild(new Group().setDEF("Dive_Animation")
            .addChild(new OrientationInterpolator().setDEF("r_ankle_RotationInterpolator_BasicDive").setKey(new MFFloat100().getArray()).setKeyValue(new MFRotation101().getArray()))
            .addChild(new OrientationInterpolator().setDEF("r_knee_RotationInterpolator_BasicDive").setKey(new MFFloat102().getArray()).setKeyValue(new MFRotation103().getArray()))
            .addChild(new OrientationInterpolator().setDEF("r_hip_RotationInterpolator_BasicDive").setKey(new MFFloat104().getArray()).setKeyValue(new MFRotation105().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_ankle_RotationInterpolator_BasicDive").setKey(new MFFloat106().getArray()).setKeyValue(new MFRotation107().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_knee_RotationInterpolator_BasicDive").setKey(new MFFloat108().getArray()).setKeyValue(new MFRotation109().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_hip_RotationInterpolator_BasicDive").setKey(new MFFloat110().getArray()).setKeyValue(new MFRotation111().getArray()))
            .addChild(new OrientationInterpolator().setDEF("lower_body_RotationInterpolator_BasicDive").setKey(new MFFloat112().getArray()).setKeyValue(new MFRotation113().getArray()))
            .addComments("")
            .addChild(new OrientationInterpolator().setDEF("r_wrist_RotationInterpolator_BasicDive").setKey(new MFFloat114().getArray()).setKeyValue(new MFRotation115().getArray()))
            .addChild(new OrientationInterpolator().setDEF("r_elbow_RotationInterpolator_BasicDive").setKey(new MFFloat116().getArray()).setKeyValue(new MFRotation117().getArray()))
            .addChild(new OrientationInterpolator().setDEF("r_shoulder_RotationInterpolator_BasicDive").setKey(new MFFloat118().getArray()).setKeyValue(new MFRotation119().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_wrist_RotationInterpolator_BasicDive").setKey(new MFFloat120().getArray()).setKeyValue(new MFRotation121().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_elbow_RotationInterpolator_BasicDive").setKey(new MFFloat122().getArray()).setKeyValue(new MFRotation123().getArray()))
            .addChild(new OrientationInterpolator().setDEF("l_shoulder_RotationInterpolator_BasicDive").setKey(new MFFloat124().getArray()).setKeyValue(new MFRotation125().getArray()))
            .addComments("")
            .addChild(new OrientationInterpolator().setDEF("head_RotationInterpolator_BasicDive").setKey(new MFFloat126().getArray()).setKeyValue(new MFRotation127().getArray()))
            .addChild(new OrientationInterpolator().setDEF("neck_RotationInterpolator_BasicDive").setKey(new MFFloat128().getArray()).setKeyValue(new MFRotation129().getArray()))
            .addChild(new OrientationInterpolator().setDEF("upper_body_RotationInterpolator_BasicDive").setKey(new MFFloat130().getArray()).setKeyValue(new MFRotation131().getArray()))
            .addChild(new OrientationInterpolator().setDEF("whole_body_RotationInterpolator_BasicDive").setKey(new MFFloat132().getArray()).setKeyValue(new MFRotation133().getArray()))
            .addChild(new PositionInterpolator().setDEF("whole_body_TranslationInterpolator_BasicDive").setKey(new MFFloat134().getArray()).setKeyValue(new MFVec3f135().getArray()))
            .addChild(new TimeSensor().setDEF("Dive_Time").setCycleInterval(7d).setLoop(true).setStartTime(-1d))
            .addChild(new ProximitySensor().setDEF("TriggerProximitySensor").setSize(new float[] {50f,50f,50f}))))
        .addChild(new ROUTE().setFromField("enterTime").setFromNode("TriggerProximitySensor").setToField("startTime").setToNode("Dive_Time"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_ankle_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_knee_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_hip_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_ankle_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_knee_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_hip_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("lower_body_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("head_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("neck_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("upper_body_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("whole_body_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("whole_body_TranslationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_ankle_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_knee_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_hip_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_ankle_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_ankle"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_knee_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_knee"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_hip_RotationInterpolator_BasicDive").setToField("set_rotationL").setToNode("finWarpScript"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_hip_RotationInterpolator_BasicDive").setToField("set_rotationR").setToNode("finWarpScript"))
        .addChild(new ROUTE().setFromField("fin_warpL").setFromNode("finWarpScript").setToField("finL").setToNode("FinScript"))
        .addChild(new ROUTE().setFromField("fin_warpR").setFromNode("finWarpScript").setToField("finR").setToNode("FinScript"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_hip_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_hip"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("lower_body_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_sacroiliac"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("head_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_skullbase"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("neck_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_vc4"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("upper_body_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_vl1"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("whole_body_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_humanoid_root"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("whole_body_TranslationInterpolator_BasicDive").setToField("set_translation").setToNode("hanim_humanoid_root"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_wrist_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_elbow_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("r_shoulder_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_wrist_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_elbow_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Dive_Time").setToField("set_fraction").setToNode("l_shoulder_RotationInterpolator_BasicDive"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_wrist_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_elbow_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("r_shoulder_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_r_shoulder"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_wrist_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_wrist"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_elbow_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_elbow"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("l_shoulder_RotationInterpolator_BasicDive").setToField("set_rotation").setToNode("hanim_l_shoulder")))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance1
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
ProtoInstance2
                    .addFieldValue(new fieldValue().setName("humanoidBody")
                      .addChild(ProtoInstance3 = new ProtoInstance().setName("Joint").setDEF("hanim_humanoid_root")));
ProtoInstance3
                        .addFieldValue(new fieldValue().setName("name").setValue("humanoid_root"));
ProtoInstance3
                        .addFieldValue(new fieldValue().setName("center").setValue("-0.00405 0.855 -0.000113"));
ProtoInstance3
                        .addFieldValue(new fieldValue().setName("children")
                          .addChild(ProtoInstance4 = new ProtoInstance().setName("Joint").setDEF("hanim_sacroiliac"))
                          .addComments("Fins animation")
                          .addChild(new ProximitySensor().setDEF("FinTriggerProximitySensor").setSize(new float[] {5f,5f,5f}))
                          .addChild(new TimeSensor().setDEF("FinClock").setCycleInterval(7d).setLoop(true))
                          .addChild(new Group()
                            .addChild(new Script().setDEF("FinScript")
                              .addField(new field().setType("MFVec3f").setName("keyValueR").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                              .addField(new field().setType("MFVec3f").setName("keyValueL").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
                              .addField(new field().setType("SFFloat").setName("set_fraction").setAccessType(field.ACCESSTYPE_INPUTONLY))
                              .addField(new field().setType("SFBool").setName("finL").setAccessType(field.ACCESSTYPE_INPUTONLY))
                              .addField(new field().setType("SFBool").setName("finR").setAccessType(field.ACCESSTYPE_INPUTONLY))
                              .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
                              .setSourceCode("ecmascript:\n"+
"\n"+
"var finWarpL;\n"+
"var finWarpR;\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	finWarpL = 0;\n"+
"	finWarpR = 0;\n"+
"}\n"+
"\n"+
"function finL(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpL = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpL = 1;\n"+
"	}\n"+
"	//print ('finWarpL' + finWarpL);\n"+
"}			 \n"+
"\n"+
"function finR(value, timeStamp)\n"+
"{\n"+
"	if (value == 0)\n"+
"	{\n"+
"		finWarpR = 0;\n"+
"	}\n"+
"	else\n"+
"	{\n"+
"		finWarpR = 1;\n"+
"	}\n"+
"	//print ('finWarpR' + finWarpR);\n"+
"}\n"+
"function finMove(fraction, timeStamp)\n"+
" {  	\n"+
"	if (finWarpL == 1)\n"+
"	{\n"+
"		// level 3 (warp outside) Left					\n"+
"		kVL7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(3.25, 0, 34);			\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level -2 (warp inside) Left					\n"+
"		kVL7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVL8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVL9 = new SFVec3f(-3.25, 0, 34);	\n"+
"	}\n"+
"\n"+
"	if (finWarpR == 0)\n"+
"	{		\n"+
"		// level  1 (warp outside ) Right    			\n"+
"		kVR7 = new SFVec3f(1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(3.25, 0, 34);	  	\n"+
"	\n"+
"	}	\n"+
"	else \n"+
"	{		\n"+
"		// level  -2 ( warp inside) Right      				\n"+
"		kVR7 = new SFVec3f(-1.25, 0, 25);  \n"+
"     		kVR8 = new SFVec3f(-2.5, 0, 30);\n"+
"      		kVR9 = new SFVec3f(-3.25, 0, 34);\n"+
"	}\n"+
"\n"+
"	// Left Fin (fixed spine)\n"+
"	kVL1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVL2 = new SFVec3f(0, 0, 5);\n"+
"      	kVL3 = new SFVec3f(0, 0, 8);\n"+
"	kVL4 = new SFVec3f(0, 0, 12); \n"+
"	kVL5 = new SFVec3f(0, 0, 15); 	\n"+
"	kVL6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueL = new MFVec3f(kVL1, kVL2, kVL3, kVL4, kVL5, kVL6, kVL7, kVL8, kVL9);  \n"+
"	\n"+
"	// Right Fin (fixed spine)\n"+
"	kVR1 = new SFVec3f(0, 0, 1);  \n"+
"     	kVR2 = new SFVec3f(0, 0, 5);\n"+
"      	kVR3 = new SFVec3f(0, 0, 8);\n"+
"	kVR4 = new SFVec3f(0, 0, 12);  	\n"+
"	kVR5 = new SFVec3f(0, 0, 15);\n"+
"	kVR6 = new SFVec3f(0, 0, 18);			\n"+
"      	keyValueR = new MFVec3f(kVR1, kVR2, kVR3, kVR4, kVR5, kVR6, kVR7, kVR8, kVR9);  \n"+
"      	\n"+
"	//tracePrint ('[keyValueL = ]' + keyValueL);     \n"+
"	//tracePrint ('[keyValueR = ]' + keyValueR);     \n"+
"			\n"+
"}\n"+
"\n"+
"function set_fraction (value, timeStamp)\n"+
"{\n"+
"	finMove(value);\n"+
"	//tracePrint('time fraction =' + value);\n"+
"	\n"+
"}\n"+
"\n"+
"function tracePrint (outputString)\n"+
"{\n"+
"	if (traceEnabled) Browser.print ('[Fin Move]' + outputString);\n"+
"}"))
                            .addChild(new ROUTE().setFromField("isActive").setFromNode("FinTriggerProximitySensor").setToField("enabled").setToNode("FinClock"))
                            .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("FinClock").setToField("set_fraction").setToNode("FinScript"))
                            .addChild(new ROUTE().setFromField("keyValueR").setFromNode("FinScript").setToField("set_spine").setToNode("Finr"))
                            .addChild(new ROUTE().setFromField("keyValueL").setFromNode("FinScript").setToField("set_spine").setToNode("Finl")))
                          .addChild(ProtoInstance18 = new ProtoInstance().setName("Joint").setDEF("hanim_vl1")));
ProtoInstance4
                            .addFieldValue(new fieldValue().setName("name").setValue("sacroiliac"));
ProtoInstance4
                            .addFieldValue(new fieldValue().setName("center").setValue("0 1.01 -0.0204"));
ProtoInstance4
                            .addFieldValue(new fieldValue().setName("children")
                              .addChild(ProtoInstance5 = new ProtoInstance().setName("Segment").setDEF("hanim_pelvis"))
                              .addChild(ProtoInstance6 = new ProtoInstance().setName("Joint").setDEF("hanim_l_hip"))
                              .addChild(ProtoInstance12 = new ProtoInstance().setName("Joint").setDEF("hanim_r_hip")));
ProtoInstance5
                                .addFieldValue(new fieldValue().setName("name").setValue("pelvis"));
ProtoInstance5
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDEF("Pants_Color").setDiffuseColor(new float[] {0f,0f,0.502f})))
                                    .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt327().getArray()).setCreaseAngle(1.1400f)
                                      .setCoord(new Coordinate().setPoint(new MFVec3f8().getArray())))));
ProtoInstance6
                                .addFieldValue(new fieldValue().setName("name").setValue("l_hip"));
ProtoInstance6
                                .addFieldValue(new fieldValue().setName("center").setValue("0.122 0.888271 -0.0693267"));
ProtoInstance6
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(ProtoInstance7 = new ProtoInstance().setName("Segment").setDEF("hanim_l_thigh"))
                                  .addChild(ProtoInstance8 = new ProtoInstance().setName("Joint").setDEF("hanim_l_knee")));
ProtoInstance7
                                    .addFieldValue(new fieldValue().setName("name").setValue("l_thigh"));
ProtoInstance7
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("Pants_Color")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt329().getArray()).setCreaseAngle(1.3200f)
                                          .setCoord(new Coordinate().setPoint(new MFVec3f10().getArray())))));
ProtoInstance8
                                    .addFieldValue(new fieldValue().setName("name").setValue("l_knee"));
ProtoInstance8
                                    .addFieldValue(new fieldValue().setName("center").setValue("0.0738 0.517 -0.0284"));
ProtoInstance8
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(ProtoInstance9 = new ProtoInstance().setName("Segment").setDEF("hanim_l_calf"))
                                      .addChild(ProtoInstance10 = new ProtoInstance().setName("Joint").setDEF("hanim_l_ankle")));
ProtoInstance9
                                        .addFieldValue(new fieldValue().setName("name").setValue("l_calf"));
ProtoInstance9
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("Pants_Color")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3211().getArray()).setCreaseAngle(1.5700f)
                                              .setCoord(new Coordinate().setPoint(new MFVec3f12().getArray())))));
ProtoInstance10
                                        .addFieldValue(new fieldValue().setName("name").setValue("l_ankle"));
ProtoInstance10
                                        .addFieldValue(new fieldValue().setName("center").setValue("0.0645 0.0719 -0.048"));
ProtoInstance10
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(ProtoInstance11 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hindfoot")));
ProtoInstance11
                                            .addFieldValue(new fieldValue().setName("name").setValue("l_hindfoot"));
ProtoInstance11
                                            .addFieldValue(new fieldValue().setName("children")
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("Shoe_Color").setAmbientIntensity(0.2500f).setDiffuseColor(new float[] {0.753f,1f,0.243f})))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3213().getArray()).setCreaseAngle(1.5700f)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f14().getArray()))))
                                              .addChild(new Transform().setScale(new float[] {0.015f,0.015f,0.015f})
                                                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {6f,-0.5f,-7.5f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.753f,1f,0.243f})))
                                                    .setGeometry(new Extrusion().setDEF("Finl").setCcw(false).setCreaseAngle(3.1400f).setCrossSection(new MFVec2f15().getArray()).setScale(new MFVec2f16().getArray()).setSpine(new MFVec3f17().getArray()))))));
ProtoInstance12
                                .addFieldValue(new fieldValue().setName("name").setValue("r_hip"));
ProtoInstance12
                                .addFieldValue(new fieldValue().setName("center").setValue("-0.11 0.892362 -0.0732533"));
ProtoInstance12
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(ProtoInstance13 = new ProtoInstance().setName("Segment").setDEF("hanim_r_thigh"))
                                  .addChild(ProtoInstance14 = new ProtoInstance().setName("Joint").setDEF("hanim_r_knee")));
ProtoInstance13
                                    .addFieldValue(new fieldValue().setName("name").setValue("r_thigh"));
ProtoInstance13
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("Pants_Color")))
                                        .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3218().getArray()).setCreaseAngle(1.6100f)
                                          .setCoord(new Coordinate().setPoint(new MFVec3f19().getArray())))));
ProtoInstance14
                                    .addFieldValue(new fieldValue().setName("name").setValue("r_knee"));
ProtoInstance14
                                    .addFieldValue(new fieldValue().setName("center").setValue("-0.0699 0.51 -0.0166"));
ProtoInstance14
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(ProtoInstance15 = new ProtoInstance().setName("Segment").setDEF("hanim_r_calf"))
                                      .addChild(ProtoInstance16 = new ProtoInstance().setName("Joint").setDEF("hanim_r_ankle")));
ProtoInstance15
                                        .addFieldValue(new fieldValue().setName("name").setValue("r_calf"));
ProtoInstance15
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("Pants_Color")))
                                            .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3220().getArray()).setCreaseAngle(1.5700f)
                                              .setCoord(new Coordinate().setPoint(new MFVec3f21().getArray())))));
ProtoInstance16
                                        .addFieldValue(new fieldValue().setName("name").setValue("r_ankle"));
ProtoInstance16
                                        .addFieldValue(new fieldValue().setName("center").setValue("-0.064 0.0753 -0.0412"));
ProtoInstance16
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(ProtoInstance17 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hindfoot")));
ProtoInstance17
                                            .addFieldValue(new fieldValue().setName("name").setValue("r_hindfoot"));
ProtoInstance17
                                            .addFieldValue(new fieldValue().setName("children")
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("Shoe_Color")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3222().getArray()).setCreaseAngle(1.5700f)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f23().getArray()))))
                                              .addChild(new Transform().setScale(new float[] {0.015f,0.015f,0.015f})
                                                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-5f,-0.5f,-7.5f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {0.753f,1f,0.243f})))
                                                    .setGeometry(new Extrusion().setDEF("Finr").setCcw(false).setCreaseAngle(3.1400f).setCrossSection(new MFVec2f24().getArray()).setScale(new MFVec2f25().getArray()).setSpine(new MFVec3f26().getArray()))))));
ProtoInstance18
                            .addFieldValue(new fieldValue().setName("name").setValue("vl1"));
ProtoInstance18
                            .addFieldValue(new fieldValue().setName("center").setValue("-0.00405 1.07 -0.0275"));
ProtoInstance18
                            .addFieldValue(new fieldValue().setName("children")
                              .addChild(ProtoInstance19 = new ProtoInstance().setName("Segment").setDEF("hanim_c7"))
                              .addChild(ProtoInstance20 = new ProtoInstance().setName("Joint").setDEF("hanim_l_shoulder"))
                              .addChild(ProtoInstance26 = new ProtoInstance().setName("Joint").setDEF("hanim_r_shoulder"))
                              .addChild(ProtoInstance32 = new ProtoInstance().setName("Joint").setDEF("hanim_vc4")));
ProtoInstance19
                                .addFieldValue(new fieldValue().setName("name").setValue("l1"));
ProtoInstance19
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(new Transform().setScale(new float[] {1.05f,1.05f,1.05f}).setTranslation(new float[] {0f,-0.09f,0f})
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDEF("WetShirtColor").setAmbientIntensity(0.2500f).setDiffuseColor(new float[] {0f,0f,0.502f}))
                                        .setTexture(new ImageTexture().setDEF("small_logo_Tex").setUrl(new MFString27().getArray())))
                                      .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3228().getArray().append(new MFInt3229().getArray())).setCreaseAngle(1.5900f)
                                        .setCoord(new Coordinate().setPoint(new MFVec3f30().getArray()))
                                        .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f31().getArray())))))
                                  .addComments("<Transform DEF='Imaf3D'> <Shape> <Appearance> <Material/> <ImageTexture/> </Appearance> <IndexedFaceSet> <Coordinate/> <TextureCoordinate/> </IndexedFaceSet> </Shape> </Transform>")
                                  .addChild(new Transform().setScale(new float[] {1.25f,1.1f,1.3f}).setTranslation(new float[] {0f,1.18f,0.015f})
                                    .addChild(new Group()
                                      .addChild(new Transform().setTranslation(new float[] {0f,-1.2f,0f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDEF("BCLColor").setAmbientIntensity(0.2500f).setDiffuseColor(new float[] {0.0588f,0.0588f,0.0588f}).setShininess(0.5000f)))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3232().getArray()).setCreaseAngle(1.5900f).setSolid(false)
                                            .setCoord(new Coordinate().setPoint(new MFVec3f33().getArray()))
                                            .setTexCoord(new TextureCoordinate().setPoint(new MFVec2f34().getArray())))))
                                      .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {2f,1.5f,1.5f}).setTranslation(new float[] {0.13f,0.22f,-0.1f})
                                        .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.4f})
                                          .addChild(new Shape().setDEF("BCLSnorkelPad")
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("BCLColor")))
                                            .setGeometry(new Extrusion().setCrossSection(new MFVec2f35().getArray()).setSpine(new MFVec3f36().getArray())))))
                                      .addChild(new Transform().setRotation(new float[] {-1f,0f,0f,0.8f}).setTranslation(new float[] {0.07f,0.08f,0.125f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setDEF("BCLSnorkel").setDiffuseColor(new float[] {0.25f,0.25f,0.25f}).setShininess(0.5000f).setTransparency(0.1000f)))
                                          .setGeometry(new Extrusion().setCrossSection(new MFVec2f37().getArray()).setScale(new MFVec2f38().getArray()).setSpine(new MFVec3f39().getArray()))))
                                      .addChild(new Group().setDEF("buckle")
                                        .addChild(new Transform().setRotation(new float[] {-1f,0f,0f,0.68f}).setTranslation(new float[] {-0.08f,0.1f,0.029f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setDEF("buckleHolder")
                                              .setMaterial(new Material().setDiffuseColor(new float[] {0.25f,0.25f,0.25f})))
                                            .setGeometry(new Box().setSize(new float[] {0.03f,0.03f,0.005f}))))
                                        .addChild(new Transform().setRotation(new float[] {-1f,0f,0f,0.68f}).setTranslation(new float[] {0.03f,0.1f,0.027f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("buckleHolder"))
                                            .setGeometry(new Box().setSize(new float[] {0.15f,0.03f,0.001f}))))
                                        .addChild(new Transform().setRotation(new float[] {-1f,0f,0f,0.68f}).setTranslation(new float[] {-0.045f,0.1f,0.028f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setDEF("pin")
                                              .setMaterial(new Material()))
                                            .setGeometry(new Box().setSize(new float[] {0.02f,0.028f,0.005f}))))
                                        .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-0.06f,0.1f,0.029f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("pin"))
                                            .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0024f))))
                                        .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-0.06f,0.109f,0.0217f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("pin"))
                                            .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0024f))))
                                        .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-0.06f,0.091f,0.036f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("pin"))
                                            .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0024f)))))
                                      .addChild(new Group().setDEF("buckleBelt")
                                        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,-0.68f}).setTranslation(new float[] {-0.07f,-0.12f,0.038f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("buckleHolder"))
                                            .setGeometry(new Box().setSize(new float[] {0.04f,0.1f,0.005f}))))
                                        .addChild(new Transform().setTranslation(new float[] {0.005f,-0.12f,0.053f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("buckleHolder"))
                                            .setGeometry(new Box().setSize(new float[] {0.12f,0.11f,0.001f}))))
                                        .addChild(new Transform().setRotation(new float[] {0f,1f,0f,0.68f}).setTranslation(new float[] {0.075f,-0.12f,0.038f})
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance().setUSE("buckleHolder"))
                                            .setGeometry(new Box().setSize(new float[] {0.04f,0.1f,0.005f})))))))
                                  .addChild(new Transform().setDEF("ScubaTank").setRotation(new float[] {0f,1f,0f,3.14f}).setScale(new float[] {0.8f,0.8f,0.8f}).setTranslation(new float[] {0f,1.1f,-0.23f})
                                    .addChild(new Transform()
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setDEF("tank").setAmbientIntensity(0.3000f).setDiffuseColor(new float[] {0.3f,0.3f,0.5f}).setShininess(0.1000f).setSpecularColor(new float[] {0.7f,0.7f,0.8f})))
                                        .setGeometry(new Cylinder().setHeight(0.7000f).setRadius(0.1000f))))
                                    .addChild(new Transform().setTranslation(new float[] {0f,0.35f,0f})
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("tank")))
                                        .setGeometry(new Sphere().setRadius(0.0980f))))
                                    .addChild(new Transform().setTranslation(new float[] {0f,-0.35f,0f})
                                      .addChild(new Shape().setDEF("tankBottom")
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setAmbientIntensity(0.3000f).setDiffuseColor(new float[] {0f,0f,0f})))
                                        .setGeometry(new Cylinder().setHeight(0.0600f).setRadius(0.1010f))))
                                    .addChild(new Group().setDEF("tankNozzle")
                                      .addChild(new Transform()
                                        .addChild(new Transform().setTranslation(new float[] {0f,0.45f,0f})
                                          .addChild(new Shape().setDEF("pressure")
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDEF("pressureColor").setAmbientIntensity(0.4000f).setDiffuseColor(new float[] {0.91f,0.91f,0.91f}).setShininess(0.1600f).setSpecularColor(new float[] {0.91f,0.9f,0.91f})))
                                            .setGeometry(new Cylinder().setHeight(0.1000f).setRadius(0.0150f))))
                                        .addChild(new Transform().setTranslation(new float[] {0f,0.5f,0f})
                                          .addChild(new Shape().setDEF("pressureTop")
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setDEF("top").setDiffuseColor(new float[] {0f,0f,0f})))
                                            .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0250f))))
                                        .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setTranslation(new float[] {-0.028f,0.462f,0f})
                                          .addChild(new Transform()
                                            .addChild(new Shape().setDEF("connectorToRegulator")
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("pressureColor")))
                                              .setGeometry(new Cylinder().setHeight(0.0300f).setRadius(0.0100f))))
                                          .addChild(new Transform().setTranslation(new float[] {0f,0.02f,0f})
                                            .addChild(new Shape().setDEF("connectorToRegulatorTop")
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("top")))
                                              .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0200f)))))))
                                    .addChild(new Transform().setTranslation(new float[] {0f,0.2f,0f})
                                      .addChild(new Shape().setDEF("tankHoldBelt")
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setAmbientIntensity(0.3000f).setDiffuseColor(new float[] {0f,0f,0f})))
                                        .setGeometry(new Cylinder().setHeight(0.1000f).setRadius(0.1150f))))));
ProtoInstance20
                                .addFieldValue(new fieldValue().setName("name").setValue("l_shoulder"));
ProtoInstance20
                                .addFieldValue(new fieldValue().setName("center").setValue("0.167 1.36 -0.0518"));
ProtoInstance20
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(ProtoInstance21 = new ProtoInstance().setName("Segment").setDEF("hanim_l_upperarm"))
                                  .addChild(ProtoInstance22 = new ProtoInstance().setName("Joint").setDEF("hanim_l_elbow")));
ProtoInstance21
                                    .addFieldValue(new fieldValue().setName("name").setValue("l_upperarm"));
ProtoInstance21
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(new Transform().setDEF("l_upperarm_adjust").setCenter(new float[] {0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.119f}).setTranslation(new float[] {0f,0.0004203f,-0.01665f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setUSE("WetShirtColor")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3240().getArray()).setCreaseAngle(1.6500f)
                                            .setCoord(new Coordinate().setPoint(new MFVec3f41().getArray()))))));
ProtoInstance22
                                    .addFieldValue(new fieldValue().setName("name").setValue("l_elbow"));
ProtoInstance22
                                    .addFieldValue(new fieldValue().setName("center").setValue("0.196 1.07 -0.0518"));
ProtoInstance22
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(ProtoInstance23 = new ProtoInstance().setName("Segment").setDEF("hanim_l_forearm"))
                                      .addChild(ProtoInstance24 = new ProtoInstance().setName("Joint").setDEF("hanim_l_wrist")));
ProtoInstance23
                                        .addFieldValue(new fieldValue().setName("name").setValue("l_forearm"));
ProtoInstance23
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(new Transform().setDEF("l_forearm_adjust").setCenter(new float[] {0.198f,0.961f,-0.0405f}).setRotation(new float[] {-1f,0f,0f,0.1f}).setTranslation(new float[] {0f,0.003724f,-0.0236f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("WetShirtColor")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3242().getArray()).setCreaseAngle(1.7500f)
                                                .setCoord(new Coordinate().setPoint(new MFVec3f43().getArray()))))));
ProtoInstance24
                                        .addFieldValue(new fieldValue().setName("name").setValue("l_wrist"));
ProtoInstance24
                                        .addFieldValue(new fieldValue().setName("center").setValue("0.213 0.811 -0.0338"));
ProtoInstance24
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(ProtoInstance25 = new ProtoInstance().setName("Segment").setDEF("hanim_l_hand")));
ProtoInstance25
                                            .addFieldValue(new fieldValue().setName("name").setValue("l_hand"));
ProtoInstance25
                                            .addFieldValue(new fieldValue().setName("children")
                                              .addChild(new Transform().setDEF("l_hand_adjust").setCenter(new float[] {0.213f,0.811f,-0.0338f}).setRotation(new float[] {-0.06361f,-0.9967f,0.04988f,1.333f}).setTranslation(new float[] {0f,0.005142f,-0.008662f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDEF("Skin_Color").setAmbientIntensity(0.2500f).setDiffuseColor(new float[] {0.749f,0.601f,0.462f})))
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3244().getArray()).setCreaseAngle(1.4800f)
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f45().getArray()))))));
ProtoInstance26
                                .addFieldValue(new fieldValue().setName("name").setValue("r_shoulder"));
ProtoInstance26
                                .addFieldValue(new fieldValue().setName("center").setValue("-0.167 1.36 -0.0458"));
ProtoInstance26
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(ProtoInstance27 = new ProtoInstance().setName("Segment").setDEF("hanim_r_upperarm"))
                                  .addChild(ProtoInstance28 = new ProtoInstance().setName("Joint").setDEF("hanim_r_elbow")));
ProtoInstance27
                                    .addFieldValue(new fieldValue().setName("name").setValue("r_upperarm"));
ProtoInstance27
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(new Transform().setDEF("r_upperarm_adjust").setCenter(new float[] {-0.182f,1.22f,-0.047f}).setRotation(new float[] {1f,0f,0f,0.0836f}).setTranslation(new float[] {0f,0.000589f,-0.01169f})
                                        .addChild(new Shape()
                                          .setAppearance(new Appearance()
                                            .setMaterial(new Material().setUSE("WetShirtColor")))
                                          .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3246().getArray()).setCreaseAngle(1.5300f)
                                            .setCoord(new Coordinate().setPoint(new MFVec3f47().getArray()))))));
ProtoInstance28
                                    .addFieldValue(new fieldValue().setName("name").setValue("r_elbow"));
ProtoInstance28
                                    .addFieldValue(new fieldValue().setName("center").setValue("-0.192 1.07 -0.0498"));
ProtoInstance28
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(ProtoInstance29 = new ProtoInstance().setName("Segment").setDEF("hanim_r_forearm"))
                                      .addChild(ProtoInstance30 = new ProtoInstance().setName("Joint").setDEF("hanim_r_wrist")));
ProtoInstance29
                                        .addFieldValue(new fieldValue().setName("name").setValue("r_forearm"));
ProtoInstance29
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(new Transform().setDEF("r_forearm_adjust").setCenter(new float[] {-0.198f,0.961f,-0.0397f}).setRotation(new float[] {-1f,0f,0f,0.1254f}).setTranslation(new float[] {0f,0.003466f,-0.01065f})
                                            .addChild(new Shape()
                                              .setAppearance(new Appearance()
                                                .setMaterial(new Material().setUSE("WetShirtColor")))
                                              .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3248().getArray()).setCreaseAngle(1.7300f)
                                                .setCoord(new Coordinate().setPoint(new MFVec3f49().getArray()))))));
ProtoInstance30
                                        .addFieldValue(new fieldValue().setName("name").setValue("r_wrist"));
ProtoInstance30
                                        .addFieldValue(new fieldValue().setName("center").setValue("-0.217 0.811 -0.0338"));
ProtoInstance30
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(ProtoInstance31 = new ProtoInstance().setName("Segment").setDEF("hanim_r_hand")));
ProtoInstance31
                                            .addFieldValue(new fieldValue().setName("name").setValue("r_hand"));
ProtoInstance31
                                            .addFieldValue(new fieldValue().setName("children")
                                              .addChild(new Transform().setDEF("r_hand_adjust").setCenter(new float[] {-0.217f,0.811f,-0.0338f}).setRotation(new float[] {-0.09024f,0.994f,-0.0624f,1.216f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setUSE("Skin_Color")))
                                                  .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3250().getArray()).setCreaseAngle(1.5700f)
                                                    .setCoord(new Coordinate().setPoint(new MFVec3f51().getArray()))))));
ProtoInstance32
                                .addFieldValue(new fieldValue().setName("name").setValue("vc4"));
ProtoInstance32
                                .addFieldValue(new fieldValue().setName("center").setValue("0 1.43 -0.0458"));
ProtoInstance32
                                .addFieldValue(new fieldValue().setName("children")
                                  .addChild(ProtoInstance33 = new ProtoInstance().setName("Segment").setDEF("hanim_c4"))
                                  .addChild(ProtoInstance34 = new ProtoInstance().setName("Joint").setDEF("hanim_skullbase")));
ProtoInstance33
                                    .addFieldValue(new fieldValue().setName("name").setValue("c4"));
ProtoInstance33
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(new Shape()
                                        .setAppearance(new Appearance()
                                          .setMaterial(new Material().setUSE("WetShirtColor")))
                                        .setGeometry(new IndexedFaceSet().setDEF("neck").setCoordIndex(new MFInt3252().getArray()).setCreaseAngle(1.9100f)
                                          .setCoord(new Coordinate().setPoint(new MFVec3f53().getArray())))));
ProtoInstance34
                                    .addFieldValue(new fieldValue().setName("name").setValue("skullbase"));
ProtoInstance34
                                    .addFieldValue(new fieldValue().setName("center").setValue("0 1.54 -0.0409"));
ProtoInstance34
                                    .addFieldValue(new fieldValue().setName("children")
                                      .addChild(ProtoInstance35 = new ProtoInstance().setName("Segment").setDEF("hanim_skull")));
ProtoInstance35
                                        .addFieldValue(new fieldValue().setName("name").setValue("skull"));
ProtoInstance35
                                        .addFieldValue(new fieldValue().setName("children")
                                          .addChild(new Shape()
                                            .setAppearance(new Appearance()
                                              .setMaterial(new Material().setUSE("Skin_Color")))
                                            .setGeometry(new IndexedFaceSet().setDEF("headIFS").setColorIndex(new MFInt3254().getArray().append(new MFInt3255().getArray())).setCoordIndex(new MFInt3256().getArray().append(new MFInt3257().getArray())).setCreaseAngle(0.7854f)
                                              .setCoord(new Coordinate().setDEF("Face").setPoint(new MFVec3f58().getArray()))
                                              .setColor(new Color().setColor(new MFColor59().getArray()))))
                                          .addChild(new Transform().setDEF("maskAndSnorkel").setTranslation(new float[] {0f,1.505f,0.05f})
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("maskFrame")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("frameColor").setDiffuseColor(new float[] {0f,0f,0f})))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3260().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f61().getArray())))))
                                            .addChild(new Transform().setDEF("snorkelHoldRing").setTranslation(new float[] {0.075f,0.075f,-0.02f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("frameColor")))
                                                .setGeometry(new Cylinder().setHeight(0.0030f).setRadius(0.0150f))))
                                            .addChild(new Group().setDEF("snorkel")
                                              .addChild(new Transform().setTranslation(new float[] {0f,-0.02f,0f})
                                                .addChild(new Transform().setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.035f,-0.07f,-0.02f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDEF("snorkelTube").setDiffuseColor(new float[] {0.678f,1f,0.184f}).setTransparency(0.4000f)))
                                                    .setGeometry(new Extrusion().setCrossSection(new MFVec2f62().getArray()).setSpine(new MFVec3f63().getArray()))))
                                                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,1.57f}).setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.01f,-0.04f,-0.02f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setDEF("Mouthpiece").setDiffuseColor(new float[] {0.678f,1f,0.8f}).setTransparency(0.4000f)))
                                                    .setGeometry(new Extrusion().setCrossSection(new MFVec2f64().getArray()).setSpine(new MFVec3f65().getArray()))))
                                                .addChild(new Transform().setRotation(new float[] {0f,0f,1f,-0.85f}).setScale(new float[] {0.9f,0.9f,0.9f}).setTranslation(new float[] {0.005f,-0.01f,-0.02f})
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance()
                                                      .setMaterial(new Material().setUSE("Mouthpiece")))
                                                    .setGeometry(new Extrusion().setCrossSection(new MFVec2f66().getArray()).setSpine(new MFVec3f67().getArray()))))))
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("maskLensR")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("plastic").setDiffuseColor(new float[] {0.941f,0.973f,1f}).setTransparency(0.8000f)))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3268().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f69().getArray())))))
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("maskLensL")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("plastic")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3270().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f71().getArray())))))
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("nose")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("plasticFit").setDiffuseColor(new float[] {0.678f,1f,0.184f}).setTransparency(0.7000f)))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3272().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f73().getArray())))))
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("faceFit")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("plasticFit")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3274().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f75().getArray())))))
                                            .addChild(new Transform()
                                              .addChild(new Shape().setDEF("belt")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("plastic")))
                                                .setGeometry(new IndexedFaceSet().setCoordIndex(new MFInt3276().getArray()).setCreaseAngle(1.4500f).setSolid(false)
                                                  .setCoord(new Coordinate().setPoint(new MFVec3f77().getArray()))))))
                                          .addChild(new Transform().setDEF("mouthpiece").setRotation(new float[] {0.86f,-0.58f,-0.58f,2.09f}).setTranslation(new float[] {0f,1.508f,0.05f})
                                            .addChild(new Transform().setTranslation(new float[] {0f,0.0018f,0f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("gray").setAmbientIntensity(0.3000f).setDiffuseColor(new float[] {0.9f,0.9f,0.89f}).setShininess(0.1000f).setSpecularColor(new float[] {0.5f,0.5f,0.5f})))
                                                .setGeometry(new Cylinder().setHeight(0.0060f).setRadius(0.0150f))))
                                            .addChild(new Transform()
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDEF("black").setDiffuseColor(new float[] {0f,0f,0f})))
                                                .setGeometry(new Cone().setBottomRadius(0.0300f).setHeight(0.0100f))))
                                            .addChild(new Transform().setTranslation(new float[] {0f,-0.015f,0f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("black")))
                                                .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0300f))))
                                            .addChild(new Transform().setTranslation(new float[] {0f,-0.025f,0f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("black")))
                                                .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0150f))))
                                            .addChild(new Transform().setRotation(new float[] {0f,0f,1f,0.9f}).setTranslation(new float[] {0f,-0.04f,0f})
                                              .addChild(new Shape().setDEF("mouthpiecePlastic")
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setEmissiveColor(new float[] {1f,1f,1f})))
                                                .setGeometry(new Box().setSize(new float[] {0.002f,0.03f,0.018f}))))
                                            .addChild(new Transform().setRotation(new float[] {0f,0f,1f,-0.9f}).setTranslation(new float[] {0f,-0.04f,0f})
                                              .addChild(new Shape().setUSE("mouthpiecePlastic")))
                                            .addChild(new Transform().setRotation(new float[] {1f,0f,0f,1.57f}).setTranslation(new float[] {0f,-0.015f,0.03f})
                                              .addChild(new Shape()
                                                .setAppearance(new Appearance()
                                                  .setMaterial(new Material().setUSE("gray")))
                                                .setGeometry(new Cylinder().setHeight(0.0200f).setRadius(0.0075f))))
                                            .addComments("x = 0, y = 50, z = -270")
                                            .addChild(new Transform().setDEF("airTube").setRotation(new float[] {0f,1f,0f,1.57f}).setScale(new float[] {0.7f,0.7f,0.7f}).setTranslation(new float[] {0f,-0.02f,0.055f})
                                              .addChild(new Transform().setRotation(new float[] {-0.21f,0.21f,-0.95f,4.67f})
                                                .addChild(new Shape()
                                                  .setAppearance(new Appearance()
                                                    .setMaterial(new Material().setDiffuseColor(new float[] {0f,0f,0f})))
                                                  .setGeometry(new Extrusion().setCrossSection(new MFVec2f78().getArray()).setSpine(new MFVec3f79().getArray()))))))
                                          .addChild(new Transform().setDEF("Bubbles").setScale(new float[] {0.35f,0.35f,0.35f}).setTranslation(new float[] {0f,1.508f,0.05f})
                                            .addChild(new Group().setDEF("Bubble")
                                              .addChild(new TimeSensor().setDEF("BubbleClock").setCycleInterval(6d).setLoop(true))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath1").setKey(new MFFloat80().getArray()).setKeyValue(new MFVec3f81().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath2").setKey(new MFFloat82().getArray()).setKeyValue(new MFVec3f83().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath3").setKey(new MFFloat84().getArray()).setKeyValue(new MFVec3f85().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath4").setKey(new MFFloat86().getArray()).setKeyValue(new MFVec3f87().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath5").setKey(new MFFloat88().getArray()).setKeyValue(new MFVec3f89().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath6").setKey(new MFFloat90().getArray()).setKeyValue(new MFVec3f91().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath7").setKey(new MFFloat92().getArray()).setKeyValue(new MFVec3f93().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath8").setKey(new MFFloat94().getArray()).setKeyValue(new MFVec3f95().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath9").setKey(new MFFloat96().getArray()).setKeyValue(new MFVec3f97().getArray()))
                                              .addChild(new PositionInterpolator().setDEF("BubblePath10").setKey(new MFFloat98().getArray()).setKeyValue(new MFVec3f99().getArray()))
                                              .addChild(new Transform()
                                                .addChild(new Transform().setDEF("bubble1")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setDEF("BubbleAppearance")
                                                      .setMaterial(new Material().setDiffuseColor(new float[] {1f,1f,1f}).setTransparency(0.8000f)))
                                                    .setGeometry(new Sphere().setRadius(0.0250f))))
                                                .addChild(new Transform().setDEF("bubble2")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0550f))))
                                                .addChild(new Transform().setDEF("bubble3")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0650f))))
                                                .addChild(new Transform().setDEF("bubble4")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0150f))))
                                                .addChild(new Transform().setDEF("bubble5")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0750f))))
                                                .addChild(new Transform().setDEF("bubble6")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0050f))))
                                                .addChild(new Transform().setDEF("bubble7")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0350f))))
                                                .addChild(new Transform().setDEF("bubble8")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0500f))))
                                                .addChild(new Transform().setDEF("bubble9")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0450f))))
                                                .addChild(new Transform().setDEF("bubble10")
                                                  .addChild(new Shape()
                                                    .setAppearance(new Appearance().setUSE("BubbleAppearance"))
                                                    .setGeometry(new Sphere().setRadius(0.0350f))))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath1"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath2"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath3"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath4"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath5"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath6"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath7"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath8"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath9"))
                                                .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("BubbleClock").setToField("set_fraction").setToNode("BubblePath10"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath1").setToField("set_translation").setToNode("bubble1"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath2").setToField("set_translation").setToNode("bubble2"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath3").setToField("set_translation").setToNode("bubble3"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath4").setToField("set_translation").setToNode("bubble4"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath5").setToField("set_translation").setToNode("bubble5"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath6").setToField("set_translation").setToNode("bubble6"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath7").setToField("set_translation").setToNode("bubble7"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath8").setToField("set_translation").setToNode("bubble8"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath9").setToField("set_translation").setToNode("bubble9"))
                                                .addChild(new ROUTE().setFromField("value_changed").setFromNode("BubblePath10").setToField("set_translation").setToNode("bubble10"))))));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NancyPrototypes.x3d#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Joint","NancyPrototypes.wrl#Joint","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Joint"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NancyPrototypes.x3d#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Segment","NancyPrototypes.wrl#Segment","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Segment"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"NancyPrototypes.x3d#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.x3d#Humanoid","NancyPrototypes.wrl#Humanoid","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyPrototypes.wrl#Humanoid"});
  }
}
protected class MFString3 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"});
  }
}
protected class MFColor4 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.0000f,0.4000f,1.0000f});
  }
}
protected class MFFloat5 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.1500f,1.5300f,0.7500f});
  }
}
protected class MFString6 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"Copyright (c) 1997. 3Name3D / Yglesias Wallock Divekar, Inc."});
  }
}
protected class MFInt327 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,40,-1,1,2,40,-1,2,3,40,-1,3,4,40,-1,4,5,40,-1,5,4,9,-1,4,3,8,-1,3,2,8,-1,2,1,6,-1,0,7,1,-1,7,6,1,-1,6,8,2,-1,9,4,10,-1,4,8,10,-1,8,6,12,-1,7,0,47,-1,50,5,9,-1,7,47,55,-1,55,13,7,-1,50,9,56,-1,9,10,14,-1,10,11,15,-1,11,12,16,-1,12,13,19,-1,13,55,17,-1,60,17,55,-1,17,19,13,-1,19,16,12,-1,16,15,11,-1,15,18,10,-1,14,56,9,-1,56,14,64,-1,17,60,20,-1,20,19,17,-1,21,64,14,-1,14,22,21,-1,15,16,24,-1,16,19,24,-1,19,20,26,-1,24,23,15,-1,64,21,69,-1,21,22,29,-1,19,26,25,-1,20,63,27,-1,27,26,20,-1,25,24,19,-1,30,29,22,-1,29,28,21,-1,28,69,21,-1,27,34,26,-1,69,28,79,-1,29,30,32,-1,30,23,33,-1,23,24,37,-1,25,26,34,-1,83,27,77,-1,37,33,23,-1,33,32,30,-1,31,79,28,-1,79,31,84,-1,32,33,36,-1,24,25,37,-1,34,27,83,-1,83,38,34,-1,34,37,25,-1,37,36,33,-1,36,35,32,-1,84,31,89,-1,31,35,89,-1,35,36,39,-1,36,37,39,-1,38,83,89,-1,89,39,38,-1,39,89,35,-1,40,41,0,-1,40,42,41,-1,40,43,42,-1,40,44,43,-1,40,45,44,-1,49,44,45,-1,48,43,44,-1,48,42,43,-1,46,41,42,-1,41,47,0,-1,41,46,47,-1,42,48,46,-1,51,44,49,-1,51,48,44,-1,48,52,53,-1,49,45,50,-1,56,49,50,-1,57,51,49,-1,58,53,52,-1,59,54,53,-1,62,55,54,-1,55,62,60,-1,54,59,62,-1,53,58,59,-1,51,61,58,-1,49,56,57,-1,64,57,56,-1,67,59,58,-1,68,62,59,-1,60,63,20,-1,60,62,63,-1,59,67,68,-1,58,61,67,-1,57,64,65,-1,65,66,57,-1,71,63,62,-1,69,65,64,-1,74,66,65,-1,78,68,67,-1,70,71,62,-1,63,72,27,-1,63,71,72,-1,68,78,76,-1,67,75,78,-1,66,74,75,-1,65,73,74,-1,65,69,73,-1,77,27,72,-1,71,82,72,-1,79,73,69,-1,81,75,74,-1,82,71,70,-1,77,72,83,-1,73,79,80,-1,84,80,79,-1,86,75,81,-1,83,72,82,-1,82,88,83,-1,70,87,82,-1,81,85,86,-1,89,80,84,-1,89,85,80,-1,90,86,85,-1,90,87,86,-1,89,83,88,-1,88,90,89,-1,85,89,90,-1,50,45,5,-1,45,40,5,-1,10,8,11,-1,8,12,11,-1,18,22,10,-1,22,14,10,-1,57,66,51,-1,66,61,51,-1,51,58,48,-1,58,52,48,-1,48,53,46,-1,53,54,46,-1,76,70,68,-1,70,62,68,-1,29,32,28,-1,28,32,31,-1,32,35,31,-1,85,81,80,-1,81,73,80,-1,81,74,73,-1,39,37,38,-1,37,34,38,-1,82,87,88,-1,87,90,88,-1,87,78,86,-1,78,75,86,-1,61,66,67,-1,66,75,67,-1,22,18,15,-1,23,30,15,-1,30,22,15,-1,13,12,7,-1,12,6,7,-1,46,54,47,-1,54,55,47,-1,87,76,78,-1,87,70,76,-1});
  }
}
protected class MFVec3f8 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.0600f,0.0218f,0.0561f,1.0700f,0.0073f,0.0851f,1.0700f,-0.0115f,0.1040f,1.0700f,-0.0497f,0.0851f,1.0700f,-0.0851f,0.0320f,1.0600f,-0.0985f,0.0873f,1.0400f,0.0078f,0.0330f,1.0400f,0.0395f,0.1230f,1.0500f,-0.0405f,0.0609f,1.0200f,-0.1060f,0.0894f,0.9960f,-0.1060f,0.1430f,1.0000f,-0.0309f,0.1170f,1.0000f,0.0164f,0.0314f,0.9990f,0.0502f,0.0314f,0.9600f,-0.1300f,0.1560f,0.9660f,-0.0405f,0.1560f,0.9680f,-0.0072f,0.0341f,0.9540f,0.0513f,0.1150f,0.9600f,-0.0916f,0.1210f,0.9260f,0.0352f,0.0357f,0.9200f,0.0497f,0.0314f,0.9100f,-0.1460f,0.0991f,0.9100f,-0.1310f,0.1690f,0.8830f,-0.0448f,0.1690f,0.8850f,-0.0094f,0.1230f,0.8730f,0.0384f,0.0926f,0.8720f,0.0470f,0.0325f,0.8730f,0.0287f,0.0293f,0.8660f,-0.1420f,0.1020f,0.8690f,-0.1310f,0.1290f,0.8680f,-0.1030f,0.0314f,0.8400f,-0.1250f,0.1010f,0.8440f,-0.1220f,0.1330f,0.8460f,-0.0878f,0.0653f,0.8350f,0.0132f,0.0615f,0.8240f,-0.1110f,0.0985f,0.8230f,-0.1010f,0.1320f,0.8260f,-0.0448f,0.0609f,0.8210f,-0.0158f,0.0599f,0.8120f,-0.0545f,0.0000f,1.0800f,-0.0266f,-0.0561f,1.0700f,0.0073f,-0.0851f,1.0700f,-0.0115f,-0.1040f,1.0700f,-0.0497f,-0.0851f,1.0700f,-0.0851f,-0.0320f,1.0600f,-0.0985f,-0.0873f,1.0400f,0.0078f,-0.0330f,1.0400f,0.0395f,-0.1230f,1.0500f,-0.0405f,-0.0609f,1.0200f,-0.1060f,0.0000f,1.0200f,-0.1080f,-0.0894f,0.9960f,-0.1060f,-0.1430f,1.0000f,-0.0309f,-0.1440f,1.0000f,-0.0110f,-0.1170f,1.0000f,0.0164f,-0.0314f,0.9990f,0.0502f,0.0000f,0.9610f,-0.1230f,-0.0314f,0.9600f,-0.1300f,-0.1560f,0.9660f,-0.0405f,-0.1560f,0.9680f,-0.0072f,-0.0341f,0.9540f,0.0513f,-0.1150f,0.9600f,-0.0916f,-0.1210f,0.9260f,0.0352f,-0.0357f,0.9200f,0.0497f,0.0000f,0.9100f,-0.1270f,-0.0314f,0.9100f,-0.1460f,-0.0991f,0.9100f,-0.1310f,-0.1670f,0.9110f,-0.0448f,-0.1670f,0.9120f,-0.0067f,0.0000f,0.8830f,-0.1290f,-0.1230f,0.8730f,0.0384f,-0.0926f,0.8720f,0.0470f,-0.0325f,0.8730f,0.0287f,-0.0293f,0.8660f,-0.1420f,-0.1020f,0.8690f,-0.1310f,-0.1290f,0.8680f,-0.1030f,-0.1660f,0.8630f,-0.0148f,0.0000f,0.8630f,-0.0046f,-0.1660f,0.8620f,-0.0459f,0.0000f,0.8580f,-0.1000f,-0.0314f,0.8400f,-0.1250f,-0.1010f,0.8440f,-0.1220f,-0.0653f,0.8350f,0.0132f,0.0000f,0.8390f,-0.0217f,0.0000f,0.8350f,-0.0867f,-0.0615f,0.8240f,-0.1110f,-0.0985f,0.8230f,-0.1010f,-0.1320f,0.8260f,-0.0448f,-0.0609f,0.8210f,-0.0158f,0.0000f,0.8310f,-0.0626f,-0.0599f,0.8120f,-0.0545f});
  }
}
protected class MFInt329 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,4,5,-1,3,4,0,-1,0,7,1,-1,0,8,7,-1,0,6,8,-1,0,5,6,-1,0,2,3,-1,0,1,2,-1,9,2,1,-1,10,3,2,-1,11,4,3,-1,12,5,4,-1,13,6,5,-1,15,7,8,-1,9,1,7,-1,7,15,9,-1,8,14,15,-1,5,16,13,-1,5,12,16,-1,4,11,12,-1,3,10,11,-1,2,9,10,-1,20,13,16,-1,18,11,10,-1,19,12,11,-1,20,16,12,-1,23,15,14,-1,15,23,24,-1,12,19,20,-1,11,18,19,-1,10,17,18,-1,26,18,17,-1,27,19,18,-1,27,20,19,-1,28,21,20,-1,29,23,22,-1,23,29,30,-1,20,32,28,-1,20,27,32,-1,18,26,27,-1,17,25,26,-1,25,31,30,-1,30,29,26,-1,30,26,25,-1,29,28,27,-1,29,27,26,-1,28,32,27,-1,22,23,14,-1,20,21,13,-1,21,22,13,-1,22,14,13,-1,9,15,24,-1,10,9,17,-1,9,24,17,-1,6,13,8,-1,13,14,8,-1,28,29,21,-1,29,22,21,-1,24,31,17,-1,31,25,17,-1,30,31,23,-1,31,24,23,-1});
  }
}
protected class MFVec3f10 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0969f,0.8040f,-0.0486f,0.1010f,0.8760f,0.0336f,0.1700f,0.8940f,-0.0078f,0.1700f,0.8910f,-0.0760f,0.1240f,0.8580f,-0.1290f,0.0760f,0.8430f,-0.1430f,0.0250f,0.8190f,-0.0889f,0.0507f,0.8470f,0.0196f,0.0035f,0.8260f,-0.0287f,0.0991f,0.8080f,0.0406f,0.1610f,0.8140f,-0.0019f,0.1650f,0.8080f,-0.0755f,0.1220f,0.7880f,-0.1260f,0.0099f,0.7620f,-0.0937f,0.0099f,0.7620f,-0.0309f,0.0491f,0.7770f,0.0185f,0.0755f,0.7660f,-0.1390f,0.1300f,0.5970f,-0.0062f,0.1320f,0.6000f,-0.0593f,0.1080f,0.6030f,-0.1050f,0.0722f,0.6010f,-0.1180f,0.0314f,0.5900f,-0.0953f,0.0239f,0.5660f,-0.0427f,0.0470f,0.5660f,0.0051f,0.0878f,0.5810f,0.0217f,0.1140f,0.4990f,-0.0132f,0.1160f,0.4880f,-0.0610f,0.1030f,0.5670f,-0.0991f,0.0362f,0.5570f,-0.0926f,0.0250f,0.4860f,-0.0470f,0.0507f,0.4970f,-0.0019f,0.0862f,0.5130f,0.0180f,0.0733f,0.5790f,-0.1080f});
  }
}
protected class MFInt3211 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,7,6,-1,2,8,7,-1,2,0,8,-1,9,8,0,-1,10,6,7,-1,11,5,6,-1,12,4,5,-1,12,3,4,-1,13,1,3,-1,1,13,14,-1,3,12,13,-1,5,11,12,-1,6,10,11,-1,8,9,15,-1,22,13,12,-1,13,22,14,-1,17,15,9,-1,20,12,11,-1,21,22,12,-1,23,9,14,-1,9,23,16,-1,14,22,23,-1,12,20,21,-1,15,17,18,-1,9,16,17,-1,24,17,16,-1,25,18,17,-1,26,19,18,-1,27,20,19,-1,28,21,20,-1,29,22,21,-1,30,23,22,-1,31,16,23,-1,23,30,31,-1,22,29,30,-1,21,28,29,-1,20,27,28,-1,19,26,27,-1,18,25,26,-1,17,24,25,-1,16,31,24,-1,33,26,25,-1,36,29,28,-1,37,31,30,-1,29,36,30,-1,25,24,33,-1,31,37,24,-1,32,33,24,-1,24,37,32,-1,38,37,30,-1,30,36,38,-1,41,33,32,-1,42,39,34,-1,44,36,35,-1,45,38,36,-1,46,37,38,-1,38,45,46,-1,36,44,45,-1,35,43,44,-1,39,42,47,-1,32,40,41,-1,40,46,45,-1,41,40,45,-1,41,45,44,-1,44,43,42,-1,44,42,41,-1,43,47,42,-1,39,35,28,-1,35,36,28,-1,34,39,27,-1,39,28,27,-1,33,34,26,-1,34,27,26,-1,33,41,34,-1,41,42,34,-1,40,32,46,-1,32,37,46,-1,10,19,11,-1,19,20,11,-1,14,9,1,-1,9,0,1,-1,8,15,7,-1,7,15,10,-1,15,19,10,-1,15,18,19,-1,43,35,47,-1,35,39,47,-1});
  }
}
protected class MFVec3f12 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0883f,0.5320f,-0.0035f,0.0609f,0.5330f,-0.0083f,0.0814f,0.5500f,-0.0395f,0.0529f,0.5360f,-0.0368f,0.0577f,0.5440f,-0.0577f,0.0722f,0.5460f,-0.0717f,0.0975f,0.5400f,-0.0647f,0.1050f,0.5390f,-0.0438f,0.1040f,0.5390f,-0.0223f,0.0862f,0.5060f,0.0158f,0.1010f,0.5100f,-0.0798f,0.0706f,0.5100f,-0.1010f,0.0406f,0.5130f,-0.0744f,0.0368f,0.5100f,-0.0357f,0.0556f,0.5060f,-0.0003f,0.1170f,0.5080f,-0.0169f,0.0878f,0.3610f,-0.0126f,0.1230f,0.3630f,-0.0400f,0.1230f,0.3630f,-0.0663f,0.1070f,0.3670f,-0.1070f,0.0588f,0.3650f,-0.1220f,0.0228f,0.3580f,-0.0926f,0.0239f,0.3580f,-0.0475f,0.0497f,0.3580f,-0.0234f,0.1180f,0.3110f,-0.0411f,0.1180f,0.3090f,-0.0685f,0.1050f,0.3100f,-0.1080f,0.0572f,0.3080f,-0.1230f,0.0201f,0.3090f,-0.0937f,0.0191f,0.3110f,-0.0508f,0.0475f,0.3070f,-0.0282f,0.0883f,0.3090f,-0.0180f,0.0959f,0.1240f,-0.0400f,0.0905f,0.1200f,-0.0647f,0.0738f,0.1170f,-0.0814f,0.0373f,0.1210f,-0.0636f,0.0416f,0.1240f,-0.0416f,0.0744f,0.1300f,-0.0212f,0.0561f,0.1300f,-0.0245f,0.0529f,0.1210f,-0.0873f,0.0948f,0.0897f,-0.0368f,0.0916f,0.0779f,-0.0604f,0.0717f,0.0854f,-0.0765f,0.0406f,0.0918f,-0.0626f,0.0384f,0.0881f,-0.0363f,0.0540f,0.0972f,-0.0175f,0.0765f,0.1100f,-0.0169f,0.0486f,0.0999f,-0.0835f});
  }
}
protected class MFInt3213 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,4,3,1,-1,2,4,1,-1,3,6,5,-1,1,3,5,-1,6,8,7,-1,5,6,7,-1,8,10,9,-1,7,8,9,-1,10,12,11,-1,9,10,11,-1,12,14,13,-1,11,12,13,-1,14,16,15,-1,13,14,15,-1,16,18,17,-1,15,16,17,-1,18,20,19,-1,17,18,19,-1,20,22,21,-1,19,20,21,-1,22,24,23,-1,21,22,23,-1,24,25,0,-1,23,24,0,-1,25,4,2,-1,0,25,2,-1,18,26,20,-1,16,26,18,-1,27,26,16,-1,14,27,16,-1,12,27,14,-1,28,27,12,-1,29,28,12,-1,10,29,12,-1,8,29,10,-1,6,37,8,-1,24,30,25,-1,31,30,24,-1,22,31,24,-1,32,31,22,-1,20,32,22,-1,33,32,20,-1,26,33,20,-1,34,33,26,-1,27,34,26,-1,35,34,27,-1,28,35,27,-1,29,35,28,-1,36,35,29,-1,8,36,29,-1,37,36,8,-1,6,38,37,-1,3,38,6,-1,39,38,3,-1,30,39,25,-1,41,40,30,-1,31,41,30,-1,42,41,31,-1,32,42,31,-1,43,42,32,-1,33,43,32,-1,44,43,33,-1,34,44,33,-1,45,44,34,-1,35,45,34,-1,46,45,35,-1,36,46,35,-1,47,46,36,-1,37,47,36,-1,38,47,37,-1,48,47,38,-1,49,48,38,-1,39,49,38,-1,40,49,39,-1,30,40,39,-1,48,49,50,-1,47,48,50,-1,46,47,50,-1,45,46,50,-1,44,45,50,-1,43,44,50,-1,42,43,50,-1,41,42,50,-1,40,41,50,-1,49,40,50,-1,11,13,15,-1,11,15,17,-1,9,11,17,-1,9,17,19,-1,7,9,19,-1,7,19,21,-1,5,7,21,-1,5,21,23,-1,5,23,0,-1,1,5,0,-1,3,4,39,-1,4,25,39,-1});
  }
}
protected class MFVec3f14 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0529f,0.0000f,-0.0923f,0.0863f,0.0000f,-0.0862f,0.0727f,0.0000f,-0.0994f,0.0863f,0.0219f,-0.0862f,0.0727f,0.0219f,-0.0994f,0.1000f,0.0000f,-0.0594f,0.1000f,0.0219f,-0.0594f,0.1130f,0.0000f,0.0645f,0.1130f,0.0219f,0.0645f,0.1120f,0.0000f,0.1170f,0.1120f,0.0156f,0.1170f,0.0701f,0.0000f,0.1460f,0.0701f,0.0156f,0.1460f,0.0468f,0.0000f,0.1530f,0.0468f,0.0156f,0.1530f,0.0215f,0.0000f,0.1460f,0.0215f,0.0156f,0.1460f,0.0165f,0.0000f,0.1250f,0.0165f,0.0156f,0.1250f,0.0211f,0.0000f,0.0377f,0.0211f,0.0219f,0.0377f,0.0393f,0.0000f,-0.0129f,0.0393f,0.0219f,-0.0129f,0.0433f,0.0000f,-0.0534f,0.0433f,0.0219f,-0.0534f,0.0529f,0.0219f,-0.0923f,0.0305f,0.0253f,0.0938f,0.0505f,0.0253f,0.0990f,0.0854f,0.0253f,0.0834f,0.1020f,0.0253f,0.0707f,0.0568f,0.0573f,-0.0918f,0.0492f,0.0573f,-0.0497f,0.0435f,0.0573f,-0.0225f,0.0442f,0.0573f,0.0235f,0.0623f,0.0573f,0.0366f,0.0911f,0.0573f,0.0159f,0.0962f,0.0573f,-0.0121f,0.0911f,0.0573f,-0.0482f,0.0758f,0.0573f,-0.0899f,0.0676f,0.0573f,-0.0962f,0.0578f,0.0953f,-0.0896f,0.0489f,0.0953f,-0.0757f,0.0447f,0.0953f,-0.0432f,0.0451f,0.0953f,-0.0128f,0.0624f,0.0953f,-0.0047f,0.0857f,0.0953f,-0.0134f,0.0953f,0.0953f,-0.0380f,0.0843f,0.0953f,-0.0803f,0.0761f,0.0953f,-0.0889f,0.0682f,0.0953f,-0.0929f,0.0675f,0.1300f,-0.0608f});
  }
}
protected class MFVec2f15 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {-1.0000f,0.0000f,-0.8000f,2.0000f,-0.7000f,3.0000f,0.0000f,5.2000f,0.7000f,3.0000f,0.8000f,2.0000f,1.0000f,0.0000f,0.8000f,-2.0000f,0.7000f,-3.0000f,0.0000f,-5.2000f,-0.7000f,-3.0000f,-0.8000f,-2.0000f,-1.0000f,0.0000f});
  }
}
protected class MFVec2f16 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2500f,0.2500f,0.5000f,0.7500f,0.5000f,1.2000f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f});
  }
}
protected class MFVec3f17 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,5.0000f,0.0000f,0.0000f,8.0000f,0.0000f,0.0000f,12.0000f,0.0000f,0.0000f,15.0000f,0.5000f,0.0000f,18.0000f,1.5000f,0.0000f,25.0000f,2.5000f,0.0000f,30.0000f,4.0000f,0.0000f,34.0000f});
  }
}
protected class MFInt3218 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {5,4,0,-1,0,4,3,-1,1,7,0,-1,7,8,0,-1,8,6,0,-1,6,5,0,-1,3,2,0,-1,2,1,0,-1,1,2,9,-1,2,3,10,-1,3,4,11,-1,4,5,12,-1,5,6,13,-1,8,7,15,-1,7,1,9,-1,9,15,7,-1,15,14,8,-1,13,16,5,-1,16,12,5,-1,12,11,4,-1,11,10,3,-1,10,9,2,-1,12,16,20,-1,13,14,22,-1,14,15,23,-1,24,23,15,-1,23,22,14,-1,20,19,12,-1,17,18,26,-1,18,19,27,-1,19,20,27,-1,20,21,28,-1,22,23,29,-1,30,29,23,-1,27,26,18,-1,26,25,17,-1,30,31,25,-1,25,26,29,-1,25,29,30,-1,26,27,28,-1,26,28,29,-1,27,20,28,-1,24,15,9,-1,22,21,13,-1,29,28,22,-1,28,21,22,-1,24,31,23,-1,31,30,23,-1,25,31,17,-1,31,24,17,-1,17,24,10,-1,24,9,10,-1,18,10,11,-1,18,17,10,-1,18,12,19,-1,18,11,12,-1,21,20,13,-1,20,16,13,-1,14,13,8,-1,13,6,8,-1});
  }
}
protected class MFVec3f19 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0969f,0.8040f,-0.0486f,-0.1010f,0.8760f,0.0336f,-0.1700f,0.8940f,-0.0078f,-0.1700f,0.8910f,-0.0760f,-0.1240f,0.8580f,-0.1290f,-0.0760f,0.8430f,-0.1430f,-0.0250f,0.8190f,-0.0889f,-0.0507f,0.8470f,0.0196f,-0.0035f,0.8260f,-0.0287f,-0.0991f,0.8080f,0.0406f,-0.1610f,0.8140f,-0.0019f,-0.1650f,0.8080f,-0.0755f,-0.1220f,0.7880f,-0.1260f,-0.0099f,0.7620f,-0.0937f,-0.0099f,0.7620f,-0.0309f,-0.0491f,0.7770f,0.0185f,-0.0755f,0.7660f,-0.1390f,-0.1300f,0.5970f,-0.0062f,-0.1320f,0.6000f,-0.0593f,-0.1080f,0.6030f,-0.1050f,-0.0722f,0.6010f,-0.1180f,-0.0314f,0.5900f,-0.0953f,-0.0239f,0.5660f,-0.0427f,-0.0470f,0.5660f,0.0051f,-0.0878f,0.5810f,0.0217f,-0.1140f,0.4990f,-0.0132f,-0.1160f,0.4880f,-0.0610f,-0.1030f,0.5670f,-0.0991f,-0.0362f,0.5570f,-0.0926f,-0.0250f,0.4860f,-0.0470f,-0.0507f,0.4970f,-0.0019f,-0.0862f,0.5130f,0.0180f});
  }
}
protected class MFInt3220 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,25,18,-1,25,32,18,-1,32,27,18,-1,27,22,18,-1,22,10,18,-1,10,6,18,-1,6,8,18,-1,8,14,18,-1,14,8,17,-1,6,10,9,-1,10,22,24,-1,22,27,39,-1,27,32,39,-1,32,25,42,-1,25,14,30,-1,17,30,14,-1,30,42,25,-1,42,39,32,-1,39,24,22,-1,24,9,10,-1,4,17,8,-1,39,42,43,-1,30,43,42,-1,17,4,1,-1,24,39,26,-1,39,43,44,-1,30,17,34,-1,16,34,17,-1,34,43,30,-1,44,26,39,-1,0,1,4,-1,1,16,17,-1,16,1,3,-1,1,0,2,-1,0,5,7,-1,5,26,28,-1,26,44,45,-1,44,43,46,-1,43,34,36,-1,34,16,15,-1,15,36,34,-1,36,46,43,-1,46,45,44,-1,45,28,26,-1,28,7,5,-1,7,2,0,-1,2,3,1,-1,3,15,16,-1,45,46,37,-1,36,15,20,-1,36,37,46,-1,13,2,7,-1,3,20,15,-1,3,2,13,-1,36,20,29,-1,29,37,36,-1,13,21,23,-1,21,33,23,-1,41,37,40,-1,37,29,31,-1,29,20,19,-1,19,31,29,-1,31,40,37,-1,40,38,41,-1,35,23,33,-1,23,12,13,-1,12,11,13,-1,31,19,11,-1,40,31,11,-1,40,11,12,-1,12,23,38,-1,12,38,40,-1,23,35,38,-1,28,21,7,-1,21,13,7,-1,45,33,28,-1,33,21,28,-1,33,45,41,-1,45,37,41,-1,33,41,35,-1,41,38,35,-1,20,3,47,-1,11,19,47,-1,19,20,47,-1,13,47,3,-1,13,11,47,-1,4,8,6,-1,26,5,24,-1,5,9,24,-1,6,9,4,-1,9,0,4,-1,9,5,0,-1});
  }
}
protected class MFVec3f21 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.1230f,0.3630f,-0.0663f,-0.1230f,0.3630f,-0.0400f,-0.1180f,0.3090f,-0.0685f,-0.1180f,0.3110f,-0.0411f,-0.1170f,0.5080f,-0.0169f,-0.1070f,0.3670f,-0.1070f,-0.1050f,0.5390f,-0.0438f,-0.1050f,0.3100f,-0.1080f,-0.1040f,0.5390f,-0.0223f,-0.1010f,0.5100f,-0.0798f,-0.0975f,0.5400f,-0.0647f,-0.0948f,0.0897f,-0.0368f,-0.0916f,0.0779f,-0.0604f,-0.0905f,0.1200f,-0.0647f,-0.0883f,0.5320f,-0.0035f,-0.0883f,0.3090f,-0.0180f,-0.0878f,0.3610f,-0.0126f,-0.0862f,0.5060f,0.0158f,-0.0814f,0.5500f,-0.0395f,-0.0765f,0.1100f,-0.0169f,-0.0744f,0.1300f,-0.0212f,-0.0738f,0.1170f,-0.0814f,-0.0722f,0.5460f,-0.0717f,-0.0717f,0.0854f,-0.0765f,-0.0706f,0.5100f,-0.1010f,-0.0609f,0.5330f,-0.0083f,-0.0588f,0.3650f,-0.1220f,-0.0577f,0.5440f,-0.0577f,-0.0572f,0.3080f,-0.1230f,-0.0561f,0.1300f,-0.0245f,-0.0556f,0.5060f,-0.0003f,-0.0540f,0.0972f,-0.0175f,-0.0529f,0.5360f,-0.0368f,-0.0529f,0.1210f,-0.0873f,-0.0497f,0.3580f,-0.0234f,-0.0486f,0.0999f,-0.0835f,-0.0475f,0.3070f,-0.0282f,-0.0416f,0.1240f,-0.0416f,-0.0406f,0.0918f,-0.0626f,-0.0406f,0.5130f,-0.0744f,-0.0384f,0.0881f,-0.0363f,-0.0373f,0.1210f,-0.0636f,-0.0368f,0.5100f,-0.0357f,-0.0239f,0.3580f,-0.0475f,-0.0228f,0.3580f,-0.0926f,-0.0201f,0.3090f,-0.0937f,-0.0191f,0.3110f,-0.0508f,-0.0985f,0.1250f,-0.0375f});
  }
}
protected class MFInt3222 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,50,0,-1,50,8,7,-1,50,7,0,-1,1,9,8,-1,1,8,50,-1,49,10,9,-1,49,9,1,-1,46,11,10,-1,46,10,49,-1,2,12,11,-1,2,11,46,-1,3,13,12,-1,3,12,2,-1,4,14,13,-1,4,13,3,-1,45,14,4,-1,47,15,45,-1,19,15,47,-1,48,18,19,-1,5,16,18,-1,5,18,48,-1,6,17,16,-1,6,16,5,-1,0,7,17,-1,0,17,6,-1,14,20,21,-1,14,21,13,-1,13,21,12,-1,12,21,22,-1,12,22,11,-1,11,22,10,-1,17,23,16,-1,16,23,24,-1,16,24,18,-1,18,24,25,-1,18,25,19,-1,19,25,26,-1,19,26,15,-1,15,26,20,-1,20,26,27,-1,20,27,21,-1,21,27,28,-1,21,28,22,-1,22,28,29,-1,10,30,9,-1,9,30,31,-1,9,31,8,-1,8,31,32,-1,17,32,23,-1,23,33,34,-1,23,34,35,-1,23,35,24,-1,24,35,36,-1,24,36,25,-1,25,36,37,-1,25,37,26,-1,26,37,38,-1,26,38,27,-1,27,38,39,-1,27,39,28,-1,28,39,40,-1,28,40,29,-1,29,40,41,-1,29,41,30,-1,30,41,42,-1,30,42,31,-1,31,42,43,-1,31,43,32,-1,32,43,33,-1,32,33,23,-1,44,43,42,-1,44,42,41,-1,44,41,40,-1,44,40,39,-1,44,39,38,-1,44,38,37,-1,44,37,36,-1,44,36,35,-1,44,35,34,-1,44,34,33,-1,44,33,43,-1,4,3,2,-1,45,4,2,-1,45,2,46,-1,47,45,46,-1,48,46,49,-1,5,48,49,-1,5,49,1,-1,6,5,1,-1,6,1,50,-1,30,10,29,-1,10,22,29,-1,17,7,32,-1,7,8,32,-1,19,47,48,-1,47,46,48,-1,20,14,15,-1,14,45,15,-1});
  }
}
protected class MFVec3f23 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0727f,0.0000f,-0.0994f,-0.1000f,0.0000f,-0.0594f,-0.0701f,0.0000f,0.1460f,-0.0468f,0.0000f,0.1530f,-0.0215f,0.0000f,0.1460f,-0.0433f,0.0000f,-0.0534f,-0.0529f,0.0000f,-0.0923f,-0.0727f,0.0219f,-0.0994f,-0.0863f,0.0219f,-0.0862f,-0.1000f,0.0219f,-0.0594f,-0.1080f,0.0219f,-0.0048f,-0.1120f,0.0156f,0.1170f,-0.0701f,0.0156f,0.1460f,-0.0468f,0.0156f,0.1530f,-0.0215f,0.0156f,0.1460f,-0.0165f,0.0170f,0.0777f,-0.0433f,0.0219f,-0.0534f,-0.0529f,0.0219f,-0.0923f,-0.0445f,0.0273f,-0.0189f,-0.0265f,0.0253f,0.0549f,-0.0305f,0.0253f,0.0938f,-0.0690f,0.0253f,0.0938f,-0.1020f,0.0253f,0.0707f,-0.0568f,0.0573f,-0.0918f,-0.0492f,0.0573f,-0.0497f,-0.0424f,0.0573f,-0.0014f,-0.0478f,0.0573f,0.0341f,-0.0623f,0.0573f,0.0366f,-0.0864f,0.0573f,0.0245f,-0.0962f,0.0573f,-0.0121f,-0.0845f,0.0573f,-0.0764f,-0.0758f,0.0573f,-0.0899f,-0.0676f,0.0573f,-0.0962f,-0.0578f,0.0953f,-0.0896f,-0.0489f,0.0953f,-0.0757f,-0.0459f,0.0953f,-0.0615f,-0.0435f,0.0953f,-0.0292f,-0.0485f,0.0953f,-0.0058f,-0.0624f,0.0953f,-0.0047f,-0.0857f,0.0953f,-0.0134f,-0.0953f,0.0953f,-0.0380f,-0.0843f,0.0953f,-0.0803f,-0.0761f,0.0953f,-0.0889f,-0.0682f,0.0953f,-0.0929f,-0.0675f,0.1300f,-0.0608f,-0.0165f,0.0000f,0.1250f,-0.1120f,0.0000f,0.1170f,-0.0165f,0.0000f,0.0777f,-0.0393f,0.0000f,-0.0129f,-0.1080f,0.0000f,-0.0048f,-0.0863f,0.0000f,-0.0862f});
  }
}
protected class MFVec2f24 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {-1.0000f,0.0000f,-0.8000f,2.0000f,-0.7000f,3.0000f,0.0000f,5.2000f,0.7000f,3.0000f,0.8000f,2.0000f,1.0000f,0.0000f,0.8000f,-2.0000f,0.7000f,-3.0000f,0.0000f,-5.2000f,-0.7000f,-3.0000f,-0.8000f,-2.0000f,-1.0000f,0.0000f});
  }
}
protected class MFVec2f25 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.2500f,0.2500f,0.5000f,0.7500f,0.5000f,1.2000f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f,0.5000f,1.3500f});
  }
}
protected class MFVec3f26 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,5.0000f,0.0000f,0.0000f,8.0000f,0.0000f,0.0000f,12.0000f,0.0000f,0.0000f,15.0000f,0.5000f,0.0000f,18.0000f,1.5000f,0.0000f,25.0000f,2.5000f,0.0000f,30.0000f,4.0000f,0.0000f,34.0000f});
  }
}
protected class MFString27 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"small_logo.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/small_logo.gif"});
  }
}
protected class MFInt3228 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,-1,3,0,2,-1,4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,31,32,33,-1,32,25,33,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,33,36,31,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,39,35,40,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,40,35,42,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,36,45,46,-1,36,33,45,-1,40,42,47,-1,43,47,42,-1,47,48,40,-1,39,40,48,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,51,46,52,-1,46,45,52,-1,52,45,53,-1,33,53,45,-1,33,39,53,-1,49,54,47,-1,48,47,54,-1,55,56,52,-1,57,52,53,-1,57,55,52,-1,58,57,53,-1,59,58,53,-1,53,39,59,-1,39,48,59,-1,59,48,54,-1,58,59,60,-1,54,49,61,-1,59,54,61,-1,60,59,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,73,74,75,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,74,73,81,-1,73,76,82,-1,82,81,73,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,81,82,87,-1,87,88,81,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,98,99,100,-1,98,91,99,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,36,103,31,-1,51,103,36,46,-1,103,100,31,-1,100,103,98,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,109,107,111,-1,107,102,111,-1,111,102,106,-1,111,112,109,-1,106,112,111,-1,113,110,108,-1,110,113,114,-1,51,52,115,-1,116,115,117,-1,117,106,116,-1,118,109,112,-1,119,108,109,-1,108,119,113,-1,109,118,119,-1,120,113,119,-1,119,121,120,-1,52,56,122,-1,122,115,52,-1,115,122,123,-1,117,124,125,-1,106,117,125,-1,118,112,106,125,-1,119,118,125,-1,121,119,125,-1,126,124,123,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,130,126,123,-1,122,130,123,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,74,81,133,-1,81,134,133,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143});
  }
}
protected class MFInt3229 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,146,134,-1,145,140,146,-1,134,81,145,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,152,145,81,-1,81,88,152,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,155,28,25,-1,155,29,28,-1,155,25,32,-1,155,32,31,-1,155,31,100,-1,155,100,99,-1,155,99,91,-1,155,91,94,-1,155,94,96,-1,155,96,29,-1,156,151,149,-1,156,154,151,-1,156,149,150,-1,156,150,153,-1,156,153,152,-1,156,152,88,-1,156,88,87,-1,156,87,89,-1,156,89,85,-1,156,85,84,-1,156,84,86,-1,156,86,154,-1,76,157,60,-1,76,73,158,157,-1,159,158,73,75,160,-1,161,56,55,-1,60,162,58,-1,162,60,157,-1,161,55,163,-1,57,164,163,55,-1,160,163,164,-1,160,164,159,-1,164,57,165,-1,164,165,159,-1,57,58,166,165,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,172,134,146,171,-1,134,172,130,-1,169,124,126,173,-1,173,126,130,-1,169,173,172,171,-1,173,130,172,-1,122,74,133,174,-1,133,134,174,-1,130,122,174,-1,134,130,174,-1,122,56,175,74,-1,74,175,176,-1,175,56,161,176,-1,74,176,75,-1,176,161,163,-1,176,160,75,-1,176,163,160,-1,115,116,177,51,-1,106,98,177,116,-1,51,177,103,-1,177,98,103,-1});
  }
}
protected class MFVec3f30 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0430f,1.2500f,0.0614f,0.1010f,1.2500f,0.0614f,0.1030f,1.3100f,0.0195f,0.0210f,1.3200f,0.0276f,0.0572f,1.2700f,-0.1530f,0.0524f,1.1500f,-0.1340f,0.0000f,1.1900f,-0.1400f,0.0000f,1.2600f,-0.1470f,-0.0572f,1.2700f,-0.1530f,-0.0228f,1.1800f,-0.1400f,-0.0524f,1.1500f,-0.1340f,0.0000f,1.1300f,-0.1260f,-0.0228f,1.1300f,-0.1240f,0.0000f,1.3100f,-0.1460f,-0.0545f,1.3500f,-0.1380f,0.0000f,1.3500f,-0.1360f,-0.0593f,1.3000f,-0.1510f,0.0593f,1.3000f,-0.1510f,0.0545f,1.3500f,-0.1380f,-0.0255f,1.3000f,-0.1460f,0.0975f,1.2600f,-0.1500f,0.1000f,1.3000f,-0.1480f,-0.1000f,1.3000f,-0.1480f,-0.0975f,1.2600f,-0.1500f,-0.1170f,1.4100f,-0.0395f,-0.0674f,1.4500f,-0.0314f,-0.0926f,1.4100f,-0.0937f,-0.1240f,1.4000f,-0.0706f,-0.0583f,1.4400f,-0.0615f,-0.0228f,1.4600f,-0.0872f,-0.0534f,1.4200f,-0.1120f,-0.0228f,1.4200f,0.0035f,-0.0593f,1.4300f,-0.0185f,-0.0787f,1.3900f,-0.0029f,-0.1120f,1.4000f,-0.0131f,-0.1640f,1.3900f,-0.0373f,-0.0153f,1.3900f,0.0159f,-0.0953f,1.3500f,-0.1360f,-0.0545f,1.3500f,-0.1380f,-0.1390f,1.3400f,0.0030f,-0.1370f,1.3400f,-0.0368f,0.0000f,1.3500f,-0.1360f,-0.1560f,1.3500f,-0.0915f,-0.1320f,1.2900f,-0.1270f,-0.1000f,1.3000f,-0.1480f,-0.0418f,1.3500f,0.0168f,-0.0130f,1.3700f,0.0167f,-0.1510f,1.2800f,-0.0878f,-0.1360f,1.3200f,-0.0406f,-0.1240f,1.2600f,-0.1250f,-0.0975f,1.2600f,-0.1500f,0.0023f,1.3700f,0.0167f,-0.0096f,1.3200f,0.0276f,-0.0918f,1.3100f,0.0195f,-0.1410f,1.2500f,-0.0744f,-0.0316f,1.2500f,0.0614f,-0.0026f,1.2500f,0.0458f,-0.0611f,1.2500f,0.0668f,-0.0896f,1.2500f,0.0614f,-0.1260f,1.2400f,0.0120f,-0.1260f,1.2200f,0.0141f,-0.1290f,1.1700f,-0.0523f,-0.1150f,1.1600f,-0.1050f,-0.0851f,1.1800f,-0.1340f,-0.0524f,1.1500f,-0.1340f,-0.0830f,1.1300f,-0.1220f,-0.1170f,1.1500f,-0.0180f,-0.1100f,1.1000f,-0.0846f,-0.0808f,1.1000f,-0.1110f,-0.0228f,1.1300f,-0.1240f,-0.0524f,1.1000f,-0.1190f,0.0000f,1.1300f,-0.1260f,-0.0228f,1.1000f,-0.1160f,-0.0563f,1.1500f,0.0377f,-0.0048f,1.1800f,0.0458f,-0.0343f,1.1800f,0.0485f,-0.0966f,1.1500f,-0.0041f,-0.1200f,1.1000f,-0.0373f,-0.1210f,1.0700f,-0.0356f,-0.1060f,1.0700f,-0.0711f,-0.0475f,1.0600f,-0.1050f,0.0000f,1.0800f,0.0556f,-0.0787f,1.0800f,0.0347f,-0.1030f,1.0800f,0.0030f,-0.0975f,1.0100f,-0.0873f,-0.1340f,0.9980f,-0.0314f,-0.0475f,1.0200f,-0.1090f,-0.0325f,1.0200f,0.0529f,0.0000f,1.0200f,0.0422f,-0.0975f,1.0200f,0.0132f,0.0926f,1.4100f,-0.0937f,0.0674f,1.4500f,-0.0314f,0.1170f,1.4100f,-0.0395f,0.1240f,1.4000f,-0.0706f,0.0583f,1.4400f,-0.0615f,0.0534f,1.4200f,-0.1120f,0.0228f,1.4600f,-0.0872f,0.0000f,1.4000f,-0.1120f,0.0787f,1.3900f,-0.0029f,0.0593f,1.4300f,-0.0185f,0.0228f,1.4200f,0.0035f,0.1120f,1.4000f,-0.0131f,0.1640f,1.3900f,-0.0373f,0.0153f,1.3900f,0.0159f,0.0953f,1.3500f,-0.1360f,0.0545f,1.3500f,-0.1380f,0.1390f,1.3400f,0.0030f,0.1560f,1.3500f,-0.0915f,0.1320f,1.2900f,-0.1270f,0.1510f,1.2800f,-0.0878f,0.1000f,1.3000f,-0.1480f,0.1370f,1.3400f,-0.0368f,0.1470f,1.3200f,-0.0406f,0.1240f,1.2600f,-0.1250f,0.0975f,1.2600f,-0.1500f,0.0210f,1.3200f,0.0276f,0.0532f,1.3500f,0.0168f,0.1030f,1.3100f,0.0195f,0.1350f,1.2900f,-0.0406f,0.1410f,1.2500f,-0.0744f,0.1320f,1.1800f,-0.0830f,0.1340f,1.1900f,-0.0572f,0.0140f,1.2500f,0.0458f,0.0430f,1.2500f,0.0614f,0.1010f,1.2500f,0.0614f,0.1380f,1.2400f,0.0120f,0.0650f,1.2300f,0.0743f,0.1150f,1.1600f,-0.1050f,0.0851f,1.1800f,-0.1340f,0.0524f,1.1500f,-0.1340f,0.0430f,1.2000f,0.0641f,0.1270f,1.1400f,-0.0427f,0.0830f,1.1300f,-0.1220f,0.0162f,1.1800f,0.0458f,0.0457f,1.1800f,0.0485f,0.1170f,1.1500f,-0.0180f,0.1100f,1.1000f,-0.0846f,0.0808f,1.1000f,-0.1110f,0.0524f,1.1000f,-0.1190f,0.0228f,1.1000f,-0.1160f,0.1080f,1.1500f,-0.0041f,0.1200f,1.1000f,-0.0373f,0.1210f,1.0700f,-0.0356f,0.1060f,1.0700f,-0.0711f,0.0475f,1.0600f,-0.1050f,0.0787f,1.0800f,0.0347f,0.0844f,1.1500f,0.0297f,0.1030f,1.0800f,0.0030f,0.0000f,1.0700f,-0.1100f,0.0975f,1.0100f,-0.0873f,0.1340f,0.9980f,-0.0475f,0.0475f,1.0200f,-0.1090f,0.0325f,1.0200f,0.0529f,0.0975f,1.0200f,0.0132f,0.0000f,1.0200f,-0.1170f,0.0000f,1.4400f,-0.0389f,0.0000f,1.0100f,-0.0259f,-0.1040f,1.1900f,0.0423f,-0.0778f,1.1900f,0.0642f,-0.0780f,1.1900f,0.0644f,-0.0493f,1.2000f,0.0664f,-0.0281f,1.2200f,0.0587f,-0.1040f,1.2000f,0.0568f,-0.0484f,1.2100f,0.0692f,-0.0549f,1.2100f,0.0708f,-0.0806f,1.2100f,0.0713f,-0.0852f,1.2100f,0.0703f,0.1160f,1.1900f,0.0430f,0.1140f,1.2100f,0.0572f,0.0967f,1.2100f,0.0701f,0.1100f,1.1900f,0.0502f,0.0930f,1.1900f,0.0622f,0.0832f,1.1900f,0.0662f,0.0863f,1.2100f,0.0728f,0.0154f,1.2100f,0.0458f,-0.0039f,1.2100f,0.0458f,-0.0145f,1.2000f,0.0512f,0.0534f,1.3500f,0.0168f});
  }
}
protected class MFVec2f31 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1611f,-0.0206f,0.9468f,-0.0206f,0.9739f,0.9344f,-0.1370f,1.0940f,0.1973f,0.6424f,0.2231f,0.0488f,0.5054f,0.2466f,0.5054f,0.5929f,0.8135f,0.6424f,0.6282f,0.1972f,0.7876f,0.0488f,0.5054f,-0.0502f,0.6282f,-0.0502f,0.5054f,0.8403f,0.7989f,1.0380f,0.5054f,1.0380f,0.8248f,0.7908f,0.1860f,0.7908f,0.2118f,1.0380f,0.6427f,0.7908f,-0.0198f,0.5929f,-0.0332f,0.7908f,1.0440f,0.7908f,1.0310f,0.5929f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFInt3232 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,5,6,-1,6,7,4,-1,8,7,6,-1,6,9,8,-1,9,10,8,-1,6,5,11,-1,9,6,12,-1,11,12,6,-1,12,10,9,-1,7,8,13,-1,13,4,7,-1,14,15,16,-1,15,17,13,-1,4,13,17,-1,17,15,18,-1,13,19,15,-1,19,13,8,-1,19,16,15,-1,16,19,8,-1,17,20,4,-1,5,4,20,-1,18,21,17,-1,20,17,21,-1,16,22,14,-1,22,16,23,-1,8,23,16,-1,23,8,10,-1,24,25,26,-1,26,27,24,-1,25,28,26,-1,28,29,30,-1,30,26,28,-1,25,24,34,-1,33,25,34,-1,24,35,34,-1,27,35,24,-1,27,26,37,-1,37,26,30,-1,38,37,30,-1,33,34,39,-1,39,34,35,-1,41,38,30,-1,35,27,42,-1,37,42,27,-1,42,37,43,-1,37,38,44,-1,44,43,37,-1,43,47,42,-1,47,43,49,-1,43,44,49,-1,50,49,44,-1,33,39,53,-1,49,54,47,-1,59,58,53,-1,53,39,59,-1,58,59,60,-1,54,49,61,-1,49,50,62,-1,63,62,50,-1,62,61,49,-1,64,63,50,-1,63,64,65,-1,65,62,63,-1,66,60,61,-1,62,65,67,-1,68,67,65,-1,64,69,70,-1,64,70,65,-1,70,68,65,-1,69,71,72,-1,72,70,69,-1,66,76,60,-1,67,77,62,-1,62,77,61,-1,77,66,61,-1,66,77,78,-1,77,67,79,-1,79,67,68,-1,79,78,77,-1,68,70,80,-1,70,72,80,-1,80,79,68,-1,73,76,82,-1,76,66,83,-1,78,83,66,-1,83,82,76,-1,78,79,84,-1,79,80,84,-1,84,85,78,-1,86,84,80,-1,82,83,89,-1,83,78,89,-1,89,87,82,-1,78,85,89,-1,90,91,92,-1,92,93,90,-1,90,94,91,-1,95,96,94,-1,94,90,95,-1,29,96,97,-1,96,95,97,-1,97,30,29,-1,30,97,41,-1,41,97,95,-1,101,92,91,-1,98,101,91,-1,101,102,92,-1,92,102,93,-1,104,90,93,-1,90,104,95,-1,95,105,41,-1,104,105,95,-1,106,101,98,-1,102,101,106,-1,107,93,102,-1,93,107,104,-1,108,104,107,-1,107,109,108,-1,110,105,104,-1,104,108,110,-1,113,110,108,-1,110,113,114,-1,119,108,109,-1,108,119,113,-1,120,113,119,-1,119,121,120,-1,117,124,125,-1,106,117,125,-1,127,114,113,-1,114,127,128,-1,113,120,127,-1,114,128,129,-1,131,120,121,-1,131,127,120,-1,132,129,128,-1,128,127,132,-1,121,135,131,-1,136,132,127,-1,132,136,137,-1,138,71,129,-1,138,129,132,-1,137,138,132,-1,139,72,71,-1,72,139,80,-1,71,138,139,-1,140,135,121,-1,140,121,125,-1,141,127,131,-1,127,141,136,-1,131,135,141,-1,142,141,135,-1,143,136,141,-1,136,143,137,-1,141,142,143,-1,144,138,137,-1,144,139,138,-1,143,144,137,-1,145,140,146,-1,147,135,140,-1,135,147,142,-1,140,145,147,-1,148,80,139,-1,80,148,86,-1,139,144,148,-1,149,143,142,-1,149,144,143,-1,142,150,149,-1,151,148,144,-1,144,149,151,-1,153,147,145,-1,153,142,147,-1,145,152,153,-1,153,150,142,-1,154,86,148,-1,148,151,154,-1,76,157,60,-1,76,73,158,157,-1,60,162,58,-1,162,60,157,-1,166,58,162,-1,165,166,159,-1,166,162,157,158,159,-1,140,125,167,-1,124,168,125,-1,168,167,125,-1,124,169,168,-1,146,140,167,170,-1,168,170,167,-1,168,169,170,-1,146,170,171,-1,169,171,170,-1,98,117,106,-1});
  }
}
protected class MFVec3f33 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0430f,1.2500f,0.0614f,0.1010f,1.2500f,0.0614f,0.1030f,1.3100f,0.0195f,0.0210f,1.3200f,0.0276f,0.0572f,1.2700f,-0.1530f,0.0524f,1.1500f,-0.1340f,0.0000f,1.1900f,-0.1400f,0.0000f,1.2600f,-0.1470f,-0.0572f,1.2700f,-0.1530f,-0.0228f,1.1800f,-0.1400f,-0.0524f,1.1500f,-0.1340f,0.0000f,1.1300f,-0.1260f,-0.0228f,1.1300f,-0.1240f,0.0000f,1.3100f,-0.1460f,-0.0545f,1.3500f,-0.1380f,0.0000f,1.3500f,-0.1360f,-0.0593f,1.3000f,-0.1510f,0.0593f,1.3000f,-0.1510f,0.0545f,1.3500f,-0.1380f,-0.0255f,1.3000f,-0.1460f,0.0975f,1.2600f,-0.1500f,0.1000f,1.3000f,-0.1480f,-0.1000f,1.3000f,-0.1480f,-0.0975f,1.2600f,-0.1500f,-0.1170f,1.4100f,-0.0395f,-0.0674f,1.4500f,-0.0314f,-0.0926f,1.4100f,-0.0937f,-0.1240f,1.4000f,-0.0706f,-0.0583f,1.4400f,-0.0615f,-0.0228f,1.4600f,-0.0872f,-0.0534f,1.4200f,-0.1120f,-0.0228f,1.4200f,0.0035f,-0.0593f,1.4300f,-0.0185f,-0.0787f,1.3900f,-0.0029f,-0.1120f,1.4000f,-0.0131f,-0.1640f,1.3900f,-0.0373f,-0.0153f,1.3900f,0.0159f,-0.0953f,1.3500f,-0.1360f,-0.0545f,1.3500f,-0.1380f,-0.1390f,1.3400f,0.0030f,-0.1370f,1.3400f,-0.0368f,0.0000f,1.3500f,-0.1360f,-0.1560f,1.3500f,-0.0915f,-0.1320f,1.2900f,-0.1270f,-0.1000f,1.3000f,-0.1480f,-0.0418f,1.3500f,0.0168f,-0.0130f,1.3700f,0.0167f,-0.1510f,1.2800f,-0.0878f,-0.1360f,1.3200f,-0.0406f,-0.1240f,1.2600f,-0.1250f,-0.0975f,1.2600f,-0.1500f,0.0023f,1.3700f,0.0167f,-0.0096f,1.3200f,0.0276f,-0.0918f,1.3100f,0.0195f,-0.1410f,1.2500f,-0.0744f,-0.0316f,1.2500f,0.0614f,-0.0026f,1.2500f,0.0458f,-0.0611f,1.2500f,0.0668f,-0.0896f,1.2500f,0.0614f,-0.1260f,1.2400f,0.0120f,-0.1260f,1.2200f,0.0141f,-0.1290f,1.1700f,-0.0523f,-0.1150f,1.1600f,-0.1050f,-0.0851f,1.1800f,-0.1340f,-0.0524f,1.1500f,-0.1340f,-0.0830f,1.1300f,-0.1220f,-0.1170f,1.1500f,-0.0180f,-0.1100f,1.1000f,-0.0846f,-0.0808f,1.1000f,-0.1110f,-0.0228f,1.1300f,-0.1240f,-0.0524f,1.1000f,-0.1190f,0.0000f,1.1300f,-0.1260f,-0.0228f,1.1000f,-0.1160f,-0.0563f,1.1500f,0.0377f,-0.0048f,1.1800f,0.0458f,-0.0343f,1.1800f,0.0485f,-0.0966f,1.1500f,-0.0041f,-0.1200f,1.1000f,-0.0373f,-0.1210f,1.0700f,-0.0356f,-0.1060f,1.0700f,-0.0711f,-0.0475f,1.0600f,-0.1050f,0.0000f,1.0800f,0.0556f,-0.0787f,1.0800f,0.0347f,-0.1030f,1.0800f,0.0030f,-0.0975f,1.0100f,-0.0873f,-0.1340f,0.9980f,-0.0314f,-0.0475f,1.0200f,-0.1090f,-0.0325f,1.0200f,0.0529f,0.0000f,1.0200f,0.0422f,-0.0975f,1.0200f,0.0132f,0.0926f,1.4100f,-0.0937f,0.0674f,1.4500f,-0.0314f,0.1170f,1.4100f,-0.0395f,0.1240f,1.4000f,-0.0706f,0.0583f,1.4400f,-0.0615f,0.0534f,1.4200f,-0.1120f,0.0228f,1.4600f,-0.0872f,0.0000f,1.4000f,-0.1120f,0.0787f,1.3900f,-0.0029f,0.0593f,1.4300f,-0.0185f,0.0228f,1.4200f,0.0035f,0.1120f,1.4000f,-0.0131f,0.1640f,1.3900f,-0.0373f,0.0153f,1.3900f,0.0159f,0.0953f,1.3500f,-0.1360f,0.0545f,1.3500f,-0.1380f,0.1390f,1.3400f,0.0030f,0.1560f,1.3500f,-0.0915f,0.1320f,1.2900f,-0.1270f,0.1510f,1.2800f,-0.0878f,0.1000f,1.3000f,-0.1480f,0.1370f,1.3400f,-0.0368f,0.1470f,1.3200f,-0.0406f,0.1240f,1.2600f,-0.1250f,0.0975f,1.2600f,-0.1500f,0.0210f,1.3200f,0.0276f,0.0532f,1.3500f,0.0168f,0.1030f,1.3100f,0.0195f,0.1350f,1.2900f,-0.0406f,0.1410f,1.2500f,-0.0744f,0.1320f,1.1800f,-0.0830f,0.1340f,1.1900f,-0.0572f,0.0140f,1.2500f,0.0458f,0.0430f,1.2500f,0.0614f,0.1010f,1.2500f,0.0614f,0.1380f,1.2400f,0.0120f,0.0650f,1.2300f,0.0743f,0.1150f,1.1600f,-0.1050f,0.0851f,1.1800f,-0.1340f,0.0524f,1.1500f,-0.1340f,0.0430f,1.2000f,0.0641f,0.1270f,1.1400f,-0.0427f,0.0830f,1.1300f,-0.1220f,0.0162f,1.1800f,0.0458f,0.0457f,1.1800f,0.0485f,0.1170f,1.1500f,-0.0180f,0.1100f,1.1000f,-0.0846f,0.0808f,1.1000f,-0.1110f,0.0524f,1.1000f,-0.1190f,0.0228f,1.1000f,-0.1160f,0.1080f,1.1500f,-0.0041f,0.1200f,1.1000f,-0.0373f,0.1210f,1.0700f,-0.0356f,0.1060f,1.0700f,-0.0711f,0.0475f,1.0600f,-0.1050f,0.0787f,1.0800f,0.0347f,0.0844f,1.1500f,0.0297f,0.1030f,1.0800f,0.0030f,0.0000f,1.0700f,-0.1100f,0.0975f,1.0100f,-0.0873f,0.1340f,0.9980f,-0.0475f,0.0475f,1.0200f,-0.1090f,0.0325f,1.0200f,0.0529f,0.0975f,1.0200f,0.0132f,0.0000f,1.0200f,-0.1170f,0.0000f,1.4400f,-0.0389f,0.0000f,1.0100f,-0.0259f,-0.1040f,1.1900f,0.0423f,-0.0778f,1.1900f,0.0642f,-0.0780f,1.1900f,0.0644f,-0.0493f,1.2000f,0.0664f,-0.0281f,1.2200f,0.0587f,-0.1040f,1.2000f,0.0568f,-0.0484f,1.2100f,0.0692f,-0.0549f,1.2100f,0.0708f,-0.0806f,1.2100f,0.0713f,-0.0852f,1.2100f,0.0703f,0.1160f,1.1900f,0.0430f,0.1140f,1.2100f,0.0572f,0.0967f,1.2100f,0.0701f,0.1100f,1.1900f,0.0502f,0.0930f,1.1900f,0.0622f,0.0832f,1.1900f,0.0662f,0.0863f,1.2100f,0.0728f,0.0154f,1.2100f,0.0458f,-0.0039f,1.2100f,0.0458f,-0.0145f,1.2000f,0.0512f,0.0534f,1.3500f,0.0168f});
  }
}
protected class MFVec2f34 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.1611f,-0.0206f,0.9468f,-0.0206f,0.9739f,0.9344f,-0.1370f,1.0940f,0.1973f,0.6424f,0.2231f,0.0488f,0.5054f,0.2466f,0.5054f,0.5929f,0.8135f,0.6424f,0.6282f,0.1972f,0.7876f,0.0488f,0.5054f,-0.0502f,0.6282f,-0.0502f,0.5054f,0.8403f,0.7989f,1.0380f,0.5054f,1.0380f,0.8248f,0.7908f,0.1860f,0.7908f,0.2118f,1.0380f,0.6427f,0.7908f,-0.0198f,0.5929f,-0.0332f,0.7908f,1.0440f,0.7908f,1.0310f,0.5929f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f});
  }
}
protected class MFVec2f35 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f36 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0300f,0.0100f,0.0000f,-0.0050f,0.0400f,0.0000f,0.0000f,0.0600f,0.0000f,-0.0100f,0.0750f,0.0000f});
  }
}
protected class MFVec2f37 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec2f38 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.8000f,0.8000f,1.0000f,1.0000f});
  }
}
protected class MFVec3f39 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0300f,0.0300f,-0.0500f,0.0500f,0.2000f,0.0000f});
  }
}
protected class MFInt3240 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,0,5,-1,6,5,0,-1,7,2,5,-1,8,4,2,-1,8,3,4,-1,9,1,3,-1,10,0,1,-1,0,10,6,-1,1,9,10,-1,3,8,9,-1,2,7,8,-1,5,6,7,-1,11,7,6,-1,14,9,8,-1,15,10,9,-1,11,6,10,-1,10,15,11,-1,9,14,15,-1,8,13,14,-1,8,16,13,-1,7,11,12,-1,21,15,14,-1,15,17,11,-1,15,21,17,-1,16,19,13,-1,13,19,20,-1,21,14,20,-1,14,13,20,-1,12,17,18,-1,12,11,17,-1,12,18,16,-1,18,19,16,-1,12,16,7,-1,16,8,7,-1,19,18,17,-1,20,19,21,-1,19,17,21,-1});
  }
}
protected class MFVec3f41 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1740f,1.3700f,-0.0625f,0.1850f,1.3800f,-0.0395f,0.1560f,1.3900f,-0.0464f,0.1740f,1.3700f,-0.0158f,0.1540f,1.3700f,-0.0185f,0.1570f,1.3800f,-0.0733f,0.1820f,1.3300f,-0.0728f,0.1510f,1.3300f,-0.0937f,0.1500f,1.3400f,-0.0008f,0.1850f,1.3300f,-0.0003f,0.2010f,1.3300f,-0.0411f,0.1890f,1.2600f,-0.0808f,0.1550f,1.2600f,-0.0867f,0.1510f,1.2600f,-0.0008f,0.1900f,1.2600f,-0.0040f,0.2090f,1.2600f,-0.0427f,0.1410f,1.2600f,-0.0421f,0.2030f,1.0800f,-0.0744f,0.1620f,1.0500f,-0.0561f,0.1690f,1.0800f,-0.0089f,0.2080f,1.0700f,-0.0013f,0.2210f,1.0800f,-0.0352f});
  }
}
protected class MFInt3242 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,2,3,1,-1,2,4,3,-1,2,5,4,-1,2,6,5,-1,2,0,6,-1,7,6,0,-1,8,5,6,-1,9,4,5,-1,9,3,4,-1,10,1,3,-1,11,0,1,-1,0,11,7,-1,1,10,11,-1,3,9,10,-1,5,12,9,-1,5,8,12,-1,6,7,8,-1,17,16,15,-1,14,17,15,-1,14,18,17,-1,13,18,14,-1,16,17,10,-1,16,10,9,-1,15,16,9,-1,15,9,12,-1,18,13,7,-1,18,7,11,-1,13,14,8,-1,13,8,7,-1,14,15,8,-1,15,12,8,-1,17,18,10,-1,18,11,10,-1});
  }
}
protected class MFVec3f43 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1770f,1.0900f,-0.0609f,0.2020f,1.1000f,-0.0566f,0.1890f,1.1000f,-0.0395f,0.2130f,1.1000f,-0.0250f,0.2030f,1.1000f,-0.0158f,0.1820f,1.0900f,-0.0056f,0.1670f,1.0900f,-0.0325f,0.1760f,1.0800f,-0.0781f,0.1600f,1.0600f,-0.0373f,0.2140f,1.0700f,-0.0040f,0.2280f,1.0700f,-0.0319f,0.2080f,1.0800f,-0.0765f,0.1790f,1.0700f,-0.0029f,0.2100f,0.8180f,-0.0615f,0.2010f,0.8200f,-0.0405f,0.2050f,0.8190f,-0.0083f,0.2240f,0.8180f,-0.0078f,0.2370f,0.8200f,-0.0282f,0.2310f,0.8190f,-0.0609f});
  }
}
protected class MFInt3244 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2,1,0,-1,5,4,3,-1,3,7,6,-1,2,3,6,-1,7,9,8,-1,6,7,8,-1,9,11,10,-1,8,9,10,-1,11,13,12,-1,10,11,12,-1,13,15,14,-1,12,13,14,-1,15,17,16,-1,14,15,16,-1,17,19,18,-1,16,17,18,-1,19,21,20,-1,18,19,20,-1,31,4,1,-1,4,5,0,-1,1,4,0,-1,5,3,2,-1,0,5,2,-1,26,25,24,-1,26,24,23,-1,27,26,23,-1,28,27,23,-1,28,23,22,-1,29,28,22,-1,29,22,21,-1,30,29,21,-1,15,13,11,-1,17,15,11,-1,19,17,11,-1,19,11,9,-1,31,19,9,-1,31,9,7,-1,4,31,7,-1,4,7,3,-1,30,21,19,-1,31,30,19,-1,12,14,16,-1,10,12,16,-1,10,16,18,-1,8,10,18,-1,6,8,1,-1,2,6,1,-1,39,38,37,-1,37,38,40,-1,37,40,36,-1,36,40,41,-1,36,41,35,-1,35,41,42,-1,35,42,34,-1,34,42,43,-1,34,43,33,-1,33,43,44,-1,33,44,32,-1,20,32,44,-1,20,44,45,-1,20,45,46,-1,47,8,18,-1,47,18,20,-1,47,20,46,-1,8,47,1,-1,22,33,32,-1,23,35,34,-1,23,36,35,-1,37,24,25,-1,40,38,27,-1,29,43,42,-1,45,44,30,-1,47,31,1,-1,47,46,31,-1,29,30,43,-1,30,44,43,-1,45,31,46,-1,45,30,31,-1,28,29,41,-1,29,42,41,-1,28,40,27,-1,28,41,40,-1,26,27,39,-1,27,38,39,-1,25,39,37,-1,25,26,39,-1,24,36,23,-1,24,37,36,-1,23,34,22,-1,34,33,22,-1,22,32,21,-1,32,20,21,-1});
  }
}
protected class MFVec3f45 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.2110f,0.8280f,-0.0434f,0.1940f,0.8100f,-0.0445f,0.2370f,0.8200f,-0.0425f,0.2360f,0.8200f,-0.0237f,0.1940f,0.8100f,-0.0254f,0.2100f,0.8280f,-0.0247f,0.2520f,0.8010f,-0.0424f,0.2520f,0.8010f,-0.0231f,0.2690f,0.7650f,-0.0426f,0.2680f,0.7650f,-0.0225f,0.2730f,0.7320f,-0.0395f,0.2720f,0.7320f,-0.0223f,0.2700f,0.7040f,-0.0342f,0.2700f,0.7040f,-0.0224f,0.2620f,0.7030f,-0.0345f,0.2610f,0.7030f,-0.0227f,0.2560f,0.7170f,-0.0389f,0.2560f,0.7170f,-0.0230f,0.2550f,0.7380f,-0.0408f,0.2550f,0.7380f,-0.0230f,0.2510f,0.7340f,-0.0406f,0.2510f,0.7340f,-0.0232f,0.2510f,0.6920f,-0.0232f,0.2480f,0.6570f,-0.0233f,0.2400f,0.6450f,-0.0236f,0.2260f,0.6370f,-0.0241f,0.2130f,0.6390f,-0.0246f,0.1970f,0.6520f,-0.0253f,0.1880f,0.6690f,-0.0256f,0.1840f,0.6970f,-0.0258f,0.1830f,0.7300f,-0.0258f,0.1870f,0.7700f,-0.0257f,0.2440f,0.6960f,-0.0375f,0.2440f,0.6920f,-0.0372f,0.2420f,0.6610f,-0.0345f,0.2410f,0.6580f,-0.0343f,0.2410f,0.6560f,-0.0341f,0.2310f,0.6460f,-0.0336f,0.2060f,0.6500f,-0.0349f,0.2180f,0.6440f,-0.0340f,0.2050f,0.6520f,-0.0352f,0.1980f,0.6670f,-0.0367f,0.1950f,0.6910f,-0.0390f,0.1940f,0.6960f,-0.0395f,0.1930f,0.7250f,-0.0420f,0.1930f,0.7310f,-0.0425f,0.1970f,0.7650f,-0.0449f,0.1970f,0.7700f,-0.0453f});
  }
}
protected class MFInt3246 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {14,10,20,-1,10,13,20,-1,13,22,20,-1,19,14,20,-1,14,19,12,-1,19,20,24,-1,20,22,25,-1,22,13,25,-1,13,10,11,-1,10,14,5,-1,12,5,14,-1,5,11,10,-1,11,25,13,-1,25,24,20,-1,24,12,19,-1,12,24,9,-1,25,11,8,-1,11,5,2,-1,5,12,9,-1,9,2,5,-1,2,8,11,-1,8,23,25,-1,23,27,25,-1,21,9,24,-1,9,21,7,-1,27,23,18,-1,23,8,18,-1,8,2,6,-1,2,9,7,-1,7,1,2,-1,1,6,2,-1,6,18,8,-1,18,26,27,-1,16,7,21,-1,7,16,4,-1,16,26,17,-1,26,18,15,-1,18,6,3,-1,6,1,0,-1,1,7,0,-1,4,0,7,-1,0,3,6,-1,3,15,18,-1,15,17,26,-1,17,4,16,-1,3,0,15,-1,15,0,4,-1,15,4,17,-1,25,27,24,-1,27,21,24,-1,27,26,21,-1,26,16,21,-1});
  }
}
protected class MFVec3f47 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2210f,1.0800f,-0.0352f,-0.2140f,1.1400f,-0.0405f,-0.2090f,1.2600f,-0.0427f,-0.2080f,1.0700f,-0.0013f,-0.2030f,1.0800f,-0.0744f,-0.2010f,1.3300f,-0.0411f,-0.1980f,1.1400f,-0.0024f,-0.1980f,1.1300f,-0.0760f,-0.1900f,1.2600f,-0.0040f,-0.1890f,1.2600f,-0.0808f,-0.1850f,1.3800f,-0.0395f,-0.1850f,1.3300f,-0.0003f,-0.1820f,1.3300f,-0.0728f,-0.1740f,1.3700f,-0.0158f,-0.1740f,1.3700f,-0.0625f,-0.1690f,1.0800f,-0.0089f,-0.1670f,1.1300f,-0.0744f,-0.1620f,1.0500f,-0.0561f,-0.1600f,1.1300f,-0.0008f,-0.1570f,1.3800f,-0.0733f,-0.1560f,1.3900f,-0.0464f,-0.1550f,1.2600f,-0.0867f,-0.1540f,1.3700f,-0.0185f,-0.1510f,1.2600f,-0.0008f,-0.1510f,1.3300f,-0.0937f,-0.1500f,1.3400f,-0.0008f,-0.1500f,1.1300f,-0.0411f,-0.1410f,1.2600f,-0.0421f});
  }
}
protected class MFInt3248 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {20,13,15,-1,13,8,15,-1,8,12,15,-1,12,18,15,-1,18,22,15,-1,22,20,15,-1,20,22,21,-1,22,18,24,-1,18,12,7,-1,12,8,7,-1,8,13,3,-1,13,20,10,-1,21,10,20,-1,10,3,13,-1,3,7,8,-1,7,19,18,-1,19,24,18,-1,24,21,22,-1,21,24,23,-1,24,19,16,-1,19,7,6,-1,7,3,1,-1,3,10,5,-1,10,21,17,-1,17,5,10,-1,5,1,3,-1,1,6,7,-1,6,16,19,-1,16,23,24,-1,23,17,21,-1,1,5,2,-1,5,17,9,-1,9,2,5,-1,1,4,6,-1,4,16,6,-1,23,9,17,-1,9,23,14,-1,23,16,11,-1,4,11,16,-1,11,14,23,-1,11,4,0,-1,11,0,14,-1,0,2,14,-1,14,2,9,-1,2,0,1,-1,0,4,1,-1});
  }
}
protected class MFVec3f49 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2370f,0.8200f,-0.0282f,-0.2350f,1.0200f,-0.0330f,-0.2310f,0.8190f,-0.0609f,-0.2280f,1.0700f,-0.0319f,-0.2240f,0.8180f,-0.0078f,-0.2210f,1.0100f,-0.0744f,-0.2180f,1.0100f,-0.0013f,-0.2140f,1.0700f,-0.0040f,-0.2130f,1.1000f,-0.0250f,-0.2100f,0.8180f,-0.0615f,-0.2080f,1.0800f,-0.0765f,-0.2050f,0.8190f,-0.0083f,-0.2030f,1.1000f,-0.0158f,-0.2020f,1.1000f,-0.0566f,-0.2010f,0.8200f,-0.0405f,-0.1890f,1.1000f,-0.0395f,-0.1830f,1.0100f,-0.0083f,-0.1830f,1.0100f,-0.0781f,-0.1820f,1.0900f,-0.0056f,-0.1790f,1.0700f,-0.0029f,-0.1770f,1.0900f,-0.0609f,-0.1760f,1.0800f,-0.0781f,-0.1670f,1.0900f,-0.0325f,-0.1660f,1.0000f,-0.0405f,-0.1600f,1.0600f,-0.0373f});
  }
}
protected class MFInt3250 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {10,9,0,-1,11,30,31,-1,1,12,11,-1,1,11,0,-1,2,13,12,-1,2,12,1,-1,3,14,13,-1,3,13,2,-1,4,15,14,-1,4,14,3,-1,5,16,15,-1,5,15,4,-1,6,17,16,-1,6,16,5,-1,7,18,17,-1,7,17,6,-1,8,19,18,-1,8,18,7,-1,10,31,30,-1,10,30,9,-1,0,11,31,-1,0,31,10,-1,22,23,24,-1,21,22,24,-1,21,24,25,-1,21,25,26,-1,20,21,26,-1,20,26,27,-1,19,20,27,-1,19,27,28,-1,14,15,16,-1,14,16,17,-1,14,17,18,-1,13,14,18,-1,13,18,29,-1,12,13,29,-1,12,29,30,-1,11,12,30,-1,18,19,28,-1,18,28,29,-1,6,5,4,-1,6,4,3,-1,7,6,3,-1,7,3,2,-1,9,2,1,-1,9,1,0,-1,32,38,33,-1,33,38,39,-1,33,39,34,-1,34,39,40,-1,34,40,35,-1,35,40,41,-1,35,41,36,-1,36,41,42,-1,36,42,37,-1,37,42,43,-1,37,43,44,-1,44,43,8,-1,44,8,45,-1,45,8,46,-1,46,8,7,-1,46,7,2,-1,46,2,47,-1,9,47,2,-1,25,34,35,-1,25,33,34,-1,25,24,33,-1,24,32,33,-1,32,24,23,-1,40,39,21,-1,41,40,21,-1,43,19,8,-1,43,20,19,-1,43,42,20,-1,21,20,41,-1,20,42,41,-1,38,22,39,-1,22,21,39,-1,32,23,38,-1,23,22,38,-1,26,25,35,-1,27,36,37,-1,27,37,28,-1,37,44,28,-1,26,35,27,-1,35,36,27,-1,28,44,45,-1,29,46,47,-1,29,9,30,-1,29,47,9,-1,28,45,29,-1,45,46,29,-1});
  }
}
protected class MFVec3f51 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.2370f,0.8200f,-0.0425f,-0.2520f,0.8010f,-0.0424f,-0.2690f,0.7650f,-0.0426f,-0.2730f,0.7320f,-0.0395f,-0.2700f,0.7040f,-0.0342f,-0.2620f,0.7030f,-0.0345f,-0.2560f,0.7170f,-0.0389f,-0.2550f,0.7380f,-0.0408f,-0.2510f,0.7340f,-0.0406f,-0.1940f,0.8100f,-0.0445f,-0.2110f,0.8280f,-0.0434f,-0.2360f,0.8200f,-0.0237f,-0.2520f,0.8010f,-0.0231f,-0.2680f,0.7650f,-0.0225f,-0.2720f,0.7320f,-0.0223f,-0.2700f,0.7040f,-0.0224f,-0.2610f,0.7030f,-0.0227f,-0.2560f,0.7170f,-0.0230f,-0.2550f,0.7380f,-0.0230f,-0.2510f,0.7340f,-0.0232f,-0.2510f,0.6920f,-0.0232f,-0.2480f,0.6570f,-0.0233f,-0.2400f,0.6450f,-0.0236f,-0.2260f,0.6370f,-0.0241f,-0.2130f,0.6390f,-0.0246f,-0.1970f,0.6520f,-0.0253f,-0.1880f,0.6690f,-0.0256f,-0.1840f,0.6970f,-0.0258f,-0.1830f,0.7300f,-0.0258f,-0.1870f,0.7700f,-0.0257f,-0.1940f,0.8100f,-0.0254f,-0.2100f,0.8280f,-0.0247f,-0.2210f,0.6410f,-0.0336f,-0.2100f,0.6500f,-0.0348f,-0.2060f,0.6520f,-0.0352f,-0.1980f,0.6670f,-0.0368f,-0.1930f,0.6920f,-0.0392f,-0.1920f,0.6960f,-0.0396f,-0.2310f,0.6460f,-0.0336f,-0.2380f,0.6560f,-0.0342f,-0.2400f,0.6580f,-0.0344f,-0.2400f,0.6620f,-0.0347f,-0.2430f,0.6920f,-0.0372f,-0.2430f,0.6960f,-0.0376f,-0.1920f,0.7250f,-0.0421f,-0.1920f,0.7300f,-0.0426f,-0.1950f,0.7660f,-0.0451f,-0.1960f,0.7700f,-0.0454f});
  }
}
protected class MFInt3252 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {6,5,2,-1,6,2,3,-1,5,4,1,-1,5,1,2,-1,4,7,0,-1,4,0,1,-1,11,10,9,-1,11,9,8,-1,10,13,12,-1,10,12,9,-1,13,15,14,-1,13,14,12,-1,6,3,11,-1,6,11,8,-1,7,14,15,-1,7,15,0,-1,2,10,11,-1,2,11,3,-1,2,1,13,-1,2,13,10,-1,1,0,15,-1,1,15,13,-1,9,5,6,-1,9,6,8,-1,9,12,4,-1,9,4,5,-1,12,14,7,-1,12,7,4,-1});
  }
}
protected class MFVec3f53 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0105f,1.5400f,-0.1000f,0.0357f,1.5400f,-0.0685f,0.0382f,1.5500f,-0.0474f,0.0105f,1.5500f,-0.0204f,0.0373f,1.4000f,-0.0593f,0.0577f,1.4000f,-0.0266f,0.0158f,1.4000f,0.0051f,0.0132f,1.4100f,-0.0824f,-0.0158f,1.4000f,0.0051f,-0.0577f,1.4000f,-0.0266f,-0.0382f,1.5500f,-0.0474f,-0.0105f,1.5500f,-0.0204f,-0.0373f,1.4000f,-0.0593f,-0.0357f,1.5400f,-0.0685f,-0.0132f,1.4100f,-0.0824f,-0.0105f,1.5400f,-0.1000f});
  }
}
protected class MFInt3254 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,1,1,1,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,2,2,2,-1,2,2,2,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1});
  }
}
protected class MFInt3255 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,0,0,0,-1,0,0,0,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1,4,4,4,-1});
  }
}
protected class MFInt3256 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {48,87,58,-1,91,92,59,-1,59,92,88,-1,88,93,231,-1,232,86,233,-1,86,89,233,-1,89,57,56,-1,49,55,57,-1,102,86,96,-1,86,90,96,-1,97,95,96,-1,97,127,95,-1,41,96,154,-1,41,102,96,-1,99,102,41,-1,153,99,41,-1,102,40,86,-1,234,235,236,-1,87,237,58,-1,56,57,91,-1,87,234,237,-1,234,236,237,-1,89,49,57,-1,49,50,55,-1,40,89,86,-1,89,56,233,-1,232,90,86,-1,90,97,96,-1,92,93,88,-1,93,94,231,-1,232,231,94,-1,97,90,232,-1,96,42,154,-1,95,42,96,-1,53,46,45,-1,53,45,51,-1,53,51,92,-1,92,51,52,-1,92,52,93,-1,94,93,52,-1,94,52,4,-1,97,232,94,-1,54,47,46,-1,54,46,53,-1,55,47,54,-1,50,47,55,-1,34,33,50,-1,34,50,49,-1,35,34,49,-1,35,49,89,-1,35,89,40,-1,99,39,102,-1,39,35,40,-1,31,34,35,-1,31,35,32,-1,14,32,35,-1,14,35,39,-1,14,39,98,-1,137,38,153,-1,38,99,153,-1,38,98,99,-1,37,238,239,-1,11,238,37,-1,101,37,36,-1,241,141,242,-1,10,12,242,-1,12,13,14,-1,12,14,243,-1,13,15,32,-1,13,32,14,-1,15,16,31,-1,15,31,32,-1,2,70,10,-1,2,10,141,-1,70,69,12,-1,70,12,10,-1,69,68,13,-1,69,13,12,-1,68,67,15,-1,68,15,13,-1,67,66,16,-1,67,16,15,-1,98,39,99,-1,101,11,37,-1,100,101,36,-1,36,244,240,-1,141,10,242,-1,12,243,242,-1,36,37,239,-1,36,239,244,-1,57,55,91,-1,55,54,91,-1,39,40,102,-1,123,103,120,-1,114,122,104,-1,115,122,114,-1,208,105,115,-1,210,119,211,-1,210,106,119,-1,116,107,106,-1,107,108,117,-1,126,119,109,-1,126,110,119,-1,126,95,125,-1,95,127,125,-1,154,126,111,-1,126,109,111,-1,111,109,112,-1,111,112,153,-1,119,113,109,-1,207,213,214,-1,123,209,103,-1,213,212,214,-1,209,214,103,-1,209,207,214,-1,107,117,106,-1,108,118,117,-1,119,106,113,-1,210,116,106,-1,119,110,211,-1,126,125,110,-1,115,105,122,-1,208,124,105,-1,124,208,211,-1,211,110,125,-1,154,42,126,-1,126,42,95,-1,168,128,121,-1,170,168,121,-1,122,170,121,-1,172,170,122,-1,105,172,122,-1,172,105,124,-1,4,172,124,-1,124,211,125,-1,128,130,129,-1,121,128,129,-1,129,130,108,-1,108,130,118,-1,118,131,132,-1,117,118,132,-1,117,132,133,-1,106,117,133,-1,113,106,133,-1,109,152,112,-1,113,133,152,-1,133,132,134,-1,135,133,134,-1,133,135,136,-1,152,133,136,-1,148,152,136,-1,153,138,137,-1,153,112,138,-1,112,148,138,-1,219,217,139,-1,36,240,149,-1,139,217,140,-1,149,139,151,-1,36,149,100,-1,220,141,241,-1,220,150,142,-1,136,143,150,-1,221,136,150,-1,135,144,143,-1,136,135,143,-1,134,158,144,-1,135,134,144,-1,142,161,2,-1,141,142,2,-1,150,145,161,-1,142,150,161,-1,143,146,145,-1,150,143,145,-1,144,147,146,-1,143,144,146,-1,158,160,147,-1,144,158,147,-1,112,152,148,-1,139,140,151,-1,149,151,100,-1,240,218,149,-1,220,142,141,-1,220,221,150,-1,219,139,149,-1,218,219,149,-1,104,108,107,-1,104,129,108,-1,109,113,152,-1,153,41,111,-1,129,104,122,-1,129,122,121,-1,91,54,92,-1,54,53,92,-1,97,94,127,-1,127,94,4,-1,125,127,124,-1,127,4,124,-1,154,111,41,-1,31,30,33,-1,31,33,34,-1,16,17,30,-1,16,30,31,-1,66,65,17,-1,66,17,16,-1,2,73,156,-1,2,156,70,-1,156,72,66,-1,156,66,67,-1,156,67,68,-1,156,68,69,-1});
  }
}
protected class MFInt3257 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {156,69,70,-1,72,71,65,-1,72,65,66,-1,17,18,30,-1,45,44,51,-1,51,44,43,-1,51,43,52,-1,52,43,1,-1,52,1,4,-1,245,246,27,-1,245,27,3,-1,246,247,28,-1,246,28,27,-1,248,22,29,-1,248,29,28,-1,248,28,247,-1,27,26,0,-1,27,0,3,-1,27,28,25,-1,27,25,26,-1,29,24,25,-1,29,25,28,-1,22,23,24,-1,22,24,29,-1,249,250,22,-1,249,22,248,-1,250,60,23,-1,250,23,22,-1,17,254,18,-1,65,254,17,-1,71,64,65,-1,63,74,75,-1,63,75,61,-1,64,255,254,-1,75,62,61,-1,62,76,60,-1,76,77,23,-1,76,23,60,-1,77,24,23,-1,77,78,25,-1,77,25,24,-1,78,84,26,-1,78,26,25,-1,84,192,0,-1,84,0,26,-1,84,83,193,-1,84,193,192,-1,79,83,84,-1,79,84,78,-1,76,79,78,-1,76,78,77,-1,80,83,79,-1,80,204,83,-1,75,81,80,-1,81,85,204,-1,81,204,80,-1,74,81,75,-1,74,82,81,-1,82,5,85,-1,82,85,81,-1,155,8,71,-1,155,71,72,-1,8,6,64,-1,8,64,71,-1,6,7,255,-1,6,255,64,-1,7,9,256,-1,7,256,255,-1,9,257,256,-1,73,155,156,-1,155,72,156,-1,204,193,83,-1,64,254,65,-1,131,157,134,-1,132,131,134,-1,157,159,158,-1,134,157,158,-1,159,206,160,-1,158,159,160,-1,203,73,2,-1,161,203,2,-1,160,162,203,-1,147,160,203,-1,146,147,203,-1,145,146,203,-1,161,145,203,-1,206,163,162,-1,160,206,162,-1,157,164,159,-1,170,169,168,-1,171,169,170,-1,172,171,170,-1,1,171,172,-1,4,1,172,-1,173,227,245,-1,3,173,245,-1,174,226,227,-1,173,174,227,-1,176,175,215,-1,174,176,215,-1,226,174,215,-1,0,177,173,-1,3,0,173,-1,178,174,173,-1,177,178,173,-1,178,179,176,-1,174,178,176,-1,179,180,175,-1,176,179,175,-1,175,225,216,-1,215,175,216,-1,180,181,225,-1,175,180,225,-1,164,228,159,-1,159,228,206,-1,206,185,163,-1,187,186,184,-1,183,187,184,-1,228,229,185,-1,183,182,187,-1,181,188,182,-1,180,189,188,-1,181,180,188,-1,180,179,189,-1,178,190,189,-1,179,178,189,-1,177,191,190,-1,178,177,190,-1,0,192,191,-1,177,0,191,-1,193,205,191,-1,192,193,191,-1,191,205,194,-1,190,191,194,-1,190,194,188,-1,189,190,188,-1,194,205,195,-1,205,204,195,-1,195,196,187,-1,204,85,196,-1,195,204,196,-1,187,196,186,-1,196,197,186,-1,85,5,197,-1,196,85,197,-1,163,198,202,-1,162,163,202,-1,185,199,198,-1,163,185,198,-1,229,200,199,-1,185,229,199,-1,230,201,200,-1,229,230,200,-1,230,257,201,-1,203,202,73,-1,203,162,202,-1,205,193,204,-1,206,228,185,-1,198,8,155,-1,198,155,202,-1,155,73,202,-1,199,6,8,-1,199,8,198,-1,7,6,199,-1,7,199,200,-1,201,9,7,-1,201,7,200,-1,201,257,9,-1,188,194,195,-1,188,195,182,-1,195,187,182,-1,80,79,76,-1,80,62,75,-1,80,76,62,-1,47,50,33,-1,131,118,130,-1,20,21,47,-1,21,46,47,-1,20,33,19,-1,20,47,33,-1,33,30,19,-1,30,18,19,-1,62,60,251,-1,60,250,251,-1,252,61,251,-1,61,62,251,-1,252,63,61,-1,252,253,63,-1,166,130,167,-1,130,128,167,-1,166,131,130,-1,166,165,131,-1,165,157,131,-1,165,164,157,-1,224,181,182,-1,224,225,181,-1,224,183,223,-1,224,182,183,-1,183,184,223,-1,184,222,223,-1});
  }
}
protected class MFVec3f58 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,1.7080f,-0.0435f,0.0000f,1.6550f,0.0432f,0.0000f,1.4860f,0.0233f,0.0000f,1.6940f,0.0078f,0.0000f,1.6310f,0.0510f,0.0000f,1.5240f,-0.1020f,0.0400f,1.5100f,-0.0728f,0.0403f,1.5140f,-0.0825f,0.0353f,1.5020f,-0.0501f,0.0348f,1.5170f,-0.0927f,0.0116f,1.4940f,0.0338f,0.0195f,1.5200f,0.0342f,0.0220f,1.4940f,0.0272f,0.0273f,1.4980f,0.0221f,0.0279f,1.5280f,0.0308f,0.0338f,1.5030f,0.0124f,0.0401f,1.5090f,0.0028f,0.0512f,1.5180f,-0.0278f,0.0587f,1.5440f,-0.0332f,0.0643f,1.5630f,-0.0368f,0.0673f,1.5830f,-0.0368f,0.0677f,1.6170f,-0.0344f,0.0664f,1.6370f,-0.0305f,0.0682f,1.6370f,-0.0428f,0.0631f,1.6660f,-0.0404f,0.0530f,1.6850f,-0.0399f,0.0314f,1.7000f,-0.0413f,0.0292f,1.6880f,0.0091f,0.0527f,1.6740f,-0.0017f,0.0606f,1.6600f,-0.0101f,0.0525f,1.5410f,-0.0136f,0.0410f,1.5270f,0.0088f,0.0353f,1.5240f,0.0210f,0.0579f,1.5570f,-0.0043f,0.0441f,1.5390f,0.0149f,0.0375f,1.5390f,0.0266f,0.0034f,1.5240f,0.0415f,0.0148f,1.5260f,0.0391f,0.0051f,1.5320f,0.0436f,0.0244f,1.5420f,0.0358f,0.0264f,1.5500f,0.0381f,0.0061f,1.5500f,0.0545f,0.0000f,1.5590f,0.0550f,0.0296f,1.6510f,0.0396f,0.0485f,1.6430f,0.0290f,0.0586f,1.6300f,0.0180f,0.0618f,1.6140f,0.0082f,0.0619f,1.6000f,0.0027f,0.0149f,1.5830f,0.0411f,0.0528f,1.5690f,0.0282f,0.0577f,1.5800f,0.0184f,0.0464f,1.6250f,0.0370f,0.0264f,1.6280f,0.0481f,0.0556f,1.6090f,0.0258f,0.0547f,1.5990f,0.0215f,0.0532f,1.5890f,0.0207f,0.0360f,1.5800f,0.0354f,0.0460f,1.5860f,0.0290f,0.0211f,1.5920f,0.0375f,0.0343f,1.5950f,0.0329f,0.0681f,1.6170f,-0.0611f,0.0671f,1.5640f,-0.0700f,0.0699f,1.5940f,-0.0824f,0.0532f,1.5360f,-0.0592f,0.0490f,1.5210f,-0.0513f,0.0476f,1.5140f,-0.0311f,0.0354f,1.5030f,-0.0009f,0.0300f,1.4980f,0.0062f,0.0231f,1.4920f,0.0163f,0.0177f,1.4880f,0.0214f,0.0138f,1.4880f,0.0248f,0.0435f,1.5120f,-0.0399f,0.0231f,1.4990f,-0.0209f,0.0000f,1.4870f,-0.0180f,0.0479f,1.5310f,-0.0897f,0.0574f,1.5550f,-0.0982f,0.0682f,1.6220f,-0.1070f,0.0687f,1.6550f,-0.0847f,0.0523f,1.6780f,-0.0964f,0.0533f,1.6310f,-0.1239f,0.0501f,1.5810f,-0.1193f,0.0436f,1.5510f,-0.1067f,0.0384f,1.5280f,-0.0965f,0.0340f,1.6360f,-0.1304f,0.0322f,1.6850f,-0.1024f,0.0000f,1.5570f,-0.1126f,0.0186f,1.5660f,0.0411f,0.0249f,1.5800f,0.0387f,0.0273f,1.5960f,0.0355f,0.0432f,1.5640f,0.0364f,0.0125f,1.5770f,0.0428f,0.0435f,1.5900f,0.0282f,0.0456f,1.6010f,0.0365f,0.0291f,1.6030f,0.0427f,0.0186f,1.6000f,0.0435f,0.0000f,1.5790f,0.0489f,0.0106f,1.5580f,0.0448f,0.0055f,1.5780f,0.0457f,0.0140f,1.5310f,0.0415f,0.0104f,1.5440f,0.0427f,0.0000f,1.5150f,0.0384f,0.0080f,1.5150f,0.0377f,0.0182f,1.5500f,0.0406f,-0.0249f,1.5800f,0.0387f,-0.0435f,1.5900f,0.0282f,-0.0291f,1.6030f,0.0427f,-0.0432f,1.5640f,0.0364f,-0.0460f,1.5860f,0.0290f,-0.0532f,1.5890f,0.0207f,-0.0182f,1.5500f,0.0406f,-0.0125f,1.5770f,0.0428f,-0.0061f,1.5500f,0.0545f,-0.0104f,1.5440f,0.0427f,-0.0264f,1.5500f,0.0381f,-0.0343f,1.5950f,0.0329f,-0.0273f,1.5960f,0.0355f,-0.0360f,1.5800f,0.0354f,-0.0528f,1.5690f,0.0282f,-0.0577f,1.5800f,0.0184f,-0.0186f,1.5660f,0.0411f,-0.0149f,1.5830f,0.0411f,-0.0556f,1.6090f,0.0258f,-0.0456f,1.6010f,0.0365f,-0.0211f,1.5920f,0.0375f,-0.0186f,1.6000f,0.0435f,-0.0055f,1.5780f,0.0457f,-0.0106f,1.5580f,0.0448f,0.0000f,1.5920f,0.0469f,-0.0618f,1.6140f,0.0082f,-0.0547f,1.5990f,0.0215f,-0.0619f,1.6000f,0.0027f,-0.0579f,1.5570f,-0.0043f,-0.0441f,1.5390f,0.0149f,-0.0375f,1.5390f,0.0266f,-0.0410f,1.5270f,0.0088f,-0.0353f,1.5240f,0.0210f,-0.0279f,1.5280f,0.0308f,0.0000f,1.5300f,0.0424f,-0.0051f,1.5320f,0.0436f,-0.0148f,1.5260f,0.0391f,-0.0195f,1.5200f,0.0342f,0.0000f,1.4950f,0.0348f,-0.0116f,1.4940f,0.0338f,-0.0273f,1.4980f,0.0221f,-0.0338f,1.5030f,0.0124f,-0.0177f,1.4880f,0.0214f,-0.0231f,1.4920f,0.0163f,-0.0300f,1.4980f,0.0062f,-0.0140f,1.5310f,0.0415f,-0.0034f,1.5240f,0.0415f,-0.0220f,1.4940f,0.0272f,-0.0080f,1.5150f,0.0377f,-0.0244f,1.5420f,0.0358f,0.0000f,1.5430f,0.0443f,0.0000f,1.5550f,0.0569f,0.0230f,1.4920f,-0.0269f,0.0073f,1.4890f,-0.0168f,-0.0525f,1.5410f,-0.0136f,-0.0401f,1.5090f,0.0028f,-0.0512f,1.5180f,-0.0278f,-0.0354f,1.5030f,-0.0009f,-0.0138f,1.4880f,0.0248f,-0.0231f,1.4990f,-0.0209f,-0.0435f,1.5120f,-0.0399f,-0.0587f,1.5440f,-0.0332f,-0.0643f,1.5630f,-0.0368f,-0.0673f,1.5830f,-0.0368f,-0.0677f,1.6170f,-0.0344f,-0.0586f,1.6300f,0.0180f,-0.0485f,1.6430f,0.0290f,-0.0464f,1.6250f,0.0370f,-0.0296f,1.6510f,0.0396f,-0.0264f,1.6280f,0.0481f,-0.0292f,1.6880f,0.0091f,-0.0527f,1.6740f,-0.0017f,-0.0664f,1.6370f,-0.0305f,-0.0606f,1.6600f,-0.0101f,-0.0314f,1.7000f,-0.0413f,-0.0530f,1.6850f,-0.0399f,-0.0631f,1.6660f,-0.0404f,-0.0682f,1.6370f,-0.0428f,-0.0681f,1.6170f,-0.0611f,-0.0699f,1.5940f,-0.0824f,-0.0671f,1.5640f,-0.0700f,-0.0532f,1.5360f,-0.0592f,-0.0490f,1.5210f,-0.0513f,-0.0479f,1.5310f,-0.0897f,-0.0574f,1.5550f,-0.0982f,-0.0682f,1.6220f,-0.1070f,-0.0687f,1.6550f,-0.0847f,-0.0523f,1.6780f,-0.0964f,-0.0322f,1.6850f,-0.1024f,0.0000f,1.6900f,-0.1047f,0.0000f,1.6400f,-0.1342f,-0.0533f,1.6310f,-0.1239f,-0.0501f,1.5810f,-0.1193f,-0.0436f,1.5510f,-0.1067f,-0.0384f,1.5280f,-0.0965f,-0.0353f,1.5020f,-0.0501f,-0.0400f,1.5100f,-0.0728f,-0.0403f,1.5140f,-0.0825f,-0.0348f,1.5170f,-0.0927f,-0.0230f,1.4920f,-0.0269f,-0.0073f,1.4890f,-0.0168f,0.0000f,1.5880f,-0.1329f,-0.0340f,1.6360f,-0.1304f,-0.0476f,1.5140f,-0.0311f,-0.0343f,1.5950f,0.0329f,-0.0211f,1.5920f,0.0375f,-0.0273f,1.5960f,0.0355f,-0.0249f,1.5800f,0.0387f,-0.0149f,1.5830f,0.0411f,-0.0460f,1.5860f,0.0290f,-0.0435f,1.5900f,0.0282f,-0.0360f,1.5800f,0.0354f,-0.0586f,1.6300f,0.0180f,-0.0618f,1.6140f,0.0082f,-0.0279f,1.5280f,0.0308f,-0.0051f,1.5320f,0.0436f,-0.0140f,1.5310f,0.0415f,-0.0080f,1.5150f,0.0377f,-0.0195f,1.5200f,0.0342f,-0.0587f,1.5440f,-0.0332f,-0.0643f,1.5630f,-0.0368f,-0.0673f,1.5830f,-0.0368f,-0.0677f,1.6170f,-0.0344f,-0.0485f,1.6430f,0.0290f,-0.0296f,1.6510f,0.0396f,-0.0532f,1.5360f,-0.0592f,-0.0479f,1.5310f,-0.0897f,-0.0384f,1.5280f,-0.0965f,0.0211f,1.5920f,0.0375f,0.0149f,1.5830f,0.0411f,0.0249f,1.5800f,0.0387f,0.0360f,1.5800f,0.0354f,0.0435f,1.5900f,0.0282f,0.0343f,1.5950f,0.0329f,0.0273f,1.5960f,0.0355f,0.0279f,1.5280f,0.0308f,0.0140f,1.5310f,0.0415f,0.0000f,1.5300f,0.0424f,0.0000f,1.5150f,0.0384f,0.0080f,1.5150f,0.0377f,0.0195f,1.5200f,0.0342f,0.0051f,1.5320f,0.0436f,0.0000f,1.6550f,0.0432f,0.0296f,1.6510f,0.0396f,0.0485f,1.6430f,0.0290f,0.0586f,1.6300f,0.0180f,0.0618f,1.6140f,0.0082f,0.0677f,1.6170f,-0.0344f,0.0673f,1.5830f,-0.0368f,0.0643f,1.5630f,-0.0368f,0.0587f,1.5440f,-0.0332f,0.0532f,1.5360f,-0.0592f,0.0479f,1.5310f,-0.0897f,0.0384f,1.5280f,-0.0965f,0.0000f,1.5240f,-0.1020f});
  }
}
protected class MFColor59 {
  protected org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.7490f,0.6010f,0.4620f,0.1735f,0.2602f,0.7490f,0.6364f,0.1330f,0.1526f,0.4545f,0.2759f,0.1902f,0.0000f,0.0000f,0.5020f});
  }
}
protected class MFInt3260 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,13,12,0,-1,1,2,14,13,1,-1,2,3,15,14,2,-1,3,4,16,15,3,-1,4,5,17,16,4,-1,5,6,18,17,5,-1,18,6,25,19,0,12,18,-1,0,19,20,11,0,-1,10,11,20,21,10,-1,9,10,21,22,9,-1,8,9,22,23,8,-1,23,24,7,8,23,-1,6,7,24,25,6,-1});
  }
}
protected class MFVec3f61 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFVec2f62 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f63 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0100f,-0.0400f,0.0000f,0.0000f,0.0000f,0.0000f,0.0300f,0.0500f,0.0000f,0.0500f,0.2000f,0.0000f,0.0300f,0.4000f,0.0300f});
  }
}
protected class MFVec2f64 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f65 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0100f,-0.0300f,0.0000f,0.0000f,0.0000f,0.0000f,0.0200f,0.0100f,0.0000f});
  }
}
protected class MFVec2f66 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f67 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-0.0200f,-0.0300f,0.0000f,-0.0100f,-0.0300f,0.0000f,0.0000f,-0.0175f,0.0000f,0.0000f,-0.0135f,0.0000f,-0.0100f,0.0000f,0.0000f,-0.0200f,0.0000f,0.0000f});
  }
}
protected class MFInt3268 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {12,1314,15,16,17,18,12,-1});
  }
}
protected class MFVec3f69 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFInt3270 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {19,20,21,22,23,24,25,19,-1});
  }
}
protected class MFVec3f71 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f});
  }
}
protected class MFInt3272 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,37,26,0,-1,0,36,26,0,-1,36,37,26,36,-1,0,1,37,0,-1,0,11,36,0,-1});
  }
}
protected class MFVec3f73 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0400f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f});
  }
}
protected class MFInt3274 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {1,2,27,37,1,-1,2,3,28,27,2,-1,3,4,29,28,3,-1,4,5,30,29,4,-1,5,6,31,30,5,-1,6,7,32,31,6,-1,7,8,33,32,7,-1,8,9,34,33,8,-1,9,10,35,34,9,-1,10,11,36,35,10,-1});
  }
}
protected class MFVec3f75 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0500f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f});
  }
}
protected class MFInt3276 {
  protected org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {3,4,39,38,3,-1,8,9,40,41,8,-1,38,39,42,43,38,-1,40,41,44,45,40,-1,42,43,47,46,42,-1,44,45,47,46,44,-1});
  }
}
protected class MFVec3f77 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0800f,0.0000f,0.0200f,0.0500f,0.0000f,0.0500f,0.0500f,0.0000f,0.0600f,0.0600f,0.0000f,0.0600f,0.0900f,0.0000f,0.0500f,0.1000f,0.0000f,0.0000f,0.1000f,0.0000f,-0.0500f,0.1000f,0.0000f,-0.0600f,0.0900f,0.0000f,-0.0600f,0.0600f,0.0000f,-0.0500f,0.0500f,0.0000f,-0.0200f,0.0500f,0.0000f,0.0050f,0.0800f,0.0000f,0.0200f,0.0550f,0.0000f,0.0500f,0.0550f,0.0000f,0.0550f,0.0600f,0.0000f,0.0550f,0.0900f,0.0000f,0.0450f,0.0950f,0.0000f,0.0050f,0.0950f,0.0000f,-0.0050f,0.0800f,0.0000f,-0.0200f,0.0550f,0.0000f,-0.0500f,0.0550f,0.0000f,-0.0550f,0.0600f,0.0000f,-0.0550f,0.0900f,0.0000f,-0.0450f,0.0950f,0.0000f,-0.0050f,0.0950f,0.0000f,0.0000f,0.0500f,0.0150f,0.0500f,0.0400f,-0.0300f,0.0600f,0.0500f,-0.0300f,0.0700f,0.0950f,-0.0300f,0.0550f,0.1100f,-0.0300f,0.0000f,0.1100f,-0.0200f,-0.0550f,0.1100f,-0.0300f,-0.0700f,0.0950f,-0.0300f,-0.0600f,0.0500f,-0.0300f,-0.0500f,0.0400f,-0.0300f,-0.0200f,0.0400f,-0.0200f,0.0200f,0.0400f,-0.0200f,0.0750f,0.0600f,-0.1350f,0.0750f,0.0900f,-0.1350f,-0.0750f,0.0600f,-0.1350f,-0.0750f,0.0900f,-0.1350f,0.0600f,0.0900f,-0.1650f,0.0600f,0.0600f,-0.1650f,-0.0600f,0.0900f,-0.1650f,-0.0600f,0.0600f,-0.1650f,0.0000f,0.0900f,-0.2000f,0.0000f,0.0600f,-0.1750f});
  }
}
protected class MFVec2f78 {
  protected org.web3d.x3d.jsail.fields.MFVec2f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec2f(new float[] {0.0000f,0.0130f,0.0049f,0.0120f,0.0092f,0.0092f,0.0120f,0.0049f,0.0130f,0.0000f,0.0120f,-0.0049f,0.0092f,-0.0092f,0.0049f,-0.0120f,0.0000f,0.0130f,-0.0049f,-0.0120f,-0.0092f,-0.0092f,-0.0120f,-0.0049f,-0.0130f,0.0000f,-0.0120f,0.0049f,-0.0092f,0.0092f,-0.0049f,0.0120f,0.0000f,0.0130f});
  }
}
protected class MFVec3f79 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0050f,-0.0300f,0.0000f,-0.0100f,0.0200f,0.0000f,-0.0300f,0.0800f,0.0000f,-0.0500f,0.1400f,0.0000f,-0.0800f,0.1900f,0.0000f,-0.1000f,0.2200f,0.0000f,-0.1200f,0.2500f,0.0000f,-0.1500f,0.2700f,0.0000f,-0.1800f,0.2800f,0.0000f,-0.2100f,0.2900f,0.0000f,-0.2600f,0.2800f,0.0000f,-0.2800f,0.2600f,0.0000f,-0.3050f,0.2300f,0.0000f,-0.3200f,0.2000f,0.0000f,-0.3400f,0.1600f,0.0000f,-0.3500f,0.1200f,0.0000f,-0.3700f,0.0400f,0.0000f,-0.3850f,0.0000f,0.0000f,-0.3900f,-0.0700f,0.0000f});
  }
}
protected class MFFloat80 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,0.8000f,0.9000f,1.0000f});
  }
}
protected class MFVec3f81 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.7500f,0.7500f,0.7500f,0.8600f,0.8600f,0.8600f,0.9900f,0.9980f,0.9876f,1.2720f,1.9044f,0.9509f});
  }
}
protected class MFFloat82 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.3000f,0.6400f,0.8500f,1.0000f});
  }
}
protected class MFVec3f83 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.1000f,0.1000f,0.1000f,0.2000f,0.4000f,0.2500f,0.3000f,0.5000f,0.4600f,0.7500f,0.5000f,0.5750f,0.0385f,1.9890f,1.0984f});
  }
}
protected class MFFloat84 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1000f,0.4500f,0.7000f,1.0000f});
  }
}
protected class MFVec3f85 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0100f,0.0100f,0.0100f,0.2500f,0.3500f,0.0045f,0.5500f,0.6000f,0.0055f,0.6600f,0.6650f,0.0066f,1.5550f,1.0904f,0.0057f});
  }
}
protected class MFFloat86 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,0.6000f,0.8000f,1.0000f});
  }
}
protected class MFVec3f87 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5000f,0.5000f,0.0050f,0.6000f,0.6000f,0.0060f,0.7500f,0.7500f,0.0075f,1.9486f,1.3983f,0.0090f});
  }
}
protected class MFFloat88 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3500f,0.6500f,1.0000f});
  }
}
protected class MFVec3f89 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5000f,0.5000f,0.0050f,0.6000f,0.6000f,0.0060f,0.7500f,0.7500f,0.0075f,1.8444f,1.2222f,0.1000f});
  }
}
protected class MFFloat90 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1500f,0.2223f,0.5556f,1.0000f});
  }
}
protected class MFVec3f91 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.2350f,0.3455f,0.0055f,0.3560f,0.6760f,0.0046f,0.5675f,0.7500f,0.0075f,1.0980f,1.0343f,0.1400f});
  }
}
protected class MFFloat92 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2425f,0.4535f,0.6775f,1.0000f});
  }
}
protected class MFVec3f93 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1235f,0.2225f,0.0034f,0.7860f,0.4560f,0.0067f,0.7456f,0.7335f,0.0023f,0.0879f,1.0220f,0.1200f});
  }
}
protected class MFFloat94 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1125f,0.5535f,0.9787f,1.0000f});
  }
}
protected class MFVec3f95 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.1235f,0.0500f,0.0013f,0.5666f,0.4346f,0.0056f,0.8975f,0.3458f,0.0099f,1.8787f,1.6860f,0.8600f});
  }
}
protected class MFFloat96 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0025f,0.0350f,0.6500f,1.0000f});
  }
}
protected class MFVec3f97 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.5220f,0.5445f,0.0057f,0.6543f,0.2260f,0.0055f,0.4557f,0.4375f,0.0067f,1.8787f,2.0000f,0.1545f});
  }
}
protected class MFFloat98 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0003f,0.0350f,0.6895f,1.0000f});
  }
}
protected class MFVec3f99 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.8765f,0.4450f,0.0034f,0.3336f,0.4446f,0.0056f,0.7650f,0.7500f,0.0075f,1.0000f,1.0000f,0.1000f});
  }
}
protected class MFFloat100 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.4583f,0.5000f,0.6667f,0.7500f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation101 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8001f,1.0000f,0.0000f,0.0000f,0.8509f,1.0000f,0.0000f,0.0000f,0.8600f});
  }
}
protected class MFFloat102 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.5000f,0.6667f,0.9167f,1.0000f});
  }
}
protected class MFRotation103 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.8573f,1.0000f,0.0000f,0.0000f,0.5351f,1.0000f,0.0000f,0.0000f,0.1756f,1.0000f,0.0000f,0.0000f,0.1194f,1.0000f,0.0000f,0.0000f,0.3153f,1.0000f,0.0000f,0.0000f,0.0935f,1.0000f,0.0000f,0.0000f,0.0856f,1.0000f,0.0000f,0.0000f,0.8573f});
  }
}
protected class MFFloat104 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.2917f,0.5000f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation105 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.5831f,0.0351f,0.8116f,0.1481f,-0.9950f,0.0230f,0.0967f,0.4683f,-1.0000f,0.0019f,0.0080f,0.4732f,-0.9980f,-0.0158f,-0.0610f,0.5079f,-0.9131f,-0.0624f,-0.4030f,0.3361f,1.0000f,0.0000f,0.0000f,0.2571f,0.9891f,-0.0280f,0.1444f,0.3879f,-0.5831f,0.0351f,0.8116f,0.1481f});
  }
}
protected class MFFloat106 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.1250f,0.2083f,0.3750f,0.4583f,0.5000f,0.6667f,0.7500f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation107 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f,1.0000f,0.0000f,0.0000f,0.6509f,1.0000f,0.0000f,0.0000f,0.6001f});
  }
}
protected class MFFloat108 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2083f,0.3750f,0.5000f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation109 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {1.0000f,0.0000f,0.0000f,0.3226f,1.0000f,0.0000f,0.0000f,0.1556f,1.0000f,0.0000f,0.0000f,0.0868f,1.0000f,0.0000f,0.0000f,0.8751f,1.0000f,0.0000f,0.0000f,1.1310f,1.0000f,0.0000f,0.0000f,0.0996f,1.0000f,0.0000f,0.0000f,0.3942f,1.0000f,0.0000f,0.0000f,0.3226f});
  }
}
protected class MFFloat110 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3750f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation111 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-0.8730f,0.0609f,0.4840f,0.2865f,0.9963f,-0.0106f,0.0848f,0.2488f,0.9965f,0.0159f,-0.0822f,0.3836f,-1.0000f,0.0000f,0.0000f,0.5518f,-0.9964f,0.0223f,0.0817f,0.5351f,-0.9809f,0.0491f,0.1881f,0.5204f,-0.8730f,0.0609f,0.4840f,0.2865f});
  }
}
protected class MFFloat112 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation113 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,-1.0000f,0.1056f,0.0000f,0.0000f,1.0000f,0.0902f,0.0000f,0.0000f,-1.0000f,0.1056f});
  }
}
protected class MFFloat114 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation115 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0585f,0.9839f,-0.1688f,1.8596f,-0.0022f,0.9980f,-0.0630f,1.4607f,0.0000f,1.0000f,0.0000f,0.4973f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat116 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation117 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.0415f,-1.0000f,0.0000f,0.0000f,0.5855f,-1.0000f,0.0000f,0.0000f,0.5852f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat118 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.4500f,0.6400f,0.7600f,0.8800f,1.0000f});
  }
}
protected class MFRotation119 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.9992f,0.0204f,0.0356f,7.2000f,0.9989f,-0.0462f,0.0052f,4.0790f,-0.8687f,-0.2525f,-0.4261f,1.5010f,-0.9410f,-0.2893f,-0.1754f,0.4788f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat120 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.3200f,0.6400f,0.8800f,1.0000f});
  }
}
protected class MFRotation121 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0670f,0.9800f,-0.1280f,4.1500f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat122 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3200f,0.6400f,0.7600f,1.0000f});
  }
}
protected class MFRotation123 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.1229f,-1.0000f,0.0000f,0.0000f,0.5976f,-1.0000f,0.0000f,0.0000f,0.3917f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat124 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2500f,0.3750f,0.6667f,0.7917f,0.9167f,1.0000f});
  }
}
protected class MFRotation125 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.1000f,0.0000f,0.0000f,1.0000f,0.2000f,0.0000f,0.0000f,1.0000f,0.2000f,0.8600f,0.2500f,0.4200f,0.5000f,0.8600f,0.2500f,0.4200f,0.8000f,0.8600f,0.2500f,0.4200f,0.4000f,0.8600f,0.2500f,0.4200f,0.2000f});
  }
}
protected class MFFloat126 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2800f,0.3000f,0.3200f,0.4000f,0.4500f,0.6000f,0.6500f,0.7000f,0.7500f,0.8500f,0.9000f,0.9500f,1.0000f});
  }
}
protected class MFRotation127 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {-1.0000f,0.0000f,0.0000f,1.0000f,-1.0000f,0.0000f,0.0000f,1.0000f,-1.0000f,0.0000f,0.0000f,0.9990f,-1.0000f,0.0000f,0.0000f,0.9900f,-1.0000f,0.0000f,0.0000f,0.9900f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,0.9000f,-1.0000f,0.0000f,0.0000f,1.0000f});
  }
}
protected class MFFloat128 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,1.0000f});
  }
}
protected class MFRotation129 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat130 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.2083f,0.3750f,0.7500f,0.8333f,1.0000f});
  }
}
protected class MFRotation131 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,1.0000f,0.0000f,0.0826f,-0.0197f,-0.5974f,0.8017f,0.0823f,0.0093f,-0.9648f,0.2627f,0.1734f,-0.0124f,0.9549f,-0.2968f,0.0873f,-0.0081f,0.9691f,-0.2463f,0.1580f,0.0000f,1.0000f,0.0000f,0.0826f});
  }
}
protected class MFFloat132 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,1.0000f});
  }
}
protected class MFRotation133 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f});
  }
}
protected class MFFloat134 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.0417f,0.1250f,0.1667f,0.2083f,0.2500f,0.2917f,0.3750f,0.4583f,0.5000f,0.5417f,0.5833f,0.6250f,0.7083f,0.7500f,0.7917f,0.8750f,0.9167f,1.0000f});
  }
}
protected class MFVec3f135 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,-0.0093f,0.0000f,0.0000f,-0.0039f,0.0000f,0.0000f,-0.0088f,0.0000f,0.0000f,-0.0149f,0.0000f,0.0000f,-0.0264f,0.0000f,0.0000f,-0.0393f,0.0000f,0.0000f,-0.0502f,0.0000f,0.0000f,-0.0747f,0.0000f,0.0000f,-0.0273f,0.0000f,0.0000f,-0.0161f,0.0000f,0.0000f,-0.0113f,0.0000f,0.0000f,-0.0058f,0.0000f,0.0000f,-0.0020f,0.0000f,0.0000f,-0.0026f,0.0000f,0.0000f,-0.0143f,0.0000f,0.0000f,-0.0380f,0.0000f,0.0000f,-0.0565f,0.0000f,0.0000f,-0.0450f,0.0000f,0.0000f,-0.0093f,0.0000f});
  }
}
}

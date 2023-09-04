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
public class jumpcut_loadurl {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new jumpcut_loadurl().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/jumpcut_loadurl.new.json");
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("jumpcut_loadurl.x3d"))
        .addMeta(new meta().setName("reference").setContent("http://www.nist.gov/vrml.html"))
        .addMeta(new meta().setName("reference").setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMeta(new meta().setName("creator").setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMeta(new meta().setName("info").setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
        .addMeta(new meta().setName("translator").setContent("Michael Kass NIST, Don Brutzman NPS"))
        .addMeta(new meta().setName("translated").setContent("21 January 2001"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("description").setContent("Test jumpcut Viewpoint transition using Script loadUrl method. A NavigationInfo type of ANY is NOT included in the NavigationInfo node field in this world. Consequently, a Script node with a call to the \"loadURL\" method, with a url corresponding to the MFString \"Top_View\" (the name of a Viewpoint in this world) should create a \"jump cut\" transition of views when the Box geometry in this world is indicated by the pointing device. As a result, indicating the Box geometry should result in a Viewpoint transition to the top view of the Box geometry."))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d"))
        .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("jumpcut_loadurl.x3d"))
        .addChild(new Background().setSkyColor(new MFColor0().getArray()).setGroundAngle(new MFFloat1().getArray()).setGroundColor(new MFColor2().getArray()))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
        .addChild(new Viewpoint().setDEF("Front_View").setDescription("Front View"))
        .addChild(new Viewpoint().setDEF("Top_View").setDescription("Top View").setPosition(new float[] {0f,10f,0f}).setOrientation(new float[] {1f,0f,0f,-1.57f}))
        .addChild(new TouchSensor().setDEF("STARTER").setDescription("touch to activate"))
        .addChild(new Transform().setDEF("ROOT")
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material()))
            .setGeometry(new Box())))
        .addChild(new Script().setDEF("MYSCRIPT").setUrl(new MFString3().getArray())
          .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("myParameter").setValue("\"Top_View\""))
          .addField(new field().setType("MFString").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("myUrl").setValue("\"jumpcut_loadurl.x3d#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.x3d#Top_View\" \"jumpcut_loadurl.wrl#Top_View\" \"https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.wrl#Top_View\""))
          .addField(new field().setType("SFBool").setAccessType(field.ACCESSTYPE_INPUTONLY).setName("trigger_event")))
        .addChild(new ROUTE().setFromNode("STARTER").setFromField("isActive").setToNode("MYSCRIPT").setToField("trigger_event")))      ;
    return X3D0;
    }
private class MFColor0 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0f,1f});
  }
}
private class MFFloat1 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {1.57f});
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0f,0.5f,0f,0f,0.5f,0f});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"jumpcut_loadurl.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/jumpcut_loadurl.js"});
  }
}
}

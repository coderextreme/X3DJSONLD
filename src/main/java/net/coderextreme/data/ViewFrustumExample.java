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
public class ViewFrustumExample {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ViewFrustumExample().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/ViewFrustumExample.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ViewFrustumExample.x3d"))
        .addMeta(new meta().setName("description").setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("translated").setContent("16 August 2008"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("ViewFrustumPrototype.x3d"))
        .addMeta(new meta().setName("drawing").setContent("ViewFrustumComputation.png"))
        .addMeta(new meta().setName("Image").setContent("ViewFrustumOverheadView.png"))
        .addMeta(new meta().setName("Image").setContent("ViewFrustumObliqueView.png"))
        .addMeta(new meta().setName("Image").setContent("ViewpointCalculator.png"))
        .addMeta(new meta().setName("Image").setContent("ViewpointCalculatorComposed.png"))
        .addMeta(new meta().setName("subject").setContent("view culling frustum"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ViewFrustumExample.x3d"))
        .addChild(new Viewpoint().setDescription("ViewFrustum from above, looking down").setOrientation(new float[] {1f,0f,0f,-1.57f}).setPosition(new float[] {0f,40f,0f}))
        .addChild(new Viewpoint().setDescription("ViewFrustum from point of view"))
        .addChild(new Viewpoint().setDescription("ViewFrustum behind point of view").setPosition(new float[] {0f,0f,15f}))
        .addChild(new Viewpoint().setDescription("ViewFrustum oblique side view").setOrientation(new float[] {0.8005f,0.5926f,0.0898f,-0.3743f}).setPosition(new float[] {-5f,5f,20f}))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
        .addChild(new ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(new MFString0().getArray())
          .addField(new field().setType("SFNode").setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
          .addField(new field().setType("SFNode").setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
          .addField(new field().setType("SFBool").setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
          .addField(new field().setType("SFColor").setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
          .addField(new field().setType("SFColor").setName("frustumColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
          .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
          .addField(new field().setType("SFFloat").setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
          .addField(new field().setType("SFBool").setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
        .addComments("Example use")
        .addChild(ProtoInstance0 = new ProtoInstance().setName("ViewFrustum"))
        .addComments("Visualization assists")
        .addChild(new Inline().setDEF("GridXZ").setUrl(new MFString1().getArray()))
        .addChild(new Transform().setScale(new float[] {5f,5f,5f})
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(new MFString2().getArray()))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("ViewpointNode")
            .addComments("prefer empty description to prevent entry in player's ViewpointList")
            .addChild(new Viewpoint().setDescription("ViewFrustum ViewpointNode")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("NavigationInfoNode")
            .addChild(new NavigationInfo().setVisibilityLimit(15f)));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("visible").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("lineColor").setValue("0.9 0.9 0.9"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("frustumColor").setValue("0.8 0.8 0.8"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("trace").setValue("true"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewFrustumPrototype.x3d#ViewFrustum"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"GridXZ_20x20Fixed.x3d"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CoordinateAxes.x3d"});
  }
}
}

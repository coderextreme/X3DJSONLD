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
public class ViewFrustumExample implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ViewFrustumExample().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ViewFrustumExample.new.java.x3d");
    model.toFileJSON("../data/ViewFrustumExample.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ViewFrustumExample.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("16 August 2008")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 October 2019")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("ViewFrustumPrototype.x3d")))
        .addMeta(new meta().setName(new SFString("drawing")).setContent(new SFString("ViewFrustumComputation.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewFrustumOverheadView.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewFrustumObliqueView.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewpointCalculator.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewpointCalculatorComposed.png")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("view culling frustum")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("ViewFrustumExample.x3d")))
        .addChild(new Viewpoint().setDescription(new SFString("ViewFrustum from above, looking down")).setOrientation(new float[] {1f ,0f ,0f ,-1.57f }).setPosition(new float[] {0f ,40f ,0f }))
        .addChild(new Viewpoint().setDescription(new SFString("ViewFrustum from point of view")))
        .addChild(new Viewpoint().setDescription(new SFString("ViewFrustum behind point of view")).setPosition(new float[] {0f ,0f ,15f }))
        .addChild(new Viewpoint().setDescription(new SFString("ViewFrustum oblique side view")).setOrientation(new float[] {0.8005f ,0.5926f ,0.0898f ,-0.3743f }).setPosition(new float[] {-5f ,5f ,20f }))
        .addChild(new NavigationInfo().setType("\"EXAMINE\" \"FLY\" \"ANY\""))
        .addChild(new ExternProtoDeclare().setName(new SFString("ViewFrustum")).setAppinfo(new SFString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")).setUrl(new MFString0().getArray())
          .addField(new field().setType("SFNode").setName(new SFString("ViewpointNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("required: insert Viewpoint DEF or USE node for view of interest")))
          .addField(new field().setType("SFNode").setName(new SFString("NavigationInfoNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("required: insert NavigationInfo DEF or USE node of interest")))
          .addField(new field().setType("SFBool").setName(new SFString("visible")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("whether or not frustum geometry is rendered")))
          .addField(new field().setType("SFColor").setName(new SFString("lineColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")))
          .addField(new field().setType("SFColor").setName(new SFString("frustumColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")))
          .addField(new field().setType("SFFloat").setName(new SFString("transparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("transparency of ViewFrustum hull geometry, default value 0.5")))
          .addField(new field().setType("SFFloat").setName(new SFString("aspectRatio")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("assumed ratio height/width, default value 0.75")))
          .addField(new field().setType("SFBool").setName(new SFString("trace")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("debug support, default false"))))
        .addComments(new CommentsBlock("Example use"))
        .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("ViewFrustum")))
        .addComments(new CommentsBlock("Visualization assists"))
        .addChild(new Inline().setDEF(new SFString("GridXZ")).setUrl(new MFString1().getArray()))
        .addChild(new Transform().setScale(new float[] {5f ,5f ,5f })
          .addChild(new Inline().setDEF(new SFString("CoordinateAxes")).setUrl(new MFString2().getArray()))));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("ViewpointNode"))
            .addComments(new CommentsBlock("prefer empty description to prevent entry in player's ViewpointList"))
            .addChild(new Viewpoint().setDescription(new SFString("ViewFrustum ViewpointNode"))));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("NavigationInfoNode"))
            .addChild(new NavigationInfo().setVisibilityLimit(15f )));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("visible")).setValue(new SFString("true")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("lineColor")).setValue(new SFString("0.9 0.9 0.9")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("frustumColor")).setValue(new SFString("0.8 0.8 0.8")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("transparency")).setValue(new SFString("0.75")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName(new SFString("trace")).setValue(new SFString("true")));
    return X3D0;
    }
private class MFString0 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewFrustumPrototype.x3d#ViewFrustum"});
  }
}
private class MFString1 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"GridXZ_20x20Fixed.x3d"});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"CoordinateAxes.x3d"});
  }
}
}

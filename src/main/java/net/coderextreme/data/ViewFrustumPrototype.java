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
public class ViewFrustumPrototype implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new ViewFrustumPrototype().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ViewFrustumPrototype.new.java.x3d");
    model.toFileJSON("../data/ViewFrustumPrototype.new.json");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addMeta(new meta().setName("title").setContent("ViewFrustumPrototype.x3d"))
        .addMeta(new meta().setName("description").setContent("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("translated").setContent("16 August 2008"))
        .addMeta(new meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new meta().setName("reference").setContent("ViewFrustumExample.x3d"))
        .addMeta(new meta().setName("drawing").setContent("ViewFrustumComputation.png"))
        .addMeta(new meta().setName("Image").setContent("ViewFrustumOverheadView.png"))
        .addMeta(new meta().setName("Image").setContent("ViewFrustumObliqueView.png"))
        .addMeta(new meta().setName("subject").setContent("view culling frustum"))
        .addMeta(new meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle("ViewFrustumPrototype.x3d"))
        .addChild(new ProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest")
              .addComments("NULL node, ProtoInstance must provide"))
            .addField(new field().setType("SFNode").setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest")
              .addComments("NULL node, ProtoInstance must provide"))
            .addField(new field().setType("SFBool").setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered").setValue("true"))
            .addField(new field().setType("SFColor").setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9").setValue("0.9 0.9 0.9"))
            .addField(new field().setType("SFColor").setName("frustumColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8").setValue("0.8 0.8 0.8"))
            .addField(new field().setType("SFFloat").setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5").setValue("0.5"))
            .addField(new field().setType("SFFloat").setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75").setValue("0.75"))
            .addField(new field().setType("SFBool").setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false").setValue("false")))
          .setProtoBody(new ProtoBody()
            .addChild(new Switch().setDEF("VisibilitySwitch").setWhichChoice(-1)
              .addChild(new Transform().setDEF("PositionTransform").setRotation(new double[] {0,1,0,3.14159})
                .addChild(new Transform().setDEF("OrientationTransform")
                  .addChild(new Shape()
                    .setGeometry(new IndexedLineSet().setDEF("FrustumLines").setCoordIndex(new MFInt320().getArray())
                      .setCoord(new Coordinate().setDEF("FrustumCoordinate").setPoint(new MFVec3f1().getArray())))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor"))))))
                  .addChild(new Shape()
                    .setGeometry(new Extrusion().setDEF("FrustumExtrusion"))
                    .setAppearance(new Appearance().setDEF("FrustumAppearance")
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("diffuseColor").setProtoField("frustumColor"))
                          .addConnect(new connect().setNodeField("transparency").setProtoField("transparency"))))))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08))
                    .setAppearance(new Appearance().setUSE("FrustumAppearance"))))))
            .addChild(new Script().setDEF("GeometryComputationScript").setDirectOutput(true).setUrl(new MFString2().getArray())
              .addField(new field().setType("SFBool").setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Whether or not frustum geometry is rendered"))
              .addField(new field().setType("SFInt32").setName("visibilitySwitchSelection").setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Adjust Switch selection to make geometry visible or not"))
              .addField(new field().setType("SFNode").setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addComments("initialization node (if any) goes here"))
              .addField(new field().setType("SFNode").setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addComments("initialization node (if any) goes here"))
              .addField(new field().setType("SFNode").setName("FrustumCoordinate").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Coordinate().setUSE("FrustumCoordinate")))
              .addField(new field().setType("SFNode").setName("FrustumExtrusion").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Extrusion().setUSE("FrustumExtrusion")))
              .addField(new field().setType("SFBool").setName("recompute").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width"))
              .addField(new field().setType("SFVec3f").setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFRotation").setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec3f").setName("spine_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec2f").setName("scale_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec3f").setName("point_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFBool").setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("visible").setProtoField("visible"))
                .addConnect(new connect().setNodeField("ViewpointNode").setProtoField("ViewpointNode"))
                .addConnect(new connect().setNodeField("NavigationInfoNode").setProtoField("NavigationInfoNode"))
                .addConnect(new connect().setNodeField("aspectRatio").setProtoField("aspectRatio"))
                .addConnect(new connect().setNodeField("trace").setProtoField("trace"))))
            .addChild(new ROUTE().setFromField("visibilitySwitchSelection").setFromNode("GeometryComputationScript").setToField("whichChoice").setToNode("VisibilitySwitch"))
            .addChild(new ROUTE().setFromField("position_changed").setFromNode("GeometryComputationScript").setToField("translation").setToNode("PositionTransform"))
            .addChild(new ROUTE().setFromField("orientation_changed").setFromNode("GeometryComputationScript").setToField("rotation").setToNode("OrientationTransform"))
            .addChild(new ROUTE().setFromField("spine_changed").setFromNode("GeometryComputationScript").setToField("set_spine").setToNode("FrustumExtrusion"))
            .addChild(new ROUTE().setFromField("scale_changed").setFromNode("GeometryComputationScript").setToField("set_scale").setToNode("FrustumExtrusion"))
            .addChild(new ROUTE().setFromField("point_changed").setFromNode("GeometryComputationScript").setToField("point").setToNode("FrustumCoordinate"))))
        .addComments("Example use is in separate scene")
        .addChild(new Anchor().setDescription("ViewFrustum Example").setUrl(new MFString3().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new double[] {0.8,0.4,0})))
            .setGeometry(new Text().setString(new MFString4().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString5().getArray()).setSize(0.8))))))      ;
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new double[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
  }
}
private class MFString2 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewFrustumPrototypeScript.js"});
  }
}
private class MFString3 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewFrustumExample.x3d"});
  }
}
private class MFString4 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"});
  }
}
private class MFString5 {
  private org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

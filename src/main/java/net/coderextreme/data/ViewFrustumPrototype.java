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
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new ViewFrustumPrototype().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/ViewFrustumPrototype.new.java.x3d");
    model.toFileJSON("../data/ViewFrustumPrototype.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
      X3D X3D0 =  new X3D().setProfile(new SFString("Immersive")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("ViewFrustumPrototype.x3d")))
        .addMeta(new meta().setName(new SFString("description")).setContent(new SFString("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Don Brutzman")))
        .addMeta(new meta().setName(new SFString("translated")).setContent(new SFString("16 August 2008")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("20 October 2019")))
        .addMeta(new meta().setName(new SFString("reference")).setContent(new SFString("ViewFrustumExample.x3d")))
        .addMeta(new meta().setName(new SFString("drawing")).setContent(new SFString("ViewFrustumComputation.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewFrustumOverheadView.png")))
        .addMeta(new meta().setName(new SFString("Image")).setContent(new SFString("ViewFrustumObliqueView.png")))
        .addMeta(new meta().setName(new SFString("subject")).setContent(new SFString("view culling frustum")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
        .addMeta(new meta().setName(new SFString("license")).setContent(new SFString("../license.html"))))
      .setScene(new Scene()
        .addChild(new WorldInfo().setTitle(new SFString("ViewFrustumPrototype.x3d")))
        .addChild(new ProtoDeclare().setName(new SFString("ViewFrustum")).setAppinfo(new SFString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFNode").setName(new SFString("ViewpointNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("required: insert Viewpoint DEF or USE node for view of interest"))
              .addComments(new CommentsBlock("NULL node, ProtoInstance must provide")))
            .addField(new field().setType("SFNode").setName(new SFString("NavigationInfoNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("required: insert NavigationInfo DEF or USE node of interest"))
              .addComments(new CommentsBlock("NULL node, ProtoInstance must provide")))
            .addField(new field().setType("SFBool").setName(new SFString("visible")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("whether or not frustum geometry is rendered")).setValue(new SFString("true")))
            .addField(new field().setType("SFColor").setName(new SFString("lineColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9")).setValue(new SFString("0.9 0.9 0.9")))
            .addField(new field().setType("SFColor").setName(new SFString("frustumColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8")).setValue(new SFString("0.8 0.8 0.8")))
            .addField(new field().setType("SFFloat").setName(new SFString("transparency")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("transparency of ViewFrustum hull geometry, default value 0.5")).setValue(new SFString("0.5")))
            .addField(new field().setType("SFFloat").setName(new SFString("aspectRatio")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("assumed ratio height/width, default value 0.75")).setValue(new SFString("0.75")))
            .addField(new field().setType("SFBool").setName(new SFString("trace")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo(new SFString("debug support, default false")).setValue(new SFString("false"))))
          .setProtoBody(new ProtoBody()
            .addChild(new Switch().setDEF(new SFString("VisibilitySwitch")).setWhichChoice(-1)
              .addChild(new Transform().setDEF(new SFString("PositionTransform")).setRotation(new float[] {0f ,1f ,0f ,3.14159f })
                .addChild(new Transform().setDEF(new SFString("OrientationTransform"))
                  .addChild(new Shape()
                    .setGeometry(new IndexedLineSet().setDEF(new SFString("FrustumLines")).setCoordIndex(new MFInt320().getArray())
                      .setCoord(new Coordinate().setDEF(new SFString("FrustumCoordinate")).setPoint(new MFVec3f1().getArray())))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField(new SFString("emissiveColor")).setProtoField(new SFString("lineColor")))))))
                  .addChild(new Shape()
                    .setGeometry(new Extrusion().setDEF(new SFString("FrustumExtrusion")))
                    .setAppearance(new Appearance().setDEF(new SFString("FrustumAppearance"))
                      .setMaterial(new Material()
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("frustumColor")))
                          .addConnect(new connect().setNodeField(new SFString("transparency")).setProtoField(new SFString("transparency")))))))
                  .addChild(new Shape()
                    .setGeometry(new Sphere().setRadius(0.08f ))
                    .setAppearance(new Appearance().setUSE(new SFString("FrustumAppearance")))))))
            .addChild(new Script().setDEF(new SFString("GeometryComputationScript")).setDirectOutput(true).setUrl(new MFString2().getArray())
              .addField(new field().setType("SFBool").setName(new SFString("visible")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("Whether or not frustum geometry is rendered")))
              .addField(new field().setType("SFInt32").setName(new SFString("visibilitySwitchSelection")).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo(new SFString("Adjust Switch selection to make geometry visible or not")))
              .addField(new field().setType("SFNode").setName(new SFString("ViewpointNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addComments(new CommentsBlock("initialization node (if any) goes here")))
              .addField(new field().setType("SFNode").setName(new SFString("NavigationInfoNode")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addComments(new CommentsBlock("initialization node (if any) goes here")))
              .addField(new field().setType("SFNode").setName(new SFString("FrustumCoordinate")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Coordinate().setUSE(new SFString("FrustumCoordinate"))))
              .addField(new field().setType("SFNode").setName(new SFString("FrustumExtrusion")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Extrusion().setUSE(new SFString("FrustumExtrusion"))))
              .addField(new field().setType("SFBool").setName(new SFString("recompute")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFFloat").setName(new SFString("aspectRatio")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo(new SFString("assumed ratio height/width")))
              .addField(new field().setType("SFVec3f").setName(new SFString("position_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFRotation").setName(new SFString("orientation_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec3f").setName(new SFString("spine_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec2f").setName(new SFString("scale_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("MFVec3f").setName(new SFString("point_changed")).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setType("SFBool").setName(new SFString("trace")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("visible")).setProtoField(new SFString("visible")))
                .addConnect(new connect().setNodeField(new SFString("ViewpointNode")).setProtoField(new SFString("ViewpointNode")))
                .addConnect(new connect().setNodeField(new SFString("NavigationInfoNode")).setProtoField(new SFString("NavigationInfoNode")))
                .addConnect(new connect().setNodeField(new SFString("aspectRatio")).setProtoField(new SFString("aspectRatio")))
                .addConnect(new connect().setNodeField(new SFString("trace")).setProtoField(new SFString("trace")))))
            .addChild(new ROUTE().setFromField(new SFString("visibilitySwitchSelection")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("whichChoice")).setToNode(new SFString("VisibilitySwitch")))
            .addChild(new ROUTE().setFromField(new SFString("position_changed")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("translation")).setToNode(new SFString("PositionTransform")))
            .addChild(new ROUTE().setFromField(new SFString("orientation_changed")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("rotation")).setToNode(new SFString("OrientationTransform")))
            .addChild(new ROUTE().setFromField(new SFString("spine_changed")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("set_spine")).setToNode(new SFString("FrustumExtrusion")))
            .addChild(new ROUTE().setFromField(new SFString("scale_changed")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("set_scale")).setToNode(new SFString("FrustumExtrusion")))
            .addChild(new ROUTE().setFromField(new SFString("point_changed")).setFromNode(new SFString("GeometryComputationScript")).setToField(new SFString("point")).setToNode(new SFString("FrustumCoordinate")))))
        .addComments(new CommentsBlock("Example use is in separate scene"))
        .addChild(new Anchor().setDescription(new SFString("ViewFrustum Example")).setUrl(new MFString3().getArray())
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.8f ,0.4f ,0f })))
            .setGeometry(new Text().setString(new MFString4().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString5().getArray()).setSize(0.8f ))))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f ,0f });
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

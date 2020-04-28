package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.CAD;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class CadGeometryExternPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new CadGeometryExternPrototypes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
ProtoInstanceObject ProtoInstance1 = null;
ProtoInstanceObject ProtoInstance2 = null;
ProtoInstanceObject ProtoInstance3 = null;
ProtoInstanceObject ProtoInstance4 = null;
ProtoInstanceObject ProtoInstance5 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.1")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("CadGeometryExternPrototypes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("This scene provides tool developers with X3D Amendment 1 CAD Component node prototypes, providing backwards compatibility with VRML97 and X3D v3.0."))
        .addMeta(new metaObject().setName("creator").setContent("Travis Rauch, Alan Shaffer, Mounir Sidhom, Patrick Sullivan and Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("28 April 2005"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("warning").setContent("Do not use these prototypes in an up-to-date X3D browser that already provides CAD support."))
        .addMeta(new metaObject().setName("information").setContent("Recommended practice: avoid using these prototypes, instead use native definitions for CAD nodes using an up-to-date X3D browser."))
        .addMeta(new metaObject().setName("information").setContent("These scenes are not intended for regular authoring - use X3D v3.2 CAD component instead. Example scenes using these prototypes do not get support for making embdedded metadata values visible at run time, though metadata can certainly be saved in the scene file OK."))
        .addMeta(new metaObject().setName("information").setContent("Example scenes using these prototypes do not get support for making embedded metadata values visible at run time, though separate metadata nodes can certainly be saved in the scene file OK."))
        .addMeta(new metaObject().setName("reference").setContent("CadGeometryPrototypes.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("CadTeapot.x3d"))
        .addMeta(new metaObject().setName("subject").setContent("CADAssembly CADFace CADLayer CADPart IndexedQuadSet QuadSet"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/CADGeometry.html"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryExternPrototypes.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("CadGeometryExternPrototypes.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("IndexedQuadSet").setAppinfo("The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet").setUrl(new MFStringObject(new MFString0().getArray()))
          .addField(new fieldObject().setType("MFInt32").setName("set_index").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("SFNode").setName("color").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]"))
          .addField(new fieldObject().setType("SFNode").setName("coord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]"))
          .addField(new fieldObject().setType("SFNode").setName("fogCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]"))
          .addField(new fieldObject().setType("SFNode").setName("normal").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]"))
          .addField(new fieldObject().setType("SFNode").setName("texCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]"))
          .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("colorPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("normalPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("MFInt32").setName("index").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("==========================================="))
        .addChild(new ExternProtoDeclareObject().setName("QuadSet").setAppinfo("The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#QuadSet").setUrl(new MFStringObject(new MFString1().getArray()))
          .addField(new fieldObject().setType("MFNode").setName("attrib").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DVertexAttributeNode]"))
          .addField(new fieldObject().setType("SFNode").setName("color").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DColorNode]"))
          .addField(new fieldObject().setType("SFNode").setName("coord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DCoordinateNode]"))
          .addField(new fieldObject().setType("SFNode").setName("fogCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[FogCoordinate]"))
          .addField(new fieldObject().setType("SFNode").setName("normal").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DNormalNode]"))
          .addField(new fieldObject().setType("SFNode").setName("texCoord").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DTextureCoordinateNode]"))
          .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("colorPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("normalPerVertex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("CADLayer").setAppinfo("The CADLayer node defines a hierarchy of nodes used for showing layer structure.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADLayer").setUrl(new MFStringObject(new MFString2().getArray()))
          .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("MFBool").setName("visible").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("CADAssembly").setAppinfo("The CADAssembly node holds a set of assemblies or parts grouped together.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADAssembly").setUrl(new MFStringObject(new MFString3().getArray()))
          .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("CADPart").setAppinfo("CADPart represents the location and faces that constitute a part").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart").setUrl(new MFStringObject(new MFString4().getArray()))
          .addField(new fieldObject().setType("MFNode").setName("addChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("removeChildren").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
          .addField(new fieldObject().setType("MFNode").setName("children").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFRotation").setName("rotation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("center").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFRotation").setName("scaleOrientation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new ExternProtoDeclareObject().setName("CADFace").setAppinfo("The CADFace node holds the geometry representing a face of a part.").setDocumentation("https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADFace").setUrl(new MFStringObject(new MFString5().getArray()))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFNode").setName("shape").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxCenter").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFVec3f").setName("bboxSize").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
          .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)))
        .addComments(new CommentsBlock("========================================"))
        .addChild(new TransformObject().setTranslation(new float[] {0f,-2f,0f})
          .addChild(new AnchorObject().setDescription("CAD Teapot").setUrl(new MFStringObject(new MFString6().getArray()))
            .addChild(new ShapeObject()
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString7().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString8().getArray())).setSize(0.9f)))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,0.2f}))))))
        .addChild(new TransformObject().setTranslation(new float[] {-3f,2f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setDEF("White")
              .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,1f,1f})))
            .setGeometry(ProtoInstance0 = new ProtoInstanceObject().setName("IndexedQuadSet"))))
        .addChild(new TransformObject().setTranslation(new float[] {3f,2f,0f})
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject().setUSE("White"))
            .setGeometry(ProtoInstance1 = new ProtoInstanceObject().setName("QuadSet"))))
        .addComments(new CommentsBlock("========================================"))
        .addComments(new CommentsBlock("Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead."))
        .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("CADLayer")))      ;
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("index").setValue("0 3 2 1 4 5 6 7 2 7 9 8 2 3 4 7"));
ProtoInstance0
              .addFieldValue(new fieldValueObject().setName("coord")
                .addChild(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f9().getArray()))));
ProtoInstance1
              .addFieldValue(new fieldValueObject().setName("coord")
                .addChild(new CoordinateObject().setPoint(new MFVec3fObject(new MFVec3f10().getArray()))));
ProtoInstance2
          .addFieldValue(new fieldValueObject().setName("children")
            .addChild(ProtoInstance3 = new ProtoInstanceObject().setName("CADAssembly")));
ProtoInstance3
              .addFieldValue(new fieldValueObject().setName("children")
                .addChild(ProtoInstance4 = new ProtoInstanceObject().setName("CADPart")));
ProtoInstance4
                  .addFieldValue(new fieldValueObject().setName("children")
                    .addChild(ProtoInstance5 = new ProtoInstanceObject().setName("CADFace")));
ProtoInstance5
                      .addFieldValue(new fieldValueObject().setName("shape")
                        .addChild(new ShapeObject()
                          .setGeometry(new CylinderObject().setBottom(false).setHeight(0.000001f).setRadius(0.000001f).setSide(false))
                          .setAppearance(new AppearanceObject()
                            .setMaterial(new MaterialObject()))));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.x3d#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#IndexedQuadSet","CadGeometryPrototypes.wrl#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#IndexedQuadSet"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.x3d#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#QuadSet","CadGeometryPrototypes.wrl#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#QuadSet"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.x3d#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADLayer","CadGeometryPrototypes.wrl#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADLayer"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.x3d#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADAssembly","CadGeometryPrototypes.wrl#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADAssembly"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.wrl#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADPart","CadGeometryPrototypes.x3d#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADPart"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadGeometryPrototypes.x3d#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADFace","CadGeometryPrototypes.wrl#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADFace"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"CadTeapot.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.x3d","CadTeapot.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.wrl"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Example CAD structure nodes","are found in CadTeapot.x3d"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFVec3f9 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1.5f,0f,0f,-1.5f,1f,-1f,-0.5f,1f,-1f,-0.5f,0f,0f,0.5f,0f,0f,1.5f,0f,0f,1.5f,1f,-1f,0.5f,1f,-1f,-0.5f,2f,-1f,0.5f,2f,-1f});
  }
}
protected class MFVec3f10 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {-1.5f,0f,0f,-1.5f,1f,-1f,-0.5f,1f,-1f,-0.5f,0f,0f,0.5f,0f,0f,1.5f,0f,0f,1.5f,1f,-1f,0.5f,1f,-1f});
  }
}
}

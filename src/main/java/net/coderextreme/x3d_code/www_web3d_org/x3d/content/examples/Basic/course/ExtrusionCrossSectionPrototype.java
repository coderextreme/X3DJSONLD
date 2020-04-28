package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.course;
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
public class ExtrusionCrossSectionPrototype {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ExtrusionCrossSectionPrototype().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.new.json");
    }
    public X3DObject initialize() {
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.0")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ExtrusionCrossSectionPrototype.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("22 November 2000"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionExampleShip.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionExampleShip.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionExampleTorus.x3d"))
        .addMeta(new metaObject().setName("description").setContent("Shape prototype for Extrusion node that also draws spine line plus oriented, scaled cross sections at each spine point."))
        .addMeta(new metaObject().setName("hint").setContent("Utilize ExtrusionCrossSection ProtoInstance as if it is a Shape node (with containerField=\"children\") rather than an Extrusion node (with containerField=\"geometry\") under a Shape."))
        .addMeta(new metaObject().setName("reference").setContent("VRML 97 Specification, 6.18 Extrusion"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion"))
        .addMeta(new metaObject().setName("Image").setContent("VRML 97 Specification, Figure 6.6"))
        .addMeta(new metaObject().setName("Image").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/Images/Extrusion.gif"))
        .addMeta(new metaObject().setName("reference").setContent("http://realism.com/x3d/examples/Extrusion/_frame.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cs.brown.edu/~gss/vrml/drawpoly.html"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionXj3dGoldberg1999.java"))
        .addMeta(new metaObject().setName("reference").setContent("http://web3d.metrolink.com/cgi-bin/cvsweb.cgi/x3d/src/com/sun/j3d/loaders/vrml97/impl/Attic/Extrusion.java"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new WorldInfoObject().setTitle("ExtrusionCrossSectionPrototype.x3d"))
        .addChild(new ProtoDeclareObject().setName("ExtrusionCrossSection").setAppinfo("Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d")
          .setProtoInterface(new ProtoInterfaceObject()
            .addComments(new CommentsBlock("run-time eventIn Extrusion-modification interfaces for VRML97 compatibility"))
            .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion name"))
            .addField(new fieldObject().setType("MFVec2f").setName("crossSection").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("1 1 1 -1 -1 -1 -1 1 1 1"))
            .addField(new fieldObject().setType("MFVec3f").setName("spine").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("0 0 0 0 1 0"))
            .addField(new fieldObject().setType("MFVec2f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("1 1"))
            .addField(new fieldObject().setType("MFRotation").setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("0 0 1 0"))
            .addField(new fieldObject().setType("SFBool").setName("beginCap").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setName("endCap").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("false"))
            .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("convex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("true"))
            .addField(new fieldObject().setType("SFFloat").setName("creaseAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("0"))
            .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field").setValue("true"))
            .addField(new fieldObject().setType("SFColor").setName("spineColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("emissiveColor of spine").setValue("0 0.9 0.8"))
            .addField(new fieldObject().setType("SFColor").setName("crossSectionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("diffuseColor of crossSection").setValue("0.2 0.8 0.3"))
            .addField(new fieldObject().setType("SFFloat").setName("crossSectionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of crossSection").setValue("0.2"))
            .addField(new fieldObject().setType("SFColor").setName("extrusionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("diffuseColor of extrusion hull").setValue("0.3 0.3 0.3"))
            .addField(new fieldObject().setType("SFFloat").setName("extrusionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of extrusion hull").setValue("0.7"))
            .addField(new fieldObject().setType("SFNode").setName("extrusionImageTexture").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Image to apply to Extrusion")
              .addComments(new CommentsBlock("initialization node (if any) goes here")))
            .addField(new fieldObject().setType("SFNode").setName("extrusionTextureTransform").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("TextureTransform coordinates of image applied to Extrusion")
              .addComments(new CommentsBlock("initialization node (if any) goes here")))
            .addField(new fieldObject().setType("MFVec2f").setName("set_crossSection").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
            .addField(new fieldObject().setType("MFVec3f").setName("set_spine").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
            .addField(new fieldObject().setType("MFVec2f").setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
            .addField(new fieldObject().setType("MFRotation").setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
            .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether to provide initialization trace statements showing node construction").setValue("false")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new GroupObject()
              .addChild(new ShapeObject().setDEF("Spine")
                .setGeometry(new IndexedLineSetObject().setDEF("SpineLine").setColorPerVertex(false)
                  .setCoord(new CoordinateObject().setDEF("SpineCoordinates")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("point").setProtoField("spine"))
                      .addConnect(new connectObject().setNodeField("point").setProtoField("set_spine")))))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("SpineMaterial")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("spineColor"))))))
              .addChild(new ShapeObject().setDEF("InternalCrossSections")
                .addComments(new CommentsBlock("use most conservative polygon settings for reliable rendering: convex='false' solid='false'"))
                .setGeometry(new IndexedFaceSetObject().setDEF("CrossSectionFaces").setConvex(false).setSolid(false)
                  .setCoord(new CoordinateObject().setDEF("CrossSectionFacesCoordinates")))
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDEF("CrossSectionMaterial")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("crossSectionColor"))
                      .addConnect(new connectObject().setNodeField("transparency").setProtoField("crossSectionTransparency"))))))
              .addChild(new ShapeObject().setDEF("ExternalExtrusion")
                .addComments(new CommentsBlock("use most conservative polygon settings: convex='false' solid='false'"))
                .setGeometry(new ExtrusionObject().setDEF("EnclosingExtrusion").setConvex(false).setSolid(false)
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("crossSection").setProtoField("crossSection"))
                    .addConnect(new connectObject().setNodeField("spine").setProtoField("spine"))
                    .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
                    .addConnect(new connectObject().setNodeField("orientation").setProtoField("orientation"))
                    .addConnect(new connectObject().setNodeField("set_crossSection").setProtoField("set_crossSection"))
                    .addConnect(new connectObject().setNodeField("set_spine").setProtoField("set_spine"))
                    .addConnect(new connectObject().setNodeField("set_scale").setProtoField("set_scale"))
                    .addConnect(new connectObject().setNodeField("set_orientation").setProtoField("set_orientation"))
                    .addConnect(new connectObject().setNodeField("beginCap").setProtoField("beginCap"))
                    .addConnect(new connectObject().setNodeField("endCap").setProtoField("endCap"))
                    .addConnect(new connectObject().setNodeField("ccw").setProtoField("ccw"))
                    .addConnect(new connectObject().setNodeField("convex").setProtoField("convex"))
                    .addConnect(new connectObject().setNodeField("creaseAngle").setProtoField("creaseAngle"))
                    .addConnect(new connectObject().setNodeField("solid").setProtoField("solid"))))
                .setAppearance(new AppearanceObject().setDEF("ExtrusionAppearance")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("texture").setProtoField("extrusionImageTexture"))
                    .addConnect(new connectObject().setNodeField("textureTransform").setProtoField("extrusionTextureTransform")))
                  .setMaterial(new MaterialObject().setDEF("ExtrusionMaterial")
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("extrusionColor"))
                      .addConnect(new connectObject().setNodeField("transparency").setProtoField("extrusionTransparency")))))))
            .addComments(new CommentsBlock("TODO hardwired local Script path to workaround BS Contact bug"))
            .addChild(new ScriptObject().setDEF("CrossSectionScript").setUrl(new MFStringObject(new MFString0().getArray()))
              .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFVec2f").setName("crossSection").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFVec3f").setName("spine").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFVec2f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFRotation").setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFColor").setName("spineColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFColor").setName("crossSectionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFFloat").setName("crossSectionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFColor").setName("extrusionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("SFFloat").setName("extrusionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT))
              .addField(new fieldObject().setType("MFVec2f").setName("set_crossSection").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFVec3f").setName("set_spine").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFVec2f").setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFRotation").setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFInt32").setName("spineIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("MFInt32").setName("facesIndex").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("MFVec3f").setName("facePoints").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFInt32").setName("computedFacesIndex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFVec3f").setName("computedFacePoints").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addComments(new CommentsBlock("local variables"))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("name").setProtoField("name"))
                .addConnect(new connectObject().setNodeField("crossSection").setProtoField("crossSection"))
                .addConnect(new connectObject().setNodeField("spine").setProtoField("spine"))
                .addConnect(new connectObject().setNodeField("scale").setProtoField("scale"))
                .addConnect(new connectObject().setNodeField("spineColor").setProtoField("spineColor"))
                .addConnect(new connectObject().setNodeField("crossSectionColor").setProtoField("crossSectionColor"))
                .addConnect(new connectObject().setNodeField("crossSectionTransparency").setProtoField("crossSectionTransparency"))
                .addConnect(new connectObject().setNodeField("extrusionColor").setProtoField("extrusionColor"))
                .addConnect(new connectObject().setNodeField("extrusionTransparency").setProtoField("extrusionTransparency"))
                .addConnect(new connectObject().setNodeField("orientation").setProtoField("orientation"))
                .addConnect(new connectObject().setNodeField("set_crossSection").setProtoField("set_crossSection"))
                .addConnect(new connectObject().setNodeField("set_spine").setProtoField("set_spine"))
                .addConnect(new connectObject().setNodeField("set_scale").setProtoField("set_scale"))
                .addConnect(new connectObject().setNodeField("set_orientation").setProtoField("set_orientation"))
                .addConnect(new connectObject().setNodeField("traceEnabled").setProtoField("traceEnabled"))))
            .addChild(new ROUTEObject().setFromField("spineIndex").setFromNode("CrossSectionScript").setToField("set_coordIndex").setToNode("SpineLine"))
            .addChild(new ROUTEObject().setFromField("facesIndex").setFromNode("CrossSectionScript").setToField("set_coordIndex").setToNode("CrossSectionFaces"))
            .addChild(new ROUTEObject().setFromField("facePoints").setFromNode("CrossSectionScript").setToField("point").setToNode("CrossSectionFacesCoordinates"))))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Example instance adapted from Figure15.12Torus.x3d"))
        .addComments(new CommentsBlock("https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d"))
        .addComments(new CommentsBlock("Redirection text in case a user examines this PROTO file via a 3D browser:"))
        .addChild(new GroupObject()
          .addChild(new TransformObject().setTranslation(new float[] {0f,1.5f,0f})
            .addChild(new ShapeObject()
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0f,1f,1f}).setEmissiveColor(new float[] {0f,1f,1f})))
              .setGeometry(new TextObject().setString(new MFStringObject(new MFString1().getArray()))
                .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString2().getArray())).setSize(0.9f)))))
          .addChild(new TransformObject().setTranslation(new float[] {-2.5f,-2f,0f})
            .addChild(new AnchorObject().setDescription("Touch text for Torus example").setParameter(new MFStringObject(new MFString3().getArray())).setUrl(new MFStringObject(new MFString4().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {1f,0f,1f}).setTransparency(0.2f)))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString5().getArray()))
                  .setFontStyle(new FontStyleObject().setDEF("FontCenter").setJustify(new MFStringObject(new MFString6().getArray())).setSize(1.2f).setStyle("BOLD"))))
              .addChild(new ShapeObject()
                .setGeometry(new BoxObject().setSize(new float[] {3f,1f,0.01f}))
                .setAppearance(new AppearanceObject().setDEF("TransparentAppearance")
                  .setMaterial(new MaterialObject().setTransparency(1f))))))
          .addChild(new TransformObject().setTranslation(new float[] {2.5f,-2f,0f})
            .addChild(new AnchorObject().setDescription("Touch text for Ship example").setParameter(new MFStringObject(new MFString7().getArray())).setUrl(new MFStringObject(new MFString8().getArray()))
              .addChild(new ShapeObject()
                .setAppearance(new AppearanceObject()
                  .setMaterial(new MaterialObject().setDiffuseColor(new float[] {0.7f,0.7f,0.7f}).setTransparency(0.2f)))
                .setGeometry(new TextObject().setString(new MFStringObject(new MFString9().getArray()))
                  .setFontStyle(new FontStyleObject().setUSE("FontCenter"))))
              .addChild(new ShapeObject()
                .setGeometry(new BoxObject().setSize(new float[] {2f,1f,0.01f}))
                .setAppearance(new AppearanceObject().setUSE("TransparentAppearance")))))))      ;
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ExtrusionCrossSectionPrototype.js","file:///C:/www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ExtrusionCrossSectionPrototype","is a Prototype definition scene","","Example scenes using this node:"});
  }
}
protected class MFString2 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ExtrusionCrossSectionExampleTorus.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.x3d","ExtrusionCrossSectionExampleTorus.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.wrl"});
  }
}
protected class MFString5 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Torus"});
  }
}
protected class MFString6 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString7 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"target=_blank"});
  }
}
protected class MFString8 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ExtrusionCrossSectionExampleShip.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleShip.x3d","ExtrusionCrossSectionExampleShip.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleShip.wrl"});
  }
}
protected class MFString9 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"Ship"});
  }
}
}

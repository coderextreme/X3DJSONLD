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
public class ExtrusionCrossSectionExampleTorus {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new ExtrusionCrossSectionExampleTorus().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.2")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("title").setContent("ExtrusionCrossSectionExampleTorus.x3d"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("created").setContent("31 August 2003"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("description").setContent("Torus example demonstrating cross-section prototype for Extrusion node that also draws spine line plus oriented, scaled cross sections at each spine point."))
        .addMeta(new metaObject().setName("hint").setContent("Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField=\"children\") rather than an Extrusion node (with containerField=\"geometry\")."))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionExampleShip.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionExampleShip.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionCrossSectionPrototype.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter30-Scripts/Figure30.5ScriptTorusBuilder.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("VRML 97 Specification, 6.18 Extrusion"))
        .addMeta(new metaObject().setName("reference").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion"))
        .addMeta(new metaObject().setName("Image").setContent("VRML 97 Specification, Figure 6.6"))
        .addMeta(new metaObject().setName("Image").setContent("https://www.web3d.org/technicalinfo/specifications/vrml97/Images/Extrusion.gif"))
        .addMeta(new metaObject().setName("reference").setContent("http://realism.com/Web3D/Examples/Extrusion/_frame.html"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.cs.brown.edu/~gss/vrml/drawpoly.html"))
        .addMeta(new metaObject().setName("reference").setContent("ExtrusionXj3dGoldberg1999.java"))
        .addMeta(new metaObject().setName("reference").setContent("http://web3d.metrolink.com/cgi-bin/cvsweb.cgi/x3d/src/com/sun/j3d/loaders/vrml97/impl/Attic/Extrusion.java"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.x3d"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addComments(new CommentsBlock("Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField=\"children\") rather than an Extrusion node (with containerField=\"geometry\")."))
        .addChild(new WorldInfoObject().setTitle("ExtrusionCrossSectionExampleTorus.x3d"))
        .addChild(new ExternProtoDeclareObject().setName("ExtrusionCrossSection").setAppinfo("Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d").setUrl(new MFStringObject(new MFString0().getArray()))
          .addComments(new CommentsBlock("run-time eventIn Extrusion-modification interfaces for VRML 97 compatibility"))
          .addField(new fieldObject().setType("SFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion name"))
          .addField(new fieldObject().setType("MFVec2f").setName("crossSection").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFVec3f").setName("spine").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFVec2f").setName("scale").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFRotation").setName("orientation").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("beginCap").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("endCap").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("ccw").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("convex").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFFloat").setName("creaseAngle").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("solid").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFColor").setName("spineColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("emissiveColor of spine"))
          .addField(new fieldObject().setType("SFColor").setName("crossSectionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("diffuseColor of crossSection"))
          .addField(new fieldObject().setType("SFFloat").setName("crossSectionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of crossSection"))
          .addField(new fieldObject().setType("SFColor").setName("extrusionColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("diffuseColor of extrusion hull"))
          .addField(new fieldObject().setType("SFFloat").setName("extrusionTransparency").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of extrusion hull"))
          .addField(new fieldObject().setType("SFNode").setName("extrusionImageTexture").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Image to apply to Extrusion"))
          .addField(new fieldObject().setType("SFNode").setName("extrusionTextureTransform").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("TextureTransform coordinates of image applied to Extrusion"))
          .addField(new fieldObject().setType("MFVec2f").setName("set_crossSection").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFVec3f").setName("set_spine").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFVec2f").setName("set_scale").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("MFRotation").setName("set_orientation").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setAppinfo("Extrusion field"))
          .addField(new fieldObject().setType("SFBool").setName("traceEnabled").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether to provide initialization trace statements showing node construction")))
        .addComments(new CommentsBlock("===================="))
        .addComments(new CommentsBlock("Example instance adapted from Figure15.12Torus.x3d"))
        .addComments(new CommentsBlock("https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d"))
        .addChild(new ViewpointObject().setDescription("Torus crossSections, spine and hull").setOrientation(new float[] {-0.351f,0.926f,0.14f,0.81f}).setPosition(new float[] {10f,5f,10f}))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("ExtrusionCrossSection"))
        .addChild(new TransformObject().setScale(new float[] {4f,4f,4f})
          .addChild(new InlineObject().setDEF("CoordinateAxes").setUrl(new MFStringObject(new MFString1().getArray())))))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("name").setValue("Torus"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("crossSection").setValue("0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("spine").setValue("2 0 0 1.85 0 0.77 1.41 0 1.41 0.77 0 1.85 0 0 2 -0.77 0 1.85 -1.41 0 1.41 -1.85 0 0.77 -2 0 0 -1.85 0 -0.77 -1.41 0 -1.41 -0.77 0 -1.85 0 0 -2 0.77 0 -1.85 1.41 0 -1.41 1.85 0 -0.77 2 0 0"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("beginCap").setValue("false"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("endCap").setValue("false"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("creaseAngle").setValue("1.57"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("spineColor").setValue("1 1 1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("crossSectionColor").setValue("0.8 0.8 0"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("crossSectionTransparency").setValue("0.1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("extrusionColor").setValue("1 0 1"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("extrusionTransparency").setValue("0.8"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("traceEnabled").setValue("false"));
    return X3D0;
    }
protected class MFString0 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"});
  }
}
protected class MFString1 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"});
  }
}
}

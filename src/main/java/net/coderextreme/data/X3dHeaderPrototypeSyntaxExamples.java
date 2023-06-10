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
public class X3dHeaderPrototypeSyntaxExamples {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    X3D model = new X3dHeaderPrototypeSyntaxExamples().initialize();
    System.out.print(model.validationReport().trim());
    model.toFileJSON("../data/X3dHeaderPrototypeSyntaxExamples.new.json");
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
      X3D X3D0 =  new X3D().setProfile("Immersive").setVersion("3.3")
      .setHead(new head()
        .addComponent(new component().setName("Geospatial").setLevel(1))
        .addComponent(new component().setName("NURBS").setLevel(2))
        .addComponent(new component().setName("Core").setLevel(2))
        .addComponent(new component().setName("Navigation").setLevel(1))
        .addComponent(new component().setName("Text").setLevel(1))
        .addMeta(new meta().setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta(new meta().setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
        .addMeta(new meta().setName("created").setContent("14 October 2002"))
        .addMeta(new meta().setName("modified").setContent("27 May 2017"))
        .addMeta(new meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new meta().setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
        .addMeta(new meta().setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
        .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new meta().setName("license").setContent("../license.html")))
      .setScene(new Scene()
        .addChild(new ExternProtoDeclare().setName("ViewPositionOrientation").setUrl(new MFString0().getArray())
          .addField(new field().setType("SFBool").setName("enabled").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setType("SFBool").setName("traceEnabled").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setType("SFBool").setName("set_traceEnabled").setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setType("SFVec3f").setName("position_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("SFRotation").setName("orientation_changed").setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setType("MFString").setName("outputViewpointString").setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
        .addChild(new ProtoDeclare().setName("NewWorldInfoNode")
          .setProtoBody(new ProtoBody()
            .addChild(new WorldInfo().setDEF("ExamplePrototypeBody"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("NewWorldInfoNode"))
        .addChild(new ProtoDeclare().setName("EmissiveMaterial")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFColor").setName("onlyColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0")))
          .setProtoBody(new ProtoBody()
            .addComments("Override default diffuseColor value 0.8 0.8 0.8")
            .addChild(new Material().setDiffuseColor(new float[] {0f,0f,0f})
              .addComments("Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("emissiveColor").setProtoField("onlyColor"))))))
        .addChild(new ProtoDeclare().setName("ShiftGroupUp2m")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("MFNode").setName("children").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
              .addChild(new Group().setDEF("DefaultNodeValue").setBboxSize(new float[] {2f,2f,2f})
                .addComments("Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\""))))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setTranslation(new float[] {0f,2f,0f})
              .addChild(new Group()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("children").setProtoField("children")))))))
        .addChild(ProtoInstance1 = new ProtoInstance().setName("ShiftGroupUp2m"))
        .addComments("====================")
        .addChild(new Viewpoint().setDEF("ExampleSingleElement").setDescription("Hello syntax"))
        .addChild(new Group().setDEF("ExampleChildElement")
          .addChild(new Shape()
            .setGeometry(new Box())
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(new float[] {0.6f,0.4f,0.2f})))))
        .addChild(new Transform().setDEF("TransformExampleUSE").setRotation(new float[] {0f,1f,0f,0.78f}).setTranslation(new float[] {0f,2.5f,0f})
          .addChild(new Group().setUSE("ExampleChildElement")))
        .addChild(new Collision()
          .setProxy(new Shape()
            .addComments("note that Collision proxy Shape is not rendered")
            .setGeometry(new Sphere())
            .setAppearance(new Appearance()
              .setMaterial(new Material())))
          .addChild(new Group().setUSE("ExampleChildElement")))
        .addChild(new Transform().setTranslation(new float[] {0f,-2.5f,0f})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(ProtoInstance2 = new ProtoInstance().setName("EmissiveMaterial")))
            .setGeometry(new Text().setString(new MFString1().getArray())
              .setFontStyle(new FontStyle().setJustify(new MFString2().getArray()).setSize(0.6000f)))))
        .addChild(ProtoInstance3 = new ProtoInstance().setName("ViewPositionOrientation"))
        .addChild(new TimeSensor().setDEF("Clock").setCycleInterval(4d).setLoop(true))
        .addChild(new OrientationInterpolator().setDEF("Spinner").setKey(new MFFloat3().getArray()).setKeyValue(new MFRotation4().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("Spinner"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("Spinner").setToField("rotation").setToNode("TransformExampleUSE"))
        .addChild(new Inline().setDEF("someInline").setUrl(new MFString5().getArray()))
        .addChild(new IMPORT().setAS("someInlineRoot").setImportedDEF("someName").setInlineDEF("someInline"))
        .addChild(new PositionInterpolator().setDEF("StayInPlace").setKey(new MFFloat6().getArray()).setKeyValue(new MFVec3f7().getArray()))
        .addChild(new ROUTE().setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("StayInPlace"))
        .addChild(new ROUTE().setFromField("value_changed").setFromNode("StayInPlace").setToField("set_translation").setToNode("someInlineRoot")))      ;
ProtoInstance2
                .addFieldValue(new fieldValue().setName("onlyColor").setValue("0.2 0.6 0.6"));
ProtoInstance3
          .addFieldValue(new fieldValue().setName("enabled").setValue("true"));
    return X3D0;
    }
protected class MFString0 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"});
  }
}
protected class MFString1 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"});
  }
}
protected class MFString2 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFFloat3 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,0.5000f,1.0000f});
  }
}
protected class MFRotation4 {
  protected org.web3d.x3d.jsail.fields.MFRotation getArray() {
    return new org.web3d.x3d.jsail.fields.MFRotation(new float[] {0.0000f,1.0000f,0.0000f,0.0000f,0.0000f,1.0000f,0.0000f,3.1416f,0.0000f,1.0000f,0.0000f,6.2832f});
  }
}
protected class MFString5 {
  protected org.web3d.x3d.jsail.fields.MFString getArray() {
    return new org.web3d.x3d.jsail.fields.MFString(new java.lang.String[] {"someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"});
  }
}
protected class MFFloat6 {
  protected org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0.0000f,1.0000f});
  }
}
protected class MFVec3f7 {
  protected org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {0.0000f,0.0000f,0.0000f,0.0000f,0.0000f,0.0000f});
  }
}
}

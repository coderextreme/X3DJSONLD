import java from 'java';
import util from 'util';
import promisify from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
import autoclass from '../../../X3Dautoclass.mjs';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var ProtoInstance3 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.3")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("Geospatial").setLevel(1))
        .addComponent((new autoclass.component()).setName("NURBS").setLevel(2))
        .addComponent((new autoclass.component()).setName("Core").setLevel(2))
        .addComponent((new autoclass.component()).setName("Navigation").setLevel(1))
        .addComponent((new autoclass.component()).setName("Text").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("description").setContent("X3D scene header and prototype syntax examples. This example header indicates that the content is XML encoded, follows the Interactive Profile and explicitly lists additional necessary components. The X3D header may also contain additional semantic information. Used for specification EXAMPLE excerpts in 19776:1 XML Encoding."))
        .addMeta((new autoclass.meta()).setName("created").setContent("14 October 2002"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("27 May 2017"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("Don Brutzman"))
        .addMeta((new autoclass.meta()).setName("specificationSection").setContent("X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, 4.3 XML file syntax"))
        .addMeta((new autoclass.meta()).setName("specificationUrl").setContent("https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/concepts.html#XMLFileSyntax"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/X3dHeaderPrototypeSyntaxExamples.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta((new autoclass.meta()).setName("license").setContent("../license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.ExternProtoDeclare()).setName("ViewPositionOrientation").setUrl(java.newArray("java.lang.String", ["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"]))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("enabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFBOOL).setName("set_traceEnabled").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("position_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFROTATION).setName("orientation_changed").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
          .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFSTRING).setName("outputViewpointString").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY)))
        .addChild((new autoclass.ProtoDeclare()).setName("NewWorldInfoNode")
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.WorldInfo()).setDEF("ExamplePrototypeBody"))))
        .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("NewWorldInfoNode"))
        .addChild((new autoclass.ProtoDeclare()).setName("EmissiveMaterial")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("onlyColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0 0")))
          .setProtoBody((new autoclass.ProtoBody())
            .addComments((new autoclass.CommentsBlock("Override default diffuseColor value 0.8 0.8 0.8")))
            .addChild((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
              .addComments((new autoclass.CommentsBlock("Connect emissiveColor field of current node to onlyColor field of parent ProtoDeclare.")))
              .setIS((new autoclass.IS())
                .addConnect((new autoclass.connect()).setNodeField("emissiveColor").setProtoField("onlyColor"))))))
        .addChild((new autoclass.ProtoDeclare()).setName("ShiftGroupUp2m")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFNODE).setName("children").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)
              .addChild((new autoclass.Group()).setDEF("DefaultNodeValue").setBboxSize(java.newArray("float", [java.newFloat(2), java.newFloat(2), java.newFloat(2)]))
                .addComments((new autoclass.CommentsBlock("Authors need to override this node when creating the ProtoInstance fieldValue name=\"children\""))))))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2), java.newFloat(0)]))
              .addChild((new autoclass.Group())
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("children").setProtoField("children")))))))
        .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("ShiftGroupUp2m"))
        .addComments((new autoclass.CommentsBlock("====================")))
        .addChild((new autoclass.Viewpoint()).setDEF("ExampleSingleElement").setDescription("Hello syntax"))
        .addChild((new autoclass.Group()).setDEF("ExampleChildElement")
          .addChild((new autoclass.Shape())
            .setGeometry((new autoclass.Box()))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(java.newArray("float", [java.newFloat(0.6), java.newFloat(0.4), java.newFloat(0.2)]))))))
        .addChild((new autoclass.Transform()).setDEF("TransformExampleUSE").setRotation(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0.78)])).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(2.5), java.newFloat(0)]))
          .addChild((new autoclass.Group()).setUSE("ExampleChildElement")))
        .addChild((new autoclass.Collision())
          .setProxy((new autoclass.Shape())
            .addComments((new autoclass.CommentsBlock("note that Collision proxy Shape is not rendered")))
            .setGeometry((new autoclass.Sphere()))
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()))))
          .addChild((new autoclass.Group()).setUSE("ExampleChildElement")))
        .addChild((new autoclass.Transform()).setTranslation(java.newArray("float", [java.newFloat(0), java.newFloat(-2.5), java.newFloat(0)]))
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial(ProtoInstance2 = (new autoclass.ProtoInstance()).setName("EmissiveMaterial")))
            .setGeometry((new autoclass.Text()).setString(java.newArray("java.lang.String", ["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"]))
              .setFontStyle((new autoclass.FontStyle()).setJustify(java.newArray("java.lang.String", ["MIDDLE","MIDDLE"])).setSize(java.newFloat(0.6))))))
        .addChild(ProtoInstance3 = (new autoclass.ProtoInstance()).setName("ViewPositionOrientation"))
        .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(4).setLoop(true))
        .addChild((new autoclass.OrientationInterpolator()).setDEF("Spinner").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.14159), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(6.28318)])))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("Spinner"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("Spinner").setToField("rotation").setToNode("TransformExampleUSE"))
        .addChild((new autoclass.Inline()).setDEF("someInline").setUrl(java.newArray("java.lang.String", ["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"])))
        .addChild((new autoclass.IMPORT()).setAS("someInlineRoot").setImportedDEF("someName").setInlineDEF("someInline"))
        .addChild((new autoclass.PositionInterpolator()).setDEF("StayInPlace").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(0)])))
        .addChild((new autoclass.ROUTE()).setFromField("fraction_changed").setFromNode("Clock").setToField("set_fraction").setToNode("StayInPlace"))
        .addChild((new autoclass.ROUTE()).setFromField("value_changed").setFromNode("StayInPlace").setToField("set_translation").setToNode("someInlineRoot")))      ;
ProtoInstance2
                .addFieldValue((new autoclass.fieldValue()).setName("onlyColor").setValue("0.2 0.6 0.6"));
ProtoInstance3
          .addFieldValue((new autoclass.fieldValue()).setName("enabled").setValue("true"));
    X3D0.toFileX3D("../data/X3dHeaderPrototypeSyntaxExamples.new.x3d");
    process.exit(0);

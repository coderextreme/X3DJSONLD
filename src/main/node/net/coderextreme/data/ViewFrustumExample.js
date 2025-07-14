import java from 'java';
import util from 'util';
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: util.promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("title").setContent("ViewFrustumExample.x3d"))
        .addMeta(new autoclass.meta().setName("description").setContent("Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype."))
        .addMeta(new autoclass.meta().setName("creator").setContent("Don Brutzman"))
        .addMeta(new autoclass.meta().setName("translated").setContent("16 August 2008"))
        .addMeta(new autoclass.meta().setName("modified").setContent("20 October 2019"))
        .addMeta(new autoclass.meta().setName("reference").setContent("ViewFrustumPrototype.x3d"))
        .addMeta(new autoclass.meta().setName("drawing").setContent("ViewFrustumComputation.png"))
        .addMeta(new autoclass.meta().setName("Image").setContent("ViewFrustumOverheadView.png"))
        .addMeta(new autoclass.meta().setName("Image").setContent("ViewFrustumObliqueView.png"))
        .addMeta(new autoclass.meta().setName("Image").setContent("ViewpointCalculator.png"))
        .addMeta(new autoclass.meta().setName("Image").setContent("ViewpointCalculatorComposed.png"))
        .addMeta(new autoclass.meta().setName("subject").setContent("view culling frustum"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new autoclass.meta().setName("license").setContent("../license.html")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.WorldInfo().setTitle("ViewFrustumExample.x3d"))
        .addChild(new autoclass.Viewpoint().setDescription("ViewFrustum from above, looking down").setOrientation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(40), java.newFloat(0)])))
        .addChild(new autoclass.Viewpoint().setDescription("ViewFrustum from point of view"))
        .addChild(new autoclass.Viewpoint().setDescription("ViewFrustum behind point of view").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(15)])))
        .addChild(new autoclass.Viewpoint().setDescription("ViewFrustum oblique side view").setOrientation(java.newArray("float", [java.newFloat(0.8005), java.newFloat(0.5926), java.newFloat(0.0898), java.newFloat(-0.3743)])).setPosition(java.newArray("float", [java.newFloat(-5), java.newFloat(5), java.newFloat(20)])))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["EXAMINE","FLY","ANY"])))
        .addChild(new autoclass.ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(java.newArray("java.lang.String", ["ViewFrustumPrototype.x3d#ViewFrustum"]))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("ViewpointNode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("NavigationInfoNode").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("visible").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("lineColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("frustumColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("transparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("aspectRatio").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
          .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("trace").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
        .addComments((new autoclass.CommentsBlock("Example use")))
        .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("ViewFrustum"))
        .addComments((new autoclass.CommentsBlock("Visualization assists")))
        .addChild(new autoclass.Inline().setDEF("GridXZ").setUrl(java.newArray("java.lang.String", ["GridXZ_20x20Fixed.x3d"])))
        .addChild(new autoclass.Transform().setScale(java.newArray("float", [java.newFloat(5), java.newFloat(5), java.newFloat(5)]))
          .addChild(new autoclass.Inline().setDEF("CoordinateAxes").setUrl(java.newArray("java.lang.String", ["CoordinateAxes.x3d"])))))      ;
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("ViewpointNode")
            .addComments((new autoclass.CommentsBlock("prefer empty description to prevent entry in player's ViewpointList")))
            .addChild(new autoclass.Viewpoint().setDescription("ViewFrustum ViewpointNode")));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("NavigationInfoNode")
            .addChild(new autoclass.NavigationInfo().setVisibilityLimit(java.newFloat(15))));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("visible").setValue("true"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("lineColor").setValue("0.9 0.9 0.9"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("frustumColor").setValue("0.8 0.8 0.8"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance0
          .addFieldValue(new autoclass.fieldValue().setName("trace").setValue("true"));
    X3D0.toFileX3D("../data/ViewFrustumExample.new.node.x3d");
    X3D0.toFileJSON("../data/ViewFrustumExample.new.node.json");
    process.exit(0);

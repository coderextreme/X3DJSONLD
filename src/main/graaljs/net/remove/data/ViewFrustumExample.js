load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
ConfigurationProperties.setDeleteIntermediateFiles(false);
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
function doubleToFloat(d) {
    if (Float32Array)
	return new Float32Array(d);
}
var ProtoInstance0 = null;
      var X3D0 =  new X3D().setProfile("Immersive").setVersion("4.0")
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
        .addChild(new Viewpoint().setDescription("ViewFrustum from above, looking down").setOrientation(Java.to(doubleToFloat([1,0,0,-1.57]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([0,40,0]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("ViewFrustum from point of view"))
        .addChild(new Viewpoint().setDescription("ViewFrustum behind point of view").setPosition(Java.to(doubleToFloat([0,0,15]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("ViewFrustum oblique side view").setOrientation(Java.to(doubleToFloat([0.8005,0.5926,0.0898,-0.3743]), Java.type("float[]"))).setPosition(Java.to(doubleToFloat([-5,5,20]), Java.type("float[]"))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new ExternProtoDeclare().setName("ViewFrustum").setAppinfo("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes").setUrl(Java.to(["ViewFrustumPrototype.x3d#ViewFrustum"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFNODE).setName("ViewpointNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert Viewpoint DEF or USE node for view of interest"))
          .addField(new field().setType(field.TYPE_SFNODE).setName("NavigationInfoNode").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("required: insert NavigationInfo DEF or USE node of interest"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("visible").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("whether or not frustum geometry is rendered"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setName("frustumColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("transparency").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency of ViewFrustum hull geometry, default value 0.5"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setName("aspectRatio").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("assumed ratio height/width, default value 0.75"))
          .addField(new field().setType(field.TYPE_SFBOOL).setName("trace").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("debug support, default false")))
        .addComments(new CommentsBlock("Example use"))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("ViewFrustum"))
        .addComments(new CommentsBlock("Visualization assists"))
        .addChild(new Inline().setDEF("GridXZ").setUrl(Java.to(["GridXZ_20x20Fixed.x3d"], Java.type("java.lang.String[]"))))
        .addChild(new Transform().setScale(Java.to(doubleToFloat([5,5,5]), Java.type("float[]")))
          .addChild(new Inline().setDEF("CoordinateAxes").setUrl(Java.to(["CoordinateAxes.x3d"], Java.type("java.lang.String[]"))))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("ViewpointNode")
            .addComments(new CommentsBlock("prefer empty description to prevent entry in player's ViewpointList"))
            .addChild(new Viewpoint().setDescription("ViewFrustum ViewpointNode")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("NavigationInfoNode")
            .addChild(new NavigationInfo().setVisibilityLimit(15)));
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
    X3D0.toFileX3D("../data/ViewFrustumExample.new.graal.x3d");
    X3D0.toFileJSON("../data/ViewFrustumExample.new.graal.json");

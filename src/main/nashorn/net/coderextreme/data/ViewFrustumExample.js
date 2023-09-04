load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
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
        .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")))
      .setScene(new Scene()
        .addChild(new ExternProtoDeclare().setName("ViewFrustum").setUrl(Java.to(["ViewFrustumPrototype.x3d#ViewFrustum"], Java.type("java.lang.String[]")))
          .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("ViewpointNode"))
          .addField(new field().setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("NavigationInfoNode"))
          .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("visible"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("lineColor"))
          .addField(new field().setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("frustumColor"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("transparency"))
          .addField(new field().setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setName("aspectRatio"))
          .addField(new field().setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setName("trace")))
        .addChild(new WorldInfo().setTitle("ViewFrustumExample.x3d"))
        .addChild(new Viewpoint().setDescription("ViewFrustum from above, looking down").setPosition(Java.to([0,40,0], Java.type("double[]"))).setOrientation(Java.to([1,0,0,-1.57], Java.type("double[]"))))
        .addChild(new Viewpoint().setDescription("ViewFrustum from point of view"))
        .addChild(new Viewpoint().setDescription("ViewFrustum behind point of view").setPosition(Java.to([0,0,15], Java.type("double[]"))))
        .addChild(new Viewpoint().setDescription("ViewFrustum oblique side view").setPosition(Java.to([-5,5,20], Java.type("double[]"))).setOrientation(Java.to([0.8005,0.5926,0.0898,-0.3743], Java.type("double[]"))))
        .addChild(new NavigationInfo().setType(Java.to(["EXAMINE","FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(ProtoInstance0 = new ProtoInstance().setName("ViewFrustum"))
        .addChild(new Inline().setDEF("GridXZ").setGlobal(true).setUrl(Java.to(["GridXZ_20x20Fixed.x3d"], Java.type("java.lang.String[]"))))
        .addChild(new Transform().setScale(Java.to([5,5,5], Java.type("double[]")))
          .addChild(new Inline().setDEF("CoordinateAxes").setGlobal(true).setUrl(Java.to(["CoordinateAxes.x3d"], Java.type("java.lang.String[]"))))))      ;
ProtoInstance0
          .addFieldValue(new fieldValue().setName("ViewpointNode")
            .addChild(new Viewpoint().setDEF("_1").setDescription("ViewFrustum ViewpointNode")));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("NavigationInfoNode")
            .addChild(new NavigationInfo().setDEF("_2").setVisibilityLimit(15)));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("visible").setValue("true"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("lineColor").setValue("0.9 0.9 0.9"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("frustumColor").setValue("0.8 0.8 0.8"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("aspectRatio").setValue("0.75"));
ProtoInstance0
          .addFieldValue(new fieldValue().setName("trace").setValue("true"));
    X3D0.toFileJSON("../data/ViewFrustumExample.new.graal.json");

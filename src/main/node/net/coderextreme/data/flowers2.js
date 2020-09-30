var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('../../../X3Dautoclass');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("3.0")
      .setHead((new autoclass.head())
        .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
        .addMeta((new autoclass.meta()).setName("title").setContent("flowers2.x3d"))
        .addMeta((new autoclass.meta()).setName("creator").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("transcriber").setContent("John Carlson"))
        .addMeta((new autoclass.meta()).setName("created").setContent("23 January 2005"))
        .addMeta((new autoclass.meta()).setName("modified").setContent("21 March 2018"))
        .addMeta((new autoclass.meta()).setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta((new autoclass.meta()).setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/data/flowers2.x3d"))
        .addMeta((new autoclass.meta()).setName("generator").setContent("manually written"))
        .addMeta((new autoclass.meta()).setName("license").setContent("http://www.web3d.org/x3d/content/examples/license.html")))
      .setScene((new autoclass.Scene())
        .addChild((new autoclass.NavigationInfo()))
        .addChild((new autoclass.Viewpoint()).setDescription("Two mathematical orbitals").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChild((new autoclass.Group()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
          .addChild((new autoclass.DirectionalLight()).setDirection(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
          .addChild((new autoclass.ProtoDeclare()).setName("orbit")
            .setProtoInterface((new autoclass.ProtoInterface())
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFCOLOR).setName("specularColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("transparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody((new autoclass.ProtoBody())
              .addChild((new autoclass.Group()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
                .addChild((new autoclass.TimeSensor()).setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild((new autoclass.OrientationInterpolator()).setDEF("OrbitPath").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.14), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(6.28)])))
                .addChild((new autoclass.Transform()).setDEF("OrbitTransform").setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("translation")))
                  .addChild((new autoclass.Shape()).setBboxCenter(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)])).setBboxSize(java.newArray("float", [java.newFloat(-1), java.newFloat(-1), java.newFloat(-1)]))
                    .setAppearance((new autoclass.Appearance())
                      .setMaterial((new autoclass.Material())
                        .setIS((new autoclass.IS())
                          .addConnect((new autoclass.connect()).setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect((new autoclass.connect()).setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect((new autoclass.connect()).setNodeField("transparency").setProtoField("transparency")))))
                    .addComments((new autoclass.CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>")))
                    .setGeometry((new autoclass.IndexedFaceSet()).setCcw(false).setConvex(false).setCoordIndex(java.newArray("int", [0,1,2,-1])).setDEF("Orbit")
                      .setCoord((new autoclass.Coordinate()).setDEF("OrbitCoordinates").setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("coordIndex"))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild((new autoclass.ROUTE()).setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild((new autoclass.ROUTE()).setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction"))
                .addX3DScript((new autoclass.X3DScript()).setDEF("OrbitScript")
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFVEC3F).setName("coordinates").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_MFINT32).setName("coordIndexes").setAccessType(autoclass.field.ACCESSTYPE_OUTPUTONLY))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("e").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("f").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("g").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFFLOAT).setName("h").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField((new autoclass.field()).setType(autoclass.field.TYPE_SFINT32).setName("resolution").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))))))
          .addChild(ProtoInstance0 = (new autoclass.ProtoInstance()).setName("orbit"))
          .addChild(ProtoInstance1 = (new autoclass.ProtoInstance()).setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue((new autoclass.fieldValue()).setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../data/flowers2.new.x3d");

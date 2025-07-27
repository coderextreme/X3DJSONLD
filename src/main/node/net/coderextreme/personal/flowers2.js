import java from 'node-java';
import util from 'util';
import autoclass from '../../../X3Dautoclass.js';
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
ConfigurationProperties.setStripDefaultAttributes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Immersive").setVersion("4.0")
      .setHead(new autoclass.head()
        .addComponent(new autoclass.component().setName("Scripting").setLevel(1))
        .addMeta(new autoclass.meta().setName("title").setContent("flowers2.x3d"))
        .addMeta(new autoclass.meta().setName("creator").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("transcriber").setContent("John Carlson"))
        .addMeta(new autoclass.meta().setName("created").setContent("23 January 2005"))
        .addMeta(new autoclass.meta().setName("modified").setContent("21 March 2018"))
        .addMeta(new autoclass.meta().setName("description").setContent("2 random mathematical roses in spherical dimensions. rho = a + b * cos(c * theta) * cos(d * phi)"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/src/main/personal/flowers2.x3d"))
        .addMeta(new autoclass.meta().setName("generator").setContent("manually written"))
        .addMeta(new autoclass.meta().setName("license").setContent("https://coderextreme.net/X3DJSONLD/LICENSE")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.NavigationInfo())
        .addChild(new autoclass.Viewpoint().setDescription("Two mathematical orbitals").setPosition(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(50)])))
        .addChild(new autoclass.Group()
          .addChild(new autoclass.DirectionalLight().setDirection(java.newArray("float", [java.newFloat(1), java.newFloat(1), java.newFloat(1)])))
          .addChild(new autoclass.ProtoDeclare().setName("orbit")
            .setProtoInterface(new autoclass.ProtoInterface()
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("-8 0 0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("diffuseColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("specularColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1 0.5 0"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("transparency").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.75")))
            .setProtoBody(new autoclass.ProtoBody()
              .addChild(new autoclass.Group()
                .addChild(new autoclass.TimeSensor().setDEF("Clock").setCycleInterval(16).setLoop(true))
                .addChild(new autoclass.OrientationInterpolator().setDEF("OrbitPath").setKey(java.newArray("float", [java.newFloat(0), java.newFloat(0.5), java.newFloat(1)])).setKeyValue(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(3.14), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(6.28)])))
                .addChild(new autoclass.Transform().setDEF("OrbitTransform")
                  .setIS(new autoclass.IS()
                    .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("translation")))
                  .addChild(new autoclass.Shape()
                    .setAppearance(new autoclass.Appearance()
                      .setMaterial(new autoclass.Material()
                        .setIS(new autoclass.IS()
                          .addConnect(new autoclass.connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))
                          .addConnect(new autoclass.connect().setNodeField("specularColor").setProtoField("specularColor"))
                          .addConnect(new autoclass.connect().setNodeField("transparency").setProtoField("transparency")))))
                    .addComments((new autoclass.CommentsBlock("<IndexedFaceSet DEF=\"Orbit\" creaseAngle=\"0\"> <Coordinate DEF=\"OrbitCoordinates\"/> </IndexedFaceSet>")))
                    .setGeometry(new autoclass.IndexedFaceSet().setCcw(false).setConvex(false).setCoordIndex(java.newArray("int", [0,1,2,-1])).setDEF("Orbit")
                      .setCoord(new autoclass.Coordinate().setDEF("OrbitCoordinates").setPoint(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)]))))))
                .addChild(new autoclass.Script().setDEF("OrbitScript")
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("set_fraction").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_MFVEC3F).setName("coordinates").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_MFINT32).setName("coordIndexes").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("e").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("f").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("g").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("h").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("5"))
                  .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("resolution").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("50"))
                  .setSourceCode("ecmascript:\n"+
"\n"+
"			function initialize() {\n"+
"			     generateCoordinates();\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution-1; i++) {\n"+
"				for (var j = 0; j < resolution-1; j++) {\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = i*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j+1;\n"+
"				     coordIndexes[arrIndex++] = (i+1)*resolution+j;\n"+
"				     coordIndexes[arrIndex++] = -1;\n"+
"				}\n"+
"			    }\n"+
"			}\n"+
"\n"+
"			function generateCoordinates() {\n"+
"			     var theta = 0.0;\n"+
"			     var phi = 0.0;\n"+
"			     var delta = (2 * 3.141592653) / (resolution-1);\n"+
"			     var arrIndex = 0;\n"+
"			     for (var i = 0; i < resolution; i++) {\n"+
"				for (var j = 0; j < resolution; j++) {\n"+
"					var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);\n"+
"					coordinates[arrIndex++] = new SFVec3f(\n"+
"						rho * Math.cos(phi) * Math.cos(theta),\n"+
"						rho * Math.cos(phi) * Math.sin(theta),\n"+
"						rho * Math.sin(phi)\n"+
"					);\n"+
"					theta += delta;\n"+
"				}\n"+
"				phi += delta;\n"+
"			     }\n"+
"			}\n"+
"\n"+
"			function set_fraction(fraction, eventTime) {\n"+
"				var choice = Math.floor(Math.random() * 4);\n"+
"				switch (choice) {\n"+
"				case 0:\n"+
"					e += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 1:\n"+
"					f += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 2:\n"+
"					g += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				case 3:\n"+
"					h += Math.floor(Math.random() * 2) * 2 - 1;\n"+
"					break;\n"+
"				}\n"+
"				if (e < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (f < 1) {\n"+
"					f = 10;\n"+
"				}\n"+
"				if (g < 1) {\n"+
"					g = 4;\n"+
"				}\n"+
"				if (h < 1) {\n"+
"					h = 4;\n"+
"				}\n"+
"				generateCoordinates();\n"+
"			}"))
                .addChild(new autoclass.ROUTE().setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
                .addChild(new autoclass.ROUTE().setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("point"))
                .addChild(new autoclass.ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitScript").setToField("set_fraction"))
                .addChild(new autoclass.ROUTE().setFromNode("OrbitPath").setFromField("value_changed").setToNode("OrbitTransform").setToField("rotation"))
                .addChild(new autoclass.ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("OrbitPath").setToField("set_fraction")))))
          .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("orbit"))
          .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("orbit"))))      ;
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-8 0 0"));
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("diffuseColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("specularColor").setValue("1 0.5 0"));
ProtoInstance0
            .addFieldValue(new autoclass.fieldValue().setName("transparency").setValue("0.75"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("8 0 0"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("diffuseColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("specularColor").setValue("0 0.5 1"));
ProtoInstance1
            .addFieldValue(new autoclass.fieldValue().setName("transparency").setValue("0.5"));
    X3D0.toFileX3D("../personal/flowers2.new.node.x3d");
    X3D0.toFileJSON("../personal/flowers2.new.node.json");
    process.exit(0);

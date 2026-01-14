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
var ProtoInstance2 = null;
var ProtoInstance3 = null;
var ProtoInstance4 = null;
var ProtoInstance5 = null;
var ProtoInstance6 = null;
var ProtoInstance7 = null;
var ProtoInstance8 = null;
var ProtoInstance9 = null;
var ProtoInstance10 = null;
var ProtoInstance11 = null;
var ProtoInstance12 = null;
var ProtoInstance13 = null;
var ProtoInstance14 = null;
var ProtoInstance15 = null;
var ProtoInstance16 = null;
var ProtoInstance17 = null;
var ProtoInstance18 = null;
var ProtoInstance19 = null;
var ProtoInstance20 = null;
var ProtoInstance21 = null;
var ProtoInstance22 = null;
var ProtoInstance23 = null;
var ProtoInstance24 = null;
var ProtoInstance25 = null;
var ProtoInstance26 = null;
var ProtoInstance27 = null;
var ProtoInstance28 = null;
var ProtoInstance29 = null;
var ProtoInstance30 = null;
var ProtoInstance31 = null;
var ProtoInstance32 = null;
var ProtoInstance33 = null;
var ProtoInstance34 = null;
var ProtoInstance35 = null;
var ProtoInstance36 = null;
var ProtoInstance37 = null;
var ProtoInstance38 = null;
var ProtoInstance39 = null;
var ProtoInstance40 = null;
var ProtoInstance41 = null;
      var X3D0 =  (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
      .setHead(new autoclass.head()
        .addMeta(new autoclass.meta().setName("comment").setContent("World of Titania"))
        .addMeta(new autoclass.meta().setName("created").setContent("Fri, 04 Sep 2015 10:19:01 GMT"))
        .addMeta(new autoclass.meta().setName("creator").setContent("Holger Seelig"))
        .addMeta(new autoclass.meta().setName("generator").setContent("Titania V3.0.4, https://titania.create3000.de"))
        .addMeta(new autoclass.meta().setName("identifier").setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"))
        .addMeta(new autoclass.meta().setName("modified").setContent("Tue, 25 Jul 2017 09:42:17 GMT"))
        .addMeta(new autoclass.meta().setName("title").setContent("Connectors")))
      .setScene(new autoclass.Scene()
        .addChild(new autoclass.ProtoDeclare().setName("RoundedRectangle2D")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("cornerRadius").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC2F).setName("size").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("2 2"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFBOOL).setName("solid").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("true")))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.IndexedFaceSet().setDEF("Geometry")
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("solid").setProtoField("solid")))
              .setCoord(new autoclass.Coordinate()))
            .addChild(new autoclass.Script().setDEF("RoundedRectangle2D").setDirectOutput(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("cornerDimension").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("10"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("cornerRadius").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC2F).setName("size").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("geometry").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new autoclass.IndexedFaceSet().setUSE("Geometry")))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("cornerRadius").setProtoField("cornerRadius"))
                .addConnect(new autoclass.connect().setNodeField("size").setProtoField("size")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	var point         = new SFVec3f (cornerRadius, 0, 0);\n"+
"	var startRotation = new SFRotation ();\n"+
"	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);\n"+
"	var corner        = new MFVec3f ();\n"+
"	var coordIndex    = new MFInt32 ();\n"+
"	var points        = new MFVec3f ();\n"+
"\n"+
"	for (var i = 0; i < cornerDimension * 4; ++ i)\n"+
"		coordIndex [coordIndex .length] = i;\n"+
"\n"+
"	geometry .coordIndex = coordIndex;\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++i)\n"+
"		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = corner [i] .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);\n"+
"	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);\n"+
"\n"+
"	for (var i = 0; i < cornerDimension; ++ i)\n"+
"		points [points .length] = rotation .multVec (corner [i]) .add (translation);\n"+
"\n"+
"	geometry .coord .point = points;\n"+
"}"))))
        .addChild(new autoclass.ProtoDeclare().setName("Widget")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("fillColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.1 0.1 0.1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("lineColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.4 0.4 0.4"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("linewidthScaleFactor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("geometry").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Transform().setDEF("Shape")
              .addChild(new autoclass.Shape()
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("geometry").setProtoField("geometry")))
                .setAppearance(new autoclass.Appearance()
                  .setMaterial(new autoclass.Material()
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("diffuseColor").setProtoField("fillColor"))))))
              .addChild(new autoclass.Shape()
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("geometry").setProtoField("geometry")))
                .setAppearance(new autoclass.Appearance()
                  .setFillProperties(new autoclass.FillProperties().setFilled(false).setHatched(false))
                  .setLineProperties(new autoclass.LineProperties()
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
                  .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                    .setIS(new autoclass.IS()
                      .addConnect(new autoclass.connect().setNodeField("emissiveColor").setProtoField("lineColor")))))))))
        .addChild(new autoclass.ProtoDeclare().setName("Node")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Group()
              .addChild(new autoclass.PlaneSensor().setDEF("PlaneSensor"))
              .addChild(new autoclass.Transform().setDEF("Node")
                .setIS(new autoclass.IS()
                  .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("translation")))
                .addChild(ProtoInstance0 = new autoclass.ProtoInstance().setName("Widget"))
                .addChild(new autoclass.Transform().setDEF("Input").setTranslation(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(0)]))
                  .addChild(ProtoInstance2 = new autoclass.ProtoInstance().setName("Widget")))
                .addChild(new autoclass.Transform().setDEF("Output").setTranslation(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0)]))
                  .addChild(ProtoInstance3 = new autoclass.ProtoInstance().setName("Widget")))))
            .addChild(new autoclass.Script().setDirectOutput(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("sensor").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new autoclass.PlaneSensor().setUSE("PlaneSensor")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("transform").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new autoclass.Transform().setUSE("Node")))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("translation").setProtoField("translation")))
              .setSourceCode("ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}"))
            .addChild(new autoclass.ROUTE().setFromNode("PlaneSensor").setFromField("translation_changed").setToNode("Node").setToField("set_translation"))))
        .addChild(new autoclass.ProtoDeclare().setName("Route")
          .setProtoInterface(new autoclass.ProtoInterface()
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFCOLOR).setName("lineColor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("0.43 0.43 0.98"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFFLOAT).setName("linewidthScaleFactor").setAccessType(autoclass.field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("output").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("input").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new autoclass.ProtoBody()
            .addChild(new autoclass.Shape()
              .setAppearance(new autoclass.Appearance()
                .setLineProperties(new autoclass.LineProperties()
                  .setIS(new autoclass.IS()
                    .addConnect(new autoclass.connect().setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
                .setMaterial(new autoclass.Material().setDiffuseColor(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(0)]))
                  .setIS(new autoclass.IS()
                    .addConnect(new autoclass.connect().setNodeField("emissiveColor").setProtoField("lineColor")))))
              .setGeometry(new autoclass.LineSet().setDEF("Geometry_1").setVertexCount(java.newArray("int", [2]))
                .setCoord(new autoclass.Coordinate().setPoint(java.newArray("float", [java.newFloat(-1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0)])))))
            .addChild(new autoclass.Script().setDEF("Route").setDirectOutput(true)
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFVEC3F).setName("set_translation").setAccessType(autoclass.field.ACCESSTYPE_INPUTONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFINT32).setName("routeDimension").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY).setValue("21"))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("output").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("input").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("geometry").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new autoclass.LineSet().setUSE("Geometry_1")))
              .addField(new autoclass.field().setType(autoclass.field.TYPE_SFNODE).setName("self").setAccessType(autoclass.field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new autoclass.Script().setUSE("Route")))
              .setIS(new autoclass.IS()
                .addConnect(new autoclass.connect().setNodeField("output").setProtoField("output"))
                .addConnect(new autoclass.connect().setNodeField("input").setProtoField("input")))
              .setSourceCode("ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .addRoute (output, 'translation_changed', self, 'set_translation');\n"+
"	Browser .addRoute (input,  'translation_changed', self, 'set_translation');\n"+
"\n"+
"	set_translation ();\n"+
"}\n"+
"\n"+
"function set_translation ()\n"+
"{\n"+
"	geometry .vertexCount [0] = routeDimension;\n"+
"\n"+
"	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));\n"+
"	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));\n"+
"\n"+
"	var w = inPoint .x - outPoint .x;\n"+
"	var h = outPoint .y - inPoint .y;\n"+
"\n"+
"	for (var i = 0; i < routeDimension; ++ i)\n"+
"	{\n"+
"		var t = i / (routeDimension - 1);\n"+
"		var y = h / 2 * (Math .cos (t * Math .PI) - 1);\n"+
"\n"+
"		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));\n"+
"	}\n"+
"}"))))
        .addChild(new autoclass.NavigationInfo().setType(java.newArray("java.lang.String", ["FLY","ANY"])))
        .addChild(new autoclass.Background().setSkyColor(java.newArray("float", [java.newFloat(0.2), java.newFloat(0.2), java.newFloat(0.2)])))
        .addChild(new autoclass.OrthoViewpoint().setDescription("OthoViewpoint").setPosition(java.newArray("float", [java.newFloat(-3.13496), java.newFloat(-4.19776), java.newFloat(10)])).setCenterOfRotation(java.newArray("float", [java.newFloat(-3.13496), java.newFloat(-4.19776), java.newFloat(0)])).setFieldOfView(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(10), java.newFloat(10)])))
        .addChild(new autoclass.Viewpoint().setDescription("Viewpoint"))
        .addChild(new autoclass.Transform().setDEF("Connectors")
          .addChild(ProtoInstance4 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance7 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance10 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance13 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance16 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance19 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance22 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance25 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance28 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance31 = new autoclass.ProtoInstance().setName("Route"))
          .addChild(ProtoInstance34 = new autoclass.ProtoInstance().setName("Node").setUSE("N1"))
          .addChild(ProtoInstance35 = new autoclass.ProtoInstance().setName("Node").setUSE("N2"))
          .addChild(ProtoInstance36 = new autoclass.ProtoInstance().setName("Node").setUSE("N3"))
          .addChild(ProtoInstance37 = new autoclass.ProtoInstance().setName("Node").setUSE("N4"))
          .addChild(ProtoInstance38 = new autoclass.ProtoInstance().setName("Node").setUSE("N5"))
          .addChild(ProtoInstance39 = new autoclass.ProtoInstance().setName("Node").setUSE("N6"))
          .addChild(ProtoInstance40 = new autoclass.ProtoInstance().setName("Node").setUSE("N7"))
          .addChild(ProtoInstance41 = new autoclass.ProtoInstance().setName("Node").setUSE("N8"))))      ;
ProtoInstance0
                  .addFieldValue(new autoclass.fieldValue().setName("geometry")
                    .addChild(ProtoInstance1 = new autoclass.ProtoInstance().setName("RoundedRectangle2D")));
ProtoInstance1
                      .addFieldValue(new autoclass.fieldValue().setName("cornerRadius").setValue("0.12"));
ProtoInstance1
                      .addFieldValue(new autoclass.fieldValue().setName("size").setValue("2 1"));
ProtoInstance2
                    .addFieldValue(new autoclass.fieldValue().setName("lineColor").setValue("0.72 0.14 0.23"));
ProtoInstance2
                    .addFieldValue(new autoclass.fieldValue().setName("geometry")
                      .addChild(new autoclass.Disk2D().setDEF("Connector").setOuterRadius(java.newFloat(0.2))));
ProtoInstance3
                    .addFieldValue(new autoclass.fieldValue().setName("lineColor").setValue("0.44 0.5 0.72"));
ProtoInstance3
                    .addFieldValue(new autoclass.fieldValue().setName("geometry")
                      .addChild(new autoclass.Disk2D().setUSE("Connector")));
ProtoInstance4
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance5 = new autoclass.ProtoInstance().setName("Node").setDEF("N1")));
ProtoInstance4
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance6 = new autoclass.ProtoInstance().setName("Node").setDEF("N2")));
ProtoInstance5
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-3.98323 2.88948 0"));
ProtoInstance6
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-0.0890862 2.96049 0"));
ProtoInstance7
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance8 = new autoclass.ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance7
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance9 = new autoclass.ProtoInstance().setName("Node").setDEF("N3")));
ProtoInstance9
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-0.104169 1.16371 0"));
ProtoInstance10
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance11 = new autoclass.ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance10
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance12 = new autoclass.ProtoInstance().setName("Node").setDEF("N4")));
ProtoInstance12
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-0.0998688 -0.40172 0"));
ProtoInstance13
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance14 = new autoclass.ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance13
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance15 = new autoclass.ProtoInstance().setName("Node").setDEF("N5")));
ProtoInstance15
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("-0.0998687 -2.14742 0"));
ProtoInstance16
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance17 = new autoclass.ProtoInstance().setName("Node").setUSE("N2")));
ProtoInstance16
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance18 = new autoclass.ProtoInstance().setName("Node").setDEF("N6")));
ProtoInstance18
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("3.55694 2.4116 0"));
ProtoInstance19
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance20 = new autoclass.ProtoInstance().setName("Node").setUSE("N3")));
ProtoInstance19
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance21 = new autoclass.ProtoInstance().setName("Node").setUSE("N6")));
ProtoInstance22
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance23 = new autoclass.ProtoInstance().setName("Node").setUSE("N4")));
ProtoInstance22
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance24 = new autoclass.ProtoInstance().setName("Node").setDEF("N7")));
ProtoInstance24
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("3.75106 -0.0794556 0"));
ProtoInstance25
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance26 = new autoclass.ProtoInstance().setName("Node").setUSE("N5")));
ProtoInstance25
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance27 = new autoclass.ProtoInstance().setName("Node").setUSE("N7")));
ProtoInstance28
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance29 = new autoclass.ProtoInstance().setName("Node").setUSE("N6")));
ProtoInstance28
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance30 = new autoclass.ProtoInstance().setName("Node").setDEF("N8")));
ProtoInstance30
                .addFieldValue(new autoclass.fieldValue().setName("translation").setValue("7.68077 1.21228 0"));
ProtoInstance31
            .addFieldValue(new autoclass.fieldValue().setName("output")
              .addChild(ProtoInstance32 = new autoclass.ProtoInstance().setName("Node").setUSE("N7")));
ProtoInstance31
            .addFieldValue(new autoclass.fieldValue().setName("input")
              .addChild(ProtoInstance33 = new autoclass.ProtoInstance().setName("Node").setUSE("N8")));
    X3D0.toFileX3D("../data/Connectors.new.node.x3d");
    X3D0.toFileJSON("../data/Connectors.new.node.x3dj");
    process.exit(0);

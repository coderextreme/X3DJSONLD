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
      var X3D0 =  new X3D().setProfile("Full").setVersion("4.0")
      .setHead(new head()
        .addMeta(new meta().setName("comment").setContent("World of Titania"))
        .addMeta(new meta().setName("created").setContent("Fri, 04 Sep 2015 10:19:01 GMT"))
        .addMeta(new meta().setName("creator").setContent("Holger Seelig"))
        .addMeta(new meta().setName("generator").setContent("Titania V3.0.4, http://titania.create3000.de"))
        .addMeta(new meta().setName("identifier").setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"))
        .addMeta(new meta().setName("modified").setContent("Tue, 25 Jul 2017 09:42:17 GMT"))
        .addMeta(new meta().setName("title").setContent("Connectors")))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName("RoundedRectangle2D")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("cornerRadius").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("1"))
            .addField(new field().setType(field.TYPE_SFVEC2F).setName("size").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("2 2"))
            .addField(new field().setType(field.TYPE_SFBOOL).setName("solid").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true")))
          .setProtoBody(new ProtoBody()
            .addChild(new IndexedFaceSet().setDEF("Geometry")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("solid").setProtoField("solid")))
              .setCoord(new Coordinate()))
            .addChild(new Script().setDEF("RoundedRectangle2D").setDirectOutput(true)
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("cornerDimension").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("10"))
              .addField(new field().setType(field.TYPE_SFFLOAT).setName("cornerRadius").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFVEC2F).setName("size").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("geometry").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new IndexedFaceSet().setUSE("Geometry")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("cornerRadius").setProtoField("cornerRadius"))
                .addConnect(new connect().setNodeField("size").setProtoField("size")))
              .setSourceCode(`ecmascript:

function initialize ()
{
	var point         = new SFVec3f (cornerRadius, 0, 0);
	var startRotation = new SFRotation ();
	var endRotation   = new SFRotation (0, 0, 1, Math .PI / 2);
	var corner        = new MFVec3f ();
	var coordIndex    = new MFInt32 ();
	var points        = new MFVec3f ();

	for (var i = 0; i < cornerDimension * 4; ++ i)
		coordIndex [coordIndex .length] = i;

	geometry .coordIndex = coordIndex;

	for (var i = 0; i < cornerDimension; ++i)
		corner [i] = startRotation .slerp (endRotation, i / (cornerDimension - 1)) .multVec (point);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, size .y / 2 - cornerRadius, 0);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = corner [i] .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, size .y / 2 - cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 0.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (-size .x / 2 + cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	var translation = new SFVec3f (size .x / 2 - cornerRadius, -size .y / 2 + cornerRadius, 0);
	var rotation    = new SFRotation (0, 0, 1, Math .PI * 1.5);

	for (var i = 0; i < cornerDimension; ++ i)
		points [points .length] = rotation .multVec (corner [i]) .add (translation);

	geometry .coord .point = points;
}`))))
        .addChild(new ProtoDeclare().setName("Widget")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("fillColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.1 0.1 0.1"))
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.4 0.4 0.4"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("linewidthScaleFactor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("1"))
            .addField(new field().setType(field.TYPE_SFNODE).setName("geometry").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF("Shape")
              .addChild(new Shape()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("geometry").setProtoField("geometry")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("diffuseColor").setProtoField("fillColor"))))))
              .addChild(new Shape()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("geometry").setProtoField("geometry")))
                .setAppearance(new Appearance()
                  .setFillProperties(new FillProperties().setFilled(false).setHatched(false))
                  .setLineProperties(new LineProperties()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
                  .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor")))))))))
        .addChild(new ProtoDeclare().setName("Node")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new PlaneSensor().setDEF("PlaneSensor"))
              .addChild(new Transform().setDEF("Node")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
                .addChild(ProtoInstance0 = new ProtoInstance().setName("Widget"))
                .addChild(new Transform().setDEF("Input").setTranslation(Java.to(doubleToFloat([-1,0,0]), Java.type("float[]")))
                  .addChild(ProtoInstance2 = new ProtoInstance().setName("Widget")))
                .addChild(new Transform().setDEF("Output").setTranslation(Java.to(doubleToFloat([1,0,0]), Java.type("float[]")))
                  .addChild(ProtoInstance3 = new ProtoInstance().setName("Widget")))))
            .addChild(new Script().setDirectOutput(true)
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("translation").setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType(field.TYPE_SFNODE).setName("sensor").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new PlaneSensor().setUSE("PlaneSensor")))
              .addField(new field().setType(field.TYPE_SFNODE).setName("transform").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Transform().setUSE("Node")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
              .setSourceCode(`ecmascript:
function initialize ()
{
	sensor .offset = translation;
}`))
            .addChild(new ROUTE().setFromNode("PlaneSensor").setFromField("translation_changed").setToNode("Node").setToField("set_translation"))))
        .addChild(new ProtoDeclare().setName("Route")
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType(field.TYPE_SFCOLOR).setName("lineColor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("0.43 0.43 0.98"))
            .addField(new field().setType(field.TYPE_SFFLOAT).setName("linewidthScaleFactor").setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("2"))
            .addField(new field().setType(field.TYPE_SFNODE).setName("output").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType(field.TYPE_SFNODE).setName("input").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setLineProperties(new LineProperties()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
                .setMaterial(new Material().setDiffuseColor(Java.to(doubleToFloat([0,0,0]), Java.type("float[]")))
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor")))))
              .setGeometry(new LineSet().setDEF("Geometry_1").setVertexCount(Java.to([2], Java.type("int[]")))
                .setCoord(new Coordinate().setPoint(Java.to(doubleToFloat([-1,0,0,1,0,0]), Java.type("float[]"))))))
            .addChild(new Script().setDEF("Route").setDirectOutput(true)
              .addField(new field().setType(field.TYPE_SFVEC3F).setName("set_translation").setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType(field.TYPE_SFINT32).setName("routeDimension").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("21"))
              .addField(new field().setType(field.TYPE_SFNODE).setName("output").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("input").setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType(field.TYPE_SFNODE).setName("geometry").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new LineSet().setUSE("Geometry_1")))
              .addField(new field().setType(field.TYPE_SFNODE).setName("self").setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Script().setUSE("Route")))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("output").setProtoField("output"))
                .addConnect(new connect().setNodeField("input").setProtoField("input")))
              .setSourceCode(`ecmascript:
function initialize ()
{
	Browser .addRoute (output, 'translation_changed', self, 'set_translation');
	Browser .addRoute (input,  'translation_changed', self, 'set_translation');

	set_translation ();
}

function set_translation ()
{
	geometry .vertexCount [0] = routeDimension;

	var outPoint = output .translation .add (new SFVec3f ( 1, 0, 0));
	var inPoint  = input  .translation .add (new SFVec3f (-1, 0, 0));

	var w = inPoint .x - outPoint .x;
	var h = outPoint .y - inPoint .y;

	for (var i = 0; i < routeDimension; ++ i)
	{
		var t = i / (routeDimension - 1);
		var y = h / 2 * (Math .cos (t * Math .PI) - 1);

		geometry .coord .point [i] = outPoint .add (new SFVec3f (t * w, y, 0));
	}
}`))))
        .addChild(new NavigationInfo().setType(Java.to(["FLY","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new Background().setSkyColor(Java.to(doubleToFloat([0.2,0.2,0.2]), Java.type("float[]"))))
        .addChild(new OrthoViewpoint().setDescription("OthoViewpoint").setPosition(Java.to(doubleToFloat([-3.13496,-4.19776,10]), Java.type("float[]"))).setCenterOfRotation(Java.to(doubleToFloat([-3.13496,-4.19776,0]), Java.type("float[]"))).setFieldOfView(Java.to(doubleToFloat([0,0,10,10]), Java.type("float[]"))))
        .addChild(new Viewpoint().setDescription("Viewpoint"))
        .addChild(new Transform().setDEF("Connectors")
          .addChild(ProtoInstance4 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance7 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance10 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance13 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance16 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance19 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance22 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance25 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance28 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance31 = new ProtoInstance().setName("Route"))
          .addChild(ProtoInstance34 = new ProtoInstance().setName("Node").setUSE("N1"))
          .addChild(ProtoInstance35 = new ProtoInstance().setName("Node").setUSE("N2"))
          .addChild(ProtoInstance36 = new ProtoInstance().setName("Node").setUSE("N3"))
          .addChild(ProtoInstance37 = new ProtoInstance().setName("Node").setUSE("N4"))
          .addChild(ProtoInstance38 = new ProtoInstance().setName("Node").setUSE("N5"))
          .addChild(ProtoInstance39 = new ProtoInstance().setName("Node").setUSE("N6"))
          .addChild(ProtoInstance40 = new ProtoInstance().setName("Node").setUSE("N7"))
          .addChild(ProtoInstance41 = new ProtoInstance().setName("Node").setUSE("N8"))))      ;
ProtoInstance0
                  .addFieldValue(new fieldValue().setName("geometry")
                    .addChild(ProtoInstance1 = new ProtoInstance().setName("RoundedRectangle2D")));
ProtoInstance1
                      .addFieldValue(new fieldValue().setName("cornerRadius").setValue("0.12"));
ProtoInstance1
                      .addFieldValue(new fieldValue().setName("size").setValue("2 1"));
ProtoInstance2
                    .addFieldValue(new fieldValue().setName("lineColor").setValue("0.72 0.14 0.23"));
ProtoInstance2
                    .addFieldValue(new fieldValue().setName("geometry")
                      .addChild(new Disk2D().setDEF("Connector").setOuterRadius(0.2)));
ProtoInstance3
                    .addFieldValue(new fieldValue().setName("lineColor").setValue("0.44 0.5 0.72"));
ProtoInstance3
                    .addFieldValue(new fieldValue().setName("geometry")
                      .addChild(new Disk2D().setUSE("Connector")));
ProtoInstance4
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance5 = new ProtoInstance().setName("Node").setDEF("N1")));
ProtoInstance4
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance6 = new ProtoInstance().setName("Node").setDEF("N2")));
ProtoInstance5
                .addFieldValue(new fieldValue().setName("translation").setValue("-3.98323 2.88948 0"));
ProtoInstance6
                .addFieldValue(new fieldValue().setName("translation").setValue("-0.0890862 2.96049 0"));
ProtoInstance7
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance8 = new ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance7
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance9 = new ProtoInstance().setName("Node").setDEF("N3")));
ProtoInstance9
                .addFieldValue(new fieldValue().setName("translation").setValue("-0.104169 1.16371 0"));
ProtoInstance10
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance11 = new ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance10
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance12 = new ProtoInstance().setName("Node").setDEF("N4")));
ProtoInstance12
                .addFieldValue(new fieldValue().setName("translation").setValue("-0.0998688 -0.40172 0"));
ProtoInstance13
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance14 = new ProtoInstance().setName("Node").setUSE("N1")));
ProtoInstance13
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance15 = new ProtoInstance().setName("Node").setDEF("N5")));
ProtoInstance15
                .addFieldValue(new fieldValue().setName("translation").setValue("-0.0998687 -2.14742 0"));
ProtoInstance16
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance17 = new ProtoInstance().setName("Node").setUSE("N2")));
ProtoInstance16
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance18 = new ProtoInstance().setName("Node").setDEF("N6")));
ProtoInstance18
                .addFieldValue(new fieldValue().setName("translation").setValue("3.55694 2.4116 0"));
ProtoInstance19
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance20 = new ProtoInstance().setName("Node").setUSE("N3")));
ProtoInstance19
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance21 = new ProtoInstance().setName("Node").setUSE("N6")));
ProtoInstance22
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance23 = new ProtoInstance().setName("Node").setUSE("N4")));
ProtoInstance22
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance24 = new ProtoInstance().setName("Node").setDEF("N7")));
ProtoInstance24
                .addFieldValue(new fieldValue().setName("translation").setValue("3.75106 -0.0794556 0"));
ProtoInstance25
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance26 = new ProtoInstance().setName("Node").setUSE("N5")));
ProtoInstance25
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance27 = new ProtoInstance().setName("Node").setUSE("N7")));
ProtoInstance28
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance29 = new ProtoInstance().setName("Node").setUSE("N6")));
ProtoInstance28
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance30 = new ProtoInstance().setName("Node").setDEF("N8")));
ProtoInstance30
                .addFieldValue(new fieldValue().setName("translation").setValue("7.68077 1.21228 0"));
ProtoInstance31
            .addFieldValue(new fieldValue().setName("output")
              .addChild(ProtoInstance32 = new ProtoInstance().setName("Node").setUSE("N7")));
ProtoInstance31
            .addFieldValue(new fieldValue().setName("input")
              .addChild(ProtoInstance33 = new ProtoInstance().setName("Node").setUSE("N8")));
    X3D0.toFileX3D("../data/Connectors.new.graal.x3d");
    X3D0.toFileJSON("../data/Connectors.new.graal.json");

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
import java.util.ArrayList;
import java.util.List;
import net.coderextreme.X3DRoots;
public class Connectors implements X3DRoots {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    ConfigurationProperties.setStripTrailingZeroes(true);
    ConfigurationProperties.setStripDefaultAttributes(true);
    X3D model = new Connectors().getRootNodeList().get(0); // only get one root node
    System.out.print(model.validationReport().trim());
    model.toFileX3D("../data/Connectors.new.java.x3d");
    model.toFileJSON("../data/Connectors.new.java.x3dj");
    }
    public List<X3D> getRootNodeList() {
    	List<X3D> list = new ArrayList<X3D>(1);
    	list.add(initialize());
    	return list;
    }
    public X3D initialize() {
ProtoInstance ProtoInstance0 = null;
ProtoInstance ProtoInstance1 = null;
ProtoInstance ProtoInstance2 = null;
ProtoInstance ProtoInstance3 = null;
ProtoInstance ProtoInstance4 = null;
ProtoInstance ProtoInstance5 = null;
ProtoInstance ProtoInstance6 = null;
ProtoInstance ProtoInstance7 = null;
ProtoInstance ProtoInstance8 = null;
ProtoInstance ProtoInstance9 = null;
ProtoInstance ProtoInstance10 = null;
ProtoInstance ProtoInstance11 = null;
ProtoInstance ProtoInstance12 = null;
ProtoInstance ProtoInstance13 = null;
ProtoInstance ProtoInstance14 = null;
ProtoInstance ProtoInstance15 = null;
ProtoInstance ProtoInstance16 = null;
ProtoInstance ProtoInstance17 = null;
ProtoInstance ProtoInstance18 = null;
ProtoInstance ProtoInstance19 = null;
ProtoInstance ProtoInstance20 = null;
ProtoInstance ProtoInstance21 = null;
ProtoInstance ProtoInstance22 = null;
ProtoInstance ProtoInstance23 = null;
ProtoInstance ProtoInstance24 = null;
ProtoInstance ProtoInstance25 = null;
ProtoInstance ProtoInstance26 = null;
ProtoInstance ProtoInstance27 = null;
ProtoInstance ProtoInstance28 = null;
ProtoInstance ProtoInstance29 = null;
ProtoInstance ProtoInstance30 = null;
ProtoInstance ProtoInstance31 = null;
ProtoInstance ProtoInstance32 = null;
ProtoInstance ProtoInstance33 = null;
ProtoInstance ProtoInstance34 = null;
ProtoInstance ProtoInstance35 = null;
ProtoInstance ProtoInstance36 = null;
ProtoInstance ProtoInstance37 = null;
ProtoInstance ProtoInstance38 = null;
ProtoInstance ProtoInstance39 = null;
ProtoInstance ProtoInstance40 = null;
ProtoInstance ProtoInstance41 = null;
      X3D X3D0 =  new X3D().setProfile(new SFString("Full")).setVersion(new SFString("4.0"))
      .setHead(new head()
        .addMeta(new meta().setName(new SFString("comment")).setContent(new SFString("World of Titania")))
        .addMeta(new meta().setName(new SFString("created")).setContent(new SFString("Fri, 04 Sep 2015 10:19:01 GMT")))
        .addMeta(new meta().setName(new SFString("creator")).setContent(new SFString("Holger Seelig")))
        .addMeta(new meta().setName(new SFString("generator")).setContent(new SFString("Titania V3.0.4, https://titania.create3000.de")))
        .addMeta(new meta().setName(new SFString("identifier")).setContent(new SFString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d")))
        .addMeta(new meta().setName(new SFString("modified")).setContent(new SFString("Tue, 25 Jul 2017 09:42:17 GMT")))
        .addMeta(new meta().setName(new SFString("title")).setContent(new SFString("Connectors"))))
      .setScene(new Scene()
        .addChild(new ProtoDeclare().setName(new SFString("RoundedRectangle2D"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFFloat").setName(new SFString("cornerRadius")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("1")))
            .addField(new field().setType("SFVec2f").setName(new SFString("size")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("2 2")))
            .addField(new field().setType("SFBool").setName(new SFString("solid")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("true"))))
          .setProtoBody(new ProtoBody()
            .addChild(new IndexedFaceSet().setDEF(new SFString("Geometry"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("solid")).setProtoField(new SFString("solid"))))
              .setCoord(new Coordinate()))
            .addChild(new Script().setDEF(new SFString("RoundedRectangle2D")).setDirectOutput(true)
              .addField(new field().setType("SFFloat").setName(new SFString("cornerDimension")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("10")))
              .addField(new field().setType("SFFloat").setName(new SFString("cornerRadius")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType("SFVec2f").setName(new SFString("size")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType("SFNode").setName(new SFString("geometry")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new IndexedFaceSet().setUSE(new SFString("Geometry"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("cornerRadius")).setProtoField(new SFString("cornerRadius")))
                .addConnect(new connect().setNodeField(new SFString("size")).setProtoField(new SFString("size"))))
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
        .addChild(new ProtoDeclare().setName(new SFString("Widget"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFColor").setName(new SFString("fillColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.1 0.1 0.1")))
            .addField(new field().setType("SFColor").setName(new SFString("lineColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.4 0.4 0.4")))
            .addField(new field().setType("SFFloat").setName(new SFString("linewidthScaleFactor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("1")))
            .addField(new field().setType("SFNode").setName(new SFString("geometry")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Transform().setDEF(new SFString("Shape"))
              .addChild(new Shape()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("geometry")).setProtoField(new SFString("geometry"))))
                .setAppearance(new Appearance()
                  .setMaterial(new Material()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("diffuseColor")).setProtoField(new SFString("fillColor")))))))
              .addChild(new Shape()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("geometry")).setProtoField(new SFString("geometry"))))
                .setAppearance(new Appearance()
                  .setFillProperties(new FillProperties().setFilled(false).setHatched(false))
                  .setLineProperties(new LineProperties()
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("linewidthScaleFactor")).setProtoField(new SFString("linewidthScaleFactor")))))
                  .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,0f })
                    .setIS(new IS()
                      .addConnect(new connect().setNodeField(new SFString("emissiveColor")).setProtoField(new SFString("lineColor"))))))))))
        .addChild(new ProtoDeclare().setName(new SFString("Node"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
          .setProtoBody(new ProtoBody()
            .addChild(new Group()
              .addChild(new PlaneSensor().setDEF(new SFString("PlaneSensor")))
              .addChild(new Transform().setDEF(new SFString("Node"))
                .setIS(new IS()
                  .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("translation"))))
                .addChild(ProtoInstance0 = new ProtoInstance().setName(new SFString("Widget")))
                .addChild(new Transform().setDEF(new SFString("Input")).setTranslation(new float[] {-1f ,0f ,0f })
                  .addChild(ProtoInstance2 = new ProtoInstance().setName(new SFString("Widget"))))
                .addChild(new Transform().setDEF(new SFString("Output")).setTranslation(new float[] {1f ,0f ,0f })
                  .addChild(ProtoInstance3 = new ProtoInstance().setName(new SFString("Widget"))))))
            .addChild(new Script().setDirectOutput(true)
              .addField(new field().setType("SFVec3f").setName(new SFString("translation")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
              .addField(new field().setType("SFNode").setName(new SFString("sensor")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new PlaneSensor().setUSE(new SFString("PlaneSensor"))))
              .addField(new field().setType("SFNode").setName(new SFString("transform")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Transform().setUSE(new SFString("Node"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("translation")).setProtoField(new SFString("translation"))))
              .setSourceCode("ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"	sensor .offset = translation;\n"+
"}"))
            .addChild(new ROUTE().setFromNode(new SFString("PlaneSensor")).setFromField(new SFString("translation_changed")).setToNode(new SFString("Node")).setToField(new SFString("set_translation")))))
        .addChild(new ProtoDeclare().setName(new SFString("Route"))
          .setProtoInterface(new ProtoInterface()
            .addField(new field().setType("SFColor").setName(new SFString("lineColor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("0.43 0.43 0.98")))
            .addField(new field().setType("SFFloat").setName(new SFString("linewidthScaleFactor")).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFString("2")))
            .addField(new field().setType("SFNode").setName(new SFString("output")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setType("SFNode").setName(new SFString("input")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
          .setProtoBody(new ProtoBody()
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setLineProperties(new LineProperties()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField(new SFString("linewidthScaleFactor")).setProtoField(new SFString("linewidthScaleFactor")))))
                .setMaterial(new Material().setDiffuseColor(new float[] {0f ,0f ,0f })
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField(new SFString("emissiveColor")).setProtoField(new SFString("lineColor"))))))
              .setGeometry(new LineSet().setDEF(new SFString("Geometry_1")).setVertexCount(new MFInt320().getArray())
                .setCoord(new Coordinate().setPoint(new MFVec3f1().getArray()))))
            .addChild(new Script().setDEF(new SFString("Route")).setDirectOutput(true)
              .addField(new field().setType("SFVec3f").setName(new SFString("set_translation")).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setType("SFInt32").setName(new SFString("routeDimension")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFString("21")))
              .addField(new field().setType("SFNode").setName(new SFString("output")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType("SFNode").setName(new SFString("input")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setType("SFNode").setName(new SFString("geometry")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new LineSet().setUSE(new SFString("Geometry_1"))))
              .addField(new field().setType("SFNode").setName(new SFString("self")).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addChild(new Script().setUSE(new SFString("Route"))))
              .setIS(new IS()
                .addConnect(new connect().setNodeField(new SFString("output")).setProtoField(new SFString("output")))
                .addConnect(new connect().setNodeField(new SFString("input")).setProtoField(new SFString("input"))))
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
        .addChild(new NavigationInfo().setType("\"FLY\" \"ANY\""))
        .addChild(new Background().setSkyColor(new MFColor2().getArray()))
        .addChild(new OrthoViewpoint().setDescription(new SFString("OthoViewpoint")).setPosition(new float[] {-3.13496f ,-4.19776f ,10f }).setCenterOfRotation(new float[] {-3.13496f ,-4.19776f ,0f }).setFieldOfView(new MFFloat3().getArray()))
        .addChild(new Viewpoint().setDescription(new SFString("Viewpoint")))
        .addChild(new Transform().setDEF(new SFString("Connectors"))
          .addChild(ProtoInstance4 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance7 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance10 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance13 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance16 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance19 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance22 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance25 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance28 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance31 = new ProtoInstance().setName(new SFString("Route")))
          .addChild(ProtoInstance34 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N1")))
          .addChild(ProtoInstance35 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N2")))
          .addChild(ProtoInstance36 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N3")))
          .addChild(ProtoInstance37 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N4")))
          .addChild(ProtoInstance38 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N5")))
          .addChild(ProtoInstance39 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N6")))
          .addChild(ProtoInstance40 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N7")))
          .addChild(ProtoInstance41 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N8")))));
ProtoInstance0
                  .addFieldValue(new fieldValue().setName(new SFString("geometry"))
                    .addChild(ProtoInstance1 = new ProtoInstance().setName(new SFString("RoundedRectangle2D"))));
ProtoInstance1
                      .addFieldValue(new fieldValue().setName(new SFString("cornerRadius")).setValue(new SFString("0.12")));
ProtoInstance1
                      .addFieldValue(new fieldValue().setName(new SFString("size")).setValue(new SFString("2 1")));
ProtoInstance2
                    .addFieldValue(new fieldValue().setName(new SFString("lineColor")).setValue(new SFString("0.72 0.14 0.23")));
ProtoInstance2
                    .addFieldValue(new fieldValue().setName(new SFString("geometry"))
                      .addChild(new Disk2D().setDEF(new SFString("Connector")).setOuterRadius(0.2f )));
ProtoInstance3
                    .addFieldValue(new fieldValue().setName(new SFString("lineColor")).setValue(new SFString("0.44 0.5 0.72")));
ProtoInstance3
                    .addFieldValue(new fieldValue().setName(new SFString("geometry"))
                      .addChild(new Disk2D().setUSE(new SFString("Connector"))));
ProtoInstance4
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance5 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N1"))));
ProtoInstance4
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance6 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N2"))));
ProtoInstance5
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-3.98323 2.88948 0")));
ProtoInstance6
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-0.0890862 2.96049 0")));
ProtoInstance7
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance8 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N1"))));
ProtoInstance7
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance9 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N3"))));
ProtoInstance9
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-0.104169 1.16371 0")));
ProtoInstance10
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance11 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N1"))));
ProtoInstance10
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance12 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N4"))));
ProtoInstance12
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-0.0998688 -0.40172 0")));
ProtoInstance13
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance14 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N1"))));
ProtoInstance13
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance15 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N5"))));
ProtoInstance15
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("-0.0998687 -2.14742 0")));
ProtoInstance16
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance17 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N2"))));
ProtoInstance16
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance18 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N6"))));
ProtoInstance18
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("3.55694 2.4116 0")));
ProtoInstance19
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance20 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N3"))));
ProtoInstance19
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance21 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N6"))));
ProtoInstance22
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance23 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N4"))));
ProtoInstance22
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance24 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N7"))));
ProtoInstance24
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("3.75106 -0.0794556 0")));
ProtoInstance25
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance26 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N5"))));
ProtoInstance25
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance27 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N7"))));
ProtoInstance28
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance29 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N6"))));
ProtoInstance28
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance30 = new ProtoInstance().setName(new SFString("Node")).setDEF(new SFString("N8"))));
ProtoInstance30
                .addFieldValue(new fieldValue().setName(new SFString("translation")).setValue(new SFString("7.68077 1.21228 0")));
ProtoInstance31
            .addFieldValue(new fieldValue().setName(new SFString("output"))
              .addChild(ProtoInstance32 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N7"))));
ProtoInstance31
            .addFieldValue(new fieldValue().setName(new SFString("input"))
              .addChild(ProtoInstance33 = new ProtoInstance().setName(new SFString("Node")).setUSE(new SFString("N8"))));
    return X3D0;
    }
private class MFInt320 {
  private org.web3d.x3d.jsail.fields.MFInt32 getArray() {
    return new org.web3d.x3d.jsail.fields.MFInt32(new int[] {2});
  }
}
private class MFVec3f1 {
  private org.web3d.x3d.jsail.fields.MFVec3f getArray() {
    return new org.web3d.x3d.jsail.fields.MFVec3f(new float[] {-1f ,0f ,0f ,1f ,0f ,0f });
  }
}
private class MFColor2 {
  private org.web3d.x3d.jsail.fields.MFColor getArray() {
    return new org.web3d.x3d.jsail.fields.MFColor(new float[] {0.2f ,0.2f ,0.2f });
  }
}
private class MFFloat3 {
  private org.web3d.x3d.jsail.fields.MFFloat getArray() {
    return new org.web3d.x3d.jsail.fields.MFFloat(new float[] {0f ,0f ,10f ,10f });
  }
}
}

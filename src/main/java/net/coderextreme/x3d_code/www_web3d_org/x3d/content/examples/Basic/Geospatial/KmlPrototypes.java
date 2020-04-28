package net.coderextreme.x3d_code.www_web3d_org.x3d.content.examples.Basic.Geospatial;
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
import org.web3d.x3d.sai.*;
import org.web3d.x3d.sai.CADGeometry.*;
import org.web3d.x3d.sai.Core.*;
import org.web3d.x3d.sai.CubeMapTexturing.*;
import org.web3d.x3d.sai.DIS.*;
import org.web3d.x3d.sai.EnvironmentalEffects.*;
import org.web3d.x3d.sai.EnvironmentalSensor.*;
import org.web3d.x3d.sai.EventUtilities.*;
import org.web3d.x3d.sai.Followers.*;
import org.web3d.x3d.sai.Geometry2D.*;
import org.web3d.x3d.sai.Geometry3D.*;
import org.web3d.x3d.sai.Geospatial.*;
import org.web3d.x3d.sai.Grouping.*;
import org.web3d.x3d.sai.HAnim.*;
import org.web3d.x3d.sai.Interpolation.*;
import org.web3d.x3d.sai.KeyDeviceSensor.*;
import org.web3d.x3d.sai.Layering.*;
import org.web3d.x3d.sai.Layout.*;
import org.web3d.x3d.sai.Lighting.*;
import org.web3d.x3d.sai.NURBS.*;
import org.web3d.x3d.sai.Navigation.*;
import org.web3d.x3d.sai.Networking.*;
import org.web3d.x3d.sai.ParticleSystems.*;
import org.web3d.x3d.sai.Picking.*;
import org.web3d.x3d.sai.PointingDeviceSensor.*;
import org.web3d.x3d.sai.Rendering.*;
import org.web3d.x3d.sai.RigidBodyPhysics.*;
import org.web3d.x3d.sai.Scripting.*;
import org.web3d.x3d.sai.Shaders.*;
import org.web3d.x3d.sai.Shape.*;
import org.web3d.x3d.sai.Sound.*;
import org.web3d.x3d.sai.Text.*;
import org.web3d.x3d.sai.Texturing3D.*;
import org.web3d.x3d.sai.Texturing.*;
import org.web3d.x3d.sai.Time.*;
import org.web3d.x3d.sai.VolumeRendering.*;
public class KmlPrototypes {
  public static void main(String[] args) {
    ConfigurationProperties.setXsltEngine(ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA);
    ConfigurationProperties.setDeleteIntermediateFiles(false);
    new KmlPrototypes().initialize().toFileJSON("../x3d_code/www_web3d_org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.new.json");
    }
    public X3DObject initialize() {
ProtoInstanceObject ProtoInstance0 = null;
      X3DObject X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addComponent(new componentObject().setName("Geospatial").setLevel(1))
        .addMeta(new metaObject().setName("title").setContent("KmlPrototypes.x3d"))
        .addMeta(new metaObject().setName("description").setContent("X3D prototypes to render Keyhole Markup Language (KML) information."))
        .addMeta(new metaObject().setName("translated").setContent("20 August 2007"))
        .addMeta(new metaObject().setName("modified").setContent("20 October 2019"))
        .addMeta(new metaObject().setName("creator").setContent("Don Brutzman"))
        .addMeta(new metaObject().setName("warning").setContent("under development"))
        .addMeta(new metaObject().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.x3d"))
        .addMeta(new metaObject().setName("reference").setContent("http://www.opengeospatial.org/standards/kml"))
        .addMeta(new metaObject().setName("reference").setContent("http://schemas.opengis.net/kml"))
        .addMeta(new metaObject().setName("reference").setContent("http://schemas.opengis.net/kml/2.2.0/ogckml22.xsd"))
        .addMeta(new metaObject().setName("reference").setContent("KmlToX3d.xslt"))
        .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMeta(new metaObject().setName("license").setContent("../license.html")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("PlaceMark").setAppinfo("A Placemark with a Point has an icon associated with it that marks a point on the earth in the 3D viewer.").setDocumentation("http://code.google.com/apis/kml/documentation/kml_tags_21.html#placemark")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setName("id").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("MFString").setName("name").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Label for the object"))
            .addField(new fieldObject().setType("SFString").setName("description").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("User-supplied text that appears in the description balloon"))
            .addField(new fieldObject().setType("SFVec3d").setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("longitude latitude and altitude").setValue("0 0 0"))
            .addField(new fieldObject().setType("MFString").setName("address").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("A string value representing an unstructured address written as a standard street city state address and/or as a postal code."))
            .addField(new fieldObject().setType("SFBool").setName("visibility").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo(". Specifies whether the feature is drawn in the 3D viewer when it is initially loaded").setValue("true"))
            .addField(new fieldObject().setType("SFBool").setName("set_visibility").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("visibility_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("open").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Specifies whether a Folder appears closed or open when first loaded").setValue("true"))
            .addField(new fieldObject().setType("MFString").setName("snippet").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("A short description of the feature"))
            .addField(new fieldObject().setType("MFString").setName("set_snippet").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("MFString").setName("snippet_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("MFNode").setName("geometry").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Shape or (KML) Point LineString LinearRing Polygon MultiGeometry Model")
              .addComments(new CommentsBlock("default NULL node")))
            .addField(new fieldObject().setType("SFColor").setName("diffuseColor").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Default color for PlaceMark").setValue("0.2 0.8 0.4"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("default NULL node")))
            .addComments(new CommentsBlock("TODO: is the 'open' parameter appropriate for X3D? Maintain value for round-trip conversions."))
            .addComments(new CommentsBlock("TODO: need LookAt Prototype"))
            .addComments(new CommentsBlock("TODO: AddressDetails, phoneNumber, TimePrimitive, styleUrl, StyleSelector, Region"))
            .addComments(new CommentsBlock("TODO: Geometry prototypes for KML Point,LineString,LinearRing, Polygon,MultiGeometry,Model")))
          .setProtoBody(new ProtoBodyObject()
            .addComments(new CommentsBlock("TODO: is Switch needed to choose between balloon and provided geometry, or are both shown?"))
            .addChild(new SwitchObject().setDEF("SwitchVisible").setWhichChoice(0)
              .addChild(new AnchorObject()
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("url").setProtoField("address"))
                  .addConnect(new connectObject().setNodeField("description").setProtoField("description")))
                .addChild(new GeoLocationObject()
                  .setGeoOrigin(new GeoOriginObject()
                    .setIS(new ISObject()
                      .addConnect(new connectObject().setNodeField("geoCoords").setProtoField("coordinates")))))
                .addChild(new ShapeObject().setDEF("PlaceMarkBalloon")
                  .setGeometry(new ExtrusionObject().setCreaseAngle(3.14f).setCrossSection(new MFVec2fObject(new MFVec2f0().getArray())).setScale(new MFVec2fObject(new MFVec2f1().getArray())).setSpine(new MFVec3fObject(new MFVec3f2().getArray())))
                  .setAppearance(new AppearanceObject()
                    .setMaterial(new MaterialObject().setDEF("PlaceMarkMaterial")
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor"))))))
                .addChild(new TransformObject().setDEF("PlaceMarkName").setTranslation(new float[] {0f,1.2f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject()
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("name")))
                      .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString3().getArray())).setSize(0.2f)))
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("PlaceMarkMaterial")))))
                .addChild(new TransformObject().setDEF("SnippetTranslation").setTranslation(new float[] {0f,2.4f,0f})
                  .addChild(new ShapeObject()
                    .setGeometry(new TextObject()
                      .setIS(new ISObject()
                        .addConnect(new connectObject().setNodeField("string").setProtoField("snippet")))
                      .setFontStyle(new FontStyleObject().setJustify(new MFStringObject(new MFString4().getArray())).setSize(0.2f)))
                    .setAppearance(new AppearanceObject()
                      .setMaterial(new MaterialObject().setUSE("PlaceMarkMaterial")))))
                .addChild(new GroupObject().setDEF("GeometryGroup")
                  .setIS(new ISObject()
                    .addConnect(new connectObject().setNodeField("children").setProtoField("geometry"))))))
            .addComments(new CommentsBlock("remaining nodes in ProtoBody are not rendered"))
            .addChild(new WorldInfoObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("title").setProtoField("id"))))
            .addChild(new GroupObject().setDEF("MetadataHolderPlaceMark")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))
            .addChild(new ScriptObject().setDEF("BehaviorScript")
              .addField(new fieldObject().setType("SFBool").setName("visibility").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFBool").setName("set_visibility").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("visibility_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFInt32").setName("visibilityChoice").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("open").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFString").setName("snippet").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("MFString").setName("set_snippet").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("MFString").setName("snippet_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFVec3f").setName("snippetOffset").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("visibility").setProtoField("visibility"))
                .addConnect(new connectObject().setNodeField("set_visibility").setProtoField("set_visibility"))
                .addConnect(new connectObject().setNodeField("visibility_changed").setProtoField("visibility_changed"))
                .addConnect(new connectObject().setNodeField("open").setProtoField("open"))
                .addConnect(new connectObject().setNodeField("snippet").setProtoField("snippet"))
                .addConnect(new connectObject().setNodeField("set_snippet").setProtoField("set_snippet"))
                .addConnect(new connectObject().setNodeField("snippet_changed").setProtoField("snippet_changed")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	Browser.print ('visibility=' + visibility);\n"+
"	if (visibility == false) visibilityChoice = -1;\n"+
"\n"+
"	// TODO:  if (open == false) open_changed = -1;\n"+
"\n"+
"	adjustSnippetOffset ();\n"+
"}\n"+
"\n"+
"function set_visibility (value, timestamp)\n"+
"{\n"+
"	visibility = value;         // remember change\n"+
"	visibility_changed = value; // send eventOut\n"+
"	if (visibility == false) visibilityChoice = -1;\n"+
"	else                     visibilityChoice =  0;\n"+
"}\n"+
"\n"+
"function set_snippet (value, timestamp)\n"+
"{\n"+
"	snippet = value;         // remember change\n"+
"	snippet_changed = value; // send eventOut\n"+
"	adjustSnippetOffset ();\n"+
"}\n"+
"\n"+
"function adjustSnippetOffset () // TODO\n"+
"{\n"+
"//	snippetOffset = new SFVec3f (0.0, (snippet.length * 0.3), 0.0);\n"+
"//	Browser.print ('snippet.length=' + snippet.length + ', snippetOffset=' + snippetOffset);\n"+
"}\n"+
"\n"+
"function set_open (value, timestamp) // TODO\n"+
"{\n"+
"\n"+
"}"))
            .addChild(new ROUTEObject().setFromField("visibilityChoice").setFromNode("BehaviorScript").setToField("whichChoice").setToNode("SwitchVisible"))
            .addChild(new ROUTEObject().setFromField("snippetOffset").setFromNode("BehaviorScript").setToField("set_translation").setToNode("SnippetTranslation"))))
        .addChild(new ProtoDeclareObject().setName("Point").setAppinfo("A geographic location defined by longitude latitude and (required) altitude.").setDocumentation("http://code.google.com/apis/kml/documentation/kml_tags_21.html#point")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType("SFString").setName("id").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
            .addField(new fieldObject().setType("SFString").setName("altitudeMode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("allowed values: clampToGround relativeToGround absolute").setValue("clampToGround"))
            .addField(new fieldObject().setType("SFVec3d").setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 0"))
            .addField(new fieldObject().setType("SFVec3d").setName("set_coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType("SFVec3d").setName("coordinates_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
            .addField(new fieldObject().setType("SFBool").setName("extrude").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFBool").setName("tessellate").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue("false"))
            .addField(new fieldObject().setType("SFNode").setName("metadata").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT)
              .addComments(new CommentsBlock("default NULL node"))))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ScriptObject().setDEF("PointScript")
              .addField(new fieldObject().setType("SFString").setName("altitudeMode").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFVec3d").setName("coordinates").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFVec3d").setName("set_coordinates").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType("SFVec3d").setName("coordinates_changed").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .addField(new fieldObject().setType("SFBool").setName("extrude").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .addField(new fieldObject().setType("SFBool").setName("tessellate").setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("altitudeMode").setProtoField("altitudeMode"))
                .addConnect(new connectObject().setNodeField("coordinates").setProtoField("coordinates"))
                .addConnect(new connectObject().setNodeField("set_coordinates").setProtoField("set_coordinates"))
                .addConnect(new connectObject().setNodeField("coordinates_changed").setProtoField("coordinates_changed"))
                .addConnect(new connectObject().setNodeField("extrude").setProtoField("extrude"))
                .addConnect(new connectObject().setNodeField("tessellate").setProtoField("tessellate")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	if  (altitudeMode == '') altitudeMode = 'clampToGround';\n"+
"	if ((altitudeMode != 'clampToGround') &&\n"+
"	    (altitudeMode != 'relativeToGround') &&\n"+
"	    (altitudeMode != 'absolute'))\n"+
"	{\n"+
"		warningString = '[Point';\n"+
"		if (id != '') warningString += ' ' + id;\n"+
"		warningString += '] illegal value ';\n"+
"		warningString += 'altitudeMode=' + altitudeMode;\n"+
"		Browser.print (warningString);\n"+
"	}\n"+
"}\n"+
"\n"+
"function set_coordinates (value)\n"+
"{\n"+
"	coordinates = value;\n"+
"	coordinates_changed = value;\n"+
"}\n"+
"\n"+
"// TODO: how to handle extrude, tessellate"))
            .addChild(new WorldInfoObject()
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("title").setProtoField("id"))))
            .addChild(new GroupObject().setDEF("MetadataHolderPoint")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("metadata").setProtoField("metadata"))))))
        .addComments(new CommentsBlock("========== Examples =========="))
        .addChild(new ViewpointObject().setDescription("Placemark example").setPosition(new float[] {0f,0f,4f}))
        .addComments(new CommentsBlock("<?xml version=\"1.0\" encoding=\"UTF-8\"?> <kml xmlns=\"http://earth.google.com/kml/2.1\"> <Placemark> <name>Simple placemark</name> <description>Attached to the ground. Intelligently places itself at the height of the underlying terrain.</description> <Point> <coordinates>-122.0822035425683,37.42228990140251,0</coordinates> </Point> </Placemark> </kml>"))
        .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("PlaceMark")))      ;
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("name").setValue("\"Simple placemark\""));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("description").setValue("Attached to the ground. Intelligently places itself at the height of the underlying terrain."));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("coordinates").setValue("-122.0822035425683 37.42228990140251 0"));
ProtoInstance0
          .addFieldValue(new fieldValueObject().setName("address").setValue("\"https://www.web3d.org/x3d-earth\""));
    return X3D0;
    }
protected class MFVec2f0 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {1f,0f,0.92f,-0.38f,0.71f,-0.71f,0.38f,-0.92f,0f,-1f,-0.38f,-0.92f,-0.71f,-0.71f,-0.92f,-0.38f,-1f,0f,-0.92f,0.38f,-0.71f,0.71f,-0.38f,0.92f,0f,1f,0.38f,0.92f,0.71f,0.71f,0.92f,0.38f,1f,0f});
  }
}
protected class MFVec2f1 {
  protected MFVec2fObject getArray() {
    return new MFVec2fObject(new float[] {0.01f,0.01f,0.03f,0.03f,0.06f,0.06f,0.09f,0.09f,0.14f,0.14f,0.23f,0.23f,0.25f,0.25f,0.23f,0.23f,0.18f,0.18f,0.1f,0.1f,0.03f,0.03f});
  }
}
protected class MFVec3f2 {
  protected MFVec3fObject getArray() {
    return new MFVec3fObject(new float[] {0f,0f,0f,0f,0.12f,0f,0f,0.28f,0f,0f,0.4f,0f,0f,0.55f,0f,0f,0.65f,0f,0f,0.75f,0f,0f,0.85f,0f,0f,0.92f,0f,0f,0.98f,0f,0f,1f,0f});
  }
}
protected class MFString3 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
protected class MFString4 {
  protected MFStringObject getArray() {
    return new MFStringObject(new java.lang.String[] {"MIDDLE","MIDDLE"});
  }
}
}

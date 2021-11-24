package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D prototypes to render Keyhole Markup Language (KML) information. </p>
 <p> Related links: <a href="../../../Geospatial/KmlPrototypes.java">KmlPrototypes.java</a> source, <a href="../../../Geospatial/KmlPrototypesIndex.html" target="_top">KmlPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/KmlPrototypes.x3d">KmlPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D prototypes to render Keyhole Markup Language (KML) information. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 20 August 2007 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.opengeospatial.org/standards/kml" target="_blank">http://www.opengeospatial.org/standards/kml</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://schemas.opengis.net/kml" target="_blank">http://schemas.opengis.net/kml</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://schemas.opengis.net/kml/2.2.0/ogckml22.xsd" target="_blank">http://schemas.opengis.net/kml/2.2.0/ogckml22.xsd</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> KmlToX3d.xslt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Geospatial/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Don Brutzman
 */

public class KmlPrototypes
{
	/** Default constructor to create this object. */
	public KmlPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KmlPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D prototypes to render Keyhole Markup Language (KML) information."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("20 August 2007"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/KmlPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.opengeospatial.org/standards/kml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://schemas.opengis.net/kml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://schemas.opengis.net/kml/2.2.0/ogckml22.xsd"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("KmlToX3d.xslt"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("PlaceMark").setName("PlaceMark").setAppinfo("A Placemark with a Point has an icon associated with it that marks a point on the earth in the 3D viewer.").setDocumentation("http://code.google.com/apis/kml/documentation/kml_tags_21.html#placemark")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("id").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("name").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Label for the object"))
        .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("User-supplied text that appears in the description balloon"))
        .addField(new field().setName("coordinates").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3d(0.0,0.0,0.0)).setAppinfo("longitude latitude and altitude"))
        .addField(new field().setName("address").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("A string value representing an unstructured address written as a standard street city state address and/or as a postal code."))
        .addField(new field().setName("visibility").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo(". Specifies whether the feature is drawn in the 3D viewer when it is initially loaded"))
        .addField(new field().setName("set_visibility").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("visibility_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" TODO: is the 'open' parameter appropriate for X3D? Maintain value for round-trip conversions. ")
        .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true).setAppinfo("Specifies whether a Folder appears closed or open when first loaded"))
        .addComments(" TODO: need LookAt Prototype ")
        .addField(new field().setName("snippet").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("A short description of the feature"))
        .addField(new field().setName("set_snippet").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("snippet_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" TODO: AddressDetails, phoneNumber, TimePrimitive, styleUrl, StyleSelector, Region ")
        .addComments(" TODO: Geometry prototypes for KML Point,LineString,LinearRing, Polygon,MultiGeometry,Model ")
        .addField(new field().setName("geometry").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Shape or (KML) Point LineString LinearRing Polygon MultiGeometry Model")
          .addComments(" default NULL node "))
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.2,0.8,0.4)).setAppinfo("Default color for PlaceMark"))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" default NULL node ")))
      .setProtoBody(new ProtoBody()
        .addComments(" TODO: is Switch needed to choose between balloon and provided geometry, or are both shown? ")
        .addChild(new Switch("SwitchVisible").setWhichChoice(0)
          .addChild(new Anchor()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("url").setProtoField("address"))
              .addConnect(new connect().setNodeField("description").setProtoField("description")))
            .addChild(new GeoLocation()
              .setGeoOrigin(new GeoOrigin()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("geoCoords").setProtoField("coordinates")))))
            .addChild(new Shape("PlaceMarkBalloon")
              .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {0.01,0.01,0.03,0.03,0.06,0.06,0.09,0.09,0.14,0.14,0.23,0.23,0.25,0.25,0.23,0.23,0.18,0.18,0.1,0.1,0.03,0.03})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.12,0.0,0.0,0.28,0.0,0.0,0.4,0.0,0.0,0.55,0.0,0.0,0.65,0.0,0.0,0.75,0.0,0.0,0.85,0.0,0.0,0.92,0.0,0.0,0.98,0.0,0.0,1.0,0.0})))
              .setAppearance(new Appearance()
                .setMaterial(new Material("PlaceMarkMaterial")
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor"))))))
            .addChild(new Transform("PlaceMarkName").setTranslation(0.0,1.2,0.0)
              .addChild(new Shape()
                .setGeometry(new Text()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("string").setProtoField("name")))
                  .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.2)))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("PlaceMarkMaterial")))))
            .addChild(new Transform("SnippetTranslation").setTranslation(0.0,2.4,0.0)
              .addChild(new Shape()
                .setGeometry(new Text()
                  .setIS(new IS()
                    .addConnect(new connect().setNodeField("string").setProtoField("snippet")))
                  .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.2)))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setUSE("PlaceMarkMaterial")))))
            .addChild(new Group("GeometryGroup")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("children").setProtoField("geometry"))))))
        .addComments(" remaining nodes in ProtoBody are not rendered ")
        .addChild(new WorldInfo()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("title").setProtoField("id"))))
        .addChild(new Group("MetadataHolderPlaceMark")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))
        .addChild(new Script("BehaviorScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	Browser.print ('visibility=' + visibility);" + "\n" + 
"	if (visibility == false) visibilityChoice = -1;" + "\n" + 
"\n" + 
"	// TODO:  if (open == false) open_changed = -1;" + "\n" + 
"\n" + 
"	adjustSnippetOffset ();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_visibility (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	visibility = value;         // remember change" + "\n" + 
"	visibility_changed = value; // send eventOut" + "\n" + 
"	if (visibility == false) visibilityChoice = -1;" + "\n" + 
"	else                     visibilityChoice =  0;" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_snippet (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	snippet = value;         // remember change" + "\n" + 
"	snippet_changed = value; // send eventOut" + "\n" + 
"	adjustSnippetOffset ();" + "\n" + 
"}" + "\n" + 
"\n" + 
"function adjustSnippetOffset () // TODO" + "\n" + 
"{" + "\n" + 
"//	snippetOffset = new SFVec3f (0.0, (snippet.length * 0.3), 0.0);" + "\n" + 
"//	Browser.print ('snippet.length=' + snippet.length + ', snippetOffset=' + snippetOffset);" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_open (value, timestamp) // TODO" + "\n" + 
"{" + "\n" + 
"\n" + 
"}" + "\n")
          .addField(new field().setName("visibility").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("set_visibility").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("visibility_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("visibilityChoice").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("open").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("snippet").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("set_snippet").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("snippet_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("snippetOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("visibility").setProtoField("visibility"))
            .addConnect(new connect().setNodeField("set_visibility").setProtoField("set_visibility"))
            .addConnect(new connect().setNodeField("visibility_changed").setProtoField("visibility_changed"))
            .addConnect(new connect().setNodeField("open").setProtoField("open"))
            .addConnect(new connect().setNodeField("snippet").setProtoField("snippet"))
            .addConnect(new connect().setNodeField("set_snippet").setProtoField("set_snippet"))
            .addConnect(new connect().setNodeField("snippet_changed").setProtoField("snippet_changed"))))
        .addChild(new ROUTE().setFromNode("BehaviorScript").setFromField("visibilityChoice").setToNode("SwitchVisible").setToField("whichChoice"))
        .addChild(new ROUTE().setFromNode("BehaviorScript").setFromField("snippetOffset").setToNode("SnippetTranslation").setToField("set_translation"))))
    .addChild(new ProtoDeclare("Point").setName("Point").setAppinfo("A geographic location defined by longitude latitude and (required) altitude.").setDocumentation("http://code.google.com/apis/kml/documentation/kml_tags_21.html#point")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("id").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("altitudeMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("clampToGround").setAppinfo("allowed values: clampToGround relativeToGround absolute"))
        .addField(new field().setName("coordinates").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3d(0.0,0.0,0.0)))
        .addField(new field().setName("set_coordinates").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("coordinates_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("extrude").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("tessellate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" default NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("PointScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	if  (altitudeMode == '') altitudeMode = 'clampToGround';" + "\n" + 
"	if ((altitudeMode != 'clampToGround') &&" + "\n" + 
"	    (altitudeMode != 'relativeToGround') &&" + "\n" + 
"	    (altitudeMode != 'absolute'))" + "\n" + 
"	{" + "\n" + 
"		warningString = '[Point';" + "\n" + 
"		if (id != '') warningString += ' ' + id;" + "\n" + 
"		warningString += '] illegal value ';" + "\n" + 
"		warningString += 'altitudeMode=' + altitudeMode;" + "\n" + 
"		Browser.print (warningString);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_coordinates (value)" + "\n" + 
"{" + "\n" + 
"	coordinates = value;" + "\n" + 
"	coordinates_changed = value;" + "\n" + 
"}" + "\n" + 
"\n" + 
"// TODO: how to handle extrude, tessellate" + "\n")
          .addField(new field().setName("altitudeMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("coordinates").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("set_coordinates").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("coordinates_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("extrude").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("tessellate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("altitudeMode").setProtoField("altitudeMode"))
            .addConnect(new connect().setNodeField("coordinates").setProtoField("coordinates"))
            .addConnect(new connect().setNodeField("set_coordinates").setProtoField("set_coordinates"))
            .addConnect(new connect().setNodeField("coordinates_changed").setProtoField("coordinates_changed"))
            .addConnect(new connect().setNodeField("extrude").setProtoField("extrude"))
            .addConnect(new connect().setNodeField("tessellate").setProtoField("tessellate"))))
        .addChild(new WorldInfo()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("title").setProtoField("id"))))
        .addChild(new Group("MetadataHolderPoint")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))))))
    .addComments(" ========== Examples ========== ")
    .addChild(new Viewpoint().setDescription("Placemark example").setPosition(0.0,0.0,4.0))
    .addComments(" <?xml version=\"1.0\" encoding=\"UTF-8\"?> <kml xmlns=\"http://earth.google.com/kml/2.1\"> <Placemark> <name>Simple placemark</name> <description>Attached to the ground. Intelligently places itself at the height of the underlying terrain.</description> <Point> <coordinates>-122.0822035425683,37.42228990140251,0</coordinates> </Point> </Placemark> </kml> ")
    .addChild(new ProtoInstance("PlaceMark").setContainerField("children")
      .addFieldValue(new fieldValue().setName("name").setValue(new String[] {"Simple placemark"}))
      .addFieldValue(new fieldValue().setName("description").setValue("Attached to the ground. Intelligently places itself at the height of the underlying terrain."))
      .addFieldValue(new fieldValue().setName("coordinates").setValue(new SFVec3d(-122.0822035425683,37.42228990140251,0.0)))
      .addFieldValue(new fieldValue().setName("address").setValue(new String[] {"https://www.web3d.org/x3d-earth"}))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return KmlPrototypes model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new KmlPrototypes().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.KmlPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.KmlPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

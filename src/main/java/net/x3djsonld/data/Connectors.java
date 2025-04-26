package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry2D.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Example scene Connectors. </p>
 <p> Related links:  source Connectors.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.Connectors&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> comment </i> </td>
			<td> World of Titania </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> Fri, 04 Sep 2015 10:19:01 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Holger Seelig </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Titania V3.0.4, <a href="http://titania.create3000.de" target="_blank">http://titania.create3000.de</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> Tue, 25 Jul 2017 09:42:17 GMT </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors">Connectors</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Holger Seelig
 */

public class Connectors
{
	/** Default constructor to create this object. */
	public Connectors ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_FULL).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName("comment").setContent("World of Titania"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("Fri, 04 Sep 2015 10:19:01 GMT"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Holger Seelig"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Titania V3.0.4, http://titania.create3000.de"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("file:///home/holger/Projekte/Cobweb/excite/tests/Components/Shape/Connectors.x3d"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("Tue, 25 Jul 2017 09:42:17 GMT"))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Connectors")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("RoundedRectangle2D").setName("RoundedRectangle2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("cornerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec2f(2.0,2.0)))
        .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true)))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("Geometry").setDEF("Geometry")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("solid").setProtoField("solid")))
          .setCoord(new Coordinate()))
        .addChild(new Script("RoundedRectangle2D").setDirectOutput(true).setSourceCode("""
ecmascript:
vrmlscript:

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
}
""")
          .addField(new field().setName("cornerDimension").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(10))
          .addField(new field().setName("cornerRadius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("size").setType(field.TYPE_SFVEC2F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("geometry").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new IndexedFaceSet().setUSE("Geometry")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("cornerRadius").setProtoField("cornerRadius"))
            .addConnect(new connect().setNodeField("size").setProtoField("size"))))))
    .addChild(new ProtoDeclare("Widget").setName("Widget")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("fillColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.1,0.1,0.1)))
        .addField(new field().setName("lineColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.4,0.4,0.4)))
        .addField(new field().setName("linewidthScaleFactor").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("geometry").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Transform("Shape")
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
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor")))))))))
    .addChild(new ProtoDeclare("Node").setName("Node")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new PlaneSensor("PlaneSensor"))
          .addChild(new Transform("Node")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("translation")))
            .addChild(new ProtoInstance("Widget").setContainerField("children")
              .addFieldValue(new fieldValue().setName("geometry")
                .addChild(new ProtoInstance("RoundedRectangle2D").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("cornerRadius").setValue(0.12))
                  .addFieldValue(new fieldValue().setName("size").setValue(new SFVec2f(2.0,1.0))))))
            .addChild(new Transform("Input").setTranslation(-1.0,0.0,0.0)
              .addChild(new ProtoInstance("Widget").setContainerField("children")
                .addFieldValue(new fieldValue().setName("lineColor").setValue(new SFColor(0.72,0.14,0.23)))
                .addFieldValue(new fieldValue().setName("geometry")
                  .addChild(new Disk2D("Connector").setOuterRadius(0.2)))))
            .addChild(new Transform("Output").setTranslation(1.0,0.0,0.0)
              .addChild(new ProtoInstance("Widget").setContainerField("children")
                .addFieldValue(new fieldValue().setName("lineColor").setValue(new SFColor(0.44,0.5,0.72)))
                .addFieldValue(new fieldValue().setName("geometry")
                  .addChild(new Disk2D().setUSE("Connector")))))))
        .addChild(new Script().setDirectOutput(true).setSourceCode("""
ecmascript:
vrmlscript:
function initialize ()
{
	sensor .offset = translation;
}
""")
          .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("sensor").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new PlaneSensor().setUSE("PlaneSensor")))
          .addField(new field().setName("transform").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Transform().setUSE("Node")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))))
        .addChild(new ROUTE().setFromNode("PlaneSensor").setFromField("translation_changed").setToNode("Node").setToField("set_translation"))))
    .addChild(new ProtoDeclare("Route").setName("Route")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("lineColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.43,0.43,0.98)))
        .addField(new field().setName("linewidthScaleFactor").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(2))
        .addField(new field().setName("output").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("input").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setLineProperties(new LineProperties()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("linewidthScaleFactor").setProtoField("linewidthScaleFactor"))))
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,0.0)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("emissiveColor").setProtoField("lineColor")))))
          .setGeometry(new LineSet("Geometry_1").setVertexCount(new int[] {2})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-1.0,0.0,0.0,1.0,0.0,0.0})))))
        .addChild(new Script("Route").setDirectOutput(true).setSourceCode("""
ecmascript:
vrmlscript:
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
}
""")
          .addField(new field().setName("set_translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("routeDimension").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(21))
          .addField(new field().setName("output").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("input").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("geometry").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new LineSet().setUSE("Geometry_1")))
          .addField(new field().setName("self").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new Script().setUSE("Route")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("output").setProtoField("output"))
            .addConnect(new connect().setNodeField("input").setProtoField("input"))))))
    .addChild(new NavigationInfo().setType("\"PLANE_create3000.de\", \"ANY\""))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new OrthoViewpoint().setDescription("OthoViewpoint").setCenterOfRotation(-3.13496,-4.19776,0.0).setFieldOfView(0.0,0.0,10.0,10.0).setPosition(-3.13496,-4.19776,10.0))
    .addChild(new Viewpoint().setDescription("Viewpoint"))
    .addChild(new Transform("Connectors")
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node", "N1").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-3.98323,2.88948,0.0)))))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N2").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0890862,2.96049,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N1").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N3").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.104169,1.16371,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N1").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N4").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0998688,-0.40172,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N1").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N5").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(-0.0998687,-2.14742,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N2").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N6").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(3.55694,2.4116,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N3").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node").setUSE("N6").setContainerField("children"))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N4").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N7").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(3.75106,-0.0794556,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N5").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node").setUSE("N7").setContainerField("children"))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N6").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node", "N8").setContainerField("children")
            .addFieldValue(new fieldValue().setName("translation").setValue(new SFVec3f(7.68077,1.21228,0.0))))))
      .addChild(new ProtoInstance("Route").setContainerField("children")
        .addFieldValue(new fieldValue().setName("output")
          .addChild(new ProtoInstance("Node").setUSE("N7").setContainerField("children")))
        .addFieldValue(new fieldValue().setName("input")
          .addChild(new ProtoInstance("Node").setUSE("N8").setContainerField("children"))))
      .addChild(new ProtoInstance("Node").setUSE("N1").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N2").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N3").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N4").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N5").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N6").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N7").setContainerField("children"))
      .addChild(new ProtoInstance("Node").setUSE("N8").setContainerField("children"))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Connectors model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new Connectors().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.Connectors\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.Connectors self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./Connectors_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./Connectors_JavaExport.x3d"; 
                String filenameX3DV = "./Connectors_JavaExport.x3dv"; 
                String filenameJSON = "./Connectors_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

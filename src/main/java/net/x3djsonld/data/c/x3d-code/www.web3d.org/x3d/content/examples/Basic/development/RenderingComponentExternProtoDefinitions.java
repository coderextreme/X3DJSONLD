package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/RenderingComponentExternProtoDefinitions.java">RenderingComponentExternProtoDefinitions.java</a> source, <a href="../../../development/RenderingComponentExternProtoDefinitionsIndex.html" target="_top">RenderingComponentExternProtoDefinitions catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/RenderingComponentExternProtoDefinitions.x3d">RenderingComponentExternProtoDefinitions.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> .wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any new Rendering nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/RenderingComponentPrototypes.x3d">RenderingComponentPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/RenderingComponentExamples.x3d">RenderingComponentExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExternProtoDefinitions.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExternProtoDefinitions.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias
 */

public class RenderingComponentExternProtoDefinitions
{
	/** Default constructor to create this object. */
	public RenderingComponentExternProtoDefinitions ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("RenderingComponentExternProtoDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent(".wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any new Rendering nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("RenderingComponentPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("RenderingComponentExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExternProtoDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addComments(" Do not copy these ExternProtoDeclare statements, they are only provided for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility. ")
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("RenderingComponentExternProtoDefinitions.x3d"))
    .addChild(new ExternProtoDeclare("ColorRGBA").setName("ColorRGBA").setAppinfo("ColorRGBA defines a set of RGBA colors.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#ColorRGBA","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#ColorRGBA","RenderingComponentPrototypes.x3d#ColorRGBA","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#ColorRGBA"})
      .addField(new field().setName("color").setType(field.TYPE_MFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("locally override MFColorRGBA type (which is not supported in VRML 97) in order to downgrade to Color RGB"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("IndexedTriangleFanSet").setName("IndexedTriangleFanSet").setAppinfo("IndexedTriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#IndexedTriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleFanSet","RenderingComponentPrototypes.x3d#IndexedTriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleFanSet"})
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("IndexedTriangleSet").setName("IndexedTriangleSet").setAppinfo("IndexedTriangleSet represents a 3D shape composed of a collection of individual triangles.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#IndexedTriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleSet","RenderingComponentPrototypes.x3d#IndexedTriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleSet"})
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("IndexedTriangleStripSet").setName("IndexedTriangleStripSet").setAppinfo("IndexedTriangleStripSet represents a 3D shape composed of strips of triangles.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#IndexedTriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#IndexedTriangleStripSet","RenderingComponentPrototypes.x3d#IndexedTriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#IndexedTriangleStripSet"})
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("set_index").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("LineSet").setName("LineSet").setAppinfo("LineSet represents a 3D geometry formed by constructing polylines from 3D vertices.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#LineSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#LineSet","RenderingComponentPrototypes.x3d#LineSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#LineSet"})
      .addField(new field().setName("vertexCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("TriangleFanSet").setName("TriangleFanSet").setAppinfo("TriangleFanSet represents a 3D shape composed of triangles that form a fan shape around the first vertex declared in each fan.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#TriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleFanSet","RenderingComponentPrototypes.x3d#TriangleFanSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleFanSet"})
      .addField(new field().setName("fanCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("TriangleSet").setName("TriangleSet").setAppinfo("TriangleSet represents a 3D shape that represents a collection of individual triangles.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#TriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleSet","RenderingComponentPrototypes.x3d#TriangleSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleSet"})
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new ExternProtoDeclare("TriangleStripSet").setName("TriangleStripSet").setAppinfo("TriangleStripSet represents a 3D shape composed of strips of triangles.").setUrl(new String[] {"RenderingComponentPrototypes.wrl#TriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.wrl#TriangleStripSet","RenderingComponentPrototypes.x3d#TriangleStripSet","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d#TriangleStripSet"})
      .addField(new field().setName("stripCount").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("ccw").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("colorPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("normalPerVertex").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("solid").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Color ColorRGBA node only"))
      .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Coordinate node only"))
      .addField(new field().setName("normal").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Normal node only"))
      .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("TextureCoordinate node only"))
      .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.2,0.2,0.2})).setSkyColor(new MFColor(new double[] {0.2,0.2,0.2})))
    .addChild(new Anchor("LinkToExamples").setDescription("link to examples").setUrl(new String[] {"RenderingComponentExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d","RenderingComponentExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry(new Text().setString(new String[] {"RenderingComponentExternProtoDefinitions","is a developmental file.","Click this text to view","RenderingComponentExamples"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return RenderingComponentExternProtoDefinitions model
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
        X3D thisExampleX3dModel = new RenderingComponentExternProtoDefinitions().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.RenderingComponentExternProtoDefinitions\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.RenderingComponentExternProtoDefinitions\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Sample default scene which shows syntax and provides default relationships among Geospatial nodes. </p>
 <p> Related links: <a href="../../../Geospatial/newGeospatialScene.java">newGeospatialScene.java</a> source, <a href="../../../Geospatial/newGeospatialSceneIndex.html" target="_top">newGeospatialScene catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/newGeospatialScene.x3d">newGeospatialScene.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 23 May 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 14 March 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Sample default scene which shows syntax and provides default relationships among Geospatial nodes. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Empty nodes are provided as informational exampls and fail various diagnostic tests </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.x3d</a> </td>
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

public class newGeospatialScene
{
	/** Default constructor to create this object. */
	public newGeospatialScene ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("newGeospatialScene.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("23 May 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("14 March 2021"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Sample default scene which shows syntax and provides default relationships among Geospatial nodes."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Empty nodes are provided as informational exampls and fail various diagnostic tests"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/newGeospatialScene.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ExternProtoDeclare statements for Geospatial nodes are no longer needed for backwards compatibility for VRML 97, since X3dToVrml97.xsl now handles that task. ")
    .addComments(" This scene shows example Geospatial node relationships in a scene graph. ")
    .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo contains generic information or metadata about a model, not about the georeferenced information."}).setTitle("newGeospatialScene.x3d"))
    .addChild(new GeoMetadata().setUrl(new String[] {"https://exampleResource.com/ExternalMetadataDescription.x3d"})
      .addComments(" original GeoMetadata summary='\"title\" \"example title\" \"description\" \"example description\"' ")
      .setMetadata(new MetadataSet().setName("GeoMetadata.summary").setReference("https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-CD/Part01/components/geospatial.html#GeoMetadata")
        .setMetadata(new MetadataString().setName("title").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("description").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("coordinateSystem").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("horizontalDatum").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("verticalDatum").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("ellipsoid").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("extent").setValue(new String[] {"0"}))
        .setMetadata(new MetadataFloat().setName("resolution").setValue(new double[] {0.0}))
        .setMetadata(new MetadataString().setName("originator").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("copyright").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("date").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("metadataFormat").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("dataUrl").setValue(new String[] {"TODO"}))
        .setMetadata(new MetadataString().setName("dataFormat").setValue(new String[] {"TODO"}))))
    .addChild(new GeoViewpoint()
      .setGeoOrigin(new GeoOrigin("DefaultGeoOrigin")))
    .addComments(" GeoInline replaced by Inline ")
    .addChild(new Inline("GeoInlineReplacedByInline"))
    .addChild(new GeoLocation()
      .setGeoOrigin(new GeoOrigin().setUSE("DefaultGeoOrigin")))
    .addChild(new GeoLOD().setCenter(10.0,10.0,1.0).setRange(1000).setChild1Url(new String[] {"https://b"}).setChild2Url(new String[] {"https://c"}).setChild3Url(new String[] {"https://d"}).setChild4Url(new String[] {"https://e"}).setRootUrl(new String[] {"https://a"})
      .setGeoOrigin(new GeoOrigin().setUSE("DefaultGeoOrigin"))
      .addComments(" Nodes loaded via the 'rootUrl' field appear under 'rootNode' for current GeoLOD level. ")
      .addComments(" Defining both 'rootUrl' and 'rootNode' is erroneous, use either one or the other. ")
      .addComments(" rootNode nodes are the default geometry to be shown at this level of detail ")
      .addRootNode(new WorldInfo())
      .addRootNode(new Shape()))
    .addChild(new Shape("ExampleGeoSnippet1")
      .setGeometry(new GeoElevationGrid("EmptyGeoElevationGrid").setHeight(new double[] {0.0,0.0})
        .setGeoOrigin(new GeoOrigin().setUSE("DefaultGeoOrigin"))
        .setColor(new Color())
        .setNormal(new Normal())
        .setTexCoord(new TextureCoordinate())))
    .addChild(new Shape("ExampleGeoSnippet2")
      .setGeometry(new IndexedFaceSet()
        .setCoord(new GeoCoordinate()
          .setGeoOrigin(new GeoOrigin().setUSE("DefaultGeoOrigin"))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return newGeospatialScene model
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
        X3D thisExampleX3dModel = new newGeospatialScene().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.newGeospatialScene\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.newGeospatialScene\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

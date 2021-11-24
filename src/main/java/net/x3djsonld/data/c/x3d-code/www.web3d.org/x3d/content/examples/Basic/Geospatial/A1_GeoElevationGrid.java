package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Specification example shows the use of the GeoElevationGrid and the GeoViewpoint nodes. A flat grid is mapped to the full extent of Earth latitude and longitude. </p>
 <p> Related links: <a href="../../../Geospatial/A1_GeoElevationGrid.java">A1_GeoElevationGrid.java</a> source, <a href="../../../Geospatial/A1_GeoElevationGridIndex.html" target="_top">A1_GeoElevationGrid catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/A1_GeoElevationGrid.x3d">A1_GeoElevationGrid.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Reddy SRI, original example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman NPS, X3D encoding </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under revision, not matching spec example. Trying to get Background aligned. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Specification example shows the use of the GeoElevationGrid and the GeoViewpoint nodes. A flat grid is mapped to the full extent of Earth latitude and longitude. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/1.0/doc/examples.html" target="_blank">http://www.geovrml.org/1.0/doc/examples.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/exagearth.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> VRML 97 encoding <a href="http://www.geovrml.org/1.0/doc/examples/exagearth.wrl" target="_blank">http://www.geovrml.org/1.0/doc/examples/exagearth.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A1_GeoElevationGrid.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A1_GeoElevationGrid.x3d</a> </td>
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

	* @author Martin Reddy SRI, original example
	* @author Don Brutzman NPS, X3D encoding
 */

public class A1_GeoElevationGrid
{
	/** Default constructor to create this object. */
	public A1_GeoElevationGrid ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("A1_GeoElevationGrid.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Reddy SRI, original example"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman NPS, X3D encoding"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under revision, not matching spec example. Trying to get Background aligned."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Specification example shows the use of the GeoElevationGrid and the GeoViewpoint nodes. A flat grid is mapped to the full extent of Earth latitude and longitude."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/1.0/doc/examples.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/exagearth.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/exagearth.wrl"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A1_GeoElevationGrid.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" This scene shows example Geospatial node relationships in a scene graph. ")
    .addChild(new WorldInfo().setTitle("A1_GeoElevationGrid.x3d"))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.1,0.1,0.8})).setSkyColor(new MFColor(new double[] {0.1,0.1,0.8})))
    .addChild(new GeoViewpoint().setDescription("Initial GeoViewpoint").setOrientation(1.0,0.0,0.0,-1.57).setPosition(35.0,70.0,30000000.0))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(0.3,1.0,0.3)))
      .setGeometry(new GeoElevationGrid().setGeoGridOrigin(-90.0,-180.0,0.0).setXDimension(21).setXSpacing(18).setYScale(200).setZDimension(11).setZSpacing(18).setHeight(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,3135.0,2976.0,2529.0,2135.0,3449.0,2899.0,3190.0,2375.0,0.0,0.0,3086.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,25.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,142.0,792.0,0.0,0.0,0.0,969.0,0.0,0.0,0.0,0.0,0.0,495.0,276.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,320.0,46.0,60.0,0.0,0.0,0.0,588.0,0.0,0.0,0.0,0.0,0.0,0.0,34.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,301.0,601.0,837.0,627.0,0.0,880.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,202.0,1.0,0.0,0.0,0.0,0.0,1241.0,385.0,6.0,582.0,468.0,215.0,5201.0,529.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1304.0,427.0,365.0,374.0,0.0,0.0,0.0,1977.0,345.0,22.0,132.0,325.0,2072.0,1256.0,171.0,0.0,0.0,0.0,0.0,706.0,1896.0,464.0,134.0,0.0,0.0,2563.0,0.0,0.0,0.0,143.0,11.0,784.0,88.0,498.0,307.0,108.0,1707.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,600.0,378.0,1378.0,339.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return A1_GeoElevationGrid model
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
        X3D thisExampleX3dModel = new A1_GeoElevationGrid().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.A1_GeoElevationGrid\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.A1_GeoElevationGrid\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

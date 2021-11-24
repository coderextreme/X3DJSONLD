package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geospatial.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X Y Z axis arrows and labels in Geospatial coordinate system. </p>
 <p> Related links: <a href="../../../Geospatial/GeospatialCoordinateAxesNsewExample.java">GeospatialCoordinateAxesNsewExample.java</a> source, <a href="../../../Geospatial/GeospatialCoordinateAxesNsewExampleIndex.html" target="_top">GeospatialCoordinateAxesNsewExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/GeospatialCoordinateAxesNsewExample.x3d">GeospatialCoordinateAxesNsewExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Byounghyun Yoo </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 June 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> fix background globe </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X Y Z axis arrows and labels in Geospatial coordinate system. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Geospatial/GeospatialCoordinateAxesNsewExample.png">GeospatialCoordinateAxesNsewExample.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d" target="_blank">https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeospatialCoordinateAxesNsewExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeospatialCoordinateAxesNsewExample.x3d</a> </td>
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

	* @author Byounghyun Yoo
 */

public class GeospatialCoordinateAxesNsewExample
{
	/** Default constructor to create this object. */
	public GeospatialCoordinateAxesNsewExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("GeospatialCoordinateAxesNsewExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Byounghyun Yoo"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 June 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("fix background globe"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X Y Z axis arrows and labels in Geospatial coordinate system."))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("GeospatialCoordinateAxesNsewExample.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/GeospatialCoordinateAxesNsewExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" X3D Earth is already geospatially referenced ")
    .addChild(new WorldInfo().setTitle("GeospatialCoordinateAxesNsewExample.x3d"))
    .addChild(new Inline("X3D-Earth").setUrl(new String[] {"http://x3d-earth.nps.edu/d0.x3d"}))
    .addChild(new Group()
      .addComments(" Each GeoLocation block shows how to geospatially reference regular nongeospatial shapes ")
      .addChild(new GeoLocation()
        .setGeoOrigin(new GeoOrigin("ORIGIN").setGeoCoords(0.0,0.0,-6378137.0))
        .addChild(new Transform("ScaledCoordinateAxesNSEW").setScale(1000000.0,1000000.0,1000000.0)
          .addChild(new Inline("CoordinateAxesNSEW").setUrl(new String[] {"../course/CoordinateAxesNSEW.x3d","CoordinateAxesNSEW.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/CoordinateAxesNSEW.x3d"}))))
      .addChild(new GeoLocation().setGeoCoords(0.0,45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,180.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,-45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,-89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(0.0,-135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,0.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(89.9,0.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,0.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-89.9,0.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,180.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,180.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,-45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,-89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,-89.9,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(45.0,-135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,-135.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoLocation().setGeoCoords(-45.0,-45.0,0.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN"))
        .addChild(new Transform().setUSE("ScaledCoordinateAxesNSEW")))
      .addChild(new GeoViewpoint().setDescription("0E 0N").setFieldOfView(1.05).setOrientation(1.0,0.0,1.0,-1.5707).setPosition(0.0,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("90E 0N").setFieldOfView(1.05).setOrientation(1.0,0.0,1.0,-1.5707).setPosition(0.0,89.900002,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("90W 0N").setFieldOfView(1.05).setOrientation(1.0,0.0,1.0,-1.5707).setPosition(0.0,-89.900002,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("180E 0N").setFieldOfView(1.05).setOrientation(1.0,0.0,0.0,-1.5707).setPosition(0.0,180.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("North Pole").setFieldOfView(1.05).setOrientation(1.0,0.0,0.0,-1.5707).setPosition(90.0,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))
      .addChild(new GeoViewpoint().setDescription("South Pole").setFieldOfView(1.05).setOrientation(1.0,0.0,0.0,-1.5707).setPosition(-89.9,0.0,10000000.0)
        .setGeoOrigin(new GeoOrigin().setUSE("ORIGIN")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return GeospatialCoordinateAxesNsewExample model
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
        X3D thisExampleX3dModel = new GeospatialCoordinateAxesNsewExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.GeospatialCoordinateAxesNsewExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.GeospatialCoordinateAxesNsewExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

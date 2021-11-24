package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped. </p>
 <p> Related links: <a href="../../../CAD/ClipPlaneExample.java">ClipPlaneExample.java</a> source, <a href="../../../CAD/ClipPlaneExampleIndex.html" target="_top">ClipPlaneExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExample.x3d">ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Nicholas Polys, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 20 February 2013 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExample.x3d">ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleFront.png">ClipPlaneExampleFront.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleOblique.png">ClipPlaneExampleOblique.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleOverhead.png">ClipPlaneExampleOverhead.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../CAD/ClipPlaneExampleSide.png">ClipPlaneExampleSide.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vivaty Studio </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../../license.html">../../license.html</a> </td>
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

	* @author Nicholas Polys, Don Brutzman
 */

public class ClipPlaneExample
{
	/** Default constructor to create this object. */
	public ClipPlaneExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Rendering").setLevel(5))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ClipPlaneExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Nicholas Polys, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("20 February 2013"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Illustrate use of two ClipPlane intersections across four sets of primitive geometry. Line indicators are outside the scope of the ClipPlane transformation hierarchy and so are not clipped."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ClipPlaneExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ClipPlaneExampleFront.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ClipPlaneExampleOblique.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ClipPlaneExampleOverhead.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ClipPlaneExampleSide.png"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/ClipPlaneExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vivaty Studio"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addComments(" TODO Schematron error for orientation='0 0 0 0' ")
    .addChild(new Viewpoint().setDescription("ClipPlanes front view").setPosition(0.0,1.0,10.0))
    .addChild(new Viewpoint().setDescription("ClipPlanes oblique view").setOrientation(1.0,0.0,0.0,-0.851966).setPosition(0.0,8.0,7.0))
    .addChild(new Viewpoint().setDescription("ClipPlanes overhead view").setOrientation(1.0,0.0,0.0,-1.570796).setPosition(0.0,12.0,0.0))
    .addChild(new Viewpoint().setDescription("ClipPlanes side view").setOrientation(-0.03326,0.99889,0.03326,1.571904).setPosition(15.0,1.0,0.0))
    .addChild(new Background("WhiteBackground").setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new Group("ClipPlaneGroup")
      .addComments(" ClipPlane nodes affect peers and children ")
      .addChild(new ClipPlane("ClipPlaneHorizontal"))
      .addChild(new ClipPlane("ClipPlaneVertical").setPlane(0.0,0.0,-1.0,0.0))
      .addComments(" Non-standard scripting animation test for ClipPlane <PythonScript DEF=\"PS\" url=\"OpacityMapStyle.py\" /> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='PS' toField='planeEquation'/> <ROUTE fromNode='PS' fromField='planeEquation' toNode='CP' toField='plane'/> ")
      .addComments(" <TimeSensor DEF='timer' cycleInterval='13.000' loop='true' startTime='0.000'/> <ROUTE fromNode='timer' fromField='fraction_changed' toNode='timer_pos0' toField='set_fraction'/> <ROUTE fromNode='timer_pos0' fromField='value_changed' toNode='move' toField='set_translation'/> ")
      .addChild(new Group("PrimitiveShapes")
        .addChild(new WorldInfo().setInfo(new String[] {"This Web3D Content was created with Vivaty Studio, a Web3D authoring tool","www.mediamachines.com"}).setTitle("primitives"))
        .addChild(new Transform("dad_Box1").setTranslation(-3.0,0.0,0.0)
          .addChild(new Shape("Box1")
            .setAppearance(new Appearance()
              .setMaterial(new Material("Red").setAmbientIntensity(.2).setDiffuseColor(1.0,0.0,0.0).setShininess(.2)))
            .setGeometry(new Box("GeoBox1").setSolid(false))))
        .addChild(new Transform("dad_Cylinder1").setTranslation(-1.0,0.0,0.0)
          .addChild(new Shape("Cylinder1")
            .setAppearance(new Appearance()
              .setMaterial(new Material("Green").setAmbientIntensity(.2).setDiffuseColor(0.0,1.0,0.0).setShininess(.2)))
            .setGeometry(new Cylinder("GeoCylinder1").setSolid(false))))
        .addChild(new Transform("dad_Cone1").setTranslation(1.0,0.0,0.0)
          .addChild(new Shape("Cone1")
            .setAppearance(new Appearance()
              .setMaterial(new Material("Blue").setAmbientIntensity(.2).setDiffuseColor(0.0,0.0,1.0).setShininess(.2)))
            .setGeometry(new Cone("GeoCone1").setSolid(false))))
        .addChild(new Transform("dad_Sphere1").setTranslation(3.0,0.0,0.0)
          .addChild(new Shape("Sphere1")
            .setAppearance(new Appearance()
              .setMaterial(new Material("Shiny_Yellow").setAmbientIntensity(.2).setDiffuseColor(1.0,1.0,0.0).setShininess(.1).setSpecularColor(1.0,1.0,0.0)))
            .setGeometry(new Sphere("GeoSphere1").setSolid(false))))
        .addChild(new Transform("dad_Light1").setTranslation(0.0,5.0,0.0)
          .addChild(new PointLight("Light1")))
        .addChild(new Transform("dad_Background1").setTranslation(-.73213,4.14112,0.0)
          .addChild(new Background("Background1").setGroundColor(new MFColor(new double[] {1.0,1.0,1.0})).setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))))
      .addChild(new Transform().setTranslation(0.0,3.0,0.0)
        .addChild(new Group().setUSE("PrimitiveShapes"))))
    .addComments(" Keep boundary lines outside of scope of the two clipping planes so that they can illustrate boundaries without being cut off ")
    .addChild(new Group("BoundaryLines")
      .addChild(new Transform("move").setTranslation(0.0,.00001,0.0)
        .addChild(new Shape("PlaneOutlineHorizontal")
          .setAppearance(new Appearance("BoundaryLineAppearance")
            .setMaterial(new Material().setAmbientIntensity(.2).setEmissiveColor(0.1,0.1,0.1)))
          .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {5.0,0.0,-2.0,5.0,0.0,2.0,-5.0,0.0,2.0,-5.0,0.0,-2.0}))))))
      .addChild(new PositionInterpolator("timer_pos0").setKey(new double[] {0.0,.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,2.0,0.0,0.0,-2.0,0.0,0.0,2.0,0.0})))
      .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.578)
        .addChild(new Transform("move2").setTranslation(0.0,.00001,0.0)
          .addChild(new Shape("PlaneOutlineVertical")
            .setAppearance(new Appearance().setUSE("BoundaryLineAppearance"))
            .addComments(" also includes center line ")
            .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,2,3,0,-1,4,5,-1})
              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {5.0,0.0,-2.0,5.0,0.0,4.0,-5.0,0.0,4.0,-5.0,0.0,-2.0,5.0,0.0,0.0,-5.0,0.0,0.0})))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ClipPlaneExample model
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
        X3D thisExampleX3dModel = new ClipPlaneExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ClipPlaneExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ClipPlaneExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

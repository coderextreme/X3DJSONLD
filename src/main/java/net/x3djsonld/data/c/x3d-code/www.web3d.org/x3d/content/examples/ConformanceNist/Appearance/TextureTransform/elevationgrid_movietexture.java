package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test default TextureTransform mapping of a MovieTexture to an ElevationGrid. An ElevationGrid is default texture mapped by aligning the +S (horizontal) axis of the VTS logo with the +X axis of the ElevationGrid and the +T (vertical) axis of the VTS logo with the +Z axis of the ElevationGrid. The bottom of the VTS logo coincides with the first row of grid points and the top of the VTS logo maps to the last row of grid points. </p>
 <p> Related links: <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture.java">elevationgrid_movietexture.java</a> source, <a href="../../../../Appearance/TextureTransform/elevationgrid_movietextureIndex.html" target="_top">elevationgrid_movietexture catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture.x3d">elevationgrid_movietexture.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-front.jpg">elevationgrid_movietexture-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-rear.jpg">elevationgrid_movietexture-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-top.jpg">elevationgrid_movietexture-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-bottom.jpg">elevationgrid_movietexture-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-left.jpg">elevationgrid_movietexture-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/elevationgrid_movietexture-right.jpg">elevationgrid_movietexture-right.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/vrml.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/vrml.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> <a href="http://www.itl.nist.gov/div897/ctg/vrml/members.html" target="_blank">http://www.itl.nist.gov/div897/ctg/vrml/members.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> disclaimer </i> </td>
			<td> This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at <a href="http://www.nist.gov/vrml.html" target="_blank">http://www.nist.gov/vrml.html</a> The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, <a href="https://www.web3d.org/working-groups/x3d" target="_blank">https://www.web3d.org/working-groups/x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Michael Kass NIST, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 21 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test default TextureTransform mapping of a MovieTexture to an ElevationGrid. An ElevationGrid is default texture mapped by aligning the +S (horizontal) axis of the VTS logo with the +X axis of the ElevationGrid and the +T (vertical) axis of the VTS logo with the +Z axis of the ElevationGrid. The bottom of the VTS logo coincides with the first row of grid points and the top of the VTS logo maps to the last row of grid points. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/elevationgrid_movietexture.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/elevationgrid_movietexture.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Appearance/TextureTransform/../../license.html">../../license.html</a> </td>
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

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

public class elevationgrid_movietexture
{
	/** Default constructor to create this object. */
	public elevationgrid_movietexture ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("elevationgrid_movietexture.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-left.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("elevationgrid_movietexture-right.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test default TextureTransform mapping of a MovieTexture to an ElevationGrid. An ElevationGrid is default texture mapped by aligning the +S (horizontal) axis of the VTS logo with the +X axis of the ElevationGrid and the +T (vertical) axis of the VTS logo with the +Z axis of the ElevationGrid. The bottom of the VTS logo coincides with the first row of grid points and the top of the VTS logo maps to the last row of grid points."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/elevationgrid_movietexture.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("elevationgrid_movietexture.x3d"))
    .addChild(new Group()
      .addChild(new Viewpoint().setDescription("Front View"))
      .addChild(new Viewpoint().setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
      .addChild(new Viewpoint().setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
      .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
      .addChild(new Viewpoint().setDescription("Right View").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
      .addChild(new Viewpoint().setDescription("Left View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0)))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material())
        .setTexture(new MovieTexture().setLoop(true).setUrl(new String[] {"vts.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.mpg"}))
        .setTextureTransform(new TextureTransform()))
      .setGeometry(new ElevationGrid().setSolid(false).setXDimension(21).setXSpacing(0.2).setZDimension(21).setZSpacing(0.15).setHeight(getElevationGrid_4_35_height()))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getElevationGrid_4_35_height_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0233242,0.0461275,0.0679003,0.0881563,0.106443,0.122352,0.135528,0.145676,0.152571,0.156057,0.156057,0.152571,0.145676,0.135528,0.122352,0.106443,0.0881566,0.0679006,0.0461278,0.0233246,0.0,0.0461275,0.0912245,0.134284,0.174343,0.210508,0.241971,0.268028,0.288098,0.301733,0.308627,0.308627,0.301733,0.288099,0.268029,0.241971,0.210509,0.174344,0.134284,0.0912253,0.0461283,0.0,0.0679003,0.134284,0.197668,0.256636,0.309871,0.356185,0.394542,0.424085,0.444155,0.454304,0.454304,0.444155,0.424085,0.394542,0.356185,0.309872,0.256637,0.197669,0.134285,0.0679015,0.0,0.0881563,0.174343,0.256636,0.333195,0.402312,0.462442,0.512241,0.550598,0.576656,0.589832,0.589832,0.576656,0.550599,0.512242,0.462443,0.402313,0.333197,0.256637,0.174345,0.0881578,0.0,0.106443,0.210508,0.309871,0.402312,0.485766,0.558369,0.618498,0.664812,0.696275,0.712184,0.712184,0.696275,0.664813,0.618499,0.55837,0.485767,0.402314,0.309873,0.21051,0.106445,0.0,0.122352,0.241971,0.356185,0.462442,0.558369,0.641823,0.710939,0.764175,0.80034,0.818627,0.818627,0.800341,0.764176,0.710941,0.641824,0.55837,0.462444,0.356187,0.241973,0.122354,0.0,0.135528,0.268028,0.394542,0.512241,0.618498,0.710939,0.787499,0.846468,0.886527,0.906783,0.906784,0.886528,0.846468,0.7875,0.710941,0.6185,0.512243,0.394544,0.268031,0.13553,0.0,0.145676,0.288098,0.424085,0.550598,0.664812,0.764175,0.846468,0.909852,0.952911,0.974684,0.974684,0.952911,0.909852,0.846469,0.764177,0.664814,0.5506,0.424087,0.288101,0.145679,0.0,0.152571,0.301733,0.444155,0.576656,0.696275,0.80034,0.886527,0.952911,0.998008,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0.0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906783,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0.0,0.156057,0.308627,0.454304,0.589832,0.712184,0.818627,0.906784,0.974684,1.02081,1.04414,1.04414,1.02081,0.974685,0.906785,0.818629,0.712186,0.589834,0.454306,0.30863,0.156059,0.0,0.152571,0.301733,0.444155,0.576656,0.696275,0.800341,0.886528,0.952911,0.998009,1.02081,1.02081,0.998009,0.952912,0.886529,0.800342,0.696277,0.576658,0.444158,0.301736,0.152573,0.0,0.145676,0.288099,0.424085,0.550599,0.664813,0.764176,0.846468,0.909852,0.952912,0.974685,0.974685,0.952912,0.909853,0.84647,0.764177,0.664815,0.550601,0.424088,0.288101,0.145679,0.0,0.135528,0.268029,0.394542,0.512242,0.618499,0.710941,0.7875,0.846469,0.886529,0.906785,0.906785,0.886529,0.84647,0.787502,0.710942,0.618501,0.512244,0.394544,0.268031,0.135531,0.0,0.122352,0.241971,0.356185,0.462443,0.55837,0.641824,0.710941,0.764177,0.800342,0.818629,0.818629,0.800342,0.764177,0.710942,0.641825,0.558372,0.462445,0.356187,0.241974,0.122354,0.0,0.106443,0.210509,0.309872,0.402313,0.485767,0.55837,0.6185,0.664814,0.696277,0.712186,0.712186,0.696277,0.664815,0.618501,0.558372,0.485769,0.402315,0.309874,0.210511,0.106445,0.0,0.0881566,0.174344,0.256637,0.333197,0.402314,0.462444,0.512243,0.5506,0.576658,0.589834,0.589834,0.576658,0.550601,0.512244,0.462445,0.402315,0.333198,0.256638,0.174345,0.0881582,0.0,0.0679006,0.134284,0.197669,0.256637,0.309873,0.356187,0.394544,0.424087,0.444158,0.454306,0.454306,0.444158,0.424088,0.394544,0.356187,0.309874,0.256638,0.19767,0.134286,0.0679018,0.0,0.0461278,0.0912253,0.134285,0.174345,0.21051,0.241973,0.268031,0.288101,0.301736,0.30863,0.30863,0.301736,0.288101,0.268031,0.241974,0.210511,0.174345,0.134286,0.0912261,0.0461287,0.0,0.0233246,0.0461283,0.0679015,0.0881578,0.106445,0.122354,0.13553,0.145679,0.152573,0.156059,0.156059,0.152573,0.145679,0.135531,0.122354,0.106445,0.0881582,0.0679018,0.0461287,0.0233251};
			return value;
		}

		/** Large attribute array: ElevationGrid height field, scene-graph level=4, element #35, 441 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getElevationGrid_4_35_height()
		{
			MFFloat ElevationGrid_4_35_height = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getElevationGrid_4_35_height_1()));
			return ElevationGrid_4_35_height;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return elevationgrid_movietexture model
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
        X3D thisExampleX3dModel = new elevationgrid_movietexture().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.elevationgrid_movietexture\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.elevationgrid_movietexture\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

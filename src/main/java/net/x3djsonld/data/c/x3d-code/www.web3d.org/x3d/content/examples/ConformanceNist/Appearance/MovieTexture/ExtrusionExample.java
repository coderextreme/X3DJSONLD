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
 * <p> Test default mapping of an mpeg movie to an Extrusion. The movie is applied to an Extrusion by aligning the bottom of the VTS logo with the first cross-section at the first spint point, and the top of the VTS logo coincides with the last cross-section at the last spine point. The left side of the VTS logo is aligned with the first cross-section point of all spine points, and the right side of the VTS logo coincides with the last cross-section point for all spine points. For the ends of the extrusion, The VTS logo will map with the S (horizontal) texture axis aligning with the X axis of the cap, and the T (vertical) texture axis aligning with the Z axis of the cap. </p>
 <p> Related links: <a href="../../../../Appearance/MovieTexture/ExtrusionExample.java">ExtrusionExample.java</a> source, <a href="../../../../Appearance/MovieTexture/ExtrusionExampleIndex.html" target="_top">ExtrusionExample catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/ExtrusionExample.x3d">ExtrusionExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-front.jpg">Extrusion-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-rear.jpg">Extrusion-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-top.jpg">Extrusion-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-bottom.jpg">Extrusion-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-left.jpg">Extrusion-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/MovieTexture/Extrusion-right.jpg">Extrusion-right.jpg</a> </td>
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
			<td> 16 June 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test default mapping of an mpeg movie to an Extrusion. The movie is applied to an Extrusion by aligning the bottom of the VTS logo with the first cross-section at the first spint point, and the top of the VTS logo coincides with the last cross-section at the last spine point. The left side of the VTS logo is aligned with the first cross-section point of all spine points, and the right side of the VTS logo coincides with the last cross-section point for all spine points. For the ends of the extrusion, The VTS logo will map with the S (horizontal) texture axis aligning with the X axis of the cap, and the T (vertical) texture axis aligning with the Z axis of the cap. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/ExtrusionExample.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/ExtrusionExample.x3d</a> </td>
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
			<td> <a href="../../../../Appearance/MovieTexture/../../license.html">../../license.html</a> </td>
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

public class ExtrusionExample
{
	/** Default constructor to create this object. */
	public ExtrusionExample ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ExtrusionExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-left.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Extrusion-right.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("16 June 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test default mapping of an mpeg movie to an Extrusion. The movie is applied to an Extrusion by aligning the bottom of the VTS logo with the first cross-section at the first spint point, and the top of the VTS logo coincides with the last cross-section at the last spine point. The left side of the VTS logo is aligned with the first cross-section point of all spine points, and the right side of the VTS logo coincides with the last cross-section point for all spine points. For the ends of the extrusion, The VTS logo will map with the S (horizontal) texture axis aligning with the X axis of the cap, and the T (vertical) texture axis aligning with the Z axis of the cap."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/ExtrusionExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Extrusion.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Transform().setTranslation(-0.0541457,1.51608,-4.17233e-007)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setTexture(new MovieTexture().setLoop(true).setUrl(new String[] {"vts.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.mpg"}))
          .setMaterial(new Material()))
        .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {1,-2.44921e-016,0.932472,-0.361242,0.739009,-0.673696,0.445738,-0.895164,0.0922675,-0.995734,-0.273664,-0.961825,-0.602635,-0.798017,-0.850218,-0.526432,-0.982973,-0.183749,-0.982973,0.18375,-0.850217,0.526433,-0.602634,0.798018,-0.273663,0.961826,0.0922688,0.995734,0.445739,0.895163,0.739009,0.673695,0.932472,0.361241,1,-2.44921e-016})).setOrientation(new MFRotation(new double[] {0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0})).setScale(new MFVec2f(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0})).setSpine(new MFVec3f(new double[] {-0.779795,-0.712716,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.779795,1.78598,0.0}))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ExtrusionExample model
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
        X3D thisExampleX3dModel = new ExtrusionExample().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ExtrusionExample\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ExtrusionExample\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

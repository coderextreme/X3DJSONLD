package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test different size and spacing values for FontStyle node. Three different "size" and "spacing" combinations are used here to test browser ability to properly space text both horizontally and vertically. The first test sets size = 2 and spacing = 0.5 (the red text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 2 units. The second test sets size = 1 and spacing = 1 (the yellow text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 1 unit. The first test sets size = 0.75 and spacing = 4 (the blue text). Distance between the base of the two text lines should be 3 units. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 0.75 units. </p>
 <p> Related links: <a href="../../../../Appearance/FontStyle/size_spacing.java">size_spacing.java</a> source, <a href="../../../../Appearance/FontStyle/size_spacingIndex.html" target="_top">size_spacing catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/size_spacing.x3d">size_spacing.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/size_spacing-front.jpg">size_spacing-front.jpg</a> </td>
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
			<td> Test different size and spacing values for FontStyle node. Three different "size" and "spacing" combinations are used here to test browser ability to properly space text both horizontally and vertically. The first test sets size = 2 and spacing = 0.5 (the red text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 2 units. The second test sets size = 1 and spacing = 1 (the yellow text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 1 unit. The first test sets size = 0.75 and spacing = 4 (the blue text). Distance between the base of the two text lines should be 3 units. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 0.75 units. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/size_spacing.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/size_spacing.x3d</a> </td>
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
			<td> <a href="../../../../Appearance/FontStyle/../../license.html">../../license.html</a> </td>
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

public class size_spacing
{
	/** Default constructor to create this object. */
	public size_spacing ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("size_spacing.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("size_spacing-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test different size and spacing values for FontStyle node. Three different \"size\" and \"spacing\" combinations are used here to test browser ability to properly space text both horizontally and vertically. The first test sets size = 2 and spacing = 0.5 (the red text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 2 units. The second test sets size = 1 and spacing = 1 (the yellow text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 1 unit. The first test sets size = 0.75 and spacing = 4 (the blue text). Distance between the base of the two text lines should be 3 units. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 0.75 units."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/size_spacing.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("size_spacing.x3d"))
    .addChild(new Viewpoint().setDescription("FontStyle size and spacing").setPosition(0.0,0.0,22.0))
    .addChild(new Transform().setTranslation(-15.0,6.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Size 2","Spacing .5"})
          .setFontStyle(new FontStyle().setSize(2).setSpacing(0.5)))))
    .addChild(new Transform().setTranslation(-8.0,1.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Size 1","Spacing 1"})
          .setFontStyle(new FontStyle()))))
    .addChild(new Transform().setTranslation(0.0,9.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Size 2","Spacing .5"})
          .setFontStyle(new FontStyle().setHorizontal(false).setSize(2).setSpacing(0.5)))))
    .addChild(new Transform().setTranslation(7.0,9.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Size 1","Spacing 1"})
          .setFontStyle(new FontStyle().setHorizontal(false)))))
    .addChild(new Transform().setTranslation(-15.0,-4.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Size 0.75","Spacing 4"})
          .setFontStyle(new FontStyle().setSize(0.75).setSpacing(4)))))
    .addChild(new Transform().setTranslation(12.0,9.0,0.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"Size 0.75","Spacing 4"})
          .setFontStyle(new FontStyle().setHorizontal(false).setSize(0.75).setSpacing(4)))))
    .addChild(new Transform("LEFT")
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1,36,37,-1,38,39,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,-10.0,0.0,0.0,-10.0,0.0,-20.0,-9.0,0.0,0.0,-9.0,0.0,-20.0,-8.0,0.0,0.0,-8.0,0.0,-20.0,-7.0,0.0,0.0,-7.0,0.0,-20.0,-6.0,0.0,0.0,-6.0,0.0,-20.0,-5.0,0.0,0.0,-5.0,0.0,-20.0,-4.0,0.0,0.0,-4.0,0.0,-20.0,-3.0,0.0,0.0,-3.0,0.0,-20.0,-2.0,0.0,0.0,-2.0,0.0,-20.0,-1.0,0.0,0.0,-1.0,0.0,-20.0,1.0,0.0,0.0,1.0,0.0,-20.0,2.0,0.0,0.0,2.0,0.0,-20.0,3.0,0.0,0.0,3.0,0.0,-20.0,4.0,0.0,0.0,4.0,0.0,-20.0,5.0,0.0,0.0,5.0,0.0,-20.0,6.0,0.0,0.0,6.0,0.0,-20.0,7.0,0.0,0.0,7.0,0.0,-20.0,8.0,0.0,0.0,8.0,0.0,-20.0,9.0,0.0,0.0,9.0,0.0,-20.0,10.0,0.0,0.0,10.0,0.0}))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))))
    .addChild(new Transform("RIGHT")
      .addChild(new Shape()
        .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1,36,37,-1,38,39,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,10.0,0.0,1.0,-10.0,0.0,2.0,10.0,0.0,2.0,-10.0,0.0,3.0,10.0,0.0,3.0,-10.0,0.0,4.0,10.0,0.0,4.0,-10.0,0.0,5.0,10.0,0.0,5.0,-10.0,0.0,6.0,10.0,0.0,6.0,-10.0,0.0,7.0,10.0,0.0,7.0,-10.0,0.0,8.0,10.0,0.0,8.0,-10.0,0.0,9.0,10.0,0.0,9.0,-10.0,0.0,10.0,10.0,0.0,10.0,-10.0,0.0,11.0,10.0,0.0,11.0,-10.0,0.0,12.0,10.0,0.0,12.0,-10.0,0.0,13.0,10.0,0.0,13.0,-10.0,0.0,14.0,10.0,0.0,14.0,-10.0,0.0,15.0,10.0,0.0,15.0,-10.0,0.0,16.0,10.0,0.0,16.0,-10.0,0.0,17.0,10.0,0.0,17.0,-10.0,0.0,18.0,10.0,0.0,18.0,-10.0,0.0,19.0,10.0,0.0,19.0,-10.0,0.0,20.0,10.0,0.0,20.0,-10.0,0.0}))))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))
        .setGeometry(new IndexedLineSet("AXES").setDEF("AXES").setCoordIndex(new int[] {0,1,-1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-20.0,0.0,0.0,20.0,0.0,0.0,0.0,10.0,0.0,0.0,-10.0,0.0})))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return size_spacing model
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
        X3D thisExampleX3dModel = new size_spacing().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.size_spacing\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.size_spacing\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

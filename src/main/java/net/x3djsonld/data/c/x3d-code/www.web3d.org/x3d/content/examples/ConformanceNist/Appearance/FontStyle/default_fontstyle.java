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
 * <p> Test default FontStyle rendering. A FontStyle node with default values for all of its fields is used to render three lines of a Text geometry. Horizontal lines in this world are spaced 1 unit apart. The green lines represent the X and Y axes of the local coordinate system. With a default "family" value of SERIF, the text should be be a SERIF family font. With "horizontal" equal to true, the text should be parallel to the X axis, and advance in the positive X direction. With "justify" = [BEGIN,"FIRST"], the text should be justified at the left edge of the line. With "leftToRight" = true, text should advance in a "left to right" direction along the major (X) axis. With a default font "size" of 1, the nominal font "glyph" height should be 1 unit in the local coordinate system. This corresponds to the distance between successive horizontal lines in this world. With a default font "spacing" of 1, the distance between the base of two succesive Text lines should be 1 unit in the local coordinate system. With a default "style" of PLAIN, the text should not appear bold, or italic, or bold and italic. With a default "topToBottom" value of true, successive lines of text should advance from top to bottom along the minor (Y) axis. </p>
 <p> Related links: <a href="../../../../Appearance/FontStyle/default_fontstyle.java">default_fontstyle.java</a> source, <a href="../../../../Appearance/FontStyle/default_fontstyleIndex.html" target="_top">default_fontstyle catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/default_fontstyle.x3d">default_fontstyle.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/default-front.jpg">default-front.jpg</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/FontStyle/ConformanceNistAppearanceFontStyleDefaultDefaultMultipleBrowsers.png">ConformanceNistAppearanceFontStyleDefaultDefaultMultipleBrowsers.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test default FontStyle rendering. A FontStyle node with default values for all of its fields is used to render three lines of a Text geometry. Horizontal lines in this world are spaced 1 unit apart. The green lines represent the X and Y axes of the local coordinate system. With a default "family" value of SERIF, the text should be be a SERIF family font. With "horizontal" equal to true, the text should be parallel to the X axis, and advance in the positive X direction. With "justify" = [BEGIN,"FIRST"], the text should be justified at the left edge of the line. With "leftToRight" = true, text should advance in a "left to right" direction along the major (X) axis. With a default font "size" of 1, the nominal font "glyph" height should be 1 unit in the local coordinate system. This corresponds to the distance between successive horizontal lines in this world. With a default font "spacing" of 1, the distance between the base of two succesive Text lines should be 1 unit in the local coordinate system. With a default "style" of PLAIN, the text should not appear bold, or italic, or bold and italic. With a default "topToBottom" value of true, successive lines of text should advance from top to bottom along the minor (Y) axis. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/default_fontstyle.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/default_fontstyle.x3d</a> </td>
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

public class default_fontstyle
{
	/** Default constructor to create this object. */
	public default_fontstyle ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("default_fontstyle.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("default-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("ConformanceNistAppearanceFontStyleDefaultDefaultMultipleBrowsers.png"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test default FontStyle rendering. A FontStyle node with default values for all of its fields is used to render three lines of a Text geometry. Horizontal lines in this world are spaced 1 unit apart. The green lines represent the X and Y axes of the local coordinate system. With a default \"family\" value of SERIF, the text should be be a SERIF family font. With \"horizontal\" equal to true, the text should be parallel to the X axis, and advance in the positive X direction. With \"justify\" = [BEGIN,\"FIRST\"], the text should be justified at the left edge of the line. With \"leftToRight\" = true, text should advance in a \"left to right\" direction along the major (X) axis. With a default font \"size\" of 1, the nominal font \"glyph\" height should be 1 unit in the local coordinate system. This corresponds to the distance between successive horizontal lines in this world. With a default font \"spacing\" of 1, the distance between the base of two succesive Text lines should be 1 unit in the local coordinate system. With a default \"style\" of PLAIN, the text should not appear bold, or italic, or bold and italic. With a default \"topToBottom\" value of true, successive lines of text should advance from top to bottom along the minor (Y) axis."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/default_fontstyle.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("default_fontstyle.x3d"))
    .addChild(new Viewpoint().setDescription("Test default FontStyle rendering").setPosition(0.0,0.0,15.0))
    .addChild(new Group()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material()))
        .setGeometry(new Text("MYTEXT").setString(new String[] {"This is line #1","line #2,","and line #3"})
          .setFontStyle(new FontStyle()))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0)))
        .setGeometry(new IndexedLineSet("LINES").setDEF("LINES").setCoordIndex(new int[] {0,1,-1,1,2,-1,3,4,-1,4,5,-1,6,7,-1,7,8,-1,9,10,-1,10,11,-1,12,13,-1,13,14,-1,15,16,-1,16,17,-1,18,19,-1,19,20,-1,21,22,-1,22,23,-1,24,25,-1,25,26,-1,27,28,-1,28,29,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.0,-5.0,0.0,0.0,-5.0,0.0,10.0,-5.0,0.0,-10.0,-4.0,0.0,0.0,-4.0,0.0,10.0,-4.0,0.0,-10.0,-3.0,0.0,0.0,-3.0,0.0,10.0,-3.0,0.0,-10.0,-2.0,0.0,0.0,-2.0,0.0,10.0,-2.0,0.0,-10.0,-1.0,0.0,0.0,-1.0,0.0,10.0,-1.0,0.0,-10.0,1.0,0.0,0.0,1.0,0.0,10.0,1.0,0.0,-10.0,2.0,0.0,0.0,2.0,0.0,10.0,2.0,0.0,-10.0,3.0,0.0,0.0,3.0,0.0,10.0,3.0,0.0,-10.0,4.0,0.0,0.0,4.0,0.0,10.0,4.0,0.0,-10.0,5.0,0.0,0.0,5.0,0.0,10.0,5.0,0.0}))))))
    .addChild(new Transform()
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setEmissiveColor(0.0,1.0,0.0)))
        .setGeometry(new IndexedLineSet("AXES").setDEF("AXES").setCoordIndex(new int[] {0,1,-1,2,3,-1})
          .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {-10.0,0.0,0.0,10.0,0.0,0.0,0.0,5.0,0.0,0.0,-5.0,0.0})))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return default_fontstyle model
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
        X3D thisExampleX3dModel = new default_fontstyle().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.default_fontstyle\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.default_fontstyle\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

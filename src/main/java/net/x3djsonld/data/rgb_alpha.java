package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box. </p>
 <p> Related links: <a href="../../../../Appearance/PixelTexture/rgb_alpha.java">rgb_alpha.java</a> source, <a href="../../../../Appearance/PixelTexture/rgb_alphaIndex.html" target="_top">rgb_alpha catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Appearance/PixelTexture/rgb_alpha.x3d">rgb_alpha.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/PixelTexture/rgb_alpha-front.jpg">rgb_alpha-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/PixelTexture/rgb_alpha-rear.jpg">rgb_alpha-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/PixelTexture/rgb_alpha-top.jpg">rgb_alpha-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Appearance/PixelTexture/rgb_alpha-bottom.jpg">rgb_alpha-bottom.jpg</a> </td>
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
			<td> 16 January 2011 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d</a> </td>
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
			<td> <a href="../../../../Appearance/PixelTexture/../../license.html">../../license.html</a> </td>
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
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version&amp;nbsp;control</a>)
                is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author http://www.itl.nist.gov/div897/ctg/vrml/members.html
 */

import net.coderextreme.X3DRoots;
import java.util.List;
import java.util.ArrayList;
public class rgb_alpha implements X3DRoots
{
	/** Default constructor to create this object. */
	public rgb_alpha ()
	{
	  initialize();
	}
        public List<X3D> getRootNodeList() {
                List<X3D> list = new ArrayList<X3D>(1);
                list.add(x3dModel);
                return list;
        }

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("rgb_alpha.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("rgb_alpha-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("rgb_alpha-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("rgb_alpha-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("rgb_alpha-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("16 January 2011"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Group()
      .addChild(new Transform().setTranslation(6.14221,0.0694613,-0.000999451)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture("RgbOpacityCheckerboard").setImage(new int[] {2,2,4,0xFF0000FF,0xFFFF0000,0xFFFF0000,0xFF0000FF})))
          .setGeometry(new Box())))
      .addChild(new Transform().setTranslation(-4.85443,0.0694381,-0.00149918)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
          .setGeometry(new Sphere())))
      .addChild(new Transform().setTranslation(-1.47341,0.036672,-0.00175095)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
          .setGeometry(new Cone())))
      .addChild(new Transform().setTranslation(2.31094,0.0694206,-0.00187683)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new PixelTexture().setUSE("RgbOpacityCheckerboard")))
          .setGeometry(new Cylinder())))));
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
	 * @return rgb_alpha model
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
        X3D thisExampleX3dModel = new rgb_alpha().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.rgb_alpha\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.rgb_alpha self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m. </p>
 <p> Related links: <a href="../../../../Tools/Authoring/GridXZ_20x20Fixed.java">GridXZ_20x20Fixed.java</a> source, <a href="../../../../Tools/Authoring/GridXZ_20x20FixedIndex.html" target="_top">GridXZ_20x20Fixed catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridXZ_20x20Fixed.x3d">GridXZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> MV4204 class </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 September 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 30 March 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridXY_20x20Fixed.x3d">GridXY_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridYZ_20x20Fixed.x3d">GridYZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/Authoring/../../license.html">../../license.html</a> </td>
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

	* @author MV4204 class
 */

public class GridXZ_20x20Fixed
{
	/** Default constructor to create this object. */
	public GridXZ_20x20Fixed ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("GridXZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("MV4204 class"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 September 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("30 March 2016"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GridXY_20x20Fixed.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("GridYZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)").setOrientation(1.0,0.0,0.0,-0.4).setPosition(0.0,10.0,25.0))
    .addChild(new Transform("GridLocation")
      .addChild(new Group()
        .addChild(new Shape("LinesAlignedAlongZ")
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1}).setCoordIndex(new int[] {1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1})
            .setColor(new Color().setColor(new MFColor(new double[] {0.4,0.4,0.4,0.8,0.2,0.0,0.4,0.1,0.05})))
            .setCoord(new Coordinate("EndPoints").setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,-10.0,0.0,10.0,-9.0,0.0,10.0,-8.0,0.0,10.0,-7.0,0.0,10.0,-6.0,0.0,10.0,-5.0,0.0,10.0,-4.0,0.0,10.0,-3.0,0.0,10.0,-2.0,0.0,10.0,-1.0,0.0,10.0,0.0,0.0,10.0,1.0,0.0,10.0,2.0,0.0,10.0,3.0,0.0,10.0,4.0,0.0,10.0,5.0,0.0,10.0,6.0,0.0,10.0,7.0,0.0,10.0,8.0,0.0,10.0,9.0,0.0,10.0,10.0,0.0,10.0,-10.0,0.0,-10.0,-9.0,0.0,-10.0,-8.0,0.0,-10.0,-7.0,0.0,-10.0,-6.0,0.0,-10.0,-5.0,0.0,-10.0,-4.0,0.0,-10.0,-3.0,0.0,-10.0,-2.0,0.0,-10.0,-1.0,0.0,-10.0,0.0,0.0,-10.0,1.0,0.0,-10.0,2.0,0.0,-10.0,3.0,0.0,-10.0,4.0,0.0,-10.0,5.0,0.0,-10.0,6.0,0.0,-10.0,7.0,0.0,-10.0,8.0,0.0,-10.0,9.0,0.0,-10.0,10.0,0.0,-10.0})))))
        .addChild(new Transform("LinesAlignedAlongX").setRotation(0.0,1.0,0.0,1.57079)
          .addChild(new Shape().setUSE("LinesAlignedAlongZ")))
        .addChild(new Transform().setTranslation(0.0,-0.5,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance("DefaultAppearance")
                .setMaterial(new Material()))
              .setGeometry(new Text("CenterTextNode").setString(new String[] {"origin"})
                .setFontStyle(new FontStyle("FS4").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.4))))))
        .addChild(new Transform().setTranslation(10.0,-0.5,10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DefaultAppearance"))
              .setGeometry(new Text().setString(new String[] {"10 0 10"})
                .setFontStyle(new FontStyle().setUSE("FS4"))))))
        .addChild(new Transform().setTranslation(10.0,-0.5,-10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DefaultAppearance"))
              .setGeometry(new Text().setString(new String[] {"10 0 -10"})
                .setFontStyle(new FontStyle().setUSE("FS4"))))))
        .addChild(new Transform().setTranslation(-10.0,-0.5,10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DefaultAppearance"))
              .setGeometry(new Text().setString(new String[] {"-10 0 10"})
                .setFontStyle(new FontStyle().setUSE("FS4"))))))
        .addChild(new Transform().setTranslation(-10.0,-0.5,-10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setAppearance(new Appearance().setUSE("DefaultAppearance"))
              .setGeometry(new Text().setString(new String[] {"-10 0 -10"})
                .setFontStyle(new FontStyle().setUSE("FS4")))))))));
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
	 * @return GridXZ_20x20Fixed model
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
        X3D thisExampleX3dModel = new GridXZ_20x20Fixed().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.GridXZ_20x20Fixed\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.GridXZ_20x20Fixed self-validation test results: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

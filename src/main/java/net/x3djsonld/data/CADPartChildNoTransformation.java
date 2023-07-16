package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.CADGeometry.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children. </p>
 <p> Related links: <a href="../../../CAD/CADPartChildNoTransformation.java">CADPartChildNoTransformation.java</a> source, <a href="../../../CAD/CADPartChildNoTransformationIndex.html" target="_top">CADPartChildNoTransformation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CADPartChildNoTransformation.x3d">CADPartChildNoTransformation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vince Marchetti bushing generation using python scripts </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/member-only/mantis/view.php?id=528" target="_blank">https://www.web3d.org/member-only/mantis/view.php?id=528</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This scene is intended for specification development only. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 29 June 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk
 */

public class CADPartChildNoTransformation
{
	/** Default constructor to create this object. */
	public CADPartChildNoTransformation ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_CADINTERCHANGE).setVersion(X3D.VERSION_3_1)
  .setHead(new head()
    .addComponent(new component().setName("CADGeometry").setLevel(2))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CADPartChildNoTransformation.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Vince Marchetti bushing generation using python scripts"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("This scene is intended for specification development only."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("29 June 2012"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CADPartChildNoTransformation.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.9607843,1.0,0.9607843})))
    .addChild(new Viewpoint().setDescription("Hello CAD bushing").setOrientation(1.0,0.0,0.0,-0.321751).setPosition(0.0,5.0,15.0))
    .addChild(new CADAssembly().setName("DesignPatternAssembly")
      .addChild(new CADPart().setName("CADPartExample")
        .addComments(" the rotation and translation attributes serve to position the bushing within the assembly ")
        .addChild(new CADFace().setName("outerSurface")
          .setShape(new Shape()
            .addComments(" note solid='true' and so one-sided external rendering only ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setRadius(2).setTop(false))
            .setAppearance(new Appearance("AppearanceGrey")
              .setMaterial(new Material()))))
        .addChild(new CADFace().setName("innerSurface")
          .setShape(new Shape()
            .addComments(" note solid='false' and so two-sided internal + external rendering ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setSolid(false).setTop(false))
            .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
        .addChild(new CADFace().setName("topCap")
          .setShape(new Shape()
            .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}).setNormalPerVertex(true).setSolid(true)
              .setCoord(new Coordinate().setPoint(getCoordinate_8_27_point())))
            .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
        .addChild(new CADFace().setName("bottomCap")
          .setShape(new Shape()
            .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(new int[] {0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65}).setNormalPerVertex(true).setSolid(true)
              .setCoord(new Coordinate().setPoint(getCoordinate_8_32_point())))
            .setAppearance(new Appearance().setUSE("AppearanceGrey")))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method


		/** Large attribute array: Coordinate point field, scene-graph level=8, element #27, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_8_27_point()
		{
			MFVec3f Coordinate_8_27_point = new MFVec3f(new double[] {2.0000,1.5000,0.0000,1.0000,1.5000,0.0000,1.9616,1.5000,0.3902,0.9808,1.5000,0.1951,1.8478,1.5000,0.7654,0.9239,1.5000,0.3827,1.6629,1.5000,1.1111,0.8315,1.5000,0.5556,1.4142,1.5000,1.4142,0.7071,1.5000,0.7071,1.1111,1.5000,1.6629,0.5556,1.5000,0.8315,0.7654,1.5000,1.8478,0.3827,1.5000,0.9239,0.3902,1.5000,1.9616,0.1951,1.5000,0.9808,0.0000,1.5000,2.0000,0.0000,1.5000,1.0000,-0.3902,1.5000,1.9616,-0.1951,1.5000,0.9808,-0.7654,1.5000,1.8478,-0.3827,1.5000,0.9239,-1.1111,1.5000,1.6629,-0.5556,1.5000,0.8315,-1.4142,1.5000,1.4142,-0.7071,1.5000,0.7071,-1.6629,1.5000,1.1111,-0.8315,1.5000,0.5556,-1.8478,1.5000,0.7654,-0.9239,1.5000,0.3827,-1.9616,1.5000,0.3902,-0.9808,1.5000,0.1951,-2.0000,1.5000,0.0000,-1.0000,1.5000,0.0000,-1.9616,1.5000,-0.3902,-0.9808,1.5000,-0.1951,-1.8478,1.5000,-0.7654,-0.9239,1.5000,-0.3827,-1.6629,1.5000,-1.1111,-0.8315,1.5000,-0.5556,-1.4142,1.5000,-1.4142,-0.7071,1.5000,-0.7071,-1.1111,1.5000,-1.6629,-0.5556,1.5000,-0.8315,-0.7654,1.5000,-1.8478,-0.3827,1.5000,-0.9239,-0.3902,1.5000,-1.9616,-0.1951,1.5000,-0.9808,-0.0000,1.5000,-2.0000,-0.0000,1.5000,-1.0000,0.3902,1.5000,-1.9616,0.1951,1.5000,-0.9808,0.7654,1.5000,-1.8478,0.3827,1.5000,-0.9239,1.1111,1.5000,-1.6629,0.5556,1.5000,-0.8315,1.4142,1.5000,-1.4142,0.7071,1.5000,-0.7071,1.6629,1.5000,-1.1111,0.8315,1.5000,-0.5556,1.8478,1.5000,-0.7654,0.9239,1.5000,-0.3827,1.9616,1.5000,-0.3902,0.9808,1.5000,-0.1951,2.0000,1.5000,-0.0000,1.0000,1.5000,-0.0000});
			return Coordinate_8_27_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=8, element #32, 198 total numbers made up of 66 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_8_32_point()
		{
			MFVec3f Coordinate_8_32_point = new MFVec3f(new double[] {2.0000,-1.5000,-0.0000,1.0000,-1.5000,-0.0000,1.9616,-1.5000,-0.3902,0.9808,-1.5000,-0.1951,1.8478,-1.5000,-0.7654,0.9239,-1.5000,-0.3827,1.6629,-1.5000,-1.1111,0.8315,-1.5000,-0.5556,1.4142,-1.5000,-1.4142,0.7071,-1.5000,-0.7071,1.1111,-1.5000,-1.6629,0.5556,-1.5000,-0.8315,0.7654,-1.5000,-1.8478,0.3827,-1.5000,-0.9239,0.3902,-1.5000,-1.9616,0.1951,-1.5000,-0.9808,0.0000,-1.5000,-2.0000,0.0000,-1.5000,-1.0000,-0.3902,-1.5000,-1.9616,-0.1951,-1.5000,-0.9808,-0.7654,-1.5000,-1.8478,-0.3827,-1.5000,-0.9239,-1.1111,-1.5000,-1.6629,-0.5556,-1.5000,-0.8315,-1.4142,-1.5000,-1.4142,-0.7071,-1.5000,-0.7071,-1.6629,-1.5000,-1.1111,-0.8315,-1.5000,-0.5556,-1.8478,-1.5000,-0.7654,-0.9239,-1.5000,-0.3827,-1.9616,-1.5000,-0.3902,-0.9808,-1.5000,-0.1951,-2.0000,-1.5000,-0.0000,-1.0000,-1.5000,-0.0000,-1.9616,-1.5000,0.3902,-0.9808,-1.5000,0.1951,-1.8478,-1.5000,0.7654,-0.9239,-1.5000,0.3827,-1.6629,-1.5000,1.1111,-0.8315,-1.5000,0.5556,-1.4142,-1.5000,1.4142,-0.7071,-1.5000,0.7071,-1.1111,-1.5000,1.6629,-0.5556,-1.5000,0.8315,-0.7654,-1.5000,1.8478,-0.3827,-1.5000,0.9239,-0.3902,-1.5000,1.9616,-0.1951,-1.5000,0.9808,-0.0000,-1.5000,2.0000,-0.0000,-1.5000,1.0000,0.3902,-1.5000,1.9616,0.1951,-1.5000,0.9808,0.7654,-1.5000,1.8478,0.3827,-1.5000,0.9239,1.1111,-1.5000,1.6629,0.5556,-1.5000,0.8315,1.4142,-1.5000,1.4142,0.7071,-1.5000,0.7071,1.6629,-1.5000,1.1111,0.8315,-1.5000,0.5556,1.8478,-1.5000,0.7654,0.9239,-1.5000,0.3827,1.9616,-1.5000,0.3902,0.9808,-1.5000,0.1951,2.0000,-1.5000,0.0000,1.0000,-1.5000,0.0000});
			return Coordinate_8_32_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CADPartChildNoTransformation model
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
        X3D thisExampleX3dModel = new CADPartChildNoTransformation().getX3dModel();
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
                System.out.println("WARNING: \"net.x3djsonld.data.CADPartChildNoTransformation\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
                System.out.print("Java program \"net.x3djsonld.data.CADPartChildNoTransformation\" self-validation test results: ");
                String validationResults = thisExampleX3dModel.validationReport();
                if (validationResults.startsWith("\n") || (validationResults.length() > 10))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}

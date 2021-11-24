package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> SRI campus building. </p>
 <p> Related links: <a href="../../../Geospatial/SriCampus129.java">SriCampus129.java</a> source, <a href="../../../Geospatial/SriCampus129Index.html" target="_top">SriCampus129 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/SriCampus129.x3d">SriCampus129.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> SRI campus building </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Aaron Heller, SRI International </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 February 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 29 April 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/examples" target="_blank">http://www.geovrml.org/examples</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D geospatial example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
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

	* @author Aaron Heller, SRI International
 */

public class SriCampus129
{
	/** Default constructor to create this object. */
	public SriCampus129 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERACTIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SriCampus129.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("SRI campus building"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Aaron Heller, SRI International"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 February 2000"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("29 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus129.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SriCampus129.x3d"))
    .addChild(new TouchSensor("MouseOverPopupDescription").setDescription("Superellipse-39").setEnabled(false))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(0.75,0.75,0.75)))
      .setGeometry(new IndexedFaceSet().setConvex(false).setCreaseAngle(4.0).setSolid(false).setCoordIndex(new int[] {60,61,49,-1,59,61,60,-1,58,61,59,-1,57,61,58,-1,56,61,57,-1,55,61,56,-1,54,61,55,-1,53,61,54,-1,52,61,53,-1,51,61,52,-1,50,61,51,-1,49,61,50,-1,48,60,49,37,-1,47,59,60,48,-1,46,58,59,47,-1,45,57,58,46,-1,44,56,57,45,-1,43,55,56,44,-1,42,54,55,43,-1,41,53,54,42,-1,40,52,53,41,-1,39,51,52,40,-1,38,50,51,39,-1,37,49,50,38,-1,36,48,37,25,-1,35,47,48,36,-1,34,46,47,35,-1,33,45,46,34,-1,32,44,45,33,-1,31,43,44,32,-1,30,42,43,31,-1,29,41,42,30,-1,28,40,41,29,-1,27,39,40,28,-1,26,38,39,27,-1,25,37,38,26,-1,24,36,25,13,-1,23,35,36,24,-1,22,34,35,23,-1,21,33,34,22,-1,20,32,33,21,-1,19,31,32,20,-1,18,30,31,19,-1,17,29,30,18,-1,16,28,29,17,-1,15,27,28,16,-1,14,26,27,15,-1,13,25,26,14,-1,12,24,13,1,-1,11,23,24,12,-1,10,22,23,11,-1,9,21,22,10,-1,8,20,21,9,-1,7,19,20,8,-1,6,18,19,7,-1,5,17,18,6,-1,4,16,17,5,-1,3,15,16,4,-1,2,14,15,3,-1,1,13,14,2,-1,0,12,1,-1,0,11,12,-1,0,10,11,-1,0,9,10,-1,0,8,9,-1,0,7,8,-1,0,6,7,-1,0,5,6,-1,0,4,5,-1,0,3,4,-1,0,2,3,-1,0,1,2,-1})
        .setCoord(new Coordinate("OBJECT-129-VERTICES").setPoint(getOBJECT_129_VERTICES_5_19_point())))));
    }
	// end of initialize() method

		/** Large attribute array: Coordinate DEF='OBJECT-129-VERTICES' point field, scene-graph level=5, element #19, 186 total numbers made up of 62 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getOBJECT_129_VERTICES_5_19_point()
		{
			MFVec3f OBJECT_129_VERTICES_5_19_point = new MFVec3f(new double[] {0.0,1.798667,0.0,0.8993335,1.5576913,0.0,0.77884567,1.5576913,-0.44966674,0.44966674,1.5576913,-0.77884567,5.5068295E-17,1.5576913,-0.8993335,-0.44966674,1.5576913,-0.77884567,-0.77884567,1.5576913,-0.44966674,-0.8993335,1.5576913,-1.1013659E-16,-0.77884567,1.5576913,0.44966674,-0.44966674,1.5576913,0.77884567,-1.6520488E-16,1.5576913,0.8993335,0.44966674,1.5576913,0.77884567,0.77884567,1.5576913,0.44966674,1.5576913,0.8993335,0.0,1.3490002,0.8993335,-0.77884567,0.77884567,0.8993335,-1.3490002,9.5381085E-17,0.8993335,-1.5576913,-0.77884567,0.8993335,-1.3490002,-1.3490002,0.8993335,-0.77884567,-1.5576913,0.8993335,-1.9076217E-16,-1.3490002,0.8993335,0.77884567,-0.77884567,0.8993335,1.3490002,-2.8614324E-16,0.8993335,1.5576913,0.77884567,0.8993335,1.3490002,1.3490002,0.8993335,0.77884567,1.798667,0.0,0.0,1.5576913,0.0,-0.8993335,0.8993335,0.0,-1.5576913,1.1013659E-16,0.0,-1.798667,-0.8993335,0.0,-1.5576913,-1.5576913,0.0,-0.8993335,-1.798667,0.0,-2.2027318E-16,-1.5576913,0.0,0.8993335,-0.8993335,0.0,1.5576913,-3.3040977E-16,0.0,1.798667,0.8993335,0.0,1.5576913,1.5576913,0.0,0.8993335,1.5576913,-0.8993335,0.0,1.3490002,-0.8993335,-0.77884567,0.77884567,-0.8993335,-1.3490002,9.5381085E-17,-0.8993335,-1.5576913,-0.77884567,-0.8993335,-1.3490002,-1.3490002,-0.8993335,-0.77884567,-1.5576913,-0.8993335,-1.9076217E-16,-1.3490002,-0.8993335,0.77884567,-0.77884567,-0.8993335,1.3490002,-2.8614324E-16,-0.8993335,1.5576913,0.77884567,-0.8993335,1.3490002,1.3490002,-0.8993335,0.77884567,0.8993335,-1.5576913,0.0,0.77884567,-1.5576913,-0.44966674,0.44966674,-1.5576913,-0.77884567,5.5068295E-17,-1.5576913,-0.8993335,-0.44966674,-1.5576913,-0.77884567,-0.77884567,-1.5576913,-0.44966674,-0.8993335,-1.5576913,-1.1013659E-16,-0.77884567,-1.5576913,0.44966674,-0.44966674,-1.5576913,0.77884567,-1.6520488E-16,-1.5576913,0.8993335,0.44966674,-1.5576913,0.77884567,0.77884567,-1.5576913,0.44966674,0.0,-1.798667,0.0});
			return OBJECT_129_VERTICES_5_19_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SriCampus129 model
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
        X3D thisExampleX3dModel = new SriCampus129().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SriCampus129\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SriCampus129\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

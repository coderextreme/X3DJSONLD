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
 <p> Related links: <a href="../../../Geospatial/SriCampus002.java">SriCampus002.java</a> source, <a href="../../../Geospatial/SriCampus002Index.html" target="_top">SriCampus002 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/SriCampus002.x3d">SriCampus002.x3d</a> </td>
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
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d</a> </td>
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

public class SriCampus002
{
	/** Default constructor to create this object. */
	public SriCampus002 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERACTIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addComponent(new component().setName("Geospatial").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("SriCampus002.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("SRI campus building"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Aaron Heller, SRI International"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 February 2000"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("29 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/examples"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D geospatial example"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/SriCampus002.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("SriCampus002.x3d"))
    .addChild(new TouchSensor("MouseOverPopupDescription").setDescription("Extrusion-119").setEnabled(false))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(0.75,0.75,0.75)))
      .setGeometry(new IndexedFaceSet().setConvex(false).setSolid(false).setCoordIndex(getIndexedFaceSet_4_19_coordIndex())
        .setCoord(new Coordinate("OBJECT-2-VERTICES").setPoint(getOBJECT_2_VERTICES_5_19_point())))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_4_19_coordIndex_1()
		{
			int[] value = {0,1,133,132,-1,132,133,131,130,-1,130,131,129,128,-1,128,129,127,126,-1,126,127,125,124,-1,124,125,123,122,-1,122,123,121,120,-1,120,121,119,118,-1,118,119,117,116,-1,116,117,115,114,-1,114,115,113,112,-1,112,113,111,110,-1,110,111,109,108,-1,108,109,107,106,-1,106,107,105,104,-1,104,105,103,102,-1,102,103,101,100,-1,100,101,99,98,-1,98,99,97,96,-1,96,97,95,94,-1,94,95,93,92,-1,92,93,91,90,-1,90,91,89,88,-1,88,89,87,86,-1,86,87,85,84,-1,84,85,83,82,-1,82,83,81,80,-1,80,81,79,78,-1,78,79,77,76,-1,76,77,75,74,-1,74,75,73,72,-1,72,73,71,70,-1,70,71,69,68,-1,68,69,67,66,-1,66,67,65,64,-1,64,65,63,62,-1,62,63,61,60,-1,60,61,59,58,-1,58,59,57,56,-1,56,57,55,54,-1,54,55,53,52,-1,52,53,51,50,-1,50,51,49,48,-1,48,49,47,46,-1,46,47,45,44,-1,44,45,43,42,-1,42,43,41,40,-1,40,41,39,38,-1,38,39,37,36,-1,36,37,35,34,-1,34,35,33,32,-1,32,33,31,30,-1,30,31,29,28,-1,28,29,27,26,-1,26,27,25,24,-1,24,25,23,22,-1,22,23,21,20,-1,20,21,19,18,-1,18,19,17,16,-1,16,17,15,14,-1,14,15,13,12,-1,12,13,11,10,-1,10,11,9,8,-1,8,9,7,6,-1,6,7,5,4,-1,4,5,3,2,-1,2,3,1,0,-1,1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,101,103,105,107,109,111,113,115,117,119,121,123,125,127,129,131,133,-1,132,130,128,126,124,122,120,118,116,114,112,110,108,106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getOBJECT_2_VERTICES_5_19_point_1()
		{
			double[] value = {0.36887193,0.0,0.53917974,0.36887193,-7.3019724,0.53917974,8.804605,-0.10335943,-13.1204195,8.804605,-7.3019724,-13.1204195,11.962545,-0.10335943,-10.984285,11.962545,-7.3019724,-10.984285,11.529537,-0.10335943,-9.48486,11.529537,-7.3019724,-9.48486,19.029093,-0.10335943,-4.7065816,19.029093,-7.3019724,-4.7065816,23.482794,-0.10335943,-11.529759,23.482794,-7.3019724,-11.529759,26.278784,-0.10335943,-9.77558,26.278784,-7.3019724,-9.77558,35.496056,-0.10335943,-24.69887,35.496056,-7.3019724,-24.69887,11.161481,-0.10335943,-40.384098,11.161481,-7.3019724,-40.384098,15.9261875,-0.10335943,-48.694298,15.9261875,-7.3019724,-48.694298,9.7313,-0.10335943,-52.319016,9.7313,-7.3019724,-52.319016,13.42482,-0.10335943,-58.174004,13.42482,-7.3019724,-58.174004,9.871772,-0.10335943,-60.383415,9.871772,-7.3019724,-60.383415,14.237436,-0.10335943,-67.69097,14.237436,-7.3019724,-67.69097,48.96519,-0.10335943,-43.38363,48.96519,-7.3019724,-43.38363,55.918385,-0.10335943,-56.503433,55.918385,-7.3019724,-56.503433,38.017952,-0.10335943,-66.85785,38.017952,-7.3019724,-66.85785,57.307827,-0.10335943,-96.526474,57.307827,-7.3019724,-96.526474,73.04356,-0.10335943,-86.602936,73.04356,-7.3019724,-86.602936,75.62383,-0.10335943,-90.71974,75.62383,-7.3019724,-90.71974,82.13391,-0.10335943,-86.624214,82.13391,-7.3019724,-86.624214,79.97499,-0.10335943,-82.32442,79.97499,-7.3019724,-82.32442,98.79092,-0.10335943,-70.48916,98.79092,-7.3019724,-70.48916,99.88826,-0.10335943,-72.69236,99.88826,-7.3019724,-72.69236,111.49141,-0.10335943,-65.31846,111.49141,-7.3019724,-65.31846,110.248795,-0.10335943,-63.18137,110.248795,-7.3019724,-63.18137,118.64536,-0.10335943,-57.98492,118.64536,-7.3019724,-57.98492,112.47328,-0.10335943,-46.992718,112.47328,-7.3019724,-46.992718,93.96857,-0.10335943,-58.29181,93.96857,-7.3019724,-58.29181,89.70046,-0.10335943,-51.16269,89.70046,-7.3019724,-51.16269,81.8925,-0.10335943,-56.11783,81.8925,-7.3019724,-56.11783,80.17407,-0.10335943,-53.38196,80.17407,-7.3019724,-53.38196,106.00699,-0.10335943,-37.05433,106.00699,-7.3019724,-37.05433,101.24805,-0.10335943,-29.691933,101.24805,-7.3019724,-29.691933,65.1143,-0.10335943,-52.019005,65.1143,-7.3019724,-52.019005,58.30375,-0.10335943,-39.142494,58.30375,-7.3019724,-39.142494,96.39319,-0.10335943,-14.257672,96.39319,-7.3019724,-14.257672,103.80781,-0.10335943,-26.227158,103.80781,-7.3019724,-26.227158,110.64557,-0.10335943,-22.08234,110.64557,-7.3019724,-22.08234,103.90045,-0.10335943,-11.063653,103.90045,-7.3019724,-11.063653,116.90994,-0.10335943,-2.8815358,116.90994,-7.3019724,-2.8815358,115.31785,-0.10335943,0.69301474,115.31785,-7.3019724,0.69301474,101.92443,-0.10335943,-8.30489,101.92443,-7.3019724,-8.30489,94.039566,-0.10335943,2.6199946,94.039566,-7.3019724,2.6199946,92.277626,-0.10335943,1.1246561,92.277626,-7.3019724,1.1246561,70.814766,-0.10335943,37.797607,70.814766,-7.3019724,37.797607,67.9997,-0.10335943,35.84749,67.9997,-7.3019724,35.84749,79.91235,-0.10335943,17.093874,79.91235,-7.3019724,17.093874,74.186295,-0.10335943,13.492968,74.186295,-7.3019724,13.492968,81.04469,-0.10335943,1.1483994,81.04469,-7.3019724,1.1483994};
			return value;
		}
		private double[] getOBJECT_2_VERTICES_5_19_point_2()
		{
			double[] value = {87.648865,-0.10335943,-3.1264768,87.648865,-7.3019724,-3.1264768,77.18249,-0.10335943,-10.356956,77.18249,-7.3019724,-10.356956,72.31796,-0.10335943,-2.0332217,72.31796,-7.3019724,-2.0332217,47.75808,-0.10335943,-17.37492,47.75808,-7.3019724,-17.37492,38.619774,-0.10335943,-1.6843479,38.619774,-7.3019724,-1.6843479,42.036423,-0.10335943,0.24925408,42.036423,-7.3019724,0.24925408,40.6557,-0.10335943,2.3088071,40.6557,-7.3019724,2.3088071,47.00508,-0.10335943,6.44626,47.00508,-7.3019724,6.44626,49.68617,-0.10335943,1.232226,49.68617,-7.3019724,1.232226,64.22939,-0.10335943,11.542036,64.22939,-7.3019724,11.542036,59.32805,-0.10335943,20.67042,59.32805,-7.3019724,20.67042,61.99737,-0.10335943,22.673643,61.99737,-7.3019724,22.673643,54.888905,-0.10335943,35.51336,54.888905,-7.3019724,35.51336,51.854134,-0.10335943,33.512413,51.854134,-7.3019724,33.512413,50.68581,-0.10335943,35.86364,50.68581,-7.3019724,35.86364,38.51768,-0.10335943,28.515242,38.51768,-7.3019724,28.515242,39.636543,-0.10335943,25.566486,39.636543,-7.3019724,25.566486};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=4, element #19, 471 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_4_19_coordIndex()
		{
			MFInt32 IndexedFaceSet_4_19_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_4_19_coordIndex_1()));
			return IndexedFaceSet_4_19_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='OBJECT-2-VERTICES' point field, scene-graph level=5, element #19, 402 total numbers made up of 134 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getOBJECT_2_VERTICES_5_19_point()
		{
			MFVec3f OBJECT_2_VERTICES_5_19_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getOBJECT_2_VERTICES_5_19_point_1()))
				.append(new MFVec3f(getOBJECT_2_VERTICES_5_19_point_2()));
			return OBJECT_2_VERTICES_5_19_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return SriCampus002 model
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
        X3D thisExampleX3dModel = new SriCampus002().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.SriCampus002\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.SriCampus002\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

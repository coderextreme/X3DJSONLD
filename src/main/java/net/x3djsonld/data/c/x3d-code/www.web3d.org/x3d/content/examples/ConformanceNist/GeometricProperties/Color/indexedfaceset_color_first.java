package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This world tests browser ability to prefer the color field of an IndexedFaceSet over the diffuseColor field of the Material node. A browser should select the color field of an IndexedFaceSet and produce a red IndexedFaceSet sphere. A white sphere indicates failure to prefer the color parameter. </p>
 <p> Related links: <a href="../../../../GeometricProperties/Color/indexedfaceset_color_first.java">indexedfaceset_color_first.java</a> source, <a href="../../../../GeometricProperties/Color/indexedfaceset_color_firstIndex.html" target="_top">indexedfaceset_color_first catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../GeometricProperties/Color/indexedfaceset_color_first.x3d">indexedfaceset_color_first.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Color/indexedfaceset_color_first-front.jpg">indexedfaceset_color_first-front.jpg</a> </td>
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
			<td> This world tests browser ability to prefer the color field of an IndexedFaceSet over the diffuseColor field of the Material node. A browser should select the color field of an IndexedFaceSet and produce a red IndexedFaceSet sphere. A white sphere indicates failure to prefer the color parameter. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Color/indexedfaceset_color_first.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Color/indexedfaceset_color_first.x3d</a> </td>
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
			<td> <a href="../../../../GeometricProperties/Color/../../license.html">../../license.html</a> </td>
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

public class indexedfaceset_color_first
{
	/** Default constructor to create this object. */
	public indexedfaceset_color_first ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("indexedfaceset_color_first.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("indexedfaceset_color_first-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This world tests browser ability to prefer the color field of an IndexedFaceSet over the diffuseColor field of the Material node. A browser should select the color field of an IndexedFaceSet and produce a red IndexedFaceSet sphere. A white sphere indicates failure to prefer the color parameter."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Color/indexedfaceset_color_first.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("indexedfaceset_color_first.x3d"))
    .addChild(new Viewpoint().setDescription("Front View"))
    .addChild(new Viewpoint().setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint().setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
    .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
    .addChild(new Viewpoint().setDescription("Right View").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Left View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
      .setGeometry(new IndexedFaceSet().setColorPerVertex(false).setCreaseAngle(0.5).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedFaceSet_4_27_coordIndex())
        .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0})))
        .setCoord(new Coordinate().setPoint(getCoordinate_5_28_point())))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_4_27_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_5_28_point_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,-0.242536,0.0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0.0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0.0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0.0,0.242536,-0.970142,0.242536,0.0,-1.0,0.0,0.0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0.0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0.0,-0.242536,0.970142,0.0,0.0,-0.242536,0.970142,0.301511,-0.301511,0.904534,0.666667,-0.333333,0.666667,0.904534,-0.301511,0.301511,0.970142,-0.242536,0.0,0.0,-0.5547,0.83205,0.333333,-0.666667,0.666667,0.666667,-0.666667,0.333333,0.83205,-0.5547,0.0,0.0,-0.83205,0.5547,0.301511,-0.904534,0.301511,0.5547,-0.83205,0.0,0.0,-0.970142,0.242536,0.242536,-0.970142,0.0,0.0,-1.0,0.0,-0.970142,-0.242536,0.0,-0.904534,-0.301511,0.301511,-0.666667,-0.333333,0.666667,-0.301511,-0.301511,0.904534,-0.83205,-0.5547,0.0,-0.666667,-0.666667,0.333333,-0.333333,-0.666667,0.666667,-0.5547,-0.83205,0.0,-0.301511,-0.904534,0.301511,-0.242536,-0.970142,0.0,0.0,0.0,-1.0,0.0,0.242536,-0.970142,0.242536,0.0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0.0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0.0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0.0,-0.242536,0.0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0.0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0.0,0.970142,-0.242536,-0.970142,0.0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0.0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0.0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0.0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511,0.904534,-0.301511,-0.301511,0.666667,-0.333333,-0.666667,0.301511,-0.301511,-0.904534,0.0,-0.242536,-0.970142,0.666667,-0.666667,-0.333333,0.333333,-0.666667,-0.666667,0.0,-0.5547,-0.83205,0.301511,-0.904534,-0.301511,0.0,-0.83205,-0.5547,0.0,-0.970142,-0.242536,-0.301511,-0.301511,-0.904534,-0.666667,-0.333333,-0.666667,-0.904534,-0.301511,-0.301511,-0.333333,-0.666667,-0.666667};
			return value;
		}
		private double[] getCoordinate_5_28_point_2()
		{
			double[] value = {-0.666667,-0.666667,-0.333333,-0.301511,-0.904534,-0.301511};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=4, element #27, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_4_27_coordIndex()
		{
			MFInt32 IndexedFaceSet_4_27_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_4_27_coordIndex_1()));
			return IndexedFaceSet_4_27_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=5, element #28, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_5_28_point()
		{
			MFVec3f Coordinate_5_28_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_5_28_point_1()))
				.append(new MFVec3f(getCoordinate_5_28_point_2()));
			return Coordinate_5_28_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return indexedfaceset_color_first model
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
        X3D thisExampleX3dModel = new indexedfaceset_color_first().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.indexedfaceset_color_first\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.indexedfaceset_color_first\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test multiple colors. A set of multicolor stars are drawn in the local coordinate system. The number of points in the Color node is exactly the same as the number of coordinates in the coord field. </p>
 <p> Related links: <a href="../../../../Geometry/PointSet/mixcolors.java">mixcolors.java</a> source, <a href="../../../../Geometry/PointSet/mixcolorsIndex.html" target="_top">mixcolors catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors.x3d">mixcolors.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-front.jpg">mixcolors-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-rear.jpg">mixcolors-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-top.jpg">mixcolors-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-bottom.jpg">mixcolors-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-left.jpg">mixcolors-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../Geometry/PointSet/mixcolors-right.jpg">mixcolors-right.jpg</a> </td>
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
			<td> Test multiple colors. A set of multicolor stars are drawn in the local coordinate system. The number of points in the Color node is exactly the same as the number of coordinates in the coord field. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/PointSet/mixcolors.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/PointSet/mixcolors.x3d</a> </td>
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
			<td> <a href="../../../../Geometry/PointSet/../../license.html">../../license.html</a> </td>
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

public class mixcolors
{
	/** Default constructor to create this object. */
	public mixcolors ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("mixcolors.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-left.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("mixcolors-right.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test multiple colors. A set of multicolor stars are drawn in the local coordinate system. The number of points in the Color node is exactly the same as the number of coordinates in the coord field."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Geometry/PointSet/mixcolors.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("mixcolors.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material()))
      .setGeometry(new PointSet()
        .setColor(new Color().setColor(getColor_5_27_color()))
        .setCoord(new Coordinate().setPoint(getCoordinate_5_28_point())))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getColor_5_27_color_1()
		{
			double[] value = {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0};
			return value;
		}
		private double[] getColor_5_27_color_2()
		{
			double[] value = {1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0};
			return value;
		}
		private double[] getColor_5_27_color_3()
		{
			double[] value = {1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,1.0,1.0,1.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,0.0,0.0,1.0,1.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0,0.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0,0.0,1.0,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_5_28_point_1()
		{
			double[] value = {-2.45,-0.41,-5.0,-0.12,0.73,-5.0,2.2,1.87,-5.0,-1.53,3.01,-5.0,0.8,-1.9,-5.0,-2.93,-0.76,-5.0,-0.6,0.38,-5.0,1.72,1.52,-5.0,-2.01,2.66,-5.0,0.32,-2.25,-5.0,2.64,-1.11,-5.0,-1.09,0.03,-5.0,1.24,1.16,-5.0,-2.49,2.3,-5.0,-0.16,-2.61,-5.0,2.16,-1.47,-5.0,-1.57,-0.33,-5.0,0.76,0.81,-5.0,-2.97,1.95,-5.0,-0.64,-2.96,-5.0,1.68,-1.82,-5.0,-2.05,-0.68,-5.0,0.28,0.46,-5.0,2.6,1.6,-5.0,-1.12,2.74,-5.0,1.2,-2.17,-5.0,-2.53,-1.03,-5.0,-0.2,0.11,-5.0,2.12,1.25,-5.0,-1.61,2.39,-5.0,0.72,-2.52,-5.0,-3.01,-1.38,-5.0,-0.68,-0.24,-5.0,1.64,0.9,-5.0,-2.09,2.04,-5.0,0.24,-2.87,-5.0,2.56,-1.73,-5.0,-1.16,-0.59,-5.0,1.16,0.55,-5.0,-2.57,1.68,-5.0,-0.24,2.82,-5.0,2.08,-2.09,-5.0,-1.65,-0.95,-5.0,0.68,0.19,-5.0,3.0,1.33,-5.0,-0.72,2.47,-5.0,1.6,-2.44,-5.0,-2.13,-1.3,-5.0,0.2,-0.16,-5.0,2.52,0.98,-5.0,-1.2,2.12,-5.0,1.12,-2.79,-5.0,-2.61,-1.65,-5.0,-0.28,-0.51,-5.0,2.04,0.63,-5.0,-1.69,1.77,-5.0,0.64,2.91,-5.0,2.96,-2.0,-5.0,-0.76,-0.86,-5.0,1.56,0.28,-5.0,-2.17,1.42,-5.0,0.16,2.56,-5.0,2.48,-2.35,-5.0,-1.24,-1.21,-5.0,1.08,-0.07,-5.0,-2.65,1.07,-5.0,-0.32,2.21,-5.0,2.0,-2.7,-5.0,-1.72,-1.57,-5.0,0.6,-0.43,-5.0,2.92,0.71,-5.0,-0.8,1.85,-5.0,1.52,2.99,-5.0,-2.21,-1.92,-5.0,0.12,-0.78,-5.0,2.44,0.36,-5.0,-1.28,1.5,-5.0,1.04,2.64,-5.0,-2.69,-2.27,-5.0,-0.36,-1.13,-5.0,1.96,0.01,-5.0,-1.76,1.15,-5.0,0.56,2.29,-5.0,2.88,-2.62,-5.0,-0.84,-1.48,-5.0,1.48,-0.34,-5.0,-2.25,0.8,-5.0,0.08,1.94,-5.0,2.4,-2.97,-5.0,-1.32,-1.83,-5.0,1.0,-0.69,-5.0,-2.73,0.45,-5.0,-0.4,1.59,-5.0,1.92,2.73,-5.0,-1.8,-2.18,-5.0,0.52,-1.05,-5.0,2.84,0.09,-5.0,-0.88,1.23,-5.0,1.44,2.37,-5.0,-2.29,-2.54,-5.0};
			return value;
		}
		private double[] getCoordinate_5_28_point_2()
		{
			double[] value = {0.04,-1.4,-5.0,2.36,-0.26,-5.0,-1.36,0.88,-5.0,0.96,2.02,-5.0,-2.77,-2.89,-5.0,-0.44,-1.75,-5.0,1.88,-0.61,-5.0,-1.84,0.53,-5.0,0.48,1.67,-5.0,2.8,2.81,-5.0,-0.92,-2.1,-5.0,1.4,-0.96,-5.0,-2.32,0.18,-5.0,0.0,1.32,-5.0,2.32,2.46,-5.0,-1.4,-2.45,-5.0,0.92,-1.31,-5.0,-2.81,-0.17,-5.0,-0.48,0.97,-5.0,1.84,2.11,-5.0,-1.88,-2.8,-5.0,0.44,-1.66,-5.0,2.76,-0.52,-5.0,-0.96,0.61,-5.0,1.36,1.75,-5.0,-2.36,2.89,-5.0,-0.04,-2.02,-5.0,2.28,-0.88,-5.0,-1.44,0.26,-5.0,0.88,1.4,-5.0,-2.85,2.54,-5.0,-0.52,-2.37,-5.0,1.8,-1.23,-5.0,-1.92,-0.09,-5.0,0.4,1.05,-5.0,2.72,2.19,-5.0,-1.0,-2.72,-5.0,1.32,-1.58,-5.0,-2.4,-0.44,-5.0,-0.08,0.7,-5.0,2.24,1.84,-5.0,-1.48,2.98,-5.0,0.84,-1.93,-5.0,-2.89,-0.79,-5.0,-0.56,0.35,-5.0,1.76,1.49,-5.0,-1.96,2.63,-5.0,0.36,-2.28,-5.0,2.68,-1.14,-5.0,-1.04,0.0,-5.0,1.28,1.13,-5.0,-2.44,2.27,-5.0,-0.12,-2.64,-5.0,2.2,-1.5,-5.0,-1.52,-0.36,-5.0,0.8,0.78,-5.0,-2.92,1.92,-5.0,-0.6,-2.99,-5.0,1.72,-1.85,-5.0,-2.0,-0.71,-5.0,0.32,0.43,-5.0,2.64,1.57,-5.0,-1.08,2.71,-5.0,1.24,-2.2,-5.0,-2.48,-1.06,-5.0,-0.16,0.08,-5.0,2.16,1.22,-5.0,-1.56,2.36,-5.0,0.76,-2.55,-5.0,-2.96,-1.41,-5.0,-0.64,-0.27,-5.0,1.68,0.87,-5.0,-2.04,2.01,-5.0,0.28,-2.9,-5.0,2.6,-1.76,-5.0,-1.12,-0.62,-5.0,1.2,0.52,-5.0,-2.52,1.65,-5.0,-0.2,2.79,-5.0,2.12,-2.12,-5.0,-1.6,-0.98,-5.0,0.72,0.16,-5.0,-3.0,1.3,-5.0,-0.68,2.44,-5.0,1.64,-2.47,-5.0,-2.08,-1.33,-5.0,0.24,-0.19,-5.0,2.56,0.95,-5.0,-1.16,2.09,-5.0,1.16,-2.82,-5.0,-2.56,-1.68,-5.0,-0.24,-0.54,-5.0,2.08,0.6,-5.0,-1.64,1.74,-5.0,0.68,2.88,-5.0,3.01,-2.03,-5.0,-0.72,-0.89,-5.0,1.6,0.25,-5.0,-2.12,1.39,-5.0,0.2,2.53,-5.0};
			return value;
		}
		private double[] getCoordinate_5_28_point_3()
		{
			double[] value = {2.52,-2.38,-5.0,-1.2,-1.24,-5.0,1.12,-0.1,-5.0,-2.6,1.04,-5.0,-0.28,2.18,-5.0,2.04,-2.73,-5.0,-1.68,-1.6,-5.0,0.64,-0.46,-5.0,2.97,0.68,-5.0,-0.76,1.82,-5.0,1.56,2.96,-5.0,-2.16,-1.95,-5.0,0.16,-0.81,-5.0,2.48,0.33,-5.0,-1.24,1.47,-5.0,1.08,2.61,-5.0,-2.64,-2.3,-5.0,-0.32,-1.16,-5.0,2.0,-0.02,-5.0,-1.72,1.12,-5.0,0.6,2.26,-5.0,2.93,-2.65,-5.0,-0.8,-1.51,-5.0,1.52,-0.37,-5.0,-2.2,0.77,-5.0,0.12,1.91,-5.0,2.45,-3.0,-5.0,-1.28,-1.86,-5.0,1.04,-0.72,-5.0,-2.68,0.42,-5.0,-0.36,1.56,-5.0,1.96,2.7,-5.0,-1.76,-2.21,-5.0,0.56,-1.08,-5.0,2.89,0.06,-5.0,-0.84,1.2,-5.0,1.48,2.34,-5.0,-2.24,-2.57,-5.0,0.08,-1.43,-5.0,2.41,-0.29,-5.0,-1.32,0.85,-5.0,1.0,1.99,-5.0,-2.72,-2.92,-5.0,-0.4,-1.78,-5.0,1.92,-0.64,-5.0,-1.8,0.5,-5.0,0.52,1.64,-5.0,2.85,2.78,-5.0,-0.88,-2.13,-5.0,1.44,-0.99,-5.0,-2.28,0.15,-5.0,0.04,1.29,-5.0,2.37,2.43,-5.0,-1.36,-2.48,-5.0,0.96,-1.34,-5.0,-2.76,-0.2,-5.0,-0.44,0.94,-5.0,1.88,2.08,-5.0,-1.84,-2.83,-5.0,0.48,-1.69,-5.0,2.81,-0.56,-5.0,-0.92,0.58,-5.0,1.4,1.72,-5.0,-2.32,2.86,-5.0,0.0,-2.05,-5.0,2.33,-0.91,-5.0,-1.4,0.23,-5.0,0.92,1.37,-5.0,-2.8,2.51,-5.0,-0.48,-2.4,-5.0,1.85,-1.26,-5.0,-1.88,-0.12,-5.0,0.44,1.02,-5.0,2.77,2.16,-5.0,-0.96,-2.75,-5.0,1.36,-1.61,-5.0,-2.36,-0.47,-5.0,-0.04,0.67,-5.0,2.29,1.81,-5.0,-1.44,2.95,-5.0,0.88,-1.96,-5.0,-2.84,-0.82,-5.0,-0.52,0.32,-5.0,1.81,1.46,-5.0,-1.92,2.6,-5.0,0.4,-2.31,-5.0,2.73,-1.17,-5.0,-1.0,-0.03,-5.0,1.32,1.1,-5.0,-2.4,2.24,-5.0,-0.08,-2.67,-5.0,2.25,-1.53,-5.0,-1.48,-0.39,-5.0,0.84,0.75,-5.0,-2.88,1.89,-5.0,-0.56,-3.02,-5.0,1.77,-1.88,-5.0,-1.96,-0.74,-5.0,0.36,0.4,-5.0,2.69,1.54,-5.0};
			return value;
		}

		/** Large attribute array: Color color field, scene-graph level=5, element #27, 900 total numbers made up of 300 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_5_27_color()
		{
			MFColor Color_5_27_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_5_27_color_1()))
				.append(new MFColor(getColor_5_27_color_2()))
				.append(new MFColor(getColor_5_27_color_3()));
			return Color_5_27_color;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=5, element #28, 900 total numbers made up of 300 3-tuple values.
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
				.append(new MFVec3f(getCoordinate_5_28_point_2()))
				.append(new MFVec3f(getCoordinate_5_28_point_3()));
			return Coordinate_5_28_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return mixcolors model
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
        X3D thisExampleX3dModel = new mixcolors().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.mixcolors\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.mixcolors\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

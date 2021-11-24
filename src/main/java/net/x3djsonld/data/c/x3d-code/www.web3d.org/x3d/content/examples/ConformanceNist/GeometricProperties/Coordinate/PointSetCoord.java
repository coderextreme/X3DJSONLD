package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Generate a PointSet using the Coordinate node. Browser should create a 23 point by 23 point square geometric grid of points, elevated in the center toward the + Y direction. </p>
 <p> Related links: <a href="../../../../GeometricProperties/Coordinate/PointSetCoord.java">PointSetCoord.java</a> source, <a href="../../../../GeometricProperties/Coordinate/PointSetCoordIndex.html" target="_top">PointSetCoord catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord.x3d">PointSetCoord.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-front.jpg">PointSetCoord-front.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-rear.jpg">PointSetCoord-rear.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-top.jpg">PointSetCoord-top.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-bottom.jpg">PointSetCoord-bottom.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-left.jpg">PointSetCoord-left.jpg</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../../GeometricProperties/Coordinate/PointSetCoord-right.jpg">PointSetCoord-right.jpg</a> </td>
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
			<td> Generate a PointSet using the Coordinate node. Browser should create a 23 point by 23 point square geometric grid of points, elevated in the center toward the + Y direction. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/PointSetCoord.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/PointSetCoord.x3d</a> </td>
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
			<td> <a href="../../../../GeometricProperties/Coordinate/../../license.html">../../license.html</a> </td>
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

public class PointSetCoord
{
	/** Default constructor to create this object. */
	public PointSetCoord ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_INTERCHANGE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("PointSetCoord.x3d"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-front.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-rear.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-top.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-bottom.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-left.jpg"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("PointSetCoord-right.jpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Generate a PointSet using the Coordinate node. Browser should create a 23 point by 23 point square geometric grid of points, elevated in the center toward the + Y direction."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/Coordinate/PointSetCoord.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("PointSetCoord.x3d"))
    .addChild(new Viewpoint().setDescription("Front View"))
    .addChild(new Viewpoint().setDescription("Rear View").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint().setDescription("Top View").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,10.0,0.0))
    .addChild(new Viewpoint().setDescription("Bottom View").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-10.0,0.0))
    .addChild(new Viewpoint().setDescription("Right View").setOrientation(0.0,1.0,0.0,1.57).setPosition(10.0,0.0,0.0))
    .addChild(new Viewpoint().setDescription("Left View").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-10.0,0.0,0.0))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material()))
      .setGeometry(new PointSet()
        .setCoord(new Coordinate().setPoint(getCoordinate_5_32_point()))
        .setColor(new Color().setColor(getColor_5_33_color())))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getCoordinate_5_32_point_1()
		{
			double[] value = {-1.15,0.0,-1.15,-1.05,0.0,-1.15,-0.95,0.0,-1.15,-0.85,0.0,-1.15,-0.75,0.0,-1.15,-0.65,0.0,-1.15,-0.55,0.0,-1.15,-0.45,0.0,-1.15,-0.35,0.0,-1.15,-0.25,0.0,-1.15,-0.15,0.0,-1.15,-0.05,0.0,-1.15,0.05,0.0,-1.15,0.15,0.0,-1.15,0.25,0.0,-1.15,0.35,0.0,-1.15,0.45,0.0,-1.15,0.55,0.0,-1.15,0.65,0.0,-1.15,0.75,0.0,-1.15,0.85,0.0,-1.15,0.95,0.0,-1.15,1.05,0.0,-1.15,-1.15,0.0,-1.05,-1.05,0.0213225,-1.05,-0.95,0.0422479,-1.05,-0.85,0.0623862,-1.05,-0.75,0.0813624,-1.05,-0.65,0.0988229,-1.05,-0.55,0.114443,-1.05,-0.45,0.12793,-1.05,-0.35,0.139035,-1.05,-0.25,0.14755,-1.05,-0.15,0.153316,-1.05,-0.05,0.156226,-1.05,0.05,0.156226,-1.05,0.15,0.153316,-1.05,0.25,0.14755,-1.05,0.35,0.139035,-1.05,0.45,0.127931,-1.05,0.55,0.114443,-1.05,0.65,0.0988233,-1.05,0.75,0.0813627,-1.05,0.85,0.0623866,-1.05,0.95,0.0422483,-1.05,1.05,0.0213229,-1.05,-1.15,0.0,-0.95,-1.05,0.0422479,-0.95,-0.95,0.0837087,-0.95,-0.85,0.12361,-0.95,-0.75,0.161209,-0.95,-0.65,0.195805,-0.95,-0.55,0.226753,-0.95,-0.45,0.253478,-0.95,-0.35,0.27548,-0.95,-0.25,0.292351,-0.95,-0.15,0.303776,-0.95,-0.05,0.309543,-0.95,0.05,0.309543,-0.95,0.15,0.303777,-0.95,0.25,0.292352,-0.95,0.35,0.275481,-0.95,0.45,0.253478,-0.95,0.55,0.226754,-0.95,0.65,0.195806,-0.95,0.75,0.16121,-0.95,0.85,0.123611,-0.95,0.95,0.0837095,-0.95,1.05,0.0422487,-0.95,-1.15,0.0,-0.85,-1.05,0.0623862,-0.85,-0.95,0.12361,-0.85,-0.85,0.182532,-0.85,-0.75,0.238053,-0.85,-0.65,0.28914,-0.85,-0.55,0.33484,-0.85,-0.45,0.374303,-0.85,-0.35,0.406794,-0.85,-0.25,0.431707,-0.85,-0.15,0.448578,-0.85,-0.05,0.457093,-0.85,0.05,0.457093,-0.85,0.15,0.448578,-0.85,0.25,0.431707,-0.85,0.35,0.406795,-0.85,0.45,0.374304,-0.85,0.55,0.334841,-0.85,0.65,0.289141,-0.85,0.75,0.238054,-0.85,0.85,0.182533,-0.85,0.95,0.123611,-0.85,1.05,0.0623874,-0.85,-1.15,0.0,-0.75,-1.05,0.0813624,-0.75,-0.95,0.161209,-0.75,-0.85,0.238053,-0.75,-0.75,0.310462,-0.75,-0.65,0.377088,-0.75,-0.55,0.43669,-0.75,-0.45,0.488156,-0.75};
			return value;
		}
		private double[] getCoordinate_5_32_point_2()
		{
			double[] value = {-0.35,0.53053,-0.75,-0.25,0.563021,-0.75,-0.15,0.585023,-0.75,-0.05,0.596128,-0.75,0.05,0.596128,-0.75,0.15,0.585024,-0.75,0.25,0.563021,-0.75,0.35,0.530531,-0.75,0.45,0.488157,-0.75,0.55,0.436691,-0.75,0.65,0.377089,-0.75,0.75,0.310463,-0.75,0.85,0.238054,-0.75,0.95,0.161211,-0.75,1.05,0.0813639,-0.75,-1.15,0.0,-0.65,-1.05,0.0988229,-0.65,-0.95,0.195805,-0.65,-0.85,0.28914,-0.65,-0.75,0.377088,-0.65,-0.65,0.458012,-0.65,-0.55,0.530404,-0.65,-0.45,0.592916,-0.65,-0.35,0.644383,-0.65,-0.25,0.683846,-0.65,-0.15,0.710571,-0.65,-0.05,0.724059,-0.65,0.05,0.724059,-0.65,0.15,0.710571,-0.65,0.25,0.683847,-0.65,0.35,0.644384,-0.65,0.45,0.592917,-0.65,0.55,0.530406,-0.65,0.65,0.458014,-0.65,0.75,0.37709,-0.65,0.85,0.289141,-0.65,0.95,0.195807,-0.65,1.05,0.0988249,-0.65,-1.15,0.0,-0.55,-1.05,0.114443,-0.55,-0.95,0.226753,-0.55,-0.85,0.33484,-0.55,-0.75,0.43669,-0.55,-0.65,0.530404,-0.55,-0.55,0.614239,-0.55,-0.45,0.686631,-0.55,-0.35,0.746232,-0.55,-0.25,0.791933,-0.55,-0.15,0.822882,-0.55,-0.05,0.838501,-0.55,0.05,0.838502,-0.55,0.15,0.822882,-0.55,0.25,0.791934,-0.55,0.35,0.746233,-0.55,0.45,0.686632,-0.55,0.55,0.61424,-0.55,0.65,0.530406,-0.55,0.75,0.436692,-0.55,0.85,0.334842,-0.55,0.95,0.226756,-0.55,1.05,0.114445,-0.55,-1.15,0.0,-0.45,-1.05,0.12793,-0.45,-0.95,0.253478,-0.45,-0.85,0.374303,-0.45,-0.75,0.488156,-0.45,-0.65,0.592916,-0.45,-0.55,0.686631,-0.45,-0.45,0.767555,-0.45,-0.35,0.834181,-0.45,-0.25,0.885268,-0.45,-0.15,0.919864,-0.45,-0.05,0.937325,-0.45,0.05,0.937325,-0.45,0.15,0.919864,-0.45,0.25,0.885269,-0.45,0.35,0.834182,-0.45,0.45,0.767556,-0.45,0.55,0.686632,-0.45,0.65,0.592918,-0.45,0.75,0.488159,-0.45,0.85,0.374306,-0.45,0.95,0.25348,-0.45,1.05,0.127933,-0.45,-1.15,0.0,-0.35,-1.05,0.139035,-0.35,-0.95,0.27548,-0.35,-0.85,0.406794,-0.35,-0.75,0.53053,-0.35,-0.65,0.644383,-0.35,-0.55,0.746232,-0.35,-0.45,0.834181,-0.35,-0.35,0.90659,-0.35,-0.25,0.962112,-0.35,-0.15,0.999711,-0.35,-0.05,1.01869,-0.35,0.05,1.01869,-0.35,0.15,0.999711,-0.35,0.25,0.962113,-0.35,0.35,0.906592,-0.35};
			return value;
		}
		private double[] getCoordinate_5_32_point_3()
		{
			double[] value = {0.45,0.834183,-0.35,0.55,0.746234,-0.35,0.65,0.644385,-0.35,0.75,0.530532,-0.35,0.85,0.406797,-0.35,0.95,0.275483,-0.35,1.05,0.139038,-0.35,-1.15,0.0,-0.25,-1.05,0.14755,-0.25,-0.95,0.292351,-0.25,-0.85,0.431707,-0.25,-0.75,0.563021,-0.25,-0.65,0.683846,-0.25,-0.55,0.791933,-0.25,-0.45,0.885268,-0.25,-0.35,0.962112,-0.25,-0.25,1.02103,-0.25,-0.15,1.06093,-0.25,-0.05,1.08107,-0.25,0.05,1.08107,-0.25,0.15,1.06094,-0.25,0.25,1.02103,-0.25,0.35,0.962113,-0.25,0.45,0.885269,-0.25,0.55,0.791935,-0.25,0.65,0.683848,-0.25,0.75,0.563023,-0.25,0.85,0.43171,-0.25,0.95,0.292354,-0.25,1.05,0.147553,-0.25,-1.15,0.0,-0.15,-1.05,0.153316,-0.15,-0.95,0.303776,-0.15,-0.85,0.448578,-0.15,-0.75,0.585023,-0.15,-0.65,0.710571,-0.15,-0.55,0.822882,-0.15,-0.45,0.919864,-0.15,-0.35,0.999711,-0.15,-0.25,1.06093,-0.15,-0.15,1.1024,-0.15,-0.05,1.12332,-0.15,0.05,1.12332,-0.15,0.15,1.1024,-0.15,0.25,1.06094,-0.15,0.35,0.999712,-0.15,0.45,0.919866,-0.15,0.55,0.822884,-0.15,0.65,0.710573,-0.15,0.75,0.585026,-0.15,0.85,0.448581,-0.15,0.95,0.303779,-0.15,1.05,0.153319,-0.15,-1.15,0.0,-0.05,-1.05,0.156226,-0.05,-0.95,0.309543,-0.05,-0.85,0.457093,-0.05,-0.75,0.596128,-0.05,-0.65,0.724059,-0.05,-0.55,0.838501,-0.05,-0.45,0.937325,-0.05,-0.35,1.01869,-0.05,-0.25,1.08107,-0.05,-0.15,1.12332,-0.05,-0.05,1.14464,-0.05,0.05,1.14464,-0.05,0.15,1.12332,-0.05,0.25,1.08107,-0.05,0.35,1.01869,-0.05,0.45,0.937326,-0.05,0.55,0.838504,-0.05,0.65,0.724061,-0.05,0.75,0.596131,-0.05,0.85,0.457096,-0.05,0.95,0.309546,-0.05,1.05,0.156229,-0.05,-1.15,0.0,0.05,-1.05,0.156226,0.05,-0.95,0.309543,0.05,-0.85,0.457093,0.05,-0.75,0.596128,0.05,-0.65,0.724059,0.05,-0.55,0.838502,0.05,-0.45,0.937325,0.05,-0.35,1.01869,0.05,-0.25,1.08107,0.05,-0.15,1.12332,0.05,-0.05,1.14464,0.05,0.05,1.14464,0.05,0.15,1.12332,0.05,0.25,1.08107,0.05,0.35,1.01869,0.05,0.45,0.937326,0.05,0.55,0.838504,0.05,0.65,0.724061,0.05,0.75,0.596131,0.05,0.85,0.457096,0.05,0.95,0.309546,0.05,1.05,0.156229,0.05,-1.15,0.0,0.15};
			return value;
		}
		private double[] getCoordinate_5_32_point_4()
		{
			double[] value = {-1.05,0.153316,0.15,-0.95,0.303777,0.15,-0.85,0.448578,0.15,-0.75,0.585024,0.15,-0.65,0.710571,0.15,-0.55,0.822882,0.15,-0.45,0.919864,0.15,-0.35,0.999711,0.15,-0.25,1.06094,0.15,-0.15,1.1024,0.15,-0.05,1.12332,0.15,0.05,1.12332,0.15,0.15,1.1024,0.15,0.25,1.06094,0.15,0.35,0.999713,0.15,0.45,0.919866,0.15,0.55,0.822884,0.15,0.65,0.710573,0.15,0.75,0.585026,0.15,0.85,0.448581,0.15,0.95,0.30378,0.15,1.05,0.153319,0.15,-1.15,0.0,0.25,-1.05,0.14755,0.25,-0.95,0.292352,0.25,-0.85,0.431707,0.25,-0.75,0.563021,0.25,-0.65,0.683847,0.25,-0.55,0.791934,0.25,-0.45,0.885269,0.25,-0.35,0.962113,0.25,-0.25,1.02103,0.25,-0.15,1.06094,0.25,-0.05,1.08107,0.25,0.05,1.08107,0.25,0.15,1.06094,0.25,0.25,1.02104,0.25,0.35,0.962114,0.25,0.45,0.88527,0.25,0.55,0.791936,0.25,0.65,0.683849,0.25,0.75,0.563024,0.25,0.85,0.43171,0.25,0.95,0.292354,0.25,1.05,0.147553,0.25,-1.15,0.0,0.35,-1.05,0.139035,0.35,-0.95,0.275481,0.35,-0.85,0.406795,0.35,-0.75,0.530531,0.35,-0.65,0.644384,0.35,-0.55,0.746233,0.35,-0.45,0.834182,0.35,-0.35,0.906592,0.35,-0.25,0.962113,0.35,-0.15,0.999712,0.35,-0.05,1.01869,0.35,0.05,1.01869,0.35,0.15,0.999713,0.35,0.25,0.962114,0.35,0.35,0.906593,0.35,0.45,0.834184,0.35,0.55,0.746235,0.35,0.65,0.644386,0.35,0.75,0.530533,0.35,0.85,0.406797,0.35,0.95,0.275483,0.35,1.05,0.139038,0.35,-1.15,0.0,0.45,-1.05,0.127931,0.45,-0.95,0.253478,0.45,-0.85,0.374304,0.45,-0.75,0.488157,0.45,-0.65,0.592917,0.45,-0.55,0.686632,0.45,-0.45,0.767556,0.45,-0.35,0.834183,0.45,-0.25,0.885269,0.45,-0.15,0.919866,0.45,-0.05,0.937326,0.45,0.05,0.937326,0.45,0.15,0.919866,0.45,0.25,0.88527,0.45,0.35,0.834184,0.45,0.45,0.767558,0.45,0.55,0.686634,0.45,0.65,0.592919,0.45,0.75,0.48816,0.45,0.85,0.374306,0.45,0.95,0.253481,0.45,1.05,0.127933,0.45,-1.15,0.0,0.55,-1.05,0.114443,0.55,-0.95,0.226754,0.55,-0.85,0.334841,0.55,-0.75,0.436691,0.55,-0.65,0.530406,0.55,-0.55,0.61424,0.55,-0.45,0.686632,0.55,-0.35,0.746234,0.55};
			return value;
		}
		private double[] getCoordinate_5_32_point_5()
		{
			double[] value = {-0.25,0.791935,0.55,-0.15,0.822884,0.55,-0.05,0.838504,0.55,0.05,0.838504,0.55,0.15,0.822884,0.55,0.25,0.791936,0.55,0.35,0.746235,0.55,0.45,0.686634,0.55,0.55,0.614242,0.55,0.65,0.530407,0.55,0.75,0.436693,0.55,0.85,0.334843,0.55,0.95,0.226756,0.55,1.05,0.114445,0.55,-1.15,0.0,0.65,-1.05,0.0988233,0.65,-0.95,0.195806,0.65,-0.85,0.289141,0.65,-0.75,0.377089,0.65,-0.65,0.458014,0.65,-0.55,0.530406,0.65,-0.45,0.592918,0.65,-0.35,0.644385,0.65,-0.25,0.683848,0.65,-0.15,0.710573,0.65,-0.05,0.724061,0.65,0.05,0.724061,0.65,0.15,0.710573,0.65,0.25,0.683849,0.65,0.35,0.644386,0.65,0.45,0.592919,0.65,0.55,0.530407,0.65,0.65,0.458015,0.65,0.75,0.377091,0.65,0.85,0.289142,0.65,0.95,0.195808,0.65,1.05,0.0988252,0.65,-1.15,0.0,0.75,-1.05,0.0813627,0.75,-0.95,0.16121,0.75,-0.85,0.238054,0.75,-0.75,0.310463,0.75,-0.65,0.37709,0.75,-0.55,0.436692,0.75,-0.45,0.488159,0.75,-0.35,0.530532,0.75,-0.25,0.563023,0.75,-0.15,0.585026,0.75,-0.05,0.596131,0.75,0.05,0.596131,0.75,0.15,0.585026,0.75,0.25,0.563024,0.75,0.35,0.530533,0.75,0.45,0.48816,0.75,0.55,0.436693,0.75,0.65,0.377091,0.75,0.75,0.310465,0.75,0.85,0.238055,0.75,0.95,0.161211,0.75,1.05,0.0813643,0.75,-1.15,0.0,0.85,-1.05,0.0623866,0.85,-0.95,0.123611,0.85,-0.85,0.182533,0.85,-0.75,0.238054,0.85,-0.65,0.289141,0.85,-0.55,0.334842,0.85,-0.45,0.374306,0.85,-0.35,0.406797,0.85,-0.25,0.43171,0.85,-0.15,0.448581,0.85,-0.05,0.457096,0.85,0.05,0.457096,0.85,0.15,0.448581,0.85,0.25,0.43171,0.85,0.35,0.406797,0.85,0.45,0.374306,0.85,0.55,0.334843,0.85,0.65,0.289142,0.85,0.75,0.238055,0.85,0.85,0.182534,0.85,0.95,0.123612,0.85,1.05,0.0623878,0.85,-1.15,0.0,0.95,-1.05,0.0422483,0.95,-0.95,0.0837095,0.95,-0.85,0.123611,0.95,-0.75,0.161211,0.95,-0.65,0.195807,0.95,-0.55,0.226756,0.95,-0.45,0.25348,0.95,-0.35,0.275483,0.95,-0.25,0.292354,0.95,-0.15,0.303779,0.95,-0.05,0.309546,0.95,0.05,0.309546,0.95,0.15,0.30378,0.95,0.25,0.292354,0.95,0.35,0.275483,0.95,0.45,0.253481,0.95};
			return value;
		}
		private double[] getCoordinate_5_32_point_6()
		{
			double[] value = {0.55,0.226756,0.95,0.65,0.195808,0.95,0.75,0.161211,0.95,0.85,0.123612,0.95,0.95,0.0837103,0.95,1.05,0.0422491,0.95,-1.15,0.0,1.05,-1.05,0.0213229,1.05,-0.95,0.0422487,1.05,-0.85,0.0623874,1.05,-0.75,0.0813639,1.05,-0.65,0.0988249,1.05,-0.55,0.114445,1.05,-0.45,0.127933,1.05,-0.35,0.139038,1.05,-0.25,0.147553,1.05,-0.15,0.153319,1.05,-0.05,0.156229,1.05,0.05,0.156229,1.05,0.15,0.153319,1.05,0.25,0.147553,1.05,0.35,0.139038,1.05,0.45,0.127933,1.05,0.55,0.114445,1.05,0.65,0.0988252,1.05,0.75,0.0813643,1.05,0.85,0.0623878,1.05,0.95,0.0422491,1.05,1.05,0.0213233,1.05};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getColor_5_33_color_1()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_5_33_color_2()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_5_33_color_3()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_5_33_color_4()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_5_33_color_5()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}
		private double[] getColor_5_33_color_6()
		{
			double[] value = {1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0,1.0,0.0,0.0};
			return value;
		}

		/** Large attribute array: Coordinate point field, scene-graph level=5, element #32, 1587 total numbers made up of 529 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_5_32_point()
		{
			MFVec3f Coordinate_5_32_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_5_32_point_1()))
				.append(new MFVec3f(getCoordinate_5_32_point_2()))
				.append(new MFVec3f(getCoordinate_5_32_point_3()))
				.append(new MFVec3f(getCoordinate_5_32_point_4()))
				.append(new MFVec3f(getCoordinate_5_32_point_5()))
				.append(new MFVec3f(getCoordinate_5_32_point_6()));
			return Coordinate_5_32_point;
		}
		/** Large attribute array: Color color field, scene-graph level=5, element #33, 1587 total numbers made up of 529 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_5_33_color()
		{
			MFColor Color_5_33_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_5_33_color_1()))
				.append(new MFColor(getColor_5_33_color_2()))
				.append(new MFColor(getColor_5_33_color_3()))
				.append(new MFColor(getColor_5_33_color_4()))
				.append(new MFColor(getColor_5_33_color_5()))
				.append(new MFColor(getColor_5_33_color_6()));
			return Color_5_33_color;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return PointSetCoord model
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
        X3D thisExampleX3dModel = new PointSetCoord().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.PointSetCoord\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.PointSetCoord\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

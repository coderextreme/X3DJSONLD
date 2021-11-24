package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> PointProperties test case, suitable for X3Dv4 implementation comparisons and conformance. </p>
 <p> Related links: <a href="../../../Points/BasicPointSprites.java">BasicPointSprites.java</a> source, <a href="../../../Points/BasicPointSpritesIndex.html" target="_top">BasicPointSprites catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Points/BasicPointSprites.x3d">BasicPointSprites.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> PointProperties test case, suitable for X3Dv4 implementation comparisons and conformance. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 May 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 17 April 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3dv4-implementations" target="_blank">https://www.web3d.org/x3dv4-implementations</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> requires </i> </td>
			<td> X3Dv4.0 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) Web3D Consortium Inc. 2006 to present </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> PointProperties test </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Points/originals/basic_point_sprites.x3d">originals/basic_point_sprites.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Points/BasicPointSprites.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Points/BasicPointSprites.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Points/../license.html">../license.html</a> </td>
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

	* @author Vince Marchetti
 */

public class BasicPointSprites
{
	/** Default constructor to create this object. */
	public BasicPointSprites ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("BasicPointSprites.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("PointProperties test case, suitable for X3Dv4 implementation comparisons and conformance."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Vince Marchetti"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 May 2019"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("17 April 2021"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3dv4-implementations"))
    .addMeta(new meta().setName(meta.NAME_REQUIRES   ).setContent("X3Dv4.0"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright (c) Web3D Consortium Inc. 2006 to present"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("PointProperties test"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/basic_point_sprites.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Points/BasicPointSprites.x3d"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("BasicPointSprites.x3d"))
    .addChild(new Transform().setTranslation(-2.0,0.0,0.0)
      .addChild(new Viewpoint("PointProperties1imagespritefar"))
      .addChild(new Viewpoint("PointProperties1imagespritenear").setPosition(0.0,0.0,5.0))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setCoord(new Coordinate().setPoint(getCoordinate_6_19_point()))
          .setColor(new Color().setColor(getColor_6_20_color())))
        .setAppearance(new Appearance("PointProperties1")
          .setPointProperties(new PointProperties().setAttenuation(1.0,0.01,0.1).setPointSizeMinValue(5).setPointSizeScaleFactor(100))
          .addComments(" X3Dv3.3 ImageTexture has no effect on points, X3Dv4.0 each point is replaced by an image sprite ")
          .setTexture(new ImageTexture().setUrl(new String[] {"images/sphere.png","https://www.web3d.org/x3d/content/examples/Basic/Points/images/sphere.png"})))))
    .addChild(new Transform().setTranslation(2.0,0.0,0.0)
      .addComments(" what do we want to show? ")
      .addChild(new Viewpoint("PointProperties2far"))
      .addChild(new Viewpoint("PointProperties2near").setPosition(0.0,0.0,5.0))
      .addChild(new Shape()
        .setGeometry(new PointSet()
          .setCoord(new Coordinate().setPoint(getCoordinate_6_29_point()))
          .setColor(new Color().setColor(getColor_6_30_color())))
        .setAppearance(new Appearance().setUSE("PointProperties1")))));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] getCoordinate_6_19_point_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,-0.242536,0.0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0.0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0.0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0.0,0.242536,-0.970142,0.242536,0.0,-1.0,0.0,0.0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0.0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0.0,-0.242536,0.970142,0.0,0.0,-0.242536,0.970142,0.301511,-0.301511,0.904534,0.666667,-0.333333,0.666667,0.904534,-0.301511,0.301511,0.970142,-0.242536,0.0,0.0,-0.5547,0.83205,0.333333,-0.666667,0.666667,0.666667,-0.666667,0.333333,0.83205,-0.5547,0.0,0.0,-0.83205,0.5547,0.301511,-0.904534,0.301511,0.5547,-0.83205,0.0,0.0,-0.970142,0.242536,0.242536,-0.970142,0.0,0.0,-1.0,0.0,-0.970142,-0.242536,0.0,-0.904534,-0.301511,0.301511,-0.666667,-0.333333,0.666667,-0.301511,-0.301511,0.904534,-0.83205,-0.5547,0.0,-0.666667,-0.666667,0.333333,-0.333333,-0.666667,0.666667,-0.5547,-0.83205,0.0,-0.301511,-0.904534,0.301511,-0.242536,-0.970142,0.0,0.0,0.0,-1.0,0.0,0.242536,-0.970142,0.242536,0.0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0.0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0.0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0.0,-0.242536,0.0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0.0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0.0,0.970142,-0.242536,-0.970142,0.0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0.0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0.0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0.0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511,0.904534,-0.301511,-0.301511,0.666667,-0.333333,-0.666667,0.301511,-0.301511,-0.904534,0.0,-0.242536,-0.970142,0.666667,-0.666667,-0.333333,0.333333,-0.666667,-0.666667,0.0,-0.5547,-0.83205,0.301511,-0.904534,-0.301511,0.0,-0.83205,-0.5547,0.0,-0.970142,-0.242536,-0.301511,-0.301511,-0.904534,-0.666667,-0.333333,-0.666667,-0.904534,-0.301511,-0.301511,-0.333333,-0.666667,-0.666667};
			return value;
		}
		private double[] getCoordinate_6_19_point_2()
		{
			double[] value = {-0.666667,-0.666667,-0.333333,-0.301511,-0.904534,-0.301511};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getColor_6_20_color_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,0.242536,0.0,0.970142,0.301511,0.301511,0.904534,0.5547,0.0,0.83205,0.666667,0.333333,0.666667,0.83205,0.0,0.5547,0.904534,0.301511,0.301511,0.970142,0.0,0.242536,0.970142,0.242536,0.0,1.0,0.0,0.0,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.83205,0.5547,0.0,0.301511,0.904534,0.301511,0.5547,0.83205,0.0,0.242536,0.970142,0.0,0.0,0.242536,0.970142,0.301511,0.301511,0.904534,0.666667,0.333333,0.666667,0.904534,0.301511,0.301511,0.970142,0.242536,0.0,0.0,0.5547,0.83205,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.83205,0.5547,0.0,0.0,0.83205,0.5547,0.301511,0.904534,0.301511,0.5547,0.83205,0.0,0.0,0.970142,0.242536,0.242536,0.970142,0.0,0.0,1.0,0.0,0.970142,0.242536,0.0,0.904534,0.301511,0.301511,0.666667,0.333333,0.666667,0.301511,0.301511,0.904534,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.242536,0.970142,0.0,0.0,0.0,1.0,0.0,0.242536,0.970142,0.242536,0.0,0.970142,0.301511,0.301511,0.904534,0.5547,0.0,0.83205,0.666667,0.333333,0.666667,0.83205,0.0,0.5547,0.904534,0.301511,0.301511,0.970142,0.0,0.242536,0.0,0.5547,0.83205,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.0,0.83205,0.5547,0.301511,0.904534,0.301511,0.0,0.970142,0.242536,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.301511,0.904534,0.301511,0.904534,0.301511,0.301511,0.666667,0.333333,0.666667,0.301511,0.301511,0.904534,0.0,0.242536,0.970142,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.0,0.970142,0.242536,0.301511,0.301511,0.904534,0.666667,0.333333,0.666667,0.904534,0.301511,0.301511,0.333333,0.666667,0.666667};
			return value;
		}
		private double[] getColor_6_20_color_2()
		{
			double[] value = {0.666667,0.666667,0.333333,0.301511,0.904534,0.301511};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_6_29_point_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,-0.242536,0.0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0.0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0.0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0.0,0.242536,-0.970142,0.242536,0.0,-1.0,0.0,0.0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0.0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0.0,-0.242536,0.970142,0.0,0.0,-0.242536,0.970142,0.301511,-0.301511,0.904534,0.666667,-0.333333,0.666667,0.904534,-0.301511,0.301511,0.970142,-0.242536,0.0,0.0,-0.5547,0.83205,0.333333,-0.666667,0.666667,0.666667,-0.666667,0.333333,0.83205,-0.5547,0.0,0.0,-0.83205,0.5547,0.301511,-0.904534,0.301511,0.5547,-0.83205,0.0,0.0,-0.970142,0.242536,0.242536,-0.970142,0.0,0.0,-1.0,0.0,-0.970142,-0.242536,0.0,-0.904534,-0.301511,0.301511,-0.666667,-0.333333,0.666667,-0.301511,-0.301511,0.904534,-0.83205,-0.5547,0.0,-0.666667,-0.666667,0.333333,-0.333333,-0.666667,0.666667,-0.5547,-0.83205,0.0,-0.301511,-0.904534,0.301511,-0.242536,-0.970142,0.0,0.0,0.0,-1.0,0.0,0.242536,-0.970142,0.242536,0.0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0.0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0.0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0.0,-0.242536,0.0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0.0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0.0,0.970142,-0.242536,-0.970142,0.0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0.0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0.0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0.0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511,0.904534,-0.301511,-0.301511,0.666667,-0.333333,-0.666667,0.301511,-0.301511,-0.904534,0.0,-0.242536,-0.970142,0.666667,-0.666667,-0.333333,0.333333,-0.666667,-0.666667,0.0,-0.5547,-0.83205,0.301511,-0.904534,-0.301511,0.0,-0.83205,-0.5547,0.0,-0.970142,-0.242536,-0.301511,-0.301511,-0.904534,-0.666667,-0.333333,-0.666667,-0.904534,-0.301511,-0.301511,-0.333333,-0.666667,-0.666667};
			return value;
		}
		private double[] getCoordinate_6_29_point_2()
		{
			double[] value = {-0.666667,-0.666667,-0.333333,-0.301511,-0.904534,-0.301511};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getColor_6_30_color_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,0.242536,0.0,0.970142,0.301511,0.301511,0.904534,0.5547,0.0,0.83205,0.666667,0.333333,0.666667,0.83205,0.0,0.5547,0.904534,0.301511,0.301511,0.970142,0.0,0.242536,0.970142,0.242536,0.0,1.0,0.0,0.0,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.83205,0.5547,0.0,0.301511,0.904534,0.301511,0.5547,0.83205,0.0,0.242536,0.970142,0.0,0.0,0.242536,0.970142,0.301511,0.301511,0.904534,0.666667,0.333333,0.666667,0.904534,0.301511,0.301511,0.970142,0.242536,0.0,0.0,0.5547,0.83205,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.83205,0.5547,0.0,0.0,0.83205,0.5547,0.301511,0.904534,0.301511,0.5547,0.83205,0.0,0.0,0.970142,0.242536,0.242536,0.970142,0.0,0.0,1.0,0.0,0.970142,0.242536,0.0,0.904534,0.301511,0.301511,0.666667,0.333333,0.666667,0.301511,0.301511,0.904534,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.242536,0.970142,0.0,0.0,0.0,1.0,0.0,0.242536,0.970142,0.242536,0.0,0.970142,0.301511,0.301511,0.904534,0.5547,0.0,0.83205,0.666667,0.333333,0.666667,0.83205,0.0,0.5547,0.904534,0.301511,0.301511,0.970142,0.0,0.242536,0.0,0.5547,0.83205,0.333333,0.666667,0.666667,0.666667,0.666667,0.333333,0.0,0.83205,0.5547,0.301511,0.904534,0.301511,0.0,0.970142,0.242536,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.301511,0.904534,0.301511,0.904534,0.301511,0.301511,0.666667,0.333333,0.666667,0.301511,0.301511,0.904534,0.0,0.242536,0.970142,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.0,0.970142,0.242536,0.301511,0.301511,0.904534,0.666667,0.333333,0.666667,0.904534,0.301511,0.301511,0.333333,0.666667,0.666667};
			return value;
		}
		private double[] getColor_6_30_color_2()
		{
			double[] value = {0.666667,0.666667,0.333333,0.301511,0.904534,0.301511};
			return value;
		}

		/** Large attribute array: Coordinate point field, scene-graph level=6, element #19, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_19_point()
		{
			MFVec3f Coordinate_6_19_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_6_19_point_1()))
				.append(new MFVec3f(getCoordinate_6_19_point_2()));
			return Coordinate_6_19_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #20, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_20_color()
		{
			MFColor Color_6_20_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_20_color_1()))
				.append(new MFColor(getColor_6_20_color_2()));
			return Color_6_20_color;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=6, element #29, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_6_29_point()
		{
			MFVec3f Coordinate_6_29_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_6_29_point_1()))
				.append(new MFVec3f(getCoordinate_6_29_point_2()));
			return Coordinate_6_29_point;
		}
		/** Large attribute array: Color color field, scene-graph level=6, element #30, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFColor getColor_6_30_color()
		{
			MFColor Color_6_30_color = new MFColor()/*2.finalize*/
				.append(new MFColor(getColor_6_30_color_1()))
				.append(new MFColor(getColor_6_30_color_2()));
			return Color_6_30_color;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return BasicPointSprites model
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
        X3D thisExampleX3dModel = new BasicPointSprites().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.BasicPointSprites\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.BasicPointSprites\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

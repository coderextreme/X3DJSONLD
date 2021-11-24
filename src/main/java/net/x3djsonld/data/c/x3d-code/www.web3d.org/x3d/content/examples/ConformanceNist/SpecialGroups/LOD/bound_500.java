package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This tests checks the boundary condition of 500 children per grouping node. An LOD node is defined with 500 children in its "level" field. Section 7.3 (Minimum Support Requirements) of the VRML specifications 500 children within a single grouping node. The test is started by clicking on the text below the figure. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a. </p>
 <p> Related links: <a href="../../../../SpecialGroups/LOD/bound_500.java">bound_500.java</a> source, <a href="../../../../SpecialGroups/LOD/bound_500Index.html" target="_top">bound_500 catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../SpecialGroups/LOD/bound_500.x3d">bound_500.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../SpecialGroups/LOD/bound-500-movie.mpg">bound-500-movie.mpg</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> TODO </i> </td>
			<td> Xj3D Player Bugzilla Issue <a href="http://bugzilla.xj3d.org" target="_blank">http://bugzilla.xj3d.org</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This tests checks the boundary condition of 500 children per grouping node. An LOD node is defined with 500 children in its "level" field. Section 7.3 (Minimum Support Requirements) of the VRML specifications 500 children within a single grouping node. The test is started by clicking on the text below the figure. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/bound_500.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/bound_500.x3d</a> </td>
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
			<td> <a href="../../../../SpecialGroups/LOD/../../license.html">../../license.html</a> </td>
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

public class bound_500
{
	/** Default constructor to create this object. */
	public bound_500 ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("bound_500.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("bound-500-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_TODO       ).setContent("Xj3D Player Bugzilla Issue http://bugzilla.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This tests checks the boundary condition of 500 children per grouping node. An LOD node is defined with 500 children in its \"level\" field. Section 7.3 (Minimum Support Requirements) of the VRML specifications 500 children within a single grouping node. The test is started by clicking on the text below the figure. The test should generate a figure that resembles a temple with white columns, a fly of stairs up front and a"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/bound_500.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("bound_500.x3d"))
    .addChild(new NavigationInfo().setType("\"EXAMINE\" \"WALK\" \"FLY\" \"ANY\""))
    .addChild(new Group()
      .addChild(new Viewpoint("the-view").setDescription("user avatar position").setPosition(0.0,0.0,70.0)))
    .addChild(new Transform("big-trans1").setScale(0.02,0.02,0.02).setTranslation(-3.4,-3.0,55.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"CLICK HERE TO START"})
          .setFontStyle(new FontStyle("the-style").setJustify(FontStyle.JUSTIFY_FIRST_FIRST).setSize(29).setCssStyle("BOLD"))))
      .addChild(new TouchSensor("the-touch").setDescription("touch to activate")))
    .addChild(new TimeSensor("the-time").setCycleInterval(8))
    .addChild(new TimeSensor("text-time").setCycleInterval(0.1))
    .addChild(new TimeSensor("moving-time").setCycleInterval(7.8))
    .addChild(new PositionInterpolator("temple-position").setKey(gettemple_position_3_32_key()).setKeyValue(gettemple_position_3_32_keyValue()))
    .addChild(new ColorInterpolator("color-change").setKey(new double[] {0.0,1.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,0.0,0.0,0.0,0.0})))
    .addChild(new ColorInterpolator("moving-colors").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.95,1.0}).setKeyValue(new MFColor(new double[] {0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0})))
    .addChild(new ColorInterpolator("final-text").setKey(new double[] {0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.95,1.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0})))
    .addChild(new Transform().setTranslation(-5.0,5.0,50.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("text-color").setDiffuseColor(0.0,1.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Original Position: Level 1"}))))
    .addChild(new Transform().setTranslation(-5.0,6.0,50.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("moving-text").setDiffuseColor(0.0,0.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Moving away from user"}))))
    .addChild(new Transform().setTranslation(-5.0,7.0,50.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("final-color").setDiffuseColor(0.0,0.0,0.0)))
        .setGeometry(new Text().setString(new String[] {"Final Position: Level 500"}))))
    .addChild(new Transform("lod-position").setRotation(1.0,0.0,0.0,0.2).setTranslation(0.0,0.0,50.0)
      .addChild(new LOD().setCenter(-2.0,0.0,0.0).setRange(getLOD_4_51_range())
        .addChild(new Inline("REF1").setUrl(new String[] {"ref1.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.x3d","ref1.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/SpecialGroups/LOD/ref1.wrl"}))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))
        .addChild(new Inline().setUSE("REF1"))))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("the-time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("text-time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-touch").setFromField("touchTime").setToNode("moving-time").setToField("startTime"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("temple-position").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("text-time").setFromField("fraction_changed").setToNode("color-change").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("moving-time").setFromField("fraction_changed").setToNode("moving-colors").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("the-time").setFromField("fraction_changed").setToNode("final-text").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("color-change").setFromField("value_changed").setToNode("text-color").setToField("diffuseColor"))
    .addChild(new ROUTE().setFromNode("moving-colors").setFromField("value_changed").setToNode("moving-text").setToField("diffuseColor"))
    .addChild(new ROUTE().setFromNode("final-text").setFromField("value_changed").setToNode("final-color").setToField("diffuseColor"))
    .addChild(new ROUTE().setFromNode("temple-position").setFromField("value_changed").setToNode("lod-position").setToField("translation")));
    }
	// end of initialize() method

		/** Define subarrays using type double[] */
		private double[] gettemple_position_3_32_key_1()
		{
			double[] value = {0.0,0.002,0.004,0.006,0.008,0.01,0.012,0.014,0.016,0.018,0.02,0.022,0.024,0.026,0.028,0.03,0.032,0.034,0.036,0.038,0.04,0.042,0.044,0.046,0.048,0.05,0.052,0.054,0.056,0.058,0.06,0.062,0.064,0.066,0.068,0.07,0.072,0.074,0.076,0.078,0.08,0.082,0.084,0.086,0.088,0.09,0.092,0.094,0.096,0.098,0.1,0.102,0.104,0.106,0.108,0.11,0.112,0.114,0.116,0.118,0.12,0.122,0.124,0.126,0.128,0.13,0.132,0.134,0.136,0.138,0.14,0.142,0.144,0.146,0.148,0.15,0.152,0.154,0.156,0.158,0.16,0.162,0.164,0.166,0.168,0.17,0.172,0.174,0.176,0.178,0.18,0.182,0.184,0.186,0.188,0.19,0.192,0.194,0.196,0.198,0.2,0.202,0.204,0.206,0.208,0.21,0.212,0.214,0.216,0.218,0.22,0.222,0.224,0.226,0.228,0.23,0.232,0.234,0.236,0.238,0.24,0.242,0.244,0.246,0.248,0.25,0.252,0.254,0.256,0.258,0.26,0.262,0.264,0.266,0.268,0.27,0.272,0.274,0.276,0.278,0.28,0.282,0.284,0.286,0.288,0.29,0.292,0.294,0.296,0.298,0.3,0.302,0.304,0.306,0.308,0.31,0.312,0.314,0.316,0.318,0.32,0.322,0.324,0.326,0.328,0.33,0.332,0.334,0.336,0.338,0.34,0.342,0.344,0.346,0.348,0.35,0.352,0.354,0.356,0.358,0.36,0.362,0.364,0.366,0.368,0.37,0.372,0.374,0.376,0.378,0.38,0.382,0.384,0.386,0.388,0.39,0.392,0.394,0.396,0.398,0.4,0.402,0.404,0.406,0.408,0.41,0.412,0.414,0.416,0.418,0.42,0.422,0.424,0.426,0.428,0.43,0.432,0.434,0.436,0.438,0.44,0.442,0.444,0.446,0.448,0.45,0.452,0.454,0.456,0.458,0.46,0.462,0.464,0.466,0.468,0.47,0.472,0.474,0.476,0.478,0.48,0.482,0.484,0.486,0.488,0.49,0.492,0.494,0.496,0.498,0.5,0.502,0.504,0.506,0.508,0.51,0.512,0.514,0.516,0.518,0.52,0.522,0.524,0.526,0.528,0.53,0.532,0.534,0.536,0.538,0.54,0.542,0.544,0.546,0.548,0.55,0.552,0.554,0.556,0.558,0.56,0.562,0.564,0.566,0.568,0.57,0.572,0.574,0.576,0.578,0.58,0.582,0.584,0.586,0.588,0.59,0.592,0.594,0.596,0.598,0.6,0.602,0.604,0.606,0.608,0.61,0.612,0.614,0.616,0.618,0.62,0.622,0.624,0.626,0.628,0.63,0.632,0.634,0.636,0.638,0.64,0.642,0.644,0.646,0.648,0.65,0.652,0.654,0.656,0.658,0.66,0.662,0.664,0.666,0.668,0.67,0.672,0.674,0.676,0.678,0.68,0.682,0.684,0.686,0.688,0.69,0.692,0.694,0.696,0.698,0.7,0.702,0.704,0.706,0.708,0.71,0.712,0.714,0.716,0.718,0.72,0.722,0.724,0.726,0.728,0.73,0.732,0.734,0.736,0.738,0.74,0.742,0.744,0.746,0.748,0.75,0.752,0.754,0.756,0.758,0.76,0.762,0.764,0.766,0.768,0.77,0.772,0.774,0.776,0.778,0.78,0.782,0.784,0.786,0.788,0.79,0.792,0.794,0.796,0.798,0.8,0.802,0.804,0.806,0.808,0.81,0.812,0.814,0.816,0.818,0.82,0.822,0.824,0.826,0.828,0.83,0.832,0.834,0.836,0.838,0.84,0.842,0.844,0.846,0.848,0.85,0.852,0.854,0.856,0.858,0.86,0.862,0.864,0.866,0.868,0.87,0.872,0.874,0.876,0.878,0.88,0.882,0.884,0.886,0.888,0.89,0.892,0.894,0.896,0.898,0.9,0.902,0.904,0.906,0.908,0.91,0.912,0.914,0.916,0.918,0.92,0.922,0.924,0.926,0.928,0.93,0.932,0.934,0.936,0.938,0.94,0.942,0.944,0.946,0.948,0.95,0.952,0.954,0.956,0.958,0.96,0.962,0.964,0.966,0.968,0.97,0.972,0.974,0.976,0.978,0.98,0.982,0.984,0.986,0.988,0.99,0.992,0.994,0.996,1.0};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] gettemple_position_3_32_keyValue_1()
		{
			double[] value = {0.0,0.0,50.0,0.0,0.0,49.9,0.0,0.0,49.8,0.0,0.0,49.7,0.0,0.0,49.6,0.0,0.0,49.5,0.0,0.0,49.4,0.0,0.0,49.3,0.0,0.0,49.2,0.0,0.0,49.1,0.0,0.0,49.0,0.0,0.0,48.9,0.0,0.0,48.8,0.0,0.0,48.7,0.0,0.0,48.6,0.0,0.0,48.5,0.0,0.0,48.4,0.0,0.0,48.3,0.0,0.0,48.2,0.0,0.0,48.1,0.0,0.0,48.0,0.0,0.0,47.9,0.0,0.0,47.8,0.0,0.0,47.7,0.0,0.0,47.6,0.0,0.0,47.5,0.0,0.0,47.4,0.0,0.0,47.3,0.0,0.0,47.2,0.0,0.0,47.1,0.0,0.0,47.0,0.0,0.0,46.9,0.0,0.0,46.8,0.0,0.0,46.7,0.0,0.0,46.6,0.0,0.0,46.5,0.0,0.0,46.4,0.0,0.0,46.3,0.0,0.0,46.2,0.0,0.0,46.1,0.0,0.0,46.0,0.0,0.0,45.9,0.0,0.0,45.8,0.0,0.0,45.7,0.0,0.0,45.6,0.0,0.0,45.5,0.0,0.0,45.4,0.0,0.0,45.3,0.0,0.0,45.2,0.0,0.0,45.1,0.0,0.0,45.0,0.0,0.0,44.9,0.0,0.0,44.8,0.0,0.0,44.7,0.0,0.0,44.6,0.0,0.0,44.5,0.0,0.0,44.4,0.0,0.0,44.3,0.0,0.0,44.2,0.0,0.0,44.1,0.0,0.0,44.0,0.0,0.0,43.9,0.0,0.0,43.8,0.0,0.0,43.7,0.0,0.0,43.6,0.0,0.0,43.5,0.0,0.0,43.4,0.0,0.0,43.3,0.0,0.0,43.2,0.0,0.0,43.1,0.0,0.0,43.0,0.0,0.0,42.9,0.0,0.0,42.8,0.0,0.0,42.7,0.0,0.0,42.6,0.0,0.0,42.5,0.0,0.0,42.4,0.0,0.0,42.3,0.0,0.0,42.2,0.0,0.0,42.1,0.0,0.0,42.0,0.0,0.0,41.9,0.0,0.0,41.8,0.0,0.0,41.7,0.0,0.0,41.6,0.0,0.0,41.5,0.0,0.0,41.4,0.0,0.0,41.3,0.0,0.0,41.2,0.0,0.0,41.1,0.0,0.0,41.0,0.0,0.0,40.9,0.0,0.0,40.8,0.0,0.0,40.7,0.0,0.0,40.6,0.0,0.0,40.5,0.0,0.0,40.4,0.0,0.0,40.3,0.0,0.0,40.2,0.0,0.0,40.1};
			return value;
		}
		private double[] gettemple_position_3_32_keyValue_2()
		{
			double[] value = {0.0,0.0,40.0,0.0,0.0,39.9,0.0,0.0,39.8,0.0,0.0,39.7,0.0,0.0,39.6,0.0,0.0,39.5,0.0,0.0,39.4,0.0,0.0,39.3,0.0,0.0,39.2,0.0,0.0,39.1,0.0,0.0,39.0,0.0,0.0,38.9,0.0,0.0,38.8,0.0,0.0,38.7,0.0,0.0,38.6,0.0,0.0,38.5,0.0,0.0,38.4,0.0,0.0,38.3,0.0,0.0,38.2,0.0,0.0,38.1,0.0,0.0,38.0,0.0,0.0,37.9,0.0,0.0,37.8,0.0,0.0,37.7,0.0,0.0,37.6,0.0,0.0,37.5,0.0,0.0,37.4,0.0,0.0,37.3,0.0,0.0,37.2,0.0,0.0,37.1,0.0,0.0,37.0,0.0,0.0,36.9,0.0,0.0,36.8,0.0,0.0,36.7,0.0,0.0,36.6,0.0,0.0,36.5,0.0,0.0,36.4,0.0,0.0,36.3,0.0,0.0,36.2,0.0,0.0,36.1,0.0,0.0,36.0,0.0,0.0,35.9,0.0,0.0,35.8,0.0,0.0,35.7,0.0,0.0,35.6,0.0,0.0,35.5,0.0,0.0,35.4,0.0,0.0,35.3,0.0,0.0,35.2,0.0,0.0,35.1,0.0,0.0,35.0,0.0,0.0,34.9,0.0,0.0,34.8,0.0,0.0,34.7,0.0,0.0,34.6,0.0,0.0,34.5,0.0,0.0,34.4,0.0,0.0,34.3,0.0,0.0,34.2,0.0,0.0,34.1,0.0,0.0,34.0,0.0,0.0,33.9,0.0,0.0,33.8,0.0,0.0,33.7,0.0,0.0,33.6,0.0,0.0,33.5,0.0,0.0,33.4,0.0,0.0,33.3,0.0,0.0,33.2,0.0,0.0,33.1,0.0,0.0,33.0,0.0,0.0,32.9,0.0,0.0,32.8,0.0,0.0,32.7,0.0,0.0,32.6,0.0,0.0,32.5,0.0,0.0,32.4,0.0,0.0,32.3,0.0,0.0,32.2,0.0,0.0,32.1,0.0,0.0,32.0,0.0,0.0,31.9,0.0,0.0,31.8,0.0,0.0,31.7,0.0,0.0,31.6,0.0,0.0,31.5,0.0,0.0,31.4,0.0,0.0,31.3,0.0,0.0,31.2,0.0,0.0,31.1,0.0,0.0,31.0,0.0,0.0,30.9,0.0,0.0,30.8,0.0,0.0,30.7,0.0,0.0,30.6,0.0,0.0,30.5,0.0,0.0,30.4,0.0,0.0,30.3,0.0,0.0,30.2,0.0,0.0,30.1};
			return value;
		}
		private double[] gettemple_position_3_32_keyValue_3()
		{
			double[] value = {0.0,0.0,30.0,0.0,0.0,29.9,0.0,0.0,29.8,0.0,0.0,29.7,0.0,0.0,29.6,0.0,0.0,29.5,0.0,0.0,29.4,0.0,0.0,29.3,0.0,0.0,29.2,0.0,0.0,29.1,0.0,0.0,29.0,0.0,0.0,28.9,0.0,0.0,28.8,0.0,0.0,28.7,0.0,0.0,28.6,0.0,0.0,28.5,0.0,0.0,28.4,0.0,0.0,28.3,0.0,0.0,28.2,0.0,0.0,28.1,0.0,0.0,28.0,0.0,0.0,27.9,0.0,0.0,27.8,0.0,0.0,27.7,0.0,0.0,27.6,0.0,0.0,27.5,0.0,0.0,27.4,0.0,0.0,27.3,0.0,0.0,27.2,0.0,0.0,27.1,0.0,0.0,27.0,0.0,0.0,26.9,0.0,0.0,26.8,0.0,0.0,26.7,0.0,0.0,26.6,0.0,0.0,26.5,0.0,0.0,26.4,0.0,0.0,26.3,0.0,0.0,26.2,0.0,0.0,26.1,0.0,0.0,26.0,0.0,0.0,25.9,0.0,0.0,25.8,0.0,0.0,25.7,0.0,0.0,25.6,0.0,0.0,25.5,0.0,0.0,25.4,0.0,0.0,25.3,0.0,0.0,25.2,0.0,0.0,25.1,0.0,0.0,25.0,0.0,0.0,24.9,0.0,0.0,24.8,0.0,0.0,24.7,0.0,0.0,24.6,0.0,0.0,24.5,0.0,0.0,24.4,0.0,0.0,24.3,0.0,0.0,24.2,0.0,0.0,24.1,0.0,0.0,24.0,0.0,0.0,23.9,0.0,0.0,23.8,0.0,0.0,23.7,0.0,0.0,23.6,0.0,0.0,23.5,0.0,0.0,23.4,0.0,0.0,23.3,0.0,0.0,23.2,0.0,0.0,23.1,0.0,0.0,23.0,0.0,0.0,22.9,0.0,0.0,22.8,0.0,0.0,22.7,0.0,0.0,22.6,0.0,0.0,22.5,0.0,0.0,22.4,0.0,0.0,22.3,0.0,0.0,22.2,0.0,0.0,22.1,0.0,0.0,22.0,0.0,0.0,21.9,0.0,0.0,21.8,0.0,0.0,21.7,0.0,0.0,21.6,0.0,0.0,21.5,0.0,0.0,21.4,0.0,0.0,21.3,0.0,0.0,21.2,0.0,0.0,21.1,0.0,0.0,21.0,0.0,0.0,20.9,0.0,0.0,20.8,0.0,0.0,20.7,0.0,0.0,20.6,0.0,0.0,20.5,0.0,0.0,20.4,0.0,0.0,20.3,0.0,0.0,20.2,0.0,0.0,20.1};
			return value;
		}
		private double[] gettemple_position_3_32_keyValue_4()
		{
			double[] value = {0.0,0.0,20.0,0.0,0.0,19.9,0.0,0.0,19.8,0.0,0.0,19.7,0.0,0.0,19.6,0.0,0.0,19.5,0.0,0.0,19.4,0.0,0.0,19.3,0.0,0.0,19.2,0.0,0.0,19.1,0.0,0.0,19.0,0.0,0.0,18.9,0.0,0.0,18.8,0.0,0.0,18.7,0.0,0.0,18.6,0.0,0.0,18.5,0.0,0.0,18.4,0.0,0.0,18.3,0.0,0.0,18.2,0.0,0.0,18.1,0.0,0.0,18.0,0.0,0.0,17.9,0.0,0.0,17.8,0.0,0.0,17.7,0.0,0.0,17.6,0.0,0.0,17.5,0.0,0.0,17.4,0.0,0.0,17.3,0.0,0.0,17.2,0.0,0.0,17.1,0.0,0.0,17.0,0.0,0.0,16.9,0.0,0.0,16.8,0.0,0.0,16.7,0.0,0.0,16.6,0.0,0.0,16.5,0.0,0.0,16.4,0.0,0.0,16.3,0.0,0.0,16.2,0.0,0.0,16.1,0.0,0.0,16.0,0.0,0.0,15.9,0.0,0.0,15.8,0.0,0.0,15.7,0.0,0.0,15.6,0.0,0.0,15.5,0.0,0.0,15.4,0.0,0.0,15.3,0.0,0.0,15.2,0.0,0.0,15.1,0.0,0.0,15.0,0.0,0.0,14.9,0.0,0.0,14.8,0.0,0.0,14.7,0.0,0.0,14.6,0.0,0.0,14.5,0.0,0.0,14.4,0.0,0.0,14.3,0.0,0.0,14.2,0.0,0.0,14.1,0.0,0.0,14.0,0.0,0.0,13.9,0.0,0.0,13.8,0.0,0.0,13.7,0.0,0.0,13.6,0.0,0.0,13.5,0.0,0.0,13.4,0.0,0.0,13.3,0.0,0.0,13.2,0.0,0.0,13.1,0.0,0.0,13.0,0.0,0.0,12.9,0.0,0.0,12.8,0.0,0.0,12.7,0.0,0.0,12.6,0.0,0.0,12.5,0.0,0.0,12.4,0.0,0.0,12.3,0.0,0.0,12.2,0.0,0.0,12.1,0.0,0.0,12.0,0.0,0.0,11.9,0.0,0.0,11.8,0.0,0.0,11.7,0.0,0.0,11.6,0.0,0.0,11.5,0.0,0.0,11.4,0.0,0.0,11.3,0.0,0.0,11.2,0.0,0.0,11.1,0.0,0.0,11.0,0.0,0.0,10.9,0.0,0.0,10.8,0.0,0.0,10.7,0.0,0.0,10.6,0.0,0.0,10.5,0.0,0.0,10.4,0.0,0.0,10.3,0.0,0.0,10.2,0.0,0.0,10.1};
			return value;
		}
		private double[] gettemple_position_3_32_keyValue_5()
		{
			double[] value = {0.0,0.0,10.0,0.0,0.0,9.9,0.0,0.0,9.8,0.0,0.0,9.7,0.0,0.0,9.6,0.0,0.0,9.5,0.0,0.0,9.4,0.0,0.0,9.3,0.0,0.0,9.2,0.0,0.0,9.1,0.0,0.0,9.0,0.0,0.0,8.9,0.0,0.0,8.8,0.0,0.0,8.7,0.0,0.0,8.6,0.0,0.0,8.5,0.0,0.0,8.4,0.0,0.0,8.3,0.0,0.0,8.2,0.0,0.0,8.1,0.0,0.0,8.0,0.0,0.0,7.9,0.0,0.0,7.8,0.0,0.0,7.7,0.0,0.0,7.6,0.0,0.0,7.5,0.0,0.0,7.4,0.0,0.0,7.3,0.0,0.0,7.2,0.0,0.0,7.1,0.0,0.0,7.0,0.0,0.0,6.9,0.0,0.0,6.8,0.0,0.0,6.7,0.0,0.0,6.6,0.0,0.0,6.5,0.0,0.0,6.4,0.0,0.0,6.3,0.0,0.0,6.2,0.0,0.0,6.1,0.0,0.0,6.0,0.0,0.0,5.9,0.0,0.0,5.8,0.0,0.0,5.7,0.0,0.0,5.6,0.0,0.0,5.5,0.0,0.0,5.4,0.0,0.0,5.3,0.0,0.0,5.2,0.0,0.0,5.1,0.0,0.0,5.0,0.0,0.0,4.9,0.0,0.0,4.8,0.0,0.0,4.7,0.0,0.0,4.6,0.0,0.0,4.5,0.0,0.0,4.4,0.0,0.0,4.3,0.0,0.0,4.2,0.0,0.0,4.1,0.0,0.0,4.0,0.0,0.0,3.9,0.0,0.0,3.8,0.0,0.0,3.7,0.0,0.0,3.6,0.0,0.0,3.5,0.0,0.0,3.4,0.0,0.0,3.3,0.0,0.0,3.2,0.0,0.0,3.1,0.0,0.0,3.0,0.0,0.0,2.9,0.0,0.0,2.8,0.0,0.0,2.7,0.0,0.0,2.6,0.0,0.0,2.5,0.0,0.0,2.4,0.0,0.0,2.3,0.0,0.0,2.2,0.0,0.0,2.1,0.0,0.0,2.0,0.0,0.0,1.9,0.0,0.0,1.8,0.0,0.0,1.7,0.0,0.0,1.6,0.0,0.0,1.5,0.0,0.0,1.4,0.0,0.0,1.3,0.0,0.0,1.2,0.0,0.0,1.1,0.0,0.0,1.0,0.0,0.0,0.9,0.0,0.0,0.8,0.0,0.0,0.7,0.0,0.0,0.6,0.0,0.0,0.5,0.0,0.0,0.4,0.0,0.0,0.3,0.0,0.0,0.2,0.0,0.0,0.1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getLOD_4_51_range_1()
		{
			double[] value = {50.0,49.9,49.8,49.7,49.6,49.5,49.4,49.3,49.2,49.1,49.0,48.9,48.8,48.7,48.6,48.5,48.4,48.3,48.2,48.1,48.0,47.9,47.8,47.7,47.6,47.5,47.4,47.3,47.2,47.1,47.0,46.9,46.8,46.7,46.6,46.5,46.4,46.3,46.2,46.1,46.0,45.9,45.8,45.7,45.6,45.5,45.4,45.3,45.2,45.1,45.0,44.9,44.8,44.7,44.6,44.5,44.4,44.3,44.2,44.1,44.0,43.9,43.8,43.7,43.6,43.5,43.4,43.3,43.2,43.1,43.0,42.9,42.8,42.7,42.6,42.5,42.4,42.3,42.2,42.1,42.0,41.9,41.8,41.7,41.6,41.5,41.4,41.3,41.2,41.1,41.0,40.9,40.8,40.7,40.6,40.5,40.4,40.3,40.2,40.1,40.0,39.9,39.8,39.7,39.6,39.5,39.4,39.3,39.2,39.1,39.0,38.9,38.8,38.7,38.6,38.5,38.4,38.3,38.2,38.1,38.0,37.9,37.8,37.7,37.6,37.5,37.4,37.3,37.2,37.1,37.0,36.9,36.8,36.7,36.6,36.5,36.4,36.3,36.2,36.1,36.0,35.9,35.8,35.7,35.6,35.5,35.4,35.3,35.2,35.1,35.0,34.9,34.8,34.7,34.6,34.5,34.4,34.3,34.2,34.1,34.0,33.9,33.8,33.7,33.6,33.5,33.4,33.3,33.2,33.1,33.0,32.9,32.8,32.7,32.6,32.5,32.4,32.3,32.2,32.1,32.0,31.9,31.8,31.7,31.6,31.5,31.4,31.3,31.2,31.1,31.0,30.9,30.8,30.7,30.6,30.5,30.4,30.3,30.2,30.1,30.0,29.9,29.8,29.7,29.6,29.5,29.4,29.3,29.2,29.1,29.0,28.9,28.8,28.7,28.6,28.5,28.4,28.3,28.2,28.1,28.0,27.9,27.8,27.7,27.6,27.5,27.4,27.3,27.2,27.1,27.0,26.9,26.8,26.7,26.6,26.5,26.4,26.3,26.2,26.1,26.0,25.9,25.8,25.7,25.6,25.5,25.4,25.3,25.2,25.1,25.0,24.9,24.8,24.7,24.6,24.5,24.4,24.3,24.2,24.1,24.0,23.9,23.8,23.7,23.6,23.5,23.4,23.3,23.2,23.1,23.0,22.9,22.8,22.7,22.6,22.5,22.4,22.3,22.2,22.1,22.0,21.9,21.8,21.7,21.6,21.5,21.4,21.3,21.2,21.1,21.0,20.9,20.8,20.7,20.6,20.5,20.4,20.3,20.2,20.1,20.0,19.9,19.8,19.7,19.6,19.5,19.4,19.3,19.2,19.1,19.0,18.9,18.8,18.7,18.6,18.5,18.4,18.3,18.2,18.1,18.0,17.9,17.8,17.7,17.6,17.5,17.4,17.3,17.2,17.1,17.0,16.9,16.8,16.7,16.6,16.5,16.4,16.3,16.2,16.1,16.0,15.9,15.8,15.7,15.6,15.5,15.4,15.3,15.2,15.1,15.0,14.9,14.8,14.7,14.6,14.5,14.4,14.3,14.2,14.1,14.0,13.9,13.8,13.7,13.6,13.5,13.4,13.3,13.2,13.1,13.0,12.9,12.8,12.7,12.6,12.5,12.4,12.3,12.2,12.1,12.0,11.9,11.8,11.7,11.6,11.5,11.4,11.3,11.2,11.1,11.0,10.9,10.8,10.7,10.6,10.5,10.4,10.3,10.2,10.1,10.0,9.9,9.8,9.7,9.6,9.5,9.4,9.3,9.2,9.1,9.0,8.9,8.8,8.7,8.6,8.5,8.4,8.3,8.2,8.1,8.0,7.9,7.8,7.7,7.6,7.5,7.4,7.3,7.2,7.1,7.0,6.9,6.8,6.7,6.6,6.5,6.4,6.3,6.2,6.1,6.0,5.9,5.8,5.7,5.6,5.5,5.4,5.3,5.2,5.1,5.0,4.9,4.8,4.7,4.6,4.5,4.4,4.3,4.2,4.1,4.0,3.9,3.8,3.7,3.6,3.5,3.4,3.3,3.2,3.1,3.0,2.9,2.8,2.7,2.6,2.5,2.4,2.3,2.2,2.1,2.0,1.9,1.8,1.7,1.6,1.5,1.4,1.3,1.2,1.1,1.0,0.9,0.8,0.7,0.6,0.5,0.4,0.3,0.2,0.1,0.001};
			return value;
		}

		/** Large attribute array: PositionInterpolator DEF='temple-position' key field, scene-graph level=3, element #32, 500 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat gettemple_position_3_32_key()
		{
			MFFloat temple_position_3_32_key = new MFFloat()/*2.finalize*/
				.append(new MFFloat(gettemple_position_3_32_key_1()));
			return temple_position_3_32_key;
		}
		/** Large attribute array: PositionInterpolator DEF='temple-position' keyValue field, scene-graph level=3, element #32, 1500 total numbers made up of 500 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f gettemple_position_3_32_keyValue()
		{
			MFVec3f temple_position_3_32_keyValue = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(gettemple_position_3_32_keyValue_1()))
				.append(new MFVec3f(gettemple_position_3_32_keyValue_2()))
				.append(new MFVec3f(gettemple_position_3_32_keyValue_3()))
				.append(new MFVec3f(gettemple_position_3_32_keyValue_4()))
				.append(new MFVec3f(gettemple_position_3_32_keyValue_5()));
			return temple_position_3_32_keyValue;
		}
		/** Large attribute array: LOD range field, scene-graph level=4, element #51, 501 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFFloat getLOD_4_51_range()
		{
			MFFloat LOD_4_51_range = new MFFloat()/*2.finalize*/
				.append(new MFFloat(getLOD_4_51_range_1()));
			return LOD_4_51_range;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return bound_500 model
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
        X3D thisExampleX3dModel = new bound_500().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.bound_500\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.bound_500\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test the effect of Transform hierarchy. A Sound node with default field and field values is placed in a Transform hierarchy in which it is translated (0 0 -10), scaled (0.4 0.4 1.75) and rotated (0 1 0 1.57). As a result, the "long axis" of the sound ellipsoids should be the Z-axis, and coincide with the lineset geometry (showing proper rotation), the size of the Sound ellipsoid should coincide with the size of the lineset geometry (showing proper scaling), and Viewpoints at the "center" of the Sound ellipsoids should coincide with the visible geometry center (showing proper translation). in the world should have the volume indicated in their accompanying Text. </p>
 <p> Related links: <a href="../../../../Sounds/Sound/hierarchy.java">hierarchy.java</a> source, <a href="../../../../Sounds/Sound/hierarchyIndex.html" target="_top">hierarchy catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sounds/Sound/hierarchy.x3d">hierarchy.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Sounds/Sound/hierarchy-movie.mpg">hierarchy-movie.mpg</a> </td>
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
			<td> Test the effect of Transform hierarchy. A Sound node with default field and field values is placed in a Transform hierarchy in which it is translated (0 0 -10), scaled (0.4 0.4 1.75) and rotated (0 1 0 1.57). As a result, the "long axis" of the sound ellipsoids should be the Z-axis, and coincide with the lineset geometry (showing proper rotation), the size of the Sound ellipsoid should coincide with the size of the lineset geometry (showing proper scaling), and Viewpoints at the "center" of the Sound ellipsoids should coincide with the visible geometry center (showing proper translation). in the world should have the volume indicated in their accompanying Text. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/hierarchy.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/hierarchy.x3d</a> </td>
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
			<td> <a href="../../../../Sounds/Sound/../../license.html">../../license.html</a> </td>
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

public class hierarchy
{
	/** Default constructor to create this object. */
	public hierarchy ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("hierarchy.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("hierarchy-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test the effect of Transform hierarchy. A Sound node with default field and field values is placed in a Transform hierarchy in which it is translated (0 0 -10), scaled (0.4 0.4 1.75) and rotated (0 1 0 1.57). As a result, the \"long axis\" of the sound ellipsoids should be the Z-axis, and coincide with the lineset geometry (showing proper rotation), the size of the Sound ellipsoid should coincide with the size of the lineset geometry (showing proper scaling), and Viewpoints at the \"center\" of the Sound ellipsoids should coincide with the visible geometry center (showing proper translation). in the world should have the volume indicated in their accompanying Text."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/hierarchy.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("hierarchy.x3d"))
    .addChild(new Viewpoint("OUTSIDEMAXFRONT").setDescription("FRONT: Outside max ellipsoid (no sound)").setPosition(0.0,0.0,50.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXFRONT").setDescription("Just outside max ellipsoid (no sound)").setPosition(0.0,0.0,-5.9))
    .addChild(new Viewpoint("BETWEENFRONT").setDescription("Midway between max and min ellipsoids, (max sound -10dB)").setPosition(0.0,0.0,-8.0))
    .addChild(new Viewpoint("MINFRONT").setDescription("At min ellipsoid, (max sound volume)").setPosition(0.0,0.0,-9.6))
    .addChild(new Viewpoint("MINCENTERFRONT").setDescription("Center of both ellipsoids, (max sound volume)").setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint("OUTSIDEMAXRIGHT").setDescription("RIGHT: Outside max ellipsoid, (no sound)").setOrientation(0.0,1.0,0.0,1.57).setPosition(50.0,0.0,-10.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXRIGHT").setDescription("Just outside max ellipsoid, (no sound)").setOrientation(0.0,1.0,0.0,1.57).setPosition(17.6,0.0,-10.0))
    .addChild(new Viewpoint("BETWEENRIGHT").setDescription("Midway between ellipsoids (max sound -10dB)").setOrientation(0.0,1.0,0.0,1.57).setPosition(9.625,0.0,-10.0))
    .addChild(new Viewpoint("MINRIGHT").setDescription("At min ellipsoid (max sound)").setOrientation(0.0,1.0,0.0,1.57).setPosition(1.75,0.0,-10.0))
    .addChild(new Viewpoint("MINCENTERRIGHT").setDescription("At center of both ellipsoids, (max sound volume)").setOrientation(0.0,1.0,0.0,1.57).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint("OUTSIDEMAXREAR").setDescription("REAR: Outside max ellipsoid (no sound)").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-50.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXREAR").setDescription("Just outside max ellipsoid (no sound)").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-14.1))
    .addChild(new Viewpoint("BETWEENREAR").setDescription("Midway between max and min ellipsoids, (max sound -10dB)").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-12.2))
    .addChild(new Viewpoint("MINREAR").setDescription("At min ellipsoid, (max sound volume)").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.4))
    .addChild(new Viewpoint("MINCENTERREAR").setDescription("Center of bot ellipsoids, (max sound volume)").setOrientation(0.0,1.0,0.0,3.14).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint("OUTSIDEMAXLEFT").setDescription("LEFT: Outside max ellipsoid, (no sound)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-50.0,0.0,-10.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXLEFT").setDescription("Just outside max ellipsoid, (no sound)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-17.6,0.0,-10.0))
    .addChild(new Viewpoint("BETWEENLEFT").setDescription("Midway between ellipsoids (max sound -10dB)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-9.625,0.0,-10.0))
    .addChild(new Viewpoint("MINLEFT").setDescription("At min ellipsoid (max sound)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-1.75,0.0,-10.0))
    .addChild(new Viewpoint("MINCENTERLEFT").setDescription("At ellipsoid center, (max sound volume)").setOrientation(0.0,1.0,0.0,-1.57).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint("OUTSIDEMAXTOP").setDescription("TOP: Outside max ellipsoid, (no sound)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,50.0,-10.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXTOP").setDescription("Just outside max ellipsoid, (no sound)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,4.1,-10.0))
    .addChild(new Viewpoint("BETWEENTOP").setDescription("Midway between ellipsoids (max sound -10dB)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,2.2,-10.0))
    .addChild(new Viewpoint("MINTOP").setDescription("At min ellipsoid (max sound)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,0.4,-10.0))
    .addChild(new Viewpoint("MINCENTERTOP").setDescription("At ellipsoid center, (max sound volume)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,0.0,-10.0))
    .addChild(new Viewpoint("OUTSIDEMAXBOTTOM").setDescription("BOTTOM: Outside max ellipsoid, (no sound)").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-50.0,-10.0))
    .addChild(new Viewpoint("JUSTOUTSIDEMAXBOTTOM").setDescription("Just outside max ellipsoid, (no sound)").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-4.1,-10.0))
    .addChild(new Viewpoint("BETWEENBOTTOM").setDescription("Midway between ellipsoids (max sound -10dB)").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-2.2,-10.0))
    .addChild(new Viewpoint("MINBOTTOM").setDescription("At min ellipsoid (max sound)").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,-0.4,-10.0))
    .addChild(new Viewpoint("MINCENTERBOTTOM").setDescription("At ellipsoid center, (max sound volume)").setOrientation(1.0,0.0,0.0,1.57).setPosition(0.0,0.0,-10.0))
    .addChild(new Transform("TRANS3").setRotation(0.0,1.0,0.0,1.57).setScale(0.4,0.4,1.75).setTranslation(0.0,0.0,-10.0)
      .addChild(new Sound("MYSOUND")
        .setSource(new AudioClip().setDescription("chimes").setLoop(true).setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
      .addChild(new Transform("MINELLIPSOID")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedLineSet_6_52_coordIndex())
            .setCoord(new Coordinate().setPoint(getCoordinate_7_52_point()))
            .setColor(new Color().setColor(new MFColor(new double[] {1.0,0.0,0.0}))))))
      .addChild(new Transform("MAXELLIPSOID")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedLineSet_6_59_coordIndex())
            .setCoord(new Coordinate().setPoint(getCoordinate_7_59_point()))
            .setColor(new Color().setColor(new MFColor(new double[] {0.0,0.0,1.0})))))))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(1000.0,1000.0,1000.0))
    .addChild(new Transform("TRANS1")
      .addChild(new Transform().setTranslation(-0.35,-0.15,-0.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text("TYPESTRING1").setString(new String[] {"message from Script is inserted here"})
            .setFontStyle(new FontStyle().setSize(0.03).setCssStyle("BOLD"))))))
    .addChild(new Script("AVATARSCRIPT").setDirectOutput(true).setUrl(new String[] {"hierarchy.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/hierarchy.js"})
      .addField(new field().setName("typestring1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Text().setUSE("TYPESTRING1")))
      .addField(new field().setName("printOutsideMaxFront").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxFront").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenFront").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinFront").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterFront").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printOutsideMaxRight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxRight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenRight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinRight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterRight").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printOutsideMaxRear").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxRear").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenRear").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinRear").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterRear").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printOutsideMaxLeft").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxLeft").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenLeft").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinLeft").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterLeft").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printOutsideMaxBottom").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxBottom").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenBottom").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinBottom").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterBottom").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printOutsideMaxTop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printJustOutsideMaxTop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printBetweenTop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinTop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("printMinCenterTop").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("outsideMaxFrontString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"FRONT VIEW: Outside maxFront (no sound)"}))
      .addField(new field().setName("justOutsideMaxFrontString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside maxFront (no sound)"}))
      .addField(new field().setName("betweenFrontString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids(max sound -10dB)"}))
      .addField(new field().setName("minFrontString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At minFront (max sound)"}))
      .addField(new field().setName("minCenterFrontString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center (max sound)"}))
      .addField(new field().setName("outsideMaxRightString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"RIGHT VIEW: Outside max ellipsoid (no sound)"}))
      .addField(new field().setName("justOutsideMaxRightString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside max ellipsoid (no sound)"}))
      .addField(new field().setName("betweenRightString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids (max sound -10dB)"}))
      .addField(new field().setName("minRightString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At min ellipsoid (max sound)"}))
      .addField(new field().setName("minCenterRightString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center (max sound)"}))
      .addField(new field().setName("outsideMaxRearString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"REAR VIEW: Outside maxBack (no sound)"}))
      .addField(new field().setName("justOutsideMaxRearString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside maxBack (no sound)"}))
      .addField(new field().setName("betweenRearString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between maxBack and minBack (max sound -10dB)"}))
      .addField(new field().setName("minRearString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At minBack (max sound)"}))
      .addField(new field().setName("minCenterRearString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center (max sound)"}))
      .addField(new field().setName("outsideMaxLeftString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"LEFT VIEW: Outside max ellipsoid (no sound)"}))
      .addField(new field().setName("justOutsideMaxLeftString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside max ellipsoid (no sound)"}))
      .addField(new field().setName("betweenLeftString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids (max sound -10dB)"}))
      .addField(new field().setName("minLeftString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At min ellipsoid (max sound)"}))
      .addField(new field().setName("minCenterLeftString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center (max sound)"}))
      .addField(new field().setName("outsideMaxTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"TOP VIEW: Outside max ellipsoid (no sound)"}))
      .addField(new field().setName("justOutsideMaxTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside max ellipsoid (no sound)"}))
      .addField(new field().setName("betweenTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids (max sound -10dB)"}))
      .addField(new field().setName("minTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At min ellipsoid (max sound)"}))
      .addField(new field().setName("minCenterTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center top (max sound)"}))
      .addField(new field().setName("minCenterBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center bottom (max sound)"}))
      .addField(new field().setName("outsideMaxBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"BOTTOM VIEW: Outside max ellipsoid (no sound)"}))
      .addField(new field().setName("justOutsideMaxBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside max ellipsoid (no sound)"}))
      .addField(new field().setName("betweenBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids (max sound -10dB)"}))
      .addField(new field().setName("minBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At min ellipsoid (max sound)"})))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXFRONT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxFront"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXFRONT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxFront"))
    .addChild(new ROUTE().setFromNode("BETWEENFRONT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenFront"))
    .addChild(new ROUTE().setFromNode("MINFRONT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinFront"))
    .addChild(new ROUTE().setFromNode("MINCENTERFRONT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterFront"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXRIGHT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxRight"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXRIGHT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxRight"))
    .addChild(new ROUTE().setFromNode("BETWEENRIGHT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenRight"))
    .addChild(new ROUTE().setFromNode("MINRIGHT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinRight"))
    .addChild(new ROUTE().setFromNode("MINCENTERRIGHT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterRight"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXREAR").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxRear"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXREAR").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxRear"))
    .addChild(new ROUTE().setFromNode("BETWEENREAR").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenRear"))
    .addChild(new ROUTE().setFromNode("MINREAR").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinRear"))
    .addChild(new ROUTE().setFromNode("MINCENTERREAR").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterRear"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXLEFT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxLeft"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXLEFT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxLeft"))
    .addChild(new ROUTE().setFromNode("BETWEENLEFT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenLeft"))
    .addChild(new ROUTE().setFromNode("MINLEFT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinLeft"))
    .addChild(new ROUTE().setFromNode("MINCENTERLEFT").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterLeft"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXTOP").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxTop"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXTOP").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxTop"))
    .addChild(new ROUTE().setFromNode("BETWEENTOP").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenTop"))
    .addChild(new ROUTE().setFromNode("MINTOP").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinTop"))
    .addChild(new ROUTE().setFromNode("MINCENTERTOP").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterTop"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXBOTTOM").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printOutsideMaxBottom"))
    .addChild(new ROUTE().setFromNode("JUSTOUTSIDEMAXBOTTOM").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printJustOutsideMaxBottom"))
    .addChild(new ROUTE().setFromNode("BETWEENBOTTOM").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printBetweenBottom"))
    .addChild(new ROUTE().setFromNode("MINBOTTOM").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinBottom"))
    .addChild(new ROUTE().setFromNode("MINCENTERBOTTOM").setFromField("isBound").setToNode("AVATARSCRIPT").setToField("printMinCenterBottom"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS1").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS1").setToField("set_rotation")));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_52_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_52_point_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,-0.242536,0.0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0.0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0.0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0.0,0.242536,-0.970142,0.242536,0.0,-1.0,0.0,0.0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0.0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0.0,-0.242536,0.970142,0.0,0.0,-0.242536,0.970142,0.301511,-0.301511,0.904534,0.666667,-0.333333,0.666667,0.904534,-0.301511,0.301511,0.970142,-0.242536,0.0,0.0,-0.5547,0.83205,0.333333,-0.666667,0.666667,0.666667,-0.666667,0.333333,0.83205,-0.5547,0.0,0.0,-0.83205,0.5547,0.301511,-0.904534,0.301511,0.5547,-0.83205,0.0,0.0,-0.970142,0.242536,0.242536,-0.970142,0.0,0.0,-1.0,0.0,-0.970142,-0.242536,0.0,-0.904534,-0.301511,0.301511,-0.666667,-0.333333,0.666667,-0.301511,-0.301511,0.904534,-0.83205,-0.5547,0.0,-0.666667,-0.666667,0.333333,-0.333333,-0.666667,0.666667,-0.5547,-0.83205,0.0,-0.301511,-0.904534,0.301511,-0.242536,-0.970142,0.0,0.0,0.0,-1.0,0.0,0.242536,-0.970142,0.242536,0.0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0.0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0.0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0.0,-0.242536,0.0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0.0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0.0,0.970142,-0.242536,-0.970142,0.0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0.0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0.0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0.0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511,0.904534,-0.301511,-0.301511,0.666667,-0.333333,-0.666667,0.301511,-0.301511,-0.904534,0.0,-0.242536,-0.970142,0.666667,-0.666667,-0.333333,0.333333,-0.666667,-0.666667,0.0,-0.5547,-0.83205,0.301511,-0.904534,-0.301511,0.0,-0.83205,-0.5547,0.0,-0.970142,-0.242536,-0.301511,-0.301511,-0.904534,-0.666667,-0.333333,-0.666667,-0.904534,-0.301511,-0.301511,-0.333333,-0.666667,-0.666667};
			return value;
		}
		private double[] getCoordinate_7_52_point_2()
		{
			double[] value = {-0.666667,-0.666667,-0.333333,-0.301511,-0.904534,-0.301511};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_59_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_59_point_1()
		{
			double[] value = {10.0,0.0,0.0,9.70142,2.42536,0.0,9.70142,0.0,2.42536,9.04534,3.01511,3.01511,8.3205,0.0,5.547,6.66667,3.33333,6.66667,5.547,0.0,8.3205,3.01511,3.01511,9.04534,2.42536,0.0,9.70142,0.0,2.42536,9.70142,0.0,0.0,10.0,8.3205,5.547,0.0,6.66667,6.66667,3.33333,3.33333,6.66667,6.66667,0.0,5.547,8.3205,5.547,8.3205,0.0,3.01511,9.04534,3.01511,0.0,8.3205,5.547,2.42536,9.70142,0.0,0.0,9.70142,2.42536,0.0,10.0,0.0,-2.42536,0.0,9.70142,-3.01511,3.01511,9.04534,-5.547,0.0,8.3205,-6.66667,3.33333,6.66667,-8.3205,0.0,5.547,-9.04534,3.01511,3.01511,-9.70142,0.0,2.42536,-9.70142,2.42536,0.0,-10.0,0.0,0.0,-3.33333,6.66667,6.66667,-6.66667,6.66667,3.33333,-8.3205,5.547,0.0,-3.01511,9.04534,3.01511,-5.547,8.3205,0.0,-2.42536,9.70142,0.0,0.0,-2.42536,9.70142,3.01511,-3.01511,9.04534,6.66667,-3.33333,6.66667,9.04534,-3.01511,3.01511,9.70142,-2.42536,0.0,0.0,-5.547,8.3205,3.33333,-6.66667,6.66667,6.66667,-6.66667,3.33333,8.3205,-5.547,0.0,0.0,-8.3205,5.547,3.01511,-9.04534,3.01511,5.547,-8.3205,0.0,0.0,-9.70142,2.42536,2.42536,-9.70142,0.0,0.0,-10.0,0.0,-9.70142,-2.42536,0.0,-9.04534,-3.01511,3.01511,-6.66667,-3.33333,6.66667,-3.01511,-3.01511,9.04534,-8.3205,-5.547,0.0,-6.66667,-6.66667,3.33333,-3.33333,-6.66667,6.66667,-5.547,-8.3205,0.0,-3.01511,-9.04534,3.01511,-2.42536,-9.70142,0.0,0.0,0.0,-10.0,0.0,2.42536,-9.70142,2.42536,0.0,-9.70142,3.01511,3.01511,-9.04534,5.547,0.0,-8.3205,6.66667,3.33333,-6.66667,8.3205,0.0,-5.547,9.04534,3.01511,-3.01511,9.70142,0.0,-2.42536,0.0,5.547,-8.3205,3.33333,6.66667,-6.66667,6.66667,6.66667,-3.33333,0.0,8.3205,-5.547,3.01511,9.04534,-3.01511,0.0,9.70142,-2.42536,-9.70142,0.0,-2.42536,-9.04534,3.01511,-3.01511,-8.3205,0.0,-5.547,-6.66667,3.33333,-6.66667,-5.547,0.0,-8.3205,-3.01511,3.01511,-9.04534,-2.42536,0.0,-9.70142,-6.66667,6.66667,-3.33333,-3.33333,6.66667,-6.66667,-3.01511,9.04534,-3.01511,9.04534,-3.01511,-3.01511,6.66667,-3.33333,-6.66667,3.01511,-3.01511,-9.04534,0.0,-2.42536,-9.70142,6.66667,-6.66667,-3.33333,3.33333,-6.66667,-6.66667,0.0,-5.47,-8.3205,3.01511,-9.04534,-3.01511,0.0,-8.3205,-5.547,0.0,-9.70142,-2.42536,-3.01511,-3.01511,-9.04534,-6.66667,-3.33333,-6.66667,-9.04534,-3.01511,-3.01511,-3.33333,-6.66667,-6.66667};
			return value;
		}
		private double[] getCoordinate_7_59_point_2()
		{
			double[] value = {-6.66667,-6.66667,-3.33333,-3.01511,-9.04534,-3.01511};
			return value;
		}

		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #52, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_52_coordIndex()
		{
			MFInt32 IndexedLineSet_6_52_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_52_coordIndex_1()));
			return IndexedLineSet_6_52_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #52, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_52_point()
		{
			MFVec3f Coordinate_7_52_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_52_point_1()))
				.append(new MFVec3f(getCoordinate_7_52_point_2()));
			return Coordinate_7_52_point;
		}
		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #59, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_59_coordIndex()
		{
			MFInt32 IndexedLineSet_6_59_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_59_coordIndex_1()));
			return IndexedLineSet_6_59_coordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #59, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_59_point()
		{
			MFVec3f Coordinate_7_59_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_59_point_1()))
				.append(new MFVec3f(getCoordinate_7_59_point_2()));
			return Coordinate_7_59_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return hierarchy model
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
        X3D thisExampleX3dModel = new hierarchy().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.hierarchy\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.hierarchy\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

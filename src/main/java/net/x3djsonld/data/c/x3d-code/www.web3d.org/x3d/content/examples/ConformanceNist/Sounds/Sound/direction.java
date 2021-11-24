package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalSensor.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test direction. A Sound node can have its "direction" field changed by clicking on any of the 3 buttons in the left portion of this world. Each will change a Sound ellipsoids orientation along one of the 3 axies (X, Y or Z). As a result, sound audibility should be confined to the inner portion of the particular ellipsoid that is aligned with the Sounds direction. Clicking on a button, and then using the worlds Viewpoints to navigate in and out of the 3 ellipsoids should verify that a Sound is audible only along its current "direction" ellipsoid. </p>
 <p> Related links: <a href="../../../../Sounds/Sound/direction.java">direction.java</a> source, <a href="../../../../Sounds/Sound/directionIndex.html" target="_top">direction catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sounds/Sound/direction.x3d">direction.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> <a href="../../../../Sounds/Sound/direction-movie.mpg">direction-movie.mpg</a> </td>
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
			<td> Test direction. A Sound node can have its "direction" field changed by clicking on any of the 3 buttons in the left portion of this world. Each will change a Sound ellipsoids orientation along one of the 3 axies (X, Y or Z). As a result, sound audibility should be confined to the inner portion of the particular ellipsoid that is aligned with the Sounds direction. Clicking on a button, and then using the worlds Viewpoints to navigate in and out of the 3 ellipsoids should verify that a Sound is audible only along its current "direction" ellipsoid. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.x3d</a> </td>
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

public class direction
{
	/** Default constructor to create this object. */
	public direction ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("direction.x3d"))
    .addMeta(new meta().setName(meta.NAME_MOVINGIMAGE).setContent("direction-movie.mpg"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.nist.gov/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
    .addMeta(new meta().setName("disclaimer").setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Michael Kass NIST, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("21 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test direction. A Sound node can have its \"direction\" field changed by clicking on any of the 3 buttons in the left portion of this world. Each will change a Sound ellipsoids orientation along one of the 3 axies (X, Y or Z). As a result, sound audibility should be confined to the inner portion of the particular ellipsoid that is aligned with the Sounds direction. Clicking on a button, and then using the worlds Viewpoints to navigate in and out of the 3 ellipsoids should verify that a Sound is audible only along its current \"direction\" ellipsoid."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("direction.x3d"))
    .addChild(new Viewpoint("OUTSIDEMAXFRONT").setDescription("FRONT: Outside maxFront (no sound)").setPosition(0.0,0.0,60.0))
    .addChild(new Viewpoint("BETWEENFRONT").setDescription("Just inside max ellipsoid (max sound)").setPosition(0.0,0.0,14.0))
    .addChild(new Viewpoint("OUTSIDEMAXRIGHT").setDescription("RIGHT: Outside max ellipsoid, (no sound)").setOrientation(0.0,1.0,0.0,1.57).setPosition(60.0,0.0,0.0))
    .addChild(new Viewpoint("BETWEENRIGHT").setDescription("Just inside max ellipsoid, (max sound)").setOrientation(0.0,1.0,0.0,1.57).setPosition(14.0,0.0,0.0))
    .addChild(new Viewpoint("OUTSIDEMAXTOP").setDescription("TOP: Outside max ellipsoid, (no sound)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,60.0,0.0))
    .addChild(new Viewpoint("BETWEENTOP").setDescription("Just inside max ellipsoid, (max sound)").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,14.0,0.0))
    .addChild(new ProximitySensor("PROX_SENSOR").setSize(1000.0,1000.0,1000.0))
    .addChild(new Sound("SOUND1").setMaxBack(3).setMaxFront(15).setMinBack(3).setMinFront(15)
      .setSource(new AudioClip().setDescription("chimes").setLoop(true).setUrl(new String[] {"chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"})))
    .addChild(new Transform()
      .addChild(new Transform().setScale(9.0,6.7,6.7).setTranslation(6.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedLineSet_6_29_coordIndex())
            .setCoord(new Coordinate("SpherePoints").setPoint(getSpherePoints_7_29_point()))
            .setColor(new Color("ELLIPSOID1COLOR").setColor(new MFColor(new double[] {1.0,0.0,0.0})))))))
    .addChild(new Transform("TRANS2")
      .addChild(new Transform().setScale(6.7,9.0,6.7).setTranslation(0.0,6.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedLineSet_6_37_coordIndex())
            .setCoord(new Coordinate().setUSE("SpherePoints"))
            .setColor(new Color("ELLIPSOID2COLOR").setColor(new MFColor(new double[] {0.0,1.0,0.0})))))))
    .addChild(new Transform("TRANS3")
      .addChild(new Transform().setScale(6.7,6.7,9.0).setTranslation(0.0,0.0,6.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(new int[] {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}).setCoordIndex(getIndexedLineSet_6_45_coordIndex())
            .setCoord(new Coordinate().setUSE("SpherePoints"))
            .setColor(new Color("ELLIPSOID3COLOR").setColor(new MFColor(new double[] {0.0,0.0,1.0})))))))
    .addChild(new Transform("DIRECTION_X_TRANS")
      .addChild(new TouchSensor("TOUCHX").setDescription("touch to activate X"))
      .addChild(new Transform().setTranslation(-3.0,1.5,-5.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("XMATERIAL").setAmbientIntensity(1).setDiffuseColor(1.0,0.0,0.0)))
          .setGeometry(new Box("X").setSize(1.5,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.55,0.0,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Direction","X-axis"})
              .setFontStyle(new FontStyle().setSize(0.35))))))
      .addChild(new TimeSensor("XTIMER"))
      .addChild(new ColorInterpolator("XFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {1.0,0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0}))))
    .addChild(new Transform("DIRECTION_Y_TRANS")
      .addChild(new Transform().setTranslation(-3.0,0.0,-5.0)
        .addChild(new TouchSensor("TOUCHY").setDescription("touch to activate Y"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("YMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,1.0,0.0)))
          .setGeometry(new Box("Y").setSize(1.5,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.55,0.0,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Direction","Y-axis"})
              .setFontStyle(new FontStyle().setSize(0.35))))))
      .addChild(new TimeSensor("YTIMER"))
      .addChild(new ColorInterpolator("YFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0}))))
    .addChild(new Transform("Z_TRANS")
      .addChild(new Transform().setTranslation(-3.0,-1.5,-5.0)
        .addChild(new TouchSensor("TOUCHZ").setDescription("touch to activate Z"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("ZMATERIAL").setAmbientIntensity(1).setDiffuseColor(0.0,0.0,1.0)))
          .setGeometry(new Box("Z").setSize(1.5,1.0,0.1)))
        .addChild(new Transform().setTranslation(-0.55,0.0,0.2)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.0,0.0,0.0)))
            .setGeometry(new Text().setString(new String[] {"Direction","Z-axis"})
              .setFontStyle(new FontStyle().setSize(0.35))))))
      .addChild(new TimeSensor("ZTIMER"))
      .addChild(new ColorInterpolator("ZFLASH").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFColor(new double[] {0.0,0.0,1.0,1.0,1.0,1.0,0.0,0.0,1.0}))))
    .addChild(new Transform("TRANS1")
      .addChild(new Transform().setTranslation(-0.2,-0.15,-0.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Text("TYPESTRING1").setString(new String[] {"message from Script is inserted here"})
            .setFontStyle(new FontStyle().setSize(0.025).setCssStyle("BOLD"))))))
    .addChild(new Script("SOUND_SCRIPT").setDirectOutput(true).setUrl(new String[] {"direction.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/direction.js"})
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
      .addField(new field().setName("minTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"[At min ellipsoid (max sound)"}))
      .addField(new field().setName("minCenterTopString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At ellipsoid center (max sound)"}))
      .addField(new field().setName("outsideMaxBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"BOTTOM VIEW: Outside max ellipsoid (no sound)"}))
      .addField(new field().setName("justOutsideMaxBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Just outside max ellipsoid (no sound)"}))
      .addField(new field().setName("betweenBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"Midway between ellipsoids (max sound -10dB)"}))
      .addField(new field().setName("minBottomString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new String[] {"At min ellipsoid (max sound)"}))
      .addField(new field().setName("xMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("XMATERIAL")))
      .addField(new field().setName("yMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("YMATERIAL")))
      .addField(new field().setName("zMaterial").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Material().setUSE("ZMATERIAL")))
      .addField(new field().setName("sound1").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Sound().setUSE("SOUND1")))
      .addField(new field().setName("ellipsoid1Color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Color().setUSE("ELLIPSOID1COLOR")))
      .addField(new field().setName("ellipsoid2Color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Color().setUSE("ELLIPSOID2COLOR")))
      .addField(new field().setName("ellipsoid3Color").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
        .addChild(new Color().setUSE("ELLIPSOID3COLOR")))
      .addField(new field().setName("white").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new MFColor(new MFColor(new double[] {1.0,1.0,1.0}))))
      .addField(new field().setName("red").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new MFColor(new MFColor(new double[] {1.0,0.0,0.0}))))
      .addField(new field().setName("green").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new MFColor(new MFColor(new double[] {0.0,1.0,0.0}))))
      .addField(new field().setName("blue").setType(field.TYPE_MFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new MFColor(new MFColor(new double[] {0.0,0.0,1.0}))))
      .addField(new field().setName("sfWhite").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,1.0,1.0)))
      .addField(new field().setName("sfRed").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,0.0,0.0)))
      .addField(new field().setName("sfGreen").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,1.0,0.0)))
      .addField(new field().setName("sfBlue").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,0.0,1.0)))
      .addField(new field().setName("colorEllipse1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("colorEllipse2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("colorEllipse3").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("xAxis").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(1.0,0.0,0.0)))
      .addField(new field().setName("yAxis").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,1.0,0.0)))
      .addField(new field().setName("zAxis").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,1.0))))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXFRONT").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printOutsideMaxFront"))
    .addChild(new ROUTE().setFromNode("BETWEENFRONT").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printBetweenFront"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXRIGHT").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printOutsideMaxRight"))
    .addChild(new ROUTE().setFromNode("BETWEENRIGHT").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printBetweenRight"))
    .addChild(new ROUTE().setFromNode("OUTSIDEMAXTOP").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printOutsideMaxTop"))
    .addChild(new ROUTE().setFromNode("BETWEENTOP").setFromField("isBound").setToNode("SOUND_SCRIPT").setToField("printBetweenTop"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("TRANS1").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("TRANS1").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("DIRECTION_X_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("DIRECTION_X_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("DIRECTION_Y_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("DIRECTION_Y_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("position_changed").setToNode("Z_TRANS").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PROX_SENSOR").setFromField("orientation_changed").setToNode("Z_TRANS").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("TOUCHX").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorEllipse1"))
    .addChild(new ROUTE().setFromNode("TOUCHY").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorEllipse2"))
    .addChild(new ROUTE().setFromNode("TOUCHZ").setFromField("isActive").setToNode("SOUND_SCRIPT").setToField("colorEllipse3")));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_29_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getSpherePoints_7_29_point_1()
		{
			double[] value = {1.0,0.0,0.0,0.970142,0.242536,0.0,0.970142,0.0,0.242536,0.904534,0.301511,0.301511,0.83205,0.0,0.5547,0.666667,0.333333,0.666667,0.5547,0.0,0.83205,0.301511,0.301511,0.904534,0.242536,0.0,0.970142,0.0,0.242536,0.970142,0.0,0.0,1.0,0.83205,0.5547,0.0,0.666667,0.666667,0.333333,0.333333,0.666667,0.666667,0.0,0.5547,0.83205,0.5547,0.83205,0.0,0.301511,0.904534,0.301511,0.0,0.83205,0.5547,0.242536,0.970142,0.0,0.0,0.970142,0.242536,0.0,1.0,0.0,-0.242536,0.0,0.970142,-0.301511,0.301511,0.904534,-0.5547,0.0,0.83205,-0.666667,0.333333,0.666667,-0.83205,0.0,0.5547,-0.904534,0.301511,0.301511,-0.970142,0.0,0.242536,-0.970142,0.242536,0.0,-1.0,0.0,0.0,-0.333333,0.666667,0.666667,-0.666667,0.666667,0.333333,-0.83205,0.5547,0.0,-0.301511,0.904534,0.301511,-0.5547,0.83205,0.0,-0.242536,0.970142,0.0,0.0,-0.242536,0.970142,0.301511,-0.301511,0.904534,0.666667,-0.333333,0.666667,0.904534,-0.301511,0.301511,0.970142,-0.242536,0.0,0.0,-0.5547,0.83205,0.333333,-0.666667,0.666667,0.666667,-0.666667,0.333333,0.83205,-0.5547,0.0,0.0,-0.83205,0.5547,0.301511,-0.904534,0.301511,0.5547,-0.83205,0.0,0.0,-0.970142,0.242536,0.242536,-0.970142,0.0,0.0,-1.0,0.0,-0.970142,-0.242536,0.0,-0.904534,-0.301511,0.301511,-0.666667,-0.333333,0.666667,-0.301511,-0.301511,0.904534,-0.83205,-0.5547,0.0,-0.666667,-0.666667,0.333333,-0.333333,-0.666667,0.666667,-0.5547,-0.83205,0.0,-0.301511,-0.904534,0.301511,-0.242536,-0.970142,0.0,0.0,0.0,-1.0,0.0,0.242536,-0.970142,0.242536,0.0,-0.970142,0.301511,0.301511,-0.904534,0.5547,0.0,-0.83205,0.666667,0.333333,-0.666667,0.83205,0.0,-0.5547,0.904534,0.301511,-0.301511,0.970142,0.0,-0.242536,0.0,0.5547,-0.83205,0.333333,0.666667,-0.666667,0.666667,0.666667,-0.333333,0.0,0.83205,-0.5547,0.301511,0.904534,-0.301511,0.0,0.970142,-0.242536,-0.970142,0.0,-0.242536,-0.904534,0.301511,-0.301511,-0.83205,0.0,-0.5547,-0.666667,0.333333,-0.666667,-0.5547,0.0,-0.83205,-0.301511,0.301511,-0.904534,-0.242536,0.0,-0.970142,-0.666667,0.666667,-0.333333,-0.333333,0.666667,-0.666667,-0.301511,0.904534,-0.301511,0.904534,-0.301511,-0.301511,0.666667,-0.333333,-0.666667,0.301511,-0.301511,-0.904534,0.0,-0.242536,-0.970142,0.666667,-0.666667,-0.333333,0.333333,-0.666667,-0.666667,0.0,-0.5547,-0.83205,0.301511,-0.904534,-0.301511,0.0,-0.83205,-0.5547,0.0,-0.970142,-0.242536,-0.301511,-0.301511,-0.904534,-0.666667,-0.333333,-0.666667,-0.904534,-0.301511,-0.301511,-0.333333,-0.666667,-0.666667};
			return value;
		}
		private double[] getSpherePoints_7_29_point_2()
		{
			double[] value = {-0.666667,-0.666667,-0.333333,-0.301511,-0.904534,-0.301511};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_37_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedLineSet_6_45_coordIndex_1()
		{
			int[] value = {0,1,2,-1,2,1,3,-1,2,3,4,-1,4,3,5,-1,4,5,6,-1,6,5,7,-1,6,7,8,-1,8,7,9,-1,8,9,10,-1,1,11,3,-1,3,11,12,-1,3,12,5,-1,5,12,13,-1,5,13,7,-1,7,13,14,-1,7,14,9,-1,11,15,12,-1,12,15,16,-1,12,16,13,-1,13,16,17,-1,13,17,14,-1,15,18,16,-1,16,18,19,-1,16,19,17,-1,19,18,20,-1,10,9,21,-1,21,9,22,-1,21,22,23,-1,23,22,24,-1,23,24,25,-1,25,24,26,-1,25,26,27,-1,27,26,28,-1,27,28,29,-1,9,14,22,-1,22,14,30,-1,22,30,24,-1,24,30,31,-1,24,31,26,-1,26,31,32,-1,26,32,28,-1,14,17,30,-1,30,17,33,-1,30,33,31,-1,31,33,34,-1,31,34,32,-1,17,19,33,-1,33,19,35,-1,33,35,34,-1,35,19,20,-1,10,36,8,-1,8,36,37,-1,8,37,6,-1,6,37,38,-1,6,38,4,-1,4,38,39,-1,4,39,2,-1,2,39,40,-1,2,40,0,-1,36,41,37,-1,37,41,42,-1,37,42,38,-1,38,42,43,-1,38,43,39,-1,39,43,44,-1,39,44,40,-1,41,45,42,-1,42,45,46,-1,42,46,43,-1,43,46,47,-1,43,47,44,-1,45,48,46,-1,46,48,49,-1,46,49,47,-1,49,48,50,-1,29,51,27,-1,27,51,52,-1,27,52,25,-1,25,52,53,-1,25,53,23,-1,23,53,54,-1,23,54,21,-1,21,54,36,-1,21,36,10,-1,51,55,52,-1,52,55,56,-1,52,56,53,-1,53,56,57,-1,53,57,54,-1,54,57,41,-1,54,41,36,-1,55,58,56,-1,56,58,59,-1,56,59,57,-1,57,59,45,-1,57,45,41,-1,58,60,59,-1,59,60,48,-1,59,48,45,-1,48,60,50,-1,61,62,63,-1,63,62,64,-1,63,64,65,-1,65,64,66,-1,65,66,67,-1,67,66,68,-1,67,68,69,-1,69,68,1,-1,69,1,0,-1,62,70,64,-1,64,70,71,-1,64,71,66,-1,66,71,72,-1,66,72,68,-1,68,72,11,-1,68,11,1,-1,70,73,71,-1,71,73,74,-1,71,74,72,-1,72,74,15,-1,72,15,11,-1,73,75,74,-1,74,75,18,-1,74,18,15,-1,18,75,20,-1,29,28,76,-1,76,28,77,-1,76,77,78,-1,78,77,79,-1,78,79,80,-1,80,79,81,-1,80,81,82,-1,82,81,62,-1,82,62,61,-1,28,32,77,-1,77,32,83,-1,77,83,79,-1,79,83,84,-1,79,84,81,-1,81,84,70,-1,81,70,62,-1,32,34,83,-1,83,34,85,-1,83,85,84,-1,84,85,73,-1,84,73,70,-1,34,35,85,-1,85,35,75,-1,85,75,73,-1,75,35,20,-1,0,40,69,-1,69,40,86,-1,69,86,67,-1,67,86,87,-1,67,87,65,-1,65,87,88,-1,65,88,63,-1,63,88,89,-1,63,89,61,-1,40,44,86,-1,86,44,90,-1,86,90,87,-1,87,90,91,-1,87,91,88,-1,88,91,92,-1,88,92,89,-1,44,47,90,-1,90,47,93,-1,90,93,91,-1,91,93,94,-1,91,94,92,-1,47,49,93,-1,93,49,95,-1,93,95,94,-1,95,49,50,-1,61,89,82,-1,82,89,96,-1,82,96,80,-1,80,96,97,-1,80,97,78,-1,78,97,98,-1,78,98,76,-1,76,98,51,-1,76,51,29,-1,89,92,96,-1,96,92,99,-1,96,99,97,-1,97,99,100,-1,97,100,98,-1,98,100,55,-1,98,55,51,-1,92,94,99,-1,99,94,101,-1,99,101,100,-1,100,101,58,-1,100,58,55,-1,94,95,101,-1,101,95,60,-1,101,60,58,-1,60,95,50,-1};
			return value;
		}

		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #29, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_29_coordIndex()
		{
			MFInt32 IndexedLineSet_6_29_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_29_coordIndex_1()));
			return IndexedLineSet_6_29_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='SpherePoints' point field, scene-graph level=7, element #29, 306 total numbers made up of 102 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getSpherePoints_7_29_point()
		{
			MFVec3f SpherePoints_7_29_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getSpherePoints_7_29_point_1()))
				.append(new MFVec3f(getSpherePoints_7_29_point_2()));
			return SpherePoints_7_29_point;
		}
		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #37, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_37_coordIndex()
		{
			MFInt32 IndexedLineSet_6_37_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_37_coordIndex_1()));
			return IndexedLineSet_6_37_coordIndex;
		}
		/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #45, 800 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedLineSet_6_45_coordIndex()
		{
			MFInt32 IndexedLineSet_6_45_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedLineSet_6_45_coordIndex_1()));
			return IndexedLineSet_6_45_coordIndex;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return direction model
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
        X3D thisExampleX3dModel = new direction().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.direction\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.direction\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

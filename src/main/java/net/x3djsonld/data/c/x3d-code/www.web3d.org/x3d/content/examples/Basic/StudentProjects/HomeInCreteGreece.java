package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Something Special My Home Villa In Crete Greece. </p>
 <p> Related links: <a href="../../../StudentProjects/HomeInCreteGreece.java">HomeInCreteGreece.java</a> source, <a href="../../../StudentProjects/HomeInCreteGreeceIndex.html" target="_top">HomeInCreteGreece catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/HomeInCreteGreece.x3d">HomeInCreteGreece.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Something Special My Home Villa In Crete Greece </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Mantzouris Georgios </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 27 July 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/HomeInCreteGreece.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/HomeInCreteGreece.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> Copyright (c) Mantzouris Georgios. 2004 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../StudentProjects/../license.html">../license.html</a> </td>
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

	* @author Mantzouris Georgios
 */

public class HomeInCreteGreece
{
	/** Default constructor to create this object. */
	public HomeInCreteGreece ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HomeInCreteGreece.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Something Special My Home Villa In Crete Greece"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Mantzouris Georgios"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("27 July 2004"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/HomeInCreteGreece.x3d"))
    .addMeta(new meta().setName(meta.NAME_RIGHTS     ).setContent("Copyright (c) Mantzouris Georgios. 2004"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" This background sky color has been taken from https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/SweetHomeLowDetail.x3d ")
    .addChild(new WorldInfo().setTitle("HomeInCreteGreece.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {0.1,1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0,0.0,0.1,0.3,0.0,0.2,0.5,0.0,0.3,0.8})).setSkyAngle(new double[] {0.1,0.15,1.309,1.571}).setSkyColor(new MFColor(new double[] {0.4,0.4,0.1,0.4,0.4,0.1,0.0,0.1,0.3,0.0,0.2,0.6,0.8,0.8,0.8})).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_back.jpg","ocean_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_bottom.jpg","ocean_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_front.jpg","ocean_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_left.jpg","ocean_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_right.jpg","ocean_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/ocean_3_top.jpg","ocean_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/ocean_3_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/ocean_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/ocean_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/ocean_3_top.jpg"}))
    .addChild(new Viewpoint().setDescription("FAR AWAY").setPosition(0.0,100.0,500.0))
    .addChild(new Viewpoint().setDescription("FRONT VIEW").setPosition(0.0,20.0,300.0))
    .addChild(new Viewpoint().setDescription("RIGHT VIEW").setOrientation(0.0,1.0,0.0,1.5).setPosition(300.0,20.0,0.0))
    .addChild(new Viewpoint().setDescription("BACK VIEW").setOrientation(0.0,1.0,0.0,-3.2).setPosition(0.0,20.0,-300.0))
    .addChild(new Viewpoint().setDescription("LEFT VIEW").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-300.0,80.0,-50.0))
    .addChild(new Viewpoint().setDescription("UP VIEW").setOrientation(1.0,0.0,0.0,-1.57).setPosition(0.0,400.0,0.0))
    .addChild(new Viewpoint().setDescription("HELLO CRETE VIEW").setPosition(0.0,200.0,200.0))
    .addChild(new Group("BASE")
      .addChild(new Transform("GROUND").setTranslation(0.0,0.0,-75.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setShininess(1)))
          .setGeometry(new Box().setSize(200.0,0.5,200.0))))
      .addChild(new Transform("POOL").setTranslation(0.0,-14.0,70.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0).setShininess(0.8).setSpecularColor(0.0,0.0,1.0).setTransparency(0.8)))
          .setGeometry(new Box().setSize(100.0,10.0,55.0))))
      .addChild(new Transform("RIGHT_FRONTYARD_WALL").setTranslation(52.5,-3.0,25.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.3).setEmissiveColor(1.0,0.0,0.0).setShininess(0.7).setSpecularColor(1.0,0.0,0.0)))
          .setGeometry(new Box().setSize(95.0,15.0,0.5))))
      .addChild(new Transform("LEFT_FRONTYARD_WALL").setTranslation(-52.5,-3.0,25.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.3).setEmissiveColor(1.0,0.0,0.0).setShininess(0.7).setSpecularColor(1.0,0.0,0.0)))
          .setGeometry(new Box().setSize(95.0,15.0,0.5))))
      .addChild(new Transform("FIRST_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-8.0,30.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,2.0,0.5))))
      .addChild(new Transform("SECOND_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-7.0,29.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,0.2,2.0))))
      .addChild(new Transform("THIRD_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-6.0,28.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,2.0,0.5))))
      .addChild(new Transform("FOURTH_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-5.0,27.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,0.2,2.0))))
      .addChild(new Transform("FIFTH_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-4.0,26.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,2.0,0.5))))
      .addChild(new Transform("SIXTH_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-3.0,25.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,0.2,1.5))))
      .addChild(new Transform("SEVENTH_STAIR_IN_FRONT_OF_POOL").setTranslation(0.0,-1.5,24.5)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,0.0).setShininess(0.8)))
          .setGeometry(new Box().setSize(10.0,2.5,0.5))))
      .addChild(new Transform("GROUND_IN_FRONT_OF_THE_POOL").setTranslation(0.0,-9.0,25.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(200.0,0.2,35.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture("GrassForCretanHouse").setUrl(new String[] {"grass.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/grass.jpg"})))))
      .addChild(new Transform("GROUND_RIGHT_OF_THE_POOL").setTranslation(75.0,-9.0,60.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(50.0,0.2,80.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("GROUND_LEFT_OF_THE_POOL").setTranslation(-75.0,-9.0,60.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(50.0,0.2,80.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("RIGHT_MARGIN_OF_THE_POOL").setTranslation(50.0,-9.0,68.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.5,0.5).setEmissiveColor(0.0,0.5,0.5).setShininess(0.8)))
          .setGeometry(new Box().setSize(5.0,0.2,50.0))))
      .addChild(new Transform("LEFT_MARGIN_OF_THE_POOL").setTranslation(-50.0,-9.0,68.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.5,0.5).setEmissiveColor(0.0,0.5,0.5).setShininess(0.8)))
          .setGeometry(new Box().setSize(5.0,0.2,50.0))))
      .addChild(new Transform("MARGIN_IN_FRONT_OF_THE_POOL").setTranslation(0.0,-9.0,45.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.5,0.5).setEmissiveColor(0.0,0.5,0.5).setShininess(0.8)))
          .setGeometry(new Box().setSize(100.0,0.2,5.0))))
      .addChild(new Transform("GROUND_AT_THE_END_OF_THE_POOL").setTranslation(0.0,-9.0,120.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(200.0,0.2,50.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("MARGIN_AT_THE_END_OF_THE_POOL").setTranslation(0.0,-9.0,95.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.5,0.5).setEmissiveColor(0.0,0.5,0.5).setShininess(0.8)))
          .setGeometry(new Box().setSize(100.0,0.2,5.0))))
      .addChild(new Transform("WAVES_IN_POOL").setTranslation(0.0,-14.0,70.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("WAVES").setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0).setShininess(0.7)))
          .setGeometry(new Box().setSize(100.0,10.0,55.0)))
        .addChild(new TimeSensor("CLOCK_1").setCycleInterval(2).setLoop(true))
        .addChild(new ColorInterpolator("COLOR_OF_THE_POOL_WAVES").setKey(new double[] {0.2,0.5,0.5,0.6}).setKeyValue(new MFColor(new double[] {0.0,0.1,0.6,0.0,0.2,0.7,0.0,0.3,0.8,0.0,0.4,0.9})))
        .addChild(new ROUTE().setFromNode("CLOCK_1").setFromField("fraction_changed").setToNode("COLOR_OF_THE_POOL_WAVES").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("COLOR_OF_THE_POOL_WAVES").setFromField("value_changed").setToNode("WAVES").setToField("set_emissiveColor")))
      .addChild(new Transform("SUN").setRotation(0.0,1.0,0.0,.45).setTranslation(-150.0,200.0,-75.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("SUNNY").setDiffuseColor(0.5,0.5,0.0).setEmissiveColor(0.5,0.5,0.0).setShininess(0.9)))
          .setGeometry(new Sphere().setRadius(10)))
        .addChild(new TimeSensor("CLOCK_2").setCycleInterval(2).setLoop(true))
        .addChild(new ColorInterpolator("SUN_OF_CRETE").setKey(new double[] {0.2,0.5,0.5,0.6}).setKeyValue(new MFColor(new double[] {0.5,0.5,0.0,0.6,0.6,0.0,0.7,0.7,0.0,0.8,0.8,0.0})))
        .addChild(new ROUTE().setFromNode("CLOCK_2").setFromField("fraction_changed").setToNode("SUN_OF_CRETE").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SUN_OF_CRETE").setFromField("value_changed").setToNode("SUNNY").setToField("set_emissiveColor"))
        .addChild(new TimeSensor("CLOCK_3").setCycleInterval(100).setLoop(true))
        .addChild(new PositionInterpolator("SUN_PATH").setKey(new double[] {0.6,0.7,0.8,0.9,1.0,0.9,0.8,0.7,0.6}).setKeyValue(new MFVec3f(new double[] {-300.0,200.0,-50.0,-50.0,210.0,-50.0,0.0,215.0,-50.0,50.0,220.0,-50.0,300.0,225.0,-50.0,50.0,220.0,-50.0,0.0,215.0,-50.0,-50.0,210.0,-50.0,-300.0,190.0,-50.0})))
        .addChild(new ROUTE().setFromNode("CLOCK_3").setFromField("fraction_changed").setToNode("SUN_PATH").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("SUN_PATH").setFromField("value_changed").setToNode("SUN").setToField("set_translation")))
      .addChild(new Transform("HELLO_CRETE").setTranslation(-100.0,200.0,-50.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Hello CRETE!"})
            .setFontStyle(new FontStyle().setSize(40).setCssStyle("BOLD")))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
        .addChild(new TouchSensor("CRETAN_SONG").setDescription("click on the text to hear a traditional cretan song"))
        .addChild(new Sound().setMinBack(5).setMinFront(5)
          .setSource(new AudioClip("SONG").setDescription("traditional Cretan song").setUrl(new String[] {"pano.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pano.wav"})
            .setMetadata(new MetadataString().setName("OriginalSite").setValue(new String[] {"http://www.olymbos.org/music/pano.wav"}))))
        .addChild(new ROUTE().setFromNode("CRETAN_SONG").setFromField("touchTime").setToNode("SONG").setToField("set_startTime")))
      .addChild(new Transform("IN_FRONT_HOUSE_WINDOW_LEFT").setTranslation(-85.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.0).setTransparency(0.8)))
          .setGeometry(new Box().setSize(20.0,30.0,1.0))))
      .addChild(new Transform("IN_FRONT_OF_HOUSE_WINDOW_RIGHT").setTranslation(-65.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.5).setDiffuseColor(0.3,0.3,0.0).setTransparency(0.6)))
          .setGeometry(new Box().setSize(20.0,30.0,1.0)))
        .addChild(new TouchSensor("TOUCH_WINDOW_RIGHT").setDescription("point at box to spin it"))
        .addChild(new TimeSensor("CLOCK_4").setCycleInterval(30).setEnabled(false).setLoop(true))
        .addChild(new OrientationInterpolator("WINDOW_PATH").setKey(new double[] {0.0,0.25,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.57,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28})))
        .addChild(new ROUTE().setFromNode("TOUCH_WINDOW_RIGHT").setFromField("isOver").setToNode("CLOCK_4").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("CLOCK_4").setFromField("fraction_changed").setToNode("WINDOW_PATH").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("WINDOW_PATH").setFromField("value_changed").setToNode("IN_FRONT_OF_HOUSE_WINDOW_RIGHT").setToField("set_rotation")))
      .addChild(new Transform("LEFT_BASE_COLUMN").setTranslation(-95.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1)))
          .setGeometry(new Box().setSize(10.0,30.0,5.0))))
      .addChild(new Transform("SECOND_BASE_COLUMN").setTranslation(-50.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1)))
          .setGeometry(new Box().setSize(10.0,30.0,5.0))))
      .addChild(new Transform("CENTRAL_LEFT_BASE_WINDOW").setTranslation(-40.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.4,0.0).setTransparency(0.6)))
          .setGeometry(new Box().setSize(10.0,30.0,1.0)))
        .addChild(new PlaneSensor("SLIDE_2").setDescription("click and drag to open the window").setMaxPosition(-40.0,15.0).setMinPosition(-48.0,15.0))
        .addChild(new ROUTE().setFromNode("SLIDE_2").setFromField("translation_changed").setToNode("CENTRAL_LEFT_BASE_WINDOW").setToField("set_translation")))
      .addChild(new Transform("CENTRAL_RIGHT_BASE_WINDOW").setTranslation(-30.0,15.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.4,0.0).setTransparency(0.7)))
          .setGeometry(new Box().setSize(10.0,30.0,1.0)))
        .addChild(new PlaneSensor("SLIDE_1").setDescription("click and drag to open the window").setMaxPosition(-22.0,15.0).setMinPosition(-30.0,15.0))
        .addChild(new ROUTE().setFromNode("SLIDE_1").setFromField("translation_changed").setToNode("CENTRAL_RIGHT_BASE_WINDOW").setToField("set_translation")))
      .addChild(new Transform("THIRD_BASE_COLUMN").setTranslation(-20.0,15.0,1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1)))
          .setGeometry(new Box().setSize(10.0,30.0,5.0))))
      .addChild(new Transform("RIGHT_BASE_LEFT_WINDOW").setTranslation(-10.0,15.0,1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1).setTransparency(0.7)))
          .setGeometry(new Box().setSize(30.0,30.0,1.0))))
      .addChild(new Transform("BETWEEN_FRONT_DOORS").setTranslation(5.0,15.0,1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.3,0.3,0.1)))
          .setGeometry(new Box().setSize(1.0,30.0,1.0))))
      .addChild(new Transform("RIGHT_BASE_RIGHT_WINDOW").setTranslation(6.0,15.0,1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1).setTransparency(0.7)))
          .setGeometry(new Box().setSize(30.0,30.0,1.0))))
      .addChild(new Transform("FOURTH_BASE_COLUMN").setTranslation(30.0,15.0,1.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.1)))
          .setGeometry(new Box().setSize(28.0,30.0,5.0))))
      .addChild(new Transform("FIRST_FLOOR").setTranslation(0.0,30.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setEmissiveColor(1.0,1.0,1.0).setShininess(0.9)))
          .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.0,0.0,45.0,0.0,100.0,-100.0,0.0,-100.0,-100.0,-100.0,-100.0,0.0,0.0,0.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,5.0,0.0})))))
      .addChild(new Transform("KAGELA_ON_ROOF").setTranslation(-28.0,40.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setShininess(1).setTransparency(0.5)))
          .setGeometry(new Box().setSize(143.0,10.0,2.0))))
      .addChild(new Transform("KAGELA_RIGHT").setCenter(70.0,30.0,-30.0).setRotation(0.0,1.0,0.0,1.067).setTranslation(-7.0,40.0,-67.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setShininess(1).setTransparency(0.5)))
          .setGeometry(new Box().setSize(50.0,10.0,2.0))))
      .addChild(new Transform("FIRST_FLOOR_LEFT_WALL_1").setTranslation(-87.0,50.0,-40.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(25.0,30.0,2.0))))
      .addChild(new Transform("LEFT_WALL_1").setTranslation(-98.0,15.0,-15.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(2.0,30.0,30.0))))
      .addChild(new Transform("LEFT_WINDOW").setTranslation(-100.0,20.0,-35.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.431).setDiffuseColor(0.376,0.376,0.525).setEmissiveColor(0.4,0.4,0.4).setShininess(0.83).setSpecularColor(0.94,0.54,0.0).setTransparency(0.439)))
          .setGeometry(new Box().setSize(0.5,10.0,10.0)))
        .addChild(new TouchSensor("TOUCH_LEFT_WINDOW").setDescription("point at window to spin it"))
        .addChild(new TimeSensor("CLOCK_5").setCycleInterval(30).setEnabled(false).setLoop(true))
        .addChild(new OrientationInterpolator("LEFT_WINDOW_PATH").setKey(new double[] {0.0,0.25,0.50,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.57,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28})))
        .addChild(new ROUTE().setFromNode("TOUCH_LEFT_WINDOW").setFromField("isOver").setToNode("CLOCK_5").setToField("set_enabled"))
        .addChild(new ROUTE().setFromNode("CLOCK_5").setFromField("fraction_changed").setToNode("LEFT_WINDOW_PATH").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("LEFT_WINDOW_PATH").setFromField("value_changed").setToNode("LEFT_WINDOW").setToField("set_rotation")))
      .addChild(new Transform("LEFT_WALL_2").setTranslation(-98.0,15.0,-70.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(2.0,30.0,60.0))))
      .addChild(new Transform("BOTTOM_WALL_OF_LEFT_WINDOW").setTranslation(-98.0,7.2,-35.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(2.0,15.5,10.0))))
      .addChild(new Transform("UPPER_WALL_OF_LEFT_WINDOW").setTranslation(-98.0,30.0,-35.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(2.0,10.0,10.0))))
      .addChild(new Transform("BACK_WALL_1").setTranslation(-74.0,15.0,-100.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(50.0,30.0,2.0))))
      .addChild(new Transform("BACK_WALL_2").setTranslation(35.0,8.0,-100.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(130.0,15.0,2.0))))
      .addChild(new Transform("BACK_GLASS_WINDOWS").setTranslation(35.0,23.0,-100.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.3)))
          .setGeometry(new Box().setSize(130.0,15.0,1.0))))
      .addChild(new Transform("RIGHT_BASE_WALL").setCenter(32.5,0.0,0.0).setRotation(0.0,1.0,0.0,2.63).setTranslation(0.0,15.0,-50.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(5.0,30.0,80.0))))
      .addChild(new Transform("RIGHT_WINDOWS_FIRST_FLOOR_1").setTranslation(-70.0,50.0,-40.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.3)))
          .setGeometry(new Box().setSize(10.0,30.0,1.0))))
      .addChild(new Transform("RIGHT_WINDOW_FIRST_FLOOR_2").setTranslation(-60.0,50.0,-40.0)
        .addChild(new Transform("RightWindowFirstFloor2")
          .addChild(new Shape()
            .setGeometry(new Box().setSize(10.0,30.0,1.0))
            .setAppearance(new Appearance("WINDOW_COLOR")
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.3)))))
        .addChild(new CylinderSensor("RIGHT_WINDOW_FIRST_FLOOR_2_SENSOR").setDescription("click and drag to open the window").setMaxAngle(1.57))
        .addChild(new ROUTE().setFromNode("RIGHT_WINDOW_FIRST_FLOOR_2_SENSOR").setFromField("rotation_changed").setToNode("RightWindowFirstFloor2").setToField("set_rotation")))
      .addChild(new Transform("FIRST_FLOOR_COLUMN_LEFT").setTranslation(-52.0,50.0,-40.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(5.0,30.0,2.0))))
      .addChild(new Transform("RIGHT_WINDOWS_FIRST_FLOOR_RIGHT_1").setTranslation(-45.0,50.0,-40.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.5)))
          .setGeometry(new Box().setSize(10.0,30.0,1.0))))
      .addChild(new Transform("RIGHT_WINDOWS_FIRST_FLOOR_RIGHT_2").setTranslation(-35.0,50.0,-40.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setTransparency(0.5)))
          .setGeometry(new Box().setSize(10.0,30.0,1.0))))
      .addChild(new Transform("LEFT_FIRST_FLOOR_WALL").setTranslation(-99.0,50.0,-69.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(2.0,30.0,60.0))))
      .addChild(new Transform("BACK_FIRST_FLOOR_WALL").setTranslation(-65.0,50.0,-100.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(70.0,30.0,2.0))))
      .addChild(new Transform("LEFT_FIRST_FLOOR_HALF_ROOF").setRotation(0.0,0.0,1.0,-0.17).setTranslation(-100.0,65.0,-70.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Extrusion("ROOF").setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.0,0.0,1.0,-30.0,-1.0,-30.0,-1.0,0.0,-1.0,30.0,1.0,30.0})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,10.0,10.0,0.0,20.0,20.0,0.0,30.0,30.0,0.0,0.0,0.0,0.0})))))
      .addChild(new Transform("RIGHT_FIRST_FLOOR_HALF_ROOF").setRotation(0.0,0.0,1.0,-1.4).setTranslation(-65.0,90.0,-70.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
          .setGeometry(new Extrusion().setCreaseAngle(3.14).setCrossSection(new MFVec2f(new double[] {1.0,0.0,1.0,-30.0,-1.0,-30.0,-1.0,0.0,-1.0,30.0,1.0,30.0})).setSolid(false).setSpine(new MFVec3f(new double[] {30.0,30.0,0.0,20.0,20.0,0.0,10.0,10.0,0.0,0.0,0.0,0.0})))))
      .addChild(new Transform("BACK_DOOR").setTranslation(-40.0,15.0,-100.0)
        .addChild(new Transform("BackDoor")
          .addChild(new Shape()
            .setGeometry(new Box().setSize(19.0,30.0,1.0))
            .setAppearance(new Appearance("DOOR_COLOR")
              .setMaterial(new Material().setDiffuseColor(0.3,0.0,0.0).setShininess(1))))
          .addChild(new CylinderSensor("BACK_DOOR_SENSOR").setDescription("front door").setMaxAngle(-3.14))
          .addChild(new ROUTE().setFromNode("BACK_DOOR_SENSOR").setFromField("rotation_changed").setToNode("BackDoor").setToField("set_rotation"))))
      .addChild(new Transform("POOL_CHAIR_1")
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-0.8).setScale(5.0,5.0,5.0).setTranslation(-80.0,-3.0,50.0)
          .addChild(new Shape("body1")
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {3.0,0.1,3.0,0.2,0.0,0.2,-0.25,0.1,-0.5,0.0,-0.9,-0.5,-1.2,-1.0,-1.1,-1.0,-0.8,-0.5,-0.4,0.0,0.0,0.1,3.0,0.1})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,2.0})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0).setTransparency(0.4)))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-0.8).setScale(5.0,5.0,5.0).setTranslation(-80.0,-3.0,50.0)
          .addChild(new Shape("leg1")
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-1.2,0.3,-1.2,0.45,-1.1,0.45,-1.1,0.35,2.9,0.35,2.9,0.7,3.0,0.7,3.0,0.3,-1.2,0.3})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.1})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,-0.8).setScale(5.0,5.0,5.0).setTranslation(-87.0,-3.0,55.0)
          .addChild(new Shape("leg2")
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-1.2,0.3,-1.2,0.45,-1.1,0.45,-1.1,0.35,2.9,0.35,2.9,0.7,3.0,0.7,3.0,0.3,-1.2,0.3})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.1})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
        .addComments(" Part from the project PoolChairUmbrella ")
        .addChild(new CylinderSensor("Chair1Sensor").setDescription("click and drag to move the chair").setMaxAngle(-3.18).setMinAngle(-3.14))
        .addChild(new ROUTE().setFromNode("Chair1Sensor").setFromField("rotation_changed").setToNode("POOL_CHAIR_1").setToField("set_rotation")))
      .addChild(new Transform("POOL_CHAIR_2")
        .addChild(new Transform().setRotation(0.0,1.0,0.0,0.8).setScale(7.0,7.0,7.0).setTranslation(-40.0,-3.0,130.0)
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {3.0,0.1,3.0,0.2,0.0,0.2,-0.25,0.1,-0.5,0.0,-0.9,-0.5,-1.2,-1.0,-1.1,-1.0,-0.8,-0.5,-0.4,0.0,0.0,0.1,3.0,0.1})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,2.0})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0).setTransparency(0.4)))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,0.8).setScale(7.0,7.0,7.0).setTranslation(-40.0,-3.0,130.0)
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-1.2,0.3,-1.2,0.45,-1.1,0.45,-1.1,0.35,2.9,0.35,2.9,0.7,3.0,0.7,3.0,0.3,-1.2,0.3})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.1})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
        .addChild(new Transform().setRotation(0.0,1.0,0.0,0.8).setScale(7.0,7.0,7.0).setTranslation(-30.0,-3.0,137.0)
          .addChild(new Shape()
            .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {-1.2,0.3,-1.2,0.45,-1.1,0.45,-1.1,0.35,2.9,0.35,2.9,0.7,3.0,0.7,3.0,0.3,-1.2,0.3})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,0.1})))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))))
        .addComments(" Part from the project PoolChairUmbrella ")
        .addChild(new CylinderSensor("Chair2Sensor").setDescription("click and drag to move the pool chair").setMaxAngle(-3.14))
        .addChild(new ROUTE().setFromNode("Chair2Sensor").setFromField("rotation_changed").setToNode("POOL_CHAIR_2").setToField("set_rotation")))
      .addChild(new Transform("FIRST_FLOOR_BALCONY_LEFT_WALL").setTranslation(-97.5,5.0,14.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
          .setGeometry(new Box().setSize(5.0,10.0,22.5))))
      .addChild(new Transform("RIGHT_GROUND").setTranslation(150.0,-9.0,-18.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(100.0,2.0,325.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("RIGHT_VERTICAL_WALL").setTranslation(100.0,-5.0,-75.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(2.0,10.0,200.0))))
      .addChild(new Transform("MIDDLE_FIRST_FLOOR_HOUSE")
        .addChild(new Transform("LEFT_FRONT_COLUMN").setTranslation(-28.0,65.0,-50.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.33,0.0,0.0)))
            .setGeometry(new Box().setSize(5.0,60.0,5.0))))
        .addChild(new Transform("RIGHT_FRONT_COLUMN").setTranslation(12.0,65.0,-50.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.33,0.0,0.0)))
            .setGeometry(new Box().setSize(5.0,60.0,5.0))))
        .addChild(new Transform("LEFT_FRONT_GLASS").setRotation(0.0,1.0,0.0,-0.5).setTranslation(-18.0,65.0,-45.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setShininess(1).setTransparency(0.5)))
            .setGeometry(new Box().setSize(20.0,60.0,1.0))))
        .addChild(new Transform("RIGHT_FRONT_GLASS").setRotation(0.0,1.0,0.0,-2.7).setTranslation(0.0,65.0,-45.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setShininess(1).setTransparency(0.5)))
            .setGeometry(new Box().setSize(20.0,60.0,1.0))))
        .addChild(new Transform("RIGHT_WALL").setTranslation(12.0,65.0,-75.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.33,0.0,0.0)))
            .setGeometry(new Box().setSize(5.0,60.0,50.0))))
        .addChild(new Transform("LEFT_WALL").setTranslation(-28.0,80.0,-75.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.33,0.0,0.0)))
            .setGeometry(new Box().setSize(5.0,30.0,50.0))))
        .addChild(new Transform("BACK_WALL").setTranslation(-10.0,64.0,-97.5)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.33,0.0,0.0)))
            .setGeometry(new Box().setSize(40.0,62.0,5.0))))
        .addChild(new Transform("CEILING").setTranslation(-7.5,95.0,-70.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.4,0.1,0.0)))
            .setGeometry(new Box().setSize(55.0,0.5,65.0))))
        .addChild(new Transform("CEILING_PYRAMID").setTranslation(-7.0,101.0,-70.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.4,0.1,0.0)))
            .setGeometry(new Cone().setBottomRadius(44).setHeight(12))))
        .addChild(new Transform("SMALL_COLUMN").setTranslation(-30.0,50.0,-45.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.4,0.1,0.0)))
            .setGeometry(new Box().setSize(5.0,30.0,10.0)))))
      .addChild(new Transform("RIGHT_FIRST_FLOOR_HOUSE")
        .addChild(new Transform("BACK").setTranslation(55.0,55.0,-97.5)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
            .setGeometry(new Box().setSize(85.0,40.0,5.0))))
        .addChild(new Transform("RIGHT_WALL_RIGHT_HOUSE").setRotation(0.0,1.0,0.0,2.63).setTranslation(80.0,55.0,-70.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(1)))
            .setGeometry(new Box().setSize(5.0,40.0,60.0))))
        .addChild(new Transform("RIGHT_WINDOW_RIGHT_HOUSE").setTranslation(52.0,55.0,-43.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setShininess(0.5).setTransparency(0.2)))
            .setGeometry(new Box().setSize(30.0,40.0,2.0))))
        .addChild(new Transform("LEFT_COLUMN_RIGHT_HOUSE").setRotation(0.0,1.0,0.0,2.6).setTranslation(25.0,55.0,-50.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setAmbientIntensity(1).setDiffuseColor(0.8,0.8,0.0).setEmissiveColor(0.5,0.5,0.5).setShininess(0.5)))
            .setGeometry(new Box().setSize(30.0,40.0,5.0))))
        .addChild(new Transform("RIGHT_HOUSE_RIGHT_ROOF").setTranslation(55.0,81.0,-75.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new Cone().setBottomRadius(49).setHeight(12)))))
      .addChild(new Transform("FRONT_ROOF_TRIANGLE").setTranslation(-65.0,64.0,-41.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Extrusion("ROOFTRIANGLE").setCreaseAngle(1).setCrossSection(new MFVec2f(new double[] {-38.0,0.0,38.0,0.0,0.0,-26.0})).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,2.0})))))
      .addChild(new Transform("BACK_ROOF_TRIANGLE").setTranslation(-65.0,64.0,-100.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Extrusion().setUSE("ROOFTRIANGLE"))))
      .addChild(new Transform("LEFT_KAGELA").setTranslation(-100.0,40.0,-20.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setShininess(1).setTransparency(0.5)))
          .setGeometry(new Box().setSize(2.0,10.0,42.0))))
      .addChild(new Transform("LEFT_GROUND").setTranslation(-150.0,-9.0,-18.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(100.0,2.0,325.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("LEFT_VERTICAL_WALL").setTranslation(-100.0,-5.0,-75.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(2.0,10.0,200.0))))
      .addChild(new Transform("BACKYARD").setTranslation(0.0,-9.0,-225.0)
        .addChild(new Shape()
          .setGeometry(new Box().setSize(400.0,1.0,100.0))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUSE("GrassForCretanHouse")))))
      .addChild(new Transform("BACK_VERTICAL_WALL").setTranslation(0.0,-5.0,-175.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material()))
          .setGeometry(new Box().setSize(200.0,10.0,2.0))))
      .addChild(new Transform("RIGHT_DOOR").setRotation(0.0,1.0,0.0,2.63).setTranslation(90.0,15.0,-83.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0).setShininess(1).setTransparency(0.5)))
          .setGeometry(new Box().setSize(2.0,30.0,38.0))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HomeInCreteGreece model
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
        X3D thisExampleX3dModel = new HomeInCreteGreece().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.HomeInCreteGreece\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.HomeInCreteGreece\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Set of three flowers for for the aromatic pleasure of the viewer. Carol did coordinates for stage and beginning to end flowers. </p>
 <p> Related links:  source FlowerSet.java, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.FlowerSet&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.x3d">FlowerSet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Set of three flowers for for the aromatic pleasure of the viewer. Carol did coordinates for stage and beginning to end flowers. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Carol McDonald </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Joe Williams and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2023 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 27 January 2024 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d" target="_blank">https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 4.0, <a href="https://www.web3d.org/x3d/tools/X3D-Edit" target="_blank">https://www.web3d.org/x3d/tools/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/../license.html">../license.html</a> </td>
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
		stylesheet
	       (<a href="https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">version control</a>)
                which is used to create Java source code from an original <code>.x3d</code> model.
	</p>

	* @author Carol McDonald
 */

public class FlowerSet
{
	/** Default constructor to create this object. */
	public FlowerSet ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_4_0)
  .setHead(new head()
    .addComponent(new component().setName("EventUtilities").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("FlowerSet.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Set of three flowers for for the aromatic pleasure of the viewer. Carol did coordinates for stage and beginning to end flowers."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Carol McDonald"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Joe Williams and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2023"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("27 January 2024"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/FlowerSet.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("FlowerSet.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {1.0,1.0,1.0})))
    .addChild(new NavigationInfo().setSpeed(3).setType(new String[] {"EXAMINE"}))
    .addComments(" Avoid keeping a Viewpoint node here since the FlowerSet is getting loaded into a parent scene that has careful navigation defined ")
    .addComments(" Viewpoint DEF='Flowers' position='0 1 3' orientation='1 0 0 -0.5' centerOfRotation='0 0 0' description='Look at Flowers1'/> <Viewpoint DEF='Flowers' position='0 0 2' centerOfRotation='0 0.8 0' description='Look at Flowers2'/ ")
    .addChild(new TimeSensor("FlowerStartTIME").setLoop(true))
    .addComments(" scene ready signal Start audio ")
    .addChild(new TimeSensor("FlowerDelayTIME").setCycleInterval(2))
    .addComments(" delay between start audio and start animations ")
    .addChild(new TimeSensor("FlowerHeartTimer").setCycleInterval(100))
    .addComments(" start animation ")
    .addChild(new BooleanFilter("FlowerDelayFILTER"))
    .addChild(new TimeTrigger("FlowerTRIGGER"))
    .addComments(" generate Clock100Seconds startTime from completion of Delay ")
    .addChild(new ROUTE().setFromNode("FlowerStartTIME").setFromField("cycleTime").setToNode("FlowerStartTIME").setToField("set_stopTime"))
    .addComments(" stop Start ")
    .addChild(new ROUTE().setFromNode("FlowerStartTIME").setFromField("stopTime").setToNode("FlowerDelayTIME").setToField("set_startTime"))
    .addComments(" turn on delay and audio ")
    .addChild(new ROUTE().setFromNode("FlowerDelayTIME").setFromField("isActive").setToNode("FlowerDelayFILTER").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("FlowerDelayFILTER").setFromField("inputFalse").setToNode("FlowerTRIGGER").setToField("set_boolean"))
    .addChild(new ROUTE().setFromNode("FlowerTRIGGER").setFromField("triggerTime").setToNode("FlowerHeartTimer").setToField("set_startTime"))
    .addComments(" start animation timer ")
    .addChild(new TimeSensor("PetalTime").setCycleInterval(4).setLoop(true))
    .addChild(new Group("FlowerSet")
      .addComments(" Flower #1 ")
      .addChild(new Transform("FlowerStem")
        .addChild(new Shape("Stem1")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.5,0.0).setShininess(1.0)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(getIndexedFaceSet_6_29_coordIndex()).setTexCoordIndex(getIndexedFaceSet_6_29_texCoordIndex())
            .setCoord(new Coordinate().setPoint(getCoordinate_7_29_point())))))
      .addChild(new Transform("FlowerPetal01")
        .addChild(new Shape("FlowerPetal")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.0).setDiffuseColor(1.0,0.0,0.0).setShininess(1.0)))
          .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {14,13,12,-1,12,15,14,-1,16,15,12,-1,11,10,0,-1,11,0,16,-1,9,1,10,-1,16,12,11,-1,9,2,1,-1,0,10,1,-1,9,8,2,-1,3,2,8,-1,3,7,6,-1,5,4,6,-1,3,6,4,-1,3,8,7,-1,18,36,35,-1,18,35,17,-1,20,38,37,-1,20,37,19,-1,19,37,36,-1,19,36,18,-1,22,40,39,-1,22,39,21,-1,24,42,41,-1,24,41,23,-1,25,43,42,-1,25,42,24,-1,23,41,40,-1,23,40,22,-1,21,39,38,-1,21,38,20,-1,27,45,44,-1,27,44,26,-1,29,47,46,-1,29,46,28,-1,28,46,45,-1,28,45,27,-1,31,49,48,-1,31,48,30,-1,33,51,50,-1,33,50,32,-1,34,52,51,-1,34,51,33,-1,32,50,49,-1,32,49,31,-1,30,48,47,-1,30,47,29,-1,26,44,43,-1,26,43,25,-1,67,65,66,-1,65,67,68,-1,64,65,68,-1,69,63,64,-1,69,53,63,-1,62,63,53,-1,69,64,68,-1,61,62,54,-1,53,54,62,-1,61,54,55,-1,60,61,55,-1,56,59,60,-1,57,58,56,-1,59,56,58,-1,56,60,55,-1}).setTexCoordIndex(new int[] {14,13,12,-1,12,15,14,-1,16,15,12,-1,11,10,0,-1,11,0,16,-1,9,1,10,-1,16,12,11,-1,9,2,1,-1,0,10,1,-1,9,8,2,-1,3,2,8,-1,3,7,6,-1,5,4,6,-1,3,6,4,-1,3,8,7,-1,18,36,35,-1,18,35,17,-1,20,38,37,-1,20,37,19,-1,19,37,36,-1,19,36,18,-1,22,40,39,-1,22,39,21,-1,24,42,41,-1,24,41,23,-1,25,43,42,-1,25,42,24,-1,23,41,40,-1,23,40,22,-1,21,39,38,-1,21,38,20,-1,27,45,44,-1,27,44,26,-1,29,47,46,-1,29,46,28,-1,28,46,45,-1,28,45,27,-1,31,49,48,-1,31,48,30,-1,33,51,50,-1,33,50,32,-1,34,52,51,-1,34,51,33,-1,32,50,49,-1,32,49,31,-1,30,48,47,-1,30,47,29,-1,26,44,43,-1,26,43,25,-1,67,65,66,-1,65,67,68,-1,64,65,68,-1,69,63,64,-1,69,53,63,-1,62,63,53,-1,69,64,68,-1,61,62,54,-1,53,54,62,-1,61,54,55,-1,60,61,55,-1,56,59,60,-1,57,58,56,-1,59,56,58,-1,56,60,55,-1})
            .setCoord(new Coordinate().setPoint(getCoordinate_7_35_point())))))
      .addChild(new Transform("FlowerPetal02").setRotation(0.0,1.0,0.0,0.5236)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal03").setRotation(0.0,1.0,0.0,1.0472)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal04").setRotation(0.0,1.0,0.0,1.5708)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal05").setRotation(0.0,1.0,0.0,2.0944)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal06").setRotation(0.0,1.0,0.0,2.618)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal07").setRotation(0.0,1.0,0.0,3.1416)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal08").setRotation(0.0,1.0,0.0,3.6652)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal09").setRotation(0.0,1.0,0.0,4.1888)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal10").setRotation(0.0,1.0,0.0,4.7124)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal11").setRotation(0.0,1.0,0.0,5.236)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal12").setRotation(0.0,1.0,0.0,5.7596)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerCenterSphere").setScale(1.0,1.5,1.0).setTranslation(0.0,0.01,0.0)
        .addChild(new Shape("FlowerCenter")
          .setGeometry(new Sphere().setRadius(0.015))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(1.0,1.0,0.0).setEmissiveColor(1.0,1.0,0.0).setShininess(1.0)))))
      .addComments(" Flower #2 ")
      .addChild(new Transform("Stem2").setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("Stem1")))
      .addChild(new Transform("FlowerPetal01a").setRotation(0.0,1.0,0.0,6.28).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal02a").setRotation(0.0,1.0,0.0,0.5236).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal03a").setRotation(0.0,1.0,0.0,1.0472).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal04a").setRotation(0.0,1.0,0.0,1.5708).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal05a").setRotation(0.0,1.0,0.0,2.0944).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal06a").setRotation(0.0,1.0,0.0,2.618).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal07a").setRotation(0.0,1.0,0.0,3.1416).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal08a").setRotation(0.0,1.0,0.0,3.6652).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal09a").setRotation(0.0,1.0,0.0,4.1888).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal10a").setRotation(0.0,1.0,0.0,4.7124).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal11a").setRotation(0.0,1.0,0.0,5.236).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform("FlowerPetal12a").setRotation(0.0,1.0,0.0,5.7596).setTranslation(0.25,0.0,0.0)
        .addChild(new Shape().setUSE("FlowerPetal")))
      .addChild(new Transform().setScale(1.0,1.5,1.0).setTranslation(0.25,0.01,0.0)
        .addChild(new Shape().setUSE("FlowerCenter")))
      .addComments(" Flower #3 and BorderFlower01 ")
      .addChild(new Transform("BorderFlower01")
        .addChild(new Transform().setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("Stem1")))
        .addChild(new Transform("FlowerPetal01b").setRotation(0.0,1.0,0.0,6.28).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal02b").setRotation(0.0,1.0,0.0,0.5236).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal03b").setRotation(0.0,1.0,0.0,1.0472).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal04b").setRotation(0.0,1.0,0.0,1.5708).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal05b").setRotation(0.0,1.0,0.0,2.0944).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal06b").setRotation(0.0,1.0,0.0,2.618).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal07b").setRotation(0.0,1.0,0.0,3.1416).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal08b").setRotation(0.0,1.0,0.0,3.6652).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal09b").setRotation(0.0,1.0,0.0,4.1888).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal10b").setRotation(0.0,1.0,0.0,4.7124).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal11b").setRotation(0.0,1.0,0.0,5.236).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform("FlowerPetal12b").setRotation(0.0,1.0,0.0,5.7596).setTranslation(0.5,0.0,0.0)
          .addChild(new Shape().setUSE("FlowerPetal")))
        .addChild(new Transform().setScale(1.0,1.5,1.0).setTranslation(0.5,0.01,0.0)
          .addChild(new Shape().setUSE("FlowerCenter")))))
    .addComments(" Control Flower Petal Animation ")
    .addChild(new OrientationInterpolator("Petal01Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,0.0,1.0,0.0,-0.5,1.0,0.0,6.28,0.5,1.0,0.0,6.28,0.0,0.0,1.0,0.0})))
    .addChild(new OrientationInterpolator("Petal02Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.5236,-0.5,1.0,0.0,0.5236,0.5,1.0,0.0,0.5236,0.0,1.0,0.0,0.5236})))
    .addChild(new OrientationInterpolator("Petal03Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,1.0472,-0.5,1.0,0.0,1.0472,0.5,1.0,0.0,1.0472,0.0,1.0,0.0,1.0472})))
    .addChild(new OrientationInterpolator("Petal04Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,1.5708,-0.5,1.0,0.0,1.5708,0.5,1.0,0.0,1.5708,0.0,1.0,0.0,1.5708})))
    .addChild(new OrientationInterpolator("Petal05Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,2.0944,-0.5,1.0,0.0,2.0944,0.5,1.0,0.0,2.0944,0.0,1.0,0.0,2.0944})))
    .addChild(new OrientationInterpolator("Petal06Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,2.618,-0.5,1.0,0.0,2.618,0.5,1.0,0.0,2.618,0.0,1.0,0.0,2.618})))
    .addChild(new OrientationInterpolator("Petal07Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,3.1416,-0.5,1.0,0.0,3.1416,0.5,1.0,0.0,3.1416,0.0,1.0,0.0,3.1416})))
    .addChild(new OrientationInterpolator("Petal08Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,3.6652,-0.5,1.0,0.0,3.6652,0.5,1.0,0.0,3.6652,0.0,1.0,0.0,3.6652})))
    .addChild(new OrientationInterpolator("Petal09Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,4.1888,-0.5,1.0,0.0,4.1888,0.5,1.0,0.0,4.1888,0.0,1.0,0.0,4.1888})))
    .addChild(new OrientationInterpolator("Petal10Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,4.7124,-0.5,1.0,0.0,4.7124,0.5,1.0,0.0,4.7124,0.0,1.0,0.0,4.7124})))
    .addChild(new OrientationInterpolator("Petal11Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,5.236,-0.5,1.0,0.0,5.236,0.5,1.0,0.0,5.236,0.0,1.0,0.0,5.236})))
    .addChild(new OrientationInterpolator("Petal12Move").setKey(new double[] {0.0,0.23,0.55,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,5.7596,-0.5,1.0,0.0,5.7596,0.5,1.0,0.0,5.7596,0.0,1.0,0.0,5.7596})))
    .addComments(" To interpolators ")
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal01Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal02Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal03Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal04Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal05Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal06Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal07Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal08Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal09Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal10Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal11Move").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PetalTime").setFromField("fraction_changed").setToNode("Petal12Move").setToField("set_fraction"))
    .addComments(" To Flowers ")
    .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12a").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal01Move").setFromField("value_changed").setToNode("FlowerPetal01b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal02Move").setFromField("value_changed").setToNode("FlowerPetal02b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal03Move").setFromField("value_changed").setToNode("FlowerPetal03b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal04Move").setFromField("value_changed").setToNode("FlowerPetal04b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal05Move").setFromField("value_changed").setToNode("FlowerPetal05b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal06Move").setFromField("value_changed").setToNode("FlowerPetal06b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal07Move").setFromField("value_changed").setToNode("FlowerPetal07b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal08Move").setFromField("value_changed").setToNode("FlowerPetal08b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal09Move").setFromField("value_changed").setToNode("FlowerPetal09b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal10Move").setFromField("value_changed").setToNode("FlowerPetal10b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal11Move").setFromField("value_changed").setToNode("FlowerPetal11b").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Petal12Move").setFromField("value_changed").setToNode("FlowerPetal12b").setToField("set_rotation"))
    .addChild(new Group("BorderFlowers")
      .addChild(new Transform("rFlowerSpecial").setScale(2.0,2.0,2.0).setTranslation(7.0,0.35,0.0)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addComments(" Flowers - right side/ ")
      .addChild(new Transform("rFlower01").setTranslation(9.198902,0.25,-0.863062)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower02").setTranslation(13.132416,0.25,0.935333)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower03").setTranslation(17.524333,0.25,1.916645)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower04").setTranslation(20.608559,0.25,5.182358)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower05").setTranslation(21.649256,0.25,9.571372)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower06").setTranslation(21.482255,0.25,14.116679)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower07").setTranslation(24.026133,0.25,17.749925)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower08").setTranslation(26.9932,0.25,21.155444)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower09").setTranslation(27.823069,0.25,25.586275)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("rFlower10").setTranslation(27.492792,0.25,30.126795)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addComments(" Flowers - left side/ ")
      .addChild(new Transform("lFlower01").setTranslation(-1.441,0.25,0.1745)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower02").setTranslation(0.2505,0.25,4.274)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower03").setTranslation(3.55,0.25,7.177)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower04").setTranslation(7.952796,0.25,7.761609)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower05").setTranslation(11.542545,0.25,0.060083)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower06").setTranslation(12.36343,0.25,14.364994)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower07").setTranslation(12.33216,0.25,18.811941)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower08").setTranslation(14.548649,0.0,22.608593)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower09").setTranslation(17.738751,0.25,25.709141)
        .addChild(new Transform().setUSE("BorderFlower01")))
      .addChild(new Transform("lFlower10").setTranslation(18.515152,0.25,30.003242)
        .addChild(new Transform().setUSE("BorderFlower01"))))
    .addChild(new Group()
      .addComments(" control border flower movement to heart shape ")
      .addChild(new PositionInterpolator("lFlower01_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.787,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {-1.44107103347778,0.25,0.17451100051403,-1.44107103347778,0.25,0.17451100051403,5.0,1.25,16.0,21.75,2.25,32.0,21.75,2.25,32.0})))
      .addChild(new PositionInterpolator("lFlower02_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {0.250537008047104,0.25,4.27397918701172,0.250537008047104,0.25,4.27397918701172,21.5499992370605,2.34999990463257,32.0,21.5499992370605,2.34999990463257,32.0})))
      .addChild(new PositionInterpolator("lFlower03_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {3.55009698867798,0.25,7.17728519439697,3.55009698867798,0.25,7.17728519439697,21.5499992370605,2.45000004768372,32.0,21.5499992370605,2.45000004768372,32.0})))
      .addChild(new PositionInterpolator("lFlower04_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {7.95279598236084,0.25,7.76160907745361,7.95279598236084,0.25,7.76160907745361,21.4500007629395,2.54999995231628,32.0,21.4500007629395,2.54999995231628,32.0})))
      .addChild(new PositionInterpolator("lFlower05_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {11.5425453186035,0.25,10.0600833892822,11.5425453186035,0.25,10.0600833892822,21.5499992370605,2.45000004768372,32.0,21.5499992370605,2.45000004768372,32.0})))
      .addChild(new PositionInterpolator("lFlower06_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {12.3634300231934,0.25,14.3649940490723,12.3634300231934,0.25,14.3649940490723,21.3600006103516,2.78999996185303,32.0,21.3600006103516,2.78999996185303,32.0})))
      .addChild(new PositionInterpolator("lFlower07_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {12.3321599960327,0.25,18.8119411468506,12.3321599960327,0.25,18.8119411468506,21.4500007629395,2.90000009536743,32.0,21.4500007629395,2.90000009536743,32.0})))
      .addChild(new PositionInterpolator("lFlower08_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {14.5486488342285,0.25,22.6085929870605,14.5486488342285,0.25,22.6085929870605,21.5900001525879,2.85999989509583,32.0,21.5900001525879,2.85999989509583,32.0})))
      .addChild(new PositionInterpolator("rFlower01_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {9.19890213012695,0.25,-0.863062024116516,9.19890213012695,0.25,-0.863062024116516,21.8500003814697,2.34999990463257,32.0,21.8500003814697,2.34999990463257,32.0})))
      .addChild(new PositionInterpolator("rFlower02_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {13.1324157714844,0.25,0.935333013534546,13.1324157714844,0.25,0.935333013534546,21.9500007629395,2.45000004768372,32.0,21.9500007629395,2.45000004768372,32.0})))
      .addChild(new PositionInterpolator("rFlower03_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {17.5243320465088,0.25,1.91664505004883,17.5243320465088,0.25,1.91664505004883,22.0499992370605,2.54999995231628,32.0,22.0499992370605,2.54999995231628,32.0})))
      .addChild(new PositionInterpolator("rFlower04_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {20.6085586547852,0.25,5.18235778808594,20.6085586547852,0.25,5.18235778808594,22.1499996185303,2.65000009536743,32.0,22.1499996185303,2.65000009536743,32.0})))
      .addChild(new PositionInterpolator("rFlower05_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {21.6492557525635,0.25,9.57137203216553,21.6492557525635,0.25,9.57137203216553,22.1399993896484,2.78999996185303,32.0,22.1399993896484,2.78999996185303,32.0})))
      .addChild(new PositionInterpolator("rFlower06_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {21.4822559356689,0.25,14.1166791915894,21.4822559356689,0.25,14.1166791915894,22.0599994659424,2.90000009536743,32.0,22.0599994659424,2.90000009536743,32.0})))
      .addChild(new PositionInterpolator("rFlower07_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {24.0261325836182,0.25,17.7499256134033,24.0261325836182,0.25,17.7499256134033,21.9099998474121,2.85999989509583,32.0,21.9099998474121,2.85999989509583,32.0})))
      .addChild(new PositionInterpolator("rFlower08_TranslationInterpolator").setKey(new double[] {0.0,0.785,0.81,1.0}).setKeyValue(new MFVec3f(new double[] {26.993200302124,0.25,21.1554431915283,26.993200302124,0.25,21.1554431915283,21.75,2.84999990463257,32.0,21.75,2.84999990463257,32.0})))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower01_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower02_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower03_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower04_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower05_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower06_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower07_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("lFlower08_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower01_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower02_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower03_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower04_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower05_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower06_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower07_TranslationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("FlowerHeartTimer").setFromField("fraction_changed").setToNode("rFlower08_TranslationInterpolator").setToField("set_fraction"))
      .addComments(" To Flowers ")
      .addChild(new ROUTE().setFromNode("lFlower01_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower01").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower02_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower02").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower03_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower03").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower04_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower04").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower05_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower05").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower06_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower06").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower07_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower07").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("lFlower08_TranslationInterpolator").setFromField("value_changed").setToNode("lFlower08").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower01_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower01").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower02_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower02").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower03_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower03").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower04_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower04").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower05_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower05").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower06_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower06").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower07_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower07").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("rFlower08_TranslationInterpolator").setFromField("value_changed").setToNode("rFlower08").setToField("set_translation"))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_29_coordIndex_1()
		{
			int[] value = {18,334,336,-1,18,336,333,-1,333,336,335,-1,333,335,17,-1,20,328,332,-1,20,332,330,-1,330,332,331,-1,330,331,19,-1,21,325,329,-1,21,329,327,-1,327,329,328,-1,327,328,20,-1,22,324,326,-1,22,326,323,-1,323,326,325,-1,323,325,21,-1,24,318,322,-1,24,322,320,-1,320,322,321,-1,320,321,23,-1,25,315,319,-1,25,319,317,-1,317,319,318,-1,317,318,24,-1,26,314,316,-1,26,316,313,-1,313,316,315,-1,313,315,25,-1,28,308,312,-1,28,312,310,-1,310,312,311,-1,310,311,27,-1,29,305,309,-1,29,309,307,-1,307,309,308,-1,307,308,28,-1,30,304,306,-1,30,306,303,-1,303,306,305,-1,303,305,29,-1,32,298,302,-1,32,302,300,-1,300,302,301,-1,300,301,31,-1,33,297,299,-1,33,299,296,-1,296,299,298,-1,296,298,32,-1,333,17,34,-1,35,18,333,-1,34,35,333,-1,36,19,18,-1,36,18,35,-1,330,19,36,-1,37,20,330,-1,36,37,330,-1,327,20,37,-1,38,21,327,-1,37,38,327,-1,323,21,38,-1,39,22,323,-1,38,39,323,-1,40,23,22,-1,40,22,39,-1,320,23,40,-1,41,24,320,-1,40,41,320,-1,317,24,41,-1,42,25,317,-1,41,42,317,-1,313,25,42,-1,43,26,313,-1,42,43,313,-1,44,27,26,-1,44,26,43,-1,310,27,44,-1,45,28,310,-1,44,45,310,-1,307,28,45,-1,46,29,307,-1,45,46,307,-1,303,29,46,-1,47,30,303,-1,46,47,303,-1,48,31,30,-1,48,30,47,-1,300,31,48,-1,49,32,300,-1,48,49,300,-1,296,32,49,-1,50,33,296,-1,49,50,296,-1,52,35,34,-1,52,34,51,-1,53,36,35,-1,53,35,52,-1,54,37,36,-1,54,36,53,-1,55,38,37,-1,55,37,54,-1,56,39,38,-1,56,38,55,-1,57,40,39,-1,57,39,56,-1,58,41,40,-1,58,40,57,-1,59,42,41,-1,59,41,58,-1,60,43,42,-1,60,42,59,-1,61,44,43,-1,61,43,60,-1,62,45,44,-1,62,44,61,-1,63,46,45,-1,63,45,62,-1,64,47,46,-1,64,46,63,-1,65,48,47,-1,65,47,64,-1,66,49,48,-1,66,48,65,-1,67,50,49,-1,67,49,66,-1,69,52,51,-1,69,51,68,-1,70,53,52,-1,70,52,69,-1,71,54,53,-1,71,53,70,-1,72,55,54,-1,72,54,71,-1,73,56,55,-1,73,55,72,-1,74,57,56,-1,74,56,73,-1,75,58,57,-1,75,57,74,-1,76,59,58,-1,76,58,75,-1,77,60,59,-1,77,59,76,-1,78,61,60,-1,78,60,77,-1,79,62,61,-1,79,61,78,-1,80,63,62,-1,80,62,79,-1,81,64,63,-1,81,63,80,-1,82,65,64,-1,82,64,81,-1,83,66,65,-1,83,65,82,-1,84,67,66,-1,84,66,83,-1,86,69,68,-1,86,68,85,-1,87,70,69,-1,87,69,86,-1,88,71,70,-1,88,70,87,-1,89,72,71,-1,89,71,88,-1,90,73,72,-1,90,72,89,-1,91,74,73,-1,91,73,90,-1,92,75,74,-1,92,74,91,-1,93,76,75,-1,93,75,92,-1,94,77,76,-1,94,76,93,-1,95,78,77,-1,95,77,94,-1,96,79,78,-1,96,78,95,-1,97,80,79,-1,97,79,96,-1,98,81,80,-1,98,80,97,-1,99,82,81,-1,99,81,98,-1,100,83,82,-1,100,82,99,-1,101,84,83,-1,101,83,100,-1,103,86,85,-1,103,85,102,-1,104,87,86,-1,104,86,103,-1,105,88,87,-1,105,87,104,-1,106,89,88,-1,106,88,105,-1,107,90,89,-1,107,89,106,-1,108,91,90,-1,108,90,107,-1,109,92,91,-1,109,91,108,-1,110,93,92,-1,110,92,109,-1,111,94,93,-1,111,93,110,-1,112,95,94,-1,112,94,111,-1,113,96,95,-1,113,95,112,-1,114,97,96,-1,114,96,113,-1,115,98,97,-1,115,97,114,-1,116,99,98,-1,116,98,115,-1,117,100,99,-1,117,99,116,-1,118,101,100,-1,118,100,117,-1,120,103,102,-1,120,102,119,-1,121,104,103,-1,121,103,120,-1,122,105,104,-1,122,104,121,-1,123,106,105,-1,123,105,122,-1,124,107,106,-1,124,106,123,-1,125,108,107,-1,125,107,124,-1,126,109,108,-1,126,108,125,-1,127,110,109,-1,127,109,126,-1,128,111,110,-1,128,110,127,-1,129,112,111,-1,129,111,128,-1,130,113,112,-1,130,112,129,-1,131,114,113,-1,131,113,130,-1,132,115,114,-1,132,114,131,-1,133,116,115,-1,133,115,132,-1,134,117,116,-1,134,116,133,-1};
			return value;
		}
		private int[] getIndexedFaceSet_6_29_coordIndex_2()
		{
			int[] value = {135,118,117,-1,135,117,134,-1,137,120,119,-1,137,119,136,-1,138,121,120,-1,138,120,137,-1,139,122,121,-1,139,121,138,-1,140,123,122,-1,140,122,139,-1,141,124,123,-1,141,123,140,-1,142,125,124,-1,142,124,141,-1,143,126,125,-1,143,125,142,-1,144,127,126,-1,144,126,143,-1,145,128,127,-1,145,127,144,-1,146,129,128,-1,146,128,145,-1,147,130,129,-1,147,129,146,-1,148,131,130,-1,148,130,147,-1,149,132,131,-1,149,131,148,-1,150,133,132,-1,150,132,149,-1,151,134,133,-1,151,133,150,-1,152,135,134,-1,152,134,151,-1,154,137,136,-1,154,136,153,-1,155,138,137,-1,155,137,154,-1,156,139,138,-1,156,138,155,-1,157,140,139,-1,157,139,156,-1,158,141,140,-1,158,140,157,-1,159,142,141,-1,159,141,158,-1,160,143,142,-1,160,142,159,-1,161,144,143,-1,161,143,160,-1,162,145,144,-1,162,144,161,-1,163,146,145,-1,163,145,162,-1,164,147,146,-1,164,146,163,-1,165,148,147,-1,165,147,164,-1,166,149,148,-1,166,148,165,-1,167,150,149,-1,167,149,166,-1,168,151,150,-1,168,150,167,-1,169,152,151,-1,169,151,168,-1,171,154,153,-1,171,153,170,-1,172,155,154,-1,172,154,171,-1,173,156,155,-1,173,155,172,-1,174,157,156,-1,174,156,173,-1,175,158,157,-1,175,157,174,-1,176,159,158,-1,176,158,175,-1,177,160,159,-1,177,159,176,-1,178,161,160,-1,178,160,177,-1,179,162,161,-1,179,161,178,-1,180,163,162,-1,180,162,179,-1,181,164,163,-1,181,163,180,-1,182,165,164,-1,182,164,181,-1,183,166,165,-1,183,165,182,-1,184,167,166,-1,184,166,183,-1,185,168,167,-1,185,167,184,-1,186,169,168,-1,186,168,185,-1,188,171,170,-1,188,170,187,-1,189,172,171,-1,189,171,188,-1,190,173,172,-1,190,172,189,-1,191,174,173,-1,191,173,190,-1,192,175,174,-1,192,174,191,-1,193,176,175,-1,193,175,192,-1,194,177,176,-1,194,176,193,-1,195,178,177,-1,195,177,194,-1,196,179,178,-1,196,178,195,-1,197,180,179,-1,197,179,196,-1,198,181,180,-1,198,180,197,-1,199,182,181,-1,199,181,198,-1,200,183,182,-1,200,182,199,-1,201,184,183,-1,201,183,200,-1,202,185,184,-1,202,184,201,-1,203,186,185,-1,203,185,202,-1,205,188,187,-1,205,187,204,-1,206,189,188,-1,206,188,205,-1,207,190,189,-1,207,189,206,-1,208,191,190,-1,208,190,207,-1,209,192,191,-1,209,191,208,-1,210,193,192,-1,210,192,209,-1,211,194,193,-1,211,193,210,-1,212,195,194,-1,212,194,211,-1,213,196,195,-1,213,195,212,-1,214,197,196,-1,214,196,213,-1,215,198,197,-1,215,197,214,-1,216,199,198,-1,216,198,215,-1,217,200,199,-1,217,199,216,-1,218,201,200,-1,218,200,217,-1,219,202,201,-1,219,201,218,-1,220,203,202,-1,220,202,219,-1,256,222,205,-1,204,221,256,-1,205,204,256,-1,223,206,205,-1,223,205,222,-1,260,224,207,-1,206,223,260,-1,207,206,260,-1,264,225,208,-1,207,224,264,-1,208,207,264,-1,267,226,209,-1,208,225,267,-1,209,208,267,-1,227,210,209,-1,227,209,226,-1,270,228,211,-1,210,227,270,-1,211,210,270,-1,274,229,212,-1,211,228,274,-1,212,211,274,-1,277,230,213,-1,212,229,277,-1,213,212,277,-1,231,214,213,-1,231,213,230,-1,280,232,215,-1,214,231,280,-1,215,214,280,-1,284,233,216,-1,215,232,284,-1,216,215,284,-1,287,234,217,-1,216,233,287,-1,217,216,287,-1,235,218,217,-1,235,217,234,-1,290,236,219,-1,218,235,290,-1,219,218,290,-1,294,237,220,-1,219,236,294,-1,220,219,294,-1,255,222,256,-1,255,256,258,-1,258,256,221,-1,258,221,257,-1,259,224,260,-1,259,260,262,-1,262,260,223,-1,262,223,261,-1,263,225,264,-1,263,264,265,-1,265,264,224,-1,265,224,259,-1,266,226,267,-1,266,267,268,-1,268,267,225,-1,268,225,263,-1,269,228,270,-1,269,270,272,-1,272,270,227,-1,272,227,271,-1,273,229,274,-1,273,274,275,-1,275,274,228,-1,275,228,269,-1,276,230,277,-1,276,277,278,-1,278,277,229,-1,278,229,273,-1,279,232,280,-1,279,280,282,-1,282,280,231,-1,282,231,281,-1,283,233,284,-1,283,284,285,-1,285,284,232,-1,285,232,279,-1,286,234,287,-1,286,287,288,-1,288,287,233,-1,288,233,283,-1,289,236,290,-1,289,290,292,-1,292,290,235,-1,292,235,291,-1};
			return value;
		}
		private int[] getIndexedFaceSet_6_29_coordIndex_3()
		{
			int[] value = {293,237,294,-1,293,294,295,-1,295,294,236,-1,295,236,289,-1,336,1,0,-1,2,1,334,-1,2,334,331,-1,0,335,336,-1,1,336,334,-1,4,3,329,-1,4,329,325,-1,4,326,5,-1,7,6,321,-1,7,321,322,-1,6,5,324,-1,6,324,321,-1,8,7,318,-1,8,318,319,-1,2,331,332,-1,3,2,332,-1,3,332,328,-1,331,334,18,-1,331,18,19,-1,3,328,329,-1,4,325,326,-1,321,324,22,-1,321,22,23,-1,7,322,318,-1,5,326,324,-1,315,8,319,-1,10,9,314,-1,10,314,311,-1,315,316,8,-1,316,9,8,-1,9,316,314,-1,311,314,26,-1,311,26,27,-1,312,10,311,-1,11,309,12,-1,12,306,13,-1,15,14,301,-1,15,301,302,-1,14,13,304,-1,14,304,301,-1,15,299,16,-1,312,308,11,-1,312,11,10,-1,11,308,309,-1,12,309,305,-1,13,306,304,-1,12,305,306,-1,15,302,298,-1,16,299,297,-1,30,31,301,-1,30,301,304,-1,15,298,299,-1,223,222,255,-1,223,255,261,-1,239,255,258,-1,261,255,239,-1,261,239,240,-1,258,257,238,-1,227,226,266,-1,227,266,271,-1,241,265,259,-1,242,268,263,-1,263,265,242,-1,259,262,241,-1,262,261,240,-1,238,239,258,-1,262,240,241,-1,241,242,265,-1,268,243,266,-1,242,243,268,-1,243,244,271,-1,243,271,266,-1,244,272,271,-1,245,269,272,-1,269,245,275,-1,275,246,273,-1,246,275,245,-1,244,245,272,-1,231,230,276,-1,231,276,281,-1,281,276,247,-1,281,247,248,-1,248,282,281,-1,276,278,247,-1,235,234,286,-1,235,286,291,-1,250,283,285,-1,251,286,288,-1,288,283,250,-1,285,279,249,-1,279,282,249,-1,246,247,278,-1,246,278,273,-1,282,248,249,-1,249,250,285,-1,291,286,251,-1,291,251,252,-1,250,251,288,-1,253,289,292,-1,253,295,289,-1,253,254,295,-1,254,293,295,-1,252,253,292,-1,252,292,291,-1,346,345,344,-1,347,346,344,-1,347,341,340,-1,343,347,344,-1,342,347,343,-1,342,341,347,-1,340,348,347,-1,351,350,349,-1,351,348,339,-1,352,351,338,-1,340,339,348,-1,351,339,338,-1,352,338,337,-1,349,348,351,-1,364,362,363,-1,367,358,362,-1,362,364,367,-1,360,361,362,-1,362,359,360,-1,362,358,359,-1,366,364,365,-1,358,367,355,-1,354,367,368,-1,368,353,354,-1,357,358,356,-1,356,358,355,-1,355,367,354,-1,367,364,366,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_6_29_texCoordIndex_1()
		{
			int[] value = {18,334,336,-1,18,336,333,-1,333,336,335,-1,333,335,17,-1,20,328,332,-1,20,332,330,-1,330,332,331,-1,330,331,19,-1,21,325,329,-1,21,329,327,-1,327,329,328,-1,327,328,20,-1,22,324,326,-1,22,326,323,-1,323,326,325,-1,323,325,21,-1,24,318,322,-1,24,322,320,-1,320,322,321,-1,320,321,23,-1,25,315,319,-1,25,319,317,-1,317,319,318,-1,317,318,24,-1,26,314,316,-1,26,316,313,-1,313,316,315,-1,313,315,25,-1,28,308,312,-1,28,312,310,-1,310,312,311,-1,310,311,27,-1,29,305,309,-1,29,309,307,-1,307,309,308,-1,307,308,28,-1,30,304,306,-1,30,306,303,-1,303,306,305,-1,303,305,29,-1,32,298,302,-1,32,302,300,-1,300,302,301,-1,300,301,31,-1,33,297,299,-1,33,299,296,-1,296,299,298,-1,296,298,32,-1,333,17,34,-1,35,18,333,-1,34,35,333,-1,36,19,18,-1,36,18,35,-1,330,19,36,-1,37,20,330,-1,36,37,330,-1,327,20,37,-1,38,21,327,-1,37,38,327,-1,323,21,38,-1,39,22,323,-1,38,39,323,-1,40,23,22,-1,40,22,39,-1,320,23,40,-1,41,24,320,-1,40,41,320,-1,317,24,41,-1,42,25,317,-1,41,42,317,-1,313,25,42,-1,43,26,313,-1,42,43,313,-1,44,27,26,-1,44,26,43,-1,310,27,44,-1,45,28,310,-1,44,45,310,-1,307,28,45,-1,46,29,307,-1,45,46,307,-1,303,29,46,-1,47,30,303,-1,46,47,303,-1,48,31,30,-1,48,30,47,-1,300,31,48,-1,49,32,300,-1,48,49,300,-1,296,32,49,-1,50,33,296,-1,49,50,296,-1,52,35,34,-1,52,34,51,-1,53,36,35,-1,53,35,52,-1,54,37,36,-1,54,36,53,-1,55,38,37,-1,55,37,54,-1,56,39,38,-1,56,38,55,-1,57,40,39,-1,57,39,56,-1,58,41,40,-1,58,40,57,-1,59,42,41,-1,59,41,58,-1,60,43,42,-1,60,42,59,-1,61,44,43,-1,61,43,60,-1,62,45,44,-1,62,44,61,-1,63,46,45,-1,63,45,62,-1,64,47,46,-1,64,46,63,-1,65,48,47,-1,65,47,64,-1,66,49,48,-1,66,48,65,-1,67,50,49,-1,67,49,66,-1,69,52,51,-1,69,51,68,-1,70,53,52,-1,70,52,69,-1,71,54,53,-1,71,53,70,-1,72,55,54,-1,72,54,71,-1,73,56,55,-1,73,55,72,-1,74,57,56,-1,74,56,73,-1,75,58,57,-1,75,57,74,-1,76,59,58,-1,76,58,75,-1,77,60,59,-1,77,59,76,-1,78,61,60,-1,78,60,77,-1,79,62,61,-1,79,61,78,-1,80,63,62,-1,80,62,79,-1,81,64,63,-1,81,63,80,-1,82,65,64,-1,82,64,81,-1,83,66,65,-1,83,65,82,-1,84,67,66,-1,84,66,83,-1,86,69,68,-1,86,68,85,-1,87,70,69,-1,87,69,86,-1,88,71,70,-1,88,70,87,-1,89,72,71,-1,89,71,88,-1,90,73,72,-1,90,72,89,-1,91,74,73,-1,91,73,90,-1,92,75,74,-1,92,74,91,-1,93,76,75,-1,93,75,92,-1,94,77,76,-1,94,76,93,-1,95,78,77,-1,95,77,94,-1,96,79,78,-1,96,78,95,-1,97,80,79,-1,97,79,96,-1,98,81,80,-1,98,80,97,-1,99,82,81,-1,99,81,98,-1,100,83,82,-1,100,82,99,-1,101,84,83,-1,101,83,100,-1,103,86,85,-1,103,85,102,-1,104,87,86,-1,104,86,103,-1,105,88,87,-1,105,87,104,-1,106,89,88,-1,106,88,105,-1,107,90,89,-1,107,89,106,-1,108,91,90,-1,108,90,107,-1,109,92,91,-1,109,91,108,-1,110,93,92,-1,110,92,109,-1,111,94,93,-1,111,93,110,-1,112,95,94,-1,112,94,111,-1,113,96,95,-1,113,95,112,-1,114,97,96,-1,114,96,113,-1,115,98,97,-1,115,97,114,-1,116,99,98,-1,116,98,115,-1,117,100,99,-1,117,99,116,-1,118,101,100,-1,118,100,117,-1,120,103,102,-1,120,102,119,-1,121,104,103,-1,121,103,120,-1,122,105,104,-1,122,104,121,-1,123,106,105,-1,123,105,122,-1,124,107,106,-1,124,106,123,-1,125,108,107,-1,125,107,124,-1,126,109,108,-1,126,108,125,-1,127,110,109,-1,127,109,126,-1,128,111,110,-1,128,110,127,-1,129,112,111,-1,129,111,128,-1,130,113,112,-1,130,112,129,-1,131,114,113,-1,131,113,130,-1,132,115,114,-1,132,114,131,-1,133,116,115,-1,133,115,132,-1,134,117,116,-1,134,116,133,-1};
			return value;
		}
		private int[] getIndexedFaceSet_6_29_texCoordIndex_2()
		{
			int[] value = {135,118,117,-1,135,117,134,-1,137,120,119,-1,137,119,136,-1,138,121,120,-1,138,120,137,-1,139,122,121,-1,139,121,138,-1,140,123,122,-1,140,122,139,-1,141,124,123,-1,141,123,140,-1,142,125,124,-1,142,124,141,-1,143,126,125,-1,143,125,142,-1,144,127,126,-1,144,126,143,-1,145,128,127,-1,145,127,144,-1,146,129,128,-1,146,128,145,-1,147,130,129,-1,147,129,146,-1,148,131,130,-1,148,130,147,-1,149,132,131,-1,149,131,148,-1,150,133,132,-1,150,132,149,-1,151,134,133,-1,151,133,150,-1,152,135,134,-1,152,134,151,-1,154,137,136,-1,154,136,153,-1,155,138,137,-1,155,137,154,-1,156,139,138,-1,156,138,155,-1,157,140,139,-1,157,139,156,-1,158,141,140,-1,158,140,157,-1,159,142,141,-1,159,141,158,-1,160,143,142,-1,160,142,159,-1,161,144,143,-1,161,143,160,-1,162,145,144,-1,162,144,161,-1,163,146,145,-1,163,145,162,-1,164,147,146,-1,164,146,163,-1,165,148,147,-1,165,147,164,-1,166,149,148,-1,166,148,165,-1,167,150,149,-1,167,149,166,-1,168,151,150,-1,168,150,167,-1,169,152,151,-1,169,151,168,-1,171,154,153,-1,171,153,170,-1,172,155,154,-1,172,154,171,-1,173,156,155,-1,173,155,172,-1,174,157,156,-1,174,156,173,-1,175,158,157,-1,175,157,174,-1,176,159,158,-1,176,158,175,-1,177,160,159,-1,177,159,176,-1,178,161,160,-1,178,160,177,-1,179,162,161,-1,179,161,178,-1,180,163,162,-1,180,162,179,-1,181,164,163,-1,181,163,180,-1,182,165,164,-1,182,164,181,-1,183,166,165,-1,183,165,182,-1,184,167,166,-1,184,166,183,-1,185,168,167,-1,185,167,184,-1,186,169,168,-1,186,168,185,-1,188,171,170,-1,188,170,187,-1,189,172,171,-1,189,171,188,-1,190,173,172,-1,190,172,189,-1,191,174,173,-1,191,173,190,-1,192,175,174,-1,192,174,191,-1,193,176,175,-1,193,175,192,-1,194,177,176,-1,194,176,193,-1,195,178,177,-1,195,177,194,-1,196,179,178,-1,196,178,195,-1,197,180,179,-1,197,179,196,-1,198,181,180,-1,198,180,197,-1,199,182,181,-1,199,181,198,-1,200,183,182,-1,200,182,199,-1,201,184,183,-1,201,183,200,-1,202,185,184,-1,202,184,201,-1,203,186,185,-1,203,185,202,-1,205,188,187,-1,205,187,204,-1,206,189,188,-1,206,188,205,-1,207,190,189,-1,207,189,206,-1,208,191,190,-1,208,190,207,-1,209,192,191,-1,209,191,208,-1,210,193,192,-1,210,192,209,-1,211,194,193,-1,211,193,210,-1,212,195,194,-1,212,194,211,-1,213,196,195,-1,213,195,212,-1,214,197,196,-1,214,196,213,-1,215,198,197,-1,215,197,214,-1,216,199,198,-1,216,198,215,-1,217,200,199,-1,217,199,216,-1,218,201,200,-1,218,200,217,-1,219,202,201,-1,219,201,218,-1,220,203,202,-1,220,202,219,-1,256,222,205,-1,204,221,256,-1,205,204,256,-1,223,206,205,-1,223,205,222,-1,260,224,207,-1,206,223,260,-1,207,206,260,-1,264,225,208,-1,207,224,264,-1,208,207,264,-1,267,226,209,-1,208,225,267,-1,209,208,267,-1,227,210,209,-1,227,209,226,-1,270,228,211,-1,210,227,270,-1,211,210,270,-1,274,229,212,-1,211,228,274,-1,212,211,274,-1,277,230,213,-1,212,229,277,-1,213,212,277,-1,231,214,213,-1,231,213,230,-1,280,232,215,-1,214,231,280,-1,215,214,280,-1,284,233,216,-1,215,232,284,-1,216,215,284,-1,287,234,217,-1,216,233,287,-1,217,216,287,-1,235,218,217,-1,235,217,234,-1,290,236,219,-1,218,235,290,-1,219,218,290,-1,294,237,220,-1,219,236,294,-1,220,219,294,-1,255,222,256,-1,255,256,258,-1,258,256,221,-1,258,221,257,-1,259,224,260,-1,259,260,262,-1,262,260,223,-1,262,223,261,-1,263,225,264,-1,263,264,265,-1,265,264,224,-1,265,224,259,-1,266,226,267,-1,266,267,268,-1,268,267,225,-1,268,225,263,-1,269,228,270,-1,269,270,272,-1,272,270,227,-1,272,227,271,-1,273,229,274,-1,273,274,275,-1,275,274,228,-1,275,228,269,-1,276,230,277,-1,276,277,278,-1,278,277,229,-1,278,229,273,-1,279,232,280,-1,279,280,282,-1,282,280,231,-1,282,231,281,-1,283,233,284,-1,283,284,285,-1,285,284,232,-1,285,232,279,-1,286,234,287,-1,286,287,288,-1,288,287,233,-1,288,233,283,-1,289,236,290,-1,289,290,292,-1,292,290,235,-1,292,235,291,-1};
			return value;
		}
		private int[] getIndexedFaceSet_6_29_texCoordIndex_3()
		{
			int[] value = {293,237,294,-1,293,294,295,-1,295,294,236,-1,295,236,289,-1,336,1,0,-1,2,1,334,-1,2,334,331,-1,0,335,336,-1,1,336,334,-1,4,3,329,-1,4,329,325,-1,4,326,5,-1,7,6,321,-1,7,321,322,-1,6,5,324,-1,6,324,321,-1,8,7,318,-1,8,318,319,-1,2,331,332,-1,3,2,332,-1,3,332,328,-1,331,334,18,-1,331,18,19,-1,3,328,329,-1,4,325,326,-1,321,324,22,-1,321,22,23,-1,7,322,318,-1,5,326,324,-1,315,8,319,-1,10,9,314,-1,10,314,311,-1,315,316,8,-1,316,9,8,-1,9,316,314,-1,311,314,26,-1,311,26,27,-1,312,10,311,-1,11,309,12,-1,12,306,13,-1,15,14,301,-1,15,301,302,-1,14,13,304,-1,14,304,301,-1,15,299,16,-1,312,308,11,-1,312,11,10,-1,11,308,309,-1,12,309,305,-1,13,306,304,-1,12,305,306,-1,15,302,298,-1,16,299,297,-1,30,31,301,-1,30,301,304,-1,15,298,299,-1,223,222,255,-1,223,255,261,-1,239,255,258,-1,261,255,239,-1,261,239,240,-1,258,257,238,-1,227,226,266,-1,227,266,271,-1,241,265,259,-1,242,268,263,-1,263,265,242,-1,259,262,241,-1,262,261,240,-1,238,239,258,-1,262,240,241,-1,241,242,265,-1,268,243,266,-1,242,243,268,-1,243,244,271,-1,243,271,266,-1,244,272,271,-1,245,269,272,-1,269,245,275,-1,275,246,273,-1,246,275,245,-1,244,245,272,-1,231,230,276,-1,231,276,281,-1,281,276,247,-1,281,247,248,-1,248,282,281,-1,276,278,247,-1,235,234,286,-1,235,286,291,-1,250,283,285,-1,251,286,288,-1,288,283,250,-1,285,279,249,-1,279,282,249,-1,246,247,278,-1,246,278,273,-1,282,248,249,-1,249,250,285,-1,291,286,251,-1,291,251,252,-1,250,251,288,-1,253,289,292,-1,253,295,289,-1,253,254,295,-1,254,293,295,-1,252,253,292,-1,252,292,291,-1,346,345,344,-1,347,346,344,-1,347,341,340,-1,343,347,344,-1,342,347,343,-1,342,341,347,-1,340,348,347,-1,351,350,349,-1,351,348,339,-1,352,351,338,-1,340,339,348,-1,351,339,338,-1,352,338,337,-1,349,348,351,-1,364,362,363,-1,367,358,362,-1,362,364,367,-1,360,361,362,-1,362,359,360,-1,362,358,359,-1,366,364,365,-1,358,367,355,-1,354,367,368,-1,368,353,354,-1,357,358,356,-1,356,358,355,-1,355,367,354,-1,367,364,366,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getCoordinate_7_29_point_1()
		{
			double[] value = {0.0,-.002022875,-.007740024,-.00301528,-.002240038,-.007063307,-.005670327,-.002109013,-.005234449,-.007394051,-.001639661,-.002576728,-.007936819,-.00097084,.000253732,-.007341742,-.000129539,.003175223,-.005553421,.000765909,.005707268,-.002884633,.001531687,.007302933,-0.0,.002022875,.007740024,.00301528,.002240038,.007063307,.005670327,.002109013,.005234449,.007394051,.001639661,.002576728,.007936819,.00097084,-.000253732,.007341742,.000129539,-.003175223,.005553421,-.000765909,-.005707268,.002884633,-.001531687,-.007302933,0.0,-.002022875,-.007740024,.002086147,-.019207476,-.003567731,-.000932817,-.019394293,-.002898382,-.003585642,-.019281577,-.001065078,-.005301403,-.018877812,.001608567,-.005832826,-.018302452,.004461718,-.005223477,-.017578712,.007411753,-.003419966,-.016808392,.009974177,-.000738188,-.016149623,.011595823,.002154778,-.015727073,.012049579,.005173741,-.015540255,.01138023,.007826566,-.015652971,.009546926,.009542327,-.016056737,.006873282,.010073749,-.016632097,.004020131,.009464402,-.017355837,.001070096,.00766089,-.018126156,-.001492329,.004979112,-.018784925,-.003113975,.002086147,-.019207476,-.003567731,.003851785,-.036571439,-.000036454,.000829703,-.036727596,.000626659,-.00182124,-.03663338,.002463726,-.003530263,-.036295883,.005150847,-.004052083,-.03581496,.008023203,-.003430655,-.03521001,.010997397,-.001614287,-.034566123,.013585534,.001078485,-.034015477,.015229169,.003978502,-.033662282,.01569703,.007000585,-.033506129,.015033917,.009651528,-.033600342,.013196849,.01136055,-.033937838,.010509728,.01188237,-.034418765,.007637372,.011260943,-.035023715,.004663179,.009444575,-.035667598,.002075042,.006751802,-.036218245,.000431406,.003851785,-.036571439,-.000036454,.0052964,-.054081611,.002852776,.002271767,-.054206844,.003510787,-.000377637,-.054131284,.005350932,-.002081146,-.05386062,.008049081,-.002595109,-.053474922,.010937151,-.001963799,-.052989762,.013931109,-.000136912,-.052473374,.016540283,.002564856,-.052031767,.01820191,.005470643,-.05174851,.01868131,.008495276,-.051623274,.018023299,.01114468,-.051698834,.016183155,.012848189,-.051969498,.013485006,.013362153,-.052355196,.010596937,.012730842,-.052840356,.007602978,.010903956,-.053356744,.004993803,.008202188,-.053798351,.003332177,.0052964,-.054081611,.002852776,.006419992,-.071708746,.00509996,.003393375,-.071802855,.005754003,.000745168,-.071746074,.007596542,-.000954053,-.07154268,.010303267,-.001461905,-.071252853,.013203559,-.000822909,-.070888281,.01621289,.00101216,-.070500247,.018838428,.003720924,-.070168406,.020514047,.0066312,-.06995555,.021002423,.009657817,-.069861442,.020348381,.012306023,-.069918223,.018505841,.014005245,-.070121609,.015799116,.014513097,-.070411444,.012898825,.013874101,-.070776016,.009889493,.012039032,-.071164049,.007263956,.009330267,-.071495891,.005588336,.006419992,-.071708746,.00509996,.007222552,-.089423381,.00670508,.004194518,-.089486204,.007356288,.001547166,-.089448296,.009200538,-.000148992,-.089312516,.011913389,-.00065248,-.089119032,.014822409,-.000007993,-.088875644,.017842721,.001832919,-.088616595,.020479947,.004546682,-.088395059,.022165561,.007460163,-.088252962,.022660349,.010488196,-.088190138,.02200914,.013135549,-.088228047,.020164892,.014831707,-.088363826,.017452041,.015335194,-.08855731,.014543019,.014690707,-.088800699,.011522707,.012849795,-.089059748,.008885481};
			return value;
		}
		private double[] getCoordinate_7_29_point_2()
		{
			double[] value = {.010136032,-.089281276,.007199867,.007222552,-.089423381,.00670508,.007704094,-.107196376,.007668164,.00467521,-.107227817,.008317672,.002028371,-.107208848,.010162948,.000334051,-.107140899,.012879474,-.000166818,-.107044071,.015793733,.000480963,-.106922276,.018820634,.002325381,-.106792636,.021464871,.005042143,-.106681772,.023156483,.007957546,-.106610663,.023655117,.010986432,-.106579222,.02300561,.01363327,-.106598191,.021160334,.01532759,-.10666614,.018443808,.015828459,-.106762968,.015529549,.015180677,-.106884763,.012502648,.013336259,-.107014403,.00985841,.010619498,-.107125267,.008166798,.007704094,-.107196376,.007668164,.007864625,-.124998614,.007989226,.004835457,-.124998622,.008638166,.002188789,-.124998614,.010483784,.000495082,-.124998614,.013201537,-.000004914,-.124998607,.016117541,.000643965,-.124998592,.019146638,.002489553,-.124998584,.021793215,.005207313,-.124998577,.023486825,.008123359,-.124998569,.023986742,.011152526,-.124998569,.0233378,.013799194,-.124998569,.021492183,.015492902,-.124998577,.018774431,.015992897,-.124998584,.015858427,.015344018,-.124998592,.012829329,.013498431,-.124998599,.010182753,.01078067,-.124998614,.008489142,.007864625,-.124998614,.007989226,.007704144,-.142800868,.007668264,.004675259,-.142769426,.008317771,.002028421,-.142788395,.010163046,.000334101,-.14285633,.012879575,-.000166768,-.142953143,.015793834,.000481014,-.14307493,.018820735,.002325432,-.14320454,.021464974,.005042194,-.14331539,.023156585,.007957598,-.143386483,.023655221,.010986483,-.143417925,.023005713,.013633322,-.143398955,.021160437,.015327642,-.143331021,.01844391,.015828509,-.143234208,.015529651,.015180728,-.143112421,.012502749,.013336309,-.142982811,.00985851,.010619548,-.142871961,.008166898,.007704144,-.142800868,.007668264,.007222651,-.160573885,.006705278,.004194617,-.160511062,.007356486,.001547265,-.16054897,.009200736,-.000148893,-.160684735,.011913588,-.00065238,-.160878211,.01482261,-.000007892,-.161121577,.017842924,.001833021,-.161380604,.02048015,.004546784,-.161602125,.022165766,.007460265,-.161744207,.022660553,.0104883,-.16180703,.022009347,.013135651,-.161769122,.020165097,.014831808,-.161633357,.017452244,.015335295,-.161439881,.014543222,.014690808,-.161196515,.011522909,.012849895,-.160937488,.008885682,.010136132,-.160715967,.007200066,.007222651,-.160573885,.006705278,.006420146,-.17828843,.005100268,.003393529,-.178194329,.00575431,.000745322,-.178251103,.00759685,-.000953898,-.178454474,.010303576,-.00146175,-.178744286,.013203869,-.000822752,-.179108843,.016213203,.001012317,-.179496855,.018838743,.003721083,-.179828689,.020514365,.006631359,-.180041537,.021002742,.009657976,-.180135638,.0203487,.012306183,-.180078849,.01850616,.014005403,-.179875478,.015799433,.014513255,-.179585665,.012899141,.013874257,-.179221109,.009889807,.012039188,-.178833097,.007264267,.009330422,-.178501263,.005588646,.006420146,-.17828843,.005100268,.005296629,-.195915267,.002853233,.002271995,-.195790038,.003511244,-.000377408,-.195865586,.005351389,-.002080917,-.196136236,.008049539,-.002594879,-.196521923,.010937612,-.001963567,-.19700706,.013931573,-.000136679,-.19752343,.016540751,.002565091,-.197965011,.018202381,.005470879,-.198248267,.018681783,.008495512,-.198373482,.018023772,.011144917,-.198297933,.016183628,.012848425,-.198027283,.013485477,.013362387,-.197641596,.010597405};
			return value;
		}
		private double[] getCoordinate_7_29_point_3()
		{
			double[] value = {.012731075,-.197156459,.007603443,.010904186,-.196640089,.004994265,.008202417,-.196198508,.003332636,.005296629,-.195915267,.002853233,.003852099,-.213425145,-.000035827,.000830016,-.213268995,.000627285,-.001820927,-.213363215,.002464353,-.003529948,-.213700697,.005151477,-.004051766,-.214181602,.008023837,-.003430337,-.21478653,.010998034,-.001613967,-.215430394,.013586176,.001078808,-.215981007,.015229815,.003978827,-.216334194,.015697679,.007000909,-.216490343,.015034566,.009651852,-.216396138,.013197498,.011360873,-.216058657,.010510374,.011882692,-.215577736,.007638014,.011261262,-.214972809,.004663817,.009444892,-.21432896,.002075676,.006752118,-.213778332,.000432036,.003852099,-.213425145,-.000035827,.002086556,-.230788857,-.003566912,-.000932409,-.230602041,-.002897565,-.003585233,-.230714753,-.00106426,-.005300993,-.2311185,.001609388,-.005832413,-.231693849,.004462543,-.005223062,-.232417554,.007412584,-.003419547,-.233187854,.009975014,-.000737766,-.233846605,.011596666,.0021552,-.234269127,.012050425,.005174165,-.234455943,.011381078,.007826989,-.234343231,.009547772,.009542749,-.233939484,.006874125,.010074169,-.233364135,.004020969,.009464818,-.23264043,.001070929,.007661304,-.23187013,-.001491502,.004979522,-.231211379,-.003113153,.002086556,-.230788857,-.003566912,-0.0,-.247977123,-.007740024,-.00301528,-.247759968,-.007063307,-.005670327,-.247890994,-.005234449,-.007394051,-.248360336,-.002576728,-.007936819,-.24902916,.000253732,-.007341742,-.249870464,.003175223,-.005553421,-.25076592,.005707268,-.002884633,-.25153169,.007302933,-0.0,-.252022862,.007740024,.00301528,-.252240032,.007063307,.005670327,-.252109021,.005234449,.007394051,-.251639664,.002576728,.007936819,-.25097084,-.000253732,.007341742,-.250129551,-.003175223,.005553421,-.249234095,-.005707268,.002884633,-.24846831,-.007302933,-0.0,-.247977123,-.007740024,-.001933789,-.23920472,-.004900325,.000592624,-.230662912,-.003386314,.001083405,-.23940675,-.005573215,-.000409333,-.239270553,-.005390228,-.00630727,-.239763245,-.000403167,-.004587974,-.230885521,.000205124,-.004587681,-.239326611,-.003069157,-.005592042,-.239511296,-.001803013,-.006844146,-.240385458,.002439077,-.005709214,-.231394842,.003056294,-.006718112,-.240062103,.001038499,-.006241657,-.241168126,.005375393,-.005684278,-.232035726,.005925977,-.006699252,-.240755185,.003896027,-.001769913,-.242713585,.009532372,-.002150809,-.233541206,.010929779,-.004445447,-.242001176,.007923215,-.00318006,-.242383316,.008871278,.001119047,-.243170545,.009978118,.000726006,-.23409082,.011963073,-.000308457,-.242977694,.009894148,.00413624,-.243372574,.009305228,.003649132,-.234395072,.011869826,.002611784,-.243306741,.009795131,.008509722,-.242814034,.00480807,.008829731,-.234172463,.008278389,.006790133,-.243250683,.00747406,.007794494,-.243065983,.006207915,.009046597,-.242191821,.001965826,.00995097,-.233663127,.005427219,.008920563,-.242515177,.003366404,.008444109,-.241409153,-.00097049,.009926034,-.233022258,.002557536,.008901704,-.241822094,.000508876,.003972365,-.239863694,-.005127469,.006392566,-.231516778,-.002446267,.006647899,-.240576103,-.003518311,.005382512,-.240193963,-.004466374,.001083405,-.23940675,-.005573215,.00351575,-.230967164,-.003479561,.002510908,-.239599586,-.005489245,.00351534,-.01902915,-.003480381,.001083183,-.010591429,-.005573659,.003972142,-.010134464,-.005127915,.002510686,-.010398579,-.00548969};
			return value;
		}
		private double[] getCoordinate_7_29_point_4()
		{
			double[] value = {.006392153,-.018479526,-.002447091,.006647674,-.009422042,-.00351876,.005382288,-.009804192,-.004466821,.009925616,-.016973987,.0025567,.008443884,-.008588986,-.000970941,.00904637,-.007806303,.001965371,.008901478,-.008176036,.000508423,.00995055,-.016333092,.005426378,.008509493,-.007184084,.004807613,.008920335,-.007482947,.003365949,.008829308,-.015823752,.008277544,.006789904,-.006747434,.007473601,.007794265,-.006932123,.006207458,.003648709,-.015601132,.01186898,.004136011,-.006625538,.009304768,.001118818,-.00682757,.00997766,.002611555,-.006691372,.009794673,.000725584,-.015905399,.011962229,-.001770141,-.007284535,.009531916,-.000308685,-.007020421,.00989369,-.002151229,-.016455023,.010928939,-.004445674,-.007996957,.00792276,-.003180288,-.007614807,.008870822,-.005684691,-.017960563,.005925148,-.006241883,-.008830013,.005374942,-.00684437,-.009612695,.00243863,-.006699477,-.009242963,.003895578,-.005709626,-.018601457,.003055471,-.006307492,-.010234916,-.000403612,-.006718335,-.009936052,.001038052,-.004588384,-.019110799,.000204304,-.004587903,-.010671565,-.0030696,-.005592264,-.010486877,-.001803457,.000592215,-.019333418,-.003387132,-.00193401,-.010793461,-.004900767,.001083183,-.010591429,-.005573659,-.000409554,-.010727626,-.005390672,0.0,-.002022875,-.007740024,.002884633,-.001531687,-.007302933,.005553421,-.000765909,-.005707268,.007341742,.000129539,-.003175223,.007936819,.00097084,-.000253732,.007394051,.001639661,.002576728,.005670327,.002109013,.005234449,.00301528,.002240038,.007063307,-0.0,.002022875,.007740024,-.002884633,.001531687,.007302933,-.005553421,.000765909,.005707268,-.007341742,-.000129539,.003175223,-.007936819,-.00097084,.000253732,-.007394051,-.001639661,-.002576728,-.005670327,-.002109013,-.005234449,-.00301528,-.002240038,-.007063307,-0.0,-.247977123,-.007740024,.002884633,-.24846831,-.007302933,.005553421,-.249234095,-.005707268,.007341742,-.250129551,-.003175223,.007936819,-.25097084,-.000253732,.007394051,-.251639664,.002576728,.005670327,-.252109021,.005234449,.00301528,-.252240032,.007063307,-0.0,-.252022862,.007740024,-.002884633,-.25153169,.007302933,-.005553421,-.25076592,.005707268,-.007341742,-.249870464,.003175223,-.007936819,-.24902916,.000253732,-.007394051,-.248360336,-.002576728,-.005670327,-.247890994,-.005234449,-.00301528,-.247759968,-.007063307};
			return value;
		}


		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=6, element #29, 2544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_29_coordIndex()
		{
			MFInt32 IndexedFaceSet_6_29_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_29_coordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_6_29_coordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_6_29_coordIndex_3()));
			return IndexedFaceSet_6_29_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet texCoordIndex field, scene-graph level=6, element #29, 2544 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_6_29_texCoordIndex()
		{
			MFInt32 IndexedFaceSet_6_29_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_6_29_texCoordIndex_1()))
				.append(new MFInt32(getIndexedFaceSet_6_29_texCoordIndex_2()))
				.append(new MFInt32(getIndexedFaceSet_6_29_texCoordIndex_3()));
			return IndexedFaceSet_6_29_texCoordIndex;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #29, 1107 total numbers made up of 369 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_29_point()
		{
			MFVec3f Coordinate_7_29_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(getCoordinate_7_29_point_1()))
				.append(new MFVec3f(getCoordinate_7_29_point_2()))
				.append(new MFVec3f(getCoordinate_7_29_point_3()))
				.append(new MFVec3f(getCoordinate_7_29_point_4()));
			return Coordinate_7_29_point;
		}
		/** Large attribute array: Coordinate point field, scene-graph level=7, element #35, 210 total numbers made up of 70 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getCoordinate_7_35_point()
		{
			MFVec3f Coordinate_7_35_point = new MFVec3f(new double[] {.043857694,.026487757,.044856407,.051103458,.035180904,.058067735,.057426255,.043879826,.071751721,.06256038,.052862361,.086579271,.063520454,.061176091,.102198698,.05089261,.057364434,.10113138,.03992543,.049153931,.090715401,.030296981,.04047513,.0787232,.021623686,.031643052,.0659566,.014053968,.023056723,.053114101,.007210886,.014313838,.039605118,.001431621,.005554617,.025532592,-.002379125,-.003031186,.01081163,.003381157,-.007331477,-.000395989,.016430043,.00051167,.008267757,.026245039,.008666251,.019151537,.03583432,.017863765,.032167807,.043857694,.026487757,.044856407,.051103458,.035180904,.058067735,.057426255,.043879826,.071751721,.06256038,.052862361,.086579271,.063520454,.061176091,.102198698,.05089261,.057364434,.10113138,.03992543,.049153931,.090715401,.030296981,.04047513,.0787232,.021623686,.031643052,.0659566,.014053968,.023056723,.053114101,.007210886,.014313838,.039605118,.001431621,.005554617,.025532592,-.002379125,-.003031186,.01081163,.003381157,-.007331477,-.000395989,.016430043,.00051167,.008267757,.026245039,.008666251,.019151537,.03583432,.017863765,.032167807,.043857694,.026487757,.044856407,.044752121,.023023656,.046645261,.051997885,.031716805,.05985659,.058320682,.040415723,.073540576,.063454807,.049398262,.088368125,.064414881,.057711989,.103987552,.051787037,.053900331,.102920234,.040819857,.045689829,.092504248,.031191409,.037011027,.080512047,.022518113,.028178951,.067745455,.014948395,.01959262,.054902956,.008105312,.010849736,.041393973,.002326048,.002090515,.027321447,-.001484698,-.006495288,.012600484,.004275584,-.010795578,.001392865,.01732447,-.002952432,.010056611,.027139466,.00520215,.020940391,.036728747,.014399664,.033956662,.044752121,.023023656,.046645261,.044752121,.023023656,.046645261,.051997885,.031716805,.05985659,.058320682,.040415723,.073540576,.063454807,.049398262,.088368125,.064414881,.057711989,.103987552,.051787037,.053900331,.102920234,.040819857,.045689829,.092504248,.031191409,.037011027,.080512047,.022518113,.028178951,.067745455,.014948395,.01959262,.054902956,.008105312,.010849736,.041393973,.002326048,.002090515,.027321447,-.001484698,-.006495288,.012600484,.004275584,-.010795578,.001392865,.01732447,-.002952432,.010056611,.027139466,.00520215,.020940391,.036728747,.014399664,.033956662});
			return Coordinate_7_35_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return FlowerSet model
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
        System.out.println("Build this X3D model, showing validation diagnostics...");
        X3D thisExampleX3dModel = new FlowerSet().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.FlowerSet\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
            //  System.out.println("--- TODO fix duplicated outputs ---"); // omit when duplicated outputs problem is solved/refactored
		String validationResults = thisExampleX3dModel.validationReport();
            //  System.out.println("-----------------------------------"); // omit when duplicated outputs problem is solved/refactored
                System.out.print("net.x3djsonld.data.FlowerSet self-validation test confirmation: ");
                if (!validationResults.equals("success"))
                    System.out.println();
                System.out.println(validationResults.trim());

                // experimental: test X3DJSAIL output files
                // ./FlowerSet_JavaExport.* file validation is checked when building X3D Example Archives
                String filenameX3D  = "./FlowerSet_JavaExport.x3d"; 
                String filenameX3DV = "./FlowerSet_JavaExport.x3dv"; 
                String filenameJSON = "./FlowerSet_JavaExport.json";
                thisExampleX3dModel.toFileX3D        (filenameX3D);
                thisExampleX3dModel.toFileClassicVRML(filenameX3DV);
// TODO         thisExampleX3dModel.toFileJSON       (filenameJSON);
        }
    }
}

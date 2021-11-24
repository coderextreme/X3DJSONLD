package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Sound.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A sort of Stealth Helo I designed and created. </p>
 <p> Related links: <a href="../../../StudentProjects/StealthHelo.java">StealthHelo.java</a> source, <a href="../../../StudentProjects/StealthHeloIndex.html" target="_top">StealthHelo catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/StealthHelo.x3d">StealthHelo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A sort of Stealth Helo I designed and created. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Jeffrey S. Lock Sr. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena VRML importer, X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 30 July 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1 August 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
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

	* @author Jeffrey S. Lock Sr.
 */

public class StealthHelo
{
	/** Default constructor to create this object. */
	public StealthHelo ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("StealthHelo.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A sort of Stealth Helo I designed and created."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Jeffrey S. Lock Sr."))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("30 July 2002"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1 August 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("StealthHelo.x3d"))
    .addChild(new Shape()
      .setAppearance(new Appearance()
        .setMaterial(new Material("Body").setDiffuseColor(0.099,0.099,0.099).setShininess(.4).setSpecularColor(0.099,0.099,0.099)))
      .setGeometry(new IndexedFaceSet().setCreaseAngle(1.8).setSolid(false).setCoordIndex(getIndexedFaceSet_4_16_coordIndex())
        .setCoord(new Coordinate("a").setPoint(geta_5_16_point()))))
    .addChild(new Group("Canopy")
      .addChild(new Transform()
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,0.8,0.8).setShininess(1.0).setTransparency(0.5)))
          .setGeometry(new IndexedFaceSet().setCoordIndex(new int[] {23,24,11,-1,38,24,23,-1,37,38,23,-1,37,11,36,-1,29,22,30,-1,47,29,30,-1,48,29,47,-1,48,49,22,-1,36,11,22,49,-1})
            .setCoord(new Coordinate().setUSE("a")))))
      .addChild(new TouchSensor("CanopyTouchSensor").setDescription("touch to activate")))
    .addChild(new Group()
      .addChild(new Transform("Rotors").setRotation(0.0,0.0,1.0,0.325).setTranslation(0.5,3.2,0.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,0.3))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.099,0.099,0.099).setSpecularColor(0.099,0.099,0.099)))
          .setGeometry(new Cylinder().setHeight(0.4).setRadius(0.1)))
        .addChild(new Transform().setTranslation(0.0,0.4,0.0)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.099,0.099,0.099).setSpecularColor(0.099,0.099,0.099)))
            .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.5)))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.099,0.099,0.099).setSpecularColor(0.099,0.099,0.099)))
            .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {85,86,87,88,-1,89,90,91,92,-1,93,94,95,96,-1,97,98,99,100,-1,101,102,103,104,-1,105,106,107,108,-1,109,110,111,112,-1,113,114,115,116,-1})
              .setCoord(new Coordinate().setUSE("a"))))))
      .addChild(new TimeSensor("Clock").setCycleInterval(0.4).setLoop(true))
      .addChild(new OrientationInterpolator("RotorsPath").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14,0.0,1.0,0.0,6.28}))))
    .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("RotorsPath").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("RotorsPath").setFromField("value_changed").setToNode("Rotors").setToField("set_rotation"))
    .addChild(new Background().setSkyAngle(new double[] {1.1,1.57,2.0}).setSkyColor(new MFColor(new double[] {0.6,0.6,0.4,0.4,0.4,0.7,0.3,0.3,0.3,0.773,0.578,0.256})))
    .addChild(new Viewpoint().setDescription("Starboard").setPosition(0.0,4.0,25.0))
    .addChild(new Viewpoint().setDescription("Pilot View").setFieldOfView(1.5).setOrientation(0.0,1.0,0.0,-1.56).setPosition(3.9,1.7,0.0))
    .addChild(new Viewpoint().setDescription("Bow").setOrientation(0.0,1.0,0.0,1.56).setPosition(25.0,5.0,0.0))
    .addChild(new Viewpoint().setDescription("Port").setOrientation(0.0,1.0,0.0,-3.14).setPosition(0.0,4.0,-25.0))
    .addChild(new Viewpoint().setDescription("Stern").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-25.0,5.0,0.0))
    .addChild(new Group("WeaponsDoor")
      .addChild(new Transform("WeaponsDoorTX").setCenter(1.75,0.0,1.8)
        .addChild(new Transform().setRotation(0.0,1.0,0.0,0.6))
        .addChild(new Shape("Door")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("Body")))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.8).setCoordIndex(new int[] {0,1,2,3,-1,0,3,5,4,-1,0,4,1,-1,3,2,5,-1})
            .setCoord(new Coordinate("b").setPoint(new MFVec3f(new double[] {3.0,-1.0,1.0,3.0,0.0,1.8,-0.5,0.2,1.8,-0.5,-0.8,1.0,3.0,0.2,1.8,-0.5,0.6,1.8,3.0,-1.0,-1.0,3.0,0.0,-1.8,-0.5,0.2,-1.8,-0.5,-0.8,-1.0,3.0,0.2,-1.8,-0.5,0.6,-1.8})))))
        .addChild(new Transform().setTranslation(1.25,-0.4,1.08)
          .addChild(new Transform().setRotation(1.0,0.0,0.0,0.36)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Body")))
              .setGeometry(new Box().setSize(2.0,0.15,0.4)))
            .addChild(new Group("STBDmissile")
              .addChild(new Transform("StbdMSLTX").setTranslation(0.0,0.0,-0.3)
                .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("SWB").setDiffuseColor(0.101,0.172,0.695)))
                    .setGeometry(new Cylinder().setHeight(3.0).setRadius(0.2)))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,0.79)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1})
                        .setCoord(new Coordinate("TrianglePoints").setPoint(new MFVec3f(new double[] {0.0,0.5,0.0,0.0,1.5,-0.5,0.0,1.5,0.5}))))))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,-0.79)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1})
                        .setCoord(new Coordinate().setUSE("TrianglePoints")))))
                  .addChild(new Transform().setTranslation(0.0,-1.8,0.0)
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("SWB")))
                        .setGeometry(new Cone().setBottomRadius(0.2).setHeight(0.6))))))))
            .addChild(new PositionInterpolator("STBDmissileInterpolator").setKey(new double[] {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,0.0,0.0,-0.3,50.0,0.0,0.0,100.0,0.0,0.0})))
            .addChild(new TouchSensor("STBDmissileTouchSensor").setDescription("touch to activate"))
            .addChild(new TimeSensor("CLOCK3")))))
      .addChild(new OrientationInterpolator("WeaponsDoorInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,-1.87,1.0,0.0,0.0,-2.0})))
      .addChild(new TimeSensor("CLOCK1").setCycleInterval(5.0))
      .addChild(new TouchSensor("WeaponsDoorTouchSensor").setDescription("touch to activate")))
    .addChild(new Group("WeaponsDoorPT")
      .addChild(new Transform("WeaponsDoorPTX").setCenter(1.75,0.0,-1.8)
        .addChild(new Shape("DoorPT")
          .setAppearance(new Appearance()
            .setMaterial(new Material().setUSE("Body")))
          .setGeometry(new IndexedFaceSet().setCreaseAngle(1.8).setCoordIndex(new int[] {7,6,9,8,-1,9,6,10,11,-1,6,7,10,-1,9,8,11,-1})
            .setCoord(new Coordinate().setUSE("b"))))
        .addChild(new Transform().setTranslation(1.25,-0.4,-1.1)
          .addChild(new Transform().setRotation(1.0,0.0,0.0,-0.36)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("Body")))
              .setGeometry(new Box().setSize(2.0,0.15,0.4)))
            .addChild(new Group("PORTmissile")
              .addChild(new Transform("PortMSLTX").setTranslation(0.0,0.0,0.3)
                .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("SWB")))
                    .setGeometry(new Cylinder().setHeight(3.0).setRadius(0.2)))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,0.79)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1})
                        .setCoord(new Coordinate().setUSE("TrianglePoints")))))
                  .addChild(new Transform().setRotation(0.0,1.0,0.0,-0.79)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,1.0,1.0)))
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,-1})
                        .setCoord(new Coordinate().setUSE("TrianglePoints")))))
                  .addChild(new Transform().setTranslation(0.0,-1.8,0.0)
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setUSE("SWB")))
                        .setGeometry(new Cone().setBottomRadius(0.2).setHeight(0.6))))))))
            .addChild(new PositionInterpolator("PortmissileInterpolator").setKey(new double[] {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,0.0,0.0,0.3,50.0,0.0,0.0,100.0,0.0,0.0})))
            .addChild(new TouchSensor("PortmissileTouchSensor").setDescription("touch to activate")))))
      .addChild(new OrientationInterpolator("WeaponsDoorPTInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,1.87,1.0,0.0,0.0,2.0})))
      .addChild(new TimeSensor("CLOCK2").setCycleInterval(3.0))
      .addChild(new TouchSensor("WeaponsDoorPTTouchSensor").setDescription("touch to activate")))
    .addChild(new ROUTE().setFromNode("WeaponsDoorTouchSensor").setFromField("touchTime").setToNode("CLOCK1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("WeaponsDoorInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WeaponsDoorInterpolator").setFromField("value_changed").setToNode("WeaponsDoorTX").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("WeaponsDoorPTTouchSensor").setFromField("touchTime").setToNode("CLOCK1").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("CLOCK1").setFromField("fraction_changed").setToNode("WeaponsDoorPTInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("WeaponsDoorPTInterpolator").setFromField("value_changed").setToNode("WeaponsDoorPTX").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("CanopyTouchSensor").setFromField("touchTime").setToNode("CLOCK3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("STBDmissileTouchSensor").setFromField("touchTime").setToNode("CLOCK3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("CLOCK3").setFromField("fraction_changed").setToNode("STBDmissileInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("STBDmissileInterpolator").setFromField("value_changed").setToNode("StbdMSLTX").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("PortmissileTouchSensor").setFromField("touchTime").setToNode("CLOCK3").setToField("set_startTime"))
    .addChild(new ROUTE().setFromNode("CLOCK3").setFromField("fraction_changed").setToNode("PortmissileInterpolator").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("PortmissileInterpolator").setFromField("value_changed").setToNode("PortMSLTX").setToField("set_translation"))
    .addChild(new Sound("HelicopterWav").setMaxBack(10000).setMaxFront(10000)
      .setSource(new AudioClip().setDescription("Helo").setLoop(true).setUrl(new String[] {"StealthHelo.wav","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/StealthHelo.wav"}))));
    }
	// end of initialize() method

		/** Define subarrays using type int[] */
		private int[] getIndexedFaceSet_4_16_coordIndex_1()
		{
			int[] value = {40,41,26,-1,41,27,26,-1,26,27,14,-1,27,15,14,-1,40,26,25,-1,40,25,39,-1,26,14,13,-1,26,13,25,-1,41,42,27,-1,42,28,27,-1,27,28,15,-1,28,16,15,-1,16,5,4,-1,15,16,4,-1,15,4,3,-1,14,15,3,-1,14,3,2,-1,13,14,2,-1,13,2,1,-1,12,13,1,-1,25,13,12,-1,24,25,12,-1,39,25,24,-1,38,39,24,-1,11,12,1,-1,24,12,11,-1,1,2,0,-1,2,3,0,-1,3,4,0,-1,4,5,0,-1,5,6,0,-1,10,1,0,-1,51,36,35,-1,65,77,66,-1,68,77,70,-1,67,77,68,-1,79,80,81,-1,16,28,34,17,-1,28,42,43,34,-1,11,1,10,22,-1,36,49,50,35,-1,35,50,64,51,-1,38,37,52,53,-1,39,38,53,54,-1,40,39,54,55,-1,52,37,36,51,-1,57,56,69,70,-1,56,55,68,69,-1,55,54,67,68,-1,54,53,66,67,-1,53,52,66,66,-1,51,64,76,65,-1,52,51,65,66,-1,6,5,16,17,-1,42,57,58,43,-1,57,70,71,58,-1,65,76,78,77,-1,66,77,80,79,-1,77,78,71,70,-1,77,67,81,80,-1,66,79,81,67,-1,45,31,44,-1,44,31,33,-1,31,20,33,-1,33,20,18,-1,45,32,31,-1,45,46,32,-1,31,19,20,-1,31,32,19,-1,44,33,43,-1,43,33,34,-1,33,18,34,-1,34,18,17,-1,17,7,6,-1,18,7,17,-1,18,8,7,-1,20,8,18,-1,20,9,8,-1,19,9,20,-1,19,10,9,-1,21,10,19,-1,32,21,19,-1,30,21,32,-1,46,30,32,-1,47,30,46,-1,22,10,21,-1,30,22,21,-1,10,0,9,-1,9,0,8,-1,8,0,7,-1,7,0,6,-1,64,50,49,-1,84,83,82,-1,71,78,73,-1,73,78,74,-1,76,75,78,-1,47,62,63,48,-1,46,61,62,47,-1,45,60,61,46,-1,44,59,60,45,-1,43,58,59,44,-1,63,64,49,48,-1,58,71,72,59,-1,59,72,73,60,-1,60,73,74,61,-1,61,74,75,62,-1,62,75,63,63,-1,63,75,76,64,-1,84,82,75,74,-1,82,83,78,75,-1,83,84,74,78,-1,41,40,55,56,-1,42,41,56,57,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] geta_5_16_point_1()
		{
			double[] value = {8.5,-0.72,0.0,7.5,0.0,0.2,7.5,-0.1,0.6,7.5,-0.6,0.8,7.5,-1.1,0.4,7.5,-1.3,0.0,7.5,-1.3,-0.0,7.5,-1.1,-0.4,7.5,-0.6,-0.8,7.5,-0.1,-0.6,7.5,0.0,-0.2,6.0,0.8,0.4,6.0,0.6,0.8,6.0,0.1,1.2,6.0,-0.4,1.4,6.0,-0.9,1.0,6.0,-1.4,0.5,6.0,-1.4,-0.5,6.0,-0.9,-1.0,6.0,0.1,-1.2,6.0,-0.4,-1.4,6.0,0.6,-0.8,6.0,0.8,-0.4,4.5,1.2,0.6,4.5,0.8,1.0,4.5,0.3,1.4,4.5,-0.2,1.6,4.5,-0.7,1.2,4.5,-1.2,0.8,4.5,1.2,-0.6,4.5,0.8,-1.0,4.5,-0.2,-1.6,4.5,0.3,-1.4,4.5,-0.7,-1.2,4.5,-1.2,-0.8,1.7,3.0,0.4,2.0,2.6,0.6,3.0,1.4,0.8,3.0,1.0,1.2,3.0,0.5,1.6,3.0,0.0,1.8,3.0,-0.5,1.4,3.0,-1.0,1.0,3.0,-1.0,-1.0,3.0,-0.5,-1.4,3.0,0.0,-1.8,3.0,0.5,-1.6,3.0,1.0,-1.2,3.0,1.4,-0.8,2.0,2.6,-0.6,1.7,3.0,-0.4,-0.5,3.0,0.4,-0.5,1.6,0.8,-0.5,1.2,1.2,-0.5,0.7,1.6,-0.5,0.2,1.8,-0.5,-0.3,1.4,-0.5,-0.8,1.0,-0.5,-0.8,-1.0,-0.5,-0.3,-1.4,-0.5,0.2,-1.8,-0.5,0.7,-1.6,-0.5,1.2,-1.2,-0.5,1.6,-0.8,-0.5,3.0,-0.4,-8.0,2.6,0.2,-8.0,2.5,0.3,-8.0,2.4,0.4,-8.0,2.2,0.5,-8.0,2.0,0.3,-8.0,1.8,0.1,-8.0,1.8,-0.1,-8.0,2.0,-0.3,-8.0,2.2,-0.5,-8.0,2.4,-0.4,-8.0,2.5,-0.3,-8.0,2.6,-0.2,-9.0,2.3,0.1,-9.0,2.3,-0.1,-9.0,2.2,2.8,-10.0,2.3,2.8,-9.0,2.1,2.8,-9.0,2.2,-2.8,-10.0,2.3,-2.8,-9.0,2.1,-2.8,0.5,-0.1,0.1,1.5,-0.1,0.1,1.5,0.0,-0.1,0.5,0.0,-0.1,1.5,-0.3,0.5,8.5,-0.3,0.5,8.5,0.0,-0.1,1.5,0.0,-0.1,0.1,-0.1,-0.5,0.1,-0.1,-1.5,-0.1,0.0,-1.5,-0.1,0.0,-0.5,0.5,-0.3,-1.5,0.5,-0.3,-8.5,-0.1,0.0,-8.5};
			return value;
		}
		private double[] geta_5_16_point_2()
		{
			double[] value = {-0.1,0.0,-1.5,-0.5,-0.1,-0.1,-1.5,-0.1,-0.1,-1.5,0.0,0.1,-0.5,0.0,0.1,-1.5,-0.3,-0.5,-8.5,-0.3,-0.5,-8.5,0.0,0.1,-1.5,0.0,0.1,-0.1,-0.1,0.5,-0.1,-0.1,1.5,0.1,0.0,1.5,0.1,0.0,0.5,-0.5,-0.3,1.5,-0.5,-0.3,8.5,0.1,0.0,8.5,0.1,0.0,1.5};
			return value;
		}

		/** Large attribute array: IndexedFaceSet coordIndex field, scene-graph level=4, element #16, 493 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getIndexedFaceSet_4_16_coordIndex()
		{
			MFInt32 IndexedFaceSet_4_16_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getIndexedFaceSet_4_16_coordIndex_1()));
			return IndexedFaceSet_4_16_coordIndex;
		}
		/** Large attribute array: Coordinate DEF='a' point field, scene-graph level=5, element #16, 351 total numbers made up of 117 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f geta_5_16_point()
		{
			MFVec3f a_5_16_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(geta_5_16_point_1()))
				.append(new MFVec3f(geta_5_16_point_2()));
			return a_5_16_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return StealthHelo model
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
        X3D thisExampleX3dModel = new StealthHelo().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.StealthHelo\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.StealthHelo\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

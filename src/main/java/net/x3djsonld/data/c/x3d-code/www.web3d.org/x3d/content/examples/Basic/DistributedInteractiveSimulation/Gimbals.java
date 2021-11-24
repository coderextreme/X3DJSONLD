package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Lighting.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Gimbals for user-driven roll pitch and yaw angle conversions, also shows conversion from X3D (VRML) to DIS coordinate system. Model inspiration by Bob McGhee. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/Gimbals.java">Gimbals.java</a> source, <a href="../../../DistributedInteractiveSimulation/GimbalsIndex.html" target="_top">Gimbals catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/Gimbals.x3d">Gimbals.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Gimbals for user-driven roll pitch and yaw angle conversions, also shows conversion from X3D (VRML) to DIS coordinate system. Model inspiration by Bob McGhee. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Eric Bachmann and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 1996 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> finished </i> </td>
			<td> 19 April 1999 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Curtis Blais </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 27 January 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/GimbalsExampleF18.png">GimbalsExampleF18.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/GimbalsExampleRocket.png">GimbalsExampleRocket.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Note that axis orientations are aligned with X3D Geospatial conventions </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/WorkingGroups/vrtp/demo/gimbals/DisCoordinateSystemGimbals.wrl" target="_blank">https://www.web3d.org/WorkingGroups/vrtp/demo/gimbals/DisCoordinateSystemGimbals.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

	* @author Eric Bachmann and Don Brutzman
 */

public class Gimbals
{
	/** Default constructor to create this object. */
	public Gimbals ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Gimbals.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Gimbals for user-driven roll pitch and yaw angle conversions, also shows conversion from X3D (VRML) to DIS coordinate system. Model inspiration by Bob McGhee."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Eric Bachmann and Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("1996"))
    .addMeta(new meta().setName("finished").setContent("19 April 1999"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Curtis Blais"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("27 January 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("GimbalsExampleF18.png"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("GimbalsExampleRocket.png"))
    .addMeta(new meta().setName(meta.NAME_HINT       ).setContent("Note that axis orientations are aligned with X3D Geospatial conventions"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/WorkingGroups/vrtp/demo/gimbals/DisCoordinateSystemGimbals.wrl"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("Gimbals.x3d"))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.3,1.0,0.0,0.3,1.0,0.0,0.3,1.0})).setSkyAngle(new double[] {1.309,1.571}).setSkyColor(new MFColor(new double[] {0.0,0.2,0.7,0.0,0.5,1.0,1.0,1.0,1.0})))
    .addChild(new DirectionalLight().setColor(0.5,0.4,0.0).setDirection(1.0,-.5,1.0))
    .addChild(new Group("ViewpointGroup")
      .addComments(" have default Viewpoints precede model viewpoints for consistent navigation ")
      .addChild(new Viewpoint().setDescription("South to North").setPosition(0.0,15.0,100.0))
      .addChild(new Viewpoint().setDescription("East to West").setOrientation(0.0,1.0,0.0,1.57079).setPosition(120.0,20.0,0.0))
      .addChild(new Viewpoint().setDescription("North to South").setOrientation(0.0,1.0,0.0,-3.14159).setPosition(0.0,20.0,-120.0))
      .addChild(new Viewpoint().setDescription("West to East").setOrientation(0.0,1.0,0.0,-1.57079).setPosition(-120.0,20.0,0.0))
      .addChild(new Viewpoint().setDescription("Close Up").setOrientation(1.0,0.0,0.0,-.20136).setPosition(0.0,30.0,50.0))
      .addChild(new Transform("fromNEtoSW").setRotation(0.0,1.0,0.0,0.7854).setTranslation(30.0,40.0,30.0)
        .addChild(new Viewpoint().setDescription("Northeast to SW").setOrientation(1.0,0.0,0.0,-0.45)))
      .addChild(new Transform("fromSWtoNE").setRotation(0.0,1.0,0.0,-2.35619).setTranslation(-25.0,5.0,-25.0)
        .addChild(new Viewpoint().setDescription("Southwest to NE").setOrientation(1.0,0.0,0.0,0.35)))
      .addChild(new Transform().setRotation(-1.0,0.0,0.0,1.57).setTranslation(0.0,150.0,0.0)
        .addChild(new Viewpoint().setDescription("Top Down").setOrientation(0.0,0.0,-1.0,1.57).setPosition(0.0,0.0,0.0))))
    .addChild(new Transform("SunInDistance").setTranslation(-250.0,125.0,-250.0)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material("SUN_MATERIAL").setAmbientIntensity(0).setDiffuseColor(1.0,0.871763,0.0).setEmissiveColor(1.0,0.871763,0.0).setShininess(0.5).setSpecularColor(1.0,1.0,1.0)))
        .setGeometry(new Sphere().setRadius(5.0))))
    .addChild(new Transform("GlobalCoordinateAxes").setTranslation(0.0,20.0,0.0)
      .addChild(new Transform("GlobalAxisLines")
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material("COLOR1").setDiffuseColor(0.01,0.01,0.1).setEmissiveColor(0.01,0.01,0.1)))
          .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1})
            .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {35.0,0.0,0.0,2.0,0.0,0.0,-35.0,0.0,0.0,-2.0,0.0,0.0,0.0,25.0,0.0,0.0,2.0,0.0,0.0,-25.0,0.0,0.0,-2.0,0.0,0.0,0.0,35.0,0.0,0.0,2.0,0.0,0.0,-35.0,0.0,0.0,-2.0}))))))
      .addChild(new Transform("PositiveZAxisLabel").setTranslation(0.0,-4.0,40.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"South","+Z X3D, -X DIS"})
                .setFontStyle(new FontStyle("FONT1").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(36)))))))
      .addChild(new Transform("PositiveXAxisLabel").setTranslation(44.0,-4.0,0.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"East","+X X3D, +Y DIS"})
                .setFontStyle(new FontStyle().setUSE("FONT1")))))))
      .addChild(new Transform("NegativeZAxisLabel").setTranslation(-0.5,-4.0,-40.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"North","-Z X3D, +X DIS"})
                .setFontStyle(new FontStyle().setUSE("FONT1")))))))
      .addChild(new Transform("NegativeXAxisLabel").setTranslation(-44.0,-4.0,0.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"West","-X X3D, -Y DIS"})
                .setFontStyle(new FontStyle().setUSE("FONT1")))))))
      .addChild(new Transform("PositiveYAxisLabel").setTranslation(0.0,30.0,0.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"Up","+Y X3D, -Z DIS"})
                .setFontStyle(new FontStyle().setUSE("FONT1")))))))
      .addChild(new Transform("NegativeYAxisLabel").setTranslation(0.0,-28.0,0.0)
        .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
          .addChild(new Transform().setScale(0.1,0.1,0.1)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setUSE("COLOR1")))
              .setGeometry(new Text().setString(new String[] {"Down","-Y X3D, +Z DIS"})
                .setFontStyle(new FontStyle().setUSE("FONT1"))))))))
    .addChild(new Transform("GimbalObjects").setRotation(0.0,1.0,0.0,1.57).setTranslation(0.0,20.0,0.0)
      .addChild(new Transform("AZIMUTH_TRANSFORM")
        .addChild(new CylinderSensor("AZIMUTH_SENSOR").setDescription("drag gimbal to change azimuth"))
        .addChild(new Transform("AzimuthGimbal").setRotation(1.0,0.0,0.0,1.57079)
          .addChild(new Transform("AzimuthGimbalShape")
            .addChild(new Shape()
              .setAppearance(new Appearance("AppearanceGimbals")
                .setMaterial(new Material().setDiffuseColor(1.0,0.59,0.3)))
              .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.5,0.0,0.46,-0.19,0.355,-0.355,0.19,-0.46,0.0,-0.5,-0.19,-0.46,-0.355,-0.355,-0.46,-0.19,-0.5,0.0,-0.46,0.19,-0.355,0.355,-0.19,0.46,0.0,0.5,0.19,0.46,0.355,0.355,0.46,0.19,0.5,0.0})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {14.0,0.0,0.0,13.25,0.0,7.85,11.05,0.0,11.05,7.85,0.0,13.25,0.0,0.0,14.0,-7.85,0.0,13.25,-11.05,0.0,11.05,-13.25,0.0,7.85,-14.0,0.0,0.0,-13.25,0.0,-7.85,-11.05,0.0,-11.05,-7.85,0.0,-13.25,0.0,0.0,-14.0,7.85,0.0,-13.25,11.05,0.0,-11.05,13.25,0.0,-7.85,14.0,0.0,0.0}))))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57079).setTranslation(12.75,0.0,0.0)
              .addChild(new Shape("PinShape")
                .setAppearance(new Appearance().setUSE("AppearanceGimbals"))
                .setGeometry(new Cone().setBottomRadius(0.5).setHeight(1.5))))
            .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.57079).setTranslation(-12.75,0.0,0.0)
              .addChild(new Shape().setUSE("PinShape")))))
        .addChild(new Transform("ElevationRollObjects").setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Transform("ELEVATION_TRANSFORM")
            .addChild(new CylinderSensor("ELEVATION_SENSOR").setDescription("drag gimbal to change elevation"))
            .addChild(new Transform("ElevationGimbal").setRotation(0.0,0.0,1.0,1.57079)
              .addChild(new Transform("ElevationGimbalShape")
                .addChild(new Shape()
                  .setAppearance(new Appearance().setUSE("AppearanceGimbals"))
                  .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.5,0.0,0.46,-0.19,0.355,-0.355,0.19,-0.46,0.0,-0.5,-0.19,-0.46,-0.355,-0.355,-0.46,-0.19,-0.5,0.0,-0.46,0.19,-0.355,0.355,-0.19,0.46,0.0,0.5,0.19,0.46,0.355,0.355,0.46,0.19,0.5,0.0})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {12.0,0.0,0.0,11.25,0.0,5.85,9.05,0.0,9.05,5.85,0.0,11.25,0.0,0.0,12.0,-5.85,0.0,11.25,-9.05,0.0,9.05,-11.25,0.0,5.85,-12.0,0.0,0.0,-11.25,0.0,-5.85,-9.05,0.0,-9.05,-5.85,0.0,-11.25,0.0,0.0,-12.0,5.85,0.0,-11.25,9.05,0.0,-9.05,11.25,0.0,-5.85,12.0,0.0,0.0}))))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57079).setTranslation(0.0,0.0,10.75)
                  .addChild(new Shape().setUSE("PinShape")))
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57079).setTranslation(0.0,0.0,-10.75)
                  .addChild(new Shape().setUSE("PinShape")))))
            .addChild(new Transform("RollObjects").setRotation(1.0,0.0,0.0,-1.57)
              .addChild(new Transform("ROLL_TRANSFORM")
                .addChild(new CylinderSensor("ROLL_SENSOR").setDescription("drag gimbal to change roll"))
                .addChild(new Transform("RollGimbal").setRotation(1.0,0.0,0.0,1.57079)
                  .addChild(new Transform("RollGimbalShape")
                    .addChild(new Shape()
                      .setAppearance(new Appearance().setUSE("AppearanceGimbals"))
                      .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.5,0.0,0.46,-0.19,0.355,-0.355,0.19,-0.46,0.0,-0.5,-0.19,-0.46,-0.355,-0.355,-0.46,-0.19,-0.5,0.0,-0.46,0.19,-0.355,0.355,-0.19,0.46,0.0,0.5,0.19,0.46,0.355,0.355,0.46,0.19,0.5,0.0})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {10.0,0.0,0.0,9.25,0.0,3.85,7.05,0.0,7.05,3.85,0.0,9.25,0.0,0.0,10.0,-3.85,0.0,9.25,-7.05,0.0,7.05,-9.25,0.0,3.85,-10.0,0.0,0.0,-9.25,0.0,-3.85,-7.05,0.0,-7.05,-3.85,0.0,-9.25,0.0,0.0,-10.0,3.85,0.0,-9.25,7.05,0.0,-7.05,9.25,0.0,-3.85,10.0,0.0,0.0})))))
                  .addChild(new Transform().setRotation(0.0,0.0,1.0,-1.57)
                    .addChild(new Transform().setRotation(0.0,1.0,0.0,-1.57).setScale(0.4,0.4,0.4)
                      .addChild(new Transform("ScaleUpContainedObject").setScale(6.0,6.0,6.0)
                        .addComments(" note that default is in a different library, so each Inline goes online for url retrieval if needed ")
                        .addChild(new Switch("ModelChoice").setWhichChoice(0)
                          .addChild(new Transform().setScale(0.4,0.4,0.4)
                            .addChild(new Inline("F18Superhornet").setUrl(new String[] {"../../Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.x3d","../../Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18-Superhornet-UnitedStates/F18.wrl"})))
                          .addChild(new Inline("ModelOrientation").setUrl(new String[] {"../course/ModelOrientation.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.x3d","../course/ModelOrientation.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ModelOrientation.wrl"}))
                          .addComments(" you can add your model here ")))
                      .addChild(new Transform("LocalCoordinateAxes").setScale(0.65,0.65,0.65)
                        .addChild(new Transform("LocalAxisLines")
                          .addChild(new Shape()
                            .setAppearance(new Appearance("AppearanceBodyAxes")
                              .setMaterial(new Material().setDiffuseColor(1.0,.8,0.0).setEmissiveColor(1.0,.8,0.0)))
                            .setGeometry(new IndexedLineSet().setCoordIndex(new int[] {0,1,-1,2,3,-1,4,5,-1})
                              .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {25.0,0.0,0.0,-25.0,0.0,0.0,0.0,25.0,0.0,0.0,-25.0,0.0,0.0,0.0,25.0,0.0,0.0,-25.0}))))))
                        .addChild(new Transform("PositiveXLocal").setTranslation(35.0,0.0,0.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body +X nose"})
                                  .setFontStyle(new FontStyle("FONT2").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(48)))))))
                        .addChild(new Transform("NegativeXLocal").setTranslation(-35.0,0.0,0.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body -X tail"})
                                  .setFontStyle(new FontStyle().setUSE("FONT2")))))))
                        .addChild(new Transform("PositiveZLocal").setTranslation(0.0,-30.0,0.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body -Y bottom"})
                                  .setFontStyle(new FontStyle().setUSE("FONT2")))))))
                        .addChild(new Transform("NegativeZLocal").setTranslation(0.0,26.0,0.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body +Y top"})
                                  .setFontStyle(new FontStyle().setUSE("FONT2")))))))
                        .addChild(new Transform("PositiveYLocal").setTranslation(0.0,0.0,34.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body +Z right"})
                                  .setFontStyle(new FontStyle().setUSE("FONT2")))))))
                        .addChild(new Transform("NegativeYLocal").setTranslation(0.0,0.0,-34.0)
                          .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                            .addChild(new Transform().setScale(.1,.1,.1)
                              .addChild(new Shape()
                                .setAppearance(new Appearance().setUSE("AppearanceBodyAxes"))
                                .setGeometry(new Text().setString(new String[] {"body -Z left"})
                                  .setFontStyle(new FontStyle().setUSE("FONT2")))))))))))))))))
    .addChild(new Transform("RotationText").setTranslation(0.0,-12.0,22.0)
      .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.0,.8,.1).setEmissiveColor(0.0,.8,.1)))
          .setGeometry(new Text("TRACE_STRING").setString(new String[] {"Drag gimbals for new rotation value"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(4))))))
    .addChild(new Script("CONSTRUCT_TRACE_STRING").setUrl(new String[] {"Gimbals.js","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/Gimbals.js"})
      .addField(new field().setName("roll").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("declared for persistence"))
      .addField(new field().setName("elevation").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("declared for persistence"))
      .addField(new field().setName("azimuth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("declared for persistence"))
      .addField(new field().setName("azimuth2").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("declared for persistence"))
      .addField(new field().setName("newRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,1.0,0.0,0.0)).setAppinfo("declared for persistence"))
      .addField(new field().setName("newRotationString").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("declared for persistence"))
      .addField(new field().setName("set_rollRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_elevationRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_azimuthRotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("rotationMessage_changed").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ROUTE().setFromNode("ROLL_SENSOR").setFromField("rotation_changed").setToNode("ROLL_TRANSFORM").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("ELEVATION_SENSOR").setFromField("rotation_changed").setToNode("ELEVATION_TRANSFORM").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("AZIMUTH_SENSOR").setFromField("rotation_changed").setToNode("AZIMUTH_TRANSFORM").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("ROLL_SENSOR").setFromField("rotation_changed").setToNode("CONSTRUCT_TRACE_STRING").setToField("set_rollRotation"))
    .addChild(new ROUTE().setFromNode("ELEVATION_SENSOR").setFromField("rotation_changed").setToNode("CONSTRUCT_TRACE_STRING").setToField("set_elevationRotation"))
    .addChild(new ROUTE().setFromNode("AZIMUTH_SENSOR").setFromField("rotation_changed").setToNode("CONSTRUCT_TRACE_STRING").setToField("set_azimuthRotation"))
    .addChild(new ROUTE().setFromNode("CONSTRUCT_TRACE_STRING").setFromField("rotationMessage_changed").setToNode("TRACE_STRING").setToField("set_string")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Gimbals model
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
        X3D thisExampleX3dModel = new Gimbals().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Gimbals\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Gimbals\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

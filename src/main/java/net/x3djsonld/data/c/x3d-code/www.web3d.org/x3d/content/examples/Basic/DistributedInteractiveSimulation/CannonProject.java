package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Physically Based Modeling project for MV-4472, showing a projectile motion model that takes into account drag, changing air densities with altitude, and wind. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/CannonProject.java">CannonProject.java</a> source, <a href="../../../DistributedInteractiveSimulation/CannonProjectIndex.html" target="_top">CannonProject catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/CannonProject.x3d">CannonProject.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Physically Based Modeling project for MV-4472, showing a projectile motion model that takes into account drag, changing air densities with altitude, and wind. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> recognition </i> </td>
			<td> Included is the model "Lightweight 155mm Howitzer" created by Jeffrey Weekley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> recognition </i> </td>
			<td> The Dunes.jpg texture was found on the web at <a href="http://www.ecn.net.au/~iain/htextures" target="_blank">http://www.ecn.net.au/~iain/htextures</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.ecn.net.au/~iain/htextures" target="_blank">http://www.ecn.net.au/~iain/htextures</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Ernesto Salles </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 10 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> prerequisite: Java3D classes must be installed in CLASSPATH </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CannonProject/run.bat </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CannonProject/compile.bat </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> CannonProject/compile.out </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> projectile, physically based model </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CannonProject.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CannonProject.x3d</a> </td>
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

	* @author Ernesto Salles
 */

public class CannonProject
{
	/** Default constructor to create this object. */
	public CannonProject ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CannonProject.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Physically Based Modeling project for MV-4472, showing a projectile motion model that takes into account drag, changing air densities with altitude, and wind."))
    .addMeta(new meta().setName("recognition").setContent("Included is the model \"Lightweight 155mm Howitzer\" created by Jeffrey Weekley"))
    .addMeta(new meta().setName("recognition").setContent("The Dunes.jpg texture was found on the web at http://www.ecn.net.au/~iain/htextures"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.ecn.net.au/~iain/htextures"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Ernesto Salles"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("10 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("prerequisite: Java3D classes must be installed in CLASSPATH"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CannonProject/run.bat"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CannonProject/compile.bat"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("CannonProject/compile.out"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("projectile, physically based model"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/CannonProject.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" There was no size given for this weapon, it is built to similar dimensions as its precedessor, the M198 Howitzer. It is 5m total length. ")
    .addChild(new WorldInfo().setTitle("CannonProject.x3d"))
    .addChild(new ExternProtoDeclare("ArbitraryAxisCylinderSensor").setName("ArbitraryAxisCylinderSensor").setAppinfo("Modified CylinderSensor with children nodes oriented about an arbitrary axis. Warning: ArbitraryAxisCylinderSensor affects children, not peers.").setUrl(new String[] {"../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.x3d#ArbitraryAxisCylinderSensor","../../Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor","https://savage.nps.edu/Savage/Tools/Animation/ArbitraryAxisCylinderSensorPrototype.wrl#ArbitraryAxisCylinderSensor"})
      .addField(new field().setName("shiftRotationAxis").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("shifted axis of rotation from local vertical, default 1 0 0 0"))
      .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("local center for axis of rotation, default 0 0 0"))
      .addField(new field().setName("showCylinderSensorShape").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether to show visualization shape to show orientation and cylindrical mapping of mouse movements by sensor, default true"))
      .addField(new field().setName("scaleCylinderSensorShape").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("scale for visualization shape, default 1 1 1"))
      .addField(new field().setName("colorCylinderSensorShape").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("color for visualization shape, default 0.9 0.9 0.4"))
      .addField(new field().setName("transparencyCylinderSensorShape").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("transparency for visualization shape"))
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("children nodes affected by ArbitraryAxisCylinderSensor"))
      .addField(new field().setName("autoOffset").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("determines whether previous offset values are remembered/accumulated, default true"))
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Text tooltip displayed for user interaction"))
      .addField(new field().setName("diskAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("diskAngle 0 forces disk-like behavior, diskAngle 1.57 (90 degrees) forces cylinder-like behavior, default 0.262, range [0,pi/2]"))
      .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("enables/disables node operation, default true"))
      .addField(new field().setName("minAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("clamps rotation_changed events, default 0, range [-2pi,2pi]"))
      .addField(new field().setName("maxAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("clamps rotation_changed events, default -1, range [-2pi,2pi]"))
      .addField(new field().setName("offset").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("sends event and remembers last value sensed, default 0, range (-infinity,infinity)"))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("output event isActive=true when primary mouse button is pressed, output event isActive=false when released."))
      .addField(new field().setName("rotation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("rotation_changed events equal sum of relative bearing changes plus offset value about Y-axis in local coordinate system"))
      .addField(new field().setName("trackPoint_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("trackPoint_changed events give intersection point of bearing with sensor's virtual geometry")))
    .addChild(new Viewpoint().setDescription("Lightweight 155mm Howitzer").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-5.0,0.7,0.0))
    .addChild(new Viewpoint().setDescription("FarView").setPosition(200.0,75.0,300.0))
    .addChild(new Viewpoint().setDescription("AboveView").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-75.0,40.0,0.0))
    .addChild(new Background().setSkyColor(new MFColor(new double[] {0.4,0.1,0.2})))
    .addComments(" Default gun orientation points along X axis (typically North) ")
    .addChild(new TimeSensor("TheClock").setCycleInterval(10))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57)
      .addChild(new ProtoInstance("ArbitraryAxisCylinderSensor", "BarrelHeading").setContainerField("children")
        .addFieldValue(new fieldValue().setName("shiftRotationAxis").setValue(new SFRotation(1.0,0.0,0.0,1.57)))
        .addFieldValue(new fieldValue().setName("maxAngle").setValue(0.6))
        .addFieldValue(new fieldValue().setName("minAngle").setValue(-0.6))
        .addFieldValue(new fieldValue().setName("showCylinderSensorShape").setValue(false))
        .addFieldValue(new fieldValue().setName("children")
          .addChild(new Group("Saddle")
            .addChild(new Transform().setRotation(0.58,0.58,-0.58,2.09).setScale(0.75,0.75,0.75).setTranslation(0.667,0.0,0.0)
              .addChild(new Transform("SaddleBase").setRotation(0.0,1.0,0.0,1.57).setScale(0.7,0.7,0.7).setTranslation(0.1,-0.6,0.0)
                .addChild(new Transform().setRotation(-1.0,0.0,0.0,1.57)
                  .addChild(new Shape()
                    .setGeometry(new Extrusion().setCrossSection(new MFVec2f(new double[] {0.0,0.7,-0.4,0.6,-0.9,0.0,-0.8,-0.5,0.0,-0.6,0.8,-0.5,0.9,0.0,0.4,0.6,0.0,0.7,-0.4,0.6})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.2,0.0,0.0,0.29,0.0})))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("grey").setDiffuseColor(0.5,0.5,0.5).setSpecularColor(1.0,1.0,1.0))))))
              .addChild(new Transform("ElevationGear").setTranslation(-0.25,-0.4,0.45)
                .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
                  .addChild(new Shape()
                    .setGeometry(new Box().setSize(0.25,0.325,0.125))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.25,0.66,0.8))))
                  .addChild(new Transform().setTranslation(-0.2,0.0,0.06)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(1.0,0.25,1.0)))
                      .setGeometry(new Box().setSize(0.1625,0.165,0.1)))
                    .addChild(new Transform().setTranslation(0.075,-0.05,-0.01)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.15,0.25,0.1)))
                        .setGeometry(new Cylinder().setHeight(0.325).setRadius(0.075)))))
                  .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,-0.1)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.66)))
                      .setGeometry(new Cylinder().setHeight(0.25).setRadius(0.08)))))
                .addChild(new Transform().setScale(0.33,0.33,0.33).setTranslation(-0.08,-0.15,0.175)
                  .addChild(new Inline("Crank").setUrl(new String[] {"../../Savage/Weapons/Guns/Lightweight155mmHowitzerCrank.x3d","https://savage.nps.edu/Savage/Weapons/Guns/Lightweight155mmHowitzerCrank.x3d","../../Savage/Weapons/Guns/Lightweight155mmHowitzerCrank.wrl","https://savage.nps.edu/Savage/Weapons/Guns/Lightweight155mmHowitzerCrank.wrl"}))))
              .addChild(new Transform().setRotation(1.0,0.0,0.0,3.14)
                .addChild(new Transform().setTranslation(0.0,0.8,0.0)
                  .addChild(new Transform().setUSE("ElevationGear"))))
              .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setTranslation(-0.25,-1.1,-0.15)
                .addChild(new Transform().setTranslation(0.15,-0.1,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.25,0.2,0.4)))
                    .setGeometry(new Box().setSize(0.425,0.17,0.125))))
                .addChild(new Transform().setTranslation(0.0,0.1,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.25,0.2,0.4)))
                    .setGeometry(new Cylinder().setHeight(0.35).setRadius(0.0625))))
                .addChild(new Transform().setRotation(-1.0,0.0,0.0,1.57).setScale(0.33,0.33,0.33).setTranslation(0.0,0.33,0.0)
                  .addChild(new Inline().setUSE("Crank"))))
              .addChild(new Transform().setRotation(-0.58,-0.58,0.58,2.09).setTranslation(-0.25,-0.4,0.0)
                .addChild(new ProtoInstance("ArbitraryAxisCylinderSensor", "BarrelElevation").setContainerField("children")
                  .addFieldValue(new fieldValue().setName("minAngle").setValue(-1.125))
                  .addFieldValue(new fieldValue().setName("maxAngle").setValue(0))
                  .addFieldValue(new fieldValue().setName("offset").setValue(-0.52))
                  .addFieldValue(new fieldValue().setName("showCylinderSensorShape").setValue(false))
                  .addFieldValue(new fieldValue().setName("children")
                    .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.5,0.0,-0.1)
                      .addChild(new Group("CannonAssembly")
                        .addChild(new Transform().setRotation(0.0,0.0,-1.0,0.79)
                          .addChild(new Transform("Cannon").setRotation(0.0,0.0,-1.0,0.79).setScale(0.033,2.0,0.033).setTranslation(1.2,1.2,0.0)
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.25)))
                              .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))))
                          .addChild(new Transform("MuzzleBrake").setTranslation(2.75,2.63,0.0)
                            .addChild(new Transform("BottomPlate").setRotation(0.0,0.0,1.0,0.79)
                              .addChild(new Shape()
                                .setGeometry(new Box().setSize(0.5,0.07,0.34))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.15))))
                              .addChild(new Transform("TopPlate").setTranslation(0.0,0.175,0.0)
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.3,0.07,0.24))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.15)))))
                              .addChild(new Transform("SuppressionRingOne").setRotation(0.0,0.0,1.0,1.57).setScale(0.0375,0.0375,0.06).setTranslation(0.12,0.0875,0.0)
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.25)))
                                  .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))))
                              .addChild(new Transform("SuppressionRingTwo").setRotation(0.0,0.0,1.0,1.57).setScale(0.0375,0.0375,0.06).setTranslation(-0.12,0.0875,0.0)
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.225)))
                                  .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))))
                              .addChild(new Transform("SuppressionRingThree").setRotation(0.0,0.0,1.0,1.57).setScale(0.0375,0.0375,0.06).setTranslation(0.0,0.0875,0.0)
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.25)))
                                  .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))))
                              .addChild(new Group("TowRing")
                                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setScale(1.1,1.1,1.1).setTranslation(0.31,0.0,0.0)
                                  .addChild(new Shape()
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.5).setSpecularColor(1.0,1.0,1.0)))
                                    .setGeometry(new Extrusion().setBeginCap(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.01,0.0,0.0092,-0.0038,0.0071,-0.0071,0.0038,-0.0092,0.0,-0.01,-0.0038,-0.0092,-0.0071,-0.0071,-0.0092,-0.0038,-0.01,0.0,-0.0092,0.0038,-0.0071,0.0071,-0.0038,0.0092,0.0,0.01,0.0038,0.0092,0.0071,0.0071,0.0092,0.0038,0.01,0.0})).setEndCap(false).setSpine(new MFVec3f(new double[] {0.03,0.0,0.0,0.0276,-0.0114,0.0,0.0213,-0.0213,0.0,0.0114,-0.0276,0.0,0.0,-0.03,0.0,-0.0114,-0.0276,0.0,-0.0213,-0.0213,0.0,-0.0276,-0.0114,0.0,-0.03,0.0,0.0,-0.0276,0.0114,0.0,-0.0213,0.0213,0.0,-0.0114,0.0276,0.0,0.0,0.03,0.0,0.0114,0.0276,0.0,0.0213,0.0213,0.0,0.0276,0.0114,0.0,0.03,0.0,0.0}))))
                                  .addChild(new Transform().setRotation(0.0,-1.0,0.0,1.57).setScale(0.5,1.0,1.0).setTranslation(-0.027,0.0,0.0)
                                    .addChild(new Shape()
                                      .setAppearance(new Appearance()
                                        .setMaterial(new Material().setDiffuseColor(0.5,0.5,0.5).setSpecularColor(1.0,1.0,1.0)))
                                      .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {0.0,0.0,0.007,0.0,0.018,0.025,0.032,0.035,0.04,0.036,0.04,0.04,0.0,0.04,0.0,0.0})).setEndCap(false).setSpine(new MFVec3f(new double[] {0.001,0.0,0.0,0.00092,-0.00038,0.0,0.00071,-0.00071,0.0,0.00038,-0.00092,0.0,0.0,-0.001,0.0,-0.00038,-0.00092,0.0,-0.00071,-0.00071,0.0,-0.00092,-0.00038,0.0,-0.001,0.0,0.0,-0.00092,0.00038,0.0,-0.00071,0.00071,0.0,-0.00038,0.00092,0.0,0.0,0.001,0.0,0.00038,0.00092,0.0,0.00071,0.00071,0.0,0.00092,0.00038,0.0,0.001,0.0,0.0})))))))
                              .addChild(new Transform("MuzzleBase").setRotation(0.0,0.0,1.0,1.57).setScale(0.035,0.166,0.035).setTranslation(-0.25,0.0875,0.0)
                                .addChild(new Shape()
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.15,0.2,0.25)))
                                  .setGeometry(new Extrusion().setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))))))))
                      .addChild(new Group("RecoilCradle")
                        .addChild(new Transform("Cradle").setRotation(0.0,0.0,-1.0,1.57)
                          .addChild(new Transform("RightSidewall").setRotation(0.0,1.0,0.0,1.57).setTranslation(-0.08,0.0,0.25)
                            .addChild(new Shape()
                              .setGeometry(new Box().setSize(0.0625,1.125,0.25))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material())))
                            .addChild(new Transform().setTranslation(-0.06,0.0,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Box().setSize(0.06,0.75,0.15))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(0.1,0.2,0.1)))))
                            .addChild(new Transform("ForwardRightWall").setTranslation(0.0,0.975,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Box().setSize(0.0625,0.775,0.25))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(0.2,0.8,0.2))))
                              .addChild(new Transform().setTranslation(-0.06,0.0,0.0)
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.06,0.5,0.15))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.1,0.2,0.1)))))
                              .addChild(new Transform("FrontCradleBar")
                                .addChild(new Transform("ForwardCoil").setScale(0.4,0.4,0.4).setTranslation(0.25,0.15,0.05)
                                  .addChild(new Shape()
                                    .setGeometry(new Extrusion().setBeginCap(false).setCrossSection(new MFVec2f(new double[] {-0.3,0.3,-0.6,0.1,-0.6,-0.1,-0.3,-0.3,0.3,-0.3,0.6,-0.1,0.6,0.1,0.3,0.3,-0.3,0.3})).setEndCap(false).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.6,0.0})))
                                    .setAppearance(new Appearance()
                                      .setMaterial(new Material().setUSE("grey"))))))))
                          .addChild(new Transform("LeftSideWall").setRotation(0.0,1.0,0.0,1.57).setTranslation(-0.08,0.0,-0.25)
                            .addChild(new Shape()
                              .setGeometry(new Box().setSize(0.0625,1.125,0.25))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material())))
                            .addChild(new Transform().setTranslation(0.06,0.0,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Box().setSize(0.06,0.75,0.15))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(0.1,0.2,0.1)))))
                            .addChild(new Transform("ForwardLeftWall").setTranslation(0.0,0.975,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Box().setSize(0.0625,0.775,0.25))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(0.2,0.8,0.2))))
                              .addChild(new Transform().setTranslation(0.06,0.0,0.0)
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.06,0.5,0.15))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(0.1,0.2,0.1)))))))
                          .addChild(new Transform("Accumulator").setTranslation(-0.325,0.2,0.0)
                            .addChild(new Shape()
                              .setGeometry(new Cylinder().setHeight(0.75).setRadius(0.08))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(0.0,0.25,1.0)))))
                          .addChild(new Transform("RecoilCylinders").setTranslation(-0.25,0.4,0.25)
                            .addChild(new Shape()
                              .setGeometry(new Cylinder().setHeight(0.36).setRadius(0.04))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
                            .addChild(new Transform().setTranslation(0.0,-0.3,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.025))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("grey"))))
                              .addChild(new Transform().setTranslation(0.0,-0.15,0.0)
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.1,0.2,0.1))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("grey"))))))
                            .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.25,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Cylinder().setHeight(0.05).setRadius(0.075))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
                              .addChild(new Transform()
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.05,0.1,0.05))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,1.0)))))))
                          .addChild(new Transform("Coils")
                            .addChild(new Transform("Coil").setRotation(1.0,0.0,0.0,1.57).setTranslation(-0.1,-0.25,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Cylinder().setHeight(0.5).setRadius(0.075))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("grey")))))
                            .addChild(new Transform().setTranslation(0.0,0.1667,0.0)
                              .addChild(new Transform().setUSE("Coil")))
                            .addChild(new Transform().setTranslation(-0.1,0.66,0.0)
                              .addChild(new Transform().setUSE("Coil"))))
                          .addChild(new Transform("LeftRecoilCylinders").setTranslation(-0.25,0.4,-0.25)
                            .addChild(new Shape()
                              .setGeometry(new Cylinder().setHeight(0.36).setRadius(0.04))
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
                            .addChild(new Transform().setTranslation(0.0,-0.3,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Cylinder().setHeight(0.3).setRadius(0.025))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setUSE("grey"))))
                              .addChild(new Transform().setTranslation(0.0,-0.15,0.0)
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.1,0.2,0.1))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setUSE("grey"))))))
                            .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.25,0.0)
                              .addChild(new Shape()
                                .setGeometry(new Cylinder().setHeight(0.05).setRadius(0.075))
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0))))
                              .addChild(new Transform()
                                .addChild(new Shape()
                                  .setGeometry(new Box().setSize(0.05,0.1,0.05))
                                  .setAppearance(new Appearance()
                                    .setMaterial(new Material().setDiffuseColor(1.0,0.0,1.0)))))))
                          .addChild(new Transform("Transfer").setScale(0.75,1.0,0.75).setTranslation(0.1,0.0,0.0)
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material()))
                              .setGeometry(new Extrusion().setCreaseAngle(0.785).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setScale(new MFVec2f(new double[] {0.1,0.35,0.1,0.125,0.0625,0.0625,0.0625,0.0625,0.0425,0.0425,0.0425,0.0425,0.06,0.06,0.06,0.06,0.025,0.025,0.025,0.025,0.0125,0.0125,0.0125,0.0125,0.0125,0.0125,0.0125,0.0125})).setSpine(new MFVec3f(new double[] {0.0,-0.25,0.0,0.0,0.1,0.0,0.0,0.2,0.0,0.0,0.25,0.0,0.0,0.45,0.0,0.0,0.5,0.0,0.0,0.52,0.0,0.0,0.575,0.0,0.0,0.6,0.0,0.0,0.65,0.0,0.0,0.675,0.0,0.0,0.675,0.0,0.0,0.75,0.0,0.0,0.825,0.0})))
                              .addComments(" original scale had 3-tuples instead of 2-tuples 0.1 0.35 0.1, 0.1 0.125 0.1, 0.0625 0.0625 0.0625, 0.0625 0.0625 0.0625, 0.0425 0.0425 0.0425, 0.0425 0.0425 0.0425, 0.06 0.06 0.06, 0.06 0.06 0.06, 0.025 0.025 0.025, 0.025 0.025 0.025, 0.0125 0.0125 0.0125, 0.0125 0.0125 0.0125 "))))
                        .addChild(new Transform("Breach").setTranslation(0.75,0.0,0.0)
                          .addChild(new Shape()
                            .setGeometry(new Box().setSize(0.25,0.25,0.25))
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0))))))))))))))
      .addChild(new Group("TrailerBody")
        .addChild(new Transform("TrailerBodyMain").setRotation(0.0,0.0,1.0,1.57).setScale(0.375,0.375,0.375).setTranslation(-0.11,0.0,-0.2)
          .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
            .addChild(new Shape()
              .setGeometry(new Extrusion().setConvex(false).setCrossSection(new MFVec2f(new double[] {0.0,0.2,-0.3,0.2,-1.0,0.5,-1.2,0.7,-1.5,0.4,-0.8,-0.3,-0.8,-0.6,-2.1,-2.55,-1.9,-2.7,-0.6,-1.3,-0.4,-1.4,-0.1,-1.5,0.1,-1.5,0.4,-1.4,0.6,-1.3,1.9,-2.7,2.1,-2.55,0.8,-0.6,0.8,-0.3,1.5,0.4,1.2,0.7,1.0,0.5,0.3,0.2,0.0,0.2})).setSolid(false).setSpine(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.1667,0.0,0.0,0.33,0.0})))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.15,0.25,0.1)))))
          .addChild(new Transform("RightSpadeHub").setRotation(0.0,0.0,-1.0,0.66).setTranslation(-2.0,2.6,0.1)
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.1667).setRadius(0.1667))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.66))))
            .addChild(new Group("RightSpade")
              .addChild(new Transform().setRotation(0.0,0.0,-1.0,1.57).setScale(0.5,0.5,0.5).setTranslation(-0.1667,0.25,-0.25)
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,4,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,0.0,0.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,0.9,0.2,1.0,0.0,0.0,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,4,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,1.0,0.9,0.2,1.0,1.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,-0.3,0.3,0.2,0.0,0.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.3,0.3,0.2,1.0,0.0,0.0,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,0.9,0.2,1.3,0.3,0.2,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,-0.3,0.3,0.2,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))))))
          .addChild(new Transform("LeftSpadeHub").setRotation(0.0,0.0,1.0,0.66).setTranslation(2.0,2.6,0.1)
            .addChild(new Shape()
              .setGeometry(new Cylinder().setHeight(0.1667).setRadius(0.1667))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.66))))
            .addChild(new Group("LeftSpade")
              .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57).setScale(0.5,0.5,0.5).setTranslation(0.1667,-0.25,-0.25)
                .addChild(new Transform().setRotation(1.0,0.0,0.0,1.57)
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,4,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,1.0,1.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,0.0,0.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,0.9,0.2,1.0,0.0,0.0,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,4,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,1.0,0.9,0.2,1.0,1.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,-0.3,0.3,0.2,0.0,0.0,0.0,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.3,0.3,0.2,1.0,0.0,0.0,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {1.0,1.0,0.0,1.0,0.9,0.2,1.3,0.3,0.2,1.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0)))))
                  .addChild(new Transform()
                    .addChild(new Shape()
                      .setGeometry(new IndexedFaceSet().setSolid(false).setCoordIndex(new int[] {0,1,2,3,-1})
                        .setCoord(new Coordinate().setPoint(new MFVec3f(new double[] {0.0,1.0,0.0,0.0,0.9,0.2,-0.3,0.3,0.2,0.0,1.0,0.0}))))
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0))))))))))
        .addChild(new Transform("LeftFrontStabilizer").setRotation(0.0,1.0,0.0,0.25).setTranslation(0.25,0.66,-0.175)
          .addChild(new Transform().setRotation(0.0,0.0,1.0,0.79)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.15,0.8)))
              .setGeometry(new Box().setSize(0.5,0.125,0.1)))
            .addChild(new Transform("LeftWheel").setRotation(0.0,0.0,-1.0,0.79)
              .addChild(new Transform().setScale(0.05,0.05,0.05).setTranslation(0.2,-0.1,0.15)
                .addChild(new Shape()
                  .setGeometry(new Extrusion("Tire").setBeginCap(false).setConvex(false).setCreaseAngle(1.57).setCrossSection(new MFVec2f(new double[] {1.00,0.00,0.92,-0.38,0.71,-0.71,0.38,-0.92,0.00,-1.00,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1.00,-0.00,-0.92,0.38,-0.71,0.71,-0.38,0.92,0.00,1.00,0.38,0.92,0.71,0.71,0.92,0.38,1.00,0.00})).setEndCap(false).setSpine(new MFVec3f(new double[] {2.00,0.0,0.00,1.85,0.0,0.77,1.41,0.0,1.41,0.77,0.0,1.85,0.00,0.0,2.00,-0.77,0.0,1.85,-1.41,0.0,1.41,-1.85,0.0,0.77,-2.00,0.0,0.00,-1.85,0.0,-0.77,-1.41,0.0,-1.41,-0.77,0.0,-1.85,0.00,0.0,-2.00,0.77,0.0,-1.85,1.41,0.0,-1.41,1.85,0.0,-0.77,2.00,0.0,0.00})))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1))))
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Cylinder().setHeight(1).setRadius(1.5))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("grey")))))
                .addChild(new Transform("WheelHub").setTranslation(0.0,0.66,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Cylinder().setHeight(3).setRadius(0.5))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1))))
                  .addChild(new Transform("LeftStrut").setRotation(0.0,1.0,0.0,0.79)
                    .addChild(new Transform().setTranslation(0.0,0.9,-1.75)
                      .addChild(new Shape()
                        .setGeometry(new Box().setSize(1.0,1.0,5.0))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.2)))))))))))
        .addChild(new Transform("RightFrontStabilizer").setRotation(0.0,1.0,0.0,0.25).setTranslation(0.25,-0.66,-0.175)
          .addChild(new Transform().setRotation(0.0,0.0,-1.0,0.79)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.0,0.15,0.8)))
              .setGeometry(new Box().setSize(0.5,0.125,0.1)))
            .addChild(new Transform("RightWheel").setRotation(0.0,0.0,1.0,0.79)
              .addChild(new Transform().setScale(0.05,0.05,0.05).setTranslation(0.2,0.1,0.15)
                .addChild(new Shape()
                  .setGeometry(new Extrusion().setUSE("Tire"))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1))))
                .addChild(new Transform()
                  .addChild(new Shape()
                    .setGeometry(new Cylinder().setHeight(1).setRadius(1.5))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("grey")))))
                .addChild(new Transform("RightWheelHub").setTranslation(0.0,-0.33,0.0)
                  .addChild(new Shape()
                    .setGeometry(new Cylinder().setHeight(3).setRadius(0.5))
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setDiffuseColor(0.1,0.1,0.1))))
                  .addChild(new Transform("RightStrut").setRotation(0.0,-1.0,0.0,2.09)
                    .addChild(new Transform().setTranslation(0.0,-1.25,1.75)
                      .addChild(new Shape()
                        .setGeometry(new Box().setSize(1.0,1.0,5.0))
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setDiffuseColor(0.2,0.2,0.2)))))))))))))
    .addChild(new Group("ProjectileScene")
      .addChild(new Transform().setTranslation(200.0,-0.35,0.0)
        .addChild(new Shape("Ground")
          .setGeometry(new Box().setSize(410.0,0.2,150.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material())
            .setTexture(new ImageTexture().setUrl(new String[] {"dunes.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/dunes.jpg"})))))
      .addChild(new Transform().setTranslation(200.0,100.0,-75.0)
        .addChild(new Shape("BackDrop")
          .setGeometry(new Box().setSize(410.0,200.0,.2))
          .setAppearance(new Appearance()
            .setTexture(new ImageTexture().setUrl(new String[] {"horizon.jpg","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/horizon.jpg"})))))
      .addChild(new Transform().setTranslation(200.0,-0.25,0.0)
        .addChild(new Shape("CenterLine")
          .setGeometry(new Box().setSize(410.0,0.1,2.0))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.6,0.4,1.0).setEmissiveColor(0.6,0.4,1.0)))))
      .addChild(new EspduTransform("projectileTransform").setAddress("224.0.0.3").setMarking("Projectile").setPort(64200).setSiteID(3).setWriteInterval(0)
        .addChild(new Transform("projectile2").setRotation(0.0,0.0,1.0,-1.57).setScale(1.5,3.0,1.5)
          .addChild(new Shape()
            .setGeometry(new Cylinder().setRadius(.5))
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.887,0.027,0.910).setSpecularColor(0.887,0.027,0.910))))
          .addChild(new Transform().setTranslation(0.0,1.5,0.0)
            .addChild(new Shape()
              .setGeometry(new Cone().setBottomRadius(0.5).setHeight(1))
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(0.35,0.35,0.35).setSpecularColor(0.35,0.35,0.35))))))
        .addChild(new Viewpoint().setDescription("Projectile Rear").setOrientation(0.0,1.0,0.0,-1.57).setPosition(-25.0,0.0,0.0))
        .addChild(new Viewpoint().setDescription("Projectile Side").setPosition(0.0,0.0,50.0))
        .addChild(new Viewpoint().setDescription("Projectile Front").setOrientation(0.0,1.0,0.0,1.57).setPosition(25.0,0.0,0.0)))
      .addChild(new Transform("projectileViewTransform")
        .addChild(new Viewpoint().setDescription("Projectile Side-II").setPosition(0.0,0.0,50.0))
        .addChild(new Viewpoint().setDescription("Projectile Front-II").setOrientation(0.0,1.0,0.0,1.57).setPosition(25.0,0.0,0.0))))
    .addChild(new ROUTE().setFromNode("projectileTransform").setFromField("translation").setToNode("projectileViewTransform").setToField("set_translation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CannonProject model
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
        X3D thisExampleX3dModel = new CannonProject().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CannonProject\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CannonProject\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

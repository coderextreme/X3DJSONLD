package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Texturing.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> An animation of human body modeled and animated in 3d Studio Max environment and then translated into X3D environment. Instead of using 'mesh deformation' like in LaetitiaSprints.x3d (by using Character Studio's physique modifier), which was not modular and compact enough for x3d environment, I used this time 'segmented animation' approach: 1- At first we divided up the body into segments such as head, upperarm and forearm... 2- Then we linked each segment to a segment of biped skeleton such as head to bip-Head, forearm to bip-Forearm... (Biped is a pre-built skeleton structure in 3d Studion Max) 3- After that we could create the walking animation by using biped's animation features. 4- We hid all of the biped segments and then did some tweaks on the body at vertex level to fix the breaking points during the animation. 5- It was ready to be exported into VRML and then to be translated into x3d. To have it work properly in x3d environment, we had to add new routes connecting interpolators with nodes. (except all SCALE-INTERP's and some SCALE-ORI-INTERP's) 6- Then we had to fix the main position interpolator (Laetitia-POS-INTERP) by defining new keyValues. (Adding new translation values to its transform node doesn't help anything at all.) 7- Finally we deleted unnecessary interpolators from the file... After that we added DVDController and WaypointControler to have more control of the path she walks... </p>
 <p> Related links: <a href="../../../StudentProjects/LaetitiaWithDvdController.java">LaetitiaWithDvdController.java</a> source, <a href="../../../StudentProjects/LaetitiaWithDvdControllerIndex.html" target="_top">LaetitiaWithDvdController catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../StudentProjects/LaetitiaWithDvdController.x3d">LaetitiaWithDvdController.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> An animation of human body modeled and animated in 3d Studio Max environment and then translated into X3D environment. Instead of using 'mesh deformation' like in LaetitiaSprints.x3d (by using Character Studio's physique modifier), which was not modular and compact enough for x3d environment, I used this time 'segmented animation' approach: 1- At first we divided up the body into segments such as head, upperarm and forearm... 2- Then we linked each segment to a segment of biped skeleton such as head to bip-Head, forearm to bip-Forearm... (Biped is a pre-built skeleton structure in 3d Studion Max) 3- After that we could create the walking animation by using biped's animation features. 4- We hid all of the biped segments and then did some tweaks on the body at vertex level to fix the breaking points during the animation. 5- It was ready to be exported into VRML and then to be translated into x3d. To have it work properly in x3d environment, we had to add new routes connecting interpolators with nodes. (except all SCALE-INTERP's and some SCALE-ORI-INTERP's) 6- Then we had to fix the main position interpolator (Laetitia-POS-INTERP) by defining new keyValues. (Adding new translation values to its transform node doesn't help anything at all.) 7- Finally we deleted unnecessary interpolators from the file... After that we added DVDController and WaypointControler to have more control of the path she walks... </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Yilmaz Degirmenci </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Yilmaz Degirmenci </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 30 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Not in H-Anim form. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaetitiaWithDvdController.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaetitiaWithDvdController.x3d</a> </td>
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

	* @author Yilmaz Degirmenci
 */

public class LaetitiaWithDvdController
{
	/** Default constructor to create this object. */
	public LaetitiaWithDvdController ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LaetitiaWithDvdController.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("An animation of human body modeled and animated in 3d Studio Max environment and then translated into X3D environment. Instead of using 'mesh deformation' like in LaetitiaSprints.x3d (by using Character Studio's physique modifier), which was not modular and compact enough for x3d environment, I used this time 'segmented animation' approach: 1- At first we divided up the body into segments such as head, upperarm and forearm... 2- Then we linked each segment to a segment of biped skeleton such as head to bip-Head, forearm to bip-Forearm... (Biped is a pre-built skeleton structure in 3d Studion Max) 3- After that we could create the walking animation by using biped's animation features. 4- We hid all of the biped segments and then did some tweaks on the body at vertex level to fix the breaking points during the animation. 5- It was ready to be exported into VRML and then to be translated into x3d. To have it work properly in x3d environment, we had to add new routes connecting interpolators with nodes. (except all SCALE-INTERP's and some SCALE-ORI-INTERP's) 6- Then we had to fix the main position interpolator (Laetitia-POS-INTERP) by defining new keyValues. (Adding new translation values to its transform node doesn't help anything at all.) 7- Finally we deleted unnecessary interpolators from the file... After that we added DVDController and WaypointControler to have more control of the path she walks..."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Yilmaz Degirmenci"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Yilmaz Degirmenci"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("30 April 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Not in H-Anim form."))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaetitiaWithDvdController.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LaetitiaWithDvdController.x3d"))
    .addChild(new ExternProtoDeclare("DvdController").setName("DvdController").setAppinfo("Digital Virtual Display (DVD) Controller Prototype is a heads-up display (HUD) to control animation timing").setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"})
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Short description of what is animated by this DvdController."))
      .addField(new field().setName("playEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether or not play mode is enabled including during startup."))
      .addField(new field().setName("displayMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Initializes how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE."))
      .addField(new field().setName("setDisplayMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Sets how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE."))
      .addField(new field().setName("buttonColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Default button color."))
      .addField(new field().setName("selectedButtonColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Button color when selected by user."))
      .addField(new field().setName("labelColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Default label color."))
      .addField(new field().setName("selectedLabelColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Label color when selected by user."))
      .addField(new field().setName("locationOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Modified screen location and distance (for size)."))
      .addField(new field().setName("clockEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("default value true"))
      .addField(new field().setName("cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Time for complete loop cycle in seconds."))
      .addField(new field().setName("set_cycleInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("cycleInterval_changed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("speedFactor").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Factor used to determine the speed increase/decrease for Fast Rewind and Fast Forward action."))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("startTime_changed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("stopTime_changed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("time_changed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("fraction_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("secondsElapsed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time."))
      .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time."))
      .addField(new field().setName("isLocal").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time."))
      .addField(new field().setName("isPaused").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa."))
      .addField(new field().setName("isRunning").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa."))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Enable/disable console output for troubleshooting"))
      .addField(new field().setName("testTimeVal").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("default value -2")))
    .addChild(new ExternProtoDeclare("WaypointInterpolator").setName("WaypointInterpolator").setAppinfo("Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.").setUrl(new String[] {"../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"})
      .addComments(" Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) ")
      .addComments(" interpolation fields ")
      .addComments(" display-related fields ")
      .addField(new field().setName("description").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Short description of what is animated by this WaypointInterpolator."))
      .addField(new field().setName("waypoints").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Waypoints being traversed with interpolation of intermediate positions and orientations."))
      .addField(new field().setName("add_waypoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Add another single waypoint to array of waypoints recalculate interpolator values."))
      .addField(new field().setName("set_waypoints").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Replace all waypoints recalculate interpolator values."))
      .addField(new field().setName("pitchUpDownForVerticalWaypoints").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope"))
      .addField(new field().setName("legSpeeds").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Units m/sec. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints."))
      .addField(new field().setName("legDurations").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Units in seconds. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints."))
      .addField(new field().setName("defaultSpeed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Units m/sec."))
      .addField(new field().setName("turningRate").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous."))
      .addField(new field().setName("totalDuration").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds."))
      .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("exposed PositionInterpolator and OrientationInterpolator setting"))
      .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("exposed PositionInterpolator setting"))
      .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("exposed OrientationInterpolator setting"))
      .addField(new field().setName("lineColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default color for non-active line segments"))
      .addField(new field().setName("highlightSegmentColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("highlightSegmentColors must contain two color values for each endpoint of the highlight segment."))
      .addField(new field().setName("transparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("1.0 is completely transparent, 0.0 is completely opaque."))
      .addField(new field().setName("labelDisplayMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("allowed values: none; waypoints (produce labels at each waypoint); or interpolation (produce single moving label at interpolator time course speed location)"))
      .addField(new field().setName("heightLabel").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("allowed values: altitude depth (negate Y value) none"))
      .addField(new field().setName("labelOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("heightLabel relative location"))
      .addField(new field().setName("labelFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("heightLabel text size"))
      .addField(new field().setName("labelColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("heightLabel text color"))
      .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("enable console output to trace script computations and prototype progress"))
      .addField(new field().setName("outputInitializationComputations").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Output the number of waypoints totalDistance and totalDuration to console upon initialization"))
      .addField(new field().setName("verticalDropLineColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("default color for vertical drop-line segments"))
      .addField(new field().setName("verticalDropLineTransparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("1.0 is completely transparent, 0.0 is completely opaque.")))
    .addChild(new ProtoInstance("DvdController", "SampleInterface").setContainerField("children")
      .addFieldValue(new fieldValue().setName("displayMode").setValue("PLAYBACK_SLIDER"))
      .addFieldValue(new fieldValue().setName("playEnabled").setValue(true))
      .addFieldValue(new fieldValue().setName("buttonColor").setValue(new SFColor(0.655,0.655,0.655)))
      .addFieldValue(new fieldValue().setName("selectedButtonColor").setValue(new SFColor(0.675,0.675,0.675)))
      .addFieldValue(new fieldValue().setName("selectedLabelColor").setValue(new SFColor(0.9,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("locationOffset").setValue(new SFVec3f(-3.0,-1.0,0.0)))
      .addFieldValue(new fieldValue().setName("cycleInterval").setValue(7329.5))
      .addFieldValue(new fieldValue().setName("speedFactor").setValue(10.0))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(false)))
    .addChild(new ProtoInstance("WaypointInterpolator", "TrackBuilder").setContainerField("children")
      .addFieldValue(new fieldValue().setName("description").setValue("TrackBuilder"))
      .addFieldValue(new fieldValue().setName("waypoints").setValue(new MFVec3f(new MFVec3f(new double[] {0.0,0.0,-1000.0,0.0,0.0,-980.0,0.0,0.0,-960.0,0.0,0.0,-940.0,0.0,0.0,-920.0,0.0,0.0,-900.0,0.0,0.0,-880.0,0.0,0.0,-860.0,0.0,0.0,-840.0,0.0,0.0,-820.0,0.0,0.0,-800.0,0.0,0.0,-780.0,0.0,0.0,-760.0,0.0,0.0,-740.0,0.0,0.0,-720.0,0.0,0.0,-700.0,0.0,0.0,-680.0,0.0,0.0,-660.0,0.0,0.0,-640.0,0.0,0.0,-620.0,0.0,0.0,-600.0,0.0,0.0,-580.0,0.0,0.0,-560.0,0.0,0.0,-540.0,0.0,0.0,-520.0,0.0,0.0,-500.0,0.0,0.0,-480.0,0.0,0.0,-460.0,0.0,0.0,-440.0,0.0,0.0,-420.0,0.0,0.0,-400.0,0.0,0.0,-390.0,0.0,0.0,-380.0,0.0,0.0,-370.0,0.0,0.0,-360.0}))))
      .addFieldValue(new fieldValue().setName("pitchUpDownForVerticalWaypoints").setValue(false))
      .addComments(" Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) ")
      .addFieldValue(new fieldValue().setName("legDurations").setValue(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}))
      .addFieldValue(new fieldValue().setName("legSpeeds").setValue(new double[] {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0}))
      .addFieldValue(new fieldValue().setName("defaultSpeed").setValue(5))
      .addFieldValue(new fieldValue().setName("turningRate").setValue(90))
      .addFieldValue(new fieldValue().setName("lineColor").setValue(new SFColor(1.0,0.0,0.0)))
      .addFieldValue(new fieldValue().setName("highlightSegmentColor").setValue(new SFColor(0.2,0.2,1.0)))
      .addFieldValue(new fieldValue().setName("transparency").setValue(0))
      .addFieldValue(new fieldValue().setName("labelDisplayMode").setValue("interpolation"))
      .addFieldValue(new fieldValue().setName("heightLabel").setValue("altitude"))
      .addFieldValue(new fieldValue().setName("labelOffset").setValue(new SFVec3f(0.0,-0.8,0.0)))
      .addFieldValue(new fieldValue().setName("labelFontSize").setValue(0.5))
      .addFieldValue(new fieldValue().setName("labelColor").setValue(new SFColor(0.3,0.9,0.3)))
      .addFieldValue(new fieldValue().setName("traceEnabled").setValue(false)))
    .addChild(new ROUTE().setFromNode("TrackBuilder").setFromField("totalDuration").setToNode("SampleInterface").setToField("set_cycleInterval"))
    .addChild(new ROUTE().setFromNode("SampleInterface").setFromField("fraction_changed").setToNode("TrackBuilder").setToField("set_fraction"))
    .addChild(new Background().setGroundAngle(new double[] {1.309,1.570796}).setGroundColor(new MFColor(new double[] {0.0,0.0,0.0})).setSkyAngle(new double[] {1.309,1.571}).setBackUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_back.jpg","../UniversalMediaPanoramas/desert_1_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_back.jpg"}).setBottomUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_bottom.jpg","../UniversalMediaPanoramas/desert_1_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_bottom.jpg"}).setFrontUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_front.jpg","../UniversalMediaPanoramas/desert_1_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_front.jpg"}).setLeftUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_left.jpg","../UniversalMediaPanoramas/desert_1_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_left.jpg"}).setRightUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_right.jpg","../UniversalMediaPanoramas/desert_1_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_right.jpg"}).setTopUrl(new String[] {"urn:web3d:media:textures/panoramas/desert_1_top.jpg","../UniversalMediaPanoramas/desert_1_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/desert_1_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/desert_1_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/desert_1_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/desert_1_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/desert_1_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/desert_1_top.jpg"}))
    .addChild(new Transform("LaetitiaTransformDVD")
      .addChild(new Transform("Laetitia").setScale(.5,.5,.5)
        .addChild(new TimeSensor("Laetitia-TIMER").setCycleInterval(8).setLoop(true))
        .addChild(new Transform("Laetitia_Pelvis").setRotation(-0.5867,-0.5581,0.5867,-4.16).setScale(50.0,40.0,50.0).setTranslation(0.3421,0.0,0.0)
          .addChild(new PositionInterpolator("Laetitia_Pelvis-POS-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFVec3f(new double[] {0.3421,0.0,0.0,0.4168,0.0,0.2984,0.5021,0.0,0.6595,0.5839,0.0,1.001,0.6484,0.0,1.239,0.6817,0.0,1.293,0.6462,0.0,0.9199,0.5168,0.0,-0.03664,0.3846,0.0,-0.9679,0.3474,0.0,-1.223,0.4644,0.0,-0.3602,0.6236,0.0,0.8178,0.6805,0.0,1.24,0.5818,0.0,0.5086,0.4301,0.0,-0.6137,0.3425,0.0,-1.259,0.4074,0.0,-0.7806,0.5568,0.0,0.3233,0.6727,0.0,1.182,0.6488,0.0,1.005,0.511,0.0,-0.0157,0.3743,0.0,-1.025,0.3546,0.0,-1.17,0.4735,0.0,-0.2927,0.622,0.0,0.8057,0.6824,0.0,1.255,0.592,0.0,0.5842,0.44,0.0,-0.5404,0.344,0.0,-1.247,0.3872,0.0,-1.002,0.5118,0.0,-0.2349,0.637,0.0,0.668,0.6781,0.0,1.318,0.4329,0.0,1.292,0.3419,0.0,1.264})))
          .addChild(new OrientationInterpolator("Laetitia_Pelvis-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_Pelvis_ROT_INTERP_6_99_keyValue()))
          .addChild(new Transform("Laetitia_Spine").setRotation(0.003939,0.1433,0.9897,-0.04677).setScale(0.2518,0.6497,0.52).setScaleOrientation(-0.03313,1.696E-4,-0.9995,-0.01025).setTranslation(0.4594,-0.02874,2.004E-4)
            .addChild(new PositionInterpolator("Laetitia_Spine-POS-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFVec3f(new double[] {0.4594,-0.02874,2.004E-4,0.4594,-0.02974,2.005E-4,0.4593,-0.03182,2.005E-4,0.4592,-0.03356,2.005E-4,0.4592,-0.03354,2.004E-4,0.4594,-0.03038,2.004E-4,0.4597,-0.01943,2.005E-4,0.46,0.002285,2.005E-4,0.4596,0.02244,2.005E-4,0.4595,0.02781,2.005E-4,0.46,0.008193,2.006E-4,0.4598,-0.0186,2.006E-4,0.4594,-0.0282,2.007E-4,0.4599,-0.01157,2.004E-4,0.4599,0.01396,1.993E-4,0.4594,0.02862,2.003E-4,0.4598,0.01775,2.003E-4,0.46,-0.007351,2.005E-4,0.4595,-0.02688,2.008E-4,0.4596,-0.02286,2.006E-4,0.46,3.581E-4,2.002E-4,0.4596,0.02331,2.007E-4,0.4595,0.0266,2.012E-4,0.46,0.006657,2.011E-4,0.4598,-0.01832,2.01E-4,0.4594,-0.02854,1.991E-4,0.4599,-0.01328,1.999E-4,0.4599,0.01229,1.986E-4,0.4594,0.02837,2.015E-4,0.4596,0.0228,1.987E-4,0.46,0.005342,1.996E-4,0.4598,-0.01519,1.994E-4,0.4594,-0.02997,1.993E-4,0.4594,-0.02939,2.01E-4,0.4594,-0.02874,2.0E-4})))
            .addChild(new OrientationInterpolator("Laetitia_Spine-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_Spine_ROT_INTERP_7_101_keyValue()))
            .addChild(new OrientationInterpolator("Laetitia_Spine-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {-0.03313,1.696E-4,-0.9995,-0.01025,-0.05299,2.331E-4,-0.9986,-0.008805,-0.08374,3.072E-4,-0.9965,-0.007364,-0.1264,3.719E-4,-0.992,-0.005931,-0.182,4.028E-4,-0.9833,-0.004503,-0.254,3.763E-4,-0.9672,-0.00307,-0.3584,2.4E-4,-0.9336,-0.001429,-0.05961,-1.684E-5,0.9982,-5.929E-4,0.1338,1.413E-4,0.991,-0.002137,0.1399,1.735E-4,0.9902,-0.002505,0.1001,3.589E-5,0.995,-7.341E-4,-0.2787,2.3E-4,-0.9604,-0.001726,-0.2786,3.504E-4,-0.9604,-0.002618,-0.2929,1.511E-4,-0.9561,-0.001078,0.1323,8.416E-5,0.9912,-0.001255,0.1394,1.781E-4,0.9902,-0.002578,0.1389,1.096E-4,0.9903,-0.001598,-0.3228,1.079E-4,-0.9465,-6.921E-4,-0.278,3.335E-4,-0.9606,-0.002494,-0.2772,2.825E-4,-0.9608,-0.002121,-0.9033,0.0,0.4291,-7.486E-5,0.1412,1.466E-4,0.99,-0.0021,0.1404,1.67E-4,0.9901,-0.002396,0.07924,2.26E-5,0.9969,-5.955E-4,-0.2789,2.282E-4,-0.9603,-0.0017,-0.2788,3.55E-4,-0.9604,-0.002649,-0.2871,1.699E-4,-0.9579,-0.001236,0.127,6.831E-5,0.9919,-0.001105})))
            .addComments(" 0.1396 1.762E-4 0.9902 -0.002555, 0.1418 1.435E-4 0.9899 -0.002053, 0.03249 0.0 0.9995 -4.765E-4, -0.2996 2.029E-4 -0.9541 -0.001419, -0.2747 3.671E-4 -0.9615 -0.002779, -0.1797 2.357E-4 -0.9837 -0.002664, -0.1426 1.824E-4 -0.9898 -0.002589, ")
            .addChild(new Transform("Laetitia_Spine1").setRotation(0.0,1.0,0.0,-0.001952).setScale(1.839,1.0,1.0).setScaleOrientation(-0.001213,-1.0,0.0,-0.002289).setTranslation(1.0,0.0,7.089E-4)
              .addChild(new Transform("Laetitia_Spine2").setRotation(0.0,1.0,0.0,-0.001875).setScale(1.123,1.0,1.0).setScaleOrientation(3.709E-5,-1.0,0.0,-0.001875).setTranslation(1.0,0.0,7.964E-4)
                .addChild(new Transform("Laetitia_Spine3").setRotation(0.0,1.0,0.0,-0.001875).setTranslation(1.0,0.0,7.963E-4)
                  .addChild(new Transform("Laetitia_Neck").setScale(0.5769,1.0,1.0).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,4.592E-4)
                    .addChild(new OrientationInterpolator("Laetitia_Neck-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.5686,0.5882,0.6078,0.6275,0.6471}).setKeyValue(new MFRotation(new double[] {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0,-2.178E-5,0.0,-1.827E-5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,-3.018E-4,1.0,0.0,0.0,-5.398E-4,-1.0,-1.087E-5,0.0,-2.202E-4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,-3.501E-4,-1.0,2.106E-5,0.0,-6.366E-5,-1.0,-2.521E-5,0.0,-7.047E-5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,-7.264E-5,0.0,-1.152E-5,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,-2.424E-4,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,-2.28E-5,0.0,-9.154E-5,-1.0,0.0,0.0,-2.268E-4,-1.0,0.0,0.0,-1.267E-4,1.0,0.0,0.0,0.0,1.0,-4.671E-5,0.0,-3.769E-5,1.0,0.0,0.0,0.0,1.0,7.408E-5,0.0,-3.928E-5,1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,1.42E-5,0.0,-6.422E-5,1.0,0.0,0.0,0.0,-1.0,-1.542E-5,0.0,-9.057E-5,1.0,0.0,0.0,0.0})))
                    .addChild(new Transform("Laetitia_Head").setRotation(-0.9709,-0.2393,0.00574,-0.0515).setScale(3.133,1.673,1.808).setScaleOrientation(2.618E-4,0.9991,-0.04318,-0.01232).setTranslation(1.0,0.0,0.0)
                      .addChild(new OrientationInterpolator("Laetitia_Head-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_Head_ROT_INTERP_12_104_keyValue()))
                      .addChild(new OrientationInterpolator("Laetitia_Head-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_Head_SCALE_ORI_INTERP_12_105_keyValue()))
                      .addChild(new Transform("Laetitia_HeadNub").setScale(0.1157,0.125,0.1157).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0))
                      .addChild(new Transform("head-Transform").setRotation(-0.1076,-0.02227,-0.9939,-1.584).setScale(0.0951,0.1039,0.06101).setScaleOrientation(-0.01089,-0.8089,-0.5879,-0.01796).setTranslation(-0.2442,-0.01193,0.03446)
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                            .setTexture(new ImageTexture("LaetitiaBodyTemplate").setUrl(new String[] {"LaetitiaBodyTemplate.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaetitiaBodyTemplate.jpg"})))
                          .setGeometry(new IndexedFaceSet("head-FACES").setDEF("head-FACES").setCcw(false).setCreaseAngle(15)
                            .setTexCoord(new TextureCoordinate("head-TEXCOORD").setPoint(gethead_TEXCOORD_15_110_point()))
                            .setCoord(new Coordinate("head-COORD").setPoint(gethead_COORD_15_111_point()))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                            .setTexture(new ImageTexture("LaetitiaHeadTemplate").setUrl(new String[] {"LaetitiaHeadTemplate.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaetitiaHeadTemplate.jpg"})))
                          .setGeometry(new IndexedFaceSet("head-FACE").setDEF("head-FACE").setCcw(false).setCreaseAngle(15).setCoordIndex(gethead_FACE_14_117_coordIndex()).setTexCoordIndex(gethead_FACE_14_117_texCoordIndex())
                            .setTexCoord(new TextureCoordinate().setUSE("head-TEXCOORD"))
                            .setCoord(new Coordinate().setUSE("head-COORD"))))))
                    .addChild(new Transform("Laetitia_L_Clavicle").setRotation(-0.6391,-0.7691,-2.7E-4,-3.141).setScale(1.411,3.308,2.5).setScaleOrientation(-0.01368,-3.874E-4,-0.9999,-0.1185).setTranslation(-0.2592,0.2692,-5.777E-4)
                      .addChild(new Transform("Laetitia_L_UpperArm").setRotation(-0.1559,-0.1957,0.9682,-1.335).setScale(1.358,1.674,0.9318).setScaleOrientation(-0.1133,0.415,0.9027,-0.477).setTranslation(1.0,0.0,0.0)
                        .addChild(new OrientationInterpolator("Laetitia_L_UpperArm-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_UpperArm_ROT_INTERP_13_123_keyValue()))
                        .addChild(new OrientationInterpolator("Laetitia_L_UpperArm-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1437,0.1437,0.1569,0.1702,0.1702,0.1765,0.1961,0.2121,0.2121,0.2157,0.2353,0.2387,0.2387,0.2549,0.2743,0.2743,0.2745,0.2941,0.2998,0.2998,0.3137,0.3333,0.3402,0.3402,0.3529,0.3665,0.3665,0.3725,0.3922,0.4025,0.4025,0.4118,0.4278,0.4278,0.4314,0.451,0.4683,0.4683,0.4706,0.4902,0.4949,0.4949,0.5098,0.5294,0.5326,0.5326,0.549,0.5593,0.5593,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_UpperArm_SCALE_ORI_INTERP_13_124_keyValue()))
                        .addChild(new Transform("Laetitia_L_Forearm").setRotation(0.0,1.0,0.0,-0.1004).setScale(0.9064,1.0,1.001).setScaleOrientation(0.0,-1.0,0.0,-0.1514).setTranslation(1.0,0.0,0.0)
                          .addChild(new OrientationInterpolator("Laetitia_L_Forearm-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,-0.1004,0.0,1.0,0.0,-0.09639,0.0,1.0,0.0,-0.08732,0.0,1.0,0.0,-0.07749,0.0,1.0,0.0,-0.0712,0.0,1.0,0.0,-0.07279,0.0,1.0,0.0,-0.08656,0.0,1.0,0.0,-0.1276,0.0,1.0,0.0,-0.2415,0.0,1.0,0.0,-0.3605,0.0,1.0,0.0,-0.3982,0.0,1.0,0.0,-0.3097,0.0,1.0,0.0,-0.176,0.0,1.0,0.0,-0.1008,0.0,1.0,0.0,-0.1597,0.0,1.0,0.0,-0.2913,0.0,1.0,0.0,-0.3923,0.0,1.0,0.0,-0.3694,0.0,1.0,0.0,-0.2472,0.0,1.0,0.0,-0.1276,0.0,1.0,0.0,-0.1124,0.0,1.0,0.0,-0.2179,0.0,1.0,0.0,-0.3482,0.0,1.0,0.0,-0.4001,0.0,1.0,0.0,-0.3189,0.0,1.0,0.0,-0.185,0.0,1.0,0.0,-0.102,0.0,1.0,0.0,-0.1449,0.0,1.0,0.0,-0.2627,0.0,1.0,0.0,-0.3754,0.0,1.0,0.0,-0.4192,0.0,1.0,0.0,-0.4249,0.0,1.0,0.0,-0.4139,0.0,1.0,0.0,-0.4024,0.0,1.0,0.0,-0.4014})))
                          .addChild(new OrientationInterpolator("Laetitia_L_Forearm-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,-0.1514,0.0,-1.0,0.0,-0.1455,-1.083E-5,-1.0,0.0,-0.1319,3.754E-5,-1.0,0.0,-0.1172,4.493E-5,-1.0,0.0,-0.1078,4.564E-5,-1.0,0.0,-0.1102,2.22E-5,-1.0,0.0,-0.1308,0.0,-1.0,0.0,-0.1916,0.0,-1.0,0.0,-0.3534,0.0,-1.0,0.0,-0.5077,0.0,-1.0,0.0,-0.5534,0.0,-1.0,0.0,-0.4437,0.0,-1.0,0.0,-0.2618,0.0,-1.0,0.0,-0.152,0.0,-1.0,0.0,-0.2384,0.0,-1.0,0.0,-0.4199,0.0,-1.0,0.0,-0.5464,0.0,-1.0,0.0,-0.5188,0.0,-1.0,0.0,-0.3611,0.0,-1.0,0.0,-0.1917,0.0,-1.0,0.0,-0.1693,0.0,-1.0,0.0,-0.3209,0.0,-1.0,0.0,-0.4926,0.0,-1.0,0.0,-0.5557,0.0,-1.0,0.0,-0.4556,0.0,-1.0,0.0,-0.2747,0.0,-1.0,0.0,-0.1539,0.0,-1.0,0.0,-0.2169,0.0,-1.0,0.0,-0.3821,0.0,-1.0,0.0,-0.526,0.0,-1.0,0.0,-0.5782,0.0,-1.0,0.0,-0.5849,0.0,-1.0,0.0,-0.572,0.0,-1.0,0.0,-0.5585,0.0,-1.0,0.0,-0.5572})))
                          .addChild(new Transform("Laetitia_L_Hand").setRotation(0.9994,0.02499,-0.02501,-1.571).setScale(0.396,0.4167,0.4167).setScaleOrientation(0.0,-1.0,7.94E-4,-0.05).setTranslation(1.0,0.0,0.0)
                            .addChild(new OrientationInterpolator("Laetitia_L_Hand-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_Hand_ROT_INTERP_15_127_keyValue()))
                            .addChild(new OrientationInterpolator("Laetitia_L_Hand-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1801,0.1801,0.1961,0.2155,0.2155,0.2157,0.2353,0.2446,0.2446,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3828,0.3828,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.527,0.527,0.5294,0.549,0.567,0.567,0.5686,0.5882,0.6077,0.6077,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_Hand_SCALE_ORI_INTERP_15_128_keyValue()))
                            .addChild(new Transform("Laetitia_L_Finger0").setRotation(1.0,1.268E-5,-1.262E-5,-7.963E-4).setScale(0.25,0.25,0.25).setScaleOrientation(0.08024,0.0,0.9968,-0.1396).setTranslation(1.0,0.0,0.0)
                              .addChild(new Transform("Laetitia_L_Finger0Nub").setScale(0.1667,0.25,0.25).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0)))
                            .addChild(new Transform("l_hand").setRotation(0.5412,0.7144,0.4435,-1.924).setScale(0.1656,0.1954,0.1146).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(-5.97,-0.5657,-1.683)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                                  .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                                .setGeometry(new IndexedFaceSet("l_hand-FACES").setDEF("l_hand-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(getl_hand_FACES_17_134_coordIndex()).setTexCoordIndex(getl_hand_FACES_17_134_texCoordIndex())
                                  .setTexCoord(new TextureCoordinate("l_hand-TEXCOORD").setPoint(getl_hand_TEXCOORD_18_134_point()))
                                  .setCoord(new Coordinate("l_hand-COORD").setPoint(getl_hand_COORD_18_135_point()))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                                  .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                                .setGeometry(new IndexedFaceSet("l_hand-FACE").setDEF("l_hand-FACE").setCcw(false).setCreaseAngle(15)
                                  .setTexCoord(new TextureCoordinate().setUSE("l_hand-TEXCOORD"))
                                  .setCoord(new Coordinate().setUSE("l_hand-COORD"))))))
                          .addChild(new Transform("l_forArm").setRotation(-0.7213,-0.6741,0.1591,-3.327).setScale(0.06897,0.0779,0.04745).setScaleOrientation(-0.8621,0.07419,-0.5013,-0.03722).setTranslation(-1.364,-0.7013,0.2351)
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                                .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                              .setGeometry(new IndexedFaceSet("l_forArm-FACES").setDEF("l_forArm-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {0,3,1,-1,5,4,6,-1,7,5,8,-1,7,8,9,-1,7,4,5,-1,3,6,4,-1,7,9,10,-1,8,13,14,-1,15,16,13,-1,14,17,12,-1,17,16,18,-1,16,17,14,-1,16,3,18,-1,9,8,14,-1,13,16,14,-1,16,15,6,-1,3,16,6,-1,10,9,14,-1,18,3,0,-1,1,3,4,-1,1,4,7,-1,1,10,2,-1,12,10,14,-1,2,10,11,-1,10,12,11,-1,1,7,10,-1}).setTexCoordIndex(new int[] {19,22,21,-1,23,25,24,-1,26,23,27,-1,26,27,28,-1,26,25,23,-1,22,24,25,-1,26,28,29,-1,27,33,32,-1,34,35,33,-1,32,36,30,-1,36,35,37,-1,35,36,32,-1,35,22,37,-1,28,27,32,-1,33,35,32,-1,35,34,24,-1,22,35,24,-1,29,28,32,-1,37,22,19,-1,21,22,25,-1,21,25,26,-1,21,29,20,-1,30,29,32,-1,20,29,31,-1,29,30,31,-1,21,26,29,-1})
                                .setTexCoord(new TextureCoordinate("l_forArm-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.379,0.6153,0.4316,0.5878,0.4019,0.5859,0.3644,0.5404,0.3711,0.438,0.363,0.4443,0.3752,0.5355,0.3969,0.5325,0.3896,0.4348,0.4186,0.5324,0.4231,0.5451,0.4257,0.5881,0.4355,0.588,0.4025,0.5345,0.3814,0.4347,0.3647,0.4436,0.3797,0.5379,0.4049,0.5869,0.3848,0.5924})))
                                .setCoord(new Coordinate("l_forArm-COORD").setPoint(new MFVec3f(new double[] {11.05,14.11,-10.53,9.679,16.9,-7.897,10.47,16.74,-4.998,11.27,19.13,-13.57,9.766,19.76,-11.47,10.56,27.41,-13.72,11.55,26.82,-15.64,10.64,20.1,-9.355,12.31,28.0,-11.55,12.58,20.28,-6.89,11.6,19.46,-5.981,11.56,16.56,-4.503,13.15,16.62,-6.061,13.41,27.64,-12.96,13.67,19.78,-9.205,13.2,27.21,-14.73,13.48,19.35,-11.54,13.65,16.67,-8.376,13.13,15.93,-10.16})))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                                .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                              .setGeometry(new IndexedFaceSet("l_forArm-FACE").setDEF("l_forArm-FACE").setCcw(false).setCreaseAngle(15)
                                .setTexCoord(new TextureCoordinate().setUSE("l_forArm-TEXCOORD"))
                                .setCoord(new Coordinate().setUSE("l_forArm-COORD"))))))
                        .addChild(new Transform("l_upperArm").setRotation(-0.7296,-0.6768,0.09813,-3.214).setScale(0.06873,0.07093,0.04743).setScaleOrientation(-0.1994,0.05235,-0.9785,-0.3242).setTranslation(-0.2537,-0.7013,-0.01026)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                              .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                            .setGeometry(new IndexedFaceSet("l_upperArm-FACES").setDEF("l_upperArm-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {3,4,21,-1,6,7,8,-1,3,21,8,-1,5,21,4,-1,4,2,5,-1,7,1,8,-1,9,22,10,-1,10,7,11,-1,6,5,12,-1,12,11,6,-1,13,2,9,-1,22,9,2,-1,11,7,6,-1,7,10,1,-1,13,5,2,-1,5,13,12,-1,9,14,15,-1,9,15,16,-1,16,17,18,-1,10,11,20,-1,19,20,11,-1,11,12,19,-1,19,12,18,-1,10,14,9,-1,13,16,12,-1,9,16,13,-1,18,12,16,-1,16,15,17,-1,0,8,1,-1,21,6,8,-1,5,6,21,-1,1,22,2,-1,22,1,10,-1}).setTexCoordIndex(new int[] {16,18,17,-1,19,21,20,-1,16,17,20,-1,22,17,18,-1,18,23,22,-1,21,24,20,-1,26,24,27,-1,27,21,29,-1,19,22,30,-1,30,29,19,-1,31,23,26,-1,28,26,23,-1,29,21,19,-1,21,27,24,-1,31,22,23,-1,22,31,30,-1,26,33,32,-1,26,32,34,-1,34,36,35,-1,27,29,38,-1,37,38,29,-1,29,30,37,-1,37,30,35,-1,27,33,26,-1,31,34,30,-1,26,34,31,-1,35,30,34,-1,34,32,36,-1,25,20,24,-1,17,19,20,-1,22,19,17,-1,28,39,23,-1,40,24,27,-1})
                              .setTexCoord(new TextureCoordinate("l_upperArm-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2689,0.3131,0.4293,0.7821,0.4225,0.7765,0.4384,0.778,0.4029,0.7448,0.3927,0.769,0.3796,0.7282,0.4393,0.7324,0.4636,0.7422,0.3712,0.7302,0.3735,0.7608,0.4121,0.6221,0.379,0.6153,0.436,0.7234,0.3921,0.6306,0.4214,0.6366,0.4371,0.6324,0.4316,0.5878,0.4019,0.5859,0.4389,0.6127,0.4257,0.5881,0.4355,0.588,0.4049,0.5869,0.3848,0.5924,0.4252,0.6776,0.3897,0.6813})))
                              .setCoord(new Coordinate("l_upperArm-COORD").setPoint(new MFVec3f(new double[] {6.582,2.636,-6.559,7.888,6.002,-2.917,8.967,5.773,1.759,10.47,1.846,-2.748,11.01,2.906,-1.044,11.72,5.376,-2.143,12.18,4.017,-5.878,10.3,5.305,-8.318,9.02,1.925,-4.966,9.039,14.26,-6.339,11.04,14.33,-10.76,12.9,13.1,-8.93,13.09,12.86,-5.75,10.9,9.892,-2.5,9.671,17.07,-8.071,10.47,16.98,-5.016,11.36,15.2,-3.537,11.56,17.04,-4.401,13.15,16.8,-6.074,13.65,16.67,-8.376,13.12,16.1,-10.33,11.35,2.461,-3.731,8.372,10.02,-4.531})))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                              .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                            .setGeometry(new IndexedFaceSet("l_upperArm-FACE").setDEF("l_upperArm-FACE").setCcw(false).setCreaseAngle(15)
                              .setTexCoord(new TextureCoordinate().setUSE("l_upperArm-TEXCOORD"))
                              .setCoord(new Coordinate().setUSE("l_upperArm-COORD"))))))
                      .addChild(new Transform("l_clavicle").setRotation(-0.994,-0.1004,0.04437,-3.252).setScale(0.1184,0.1055,0.04432).setScaleOrientation(0.01756,-0.0847,-0.9963,-0.7579).setTranslation(-0.2479,0.1346,-0.02294)
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                            .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                          .setGeometry(new IndexedFaceSet("l_clavicle-FACES").setDEF("l_clavicle-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {4,13,1,-1,1,5,7,-1,1,7,11,-1,2,10,3,-1,6,8,10,-1,2,9,10,-1,9,6,10,-1,12,6,4,-1,12,8,6,-1,1,11,12,-1,11,8,12,-1,13,0,1,-1,16,7,14,-1,10,16,3,-1,7,16,8,-1,10,8,16,-1,5,15,7,-1,14,7,15,-1,7,8,11,-1,1,12,4,-1}).setTexCoordIndex(new int[] {13,14,9,-1,9,15,16,-1,9,16,17,-1,10,19,11,-1,21,22,19,-1,10,18,19,-1,18,21,19,-1,23,21,24,-1,23,22,21,-1,9,17,25,-1,26,22,23,-1,14,12,9,-1,29,31,27,-1,32,29,33,-1,31,29,34,-1,32,34,29,-1,30,28,31,-1,27,31,28,-1,31,34,35,-1,38,40,39,-1})
                            .setTexCoord(new TextureCoordinate("l_clavicle-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.3005,0.3507,0.0756,0.5956,0.05235,0.6182,0.2737,0.38,0.2965,0.3748,0.2846,0.3771,0.3309,0.3146,0.3367,0.3446,0.3196,0.3581,0.1002,0.6439,0.06094,0.6314,0.2095,0.6318,0.1013,0.6609,0.07045,0.6433,0.09562,0.6679,0.1058,0.6699,0.3073,0.3671,0.07699,0.6575,0.4293,0.7821,0.4384,0.778,0.3927,0.769,0.4636,0.7422,0.4656,0.7817,0.3887,0.7856,0.3735,0.7608,0.4397,0.795,0.4549,0.7938,0.0,0.0,0.0,0.0,0.3005,0.3507,0.2965,0.3748,0.3073,0.3671})))
                            .setCoord(new Coordinate("l_clavicle-COORD").setPoint(new MFVec3f(new double[] {0.3071,-1.822,3.669,4.137,1.415,4.522,4.293,3.33,-11.86,6.71,3.47,-7.397,3.076,-1.088,1.459,9.042,4.925,3.135,3.297,-0.2019,0.05315,8.908,1.464,2.871,6.43,1.102,2.846,2.709,0.07128,-3.897,5.903,1.244,-5.133,6.557,0.6031,3.098,3.506,-0.4116,2.831,1.584,-1.429,3.229,10.53,1.909,-2.821,11.01,2.906,-1.044,9.554,2.227,-5.929})))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                            .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                          .setGeometry(new IndexedFaceSet("l_clavicle-FACE").setDEF("l_clavicle-FACE").setCcw(false).setCreaseAngle(15)
                            .setTexCoord(new TextureCoordinate().setUSE("l_clavicle-TEXCOORD"))
                            .setCoord(new Coordinate().setUSE("l_clavicle-COORD"))))))
                    .addChild(new Transform("Laetitia_R_Clavicle").setRotation(0.6391,-0.7691,2.678E-4,-3.141).setScale(1.411,3.308,2.5).setScaleOrientation(0.01368,-3.874E-4,0.9999,-0.1185).setTranslation(-0.2592,-0.2692,-5.791E-4)
                      .addChild(new Transform("Laetitia_R_UpperArm").setRotation(0.05654,-0.07432,-0.9956,-1.268).setScale(1.361,1.684,0.9242).setScaleOrientation(0.04483,0.1362,-0.9897,-0.5105).setTranslation(1.0,0.0,0.0)
                        .addChild(new OrientationInterpolator("Laetitia_R_UpperArm-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_UpperArm_ROT_INTERP_13_195_keyValue()))
                        .addChild(new OrientationInterpolator("Laetitia_R_UpperArm-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_UpperArm_SCALE_ORI_INTERP_13_196_keyValue()))
                        .addChild(new Transform("Laetitia_R_Forearm").setRotation(0.0,1.0,0.0,-0.1004).setScale(0.9064,1.0,1.001).setScaleOrientation(0.0,-1.0,0.0,-0.1514).setTranslation(1.0,0.0,0.0)
                          .addChild(new OrientationInterpolator("Laetitia_R_Forearm-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,-0.1004,0.0,1.0,0.0,-0.1524,0.0,1.0,0.0,-0.2121,0.0,1.0,0.0,-0.2729,0.0,1.0,0.0,-0.3284,0.0,1.0,0.0,-0.3721,0.0,1.0,0.0,-0.3975,0.0,1.0,0.0,-0.3847,0.0,1.0,0.0,-0.274,0.0,1.0,0.0,-0.1459,0.0,1.0,0.0,-0.1036,0.0,1.0,0.0,-0.1921,0.0,1.0,0.0,-0.3258,0.0,1.0,0.0,-0.401,0.0,1.0,0.0,-0.3421,0.0,1.0,0.0,-0.2105,0.0,1.0,0.0,-0.1094,0.0,1.0,0.0,-0.1323,0.0,1.0,0.0,-0.2546,0.0,1.0,0.0,-0.3741,0.0,1.0,0.0,-0.3893,0.0,1.0,0.0,-0.2839,0.0,1.0,0.0,-0.1536,0.0,1.0,0.0,-0.1017,0.0,1.0,0.0,-0.1829,0.0,1.0,0.0,-0.3168,0.0,1.0,0.0,-0.3997,0.0,1.0,0.0,-0.3569,0.0,1.0,0.0,-0.2391,0.0,1.0,0.0,-0.1264,0.0,1.0,0.0,-0.08251,0.0,1.0,0.0,-0.07682,0.0,1.0,0.0,-0.08785,0.0,1.0,0.0,-0.09929,0.0,1.0,0.0,-0.1004})))
                          .addChild(new OrientationInterpolator("Laetitia_R_Forearm-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,-1.0,0.0,-0.1514,0.0,-1.0,0.0,-0.228,0.0,-1.0,0.0,-0.3129,0.0,-1.0,0.0,-0.3958,0.0,-1.0,0.0,-0.4678,0.0,-1.0,0.0,-0.5221,0.0,-1.0,0.0,-0.5527,0.0,-1.0,0.0,-0.5374,0.0,-1.0,0.0,-0.3972,0.0,-1.0,0.0,-0.2184,1.038E-5,-1.0,0.0,-0.1562,0.0,-1.0,0.0,-0.2849,0.0,-1.0,0.0,-0.4645,0.0,-1.0,0.0,-0.5568,0.0,-1.0,0.0,-0.485,0.0,-1.0,0.0,-0.3107,0.0,-1.0,0.0,-0.1649,0.0,-1.0,0.0,-0.1986,0.0,-1.0,0.0,-0.3713,0.0,-1.0,0.0,-0.5246,0.0,-1.0,0.0,-0.5429,0.0,-1.0,0.0,-0.4103,0.0,-1.0,0.0,-0.2296,0.0,-1.0,0.0,-0.1534,0.0,-1.0,0.0,-0.2718,0.0,-1.0,0.0,-0.453,0.0,-1.0,0.0,-0.5553,0.0,-1.0,0.0,-0.5035,0.0,-1.0,0.0,-0.3501,0.0,-1.0,0.0,-0.19,0.0,-1.0,0.0,-0.1248,0.0,-1.0,0.0,-0.1162,0.0,-1.0,0.0,-0.1328,0.0,-1.0,0.0,-0.1498,0.0,-1.0,0.0,-0.1514})))
                          .addChild(new Transform("Laetitia_R_Hand").setRotation(-0.9994,0.02499,0.02501,-1.571).setScale(0.396,0.4167,0.4167).setScaleOrientation(0.0,-1.0,-7.963E-4,-0.05).setTranslation(1.0,0.0,0.0)
                            .addChild(new OrientationInterpolator("Laetitia_R_Hand-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_Hand_ROT_INTERP_15_199_keyValue()))
                            .addChild(new OrientationInterpolator("Laetitia_R_Hand-SCALE-ORI-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1811,0.1811,0.1961,0.2157,0.2353,0.2411,0.2411,0.2549,0.2708,0.2708,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3828,0.3828,0.3922,0.4118,0.4314,0.451,0.4706,0.4867,0.4867,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6077,0.6077,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_Hand_SCALE_ORI_INTERP_15_200_keyValue()))
                            .addChild(new Transform("Laetitia_R_Finger0").setRotation(-1.0,0.0,0.0,-7.963E-4).setScale(0.25,0.25,0.25).setScaleOrientation(0.003829,-1.0,0.0,-0.1051).setTranslation(1.0,0.0,0.0)
                              .addChild(new Transform("Laetitia_R_Finger0Nub").setRotation(0.0,-1.0,0.0,-3.142).setScale(0.1667,0.25,0.25).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0)))
                            .addChild(new Transform("r_hand").setRotation(-0.59,-0.4454,0.6734,-2.295).setScale(0.1656,0.1954,0.1146).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(-5.984,0.4472,-1.642)
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                                  .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                                .setGeometry(new IndexedFaceSet("r_hand-FACES").setDEF("r_hand-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(getr_hand_FACES_17_206_coordIndex()).setTexCoordIndex(getr_hand_FACES_17_206_texCoordIndex())
                                  .setTexCoord(new TextureCoordinate("r_hand-TEXCOORD").setPoint(getr_hand_TEXCOORD_18_206_point()))
                                  .setCoord(new Coordinate("r_hand-COORD").setPoint(getr_hand_COORD_18_207_point()))))
                              .addChild(new Shape()
                                .setAppearance(new Appearance()
                                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                                  .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                                .setGeometry(new IndexedFaceSet("r_hand-FACE").setDEF("r_hand-FACE").setCcw(false).setCreaseAngle(15)
                                  .setTexCoord(new TextureCoordinate().setUSE("r_hand-TEXCOORD"))
                                  .setCoord(new Coordinate().setUSE("r_hand-COORD"))))))
                          .addChild(new Transform("r_forArm").setRotation(-0.6733,-0.7241,0.1493,-3.324).setScale(0.06895,0.07786,0.04748).setScaleOrientation(-0.6792,-0.101,0.727,-0.04481).setTranslation(-1.37,0.6841,0.1858)
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                                .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                              .setGeometry(new IndexedFaceSet("r_forArm-FACES").setDEF("r_forArm-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {0,1,3,-1,5,6,4,-1,7,8,5,-1,7,9,8,-1,7,5,4,-1,3,4,6,-1,7,10,9,-1,8,14,13,-1,15,13,16,-1,14,12,17,-1,17,18,16,-1,16,14,17,-1,16,18,3,-1,9,14,8,-1,13,14,16,-1,16,6,15,-1,3,6,16,-1,10,14,9,-1,18,0,3,-1,1,4,3,-1,1,7,4,-1,1,2,10,-1,12,14,10,-1,2,11,10,-1,10,11,12,-1,1,10,7,-1}).setTexCoordIndex(new int[] {19,21,22,-1,23,24,25,-1,26,27,23,-1,26,28,27,-1,26,23,25,-1,22,25,24,-1,26,29,28,-1,27,32,33,-1,34,33,35,-1,32,30,36,-1,36,37,35,-1,35,32,36,-1,35,37,22,-1,28,32,27,-1,33,32,35,-1,35,24,34,-1,22,24,35,-1,29,32,28,-1,37,19,22,-1,21,25,22,-1,21,26,25,-1,21,20,29,-1,30,32,29,-1,20,31,29,-1,29,31,30,-1,21,29,26,-1})
                                .setTexCoord(new TextureCoordinate("r_forArm-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.379,0.6153,0.4316,0.5878,0.4019,0.5859,0.3644,0.5404,0.3711,0.438,0.363,0.4443,0.3752,0.5355,0.3969,0.5325,0.3896,0.4348,0.4186,0.5324,0.4231,0.5451,0.4257,0.5881,0.4355,0.588,0.4025,0.5345,0.3814,0.4347,0.3647,0.4436,0.3797,0.5379,0.4049,0.5869,0.3848,0.5924})))
                                .setCoord(new Coordinate("r_forArm-COORD").setPoint(new MFVec3f(new double[] {-11.1,14.56,-7.989,-9.348,17.26,-5.691,-9.783,16.95,-2.4,-11.52,19.37,-10.72,-9.77,19.96,-9.026,-10.6,27.63,-11.08,-11.82,27.06,-12.72,-10.37,20.32,-6.726,-12.05,28.25,-8.504,-11.98,20.53,-3.816,-10.93,19.69,-3.162,-10.79,16.73,-1.518,-12.56,16.82,-2.853,-13.31,27.92,-9.612,-13.35,20.06,-5.824,-13.33,27.49,-11.41,-13.45,19.63,-8.172,-13.31,16.95,-5.003,-13.05,16.37,-7.059})))))
                            .addChild(new Shape()
                              .setAppearance(new Appearance()
                                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                                .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                              .setGeometry(new IndexedFaceSet("r_forArm-FACE").setDEF("r_forArm-FACE").setCcw(false).setCreaseAngle(15)
                                .setTexCoord(new TextureCoordinate().setUSE("r_forArm-TEXCOORD"))
                                .setCoord(new Coordinate().setUSE("r_forArm-COORD"))))))
                        .addChild(new Transform("r_upperArm").setRotation(-0.6791,-0.7263,0.1065,-3.233).setScale(0.06868,0.07109,0.04736).setScaleOrientation(-0.2066,-0.0589,0.9766,-0.3386).setTranslation(-0.2526,0.6841,-0.001324)
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                              .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                            .setGeometry(new IndexedFaceSet("r_upperArm-FACES").setDEF("r_upperArm-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {3,1,2,-1,0,2,1,-1,4,1,2,-1,0,2,1,-1,5,23,6,-1,8,10,9,-1,5,10,23,-1,7,6,23,-1,6,7,1,-1,9,10,24,-1,26,12,24,-1,24,25,26,-1,12,13,9,-1,8,14,7,-1,14,8,13,-1,15,11,1,-1,25,1,11,-1,13,8,9,-1,9,24,12,-1,15,1,7,-1,7,14,15,-1,11,17,16,-1,11,18,17,-1,18,20,19,-1,12,22,13,-1,21,13,22,-1,13,21,14,-1,21,20,14,-1,12,11,16,-1,15,14,18,-1,11,15,18,-1,20,18,14,-1,18,19,17,-1,0,24,10,-1,23,10,8,-1,7,23,8,-1,26,25,11,-1,11,12,26,-1}).setTexCoordIndex(new int[] {23,21,19,-1,20,19,21,-1,24,21,19,-1,20,19,21,-1,25,26,27,-1,28,29,30,-1,25,29,26,-1,31,27,26,-1,27,31,32,-1,30,29,33,-1,35,36,33,-1,33,37,35,-1,36,38,30,-1,28,39,31,-1,39,28,38,-1,40,35,32,-1,37,32,35,-1,38,28,30,-1,30,33,36,-1,40,32,31,-1,31,39,40,-1,35,41,42,-1,35,43,41,-1,43,44,45,-1,36,47,38,-1,46,38,47,-1,38,46,39,-1,46,44,39,-1,36,35,42,-1,40,39,43,-1,35,40,43,-1,44,43,39,-1,43,45,41,-1,34,33,29,-1,26,29,28,-1,31,26,28,-1,48,37,35,-1,35,36,48,-1})
                              .setTexCoord(new TextureCoordinate("r_upperArm-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2268,0.5802,0.2154,0.6149,0.2391,0.603,0.05009,0.575,0.2402,0.5735,0.2451,0.5731,0.4293,0.7821,0.4225,0.7765,0.4384,0.778,0.4029,0.7448,0.3927,0.769,0.3796,0.7282,0.4393,0.7324,0.4636,0.7422,0.3712,0.7302,0.3735,0.7608,0.4121,0.6221,0.379,0.6153,0.436,0.7234,0.3921,0.6306,0.4214,0.6366,0.4371,0.6324,0.4316,0.5878,0.4019,0.5859,0.4389,0.6127,0.4257,0.5881,0.4355,0.588,0.4049,0.5869,0.3848,0.5924,0.3916,0.6763})))
                              .setCoord(new Coordinate("r_upperArm-COORD").setPoint(new MFVec3f(new double[] {-6.676,2.963,-6.341,-7.735,5.781,3.068,-7.699,5.778,-2.93,-8.545,6.472,-0.03934,-8.553,6.505,-0.04437,-10.07,2.121,-0.2432,-10.3,3.125,1.623,-11.07,5.611,0.7086,-12.01,4.267,-2.851,-10.4,5.518,-5.727,-9.078,2.251,-3.53,-8.6,14.44,-4.131,-11.1,14.56,-7.989,-12.75,13.36,-5.72,-12.56,13.12,-2.54,-10.1,10.38,0.06581,-9.348,17.26,-5.691,-9.776,17.19,-2.483,-10.53,15.43,-0.7975,-10.77,17.27,-1.607,-12.55,17.06,-2.859,-13.31,16.95,-5.003,-13.05,16.37,-7.059,-10.98,2.691,-0.9363,-7.505,5.771,-2.948,-8.182,6.489,-0.04561,-7.986,10.1,-3.549})))))
                          .addChild(new Shape()
                            .setAppearance(new Appearance()
                              .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                              .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                            .setGeometry(new IndexedFaceSet("r_upperArm-FACE").setDEF("r_upperArm-FACE").setCcw(false).setCreaseAngle(15)
                              .setTexCoord(new TextureCoordinate().setUSE("r_upperArm-TEXCOORD"))
                              .setCoord(new Coordinate().setUSE("r_upperArm-COORD"))))))
                      .addChild(new Transform("r_clavicle").setRotation(-0.1077,-0.9921,0.06436,-3.073).setScale(0.1195,0.1045,0.04429).setScaleOrientation(0.0602,-0.03697,0.9975,-0.7781).setTranslation(-0.2212,-0.1407,-0.02273)
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                            .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                          .setGeometry(new IndexedFaceSet("r_clavicle-FACES").setDEF("r_clavicle-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {4,0,10,-1,13,8,3,-1,8,7,1,-1,8,6,12,-1,10,2,9,-1,6,9,12,-1,4,10,5,-1,10,9,5,-1,12,9,2,-1,8,11,7,-1,12,2,11,-1,8,12,11,-1,6,8,13,-1,16,14,7,-1,10,0,16,-1,7,2,16,-1,10,16,2,-1,1,7,15,-1,14,15,7,-1,7,11,2,-1}).setTexCoordIndex(new int[] {15,14,27,-1,32,31,19,-1,31,34,33,-1,31,35,36,-1,27,37,38,-1,39,38,40,-1,15,27,30,-1,27,38,30,-1,40,38,37,-1,31,43,34,-1,40,37,46,-1,31,36,43,-1,35,31,32,-1,58,56,60,-1,61,62,58,-1,60,63,58,-1,61,58,63,-1,59,60,57,-1,56,57,60,-1,60,64,63,-1})
                            .setTexCoord(new TextureCoordinate("r_clavicle-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.2154,0.6149,0.1747,0.5997,0.3005,0.3507,0.0756,0.5956,0.05235,0.6182,0.2737,0.38,0.2965,0.3748,0.2846,0.3771,0.3309,0.3146,0.3367,0.3446,0.3196,0.3581,0.1002,0.6439,0.06094,0.6314,0.2095,0.6318,0.1013,0.6609,0.07045,0.6433,0.1621,0.6349,0.2426,0.3508,0.2609,0.3767,0.219,0.3169,0.2105,0.3444,0.2522,0.3749,0.2396,0.3664,0.2114,0.6449,0.1744,0.6536,0.175,0.6707,0.1895,0.6651,0.09562,0.6679,0.1058,0.6699,0.2246,0.3566,0.3073,0.3671,0.07699,0.6575,0.2122,0.6544,0.4293,0.7821,0.4384,0.778,0.3927,0.769,0.4636,0.7422,0.4656,0.7817,0.3887,0.7856,0.3735,0.7608,0.4397,0.795,0.4549,0.7938,0.4293,0.7821,0.4384,0.778,0.3927,0.769,0.4636,0.7422,0.4656,0.7817,0.3887,0.7856,0.3735,0.7608,0.4397,0.795,0.4549,0.7938})))
                            .setCoord(new Coordinate("r_clavicle-COORD").setPoint(new MFVec3f(new double[] {-6.819,3.504,-6.547,-7.723,5.261,3.896,-5.503,1.214,3.811,0.3071,-1.822,3.669,-4.586,3.403,-11.86,-2.117,0.6688,-5.019,-2.716,-0.934,1.494,-8.118,1.694,4.133,-3.412,1.507,4.269,-3.189,-0.01787,-0.02068,-5.832,1.281,-4.376,-5.649,0.7479,3.826,-3.534,-0.1652,2.707,-1.101,-1.371,3.281,-10.07,2.121,-0.2432,-10.3,3.125,1.623,-9.403,2.422,-3.557})))))
                        .addChild(new Shape()
                          .setAppearance(new Appearance()
                            .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                            .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                          .setGeometry(new IndexedFaceSet("r_clavicle-FACE").setDEF("r_clavicle-FACE").setCcw(false).setCreaseAngle(15)
                            .setTexCoord(new TextureCoordinate().setUSE("r_clavicle-TEXCOORD"))
                            .setCoord(new Coordinate().setUSE("r_clavicle-COORD"))))))
                    .addChild(new Transform("neck").setRotation(-0.09952,-0.01293,-0.995,-1.582).setScale(0.1592,0.3242,0.1107).setScaleOrientation(0.9999,-9.382E-4,0.0108,-0.05762).setTranslation(0.2349,-0.01997,0.06193)
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                          .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                        .setGeometry(new IndexedFaceSet("neck-FACES").setDEF("neck-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {1,22,23,-1,22,1,25,-1,10,5,11,-1,2,10,12,-1,12,4,2,-1,11,12,10,-1,13,11,5,-1,14,16,17,-1,11,13,14,-1,20,17,19,-1,19,25,1,-1,16,14,13,-1,6,10,2,-1,18,16,15,-1,13,9,15,-1,5,9,13,-1,8,9,5,-1,8,5,7,-1,7,5,10,-1,3,6,2,-1,13,15,16,-1,10,6,7,-1,19,17,16,-1,21,0,19,-1,1,20,19,-1,16,21,19,-1,2,22,24,-1,22,2,4,-1,23,22,4,-1,24,22,0,-1,19,0,25,-1,22,25,0,-1}).setTexCoordIndex(new int[] {14,15,16,-1,15,14,17,-1,18,19,20,-1,21,18,22,-1,22,23,21,-1,20,22,18,-1,24,20,19,-1,25,26,27,-1,20,24,25,-1,28,29,30,-1,30,17,14,-1,26,25,24,-1,31,18,21,-1,32,26,33,-1,24,34,33,-1,19,34,24,-1,35,34,19,-1,35,19,36,-1,36,19,18,-1,37,31,21,-1,24,33,26,-1,18,31,36,-1,30,29,38,-1,39,40,30,-1,14,28,30,-1,38,39,30,-1,41,15,42,-1,15,41,43,-1,16,15,43,-1,42,15,40,-1,30,40,17,-1,15,17,40,-1})
                          .setTexCoord(new TextureCoordinate("neck-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.1413,0.7728,0.1512,0.7561,0.1528,0.7698,0.1418,0.7578,0.2155,0.7482,0.2248,0.7395,0.2264,0.7706,0.207,0.7625,0.2124,0.7789,0.2067,0.7829,0.2432,0.7488,0.2443,0.7807,0.2604,0.7569,0.2578,0.7839,0.133,0.7703,0.1256,0.7638,0.1299,0.7558,0.2021,0.7386,0.267,0.7463,0.2528,0.7323,0.2337,0.7244,0.2211,0.7226,0.2074,0.7257,0.2028,0.7484,0.1242,0.7349,0.1317,0.7413,0.14,0.7441,0.1595,0.7363,0.1502,0.739,0.1612,0.7603})))
                          .setCoord(new Coordinate("neck-COORD").setPoint(new MFVec3f(new double[] {0.3071,-1.822,3.669,0.4709,-4.215,3.926,3.076,-1.088,1.459,3.297,-0.2019,0.05315,2.496,-3.371,1.013,0.3415,0.2209,-3.687,2.709,0.07128,-3.897,1.394,1.446,-7.541,0.3969,1.983,-5.912,-0.9287,1.536,-7.39,1.527,-0.2436,-0.9153,0.2619,-2.198,-2.957,1.865,-3.018,-0.08607,-0.9392,-0.3397,-0.8851,-1.084,-2.97,-0.3168,-2.117,0.6688,-5.019,-2.716,-0.934,1.494,-2.044,-3.376,0.832,-3.189,-0.01787,-0.02068,-1.155,-2.801,2.821,-1.887,-3.78,2.657,-1.101,-1.371,3.281,1.608,-2.961,2.865,2.479,-3.707,2.394,1.584,-1.429,3.229,0.4329,-3.523,3.694})))))
                      .addChild(new Shape()
                        .setAppearance(new Appearance()
                          .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                          .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                        .setGeometry(new IndexedFaceSet("neck-FACE").setDEF("neck-FACE").setCcw(false).setCreaseAngle(15)
                          .setTexCoord(new TextureCoordinate().setUSE("neck-TEXCOORD"))
                          .setCoord(new Coordinate().setUSE("neck-COORD")))))))))
            .addChild(new Transform("Laetitia_L_Thigh").setRotation(-0.07434,1.012E-4,0.9972,-3.142).setScale(9.267,3.846,3.858).setScaleOrientation(0.005298,1.0,-3.296E-4,-0.1243).setTranslation(-1.907,0.7683,0.005805)
              .addChild(new PositionInterpolator("Laetitia_L_Thigh-POS-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFVec3f(new double[] {-1.907,0.7683,0.005805,-1.895,0.7764,0.007352,-1.884,0.786,0.009123,-1.872,0.7952,0.01082,-1.86,0.8016,0.01212,-1.849,0.8031,0.01274,-1.837,0.7933,0.01184,-1.823,0.7683,0.008959,-1.81,0.7438,0.006151,-1.807,0.7371,0.005382,-1.821,0.7598,0.007858,-1.839,0.7907,0.01138,-1.845,0.8017,0.01268,-1.835,0.7826,0.01044,-1.817,0.7531,0.007124,-1.806,0.7361,0.00528,-1.814,0.7487,0.006641,-1.832,0.7777,0.009881,-1.845,0.8002,0.0125,-1.842,0.7956,0.01195,-1.827,0.7688,0.00887,-1.81,0.7423,0.005942,-1.808,0.7385,0.005531,-1.822,0.7615,0.008054,-1.839,0.7903,0.01134,-1.846,0.8021,0.01272,-1.836,0.7845,0.01067,-1.818,0.755,0.007336,-1.806,0.7364,0.005308,-1.811,0.7429,0.006198,-1.823,0.7631,0.008825,-1.837,0.7867,0.01159,-1.846,0.8038,0.01266,-1.846,0.8031,0.00768,-1.846,0.8023,0.00583})))
              .addChild(new OrientationInterpolator("Laetitia_L_Thigh-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_Thigh_ROT_INTERP_8_287_keyValue()))
              .addChild(new Transform("Laetitia_L_Calf").setRotation(0.0,1.0,0.0,-0.3587).setScale(0.8547,1.0,1.0).setScaleOrientation(4.273E-4,-1.0,-7.748E-5,-0.3587).setTranslation(1.0,0.0,0.0)
                .addChild(new OrientationInterpolator("Laetitia_L_Calf-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,-0.3587,0.0,1.0,0.0,-0.3582,0.0,1.0,0.0,-0.3572,0.0,1.0,0.0,-0.3561,0.0,1.0,0.0,-0.3595,0.0,1.0,0.0,-0.6699,0.0,1.0,0.0,-0.2112,0.0,1.0,0.0,-0.5549,0.0,1.0,0.0,-0.5994,0.0,1.0,0.0,-0.2016,0.0,1.0,0.0,-0.4807,0.0,1.0,0.0,-0.8348,0.0,1.0,0.0,-0.6481,0.0,1.0,0.0,-0.204,0.0,1.0,0.0,-0.6471,0.0,1.0,0.0,-0.2637,0.0,1.0,0.0,-0.399,0.0,1.0,0.0,-0.8677,0.0,1.0,0.0,-0.8234,0.0,1.0,0.0,-0.2647,0.0,1.0,0.0,-0.5628,0.0,1.0,0.0,-0.5225,0.0,1.0,0.0,-0.2915,0.0,1.0,0.0,-0.464,0.0,1.0,0.0,-0.8491,0.0,1.0,0.0,-0.7285,0.0,1.0,0.0,-0.2177,0.0,1.0,0.0,-0.6754,0.0,1.0,0.0,-0.2941,0.0,1.0,0.0,-0.394,0.0,1.0,0.0,-0.8615,0.0,1.0,0.0,-0.8989,0.0,1.0,0.0,-0.9541,0.0,1.0,0.0,-0.9963,0.0,1.0,0.0,-1.0})))
                .addChild(new Transform("Laetitia_L_Foot").setRotation(0.001018,-1.0,-4.611E-5,-0.1934).setScale(0.23,0.19,0.37).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0)
                  .addChild(new OrientationInterpolator("Laetitia_L_Foot-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_L_Foot_ROT_INTERP_10_289_keyValue()))
                  .addChild(new Transform("Laetitia_L_Toe0").setRotation(0.0,-1.0,0.0,-1.571).setScale(0.08108,0.1579,0.1304).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,-0.7838)
                    .addChild(new Transform("Laetitia_L_Toe01").setRotation(0.0,-1.0,0.0,-3.503E-4).setTranslation(1.0,0.0,0.0)
                      .addChild(new Transform("Laetitia_L_Toe02").setRotation(0.0,-1.0,0.0,-3.503E-4).setTranslation(1.0,0.0,0.0)
                        .addChild(new Transform("Laetitia_L_Toe0Nub").setRotation(0.0,-1.0,0.0,-3.142).setScale(0.1667,0.25,0.25).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0)))))
                  .addChild(new Transform("l_foot").setRotation(-0.01919,0.09687,0.9951,-1.569).setScale(0.2176,0.2114,0.0779).setScaleOrientation(0.3619,-0.296,0.884,-0.1597).setTranslation(-14.36,0.8393,0.08964)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                        .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                      .setGeometry(new IndexedFaceSet("l_foot-FACES").setDEF("l_foot-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {4,6,5,-1,4,7,6,-1,5,9,8,-1,5,10,9,-1,11,13,12,-1,11,14,13,-1,12,16,15,-1,12,13,16,-1,15,18,17,-1,15,16,18,-1,17,20,19,-1,17,18,20,-1,19,21,7,-1,19,20,21,-1,7,22,6,-1,7,21,22,-1,6,22,10,-1,10,23,9,-1,10,22,23,-1,9,14,11,-1,9,23,14,-1,19,7,4,-1,24,17,19,-1,24,15,17,-1,25,12,15,-1,25,15,24,-1,25,11,12,-1,8,9,11,-1,5,6,10,-1,16,13,26,-1,18,16,27,-1,16,26,27,-1,14,28,13,-1,13,28,26,-1,20,18,29,-1,18,27,29,-1,14,29,28,-1,20,29,14,-1,2,8,11,-1,2,3,8,-1,1,11,25,-1,1,2,11,-1,3,5,8,-1,1,19,0,-1,1,24,19,-1,0,4,3,-1,0,19,4,-1,3,4,5,-1,1,25,24,-1,20,14,19,-1,14,11,19,-1,19,23,21,-1,11,23,19,-1,23,22,21,-1,27,26,28,-1,27,28,29,-1}).setTexCoordIndex(new int[] {30,32,31,-1,30,33,32,-1,31,35,34,-1,31,36,35,-1,37,39,38,-1,37,40,39,-1,38,42,41,-1,38,39,42,-1,41,44,43,-1,41,42,44,-1,43,46,45,-1,43,44,46,-1,47,48,33,-1,47,49,48,-1,33,50,32,-1,33,48,50,-1,32,50,36,-1,36,51,35,-1,36,50,51,-1,35,53,52,-1,35,51,53,-1,47,33,30,-1,54,43,45,-1,54,41,43,-1,55,38,41,-1,55,41,54,-1,55,37,38,-1,34,35,52,-1,31,32,36,-1,42,39,56,-1,44,42,57,-1,42,56,57,-1,40,58,39,-1,39,58,56,-1,46,44,59,-1,44,57,59,-1,60,62,61,-1,63,62,60,-1,64,66,65,-1,64,67,66,-1,68,65,69,-1,70,71,37,-1,67,72,66,-1,70,45,73,-1,68,75,74,-1,76,77,67,-1,76,74,77,-1,67,77,72,-1,68,69,75,-1,78,79,80,-1,79,81,80,-1,80,82,83,-1,81,82,80,-1,82,84,83,-1,85,86,87,-1,85,87,88,-1})
                        .setTexCoord(new TextureCoordinate("l_foot-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.9533,0.4685,0.947,0.4641,0.9521,0.4436,0.9559,0.4595,0.9387,0.4644,0.9322,0.462,0.939,0.4447,0.934,0.5157,0.9318,0.535,0.9337,0.5447,0.9307,0.539,0.9447,0.5367,0.9455,0.5461,0.9579,0.5345,0.9558,0.5448,0.9576,0.515,0.9629,0.538,0.9583,0.4758,0.9608,0.4521,0.9629,0.4894,0.9458,0.4391,0.9336,0.4522,0.9311,0.4772,0.9306,0.4881,0.9479,0.5237,0.9334,0.5207,0.9449,0.564,0.9491,0.5643,0.9392,0.557,0.9535,0.5582,0.878,0.5146,0.8857,0.497,0.8954,0.4943,0.9045,0.5131,0.8837,0.448,0.8777,0.451,0.883,0.4333,0.8928,0.4437,0.8908,0.4807,0.8819,0.4793,0.9462,0.4957,0.9414,0.5155,0.8938,0.4267,0.9542,0.515,0.9093,0.4608,0.9044,0.4832,0.9036,0.4457,0.9059,0.4345,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5})))
                        .setCoord(new Coordinate("l_foot-COORD").setPoint(new MFVec3f(new double[] {4.941,67.01,-19.25,3.724,66.69,-15.69,2.045,67.05,-19.02,3.489,67.32,-22.21,4.67,68.39,-24.51,3.368,68.7,-25.41,3.666,69.7,-29.53,4.757,69.84,-26.0,2.29,68.48,-24.21,1.712,69.83,-25.73,2.201,69.72,-29.48,1.499,68.48,-21.12,1.93,68.05,-14.97,2.252,69.04,-15.09,1.475,68.92,-17.33,3.844,68.07,-14.39,3.847,69.04,-14.54,5.431,67.98,-15.26,5.346,69.03,-15.36,5.276,68.01,-21.52,5.633,68.87,-17.84,4.679,70.58,-26.11,2.826,70.45,-30.22,1.908,70.67,-25.6,4.849,67.22,-15.44,2.454,67.24,-15.14,3.43,71.22,-15.55,4.192,71.2,-15.66,3.384,71.17,-16.48,4.145,71.15,-16.59})))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                        .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                      .setGeometry(new IndexedFaceSet("l_foot-FACE").setDEF("l_foot-FACE").setCcw(false).setCreaseAngle(15)
                        .setTexCoord(new TextureCoordinate().setUSE("l_foot-TEXCOORD"))
                        .setCoord(new Coordinate().setUSE("l_foot-COORD"))))))
                .addChild(new Transform("l_calf").setRotation(0.02823,0.06039,0.9978,-1.583).setScale(0.04139,0.04884,0.02866).setTranslation(-2.279,0.2293,0.3541)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                      .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                    .setGeometry(new IndexedFaceSet("l_calf-FACES").setDEF("l_calf-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {0,1,2,-1,1,3,2,-1,2,3,4,-1,2,4,5,-1,5,8,6,-1,4,8,5,-1,6,8,9,-1,6,9,10,-1,9,11,10,-1,10,11,12,-1,10,12,0,-1,0,12,7,-1,0,7,1,-1,13,0,14,-1,14,0,2,-1,14,2,15,-1,15,2,16,-1,5,17,16,-1,2,5,16,-1,5,6,17,-1,17,6,18,-1,18,6,10,-1,18,10,19,-1,10,0,20,-1,10,20,19,-1,20,0,13,-1,21,13,14,-1,21,14,22,-1,22,14,15,-1,22,15,23,-1,23,15,24,-1,15,16,24,-1,24,16,17,-1,24,17,25,-1,25,17,18,-1,25,18,26,-1,26,18,19,-1,26,19,27,-1,27,19,28,-1,19,20,28,-1,28,20,21,-1,20,13,21,-1,29,21,22,-1,29,22,30,-1,30,22,23,-1,30,23,31,-1,31,23,32,-1,23,24,32,-1,32,24,25,-1,32,25,33,-1,33,25,26,-1,33,26,34,-1,34,26,27,-1,34,27,35,-1,35,27,36,-1,27,28,36,-1,36,28,29,-1,28,21,29,-1}).setTexCoordIndex(new int[] {33,35,34,-1,35,36,34,-1,34,36,37,-1,34,37,38,-1,38,40,39,-1,37,40,38,-1,41,43,42,-1,41,42,44,-1,42,45,44,-1,44,45,46,-1,44,46,47,-1,47,46,48,-1,33,49,35,-1,50,33,51,-1,51,33,34,-1,51,34,52,-1,52,34,53,-1,38,54,53,-1,34,38,53,-1,38,39,54,-1,55,41,56,-1,56,41,44,-1,56,44,57,-1,44,47,58,-1,44,58,57,-1,58,47,59,-1,60,50,51,-1,60,51,61,-1,61,51,52,-1,61,52,62,-1,62,52,63,-1,52,53,63,-1,63,53,54,-1,63,54,64,-1,65,55,56,-1,65,56,66,-1,66,56,57,-1,66,57,67,-1,67,57,68,-1,57,58,68,-1,68,58,69,-1,58,59,69,-1,70,60,61,-1,70,61,71,-1,71,61,62,-1,71,62,72,-1,72,62,73,-1,62,63,73,-1,73,63,64,-1,73,64,74,-1,75,65,66,-1,75,66,76,-1,76,66,67,-1,76,67,77,-1,77,67,78,-1,67,68,78,-1,78,68,79,-1,68,69,79,-1})
                      .setTexCoord(new TextureCoordinate("l_calf-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.6033,0.446,0.6204,0.4418,0.6053,0.4914,0.6231,0.4906,0.655,0.4905,0.6504,0.4421,0.6635,0.4436,0.6642,0.4912,0.7566,0.4558,0.7548,0.5023,0.7536,0.5057,0.7828,0.4538,0.7845,0.5003,0.8138,0.5014,0.8158,0.4578,0.8276,0.5046,0.5999,0.4924,0.6019,0.3848,0.6068,0.3869,0.6253,0.3793,0.6538,0.3793,0.6624,0.3827,0.7562,0.3959,0.7617,0.396,0.7792,0.3957,0.8088,0.396,0.8189,0.3966,0.61,0.3127,0.6162,0.3117,0.6269,0.3092,0.6475,0.3095,0.6559,0.3109,0.7563,0.3259,0.7642,0.3254,0.7765,0.3268,0.7967,0.3256,0.8042,0.3254,0.6188,0.2739,0.622,0.2718,0.6287,0.2718,0.6382,0.2716,0.6467,0.2716,0.7651,0.2755,0.7709,0.2712,0.7764,0.2723,0.7853,0.2759,0.7917,0.2808})))
                      .setCoord(new Coordinate("l_calf-COORD").setPoint(new MFVec3f(new double[] {6.805,49.13,-15.62,6.617,44.79,-12.4,4.961,49.54,-9.582,4.823,44.91,-10.36,2.133,44.88,-11.25,2.426,49.47,-10.93,0.989,49.21,-15.66,7.346,44.62,-15.44,0.9096,44.75,-13.8,1.036,44.22,-18.06,3.506,48.9,-20.43,3.585,44.08,-20.41,6.038,44.3,-19.31,7.092,54.89,-16.91,6.564,55.3,-14.0,4.442,55.39,-12.1,2.038,55.36,-12.83,0.8801,54.97,-15.31,1.391,54.77,-18.39,3.302,54.59,-19.94,5.805,54.63,-19.35,6.173,61.69,-17.63,5.911,61.89,-15.09,4.191,61.98,-13.54,2.237,61.93,-14.15,1.158,61.75,-16.34,1.65,61.51,-19.11,3.197,61.22,-20.34,5.192,61.38,-19.86,4.941,67.01,-19.25,5.168,66.75,-17.07,3.724,66.69,-15.69,2.796,66.8,-16.47,2.045,67.05,-19.02,2.315,67.26,-21.2,3.489,67.32,-22.21,4.408,67.18,-21.72})))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                      .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                    .setGeometry(new IndexedFaceSet("l_calf-FACE").setDEF("l_calf-FACE").setCcw(false).setCreaseAngle(15)
                      .setTexCoord(new TextureCoordinate().setUSE("l_calf-TEXCOORD"))
                      .setCoord(new Coordinate().setUSE("l_calf-COORD"))))))
              .addChild(new Transform("l_thigh").setRotation(-0.07303,0.1591,0.9846,-1.605).setScale(0.04135,0.04226,0.02834).setScaleOrientation(-0.3816,-0.0558,0.9227,-0.2203).setTranslation(-0.9693,0.2293,-0.09516)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                    .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                  .setGeometry(new IndexedFaceSet("l_thigh-FACES").setDEF("l_thigh-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {0,2,1,-1,1,3,0,-1,0,4,5,-1,11,16,8,-1,10,17,12,-1,13,17,18,-1,12,17,13,-1,13,18,14,-1,18,19,14,-1,14,19,20,-1,14,20,15,-1,15,20,11,-1,20,16,11,-1,16,21,22,-1,16,22,8,-1,8,22,23,-1,8,23,9,-1,9,23,10,-1,23,24,10,-1,10,24,25,-1,10,25,17,-1,18,17,26,-1,17,25,26,-1,18,26,27,-1,18,27,19,-1,19,27,20,-1,27,28,20,-1,20,28,16,-1,28,21,16,-1,21,29,22,-1,29,30,22,-1,22,30,31,-1,22,31,23,-1,23,31,24,-1,31,3,24,-1,24,3,32,-1,24,32,25,-1,25,0,26,-1,7,27,0,-1,28,29,21,-1,30,29,33,-1,28,27,6,-1,32,0,25,-1,29,28,6,-1,6,27,7,-1,4,0,3,-1,26,0,27,-1,3,0,32,-1,34,31,30,-1,35,31,34,-1,35,3,31,-1,36,3,35,-1}).setTexCoordIndex(new int[] {31,30,29,-1,29,32,33,-1,36,34,35,-1,49,50,40,-1,42,51,43,-1,45,53,52,-1,45,52,44,-1,44,52,46,-1,52,54,46,-1,46,54,55,-1,46,55,47,-1,47,55,48,-1,55,56,48,-1,50,58,57,-1,50,57,40,-1,40,57,59,-1,40,59,41,-1,41,59,42,-1,59,60,42,-1,42,60,61,-1,42,61,51,-1,53,63,62,-1,53,62,52,-1,52,62,64,-1,52,64,54,-1,54,64,55,-1,64,65,55,-1,55,65,56,-1,65,66,56,-1,58,67,57,-1,67,68,57,-1,57,68,69,-1,57,69,59,-1,59,69,60,-1,69,70,60,-1,60,70,71,-1,60,71,61,-1,72,39,62,-1,38,64,39,-1,65,73,66,-1,68,67,74,-1,65,64,37,-1,72,62,63,-1,73,65,37,-1,37,64,38,-1,34,76,75,-1,62,39,64,-1,75,76,77,-1,78,69,68,-1,79,69,78,-1,79,70,69,-1,80,82,81,-1})
                    .setTexCoord(new TextureCoordinate("l_thigh-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.9296,0.6745,0.9314,0.7086,0.9316,0.7092,0.9344,0.668,0.9314,0.7002,0.9296,0.6745,0.9314,0.7086,0.9316,0.7092,0.8129,0.7538,0.7702,0.7394,0.748,0.6836,0.6053,0.4914,0.6231,0.4906,0.655,0.4905,0.6642,0.4912,0.7548,0.5023,0.7536,0.5057,0.7845,0.5003,0.8138,0.5014,0.8276,0.5046,0.5999,0.4924,0.5934,0.5364,0.6703,0.5365,0.7632,0.5535,0.7526,0.5493,0.7899,0.5545,0.8126,0.5527,0.8327,0.5481,0.5843,0.6207,0.5821,0.631,0.6137,0.5991,0.6553,0.5964,0.6803,0.616,0.7563,0.6321,0.7482,0.6301,0.7909,0.6367,0.8254,0.6409,0.849,0.6403,0.5877,0.7295,0.5783,0.6847,0.6124,0.6536,0.6775,0.6816,0.6828,0.6571,0.7486,0.6682,0.8455,0.7399,0.587,0.7167,0.9344,0.668,0.9314,0.7002,0.9469,0.6788,0.6085,0.702,0.6291,0.6824,0.9026,0.7003,0.9036,0.7173,0.9021,0.6934})))
                    .setCoord(new Coordinate("l_thigh-COORD").setPoint(new MFVec3f(new double[] {-0.3312,25.97,-13.79,0.4985,26.82,-4.988,0.4188,26.86,-9.724,0.3505,27.0,-3.263,-0.1329,26.82,-4.909,-0.6173,26.87,-9.595,5.634,21.52,-15.13,2.523,22.48,-16.53,6.617,44.79,-12.4,4.823,44.91,-10.36,2.133,44.88,-11.25,7.451,44.62,-15.45,0.9096,44.75,-13.8,1.033,46.46,-17.67,3.491,46.21,-21.44,6.004,47.42,-19.3,7.896,40.46,-15.01,0.4727,40.62,-13.15,1.298,39.65,-17.38,3.928,39.18,-20.17,5.844,39.56,-18.56,9.017,31.68,-13.87,8.339,32.65,-8.486,5.798,34.74,-6.173,2.271,34.99,-6.233,0.3727,32.98,-11.76,1.202,31.91,-16.73,3.862,31.32,-19.39,6.769,31.14,-17.61,8.17,22.44,-10.74,9.309,26.67,-5.658,5.995,29.63,-4.452,0.4375,29.3,-6.066,9.077,23.51,-5.418,6.391,25.18,0.6279,4.612,27.02,0.4165,2.145,27.33,-1.959})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                    .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                  .setGeometry(new IndexedFaceSet("l_thigh-FACE").setDEF("l_thigh-FACE").setCcw(false).setCreaseAngle(15)
                    .setTexCoord(new TextureCoordinate().setUSE("l_thigh-TEXCOORD"))
                    .setCoord(new Coordinate().setUSE("l_thigh-COORD"))))))
            .addChild(new Transform("Laetitia_R_Thigh").setRotation(-0.04695,-1.034E-4,0.9989,-3.142).setScale(9.284,3.846,3.851).setScaleOrientation(-0.01315,0.9999,5.155E-4,-0.07837).setTranslation(-1.748,-0.7683,0.005285)
              .addChild(new PositionInterpolator("Laetitia_R_Thigh-POS-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFVec3f(new double[] {-1.748,-0.7683,0.005285,-1.759,-0.7607,0.006637,-1.77,-0.7514,0.008177,-1.781,-0.7427,0.009664,-1.792,-0.7365,0.01087,-1.803,-0.7352,0.01154,-1.816,-0.7451,0.01106,-1.832,-0.7702,0.008907,-1.843,-0.7946,0.006593,-1.845,-0.8013,0.005923,-1.833,-0.7787,0.007973,-1.814,-0.7477,0.01064,-1.806,-0.7366,0.01156,-1.819,-0.7559,0.009954,-1.837,-0.7853,0.007384,-1.846,-0.8022,0.005837,-1.839,-0.7897,0.006987,-1.822,-0.7607,0.009541,-1.807,-0.7382,0.01143,-1.81,-0.7428,0.01105,-1.827,-0.7696,0.00877,-1.842,-0.7961,0.006403,-1.844,-0.7999,0.006053,-1.832,-0.7769,0.008131,-1.814,-0.7481,0.01061,-1.806,-0.7362,0.01159,-1.818,-0.7539,0.01013,-1.835,-0.7834,0.007556,-1.846,-0.8019,0.005861,-1.842,-0.7955,0.00665,-1.831,-0.7754,0.008852,-1.816,-0.7517,0.01094,-1.805,-0.7346,0.01149,-1.806,-0.7353,0.006947,-1.806,-0.736,0.005266})))
              .addChild(new OrientationInterpolator("Laetitia_R_Thigh-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_Thigh_ROT_INTERP_8_343_keyValue()))
              .addChild(new Transform("Laetitia_R_Calf").setRotation(0.0,1.0,0.0,-0.2329).setScale(0.8547,1.0,1.0).setScaleOrientation(-6.882E-4,-1.0,8.05E-5,-0.2329).setTranslation(1.0,0.0,0.0)
                .addChild(new OrientationInterpolator("Laetitia_R_Calf-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,-0.2329,0.0,1.0,0.0,-0.212,0.0,1.0,0.0,-0.167,0.0,1.0,0.0,-0.122,0.0,1.0,0.0,-0.1106,0.0,1.0,0.0,-0.1196,0.0,1.0,0.0,-0.5028,0.0,1.0,0.0,-0.7141,0.0,1.0,0.0,-0.8884,0.0,1.0,0.0,-0.7083,0.0,1.0,0.0,-0.5001,0.0,1.0,0.0,-0.5728,0.0,1.0,0.0,-0.2305,0.0,1.0,0.0,-0.3467,0.0,1.0,0.0,-0.819,0.0,1.0,0.0,-0.8046,0.0,1.0,0.0,-0.239,0.0,1.0,0.0,-0.6336,0.0,1.0,0.0,-0.3999,0.0,1.0,0.0,-0.3441,0.0,1.0,0.0,-0.7093,0.0,1.0,0.0,-0.8349,0.0,1.0,0.0,-0.4116,0.0,1.0,0.0,-0.3928,0.0,1.0,0.0,-0.6139,0.0,1.0,0.0,-0.2436,0.0,1.0,0.0,-0.4182,0.0,1.0,0.0,-0.8585,0.0,1.0,0.0,-0.8208,0.0,1.0,0.0,-0.2781,0.0,1.0,0.0,-0.4854,0.0,1.0,0.0,-0.4968,0.0,1.0,0.0,-0.1636,0.0,1.0,0.0,-0.2561,0.0,1.0,0.0,-0.2578})))
                .addChild(new Transform("Laetitia_R_Foot").setRotation(-0.001584,-1.0,0.0,-0.1254).setScale(0.23,0.19,0.37).setTranslation(1.0,0.0,0.0)
                  .addChild(new OrientationInterpolator("Laetitia_R_Foot-ROT-INTERP").setKey(new double[] {0.0,0.01961,0.03922,0.05882,0.07843,0.09804,0.1176,0.1373,0.1569,0.1765,0.1961,0.2157,0.2353,0.2549,0.2745,0.2941,0.3137,0.3333,0.3529,0.3725,0.3922,0.4118,0.4314,0.451,0.4706,0.4902,0.5098,0.5294,0.549,0.5686,0.5882,0.6078,0.6275,0.6471,0.6667}).setKeyValue(getLaetitia_R_Foot_ROT_INTERP_10_345_keyValue()))
                  .addChild(new Transform("Laetitia_R_Toe0").setRotation(0.0,-1.0,0.0,-1.571).setScale(0.08108,0.1579,0.1304).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,-0.7838)
                    .addChild(new Transform("Laetitia_R_Toe01").setRotation(0.0,-1.0,0.0,-3.503E-4).setTranslation(1.0,0.0,0.0)
                      .addChild(new Transform("Laetitia_R_Toe02").setRotation(0.0,-1.0,0.0,-3.503E-4).setTranslation(1.0,0.0,0.0)
                        .addChild(new Transform("Laetitia_R_Toe0Nub").setScale(0.1667,0.25,0.25).setScaleOrientation(1.0,0.0,0.0,0.0).setTranslation(1.0,0.0,0.0)))))
                  .addChild(new Transform("r_foot").setRotation(-0.01919,0.09687,0.9951,-1.569).setScale(0.2176,0.2114,0.0779).setScaleOrientation(0.3619,-0.296,0.884,-0.1597).setTranslation(-14.36,-0.7824,0.08964)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                        .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                      .setGeometry(new IndexedFaceSet("r_foot-FACES").setDEF("r_foot-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {4,5,6,-1,4,6,7,-1,5,8,9,-1,5,9,10,-1,11,12,13,-1,11,13,14,-1,12,15,16,-1,12,16,13,-1,15,17,18,-1,15,18,16,-1,17,19,20,-1,17,20,18,-1,19,7,21,-1,19,21,20,-1,7,6,22,-1,7,22,21,-1,6,10,22,-1,10,9,23,-1,10,23,22,-1,9,11,14,-1,9,14,23,-1,19,4,7,-1,24,19,17,-1,24,17,15,-1,25,15,12,-1,25,24,15,-1,25,12,11,-1,8,11,9,-1,5,10,6,-1,16,26,13,-1,18,27,16,-1,16,27,26,-1,14,13,28,-1,13,26,28,-1,20,29,18,-1,18,29,27,-1,14,28,29,-1,20,14,29,-1,2,11,8,-1,2,8,3,-1,1,25,11,-1,1,11,2,-1,3,8,5,-1,1,0,19,-1,1,19,24,-1,0,3,4,-1,0,4,19,-1,3,5,4,-1,1,24,25,-1,14,20,11,-1,20,19,11,-1,11,21,23,-1,19,21,11,-1,21,22,23,-1,26,29,28,-1,26,27,29,-1}).setTexCoordIndex(new int[] {30,31,32,-1,30,32,33,-1,31,34,35,-1,31,35,36,-1,37,38,39,-1,37,39,40,-1,38,41,42,-1,38,42,39,-1,41,43,44,-1,41,44,42,-1,43,45,46,-1,43,46,44,-1,47,33,48,-1,47,48,49,-1,33,32,50,-1,33,50,48,-1,32,36,50,-1,36,35,51,-1,36,51,50,-1,35,52,53,-1,35,53,51,-1,47,30,33,-1,54,45,43,-1,54,43,41,-1,55,41,38,-1,55,54,41,-1,55,38,37,-1,34,52,35,-1,31,36,32,-1,42,56,39,-1,44,57,42,-1,42,57,56,-1,40,39,58,-1,39,56,58,-1,46,59,44,-1,44,59,57,-1,60,61,62,-1,63,60,62,-1,64,65,66,-1,64,66,67,-1,68,69,65,-1,70,37,71,-1,67,66,72,-1,70,73,45,-1,68,74,75,-1,76,67,77,-1,76,77,74,-1,67,72,77,-1,68,75,69,-1,78,79,80,-1,79,81,80,-1,80,82,83,-1,81,82,80,-1,82,84,83,-1,85,86,87,-1,85,88,86,-1})
                        .setTexCoord(new TextureCoordinate("r_foot-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.9533,0.4685,0.947,0.4641,0.9521,0.4436,0.9559,0.4595,0.9387,0.4644,0.9322,0.462,0.939,0.4447,0.934,0.5157,0.9318,0.535,0.9337,0.5447,0.9307,0.539,0.9447,0.5367,0.9455,0.5461,0.9579,0.5345,0.9558,0.5448,0.9576,0.515,0.9629,0.538,0.9583,0.4758,0.9608,0.4521,0.9629,0.4894,0.9458,0.4391,0.9336,0.4522,0.9311,0.4772,0.9306,0.4881,0.9479,0.5237,0.9334,0.5207,0.9449,0.564,0.9491,0.5643,0.9392,0.557,0.9535,0.5582,0.878,0.5146,0.8857,0.497,0.8954,0.4943,0.9045,0.5131,0.8837,0.448,0.8777,0.451,0.883,0.4333,0.8928,0.4437,0.8908,0.4807,0.8819,0.4793,0.9462,0.4957,0.9414,0.5155,0.8938,0.4267,0.9542,0.515,0.9093,0.4608,0.9044,0.4832,0.9036,0.4457,0.9059,0.4345,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5})))
                        .setCoord(new Coordinate("r_foot-COORD").setPoint(new MFVec3f(new double[] {-5.084,67.11,-18.09,-3.567,66.77,-14.79,-2.193,67.1,-18.4,-3.903,67.39,-21.29,-5.256,68.49,-23.35,-4.039,68.78,-24.49,-4.682,69.78,-28.52,-5.444,69.94,-24.82,-2.868,68.53,-23.5,-2.401,69.88,-25.12,-3.224,69.78,-28.75,-1.807,68.53,-20.58,-1.694,68.1,-14.4,-2.002,69.09,-14.47,-1.435,68.96,-16.83,-3.539,68.14,-13.47,-3.534,69.11,-13.62,-5.192,68.08,-14.04,-5.093,69.13,-14.15,-5.598,68.11,-20.28,-5.604,68.97,-16.56,-5.361,70.67,-24.95,-3.894,70.52,-29.36,-2.566,70.72,-24.96,-4.648,67.31,-14.33,-2.246,67.3,-14.47,-3.164,71.29,-14.71,-3.929,71.28,-14.67,-3.201,71.24,-15.63,-3.967,71.23,-15.6})))))
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                        .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                      .setGeometry(new IndexedFaceSet("r_foot-FACE").setDEF("r_foot-FACE").setCcw(false).setCreaseAngle(15)
                        .setTexCoord(new TextureCoordinate().setUSE("r_foot-TEXCOORD"))
                        .setCoord(new Coordinate().setUSE("r_foot-COORD"))))))
                .addChild(new Transform("r_calf").setRotation(0.02525,0.06003,0.9979,-1.541).setScale(0.04139,0.04884,0.02866).setTranslation(-2.279,-0.2192,0.354)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                      .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                    .setGeometry(new IndexedFaceSet("r_calf-FACES").setDEF("r_calf-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {0,2,1,-1,1,2,3,-1,2,4,3,-1,2,5,4,-1,5,6,8,-1,4,5,8,-1,6,9,8,-1,6,10,9,-1,9,10,11,-1,10,12,11,-1,10,0,12,-1,0,7,12,-1,0,1,7,-1,13,14,0,-1,14,2,0,-1,14,15,2,-1,15,16,2,-1,5,16,17,-1,2,16,5,-1,5,17,6,-1,17,18,6,-1,18,10,6,-1,18,19,10,-1,10,20,0,-1,10,19,20,-1,20,13,0,-1,21,14,13,-1,21,22,14,-1,22,15,14,-1,22,23,15,-1,23,24,15,-1,15,24,16,-1,24,17,16,-1,24,25,17,-1,25,18,17,-1,25,26,18,-1,26,19,18,-1,26,27,19,-1,27,28,19,-1,19,28,20,-1,28,21,20,-1,20,21,13,-1,29,22,21,-1,29,30,22,-1,30,23,22,-1,30,31,23,-1,31,32,23,-1,23,32,24,-1,32,25,24,-1,32,33,25,-1,33,26,25,-1,33,34,26,-1,34,27,26,-1,34,35,27,-1,35,36,27,-1,27,36,28,-1,36,29,28,-1,28,29,21,-1}).setTexCoordIndex(new int[] {33,34,35,-1,35,34,36,-1,34,37,36,-1,34,38,37,-1,38,39,40,-1,37,38,40,-1,41,42,43,-1,41,44,42,-1,42,44,45,-1,44,46,45,-1,44,47,46,-1,47,48,46,-1,33,35,49,-1,50,51,33,-1,51,34,33,-1,51,52,34,-1,52,53,34,-1,38,53,54,-1,34,53,38,-1,38,54,39,-1,55,56,41,-1,56,44,41,-1,56,57,44,-1,44,58,47,-1,44,57,58,-1,58,59,47,-1,60,51,50,-1,60,61,51,-1,61,52,51,-1,61,62,52,-1,62,63,52,-1,52,63,53,-1,63,54,53,-1,63,64,54,-1,65,56,55,-1,65,66,56,-1,66,57,56,-1,66,67,57,-1,67,68,57,-1,57,68,58,-1,68,69,58,-1,58,69,59,-1,70,61,60,-1,70,71,61,-1,71,62,61,-1,71,72,62,-1,72,73,62,-1,62,73,63,-1,73,64,63,-1,73,74,64,-1,75,66,65,-1,75,76,66,-1,76,67,66,-1,76,77,67,-1,77,78,67,-1,67,78,68,-1,78,79,68,-1,68,79,69,-1})
                      .setTexCoord(new TextureCoordinate("r_calf-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.6033,0.446,0.6204,0.4418,0.6053,0.4914,0.6231,0.4906,0.655,0.4905,0.6504,0.4421,0.6635,0.4436,0.6642,0.4912,0.7566,0.4558,0.7548,0.5023,0.7536,0.5057,0.7828,0.4538,0.7845,0.5003,0.8138,0.5014,0.8158,0.4578,0.8276,0.5046,0.5999,0.4924,0.6019,0.3848,0.6068,0.3869,0.6253,0.3793,0.6538,0.3793,0.6624,0.3827,0.7562,0.3959,0.7617,0.396,0.7792,0.3957,0.8088,0.396,0.8189,0.3966,0.61,0.3127,0.6162,0.3117,0.6269,0.3092,0.6475,0.3095,0.6559,0.3109,0.7563,0.3259,0.7642,0.3254,0.7765,0.3268,0.7967,0.3256,0.8042,0.3254,0.6188,0.2739,0.622,0.2718,0.6287,0.2718,0.6382,0.2716,0.6467,0.2716,0.7651,0.2755,0.7709,0.2712,0.7764,0.2723,0.7853,0.2759,0.7917,0.2808})))
                      .setCoord(new Coordinate("r_calf-COORD").setPoint(new MFVec3f(new double[] {-6.974,49.27,-13.89,-6.529,44.92,-10.75,-4.426,49.63,-8.407,-4.516,45.0,-9.194,-1.974,44.92,-10.74,-2.093,49.51,-10.37,-1.249,49.23,-15.38,-7.712,44.58,-13.3,-1.076,44.77,-13.55,-1.705,44.27,-17.47,-4.304,48.98,-19.45,-4.495,43.97,-19.0,-6.447,44.09,-17.23,-7.246,55.04,-15.12,-6.368,55.44,-12.38,-4.048,55.48,-11.03,-1.769,55.4,-12.35,-0.9347,54.99,-15.08,-1.811,54.81,-17.99,-3.882,54.67,-19.04,-6.277,54.75,-17.84,-6.232,61.82,-16.07,-5.666,62.01,-13.64,-3.786,62.07,-12.55,-1.935,61.97,-13.63,-1.139,61.77,-16.05,-1.959,61.55,-18.66,-3.638,61.29,-19.49,-5.541,61.5,-18.52,-5.084,67.11,-18.09,-5.032,66.86,-15.8,-3.567,66.77,-14.79,-2.622,66.86,-15.79,-2.193,67.1,-18.4,-2.699,67.31,-20.57,-3.903,67.39,-21.29,-4.826,67.28,-20.57})))))
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                      .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                    .setGeometry(new IndexedFaceSet("r_calf-FACE").setDEF("r_calf-FACE").setCcw(false).setCreaseAngle(15)
                      .setTexCoord(new TextureCoordinate().setUSE("r_calf-TEXCOORD"))
                      .setCoord(new Coordinate().setUSE("r_calf-COORD"))))))
              .addChild(new Transform("r_thigh").setRotation(-0.07598,0.163,0.9837,-1.563).setScale(0.04138,0.04224,0.02833).setScaleOrientation(-0.6562,0.04574,-0.7532,-0.1307).setTranslation(-0.9695,-0.2192,-0.09513)
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                    .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                  .setGeometry(new IndexedFaceSet("r_thigh-FACES").setDEF("r_thigh-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {6,3,11,-1,5,7,12,-1,7,8,12,-1,12,8,13,-1,8,9,13,-1,13,9,14,-1,9,15,14,-1,9,10,15,-1,10,6,15,-1,15,6,11,-1,11,17,16,-1,11,3,17,-1,3,18,17,-1,3,4,18,-1,4,5,18,-1,18,5,19,-1,5,20,19,-1,5,12,20,-1,12,13,21,-1,20,12,21,-1,13,22,21,-1,13,14,22,-1,14,15,22,-1,22,15,23,-1,15,11,23,-1,23,11,16,-1,16,17,24,-1,24,17,25,-1,17,26,25,-1,17,18,26,-1,18,19,26,-1,26,19,27,-1,19,28,27,-1,19,20,28,-1,28,20,0,-1,2,0,22,-1,23,16,24,-1,25,29,24,-1,23,1,22,-1,0,20,21,-1,24,1,23,-1,1,2,22,-1,21,22,0,-1,27,28,0,-1,30,25,26,-1,31,30,26,-1,31,26,27,-1,32,31,27,-1}).setTexCoordIndex(new int[] {35,26,36,-1,28,29,37,-1,31,38,39,-1,31,30,38,-1,30,32,38,-1,38,32,40,-1,32,41,40,-1,32,33,41,-1,33,34,41,-1,41,34,42,-1,36,43,44,-1,36,26,43,-1,26,45,43,-1,26,27,45,-1,27,28,45,-1,45,28,46,-1,28,47,46,-1,28,37,47,-1,39,48,49,-1,39,38,48,-1,38,50,48,-1,38,40,50,-1,40,41,50,-1,50,41,51,-1,41,42,51,-1,51,42,52,-1,44,43,53,-1,53,43,54,-1,43,55,54,-1,43,45,55,-1,45,46,55,-1,55,46,56,-1,46,57,56,-1,46,47,57,-1,58,48,25,-1,24,25,50,-1,51,52,59,-1,54,60,53,-1,51,23,50,-1,58,49,48,-1,59,23,51,-1,23,24,50,-1,48,50,25,-1,61,63,62,-1,64,54,55,-1,65,64,55,-1,65,55,56,-1,66,67,68,-1})
                    .setTexCoord(new TextureCoordinate("r_thigh-TEXCOORD").setPoint(new MFVec2f(new double[] {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.8129,0.7538,0.7702,0.7394,0.748,0.6836,0.6053,0.4914,0.6231,0.4906,0.655,0.4905,0.6642,0.4912,0.7548,0.5023,0.7536,0.5057,0.7845,0.5003,0.8138,0.5014,0.8276,0.5046,0.5999,0.4924,0.5934,0.5364,0.6703,0.5365,0.7632,0.5535,0.7526,0.5493,0.7899,0.5545,0.8126,0.5527,0.8327,0.5481,0.5843,0.6207,0.5821,0.631,0.6137,0.5991,0.6553,0.5964,0.6803,0.616,0.7563,0.6321,0.7482,0.6301,0.7909,0.6367,0.8254,0.6409,0.849,0.6403,0.5877,0.7295,0.5783,0.6847,0.6124,0.6536,0.6775,0.6816,0.6828,0.6571,0.7486,0.6682,0.8455,0.7399,0.587,0.7167,0.9344,0.668,0.9314,0.7002,0.9469,0.6788,0.6085,0.702,0.6291,0.6824,0.9026,0.7003,0.9036,0.7173,0.9021,0.6934})))
                    .setCoord(new Coordinate("r_thigh-COORD").setPoint(new MFVec3f(new double[] {-0.3312,25.97,-13.79,-6.555,21.73,-13.57,-3.631,22.06,-15.59,-6.526,45.22,-10.87,-4.513,45.36,-9.341,-1.971,45.22,-10.86,-7.719,44.77,-13.55,-1.076,44.77,-13.55,-1.647,46.91,-18.21,-4.509,46.17,-20.57,-7.035,45.71,-17.72,-8.223,40.63,-12.99,-0.6866,40.63,-13.01,-2.03,39.69,-16.97,-4.966,39.28,-19.06,-6.65,39.69,-17.0,-9.441,31.87,-11.56,-8.105,32.82,-6.428,-5.267,34.86,-4.789,-1.793,35.03,-5.724,-0.3959,32.99,-11.66,-1.926,32.15,-16.38,-5.032,31.41,-18.28,-7.688,31.29,-15.8,-8.507,22.31,-8.552,-8.893,26.86,-3.38,-5.401,29.75,-3.026,0.3505,27.0,-3.263,-0.06787,29.3,-6.003,-8.667,23.53,-3.137,-5.314,25.3,2.093,-3.534,27.11,1.436,-1.379,27.37,-1.518})))))
                .addChild(new Shape()
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                    .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                  .setGeometry(new IndexedFaceSet("r_thigh-FACE").setDEF("r_thigh-FACE").setCcw(false).setCreaseAngle(15)
                    .setTexCoord(new TextureCoordinate().setUSE("r_thigh-TEXCOORD"))
                    .setCoord(new Coordinate().setUSE("r_thigh-COORD"))))))
            .addChild(new Transform("spine").setRotation(-0.09728,-0.01066,-0.9952,-1.581).setScale(0.1592,0.3862,0.1107).setScaleOrientation(0.9999,-9.227E-4,0.01026,-0.06374).setTranslation(7.25,-0.01997,0.06469)
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                  .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
                .setGeometry(new IndexedFaceSet("spine-FACES").setDEF("spine-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(getspine_FACES_9_401_coordIndex()).setTexCoordIndex(getspine_FACES_9_401_texCoordIndex())
                  .setTexCoord(new TextureCoordinate("spine-TEXCOORD").setPoint(getspine_TEXCOORD_10_401_point()))
                  .setCoord(new Coordinate("spine-COORD").setPoint(getspine_COORD_10_402_point()))))
              .addChild(new Shape()
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                  .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
                .setGeometry(new IndexedFaceSet("spine-FACE").setDEF("spine-FACE").setCcw(false).setCreaseAngle(15)
                  .setTexCoord(new TextureCoordinate().setUSE("spine-TEXCOORD"))
                  .setCoord(new Coordinate().setUSE("spine-COORD"))))))
          .addChild(new Transform("pelvis").setRotation(-0.1065,-0.02337,-0.994,-1.584).setScale(0.1034,0.09767,0.05738).setScaleOrientation(0.008598,-0.5432,0.8395,-0.0572).setTranslation(2.285,-0.01297,0.03239)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.01961,0.3529,0.3098).setShininess(0.145))
                .setTexture(new ImageTexture().setUSE("LaetitiaBodyTemplate")))
              .setGeometry(new IndexedFaceSet("pelvis-FACES").setDEF("pelvis-FACES").setCcw(false).setCreaseAngle(15).setCoordIndex(new int[] {17,7,18,-1,8,18,7,-1,0,10,18,-1,18,8,0,-1,15,7,17,-1,9,6,16,-1,14,1,19,-1,19,1,9,-1,9,16,19,-1,7,15,6,-1,6,15,16,-1,18,10,11,-1,20,23,15,-1,17,20,15,-1,20,24,23,-1,25,27,26,-1,28,12,27,-1,28,27,25,-1,26,27,19,-1,29,30,12,-1,29,12,28,-1,27,12,14,-1,25,23,24,-1,26,19,16,-1,26,16,23,-1,25,24,21,-1,25,21,31,-1,25,31,28,-1,31,32,33,-1,31,33,28,-1,28,33,29,-1,32,34,33,-1,33,34,35,-1,33,35,29,-1,29,35,30,-1,34,22,35,-1,35,13,36,-1,35,36,30,-1,22,13,35,-1,27,14,19,-1,15,23,16,-1,26,23,25,-1,40,41,3,-1,4,3,41,-1,0,41,10,-1,41,0,4,-1,38,40,3,-1,5,39,2,-1,14,42,1,-1,42,5,1,-1,5,42,39,-1,3,2,38,-1,2,39,38,-1,41,11,10,-1,43,38,45,-1,40,38,43,-1,43,45,46,-1,47,48,49,-1,50,49,12,-1,50,47,49,-1,48,42,49,-1,29,12,51,-1,29,50,12,-1,49,14,12,-1,47,46,45,-1,48,39,42,-1,48,45,39,-1,47,44,46,-1,47,52,44,-1,47,50,52,-1,52,54,53,-1,52,50,54,-1,50,29,54,-1,53,54,55,-1,54,56,55,-1,54,29,56,-1,29,51,56,-1,55,56,22,-1,56,57,37,-1,56,51,57,-1,22,56,37,-1,49,42,14,-1,38,39,45,-1,48,47,45,-1}).setTexCoordIndex(getpelvis_FACES_8_417_texCoordIndex())
                .setTexCoord(new TextureCoordinate("pelvis-TEXCOORD").setPoint(getpelvis_TEXCOORD_9_417_point()))
                .setCoord(new Coordinate("pelvis-COORD").setPoint(getpelvis_COORD_9_418_point()))))
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.5882,0.5882,0.5882).setShininess(0.145))
                .setTexture(new ImageTexture().setUSE("LaetitiaHeadTemplate")))
              .setGeometry(new IndexedFaceSet("pelvis-FACE").setDEF("pelvis-FACE").setCcw(false).setCreaseAngle(15)
                .setTexCoord(new TextureCoordinate().setUSE("pelvis-TEXCOORD"))
                .setCoord(new Coordinate().setUSE("pelvis-COORD"))))))))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Pelvis-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Pelvis-POS-INTERP").setFromField("value_changed").setToNode("Laetitia_Pelvis").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Pelvis-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Pelvis-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_Pelvis").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Spine-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Spine-POS-INTERP").setFromField("value_changed").setToNode("Laetitia_Spine").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Spine-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Spine-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_Spine").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Neck-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Neck-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_Neck").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Head-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Head-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_Head").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_Head-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_Head-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_Head").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_UpperArm-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_UpperArm-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_UpperArm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_UpperArm-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_UpperArm-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_L_UpperArm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Forearm-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Forearm-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Forearm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Forearm-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Forearm-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Forearm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Hand-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Hand-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Hand").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Hand-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Hand-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Hand").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_UpperArm-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_UpperArm-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_UpperArm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_UpperArm-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_UpperArm-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_R_UpperArm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Forearm-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Forearm-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Forearm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Forearm-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Forearm-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Forearm").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Hand-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Hand-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Hand").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Hand-SCALE-ORI-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Hand-SCALE-ORI-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Hand").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Thigh-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Thigh-POS-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Thigh").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Thigh-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Thigh-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Thigh").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Calf-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Calf-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Calf").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_L_Foot-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_L_Foot-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_L_Foot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Thigh-POS-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Thigh-POS-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Thigh").setToField("set_translation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Thigh-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Thigh-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Thigh").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Calf-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Calf-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Calf").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("Laetitia-TIMER").setFromField("fraction_changed").setToNode("Laetitia_R_Foot-ROT-INTERP").setToField("set_fraction"))
    .addChild(new ROUTE().setFromNode("Laetitia_R_Foot-ROT-INTERP").setFromField("value_changed").setToNode("Laetitia_R_Foot").setToField("set_rotation"))
    .addChild(new ROUTE().setFromNode("TrackBuilder").setFromField("orientation_changed").setToNode("LaetitiaTransformDVD").setToField("rotation"))
    .addChild(new ROUTE().setFromNode("TrackBuilder").setFromField("position_changed").setToNode("LaetitiaTransformDVD").setToField("translation")));
    }
	// end of initialize() method





		/** Define subarrays using type double[] */
		private double[] gethead_TEXCOORD_15_110_point_1()
		{
			double[] value = {0.8126,0.5527,0.8327,0.5481,0.5843,0.6207,0.5821,0.631,0.6137,0.5991,0.6553,0.5964,0.6803,0.616,0.7563,0.6321,0.7482,0.6301,0.7909,0.6367,0.8254,0.6409,0.849,0.6403,0.5877,0.7295,0.5783,0.6847,0.6124,0.6536,0.6775,0.6816,0.6828,0.6571,0.7486,0.6682,0.8455,0.7399,0.5926,0.7439,0.587,0.7167,0.9344,0.668,0.9314,0.7002,0.9469,0.6788,0.934,0.7474,0.6007,0.7207,0.6604,0.7523,0.6072,0.7396,0.6548,0.7295,0.6773,0.7408,0.6762,0.7191,0.6856,0.7101,0.6085,0.702,0.6291,0.6824,0.6556,0.6992,0.6583,0.6785,0.6747,0.6943,0.6855,0.683,0.697,0.6979,0.9026,0.7003,0.9036,0.7173,0.9021,0.6934,0.2451,0.5731,0.4293,0.7821,0.4225,0.7765,0.4384,0.778,0.4029,0.7448,0.3927,0.769,0.3796,0.7282,0.4393,0.7324,0.4636,0.7422,0.3712,0.7302,0.4656,0.7817,0.3887,0.7856,0.3735,0.7608,0.4397,0.795,0.4121,0.6221,0.379,0.6153,0.436,0.7234,0.3921,0.6306,0.4214,0.6366,0.4371,0.6324,0.4316,0.5878,0.4019,0.5859,0.4389,0.6127,0.3644,0.5404,0.3711,0.438,0.363,0.4443,0.3752,0.5355,0.3969,0.5325,0.3896,0.4348,0.4186,0.5324,0.4231,0.5451,0.4257,0.5881,0.4355,0.588,0.4025,0.5345,0.3814,0.4347,0.3647,0.4436,0.3797,0.5379,0.4049,0.5869,0.3848,0.5924,0.4316,0.2796,0.4516,0.2642,0.4269,0.2746,0.4344,0.2955,0.4297,0.2979,0.4434,0.3162,0.4711,0.3068,0.4727,0.266,0.4573,0.3127,0.4241,0.2321,0.4256,0.2498,0.4306,0.2511,0.4234,0.2217,0.4289,0.2248,0.432,0.2269,0.4292,0.2191,0.4283,0.2337,0.4319,0.2128,0.4378,0.2182};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_2()
		{
			double[] value = {0.4426,0.2251,0.439,0.2288,0.4394,0.213,0.4422,0.2172,0.4519,0.226,0.4489,0.2303,0.4487,0.2172,0.456,0.245,0.4525,0.2478,0.4632,0.2489,0.4557,0.2373,0.4544,0.2291,0.4589,0.2312,0.4629,0.2365,0.4611,0.2393,0.4595,0.2288,0.4673,0.2512,0.4271,0.2805,0.4498,0.3153,0.4307,0.2686,0.4445,0.2685,0.4626,0.3106,0.4623,0.267,0.4267,0.2318,0.4259,0.2252,0.4275,0.2412,0.4291,0.2506,0.4348,0.2452,0.4383,0.2364,0.4399,0.2448,0.4368,0.2263,0.4356,0.2208,0.4458,0.244,0.4492,0.2389,0.4505,0.2462,0.4466,0.2233,0.447,0.2286,0.4593,0.2374,0.4582,0.2331,0.461,0.2452,0.4627,0.2528,0.4165,0.2663,0.4089,0.263,0.4071,0.2662,0.4183,0.277,0.4042,0.269,0.4119,0.2763,0.42,0.2841,0.4136,0.2705,0.4103,0.2672,0.4049,0.2655,0.6019,0.3848,0.6068,0.3869,0.6253,0.3793,0.6538,0.3793,0.6624,0.3827,0.7562,0.3959,0.7617,0.396,0.7792,0.3957,0.8088,0.396,0.8189,0.3966,0.61,0.3127,0.6162,0.3117,0.6269,0.3092,0.6475,0.3095,0.6559,0.3109,0.7563,0.3259,0.7642,0.3254,0.7765,0.3268,0.7967,0.3256,0.8042,0.3254,0.6188,0.2739,0.622,0.2718,0.6287,0.2718,0.6382,0.2716,0.6467,0.2716,0.7651,0.2755,0.7709,0.2712,0.7764,0.2723,0.7853,0.2759,0.7917,0.2808,0.9533,0.4685,0.947,0.4641,0.9521,0.4436,0.9559,0.4595,0.9387,0.4644,0.9322,0.462,0.939,0.4447,0.934,0.5157,0.9318,0.535,0.9337,0.5447,0.9307,0.539,0.9447,0.5367,0.9455,0.5461,0.9579,0.5345,0.9558,0.5448,0.9576,0.515,0.9629,0.538,0.9583,0.4758,0.9608,0.4521};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_3()
		{
			double[] value = {0.9629,0.4894,0.9458,0.4391,0.9336,0.4522,0.9311,0.4772,0.9306,0.4881,0.9479,0.5237,0.9334,0.5207,0.9449,0.564,0.9491,0.5643,0.9392,0.557,0.9535,0.5582,0.878,0.5146,0.8857,0.497,0.8954,0.4943,0.9045,0.5131,0.8837,0.448,0.8777,0.451,0.883,0.4333,0.8928,0.4437,0.8908,0.4807,0.8819,0.4793,0.9462,0.4957,0.9414,0.5155,0.8938,0.4267,0.9542,0.515,0.9093,0.4608,0.9044,0.4832,0.9036,0.4457,0.9059,0.4345,0.09562,0.6679,0.1058,0.6699,0.4529,0.7907,0.2246,0.3566,0.3073,0.3671,0.07699,0.6575,0.2122,0.6544,0.1242,0.7349,0.1317,0.7413,0.14,0.7441,0.1595,0.7363,0.1502,0.739,0.1612,0.7603,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_4()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.05235,0.6182,0.03497,0.5863,0.05009,0.575,0.04345,0.6114,0.05434,0.5749,0.7548,0.5023,0.7845,0.5003,0.8276,0.5046,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.7115,0.6061,0.9203,0.6057,0.3188,0.8471,0.5892,0.2322,0.7608,0.6101,0.8616,0.6461,0.9045,0.6504,0.5033,0.7486,0.4644,0.8045,0.3678,0.8368,0.7105,0.5041,0.7115,0.4157,0.7117,0.3652,0.2823,0.5568,0.3072,0.6266,0.1452,0.6886,0.1574,0.7609,0.2553,0.8396,0.2388,0.5121,0.3045,0.5111,0.7044,0.2298,0.3601,0.6655,0.3108,0.7723,0.3156,0.8102,0.6403,0.3063,0.855,0.4262,0.8886,0.5294,0.4905,0.7493,0.4246,0.7163,0.3728,0.7946,0.7424,0.5043,0.7682,0.3905,0.8538,0.5137,0.1807,0.7166,0.2196,0.7746,0.2678,0.7302,0.3057,0.5124,0.9285,0.537,0.7053,0.3068,0.4157,0.8238,0.7114,0.6716,0.7114,0.5836,0.7113,0.57,0.7109,0.5391,0.7415,0.5365,0.7352,0.5607,0.7106,0.5245,0.7114,0.4937,0.7116,0.4863,0.7112,0.4646,0.748,0.4876,0.7587,0.4623,0.7486,0.5534,0.7702,0.5064,0.7966,0.4474,0.8166,0.4224,0.581,0.2608,0.7116,0.4412,0.7119,0.4066,0.7118,0.3818,0.5649,0.2347,0.6549,0.2302,0.7581,0.4216,0.7112,0.4556,0.7114,0.4281,0.7616,0.4422,0.7327,0.4684,0.8021,0.5088,0.7506,0.5203,0.731,0.5215,0.7589,0.4274};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_5()
		{
			double[] value = {0.8247,0.6334,0.7522,0.5927,0.8839,0.5857,0.8148,0.6622,0.7979,0.582,0.7331,0.5818,0.8471,0.6014,0.8761,0.6241,0.7881,0.6158,0.7937,0.6316,0.4532,0.7373,0.4465,0.7799,0.836,0.4691,0.7422,0.23,0.7113,0.6352,0.7804,0.3806,0.7326,0.5974,0.7481,0.6196,0.7689,0.6444,0.8449,0.5879,0.7971,0.5484,0.8571,0.5587,0.7707,0.4834,0.1511,0.587,0.1696,0.6105,0.1975,0.814,0.1997,0.5284,0.1802,0.5409,0.1593,0.5518,0.1474,0.5219,0.1288,0.5012,0.1018,0.4655,0.07201,0.4159,0.02679,0.3441,0.05829,0.2186,0.09219,0.1816,0.1579,0.1795,0.1803,0.238,0.2153,0.3139,0.2279,0.4148,0.214,0.4605,0.2176,0.4777,0.2285,0.4941,0.08988,0.3155,0.1442,0.3629,0.1972,0.5113,0.1475,0.2981,0.1254,0.233,0.148,0.4101,0.1465,0.4589,0.174,0.4945,0.09557,0.2585,0.1499,0.4957,0.1652,0.51,0.178,0.5238,0.5109,0.1797,0.5065,0.1739,0.4986,0.1703,0.4931,0.171,0.4851,0.1719,0.4798,0.1784,0.4782,0.1864,0.5159,0.2007,0.5077,0.1955,0.4997,0.1963,0.495,0.2102,0.489,0.202,0.4791,0.198,0.5299,0.2001,0.5227,0.2015,0.5162,0.2231,0.489,0.2186,0.4868,0.2069,0.5367,0.2169,0.5176,0.2323,0.5003,0.2388,0.4898,0.2365,0.5371,0.2332,0.5297,0.2341,0.5176,0.2469,0.505,0.2559,0.4989,0.2522,0.5332,0.2475,0.5057,0.2626,0.4954,0.2614,0.4907,0.2553,0.4843,0.2549,0.5261,0.2641,0.5215,0.2704,0.5136,0.272,0.5052,0.2743,0.4947,0.2717,0.4862,0.2639,0.5113,0.1788,0.5069,0.173,0.499,0.1694,0.4855,0.1711,0.4813,0.177,0.5164,0.1998,0.5081,0.1946};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_6()
		{
			double[] value = {0.5001,0.1955,0.5303,0.1992,0.5258,0.2161,0.518,0.2315,0.5371,0.216,0.5375,0.2324,0.5301,0.2332,0.518,0.2461,0.5054,0.2551,0.5337,0.2467,0.5164,0.2576,0.5061,0.2618,0.4958,0.2605,0.5266,0.2632,0.5219,0.2696,0.514,0.2711,0.5056,0.2734,0.4952,0.2709,0.4866,0.263,0.5177,0.6098,0.6649,0.6045,0.569,0.6744,0.5305,0.6554,0.2845,0.5569,0.3085,0.6276,0.3617,0.6663,0.3059,0.7563,0.3128,0.7974,0.634,0.1634,0.5562,0.4303,0.551,0.53,0.4822,0.7453,0.4224,0.7131,0.3696,0.7805,0.6794,0.5044,0.6566,0.3908,0.5768,0.5143,0.1807,0.7158,0.2205,0.7754,0.262,0.7111,0.3054,0.5118,0.5149,0.5288,0.7042,0.1559,0.6816,0.5366,0.6882,0.5608,0.6758,0.4878,0.6647,0.4624,0.6655,0.5582,0.6521,0.5043,0.6284,0.4478,0.6143,0.4101,0.5797,0.2022,0.6661,0.4218,0.662,0.4424,0.6902,0.4685,0.612,0.5096,0.6732,0.5199,0.6906,0.5216,0.6648,0.4275,0.6006,0.6387,0.6699,0.5917,0.5465,0.5863,0.6097,0.6626,0.6232,0.5834,0.6905,0.5819,0.5874,0.6082,0.557,0.6118,0.6363,0.6201,0.6272,0.633,0.4554,0.7347,0.4434,0.7663,0.5927,0.4713,0.6481,0.3724,0.691,0.5975,0.67,0.6224,0.654,0.6446,0.5782,0.5894,0.627,0.5519,0.5845,0.5609,0.6527,0.4895,0.1692,0.6095,0.1989,0.5257,0.1794,0.5383,0.09398,0.3588,0.1362,0.4032,0.1964,0.5087,0.161,0.3162,0.1281,0.2293,0.1459,0.4498,0.1732,0.4907,0.08025,0.278,0.1492,0.4933,0.1644,0.5076,0.1772,0.5214,0.4166,0.1802,0.4206,0.1745,0.4283,0.1709,0.4338,0.1716,0.4418,0.1726,0.4461,0.1785};
			return value;
		}
		private double[] gethead_TEXCOORD_15_110_point_7()
		{
			double[] value = {0.4494,0.1874,0.4124,0.201,0.4204,0.1959,0.4283,0.1968,0.432,0.2108,0.4376,0.2026,0.4482,0.1984,0.3985,0.2004,0.4058,0.2019,0.4115,0.2236,0.4388,0.2186,0.4417,0.2076,0.3925,0.2171,0.4105,0.2328,0.428,0.2392,0.3929,0.2334,0.4002,0.2342,0.4128,0.247,0.424,0.2562,0.4299,0.2525,0.3973,0.2475,0.4248,0.2627,0.4348,0.2615,0.4396,0.2555,0.4489,0.256,0.4051,0.264,0.41,0.2703,0.4179,0.2719,0.4264,0.2742,0.4366,0.2717,0.4447,0.2639,0.416,0.1778,0.4213,0.1734,0.4291,0.1699,0.4425,0.1715,0.4468,0.1774,0.4501,0.1864,0.4131,0.2,0.4211,0.1949,0.429,0.1957,0.3993,0.1994,0.4045,0.2162,0.3932,0.2161,0.4009,0.2332,0.3936,0.2323,0.4136,0.2459,0.4248,0.2552,0.398,0.2465,0.4157,0.2574,0.4255,0.2616,0.4356,0.2604,0.4407,0.254,0.4058,0.2629,0.4107,0.2693,0.4186,0.2708,0.4271,0.2731,0.4373,0.2706,0.4455,0.2628,0.8673,0.4753,0.5559,0.4701,0.4896,0.2468,0.441,0.2417,0.7161,0.7588,0.9698,0.5545,0.9555,0.6365,0.9299,0.7021,0.8135,0.3782,0.7696,0.7689,0.88,0.7396,0.9587,0.4934,0.876,0.416,0.7507,0.349,0.7119,0.3507,0.8256,0.7594,0.4623,0.5555,0.4752,0.6494,0.5031,0.6976,0.6095,0.3784,0.6417,0.7671,0.5467,0.7301,0.4728,0.4963,0.548,0.4079,0.6693,0.3498,0.5962,0.7535,0.8035,0.2322,0.7992,0.2901,0.8026,0.1751};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] gethead_COORD_15_111_point_1()
		{
			double[] value = {-1.887,-3.78,2.657,2.479,-3.707,2.394,-0.407,-8.198,-6.974,4.272,-7.33,-0.8678,0.2667,-12.64,4.28,-0.2694,-1.954,-6.377,0.4657,-8.225,-6.412,3.373,-8.893,-5.017,3.832,-8.062,-3.52,-0.3357,-11.01,-5.457,-0.1641,-12.4,-2.276,0.1209,-12.67,2.079,-0.5186,-5.967,-9.182,-0.4501,-3.993,-8.628,-0.4332,-2.838,-8.648,3.425,-5.88,3.528,4.132,-8.029,2.97,0.7743,-8.52,10.99,0.7071,-10.41,10.39,0.4247,-12.39,6.594,0.5476,-4.373,6.568,0.3109,-3.022,2.662,0.07495,-2.584,-1.014,4.426,-8.096,-0.08317,3.661,-11.39,4.122,2.233,-12.39,4.274,2.315,-2.901,-4.991,3.27,-3.785,-3.971,4.148,-5.799,-2.08,1.454,-11.44,-3.961,3.711,-9.511,-2.623,2.338,-12.17,1.55,0.08449,-6.003,-8.741,1.074,-3.278,-7.337,3.241,-5.798,-5.186,2.987,-9.652,9.707,2.992,-11.42,8.239,4.419,-10.06,5.745,3.881,-5.905,0.2803,2.644,-3.27,-1.936,-0.0305,-12.66,-0.1911,-0.4055,-9.71,-6.559,-0.4253,-7.715,-7.367,-0.4362,-7.422,-7.602,-0.4763,-6.761,-8.355,0.1428,-6.593,-7.301,0.04294,-7.117,-6.899,-0.5184,-6.206,-9.135,-0.4789,-5.709,-8.656,-0.4435,-5.512,-8.167,-0.4898,-5.091,-8.968,0.3879,-5.491,-7.736,0.7558,-4.964,-8.331,0.3191,-7.002,-6.459,0.7049,-5.81,-7.161,1.805,-4.479,-6.918,2.372,-3.866,-5.977,0.6208,-2.21,-7.706,-0.4473,-4.527,-8.458,-0.4101,-3.735,-8.084,-0.4185,-3.194,-8.34,-0.4043,-2.326,-8.332,-0.05927,-2.122,-3.156,0.7919,-4.005,-7.631,-0.4908,-4.902,-9.027,-0.4675,-4.284,-8.822,0.842,-4.517,-8.213,0.0755,-5.134,-8.631,1.904,-5.939,-7.342,0.2589,-6.263,-7.862,-0.131,-6.416,-8.788,0.7809,-4.19,-8.16,2.364,-8.897,-6.341,0.264,-7.732,-5.932,3.701,-7.391,-4.304,2.235,-9.446,-6.385,1.226,-7.595,-6.25,0.01432,-7.581,-6.612,2.669,-8.166,-5.859,3.361,-8.418,-5.319,1.041,-8.327,-5.8,1.141,-8.823,-6.851,2.897,-10.73,-3.276,1.994,-12.04,-1.873,2.591,-5.008,-6.317,0.1669,-3.088,0.4973,-0.4256,-8.907,-7.067,1.397,-3.025,-7.188,0.009189,-7.935,-6.475,0.3285,-8.601,-7.179,0.6217,-9.108,-7.034,2.853,-7.625,-5.005,1.191,-6.757,-6.435,2.964,-6.894,-5.251,0.9026,-5.407,-7.778,0.781,-5.288,10.32,3.192,-6.753,9.553,0.5883,-11.58,8.877,1.195,-4.435,7.997,1.233,-4.705,8.963};
			return value;
		}
		private double[] gethead_COORD_15_111_point_2()
		{
			double[] value = {0.7519,-4.422,9.672,0.7862,-4.081,10.11,0.8817,-3.527,11.42,0.9569,-2.598,12.34,1.018,-0.7746,12.83,1.188,1.149,14.95,1.085,4.422,12.61,0.9607,5.302,10.84,0.8052,5.126,7.838,0.7566,3.401,7.881,0.6023,1.284,6.05,0.5514,-1.504,5.942,0.6729,-2.965,8.129,0.6053,-3.246,7.173,0.5755,-3.587,6.803,1.711,1.729,11.67,1.555,0.2519,9.493,1.167,-3.965,8.011,1.345,1.984,8.971,1.418,3.825,9.58,1.331,-1.051,9.629,1.211,-2.374,10.01,1.315,-3.425,8.955,1.47,3.239,11.1,1.287,-3.376,10.07,1.246,-3.818,9.461,1.211,-4.238,8.962,4.126,-5.9,3.185,4.019,-5.758,2.965,3.876,-5.707,2.615,3.795,-5.764,2.404,3.676,-5.848,2.094,3.629,-6.075,1.942,3.71,-6.333,1.906,4.312,-6.485,3.584,4.155,-6.389,3.208,4.036,-6.469,2.899,3.809,-6.882,3.0,3.672,-6.681,2.686,3.729,-6.66,2.09,4.525,-6.371,4.134,4.421,-6.464,3.859,4.21,-7.118,3.965,3.874,-7.187,2.761,3.884,-6.87,2.487,4.723,-6.822,4.56,4.281,-7.382,4.102,4.048,-7.694,3.473,4.055,-7.72,2.905,4.818,-7.303,4.723,4.711,-7.38,4.436,4.59,-7.843,4.07,4.215,-8.167,3.817,4.1,-8.099,3.541,4.836,-7.752,4.7,4.408,-8.379,3.798,4.242,-8.412,3.38,4.039,-8.253,3.207,4.141,-8.313,2.799,4.816,-8.29,4.568,4.779,-8.511,4.441,4.665,-8.612,4.141,4.546,-8.738,3.825,4.371,-8.735,3.387,4.195,-8.561,2.974,4.29,-5.892,3.077,4.184,-5.75,2.856,4.041,-5.699,2.507,3.841,-5.84,1.986,3.797,-6.043,1.881,4.476,-6.477,3.476,4.319,-6.381,3.1,4.2,-6.461,2.79,4.69,-6.363,4.026,4.713,-6.895,4.001,4.446,-7.374,3.994,4.888,-6.814,4.451,4.982,-7.295,4.614,4.875,-7.372,4.328,4.754,-7.835,3.961,4.379,-8.159,3.709,5.001,-7.745,4.591,4.792,-8.187,4.002,4.572,-8.371,3.69,4.406,-8.405,3.272,4.981,-8.283,4.459,4.944,-8.503,4.333,4.829,-8.604,4.032,4.711,-8.73,3.716,4.535,-8.727,3.279,4.359,-8.553,2.866,-4.174,-7.235,0.2955,-1.191,-8.206,-6.184,-3.883,-8.811,-4.017,-4.112,-7.972,-2.426,-2.688,-5.508,4.009,-3.534,-7.794,3.941,-4.256,-8.146,0.8519,-3.064,-11.31,5.046,-1.848,-12.2,4.802};
			return value;
		}
		private double[] gethead_COORD_15_111_point_3()
		{
			double[] value = {-2.539,-2.652,-4.366,-3.486,-3.723,-3.035,-4.163,-5.705,-0.9352,-2.248,-11.48,-4.128,-4.038,-9.715,-1.086,-2.11,-12.02,2.138,-1.052,-5.99,-8.584,-1.755,-3.246,-6.948,-3.679,-5.72,-4.233,-1.597,-9.6,10.34,-1.85,-11.36,8.903,-3.68,-10.05,6.874,-3.595,-5.82,1.31,-2.589,-3.211,-1.215,-0.9394,-6.581,-7.152,-0.8051,-7.108,-6.782,-1.203,-5.473,-7.517,-1.625,-4.937,-8.004,-1.015,-6.987,-6.275,-1.449,-5.786,-6.865,-2.455,-4.431,-6.331,-2.753,-3.517,-5.336,-1.47,-2.176,-7.42,-1.539,-3.979,-7.31,-1.68,-4.488,-7.865,-1.002,-5.122,-8.483,-2.703,-5.897,-6.705,-1.117,-6.248,-7.672,-0.8598,-6.407,-8.688,-1.603,-4.163,-7.831,-3.066,-8.836,-5.593,-0.9146,-7.718,-5.769,-4.065,-7.304,-3.234,-2.962,-9.387,-5.67,-1.859,-7.584,-5.814,-0.7539,-7.573,-6.506,-3.195,-8.12,-5.05,-3.814,-8.314,-4.336,-1.679,-8.297,-5.426,-1.929,-8.788,-6.428,-3.145,-10.73,-2.25,-2.219,-11.89,-1.316,-3.02,-4.984,-5.536,-1.956,-2.793,-6.77,-0.742,-7.927,-6.372,-1.168,-8.584,-6.972,-1.453,-9.084,-6.749,-3.235,-7.585,-3.996,-1.763,-6.775,-6.015,-3.449,-6.822,-4.367,-1.71,-5.499,-7.391,-1.732,-6.697,10.23,0.09739,-4.422,8.148,0.178,-4.693,9.108,0.4737,0.4701,11.9,0.3498,-0.8807,10.24,0.1411,-3.953,8.153,0.08874,1.376,8.614,0.3308,3.853,9.563,0.4247,-2.17,10.07,0.2226,-3.382,9.098,0.382,2.698,12.04,0.3113,-3.365,10.2,0.2584,-3.806,9.597,0.2143,-4.227,9.099,-3.456,-5.815,4.23,-3.376,-5.676,3.985,-3.281,-5.628,3.603,-3.231,-5.686,3.373,-3.158,-5.772,3.038,-3.135,-5.976,2.924,-3.143,-6.261,2.895,-3.604,-6.397,4.675,-3.497,-6.304,4.263,-3.424,-6.386,3.928,-3.201,-6.804,3.968,-3.101,-6.606,3.621,-3.279,-6.58,3.077,-3.737,-6.279,5.272,-3.674,-6.374,4.974,-3.474,-7.032,5.024,-3.295,-7.093,3.758,-3.358,-6.799,3.479,-3.889,-6.726,5.746,-3.534,-7.295,5.179,-3.398,-7.611,4.5,-3.976,-7.205,5.933,-3.911,-7.284,5.623,-3.855,-7.749,5.233,-3.531,-8.08,4.885,-3.453,-8.015,4.582,-4.011,-7.654,5.917,-3.729,-8.288,4.919,-3.624,-8.325,4.464,-3.375,-8.173,4.198,-3.635,-8.279,3.765,-4.026,-8.192,5.784,-4.013,-8.413,5.651,-3.944,-8.516,5.326,-3.873,-8.644,4.984};
			return value;
		}
		private double[] gethead_COORD_15_111_point_4()
		{
			double[] value = {-3.759,-8.644,4.507,-3.636,-8.474,4.054,-3.628,-5.754,4.209,-3.552,-5.664,3.922,-3.456,-5.616,3.541,-3.333,-5.76,2.975,-3.311,-5.964,2.861,-3.319,-6.25,2.833,-3.78,-6.386,4.613,-3.672,-6.292,4.201,-3.599,-6.375,3.865,-3.912,-6.268,5.21,-3.955,-6.799,5.194,-4.065,-6.714,5.683,-4.086,-7.272,5.561,-4.151,-7.194,5.871,-4.031,-7.737,5.171,-3.707,-8.069,4.823,-4.186,-7.642,5.855,-4.074,-8.088,5.222,-3.905,-8.277,4.857,-3.799,-8.313,4.402,-3.582,-8.151,4.111,-4.201,-8.18,5.722,-4.189,-8.401,5.589,-4.12,-8.505,5.264,-4.049,-8.633,4.922,-3.935,-8.633,4.445,-3.811,-8.462,3.991,3.853,-4.762,-3.03,-3.973,-4.556,-2.108};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] gethead_FACE_14_117_coordIndex_1()
		{
			int[] value = {89,81,6,-1,90,86,41,-1,9,75,41,-1,7,82,30,-1,30,82,24,-1,9,10,29,-1,10,40,83,-1,8,23,3,-1,7,30,8,-1,30,24,23,-1,83,24,82,-1,31,25,24,-1,40,11,25,-1,11,4,25,-1,70,12,47,-1,71,63,13,-1,70,69,32,-1,53,46,73,-1,60,33,14,-1,64,52,66,-1,27,84,34,-1,7,8,79,-1,26,62,57,-1,33,87,14,-1,22,26,39,-1,52,67,51,-1,28,329,34,-1,3,28,74,-1,3,74,8,-1,96,98,15,-1,17,35,18,-1,17,96,35,-1,97,36,19,-1,18,35,36,-1,35,37,36,-1,96,37,35,-1,15,16,96,-1,19,25,4,-1,19,36,25,-1,36,24,25,-1,36,37,24,-1,37,23,24,-1,16,23,37,-1,3,23,16,-1,1,21,39,-1,39,21,85,-1,3,38,28,-1,3,16,38,-1,39,38,1,-1,26,27,39,-1,26,56,27,-1,62,26,22,-1,40,25,31,-1,10,83,29,-1,81,75,72,-1,77,42,88,-1,77,43,42,-1,46,43,77,-1,46,53,45,-1,46,44,43,-1,46,45,44,-1,54,69,45,-1,44,70,47,-1,12,32,48,-1,48,51,49,-1,55,94,68,-1,69,54,32,-1,48,32,51,-1,49,51,67,-1,54,45,53,-1,92,68,54,-1,94,52,54,-1,93,91,74,-1,66,65,58,-1,34,84,68,-1,55,33,63,-1,62,5,57,-1,87,57,14,-1,61,57,5,-1,64,66,58,-1,63,60,59,-1,63,33,60,-1,14,57,61,-1,57,87,26,-1,63,59,13,-1,55,56,33,-1,52,64,67,-1,55,63,66,-1,13,65,71,-1,52,55,66,-1,68,84,55,-1,49,67,50,-1,64,50,67,-1,92,54,53,-1,68,94,54,-1,69,70,45,-1,32,54,51,-1,70,44,45,-1,70,32,12,-1,63,71,66,-1,66,71,65,-1,75,82,7,-1,80,6,81,-1,73,46,77,-1,93,74,34,-1,7,79,72,-1,79,78,72,-1,29,75,9,-1,76,73,80,-1,53,76,92,-1,91,93,76,-1,73,77,88,-1,42,2,88,-1,80,73,6,-1,78,79,91,-1,8,74,79,-1,74,91,79,-1,91,76,78,-1,78,80,72,-1,72,80,81,-1,90,75,81,-1,75,7,72,-1,30,23,8,-1,29,83,82,-1,75,29,82,-1,83,31,24,-1,40,31,83,-1,84,56,55,-1,27,56,84,-1,39,27,38,-1,38,329,28,-1,85,22,39,-1,89,88,2,-1,56,26,87,-1,33,56,87,-1,73,88,6,-1,6,88,89,-1,81,89,90,-1,86,89,2,-1,89,86,90,-1,75,90,41,-1,78,76,80,-1,34,68,93,-1,68,92,93,-1,76,53,73,-1,93,92,76,-1,34,74,28,-1,52,51,54,-1,55,52,94,-1,1,38,15,-1,16,37,96,-1,96,17,95,-1,18,36,97,-1,99,98,96,-1,15,38,16,-1,98,20,21,-1,98,1,15,-1,21,1,98,-1,95,99,96,-1,114,20,98,-1,113,114,117,-1,112,113,117,-1,106,107,123,-1,108,109,119,-1,109,110,118,-1,112,117,122,-1,124,101,102,-1,121,104,120,-1,121,103,104,-1,110,111,116,-1,109,118,119,-1,116,104,115,-1,115,104,105,-1,124,102,103,-1,117,98,99,-1,126,99,100,-1,99,95,100,-1,125,100,101,-1,119,118,123,-1,123,118,115,-1,123,107,119,-1,107,108,119,-1,118,110,116,-1,116,111,120,-1,111,121,120,-1,112,121,111,-1,122,124,121,-1,112,122,121,-1,117,126,122,-1,117,114,98,-1,123,115,105,-1,105,106,123,-1,115,118,116,-1,116,120,104,-1,124,103,121,-1,125,101,124,-1,122,125,124,-1,126,100,125,-1,122,126,125,-1,117,99,126,-1,134,128,127,-1,128,134,135,-1,135,129,128,-1,129,135,136,-1,136,130,129,-1,130,136,137,-1,137,131,130,-1,131,137,138,-1,138,132,131,-1,132,138,139,-1,139,133,132,-1,127,140,141,-1,141,134,127,-1,134,141,142,-1,142,135,134,-1,142,136,135,-1,136,142,147,-1,147,137,136,-1,138,137,143,-1,147,143,137,-1,138,143,144,-1,144,139,138,-1,140,145,141,-1,142,141,146,-1,142,146,147,-1,148,143,147,-1,145,149,150,-1,150,141,145,-1,146,150,151,-1,150,146,141,-1,146,151,152,-1,146,152,153,-1,153,147,146,-1,147,153,157,-1,157,148,147,-1,149,154,150,-1,155,152,151,-1,152,155,156,-1,156,153,152,-1,153,156,157,-1,158,148,157,-1,159,150,154,-1,150,159,160,-1,160,151,150,-1,151,160,161,-1,161,155,151,-1,155,161,162,-1,162,156,155,-1,156,162,163,-1,163,157,156,-1};
			return value;
		}
		private int[] gethead_FACE_14_117_coordIndex_2()
		{
			int[] value = {157,163,164,-1,164,158,157,-1,165,166,171,-1,166,167,171,-1,171,170,165,-1,172,171,167,-1,172,168,139,-1,168,172,167,-1,168,169,139,-1,169,133,139,-1,170,173,165,-1,170,171,174,-1,174,171,175,-1,172,175,171,-1,175,172,139,-1,143,175,139,-1,144,143,139,-1,173,170,174,-1,174,176,173,-1,148,175,143,-1,176,174,178,-1,178,177,176,-1,178,175,179,-1,175,178,174,-1,180,179,175,-1,175,148,16,-1,16,180,175,-1,178,181,177,-1,178,179,182,-1,182,180,183,-1,180,182,179,-1,184,183,180,-1,184,16,158,-1,16,184,180,-1,16,148,158,-1,181,178,185,-1,178,182,186,-1,186,185,178,-1,187,183,188,-1,187,186,182,-1,183,184,189,-1,183,187,182,-1,184,158,190,-1,189,188,183,-1,190,189,184,-1,127,128,166,-1,166,165,127,-1,128,129,167,-1,167,166,128,-1,129,130,167,-1,130,131,168,-1,168,167,130,-1,131,132,169,-1,169,168,131,-1,133,169,132,-1,158,164,190,-1,164,163,189,-1,189,190,164,-1,163,162,188,-1,188,189,163,-1,162,161,187,-1,187,188,162,-1,161,160,186,-1,186,187,161,-1,160,159,185,-1,185,186,160,-1,159,154,185,-1,181,185,154,-1,154,149,177,-1,177,181,154,-1,149,145,176,-1,176,177,149,-1,145,140,173,-1,173,176,145,-1,140,127,165,-1,165,173,140,-1,245,192,239,-1,246,41,86,-1,9,41,233,-1,193,204,240,-1,204,198,240,-1,9,203,10,-1,10,241,40,-1,194,191,197,-1,193,194,204,-1,204,197,198,-1,241,240,198,-1,205,198,199,-1,40,199,11,-1,11,199,4,-1,228,47,12,-1,229,13,223,-1,228,206,227,-1,218,231,215,-1,60,14,207,-1,64,224,217,-1,201,208,242,-1,193,237,194,-1,200,222,62,-1,207,14,243,-1,22,213,200,-1,217,216,225,-1,330,208,201,-1,191,232,202,-1,191,194,232,-1,251,195,252,-1,17,18,209,-1,17,209,251,-1,97,19,210,-1,18,210,209,-1,209,210,211,-1,251,209,211,-1,195,251,196,-1,19,4,199,-1,19,199,210,-1,210,199,198,-1,210,198,211,-1,211,198,197,-1,196,211,197,-1,191,196,197,-1,0,213,21,-1,213,85,21,-1,191,202,212,-1,191,212,196,-1,213,0,212,-1,200,213,201,-1,200,201,221,-1,62,22,200,-1,40,205,199,-1,10,203,241,-1,239,230,233,-1,235,244,42,-1,235,42,43,-1,215,235,43,-1,215,214,218,-1,215,43,44,-1,215,44,214,-1,219,214,227,-1,44,47,228,-1,12,48,206,-1,48,49,216,-1,220,226,250,-1,227,206,219,-1,48,216,206,-1,49,225,216,-1,219,218,214,-1,248,219,226,-1,250,219,217,-1,249,232,247,-1,224,58,65,-1,208,226,242,-1,220,223,207,-1,62,222,5,-1,243,14,222,-1,61,5,222,-1,64,58,224,-1,223,59,60,-1,223,60,207,-1,14,61,222,-1,222,200,243,-1,223,13,59,-1,220,207,221,-1,217,225,64,-1,220,224,223,-1,13,229,65,-1,217,224,220,-1,226,220,242,-1,49,50,225,-1,64,225,50,-1,248,218,219,-1,226,219,250,-1,227,214,228,-1,206,216,219,-1,228,214,44,-1,228,12,206,-1,223,224,229,-1,224,65,229,-1,233,193,240,-1,238,239,192,-1,231,235,215,-1,249,208,232,-1,193,230,237,-1,237,230,236,-1,203,9,233,-1,234,238,231,-1,218,248,234,-1,247,234,249,-1,231,244,235,-1,42,244,2,-1,238,192,231,-1,236,247,237,-1,194,237,232,-1,232,237,247,-1,247,236,234,-1,236,230,238,-1,230,239,238,-1,246,239,233,-1,233,230,193,-1,204,194,197,-1,203,240,241,-1,233,240,203,-1,241,198,205,-1,40,241,205,-1,242,220,221,-1,201,242,221,-1,213,212,201,-1,212,330,201,-1,85,213,22,-1,245,2,244,-1,221,243,200,-1,207,243,221,-1,231,192,244,-1,192,245,244,-1,239,246,245,-1,86,2,245,-1,245,246,86,-1,233,41,246,-1,236,238,234,-1,208,249,226,-1,226,249,248,-1,234,231,218,-1,249,234,248,-1,208,202,232,-1,217,219,216,-1,220,250,217,-1,0,195,212,-1,196,251,211,-1,251,95,17,-1,18,97,210,-1,253,251,252,-1,195,196,212,-1,252,21,20,-1,252,195,0,-1,21,252,0,-1,95,251,253,-1,114,252,20,-1,113,256,114,-1,112,256,113,-1,258,107,106,-1,258,108,107,-1,109,258,257,-1,112,260,256,-1,262,102,101,-1,104,103,255,-1,103,259,255,-1,111,110,257,-1,257,258,261,-1,255,257,254,-1,259,103,262,-1,256,253,252,-1};
			return value;
		}
		private int[] gethead_FACE_14_117_coordIndex_3()
		{
			int[] value = {264,100,253,-1,253,100,95,-1,263,101,100,-1,261,254,257,-1,258,106,261,-1,258,109,108,-1,111,257,255,-1,255,259,111,-1,111,259,112,-1,260,259,262,-1,112,259,260,-1,256,260,264,-1,256,252,114,-1,105,254,261,-1,105,261,106,-1,254,105,104,-1,255,254,104,-1,262,103,102,-1,263,262,101,-1,260,262,263,-1,264,263,100,-1,260,263,264,-1,256,264,253,-1,272,265,266,-1,266,273,272,-1,273,266,267,-1,267,274,273,-1,274,267,268,-1,268,275,274,-1,275,268,269,-1,269,276,275,-1,276,269,270,-1,270,277,276,-1,277,270,271,-1,265,279,278,-1,279,265,272,-1,272,280,279,-1,280,272,273,-1,280,273,274,-1,274,285,280,-1,285,274,275,-1,276,281,275,-1,285,275,281,-1,276,282,281,-1,282,276,277,-1,278,279,283,-1,280,284,279,-1,280,285,284,-1,196,285,281,-1,283,287,286,-1,287,283,279,-1,284,288,287,-1,287,279,284,-1,284,289,288,-1,284,290,289,-1,290,284,285,-1,285,294,290,-1,294,285,196,-1,286,287,291,-1,292,288,289,-1,289,293,292,-1,293,289,290,-1,290,294,293,-1,295,294,196,-1,296,291,287,-1,287,297,296,-1,297,287,288,-1,288,298,297,-1,298,288,292,-1,292,299,298,-1,299,292,293,-1,293,300,299,-1,300,293,294,-1,294,301,300,-1,301,294,295,-1,302,309,303,-1,303,309,304,-1,309,302,308,-1,310,304,309,-1,310,277,305,-1,305,304,310,-1,305,277,306,-1,306,277,307,-1,308,302,311,-1,308,312,309,-1,310,309,312,-1,312,277,310,-1,281,277,312,-1,282,277,281,-1,311,312,308,-1,312,311,313,-1,196,281,312,-1,313,314,312,-1,314,313,315,-1,314,317,312,-1,317,314,316,-1,196,312,317,-1,314,315,318,-1,314,319,316,-1,319,320,317,-1,317,316,319,-1,321,317,320,-1,321,322,196,-1,196,317,321,-1,295,196,322,-1,318,323,314,-1,314,324,319,-1,324,314,323,-1,325,326,320,-1,325,319,324,-1,320,327,321,-1,320,319,325,-1,321,328,322,-1,327,320,326,-1,322,328,295,-1,328,321,327,-1,265,303,266,-1,303,265,302,-1,266,304,267,-1,304,266,303,-1,267,304,268,-1,268,305,269,-1,305,268,304,-1,269,306,270,-1,306,269,305,-1,270,307,271,-1,307,270,306,-1,277,271,307,-1,295,328,301,-1,301,327,300,-1,327,301,328,-1,300,326,299,-1,326,300,327,-1,299,325,298,-1,325,299,326,-1,298,324,297,-1,324,298,325,-1,297,323,296,-1,323,297,324,-1,296,323,291,-1,318,291,323,-1,291,315,286,-1,315,291,318,-1,286,313,283,-1,313,286,315,-1,283,311,278,-1,311,283,313,-1,278,302,265,-1,302,278,311,-1,110,109,257,-1,329,27,34,-1,38,27,329,-1,202,208,330,-1,212,202,330,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] gethead_FACE_14_117_texCoordIndex_1()
		{
			int[] value = {417,409,333,-1,418,414,369,-1,662,403,369,-1,334,673,668,-1,357,410,351,-1,336,337,356,-1,337,368,411,-1,335,665,330,-1,334,668,335,-1,357,351,350,-1,411,351,410,-1,358,352,351,-1,368,338,352,-1,338,331,352,-1,398,339,375,-1,399,391,340,-1,398,397,359,-1,381,374,401,-1,388,360,341,-1,392,380,394,-1,354,412,361,-1,334,335,407,-1,353,390,385,-1,360,415,341,-1,349,353,367,-1,380,395,379,-1,355,658,361,-1,330,355,402,-1,330,402,335,-1,424,426,342,-1,344,362,345,-1,344,424,362,-1,425,363,346,-1,345,362,363,-1,362,364,363,-1,424,364,362,-1,342,343,424,-1,346,352,331,-1,346,363,352,-1,363,351,352,-1,363,364,351,-1,364,350,351,-1,343,350,364,-1,330,665,664,-1,685,684,367,-1,367,684,413,-1,330,366,355,-1,330,664,366,-1,670,366,669,-1,666,354,670,-1,666,384,354,-1,390,353,349,-1,368,352,358,-1,337,411,356,-1,409,403,400,-1,405,370,416,-1,405,371,370,-1,374,371,405,-1,374,381,373,-1,374,372,371,-1,374,373,372,-1,382,397,373,-1,372,398,375,-1,339,359,376,-1,376,379,377,-1,383,422,396,-1,397,382,359,-1,376,359,379,-1,377,379,395,-1,382,373,381,-1,420,396,382,-1,422,380,382,-1,421,419,402,-1,394,393,386,-1,361,412,396,-1,383,360,391,-1,390,332,385,-1,415,671,341,-1,389,385,332,-1,392,394,386,-1,391,388,387,-1,391,360,388,-1,341,671,672,-1,671,415,666,-1,391,387,340,-1,383,384,360,-1,380,392,395,-1,383,391,394,-1,340,393,399,-1,380,383,394,-1,396,412,383,-1,377,395,378,-1,392,378,395,-1,420,382,381,-1,396,422,382,-1,397,398,373,-1,359,382,379,-1,398,372,373,-1,398,359,339,-1,391,399,394,-1,394,399,393,-1,403,673,334,-1,408,333,409,-1,401,374,405,-1,421,402,361,-1,334,407,400,-1,407,406,400,-1,667,403,662,-1,404,401,408,-1,381,404,420,-1,419,421,404,-1,401,405,416,-1,370,329,416,-1,408,401,333,-1,406,407,419,-1,335,402,407,-1,402,419,407,-1,419,404,406,-1,406,408,400,-1,400,408,409,-1,418,403,409,-1,403,334,400,-1,668,665,335,-1,356,411,410,-1,403,667,673,-1,411,358,351,-1,368,358,411,-1,412,384,383,-1,354,384,412,-1,670,354,366,-1,366,658,355,-1,413,349,367,-1,417,416,329,-1,384,666,415,-1,360,384,415,-1,401,416,333,-1,333,416,417,-1,409,417,418,-1,414,417,329,-1,417,414,418,-1,403,418,369,-1,406,404,408,-1,361,396,421,-1,396,420,421,-1,404,381,401,-1,421,420,404,-1,361,402,355,-1,380,379,382,-1,383,380,422,-1,669,366,663,-1,343,364,424,-1,424,344,423,-1,345,363,425,-1,427,426,424,-1,663,366,664,-1,426,347,348,-1,426,365,342,-1,348,365,426,-1,423,427,424,-1,442,347,426,-1,441,442,445,-1,440,441,445,-1,434,435,451,-1,436,437,447,-1,437,438,446,-1,440,445,450,-1,452,429,430,-1,449,432,448,-1,449,431,432,-1,438,439,444,-1,437,446,447,-1,444,432,443,-1,443,432,433,-1,452,430,431,-1,445,426,427,-1,454,427,428,-1,427,423,428,-1,453,428,429,-1,447,446,451,-1,451,446,443,-1,451,435,447,-1,435,436,447,-1,446,438,444,-1,444,439,448,-1,439,449,448,-1,440,449,439,-1,450,452,449,-1,440,450,449,-1,445,454,450,-1,445,442,426,-1,451,443,433,-1,433,434,451,-1,443,446,444,-1,444,448,432,-1,452,431,449,-1,453,429,452,-1,450,453,452,-1,454,428,453,-1,450,454,453,-1,445,427,454,-1,462,456,455,-1,456,462,463,-1,463,457,456,-1,457,463,464,-1,464,458,457,-1,458,464,465,-1,465,459,458,-1,459,465,466,-1,466,460,459,-1,460,466,467,-1,467,461,460,-1,455,468,469,-1,469,462,455,-1,462,469,470,-1,470,463,462,-1,470,464,463,-1,464,470,475,-1,475,465,464,-1,466,465,471,-1,475,471,465,-1,466,471,472,-1,472,467,466,-1,468,473,469,-1,470,469,474,-1,470,474,475,-1,476,471,475,-1,473,477,478,-1,478,469,473,-1,474,478,479,-1,478,474,469,-1,474,479,480,-1,474,480,481,-1,481,475,474,-1,475,481,485,-1,485,476,475,-1,477,482,478,-1,483,480,479,-1,480,483,484,-1,484,481,480,-1,481,484,485,-1,486,476,485,-1,487,478,482,-1,478,487,488,-1,488,479,478,-1,479,488,489,-1,489,483,479,-1,483,489,490,-1,490,484,483,-1,484,490,491,-1,491,485,484,-1};
			return value;
		}
		private int[] gethead_FACE_14_117_texCoordIndex_2()
		{
			int[] value = {485,491,492,-1,492,486,485,-1,493,494,499,-1,494,495,499,-1,499,498,493,-1,500,499,495,-1,500,496,467,-1,496,500,495,-1,496,497,467,-1,497,461,467,-1,498,501,493,-1,498,499,502,-1,502,499,503,-1,500,503,499,-1,503,500,467,-1,471,503,467,-1,472,471,467,-1,501,498,502,-1,502,504,501,-1,476,503,471,-1,504,502,506,-1,506,505,504,-1,506,503,507,-1,503,506,502,-1,508,507,503,-1,503,476,660,-1,660,508,503,-1,506,509,505,-1,506,507,510,-1,510,508,511,-1,508,510,507,-1,512,511,508,-1,512,660,486,-1,660,512,508,-1,660,476,486,-1,509,506,513,-1,506,510,514,-1,514,513,506,-1,515,511,516,-1,515,514,510,-1,511,512,517,-1,511,515,510,-1,512,486,518,-1,517,516,511,-1,518,517,512,-1,455,456,494,-1,494,493,455,-1,456,457,495,-1,495,494,456,-1,457,458,495,-1,458,459,496,-1,496,495,458,-1,459,460,497,-1,497,496,459,-1,461,497,460,-1,486,492,518,-1,492,491,517,-1,517,518,492,-1,491,490,516,-1,516,517,491,-1,490,489,515,-1,515,516,490,-1,489,488,514,-1,514,515,489,-1,488,487,513,-1,513,514,488,-1,487,482,513,-1,509,513,482,-1,482,477,505,-1,505,509,482,-1,477,473,504,-1,504,505,477,-1,473,468,501,-1,501,504,473,-1,468,455,493,-1,493,501,468,-1,574,520,568,-1,575,369,414,-1,662,369,562,-1,521,679,683,-1,532,526,569,-1,336,531,337,-1,337,570,368,-1,522,519,676,-1,521,522,679,-1,532,525,526,-1,570,569,526,-1,533,526,527,-1,368,527,338,-1,338,527,331,-1,557,375,339,-1,558,340,552,-1,557,534,556,-1,547,560,544,-1,388,341,535,-1,392,553,546,-1,529,536,571,-1,521,566,522,-1,528,551,390,-1,535,341,572,-1,349,542,528,-1,546,545,554,-1,659,536,529,-1,519,561,530,-1,519,522,561,-1,580,523,581,-1,344,345,537,-1,344,537,580,-1,425,346,538,-1,345,538,537,-1,537,538,539,-1,580,537,539,-1,523,580,524,-1,346,331,527,-1,346,527,538,-1,538,527,526,-1,538,526,539,-1,539,526,525,-1,524,539,525,-1,519,675,676,-1,686,542,684,-1,542,413,684,-1,519,530,541,-1,519,541,675,-1,681,680,541,-1,677,681,529,-1,677,529,550,-1,390,349,528,-1,368,533,527,-1,337,531,570,-1,568,559,562,-1,564,573,370,-1,564,370,371,-1,544,564,371,-1,544,543,547,-1,544,371,372,-1,544,372,543,-1,548,543,556,-1,372,375,557,-1,339,376,534,-1,376,377,545,-1,549,555,579,-1,556,534,548,-1,376,545,534,-1,377,554,545,-1,548,547,543,-1,577,548,555,-1,579,548,546,-1,578,561,576,-1,553,386,393,-1,536,555,571,-1,549,552,535,-1,390,551,332,-1,572,341,682,-1,389,332,551,-1,392,386,553,-1,552,387,388,-1,552,388,535,-1,341,672,682,-1,682,677,572,-1,552,340,387,-1,549,535,550,-1,546,554,392,-1,549,553,552,-1,340,558,393,-1,546,553,549,-1,555,549,571,-1,377,378,554,-1,392,554,378,-1,577,547,548,-1,555,548,579,-1,556,543,557,-1,534,545,548,-1,557,543,372,-1,557,339,534,-1,552,553,558,-1,553,393,558,-1,562,521,683,-1,567,568,520,-1,560,564,544,-1,578,536,561,-1,521,559,566,-1,566,559,565,-1,678,662,562,-1,563,567,560,-1,547,577,563,-1,576,563,578,-1,560,573,564,-1,370,573,329,-1,567,520,560,-1,565,576,566,-1,522,566,561,-1,561,566,576,-1,576,565,563,-1,565,559,567,-1,559,568,567,-1,575,568,562,-1,562,559,521,-1,679,522,676,-1,531,569,570,-1,562,683,678,-1,570,526,533,-1,368,570,533,-1,571,549,550,-1,529,571,550,-1,681,541,529,-1,541,659,529,-1,413,542,349,-1,574,329,573,-1,550,572,677,-1,535,572,550,-1,560,520,573,-1,520,574,573,-1,568,575,574,-1,414,329,574,-1,574,575,414,-1,562,369,575,-1,565,567,563,-1,536,578,555,-1,555,578,577,-1,563,560,547,-1,578,563,577,-1,536,530,561,-1,546,548,545,-1,549,579,546,-1,680,674,541,-1,524,580,539,-1,580,423,344,-1,345,425,538,-1,582,580,581,-1,674,675,541,-1,581,348,347,-1,581,523,540,-1,348,581,540,-1,423,580,582,-1,442,581,347,-1,441,585,442,-1,440,585,441,-1,587,435,434,-1,587,436,435,-1,437,587,586,-1,440,589,585,-1,591,430,429,-1,432,431,584,-1,431,588,584,-1,439,438,586,-1,586,587,590,-1,584,586,583,-1,588,431,591,-1,585,582,581,-1};
			return value;
		}
		private int[] gethead_FACE_14_117_texCoordIndex_3()
		{
			int[] value = {593,428,582,-1,582,428,423,-1,592,429,428,-1,590,583,586,-1,587,434,590,-1,587,437,436,-1,439,586,584,-1,584,588,439,-1,439,588,440,-1,589,588,591,-1,440,588,589,-1,585,589,593,-1,585,581,442,-1,433,583,590,-1,433,590,434,-1,583,433,432,-1,584,583,432,-1,591,431,430,-1,592,591,429,-1,589,591,592,-1,593,592,428,-1,589,592,593,-1,585,593,582,-1,601,594,595,-1,595,602,601,-1,602,595,596,-1,596,603,602,-1,603,596,597,-1,597,604,603,-1,604,597,598,-1,598,605,604,-1,605,598,599,-1,599,606,605,-1,606,599,600,-1,594,608,607,-1,608,594,601,-1,601,609,608,-1,609,601,602,-1,609,602,603,-1,603,614,609,-1,614,603,604,-1,605,610,604,-1,614,604,610,-1,605,611,610,-1,611,605,606,-1,607,608,612,-1,609,613,608,-1,609,614,613,-1,661,614,610,-1,612,616,615,-1,616,612,608,-1,613,617,616,-1,616,608,613,-1,613,618,617,-1,613,619,618,-1,619,613,614,-1,614,623,619,-1,623,614,661,-1,615,616,620,-1,621,617,618,-1,618,622,621,-1,622,618,619,-1,619,623,622,-1,624,623,661,-1,625,620,616,-1,616,626,625,-1,626,616,617,-1,617,627,626,-1,627,617,621,-1,621,628,627,-1,628,621,622,-1,622,629,628,-1,629,622,623,-1,623,630,629,-1,630,623,624,-1,631,638,632,-1,632,638,633,-1,638,631,637,-1,639,633,638,-1,639,606,634,-1,634,633,639,-1,634,606,635,-1,635,606,636,-1,637,631,640,-1,637,641,638,-1,639,638,641,-1,641,606,639,-1,610,606,641,-1,611,606,610,-1,640,641,637,-1,641,640,642,-1,661,610,641,-1,642,643,641,-1,643,642,644,-1,643,646,641,-1,646,643,645,-1,661,641,646,-1,643,644,647,-1,643,648,645,-1,648,649,646,-1,646,645,648,-1,650,646,649,-1,650,651,661,-1,661,646,650,-1,624,661,651,-1,647,652,643,-1,643,653,648,-1,653,643,652,-1,654,655,649,-1,654,648,653,-1,649,656,650,-1,649,648,654,-1,650,657,651,-1,656,649,655,-1,651,657,624,-1,657,650,656,-1,594,632,595,-1,632,594,631,-1,595,633,596,-1,633,595,632,-1,596,633,597,-1,597,634,598,-1,634,597,633,-1,598,635,599,-1,635,598,634,-1,599,636,600,-1,636,599,635,-1,606,600,636,-1,624,657,630,-1,630,656,629,-1,656,630,657,-1,629,655,628,-1,655,629,656,-1,628,654,627,-1,654,628,655,-1,627,653,626,-1,653,627,654,-1,626,652,625,-1,652,626,653,-1,625,652,620,-1,647,620,652,-1,620,644,615,-1,644,620,647,-1,615,642,612,-1,642,615,644,-1,612,640,607,-1,640,612,642,-1,607,631,594,-1,631,607,640,-1,438,437,586,-1,658,354,361,-1,366,354,658,-1,530,536,659,-1,541,530,659,-1};
			return value;
		}






		/** Define subarrays using type int[] */
		private int[] getl_hand_FACES_17_134_coordIndex_1()
		{
			int[] value = {5,6,7,-1,8,1,9,-1,2,0,10,-1,0,7,10,-1,7,0,5,-1,1,8,0,-1,11,12,13,-1,14,15,11,-1,16,15,17,-1,18,15,16,-1,18,12,11,-1,15,18,11,-1,17,15,14,-1,12,7,6,-1,12,6,13,-1,19,20,16,-1,21,22,20,-1,21,20,23,-1,20,22,16,-1,19,23,20,-1,24,25,21,-1,26,27,25,-1,26,25,28,-1,29,30,26,-1,25,27,21,-1,31,30,29,-1,30,27,26,-1,24,28,25,-1,32,31,29,-1,33,34,32,-1,35,36,34,-1,35,34,37,-1,38,31,35,-1,10,7,31,-1,36,31,32,-1,34,36,32,-1,31,36,35,-1,10,31,38,-1,37,34,33,-1,8,5,0,-1,39,9,4,-1,9,1,4,-1,40,4,41,-1,39,4,40,-1,10,42,3,-1,41,3,42,-1,41,4,3,-1,39,40,13,-1,10,3,2,-1,13,6,39,-1,43,44,11,-1,13,45,46,-1,11,44,14,-1,16,17,44,-1,43,46,16,-1,16,46,47,-1,14,44,17,-1,47,46,45,-1,11,46,43,-1,45,13,40,-1,47,48,49,-1,50,51,16,-1,16,51,19,-1,23,51,21,-1,21,49,52,-1,21,50,49,-1,51,23,19,-1,52,49,48,-1,16,49,50,-1,52,53,54,-1,21,55,24,-1,52,54,21,-1,28,55,26,-1,26,56,54,-1,55,28,24,-1,21,56,55,-1,26,55,56,-1,57,58,32,-1,32,58,33,-1,37,58,35,-1,35,59,38,-1,35,57,59,-1,38,60,10,-1,10,60,42,-1,58,37,33,-1,32,29,57,-1,29,60,59,-1,29,54,53,-1,29,26,54,-1,21,54,56,-1,47,49,16,-1,51,50,21,-1,13,46,11,-1,44,43,16,-1,38,59,60,-1,29,59,57,-1,58,57,35,-1,61,62,63,-1,64,62,61,-1,5,64,61,-1,62,64,65,-1,66,64,67,-1,64,8,67,-1,8,64,5,-1,61,6,5,-1,63,62,65,-1,65,64,66,-1,67,8,9,-1,61,68,6,-1,39,6,68,-1,63,69,61,-1,63,70,69,-1,61,69,68,-1,66,70,65,-1,66,68,69,-1,67,39,66,-1,9,39,67,-1,39,68,66,-1,63,65,70,-1,70,66,69,-1,12,30,7,-1,30,31,7,-1,47,45,48,-1,48,53,52,-1,53,60,29,-1,53,42,60,-1,53,41,42,-1,53,48,41,-1,41,48,45,-1,45,40,41,-1,22,30,12,-1,12,18,22,-1,16,22,18,-1,21,27,22,-1,22,27,30,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getl_hand_FACES_17_134_texCoordIndex_1()
		{
			int[] value = {66,68,67,-1,69,71,70,-1,72,74,73,-1,74,67,73,-1,67,74,66,-1,71,69,74,-1,75,77,76,-1,78,79,75,-1,80,79,81,-1,82,79,80,-1,82,77,75,-1,79,82,75,-1,81,79,78,-1,77,67,68,-1,77,68,76,-1,83,84,80,-1,85,86,84,-1,85,84,87,-1,84,86,80,-1,83,87,84,-1,88,89,85,-1,90,91,89,-1,90,89,92,-1,93,94,90,-1,89,91,85,-1,95,94,93,-1,94,91,90,-1,88,92,89,-1,96,95,93,-1,97,98,96,-1,99,100,98,-1,99,98,101,-1,102,95,99,-1,73,67,95,-1,100,95,96,-1,98,100,96,-1,95,100,99,-1,73,95,102,-1,101,98,97,-1,69,66,74,-1,103,70,104,-1,70,71,104,-1,105,104,106,-1,103,104,105,-1,73,108,107,-1,106,107,108,-1,106,104,107,-1,103,105,76,-1,73,107,72,-1,76,68,103,-1,109,110,75,-1,76,112,111,-1,75,110,78,-1,80,81,110,-1,109,111,80,-1,80,111,113,-1,78,110,81,-1,113,111,112,-1,75,111,109,-1,112,76,105,-1,113,115,114,-1,116,117,80,-1,80,117,83,-1,87,117,85,-1,85,114,118,-1,85,116,114,-1,117,87,83,-1,118,114,115,-1,80,114,116,-1,118,120,119,-1,85,121,88,-1,118,119,85,-1,92,121,90,-1,90,122,119,-1,121,92,88,-1,85,122,121,-1,90,121,122,-1,123,124,96,-1,96,124,97,-1,101,124,99,-1,99,125,102,-1,99,123,125,-1,102,126,73,-1,73,126,108,-1,124,101,97,-1,96,93,123,-1,93,126,125,-1,93,119,120,-1,93,90,119,-1,85,119,122,-1,113,114,80,-1,117,116,85,-1,76,111,75,-1,110,109,80,-1,102,125,126,-1,93,125,123,-1,124,123,99,-1,127,129,128,-1,130,129,127,-1,66,130,127,-1,129,130,131,-1,132,130,133,-1,130,69,133,-1,69,130,66,-1,127,68,66,-1,128,129,131,-1,131,130,132,-1,133,69,70,-1,127,134,68,-1,103,68,134,-1,128,135,127,-1,128,136,135,-1,127,135,134,-1,132,136,131,-1,132,134,135,-1,133,103,132,-1,70,103,133,-1,103,134,132,-1,128,131,136,-1,136,132,135,-1,77,94,67,-1,94,95,67,-1,113,112,115,-1,115,120,118,-1,120,126,93,-1,120,108,126,-1,120,106,108,-1,120,115,106,-1,106,115,112,-1,112,105,106,-1,86,94,77,-1,77,82,86,-1,80,86,82,-1,85,91,86,-1,86,91,94,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getl_hand_TEXCOORD_18_134_point_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.4316,0.2796,0.4516,0.2642,0.4269,0.2746,0.4344,0.2955,0.4297,0.2979,0.4434,0.3162,0.4711,0.3068,0.4727,0.266,0.4573,0.3127,0.4241,0.2321,0.4256,0.2498,0.4306,0.2511,0.4234,0.2217,0.4289,0.2248,0.432,0.2269,0.4292,0.2191,0.4283,0.2337,0.4319,0.2128,0.4378,0.2182,0.4426,0.2251,0.439,0.2288,0.4394,0.213,0.4422,0.2172,0.4476,0.2222,0.4519,0.226,0.4489,0.2303,0.4487,0.2172,0.456,0.245,0.4525,0.2478,0.4632,0.2489,0.4557,0.2373,0.4544,0.2291,0.4589,0.2312,0.4629,0.2365};
			return value;
		}
		private double[] getl_hand_TEXCOORD_18_134_point_2()
		{
			double[] value = {0.4611,0.2393,0.4595,0.2288,0.4673,0.2512,0.4271,0.2805,0.4498,0.3153,0.4307,0.2686,0.4445,0.2685,0.4626,0.3106,0.4623,0.267,0.4267,0.2318,0.4259,0.2252,0.4275,0.2412,0.4291,0.2506,0.4348,0.2452,0.4383,0.2364,0.4399,0.2448,0.4368,0.2263,0.4356,0.2208,0.4458,0.244,0.4492,0.2389,0.4505,0.2462,0.4466,0.2233,0.447,0.2286,0.4593,0.2374,0.4582,0.2331,0.461,0.2452,0.4627,0.2528,0.4165,0.2663,0.4089,0.263,0.4071,0.2662,0.4183,0.277,0.4042,0.269,0.4119,0.2763,0.42,0.2841,0.4136,0.2705,0.4103,0.2672,0.4049,0.2655};
			return value;
		}







		/** Define subarrays using type int[] */
		private int[] getr_hand_FACES_17_206_coordIndex_1()
		{
			int[] value = {5,7,6,-1,8,9,1,-1,2,10,0,-1,0,10,7,-1,7,5,0,-1,1,0,8,-1,11,13,12,-1,14,11,15,-1,16,17,15,-1,18,16,15,-1,18,11,12,-1,15,11,18,-1,17,14,15,-1,12,6,7,-1,12,13,6,-1,19,16,20,-1,21,20,22,-1,21,23,20,-1,20,16,22,-1,19,20,23,-1,24,21,25,-1,26,25,27,-1,26,28,25,-1,29,26,30,-1,25,21,27,-1,31,29,30,-1,30,26,27,-1,24,25,28,-1,32,29,31,-1,33,32,34,-1,35,34,36,-1,35,37,34,-1,38,35,31,-1,10,31,7,-1,36,32,31,-1,34,32,36,-1,31,35,36,-1,10,38,31,-1,37,33,34,-1,8,0,5,-1,39,4,9,-1,9,4,1,-1,40,41,4,-1,39,40,4,-1,10,3,42,-1,41,42,3,-1,41,3,4,-1,39,13,40,-1,10,2,3,-1,13,39,6,-1,43,11,44,-1,13,46,45,-1,11,14,44,-1,16,44,17,-1,43,16,46,-1,16,47,46,-1,14,17,44,-1,47,45,46,-1,11,43,46,-1,45,40,13,-1,47,49,48,-1,50,16,51,-1,16,19,51,-1,23,21,51,-1,21,52,49,-1,21,49,50,-1,51,19,23,-1,52,48,49,-1,16,50,49,-1,52,54,53,-1,21,24,55,-1,52,21,54,-1,28,26,55,-1,26,54,56,-1,55,24,28,-1,21,55,56,-1,26,56,55,-1,57,32,58,-1,32,33,58,-1,37,35,58,-1,35,38,59,-1,35,59,57,-1,38,10,60,-1,10,42,60,-1,58,33,37,-1,32,57,29,-1,29,59,60,-1,29,53,54,-1,29,54,26,-1,21,56,54,-1,47,16,49,-1,51,21,50,-1,13,11,46,-1,44,16,43,-1,38,60,59,-1,29,57,59,-1,58,35,57,-1,61,63,62,-1,64,61,62,-1,5,61,64,-1,62,65,64,-1,66,67,64,-1,64,67,8,-1,8,5,64,-1,61,5,6,-1,63,65,62,-1,65,66,64,-1,67,9,8,-1,61,6,68,-1,39,68,6,-1,63,61,69,-1,63,69,70,-1,61,68,69,-1,66,65,70,-1,66,69,68,-1,67,66,39,-1,9,67,39,-1,39,66,68,-1,63,70,65,-1,70,69,66,-1,12,7,30,-1,30,7,31,-1,47,48,45,-1,48,52,53,-1,53,29,60,-1,53,60,42,-1,53,42,41,-1,53,41,48,-1,41,45,48,-1,45,41,40,-1,22,12,30,-1,12,22,18,-1,16,18,22,-1,21,22,27,-1,22,30,27,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getr_hand_FACES_17_206_texCoordIndex_1()
		{
			int[] value = {66,67,68,-1,69,70,71,-1,72,73,74,-1,74,73,67,-1,67,66,74,-1,71,74,69,-1,75,76,77,-1,78,75,79,-1,80,81,79,-1,82,80,79,-1,82,75,77,-1,79,75,82,-1,81,78,79,-1,77,68,67,-1,77,76,68,-1,83,80,84,-1,85,84,86,-1,85,87,84,-1,84,80,86,-1,83,84,87,-1,88,85,89,-1,90,89,91,-1,90,92,89,-1,93,90,94,-1,89,85,91,-1,95,93,94,-1,94,90,91,-1,88,89,92,-1,96,93,95,-1,97,96,98,-1,99,98,100,-1,99,101,98,-1,102,99,95,-1,73,95,67,-1,100,96,95,-1,98,96,100,-1,95,99,100,-1,73,102,95,-1,101,97,98,-1,69,74,66,-1,103,104,70,-1,70,104,71,-1,105,106,104,-1,103,105,104,-1,73,107,108,-1,106,108,107,-1,106,107,104,-1,103,76,105,-1,73,72,107,-1,76,103,68,-1,109,75,110,-1,76,111,112,-1,75,78,110,-1,80,110,81,-1,109,80,111,-1,80,113,111,-1,78,81,110,-1,113,112,111,-1,75,109,111,-1,112,105,76,-1,113,114,115,-1,116,80,117,-1,80,83,117,-1,87,85,117,-1,85,118,114,-1,85,114,116,-1,117,83,87,-1,118,115,114,-1,80,116,114,-1,118,119,120,-1,85,88,121,-1,118,85,119,-1,92,90,121,-1,90,119,122,-1,121,88,92,-1,85,121,122,-1,90,122,121,-1,123,96,124,-1,96,97,124,-1,101,99,124,-1,99,102,125,-1,99,125,123,-1,102,73,126,-1,73,108,126,-1,124,97,101,-1,96,123,93,-1,93,125,126,-1,93,120,119,-1,93,119,90,-1,85,122,119,-1,113,80,114,-1,117,85,116,-1,76,75,111,-1,110,80,109,-1,102,126,125,-1,93,123,125,-1,124,99,123,-1,127,128,129,-1,130,127,129,-1,66,127,130,-1,129,131,130,-1,132,133,130,-1,130,133,69,-1,69,66,130,-1,127,66,68,-1,128,131,129,-1,131,132,130,-1,133,70,69,-1,127,68,134,-1,103,134,68,-1,128,127,135,-1,128,135,136,-1,127,134,135,-1,132,131,136,-1,132,135,134,-1,133,132,103,-1,70,133,103,-1,103,132,134,-1,128,136,131,-1,136,135,132,-1,77,67,94,-1,94,67,95,-1,113,115,112,-1,115,118,120,-1,120,93,126,-1,120,126,108,-1,120,108,106,-1,120,106,115,-1,106,112,115,-1,112,106,105,-1,86,77,94,-1,77,86,82,-1,80,82,86,-1,85,86,91,-1,86,94,91,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getr_hand_TEXCOORD_18_206_point_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.4316,0.2796,0.4516,0.2642,0.4269,0.2746,0.4344,0.2955,0.4297,0.2979,0.4434,0.3162,0.4711,0.3068,0.4727,0.266,0.4573,0.3127,0.4241,0.2321,0.4256,0.2498,0.4306,0.2511,0.4234,0.2217,0.4289,0.2248,0.432,0.2269,0.4292,0.2191,0.4283,0.2337,0.4319,0.2128,0.4378,0.2182,0.4426,0.2251,0.439,0.2288,0.4394,0.213,0.4422,0.2172,0.4476,0.2222,0.4519,0.226,0.4489,0.2303,0.4487,0.2172,0.456,0.245,0.4525,0.2478,0.4632,0.2489,0.4557,0.2373,0.4544,0.2291,0.4589,0.2312,0.4629,0.2365};
			return value;
		}
		private double[] getr_hand_TEXCOORD_18_206_point_2()
		{
			double[] value = {0.4611,0.2393,0.4595,0.2288,0.4673,0.2512,0.4271,0.2805,0.4498,0.3153,0.4307,0.2686,0.4445,0.2685,0.4626,0.3106,0.4623,0.267,0.4267,0.2318,0.4259,0.2252,0.4275,0.2412,0.4291,0.2506,0.4348,0.2452,0.4383,0.2364,0.4399,0.2448,0.4368,0.2263,0.4356,0.2208,0.4458,0.244,0.4492,0.2389,0.4505,0.2462,0.4466,0.2233,0.447,0.2286,0.4593,0.2374,0.4582,0.2331,0.461,0.2452,0.4627,0.2528,0.4165,0.2663,0.4089,0.263,0.4071,0.2662,0.4183,0.277,0.4042,0.269,0.4119,0.2763,0.42,0.2841,0.4136,0.2705,0.4103,0.2672,0.4049,0.2655};
			return value;
		}







		/** Define subarrays using type int[] */
		private int[] getspine_FACES_9_401_coordIndex_1()
		{
			int[] value = {5,7,6,-1,7,9,6,-1,2,10,1,-1,10,2,8,-1,9,10,8,-1,8,6,9,-1,7,5,11,-1,0,3,4,-1,11,4,3,-1,5,4,11,-1,14,15,16,-1,16,15,17,-1,2,1,18,-1,18,12,2,-1,17,12,18,-1,12,17,15,-1,16,19,14,-1,0,13,3,-1,19,3,13,-1,14,19,13,-1,23,22,20,-1,23,20,21,-1,23,22,20,-1,23,20,21,-1,30,31,32,-1,29,31,30,-1,30,28,27,-1,30,32,28,-1,32,31,20,-1,31,60,20,-1,31,61,60,-1,31,29,61,-1,29,70,61,-1,61,33,59,-1,12,59,2,-1,34,35,26,-1,4,5,36,-1,36,34,4,-1,37,36,38,-1,36,5,38,-1,6,38,5,-1,0,34,25,-1,34,0,4,-1,38,6,8,-1,39,42,40,-1,40,42,41,-1,42,27,43,-1,42,43,41,-1,41,44,40,-1,40,44,45,-1,40,45,46,-1,40,46,39,-1,71,46,47,-1,45,37,48,-1,45,48,46,-1,46,48,49,-1,46,50,47,-1,46,49,50,-1,8,50,49,-1,38,49,48,-1,38,48,37,-1,38,8,49,-1,8,2,50,-1,25,34,26,-1,37,51,36,-1,52,36,51,-1,26,35,24,-1,34,36,53,-1,53,35,34,-1,51,37,44,-1,45,44,37,-1,53,36,52,-1,54,41,55,-1,43,56,55,-1,55,41,43,-1,72,39,29,-1,47,50,59,-1,33,47,59,-1,71,47,33,-1,57,56,28,-1,32,57,28,-1,29,30,72,-1,30,27,72,-1,70,29,39,-1,27,28,43,-1,43,28,56,-1,57,32,58,-1,2,59,50,-1,62,26,63,-1,13,64,14,-1,64,13,62,-1,65,66,64,-1,64,66,14,-1,15,14,66,-1,0,25,62,-1,62,13,0,-1,66,12,15,-1,60,67,65,-1,60,61,67,-1,61,68,67,-1,61,59,68,-1,12,68,59,-1,66,67,68,-1,66,65,67,-1,66,68,12,-1,25,26,62,-1,65,64,22,-1,69,22,64,-1,26,24,63,-1,62,21,64,-1,21,62,63,-1,22,20,65,-1,60,65,20,-1,21,69,64,-1,71,70,39,-1,70,33,61,-1,70,71,33,-1,39,46,71,-1,72,27,42,-1,42,39,72,-1,73,44,51,-1,23,22,20,-1,23,20,21,-1};
			return value;
		}


		/** Define subarrays using type int[] */
		private int[] getspine_FACES_9_401_texCoordIndex_1()
		{
			int[] value = {57,58,59,-1,58,60,59,-1,61,62,63,-1,62,61,64,-1,60,62,64,-1,64,59,60,-1,65,66,67,-1,68,69,70,-1,67,70,69,-1,66,70,67,-1,71,72,73,-1,73,72,74,-1,61,63,75,-1,75,76,61,-1,74,76,75,-1,76,74,72,-1,77,78,79,-1,68,80,69,-1,78,69,80,-1,79,78,80,-1,81,82,83,-1,81,83,84,-1,81,82,83,-1,81,83,84,-1,85,86,87,-1,88,86,85,-1,85,89,90,-1,85,87,89,-1,87,86,83,-1,86,91,83,-1,86,92,91,-1,86,88,92,-1,88,93,92,-1,92,94,95,-1,76,95,61,-1,96,97,98,-1,70,66,99,-1,99,96,70,-1,100,101,102,-1,101,57,102,-1,59,102,57,-1,68,96,103,-1,96,68,70,-1,102,59,64,-1,104,105,106,-1,106,105,107,-1,105,90,108,-1,105,108,107,-1,107,109,106,-1,106,109,110,-1,106,110,111,-1,106,111,104,-1,112,111,113,-1,110,100,114,-1,110,114,111,-1,111,114,115,-1,111,116,113,-1,111,115,116,-1,64,116,115,-1,102,115,114,-1,102,114,100,-1,102,64,115,-1,64,61,116,-1,103,96,98,-1,100,117,101,-1,118,101,117,-1,98,97,119,-1,96,99,120,-1,120,97,96,-1,117,100,109,-1,110,109,100,-1,121,101,118,-1,122,107,123,-1,108,124,123,-1,123,107,108,-1,125,104,88,-1,113,116,95,-1,94,113,95,-1,112,113,94,-1,126,124,89,-1,87,126,89,-1,88,85,125,-1,85,90,125,-1,93,88,104,-1,90,89,108,-1,108,89,124,-1,126,87,127,-1,61,95,116,-1,128,98,129,-1,80,130,79,-1,130,80,128,-1,131,132,133,-1,133,132,71,-1,72,71,132,-1,68,103,128,-1,128,80,68,-1,132,76,72,-1,91,134,131,-1,91,92,134,-1,92,135,134,-1,92,95,135,-1,76,135,95,-1,132,134,135,-1,132,131,134,-1,132,135,76,-1,103,98,128,-1,131,133,82,-1,136,82,133,-1,98,119,129,-1,128,137,130,-1,137,128,129,-1,82,83,131,-1,91,131,83,-1,84,136,133,-1,112,93,104,-1,93,94,92,-1,93,112,94,-1,104,111,112,-1,125,90,105,-1,105,104,125,-1,138,109,117,-1,81,82,83,-1,81,83,84,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getspine_TEXCOORD_10_401_point_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.05749,0.4563,0.0593,0.4306,0.06375,0.4546,0.06166,0.4149,0.1207,0.4923,0.07767,0.3992,0.1188,0.3911,0.07163,0.4921,0.3246,0.198,0.3195,0.2147,0.3054,0.1997,0.2701,0.2251,0.2689,0.1984,0.2975,0.2228,0.2102,0.4535,0.1961,0.4534,0.2048,0.4296,0.1903,0.4146,0.166,0.3994,0.1714,0.4906,0.2233,0.1988,0.2362,0.2011,0.2275,0.2165,0.2394,0.2239,0.2321,0.5721,0.2268,0.5802,0.2154,0.6149,0.2391,0.603,0.1375,0.5801,0.188,0.5721,0.1747,0.5997,0.1621,0.552,0.1318,0.6,0.1184,0.563,0.2092,0.5603,0.1945,0.5272,0.1607,0.5344,0.1607,0.5144,0.174,0.5029,0.3014,0.2618,0.3005,0.3507,0.2689,0.3131,0.321,0.2575};
			return value;
		}
		private double[] getspine_TEXCOORD_10_401_point_2()
		{
			double[] value = {0.02977,0.5601,0.04502,0.5112,0.05098,0.5016,0.2695,0.2618,0.07094,0.5533,0.09999,0.5806,0.05123,0.5741,0.0756,0.5956,0.1159,0.6002,0.05235,0.6182,0.03709,0.5628,0.04677,0.5319,0.07261,0.5357,0.07568,0.5156,0.03577,0.529,0.04282,0.5102,0.0653,0.5044,0.03497,0.5863,0.05009,0.575,0.2737,0.38,0.3309,0.3146,0.04345,0.6114,0.1002,0.6439,0.1123,0.6256,0.1277,0.6205,0.1171,0.5764,0.1412,0.6219,0.1621,0.6349,0.2426,0.2661,0.2426,0.3508,0.2265,0.2664,0.2217,0.554,0.2044,0.5029,0.2232,0.5154,0.2179,0.5263,0.2054,0.5078,0.2402,0.5735,0.219,0.3169,0.05434,0.5749};
			return value;
		}



		/** Define subarrays using type int[] */
		private int[] getpelvis_FACES_8_417_texCoordIndex_1()
		{
			int[] value = {38,39,40,-1,41,40,39,-1,42,43,40,-1,40,41,42,-1,44,39,38,-1,45,46,47,-1,48,49,50,-1,50,49,45,-1,45,47,50,-1,51,52,46,-1,46,52,47,-1,40,43,53,-1,54,58,52,-1,38,57,44,-1,54,59,58,-1,60,61,62,-1,63,64,61,-1,63,61,60,-1,62,61,50,-1,65,66,64,-1,65,64,63,-1,61,64,48,-1,60,58,59,-1,62,50,47,-1,62,47,58,-1,60,59,55,-1,60,55,67,-1,60,67,63,-1,67,68,69,-1,67,69,63,-1,63,69,65,-1,68,70,69,-1,69,70,71,-1,69,71,65,-1,65,71,66,-1,70,56,71,-1,71,72,73,-1,71,73,66,-1,56,72,71,-1,61,48,50,-1,52,58,47,-1,62,58,60,-1,74,76,75,-1,77,75,76,-1,78,76,79,-1,76,78,77,-1,80,74,75,-1,81,83,82,-1,84,86,85,-1,86,81,85,-1,81,86,83,-1,87,82,88,-1,82,83,88,-1,76,89,79,-1,90,88,94,-1,74,80,93,-1,90,94,95,-1,96,98,97,-1,99,97,100,-1,99,96,97,-1,98,86,97,-1,101,100,102,-1,101,99,100,-1,97,84,100,-1,96,95,94,-1,98,83,86,-1,98,94,83,-1,96,91,95,-1,96,103,91,-1,96,99,103,-1,103,105,104,-1,103,99,105,-1,99,101,105,-1,104,105,106,-1,105,107,106,-1,105,101,107,-1,101,102,107,-1,106,107,92,-1,107,109,108,-1,107,102,109,-1,92,107,108,-1,97,86,84,-1,88,83,94,-1,98,96,94,-1};
			return value;
		}


		/** Define subarrays using type double[] */
		private double[] getpelvis_TEXCOORD_9_417_point_1()
		{
			double[] value = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.8129,0.7538,0.8027,0.7967,0.7702,0.7394,0.7816,0.7924,0.7367,0.7894,0.7362,0.7374,0.83,0.7792,0.6366,0.7985,0.615,0.7993,0.61,0.7851,0.6794,0.7847,0.6795,0.7991,0.6396,0.785,0.6199,0.7908,0.6091,0.7773,0.748,0.6836,0.5877,0.7295,0.5783,0.6847,0.6775,0.6816,0.8455,0.7399,0.5926,0.7439,0.587,0.7167,0.6007,0.7207,0.6604,0.7523,0.6072,0.7396,0.6548,0.7295,0.6773,0.7408,0.6762,0.7191,0.6856,0.7101,0.6085,0.702,0.6291,0.6824,0.6556,0.6992,0.6583,0.6785,0.6747,0.6943,0.6855,0.683,0.697,0.6979,0.8129,0.7538,0.8027,0.7967,0.7702,0.7394,0.7816,0.7924,0.7367,0.7894,0.7362,0.7374,0.83,0.7792,0.6366,0.7985,0.615,0.7993,0.61,0.7851,0.6794,0.7847,0.6795,0.7991,0.6396,0.785,0.6199,0.7908,0.6091,0.7773,0.748,0.6836,0.5877,0.7295,0.5783,0.6847,0.6775,0.6816,0.8455,0.7399,0.5926,0.7439,0.587,0.7167,0.6007,0.7207,0.6604,0.7523,0.6072,0.7396,0.6548,0.7295};
			return value;
		}
		private double[] getpelvis_TEXCOORD_9_417_point_2()
		{
			double[] value = {0.6773,0.7408,0.6762,0.7191,0.6856,0.7101,0.6085,0.702,0.6291,0.6824,0.6556,0.6992,0.6583,0.6785,0.6747,0.6943,0.6855,0.683,0.697,0.6979};
			return value;
		}


		/** Large attribute array: OrientationInterpolator DEF='Laetitia_Pelvis-ROT-INTERP' keyValue field, scene-graph level=6, element #99, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_Pelvis_ROT_INTERP_6_99_keyValue()
		{
			MFRotation Laetitia_Pelvis_ROT_INTERP_6_99_keyValue = new MFRotation(new double[] {-0.5867,-0.5581,0.5867,-4.16,-0.5871,-0.5574,0.5871,-4.159,-0.5877,-0.556,0.5877,-4.157,-0.5883,-0.5549,0.5883,-4.155,-0.5883,-0.5549,0.5883,-4.155,-0.5873,-0.557,0.5873,-4.158,-0.5837,-0.5643,0.5837,-4.169,0.5766,0.5789,-0.5766,-2.092,0.5697,0.5924,-0.5697,-2.072,0.5678,0.596,-0.5678,-2.067,0.5746,0.5828,-0.5746,-2.086,-0.5835,-0.5649,0.5835,-4.17,-0.5866,-0.5585,0.5866,-4.16,-0.5812,-0.5696,0.5812,-4.177,0.5726,0.5867,-0.5726,-2.08,0.5675,0.5965,-0.5675,-2.066,0.5713,0.5892,-0.5713,-2.077,-0.5798,-0.5724,0.5798,-4.181,-0.5861,-0.5594,0.5861,-4.162,-0.5849,-0.562,0.5849,-4.166,0.5772,0.5776,-0.5772,-2.094,0.5694,0.593,-0.5694,-2.071,0.5682,0.5952,-0.5682,-2.068,0.5751,0.5818,-0.5751,-2.088,-0.5834,-0.5651,0.5834,-4.17,-0.5867,-0.5582,0.5867,-4.16,-0.5817,-0.5685,0.5817,-4.175,0.5732,0.5856,-0.5732,-2.082,0.5676,0.5963,-0.5676,-2.066,0.5696,0.5926,-0.5696,-2.072,0.5756,0.5809,-0.5756,-2.089,-0.5824,-0.5672,0.5824,-4.173,-0.5871,-0.5573,0.5871,-4.158,-0.5869,-0.5577,0.5869,-4.159,-0.5867,-0.5581,0.5867,-4.16});
			return Laetitia_Pelvis_ROT_INTERP_6_99_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_Spine-ROT-INTERP' keyValue field, scene-graph level=7, element #101, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_Spine_ROT_INTERP_7_101_keyValue()
		{
			MFRotation Laetitia_Spine_ROT_INTERP_7_101_keyValue = new MFRotation(new double[] {0.003939,0.1433,0.9897,-0.04677,0.007411,0.2055,0.9786,-0.04058,0.0129,0.2943,0.9556,-0.03468,0.02024,0.4115,0.9112,-0.02916,0.02845,0.5569,0.8301,-0.02409,0.03511,0.7253,0.6875,-0.01951,0.03215,0.9113,0.4106,-0.01467,0.004547,0.9693,-0.2458,-0.01087,-0.02038,0.6239,-0.7813,-0.01224,-0.02381,0.5199,-0.8539,-0.01311,-0.005829,0.9434,-0.3315,-0.009948,0.02905,0.8641,0.5024,-0.0149,0.0358,0.7788,0.6263,-0.01813,0.02243,0.9317,0.3626,-0.01284,-0.01378,0.8381,-0.5454,-0.0103,-0.02405,0.5031,-0.8639,-0.01334,-0.01782,0.7512,-0.6598,-0.01083,0.01752,0.9679,0.2509,-0.01179,0.03499,0.7896,0.6126,-0.01766,0.03231,0.8244,0.565,-0.01629,0.006569,0.9999,-0.0139,-0.01041,-0.02189,0.6195,-0.7847,-0.01196,-0.02339,0.5458,-0.8376,-0.01278,-0.00345,0.9631,-0.2693,-0.009953,0.02882,0.8668,0.4978,-0.01481,0.036,0.7761,0.6296,-0.01825,0.02421,0.9155,0.4017,-0.01331,-0.01168,0.8728,-0.4879,-0.01014,-0.02397,0.5084,-0.8608,-0.01327,-0.02137,0.6422,-0.7663,-0.01198,-4.014E-4,0.9794,-0.202,-0.01064,0.0265,0.9067,0.421,-0.01452,0.03659,0.7585,0.6507,-0.01855,0.02909,0.592,0.8054,-0.01469,0.0247,0.5008,0.8652,-0.01337});
			return Laetitia_Spine_ROT_INTERP_7_101_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_Head-ROT-INTERP' keyValue field, scene-graph level=12, element #104, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_Head_ROT_INTERP_12_104_keyValue()
		{
			MFRotation Laetitia_Head_ROT_INTERP_12_104_keyValue = new MFRotation(new double[] {-0.9709,-0.2393,0.00574,-0.0515,-0.9345,-0.3558,0.006824,-0.0427,-0.8446,-0.5353,0.007546,-0.03449,-0.6508,-0.7592,0.006918,-0.02846,-0.3476,-0.9376,0.004317,-0.02569,-0.04875,-0.9988,9.469E-4,-0.0254,0.08172,-0.9967,-7.132E-4,-0.02408,-0.04371,-0.999,3.643E-4,-0.01905,-0.2129,-0.9771,0.00126,-0.01429,0.1639,-0.9865,-0.001163,-0.01271,0.7781,-0.6281,-0.006409,-0.02709,0.8789,-0.4769,-0.009658,-0.0485,0.8926,-0.4508,-0.01069,-0.05616,0.8773,-0.4798,-0.00901,-0.04486,0.788,-0.6156,-0.006014,-0.0255,0.08991,-0.9959,-7.148E-4,-0.0124,-0.7789,-0.6271,0.005447,-0.02365,-0.8889,-0.458,0.008791,-0.04491,-0.8965,-0.4429,0.0109,-0.05648,-0.8382,-0.5453,0.009827,-0.0442,0.02725,-0.9996,-2.744E-4,-0.01882,0.9416,-0.3366,-0.006183,-0.0403,0.9693,-0.246,-0.0060,-0.05208,0.9042,-0.4271,-0.007567,-0.04066,0.5253,-0.8509,-0.005651,-0.02711,-0.01513,-0.9999,5.277E-4,-0.0254,-0.2373,-0.9714,0.002612,-0.02257,-0.3311,-0.9436,0.00244,-0.01705,-0.1027,-0.9947,4.299E-4,-0.01247,0.6309,-0.7758,-0.004392,-0.01812,0.865,-0.5017,-0.007856,-0.03755,0.9017,-0.4322,-0.01016,-0.05469,0.8842,-0.4669,-0.01053,-0.05402,-0.8306,-0.5569,0.006429,-0.02841,-0.9707,-0.2402,0.005779,-0.05128});
			return Laetitia_Head_ROT_INTERP_12_104_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_Head-SCALE-ORI-INTERP' keyValue field, scene-graph level=12, element #105, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_Head_SCALE_ORI_INTERP_12_105_keyValue()
		{
			MFRotation Laetitia_Head_SCALE_ORI_INTERP_12_105_keyValue = new MFRotation(new double[] {2.618E-4,0.9991,-0.04318,-0.01232,2.59E-4,0.9994,-0.0345,-0.01519,2.332E-4,0.9997,-0.02527,-0.01847,1.742E-4,0.9999,-0.0162,-0.02161,9.603E-5,1.0,-0.007996,-0.02409,1.757E-5,1.0,-0.001382,-0.02537,-1.775E-5,1.0,0.001499,-0.024,0.0,1.0,-6.887E-4,-0.01903,1.708E-5,1.0,-0.002479,-0.01396,-1.213E-5,1.0,0.001957,-0.01253,-1.54E-4,0.9998,0.01829,-0.01702,-4.229E-4,0.9993,0.03665,-0.02313,-5.424E-4,0.9991,0.04299,-0.02531,-3.7E-4,0.9994,0.0339,-0.02152,-1.385E-4,0.9998,0.01748,-0.0157,0.0,1.0,0.001125,-0.01235,1.183E-4,0.9999,-0.01578,-0.01483,3.513E-4,0.9994,-0.03452,-0.02056,5.46E-4,0.999,-0.04401,-0.02501,3.833E-4,0.9995,-0.03222,-0.0241,0.0,1.0,4.681E-4,-0.01881,-2.195E-4,0.9995,0.03292,-0.01356,-2.738E-4,0.999,0.04376,-0.01281,-2.742E-4,0.9995,0.03183,-0.01737,-1.418E-4,0.9999,0.01213,-0.02307,0.0,1.0,-6.35E-4,-0.0254,5.164E-5,1.0,-0.004732,-0.02192,3.784E-5,1.0,-0.004769,-0.01608,0.0,1.0,-9.456E-4,-0.01241,-7.115E-5,0.9999,0.01003,-0.01406,-2.63E-4,0.9996,0.02812,-0.01884,-4.981E-4,0.9991,0.04245,-0.02364,-5.168E-4,0.9992,0.04094,-0.02522,1.607E-4,0.9998,-0.02058,-0.01582,2.551E-4,0.9991,-0.04315,-0.01232});
			return Laetitia_Head_SCALE_ORI_INTERP_12_105_keyValue;
		}
		/** Large attribute array: TextureCoordinate DEF='head-TEXCOORD' point field, scene-graph level=15, element #110, 1374 total numbers made up of 687 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f gethead_TEXCOORD_15_110_point()
		{
			MFVec2f head_TEXCOORD_15_110_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_1()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_2()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_3()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_4()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_5()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_6()))
				.append(new MFVec2f(gethead_TEXCOORD_15_110_point_7()));
			return head_TEXCOORD_15_110_point;
		}
		/** Large attribute array: Coordinate DEF='head-COORD' point field, scene-graph level=15, element #111, 993 total numbers made up of 331 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f gethead_COORD_15_111_point()
		{
			MFVec3f head_COORD_15_111_point = new MFVec3f()/*2.finalize*/
				.append(new MFVec3f(gethead_COORD_15_111_point_1()))
				.append(new MFVec3f(gethead_COORD_15_111_point_2()))
				.append(new MFVec3f(gethead_COORD_15_111_point_3()))
				.append(new MFVec3f(gethead_COORD_15_111_point_4()));
			return head_COORD_15_111_point;
		}
		/** Large attribute array: IndexedFaceSet DEF='head-FACE' coordIndex field, scene-graph level=14, element #117, 2616 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 gethead_FACE_14_117_coordIndex()
		{
			MFInt32 head_FACE_14_117_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(gethead_FACE_14_117_coordIndex_1()))
				.append(new MFInt32(gethead_FACE_14_117_coordIndex_2()))
				.append(new MFInt32(gethead_FACE_14_117_coordIndex_3()));
			return head_FACE_14_117_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='head-FACE' texCoordIndex field, scene-graph level=14, element #117, 2616 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 gethead_FACE_14_117_texCoordIndex()
		{
			MFInt32 head_FACE_14_117_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(gethead_FACE_14_117_texCoordIndex_1()))
				.append(new MFInt32(gethead_FACE_14_117_texCoordIndex_2()))
				.append(new MFInt32(gethead_FACE_14_117_texCoordIndex_3()));
			return head_FACE_14_117_texCoordIndex;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_UpperArm-ROT-INTERP' keyValue field, scene-graph level=13, element #123, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_UpperArm_ROT_INTERP_13_123_keyValue()
		{
			MFRotation Laetitia_L_UpperArm_ROT_INTERP_13_123_keyValue = new MFRotation(new double[] {-0.1559,-0.1957,0.9682,-1.335,-0.1587,-0.2025,0.9663,-1.337,-0.1632,-0.2161,0.9626,-1.342,-0.168,-0.2304,0.9585,-1.346,-0.1712,-0.2397,0.9556,-1.35,-0.1714,-0.2384,0.9559,-1.349,-0.1663,-0.2201,0.9612,-1.343,-0.1502,-0.1637,0.975,-1.327,-0.1067,-0.004867,0.9943,-1.301,-0.0596,0.1612,0.9851,-1.303,-0.04701,0.2098,0.9766,-1.31,-0.08562,0.08479,0.9927,-1.299,-0.1371,-0.1018,0.9853,-1.314,-0.1604,-0.2003,0.9665,-1.337,-0.1375,-0.1186,0.9834,-1.316,-0.08676,0.06553,0.9941,-1.298,-0.04816,0.2031,0.978,-1.309,-0.06047,0.1688,0.9838,-1.305,-0.1108,-0.003343,0.9938,-1.302,-0.153,-0.1663,0.9741,-1.328,-0.1552,-0.1836,0.9707,-1.332,-0.1153,-0.03743,0.9926,-1.304,-0.06461,0.1442,0.9874,-1.302,-0.04645,0.2121,0.9761,-1.311,-0.08196,0.09766,0.9918,-1.3,-0.1339,-0.0895,0.9869,-1.312,-0.1602,-0.1989,0.9668,-1.336,-0.1428,-0.1389,0.98,-1.321,-0.09783,0.02565,0.9949,-1.299,-0.05448,0.1806,0.982,-1.306,-0.03959,0.2368,0.9708,-1.315,-0.04004,0.2416,0.9695,-1.317,-0.04546,0.2262,0.973,-1.314,-0.04493,0.2164,0.9753,-1.311,-0.04347,0.217,0.9752,-1.311});
			return Laetitia_L_UpperArm_ROT_INTERP_13_123_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_UpperArm-SCALE-ORI-INTERP' keyValue field, scene-graph level=13, element #124, 252 total numbers made up of 63 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_UpperArm_SCALE_ORI_INTERP_13_124_keyValue()
		{
			MFRotation Laetitia_L_UpperArm_SCALE_ORI_INTERP_13_124_keyValue = new MFRotation(new double[] {-0.1133,0.415,0.9027,-0.477,-0.1215,0.4256,0.8967,-0.478,-0.1394,0.4454,0.8844,-0.48,-0.1584,0.4662,0.8704,-0.4823,-0.1703,0.4798,0.8607,-0.4841,-0.1675,0.4785,0.862,-0.4841,-0.1416,0.4532,0.8801,-0.4812,-0.06113,0.3742,0.9254,-0.4755,0.002718,0.3137,0.9495,-0.474,0.003174,0.3133,0.9496,-0.474,0.1688,0.1567,0.9731,-0.4788,0.3313,-9.969E-4,0.9435,-0.4941,0.3317,-0.001423,0.9434,-0.4942,0.3899,-0.05979,0.9189,-0.5026,0.4514,-0.1193,0.8843,-0.5132,0.3403,0.001241,0.9403,-0.4949,0.3399,0.001695,0.9405,-0.4948,0.298,0.04412,0.9535,-0.4899,0.03565,0.2932,0.9554,-0.475,-0.004829,0.3299,0.944,-0.4751,-0.00529,0.3303,0.9439,-0.4751,-0.1141,0.4254,0.8978,-0.4786,0.00115,0.3136,0.9495,-0.4739,0.001622,0.3132,0.9497,-0.4739,0.003992,0.311,0.9504,-0.4738,0.2654,0.06327,0.9621,-0.4866,0.333,-0.002612,0.9429,-0.4943,0.3335,-0.003055,0.9428,-0.4944,0.4422,-0.1119,0.8899,-0.5116,0.4042,-0.06534,0.9123,-0.5043,0.3399,0.002192,0.9405,-0.4948,0.3394,0.002645,0.9406,-0.4948,0.1782,0.1609,0.9708,-0.4798,-6.496E-4,0.3261,0.9453,-0.475,-0.001117,0.3266,0.9452,-0.475,-0.06134,0.3803,0.9228,-0.4763,-0.09107,0.4012,0.9114,-0.4767,0.001756,0.3131,0.9497,-0.4739,0.002229,0.3126,0.9499,-0.4739,0.1219,0.2,0.9722,-0.4763,0.3311,-6.894E-4,0.9436,-0.4941,0.3315,-0.001135,0.9435,-0.4941,0.3687,-0.03799,0.9288,-0.4993,0.4544,-0.1221,0.8824,-0.5138,0.3407,0.001287,0.9402,-0.4949,0.3403,0.001739,0.9403,-0.4949,0.315,0.02741,0.9487,-0.4918,0.05386,0.2766,0.9595,-0.4752,-0.002978,0.3282,0.9446,-0.4751,-0.003442,0.3286,0.9444,-0.4751,-0.1117,0.4236,0.8989,-0.4785,-0.02602,0.3388,0.9405,-0.4742,0.006774,0.3079,0.9514,-0.4738,0.007218,0.3075,0.9515,-0.4738,0.2107,0.1155,0.9707,-0.4817,0.3318,-0.001174,0.9434,-0.4942,0.3322,-0.001595,0.9432,-0.4942,0.4146,-0.08377,0.9061,-0.5066,0.4838,-0.1527,0.8618,-0.52,0.4924,-0.1564,0.8562,-0.5213,0.476,-0.1358,0.8689,-0.5174,0.459,-0.1278,0.8792,-0.5149,0.4576,-0.1302,0.8796,-0.515});
			return Laetitia_L_UpperArm_SCALE_ORI_INTERP_13_124_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_Hand-ROT-INTERP' keyValue field, scene-graph level=15, element #127, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_Hand_ROT_INTERP_15_127_keyValue()
		{
			MFRotation Laetitia_L_Hand_ROT_INTERP_15_127_keyValue = new MFRotation(new double[] {0.9994,0.02499,-0.02501,-1.571,0.9989,0.03334,-0.03336,-1.571,0.9981,0.04346,-0.04349,-1.572,0.9971,0.05383,-0.05388,-1.573,0.996,0.06294,-0.06299,-1.574,0.9952,0.06929,-0.06934,-1.575,0.9949,0.07138,-0.07143,-1.575,0.9958,0.06487,-0.06492,-1.574,0.9986,0.03675,-0.03678,-1.571,1.0,0.003326,-0.003329,-1.57,0.9998,-0.01432,0.01434,-1.57,0.9998,-0.01365,0.01366,-1.57,1.0,-0.003565,0.003568,-1.57,0.9999,0.0101,-0.01011,-1.57,0.9991,0.03026,-0.03028,-1.571,0.9968,0.05641,-0.05646,-1.573,0.9946,0.07327,-0.07333,-1.575,0.9956,0.06653,-0.06658,-1.574,0.9985,0.03917,-0.0392,-1.572,0.9999,0.009249,-0.009257,-1.57,1.0,-0.006232,0.006237,-1.57,0.9999,-0.01141,0.01142,-1.57,0.9999,-0.009406,0.009413,-1.57,1.0,-1.531E-4,1.532E-4,-1.57,0.9994,0.02429,-0.02431,-1.571,0.997,0.05509,-0.05513,-1.573,0.9946,0.07367,-0.07372,-1.575,0.9956,0.06631,-0.06637,-1.574,0.9982,0.04213,-0.04216,-1.572,0.9997,0.01722,-0.01723,-1.57,1.0,0.004465,-0.004468,-1.57,1.0,-0.002277,0.002279,-1.57,1.0,-0.006541,0.006546,-1.57,0.9999,-0.01074,0.01075,-1.57,0.9998,-0.01255,0.01256,-1.57});
			return Laetitia_L_Hand_ROT_INTERP_15_127_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_Hand-SCALE-ORI-INTERP' keyValue field, scene-graph level=15, element #128, 196 total numbers made up of 49 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_Hand_SCALE_ORI_INTERP_15_128_keyValue()
		{
			MFRotation Laetitia_L_Hand_SCALE_ORI_INTERP_15_128_keyValue = new MFRotation(new double[] {0.0,-1.0,7.94E-4,-0.05,-0.2847,-0.9586,0.01027,-0.06961,0.0,-1.0,7.976E-4,-0.08703,0.3763,-0.9263,-0.01958,-0.1164,0.1142,-0.9934,-0.006425,-0.1271,0.08598,-0.9963,-0.00519,-0.1395,0.0,-1.0,7.982E-4,-0.1432,0.0,-1.0,7.969E-4,-0.1301,0.0,-1.0,7.942E-4,-0.07356,0.9989,-0.04605,-0.00329,-0.1442,0.9997,0.02505,0.001717,-0.1385,-0.995,0.09941,-0.001844,-0.03601,0.9486,0.3162,0.01335,-0.09056,0.9854,0.1696,0.01338,-0.1614,-0.9724,0.233,-0.01351,-0.1175,-0.4876,0.873,-0.007366,-0.03127,0.0,1.0,-7.963E-4,-0.00713,0.9602,-0.2793,-0.002449,-0.01991,0.9477,-0.319,-0.002412,-0.01761,0.5793,-0.8151,-0.005192,-0.02479,0.0,-1.0,7.949E-4,-0.06055,0.03368,-0.9994,-0.001106,-0.1131,0.0,-1.0,7.97E-4,-0.1471,0.0,-1.0,7.956E-4,-0.1335,0.0,-1.0,7.928E-4,-0.07842,0.4672,-0.8841,-0.003621,-0.02092,2.426E-5,1.0,-7.154E-4,-0.002152,0.07888,0.9969,-6.287E-4,-0.002217,0.02694,0.9996,-6.336E-4,-0.01247,-0.925,0.3797,-0.01086,-0.06009,0.0,1.0,-7.684E-4,-0.01881,-1.0,0.001813,-1.536E-4,-0.1685,-0.964,-0.2647,0.02364,-0.1831,0.0,-1.0,7.965E-4,-0.1104,-0.4831,-0.8748,0.03648,-0.1689,0.0,-1.0,7.972E-4,-0.1374,0.2109,-0.9774,-0.01372,-0.1405,0.1794,-0.9837,-0.01117,-0.1352,0.5144,-0.8573,-0.02103,-0.09839,0.9306,-0.3656,-0.01728,-0.1032,-0.9146,-0.404,0.01755,-0.09322,-0.928,-0.3722,0.01628,-0.09248,0.0,-1.0,7.442E-4,-0.00893,1.448E-5,1.0,-8.058E-4,-0.00447,0.9979,0.065,0.002179,-0.06906,0.9986,0.05202,0.002228,-0.08751,0.9994,0.03321,0.00651,-0.3889,0.0,1.0,-7.738E-4,-0.02149,0.4104,0.9119,0.004457,-0.02752});
			return Laetitia_L_Hand_SCALE_ORI_INTERP_15_128_keyValue;
		}
		/** Large attribute array: IndexedFaceSet DEF='l_hand-FACES' coordIndex field, scene-graph level=17, element #134, 540 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getl_hand_FACES_17_134_coordIndex()
		{
			MFInt32 l_hand_FACES_17_134_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getl_hand_FACES_17_134_coordIndex_1()));
			return l_hand_FACES_17_134_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='l_hand-FACES' texCoordIndex field, scene-graph level=17, element #134, 540 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getl_hand_FACES_17_134_texCoordIndex()
		{
			MFInt32 l_hand_FACES_17_134_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getl_hand_FACES_17_134_texCoordIndex_1()));
			return l_hand_FACES_17_134_texCoordIndex;
		}
		/** Large attribute array: TextureCoordinate DEF='l_hand-TEXCOORD' point field, scene-graph level=18, element #134, 274 total numbers made up of 137 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getl_hand_TEXCOORD_18_134_point()
		{
			MFVec2f l_hand_TEXCOORD_18_134_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getl_hand_TEXCOORD_18_134_point_1()))
				.append(new MFVec2f(getl_hand_TEXCOORD_18_134_point_2()));
			return l_hand_TEXCOORD_18_134_point;
		}
		/** Large attribute array: Coordinate DEF='l_hand-COORD' point field, scene-graph level=18, element #135, 213 total numbers made up of 71 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getl_hand_COORD_18_135_point()
		{
			MFVec3f l_hand_COORD_18_135_point = new MFVec3f(new double[] {10.59,27.15,-13.71,11.55,26.82,-15.64,12.31,28.0,-11.55,13.41,27.64,-12.96,13.2,27.21,-14.73,11.7,29.57,-17.77,12.35,29.8,-18.4,12.86,30.7,-15.17,11.24,28.61,-17.26,11.91,28.18,-18.49,13.18,30.82,-12.18,13.05,32.5,-19.4,13.13,31.3,-18.12,13.49,31.32,-19.04,12.54,33.26,-19.57,12.24,33.03,-18.72,13.0,32.88,-18.22,12.44,33.39,-18.73,12.69,32.42,-18.66,12.45,33.82,-18.43,12.19,33.55,-17.61,12.85,33.11,-16.83,12.67,32.85,-17.29,12.46,33.88,-17.43,12.26,33.66,-17.02,12.04,33.4,-16.26,12.71,33.16,-15.58,12.5,32.87,-15.95,12.21,33.76,-16.07,13.24,31.95,-14.77,12.85,31.76,-15.25,12.72,31.81,-13.81,12.72,32.47,-14.94,12.18,33.02,-15.26,11.88,32.95,-14.66,12.6,32.64,-13.87,12.39,32.42,-14.22,12.06,33.23,-14.47,13.05,31.75,-12.99,12.98,29.39,-18.26,14.1,30.12,-17.82,14.14,30.27,-15.97,13.64,30.58,-13.64,13.37,32.49,-18.84,13.06,32.92,-19.06,14.08,31.26,-18.25,13.78,31.87,-18.59,13.52,31.7,-17.58,14.0,31.75,-16.87,13.76,32.29,-17.2,13.31,32.95,-17.55,13.05,33.3,-17.8,13.38,31.9,-16.14,13.77,31.78,-15.46,13.6,32.25,-15.73,12.93,33.26,-16.31,13.16,32.91,-16.17,13.03,32.48,-14.43,12.84,32.76,-14.64,13.39,31.98,-14.08,13.57,31.5,-13.76,11.15,30.39,-20.01,10.62,30.28,-21.62,11.0,30.5,-21.49,10.86,29.73,-19.79,10.94,30.03,-21.9,11.37,29.5,-20.7,11.67,29.01,-19.58,11.88,29.96,-20.28,11.68,30.15,-20.77,11.27,30.24,-21.82});
			return l_hand_COORD_18_135_point;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_UpperArm-ROT-INTERP' keyValue field, scene-graph level=13, element #195, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_UpperArm_ROT_INTERP_13_195_keyValue()
		{
			MFRotation Laetitia_R_UpperArm_ROT_INTERP_13_195_keyValue = new MFRotation(new double[] {0.05654,-0.07432,-0.9956,-1.268,0.04964,-0.06468,-0.9967,-1.267,0.04167,-0.05362,-0.9977,-1.266,0.03339,-0.04222,-0.9986,-1.266,0.02561,-0.03157,-0.9992,-1.265,0.01914,-0.02273,-0.9996,-1.265,0.01432,-0.01618,-0.9998,-1.264,0.01386,-0.01578,-0.9998,-1.264,0.02927,-0.03704,-0.9989,-1.265,0.0494,-0.06435,-0.9967,-1.267,0.05871,-0.07639,-0.9953,-1.269,0.04746,-0.06089,-0.997,-1.267,0.02672,-0.03291,-0.9991,-1.265,0.01249,-0.01381,-0.9998,-1.264,0.01907,-0.0231,-0.9996,-1.265,0.03875,-0.05003,-0.998,-1.266,0.05658,-0.07374,-0.9957,-1.268,0.05589,-0.07235,-0.9958,-1.268,0.03821,-0.0484,-0.9981,-1.266,0.0182,-0.02144,-0.9996,-1.265,0.01298,-0.01463,-0.9998,-1.264,0.02743,-0.03461,-0.999,-1.265,0.0483,-0.06283,-0.9969,-1.267,0.0592,-0.07702,-0.9953,-1.269,0.04894,-0.06288,-0.9968,-1.267,0.02823,-0.03495,-0.999,-1.265,0.01289,-0.01434,-0.9998,-1.264,0.01684,-0.02006,-0.9997,-1.264,0.03412,-0.04378,-0.9985,-1.266,0.05341,-0.06954,-0.9961,-1.268,0.06312,-0.0821,-0.9946,-1.269,0.06651,-0.08641,-0.994,-1.27,0.06542,-0.08513,-0.9942,-1.27,0.05847,-0.07684,-0.9953,-1.269,0.05639,-0.07444,-0.9956,-1.268});
			return Laetitia_R_UpperArm_ROT_INTERP_13_195_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_UpperArm-SCALE-ORI-INTERP' keyValue field, scene-graph level=13, element #196, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_UpperArm_SCALE_ORI_INTERP_13_196_keyValue()
		{
			MFRotation Laetitia_R_UpperArm_SCALE_ORI_INTERP_13_196_keyValue = new MFRotation(new double[] {0.04483,0.1362,-0.9897,-0.5105,0.0384,0.1191,-0.9921,-0.51,0.03108,0.09941,-0.9946,-0.5095,0.02361,0.07906,-0.9966,-0.509,0.01668,0.05998,-0.9981,-0.5087,0.01095,0.04412,-0.999,-0.5085,0.006736,0.03234,-0.9995,-0.5084,0.006716,0.03139,-0.9995,-0.5084,0.02075,0.06933,-0.9974,-0.5089,0.03818,0.1185,-0.9922,-0.51,0.04515,0.1408,-0.989,-0.5107,0.03504,0.1131,-0.993,-0.5099,0.01736,0.06254,-0.9979,-0.5088,0.00535,0.02794,-0.9996,-0.5083,0.01171,0.04431,-0.9989,-0.5085,0.0292,0.0926,-0.9953,-0.5093,0.04375,0.1358,-0.9898,-0.5105,0.04234,0.1337,-0.9901,-0.5105,0.02715,0.09053,-0.9955,-0.5093,0.01011,0.04179,-0.9991,-0.5085,0.006037,0.02927,-0.9996,-0.5084,0.01928,0.06488,-0.9977,-0.5088,0.03719,0.1158,-0.9926,-0.5099,0.04552,0.1419,-0.9888,-0.5108,0.03629,0.1167,-0.9925,-0.51,0.01865,0.06623,-0.9976,-0.5088,0.005671,0.02892,-0.9996,-0.5084,0.009741,0.03886,-0.9992,-0.5085,0.02525,0.08131,-0.9964,-0.5091,0.04119,0.1281,-0.9909,-0.5103,0.04845,0.1513,-0.9873,-0.5111,0.05085,0.1594,-0.9859,-0.5114,0.05026,0.1569,-0.9863,-0.5113,0.04631,0.1408,-0.9889,-0.5107,0.04527,0.1361,-0.9897,-0.5105});
			return Laetitia_R_UpperArm_SCALE_ORI_INTERP_13_196_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_Hand-ROT-INTERP' keyValue field, scene-graph level=15, element #199, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_Hand_ROT_INTERP_15_199_keyValue()
		{
			MFRotation Laetitia_R_Hand_ROT_INTERP_15_199_keyValue = new MFRotation(new double[] {-0.9994,0.02499,0.02501,-1.571,-0.9989,0.03334,0.03336,-1.571,-0.9981,0.04346,0.04349,-1.572,-0.9971,0.05383,0.05388,-1.573,-0.996,0.06294,0.06299,-1.574,-0.9952,0.06929,0.06934,-1.575,-0.9949,0.07138,0.07143,-1.575,-0.9958,0.06487,0.06492,-1.574,-0.9986,0.03675,0.03678,-1.571,-1.0,0.003326,0.003329,-1.57,-0.9998,-0.01432,-0.01434,-1.57,-0.9998,-0.01365,-0.01366,-1.57,-1.0,-0.003565,-0.003568,-1.57,-0.9999,0.0101,0.01011,-1.57,-0.9991,0.03026,0.03028,-1.571,-0.9968,0.05641,0.05646,-1.573,-0.9946,0.07327,0.07333,-1.575,-0.9956,0.06653,0.06658,-1.574,-0.9985,0.03917,0.0392,-1.572,-0.9999,0.009249,0.009257,-1.57,-1.0,-0.006232,-0.006237,-1.57,-0.9999,-0.01141,-0.01142,-1.57,-0.9999,-0.009406,-0.009413,-1.57,-1.0,-1.531E-4,-1.532E-4,-1.57,-0.9994,0.02429,0.02431,-1.571,-0.997,0.05509,0.05513,-1.573,-0.9946,0.07367,0.07372,-1.575,-0.9956,0.06631,0.06637,-1.574,-0.9982,0.04213,0.04216,-1.572,-0.9997,0.01722,0.01723,-1.57,-1.0,0.004465,0.004468,-1.57,-1.0,-0.002277,-0.002279,-1.57,-1.0,-0.006541,-0.006546,-1.57,-0.9999,-0.01074,-0.01075,-1.57,-0.9998,-0.01255,-0.01256,-1.57});
			return Laetitia_R_Hand_ROT_INTERP_15_199_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_Hand-SCALE-ORI-INTERP' keyValue field, scene-graph level=15, element #200, 188 total numbers made up of 47 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_Hand_SCALE_ORI_INTERP_15_200_keyValue()
		{
			MFRotation Laetitia_R_Hand_SCALE_ORI_INTERP_15_200_keyValue = new MFRotation(new double[] {0.0,-1.0,-7.963E-4,-0.05,0.1582,-0.9874,-0.006066,-0.06757,0.01097,-0.9999,-0.001275,-0.08703,0.0,-1.0,-7.953E-4,-0.1079,0.09045,-0.9959,-0.006509,-0.1267,0.0,-1.0,-7.997E-4,-0.139,0.0,-1.0,-7.961E-4,-0.1432,-0.1849,-0.9827,0.01126,-0.1324,0.0,-1.0,-7.921E-4,-0.07356,1.695E-5,-1.0,-8.041E-4,-0.006653,-1.401E-5,1.0,7.986E-4,-0.005979,-0.1144,0.9934,4.37E-4,-0.006121,0.0,1.0,7.959E-4,-0.02865,-0.472,0.8816,-0.005743,-0.03097,-0.9678,0.2519,-0.003255,-0.02831,-9.672E-5,-1.0,-0.001471,-6.784E-4,0.9999,-0.01643,-3.777E-4,-0.04474,-0.1871,-0.9823,0.001107,-0.02057,-0.2432,-0.97,0.005436,-0.05262,0.6612,-0.75,-0.01751,-0.06818,0.3619,-0.9322,-0.01169,-0.06495,0.1113,-0.9938,-0.00709,-0.1138,0.0,-1.0,-7.964E-4,-0.1471,0.01824,-0.9998,-0.002015,-0.1335,0.174,-0.9847,-0.007613,-0.07964,0.1849,-0.9827,-0.002491,-0.01882,0.0,1.0,7.999E-4,-0.002152,0.0,1.0,5.843E-4,-0.00221,-0.956,0.2933,-0.005736,-0.0425,0.0,1.0,7.837E-4,-0.02282,-0.04579,0.999,3.647E-4,-0.01883,-0.8514,0.5245,2.869E-4,-5.838E-4,0.4089,-0.9125,-0.01066,-0.05325,0.0,-1.0,-7.947E-4,-0.1,-0.0492,-0.9988,0.001671,-0.1003,-0.3564,-0.9341,0.01895,-0.1182,0.0,-1.0,-7.947E-4,-0.1479,0.0,-1.0,-8.006E-4,-0.133,0.0,-1.0,-7.946E-4,-0.08436,0.03578,-0.9994,-0.001414,-0.03447,-0.3013,-0.9535,5.816E-4,-0.009365,-0.4713,0.882,-3.51E-4,-0.005068,0.0,1.0,8.03E-4,-0.004491,0.516,0.8566,0.001858,-0.005317,0.03648,0.9993,0.001036,-0.01309,-0.02192,0.9998,5.606E-4,-0.02149,-0.008867,1.0,6.85E-4,-0.0251});
			return Laetitia_R_Hand_SCALE_ORI_INTERP_15_200_keyValue;
		}
		/** Large attribute array: IndexedFaceSet DEF='r_hand-FACES' coordIndex field, scene-graph level=17, element #206, 540 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getr_hand_FACES_17_206_coordIndex()
		{
			MFInt32 r_hand_FACES_17_206_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getr_hand_FACES_17_206_coordIndex_1()));
			return r_hand_FACES_17_206_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='r_hand-FACES' texCoordIndex field, scene-graph level=17, element #206, 540 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getr_hand_FACES_17_206_texCoordIndex()
		{
			MFInt32 r_hand_FACES_17_206_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getr_hand_FACES_17_206_texCoordIndex_1()));
			return r_hand_FACES_17_206_texCoordIndex;
		}
		/** Large attribute array: TextureCoordinate DEF='r_hand-TEXCOORD' point field, scene-graph level=18, element #206, 274 total numbers made up of 137 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getr_hand_TEXCOORD_18_206_point()
		{
			MFVec2f r_hand_TEXCOORD_18_206_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getr_hand_TEXCOORD_18_206_point_1()))
				.append(new MFVec2f(getr_hand_TEXCOORD_18_206_point_2()));
			return r_hand_TEXCOORD_18_206_point;
		}
		/** Large attribute array: Coordinate DEF='r_hand-COORD' point field, scene-graph level=18, element #207, 213 total numbers made up of 71 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getr_hand_COORD_18_207_point()
		{
			MFVec3f r_hand_COORD_18_207_point = new MFVec3f(new double[] {-10.65,27.31,-10.96,-11.82,27.06,-12.72,-12.06,28.06,-8.394,-13.31,27.92,-9.612,-13.33,27.49,-11.41,-12.15,29.82,-14.79,-12.86,30.06,-15.25,-12.94,30.97,-11.94,-11.66,28.85,-14.39,-12.48,28.43,-15.44,-12.9,31.09,-8.912,-13.58,32.78,-16.07,-13.54,31.57,-14.78,-14.01,31.6,-15.6,-13.09,33.52,-16.36,-12.7,33.28,-15.59,-13.39,33.15,-14.92,-12.88,33.65,-15.57,-13.14,32.69,-15.43,-12.84,34.08,-15.27,-12.5,33.8,-14.52,-13.07,33.38,-13.59,-12.95,33.11,-14.08,-12.73,34.14,-14.28,-12.49,33.91,-13.92,-12.19,33.65,-13.22,-12.78,33.42,-12.39,-12.62,33.13,-12.8,-12.33,34.01,-13.0,-13.24,32.23,-11.45,-12.91,32.03,-12.02,-12.62,32.07,-10.64,-12.73,32.73,-11.76,-12.22,33.27,-12.21,-11.86,33.2,-11.69,-12.48,32.9,-10.73,-12.32,32.68,-11.13,-12.01,33.47,-11.46,-12.85,32.02,-9.75,-13.47,29.66,-14.95,-14.5,30.41,-14.24,-14.32,30.56,-12.41,-13.53,30.86,-10.24,-13.84,32.77,-15.44,-13.55,33.19,-15.73,-14.49,31.55,-14.67,-14.23,32.15,-15.09,-13.85,31.98,-14.16,-14.24,32.04,-13.34,-14.03,32.57,-13.72,-13.61,33.22,-14.18,-13.37,33.57,-14.49,-13.54,32.17,-12.77,-13.84,32.07,-12.0,-13.7,32.53,-12.31,-13.08,33.53,-13.05,-13.3,33.19,-12.86,-12.98,32.75,-11.18,-12.81,33.02,-11.43,-13.3,32.25,-10.74,-13.45,31.78,-10.38,-11.84,30.63,-17.13,-11.52,30.51,-18.85,-11.87,30.74,-18.63,-11.56,29.96,-16.99,-11.88,30.26,-19.04,-12.17,29.74,-17.76,-12.35,29.26,-16.58,-12.61,30.21,-17.21,-12.46,30.4,-17.75,-12.18,30.48,-18.88});
			return r_hand_COORD_18_207_point;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_Thigh-ROT-INTERP' keyValue field, scene-graph level=8, element #287, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_Thigh_ROT_INTERP_8_287_keyValue()
		{
			MFRotation Laetitia_L_Thigh_ROT_INTERP_8_287_keyValue = new MFRotation(new double[] {-0.07434,1.012E-4,0.9972,-3.142,-0.07043,4.598E-4,0.9975,-3.151,-0.07227,9.142E-4,0.9974,-3.163,-0.07211,0.001349,0.9974,-3.174,-0.06527,0.001517,0.9979,-3.181,-0.2334,0.005611,0.9724,-3.181,-0.2229,0.004415,0.9748,-3.169,-0.2789,8.394E-4,0.9603,-3.14,-0.1712,-0.002173,0.9852,-3.11,0.02821,6.861E-4,0.9996,-3.102,0.08276,2.449E-4,0.9966,-3.13,-0.06191,0.001392,0.9981,-3.165,-0.1974,0.005335,0.9803,-3.178,-0.2129,0.00364,0.9771,-3.158,-0.2314,-9.398E-4,0.9729,-3.122,-0.03585,-7.16E-4,0.9994,-3.101,0.04497,1.79E-4,0.999,-3.116,0.01802,2.071E-4,0.9998,-3.152,-0.1682,0.004404,0.9857,-3.176,-0.1955,0.004921,0.9807,-3.172,-0.2659,0.001563,0.964,-3.141,-0.1505,-0.001904,0.9886,-3.108,0.008814,8.324E-5,1.0,-3.104,0.08204,1.916E-4,0.9966,-3.132,-0.04309,0.001186,0.9991,-3.166,-0.1944,0.005318,0.9809,-3.178,-0.2111,0.003867,0.9775,-3.16,-0.242,-6.947E-4,0.9703,-3.124,-0.04909,-9.736E-4,0.9988,-3.101,0.03349,8.63E-5,0.9994,-3.109,-0.001996,-2.747E-4,1.0,-3.134,-0.04574,-0.008465,0.9989,-3.164,-0.1396,-0.02521,0.9899,-3.193,-0.2139,-0.03831,0.9761,-3.2,-0.221,-0.03953,0.9745,-3.2});
			return Laetitia_L_Thigh_ROT_INTERP_8_287_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_L_Foot-ROT-INTERP' keyValue field, scene-graph level=10, element #289, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_L_Foot_ROT_INTERP_10_289_keyValue()
		{
			MFRotation Laetitia_L_Foot_ROT_INTERP_10_289_keyValue = new MFRotation(new double[] {0.001018,-1.0,-4.611E-5,-0.1934,6.693E-4,-1.0,-0.001987,-0.1924,5.736E-4,-1.0,8.544E-4,-0.1784,4.953E-4,-1.0,0.004287,-0.1713,2.682E-4,-1.0,0.002965,-0.1892,0.003758,-1.0,-7.921E-4,-0.3485,0.02351,-0.9997,-0.002897,-0.1159,0.05901,-0.9983,0.003094,-0.03614,0.009864,-0.9998,0.01926,-0.23,0.00341,-0.9997,0.02221,-0.2415,-5.836E-4,-1.0,0.001039,-0.5031,0.003233,-1.0,-3.947E-4,-0.1616,0.01107,-0.9999,-0.004492,-0.2322,0.03917,-0.9992,-0.004384,-0.1079,0.02302,-0.9996,0.01407,-0.1493,0.004039,-0.9995,0.0315,-0.1814,-1.649E-4,-1.0,0.005106,-0.4267,-0.003886,-1.0,0.002733,-0.1028,0.006288,-1.0,-0.004397,-0.2666,0.03388,-0.9994,-0.005619,-0.1134,0.02806,-0.9996,-9.403E-4,-0.1194,0.0115,-0.9997,0.02272,-0.1971,0.002394,-0.9998,0.01796,-0.2713,-6.75E-4,-1.0,-1.767E-4,-0.4666,0.001225,-1.0,-0.002131,-0.1593,0.008837,-0.9999,-0.004732,-0.2651,0.03668,-0.9993,-0.004286,-0.1141,0.02255,-0.9997,0.01096,-0.1549,0.004377,-0.9995,0.03082,-0.1838,-7.942E-4,-1.0,0.004987,-0.4524,0.004102,-1.0,0.00642,-0.1175,-0.1056,-0.9925,0.06156,-0.1491,-0.1521,-0.9867,0.05673,-0.3601,-0.1663,-0.9852,0.04084,-0.521,-0.1672,-0.9851,0.0393,-0.535});
			return Laetitia_L_Foot_ROT_INTERP_10_289_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_Thigh-ROT-INTERP' keyValue field, scene-graph level=8, element #343, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_Thigh_ROT_INTERP_8_343_keyValue()
		{
			MFRotation Laetitia_R_Thigh_ROT_INTERP_8_343_keyValue = new MFRotation(new double[] {-0.04695,-1.034E-4,0.9989,-3.142,-0.03837,9.993E-5,0.9993,-3.151,-0.03017,2.696E-4,0.9995,-3.163,-0.02013,3.317E-4,0.9998,-3.174,-0.007962,2.302E-4,1.0,-3.182,0.01689,-2.971E-4,0.9999,-3.183,-0.005617,4.21E-4,1.0,-3.171,0.03967,-1.507E-4,0.9992,-3.14,-0.05849,-0.001745,0.9983,-3.113,-0.2239,-0.005965,0.9746,-3.106,-0.2656,-0.003413,0.9641,-3.13,-0.1745,0.001425,0.9847,-3.168,0.01483,-2.902E-4,0.9999,-3.182,0.0985,-4.79E-4,0.9951,-3.158,0.01141,-2.844E-4,0.9999,-3.123,-0.193,-0.005196,0.9812,-3.105,-0.2066,-0.004456,0.9784,-3.118,-0.2577,-2.307E-4,0.9662,-3.152,-0.08977,0.001559,0.996,-3.18,0.03094,-2.607E-4,0.9995,-3.174,0.04772,-1.123E-4,0.9989,-3.141,-0.1122,-0.002814,0.9937,-3.111,-0.1987,-0.005383,0.98,-3.107,-0.246,-0.00314,0.9693,-3.132,-0.1982,0.001466,0.9802,-3.168,-0.005333,7.953E-5,1.0,-3.182,0.06696,-3.007E-4,0.9978,-3.16,0.008646,-3.629E-4,1.0,-3.125,-0.2002,-0.005327,0.9798,-3.105,-0.2176,-0.005273,0.976,-3.111,-0.2448,-0.00253,0.9696,-3.134,-0.1516,9.969E-4,0.9884,-3.163,-0.005937,2.447E-4,1.0,-3.184,-0.0378,9.234E-4,0.9993,-3.183,-0.04432,0.001039,0.999,-3.182});
			return Laetitia_R_Thigh_ROT_INTERP_8_343_keyValue;
		}
		/** Large attribute array: OrientationInterpolator DEF='Laetitia_R_Foot-ROT-INTERP' keyValue field, scene-graph level=10, element #345, 140 total numbers made up of 35 4-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFRotation getLaetitia_R_Foot_ROT_INTERP_10_345_keyValue()
		{
			MFRotation Laetitia_R_Foot_ROT_INTERP_10_345_keyValue = new MFRotation(new double[] {-0.001584,-1.0,0.0,-0.1254,-0.002282,-0.9999,-0.01147,-0.1185,-0.003268,-0.9994,-0.0331,-0.09001,-0.003338,-0.9976,-0.06844,-0.0658,-0.001993,-0.9976,-0.06982,-0.07988,-0.001919,-0.9991,-0.04142,-0.1412,-2.206E-4,-1.0,-0.006793,-0.4776,1.601E-4,-1.0,-0.001052,-0.481,-9.019E-4,-1.0,9.709E-4,-0.2039,-0.009073,-1.0,0.004035,-0.3047,-0.01661,-0.9999,0.001155,-0.233,-0.01436,-0.9997,-0.0197,-0.1913,-0.003071,-0.9997,-0.02624,-0.2207,9.542E-4,-1.0,-0.002218,-0.4369,4.605E-4,-1.0,-0.003201,-0.1222,-0.007044,-1.0,0.003737,-0.2946,-0.03522,-0.9994,0.004792,-0.1143,-0.04312,-0.999,-0.007662,-0.07717,-0.006575,-0.9996,-0.02724,-0.1964,-0.001012,-0.9999,-0.01042,-0.354,9.037E-5,-1.0,-0.001172,-0.3609,-0.004323,-1.0,0.003911,-0.2155,-0.02097,-0.9998,0.005773,-0.1608,-0.02061,-0.9998,0.001117,-0.1986,-0.01712,-0.9997,-0.01754,-0.1823,-0.003648,-0.9996,-0.0276,-0.2021,6.961E-4,-1.0,-0.002299,-0.4433,0.002327,-1.0,-0.001012,-0.1214,-0.006701,-1.0,0.004351,-0.2942,-0.03055,-0.9995,0.004205,-0.131,-0.08639,0.9949,0.05207,-0.03299,-0.009611,-0.9999,0.002972,-0.1634,0.001247,-1.0,0.001253,-0.1357,3.365E-4,-1.0,0.001825,-0.1483,2.657E-4,-1.0,0.002689,-0.1459});
			return Laetitia_R_Foot_ROT_INTERP_10_345_keyValue;
		}
		/** Large attribute array: IndexedFaceSet DEF='spine-FACES' coordIndex field, scene-graph level=9, element #401, 492 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getspine_FACES_9_401_coordIndex()
		{
			MFInt32 spine_FACES_9_401_coordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getspine_FACES_9_401_coordIndex_1()));
			return spine_FACES_9_401_coordIndex;
		}
		/** Large attribute array: IndexedFaceSet DEF='spine-FACES' texCoordIndex field, scene-graph level=9, element #401, 492 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getspine_FACES_9_401_texCoordIndex()
		{
			MFInt32 spine_FACES_9_401_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getspine_FACES_9_401_texCoordIndex_1()));
			return spine_FACES_9_401_texCoordIndex;
		}
		/** Large attribute array: TextureCoordinate DEF='spine-TEXCOORD' point field, scene-graph level=10, element #401, 278 total numbers made up of 139 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getspine_TEXCOORD_10_401_point()
		{
			MFVec2f spine_TEXCOORD_10_401_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getspine_TEXCOORD_10_401_point_1()))
				.append(new MFVec2f(getspine_TEXCOORD_10_401_point_2()));
			return spine_TEXCOORD_10_401_point;
		}
		/** Large attribute array: Coordinate DEF='spine-COORD' point field, scene-graph level=10, element #402, 222 total numbers made up of 74 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getspine_COORD_10_402_point()
		{
			MFVec3f spine_COORD_10_402_point = new MFVec3f(new double[] {-0.05269,13.2,-1.842,-0.5906,17.72,-15.67,-0.1489,10.08,-14.94,0.1654,16.26,-1.58,3.616,13.38,-1.26,6.16,14.15,-4.274,5.811,13.65,-8.648,6.338,15.9,-7.953,4.392,10.25,-13.92,5.202,16.5,-12.13,3.234,17.52,-14.28,4.477,15.51,-4.425,-4.558,10.25,-13.94,-3.926,13.38,-1.268,-6.036,14.14,-4.331,-6.06,13.59,-8.633,-6.487,15.75,-7.167,-6.001,16.58,-11.48,-4.125,17.2,-13.8,-4.547,15.48,-3.854,-6.819,3.504,-6.547,-7.723,5.261,3.896,-7.699,5.778,-2.93,-8.167,6.488,-0.04749,0.3071,-1.822,3.669,0.1606,9.799,1.325,0.2359,5.027,4.306,0.2491,5.654,-13.53,-0.5187,3.143,-10.14,-4.141,5.93,-17.0,-1.72,4.307,-15.42,-6.186,4.838,-14.91,-4.586,3.403,-11.86,-3.874,8.489,-16.0,4.337,9.757,1.647,4.137,1.415,4.522,7.229,10.06,-0.4813,8.149,6.617,-9.286,6.534,10.01,-8.825,4.044,5.931,-16.99,6.09,4.839,-14.89,4.293,3.33,-11.86,1.646,4.307,-15.42,0.892,3.138,-10.2,6.71,3.47,-7.397,7.622,5.811,-12.92,6.551,7.632,-14.45,3.753,8.49,-15.99,8.135,8.132,-11.83,7.132,9.24,-12.75,4.777,9.303,-15.3,8.156,5.995,-2.964,8.167,6.473,-0.01642,9.042,4.925,3.135,2.954,0.07632,-3.93,1.394,1.446,-7.541,0.3969,1.983,-5.912,-0.9221,1.378,-7.358,-2.152,0.4281,-4.963,-4.977,9.302,-15.32,-7.828,5.81,-12.94,-6.787,7.734,-15.05,-4.478,9.754,1.617,-3.412,1.507,4.269,-6.768,10.05,-0.5821,-8.465,6.616,-9.309,-6.849,10.01,-8.843,-8.455,8.131,-11.85,-7.462,9.238,-12.79,-8.545,6.472,-0.03934,-4.01,7.073,-16.98,3.898,7.073,-16.97,0.03628,4.607,-16.27,7.785,6.473,-0.0231});
			return spine_COORD_10_402_point;
		}
		/** Large attribute array: IndexedFaceSet DEF='pelvis-FACES' texCoordIndex field, scene-graph level=8, element #417, 336 total numbers.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFInt32 getpelvis_FACES_8_417_texCoordIndex()
		{
			MFInt32 pelvis_FACES_8_417_texCoordIndex = new MFInt32()/*2.finalize*/
				.append(new MFInt32(getpelvis_FACES_8_417_texCoordIndex_1()));
			return pelvis_FACES_8_417_texCoordIndex;
		}
		/** Large attribute array: TextureCoordinate DEF='pelvis-TEXCOORD' point field, scene-graph level=9, element #417, 220 total numbers made up of 110 2-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec2f getpelvis_TEXCOORD_9_417_point()
		{
			MFVec2f pelvis_TEXCOORD_9_417_point = new MFVec2f()/*2.finalize*/
				.append(new MFVec2f(getpelvis_TEXCOORD_9_417_point_1()))
				.append(new MFVec2f(getpelvis_TEXCOORD_9_417_point_2()));
			return pelvis_TEXCOORD_9_417_point;
		}
		/** Large attribute array: Coordinate DEF='pelvis-COORD' point field, scene-graph level=9, element #418, 174 total numbers made up of 58 3-tuple values.
		 * Reassemble split array as single method to improve readability and runnability.
		 * Provide large array values via separate methods, hoping to avoid 'code too large' Java compilation errors. 
		 * Individual Java methods (including aggregated initializations) are limited to 64KB.
		 * @see https://stackoverflow.com/questions/2407912/code-too-large-compilation-error-in-java
		 * @see https://stackoverflow.com/questions/11437905/java-too-many-constants-jvm-error
		 */
		private MFVec3f getpelvis_COORD_9_418_point()
		{
			MFVec3f pelvis_COORD_9_418_point = new MFVec3f(new double[] {-0.5959,17.61,-15.65,0.1654,16.26,-1.58,6.194,15.59,-7.873,4.873,16.17,-12.02,3.072,17.14,-14.18,4.477,15.51,-4.425,-6.378,15.66,-7.163,-5.744,16.34,-11.46,-4.126,17.17,-13.79,-4.547,15.48,-3.854,-0.6383,23.06,-17.73,-0.3168,27.07,-14.04,0.4694,21.7,1.054,0.4985,26.82,-4.988,0.3885,18.5,0.4731,-7.852,18.47,-9.511,-6.446,17.6,-5.002,-6.431,24.12,-14.18,-3.553,24.16,-16.13,-3.392,18.39,0.7123,-8.503,22.61,-8.657,-8.893,26.86,-3.38,0.3505,27.0,-3.263,-8.141,20.7,-3.385,-8.661,24.78,-3.442,-6.072,23.54,2.03,-5.706,21.73,1.245,-0.8289,20.68,2.908,-1.3,22.66,3.287,0.4838,23.55,0.8498,1.196,24.06,-1.422,-5.138,28.21,1.418,-3.359,30.02,0.7611,-1.191,25.51,2.531,-1.204,30.28,-2.193,0.4691,25.87,-0.259,1.829,25.41,-3.956,-0.1329,26.82,-4.909,7.314,18.32,-11.41,6.441,17.47,-6.615,5.752,23.48,-15.59,2.635,24.18,-16.92,4.137,18.32,-0.2298,8.235,23.53,-11.0,9.309,26.67,-5.658,8.392,20.53,-5.454,9.077,23.51,-5.418,7.08,23.4,0.3837,6.575,21.6,-0.2915,1.94,20.65,2.561,2.505,22.62,2.811,-0.4742,24.08,-1.213,6.566,28.09,-0.04695,4.787,29.93,-0.2583,2.389,25.47,2.083,2.321,30.24,-2.634,0.6758,25.87,-0.2849,-1.36,25.44,-3.557});
			return pelvis_COORD_9_418_point;
		}

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return LaetitiaWithDvdController model
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
        X3D thisExampleX3dModel = new LaetitiaWithDvdController().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.LaetitiaWithDvdController\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.LaetitiaWithDvdController\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

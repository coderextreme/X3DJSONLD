package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> These developmental definitions provide ExternProtoDeclare examples for supported DIS PDUs. They are developmental and not needed for regular DIS usage, since they provide template outputs for the X3dToVrml97.xsl translation stylesheet. To do: add more appinfo descriptions for fields. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.java">ExternProtoDeclareDefinitions.java</a> source, <a href="../../../DistributedInteractiveSimulation/ExternProtoDeclareDefinitionsIndex.html" target="_top">ExternProtoDeclareDefinitions catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d">ExternProtoDeclareDefinitions.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> These developmental definitions provide ExternProtoDeclare examples for supported DIS PDUs. They are developmental and not needed for regular DIS usage, since they provide template outputs for the X3dToVrml97.xsl translation stylesheet. To do: add more appinfo descriptions for fields. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 January 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 3 March 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> info </i> </td>
			<td> .wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any DIS nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> classpath </i> </td>
			<td> C:/vrtp/dis-java-vrml.jar; </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> EspduTransformPrototypes.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/EspduTransformPrototypes.x3d">EspduTransformPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/mil/navy/nps/dis/EspduTransform.java">mil/navy/nps/dis/EspduTransform.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java" target="_blank">https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d</a> </td>
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

	* @author Don Brutzman
 */

public class ExternProtoDeclareDefinitions
{
	/** Default constructor to create this object. */
	public ExternProtoDeclareDefinitions ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ExternProtoDeclareDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("These developmental definitions provide ExternProtoDeclare examples for supported DIS PDUs. They are developmental and not needed for regular DIS usage, since they provide template outputs for the X3dToVrml97.xsl translation stylesheet. To do: add more appinfo descriptions for fields."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 January 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("3 March 2020"))
    .addMeta(new meta().setName(meta.NAME_INFO       ).setContent(".wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any DIS nodes."))
    .addMeta(new meta().setName("classpath").setContent("C:/vrtp/dis-java-vrml.jar;"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("EspduTransformPrototypes.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("EspduTransformPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("mil/navy/nps/dis/EspduTransform.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ============================================================ ")
    .addChild(new WorldInfo().setTitle("ExternProtoDeclareDefinitions.x3d"))
    .addChild(new ExternProtoDeclare("EspduTransform").setName("EspduTransform").setAppinfo("EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm usually as a child so that it stays local to an entity position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.").setUrl(new String[] {"EspduTransformPrototypes.x3d#EspduTransform","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransform","EspduTransformPrototypes.wrl#EspduTransform","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransform"})
      .addComments(" experimental ")
      .addComments(" Standard Transform fields ")
      .addComments(" Entity identity ")
      .addComments(" Networking configuration parameters ")
      .addComments(" Further identification ")
      .addComments(" Collision PDU events ")
      .addComments(" Fire, Detonate PDU events ")
      .addComments(" Articulation parameters are extra blocks of information, appended one by one to end of regular Espdu. ")
      .addField(new field().setName("geoCoords_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Double precision output for 64-bit Espdu translation usable by GeoLocation nodes."))
      .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Adding a node to the children field will add that node to the EspduTransform set of children. Warning: adding any node to the EspduTransform children field that is already in that child list is illegal. Warning: adding any node to the EspduTransform children that is an ancestor of that grouping is illegal."))
      .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("The removeChildren event removes nodes from the EspduTransform children field. Any nodes in the removeChildren event that are not in the EspduTransform children list are ignored."))
      .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Children nodes within translation and rotation coordinate system of EspduTransform. Hint: XML encoding can include child node(s) directly."))
      .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Position of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes."))
      .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Orientation of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes."))
      .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Translation offset from origin of local coordinate system."))
      .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation."))
      .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation."))
      .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
      .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
      .addField(new field().setName("marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("0-to-11 character label for entity."))
      .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] EntityID: unique ID for that site."))
      .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] EntityID: application ID unique ID for application at that site."))
      .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] EntityID: unique ID for entity within that application."))
      .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("multicast address or else \"localhost\" listens to local defaultBridge"))
      .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] multicast port or else listen to local defaultBridge"))
      .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Host name of multicast relay server to provide alternative connectivity if local native multicast traffic not heard."))
      .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Connection port on multicast relay server."))
      .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)"))
      .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false"))
      .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkReader (listen to network as ghost entity) is true/false"))
      .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("seconds between read updates"))
      .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("seconds between write updates"))
      .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Indicates if the node has received a DIS message (isActive=true) or not (isActive=false). Since DIS entities can be considered inactive after some period of time (typically five seconds) either event may be received by listening nodes."))
      .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("DIS timestamp in VRML units"))
      .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether RTP header is expected to be prepended to DIS packet"))
      .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
      .addField(new field().setName("forceID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entityKind").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entityDomain").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entityCountry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("entityCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entitySubCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entitySpecific").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("entityExtra").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 255]"))
      .addField(new field().setName("linearVelocity").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("linearAcceleration").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("deadReckoning").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Dead reckoning algorithm being used to project position/orientation with velocities/accelerations."))
      .addField(new field().setName("isCollided").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("collideTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("eventApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0 65535]"))
      .addField(new field().setName("eventEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0 65535]"))
      .addField(new field().setName("eventNumber").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0 65535]"))
      .addField(new field().setName("eventSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0 65535]"))
      .addField(new field().setName("collisionType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0 255]"))
      .addField(new field().setName("fired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("fired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("firedTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("munitionStartPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("munitionEndPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("munitionApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("munitionSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("munitionEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("fireMissionIndex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("warhead").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("fuse").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("munitionQuantity").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("firingRate").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535]"))
      .addField(new field().setName("firingRange").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("isDetonated").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("detonateTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("detonationLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("detonationRelativeLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("detonationResult").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterCount").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0 78]. Indicates the number of appended parameters that are being used to describe articulation of various segments of the entity model."))
      .addField(new field().setName("articulationParameterDesignatorArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0 255]. The Parameter Type Designator entries in the articulationParameterDesignatorArray indicate if the the parameter record is for an articulated or attached part. It is represented by an 8-bit enumeration."))
      .addField(new field().setName("articulationParameterChangeIndicatorArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0 255]. The Change Indicator entries in the articulationChangeIndicatorArray indicate the change of any parameter for the associated articulated part. This is specified by an 8-bit unsigned integer. The value is initially set to zero for each exercise and is sequentially incremented by one for each change in the articulation parameters. The proper indicator is updated automatically by an X3D DIS implementation upon receipt of a set_articulationParameterValue event."))
      .addField(new field().setName("articulationParameterIdPartAttachedToArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0 65535]. The ID - Part Attached To entries in the articulationParameterIdPartAttachedToArray identify the articulated part to which this articulation parameter is attached. The value is specified by a 16-bit unsigned integer and is set to zero if the articulated part is attached directly to the entity."))
      .addField(new field().setName("articulationParameterTypeArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0 255]. The Parameter Type entries in the articulationParameterTypeArray are specified by 32-bit enumeration values."))
      .addField(new field().setName("articulationParameterArray").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The Parameter Value entries in the articulationParameterArray are specified by a 64-bit field. The definition of the 64 bits is determined based on the type of parameter indicated above."))
      .addField(new field().setName("set_articulationParameterValue0").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue1").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue2").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue3").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue4").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue5").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue6").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("set_articulationParameterValue7").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("articulationParameterValue0_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue1_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue2_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue3_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue4_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue5_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue6_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("articulationParameterValue7_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" ============================================================ ")
    .addChild(new ExternProtoDeclare("EspduTransformTrace").setName("EspduTransformTrace").setAppinfo("EspduTransform is a networked Grouping node that can contain most nodes. EspduTransform integrates functionality for the following DIS PDUs: EntityStatePdu CollisionPdu DetonatePdu FirePdu CreateEntity RemoveEntity.").setUrl(new String[] {"EspduTransformPrototypes.x3d#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransformTrace","EspduTransformPrototypes.wrl#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransformTrace"})
      .addField(new field().setName("espduTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("initialize with EspduTransform USE=\"NodeToBeTraced\""))
      .addField(new field().setName("traceColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text color"))
      .addField(new field().setName("traceOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text position relative to entity"))
      .addField(new field().setName("traceFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text scale"))
      .addField(new field().setName("traceJava").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("(not passable???) whether or not to include verbose trace comments in Java console in order to help debug network connectivity"))
      .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting has verbose output")))
    .addComments(" ============================================================ ")
    .addChild(new ExternProtoDeclare("ReceiverPdu").setName("ReceiverPdu").setUrl(new String[] {"RadioCommunicationsPrototypes.x3d#ReceiverPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#ReceiverPdu","RadioCommunicationsPrototypes.wrl#ReceiverPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#ReceiverPdu"})
      .addComments(" Initialization fields ")
      .addComments(" Generic events ")
      .addComments(" RadioCommunicationsFamily events ")
      .addComments(" ReceiverPdu fields ")
      .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("set whichGeometry to -1 for no geometry 0 for text trace 1 for default geometry"))
      .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
      .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
      .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)"))
      .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false"))
      .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkReader (listen to network as ghost entity) is true/false"))
      .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] siteID: unique ID for that site."))
      .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether RTP header is expected to be prepended to DIS packet"))
      .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
      .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("receivedPower").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("receiverState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitterSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitterApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitterEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitterRadioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" ============================================================ ")
    .addChild(new ExternProtoDeclare("SignalPdu").setName("SignalPdu").setUrl(new String[] {"RadioCommunicationsPrototypes.x3d#SignalPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#SignalPdu","RadioCommunicationsPrototypes.wrl#SignalPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#SignalPdu"})
      .addComments(" set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry ")
      .addComments(" Initialization fields ")
      .addComments(" Generic events ")
      .addComments(" RadioCommunicationsFamily events ")
      .addComments(" SignalPdu fields ")
      .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
      .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
      .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)"))
      .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false"))
      .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkReader (listen to network as ghost entity) is true/false"))
      .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] siteID: unique ID for that site."))
      .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether RTP header is expected to be prepended to DIS packet"))
      .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
      .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("encodingScheme").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("tdlType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("sampleRate").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("samples").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("dataLength").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data00").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data01").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data02").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data03").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data04").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data05").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data06").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data07").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data08").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data09").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("data10").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" ============================================================ ")
    .addChild(new ExternProtoDeclare("TransmitterPdu").setName("TransmitterPdu").setUrl(new String[] {"RadioCommunicationsPrototypes.x3d#TransmitterPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#TransmitterPdu","RadioCommunicationsPrototypes.wrl#TransmitterPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#TransmitterPdu"})
      .addComments(" set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry ")
      .addComments(" Initialization fields ")
      .addComments(" Generic events ")
      .addComments(" RadioCommunicationsFamily events ")
      .addComments(" TransmitterPdu fields ")
      .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
      .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
      .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
      .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)"))
      .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
      .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false"))
      .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode networkReader (listen to network as ghost entity) is true/false"))
      .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[0 65535] siteID: unique ID for that site."))
      .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("whether RTP header is expected to be prepended to DIS packet"))
      .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
      .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
      .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("antennaLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("antennaPatternLength").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("antennaPatternType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("cryptoKeyID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("cryptoSytem").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("frequency").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("inputSource").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("lengthOfModulationParameters").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("modulationTypeDetail").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("modulationTypeMajor").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("modulationTypeSpreadSpectrum").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("modulationTypeSystem").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("power").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeCountry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeDomain").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeKind").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeNomenclature").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("radioEntityTypeNomenclatureVersion").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("relativeAntennaLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitFrequencyBandwidth").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
      .addField(new field().setName("transmitState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addComments(" ============================================================ ")
    .addComments(" Redirection text in case a user examines this PROTO file via a 3D browser: ")
    .addChild(new Viewpoint().setDescription("ExternProtoDeclare Definitions").setPosition(0.0,0.0,8.0))
    .addChild(new Anchor().setDescription("EspduTransform Example").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"EspduTransformExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.x3d","EspduTransformExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,1.0,1.0).setEmissiveColor(0.0,1.0,1.0)))
        .setGeometry(new Text().setString(new String[] {"ExternProtoDeclareDefinitions.x3d","is a Prototype (PROTO) definition file.","","To see an example scene using this node,","click the text and view","EspduTransformExample"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.5))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ExternProtoDeclareDefinitions model
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
        X3D thisExampleX3dModel = new ExternProtoDeclareDefinitions().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ExternProtoDeclareDefinitions\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ExternProtoDeclareDefinitions\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

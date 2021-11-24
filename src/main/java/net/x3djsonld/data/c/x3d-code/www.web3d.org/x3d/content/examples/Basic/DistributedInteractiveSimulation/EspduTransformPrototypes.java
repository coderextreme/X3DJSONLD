package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState, Collision, Detonate, Fire, CreateEntity and RemoveEntity. Also contains EspduTransformTrace which compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/EspduTransformPrototypes.java">EspduTransformPrototypes.java</a> source, <a href="../../../DistributedInteractiveSimulation/EspduTransformPrototypesIndex.html" target="_top">EspduTransformPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/EspduTransformPrototypes.x3d">EspduTransformPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState, Collision, Detonate, Fire, CreateEntity and RemoveEntity. Also contains EspduTransformTrace which compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Don McGregor, and Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 7 December 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development but mostly complete. need articulationParameters and miscellany fields connected. ROUTE firstFired1/2 to sound node? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> /vrtp/mil/navy/nps/dis/EspduTransformPROTO.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation//vrtp/mil/navy/nps/dis/EspduTransform.java">/vrtp/mil/navy/nps/dis/EspduTransform.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java" target="_blank">https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> DIS Find-It-Fast Guide at Simulation Interoperability Standards Organization (SISO) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> available via <a href="http://discussions.sisostds.org/default.asp?action=9&amp;boardid=2&amp;read=40321&amp;fid=32" target="_blank">http://discussions.sisostds.org/default.asp?action=9&amp;boardid=2&amp;read=40321&amp;fid=32</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d</a> </td>
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

	* @author Don Brutzman, Don McGregor, and Duane Davis
 */

public class EspduTransformPrototypes
{
	/** Default constructor to create this object. */
	public EspduTransformPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EspduTransformPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState, Collision, Detonate, Fire, CreateEntity and RemoveEntity. Also contains EspduTransformTrace which compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Don McGregor, and Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("7 December 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development but mostly complete. need articulationParameters and miscellany fields connected. ROUTE firstFired1/2 to sound node?"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("/vrtp/mil/navy/nps/dis/EspduTransformPROTO.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("/vrtp/mil/navy/nps/dis/EspduTransform.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("DIS Find-It-Fast Guide at Simulation Interoperability Standards Organization (SISO)"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("available via http://discussions.sisostds.org/default.asp?action=9&boardid=2&read=40321&fid=32"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ============================================================ ")
    .addComments(" Why a prototype rather than an Inline file? Prototyping allows replacement of standard VRML nodes (e.g. Transform) and can also expose events and fields to the encapsulating top-level scene. ")
    .addComments(" ============================================================ ")
    .addChild(new ProtoDeclare("EspduTransform").setName("EspduTransform").setAppinfo("EspduTransform is a networked Grouping node that can contain most nodes. Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState Collision Detonate Fire CreateEntity and RemoveEntity.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("geoCoords_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Double precision output for 64-bit Espdu translation usable by georeferenced nodes."))
        .addComments(" Standard Transform fields ")
        .addField(new field().setName("addChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Adding a node to the children field will add that node to the EspduTransform's set of children. Warning: adding any node to the EspduTransform's children field that is already in that child list is illegal. Warning: adding any node to the EspduTransform's children that is an ancestor of that grouping is illegal."))
        .addField(new field().setName("removeChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("The removeChildren event removes nodes from the EspduTransform's children field. Any nodes in the removeChildren event that are not in the EspduTransform's children list are ignored."))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Children nodes within translation and rotation coordinate system of EspduTransform. Hint: XML encoding can include child node(s) directly.")
          .addComments(" default initialization is NULL node array "))
        .addField(new field().setName("translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Position of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes."))
        .addField(new field().setName("rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)).setAppinfo("Orientation of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes."))
        .addField(new field().setName("center").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Translation offset from origin of local coordinate system."))
        .addField(new field().setName("scale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(1.0,1.0,1.0)).setAppinfo("Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation."))
        .addField(new field().setName("scaleOrientation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFRotation(0.0,0.0,1.0,0.0)).setAppinfo("Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation."))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addComments(" Entity identity ")
        .addField(new field().setName("marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("0-to-11 character label for entity."))
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535] EntityID: unique ID for that site."))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("[065535] EntityID: application ID unique ID for application at that site."))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535] EntityID: unique ID for entity within that application."))
        .addComments(" Networking configuration parameters ")
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("localhost").setAppinfo("multicast address or else \"localhost\" listens to local defaultBridge"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535] multicast port or else listen to local defaultBridge"))
        .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Host name of multicast relay server to provide alternative connectivity if local native multicast traffic not heard."))
        .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("Connection port on multicast relay server."))
        .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("standAlone").setAppinfo("networkMode: standAlone (ignore network but still respond to local events), networkReader (listen to network as ghost entity), networkWriter (output to network as master entity at writeInterval)"))
        .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
        .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false"))
        .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false"))
        .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0.1).setAppinfo("seconds between read updates"))
        .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1.0).setAppinfo("seconds between write updates"))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Indicates if the node has received a DIS message (isActive=true) or not (isActive=false). Since DIS entities can be considered inactive after some period of time (typically five seconds) either event may be received by listening nodes."))
        .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("DIS timestamp in VRML units"))
        .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("whether RTP header is expected to be prepended to DIS packet"))
        .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
        .addComments(" Further identification ")
        .addField(new field().setName("forceID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entityKind").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entityDomain").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entityCountry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("entityCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entitySubCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entitySpecific").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("entityExtra").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("linearVelocity").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("linearAcceleration").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("deadReckoning").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("Dead reckoning algorithm being used to project position/orientation with velocities/accelerations."))
        .addComments(" Collision PDU events ")
        .addField(new field().setName("isCollided").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("collideTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("eventApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[065535]"))
        .addField(new field().setName("eventSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[065535]"))
        .addField(new field().setName("eventEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[065535]"))
        .addField(new field().setName("collisionType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[0255]"))
        .addField(new field().setName("eventNumber").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[065535]"))
        .addComments(" Fire, Detonate PDU events ")
        .addField(new field().setName("fired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false))
        .addField(new field().setName("fired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(false))
        .addField(new field().setName("firedTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("munitionStartPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("munitionEndPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
        .addField(new field().setName("munitionApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("munitionSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("munitionEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("fireMissionIndex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("warhead").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("fuse").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("munitionQuantity").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("[065535]"))
        .addField(new field().setName("firingRate").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("[065535]"))
        .addField(new field().setName("firingRange").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("isDetonated").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("detonateTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("detonationLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("detonationRelativeLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("detonationResult").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" Articulation parameters are extra blocks of information, appended one by one to end of regular Espdu. ")
        .addField(new field().setName("articulationParameterCount").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("range [078]. Indicates the number of appended parameters that are being used to describe articulation of various segments of the entity model."))
        .addField(new field().setName("articulationParameterDesignatorArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0255]. The Parameter Type Designator entries in the articulationParameterDesignatorArray indicate if the the parameter record is for an articulated or attached part. It is represented by an 8-bit enumeration.")
          .addComments(" default initialization is NULL node array "))
        .addField(new field().setName("articulationParameterChangeIndicatorArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0255]. The Change Indicator entries in the articulationChangeIndicatorArray indicate the change of any parameter for the associated articulated part. This is specified by an 8-bit unsigned integer. The value is initially set to zero for each exercise and is sequentially incremented by one for each change in the articulation parameters. The proper indicator is updated automatically by an X3D DIS implementation upon receipt of a set_articulationParameterValue event.")
          .addComments(" default initialization is NULL node array "))
        .addField(new field().setName("articulationParameterIdPartAttachedToArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [065535]. The ID - Part Attached To entries in the articulationParameterIdPartAttachedToArray identify the articulated part to which this articulation parameter is attached. The value is specified by a 16-bit unsigned integer and is set to zero if the articulated part is attached directly to the entity.")
          .addComments(" default initialization is NULL node array "))
        .addField(new field().setName("articulationParameterTypeArray").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("range [0255]. The Parameter Type entries in the articulationParameterTypeArray are specified by 32-bit enumeration values.")
          .addComments(" default initialization is NULL node array "))
        .addField(new field().setName("articulationParameterArray").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("The Parameter Value entries in the articulationParameterArray are specified by a 64-bit field. The definition of the 64 bits is determined based on the type of parameter indicated above.")
          .addComments(" default initialization is NULL node array "))
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
      .setProtoBody(new ProtoBody()
        .addComments(" First node inside a PrototypeDeclaration is the node type of the ProtoInstance ")
        .addChild(new Transform("DisTransformNode")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("addChildren").setProtoField("addChildren"))
            .addConnect(new connect().setNodeField("removeChildren").setProtoField("removeChildren"))
            .addConnect(new connect().setNodeField("children").setProtoField("children"))
            .addConnect(new connect().setNodeField("translation").setProtoField("translation"))
            .addConnect(new connect().setNodeField("rotation").setProtoField("rotation"))
            .addConnect(new connect().setNodeField("center").setProtoField("center"))
            .addConnect(new connect().setNodeField("scale").setProtoField("scale"))
            .addConnect(new connect().setNodeField("scaleOrientation").setProtoField("scaleOrientation"))
            .addConnect(new connect().setNodeField("bboxCenter").setProtoField("bboxCenter"))
            .addConnect(new connect().setNodeField("bboxSize").setProtoField("bboxSize"))))
        .addChild(new Group("CacheExposedFieldNodes")
          .addComments(" This first set of nodes are not rendered and only hold exposedField state. This hack is necessary to work around the restriction on exposedFields directly in Script nodes. ")
          .addChild(new Anchor("MarkingState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("marking"))))
          .addChild(new Switch("SiteIdState").setWhichChoice(-1)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("whichChoice").setProtoField("siteID"))))
          .addChild(new Switch("ApplicationIdState").setWhichChoice(-1)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("whichChoice").setProtoField("applicationID"))))
          .addChild(new Switch("EntityIdState").setWhichChoice(-1)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("whichChoice").setProtoField("entityID"))))
          .addChild(new Anchor("NetworkModeState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("networkMode"))))
          .addChild(new NavigationInfo("ReaderState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("headlight").setProtoField("isRemote"))))
          .addChild(new NavigationInfo("MasterState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("headlight").setProtoField("isMaster"))))
          .addChild(new NavigationInfo("LocalState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("headlight").setProtoField("isStandAlone"))))
          .addChild(new TimeSensor("ReadWriteIntervalState")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("startTime").setProtoField("readInterval"))
              .addConnect(new connect().setNodeField("stopTime").setProtoField("writeInterval"))))
          .addChild(new Transform("MunitionPointNode")
            .setIS(new IS()
              .addConnect(new connect().setNodeField("translation").setProtoField("munitionStartPoint"))
              .addConnect(new connect().setNodeField("center").setProtoField("munitionEndPoint"))))
          .addChild(new Switch().setWhichChoice(-1)
            .addChild(new Anchor("AddressHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("address"))))
            .addChild(new Anchor("MulticastAddressHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("description").setProtoField("multicastRelayHost"))))
            .addChild(new Switch("PortHolder").setWhichChoice(-1)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("port"))))
            .addChild(new Switch("MulticastPortHolder").setWhichChoice(-1)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("multicastRelayPort"))))
            .addChild(new Switch("ArticulationParameterCountHolder").setWhichChoice(-1)
              .setIS(new IS()
                .addConnect(new connect().setNodeField("whichChoice").setProtoField("articulationParameterCount"))))
            .addChild(new ScalarInterpolator("ArticulationParameterArrayHolder")
              .setIS(new IS()
                .addConnect(new connect().setNodeField("keyValue").setProtoField("articulationParameterArray"))))))
        .addComments(" Nonrendering Script that connects network communications to interfaces ")
        .addChild(new Group("NetworkingScriptAndReadWriteClocks")
          .addComments(" Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct ")
          .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
          .addChild(new Script("EspduScriptNode").setDirectOutput(true).setMustEvaluate(true).setUrl(new String[] {"EspduTransform.class","/vrtp/mil/navy/nps/dis/EspduTransform.class","dis-java-vrml.jar#EspduTransform.class","/vrtp/dis-java-vrml.jar#EspduTransform.class","file:///c:/vrtp/mil/navy/nps/dis/EspduTransform.class","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransform.class"})
            .addComments(" Generic events ")
            .addField(new field().setName("geoCoords_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Double precision outputs for 64-bit Espdu translation."))
            .addField(new field().setName("traceJava").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .addField(new field().setName("update").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Used by TimeSensor clocks to trigger processEvents() method."))
            .addField(new field().setName("transformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Transform().setUSE("DisTransformNode")))
            .addField(new field().setName("markingNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("MarkingState")))
            .addComments(" Initialization fields ")
            .addField(new field().setName("siteIdNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("SiteIdState").setWhichChoice(-1)))
            .addField(new field().setName("applicationIdNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("ApplicationIdState").setWhichChoice(-1)))
            .addField(new field().setName("entityIdNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("EntityIdState").setWhichChoice(-1)))
            .addField(new field().setName("addressNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("AddressHolder")))
            .addField(new field().setName("multicastAddressNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("MulticastAddressHolder")))
            .addField(new field().setName("portNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("PortHolder").setWhichChoice(-1)))
            .addField(new field().setName("multicastPortNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("MulticastPortHolder").setWhichChoice(-1)))
            .addField(new field().setName("networkModeNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Anchor().setUSE("NetworkModeState")))
            .addField(new field().setName("readWriteIntervalNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new TimeSensor().setUSE("ReadWriteIntervalState")))
            .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("isCollided").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("collideTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("isDetonated").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("detonateTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("firedTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("munitionPointNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Transform().setUSE("MunitionPointNode")))
            .addField(new field().setName("articulationParameterCountNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("ArticulationParameterCountHolder").setWhichChoice(-1)))
            .addField(new field().setName("articulationParameterArrayNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new ScalarInterpolator().setUSE("ArticulationParameterArrayHolder")))
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
            .addField(new field().setName("articulationParameterValue7_changed").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("geoCoords_changed").setProtoField("geoCoords_changed"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
              .addConnect(new connect().setNodeField("timestamp").setProtoField("timestamp"))
              .addConnect(new connect().setNodeField("rtpHeaderExpected").setProtoField("rtpHeaderExpected"))
              .addConnect(new connect().setNodeField("isRtpHeaderHeard").setProtoField("isRtpHeaderHeard"))
              .addConnect(new connect().setNodeField("isCollided").setProtoField("isCollided"))
              .addConnect(new connect().setNodeField("collideTime").setProtoField("collideTime"))
              .addConnect(new connect().setNodeField("isDetonated").setProtoField("isDetonated"))
              .addConnect(new connect().setNodeField("detonateTime").setProtoField("detonateTime"))
              .addConnect(new connect().setNodeField("firedTime").setProtoField("firedTime"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue0").setProtoField("set_articulationParameterValue0"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue1").setProtoField("set_articulationParameterValue1"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue2").setProtoField("set_articulationParameterValue2"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue3").setProtoField("set_articulationParameterValue3"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue4").setProtoField("set_articulationParameterValue4"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue5").setProtoField("set_articulationParameterValue5"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue6").setProtoField("set_articulationParameterValue6"))
              .addConnect(new connect().setNodeField("set_articulationParameterValue7").setProtoField("set_articulationParameterValue7"))
              .addConnect(new connect().setNodeField("articulationParameterValue0_changed").setProtoField("articulationParameterValue0_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue1_changed").setProtoField("articulationParameterValue1_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue2_changed").setProtoField("articulationParameterValue2_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue3_changed").setProtoField("articulationParameterValue3_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue4_changed").setProtoField("articulationParameterValue4_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue5_changed").setProtoField("articulationParameterValue5_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue6_changed").setProtoField("articulationParameterValue6_changed"))
              .addConnect(new connect().setNodeField("articulationParameterValue7_changed").setProtoField("articulationParameterValue7_changed"))))
          .addComments(" Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). ")
          .addChild(new TimeSensor("ReadIntervalClock").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("readInterval"))))
          .addChild(new TimeSensor("WriteIntervalClock").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("writeInterval"))))
          .addChild(new ROUTE().setFromNode("ReadIntervalClock").setFromField("cycleTime").setToNode("EspduScriptNode").setToField("update"))
          .addChild(new ROUTE().setFromNode("WriteIntervalClock").setFromField("cycleTime").setToNode("EspduScriptNode").setToField("update")))))
    .addComments(" ============================================================ ")
    .addChild(new ProtoDeclare("EspduTransformTrace").setName("EspduTransformTrace").setAppinfo("EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm usually as a child so that it stays local to an entity's position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.")
      .setProtoInterface(new ProtoInterface()
        .addComments(" Special trace fields (beyond regular EspduTransform signature) ")
        .addField(new field().setName("espduTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("initialize with <EspduTransform USE=\"NodeToBeTraced\"/> so that networked data is passed by reference")
          .addComments(" provide <EspduTransform USE=\"nodeName\"/> i.e. copy-by=reference node to initialize "))
        .addField(new field().setName("traceColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(1.0,0.4,0.05)).setAppinfo("Trace text color"))
        .addField(new field().setName("traceOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,2.5,0.0)).setAppinfo("Trace text position relative to entity"))
        .addField(new field().setName("traceFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.8).setAppinfo("Trace text scale"))
        .addField(new field().setName("traceJava").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("whether or not to include verbose trace comments in Java console in order to help debug network connectivity"))
        .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("Whether EspduTransformTrace debug scripting is visible inside the X3D scene")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Group("PrimaryControlScripts")
            .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
            .addComments(" OverriddenDefaultEspduTransformNode ")
            .addChild(new Script("TraceScript").setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	tracePrint('TraceScript initialize() start...');" + "\n" + 
"	tracePrint('traceColor=' + traceColor);" + "\n" + 
"	tracePrint('traceOffset=' + traceOffset);" + "\n" + 
"	tracePrint('traceFontSize=' + traceFontSize);" + "\n" + 
"	tracePrint('traceJava=' + traceJava);" + "\n" + 
"	tracePrint('marking=' + espduTransformNode.marking);" + "\n" + 
"	tracePrint('address=' + espduTransformNode.address);" + "\n" + 
"	tracePrint('   port=' + espduTransformNode.port);" + "\n" + 
"	tracePrint('networkMode=' + espduTransformNode.networkMode);" + "\n" + 
"\n" + 
"	if (espduTransformNode.networkMode == 'networkReader')" + "\n" + 
"	{" + "\n" + 
"		readInterval  = espduTransformNode.readInterval;" + "\n" + 
"		writeInterval = 0;" + "\n" + 
"	}" + "\n" + 
"	if (espduTransformNode.networkMode == 'networkWriter')" + "\n" + 
"	{" + "\n" + 
"		readInterval  = 0;" + "\n" + 
"		writeInterval = espduTransformNode.writeInterval;" + "\n" + 
"	}" + "\n" + 
"	tracePrint('readInterval='  + espduTransformNode.readInterval);" + "\n" + 
"	tracePrint('writeInterval=' + espduTransformNode.writeInterval);" + "\n" + 
"\n" + 
"	prior_marking       = espduTransformNode.marking;" + "\n" + 
"	prior_readInterval  = espduTransformNode.readInterval;" + "\n" + 
"	prior_writeInterval = espduTransformNode.writeInterval;" + "\n" + 
"	prior_translation   = espduTransformNode.translation;" + "\n" + 
"	prior_geoCoords_changed = espduTransformNode.geoCoords_changed;" + "\n" + 
"\n" + 
"	prior_fired1  = espduTransformNode.fired1;" + "\n" + 
"	prior_fired2  = espduTransformNode.fired2;" + "\n" + 
"\n" + 
"	outputString1 = espduTransformNode.marking + '  (' +" + "\n" + 
"			espduTransformNode.siteID + ', ' +" + "\n" + 
"			espduTransformNode.applicationID + ', ' +" + "\n" + 
"			espduTransformNode.entityID + ')';" + "\n" + 
"\n" + 
"	outputString2 = 'awaiting PDUs...';" + "\n" + 
"\n" + 
"	traceString = new MFString (outputString1, outputString2);" + "\n" + 
"	tracePrint ('traceString=' + traceString);" + "\n" + 
"//	if (offsetFollowsEspduTransform)" + "\n" + 
"//	{" + "\n" + 
"//		// create ROUTEs to connect parent EspduTransform" + "\n" + 
"//	}" + "\n" + 
"	tracePrint('TraceScript initialize() finish.');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function touched (isActiveValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	tracePrint ('touched=' + isActiveValue + ', no action');" + "\n" + 
"}" + "\n" + 
"\n" + 
"function update (value, timestamp)" + "\n" + 
"{" + "\n" + 
"//	tracePrint('begin update() ...');" + "\n" + 
"	changed = false;  // only send output events when changed" + "\n" + 
"	if (prior_marking != espduTransformNode.marking)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed marking');" + "\n" + 
"		marking        = espduTransformNode.marking;" + "\n" + 
"		prior_marking  = marking;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"	if (prior_readInterval != espduTransformNode.readInterval)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed readInterval');" + "\n" + 
"		readInterval        = espduTransformNode.readInterval;" + "\n" + 
"		prior_readInterval  = espduTransformNode.readInterval;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"	if (prior_writeInterval != espduTransformNode.writeInterval)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed writeInterval');" + "\n" + 
"		writeInterval        = espduTransformNode.writeInterval;" + "\n" + 
"		prior_writeInterval  = espduTransformNode.writeInterval;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"	if (	(prior_translation.x != espduTransformNode.translation.x) ||" + "\n" + 
"		(prior_translation.y != espduTransformNode.translation.y) ||" + "\n" + 
"		(prior_translation.z != espduTransformNode.translation.z))" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed translation');" + "\n" + 
"		prior_translation = espduTransformNode.translation;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"	if (prior_geoCoords_changed != espduTransformNode.geoCoords_changed)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed geoCoords_changed');" + "\n" + 
"		prior_geoCoords_changed = espduTransformNode.geoCoords_changed;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"//	tracePrint('espduTransformNode.translation=' + espduTransformNode.translation);" + "\n" + 
"//	tracePrint('prior_translation=' + prior_translation);" + "\n" + 
"//	tracePrint('prior_geoCoords_changed=' + prior_geoCoords_changed);" + "\n" + 
"	if (prior_fired1 != espduTransformNode.fired1)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed fired1');" + "\n" + 
"		fired1        = espduTransformNode.fired1;" + "\n" + 
"		fireTime      = timestamp;" + "\n" + 
"		prior_fired1  = espduTransformNode.fired1;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"	if (prior_fired2 != espduTransformNode.fired2)" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed fired2');" + "\n" + 
"		fired2        = espduTransformNode.fired2;" + "\n" + 
"		fireTime      = timestamp;" + "\n" + 
"		prior_fired2  = espduTransformNode.fired2;" + "\n" + 
"		changed = true;" + "\n" + 
"	}" + "\n" + 
"\n" + 
"	if (changed == true) // produce, then send trace text" + "\n" + 
"	{" + "\n" + 
"		tracePrint('update() changed == true');" + "\n" + 
"		outputString1 = espduTransformNode.marking + '  (' +" + "\n" + 
"			espduTransformNode.siteID + ', ' +" + "\n" + 
"			espduTransformNode.applicationID + ', ' +" + "\n" + 
"			espduTransformNode.entityID + ')';" + "\n" + 
"\n" + 
"		outputString2 = prior_geoCoords_changed;" + "\n" + 
"\n" + 
"		traceString = new MFString (outputString1, outputString2);" + "\n" + 
"	}" + "\n" + 
"	tracePrint('end update()   changed=' + changed);" + "\n" + 
"}" + "\n" + 
"function roundoff (x)" + "\n" + 
"{" + "\n" + 
"	return Math.round(x * 10) / 10;" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[EspduTransformTrace ' + espduTransformNode.marking + '] ' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[EspduTransformTrace ' + espduTransformNode.marking + '] ' + outputString);" + "\n" + 
"}" + "\n")
              .addField(new field().setName("espduTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("initialize with <EspduTransform USE=\"NodeToBeTraced\"/>"))
              .addField(new field().setName("traceColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text color"))
              .addField(new field().setName("traceOffset").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text position relative to entity"))
              .addField(new field().setName("traceFontSize").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Trace text scale"))
              .addField(new field().setName("traceJava").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("(not passable???) whether or not to include verbose trace comments in Java console in order to help debug network connectivity"))
              .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting has verbose output"))
              .addField(new field().setName("touched").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("update").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Used by TimeSensor clocks to trigger processEvents() method."))
              .addComments(" Changed-value outputs ")
              .addField(new field().setName("marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("fired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("fired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("fireTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("traceString").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addComments(" other internal state variables ")
              .addField(new field().setName("prior_marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setName("prior_readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(-1))
              .addField(new field().setName("prior_writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(-1))
              .addField(new field().setName("prior_fired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
              .addField(new field().setName("prior_fired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
              .addField(new field().setName("prior_translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)))
              .addField(new field().setName("prior_geoCoords_changed").setType(field.TYPE_SFVEC3D).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3d(0.0,0.0,0.0)))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("espduTransformNode").setProtoField("espduTransformNode"))
                .addConnect(new connect().setNodeField("traceColor").setProtoField("traceColor"))
                .addConnect(new connect().setNodeField("traceOffset").setProtoField("traceOffset"))
                .addConnect(new connect().setNodeField("traceFontSize").setProtoField("traceFontSize"))
                .addConnect(new connect().setNodeField("traceJava").setProtoField("traceJava"))
                .addConnect(new connect().setNodeField("localTraceEnabled").setProtoField("localTraceEnabled"))))
            .addComments(" Clocks stimulate the processEvents() method ")
            .addChild(new TimeSensor("ReadIntervalTraceClock").setLoop(true))
            .addChild(new ROUTE().setFromNode("TraceScript").setFromField("readInterval").setToNode("ReadIntervalTraceClock").setToField("cycleInterval"))
            .addChild(new ROUTE().setFromNode("ReadIntervalTraceClock").setFromField("cycleTime").setToNode("TraceScript").setToField("update"))
            .addChild(new TimeSensor("WriteIntervalTraceClock").setLoop(true))
            .addChild(new ROUTE().setFromNode("TraceScript").setFromField("writeInterval").setToNode("WriteIntervalTraceClock").setToField("cycleInterval"))
            .addChild(new ROUTE().setFromNode("WriteIntervalTraceClock").setFromField("cycleTime").setToNode("TraceScript").setToField("update"))
            .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
            .addChild(new Script("DEBUG_JAVASCRIPT").setDirectOutput(true).setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ( )" + "\n" + 
"{" + "\n" + 
"	tracePrint ('DEBUG_JAVASCRIPT initialize() start...');" + "\n" + 
"	translation_text[0]     = espduTransformNode.marking + '  awaiting DIS';" + "\n" + 
"//	rotation_text   [0]     = 'translation and rotation updates';" + "\n" + 
"//	marking_address_text[0] = 'multicast group: ' + address +'/' + port + ', ID:'//		+ siteID + ',' + applicationID + ',' + entityID;" + "\n" + 
"	MFmarking[0] = espduTransformNode.marking;" + "\n" + 
"	tracePrint ('DEBUG_JAVASCRIPT initialize() finish.');" + "\n" + 
"}" + "\n" + 
"function set_translation ( translation, ts )" + "\n" + 
"{" + "\n" + 
"	if (active) {" + "\n" + 
"		// round to nearest tenth" + "\n" + 
"		translation.x = Math.round (translation.x * 10.0) / 10.0;" + "\n" + 
"		translation.y = Math.round (translation.y * 10.0) / 10.0;" + "\n" + 
"		translation.z = Math.round (translation.z * 10.0) / 10.0;" + "\n" + 
"		translation_text[0] = marking + '  translation ' + translation;" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_rotation    ( rotation, ts )" + "\n" + 
"{" + "\n" + 
"	if (active) {" + "\n" + 
"		// round terms to nearest thousandth" + "\n" + 
"		rotation.x     = Math.round (rotation.x     * 1000.0) / 1000.0;" + "\n" + 
"		rotation.y     = Math.round (rotation.y     * 1000.0) / 1000.0;" + "\n" + 
"		rotation.z     = Math.round (rotation.z     * 1000.0) / 1000.0;" + "\n" + 
"		rotation.angle = (rotation.angle * 180.0) / 3.141592653;" + "\n" + 
"		rotation.angle = Math.round (rotation.angle * 10.0) / 10.0;" + "\n" + 
"//		rotation_text   [0] = 'rotation ' + rotation + ' axis/degrees';" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function touch (value, time)" + "\n" + 
"{" + "\n" + 
"	active = !active;" + "\n" + 
"	result =  active;" + "\n" + 
"	if (result) {" + "\n" + 
"		translation_text[0]     = marking + '  awaiting DIS';" + "\n" + 
"//		rotation_text   [0]     = 'translation and rotation updates';" + "\n" + 
"//		marking_address_text[0] = 'multicast group: ' + address +'/' + port + ', ID:'//			+ siteID + ',' + applicationID + ',' + entityID;" + "\n" + 
"		MFmarking[0] = marking;" + "\n" + 
"	} else {" + "\n" + 
"		translation_text[0] = '';" + "\n" + 
"		rotation_text   [0] = '';" + "\n" + 
"		marking_address_text[0] = '';" + "\n" + 
"		MFmarking[0] = '';" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function timestamp    ( value, ts ) {" + "\n" + 
"	tracePrint ('DIS timestamp=' + value + ', event timestamp=' + ts);" + "\n" + 
"}" + "\n" + 
"function collided    ( value, ts ) {" + "\n" + 
"	tracePrint ('collided=' + value);" + "\n" + 
"}" + "\n" + 
"function detonated    ( value, ts ) {" + "\n" + 
"	tracePrint ('detonated=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterCount    ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterCount=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue0   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue0=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue1   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue1=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue2   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue2=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue3   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue3=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue4   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue4=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue5   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue5=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue6   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue6=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue7   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue7=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue8   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue8=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue9   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue9=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue10   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue10=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue11   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue11=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue12   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue12=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue13   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue13=' + value);" + "\n" + 
"}" + "\n" + 
"function articulationParameterValue14   ( value, ts ) {" + "\n" + 
"	tracePrint ('articulationParameterValue14=' + value);" + "\n" + 
"}" + "\n" + 
"function munitionStartPoint   ( value, ts ) {" + "\n" + 
"	tracePrint ('munitionStartPoint=' + value);" + "\n" + 
"}" + "\n" + 
"function munitionEndPoint   ( value, ts ) {" + "\n" + 
"	tracePrint ('munitionEndPoint=' + value);" + "\n" + 
"}" + "\n" + 
"function rtpHeaderHeard   ( value, ts ) {" + "\n" + 
"	tracePrint ('unexpected RTP header status, rtpHeaderHeard=' + value);" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[EspduTransformTrace ' + espduTransformNode.marking + '] ' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[EspduTransformTrace ' + espduTransformNode.marking + '] ' + outputString);" + "\n" + 
"}" + "\n")
              .addField(new field().setName("espduTransformNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("initialize with <EspduTransform USE=\"NodeToBeTraced\"/>"))
              .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting has verbose output"))
              .addField(new field().setName("articulationParameterCount").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("MFmarking").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("set_rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("set_translation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("detonated").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("marking_address_text").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("result").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
              .addField(new field().setName("translation_text").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
              .addField(new field().setName("collided").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("rtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("rotation_text").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
              .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
              .addField(new field().setName("touch").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("marking").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
              .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("espduTransformNode").setProtoField("espduTransformNode"))
                .addConnect(new connect().setNodeField("localTraceEnabled").setProtoField("localTraceEnabled")))))
          .addChild(new Group("TouchToActivateGroup")
            .addChild(new TouchSensor("ActivationTouchSensor").setDescription("Touch trace text to toggle simple or verbose"))
            .addChild(new ROUTE().setFromNode("ActivationTouchSensor").setFromField("isActive").setToNode("TraceScript").setToField("touched"))
            .addChild(new LOD().setRange(new double[] {300.0,3000.0,40000.0})
              .addChild(new Transform()
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("translation").setProtoField("traceOffset")))
                .addChild(new Billboard()
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material("TextColor").setDiffuseColor(0.0,0.0,0.0)
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("emissiveColor").setProtoField("traceColor")))))
                    .setGeometry(new Text("TraceText")
                      .setFontStyle(new FontStyle("TraceFont").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)
                        .setIS(new IS()
                          .addConnect(new connect().setNodeField("size").setProtoField("traceFontSize"))))))
                  .addChild(new ROUTE().setFromNode("TraceScript").setFromField("traceString").setToNode("TraceText").setToField("string"))
                  .addChild(new Transform().setTranslation(0.0,-0.25,0.0)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("TextColor")))
                      .setGeometry(new Text("DEBUG_ROTATION")
                        .setFontStyle(new FontStyle().setUSE("TraceFont")))))
                  .addChild(new Transform().setTranslation(0.0,-0.5,0.0)
                    .addChild(new Shape()
                      .setAppearance(new Appearance()
                        .setMaterial(new Material().setUSE("TextColor")))
                      .setGeometry(new Text("DEBUG_MARKING_ADDRESS")
                        .setFontStyle(new FontStyle().setUSE("TraceFont")))))))
              .addChild(new WorldInfo())
              .addChild(new Billboard().setAxisOfRotation(0.0,0.0,0.0)
                .addChild(new Transform().setTranslation(0.0,800.0,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("TextColor")))
                    .setGeometry(new Text("LONG_RANGE_MARKING")
                      .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(125.0).setCssStyle("BOLD")))))
                .addChild(new Transform().setTranslation(0.0,40.0,0.0)
                  .addChild(new Shape()
                    .setAppearance(new Appearance()
                      .setMaterial(new Material().setUSE("TextColor")))
                    .setGeometry(new Box().setSize(50.0,50.0,50.0)))))
              .addChild(new WorldInfo())))
          .addChild(new Group("LineOfFireGroup")
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(0.3,0.15,0.15)))
              .setGeometry(new IndexedLineSet().setColorIndex(new int[] {0,1,-1}).setCoordIndex(new int[] {0,1,-1})
                .setColor(new Color().setColor(new MFColor(new double[] {0.0,1.0,0.0,1.0,0.0,0.0})))
                .setCoord(new Coordinate("LineOfFireCoordinateNode").setPoint(new MFVec3f(new double[] {0.0,0.0,0.0,0.0,0.0,20.0})))))
            .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
            .addChild(new Script("SetFireLineEndpoints").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ( )" + "\n" + 
"{" + "\n" + 
"	tracePrint ('SetFireLineEndpoints initialize() start...');" + "\n" + 
"	holdArray [0] = new SFVec3f (0.0, 0.0, 0.0);" + "\n" + 
"	holdArray [1] = new SFVec3f (0.0, 0.0, 0.0);" + "\n" + 
"	pointArray = holdArray;" + "\n" + 
"	tracePrint ('SetFireLineEndpoints initialize() start...');" + "\n" + 
"}" + "\n" + 
"function set_munitionStartPoint   ( value, timestamp )" + "\n" + 
"{" + "\n" + 
"	holdArray [0] = value;" + "\n" + 
"}" + "\n" + 
"function set_munitionEndPoint   ( value, timestamp )" + "\n" + 
"{" + "\n" + 
"	holdArray [1] = value;" + "\n" + 
"	pointArray = holdArray;" + "\n" + 
"//	tracePrint ('fire line endpoints=' + holdArray);" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[EspduTransformTrace SetFireLineEndpoints] ' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[EspduTransformTrace SetFireLineEndpoints] ' + outputString);" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_munitionStartPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("set_munitionEndPoint").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("holdArray").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
                .addComments(" default initialization is NULL node array "))
              .addField(new field().setName("pointArray").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY)
                .addComments(" default initialization is NULL node array "))
              .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting has verbose output"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("localTraceEnabled").setProtoField("localTraceEnabled"))))
            .addChild(new ROUTE().setFromNode("SetFireLineEndpoints").setFromField("pointArray").setToNode("LineOfFireCoordinateNode").setToField("set_point"))
            .addComments(" Needed? ")
            .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
            .addChild(new Script("FireSequenceScript").setMustEvaluate(true).setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ( )" + "\n" + 
"{" + "\n" + 
"	tracePrint ('FireSequenceScript initialize() start...');" + "\n" + 
"	firstFired1 = false;" + "\n" + 
"	firstFired2 = false;" + "\n" + 
"	tracePrint ('FireSequenceScript initialize() finish.');" + "\n" + 
"}" + "\n" + 
"function fireTime (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	// no action" + "\n" + 
"}" + "\n" + 
"function set_fired1 (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if ((value == true) && (firstFired1 == false))" + "\n" + 
"	{" + "\n" + 
"		firstFired1 = true;" + "\n" + 
"		tracePrint ('EspduTransformPROTO.wrl: fired1 FIRE_SEQUENCE_SCRIPT timestamp ' + fireTime);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"\n" + 
"function set_fired2 (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if ((value == true) && (firstFired1 == false))" + "\n" + 
"	{" + "\n" + 
"		firstFired2 = true;" + "\n" + 
"		tracePrint ('EspduTransformPROTO.wrl: fired2 FIRE_SEQUENCE_SCRIPT timestamp ' + fireTime);" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function tracePrint(outputString)" + "\n" + 
"{" + "\n" + 
"    if (localTraceEnabled)" + "\n" + 
"	Browser.print ('[EspduTransformTrace FireSequenceScript] ' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint(outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[EspduTransformTrace FireSequenceScript] ' + outputString);" + "\n" + 
"}" + "\n")
              .addField(new field().setName("set_fired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("set_fired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("fireTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("firstFired1").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("firstFired2").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("localTraceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Whether EspduTransformTrace debug scripting has verbose output"))
              .setIS(new IS()
                .addConnect(new connect().setNodeField("localTraceEnabled").setProtoField("localTraceEnabled"))))
            .addChild(new ROUTE().setFromNode("TraceScript").setFromField("fired1").setToNode("FireSequenceScript").setToField("set_fired1"))
            .addChild(new ROUTE().setFromNode("TraceScript").setFromField("fired2").setToNode("FireSequenceScript").setToField("set_fired2"))
            .addChild(new ROUTE().setFromNode("TraceScript").setFromField("fireTime").setToNode("FireSequenceScript").setToField("fireTime"))
            .addComments(" ROUTE firstFired1/2 to sound node? ")))))
    .addComments(" ============================================================ ")
    .addComments(" Begin rendered scene ")
    .addComments(" Ensure that instances of this node are placed at the top-most level and are not translated away from the local world coordinates origin. ")
    .addChild(new EspduTransform("EspduTrans").setAddress("224.2.181.145").setMarking("Example PDU").setNetworkMode("networkReader").setPort(62040).setReadInterval(10).setWriteInterval(10)
      .addChild(new Viewpoint().setDescription("moving viewpoint"))
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"EspduTransform body goes here"})
          .setFontStyle(new FontStyle("FontJustifyMiddle").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.6,0.6))))
      .addComments(" Typically place EspduTransformTrace as a child of corresponding EspduTransform so that outputs are positioned relatively. "))
    .addChild(new Transform("TraceTransform")
      .addComments(" EspduTransformTrace cannot be a direct child of EspduTransform or a directed-acyclic graph (DAG) error occurs ")
      .addComments(" EspduTransformTrace must be translated for trace text to stay local to parent EspduTransform ")
      .addChild(new ProtoInstance("EspduTransformTrace").setContainerField("children")
        .addFieldValue(new fieldValue().setName("espduTransformNode")
          .addChild(new EspduTransform().setUSE("EspduTrans")))
        .addFieldValue(new fieldValue().setName("traceColor").setValue(new SFColor(0.9,0.4,0.2)))
        .addFieldValue(new fieldValue().setName("traceFontSize").setValue(0.8))
        .addFieldValue(new fieldValue().setName("traceJava").setValue(true))
        .addFieldValue(new fieldValue().setName("localTraceEnabled").setValue(true)))
      .addChild(new ROUTE().setFromNode("EspduTrans").setFromField("translation").setToNode("TraceTransform").setToField("set_translation"))
      .addChild(new ROUTE().setFromNode("EspduTrans").setFromField("rotation").setToNode("TraceTransform").setToField("set_rotation"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return EspduTransformPrototypes model
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
        X3D thisExampleX3dModel = new EspduTransformPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EspduTransformPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EspduTransformPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype definitions for ReceiverPdu SignalPdu and TransmitterPdu, all of which share share RadioCommunicationsPduScriptNode class. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/RadioCommunicationsPrototypes.java">RadioCommunicationsPrototypes.java</a> source, <a href="../../../DistributedInteractiveSimulation/RadioCommunicationsPrototypesIndex.html" target="_top">RadioCommunicationsPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d">RadioCommunicationsPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman and Dave Laflam </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 7 December 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development. Need to fix url values in X3dToVrml97.xslt translation signatures, and check Savage CommunicationsAndSensors DIS examples. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype definitions for ReceiverPdu SignalPdu and TransmitterPdu, all of which share share RadioCommunicationsPduScriptNode class </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPrototypes.x3d" target="_blank">http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d</a> </td>
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

	* @author Don Brutzman and Dave Laflam
 */

public class RadioCommunicationsPrototypes
{
	/** Default constructor to create this object. */
	public RadioCommunicationsPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("RadioCommunicationsPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman and Dave Laflam"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("7 December 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development. Need to fix url values in X3dToVrml97.xslt translation signatures, and check Savage CommunicationsAndSensors DIS examples."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype definitions for ReceiverPdu SignalPdu and TransmitterPdu, all of which share share RadioCommunicationsPduScriptNode class"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ============================================================ ")
    .addChild(new WorldInfo().setTitle("RadioCommunicationsPrototypes.x3d"))
    .addChild(new ProtoDeclare("ReceiverPdu").setName("ReceiverPdu")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("set whichGeometry to -1 for no geometry 0 for text trace 1 for default geometry"))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addComments(" Initialization fields ")
        .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.1))
        .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.0))
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(14))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(17))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(9))
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("224.2.181.145"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(62040))
        .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("devo.cs.nps.navy.mil"))
        .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(8010))
        .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("standAlone").setAppinfo("networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)"))
        .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
        .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false"))
        .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false"))
        .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
        .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addComments(" Generic events ")
        .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" RadioCommunicationsFamily events ")
        .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" ReceiverPdu fields ")
        .addField(new field().setName("receivedPower").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("receiverState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transmitterSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transmitterApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transmitterEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transmitterRadioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addComments(" First node inside a PrototypeDeclaration is the node type of the ProtoInstance ")
        .addChild(new Switch("ReceiverPduGeometrySwitch").setWhichChoice(-1)
          .setIS(new IS()
            .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichGeometry")))
          .addComments(" whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry ")
          .addChild(new Group()
            .addChild(new Viewpoint().setDescription("Receiver Pdu Observer").setPosition(0.0,0.0,15.0))
            .addChild(new Group()
              .addChild(new Transform().setTranslation(0.0,6.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"})
                    .setFontStyle(new FontStyle("FONT1").setJustify(FontStyle.JUSTIFY_MIDDLE_BEGIN).setSize(0.5)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.4,0.8)))))
              .addChild(new Transform().setTranslation(0.0,4.75,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Receiver PDU values"})
                    .setFontStyle(new FontStyle().setUSE("FONT1")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.8,0.4)))))
              .addChild(new Transform().setTranslation(0.0,4.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("ReceiverOutput1").setString(new String[] {"Receiver output uninitialized"})
                    .setFontStyle(new FontStyle().setUSE("FONT1")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.8,0.8,0.0))))))
            .addChild(new Script("ReceiverOutputAssembler1").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	value='awaiting PDU';" + "\n" + 
"	messageResult  [0] = 'active=' + value;" + "\n" + 
"	messageResult  [1] = 'timestamp=' + value;" + "\n" + 
"	messageResult  [2] = 'isRtpHeaderHeard=' + value;" + "\n" + 
"	messageResult  [3] = 'radioID=' + value;" + "\n" + 
"	messageResult  [4] = 'receivedPower=' + value;" + "\n" + 
"	messageResult  [5] = 'receiverState=' + value;" + "\n" + 
"	messageResult  [6] = 'transmitterSiteID=' + value;" + "\n" + 
"	messageResult  [7] = 'transmitterApplicationID=' + value;" + "\n" + 
"	messageResult  [8] = 'transmitterEntityID=' + value;" + "\n" + 
"	messageResult  [9] = 'transmitterRadioID=' + value;" + "\n" + 
"}" + "\n" + 
"function active 			(value, ts) { messageResult [0] = 'active=' + value; }" + "\n" + 
"function timestamp			(value, ts) { messageResult [1] = 'timestamp=' + value; }" + "\n" + 
"function isRtpHeaderHeard		(value, ts) { messageResult [2] = 'isRtpHeaderHeard=' + value; }" + "\n" + 
"function radioID			(value, ts) { messageResult [3] = 'radioID=' + value; }" + "\n" + 
"function receivedPower			(value, ts) { messageResult [4] = 'receiverPower=' + value; }" + "\n" + 
"function receiverState			(value, ts) { messageResult [5] = 'receiverState=' + value; }" + "\n" + 
"function transmitterSiteID		(value, ts) { messageResult [6] = 'transmitterSiteID=' + value; }" + "\n" + 
"function transmitterApplicationID	(value, ts) { messageResult [7] = 'transmitterApplicationID=' + value; }" + "\n" + 
"function transmitterEntityID		(value, ts) { messageResult [8] = 'transmitterEntityID=' + value; }" + "\n" + 
"function transmitterRadioID 		(value, ts) { messageResult [9] = 'transmitterRadioID=' + value; }" + "\n")
              .addComments(" surprising limit on MFString: 10 strings ")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("receivedPower").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("receiverState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitterSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitterApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitterEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitterRadioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))))
        .addComments(" The Script follows the Switch, since the first node in the file determines the node type of this prototype ")
        .addComments(" Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct ")
        .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
        .addChild(new Script("ReceiverPduScriptNode").setMustEvaluate(true).setUrl(new String[] {"RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"})
          .addComments(" Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu ")
          .addField(new field().setName("radioPduType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("ReceiverPdu"))
          .addComments(" Initialization fields ")
          .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addComments(" Generic events ")
          .addField(new field().setName("update").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("update is triggered by local TimeSensor clocks to allow regular read/write"))
          .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" RadioCommunicationsFamily events ")
          .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" SignalPdu fields ")
          .addField(new field().setName("receivedPower").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("receiverState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("transmitterSiteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("transmitterApplicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("transmitterEntityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("transmitterRadioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("readInterval").setProtoField("readInterval"))
            .addConnect(new connect().setNodeField("writeInterval").setProtoField("writeInterval"))
            .addConnect(new connect().setNodeField("siteID").setProtoField("siteID"))
            .addConnect(new connect().setNodeField("applicationID").setProtoField("applicationID"))
            .addConnect(new connect().setNodeField("entityID").setProtoField("entityID"))
            .addConnect(new connect().setNodeField("address").setProtoField("address"))
            .addConnect(new connect().setNodeField("port").setProtoField("port"))
            .addConnect(new connect().setNodeField("multicastRelayHost").setProtoField("multicastRelayHost"))
            .addConnect(new connect().setNodeField("multicastRelayPort").setProtoField("multicastRelayPort"))
            .addConnect(new connect().setNodeField("rtpHeaderExpected").setProtoField("rtpHeaderExpected"))
            .addConnect(new connect().setNodeField("trace").setProtoField("trace"))
            .addConnect(new connect().setNodeField("active").setProtoField("active"))
            .addConnect(new connect().setNodeField("timestamp").setProtoField("timestamp"))
            .addConnect(new connect().setNodeField("isRtpHeaderHeard").setProtoField("isRtpHeaderHeard"))
            .addConnect(new connect().setNodeField("radioID").setProtoField("radioID"))
            .addConnect(new connect().setNodeField("receivedPower").setProtoField("receivedPower"))
            .addConnect(new connect().setNodeField("receiverState").setProtoField("receiverState"))
            .addConnect(new connect().setNodeField("transmitterSiteID").setProtoField("transmitterSiteID"))
            .addConnect(new connect().setNodeField("transmitterApplicationID").setProtoField("transmitterApplicationID"))
            .addConnect(new connect().setNodeField("transmitterEntityID").setProtoField("transmitterEntityID"))
            .addConnect(new connect().setNodeField("transmitterRadioID").setProtoField("transmitterRadioID"))))
        .addComments(" Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). ")
        .addChild(new TimeSensor("ReceiverPduReadIntervalClock").setLoop(true))
        .addChild(new TimeSensor("ReceiverPduWriteIntervalClock").setEnabled(false).setLoop(true))
        .addChild(new ROUTE().setFromNode("ReceiverPduReadIntervalClock").setFromField("cycleTime").setToNode("ReceiverPduScriptNode").setToField("update"))
        .addChild(new ROUTE().setFromNode("ReceiverPduWriteIntervalClock").setFromField("cycleTime").setToNode("ReceiverPduScriptNode").setToField("update"))
        .addComments(" These ROUTEs connect the PDU Script node to the geometryChoice=0 text output ")
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("active").setToNode("ReceiverOutputAssembler1").setToField("active"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("timestamp").setToNode("ReceiverOutputAssembler1").setToField("timestamp"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("isRtpHeaderHeard").setToNode("ReceiverOutputAssembler1").setToField("isRtpHeaderHeard"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("radioID").setToNode("ReceiverOutputAssembler1").setToField("radioID"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("receivedPower").setToNode("ReceiverOutputAssembler1").setToField("receivedPower"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("receiverState").setToNode("ReceiverOutputAssembler1").setToField("receiverState"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("transmitterSiteID").setToNode("ReceiverOutputAssembler1").setToField("transmitterSiteID"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("transmitterApplicationID").setToNode("ReceiverOutputAssembler1").setToField("transmitterApplicationID"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("transmitterEntityID").setToNode("ReceiverOutputAssembler1").setToField("transmitterEntityID"))
        .addChild(new ROUTE().setFromNode("ReceiverPduScriptNode").setFromField("transmitterRadioID").setToNode("ReceiverOutputAssembler1").setToField("transmitterRadioID"))
        .addChild(new ROUTE().setFromNode("ReceiverOutputAssembler1").setFromField("messageResult").setToNode("ReceiverOutput1").setToField("string"))
        .addComments(" ROUTEs for further geometry representations go here ")))
    .addComments(" ============================================================ ")
    .addChild(new ProtoDeclare("SignalPdu").setName("SignalPdu")
      .setProtoInterface(new ProtoInterface()
        .addComments(" set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry ")
        .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addComments(" Initialization fields ")
        .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.1))
        .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.0))
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(14))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(17))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(9))
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("224.2.181.145"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(62040))
        .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("devo.cs.nps.navy.mil"))
        .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(8010))
        .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("standAlone").setAppinfo("networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)"))
        .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
        .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false"))
        .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false"))
        .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
        .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addComments(" Generic events ")
        .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" RadioCommunicationsFamily events ")
        .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" SignalPdu fields ")
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
      .setProtoBody(new ProtoBody()
        .addComments(" First node inside a PrototypeDeclaration is the node type of the ProtoInstance ")
        .addChild(new Switch("SignalPduGeometrySwitch").setWhichChoice(-1)
          .setIS(new IS()
            .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichGeometry")))
          .addComments(" whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry ")
          .addChild(new Group()
            .addChild(new Viewpoint().setDescription("Signal Pdu Observer").setPosition(0.0,0.0,15.0))
            .addChild(new Group()
              .addChild(new Transform().setTranslation(0.0,6.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"})
                    .setFontStyle(new FontStyle("FONT2").setJustify(FontStyle.JUSTIFY_MIDDLE_BEGIN).setSize(0.5)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.4,0.8)))))
              .addChild(new Transform().setTranslation(0.0,4.75,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Signal PDU values"})
                    .setFontStyle(new FontStyle().setUSE("FONT2")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.8,0.4)))))
              .addChild(new Transform().setTranslation(0.0,4.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("SignalOutput1").setString(new String[] {"Signal Output1 unset"})
                    .setFontStyle(new FontStyle().setUSE("FONT2")))
                  .setAppearance(new Appearance("YellowAppearance2")
                    .setMaterial(new Material().setDiffuseColor(0.8,0.8,0.0)))))
              .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("SignalOutput2").setString(new String[] {"Signal Output2 unset"})
                    .setFontStyle(new FontStyle().setUSE("FONT2")))
                  .setAppearance(new Appearance().setUSE("YellowAppearance2")))))
            .addChild(new Script("SignalOutputAssembler1").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	value='awaiting PDU';" + "\n" + 
"	messageResult  [0] = 'active=' + value;" + "\n" + 
"	messageResult  [1] = 'timestamp=' + value;" + "\n" + 
"	messageResult  [2] = 'isRtpHeaderHeard=' + value;" + "\n" + 
"	messageResult  [3] = 'radioID=' + value;" + "\n" + 
"	messageResult  [4] = 'encodingScheme=' + value;" + "\n" + 
"	messageResult  [5] = 'tdlType=' + value;" + "\n" + 
"	messageResult  [6] = 'sampleRate=' + value;" + "\n" + 
"	messageResult  [7] = 'samples=' + value;" + "\n" + 
"	messageResult  [8] = 'dataLength=' + value;" + "\n" + 
"	messageResult  [9] = 'data00=' + value;" + "\n" + 
"}" + "\n" + 
"function active 	(value, ts) { messageResult [0] = 'active=' + value; }" + "\n" + 
"function timestamp	(value, ts) { messageResult [1] = 'timestamp=' + value; }" + "\n" + 
"function isRtpHeaderHeard	(value, ts) { messageResult [2] = 'isRtpHeaderHeard=' + value; }" + "\n" + 
"function radioID	(value, ts) { messageResult [3] = 'radioID=' + value; }" + "\n" + 
"function encodingScheme	(value, ts) { messageResult [4] = 'encodingScheme=' + value; }" + "\n" + 
"function tdlType	(value, ts) { messageResult [5] = 'tdlType=' + value; }" + "\n" + 
"function sampleRate	(value, ts) { messageResult [6] = 'sampleRate=' + value; }" + "\n" + 
"function samples	(value, ts) { messageResult [7] = 'samples=' + value; }" + "\n" + 
"function dataLength	(value, ts) { messageResult [8] = 'dataLength=' + value; }" + "\n" + 
"function data00  	(value, ts) { messageResult [9] = 'data00=' + value; }" + "\n")
              .addComments(" surprising limit on MFString: 10 strings ")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("encodingScheme").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("tdlType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("sampleRate").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("samples").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("dataLength").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data00").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))
            .addChild(new Script("SignalOutputAssembler2").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	messageResult [0] = 'data01=' + value;" + "\n" + 
"	messageResult [1] = 'data02=' + value;" + "\n" + 
"	messageResult [2] = 'data03=' + value;" + "\n" + 
"	messageResult [3] = 'data04=' + value;" + "\n" + 
"	messageResult [4] = 'data05=' + value;" + "\n" + 
"	messageResult [5] = 'data06=' + value;" + "\n" + 
"	messageResult [6] = 'data07=' + value;" + "\n" + 
"	messageResult [7] = 'data08=' + value;" + "\n" + 
"	messageResult [8] = 'data09=' + value;" + "\n" + 
"	messageResult [9] = 'data10=' + value;" + "\n" + 
"}" + "\n" + 
"function data01 	(value, ts) { messageResult [0] = 'data01=' + value; }" + "\n" + 
"function data02 	(value, ts) { messageResult [1] = 'data02=' + value; }" + "\n" + 
"function data03 	(value, ts) { messageResult [2] = 'data03=' + value; }" + "\n" + 
"function data04 	(value, ts) { messageResult [3] = 'data04=' + value; }" + "\n" + 
"function data05 	(value, ts) { messageResult [4] = 'data05=' + value; }" + "\n" + 
"function data06 	(value, ts) { messageResult [5] = 'data06=' + value; }" + "\n" + 
"function data07 	(value, ts) { messageResult [6] = 'data07=' + value; }" + "\n" + 
"function data08 	(value, ts) { messageResult [7] = 'data08=' + value; }" + "\n" + 
"function data09 	(value, ts) { messageResult [8] = 'data09=' + value; }" + "\n" + 
"function data10 	(value, ts) { messageResult [9] = 'data10=' + value; }" + "\n")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("data01").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data02").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data03").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data04").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data05").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data06").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data07").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data08").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data09").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("data10").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))))
        .addComments(" The Script follows the Switch, since the first node in the file determines the node type of this prototype ")
        .addComments(" Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct ")
        .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
        .addChild(new Script("SignalPduScriptNode").setMustEvaluate(true).setUrl(new String[] {"RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"})
          .addComments(" Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu ")
          .addField(new field().setName("radioPduType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("SignalPdu"))
          .addComments(" Initialization fields ")
          .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addComments(" Generic events ")
          .addField(new field().setName("update").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("update is triggered by local TimeSensor clocks to allow regular read/write"))
          .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" RadioCommunicationsFamily events ")
          .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" SignalPdu fields ")
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
          .addField(new field().setName("data10").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("readInterval").setProtoField("readInterval"))
            .addConnect(new connect().setNodeField("writeInterval").setProtoField("writeInterval"))
            .addConnect(new connect().setNodeField("siteID").setProtoField("siteID"))
            .addConnect(new connect().setNodeField("applicationID").setProtoField("applicationID"))
            .addConnect(new connect().setNodeField("entityID").setProtoField("entityID"))
            .addConnect(new connect().setNodeField("address").setProtoField("address"))
            .addConnect(new connect().setNodeField("port").setProtoField("port"))
            .addConnect(new connect().setNodeField("multicastRelayHost").setProtoField("multicastRelayHost"))
            .addConnect(new connect().setNodeField("multicastRelayPort").setProtoField("multicastRelayPort"))
            .addConnect(new connect().setNodeField("rtpHeaderExpected").setProtoField("rtpHeaderExpected"))
            .addConnect(new connect().setNodeField("trace").setProtoField("trace"))
            .addConnect(new connect().setNodeField("active").setProtoField("active"))
            .addConnect(new connect().setNodeField("timestamp").setProtoField("timestamp"))
            .addConnect(new connect().setNodeField("isRtpHeaderHeard").setProtoField("isRtpHeaderHeard"))
            .addConnect(new connect().setNodeField("radioID").setProtoField("radioID"))
            .addConnect(new connect().setNodeField("encodingScheme").setProtoField("encodingScheme"))
            .addConnect(new connect().setNodeField("tdlType").setProtoField("tdlType"))
            .addConnect(new connect().setNodeField("sampleRate").setProtoField("sampleRate"))
            .addConnect(new connect().setNodeField("samples").setProtoField("samples"))
            .addConnect(new connect().setNodeField("dataLength").setProtoField("dataLength"))
            .addConnect(new connect().setNodeField("data00").setProtoField("data00"))
            .addConnect(new connect().setNodeField("data01").setProtoField("data01"))
            .addConnect(new connect().setNodeField("data02").setProtoField("data02"))
            .addConnect(new connect().setNodeField("data03").setProtoField("data03"))
            .addConnect(new connect().setNodeField("data04").setProtoField("data04"))
            .addConnect(new connect().setNodeField("data05").setProtoField("data05"))
            .addConnect(new connect().setNodeField("data06").setProtoField("data06"))
            .addConnect(new connect().setNodeField("data07").setProtoField("data07"))
            .addConnect(new connect().setNodeField("data08").setProtoField("data08"))
            .addConnect(new connect().setNodeField("data09").setProtoField("data09"))
            .addConnect(new connect().setNodeField("data10").setProtoField("data10"))))
        .addComments(" Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). ")
        .addChild(new TimeSensor("SignalPduReadIntervalClock").setLoop(true))
        .addChild(new TimeSensor("SignalPduWriteIntervalClock").setEnabled(false).setLoop(true))
        .addChild(new ROUTE().setFromNode("SignalPduReadIntervalClock").setFromField("cycleTime").setToNode("SignalPduScriptNode").setToField("update"))
        .addChild(new ROUTE().setFromNode("SignalPduWriteIntervalClock").setFromField("cycleTime").setToNode("SignalPduScriptNode").setToField("update"))
        .addComments(" These ROUTEs connect the PDU Script node to the geometryChoice=0 text output ")
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("active").setToNode("SignalOutputAssembler1").setToField("active"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("timestamp").setToNode("SignalOutputAssembler1").setToField("timestamp"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("isRtpHeaderHeard").setToNode("SignalOutputAssembler1").setToField("isRtpHeaderHeard"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("radioID").setToNode("SignalOutputAssembler1").setToField("radioID"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("encodingScheme").setToNode("SignalOutputAssembler1").setToField("encodingScheme"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("tdlType").setToNode("SignalOutputAssembler1").setToField("tdlType"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("sampleRate").setToNode("SignalOutputAssembler1").setToField("sampleRate"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("samples").setToNode("SignalOutputAssembler1").setToField("samples"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("dataLength").setToNode("SignalOutputAssembler1").setToField("dataLength"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data00").setToNode("SignalOutputAssembler1").setToField("data00"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data01").setToNode("SignalOutputAssembler2").setToField("data01"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data02").setToNode("SignalOutputAssembler2").setToField("data02"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data03").setToNode("SignalOutputAssembler2").setToField("data03"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data04").setToNode("SignalOutputAssembler2").setToField("data04"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data05").setToNode("SignalOutputAssembler2").setToField("data05"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data06").setToNode("SignalOutputAssembler2").setToField("data06"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data07").setToNode("SignalOutputAssembler2").setToField("data07"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data08").setToNode("SignalOutputAssembler2").setToField("data08"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data09").setToNode("SignalOutputAssembler2").setToField("data09"))
        .addChild(new ROUTE().setFromNode("SignalPduScriptNode").setFromField("data10").setToNode("SignalOutputAssembler2").setToField("data10"))
        .addChild(new ROUTE().setFromNode("SignalOutputAssembler1").setFromField("messageResult").setToNode("SignalOutput1").setToField("string"))
        .addChild(new ROUTE().setFromNode("SignalOutputAssembler2").setFromField("messageResult").setToNode("SignalOutput2").setToField("string"))
        .addComments(" ROUTEs for further geometry representations go here ")))
    .addComments(" ============================================================ ")
    .addChild(new ProtoDeclare("TransmitterPdu").setName("TransmitterPdu")
      .setProtoInterface(new ProtoInterface()
        .addComments(" set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry ")
        .addField(new field().setName("whichGeometry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("bboxCenter").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,0.0)).setAppinfo("Bounding box center: position offset from origin of local coordinate system."))
        .addField(new field().setName("bboxSize").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(-1.0,-1.0,-1.0)).setAppinfo("Bounding box size: automatically calculated can be specified as an optimization or constraint."))
        .addComments(" Initialization fields ")
        .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.1))
        .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.0))
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(14))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(17))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(9))
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("224.2.181.145"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(62040))
        .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("devo.cs.nps.navy.mil"))
        .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(8010))
        .addField(new field().setName("networkMode").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("standAlone").setAppinfo("networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)"))
        .addField(new field().setName("isStandAlone").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode standAlone (ignore network but still respond to local events) is true/false"))
        .addField(new field().setName("isMaster").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false"))
        .addField(new field().setName("isRemote").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false"))
        .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
        .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addComments(" Generic events ")
        .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" RadioCommunicationsFamily events ")
        .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addComments(" TransmitterPdu fields ")
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
      .setProtoBody(new ProtoBody()
        .addComments(" First node inside a PrototypeDeclaration is the node type of the ProtoInstance ")
        .addChild(new Switch("TransmitterPduGeometrySwitch").setWhichChoice(-1)
          .setIS(new IS()
            .addConnect(new connect().setNodeField("whichChoice").setProtoField("whichGeometry")))
          .addComments(" whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry ")
          .addChild(new Group()
            .addChild(new Viewpoint().setDescription("Transmitter Pdu Observer").setPosition(0.0,0.0,15.0))
            .addChild(new Group()
              .addChild(new Transform().setTranslation(0.0,6.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"})
                    .setFontStyle(new FontStyle("FONT3").setJustify(FontStyle.JUSTIFY_MIDDLE_BEGIN).setSize(0.5)))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.4,0.8)))))
              .addChild(new Transform().setTranslation(0.0,4.75,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text().setString(new String[] {"Transmitter PDU values"})
                    .setFontStyle(new FontStyle().setUSE("FONT3")))
                  .setAppearance(new Appearance()
                    .setMaterial(new Material().setDiffuseColor(0.0,0.8,0.4)))))
              .addChild(new Transform().setTranslation(0.0,4.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("TransmitterOutput1").setString(new String[] {"Transmitter Output1 unset"})
                    .setFontStyle(new FontStyle().setUSE("FONT3")))
                  .setAppearance(new Appearance("YellowAppearance3")
                    .setMaterial(new Material().setDiffuseColor(0.8,0.8,0.0)))))
              .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("TransmitterOutput2").setString(new String[] {"Transmitter Output2 unset"})
                    .setFontStyle(new FontStyle().setUSE("FONT3")))
                  .setAppearance(new Appearance().setUSE("YellowAppearance3"))))
              .addChild(new Transform().setTranslation(0.0,-6.0,0.0)
                .addChild(new Shape()
                  .setGeometry(new Text("TransmitterOutput3").setString(new String[] {"Transmitter Output2 unset"})
                    .setFontStyle(new FontStyle().setUSE("FONT3")))
                  .setAppearance(new Appearance().setUSE("YellowAppearance3")))))
            .addChild(new Script("TransmitterOutputAssembler1").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	value='awaiting PDU';" + "\n" + 
"	messageResult  [0] = 'active=' + value;" + "\n" + 
"	messageResult  [1] = 'timestamp=' + value;" + "\n" + 
"	messageResult  [2] = 'isRtpHeaderHeard=' + value;" + "\n" + 
"	messageResult  [3] = 'radioID=' + value;" + "\n" + 
"	messageResult  [4] = 'antennaLocation=' + value;" + "\n" + 
"	messageResult  [5] = 'antennaPatternLength=' + value;" + "\n" + 
"	messageResult  [6] = 'antennaPatternType=' + value;" + "\n" + 
"	messageResult  [7] = 'cryptoKeyID=' + value;" + "\n" + 
"	messageResult  [8] = 'cryptoSytem=' + value;" + "\n" + 
"	messageResult  [9] = 'frequency=' + value;" + "\n" + 
"}" + "\n" + 
"function active 		(value, ts) { messageResult [0] = 'active=' + value; }" + "\n" + 
"function timestamp		(value, ts) { messageResult [1] = 'timestamp=' + value; }" + "\n" + 
"function isRtpHeaderHeard		(value, ts) { messageResult [2] = 'isRtpHeaderHeard=' + value; }" + "\n" + 
"function radioID		(value, ts) { messageResult [3] = 'radioID=' + value; }" + "\n" + 
"function antennaLocation	(value, ts) { messageResult [4] = 'antennaLocation=' + value; }" + "\n" + 
"function antennaPatternLength	(value, ts) { messageResult [5] = 'antennaPatternLength=' + value; }" + "\n" + 
"function antennaPatternType	(value, ts) { messageResult [6] = 'antennaPatternType=' + value; }" + "\n" + 
"function cryptoKeyID		(value, ts) { messageResult [7] = 'cryptoKeyID=' + value; }" + "\n" + 
"function cryptoSytem		(value, ts) { messageResult [8] = 'cryptoSytem=' + value; }" + "\n" + 
"function frequency  		(value, ts) { messageResult [9] = 'frequency=' + value; }" + "\n")
              .addComments(" surprising limit on MFString: 10 strings ")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("antennaLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("antennaPatternLength").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("antennaPatternType").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("cryptoKeyID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("cryptoSytem").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("frequency").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))
            .addChild(new Script("TransmitterOutputAssembler2").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	messageResult [0] = 'inputSource=' + value;" + "\n" + 
"	messageResult [1] = 'lengthOfModulationParameters=' + value;" + "\n" + 
"	messageResult [2] = 'modulationTypeDetail=' + value;" + "\n" + 
"	messageResult [3] = 'modulationTypeMajor=' + value;" + "\n" + 
"	messageResult [4] = 'modulationTypeSpreadSpectrum=' + value;" + "\n" + 
"	messageResult [5] = 'modulationTypeSystem=' + value;" + "\n" + 
"	messageResult [6] = 'power=' + value;" + "\n" + 
"	messageResult [7] = 'radioEntityTypeCategory=' + value;" + "\n" + 
"	messageResult [8] = 'radioEntityTypeCountry=' + value;" + "\n" + 
"	messageResult [9] = 'radioEntityTypeDomain=' + value;" + "\n" + 
"}" + "\n" + 
"function inputSource 			(value, ts) { messageResult [0] = 'inputSource=' + value; }" + "\n" + 
"function lengthOfModulationParameters 	(value, ts) { messageResult [1] = 'lengthOfModulationParameters=' + value; }" + "\n" + 
"function modulationTypeDetail		(value, ts) { messageResult [2] = 'modulationTypeDetail=' + value; }" + "\n" + 
"function modulationTypeMajor 		(value, ts) { messageResult [3] = 'modulationTypeMajor=' + value; }" + "\n" + 
"function modulationTypeSpreadSpectrum 	(value, ts) { messageResult [4] = 'modulationTypeSpreadSpectrum=' + value; }" + "\n" + 
"function modulationTypeSystem		(value, ts) { messageResult [5] = 'modulationTypeSystem=' + value; }" + "\n" + 
"function power	 			(value, ts) { messageResult [6] = 'power=' + value; }" + "\n" + 
"function radioEntityTypeCategory 	(value, ts) { messageResult [7] = 'radioEntityTypeCategory=' + value; }" + "\n" + 
"function radioEntityTypeCountry 	(value, ts) { messageResult [8] = 'radioEntityTypeCountry=' + value; }" + "\n" + 
"function radioEntityTypeDomain 		(value, ts) { messageResult [9] = 'radioEntityTypeDomain=' + value; }" + "\n")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("inputSource").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("lengthOfModulationParameters").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("modulationTypeDetail").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("modulationTypeMajor").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("modulationTypeSpreadSpectrum").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("modulationTypeSystem").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("power").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioEntityTypeCategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioEntityTypeCountry").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioEntityTypeDomain").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))
            .addChild(new Script("TransmitterOutputAssembler3").setSourceCode("\n" + 
"              " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	messageResult [0] = 'radioEntityTypeKind=' + value;" + "\n" + 
"	messageResult [1] = 'radioEntityTypeNomenclature=' + value;" + "\n" + 
"	messageResult [2] = 'radioEntityTypeNomenclatureVersion=' + value;" + "\n" + 
"	messageResult [3] = 'relativeAntennaLocation=' + value;" + "\n" + 
"	messageResult [4] = 'transmitFrequencyBandwidth=' + value;" + "\n" + 
"	messageResult [5] = 'transmitState=' + value;" + "\n" + 
"}" + "\n" + 
"function radioEntityTypeKind 			(value, ts) { messageResult [0] = 'radioEntityTypeKind=' + value; }" + "\n" + 
"function radioEntityTypeNomenclature 		(value, ts) { messageResult [1] = 'radioEntityTypeNomenclature=' + value; }" + "\n" + 
"function radioEntityTypeNomenclatureVersion 	(value, ts) { messageResult [2] = 'radioEntityTypeNomenclatureVersion=' + value; }" + "\n" + 
"function relativeAntennaLocation 		(value, ts) { messageResult [3] = 'relativeAntennaLocation=' + value; }" + "\n" + 
"function transmitFrequencyBandwidth		(value, ts) { messageResult [4] = 'transmitFrequencyBandwidth=' + value; }" + "\n" + 
"function transmitState	 			(value, ts) { messageResult [5] = 'transmitState=' + value; }" + "\n")
              .addField(new field().setName("messageResult").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
              .addField(new field().setName("radioEntityTypeKind").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioEntityTypeNomenclature").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("radioEntityTypeNomenclatureVersion").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("relativeAntennaLocation").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitFrequencyBandwidth").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
              .addField(new field().setName("transmitState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY)))))
        .addComments(" The Script follows the Switch, since the first node in the file determines the node type of this prototype ")
        .addComments(" Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct ")
        .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
        .addChild(new Script("TransmitterPduScriptNode").setMustEvaluate(true).setUrl(new String[] {"RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"})
          .addComments(" Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu ")
          .addField(new field().setName("radioPduType").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("TransmitterPdu"))
          .addComments(" Initialization fields ")
          .addField(new field().setName("readInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("writeInterval").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayHost").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("multicastRelayPort").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("rtpHeaderExpected").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("isRtpHeaderHeard").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("whether RTP header was found prepended to DIS packet"))
          .addField(new field().setName("trace").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addComments(" Generic events ")
          .addField(new field().setName("update").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("update is triggered by local TimeSensor clocks to allow regular read/write"))
          .addField(new field().setName("active").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("timestamp").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" RadioCommunicationsFamily events ")
          .addField(new field().setName("radioID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addComments(" SignalPdu fields ")
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
          .addField(new field().setName("transmitState").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("readInterval").setProtoField("readInterval"))
            .addConnect(new connect().setNodeField("writeInterval").setProtoField("writeInterval"))
            .addConnect(new connect().setNodeField("siteID").setProtoField("siteID"))
            .addConnect(new connect().setNodeField("applicationID").setProtoField("applicationID"))
            .addConnect(new connect().setNodeField("entityID").setProtoField("entityID"))
            .addConnect(new connect().setNodeField("address").setProtoField("address"))
            .addConnect(new connect().setNodeField("port").setProtoField("port"))
            .addConnect(new connect().setNodeField("multicastRelayHost").setProtoField("multicastRelayHost"))
            .addConnect(new connect().setNodeField("multicastRelayPort").setProtoField("multicastRelayPort"))
            .addConnect(new connect().setNodeField("rtpHeaderExpected").setProtoField("rtpHeaderExpected"))
            .addConnect(new connect().setNodeField("trace").setProtoField("trace"))
            .addConnect(new connect().setNodeField("active").setProtoField("active"))
            .addConnect(new connect().setNodeField("timestamp").setProtoField("timestamp"))
            .addConnect(new connect().setNodeField("isRtpHeaderHeard").setProtoField("isRtpHeaderHeard"))
            .addConnect(new connect().setNodeField("radioID").setProtoField("radioID"))
            .addConnect(new connect().setNodeField("antennaLocation").setProtoField("antennaLocation"))
            .addConnect(new connect().setNodeField("antennaPatternLength").setProtoField("antennaPatternLength"))
            .addConnect(new connect().setNodeField("antennaPatternType").setProtoField("antennaPatternType"))
            .addConnect(new connect().setNodeField("cryptoKeyID").setProtoField("cryptoKeyID"))
            .addConnect(new connect().setNodeField("cryptoSytem").setProtoField("cryptoSytem"))
            .addConnect(new connect().setNodeField("frequency").setProtoField("frequency"))
            .addConnect(new connect().setNodeField("inputSource").setProtoField("inputSource"))
            .addConnect(new connect().setNodeField("lengthOfModulationParameters").setProtoField("lengthOfModulationParameters"))
            .addConnect(new connect().setNodeField("modulationTypeDetail").setProtoField("modulationTypeDetail"))
            .addConnect(new connect().setNodeField("modulationTypeMajor").setProtoField("modulationTypeMajor"))
            .addConnect(new connect().setNodeField("modulationTypeSpreadSpectrum").setProtoField("modulationTypeSpreadSpectrum"))
            .addConnect(new connect().setNodeField("modulationTypeSystem").setProtoField("modulationTypeSystem"))
            .addConnect(new connect().setNodeField("power").setProtoField("power"))
            .addConnect(new connect().setNodeField("radioEntityTypeCategory").setProtoField("radioEntityTypeCategory"))
            .addConnect(new connect().setNodeField("radioEntityTypeCountry").setProtoField("radioEntityTypeCountry"))
            .addConnect(new connect().setNodeField("radioEntityTypeDomain").setProtoField("radioEntityTypeDomain"))
            .addConnect(new connect().setNodeField("radioEntityTypeKind").setProtoField("radioEntityTypeKind"))
            .addConnect(new connect().setNodeField("radioEntityTypeNomenclature").setProtoField("radioEntityTypeNomenclature"))
            .addConnect(new connect().setNodeField("radioEntityTypeNomenclatureVersion").setProtoField("radioEntityTypeNomenclatureVersion"))
            .addConnect(new connect().setNodeField("relativeAntennaLocation").setProtoField("relativeAntennaLocation"))
            .addConnect(new connect().setNodeField("transmitFrequencyBandwidth").setProtoField("transmitFrequencyBandwidth"))
            .addConnect(new connect().setNodeField("transmitState").setProtoField("transmitState"))))
        .addComments(" Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). ")
        .addChild(new TimeSensor("TransmitterPduReadIntervalClock").setLoop(true))
        .addChild(new TimeSensor("TransmitterPduWriteIntervalClock").setEnabled(false).setLoop(true))
        .addChild(new ROUTE().setFromNode("TransmitterPduReadIntervalClock").setFromField("cycleTime").setToNode("TransmitterPduScriptNode").setToField("update"))
        .addChild(new ROUTE().setFromNode("TransmitterPduWriteIntervalClock").setFromField("cycleTime").setToNode("TransmitterPduScriptNode").setToField("update"))
        .addComments(" These ROUTEs connect the PDU Script node to the geometryChoice=0 text output ")
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("active").setToNode("TransmitterOutputAssembler1").setToField("active"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("timestamp").setToNode("TransmitterOutputAssembler1").setToField("timestamp"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("isRtpHeaderHeard").setToNode("TransmitterOutputAssembler1").setToField("isRtpHeaderHeard"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioID").setToNode("TransmitterOutputAssembler1").setToField("radioID"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("antennaLocation").setToNode("TransmitterOutputAssembler1").setToField("antennaLocation"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("antennaPatternLength").setToNode("TransmitterOutputAssembler1").setToField("antennaPatternLength"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("antennaPatternType").setToNode("TransmitterOutputAssembler1").setToField("antennaPatternType"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("cryptoKeyID").setToNode("TransmitterOutputAssembler1").setToField("cryptoKeyID"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("cryptoSytem").setToNode("TransmitterOutputAssembler1").setToField("cryptoSytem"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("frequency").setToNode("TransmitterOutputAssembler1").setToField("frequency"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("inputSource").setToNode("TransmitterOutputAssembler2").setToField("inputSource"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("lengthOfModulationParameters").setToNode("TransmitterOutputAssembler2").setToField("lengthOfModulationParameters"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("modulationTypeDetail").setToNode("TransmitterOutputAssembler2").setToField("modulationTypeDetail"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("modulationTypeMajor").setToNode("TransmitterOutputAssembler2").setToField("modulationTypeMajor"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("modulationTypeSpreadSpectrum").setToNode("TransmitterOutputAssembler2").setToField("modulationTypeSpreadSpectrum"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("modulationTypeSystem").setToNode("TransmitterOutputAssembler2").setToField("modulationTypeSystem"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("power").setToNode("TransmitterOutputAssembler2").setToField("power"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeCategory").setToNode("TransmitterOutputAssembler2").setToField("radioEntityTypeCategory"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeCountry").setToNode("TransmitterOutputAssembler2").setToField("radioEntityTypeCountry"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeDomain").setToNode("TransmitterOutputAssembler2").setToField("radioEntityTypeDomain"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeKind").setToNode("TransmitterOutputAssembler3").setToField("radioEntityTypeKind"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeNomenclature").setToNode("TransmitterOutputAssembler3").setToField("radioEntityTypeNomenclature"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("radioEntityTypeNomenclatureVersion").setToNode("TransmitterOutputAssembler3").setToField("radioEntityTypeNomenclatureVersion"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("relativeAntennaLocation").setToNode("TransmitterOutputAssembler3").setToField("relativeAntennaLocation"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("transmitFrequencyBandwidth").setToNode("TransmitterOutputAssembler3").setToField("transmitFrequencyBandwidth"))
        .addChild(new ROUTE().setFromNode("TransmitterPduScriptNode").setFromField("transmitState").setToNode("TransmitterOutputAssembler3").setToField("transmitState"))
        .addChild(new ROUTE().setFromNode("TransmitterOutputAssembler1").setFromField("messageResult").setToNode("TransmitterOutput1").setToField("string"))
        .addChild(new ROUTE().setFromNode("TransmitterOutputAssembler2").setFromField("messageResult").setToNode("TransmitterOutput2").setToField("string"))
        .addChild(new ROUTE().setFromNode("TransmitterOutputAssembler3").setFromField("messageResult").setToNode("TransmitterOutput3").setToField("string"))
        .addComments(" ROUTEs for further geometry representations go here ")))
    .addComments(" ============================================================ ")
    .addComments(" Default content ")
    .addChild(new Group()
      .addChild(new Transform().setTranslation(-15.0,15.0,0.0)
        .addChild(new ProtoInstance("ReceiverPdu").setContainerField("children")))
      .addChild(new Transform().setTranslation(-15.0,-15.0,0.0)
        .addChild(new ReceiverPdu().setReceivedPower(0.0)))
      .addChild(new Transform().setTranslation(0.0,15.0,0.0)
        .addChild(new ProtoInstance("SignalPdu").setContainerField("children")))
      .addChild(new Transform().setTranslation(0.0,-15.0,0.0)
        .addChild(new SignalPdu()))
      .addChild(new Transform().setTranslation(15.0,15.0,0.0)
        .addChild(new ProtoInstance("TransmitterPdu").setContainerField("children")))
      .addChild(new Transform().setTranslation(15.0,-15.0,0.0)
        .addChild(new TransmitterPdu().setRelativeAntennaLocation(0.0,0.0,0.0).setTransmitFrequencyBandwidth(0.0)))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return RadioCommunicationsPrototypes model
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
        X3D thisExampleX3dModel = new RadioCommunicationsPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.RadioCommunicationsPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.RadioCommunicationsPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}

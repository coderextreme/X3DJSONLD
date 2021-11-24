###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='ExternProtoDeclareDefinitions.x3d',name='title'),
    meta(content='These developmental definitions provide ExternProtoDeclare examples for supported DIS PDUs. They are developmental and not needed for regular DIS usage, since they provide template outputs for the X3dToVrml97.xsl translation stylesheet. To do: add more appinfo descriptions for fields.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 January 2002',name='created'),
    meta(content='3 March 2020',name='modified'),
    meta(content='.wrl url links intentionally precede .x3d links, X3D-Edit stylesheet X3dToVrml97.xslt automatically inserts VRML97 translations of these external prototype declarations upon encountering any DIS nodes.',name='info'),
    meta(content='C:/vrtp/dis-java-vrml.jar;',name='classpath'),
    meta(content='EspduTransformPrototypes.wrl',name='reference'),
    meta(content='EspduTransformPrototypes.x3d',name='reference'),
    meta(content='mil/navy/nps/dis/EspduTransform.java',name='reference'),
    meta(content='https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============================================================ 
    children=[
    WorldInfo(title='ExternProtoDeclareDefinitions.x3d'),
    ExternProtoDeclare(appinfo='EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm usually as a child so that it stays local to an entity position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.',name='EspduTransform',url=["EspduTransformPrototypes.x3d#EspduTransform","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransform","EspduTransformPrototypes.wrl#EspduTransform","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransform"],
      #  experimental 
      #  Standard Transform fields 
      #  Entity identity 
      #  Networking configuration parameters 
      #  Further identification 
      #  Collision PDU events 
      #  Fire, Detonate PDU events 
      #  Articulation parameters are extra blocks of information, appended one by one to end of regular Espdu. 
      field=[
      field(accessType='outputOnly',appinfo='Double precision output for 64-bit Espdu translation usable by GeoLocation nodes.',name='geoCoords_changed',type='SFVec3d'),
      field(accessType='inputOnly',appinfo='Adding a node to the children field will add that node to the EspduTransform set of children. Warning: adding any node to the EspduTransform children field that is already in that child list is illegal. Warning: adding any node to the EspduTransform children that is an ancestor of that grouping is illegal.',name='addChildren',type='MFNode'),
      field(accessType='inputOnly',appinfo='The removeChildren event removes nodes from the EspduTransform children field. Any nodes in the removeChildren event that are not in the EspduTransform children list are ignored.',name='removeChildren',type='MFNode'),
      field(accessType='inputOutput',appinfo='Children nodes within translation and rotation coordinate system of EspduTransform. Hint: XML encoding can include child node(s) directly.',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='Position of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes.',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Orientation of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes.',name='rotation',type='SFRotation'),
      field(accessType='inputOutput',appinfo='Translation offset from origin of local coordinate system.',name='center',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation.',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation.',name='scaleOrientation',type='SFRotation'),
      field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='0-to-11 character label for entity.',name='marking',type='SFString'),
      field(accessType='inputOutput',appinfo='[0 65535] EntityID: unique ID for that site.',name='siteID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535] EntityID: application ID unique ID for application at that site.',name='applicationID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535] EntityID: unique ID for entity within that application.',name='entityID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='multicast address or else "localhost" listens to local defaultBridge',name='address',type='SFString'),
      field(accessType='inputOutput',appinfo='[0 65535] multicast port or else listen to local defaultBridge',name='port',type='SFInt32'),
      field(accessType='inputOutput',appinfo='Host name of multicast relay server to provide alternative connectivity if local native multicast traffic not heard.',name='multicastRelayHost',type='SFString'),
      field(accessType='inputOutput',appinfo='Connection port on multicast relay server.',name='multicastRelayPort',type='SFInt32'),
      field(accessType='inputOutput',appinfo='networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString'),
      field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkReader (listen to network as ghost entity) is true/false',name='isRemote',type='SFBool'),
      field(accessType='inputOutput',appinfo='seconds between read updates',name='readInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='seconds between write updates',name='writeInterval',type='SFTime'),
      field(accessType='outputOnly',appinfo='Indicates if the node has received a DIS message (isActive=true) or not (isActive=false). Since DIS entities can be considered inactive after some period of time (typically five seconds) either event may be received by listening nodes.',name='isActive',type='SFBool'),
      field(accessType='outputOnly',appinfo='DIS timestamp in VRML units',name='timestamp',type='SFTime'),
      field(accessType='initializeOnly',appinfo='whether RTP header is expected to be prepended to DIS packet',name='rtpHeaderExpected',type='SFBool'),
      field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
      field(accessType='inputOutput',appinfo='[0 255]',name='forceID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entityKind',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entityDomain',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='entityCountry',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entityCategory',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entitySubCategory',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entitySpecific',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 255]',name='entityExtra',type='SFInt32'),
      field(accessType='inputOutput',name='linearVelocity',type='SFVec3f'),
      field(accessType='inputOutput',name='linearAcceleration',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.',name='deadReckoning',type='SFInt32'),
      field(accessType='outputOnly',name='isCollided',type='SFBool'),
      field(accessType='outputOnly',name='collideTime',type='SFTime'),
      field(accessType='outputOnly',appinfo='[0 65535]',name='eventApplicationID',type='SFInt32'),
      field(accessType='outputOnly',appinfo='[0 65535]',name='eventEntityID',type='SFInt32'),
      field(accessType='outputOnly',appinfo='[0 65535]',name='eventNumber',type='SFInt32'),
      field(accessType='outputOnly',appinfo='[0 65535]',name='eventSiteID',type='SFInt32'),
      field(accessType='outputOnly',appinfo='[0 255]',name='collisionType',type='SFInt32'),
      field(accessType='inputOutput',name='fired1',type='SFBool'),
      field(accessType='inputOutput',name='fired2',type='SFBool'),
      field(accessType='outputOnly',name='firedTime',type='SFTime'),
      field(accessType='inputOutput',name='munitionStartPoint',type='SFVec3f'),
      field(accessType='inputOutput',name='munitionEndPoint',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='munitionApplicationID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='munitionSiteID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='munitionEntityID',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='fireMissionIndex',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='warhead',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='fuse',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='munitionQuantity',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0 65535]',name='firingRate',type='SFInt32'),
      field(accessType='inputOutput',name='firingRange',type='SFFloat'),
      field(accessType='outputOnly',name='isDetonated',type='SFBool'),
      field(accessType='outputOnly',name='detonateTime',type='SFTime'),
      field(accessType='outputOnly',name='detonationLocation',type='SFVec3f'),
      field(accessType='outputOnly',name='detonationRelativeLocation',type='SFVec3f'),
      field(accessType='outputOnly',name='detonationResult',type='SFInt32'),
      field(accessType='inputOutput',appinfo='range [0 78]. Indicates the number of appended parameters that are being used to describe articulation of various segments of the entity model.',name='articulationParameterCount',type='SFInt32'),
      field(accessType='inputOutput',appinfo='range [0 255]. The Parameter Type Designator entries in the articulationParameterDesignatorArray indicate if the the parameter record is for an articulated or attached part. It is represented by an 8-bit enumeration.',name='articulationParameterDesignatorArray',type='MFInt32'),
      field(accessType='inputOutput',appinfo='range [0 255]. The Change Indicator entries in the articulationChangeIndicatorArray indicate the change of any parameter for the associated articulated part. This is specified by an 8-bit unsigned integer. The value is initially set to zero for each exercise and is sequentially incremented by one for each change in the articulation parameters. The proper indicator is updated automatically by an X3D DIS implementation upon receipt of a set_articulationParameterValue event.',name='articulationParameterChangeIndicatorArray',type='MFInt32'),
      field(accessType='inputOutput',appinfo='range [0 65535]. The ID - Part Attached To entries in the articulationParameterIdPartAttachedToArray identify the articulated part to which this articulation parameter is attached. The value is specified by a 16-bit unsigned integer and is set to zero if the articulated part is attached directly to the entity.',name='articulationParameterIdPartAttachedToArray',type='MFInt32'),
      field(accessType='inputOutput',appinfo='range [0 255]. The Parameter Type entries in the articulationParameterTypeArray are specified by 32-bit enumeration values.',name='articulationParameterTypeArray',type='MFInt32'),
      field(accessType='inputOutput',appinfo='The Parameter Value entries in the articulationParameterArray are specified by a 64-bit field. The definition of the 64 bits is determined based on the type of parameter indicated above.',name='articulationParameterArray',type='MFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue0',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue1',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue2',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue3',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue4',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue5',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue6',type='SFFloat'),
      field(accessType='inputOnly',name='set_articulationParameterValue7',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue0_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue1_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue2_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue3_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue4_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue5_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue6_changed',type='SFFloat'),
      field(accessType='outputOnly',name='articulationParameterValue7_changed',type='SFFloat')]),
    #  ============================================================ 
    ExternProtoDeclare(appinfo='EspduTransform is a networked Grouping node that can contain most nodes. EspduTransform integrates functionality for the following DIS PDUs: EntityStatePdu CollisionPdu DetonatePdu FirePdu CreateEntity RemoveEntity.',name='EspduTransformTrace',url=["EspduTransformPrototypes.x3d#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d#EspduTransformTrace","EspduTransformPrototypes.wrl#EspduTransformTrace","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.wrl#EspduTransformTrace"],
      field=[
      field(accessType='initializeOnly',appinfo='initialize with EspduTransform USE="NodeToBeTraced"',name='espduTransformNode',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Trace text color',name='traceColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Trace text position relative to entity',name='traceOffset',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Trace text scale',name='traceFontSize',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='(not passable???) whether or not to include verbose trace comments in Java console in order to help debug network connectivity',name='traceJava',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting has verbose output',name='localTraceEnabled',type='SFBool')]),
    #  ============================================================ 
    ExternProtoDeclare(name='ReceiverPdu',url=["RadioCommunicationsPrototypes.x3d#ReceiverPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#ReceiverPdu","RadioCommunicationsPrototypes.wrl#ReceiverPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#ReceiverPdu"],
      #  Initialization fields 
      #  Generic events 
      #  RadioCommunicationsFamily events 
      #  ReceiverPdu fields 
      field=[
      field(accessType='inputOutput',appinfo='set whichGeometry to -1 for no geometry 0 for text trace 1 for default geometry',name='whichGeometry',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString'),
      field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkReader (listen to network as ghost entity) is true/false',name='isRemote',type='SFBool'),
      field(accessType='initializeOnly',name='readInterval',type='SFTime'),
      field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='[0 65535] siteID: unique ID for that site.',name='siteID',type='SFInt32'),
      field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
      field(accessType='initializeOnly',name='entityID',type='SFInt32'),
      field(accessType='initializeOnly',name='address',type='SFString'),
      field(accessType='initializeOnly',name='port',type='SFInt32'),
      field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
      field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='whether RTP header is expected to be prepended to DIS packet',name='rtpHeaderExpected',type='SFBool'),
      field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
      field(accessType='initializeOnly',name='trace',type='SFBool'),
      field(accessType='outputOnly',name='active',type='SFBool'),
      field(accessType='outputOnly',name='timestamp',type='SFTime'),
      field(accessType='outputOnly',name='radioID',type='SFInt32'),
      field(accessType='outputOnly',name='receivedPower',type='SFFloat'),
      field(accessType='outputOnly',name='receiverState',type='SFInt32'),
      field(accessType='outputOnly',name='transmitterSiteID',type='SFInt32'),
      field(accessType='outputOnly',name='transmitterApplicationID',type='SFInt32'),
      field(accessType='outputOnly',name='transmitterEntityID',type='SFInt32'),
      field(accessType='outputOnly',name='transmitterRadioID',type='SFInt32')]),
    #  ============================================================ 
    ExternProtoDeclare(name='SignalPdu',url=["RadioCommunicationsPrototypes.x3d#SignalPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#SignalPdu","RadioCommunicationsPrototypes.wrl#SignalPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#SignalPdu"],
      #  set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry 
      #  Initialization fields 
      #  Generic events 
      #  RadioCommunicationsFamily events 
      #  SignalPdu fields 
      field=[
      field(accessType='inputOutput',name='whichGeometry',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString'),
      field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkReader (listen to network as ghost entity) is true/false',name='isRemote',type='SFBool'),
      field(accessType='initializeOnly',name='readInterval',type='SFTime'),
      field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='[0 65535] siteID: unique ID for that site.',name='siteID',type='SFInt32'),
      field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
      field(accessType='initializeOnly',name='entityID',type='SFInt32'),
      field(accessType='initializeOnly',name='address',type='SFString'),
      field(accessType='initializeOnly',name='port',type='SFInt32'),
      field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
      field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='whether RTP header is expected to be prepended to DIS packet',name='rtpHeaderExpected',type='SFBool'),
      field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
      field(accessType='initializeOnly',name='trace',type='SFBool'),
      field(accessType='outputOnly',name='active',type='SFBool'),
      field(accessType='outputOnly',name='timestamp',type='SFTime'),
      field(accessType='outputOnly',name='radioID',type='SFInt32'),
      field(accessType='outputOnly',name='encodingScheme',type='SFInt32'),
      field(accessType='outputOnly',name='tdlType',type='SFInt32'),
      field(accessType='outputOnly',name='sampleRate',type='SFInt32'),
      field(accessType='outputOnly',name='samples',type='SFInt32'),
      field(accessType='outputOnly',name='dataLength',type='SFInt32'),
      field(accessType='outputOnly',name='data00',type='SFInt32'),
      field(accessType='outputOnly',name='data01',type='SFInt32'),
      field(accessType='outputOnly',name='data02',type='SFInt32'),
      field(accessType='outputOnly',name='data03',type='SFInt32'),
      field(accessType='outputOnly',name='data04',type='SFInt32'),
      field(accessType='outputOnly',name='data05',type='SFInt32'),
      field(accessType='outputOnly',name='data06',type='SFInt32'),
      field(accessType='outputOnly',name='data07',type='SFInt32'),
      field(accessType='outputOnly',name='data08',type='SFInt32'),
      field(accessType='outputOnly',name='data09',type='SFInt32'),
      field(accessType='outputOnly',name='data10',type='SFInt32')]),
    #  ============================================================ 
    ExternProtoDeclare(name='TransmitterPdu',url=["RadioCommunicationsPrototypes.x3d#TransmitterPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d#TransmitterPdu","RadioCommunicationsPrototypes.wrl#TransmitterPdu","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.wrl#TransmitterPdu"],
      #  set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry 
      #  Initialization fields 
      #  Generic events 
      #  RadioCommunicationsFamily events 
      #  TransmitterPdu fields 
      field=[
      field(accessType='inputOutput',name='whichGeometry',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='networkMode: standAlone (ignore network but still respond to local events) networkReader (listen to network as ghost entity) networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString'),
      field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkWriter (output to network as master entity at writeInterval) is true/false',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='Whether networkMode networkReader (listen to network as ghost entity) is true/false',name='isRemote',type='SFBool'),
      field(accessType='initializeOnly',name='readInterval',type='SFTime'),
      field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
      field(accessType='inputOutput',appinfo='[0 65535] siteID: unique ID for that site.',name='siteID',type='SFInt32'),
      field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
      field(accessType='initializeOnly',name='entityID',type='SFInt32'),
      field(accessType='initializeOnly',name='address',type='SFString'),
      field(accessType='initializeOnly',name='port',type='SFInt32'),
      field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
      field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
      field(accessType='initializeOnly',appinfo='whether RTP header is expected to be prepended to DIS packet',name='rtpHeaderExpected',type='SFBool'),
      field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
      field(accessType='initializeOnly',name='trace',type='SFBool'),
      field(accessType='outputOnly',name='active',type='SFBool'),
      field(accessType='outputOnly',name='timestamp',type='SFTime'),
      field(accessType='outputOnly',name='radioID',type='SFInt32'),
      field(accessType='outputOnly',name='antennaLocation',type='SFVec3f'),
      field(accessType='outputOnly',name='antennaPatternLength',type='SFInt32'),
      field(accessType='outputOnly',name='antennaPatternType',type='SFInt32'),
      field(accessType='outputOnly',name='cryptoKeyID',type='SFInt32'),
      field(accessType='outputOnly',name='cryptoSytem',type='SFInt32'),
      field(accessType='outputOnly',name='frequency',type='SFInt32'),
      field(accessType='outputOnly',name='inputSource',type='SFInt32'),
      field(accessType='outputOnly',name='lengthOfModulationParameters',type='SFInt32'),
      field(accessType='outputOnly',name='modulationTypeDetail',type='SFInt32'),
      field(accessType='outputOnly',name='modulationTypeMajor',type='SFInt32'),
      field(accessType='outputOnly',name='modulationTypeSpreadSpectrum',type='SFInt32'),
      field(accessType='outputOnly',name='modulationTypeSystem',type='SFInt32'),
      field(accessType='outputOnly',name='power',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeCategory',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeCountry',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeDomain',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeKind',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeNomenclature',type='SFInt32'),
      field(accessType='outputOnly',name='radioEntityTypeNomenclatureVersion',type='SFInt32'),
      field(accessType='outputOnly',name='relativeAntennaLocation',type='SFVec3f'),
      field(accessType='outputOnly',name='transmitFrequencyBandwidth',type='SFInt32'),
      field(accessType='outputOnly',name='transmitState',type='SFInt32')]),
    #  ============================================================ 
    #  Redirection text in case a user examines this PROTO file via a 3D browser: 
    Viewpoint(description='ExternProtoDeclare Definitions',position=(0,0,8)),
    Anchor(description='EspduTransform Example',parameter=["target=_blank"],url=["EspduTransformExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.x3d","EspduTransformExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["ExternProtoDeclareDefinitions.x3d","is a Prototype (PROTO) definition file.","","To see an example scene using this node,","click the text and view","EspduTransformExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExternProtoDeclareDefinitions.py")

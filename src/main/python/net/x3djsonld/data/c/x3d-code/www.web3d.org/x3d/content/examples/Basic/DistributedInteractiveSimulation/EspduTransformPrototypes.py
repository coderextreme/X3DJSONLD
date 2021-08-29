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
    component(level=1,name='DIS'),
    meta(content='EspduTransformPrototypes.x3d',name='title'),
    meta(content='Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState, Collision, Detonate, Fire, CreateEntity and RemoveEntity. Also contains EspduTransformTrace which compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.',name='description'),
    meta(content='Don Brutzman, Don McGregor, and Duane Davis',name='creator'),
    meta(content='7 December 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development but mostly complete. need articulationParameters and miscellany fields connected. ROUTE firstFired1/2 to sound node?',name='warning'),
    meta(content='/vrtp/mil/navy/nps/dis/EspduTransformPROTO.wrl',name='reference'),
    meta(content='/vrtp/mil/navy/nps/dis/EspduTransform.java',name='reference'),
    meta(content='https://www.web3d.org/WorkingGroups/vrtp/mil/navy/nps/dis/EspduTransform.java',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ExternProtoDeclareDefinitions.x3d',name='reference'),
    meta(content='DIS Find-It-Fast Guide at Simulation Interoperability Standards Organization (SISO)',name='reference'),
    meta(content='available via http://discussions.sisostds.org/default.asp?action=9&boardid=2&read=40321&fid=32',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransformPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============================================================ 
    #  Why a prototype rather than an Inline file? Prototyping allows replacement of standard VRML nodes (e.g. Transform) and can also expose events and fields to the encapsulating top-level scene. 
    #  ============================================================ 
    children=[
    ProtoDeclare(appinfo='EspduTransform is a networked Grouping node that can contain most nodes. Prototype definition for EspduTransform which handles network communications for multiple DIS Prototype Data Units (PDUs): EntityState Collision Detonate Fire CreateEntity and RemoveEntity.',name='EspduTransform',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',appinfo='Double precision output for 64-bit Espdu translation usable by georeferenced nodes.',name='geoCoords_changed',type='SFVec3d'),
        #  Standard Transform fields 
        field(accessType='inputOnly',appinfo="Adding a node to the children field will add that node to the EspduTransform's set of children. Warning: adding any node to the EspduTransform's children field that is already in that child list is illegal. Warning: adding any node to the EspduTransform's children that is an ancestor of that grouping is illegal.",name='addChildren',type='MFNode'),
        field(accessType='inputOnly',appinfo="The removeChildren event removes nodes from the EspduTransform's children field. Any nodes in the removeChildren event that are not in the EspduTransform's children list are ignored.",name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='Children nodes within translation and rotation coordinate system of EspduTransform. Hint: XML encoding can include child node(s) directly.',name='children',type='MFNode',
          #  default initialization is NULL node array 
          ),
        field(accessType='inputOutput',appinfo='Position of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes.',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Orientation of children relative to local coordinate system usually read from (or written to) remote networked EspduTransform nodes.',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',appinfo='Translation offset from origin of local coordinate system.',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation.',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Non-uniform x-y-z scale of child coordinate system adjusted by center and scaleOrientation.',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        #  Entity identity 
        field(accessType='inputOutput',appinfo='0-to-11 character label for entity.',name='marking',type='SFString'),
        field(accessType='inputOutput',appinfo='[065535] EntityID: unique ID for that site.',name='siteID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535] EntityID: application ID unique ID for application at that site.',name='applicationID',type='SFInt32',value=1),
        field(accessType='inputOutput',appinfo='[065535] EntityID: unique ID for entity within that application.',name='entityID',type='SFInt32',value=0),
        #  Networking configuration parameters 
        field(accessType='inputOutput',appinfo='multicast address or else "localhost" listens to local defaultBridge',name='address',type='SFString',value='localhost'),
        field(accessType='inputOutput',appinfo='[065535] multicast port or else listen to local defaultBridge',name='port',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='Host name of multicast relay server to provide alternative connectivity if local native multicast traffic not heard.',name='multicastRelayHost',type='SFString'),
        field(accessType='inputOutput',appinfo='Connection port on multicast relay server.',name='multicastRelayPort',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='networkMode: standAlone (ignore network but still respond to local events), networkReader (listen to network as ghost entity), networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString',value='standAlone'),
        field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false",name='isMaster',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false",name='isRemote',type='SFBool'),
        field(accessType='inputOutput',appinfo='seconds between read updates',name='readInterval',type='SFTime',value=0.1),
        field(accessType='inputOutput',appinfo='seconds between write updates',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='outputOnly',appinfo='Indicates if the node has received a DIS message (isActive=true) or not (isActive=false). Since DIS entities can be considered inactive after some period of time (typically five seconds) either event may be received by listening nodes.',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='DIS timestamp in VRML units',name='timestamp',type='SFTime'),
        field(accessType='initializeOnly',appinfo='whether RTP header is expected to be prepended to DIS packet',name='rtpHeaderExpected',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
        #  Further identification 
        field(accessType='inputOutput',appinfo='[0255]',name='forceID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entityKind',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entityDomain',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='entityCountry',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entityCategory',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entitySubCategory',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entitySpecific',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[0255]',name='entityExtra',type='SFInt32',value=0),
        field(accessType='inputOutput',name='linearVelocity',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='linearAcceleration',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Dead reckoning algorithm being used to project position/orientation with velocities/accelerations.',name='deadReckoning',type='SFInt32',value=0),
        #  Collision PDU events 
        field(accessType='outputOnly',name='isCollided',type='SFBool'),
        field(accessType='outputOnly',name='collideTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='[065535]',name='eventApplicationID',type='SFInt32'),
        field(accessType='outputOnly',appinfo='[065535]',name='eventSiteID',type='SFInt32'),
        field(accessType='outputOnly',appinfo='[065535]',name='eventEntityID',type='SFInt32'),
        field(accessType='outputOnly',appinfo='[0255]',name='collisionType',type='SFInt32'),
        field(accessType='outputOnly',appinfo='[065535]',name='eventNumber',type='SFInt32'),
        #  Fire, Detonate PDU events 
        field(accessType='inputOutput',name='fired1',type='SFBool',value=False),
        field(accessType='inputOutput',name='fired2',type='SFBool',value=False),
        field(accessType='outputOnly',name='firedTime',type='SFTime'),
        field(accessType='inputOutput',name='munitionStartPoint',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='munitionEndPoint',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='[065535]',name='munitionApplicationID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='munitionSiteID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='munitionEntityID',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='fireMissionIndex',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='warhead',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='fuse',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='[065535]',name='munitionQuantity',type='SFInt32',value=1),
        field(accessType='inputOutput',appinfo='[065535]',name='firingRate',type='SFInt32',value=1),
        field(accessType='inputOutput',name='firingRange',type='SFFloat',value=0),
        field(accessType='outputOnly',name='isDetonated',type='SFBool'),
        field(accessType='outputOnly',name='detonateTime',type='SFTime'),
        field(accessType='outputOnly',name='detonationLocation',type='SFVec3f'),
        field(accessType='outputOnly',name='detonationRelativeLocation',type='SFVec3f'),
        field(accessType='outputOnly',name='detonationResult',type='SFInt32'),
        #  Articulation parameters are extra blocks of information, appended one by one to end of regular Espdu. 
        field(accessType='inputOutput',appinfo='range [078]. Indicates the number of appended parameters that are being used to describe articulation of various segments of the entity model.',name='articulationParameterCount',type='SFInt32',value=0),
        field(accessType='inputOutput',appinfo='range [0255]. The Parameter Type Designator entries in the articulationParameterDesignatorArray indicate if the the parameter record is for an articulated or attached part. It is represented by an 8-bit enumeration.',name='articulationParameterDesignatorArray',type='MFInt32',
          #  default initialization is NULL node array 
          ),
        field(accessType='inputOutput',appinfo='range [0255]. The Change Indicator entries in the articulationChangeIndicatorArray indicate the change of any parameter for the associated articulated part. This is specified by an 8-bit unsigned integer. The value is initially set to zero for each exercise and is sequentially incremented by one for each change in the articulation parameters. The proper indicator is updated automatically by an X3D DIS implementation upon receipt of a set_articulationParameterValue event.',name='articulationParameterChangeIndicatorArray',type='MFInt32',
          #  default initialization is NULL node array 
          ),
        field(accessType='inputOutput',appinfo='range [065535]. The ID - Part Attached To entries in the articulationParameterIdPartAttachedToArray identify the articulated part to which this articulation parameter is attached. The value is specified by a 16-bit unsigned integer and is set to zero if the articulated part is attached directly to the entity.',name='articulationParameterIdPartAttachedToArray',type='MFInt32',
          #  default initialization is NULL node array 
          ),
        field(accessType='inputOutput',appinfo='range [0255]. The Parameter Type entries in the articulationParameterTypeArray are specified by 32-bit enumeration values.',name='articulationParameterTypeArray',type='MFInt32',
          #  default initialization is NULL node array 
          ),
        field(accessType='inputOutput',appinfo='The Parameter Value entries in the articulationParameterArray are specified by a 64-bit field. The definition of the 64 bits is determined based on the type of parameter indicated above.',name='articulationParameterArray',type='MFFloat',
          #  default initialization is NULL node array 
          ),
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
      ProtoBody=ProtoBody(
        #  First node inside a PrototypeDeclaration is the node type of the ProtoInstance 
        children=[
        Transform(DEF='DisTransformNode',
          IS=IS(
            connect=[
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')])),
        Group(DEF='CacheExposedFieldNodes',
          #  This first set of nodes are not rendered and only hold exposedField state. This hack is necessary to work around the restriction on exposedFields directly in Script nodes. 
          children=[
          Anchor(DEF='MarkingState',
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='marking')])),
          Switch(DEF='SiteIdState',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='siteID')])),
          Switch(DEF='ApplicationIdState',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='applicationID')])),
          Switch(DEF='EntityIdState',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='entityID')])),
          Anchor(DEF='NetworkModeState',
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='networkMode')])),
          NavigationInfo(DEF='ReaderState',
            IS=IS(
              connect=[
              connect(nodeField='headlight',protoField='isRemote')])),
          NavigationInfo(DEF='MasterState',
            IS=IS(
              connect=[
              connect(nodeField='headlight',protoField='isMaster')])),
          NavigationInfo(DEF='LocalState',
            IS=IS(
              connect=[
              connect(nodeField='headlight',protoField='isStandAlone')])),
          TimeSensor(DEF='ReadWriteIntervalState',
            IS=IS(
              connect=[
              connect(nodeField='startTime',protoField='readInterval'),
              connect(nodeField='stopTime',protoField='writeInterval')])),
          Transform(DEF='MunitionPointNode',
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='munitionStartPoint'),
              connect(nodeField='center',protoField='munitionEndPoint')])),
          Switch(whichChoice=-1,
            children=[
            Anchor(DEF='AddressHolder',
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='address')])),
            Anchor(DEF='MulticastAddressHolder',
              IS=IS(
                connect=[
                connect(nodeField='description',protoField='multicastRelayHost')])),
            Switch(DEF='PortHolder',whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='port')])),
            Switch(DEF='MulticastPortHolder',whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='multicastRelayPort')])),
            Switch(DEF='ArticulationParameterCountHolder',whichChoice=-1,
              IS=IS(
                connect=[
                connect(nodeField='whichChoice',protoField='articulationParameterCount')])),
            ScalarInterpolator(DEF='ArticulationParameterArrayHolder',
              IS=IS(
                connect=[
                connect(nodeField='keyValue',protoField='articulationParameterArray')]))])]),
        #  Nonrendering Script that connects network communications to interfaces 
        Group(DEF='NetworkingScriptAndReadWriteClocks',
          #  Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct 
          #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
          children=[
          Script(DEF='EspduScriptNode',directOutput=True,mustEvaluate=True,url=["EspduTransform.class","/vrtp/mil/navy/nps/dis/EspduTransform.class","dis-java-vrml.jar#EspduTransform.class","/vrtp/dis-java-vrml.jar#EspduTransform.class","file:///c:/vrtp/mil/navy/nps/dis/EspduTransform.class","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/EspduTransform.class"],
            #  Generic events 
            field=[
            field(accessType='outputOnly',appinfo='Double precision outputs for 64-bit Espdu translation.',name='geoCoords_changed',type='SFVec3d'),
            field(accessType='initializeOnly',name='traceJava',type='SFBool',value=False),
            field(accessType='inputOnly',appinfo='Used by TimeSensor clocks to trigger processEvents() method.',name='update',type='SFTime'),
            field(accessType='initializeOnly',name='transformNode',type='SFNode',
              children=[
              Transform(USE='DisTransformNode')]),
            field(accessType='initializeOnly',name='markingNode',type='SFNode',
              children=[
              Anchor(USE='MarkingState')]),
            #  Initialization fields 
            field(accessType='initializeOnly',name='siteIdNode',type='SFNode',
              children=[
              Switch(USE='SiteIdState',whichChoice=-1)]),
            field(accessType='initializeOnly',name='applicationIdNode',type='SFNode',
              children=[
              Switch(USE='ApplicationIdState',whichChoice=-1)]),
            field(accessType='initializeOnly',name='entityIdNode',type='SFNode',
              children=[
              Switch(USE='EntityIdState',whichChoice=-1)]),
            field(accessType='initializeOnly',name='addressNode',type='SFNode',
              children=[
              Anchor(USE='AddressHolder')]),
            field(accessType='initializeOnly',name='multicastAddressNode',type='SFNode',
              children=[
              Anchor(USE='MulticastAddressHolder')]),
            field(accessType='initializeOnly',name='portNode',type='SFNode',
              children=[
              Switch(USE='PortHolder',whichChoice=-1)]),
            field(accessType='initializeOnly',name='multicastPortNode',type='SFNode',
              children=[
              Switch(USE='MulticastPortHolder',whichChoice=-1)]),
            field(accessType='initializeOnly',name='networkModeNode',type='SFNode',
              children=[
              Anchor(USE='NetworkModeState')]),
            field(accessType='initializeOnly',name='readWriteIntervalNode',type='SFNode',
              children=[
              TimeSensor(USE='ReadWriteIntervalState')]),
            field(accessType='outputOnly',name='isActive',type='SFBool'),
            field(accessType='outputOnly',name='timestamp',type='SFTime'),
            field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool'),
            field(accessType='outputOnly',name='isRtpHeaderHeard',type='SFBool'),
            field(accessType='outputOnly',name='isCollided',type='SFBool'),
            field(accessType='outputOnly',name='collideTime',type='SFTime'),
            field(accessType='outputOnly',name='isDetonated',type='SFBool'),
            field(accessType='outputOnly',name='detonateTime',type='SFTime'),
            field(accessType='outputOnly',name='firedTime',type='SFTime'),
            field(accessType='initializeOnly',name='munitionPointNode',type='SFNode',
              children=[
              Transform(USE='MunitionPointNode')]),
            field(accessType='initializeOnly',name='articulationParameterCountNode',type='SFNode',
              children=[
              Switch(USE='ArticulationParameterCountHolder',whichChoice=-1)]),
            field(accessType='initializeOnly',name='articulationParameterArrayNode',type='SFNode',
              children=[
              ScalarInterpolator(USE='ArticulationParameterArrayHolder')]),
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
            field(accessType='outputOnly',name='articulationParameterValue7_changed',type='SFFloat')],
            IS=IS(
              connect=[
              connect(nodeField='geoCoords_changed',protoField='geoCoords_changed'),
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='timestamp',protoField='timestamp'),
              connect(nodeField='rtpHeaderExpected',protoField='rtpHeaderExpected'),
              connect(nodeField='isRtpHeaderHeard',protoField='isRtpHeaderHeard'),
              connect(nodeField='isCollided',protoField='isCollided'),
              connect(nodeField='collideTime',protoField='collideTime'),
              connect(nodeField='isDetonated',protoField='isDetonated'),
              connect(nodeField='detonateTime',protoField='detonateTime'),
              connect(nodeField='firedTime',protoField='firedTime'),
              connect(nodeField='set_articulationParameterValue0',protoField='set_articulationParameterValue0'),
              connect(nodeField='set_articulationParameterValue1',protoField='set_articulationParameterValue1'),
              connect(nodeField='set_articulationParameterValue2',protoField='set_articulationParameterValue2'),
              connect(nodeField='set_articulationParameterValue3',protoField='set_articulationParameterValue3'),
              connect(nodeField='set_articulationParameterValue4',protoField='set_articulationParameterValue4'),
              connect(nodeField='set_articulationParameterValue5',protoField='set_articulationParameterValue5'),
              connect(nodeField='set_articulationParameterValue6',protoField='set_articulationParameterValue6'),
              connect(nodeField='set_articulationParameterValue7',protoField='set_articulationParameterValue7'),
              connect(nodeField='articulationParameterValue0_changed',protoField='articulationParameterValue0_changed'),
              connect(nodeField='articulationParameterValue1_changed',protoField='articulationParameterValue1_changed'),
              connect(nodeField='articulationParameterValue2_changed',protoField='articulationParameterValue2_changed'),
              connect(nodeField='articulationParameterValue3_changed',protoField='articulationParameterValue3_changed'),
              connect(nodeField='articulationParameterValue4_changed',protoField='articulationParameterValue4_changed'),
              connect(nodeField='articulationParameterValue5_changed',protoField='articulationParameterValue5_changed'),
              connect(nodeField='articulationParameterValue6_changed',protoField='articulationParameterValue6_changed'),
              connect(nodeField='articulationParameterValue7_changed',protoField='articulationParameterValue7_changed')])),
          #  Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). 
          TimeSensor(DEF='ReadIntervalClock',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='readInterval')])),
          TimeSensor(DEF='WriteIntervalClock',loop=True,
            IS=IS(
              connect=[
              connect(nodeField='cycleInterval',protoField='writeInterval')])),
          ROUTE(fromField='cycleTime',fromNode='ReadIntervalClock',toField='update',toNode='EspduScriptNode'),
          ROUTE(fromField='cycleTime',fromNode='WriteIntervalClock',toField='update',toNode='EspduScriptNode')])])),
    #  ============================================================ 
    ProtoDeclare(appinfo="EspduTransformTrace provides 3D trace values for a corresponding EspduTransorm usually as a child so that it stays local to an entity's position. EspduTransformTrace compatibly adds billboarded text-trace capabilities for run-time debugging inside a scene.",name='EspduTransformTrace',
      ProtoInterface=ProtoInterface(
        #  Special trace fields (beyond regular EspduTransform signature) 
        field=[
        field(accessType='initializeOnly',appinfo='initialize with <EspduTransform USE="NodeToBeTraced"/> so that networked data is passed by reference',name='espduTransformNode',type='SFNode',
          #  provide <EspduTransform USE="nodeName"/> i.e. copy-by=reference node to initialize 
          ),
        field(accessType='initializeOnly',appinfo='Trace text color',name='traceColor',type='SFColor',value=(1,0.4,0.05)),
        field(accessType='initializeOnly',appinfo='Trace text position relative to entity',name='traceOffset',type='SFVec3f',value=(0,2.5,0)),
        field(accessType='initializeOnly',appinfo='Trace text scale',name='traceFontSize',type='SFFloat',value=0.8),
        field(accessType='initializeOnly',appinfo='whether or not to include verbose trace comments in Java console in order to help debug network connectivity',name='traceJava',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting is visible inside the X3D scene',name='localTraceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Group(DEF='PrimaryControlScripts',
            #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
            #  OverriddenDefaultEspduTransformNode 
            children=[
            Script(DEF='TraceScript',directOutput=True,mustEvaluate=True,
              field=[
              field(accessType='initializeOnly',appinfo='initialize with <EspduTransform USE="NodeToBeTraced"/>',name='espduTransformNode',type='SFNode'),
              field(accessType='initializeOnly',appinfo='Trace text color',name='traceColor',type='SFColor'),
              field(accessType='initializeOnly',appinfo='Trace text position relative to entity',name='traceOffset',type='SFVec3f'),
              field(accessType='initializeOnly',appinfo='Trace text scale',name='traceFontSize',type='SFFloat'),
              field(accessType='initializeOnly',appinfo='(not passable???) whether or not to include verbose trace comments in Java console in order to help debug network connectivity',name='traceJava',type='SFBool'),
              field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting has verbose output',name='localTraceEnabled',type='SFBool'),
              field(accessType='inputOnly',name='touched',type='SFBool'),
              field(accessType='inputOnly',appinfo='Used by TimeSensor clocks to trigger processEvents() method.',name='update',type='SFTime'),
              #  Changed-value outputs 
              field(accessType='outputOnly',name='marking',type='SFString'),
              field(accessType='outputOnly',name='readInterval',type='SFTime'),
              field(accessType='outputOnly',name='writeInterval',type='SFTime'),
              field(accessType='outputOnly',name='fired1',type='SFBool'),
              field(accessType='outputOnly',name='fired2',type='SFBool'),
              field(accessType='outputOnly',name='fireTime',type='SFTime'),
              field(accessType='outputOnly',name='traceString',type='MFString'),
              #  other internal state variables 
              field(accessType='initializeOnly',name='prior_marking',type='SFString'),
              field(accessType='initializeOnly',name='prior_readInterval',type='SFTime',value=-1),
              field(accessType='initializeOnly',name='prior_writeInterval',type='SFTime',value=-1),
              field(accessType='initializeOnly',name='prior_fired1',type='SFBool',value=False),
              field(accessType='initializeOnly',name='prior_fired2',type='SFBool',value=False),
              field(accessType='initializeOnly',name='prior_translation',type='SFVec3f',value=(0,0,0)),
              field(accessType='initializeOnly',name='prior_geoCoords_changed',type='SFVec3d',value=(0,0,0))],
              IS=IS(
                connect=[
                connect(nodeField='espduTransformNode',protoField='espduTransformNode'),
                connect(nodeField='traceColor',protoField='traceColor'),
                connect(nodeField='traceOffset',protoField='traceOffset'),
                connect(nodeField='traceFontSize',protoField='traceFontSize'),
                connect(nodeField='traceJava',protoField='traceJava'),
                connect(nodeField='localTraceEnabled',protoField='localTraceEnabled')])),
            #  Clocks stimulate the processEvents() method 
            TimeSensor(DEF='ReadIntervalTraceClock',loop=True),
            ROUTE(fromField='readInterval',fromNode='TraceScript',toField='cycleInterval',toNode='ReadIntervalTraceClock'),
            ROUTE(fromField='cycleTime',fromNode='ReadIntervalTraceClock',toField='update',toNode='TraceScript'),
            TimeSensor(DEF='WriteIntervalTraceClock',loop=True),
            ROUTE(fromField='writeInterval',fromNode='TraceScript',toField='cycleInterval',toNode='WriteIntervalTraceClock'),
            ROUTE(fromField='cycleTime',fromNode='WriteIntervalTraceClock',toField='update',toNode='TraceScript'),
            #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
            Script(DEF='DEBUG_JAVASCRIPT',directOutput=True,
              field=[
              field(accessType='initializeOnly',appinfo='initialize with <EspduTransform USE="NodeToBeTraced"/>',name='espduTransformNode',type='SFNode'),
              field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting has verbose output',name='localTraceEnabled',type='SFBool'),
              field(accessType='inputOnly',name='articulationParameterCount',type='SFInt32'),
              field(accessType='outputOnly',name='MFmarking',type='MFString'),
              field(accessType='inputOnly',name='set_rotation',type='SFRotation'),
              field(accessType='inputOnly',name='timestamp',type='SFTime'),
              field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
              field(accessType='inputOnly',name='detonated',type='SFBool'),
              field(accessType='outputOnly',name='marking_address_text',type='MFString'),
              field(accessType='outputOnly',name='result',type='SFBool'),
              field(accessType='initializeOnly',name='entityID',type='SFInt32',value=0),
              field(accessType='outputOnly',name='translation_text',type='MFString'),
              field(accessType='initializeOnly',name='port',type='SFInt32',value=0),
              field(accessType='inputOnly',name='collided',type='SFBool'),
              field(accessType='inputOnly',name='rtpHeaderHeard',type='SFBool'),
              field(accessType='outputOnly',name='rotation_text',type='MFString'),
              field(accessType='initializeOnly',name='applicationID',type='SFInt32',value=0),
              field(accessType='initializeOnly',name='address',type='SFString'),
              field(accessType='initializeOnly',name='active',type='SFBool',value=True),
              field(accessType='inputOnly',name='touch',type='SFTime'),
              field(accessType='initializeOnly',name='marking',type='SFString'),
              field(accessType='initializeOnly',name='siteID',type='SFInt32',value=0)],
              IS=IS(
                connect=[
                connect(nodeField='espduTransformNode',protoField='espduTransformNode'),
                connect(nodeField='localTraceEnabled',protoField='localTraceEnabled')]))]),
          Group(DEF='TouchToActivateGroup',
            children=[
            TouchSensor(DEF='ActivationTouchSensor',description='Touch trace text to toggle simple or verbose'),
            ROUTE(fromField='isActive',fromNode='ActivationTouchSensor',toField='touched',toNode='TraceScript'),
            LOD(range=[300.0,3000.0,40000.0],
              children=[
              Transform(
                IS=IS(
                  connect=[
                  connect(nodeField='translation',protoField='traceOffset')]),
                children=[
                Billboard(
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(DEF='TextColor',diffuseColor=(0,0,0),
                        IS=IS(
                          connect=[
                          connect(nodeField='emissiveColor',protoField='traceColor')]))),
                    geometry=Text(DEF='TraceText',
                      fontStyle=FontStyle(DEF='TraceFont',justify=["MIDDLE","MIDDLE"],
                        IS=IS(
                          connect=[
                          connect(nodeField='size',protoField='traceFontSize')])))),
                  ROUTE(fromField='traceString',fromNode='TraceScript',toField='string',toNode='TraceText'),
                  Transform(translation=(0.0,-0.25,0.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='TextColor')),
                      geometry=Text(DEF='DEBUG_ROTATION',
                        fontStyle=FontStyle(USE='TraceFont')))]),
                  Transform(translation=(0.0,-0.5,0.0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='TextColor')),
                      geometry=Text(DEF='DEBUG_MARKING_ADDRESS',
                        fontStyle=FontStyle(USE='TraceFont')))])])]),
              WorldInfo(),
              Billboard(axisOfRotation=(0.0,0.0,0.0),
                children=[
                Transform(translation=(0.0,800.0,0.0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='TextColor')),
                    geometry=Text(DEF='LONG_RANGE_MARKING',
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=125.0,style_='BOLD')))]),
                Transform(translation=(0.0,40.0,0.0),
                  children=[
                  Shape(
                    appearance=Appearance(
                      material=Material(USE='TextColor')),
                    geometry=Box(size=(50.0,50.0,50.0)))])]),
              WorldInfo(),])]),
          Group(DEF='LineOfFireGroup',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(0.3,0.15,0.15))),
              geometry=IndexedLineSet(colorIndex=[0,1,-1],coordIndex=[0,1,-1],
                color=Color(color=[(0.0,1.0,0.0),(1.0,0.0,0.0)]),
                coord=Coordinate(DEF='LineOfFireCoordinateNode',point=[(0.0,0.0,0.0),(0.0,0.0,20.0)]))),
            #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
            Script(DEF='SetFireLineEndpoints',
              field=[
              field(accessType='inputOnly',name='set_munitionStartPoint',type='SFVec3f'),
              field(accessType='inputOnly',name='set_munitionEndPoint',type='SFVec3f'),
              field(accessType='initializeOnly',name='holdArray',type='MFVec3f',
                #  default initialization is NULL node array 
                ),
              field(accessType='outputOnly',name='pointArray',type='MFVec3f',
                #  default initialization is NULL node array 
                ),
              field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting has verbose output',name='localTraceEnabled',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='localTraceEnabled',protoField='localTraceEnabled')])),
            ROUTE(fromField='pointArray',fromNode='SetFireLineEndpoints',toField='set_point',toNode='LineOfFireCoordinateNode'),
            #  Needed? 
            #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
            Script(DEF='FireSequenceScript',mustEvaluate=True,
              field=[
              field(accessType='inputOnly',name='set_fired1',type='SFBool'),
              field(accessType='inputOnly',name='set_fired2',type='SFBool'),
              field(accessType='inputOnly',name='fireTime',type='SFTime'),
              field(accessType='outputOnly',name='firstFired1',type='SFBool'),
              field(accessType='outputOnly',name='firstFired2',type='SFBool'),
              field(accessType='initializeOnly',appinfo='Whether EspduTransformTrace debug scripting has verbose output',name='localTraceEnabled',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='localTraceEnabled',protoField='localTraceEnabled')])),
            ROUTE(fromField='fired1',fromNode='TraceScript',toField='set_fired1',toNode='FireSequenceScript'),
            ROUTE(fromField='fired2',fromNode='TraceScript',toField='set_fired2',toNode='FireSequenceScript'),
            ROUTE(fromField='fireTime',fromNode='TraceScript',toField='fireTime',toNode='FireSequenceScript')]
            #  ROUTE firstFired1/2 to sound node? 
            )])])),
    #  ============================================================ 
    #  Begin rendered scene 
    #  Ensure that instances of this node are placed at the top-most level and are not translated away from the local world coordinates origin. 
    EspduTransform(DEF='EspduTrans',address='224.2.181.145',marking='Example PDU',networkMode='networkReader',port=62040,readInterval=10,writeInterval=10,
      children=[
      Viewpoint(description='moving viewpoint'),
      Shape(
        geometry=Text(string=["EspduTransform body goes here"],
          fontStyle=FontStyle(DEF='FontJustifyMiddle',justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.6,0.6))))]
      #  Typically place EspduTransformTrace as a child of corresponding EspduTransform so that outputs are positioned relatively. 
      ),
    Transform(DEF='TraceTransform',
      #  EspduTransformTrace cannot be a direct child of EspduTransform or a directed-acyclic graph (DAG) error occurs 
      #  EspduTransformTrace must be translated for trace text to stay local to parent EspduTransform 
      children=[
      ProtoInstance(name='EspduTransformTrace',
        fieldValue=[
        fieldValue(name='espduTransformNode',
          children=[
          EspduTransform(USE='EspduTrans')]),
        fieldValue(name='traceColor',value=(0.9,0.4,0.2)),
        fieldValue(name='traceFontSize',value=0.8),
        fieldValue(name='traceJava',value=True),
        fieldValue(name='localTraceEnabled',value=True)]),
      ROUTE(fromField='translation',fromNode='EspduTrans',toField='set_translation',toNode='TraceTransform'),
      ROUTE(fromField='rotation',fromNode='EspduTrans',toField='set_rotation',toNode='TraceTransform')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EspduTransformPrototypes.py")

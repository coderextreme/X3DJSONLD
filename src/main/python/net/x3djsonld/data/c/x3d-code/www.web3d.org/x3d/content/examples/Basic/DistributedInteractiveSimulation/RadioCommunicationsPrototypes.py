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
    meta(content='RadioCommunicationsPrototypes.x3d',name='title'),
    meta(content='Don Brutzman and Dave Laflam',name='creator'),
    meta(content='7 December 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development. Need to fix url values in X3dToVrml97.xslt translation signatures, and check Savage CommunicationsAndSensors DIS examples.',name='warning'),
    meta(content='Prototype definitions for ReceiverPdu SignalPdu and TransmitterPdu, all of which share share RadioCommunicationsPduScriptNode class',name='description'),
    meta(content='http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/RadioCommunicationsPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ============================================================ 
    children=[
    WorldInfo(title='RadioCommunicationsPrototypes.x3d'),
    ProtoDeclare(name='ReceiverPdu',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='set whichGeometry to -1 for no geometry 0 for text trace 1 for default geometry',name='whichGeometry',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        #  Initialization fields 
        field(accessType='initializeOnly',name='readInterval',type='SFTime',value=0.1),
        field(accessType='initializeOnly',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='siteID',type='SFInt32',value=14),
        field(accessType='initializeOnly',name='applicationID',type='SFInt32',value=17),
        field(accessType='initializeOnly',name='entityID',type='SFInt32',value=9),
        field(accessType='initializeOnly',name='address',type='SFString',value='224.2.181.145'),
        field(accessType='initializeOnly',name='port',type='SFInt32',value=62040),
        field(accessType='initializeOnly',name='multicastRelayHost',type='SFString',value='devo.cs.nps.navy.mil'),
        field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32',value=8010),
        field(accessType='inputOutput',appinfo='networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString',value='standAlone'),
        field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false",name='isMaster',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false",name='isRemote',type='SFBool'),
        field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
        field(accessType='initializeOnly',name='trace',type='SFBool',value=False),
        #  Generic events 
        field(accessType='outputOnly',name='active',type='SFBool'),
        field(accessType='outputOnly',name='timestamp',type='SFTime'),
        #  RadioCommunicationsFamily events 
        field(accessType='outputOnly',name='radioID',type='SFInt32'),
        #  ReceiverPdu fields 
        field(accessType='outputOnly',name='receivedPower',type='SFFloat'),
        field(accessType='outputOnly',name='receiverState',type='SFInt32'),
        field(accessType='outputOnly',name='transmitterSiteID',type='SFInt32'),
        field(accessType='outputOnly',name='transmitterApplicationID',type='SFInt32'),
        field(accessType='outputOnly',name='transmitterEntityID',type='SFInt32'),
        field(accessType='outputOnly',name='transmitterRadioID',type='SFInt32')]),
      ProtoBody=ProtoBody(
        #  First node inside a PrototypeDeclaration is the node type of the ProtoInstance 
        children=[
        Switch(DEF='ReceiverPduGeometrySwitch',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichGeometry')]),
          #  whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry 
          children=[
          Group(
            children=[
            Viewpoint(description='Receiver Pdu Observer',position=(0,0,15)),
            Group(
              children=[
              Transform(translation=(0,6,0),
                children=[
                Shape(
                  geometry=Text(string=["Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"],
                    fontStyle=FontStyle(DEF='FONT1',justify=["MIDDLE","BEGIN"],size=0.5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.4,0.8))))]),
              Transform(translation=(0,4.75,0),
                children=[
                Shape(
                  geometry=Text(string=["Receiver PDU values"],
                    fontStyle=FontStyle(USE='FONT1')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.8,0.4))))]),
              Transform(translation=(0,4,0),
                children=[
                Shape(
                  geometry=Text(DEF='ReceiverOutput1',string=["Receiver output uninitialized"],
                    fontStyle=FontStyle(USE='FONT1')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.8,0.8,0))))])]),
            Script(DEF='ReceiverOutputAssembler1',
              #  surprising limit on MFString: 10 strings 
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='active',type='SFBool'),
              field(accessType='inputOnly',name='timestamp',type='SFTime'),
              field(accessType='inputOnly',name='isRtpHeaderHeard',type='SFBool'),
              field(accessType='inputOnly',name='radioID',type='SFInt32'),
              field(accessType='inputOnly',name='receivedPower',type='SFFloat'),
              field(accessType='inputOnly',name='receiverState',type='SFInt32'),
              field(accessType='inputOnly',name='transmitterSiteID',type='SFInt32'),
              field(accessType='inputOnly',name='transmitterApplicationID',type='SFInt32'),
              field(accessType='inputOnly',name='transmitterEntityID',type='SFInt32'),
              field(accessType='inputOnly',name='transmitterRadioID',type='SFInt32')])])]),
        #  The Script follows the Switch, since the first node in the file determines the node type of this prototype 
        #  Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct 
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='ReceiverPduScriptNode',mustEvaluate=True,url=["RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"],
          #  Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu 
          field=[
          field(accessType='initializeOnly',name='radioPduType',type='SFString',value='ReceiverPdu'),
          #  Initialization fields 
          field(accessType='initializeOnly',name='readInterval',type='SFTime'),
          field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
          field(accessType='initializeOnly',name='siteID',type='SFInt32'),
          field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
          field(accessType='initializeOnly',name='entityID',type='SFInt32'),
          field(accessType='initializeOnly',name='address',type='SFString'),
          field(accessType='initializeOnly',name='port',type='SFInt32'),
          field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
          field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
          field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool'),
          field(accessType='initializeOnly',name='trace',type='SFBool'),
          #  Generic events 
          field(accessType='inputOnly',appinfo='update is triggered by local TimeSensor clocks to allow regular read/write',name='update',type='SFTime'),
          field(accessType='outputOnly',name='active',type='SFBool'),
          field(accessType='outputOnly',name='timestamp',type='SFTime'),
          field(accessType='outputOnly',name='isRtpHeaderHeard',type='SFBool'),
          #  RadioCommunicationsFamily events 
          field(accessType='outputOnly',name='radioID',type='SFInt32'),
          #  SignalPdu fields 
          field(accessType='outputOnly',name='receivedPower',type='SFFloat'),
          field(accessType='outputOnly',name='receiverState',type='SFInt32'),
          field(accessType='outputOnly',name='transmitterSiteID',type='SFInt32'),
          field(accessType='outputOnly',name='transmitterApplicationID',type='SFInt32'),
          field(accessType='outputOnly',name='transmitterEntityID',type='SFInt32'),
          field(accessType='outputOnly',name='transmitterRadioID',type='SFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='readInterval',protoField='readInterval'),
            connect(nodeField='writeInterval',protoField='writeInterval'),
            connect(nodeField='siteID',protoField='siteID'),
            connect(nodeField='applicationID',protoField='applicationID'),
            connect(nodeField='entityID',protoField='entityID'),
            connect(nodeField='address',protoField='address'),
            connect(nodeField='port',protoField='port'),
            connect(nodeField='multicastRelayHost',protoField='multicastRelayHost'),
            connect(nodeField='multicastRelayPort',protoField='multicastRelayPort'),
            connect(nodeField='rtpHeaderExpected',protoField='rtpHeaderExpected'),
            connect(nodeField='trace',protoField='trace'),
            connect(nodeField='active',protoField='active'),
            connect(nodeField='timestamp',protoField='timestamp'),
            connect(nodeField='isRtpHeaderHeard',protoField='isRtpHeaderHeard'),
            connect(nodeField='radioID',protoField='radioID'),
            connect(nodeField='receivedPower',protoField='receivedPower'),
            connect(nodeField='receiverState',protoField='receiverState'),
            connect(nodeField='transmitterSiteID',protoField='transmitterSiteID'),
            connect(nodeField='transmitterApplicationID',protoField='transmitterApplicationID'),
            connect(nodeField='transmitterEntityID',protoField='transmitterEntityID'),
            connect(nodeField='transmitterRadioID',protoField='transmitterRadioID')])),
        #  Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). 
        TimeSensor(DEF='ReceiverPduReadIntervalClock',loop=True),
        TimeSensor(DEF='ReceiverPduWriteIntervalClock',enabled=False,loop=True),
        ROUTE(fromField='cycleTime',fromNode='ReceiverPduReadIntervalClock',toField='update',toNode='ReceiverPduScriptNode'),
        ROUTE(fromField='cycleTime',fromNode='ReceiverPduWriteIntervalClock',toField='update',toNode='ReceiverPduScriptNode'),
        #  These ROUTEs connect the PDU Script node to the geometryChoice=0 text output 
        ROUTE(fromField='active',fromNode='ReceiverPduScriptNode',toField='active',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='timestamp',fromNode='ReceiverPduScriptNode',toField='timestamp',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='isRtpHeaderHeard',fromNode='ReceiverPduScriptNode',toField='isRtpHeaderHeard',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='radioID',fromNode='ReceiverPduScriptNode',toField='radioID',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='receivedPower',fromNode='ReceiverPduScriptNode',toField='receivedPower',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='receiverState',fromNode='ReceiverPduScriptNode',toField='receiverState',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='transmitterSiteID',fromNode='ReceiverPduScriptNode',toField='transmitterSiteID',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='transmitterApplicationID',fromNode='ReceiverPduScriptNode',toField='transmitterApplicationID',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='transmitterEntityID',fromNode='ReceiverPduScriptNode',toField='transmitterEntityID',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='transmitterRadioID',fromNode='ReceiverPduScriptNode',toField='transmitterRadioID',toNode='ReceiverOutputAssembler1'),
        ROUTE(fromField='messageResult',fromNode='ReceiverOutputAssembler1',toField='string',toNode='ReceiverOutput1')]
        #  ROUTEs for further geometry representations go here 
        )),
    #  ============================================================ 
    ProtoDeclare(name='SignalPdu',
      ProtoInterface=ProtoInterface(
        #  set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry 
        field=[
        field(accessType='inputOutput',name='whichGeometry',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        #  Initialization fields 
        field(accessType='initializeOnly',name='readInterval',type='SFTime',value=0.1),
        field(accessType='initializeOnly',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='siteID',type='SFInt32',value=14),
        field(accessType='initializeOnly',name='applicationID',type='SFInt32',value=17),
        field(accessType='initializeOnly',name='entityID',type='SFInt32',value=9),
        field(accessType='initializeOnly',name='address',type='SFString',value='224.2.181.145'),
        field(accessType='initializeOnly',name='port',type='SFInt32',value=62040),
        field(accessType='initializeOnly',name='multicastRelayHost',type='SFString',value='devo.cs.nps.navy.mil'),
        field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32',value=8010),
        field(accessType='inputOutput',appinfo='networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString',value='standAlone'),
        field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false",name='isMaster',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false",name='isRemote',type='SFBool'),
        field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
        field(accessType='initializeOnly',name='trace',type='SFBool',value=False),
        #  Generic events 
        field(accessType='outputOnly',name='active',type='SFBool'),
        field(accessType='outputOnly',name='timestamp',type='SFTime'),
        #  RadioCommunicationsFamily events 
        field(accessType='outputOnly',name='radioID',type='SFInt32'),
        #  SignalPdu fields 
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
      ProtoBody=ProtoBody(
        #  First node inside a PrototypeDeclaration is the node type of the ProtoInstance 
        children=[
        Switch(DEF='SignalPduGeometrySwitch',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichGeometry')]),
          #  whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry 
          children=[
          Group(
            children=[
            Viewpoint(description='Signal Pdu Observer',position=(0,0,15)),
            Group(
              children=[
              Transform(translation=(0,6,0),
                children=[
                Shape(
                  geometry=Text(string=["Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"],
                    fontStyle=FontStyle(DEF='FONT2',justify=["MIDDLE","BEGIN"],size=0.5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.4,0.8))))]),
              Transform(translation=(0,4.75,0),
                children=[
                Shape(
                  geometry=Text(string=["Signal PDU values"],
                    fontStyle=FontStyle(USE='FONT2')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.8,0.4))))]),
              Transform(translation=(0,4,0),
                children=[
                Shape(
                  geometry=Text(DEF='SignalOutput1',string=["Signal Output1 unset"],
                    fontStyle=FontStyle(USE='FONT2')),
                  appearance=Appearance(DEF='YellowAppearance2',
                    material=Material(diffuseColor=(0.8,0.8,0))))]),
              Transform(translation=(0,-1,0),
                children=[
                Shape(
                  geometry=Text(DEF='SignalOutput2',string=["Signal Output2 unset"],
                    fontStyle=FontStyle(USE='FONT2')),
                  appearance=Appearance(USE='YellowAppearance2'))])]),
            Script(DEF='SignalOutputAssembler1',
              #  surprising limit on MFString: 10 strings 
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='active',type='SFBool'),
              field(accessType='inputOnly',name='timestamp',type='SFTime'),
              field(accessType='inputOnly',name='isRtpHeaderHeard',type='SFBool'),
              field(accessType='inputOnly',name='radioID',type='SFInt32'),
              field(accessType='inputOnly',name='encodingScheme',type='SFInt32'),
              field(accessType='inputOnly',name='tdlType',type='SFInt32'),
              field(accessType='inputOnly',name='sampleRate',type='SFInt32'),
              field(accessType='inputOnly',name='samples',type='SFInt32'),
              field(accessType='inputOnly',name='dataLength',type='SFInt32'),
              field(accessType='inputOnly',name='data00',type='SFInt32')]),
            Script(DEF='SignalOutputAssembler2',
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='data01',type='SFInt32'),
              field(accessType='inputOnly',name='data02',type='SFInt32'),
              field(accessType='inputOnly',name='data03',type='SFInt32'),
              field(accessType='inputOnly',name='data04',type='SFInt32'),
              field(accessType='inputOnly',name='data05',type='SFInt32'),
              field(accessType='inputOnly',name='data06',type='SFInt32'),
              field(accessType='inputOnly',name='data07',type='SFInt32'),
              field(accessType='inputOnly',name='data08',type='SFInt32'),
              field(accessType='inputOnly',name='data09',type='SFInt32'),
              field(accessType='inputOnly',name='data10',type='SFInt32')])])]),
        #  The Script follows the Switch, since the first node in the file determines the node type of this prototype 
        #  Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct 
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='SignalPduScriptNode',mustEvaluate=True,url=["RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"],
          #  Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu 
          field=[
          field(accessType='initializeOnly',name='radioPduType',type='SFString',value='SignalPdu'),
          #  Initialization fields 
          field(accessType='initializeOnly',name='readInterval',type='SFTime'),
          field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
          field(accessType='initializeOnly',name='siteID',type='SFInt32'),
          field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
          field(accessType='initializeOnly',name='entityID',type='SFInt32'),
          field(accessType='initializeOnly',name='address',type='SFString'),
          field(accessType='initializeOnly',name='port',type='SFInt32'),
          field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
          field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
          field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool'),
          field(accessType='initializeOnly',name='trace',type='SFBool'),
          #  Generic events 
          field(accessType='inputOnly',appinfo='update is triggered by local TimeSensor clocks to allow regular read/write',name='update',type='SFTime'),
          field(accessType='outputOnly',name='active',type='SFBool'),
          field(accessType='outputOnly',name='timestamp',type='SFTime'),
          field(accessType='outputOnly',name='isRtpHeaderHeard',type='SFBool'),
          #  RadioCommunicationsFamily events 
          field(accessType='outputOnly',name='radioID',type='SFInt32'),
          #  SignalPdu fields 
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
          field(accessType='outputOnly',name='data10',type='SFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='readInterval',protoField='readInterval'),
            connect(nodeField='writeInterval',protoField='writeInterval'),
            connect(nodeField='siteID',protoField='siteID'),
            connect(nodeField='applicationID',protoField='applicationID'),
            connect(nodeField='entityID',protoField='entityID'),
            connect(nodeField='address',protoField='address'),
            connect(nodeField='port',protoField='port'),
            connect(nodeField='multicastRelayHost',protoField='multicastRelayHost'),
            connect(nodeField='multicastRelayPort',protoField='multicastRelayPort'),
            connect(nodeField='rtpHeaderExpected',protoField='rtpHeaderExpected'),
            connect(nodeField='trace',protoField='trace'),
            connect(nodeField='active',protoField='active'),
            connect(nodeField='timestamp',protoField='timestamp'),
            connect(nodeField='isRtpHeaderHeard',protoField='isRtpHeaderHeard'),
            connect(nodeField='radioID',protoField='radioID'),
            connect(nodeField='encodingScheme',protoField='encodingScheme'),
            connect(nodeField='tdlType',protoField='tdlType'),
            connect(nodeField='sampleRate',protoField='sampleRate'),
            connect(nodeField='samples',protoField='samples'),
            connect(nodeField='dataLength',protoField='dataLength'),
            connect(nodeField='data00',protoField='data00'),
            connect(nodeField='data01',protoField='data01'),
            connect(nodeField='data02',protoField='data02'),
            connect(nodeField='data03',protoField='data03'),
            connect(nodeField='data04',protoField='data04'),
            connect(nodeField='data05',protoField='data05'),
            connect(nodeField='data06',protoField='data06'),
            connect(nodeField='data07',protoField='data07'),
            connect(nodeField='data08',protoField='data08'),
            connect(nodeField='data09',protoField='data09'),
            connect(nodeField='data10',protoField='data10')])),
        #  Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). 
        TimeSensor(DEF='SignalPduReadIntervalClock',loop=True),
        TimeSensor(DEF='SignalPduWriteIntervalClock',enabled=False,loop=True),
        ROUTE(fromField='cycleTime',fromNode='SignalPduReadIntervalClock',toField='update',toNode='SignalPduScriptNode'),
        ROUTE(fromField='cycleTime',fromNode='SignalPduWriteIntervalClock',toField='update',toNode='SignalPduScriptNode'),
        #  These ROUTEs connect the PDU Script node to the geometryChoice=0 text output 
        ROUTE(fromField='active',fromNode='SignalPduScriptNode',toField='active',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='timestamp',fromNode='SignalPduScriptNode',toField='timestamp',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='isRtpHeaderHeard',fromNode='SignalPduScriptNode',toField='isRtpHeaderHeard',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='radioID',fromNode='SignalPduScriptNode',toField='radioID',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='encodingScheme',fromNode='SignalPduScriptNode',toField='encodingScheme',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='tdlType',fromNode='SignalPduScriptNode',toField='tdlType',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='sampleRate',fromNode='SignalPduScriptNode',toField='sampleRate',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='samples',fromNode='SignalPduScriptNode',toField='samples',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='dataLength',fromNode='SignalPduScriptNode',toField='dataLength',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='data00',fromNode='SignalPduScriptNode',toField='data00',toNode='SignalOutputAssembler1'),
        ROUTE(fromField='data01',fromNode='SignalPduScriptNode',toField='data01',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data02',fromNode='SignalPduScriptNode',toField='data02',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data03',fromNode='SignalPduScriptNode',toField='data03',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data04',fromNode='SignalPduScriptNode',toField='data04',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data05',fromNode='SignalPduScriptNode',toField='data05',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data06',fromNode='SignalPduScriptNode',toField='data06',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data07',fromNode='SignalPduScriptNode',toField='data07',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data08',fromNode='SignalPduScriptNode',toField='data08',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data09',fromNode='SignalPduScriptNode',toField='data09',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='data10',fromNode='SignalPduScriptNode',toField='data10',toNode='SignalOutputAssembler2'),
        ROUTE(fromField='messageResult',fromNode='SignalOutputAssembler1',toField='string',toNode='SignalOutput1'),
        ROUTE(fromField='messageResult',fromNode='SignalOutputAssembler2',toField='string',toNode='SignalOutput2')]
        #  ROUTEs for further geometry representations go here 
        )),
    #  ============================================================ 
    ProtoDeclare(name='TransmitterPdu',
      ProtoInterface=ProtoInterface(
        #  set whichGeometry to -1 for no geometry, 0 for text trace, 1 for default geometry 
        field=[
        field(accessType='inputOutput',name='whichGeometry',type='SFInt32',value=0),
        field(accessType='initializeOnly',appinfo='Bounding box center: position offset from origin of local coordinate system.',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Bounding box size: automatically calculated can be specified as an optimization or constraint.',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        #  Initialization fields 
        field(accessType='initializeOnly',name='readInterval',type='SFTime',value=0.1),
        field(accessType='initializeOnly',name='writeInterval',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='siteID',type='SFInt32',value=14),
        field(accessType='initializeOnly',name='applicationID',type='SFInt32',value=17),
        field(accessType='initializeOnly',name='entityID',type='SFInt32',value=9),
        field(accessType='initializeOnly',name='address',type='SFString',value='224.2.181.145'),
        field(accessType='initializeOnly',name='port',type='SFInt32',value=62040),
        field(accessType='initializeOnly',name='multicastRelayHost',type='SFString',value='devo.cs.nps.navy.mil'),
        field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32',value=8010),
        field(accessType='inputOutput',appinfo='networkMode:&#10;standAlone (ignore network but still respond to local events)&#10;networkReader (listen to network as ghost entity)&#10;networkWriter (output to network as master entity at writeInterval)',name='networkMode',type='SFString',value='standAlone'),
        field(accessType='outputOnly',appinfo='Whether networkMode standAlone (ignore network but still respond to local events) is true/false',name='isStandAlone',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkWriter' (output to network as master entity at writeInterval) is true/false",name='isMaster',type='SFBool'),
        field(accessType='outputOnly',appinfo="Whether networkMode 'networkReader' (listen to network as ghost entity) is true/false",name='isRemote',type='SFBool'),
        field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
        field(accessType='initializeOnly',name='trace',type='SFBool',value=False),
        #  Generic events 
        field(accessType='outputOnly',name='active',type='SFBool'),
        field(accessType='outputOnly',name='timestamp',type='SFTime'),
        #  RadioCommunicationsFamily events 
        field(accessType='outputOnly',name='radioID',type='SFInt32'),
        #  TransmitterPdu fields 
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
      ProtoBody=ProtoBody(
        #  First node inside a PrototypeDeclaration is the node type of the ProtoInstance 
        children=[
        Switch(DEF='TransmitterPduGeometrySwitch',whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichGeometry')]),
          #  whichChoice -1 is no rendering, choice 0 is text trace, choice 1 is default geometry 
          children=[
          Group(
            children=[
            Viewpoint(description='Transmitter Pdu Observer',position=(0,0,15)),
            Group(
              children=[
              Transform(translation=(0,6,0),
                children=[
                Shape(
                  geometry=Text(string=["Open Java Console to see PDU trace messages","Netscape..Communicator..Tools..Java Console"],
                    fontStyle=FontStyle(DEF='FONT3',justify=["MIDDLE","BEGIN"],size=0.5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.4,0.8))))]),
              Transform(translation=(0,4.75,0),
                children=[
                Shape(
                  geometry=Text(string=["Transmitter PDU values"],
                    fontStyle=FontStyle(USE='FONT3')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.8,0.4))))]),
              Transform(translation=(0,4,0),
                children=[
                Shape(
                  geometry=Text(DEF='TransmitterOutput1',string=["Transmitter Output1 unset"],
                    fontStyle=FontStyle(USE='FONT3')),
                  appearance=Appearance(DEF='YellowAppearance3',
                    material=Material(diffuseColor=(0.8,0.8,0))))]),
              Transform(translation=(0,-1,0),
                children=[
                Shape(
                  geometry=Text(DEF='TransmitterOutput2',string=["Transmitter Output2 unset"],
                    fontStyle=FontStyle(USE='FONT3')),
                  appearance=Appearance(USE='YellowAppearance3'))]),
              Transform(translation=(0,-6,0),
                children=[
                Shape(
                  geometry=Text(DEF='TransmitterOutput3',string=["Transmitter Output2 unset"],
                    fontStyle=FontStyle(USE='FONT3')),
                  appearance=Appearance(USE='YellowAppearance3'))])]),
            Script(DEF='TransmitterOutputAssembler1',
              #  surprising limit on MFString: 10 strings 
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='active',type='SFBool'),
              field(accessType='inputOnly',name='timestamp',type='SFTime'),
              field(accessType='inputOnly',name='isRtpHeaderHeard',type='SFBool'),
              field(accessType='inputOnly',name='radioID',type='SFInt32'),
              field(accessType='inputOnly',name='antennaLocation',type='SFVec3f'),
              field(accessType='inputOnly',name='antennaPatternLength',type='SFInt32'),
              field(accessType='inputOnly',name='antennaPatternType',type='SFInt32'),
              field(accessType='inputOnly',name='cryptoKeyID',type='SFInt32'),
              field(accessType='inputOnly',name='cryptoSytem',type='SFInt32'),
              field(accessType='inputOnly',name='frequency',type='SFInt32')]),
            Script(DEF='TransmitterOutputAssembler2',
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='inputSource',type='SFInt32'),
              field(accessType='inputOnly',name='lengthOfModulationParameters',type='SFInt32'),
              field(accessType='inputOnly',name='modulationTypeDetail',type='SFInt32'),
              field(accessType='inputOnly',name='modulationTypeMajor',type='SFInt32'),
              field(accessType='inputOnly',name='modulationTypeSpreadSpectrum',type='SFInt32'),
              field(accessType='inputOnly',name='modulationTypeSystem',type='SFInt32'),
              field(accessType='inputOnly',name='power',type='SFInt32'),
              field(accessType='inputOnly',name='radioEntityTypeCategory',type='SFInt32'),
              field(accessType='inputOnly',name='radioEntityTypeCountry',type='SFInt32'),
              field(accessType='inputOnly',name='radioEntityTypeDomain',type='SFInt32')]),
            Script(DEF='TransmitterOutputAssembler3',
              field=[
              field(accessType='outputOnly',name='messageResult',type='MFString'),
              field(accessType='inputOnly',name='radioEntityTypeKind',type='SFInt32'),
              field(accessType='inputOnly',name='radioEntityTypeNomenclature',type='SFInt32'),
              field(accessType='inputOnly',name='radioEntityTypeNomenclatureVersion',type='SFInt32'),
              field(accessType='inputOnly',name='relativeAntennaLocation',type='SFVec3f'),
              field(accessType='inputOnly',name='transmitFrequencyBandwidth',type='SFInt32'),
              field(accessType='inputOnly',name='transmitState',type='SFInt32')])])]),
        #  The Script follows the Switch, since the first node in the file determines the node type of this prototype 
        #  Fields in the Script are directly mapped to the PrototypeDeclare field-tag interfaces by using the IS construct 
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='TransmitterPduScriptNode',mustEvaluate=True,url=["RadioCommunicationsPduScriptNode.class","http://faculty.nps.edu/brutzman/vrtp/mil/navy/nps/dis/RadioCommunicationsPduScriptNode.class"],
          #  Valid values for radioPduType are ReceiverPdu, SignalPdu and TransmitterPdu 
          field=[
          field(accessType='initializeOnly',name='radioPduType',type='SFString',value='TransmitterPdu'),
          #  Initialization fields 
          field(accessType='initializeOnly',name='readInterval',type='SFTime'),
          field(accessType='initializeOnly',name='writeInterval',type='SFTime'),
          field(accessType='initializeOnly',name='siteID',type='SFInt32'),
          field(accessType='initializeOnly',name='applicationID',type='SFInt32'),
          field(accessType='initializeOnly',name='entityID',type='SFInt32'),
          field(accessType='initializeOnly',name='address',type='SFString'),
          field(accessType='initializeOnly',name='port',type='SFInt32'),
          field(accessType='initializeOnly',name='multicastRelayHost',type='SFString'),
          field(accessType='initializeOnly',name='multicastRelayPort',type='SFInt32'),
          field(accessType='initializeOnly',name='rtpHeaderExpected',type='SFBool'),
          field(accessType='outputOnly',appinfo='whether RTP header was found prepended to DIS packet',name='isRtpHeaderHeard',type='SFBool'),
          field(accessType='initializeOnly',name='trace',type='SFBool'),
          #  Generic events 
          field(accessType='inputOnly',appinfo='update is triggered by local TimeSensor clocks to allow regular read/write',name='update',type='SFTime'),
          field(accessType='outputOnly',name='active',type='SFBool'),
          field(accessType='outputOnly',name='timestamp',type='SFTime'),
          #  RadioCommunicationsFamily events 
          field(accessType='outputOnly',name='radioID',type='SFInt32'),
          #  SignalPdu fields 
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
          field(accessType='outputOnly',name='transmitState',type='SFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='readInterval',protoField='readInterval'),
            connect(nodeField='writeInterval',protoField='writeInterval'),
            connect(nodeField='siteID',protoField='siteID'),
            connect(nodeField='applicationID',protoField='applicationID'),
            connect(nodeField='entityID',protoField='entityID'),
            connect(nodeField='address',protoField='address'),
            connect(nodeField='port',protoField='port'),
            connect(nodeField='multicastRelayHost',protoField='multicastRelayHost'),
            connect(nodeField='multicastRelayPort',protoField='multicastRelayPort'),
            connect(nodeField='rtpHeaderExpected',protoField='rtpHeaderExpected'),
            connect(nodeField='trace',protoField='trace'),
            connect(nodeField='active',protoField='active'),
            connect(nodeField='timestamp',protoField='timestamp'),
            connect(nodeField='isRtpHeaderHeard',protoField='isRtpHeaderHeard'),
            connect(nodeField='radioID',protoField='radioID'),
            connect(nodeField='antennaLocation',protoField='antennaLocation'),
            connect(nodeField='antennaPatternLength',protoField='antennaPatternLength'),
            connect(nodeField='antennaPatternType',protoField='antennaPatternType'),
            connect(nodeField='cryptoKeyID',protoField='cryptoKeyID'),
            connect(nodeField='cryptoSytem',protoField='cryptoSytem'),
            connect(nodeField='frequency',protoField='frequency'),
            connect(nodeField='inputSource',protoField='inputSource'),
            connect(nodeField='lengthOfModulationParameters',protoField='lengthOfModulationParameters'),
            connect(nodeField='modulationTypeDetail',protoField='modulationTypeDetail'),
            connect(nodeField='modulationTypeMajor',protoField='modulationTypeMajor'),
            connect(nodeField='modulationTypeSpreadSpectrum',protoField='modulationTypeSpreadSpectrum'),
            connect(nodeField='modulationTypeSystem',protoField='modulationTypeSystem'),
            connect(nodeField='power',protoField='power'),
            connect(nodeField='radioEntityTypeCategory',protoField='radioEntityTypeCategory'),
            connect(nodeField='radioEntityTypeCountry',protoField='radioEntityTypeCountry'),
            connect(nodeField='radioEntityTypeDomain',protoField='radioEntityTypeDomain'),
            connect(nodeField='radioEntityTypeKind',protoField='radioEntityTypeKind'),
            connect(nodeField='radioEntityTypeNomenclature',protoField='radioEntityTypeNomenclature'),
            connect(nodeField='radioEntityTypeNomenclatureVersion',protoField='radioEntityTypeNomenclatureVersion'),
            connect(nodeField='relativeAntennaLocation',protoField='relativeAntennaLocation'),
            connect(nodeField='transmitFrequencyBandwidth',protoField='transmitFrequencyBandwidth'),
            connect(nodeField='transmitState',protoField='transmitState')])),
        #  Clocks stimulate the processEvents() method in the Script code, resulting in DIS PDU reads/writes. The 'update' eventIn is implicit (i.e. no corresponding Java method is needed). 
        TimeSensor(DEF='TransmitterPduReadIntervalClock',loop=True),
        TimeSensor(DEF='TransmitterPduWriteIntervalClock',enabled=False,loop=True),
        ROUTE(fromField='cycleTime',fromNode='TransmitterPduReadIntervalClock',toField='update',toNode='TransmitterPduScriptNode'),
        ROUTE(fromField='cycleTime',fromNode='TransmitterPduWriteIntervalClock',toField='update',toNode='TransmitterPduScriptNode'),
        #  These ROUTEs connect the PDU Script node to the geometryChoice=0 text output 
        ROUTE(fromField='active',fromNode='TransmitterPduScriptNode',toField='active',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='timestamp',fromNode='TransmitterPduScriptNode',toField='timestamp',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='isRtpHeaderHeard',fromNode='TransmitterPduScriptNode',toField='isRtpHeaderHeard',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='radioID',fromNode='TransmitterPduScriptNode',toField='radioID',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='antennaLocation',fromNode='TransmitterPduScriptNode',toField='antennaLocation',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='antennaPatternLength',fromNode='TransmitterPduScriptNode',toField='antennaPatternLength',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='antennaPatternType',fromNode='TransmitterPduScriptNode',toField='antennaPatternType',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='cryptoKeyID',fromNode='TransmitterPduScriptNode',toField='cryptoKeyID',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='cryptoSytem',fromNode='TransmitterPduScriptNode',toField='cryptoSytem',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='frequency',fromNode='TransmitterPduScriptNode',toField='frequency',toNode='TransmitterOutputAssembler1'),
        ROUTE(fromField='inputSource',fromNode='TransmitterPduScriptNode',toField='inputSource',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='lengthOfModulationParameters',fromNode='TransmitterPduScriptNode',toField='lengthOfModulationParameters',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='modulationTypeDetail',fromNode='TransmitterPduScriptNode',toField='modulationTypeDetail',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='modulationTypeMajor',fromNode='TransmitterPduScriptNode',toField='modulationTypeMajor',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='modulationTypeSpreadSpectrum',fromNode='TransmitterPduScriptNode',toField='modulationTypeSpreadSpectrum',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='modulationTypeSystem',fromNode='TransmitterPduScriptNode',toField='modulationTypeSystem',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='power',fromNode='TransmitterPduScriptNode',toField='power',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='radioEntityTypeCategory',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeCategory',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='radioEntityTypeCountry',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeCountry',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='radioEntityTypeDomain',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeDomain',toNode='TransmitterOutputAssembler2'),
        ROUTE(fromField='radioEntityTypeKind',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeKind',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='radioEntityTypeNomenclature',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeNomenclature',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='radioEntityTypeNomenclatureVersion',fromNode='TransmitterPduScriptNode',toField='radioEntityTypeNomenclatureVersion',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='relativeAntennaLocation',fromNode='TransmitterPduScriptNode',toField='relativeAntennaLocation',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='transmitFrequencyBandwidth',fromNode='TransmitterPduScriptNode',toField='transmitFrequencyBandwidth',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='transmitState',fromNode='TransmitterPduScriptNode',toField='transmitState',toNode='TransmitterOutputAssembler3'),
        ROUTE(fromField='messageResult',fromNode='TransmitterOutputAssembler1',toField='string',toNode='TransmitterOutput1'),
        ROUTE(fromField='messageResult',fromNode='TransmitterOutputAssembler2',toField='string',toNode='TransmitterOutput2'),
        ROUTE(fromField='messageResult',fromNode='TransmitterOutputAssembler3',toField='string',toNode='TransmitterOutput3')]
        #  ROUTEs for further geometry representations go here 
        )),
    #  ============================================================ 
    #  Default content 
    Group(
      children=[
      Transform(translation=(-15,15,0),
        children=[
        ProtoInstance(name='ReceiverPdu')]),
      Transform(translation=(-15,-15,0),
        children=[
        ReceiverPdu(receivedPower=0.0)]),
      Transform(translation=(0,15,0),
        children=[
        ProtoInstance(name='SignalPdu')]),
      Transform(translation=(0,-15,0),
        children=[
        SignalPdu(),]),
      Transform(translation=(15,15,0),
        children=[
        ProtoInstance(name='TransmitterPdu')]),
      Transform(translation=(15,-15,0),
        children=[
        TransmitterPdu(relativeAntennaLocation=(0,0,0),transmitFrequencyBandwidth=0.0)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadioCommunicationsPrototypes.py")

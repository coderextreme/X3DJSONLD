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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='BuoyCommunicationsGridPrototype.x3d',name='title'),
    meta(content='Takes a communication-message input from a traversing vehicle (such as an AUV or submarine), then sets up the route/relay time delays, directions, animation and visualization of SeaWeb buoy communications among each other, all the way to the SeaWeb RACOM RF-relay buoy at the surface.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='8 June 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='Buoy, SeaWeb',name='subject'),
    meta(content='BuoyCommunicationsGridExampleRoutingTable.xls',name='reference'),
    meta(content='Under development, need to check timing and routing table',name='warning'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridPrototype.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ========== 
    #  ExternProtoDeclare statements precede the scene elements utilizing them 
    #  ========== 
    children=[
    ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',url=["../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder"],
      field=[
      field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
      field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool'),
      field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool'),
      field(accessType='initializeOnly',appinfo='meters across vertical y axis',name='beamHeight',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='meters across horizontal z axis',name='beamWidth',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat')]),
    ExternProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/36 = 10 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass36',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo='The CrossHair prototype provides a heads-up display (HUD) crosshair showing center of screen useful for assessing NavigationInfo lookAt point',name='CrossHair',url=["../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"],
      field=[
      field(accessType='initializeOnly',name='enabled',type='SFBool'),
      field(accessType='inputOnly',name='set_enabled',type='SFBool'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f')]),
    ExternProtoDeclare(name='DvdController',url=["../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
      field=[
      field(accessType='initializeOnly',appinfo='Short description of what is animated by this DvdController.',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='Whether or not play mode is enabled including during startup.',name='playEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Initializes how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='displayMode',type='SFString'),
      field(accessType='inputOnly',appinfo='Sets how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='setDisplayMode',type='SFString'),
      field(accessType='initializeOnly',appinfo='Default button color.',name='buttonColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Button color when selected by user.',name='selectedButtonColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Default label color.',name='labelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Label color when selected by user.',name='selectedLabelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f'),
      field(accessType='initializeOnly',name='clockEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Time for complete loop cycle in seconds.',name='cycleInterval',type='SFTime'),
      field(accessType='inputOnly',name='set_cycleInterval',type='SFTime'),
      field(accessType='outputOnly',name='cycleInterval_changed',type='SFTime'),
      field(accessType='initializeOnly',appinfo='Factor used to determine the speed increase/decrease for Fast Rewind and Fast Forward action.',name='speedFactor',type='SFFloat'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='outputOnly',name='startTime_changed',type='SFTime'),
      field(accessType='outputOnly',name='stopTime_changed',type='SFTime'),
      field(accessType='outputOnly',name='time_changed',type='SFTime'),
      field(accessType='outputOnly',name='fraction_changed',type='SFFloat'),
      field(accessType='outputOnly',name='secondsElapsed',type='SFTime'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isRemote',type='SFBool'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isLocal',type='SFBool'),
      field(accessType='outputOnly',appinfo='isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa.',name='isPaused',type='SFBool'),
      field(accessType='outputOnly',appinfo='isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa.',name='isRunning',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting.',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',name='testTimeVal',type='SFTime')]),
    ExternProtoDeclare(appinfo='Line grid authoring tool to enable precise measurement of objects in 3D space - fixed position. Oriented along XZ plane size 20m by 20m.',name='GridXZ',url=["../../../Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.x3d#GridXZ","../../../Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ","https://savage.nps.edu/Savage/Tools/Authoring/GridXZPrototype.wrl#GridXZ"],
      field=[
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='inputOutput',name='labelColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='default unscaled size: 10m by 10m',name='scale',type='SFVec3f'),
      field(accessType='inputOutput',name='originLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-X axis',name='WestLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='-Z axis',name='NorthLabel',type='MFString'),
      field(accessType='inputOutput',name='NorthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+X axis',name='EastLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthEastLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='+Z axis',name='SouthLabel',type='MFString'),
      field(accessType='inputOutput',name='SouthWestLabel',type='MFString'),
      field(accessType='inputOutput',appinfo='label location offset (in meters) to improve readability',name='labelsOffset',type='SFVec3f')]),
    ExternProtoDeclare(name='SeaWebBuoy',url=["../../CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d#SeaWebBuoy","../../../Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.wrl#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.wrl#SeaWebBuoy"],
      field=[
      field(accessType='inputOnly',appinfo='Position of buoy.',name='set_position',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Position of buoy.',name='position',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Position of target of transmission.',name='set_targetPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Position of target of transmission.',name='targetPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Id number of target.',name='targetIdNumber',type='SFInt32'),
      field(accessType='inputOnly',appinfo='Id number of target.',name='set_targetIdNumber',type='SFInt32'),
      field(accessType='inputOnly',appinfo='Enable buoy for transmission.',name='set_enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Enable buoy for transmission.',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Start transmission.',name='set_activated',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Start transmission.',name='activated',type='SFBool'),
      field(accessType='inputOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='set_transmissionDuration',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Duration in seconds needed to transmit message (does not include transmissionTimeDelay or propagation delay).',name='transmissionDuration',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Time delay before transmission begins.',name='transmissionTimeDelay',type='SFTime'),
      field(accessType='inputOnly',appinfo='Time delay before transmission begins.',name='set_transmissionTimeDelay',type='SFTime'),
      field(accessType='inputOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='set_directionalTransmission',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Select between directional (true) or omni-directional (false) transmission.',name='directionalTransmission',type='SFBool'),
      field(accessType='inputOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='set_buoyType',type='SFString'),
      field(accessType='initializeOnly',appinfo='Determine which buoy type to use. "Racom" for Racom Buoy. "Telesonar" for Telesonar Repeater.',name='buoyType',type='SFString'),
      field(accessType='inputOnly',name='set_textMessage',type='MFString'),
      field(accessType='initializeOnly',name='textMessage',type='MFString'),
      field(accessType='inputOutput',name='textMessageColor',type='SFColor'),
      field(accessType='inputOnly',name='set_description',type='SFString'),
      field(accessType='initializeOnly',name='description',type='SFString'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Sound speed in water default value 1500 m/s',name='set_soundSpeedInWater',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Sound speed in water default value 1500 m/s',name='soundSpeedInWater',type='SFFloat')]),
    ExternProtoDeclare(appinfo='ViewPositionOrientation prototype provides local position and orientation as user navigates with optional console output',name='ViewPositionOrientation',url=["../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint for example: <Viewpoint position="20 15 20" orientation="-0.516 0.83 0.212 0.9195"/>',name='outputViewpointString',type='MFString')]),
    ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
      field=[
      field(accessType='initializeOnly',appinfo='Short description of what is animated by this WaypointInterpolator.',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='Waypoints being traversed with interpolation of intermediate positions and orientations.',name='waypoints',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Add another single waypoint to array of waypoints recalculate interpolator values.',name='add_waypoint',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Replace all waypoints recalculate interpolator values.',name='set_waypoints',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope',name='pitchUpDownForVerticalWaypoints',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Units m/sec. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legSpeeds',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='Units in seconds. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legDurations',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='Units m/sec.',name='defaultSpeed',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous.',name='turningRate',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds.',name='totalDuration',type='SFTime'),
      #  interpolation fields 
      field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
      #  display-related fields 
      field(accessType='inputOutput',appinfo='default color for non-active line segments',name='lineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='active segment highlight color',name='highlightSegmentColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='transparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='allowed values: none; waypoints (produce labels at each waypoint); or interpolation (produce single moving label at interpolator time course speed location)',name='labelDisplayMode',type='SFString'),
      field(accessType='initializeOnly',appinfo='allowed values: altitude depth (negate Y value) none',name='heightLabel',type='SFString'),
      field(accessType='initializeOnly',appinfo='heightLabel relative location',name='labelOffset',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='heightLabel text size',name='labelFontSize',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='heightLabel text color',name='labelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output the number of waypoints totalDistance and totalDuration to console upon initialization',name='outputInitializationComputations',type='SFBool'),
      field(accessType='inputOutput',appinfo='default color for vertical drop-line segments',name='verticalDropLineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='verticalDropLineTransparency',type='SFFloat')]),
    #  ========== 
    ProtoDeclare(appinfo='BuoyCommunicationsGrid prototype takes a communication-message input from a traversing vehicle (such as an AUV or submarine) then sets up the route/relay time delays directions animation and visualization of SeaWeb buoy communications among each other all the way to the SeaWeb RACOM RF-relay buoy at the surface.',name='BuoyCommunicationsGrid',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='array of SeaWebBuoy nodes index starting at 0',name='buoyArray',type='MFNode',
          #  Example: <ProtoInstance USE="SeaWebBuoy0"/> <ProtoInstance USE="SeaWebBuoy1"/> <ProtoInstance USE="SeaWebBuoy2"/> 
          ),
        field(accessType='initializeOnly',appinfo='2D array of routing connectivity for buoys consisting either of index of next buoy in line -1 for same buoy or else 0 for no route connection. legal values range [-1..n-1] for n buoys.',name='buoyCommunicationsRoutingTable',type='MFInt32',value=[-1,2,2,2,5,6,6,6,5,6,6,6,5,6,6,6,1,-1,3,3,5,6,7,7,5,6,7,7,5,6,7,7,2,2,-1,4,6,6,7,8,6,6,7,8,6,6,7,8,3,3,3,-1,7,7,7,8,7,7,7,8,7,7,7,8,1,2,2,2,-1,6,6,6,9,10,10,10,9,10,10,10,1,2,3,3,5,-1,7,7,9,10,11,11,9,10,11,11,2,2,3,4,6,6,-1,8,10,10,11,12,10,10,11,12,3,3,3,4,7,7,7,-1,11,11,11,12,11,11,11,12,5,6,6,6,5,6,6,6,-1,10,10,10,13,14,14,14,5,6,7,7,5,6,7,7,9,-1,11,11,13,14,15,15,6,6,7,8,6,6,7,8,10,10,-1,12,14,14,15,16,7,7,7,8,7,7,7,8,11,11,11,-1,15,15,15,16,9,10,10,10,9,10,10,10,9,10,10,10,-1,14,14,14,9,10,11,11,9,10,11,11,9,10,11,11,13,-1,15,15,10,10,11,12,10,10,11,12,10,10,11,12,14,14,-1,16,11,11,11,12,11,11,11,12,11,11,11,12,15,15,15,-1]),
        field(accessType='inputOnly',appinfo='set position of entity sending the message',name='set_senderPosition',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='position of entity sending the message',name='senderPosition',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',appinfo='set position of entity receiving the message',name='set_receiverPosition',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='position of entity receiving the message',name='receiverPosition',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOnly',name='set_textMessage',type='MFString'),
        field(accessType='initializeOnly',name='textMessage',type='MFString'),
        field(accessType='inputOnly',appinfo="send it! (note: maybe should rename as 'activate')",name='sendMessage',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='BuoyCommunicationsGridScript',directOutput=True,
          field=[
          field(accessType='initializeOnly',appinfo='array of SeaWebBuoy nodes index starting at 0',name='buoyArray',type='MFNode',
            #  Example: <ProtoInstance USE="SeaWebBuoy0"/> <ProtoInstance USE="SeaWebBuoy1"/> <ProtoInstance USE="SeaWebBuoy2"/> 
            ),
          field(accessType='initializeOnly',appinfo='2D array of routing connectivity for buoys -1 for no connection range [0..n-1] for n buoys.',name='buoyCommunicationsRoutingTable',type='MFInt32'),
          field(accessType='inputOnly',appinfo='set position of entity sending the message',name='set_senderPosition',type='SFVec3f'),
          field(accessType='initializeOnly',appinfo='position of entity sending the message',name='senderPosition',type='SFVec3f'),
          field(accessType='inputOnly',appinfo='set position of entity receiving the message',name='set_receiverPosition',type='SFVec3f'),
          field(accessType='initializeOnly',appinfo='position of entity receiving the message',name='receiverPosition',type='SFVec3f'),
          field(accessType='inputOnly',name='set_textMessage',type='MFString'),
          field(accessType='initializeOnly',name='textMessage',type='MFString'),
          field(accessType='inputOnly',appinfo='send it!',name='sendMessage',type='SFBool'),
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True)],
          IS=IS(
            connect=[
            connect(nodeField='buoyArray',protoField='buoyArray'),
            connect(nodeField='buoyCommunicationsRoutingTable',protoField='buoyCommunicationsRoutingTable'),
            connect(nodeField='set_senderPosition',protoField='set_senderPosition'),
            connect(nodeField='senderPosition',protoField='senderPosition'),
            connect(nodeField='set_receiverPosition',protoField='set_receiverPosition'),
            connect(nodeField='receiverPosition',protoField='receiverPosition'),
            connect(nodeField='set_textMessage',protoField='set_textMessage'),
            connect(nodeField='textMessage',protoField='textMessage'),
            connect(nodeField='sendMessage',protoField='sendMessage')]))])),
    #  ========== 
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of a BuoyCommunicationsGridPrototype. 
    WorldInfo(info=["A BuoyCommunicationsGrid prototype"],title='BuoyCommunicationsGridPrototype'),
    Viewpoint(description='BuoyCommunicationsGrid prototype definition',position=(0,0,15)),
    Anchor(description='BuoyCommunicationsGrid Example',url=["BuoyCommunicationsGridExample.x3d","../../../Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridExample.x3d","BuoyCommunicationsGridExample.wrl","../../../Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["BuoyCommunicationsGridPrototype","is a Prototype definition file.","","To see an example scene","click this text and view","BuoyCommunicationsGridExample."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BuoyCommunicationsGridPrototype.py")

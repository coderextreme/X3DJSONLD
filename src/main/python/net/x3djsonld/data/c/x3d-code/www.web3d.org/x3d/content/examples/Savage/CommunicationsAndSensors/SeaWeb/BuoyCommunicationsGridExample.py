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
    meta(content='BuoyCommunicationsGridExample.x3d',name='title'),
    meta(content='Takes a communication-message input from a traversing vehicle (such as an AUV or submarine), then sets up the route/relay time delays, directions, animation and visualization of SeaWeb buoy communications among each other, all the way to the SeaWeb RACOM RF-relay buoy at the surface.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='8 June 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='Buoy, SeaWeb',name='subject'),
    meta(content='BuoyCommunicationsGridExampleRoutingTable.xls',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridExample.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ========== 
    #  ExternProtoDeclare statements precede the scene elements utilizing them 
    #  ========== 
    children=[
    ExternProtoDeclare(appinfo='BuoyCommunicationsGrid prototype takes a communication-message input from a traversing vehicle (such as an AUV or submarine) then sets up the route/relay time delays directions animation and visualization of SeaWeb buoy communications among each other all the way to the SeaWeb RACOM RF-relay buoy at the surface.',name='BuoyCommunicationsGrid',url=["BuoyCommunicationsGridPrototype.x3d#BuoyCommunicationsGrid","../../../Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridPrototype.x3d#BuoyCommunicationsGrid","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridPrototype.x3d#BuoyCommunicationsGrid","BuoyCommunicationsGridPrototype.wrl#BuoyCommunicationsGrid","../../../Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridPrototype.wrl#BuoyCommunicationsGrid","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/BuoyCommunicationsGridPrototype.wrl#BuoyCommunicationsGrid"],
      field=[
      field(accessType='initializeOnly',appinfo='array of SeaWebBuoy nodes index starting at 0',name='buoyArray',type='MFNode'),
      field(accessType='initializeOnly',appinfo='2D array of routing connectivity for buoys consisting either of index of next buoy in line -1 for same buoy or else 0 for no route connection. legal values range [-1..n-1] for n buoys.',name='buoyCommunicationsRoutingTable',type='MFInt32'),
      field(accessType='inputOnly',appinfo='set position of entity sending the message',name='set_senderPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='position of entity sending the message',name='senderPosition',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='set position of entity receiving the message',name='set_receiverPosition',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='position of entity receiving the message',name='receiverPosition',type='SFVec3f'),
      field(accessType='inputOnly',name='set_textMessage',type='MFString'),
      field(accessType='initializeOnly',name='textMessage',type='MFString'),
      field(accessType='inputOnly',appinfo='send it! (note: maybe should rename as activate)',name='sendMessage',type='SFBool')]),
    #  ========== 
    ExternProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/36 = 10 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass36',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo="Digital Virtual Display (DVD) Controller Prototype definition to control a scenario's animation timing",name='DvdController',url=["../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
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
      field(accessType='initializeOnly',appinfo='Purpose of this grid displayed for overall Viewpoint',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='color for descriptive labels at grid edges and corners',name='labelColor',type='SFColor'),
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
    ExternProtoDeclare(appinfo='SeaWeb acoustic-radio gateway communications buoy',name='SeaWebBuoy',url=["../../../Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.x3d#SeaWebBuoy","../../../Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.wrl#SeaWebBuoy","https://savage.nps.edu/Savage/CommunicationsAndSensors/SeaWeb/SeaWebBuoyPrototype.wrl#SeaWebBuoy"],
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
    NavigationInfo(avatarSize=[2,1.6,0.75],speed=1000),
    Transform(rotation=(0,1,0,-1.578),translation=(5000,15000,5000),
      children=[
      Viewpoint(description='Buoy communications grid (15000m up)',orientation=(1,0,0,-1.578),position=(0,0,0))]),
    Inline(DEF='ViewPositionOrientationHUD',url=["../../../Savage/Tools/HeadsUpDisplays/ViewPositionOrientationHUD.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/ViewPositionOrientationHUD.x3d","../../../Savage/Tools/HeadsUpDisplays/ViewPositionOrientationHUD.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/ViewPositionOrientationHUD.wrl"]),
    ProtoInstance(name='GridXZ',
      fieldValue=[
      fieldValue(name='description',value='Sonobuoy Field Scenario'),
      fieldValue(name='labelColor',value=(0.8,0.8,1)),
      fieldValue(name='scale',value=(1000,1000,1000)),
      fieldValue(name='originLabel',value=["origin"]),
      fieldValue(name='WestLabel',value=["West","-Z"]),
      fieldValue(name='NorthWestLabel',value=["10000 0 -10000"]),
      fieldValue(name='NorthLabel',value=["North","+X"]),
      fieldValue(name='NorthEastLabel',value=["10000 0 10000"]),
      fieldValue(name='EastLabel',value=["East","+Z"]),
      fieldValue(name='SouthEastLabel',value=["-10000 0 10000"]),
      fieldValue(name='SouthLabel',value=["South","-X"]),
      fieldValue(name='SouthWestLabel',value=["-10000 0 -10000"])]),
    ProtoInstance(name='CameraCompass36',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
      fieldValue(name='markerColor',value=(0.9,0.9,0.9)),
      fieldValue(name='labelColor',value=(0.9,0.9,0.9))]),
    Group(DEF='SeaWebBuoyNodes',
      children=[
      ProtoInstance(DEF='SeaWebBuoy0',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Racom'),
        fieldValue(name='position',value=(6000,-100,0)),
        fieldValue(name='description',value='SeaWebBuoy0')]),
      ProtoInstance(DEF='SeaWebBuoy1',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(6000,-100,2000)),
        fieldValue(name='description',value='SeaWebBuoy1')]),
      ProtoInstance(DEF='SeaWebBuoy2',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(6000,-100,4000)),
        fieldValue(name='description',value='SeaWebBuoy2')]),
      ProtoInstance(DEF='SeaWebBuoy3',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(6000,-100,6000)),
        fieldValue(name='description',value='SeaWebBuoy3')]),
      ProtoInstance(DEF='SeaWebBuoy4',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(4000,-100,0)),
        fieldValue(name='description',value='SeaWebBuoy4')]),
      ProtoInstance(DEF='SeaWebBuoy5',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(4000,-100,2000)),
        fieldValue(name='description',value='SeaWebBuoy5')]),
      ProtoInstance(DEF='SeaWebBuoy6',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(4000,-100,4000)),
        fieldValue(name='description',value='SeaWebBuoy6')]),
      ProtoInstance(DEF='SeaWebBuoy7',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(4000,-100,6000)),
        fieldValue(name='description',value='SeaWebBuoy7')]),
      ProtoInstance(DEF='SeaWebBuoy8',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(2000,-100,0)),
        fieldValue(name='description',value='SeaWebBuoy8')]),
      ProtoInstance(DEF='SeaWebBuoy9',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(2000,-100,2000)),
        fieldValue(name='description',value='SeaWebBuoy9')]),
      ProtoInstance(DEF='SeaWebBuoy10',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(2000,-100,4000)),
        fieldValue(name='description',value='SeaWebBuoy10')]),
      ProtoInstance(DEF='SeaWebBuoy11',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(2000,-100,6000)),
        fieldValue(name='description',value='SeaWebBuoy11')]),
      ProtoInstance(DEF='SeaWebBuoy12',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(0,-100,0)),
        fieldValue(name='description',value='SeaWebBuoy12')]),
      ProtoInstance(DEF='SeaWebBuoy13',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(0,-100,2000)),
        fieldValue(name='description',value='SeaWebBuoy13')]),
      ProtoInstance(DEF='SeaWebBuoy14',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Telesonar'),
        fieldValue(name='position',value=(0,-100,4000)),
        fieldValue(name='description',value='SeaWebBuoy14')]),
      ProtoInstance(DEF='SeaWebBuoy15',name='SeaWebBuoy',
        fieldValue=[
        fieldValue(name='buoyType',value='Racom'),
        fieldValue(name='position',value=(0,-100,6000)),
        fieldValue(name='description',value='SeaWebBuoy15')])]),
    Group(DEF='BuoyCommunicationsGridGroup',
      children=[
      ProtoInstance(DEF='BuoyCommsGrid',name='BuoyCommunicationsGrid',
        fieldValue=[
        fieldValue(name='textMessage',value=["testing 1 2 3"]),
        fieldValue(name='buoyArray',
          children=[
          ProtoInstance(USE='SeaWebBuoy0'),
          ProtoInstance(USE='SeaWebBuoy1'),
          ProtoInstance(USE='SeaWebBuoy2'),
          ProtoInstance(USE='SeaWebBuoy3'),
          ProtoInstance(USE='SeaWebBuoy4'),
          ProtoInstance(USE='SeaWebBuoy5'),
          ProtoInstance(USE='SeaWebBuoy6'),
          ProtoInstance(USE='SeaWebBuoy7'),
          ProtoInstance(USE='SeaWebBuoy8'),
          ProtoInstance(USE='SeaWebBuoy9'),
          ProtoInstance(USE='SeaWebBuoy10'),
          ProtoInstance(USE='SeaWebBuoy11'),
          ProtoInstance(USE='SeaWebBuoy12'),
          ProtoInstance(USE='SeaWebBuoy13'),
          ProtoInstance(USE='SeaWebBuoy14'),
          ProtoInstance(USE='SeaWebBuoy15')]),
        fieldValue(name='buoyCommunicationsRoutingTable',value=[-1,1,1,1,4,5,5,5,4,5,5,5,4,5,5,5,0,-1,2,2,4,5,6,6,4,5,6,6,4,5,6,6,1,1,-1,3,5,5,6,7,5,5,6,7,5,5,6,7,2,2,2,-1,6,6,6,7,6,6,6,7,6,6,6,7,0,1,1,1,-1,5,5,5,8,9,9,9,8,9,9,9,0,1,2,2,4,-1,6,6,8,9,10,10,8,9,10,10,1,1,2,3,5,5,-1,7,9,9,10,11,9,9,10,11,2,2,2,3,6,6,6,-1,10,10,10,11,10,10,10,11,4,5,5,5,4,5,5,5,-1,9,9,9,12,13,13,13,4,5,6,6,4,5,6,6,8,-1,10,10,12,13,14,14,5,5,6,7,5,5,6,7,9,9,-1,11,13,13,14,15,6,6,6,7,6,6,6,7,10,10,10,-1,14,14,14,15,8,9,9,9,8,9,9,9,8,9,9,9,-1,13,13,13,8,9,10,10,8,9,10,10,8,9,10,10,12,-1,14,14,9,9,10,11,9,9,10,11,9,9,10,11,13,13,-1,15,10,10,10,11,10,10,10,11,10,10,10,11,14,14,14,-1])])]),
    Group(DEF='AnimationControl',
      children=[
      ProtoInstance(DEF='MasterDvdClock',name='DvdController',
        fieldValue=[
        fieldValue(name='displayMode',value='PLAYBACK_SLIDER'),
        fieldValue(name='playEnabled',value=True),
        fieldValue(name='buttonColor',value=(0.655,0.655,0.655)),
        fieldValue(name='selectedButtonColor',value=(0.675,0.675,0.675)),
        fieldValue(name='selectedLabelColor',value=(0.9,0,0)),
        fieldValue(name='locationOffset',value=(-4,3,-10)),
        fieldValue(name='cycleInterval',value=60),
        fieldValue(name='speedFactor',value=10.0),
        fieldValue(name='traceEnabled',value=False)])]),
    Group(DEF='TransitingVehiclesGroup',
      children=[
      Group(DEF='MantaGroup',
        children=[
        Transform(DEF='MantaTransform',
          children=[
          Viewpoint(description='Manta side view',orientation=(0,1,0,-1.57),position=(-20,3,0)),
          Inline(DEF='Manta4',url=["../../Robots/UnmannedUnderwaterVehicles/Manta4.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Manta4.x3d","../../Robots/UnmannedUnderwaterVehicles/Manta4.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/Manta4.wrl"])]),
        ProtoInstance(DEF='MantaWaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Manta AUV'),
          fieldValue(name='waypoints',value=[(1100,-5,6100),(1100,-5,8100),(7500,-5,8100),(7500,-5,1100),(6100,-5,1100),(1100,-5,6100)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=100),
          fieldValue(name='lineColor',value=(0.8,0.8,0.2)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,4,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='MasterDvdClock',toField='set_fraction',toNode='MantaWaypointInterpolator'),
        #  global fix needed: change toField set_cycleInterval 
        ROUTE(fromField='totalDuration',fromNode='MantaWaypointInterpolator',toField='set_cycleInterval',toNode='MasterDvdClock'),
        ROUTE(fromField='position_changed',fromNode='MantaWaypointInterpolator',toField='set_translation',toNode='MantaTransform'),
        ROUTE(fromField='orientation_changed',fromNode='MantaWaypointInterpolator',toField='set_rotation',toNode='MantaTransform'),
        ROUTE(fromField='position_changed',fromNode='MantaWaypointInterpolator',toField='set_receiverPosition',toNode='BuoyCommsGrid')]),
      Group(DEF='SolarAuvGroup',
        children=[
        Transform(DEF='SolarAuvTransform',
          children=[
          Inline(DEF='SolarAuv',url=["../../Robots/UnmannedUnderwaterVehicles/SolarAUV.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SolarAUV.x3d","../../Robots/UnmannedUnderwaterVehicles/SolarAUV.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SolarAUV.wrl"]),
          #  looping clock trigger follows 
          TimeSensor(DEF='SolarAuvMessageSendClock',cycleInterval=15,loop=True),
          Script(DEF='SolarAuvMessageScript',
            field=[
            field(accessType='inputOnly',appinfo='trigger when time to create new message',name='timeToPrepareMessage',type='SFTime'),
            field(accessType='initializeOnly',name='messageCounter',type='SFInt32',value=0),
            field(accessType='outputOnly',appinfo='text of next message to be sent',name='newMessage',type='MFString'),
            field(accessType='outputOnly',name='sendMessage',type='SFBool')]),
          ROUTE(fromField='cycleTime',fromNode='SolarAuvMessageSendClock',toField='timeToPrepareMessage',toNode='SolarAuvMessageScript'),
          ROUTE(fromField='newMessage',fromNode='SolarAuvMessageScript',toField='set_textMessage',toNode='BuoyCommsGrid'),
          ROUTE(fromField='sendMessage',fromNode='SolarAuvMessageScript',toField='sendMessage',toNode='BuoyCommsGrid')]),
        ProtoInstance(DEF='SolarAuvWaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Solar AUV'),
          fieldValue(name='waypoints',value=[(-1000,-1,-1000),(0,-1,0),(2000,-1,2000),(3000,-1,3000),(4000,-1,4000),(5000,-1,5000),(6000,-1,6000),(7000,-1,7000),(7000,-1,6000),(6000,-1,5000),(5000,-1,4000),(4000,-1,3000),(3000,-1,2000),(2000,-1,1000),(1000,-1,0),(0,-1,-1000),(-1000,-1,-1000)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=10),
          fieldValue(name='lineColor',value=(0.8,0.8,0.2)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,1,0)),
          fieldValue(name='labelFontSize',value=0.2),
          fieldValue(name='labelColor',value=(0.9,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='MasterDvdClock',toField='set_fraction',toNode='SolarAuvWaypointInterpolator'),
        ROUTE(fromField='position_changed',fromNode='SolarAuvWaypointInterpolator',toField='set_translation',toNode='SolarAuvTransform'),
        ROUTE(fromField='orientation_changed',fromNode='SolarAuvWaypointInterpolator',toField='set_rotation',toNode='SolarAuvTransform'),
        ROUTE(fromField='position_changed',fromNode='SolarAuvWaypointInterpolator',toField='set_senderPosition',toNode='BuoyCommsGrid')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BuoyCommunicationsGridExample.py")

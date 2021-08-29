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
    meta(content='AmphibiousRaid.x3d',name='title'),
    meta(content='Amphibious Raid shows an exemplar amphibious raid at Red Beach, Camp Pendleton California. It is the primary scenario for the SAVAGE group.',name='description'),
    meta(content='Don Brutzman, Curtis Blais, Jeff Weekley, Jane Wu, Shane Nicklaus, MIke Hunsberger',name='creator'),
    meta(content='9 April 2001',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='../../documents/NicklausNpsRedBeachRaidScenario2001May2.html',name='reference'),
    meta(content='../../documents/NicklausNpsRedBeachRaidScenario2001May2.ppt',name='reference'),
    meta(content='HeloPatrolPendletonBackground.png',name='Image'),
    meta(content='AmphibiousRaidWithCommunications.x3d',name='reference'),
    meta(content='Coordinate system axes need to be aligned properly.',name='warning'),
    meta(content='Future work: add pushbutton to enable/disable ViewpointSequencer. IMPORT/EXPORT viewpoints from Inline scenes and add Viewpoints to ViewpointSequencer.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/AmphibiousRaidCampPendleton/AmphibiousRaid.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolator.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Prototype and external prototype declarations must precede use 
    children=[
    ExternProtoDeclare(name='SuperCobra',url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.x3d#SuperCobra","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.x3d#SuperCobra","../../AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.wrl#SuperCobra","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SuperCobraPrototype.wrl#SuperCobra"],
      field=[
      field(accessType='initializeOnly',name='tailBoomColor',type='SFNode'),
      field(accessType='initializeOnly',name='tailRotorDriveShaftColor',type='SFNode'),
      field(accessType='initializeOnly',name='horizontalStabilizerColor',type='SFNode'),
      field(accessType='initializeOnly',name='fuselageColor',type='SFNode'),
      field(accessType='initializeOnly',name='cockpitColor',type='SFNode'),
      field(accessType='initializeOnly',name='cowlingColor',type='SFNode'),
      field(accessType='initializeOnly',name='helicopterName',type='SFString'),
      field(accessType='inputOnly',name='inFlight',type='SFBool')]),
    ExternProtoDeclare(name='CameraCompass36',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass36","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass36"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo="Digital Virtual Display (DVD) Controller Prototype definition to control a scenario's animation timing",name='DvdController',url=["../../Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
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
    ExternProtoDeclare(appinfo='Hidden viewpoint becomes active (binds) upon pointer selection to reveal an interesting view with an optionally label',name='HiddenViewpoint',url=["../../../Savage/Tools/Animation/HiddenViewpointPrototype.x3d#HiddenViewpoint","https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointPrototype.x3d#HiddenViewpoint","../../../Savage/Tools/Animation/HiddenViewpointPrototype.wrl#HiddenViewpoint","https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointPrototype.wrl#HiddenViewpoint"],
      field=[
      field(accessType='inputOutput',name='position',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='initializeOnly',name='sensorRadius',type='SFFloat'),
      field(accessType='inputOutput',name='label',type='MFString'),
      field(accessType='inputOutput',name='labelOffset',type='SFVec3f'),
      field(accessType='initializeOnly',name='labelFontSize',type='SFFloat'),
      field(accessType='inputOutput',name='labelColor',type='SFColor'),
      field(accessType='inputOnly',name='activate',type='SFBool')]),
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
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
    ExternProtoDeclare(appinfo='Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene',name='ViewpointSequencer',url=["../../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"],
      field=[
      field(accessType='initializeOnly',appinfo='Viewpoint USE nodes that are sequentially bound',name='viewpoints',type='MFNode'),
      field(accessType='inputOutput',appinfo='number of seconds between viewpoint shifts',name='interval',type='SFTime'),
      field(accessType='inputOutput',appinfo='whether ViewpointSequencer is enabled or not',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='whether ViewpointSequencer is enabled or not',name='set_enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind previous Viewpoint in list',name='previous',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind next Viewpoint in list',name='next',type='SFBool'),
      field(accessType='inputOutput',appinfo='Select message to toggle ViewpointSequencer',name='toggleMessage',type='MFString'),
      field(accessType='initializeOnly',appinfo='Color for toggleMessage text.',name='toggleMessageFontSize',type='SFFloat'),
      field(accessType='inputOutput',appinfo='Color for toggleMessage text.',name='toggleMessageColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='enable console output',name='traceEnabled',type='SFBool')]),
    #  ================= 
    NavigationInfo(DEF='CloseUpNavigation',avatarSize=[2,2,2],speed=100,visibilityLimit=80000),
    Switch(whichChoice=-1,
      #  NavigationInfo changes are not yet able to overcome aliasing bugs in graphics-rendering cards, unfortunately. Still working the problem. 
      children=[
      Group(
        children=[
        NavigationInfo(DEF='HighAltitudeLongDistanceNavigation',avatarSize=[8,8,8],speed=1000,visibilityLimit=80000),
        ProximitySensor(DEF='Below1000m',size=(100000,2000,100000)),
        ROUTE(fromField='isActive',fromNode='Below1000m',toField='set_bind',toNode='CloseUpNavigation')])]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[1.309,1.571],skyColor=[(0.1,0.1,0.4),(0.1,0.125,0.4),(0.1,0.1,0.3)]),
    Viewpoint(DEF='ViewFullScenarioAbove',description='Amphibious raid - full scenario seen from above',orientation=(-0.557,-0.799,-0.229,0.9506),position=(-600,10000,25000)),
    Viewpoint(DEF='View1000m',description='1000m elevation view',orientation=(0,1,0,-0.78),position=(-200,1000,22000)),
    Transform(rotation=(0,0,1,.1),
      children=[
      Viewpoint(DEF='ViewWaypoint1',description='Waypoint 1',orientation=(0,1,0,1.57),position=(9451,20,14935)),
      Viewpoint(DEF='ViewWaypoint2',description='waypoint 2',orientation=(0,1,0,1.57),position=(11217.2,10.0,13996.6))]),
    #  This is a hack to orient camera to scene. Actually, scene elements need to be rotated. 
    Transform(rotation=(0,1,0,1.57),
      children=[
      ProtoInstance(name='CameraCompass36',
        fieldValue=[
        fieldValue(name='enabled',value=True),
        fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
        fieldValue(name='markerColor',value=(0.9,0.9,0.9)),
        fieldValue(name='labelColor',value=(0.9,0.9,0.9))])]),
    #  Hidden viewpoints are clickable transparent boxes that let us temporarily view the scene from a given vantage point. The camera returns to the previously bound viewpoint upon unclicking the mouse. 
    Group(DEF='HiddenViewpointGroup',
      children=[
      ProtoInstance(DEF='CobraCapStartingPoint',name='HiddenViewpoint',
        fieldValue=[
        fieldValue(name='position',value=(6530,18,16800)),
        fieldValue(name='rotation',value=(0,1,0,-0.1)),
        fieldValue(name='sensorRadius',value=10),
        fieldValue(name='label',value=["Cobra CAP","starting point","","6530 11.5 16800"]),
        fieldValue(name='labelOffset',value=(0,-2,0)),
        fieldValue(name='labelFontSize',value=0.5),
        fieldValue(name='labelColor',value=(1,0.5,0))]),
      ProtoInstance(DEF='CobraCapInitialClimb',name='HiddenViewpoint',
        fieldValue=[
        fieldValue(name='position',value=(6530,500,16800)),
        fieldValue(name='rotation',value=(0,1,0,-0.4)),
        fieldValue(name='sensorRadius',value=100),
        fieldValue(name='label',value=["Cobra CAP","initial climb point","","6530 500 16800"]),
        fieldValue(name='labelOffset',value=(0,1,0)),
        fieldValue(name='labelFontSize',value=0.5),
        fieldValue(name='labelColor',value=(1,0.5,0))]),
      ProtoInstance(DEF='SouthernCapTurnPoint',name='HiddenViewpoint',
        fieldValue=[
        fieldValue(name='position',value=(25400,500,19100)),
        fieldValue(name='rotation',value=(0,1,0,0.4)),
        fieldValue(name='sensorRadius',value=200),
        fieldValue(name='label',value=["Cobra CAP","Southern Turn Point","","25400 500 191000"]),
        fieldValue(name='labelOffset',value=(0,1,0)),
        fieldValue(name='labelFontSize',value=0.5),
        fieldValue(name='labelColor',value=(1,0.5,0))]),
      ProtoInstance(DEF='NorthernCapTurnPoint',name='HiddenViewpoint',
        fieldValue=[
        fieldValue(name='position',value=(5100,500,700)),
        fieldValue(name='rotation',value=(0,1,0,-2.3)),
        fieldValue(name='sensorRadius',value=200),
        fieldValue(name='label',value=["Cobra CAP","Northern Turn Point","","5100 500 700"]),
        fieldValue(name='labelOffset',value=(0,1,0)),
        fieldValue(name='labelFontSize',value=0.5),
        fieldValue(name='labelColor',value=(1,0.5,0))])]),
    #  This top-level switch simply supports debugging 
    Switch(whichChoice=0,
      #  Main group with all players. 
      children=[
      Group(DEF='EntireScene',
        #  ==================== Land terrain ==================== 
        children=[
        Transform(
          children=[
          Inline(url=["../../Locations/CampPendletonCalifornia/CampPendletonOperatingAreasExample.x3d","https://savage.nps.edu/Savage/Locations/CampPendletonCalifornia/CampPendletonOperatingAreasExample.x3d","../../Locations/CampPendletonCalifornia/CampPendletonOperatingAreasExample.wrl","https://savage.nps.edu/Savage/Locations/CampPendletonCalifornia/CampPendletonOperatingAreasExample.wrl"])]),
        #  ==================== Ships ==================== 
        #  LPD is anchored and not moving. 
        Transform(DEF='LPD',translation=(6600,7,16800),
          children=[
          Inline(url=["../../ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.x3d","../../ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.wrl"])]),
        #  ==================== Amphibious vehicles ==================== 
        #  AAAV-1 Block 
        TimeSensor(DEF='AAAV1_Clock',cycleInterval=307.3,loop=True),
        ProtoInstance(DEF='AAAV_1_WaypointInterpolator',name='WaypointInterpolator',
          #  need to improve elevations on beach (final waypoint) 
          fieldValue=[
          fieldValue(name='description',value='AAAV_1_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(6802,1,16343),(7685.0,1.0,15873.7),(8568.1,1.0,15404.4),(9451.1,1.0,14935.2),(10334.2,1.0,14465.9),(11217.2,1.0,13996.6),(12100.3,1.0,13527.3),(12983.3,1.0,13058.0),(13866.4,1.0,12588.7),(14749.4,1.0,12119.5),(15632.5,1.0,11650.2),(16515.5,1.0,11180.9),(17398.6,1.0,10711.6),(18281.6,1.0,10242.3),(19164.7,1.0,9773.1),(19400.0,1.0,9648.0),(19782,1,9185),(20100,10,8800)]),
          #  1 knot = 0.5144 meters/second 
          fieldValue(name='defaultSpeed',value=50),
          fieldValue(name='lineColor',value=(0.8,0.8,0)),
          fieldValue(name='labelColor',value=(0.8,0.8,0)),
          fieldValue(name='labelOffset',value=(0,3,0)),
          fieldValue(name='labelFontSize',value=1.5),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='AAAV1_Clock',toField='set_fraction',toNode='AAAV_1_WaypointInterpolator'),
        ROUTE(fromField='totalDuration',fromNode='AAAV_1_WaypointInterpolator',toField='set_cycleInterval',toNode='AAAV1_Clock'),
        #  Most entity transforms will get converted to DIS-Java-VRML EspduTransforms when creating a networked DIS version. 
        Transform(DEF='AAAV-Location',translation=(6600,0,16800),
          children=[
          Group(
            children=[
            Viewpoint(DEF='ViewAAAVfromBehind',description='AAAV raid from behind',orientation=(0,1,0,-1.57),position=(-40,2,0)),
            Viewpoint(DEF='ViewAAAVfromAhead',description='AAAV raid from ahead',orientation=(0,1,0,1.57),position=(50,12,0)),
            Transform(DEF='VerticalCorrection',translation=(0,-4,0),
              children=[
              Inline(DEF='AAAV',url=["../../AmphibiousVehicles/AAAV/AAAV.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AAAV.x3d","../../AmphibiousVehicles/AAAV/AAAV.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AAAV.wrl"])]),
            Group(DEF='OtherAAAVs',
              children=[
              Transform(translation=(-15,-4,15),
                children=[
                Transform(DEF='AAAV-2',
                  children=[
                  Inline(USE='AAAV'),
                  PositionInterpolator(DEF='AAV-2PATH',key=[0.00,0.11,0.17,0.22,0.33,0.44,0.50,0.55,0.66,0.77,0.83,0.88,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,1.5),(2.0,0.96,2.0),(3.0,0.0,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='AAV-2PATH',toField='set_translation',toNode='AAAV-2')])]),
              Transform(translation=(-15,-4,-17.5),
                children=[
                Transform(DEF='AAAV-3',
                  children=[
                  Inline(USE='AAAV'),
                  PositionInterpolator(DEF='AAV-3PATH',key=[0.00,0.07,0.13,0.22,0.36,0.47,0.55,0.625,0.66,0.72,0.80,0.85,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,2.25),(2.0,0.46,2.66),(3.0,-0.25,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='AAV-3PATH',toField='set_translation',toNode='AAAV-3')])])])])]),
        ROUTE(fromField='position_changed',fromNode='AAAV_1_WaypointInterpolator',toField='set_translation',toNode='AAAV-Location'),
        ROUTE(fromField='orientation_changed',fromNode='AAAV_1_WaypointInterpolator',toField='set_rotation',toNode='AAAV-Location'),
        #  ==================== Helicopter 1 Block ==================== 
        Transform(DEF='Helo-1',translation=(6530,11.5,16800),
          children=[
          ProtoInstance(DEF='HeloInstance1',name='SuperCobra',
            fieldValue=[
            fieldValue(name='helicopterName',value='Cobra CAP 1'),
            fieldValue(name='tailBoomColor',
              children=[
              Appearance(DEF='GREY_APPEARANCE',
                material=Material(diffuseColor=(0.5,0.5,0.5)))]),
            fieldValue(name='tailRotorDriveShaftColor',
              children=[
              Appearance(USE='GREY_APPEARANCE')]),
            fieldValue(name='horizontalStabilizerColor',
              children=[
              Appearance(
                material=Material(diffuseColor=(0.5,0.5,0.5)))]),
            fieldValue(name='fuselageColor',
              children=[
              Appearance(
                material=Material(diffuseColor=(0.6,0.6,0.6)))]),
            fieldValue(name='cockpitColor',
              children=[
              Appearance(
                material=Material(diffuseColor=(0.6,0.6,0.6)))]),
            fieldValue(name='cowlingColor',
              children=[
              Appearance(
                material=Material(diffuseColor=(0.5,0.5,0.5)))])])]),
        ProtoInstance(DEF='Helo_1_WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Helo_1_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(6600,600,16800),(7592.6,600,16921.4),(8585.2,600,17042.9),(9577.8,600,17164.3),(10570.4,600,17285.7),(11563.0,600,17407.2),(12555.6,600,17528.6),(13548.2,600,17650.0),(14540.8,600,17771.5),(15533.4,600,17892.9),(16526.0,600,18014.4),(17518.6,600,18135.8),(18511.2,600,18257.2),(19503.8,600,18378.7),(20496.4,600,18500.1),(21489.0,600,18621.5),(22481.6,600,18743.0),(23474.2,600,18864.4),(24466.8,600,18985.8),(25400,600,19100),(24906.2,600,18230.4),(24412.4,600,17360.9),(23918.5,600,16491.3),(23424.7,600,15621.8),(22930.9,600,14752.2),(22437.1,600,13882.6),(21943.2,600,13013.1),(21449.4,600,12143.5),(20955.6,600,11273.9),(20800,600,11000),(20072.7,600,10313.7),(19345.4,600,9627.4),(18618.1,600,8941.0),(17890.8,600,8254.7),(17163.5,600,7568.4),(16436.2,600,6882.1),(15708.9,600,6195.7),(14981.6,600,5509.4),(14254.3,600,4823.1),(13700,600,4300),(12777.6,600,3913.9),(11855.1,600,3527.7),(10932.7,600,3141.6),(10010.2,600,2755.4),(9087.8,600,2369.3),(8165.4,600,1983.2),(7242.9,600,1597.0),(6320.5,600,1210.9),(5398.0,600,824.8),(5100,600,700),(5192.8,600,1695.7),(5285.5,600,2691.4),(5378.3,600,3687.1),(5471.1,600,4682.8),(5563.8,600,5678.4),(5656.6,600,6674.1),(5749.4,600,7669.8),(5842.1,600,8665.5),(5934.9,600,9661.2),(6027.7,600,10656.9),(6120.4,600,11652.6),(6213.2,600,12648.3),(6306.0,600,13643.9),(6398.7,600,14639.6),(6491.5,600,15635.3),(6584.3,600,16631.0),(6600,600,16800)]),
          #  1 knot = 0.514444444 meters/second 
          fieldValue(name='defaultSpeed',value=100),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='lineColor',value=(0,0.8,0)),
          fieldValue(name='labelColor',value=(0,0.8,0)),
          fieldValue(name='labelOffset',value=(0,5,0)),
          fieldValue(name='labelFontSize',value=3),
          fieldValue(name='traceEnabled',value=False)]),
        TimeSensor(DEF='Helo1_Clock',cycleInterval=635.1,loop=True),
        ROUTE(fromField='totalDuration',fromNode='Helo_1_WaypointInterpolator',toField='cycleInterval',toNode='Helo1_Clock'),
        ROUTE(fromField='fraction_changed',fromNode='Helo1_Clock',toField='set_fraction',toNode='Helo_1_WaypointInterpolator'),
        #  ==================== Helicopter 2 Block ==================== 
        Transform(DEF='Helo-2',translation=(6600,50,16800),
          children=[
          Transform(
            children=[
            ProtoInstance(DEF='HeloInstance2',name='SuperCobra',
              fieldValue=[
              fieldValue(name='helicopterName',value='Cobra CAP 2'),
              fieldValue(name='tailBoomColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5)))]),
              fieldValue(name='tailRotorDriveShaftColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5)))]),
              fieldValue(name='horizontalStabilizerColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5)))]),
              fieldValue(name='fuselageColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.6,0.6,0.6)))]),
              fieldValue(name='cockpitColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.6,0.6,0.6)))]),
              fieldValue(name='cowlingColor',
                children=[
                Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5)))])])])]),
        ProtoInstance(DEF='Helo_2_WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Helo_2_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(6530,11.5,16800),(6530,500,16800),(6600,500,16800),(7592.6,500,16921.4),(8585.2,500,17042.9),(9577.8,500,17164.3),(10570.4,500,17285.7),(11563.0,500,17407.2),(12555.6,500,17528.6),(13548.2,500,17650.0),(14540.8,500,17771.5),(15533.4,500,17892.9),(16526.0,500,18014.4),(17518.6,500,18135.8),(18511.2,500,18257.2),(19503.8,500,18378.7),(20496.4,500,18500.1),(21489.0,500,18621.5),(22481.6,500,18743.0),(23474.2,500,18864.4),(24466.8,500,18985.8),(25400,500,19100),(24906.2,500,18230.4),(24412.4,500,17360.9),(23918.5,500,16491.3),(23424.7,500,15621.8),(22930.9,500,14752.2),(22437.1,500,13882.6),(21943.2,500,13013.1),(21449.4,500,12143.5),(20955.6,500,11273.9),(20800,500,11000),(20072.7,500,10313.7),(19345.4,500,9627.4),(18618.1,500,8941.0),(17890.8,500,8254.7),(17163.5,500,7568.4),(16436.2,500,6882.1),(15708.9,500,6195.7),(14981.6,500,5509.4),(14254.3,500,4823.1),(13700,500,4300),(12777.6,500,3913.9),(11855.1,500,3527.7),(10932.7,500,3141.6),(10010.2,500,2755.4),(9087.8,500,2369.3),(8165.4,500,1983.2),(7242.9,500,1597.0),(6320.5,500,1210.9),(5398.0,500,824.8),(5100,500,700),(5192.8,500,1695.7),(5285.5,500,2691.4),(5378.3,500,3687.1),(5471.1,500,4682.8),(5563.8,500,5678.4),(5656.6,500,6674.1),(5749.4,500,7669.8),(5842.1,500,8665.5),(5934.9,500,9661.2),(6027.7,500,10656.9),(6120.4,500,11652.6),(6213.2,500,12648.3),(6306.0,500,13643.9),(6398.7,500,14639.6),(6491.5,500,15635.3),(6584.3,500,16631.0),(6600,500,16800)]),
          #  1 knot = 0.514444444 meters/second 
          fieldValue(name='defaultSpeed',value=200),
          fieldValue(name='lineColor',value=(0.8,0,0)),
          fieldValue(name='labelColor',value=(0.8,0,0)),
          fieldValue(name='labelOffset',value=(0,5,0)),
          fieldValue(name='labelFontSize',value=3),
          fieldValue(name='traceEnabled',value=False)]),
        TimeSensor(DEF='Helo2_Clock',cycleInterval=320.3,loop=True),
        ROUTE(fromField='totalDuration',fromNode='Helo_2_WaypointInterpolator',toField='cycleInterval',toNode='Helo2_Clock'),
        ROUTE(fromField='fraction_changed',fromNode='Helo2_Clock',toField='set_fraction',toNode='Helo_2_WaypointInterpolator'),
        #  ============== AAV7PA1 
        Transform(DEF='AAV7PA1Location',scale=(1.25,1.25,1.25),translation=(6620,-2,16900),
          children=[
          Inline(url=["../../AmphibiousVehicles/AAV/AAV.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/AAV.x3d","../../AmphibiousVehicles/AAV/AAV.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/AAV.wrl"])]),
        TimeSensor(DEF='AAV7PA1Clock',cycleInterval=1560,loop=True),
        ProtoInstance(DEF='AAV7PA1WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='AAV7PA1WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(6620,-1,16900),(6720,-1,16900),(6870,-1,19500),(7400,-1,19500),(8400,-1,16900),(6620,-1,16900)]),
          #  1 knot = 0.514444444 meters/second 
          fieldValue(name='defaultSpeed',value=5),
          fieldValue(name='lineColor',value=(0.8,0,0.65)),
          fieldValue(name='labelColor',value=(0.8,0,0)),
          fieldValue(name='labelOffset',value=(0,5,0)),
          fieldValue(name='labelFontSize',value=3),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='totalDuration',fromNode='AAV7PA1WaypointInterpolator',toField='cycleInterval',toNode='AAV7PA1Clock'),
        #  AAV7PA1 Waypoint Routes 
        ROUTE(fromField='fraction_changed',fromNode='AAV7PA1Clock',toField='set_fraction',toNode='AAV7PA1WaypointInterpolator'),
        ROUTE(fromField='position_changed',fromNode='AAV7PA1WaypointInterpolator',toField='set_translation',toNode='AAV7PA1Location'),
        ROUTE(fromField='orientation_changed',fromNode='AAV7PA1WaypointInterpolator',toField='set_rotation',toNode='AAV7PA1Location')]),
      #  hide things here until ready to bring them into the active scene 
      Switch(whichChoice=0,
        #  Ocean bathymetry 
        children=[
        Transform(rotation=(0,1,0,1.57079),translation=(11900,0,6000),
          children=[
          Inline(url=["../../Locations/CampPendletonCalifornia/ChartletTranscribed.x3d","https://savage.nps.edu/Savage/Locations/CampPendletonCalifornia/ChartletTranscribed.x3d","../../Locations/CampPendletonCalifornia/ChartletTranscribed.wrl","https://savage.nps.edu/Savage/Locations/CampPendletonCalifornia/ChartletTranscribed.wrl"])]),
        #  GeoVrml versions will be here someday 
        Group(
          #  Southwest corner reference point: 33:12N 117:38W 
          #  GeoLocation and USE EntireScene to follow 
          )])]),
    #  AAAV-1 Waypoint Routes 
    #  Helo-1 Waypoint Routes 
    ROUTE(fromField='isActive',fromNode='Helo1_Clock',toField='inFlight',toNode='HeloInstance1'),
    ROUTE(fromField='position_changed',fromNode='Helo_1_WaypointInterpolator',toField='set_translation',toNode='Helo-1'),
    ROUTE(fromField='orientation_changed',fromNode='Helo_1_WaypointInterpolator',toField='set_rotation',toNode='Helo-1'),
    #  Helo-2 Waypoint Routes 
    ROUTE(fromField='isActive',fromNode='Helo2_Clock',toField='inFlight',toNode='HeloInstance2'),
    ROUTE(fromField='position_changed',fromNode='Helo_2_WaypointInterpolator',toField='set_translation',toNode='Helo-2'),
    ROUTE(fromField='orientation_changed',fromNode='Helo_2_WaypointInterpolator',toField='set_rotation',toNode='Helo-2'),
    #  AAV2 
    ROUTE(fromField='fraction_changed',fromNode='AAAV1_Clock',toField='set_fraction',toNode='AAV-2PATH'),
    ProtoInstance(name='ViewpointSequencer',
      fieldValue=[
      fieldValue(name='viewpoints',
        children=[
        Viewpoint(USE='ViewFullScenarioAbove'),
        Viewpoint(USE='View1000m'),
        Viewpoint(USE='ViewWaypoint1'),
        Viewpoint(USE='ViewWaypoint2'),
        Viewpoint(USE='ViewAAAVfromBehind'),
        Viewpoint(USE='ViewAAAVfromAhead')]),
      fieldValue(name='enabled',value=False),
      fieldValue(name='interval',value=8)]),
    #  ViewPositionOrientation is a prototype that lets us find good viewpoints for inclusion in the scene 
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=False)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AmphibiousRaid.py")

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
    meta(content='SonobuoyFieldScenario.x3d',name='title'),
    meta(content='Representative tactical visualization of a DICASS sonobuoy field.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='31 January 2003',name='created'),
    meta(content='27 December 2006',name='created'),
    meta(content='x=East, z=North, y=Up',name='coordinateSystem'),
    meta(content='sonobouy field',name='subject'),
    meta(content='GridView.jpg',name='Image'),
    meta(content='SeaHawkRadioCommand.jpg',name='Image'),
    meta(content='SeaHawkView.jpg',name='Image'),
    meta(content='SeaHawkViewPing.jpg',name='Image'),
    meta(content='SonobuoyFieldScenario-1.jpg',name='Image'),
    meta(content='SonobuoyFieldScenario-2.jpg',name='Image'),
    meta(content='SonobuoyFieldScenario-3.jpg',name='Image'),
    meta(content='SonobuoyView.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/SonobuoyFieldScenario.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=100,visibilityLimit=40000),
    Viewpoint(DEF='TopDown',description='Looking down from above - TODO check visibilityLimit',orientation=(1,0,0,-1.550799),position=(0,2000,10)),
    Group(DEF='BackgroundEnvironment',
      #  topmost is active 
      children=[
      Background(DEF='OpenOcean',groundAngle=[0.05,1.309,1.570796],groundColor=[(0,0,0),(0,0.2,0.4),(0.05,0.25,0.6),(0.1,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
      Background(DEF='SandyShallowBottom',groundAngle=[0.05,1.52,1.56,1.570796],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.05,0.1,1.309,1.571],skyColor=[(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
      Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)])]),
    Group(DEF='ExternProtoDeclareReferences',
      children=[
      ExternProtoDeclare(appinfo='Produce wireframe or transparent beam cylinders. Typical uses include propeller/thruster water flow or line-of-sight sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: beam with apex at (0 0 0) and base of radius 1 in x-z plane at (1 0 0).',name='BeamCylinder',url=["../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.x3d#BeamCylinder","../../CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamCylinderPrototype.wrl#BeamCylinder"],
        field=[
        field(accessType='initializeOnly',appinfo='Assigning a name to a BeamCylinder aids tracing',name='name',type='SFString'),
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
      ExternProtoDeclare(appinfo='CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point',name='CrossHair',url=["../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"],
        field=[
        field(accessType='initializeOnly',appinfo='whether CrossHair prototype is enabled or not',name='enabled',type='SFBool'),
        field(accessType='inputOnly',appinfo='control whether enabled/disabled',name='set_enabled',type='SFBool'),
        field(accessType='inputOutput',appinfo='color of CrossHair marker',name='markerColor',type='SFColor'),
        field(accessType='inputOutput',appinfo='size of CrossHair in meters',name='scale',type='SFVec3f'),
        field(accessType='inputOutput',appinfo='distance in front of HUD viewpoint',name='positionOffsetFromCamera',type='SFVec3f')]),
      ExternProtoDeclare(appinfo='AN/SSQ-62B/C/D/E Directional Command Activated Sonobuoy System (DICASS) Sonobuoy',name='DICASS',url=["DicassPrototype.x3d#DICASS","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototype.x3d#DICASS","DicassPrototype.wrl#DICASS","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/DicassPrototype.wrl#DICASS"],
        field=[
        field(accessType='inputOutput',appinfo='identifier label for this buoy',name='ID',type='MFString'),
        field(accessType='initializeOnly',appinfo='default value: AN/SSQ-62B',name='version',type='SFString'),
        field(accessType='initializeOnly',appinfo='local surface coordinates X=North Z=East',name='initialPositionXZ',type='SFVec2f'),
        field(accessType='inputOnly',appinfo='local surface coordinates X=North Z=East',name='orderedPositionXZ',type='SFVec2f'),
        field(accessType='initializeOnly',appinfo='meters depth use negative numbers for subsurface',name='initialDepth',type='SFFloat'),
        field(accessType='inputOnly',appinfo='meters depth use negative numbers for subsurface',name='orderedDepth',type='SFFloat'),
        field(accessType='inputOnly',appinfo='trigger event to bind/unbind viewpoint',name='bindViewpoint',type='SFBool'),
        field(accessType='outputOnly',appinfo='local coordinates X=North Y=altitude Z=East',name='location_changed',type='SFVec3f'),
        field(accessType='initializeOnly',appinfo='maximum audible sonar detection range meters',name='maxRange',type='SFFloat'),
        field(accessType='outputOnly',appinfo='pingDuration corresponds to maxRange at 1500m/sec sound speed',name='pingDuration',type='SFTime'),
        field(accessType='inputOnly',appinfo='trigger event to start single ping',name='startPing',type='SFBool'),
        field(accessType='inputOnly',appinfo='trigger event to start continuous ping sequence',name='startContinuousPings',type='SFBool'),
        field(accessType='inputOutput',appinfo='Can add linkable text for further information',name='linkText',type='MFString'),
        field(accessType='inputOutput',appinfo='"url for linkable text"',name='linkUrl',type='MFString'),
        field(accessType='inputOutput',appinfo='target window for linkable text',name='linkTargetWindow',type='MFString'),
        field(accessType='initializeOnly',appinfo='in-water sound speed m/s, default value 1500',documentation='https://en.wikipedia.org/wiki/Speed_of_sound#Seawater',name='soundSpeed',type='SFFloat')]),
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
      ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
        field=[
        field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console',name='enabled',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node, intended for developer use only',name='traceEnabled',type='SFBool'),
        field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime',name='set_traceEnabled',type='SFBool'),
        field(accessType='outputOnly',appinfo='Output local position',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='Output local orientation',name='orientation_changed',type='SFRotation'),
        field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
      ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
        #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
        #  interpolation fields 
        #  display-related fields 
        field=[
        field(accessType='initializeOnly',appinfo='Short description of what is animated by this WaypointInterpolator.',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='Waypoints being traversed with interpolation of intermediate positions and orientations.',name='waypoints',type='MFVec3f'),
        field(accessType='inputOnly',appinfo='Add another single waypoint to array of waypoints recalculate interpolator values.',name='add_waypoint',type='SFVec3f'),
        field(accessType='inputOnly',appinfo='Replace all waypoints recalculate interpolator values.',name='set_waypoints',type='MFVec3f'),
        field(accessType='initializeOnly',appinfo='Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope',name='pitchUpDownForVerticalWaypoints',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Units m/sec. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legSpeeds',type='MFFloat'),
        field(accessType='initializeOnly',appinfo='Units in seconds. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legDurations',type='MFFloat'),
        field(accessType='initializeOnly',appinfo='Units m/sec.',name='defaultSpeed',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous.',name='turningRate',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds.',name='totalDuration',type='SFTime'),
        field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
        field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
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
        field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='verticalDropLineTransparency',type='SFFloat')])]),
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
    Switch(DEF='AuthoringAssist',whichChoice=0,
      children=[
      Group(
        children=[
        Transform(scale=(10,10,10),
          children=[
          Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
        ProtoInstance(name='ViewPositionOrientation',
          fieldValue=[
          fieldValue(name='enabled',value=False)]),
        ProtoInstance(DEF='CrossHairInstance',name='CrossHair',
          fieldValue=[
          fieldValue(name='enabled',value=True),
          fieldValue(name='markerColor',value=(1,0.5,0)),
          fieldValue(name='scale',value=(1,1,1)),
          fieldValue(name='positionOffsetFromCamera',value=(0,0,-6))])]),
      Transform(DEF='Grid10kmBy10km',scale=(1000,1000,1000),
        children=[
        Inline(url=["../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"])])]),
    Group(DEF='HelicopterGroup',
      children=[
      Transform(DEF='SeahawkHelicopterTransform',
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.wrl"])]),
      TimeSensor(DEF='HelicopterOrbitClock',cycleInterval=211.7,loop=True),
      ProtoInstance(DEF='HelicopterOrbitTrack',name='WaypointInterpolator',
        #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
        fieldValue=[
        fieldValue(name='description',value='SH-60B Seahawk orbit'),
        fieldValue(name='waypoints',value=[(0,100,0),(-1000,100,1000),(-1000,500,5000),(0,500,6000),(5000,500,6000),(6000,100,5000),(6000,100,0),(5000,100,-1000),(1000,100,-1000),(0,100,0)]),
        fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
        fieldValue(name='defaultSpeed',value=50),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='lineColor',value=(0.5,0.5,0)),
        fieldValue(name='highlightSegmentColor',value=(1,1,0)),
        fieldValue(name='transparency',value=0),
        fieldValue(name='labelDisplayMode',value='interpolation'),
        fieldValue(name='heightLabel',value='altitude'),
        fieldValue(name='labelOffset',value=(0,3,0)),
        fieldValue(name='labelFontSize',value=0.8),
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='traceEnabled',value=False)]),
      ROUTE(fromField='totalDuration',fromNode='HelicopterOrbitTrack',toField='set_cycleInterval',toNode='HelicopterOrbitClock'),
      ROUTE(fromField='fraction_changed',fromNode='HelicopterOrbitClock',toField='set_fraction',toNode='HelicopterOrbitTrack'),
      ROUTE(fromField='position_changed',fromNode='HelicopterOrbitTrack',toField='set_translation',toNode='SeahawkHelicopterTransform'),
      ROUTE(fromField='orientation_changed',fromNode='HelicopterOrbitTrack',toField='set_rotation',toNode='SeahawkHelicopterTransform')]),
    Group(DEF='SonobuoyFieldLayout',
      children=[
      Transform(DEF='LocationBuoy1-1',
        children=[
        ProtoInstance(DEF='DICASS-1-1',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 1.1"]),
          fieldValue(name='initialPositionXZ',value=(1000,1000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy1-2',
        children=[
        ProtoInstance(DEF='DICASS-1-2',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 1.2"]),
          fieldValue(name='initialPositionXZ',value=(1000,2000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy1-3',
        children=[
        ProtoInstance(DEF='DICASS-1-3',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 1.3"]),
          fieldValue(name='initialPositionXZ',value=(1000,3000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy1-4',
        children=[
        ProtoInstance(DEF='DICASS-1-4',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 1.4"]),
          fieldValue(name='initialPositionXZ',value=(1000,4000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy2-1',
        children=[
        ProtoInstance(DEF='DICASS-2-1',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 2.1"]),
          fieldValue(name='initialPositionXZ',value=(2000,1000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy2-2',
        children=[
        ProtoInstance(DEF='DICASS-2-2',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 2.2"]),
          fieldValue(name='initialPositionXZ',value=(2000,2000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy2-3',
        children=[
        ProtoInstance(DEF='DICASS-2-3',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 2.3"]),
          fieldValue(name='initialPositionXZ',value=(2000,3000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy2-4',
        children=[
        ProtoInstance(DEF='DICASS-2-4',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 2.4"]),
          fieldValue(name='initialPositionXZ',value=(2000,4000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy3-1',
        children=[
        ProtoInstance(DEF='DICASS-3-1',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 3.1"]),
          fieldValue(name='initialPositionXZ',value=(3000,1000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy3-2',
        children=[
        ProtoInstance(DEF='DICASS-3-2',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 3.2"]),
          fieldValue(name='initialPositionXZ',value=(3000,2000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy3-3',
        children=[
        ProtoInstance(DEF='DICASS-3-3',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 3.3"]),
          fieldValue(name='initialPositionXZ',value=(3000,3000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy3-4',
        children=[
        ProtoInstance(DEF='DICASS-3-4',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 3.4"]),
          fieldValue(name='initialPositionXZ',value=(3000,4000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy4-1',
        children=[
        ProtoInstance(DEF='DICASS-4-1',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 4.1"]),
          fieldValue(name='initialPositionXZ',value=(4000,1000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy4-2',
        children=[
        ProtoInstance(DEF='DICASS-4-2',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 4.2"]),
          fieldValue(name='initialPositionXZ',value=(4000,2000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy4-3',
        children=[
        ProtoInstance(DEF='DICASS-4-3',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 4.3"]),
          fieldValue(name='initialPositionXZ',value=(4000,3000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])]),
      Transform(DEF='LocationBuoy4-4',
        children=[
        ProtoInstance(DEF='DICASS-4-4',name='DICASS',
          fieldValue=[
          fieldValue(name='ID',value=["DICASS 4.4"]),
          fieldValue(name='initialPositionXZ',value=(4000,4000)),
          fieldValue(name='initialDepth',value=-100),
          fieldValue(name='maxRange',value=1000)])])]),
    Group(DEF='SonobuoyCommunications',
      #  Script SonobuoyFieldScenarioScript controls animation of DICAS sonar pings and helo commands 
      children=[
      Script(DEF='SonobuoyFieldScenarioScript',directOutput=True,url=["SonobuoyFieldScenarioScript.js","https://savage.nps.edu/Savage/CommunicationsAndSensors/Sonobuoys/SonobuoyFieldScenarioScript.js"],
        #  local Script variables 
        field=[
        field(accessType='initializeOnly',name='HelicopterWaypointInterpolator',type='SFNode',
          children=[
          ProtoInstance(USE='HelicopterOrbitTrack')]),
        field(accessType='initializeOnly',name='BuoyArray',type='MFNode',
          children=[
          ProtoInstance(USE='DICASS-1-1'),
          ProtoInstance(USE='DICASS-1-2'),
          ProtoInstance(USE='DICASS-1-3'),
          ProtoInstance(USE='DICASS-1-4'),
          ProtoInstance(USE='DICASS-2-1'),
          ProtoInstance(USE='DICASS-2-2'),
          ProtoInstance(USE='DICASS-2-3'),
          ProtoInstance(USE='DICASS-2-4'),
          ProtoInstance(USE='DICASS-3-1'),
          ProtoInstance(USE='DICASS-3-2'),
          ProtoInstance(USE='DICASS-3-3'),
          ProtoInstance(USE='DICASS-3-4'),
          ProtoInstance(USE='DICASS-4-1'),
          ProtoInstance(USE='DICASS-4-2'),
          ProtoInstance(USE='DICASS-4-3'),
          ProtoInstance(USE='DICASS-4-4')]),
        field(accessType='inputOnly',name='timeNextBouyPing',type='SFTime'),
        field(accessType='outputOnly',name='activeBuoyLocation',type='SFVec3f'),
        field(accessType='outputOnly',name='buoyRange',type='SFFloat'),
        field(accessType='outputOnly',name='keyValueRadioCommandInterpolator',type='MFFloat'),
        field(accessType='outputOnly',name='beamRotation',type='SFRotation'),
        field(accessType='outputOnly',name='sendCommand',type='SFTime'),
        field(accessType='initializeOnly',name='currentBuoyNumber',type='SFInt32',value=-1),
        field(accessType='initializeOnly',name='ID',type='MFString'),
        field(accessType='initializeOnly',name='TRACE',type='SFBool',value=True)]),
      TimeSensor(DEF='PingBuoySequenceClock',cycleInterval=5,loop=True),
      ROUTE(fromField='cycleTime',fromNode='PingBuoySequenceClock',toField='timeNextBouyPing',toNode='SonobuoyFieldScenarioScript'),
      Transform(DEF='RadioBeamOrientation',
        children=[
        ROUTE(fromField='position_changed',fromNode='HelicopterOrbitTrack',toField='set_translation',toNode='RadioBeamOrientation'),
        ROUTE(fromField='beamRotation',fromNode='SonobuoyFieldScenarioScript',toField='set_rotation',toNode='RadioBeamOrientation'),
        ProtoInstance(DEF='HeloToSonobuoyCommunication',name='BeamCylinder',
          fieldValue=[
          fieldValue(name='name',value='HeloToBuoyComms'),
          fieldValue(name='defaultRange',value=0.001),
          fieldValue(name='beamHeight',value=0.25),
          fieldValue(name='beamWidth',value=0.25),
          fieldValue(name='transparency',value=0.5),
          fieldValue(name='wireframe',value=True),
          fieldValue(name='solid',value=True),
          fieldValue(name='contactColor',value=(0.4,0.4,0)),
          fieldValue(name='noContactColor',value=(1.0,0.6,0.1))]),
        #  animate radio communication 
        TimeSensor(DEF='RadioCommandTimer',cycleInterval=0.5),
        ROUTE(fromField='sendCommand',fromNode='SonobuoyFieldScenarioScript',toField='startTime',toNode='RadioCommandTimer'),
        #  helo command to buoy (ramp and hold), blank during sonar operation 
        ScalarInterpolator(DEF='RadioBeamInterpolator',key=[0,0.5,0.75,0.75,1],keyValue=[0,-1000,-1000,0,0]),
        ROUTE(fromField='keyValueRadioCommandInterpolator',fromNode='SonobuoyFieldScenarioScript',toField='keyValue',toNode='RadioBeamInterpolator'),
        ROUTE(fromField='fraction_changed',fromNode='RadioCommandTimer',toField='set_fraction',toNode='RadioBeamInterpolator'),
        ROUTE(fromField='value_changed',fromNode='RadioBeamInterpolator',toField='range',toNode='HeloToSonobuoyCommunication'),
        #  change color to indicate command/response sequence 
        BooleanSequencer(DEF='RadioContactSequencer',key=[0,0.5,1],keyValue=[False,True,False]),
        ROUTE(fromField='fraction_changed',fromNode='RadioCommandTimer',toField='set_fraction',toNode='RadioContactSequencer'),
        ROUTE(fromField='value_changed',fromNode='RadioContactSequencer',toField='contact',toNode='HeloToSonobuoyCommunication')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SonobuoyFieldScenario.py")

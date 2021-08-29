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
    meta(content='ExampleScenario.x3d',name='title'),
    meta(content='Example use of SphericalMine and other prototypes to build a 4-AUV minefield search scene. Output will be produced by Matlab program.',name='description'),
    meta(content='Don Brutzman, Arlene Guest and UW3303 class',name='creator'),
    meta(content='26 May 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/ExampleScenario.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ====================================== 
    children=[
    ExternProtoDeclare(appinfo='Spherical floating mine moored to bottom',name='SphericalMine',url=["../../Weapons/UnderwaterMines/SphericalMinePrototype.x3d#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.x3d#SphericalMine","../../Weapons/UnderwaterMines/SphericalMinePrototype.wrl#SphericalMine","https://savage.nps.edu/Savage/Weapons/UnderwaterMines/SphericalMinePrototype.wrl#SphericalMine"],
      field=[
      field(accessType='initializeOnly',appinfo='Description for each mine contact.',name='description',type='SFString'),
      field(accessType='inputOutput',appinfo='Mine color can be used to indicate status (found/unknown/disabled/) tactic etc.',name='color',type='SFColor'),
      field(accessType='inputOutput',appinfo='Location of mine center in local world coordinates.',name='translation',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Scale factor to change spherical mine size default diameter = 1m.',name='scale',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Bounding box for collision detection of mine.',name='bboxCenter',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='Top and bottom endpoints of line tether that anchors this mine to the bottom.',name='tetherPoints',type='MFVec3f'),
      field(accessType='outputOnly',appinfo='proximityIsActive can be used to activate information or interaction when the viewer nears the mine.',name='proximityIsActive',type='SFBool'),
      field(accessType='inputOutput',appinfo='proximitySize provides overall box dimensions for proximity; thus (10 10 10) yields approximate radius 5 to 7 meters.',name='proximitySize',type='SFVec3f')]),
    #  ====================================== 
    ExternProtoDeclare(appinfo='Digital Virtual Display (DVD) Controller Prototype is a heads-up display (HUD) to control animation timing',name='DvdController',url=["../../Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
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
      field(accessType='initializeOnly',appinfo='default value true',name='clockEnabled',type='SFBool'),
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
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='default value -2',name='testTimeVal',type='SFTime')]),
    #  ====================================== 
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
      field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='verticalDropLineTransparency',type='SFFloat')]),
    #  ====================================== 
    #  Main scene begins here 
    WorldInfo(title='UW3303 Minefield Search'),
    Inline(DEF='EnvironmentBackground',url=["MinefieldSearchBackground.x3d","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchBackground.x3d","MinefieldSearchBackground.wrl","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchBackground.wrl"]),
    Inline(DEF='ColorCodedMinefield',url=["ColorCodedMinefield.x3d","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/ColorCodedMinefield.x3d","ColorCodedMinefield.wrl","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/ColorCodedMinefield.wrl"]),
    Group(DEF='MinefieldGroup',
      #  ***** generate custom mines ***** 
      children=[
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 1'),
        fieldValue(name='translation',value=(4850,-20,1350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 2'),
        fieldValue(name='translation',value=(1150,-20,1550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 3'),
        fieldValue(name='translation',value=(8850,-20,1550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 4'),
        fieldValue(name='translation',value=(6150,-20,1750)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 5'),
        fieldValue(name='translation',value=(9750,-20,1750)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 6'),
        fieldValue(name='translation',value=(3750,-20,1850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 7'),
        fieldValue(name='translation',value=(4650,-20,1850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 8'),
        fieldValue(name='translation',value=(2850,-20,2050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 9'),
        fieldValue(name='translation',value=(6450,-20,2050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 10'),
        fieldValue(name='translation',value=(50,-20,2150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 11'),
        fieldValue(name='translation',value=(2950,-20,2250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 12'),
        fieldValue(name='translation',value=(3750,-20,2350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 13'),
        fieldValue(name='translation',value=(5850,-20,2350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 14'),
        fieldValue(name='translation',value=(6550,-20,2350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 15'),
        fieldValue(name='translation',value=(950,-20,2450)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 16'),
        fieldValue(name='translation',value=(1250,-20,2450)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 17'),
        fieldValue(name='translation',value=(9950,-20,2550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 18'),
        fieldValue(name='translation',value=(50,-20,2650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 19'),
        fieldValue(name='translation',value=(250,-20,2650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 20'),
        fieldValue(name='translation',value=(6250,-20,2650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 21'),
        fieldValue(name='translation',value=(9950,-20,2750)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 22'),
        fieldValue(name='translation',value=(7250,-20,2850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 23'),
        fieldValue(name='translation',value=(8650,-20,2850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 24'),
        fieldValue(name='translation',value=(1650,-20,2950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 25'),
        fieldValue(name='translation',value=(2350,-20,2950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 26'),
        fieldValue(name='translation',value=(7550,-20,2950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 27'),
        fieldValue(name='translation',value=(2550,-20,3050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 28'),
        fieldValue(name='translation',value=(3050,-20,3050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 29'),
        fieldValue(name='translation',value=(9350,-20,3050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 30'),
        fieldValue(name='translation',value=(2950,-20,3150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 31'),
        fieldValue(name='translation',value=(9650,-20,3150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 32'),
        fieldValue(name='translation',value=(9750,-20,3150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 33'),
        fieldValue(name='translation',value=(3350,-20,3350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 34'),
        fieldValue(name='translation',value=(4650,-20,3350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 35'),
        fieldValue(name='translation',value=(1150,-20,3550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 36'),
        fieldValue(name='translation',value=(4650,-20,3550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 37'),
        fieldValue(name='translation',value=(6850,-20,3550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 38'),
        fieldValue(name='translation',value=(9450,-20,3650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 39'),
        fieldValue(name='translation',value=(450,-20,3850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 40'),
        fieldValue(name='translation',value=(9850,-20,3850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 41'),
        fieldValue(name='translation',value=(9550,-20,3950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 42'),
        fieldValue(name='translation',value=(4050,-20,4250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 43'),
        fieldValue(name='translation',value=(2550,-20,4350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 44'),
        fieldValue(name='translation',value=(7750,-20,4450)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 45'),
        fieldValue(name='translation',value=(650,-20,4650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 46'),
        fieldValue(name='translation',value=(950,-20,4850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 47'),
        fieldValue(name='translation',value=(6350,-20,4850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 48'),
        fieldValue(name='translation',value=(8850,-20,4950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 49'),
        fieldValue(name='translation',value=(850,-20,5050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 50'),
        fieldValue(name='translation',value=(4150,-20,5050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 51'),
        fieldValue(name='translation',value=(9450,-20,5150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 52'),
        fieldValue(name='translation',value=(1250,-20,5250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 53'),
        fieldValue(name='translation',value=(3650,-20,5250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 54'),
        fieldValue(name='translation',value=(4650,-20,5250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 55'),
        fieldValue(name='translation',value=(6850,-20,5250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 56'),
        fieldValue(name='translation',value=(50,-20,5550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 57'),
        fieldValue(name='translation',value=(1850,-20,5850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 58'),
        fieldValue(name='translation',value=(4250,-20,5850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 59'),
        fieldValue(name='translation',value=(4850,-20,5950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 60'),
        fieldValue(name='translation',value=(7350,-20,6050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 61'),
        fieldValue(name='translation',value=(2550,-20,6150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 62'),
        fieldValue(name='translation',value=(7550,-20,6150)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 63'),
        fieldValue(name='translation',value=(1350,-20,6350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 64'),
        fieldValue(name='translation',value=(3250,-20,6350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 65'),
        fieldValue(name='translation',value=(7350,-20,6350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 66'),
        fieldValue(name='translation',value=(9150,-20,6350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 67'),
        fieldValue(name='translation',value=(9650,-20,6550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 68'),
        fieldValue(name='translation',value=(9450,-20,6850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 69'),
        fieldValue(name='translation',value=(3750,-20,6950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 70'),
        fieldValue(name='translation',value=(9950,-20,6950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 71'),
        fieldValue(name='translation',value=(950,-20,7050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 72'),
        fieldValue(name='translation',value=(2850,-20,7050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 73'),
        fieldValue(name='translation',value=(6950,-20,7050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 74'),
        fieldValue(name='translation',value=(4550,-20,7350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 75'),
        fieldValue(name='translation',value=(8050,-20,7550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 76'),
        fieldValue(name='translation',value=(150,-20,7650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 77'),
        fieldValue(name='translation',value=(5450,-20,7850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 78'),
        fieldValue(name='translation',value=(5950,-20,7950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 79'),
        fieldValue(name='translation',value=(8150,-20,7950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 80'),
        fieldValue(name='translation',value=(9150,-20,7950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 81'),
        fieldValue(name='translation',value=(5150,-20,8050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 82'),
        fieldValue(name='translation',value=(5950,-20,8050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 83'),
        fieldValue(name='translation',value=(9750,-20,8050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 84'),
        fieldValue(name='translation',value=(5250,-20,8250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 85'),
        fieldValue(name='translation',value=(6950,-20,8250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 86'),
        fieldValue(name='translation',value=(4650,-20,8650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 87'),
        fieldValue(name='translation',value=(7250,-20,8650)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 88'),
        fieldValue(name='translation',value=(8950,-20,8950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 89'),
        fieldValue(name='translation',value=(6550,-20,9050)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 90'),
        fieldValue(name='translation',value=(5850,-20,9250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 91'),
        fieldValue(name='translation',value=(7250,-20,9250)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 92'),
        fieldValue(name='translation',value=(750,-20,9350)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 93'),
        fieldValue(name='translation',value=(5350,-20,9450)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 94'),
        fieldValue(name='translation',value=(5850,-20,9450)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 95'),
        fieldValue(name='translation',value=(3750,-20,9550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 96'),
        fieldValue(name='translation',value=(4650,-20,9550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 97'),
        fieldValue(name='translation',value=(4750,-20,9550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 98'),
        fieldValue(name='translation',value=(9850,-20,9550)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine # 99'),
        fieldValue(name='translation',value=(6450,-20,9850)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])]),
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine #100'),
        fieldValue(name='translation',value=(6550,-20,9950)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])])]),
    #  ***** generate hostile submarine position ***** 
    Group(DEF='HostileDieselSubGroup',
      #  Assume center of sub is 4m above keel. Thus depth submarine = depth water + 4 (negative overall). 
      #  Search program modifies actual (random) submarine position. 
      children=[
      Transform(DEF='DieselLocation',translation=(2850,-10,9550),
        #  Don needs to split out behaviors from the other 209 models so that they are not moving. 
        children=[
        Inline(url=["../../Submarines/Various/Type209GlafkosDieselSubmarine.x3d","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarine.x3d","../../Submarines/Various/Type209GlafkosDieselSubmarine.wrl","https://savage.nps.edu/Savage/Submarines/Various/Type209GlafkosDieselSubmarine.wrl"])])]),
    Group(DEF='RobotSearchGroup',
      children=[
      ProtoInstance(DEF='MasterAnimationController',name='DvdController',
        fieldValue=[
        fieldValue(name='buttonColor',value=(0.655,0.655,0.655)),
        fieldValue(name='selectedButtonColor',value=(0.675,0.675,0.675)),
        fieldValue(name='selectedLabelColor',value=(0.9,0,0)),
        fieldValue(name='locationOffset',value=(5,7,-10)),
        fieldValue(name='cycleInterval',value=16980),
        fieldValue(name='speedFactor',value=10.0),
        fieldValue(name='traceEnabled',value=False)]),
      Group(DEF='Robot1',
        children=[
        ProtoInstance(DEF='RobotTrack1',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(250,10,50),(350,10,8750),(450,10,50),(550,10,8750),(650,10,50),(750,10,8750),(850,10,50),(950,10,8850),(1050,10,50),(1150,10,8850),(1250,10,50),(1350,10,8850),(1450,10,50),(1550,10,8850),(1650,10,50),(1750,10,8850),(1850,10,50),(1950,10,8850),(2050,10,50),(2150,10,8950),(2250,10,50),(2350,10,8950),(2450,10,50),(2550,10,8950),(2650,10,50)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.75,0.75,0)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.6)),
          fieldValue(name='traceEnabled',value=False)]),
        Transform(DEF='TrackingTransformRobot1',
          #  Always align initial geometry with X axis 
          children=[
          Group(
            #  Point vehicle along X-axis 
            children=[
            Transform(
              children=[
              Inline(DEF='RemusSideScan',url=["../../Robots/UnmannedUnderwaterVehicles/RemusSideScan.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/RemusSideScan.x3d","../../Robots/UnmannedUnderwaterVehicles/RemusSideScan.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/RemusSideScan.wrl"])])])]),
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack1'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack1',toField='translation',toNode='TrackingTransformRobot1'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack1',toField='rotation',toNode='TrackingTransformRobot1')]),
      Group(DEF='Robot2',
        children=[
        ProtoInstance(DEF='RobotTrack2',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(2650,10,50),(2750,10,8950),(2850,10,50),(2950,10,8950),(3050,10,50),(3150,10,8950),(3250,10,50),(3350,10,9050),(3450,10,50),(3550,10,9050),(3650,10,50),(3750,10,9150),(3850,10,50),(3950,10,9150),(4050,10,50),(4150,10,9250),(4250,10,50),(4350,10,9350),(4450,10,50),(4550,10,9550),(4650,10,50),(4750,10,9850),(4850,10,50),(4950,10,9950)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.75,0.75,0)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.6)),
          fieldValue(name='traceEnabled',value=False)]),
        Transform(DEF='TrackingTransformRobot2',
          #  Always align initial geometry with X axis 
          children=[
          Group(
            #  Point vehicle along X-axis 
            children=[
            Transform(
              children=[
              Inline(USE='RemusSideScan')])])]),
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack2'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack2',toField='translation',toNode='TrackingTransformRobot2'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack2',toField='rotation',toNode='TrackingTransformRobot2')]),
      Group(DEF='Robot3',
        children=[
        ProtoInstance(DEF='RobotTrack3',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(4850,10,50),(4950,10,9950),(5050,10,50),(5150,10,9950),(5250,10,50),(5350,10,9850),(5450,10,50),(5550,10,9550),(5650,10,50),(5750,10,9350),(5850,10,50),(5950,10,9250),(6050,10,50),(6150,10,9150),(6250,10,50),(6350,10,9150),(6450,10,50),(6550,10,9050),(6650,10,50),(6750,10,9050),(6850,10,50),(6950,10,8950),(7050,10,50)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.75,0.75,0)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.6)),
          fieldValue(name='traceEnabled',value=False)]),
        Transform(DEF='TrackingTransformRobot3',
          #  Always align initial geometry with X axis 
          children=[
          Group(
            #  Point vehicle along X-axis 
            children=[
            Transform(
              children=[
              Inline(USE='RemusSideScan')])])]),
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack3'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack3',toField='translation',toNode='TrackingTransformRobot3'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack3',toField='rotation',toNode='TrackingTransformRobot3')]),
      Group(DEF='Robot4',
        children=[
        ProtoInstance(DEF='RobotTrack4',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(7050,10,50),(7150,10,8950),(7250,10,50),(7350,10,8950),(7450,10,50),(7550,10,8950),(7650,10,50),(7750,10,8950),(7850,10,50),(7950,10,8950),(8050,10,50),(8150,10,8850),(8250,10,50),(8350,10,8850),(8450,10,50),(8550,10,8850),(8650,10,50),(8750,10,8850),(8850,10,50),(8950,10,8850),(9050,10,50),(9150,10,8850),(9250,10,50),(9350,10,8750),(9450,10,50)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.75,0.75,0)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.6)),
          fieldValue(name='traceEnabled',value=False)]),
        Transform(DEF='TrackingTransformRobot4',
          #  Always align initial geometry with X axis 
          children=[
          Group(
            #  Point vehicle along X-axis 
            children=[
            Transform(
              children=[
              Inline(USE='RemusSideScan')])])]),
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack4'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack4',toField='translation',toNode='TrackingTransformRobot4'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack4',toField='rotation',toNode='TrackingTransformRobot4')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExampleScenario.py")

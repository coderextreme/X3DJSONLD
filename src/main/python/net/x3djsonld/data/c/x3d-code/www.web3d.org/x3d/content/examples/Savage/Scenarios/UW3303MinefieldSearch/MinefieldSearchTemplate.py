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
    meta(content='MinefieldSearchTemplate.x3d',name='title'),
    meta(content='Example use of SphericalMine and other prototypes to build a 4-AUV minefield search scene. Output will be produced by Matlab program.',name='description'),
    meta(content='Don Brutzman, Arlene Guest and UW3303 class',name='creator'),
    meta(content='26 May 2004',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchTemplate.x3d',name='identifier'),
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
    NavigationInfo(speed=10),
    Inline(DEF='EnvironmentBackground',url=["MinefieldSearchBackground.x3d","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchBackground.x3d","MinefieldSearchBackground.wrl","https://savage.nps.edu/Savage/Scenarios/UW3303MinefieldSearch/MinefieldSearchBackground.wrl"]),
    Group(DEF='MinefieldGroup',
      #  ***** generate custom mines ***** 
      children=[
      ProtoInstance(name='SphericalMine',
        fieldValue=[
        fieldValue(name='description',value='Spherical Mine #1'),
        fieldValue(name='translation',value=(5,-20,15)),
        fieldValue(name='tetherPoints',value=[(0,0,0),(0,-5,0)])])]),
    #  ***** generate hostile submarine position ***** 
    Group(DEF='HostileDieselSubGroup',
      #  Assume center of sub is 4m above keel. Thus depth submarine = depth water + 4 (negative overall). 
      #  Search program modifies actual (random) submarine position. 
      children=[
      Transform(DEF='DieselLocation',translation=(5000,-10,5000),
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
        fieldValue(name='cycleInterval',value=86400),
        fieldValue(name='speedFactor',value=10.0),
        fieldValue(name='traceEnabled',value=False)]),
      Group(DEF='Robot1',
        children=[
        ProtoInstance(DEF='RobotTrack1',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(0,-7.19328,0),(-67,-8.26008,-95),(-154,-7.98576,-213),(-235,-8.9916,-327),(-319,-9.17448,-442),(-402,-9.7536,-555),(-485,-9.93648,-669),(-565,-10.302239,-781),(-634,-10.27176,-800),(-556,-10.08888,-689),(-473,-9.57072,-575),(-387,-9.57072,-459),(-304,-9.17448,-343),(-218,-8.44296,-226),(-137,-7.4980803,-112),(-52,-7.7114396,4),(32,-6.37032,119),(115,-5.66928,234),(196,-3.99288,348),(278,-1.0668,460),(234,-2.01168,424),(150,-4.51104,308),(65,-5.76072,192),(-18,-6.97992,76),(-102,-7.62,-38),(-183,-7.89432,-154),(-267,-8.56488,-269),(-350,-8.80872,-383),(-432,-9.4488,-494),(-502,-9.50976,-592),(-585,-10.0584,-706),(-669,-10.180321,-803),(-635,-9.78408,-699),(-552,-9.692639,-584),(-470,-9.41832,-473),(-391,-8.86968,-361),(-311,-8.90016,-252),(-235,-8.26008,-146),(-157,-7.83336,-38),(-78,-6.76656,70),(2,-5.97408,179),(82,-5.4559197,289),(159,-3.7490401,398),(228,-0.70103997,506),(145,-2.9260802,403),(67,-5.0901604,296),(-15,-5.76072,184),(-96,-6.67512,74),(-174,-7.1018395,-36),(-250,-7.62,-143),(-330,-8.59536,-252),(-408,-8.80872,-361),(-485,-9.05256,-469),(-565,-9.4488,-575),(-639,-9.4488,-677),(-715,-9.66216,-767),(-689,-9.93648,-669),(-610,-9.144,-560),(-532,-8.96112,-451),(-452,-8.56488,-344),(-374,-8.47344,-234),(-298,-8.65632,-135),(-229,-8.19912,-34),(-157,-7.58952,62),(-87,-6.5532,157),(-17,-5.5473604,258),(56,-4.8158402,357),(128,-3.2004,457),(173,-1.03632,538),(98,-3.2004,441),(28,-4.66344,342),(-46,-5.57784,240),(-109,-6.82752,136),(-148,-7.43712,18),(-191,-7.68096,-96),(-232,-8.29056,-214),(-271,-8.41248,-328),(-311,-8.9916,-448),(-352,-8.80872,-565),(-393,-9.387839,-682),(-432,-8.93064,-798),(-480,-9.47928,-911),(-515,-10.302239,-1030),(-539,-0.18288001,-1116),(-623,-11.2776,-1142),(-600,-9.4488,-1032),(-685,-9.05256,-911),(-725,-9.08304,-731),(-845,-9.50976,-687),(-810,-8.8392,-565),(-728,-8.93064,-450),(-641,-8.77824,-328),(-554,-7.8638396,-208),(-469,-7.4066396,-89),(-380,-6.88848,33),(-294,-6.61416,152),(-213,-5.9436,268),(-131,-4.7244,381),(-50,-3.6576,494),(30,-0.82296,606),(-35,-3.13944,499),(-113,-4.35864,389),(-196,-5.66928,274),(-280,-6.5532,157),(-365,-6.76656,40),(-447,-7.28472,-76),(-530,-7.7114396,-192),(-613,-8.04672,-309),(-697,-8.6868,-426),(-780,-9.20496,-540),(-858,-8.9916,-652),(-773,-8.56488,-545),(-688,-8.56488,-428),(-602,-7.7724,-310),(-519,-7.4066396,-191),(-434,-7.22376,-74),(-347,-6.52272,43),(-265,-6.2484,161),(-182,-5.27304,277),(-96,-4.60248,394),(-13,-3.2004,511),(59,-0.79248,568),(-6,-3.44424,452),(-87,-4.66344,339),(-171,-5.27304,221),(-257,-6.52272,102),(-341,-6.73608,-16),(-424,-7.83336,-130),(-508,-7.74192,-247),(-591,-8.0772,-361),(-674,-8.50392,-477),(-756,-8.86968,-592),(-802,-9.57072,-669),(-715,-8.77824,-553),(-630,-8.80872,-437),(-545,-8.10768,-316),(-462,-7.4980803,-199),(-378,-7.3152,-81),(-293,-6.5532,37),(-209,-6.58368,150),(-124,-5.36448,268),(-42,-4.572,382),(39,-2.83464,499),(58,-1.6764,506),(-24,-3.7795198,391),(-106,-5.334,277),(-189,-6.37032,162),(-272,-6.79704,46),(-355,-6.91896,-72),(-437,-8.50392,-184),(-519,-8.35152,-296),(-596,-8.62584,-405),(-674,-8.80872,-511),(-750,-8.9916,-617),(-776,-9.4488,-711),(-695,-8.93064,-613),(-619,-8.6868,-507),(-543,-8.5344,-397),(-465,-8.6868,-290),(-385,-8.29056,-182),(-309,-7.0104,-72),(-233,-6.97992,35),(-157,-6.37032,139),(-81,-5.4864,246),(-3,-4.14528,352),(70,-3.32232,457),(117,-0.79248,505),(43,-3.3528,399),(-35,-5.0901604,291),(-115,-5.4864,181),(-193,-6.73608,72),(-272,-6.88848,-39),(-350,-7.7724,-149),(-426,-7.89432,-255),(-504,-8.382,-365),(-582,-9.11352,-471),(-635,-8.86968,-545),(-691,-9.41832,-621),(-745,-9.6012,-697),(-734,-9.540239,-777),(-697,-9.57072,-860),(-645,-9.540239,-943),(-596,-9.692639,-1026),(-547,-9.72312,-1106)]),
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
          fieldValue(name='waypoints',value=[(0,-7.19328,0),(-67,-8.26008,-95),(-154,-7.98576,-213),(-235,-8.9916,-327),(-319,-9.17448,-442),(-402,-9.7536,-555),(-485,-9.93648,-669),(-565,-10.302239,-781),(-634,-10.27176,-800),(-556,-10.08888,-689),(-473,-9.57072,-575),(-387,-9.57072,-459),(-304,-9.17448,-343),(-218,-8.44296,-226),(-137,-7.4980803,-112),(-52,-7.7114396,4),(32,-6.37032,119),(115,-5.66928,234),(196,-3.99288,348),(278,-1.0668,460),(234,-2.01168,424),(150,-4.51104,308),(65,-5.76072,192),(-18,-6.97992,76),(-102,-7.62,-38),(-183,-7.89432,-154),(-267,-8.56488,-269),(-350,-8.80872,-383),(-432,-9.4488,-494),(-502,-9.50976,-592),(-585,-10.0584,-706),(-669,-10.180321,-803),(-635,-9.78408,-699),(-552,-9.692639,-584),(-470,-9.41832,-473),(-391,-8.86968,-361),(-311,-8.90016,-252),(-235,-8.26008,-146),(-157,-7.83336,-38),(-78,-6.76656,70),(2,-5.97408,179),(82,-5.4559197,289),(159,-3.7490401,398),(228,-0.70103997,506),(145,-2.9260802,403),(67,-5.0901604,296),(-15,-5.76072,184),(-96,-6.67512,74),(-174,-7.1018395,-36),(-250,-7.62,-143),(-330,-8.59536,-252),(-408,-8.80872,-361),(-485,-9.05256,-469),(-565,-9.4488,-575),(-639,-9.4488,-677),(-715,-9.66216,-767),(-689,-9.93648,-669),(-610,-9.144,-560),(-532,-8.96112,-451),(-452,-8.56488,-344),(-374,-8.47344,-234),(-298,-8.65632,-135),(-229,-8.19912,-34),(-157,-7.58952,62),(-87,-6.5532,157),(-17,-5.5473604,258),(56,-4.8158402,357),(128,-3.2004,457),(173,-1.03632,538),(98,-3.2004,441),(28,-4.66344,342),(-46,-5.57784,240),(-109,-6.82752,136),(-148,-7.43712,18),(-191,-7.68096,-96),(-232,-8.29056,-214),(-271,-8.41248,-328),(-311,-8.9916,-448),(-352,-8.80872,-565),(-393,-9.387839,-682),(-432,-8.93064,-798),(-480,-9.47928,-911),(-515,-10.302239,-1030),(-539,-0.18288001,-1116),(-623,-11.2776,-1142),(-600,-9.4488,-1032),(-685,-9.05256,-911),(-725,-9.08304,-731),(-845,-9.50976,-687),(-810,-8.8392,-565),(-728,-8.93064,-450),(-641,-8.77824,-328),(-554,-7.8638396,-208),(-469,-7.4066396,-89),(-380,-6.88848,33),(-294,-6.61416,152),(-213,-5.9436,268),(-131,-4.7244,381),(-50,-3.6576,494),(30,-0.82296,606),(-35,-3.13944,499),(-113,-4.35864,389),(-196,-5.66928,274),(-280,-6.5532,157),(-365,-6.76656,40),(-447,-7.28472,-76),(-530,-7.7114396,-192),(-613,-8.04672,-309),(-697,-8.6868,-426),(-780,-9.20496,-540),(-858,-8.9916,-652),(-773,-8.56488,-545),(-688,-8.56488,-428),(-602,-7.7724,-310),(-519,-7.4066396,-191),(-434,-7.22376,-74),(-347,-6.52272,43),(-265,-6.2484,161),(-182,-5.27304,277),(-96,-4.60248,394),(-13,-3.2004,511),(59,-0.79248,568),(-6,-3.44424,452),(-87,-4.66344,339),(-171,-5.27304,221),(-257,-6.52272,102),(-341,-6.73608,-16),(-424,-7.83336,-130),(-508,-7.74192,-247),(-591,-8.0772,-361),(-674,-8.50392,-477),(-756,-8.86968,-592),(-802,-9.57072,-669),(-715,-8.77824,-553),(-630,-8.80872,-437),(-545,-8.10768,-316),(-462,-7.4980803,-199),(-378,-7.3152,-81),(-293,-6.5532,37),(-209,-6.58368,150),(-124,-5.36448,268),(-42,-4.572,382),(39,-2.83464,499),(58,-1.6764,506),(-24,-3.7795198,391),(-106,-5.334,277),(-189,-6.37032,162),(-272,-6.79704,46),(-355,-6.91896,-72),(-437,-8.50392,-184),(-519,-8.35152,-296),(-596,-8.62584,-405),(-674,-8.80872,-511),(-750,-8.9916,-617),(-776,-9.4488,-711),(-695,-8.93064,-613),(-619,-8.6868,-507),(-543,-8.5344,-397),(-465,-8.6868,-290),(-385,-8.29056,-182),(-309,-7.0104,-72),(-233,-6.97992,35),(-157,-6.37032,139),(-81,-5.4864,246),(-3,-4.14528,352),(70,-3.32232,457),(117,-0.79248,505),(43,-3.3528,399),(-35,-5.0901604,291),(-115,-5.4864,181),(-193,-6.73608,72),(-272,-6.88848,-39),(-350,-7.7724,-149),(-426,-7.89432,-255),(-504,-8.382,-365),(-582,-9.11352,-471),(-635,-8.86968,-545),(-691,-9.41832,-621),(-745,-9.6012,-697),(-734,-9.540239,-777),(-697,-9.57072,-860),(-645,-9.540239,-943),(-596,-9.692639,-1026),(-547,-9.72312,-1106)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(0,1,0)),
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
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack1'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack1',toField='translation',toNode='TrackingTransformRobot1'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack1',toField='rotation',toNode='TrackingTransformRobot1')]),
      Group(DEF='Robot3',
        children=[
        ProtoInstance(DEF='RobotTrack3',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(0,-7.19328,0),(-67,-8.26008,-95),(-154,-7.98576,-213),(-235,-8.9916,-327),(-319,-9.17448,-442),(-402,-9.7536,-555),(-485,-9.93648,-669),(-565,-10.302239,-781),(-634,-10.27176,-800),(-556,-10.08888,-689),(-473,-9.57072,-575),(-387,-9.57072,-459),(-304,-9.17448,-343),(-218,-8.44296,-226),(-137,-7.4980803,-112),(-52,-7.7114396,4),(32,-6.37032,119),(115,-5.66928,234),(196,-3.99288,348),(278,-1.0668,460),(234,-2.01168,424),(150,-4.51104,308),(65,-5.76072,192),(-18,-6.97992,76),(-102,-7.62,-38),(-183,-7.89432,-154),(-267,-8.56488,-269),(-350,-8.80872,-383),(-432,-9.4488,-494),(-502,-9.50976,-592),(-585,-10.0584,-706),(-669,-10.180321,-803),(-635,-9.78408,-699),(-552,-9.692639,-584),(-470,-9.41832,-473),(-391,-8.86968,-361),(-311,-8.90016,-252),(-235,-8.26008,-146),(-157,-7.83336,-38),(-78,-6.76656,70),(2,-5.97408,179),(82,-5.4559197,289),(159,-3.7490401,398),(228,-0.70103997,506),(145,-2.9260802,403),(67,-5.0901604,296),(-15,-5.76072,184),(-96,-6.67512,74),(-174,-7.1018395,-36),(-250,-7.62,-143),(-330,-8.59536,-252),(-408,-8.80872,-361),(-485,-9.05256,-469),(-565,-9.4488,-575),(-639,-9.4488,-677),(-715,-9.66216,-767),(-689,-9.93648,-669),(-610,-9.144,-560),(-532,-8.96112,-451),(-452,-8.56488,-344),(-374,-8.47344,-234),(-298,-8.65632,-135),(-229,-8.19912,-34),(-157,-7.58952,62),(-87,-6.5532,157),(-17,-5.5473604,258),(56,-4.8158402,357),(128,-3.2004,457),(173,-1.03632,538),(98,-3.2004,441),(28,-4.66344,342),(-46,-5.57784,240),(-109,-6.82752,136),(-148,-7.43712,18),(-191,-7.68096,-96),(-232,-8.29056,-214),(-271,-8.41248,-328),(-311,-8.9916,-448),(-352,-8.80872,-565),(-393,-9.387839,-682),(-432,-8.93064,-798),(-480,-9.47928,-911),(-515,-10.302239,-1030),(-539,-0.18288001,-1116),(-623,-11.2776,-1142),(-600,-9.4488,-1032),(-685,-9.05256,-911),(-725,-9.08304,-731),(-845,-9.50976,-687),(-810,-8.8392,-565),(-728,-8.93064,-450),(-641,-8.77824,-328),(-554,-7.8638396,-208),(-469,-7.4066396,-89),(-380,-6.88848,33),(-294,-6.61416,152),(-213,-5.9436,268),(-131,-4.7244,381),(-50,-3.6576,494),(30,-0.82296,606),(-35,-3.13944,499),(-113,-4.35864,389),(-196,-5.66928,274),(-280,-6.5532,157),(-365,-6.76656,40),(-447,-7.28472,-76),(-530,-7.7114396,-192),(-613,-8.04672,-309),(-697,-8.6868,-426),(-780,-9.20496,-540),(-858,-8.9916,-652),(-773,-8.56488,-545),(-688,-8.56488,-428),(-602,-7.7724,-310),(-519,-7.4066396,-191),(-434,-7.22376,-74),(-347,-6.52272,43),(-265,-6.2484,161),(-182,-5.27304,277),(-96,-4.60248,394),(-13,-3.2004,511),(59,-0.79248,568),(-6,-3.44424,452),(-87,-4.66344,339),(-171,-5.27304,221),(-257,-6.52272,102),(-341,-6.73608,-16),(-424,-7.83336,-130),(-508,-7.74192,-247),(-591,-8.0772,-361),(-674,-8.50392,-477),(-756,-8.86968,-592),(-802,-9.57072,-669),(-715,-8.77824,-553),(-630,-8.80872,-437),(-545,-8.10768,-316),(-462,-7.4980803,-199),(-378,-7.3152,-81),(-293,-6.5532,37),(-209,-6.58368,150),(-124,-5.36448,268),(-42,-4.572,382),(39,-2.83464,499),(58,-1.6764,506),(-24,-3.7795198,391),(-106,-5.334,277),(-189,-6.37032,162),(-272,-6.79704,46),(-355,-6.91896,-72),(-437,-8.50392,-184),(-519,-8.35152,-296),(-596,-8.62584,-405),(-674,-8.80872,-511),(-750,-8.9916,-617),(-776,-9.4488,-711),(-695,-8.93064,-613),(-619,-8.6868,-507),(-543,-8.5344,-397),(-465,-8.6868,-290),(-385,-8.29056,-182),(-309,-7.0104,-72),(-233,-6.97992,35),(-157,-6.37032,139),(-81,-5.4864,246),(-3,-4.14528,352),(70,-3.32232,457),(117,-0.79248,505),(43,-3.3528,399),(-35,-5.0901604,291),(-115,-5.4864,181),(-193,-6.73608,72),(-272,-6.88848,-39),(-350,-7.7724,-149),(-426,-7.89432,-255),(-504,-8.382,-365),(-582,-9.11352,-471),(-635,-8.86968,-545),(-691,-9.41832,-621),(-745,-9.6012,-697),(-734,-9.540239,-777),(-697,-9.57072,-860),(-645,-9.540239,-943),(-596,-9.692639,-1026),(-547,-9.72312,-1106)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(0.2,0.2,1)),
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
        ROUTE(fromField='fraction_changed',fromNode='MasterAnimationController',toField='set_fraction',toNode='RobotTrack1'),
        ROUTE(fromField='position_changed',fromNode='RobotTrack1',toField='translation',toNode='TrackingTransformRobot1'),
        ROUTE(fromField='orientation_changed',fromNode='RobotTrack1',toField='rotation',toNode='TrackingTransformRobot1')]),
      Group(DEF='Robot4',
        children=[
        ProtoInstance(DEF='RobotTrack4',name='WaypointInterpolator',
          #  XZ coordinates are converted from Lat/Long based on the origin 
          #  The origin is the first data point 
          fieldValue=[
          fieldValue(name='waypoints',value=[(0,-7.19328,0),(-67,-8.26008,-95),(-154,-7.98576,-213),(-235,-8.9916,-327),(-319,-9.17448,-442),(-402,-9.7536,-555),(-485,-9.93648,-669),(-565,-10.302239,-781),(-634,-10.27176,-800),(-556,-10.08888,-689),(-473,-9.57072,-575),(-387,-9.57072,-459),(-304,-9.17448,-343),(-218,-8.44296,-226),(-137,-7.4980803,-112),(-52,-7.7114396,4),(32,-6.37032,119),(115,-5.66928,234),(196,-3.99288,348),(278,-1.0668,460),(234,-2.01168,424),(150,-4.51104,308),(65,-5.76072,192),(-18,-6.97992,76),(-102,-7.62,-38),(-183,-7.89432,-154),(-267,-8.56488,-269),(-350,-8.80872,-383),(-432,-9.4488,-494),(-502,-9.50976,-592),(-585,-10.0584,-706),(-669,-10.180321,-803),(-635,-9.78408,-699),(-552,-9.692639,-584),(-470,-9.41832,-473),(-391,-8.86968,-361),(-311,-8.90016,-252),(-235,-8.26008,-146),(-157,-7.83336,-38),(-78,-6.76656,70),(2,-5.97408,179),(82,-5.4559197,289),(159,-3.7490401,398),(228,-0.70103997,506),(145,-2.9260802,403),(67,-5.0901604,296),(-15,-5.76072,184),(-96,-6.67512,74),(-174,-7.1018395,-36),(-250,-7.62,-143),(-330,-8.59536,-252),(-408,-8.80872,-361),(-485,-9.05256,-469),(-565,-9.4488,-575),(-639,-9.4488,-677),(-715,-9.66216,-767),(-689,-9.93648,-669),(-610,-9.144,-560),(-532,-8.96112,-451),(-452,-8.56488,-344),(-374,-8.47344,-234),(-298,-8.65632,-135),(-229,-8.19912,-34),(-157,-7.58952,62),(-87,-6.5532,157),(-17,-5.5473604,258),(56,-4.8158402,357),(128,-3.2004,457),(173,-1.03632,538),(98,-3.2004,441),(28,-4.66344,342),(-46,-5.57784,240),(-109,-6.82752,136),(-148,-7.43712,18),(-191,-7.68096,-96),(-232,-8.29056,-214),(-271,-8.41248,-328),(-311,-8.9916,-448),(-352,-8.80872,-565),(-393,-9.387839,-682),(-432,-8.93064,-798),(-480,-9.47928,-911),(-515,-10.302239,-1030),(-539,-0.18288001,-1116),(-623,-11.2776,-1142),(-600,-9.4488,-1032),(-685,-9.05256,-911),(-725,-9.08304,-731),(-845,-9.50976,-687),(-810,-8.8392,-565),(-728,-8.93064,-450),(-641,-8.77824,-328),(-554,-7.8638396,-208),(-469,-7.4066396,-89),(-380,-6.88848,33),(-294,-6.61416,152),(-213,-5.9436,268),(-131,-4.7244,381),(-50,-3.6576,494),(30,-0.82296,606),(-35,-3.13944,499),(-113,-4.35864,389),(-196,-5.66928,274),(-280,-6.5532,157),(-365,-6.76656,40),(-447,-7.28472,-76),(-530,-7.7114396,-192),(-613,-8.04672,-309),(-697,-8.6868,-426),(-780,-9.20496,-540),(-858,-8.9916,-652),(-773,-8.56488,-545),(-688,-8.56488,-428),(-602,-7.7724,-310),(-519,-7.4066396,-191),(-434,-7.22376,-74),(-347,-6.52272,43),(-265,-6.2484,161),(-182,-5.27304,277),(-96,-4.60248,394),(-13,-3.2004,511),(59,-0.79248,568),(-6,-3.44424,452),(-87,-4.66344,339),(-171,-5.27304,221),(-257,-6.52272,102),(-341,-6.73608,-16),(-424,-7.83336,-130),(-508,-7.74192,-247),(-591,-8.0772,-361),(-674,-8.50392,-477),(-756,-8.86968,-592),(-802,-9.57072,-669),(-715,-8.77824,-553),(-630,-8.80872,-437),(-545,-8.10768,-316),(-462,-7.4980803,-199),(-378,-7.3152,-81),(-293,-6.5532,37),(-209,-6.58368,150),(-124,-5.36448,268),(-42,-4.572,382),(39,-2.83464,499),(58,-1.6764,506),(-24,-3.7795198,391),(-106,-5.334,277),(-189,-6.37032,162),(-272,-6.79704,46),(-355,-6.91896,-72),(-437,-8.50392,-184),(-519,-8.35152,-296),(-596,-8.62584,-405),(-674,-8.80872,-511),(-750,-8.9916,-617),(-776,-9.4488,-711),(-695,-8.93064,-613),(-619,-8.6868,-507),(-543,-8.5344,-397),(-465,-8.6868,-290),(-385,-8.29056,-182),(-309,-7.0104,-72),(-233,-6.97992,35),(-157,-6.37032,139),(-81,-5.4864,246),(-3,-4.14528,352),(70,-3.32232,457),(117,-0.79248,505),(43,-3.3528,399),(-35,-5.0901604,291),(-115,-5.4864,181),(-193,-6.73608,72),(-272,-6.88848,-39),(-350,-7.7724,-149),(-426,-7.89432,-255),(-504,-8.382,-365),(-582,-9.11352,-471),(-635,-8.86968,-545),(-691,-9.41832,-621),(-745,-9.6012,-697),(-734,-9.540239,-777),(-697,-9.57072,-860),(-645,-9.540239,-943),(-596,-9.692639,-1026),(-547,-9.72312,-1106)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=1.5),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(0.4,0.4,0)),
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

print ("python x3d.py load successful for MinefieldSearchTemplate.py")

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
    meta(content='CollisionCourses.x3d',name='title'),
    meta(content='Animate ship tracks showing collision by USS GREENVILLE with MV EHIME MARU. We hope that studying lessons learned this incident might help prevent future accidents.',name='description'),
    meta(content='Don Brutzman and UW3303 students',name='creator'),
    meta(content='16 May 2001',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='CollisionUssGreenevilleMvEhimeMaru.html',name='reference'),
    meta(content='CollisionUssGreenevilleMvEhimeMaru.ppt',name='reference'),
    meta(content='UW 3303 reconstruction worklist.doc',name='reference'),
    meta(content='CalculateTrackLegWaypoints.m',name='reference'),
    meta(content='CalculateTrackLegWaypoints.out',name='reference'),
    meta(content='ExcelPlottingData.txt',name='reference'),
    meta(content='TrackOrders.xls',name='reference'),
    meta(content='TrackCalculations.m',name='reference'),
    meta(content='Greeneville_Track_Reconstruction.pdf',name='reference'),
    meta(content='popup.greeneville.size.gif',name='drawing'),
    meta(content='10308_nat_subHAWAIIch.gif',name='drawing'),
    meta(content='http://www.nytimes.com/images/2001/03/08/national/010308_nat_subHAWAIIch.gif',name='drawing'),
    meta(content='PR_030101-2.gif',name='Image'),
    meta(content='PR_030101-3.gif',name='Image'),
    meta(content='PR_030101-4.gif',name='Image'),
    meta(content='http://www.ntsb.gov/Pressrel/2001/010302.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CollisionUssGreenevilleMvEhimeMaru/CollisionCourses.x3d',name='identifier'),
    meta(content='3D simulation Collision Ehime Maru USS GREENEVILLE',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    #  =============================== 
    #  Track reconstruction spreadsheet and programs 
    meta(content='TrackCalculations.m',name='reference'),
    meta(content='TrackOrders.xls',name='reference'),
    #  ================================ 
    meta(content='http://www.cpf.navy.mil/cpfnews/coidownloadmain.html',name='reference'),
    #  MV Ehime Maru and USS GREENEVILLE references 
    meta(content='Greeneville_Track_Reconstruction.pdf',name='reference'),
    meta(content='http://www.cpf.navy.mil/pages/legal/foia/Greeneville_Track_Reconstruction.pdf',name='reference'),
    meta(content='popup.greeneville.size.gif',name='reference'),
    meta(content='http://www.cnn.com/interactive/world/0102/sub.size.comparison/popup.greeneville.size.gif',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Coordinate system: origin is collision point 21°05'N 157°50'W (21.0917N, -157.8183W) y=vertical (depth negative) meters | | | x=latitude=north meters | / | / | / |/ *- - - > z=longitude meters 
    #  Prototype and external prototype declarations must precede scene definition. 
    children=[
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
    ExternProtoDeclare(name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',name='outputViewpointString',type='MFString')]),
    ExternProtoDeclare(name='SeaStateExtrusion',url=["../../Environment/SeaState/SeaStateExtrusionPrototype.x3d#SeaStateExtrusion","https://savage.nps.edu/Savage/Environment/SeaState/SeaStateExtrusionPrototype.x3d#SeaStateExtrusion","../../Environment/SeaState/SeaStateExtrusionPrototype.wrl#SeaStateExtrusion","https://savage.nps.edu/Savage/Environment/SeaState/SeaStateExtrusionPrototype.wrl#SeaStateExtrusion"],
      field=[
      field(accessType='outputOnly',name='shipPitch',type='SFRotation'),
      field(accessType='outputOnly',name='shipRoll',type='SFRotation')]),
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
    #  =================================== 
    #  Begin actual scene here. Top-level viewpoint, navigation and control nodes. 
    NavigationInfo(speed=1000,visibilityLimit=100000),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,0,.6),(0,0,.4),(0,0,.6)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(0.6,0.6,0.6)]),
    Viewpoint(description='Operating area',orientation=(0.032,.985,.167,3.578),position=(-20000,20000,-50000)),
    #  ViewPositionOrientation is a prototype lets us find good viewpoints for inclusion in the scene 
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=False)]),
    #  =================================== 
    #  Sea state 
    Transform(DEF='GreenevilleSeaStateTransform',
      children=[
      Transform(translation=(0,0,-1000),
        children=[
        Group(DEF='ViewPoints',
          children=[
          Transform(DEF='AerialView',rotation=(0,1,0,1.8),translation=(15,50,-5),
            children=[
            Transform(rotation=(0,1,0,0.75),
              children=[
              Viewpoint(description='Sea State aerial view',orientation=(1,0,0,-0.35))])])]),
        ProtoInstance(name='SeaStateExtrusion')]),
      #  semi-transparent flat plate at surface 
      Switch(whichChoice=-1,
        children=[
        Shape(DEF='oceanSurface',
          #  IndexedFaceSet subdivided to enable view-frustrum culling for performance improvement 
          #  area 10Km in X by 10Km in Z 
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1,0,3,4,5,0,-1,0,5,6,7,0,-1,0,7,8,1,0,-1],solid=False,
            coord=Coordinate(point=[(0,0,0),(0,0,25000),(25000,0,25000),(25000,0,0),(25000,0,-25000),(0,0,-25000),(-25000,0,-25000),(-25000,0,0),(-25000,0,25000)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0,.2,.5),transparency=0.05)))])]),
    #  =================================== 
    #  USS GREENEVILLE 
    Group(
      children=[
      Transform(DEF='GreenevilleTransform',
        children=[
        Inline(url=["../../Submarines/SsnLosAngelesUnitedStates/688.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.x3d","../../Submarines/SsnLosAngelesUnitedStates/688.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.wrl"]),
        Viewpoint(description='USS Greeneville',orientation=(0,1,0,-1.57),position=(-150,6,0))]),
      ProtoInstance(DEF='GreenevilleInterpolator',name='WaypointInterpolator',
        #  initial waypoint time 1330, final waypoint time 1343.25 
        fieldValue=[
        fieldValue(name='description',value='GreenevilleInterpolator'),
        fieldValue(name='waypoints',value=[(-18256.7,-198.1,-2429.6),(-17778.3,-198.1,-2429.6),(-17330.7,-198.1,-2429.6),(-16816.3,-121.9,-2429.6),(-16502.5,-121.9,-2429.6),(-15494.2,-198.1,-2429.6),(-14907.7,-198.1,-2429.6),(-14161.8,-198.1,-2429.6),(-14064.0,-198.1,-2429.6),(-14439.6,-198.1,-3080.1),(-14449.9,-198.1,-3097.9),(-14555.3,-198.1,-3280.6),(-14864.0,-198.1,-3815.2),(-14169.5,-198.1,-3815.2),(-14025.4,-121.9,-3815.2),(-13634.5,-121.9,-3815.2),(-12806.2,-198.1,-3815.2),(-12471.8,-198.1,-3815.2),(-9611.5,-198.1,-3815.2),(-9128.0,-198.1,-3815.2),(-8059.6,-198.1,-3426.3),(-6894.6,-198.1,-3002.3),(-6445.0,-198.1,-2838.7),(-6029.3,-198.1,-2687.3),(-4279.3,-198.1,-2050.4),(-4245.5,-121.9,-2038.1),(-2805.0,-121.9,-2038.1),(-1711.9,-121.9,-2038.1),(-1869.5,-121.9,-1905.8),(-2667.5,-121.9,-1236.2),(-2510.4,-121.9,-1293.4),(-2027.0,-121.9,-1469.3),(-1422.7,-121.9,-1689.3),(-1776.4,-121.9,-1076.7),(-2104.3,-121.9,-508.7),(-2123.6,-121.9,-475.2),(-1875.6,-121.9,-565.5),(-1462.3,-121.9,-715.9),(-1407.2,-45.7,-736.0),(-1352.0,-45.7,-756.1),(-1326.8,-45.7,-765.3),(-993.8,-45.7,-886.5),(-692.1,-45.7,-996.3),(-371.6,-45.7,-1112.9),(-389.0,-45.7,-1082.9),(-498.9,-45.7,-892.4),(-524.0,-45.7,-849.0),(-533.6,-45.7,-832.3),(-562.6,-45.7,-782.1),(-620.5,-45.7,-681.9),(-720.8,-18.3,-508.1),(-767.1,-18.3,-427.9),(-817.2,-17.7,-341.1),(-826.9,-17.4,-324.4),(-848.1,-17.4,-287.6),(-855.8,-19.5,-274.2),(-877.9,-24.1,-237.6),(-946.4,-54.6,-118.8),(-432.9,-121.9,-305.7),(-400.5,-122.5,-280.4),(-278.1,-122.5,-194.7),(0.0,-6.1,0.0)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[93.0,87.0,100.0,61.0,196.0,114.0,145.0,19.0,146.0,4.0,41.0,120.0,135.0,28.0,76.0,161.0,65.0,556.0,94.0,221.0,241.0,93.0,86.0,362.0,7.0,112.0,85.0,16.0,81.0,13.0,40.0,50.0,55.0,51.0,3.0,27.0,45.0,6.0,9.0,4.0,53.0,48.0,51.0,9.0,57.0,13.0,5.0,15.0,30.0,52.0,24.0,26.0,5.0,11.0,4.0,13.0,31.0,83.0,6.0,22.0,50.0]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='pitchUpDownForVerticalWaypoints',value=True),
        fieldValue(name='labelDisplayMode',value='interpolation'),
        fieldValue(name='heightLabel',value='depth'),
        fieldValue(name='lineColor',value=(0,0.8,0.8)),
        fieldValue(name='highlightSegmentColor',value=(0.8,0.6,0.2)),
        fieldValue(name='labelColor',value=(0,0.8,0.8)),
        fieldValue(name='labelOffset',value=(0,20,0)),
        fieldValue(name='labelFontSize',value=6),
        fieldValue(name='traceEnabled',value=False)]),
      ROUTE(fromField='position_changed',fromNode='GreenevilleInterpolator',toField='set_translation',toNode='GreenevilleTransform'),
      ROUTE(fromField='orientation_changed',fromNode='GreenevilleInterpolator',toField='set_rotation',toNode='GreenevilleTransform'),
      #  Move sea state extrusion to stay located over submarine 
      Script(DEF='SurfaceMovementFilter',
        field=[
        field(accessType='inputOnly',name='input3dPosition',type='SFVec3f'),
        field(accessType='outputOnly',name='output2dPosition',type='SFVec3f')]),
      ROUTE(fromField='position_changed',fromNode='GreenevilleInterpolator',toField='input3dPosition',toNode='SurfaceMovementFilter'),
      ROUTE(fromField='output2dPosition',fromNode='SurfaceMovementFilter',toField='set_translation',toNode='GreenevilleSeaStateTransform')]),
    #  =================================== 
    #  MV EHIME MARU 
    Group(
      children=[
      Transform(DEF='EhimeMaruTransform',
        children=[
        Inline(url=["../../ShipsCivilian/Trawlers/EhimeMaru.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Trawlers/EhimeMaru.x3d","../../ShipsCivilian/Trawlers/EhimeMaru.wrl","https://savage.nps.edu/Savage/ShipsCivilian/Trawlers/EhimeMaru.wrl"])]),
      ProtoInstance(DEF='EhimeMaruInterpolator',name='WaypointInterpolator',
        #  initial waypoint time 1330, final waypoint time 1343.25 
        fieldValue=[
        fieldValue(name='description',value='EhimeMaruInterpolator'),
        fieldValue(name='waypoints',value=[(20060.7,-3.0,-5001.7),(19875.0,-3.0,-4955.4),(19701.3,-3.0,-4912.1),(19501.6,-3.0,-4862.3),(19379.8,-3.0,-4831.9),(18988.5,-3.0,-4734.4),(18760.9,-3.0,-4677.6),(18471.4,-3.0,-4605.4),(18433.4,-3.0,-4596.0),(18141.9,-3.0,-4523.3),(18133.9,-3.0,-4521.3),(18052.1,-3.0,-4500.9),(17812.5,-3.0,-4441.2),(17542.9,-3.0,-4373.9),(17389.2,-3.0,-4335.6),(16971.9,-3.0,-4231.6),(16087.9,-3.0,-4011.2),(15731.0,-3.0,-3922.2),(12678.1,-3.0,-3161.0),(12162.0,-3.0,-3032.3),(10948.6,-3.0,-2729.8),(9625.3,-3.0,-2399.9),(9114.6,-3.0,-2272.5),(8642.4,-3.0,-2154.8),(6654.8,-3.0,-1659.2),(6616.4,-3.0,-1649.6),(6001.4,-3.0,-1496.3),(5534.7,-3.0,-1379.9),(5446.8,-3.0,-1358.0),(5002.1,-3.0,-1247.2),(4930.7,-3.0,-1229.4),(4711.1,-3.0,-1174.6),(4436.5,-3.0,-1106.1),(4134.5,-3.0,-1030.9),(3854.5,-3.0,-961.0),(3838.0,-3.0,-956.9),(3689.8,-3.0,-920.0),(3442.7,-3.0,-858.4),(3409.8,-3.0,-850.1),(3360.3,-3.0,-837.8),(3338.4,-3.0,-832.4),(3047.4,-3.0,-759.8),(2783.8,-3.0,-694.1),(2503.8,-3.0,-624.3),(2454.4,-3.0,-611.9),(2141.4,-3.0,-533.9),(2070.0,-3.0,-516.1),(2042.6,-3.0,-509.3),(1960.2,-3.0,-488.7),(1795.5,-3.0,-447.7),(1510.0,-3.0,-376.5),(1378.2,-3.0,-343.6),(1235.4,-3.0,-308.0),(1208.0,-3.0,-301.2),(1147.6,-3.0,-286.1),(1125.6,-3.0,-280.6),(1054.2,-3.0,-262.8),(884.0,-3.0,-220.4),(428.3,-3.0,-106.8),(395.3,-3.0,-98.6),(274.5,-3.0,-68.4),(0.0,-3.0,0.0)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[93.0,87.0,100.0,61.0,196.0,114.0,145.0,19.0,146.0,4.0,41.0,120.0,135.0,28.0,76.0,161.0,65.0,556.0,94.0,221.0,241.0,93.0,86.0,362.0,7.0,112.0,85.0,16.0,81.0,13.0,40.0,50.0,55.0,51.0,3.0,27.0,45.0,6.0,9.0,4.0,53.0,48.0,51.0,9.0,57.0,13.0,5.0,15.0,30.0,52.0,24.0,26.0,5.0,11.0,4.0,13.0,31.0,83.0,6.0,22.0,50.0]),
        fieldValue(name='heightLabel',value='none'),
        fieldValue(name='lineColor',value=(0.4,0.4,0.1)),
        fieldValue(name='highlightSegmentColor',value=(0.8,0.8,0.2)),
        fieldValue(name='labelColor',value=(0.8,0.8,0)),
        fieldValue(name='labelOffset',value=(0,20,0)),
        fieldValue(name='labelFontSize',value=6),
        fieldValue(name='traceEnabled',value=False)]),
      ROUTE(fromField='position_changed',fromNode='EhimeMaruInterpolator',toField='set_translation',toNode='EhimeMaruTransform'),
      ROUTE(fromField='orientation_changed',fromNode='EhimeMaruInterpolator',toField='set_rotation',toNode='EhimeMaruTransform')]),
    #  =================================== 
    #  Grid and coordinate axes 
    Group(
      children=[
      Viewpoint(description='Collision point',orientation=(-.233,.962,.143,1.1352),position=(4000,1000,1500)),
      Transform(scale=(2500,2500,2500),
        children=[
        Inline(url=["../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"])]),
      Transform(scale=(10,10,10),
        children=[
        Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])]),
    #  =================================== 
    #  Can use either MasterClock or DvdControllerClock 
    TimeSensor(DEF='MasterClock',loop=True),
    ProtoInstance(DEF='DvdControllerClock',name='DvdController',
      fieldValue=[
      fieldValue(name='displayMode',value='PLAYBACK_SLIDER'),
      fieldValue(name='playEnabled',value=True),
      fieldValue(name='buttonColor',value=(0.655,0.655,0.655)),
      fieldValue(name='selectedButtonColor',value=(0.675,0.675,0.675)),
      fieldValue(name='selectedLabelColor',value=(0.9,0,0)),
      fieldValue(name='locationOffset',value=(-12,-4,0)),
      fieldValue(name='cycleInterval',value=40),
      fieldValue(name='speedFactor',value=10.0),
      fieldValue(name='traceEnabled',value=False)]),
    ROUTE(fromField='totalDuration',fromNode='EhimeMaruInterpolator',toField='set_cycleInterval',toNode='DvdControllerClock'),
    ROUTE(fromField='fraction_changed',fromNode='DvdControllerClock',toField='set_fraction',toNode='GreenevilleInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='DvdControllerClock',toField='set_fraction',toNode='EhimeMaruInterpolator')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CollisionCourses.py")

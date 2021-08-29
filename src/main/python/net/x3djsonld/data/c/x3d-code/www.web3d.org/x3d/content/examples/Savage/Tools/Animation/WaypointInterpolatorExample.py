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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='WaypointInterpolatorExample.x3d',name='title'),
    meta(content='Example set of waypoints, plus either leg durations or speed(s), which demonstrates resulting position/orientation interpolation. Motion can be stopped/started by placing mouse over orange TouchSensor Box. A HiddenViewpoint also exists under the coordinate axes. Trace values are printed in the browser console.',name='description'),
    meta(content='Don Brutzman, Curtis Blais, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='6 April 2001',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='WaypointInterpolatorExample.png',name='Image'),
    meta(content='Cortona bug: TimeSensor set_cycleInterval has no effect, effectively ignoring routed totalDuration. Workaround: view calculated value for totalDuration, then set it in TimeSensor manually.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ====================================== 
    #  To use WaypointInterpolator in your scene, copy/paste this definition verbatim first. 
    children=[
    ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
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
    #  ====================================== 
    #  Here is another interesting prototype authoring tool. 
    ExternProtoDeclare(appinfo='Hidden viewpoint becomes active (binds) upon pointer selection to reveal an interesting view with an optionally label',name='HiddenViewpoint',url=["../../../Savage/Tools/Animation/HiddenViewpointPrototype.x3d#HiddenViewpoint","https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointPrototype.x3d#HiddenViewpoint","../../../Savage/Tools/Animation/HiddenViewpointPrototype.wrl#HiddenViewpoint","https://savage.nps.edu/Savage/Tools/Animation/HiddenViewpointPrototype.wrl#HiddenViewpoint"],
      field=[
      field(accessType='inputOutput',name='position',type='SFVec3f'),
      field(accessType='inputOutput',name='rotation',type='SFRotation'),
      field(accessType='initializeOnly',name='sensorRadius',type='SFFloat'),
      field(accessType='inputOnly',name='activate',type='SFBool'),
      field(accessType='inputOutput',name='label',type='MFString'),
      field(accessType='inputOutput',name='labelOffset',type='SFVec3f'),
      field(accessType='initializeOnly',name='labelFontSize',type='SFFloat'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    #  ====================================== 
    #  Example instance follows prototype declaration 
    Viewpoint(description='WaypointInterpolator example',orientation=(1,0,0,-0.3),position=(-1,5,13)),
    Viewpoint(description='Above, looking down',orientation=(1,0,0,-1.57),position=(0,15,-5)),
    Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
    #  10 second default cycleInterval should get overridden by 25.3 second computed totalDuration. 
    TimeSensor(DEF='Clock',cycleInterval=10.0,loop=True),
    ProtoInstance(DEF='TrackBuilder',name='WaypointInterpolator',
      fieldValue=[
      fieldValue(name='description',value='TrackBuilder'),
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
      fieldValue(name='waypoints',value=[(-5,0,0),(5,2,0),(5,5,-10),(4.9,2,-10),(-5,0,-10),(-5,0,0),(-5.5,0,1.5),(-7,0.5,2),(-8,0,0),(-5,0,0)]),
      fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
      fieldValue(name='legDurations',value=[1,2,3,1,2,3,1,2,3]),
      fieldValue(name='legSpeeds',value=[2,4,2,2,4,1,1,1,1]),
      fieldValue(name='defaultSpeed',value=5),
      fieldValue(name='turningRate',value=90),
      fieldValue(name='lineColor',value=(1,0,0)),
      fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
      fieldValue(name='transparency',value=0),
      fieldValue(name='labelDisplayMode',value='interpolation'),
      fieldValue(name='heightLabel',value='altitude'),
      fieldValue(name='labelOffset',value=(0,1.2,0)),
      fieldValue(name='labelFontSize',value=0.5),
      fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
      fieldValue(name='traceEnabled',value=False),
      fieldValue(name='outputInitializationComputations',value=True)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TrackBuilder'),
    ROUTE(fromField='totalDuration',fromNode='TrackBuilder',toField='set_cycleInterval',toNode='Clock'),
    Transform(DEF='TrackingTransform',
      #  Always align initial geometry with X axis 
      children=[
      Group(
        #  Point cone along X-axis 
        children=[
        Transform(rotation=(0,0,1,-1.57),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.4),
            appearance=Appearance(DEF='ConeAppearance',
              material=Material(diffuseColor=(0.8,0.8,0.2))))]),
        Transform(translation=(0,0.1,0),
          children=[
          Shape(
            geometry=Cone(bottomRadius=0.1,height=0.8),
            appearance=Appearance(USE='ConeAppearance'))]),
        Viewpoint(description='Ride on',orientation=(0,1,0,-1.57),position=(-4,1,0)),
        Viewpoint(description='Ride alongside',position=(0,0,5)),
        Viewpoint(description='Ride in front',orientation=(0,1,0,1.57),position=(4,1,0))])]),
    ROUTE(fromField='position_changed',fromNode='TrackBuilder',toField='translation',toNode='TrackingTransform'),
    ROUTE(fromField='orientation_changed',fromNode='TrackBuilder',toField='rotation',toNode='TrackingTransform'),
    #  floor employs TouchSensor.isOver to stop/start animation 
    Group(DEF='FloorAndToggleMarker',
      children=[
      Transform(translation=(0,-0.1,-5),
        children=[
        Shape(
          geometry=Box(size=(10,0.1,10)),
          appearance=Appearance(DEF='FloorAppearance',
            material=Material(diffuseColor=(0.1,0.8,0.9))))]),
      #  starting point marker toggles playback 
      Transform(translation=(-5,0,0),
        children=[
        TouchSensor(DEF='TouchBox',description='Touch box to toggle playback'),
        ROUTE(fromField='isOver',fromNode='TouchBox',toField='enabled',toNode='Clock'),
        Shape(
          geometry=Box(DEF='TogglePlayback',size=(0.1,0.8,0.1)),
          appearance=Appearance(DEF='OrangeAppearance',
            material=Material(diffuseColor=(0.8,0.5,0.2)))),
        Transform(translation=(0,1.4,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["isOver","toggles","motion","off/on"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.3)),
              appearance=Appearance(USE='OrangeAppearance'))])]),
        #  Illuminate bottom of floor for HiddenViewpoint clarity 
        PointLight(location=(0,-6,0),radius=10)])]),
    #  Example instance of clickable viewpoint prototype 
    ProtoInstance(DEF='TestHiddenViewpointPrototype',name='HiddenViewpoint',
      fieldValue=[
      fieldValue(name='position',value=(0,-0.5,0)),
      fieldValue(name='rotation',value=(0,1,0,2.5)),
      fieldValue(name='sensorRadius',value=1),
      fieldValue(name='label',value=["HiddenViewpoint","test works!"]),
      fieldValue(name='labelOffset',value=(1,-1.25,0)),
      fieldValue(name='labelFontSize',value=0.4),
      fieldValue(name='labelColor',value=(1,0,0))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WaypointInterpolatorExample.py")

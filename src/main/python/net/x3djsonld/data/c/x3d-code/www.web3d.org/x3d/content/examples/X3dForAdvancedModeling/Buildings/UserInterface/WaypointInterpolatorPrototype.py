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
    meta(content='WaypointInterpolatorPrototype.x3d',name='title'),
    meta(content='Prototype to provide a set of waypoints, plus either leg durations or speed, and return position/orientation interpolation values. Included example can be stopped/started via TouchSensor mouse over floor Box.',name='description'),
    meta(content='Don Brutzman, Curtis Blais, Jeff Weekley, Jane Wu',name='creator'),
    meta(content='6 April 2001',name='created'),
    meta(content='3 March 2013',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.x3d',name='reference'),
    meta(content='browsers do not compute pitch angle consistently',name='warning'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Short description of what is animated by this WaypointInterpolator.',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='Waypoints being traversed with interpolation of intermediate positions and orientations.',name='waypoints',type='MFVec3f',value=[(0,0,0),(0,0,0)]),
        field(accessType='inputOnly',appinfo='Add another single waypoint to array of waypoints recalculate interpolator values.',name='add_waypoint',type='SFVec3f'),
        field(accessType='inputOnly',appinfo='Replace all waypoints recalculate interpolator values.',name='set_waypoints',type='MFVec3f'),
        field(accessType='initializeOnly',appinfo='Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope',name='pitchUpDownForVerticalWaypoints',type='SFBool',value=False),
        #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
        field(accessType='initializeOnly',appinfo='Units m/sec. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legSpeeds',type='MFFloat',
          #  default initialization is empty array [] 
          ),
        field(accessType='initializeOnly',appinfo='Units in seconds. If used, array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legDurations',type='MFFloat',
          #  default initialization is empty array [] 
          ),
        field(accessType='initializeOnly',appinfo='Units m/sec.',name='defaultSpeed',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous.',name='turningRate',type='SFFloat',value=90),
        field(accessType='outputOnly',appinfo='Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds.',name='totalDuration',type='SFTime'),
        #  interpolation fields 
        field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
        field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
        #  display-related fields 
        field(accessType='inputOutput',appinfo='default color for non-active line segments',name='lineColor',type='SFColor',value=(0.6,0.6,0.6)),
        field(accessType='inputOutput',appinfo='highlightSegmentColors must contain two color values for each endpoint of the highlight segment.',name='highlightSegmentColor',type='SFColor',value=(0.3,0.3,1)),
        field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='transparency',type='SFFloat',value=0),
        field(accessType='initializeOnly',appinfo='allowed values: none; waypoints (produce labels at each waypoint); or interpolation (produce single moving label at interpolator time course speed location)',name='labelDisplayMode',type='SFString',value='waypoints'),
        field(accessType='initializeOnly',appinfo='allowed values: altitude depth (negate Y value) none',name='heightLabel',type='SFString',value='altitude'),
        field(accessType='initializeOnly',appinfo='heightLabel relative location',name='labelOffset',type='SFVec3f',value=(0,-1,0)),
        field(accessType='initializeOnly',appinfo='heightLabel text size',name='labelFontSize',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='heightLabel text color',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='Output the number of waypoints totalDistance and totalDuration to console upon initialization',name='outputInitializationComputations',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='default color for vertical drop-line segments',name='verticalDropLineColor',type='SFColor',value=(0.4,0.4,0.4)),
        field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='verticalDropLineTransparency',type='SFFloat',value=1)]),
      ProtoBody=ProtoBody(
        #  First node in prototype determines node type of prototype. This prototype extends PositionInterpolator and OrientationInterpolator functionality. Nevertheless, a Group node is wrapped around all of them in order to avoid a Prototype bug in CosmoPlayer. 
        children=[
        Group(
          #  key, keyValue will be generated by WaypointTrackScript. set_fraction is a common input to both interpolators. Interpolator value outputs are returned via the corresponding Prototype field interfaces. 
          children=[
          PositionInterpolator(DEF='WaypointPI.instance',key=[0,0.5,1],keyValue=[(0,0,0),(1,1,1),(2,2,2)],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='value_changed',protoField='position_changed')])),
          OrientationInterpolator(DEF='WaypointOI.instance',
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='value_changed',protoField='orientation_changed')])),
          Group(DEF='CoordinateLabelsAndViewpointsGroup'),
          Script(DEF='WaypointTrackScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='description',type='SFString'),
            field(accessType='initializeOnly',name='waypoints',type='MFVec3f'),
            field(accessType='inputOnly',name='add_waypoint',type='SFVec3f'),
            field(accessType='inputOnly',name='set_waypoints',type='MFVec3f'),
            field(accessType='initializeOnly',name='pitchUpDownForVerticalWaypoints',type='SFBool'),
            field(accessType='initializeOnly',name='legSpeeds',type='MFFloat'),
            field(accessType='initializeOnly',name='legDurations',type='MFFloat'),
            field(accessType='initializeOnly',name='defaultSpeed',type='SFFloat'),
            field(accessType='initializeOnly',name='turningRate',type='SFFloat'),
            field(accessType='outputOnly',name='totalDuration',type='SFTime'),
            field(accessType='initializeOnly',name='WaypointPI',type='SFNode',
              children=[
              PositionInterpolator(USE='WaypointPI.instance')]),
            field(accessType='initializeOnly',name='WaypointOI',type='SFNode',
              children=[
              OrientationInterpolator(USE='WaypointOI.instance')]),
            field(accessType='outputOnly',name='pointIndices',type='MFInt32'),
            field(accessType='initializeOnly',name='OutputLabelsGroup',type='SFNode',
              children=[
              Group(USE='CoordinateLabelsAndViewpointsGroup')]),
            field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
            field(accessType='outputOnly',appinfo='Initialized to (0 0 0 0 0 0)',name='highlightCoordinates',type='MFVec3f'),
            field(accessType='initializeOnly',name='heightLabel',type='SFString'),
            field(accessType='initializeOnly',name='labelDisplayMode',type='SFString'),
            field(accessType='initializeOnly',name='labelOffset',type='SFVec3f'),
            field(accessType='initializeOnly',name='labelFontSize',type='SFFloat'),
            field(accessType='initializeOnly',name='labelColor',type='SFColor'),
            field(accessType='outputOnly',name='labelInterpolation',type='MFString'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
            field(accessType='initializeOnly',appinfo='Output the number of waypoints totalDistance and totalDuration to console upon initialization',name='outputInitializationComputations',type='SFBool'),
            #  local variables (do not use internal var declarations) for persistence 
            field(accessType='initializeOnly',appinfo='whether or not an error was detected during script processing.',name='scriptError',type='SFBool',value=False),
            field(accessType='initializeOnly',appinfo='retain state information while constructing fraction array',name='previousFractionIndex',type='SFInt32',value=0),
            field(accessType='initializeOnly',appinfo='label',name='depthString',type='SFString'),
            field(accessType='initializeOnly',appinfo='label',name='whichRotationVersion',type='SFString'),
            field(accessType='outputOnly',name='verticalDropLineIndices',type='MFInt32'),
            field(accessType='outputOnly',name='verticalDropLinePoints',type='MFVec3f'),
            field(accessType='initializeOnly',name='positionKey',type='MFFloat',value=[0]),
            field(accessType='initializeOnly',name='positionKeyValueArray',type='MFVec3f'),
            field(accessType='outputOnly',name='finalPositionKey',type='MFFloat'),
            field(accessType='outputOnly',name='finalPositionKeyValueArray',type='MFVec3f'),
            field(accessType='initializeOnly',name='distances',type='MFFloat'),
            field(accessType='initializeOnly',name='pointIndicesAccumulator',type='MFInt32'),
            field(accessType='initializeOnly',name='verticalDropLineIndicesAccumulator',type='MFInt32'),
            field(accessType='initializeOnly',name='verticalDropLinePointsAccumulator',type='MFVec3f'),
            field(accessType='initializeOnly',name='totalDistance',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='orientations',type='MFRotation'),
            field(accessType='initializeOnly',name='dx',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='dy',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='dz',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='legDistance',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='heading',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='pitchAngle',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='orientationKey',type='MFFloat'),
            field(accessType='initializeOnly',name='newKey',type='MFFloat'),
            field(accessType='initializeOnly',name='newKeyValue',type='MFRotation'),
            field(accessType='initializeOnly',name='outputChild',type='MFNode',value=[NULL]),
            field(accessType='initializeOnly',name='rotatedVector',type='SFVec3f',value=(0,0,0))],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description'),
              connect(nodeField='waypoints',protoField='waypoints'),
              connect(nodeField='add_waypoint',protoField='add_waypoint'),
              connect(nodeField='set_waypoints',protoField='set_waypoints'),
              connect(nodeField='pitchUpDownForVerticalWaypoints',protoField='pitchUpDownForVerticalWaypoints'),
              connect(nodeField='legSpeeds',protoField='legSpeeds'),
              connect(nodeField='legDurations',protoField='legDurations'),
              connect(nodeField='defaultSpeed',protoField='defaultSpeed'),
              connect(nodeField='turningRate',protoField='turningRate'),
              connect(nodeField='totalDuration',protoField='totalDuration'),
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='heightLabel',protoField='heightLabel'),
              connect(nodeField='labelDisplayMode',protoField='labelDisplayMode'),
              connect(nodeField='labelOffset',protoField='labelOffset'),
              connect(nodeField='labelFontSize',protoField='labelFontSize'),
              connect(nodeField='labelColor',protoField='labelColor'),
              connect(nodeField='traceEnabled',protoField='traceEnabled'),
              connect(nodeField='outputInitializationComputations',protoField='outputInitializationComputations')])),
          ROUTE(fromField='finalPositionKey',fromNode='WaypointTrackScript',toField='key',toNode='WaypointPI.instance'),
          ROUTE(fromField='finalPositionKeyValueArray',fromNode='WaypointTrackScript',toField='keyValue',toNode='WaypointPI.instance'),
          #  IndexedLineSet connects waypoints for easy visibility. Set transparency=1 to hide. 
          Shape(DEF='VerticalDropLineShape',
            geometry=IndexedLineSet(DEF='VerticalDropLine',
              coord=Coordinate(DEF='VerticalDropLineCoordinates')),
            appearance=Appearance(
              material=Material(DEF='VerticalDropLineMaterial',
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='verticalDropLineColor'),
                  connect(nodeField='transparency',protoField='verticalDropLineTransparency')])))),
          ROUTE(fromField='verticalDropLineIndices',fromNode='WaypointTrackScript',toField='set_coordIndex',toNode='VerticalDropLine'),
          ROUTE(fromField='verticalDropLinePoints',fromNode='WaypointTrackScript',toField='point',toNode='VerticalDropLineCoordinates'),
          Shape(DEF='HighlightShape',
            geometry=IndexedLineSet(DEF='HighlightSegment',coordIndex=[0,1,-1],
              coord=Coordinate(DEF='HighlightSegmentCoordinates',point=[(0,0,0),(0,0,0)])),
            appearance=Appearance(
              material=Material(DEF='HighlightSegmentMaterial',diffuseColor=(0,0,0),emissiveColor=(0.2,0.2,0.2),
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='highlightSegmentColor'),
                  connect(nodeField='transparency',protoField='transparency')])))),
          ROUTE(fromField='highlightCoordinates',fromNode='WaypointTrackScript',toField='point',toNode='HighlightSegmentCoordinates'),
          Shape(DEF='WaypointLineShape',
            geometry=IndexedLineSet(DEF='WaypointLine',
              coord=Coordinate(DEF='WaypointLineCoordinates',
                IS=IS(
                  connect=[
                  connect(nodeField='point',protoField='waypoints')]))),
            appearance=Appearance(
              material=Material(DEF='WaypointTrackMaterial',emissiveColor=(0.8,0.8,0.8),
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='lineColor'),
                  connect(nodeField='transparency',protoField='transparency')])))),
          ROUTE(fromField='pointIndices',fromNode='WaypointTrackScript',toField='set_coordIndex',toNode='WaypointLine'),
          #  Draw highlight segment before and after waypoint lines in case of order dependency 
          #  TODO!! throws Xj3D exception! <Shape USE='HighlightShape'/> 
          Transform(DEF='MovingVehicleLabel',
            #  no need to externally ROUTE position and orientation interpolator key/keyValue results, since prototype is using pass-by-reference node update 
            #  Nevertheless, must ROUTE position and orientation interpolated text label 
            children=[
            ROUTE(fromField='value_changed',fromNode='WaypointPI.instance',toField='translation',toNode='MovingVehicleLabel'),
            ROUTE(fromField='value_changed',fromNode='WaypointOI.instance',toField='rotation',toNode='MovingVehicleLabel'),
            Transform(DEF='MovingVehicleLabelOffset',
              IS=IS(
                connect=[
                connect(nodeField='translation',protoField='labelOffset')]),
              children=[
              Billboard(
                children=[
                Shape(
                  geometry=Text(DEF='MovingVehicleLabelText',
                    fontStyle=FontStyle(DEF='MovingVehicleLabelFont',justify=["MIDDLE","MIDDLE"],
                      IS=IS(
                        connect=[
                        connect(nodeField='size',protoField='labelFontSize')]))),
                  appearance=Appearance(
                    material=Material(DEF='MovingVehicleLabelMaterial',
                      IS=IS(
                        connect=[
                        connect(nodeField='diffuseColor',protoField='labelColor')])))),
                ROUTE(fromField='labelInterpolation',fromNode='WaypointTrackScript',toField='string',toNode='MovingVehicleLabelText')])])])])])),
    #  ====================================== 
    Anchor(description='WaypointInterpolator Example',url=["WaypointInterpolatorExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.x3d","WaypointInterpolatorExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["WaypointInterpolatorPrototype","defines a prototype","","Click on this text to see","WaypointInterpolatorExample"," scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WaypointInterpolatorPrototype.py")

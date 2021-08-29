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
    meta(content='PointTrackGeneratorPrototype5.x3d',name='title'),
    meta(content='Generator of randomized colored points using script nodes. The data arrays for coordinates and colors are generated in realtime or everyting is displayed, depending on your choice. This is still experimental, it is very difficult to get good contrast even despite trying different backgrounds.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='14 May 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='some debugging remains necessary.',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/PointTrackGeneratorPrototype5.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Sequentially display track points. Both points and times are initially provided as a full set of values.',name='PointTrackGenerator',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Point coordinates in meters referenced to local coordinate system origin.',name='pointPositionsArray',type='MFVec3f',value=[(0,0,0),(10,-4,0),(25,-6,0),(30,-8,5),(38,-15,5),(45,-18,5),(55,-22,5),(60,-25,15),(60,-27,22),(55,-30,35),(48,-35,35),(35,-35,35),(25,-45,35),(20,-55,35),(15,-70,35),(3,-70,35),(-5,-72,40),(-5,-75,50),(0,-80,55),(15,-75,55),(30,-70,55),(35,-60,55),(40,-50,55),(50,-34,55),(65,-23,70)]),
        field(accessType='initializeOnly',appinfo='Point times in seconds for local exercise clock. (Each time is clock time in seconds not in interval durations.)',name='pointTimesArray',type='MFTime',value=[1,3,6,8,10,12,14,15,17,18,23,28,35,37,39,43,45,47,48,53,58,60,61,65,70]),
        field(accessType='outputOnly',appinfo='totalDuration is derived from the pointTimesArray and used to set cycleInterval on a controlling TimeSensor clock outside the PointTrackGenerator ProtoInstance.',name='totalDuration',type='SFTime'),
        field(accessType='inputOutput',appinfo='displaypointsMode settings: -1=none 0=some (active interval) 1=all 2=IndexedLineSet.',name='displaypointsMode',type='SFInt32',value=2),
        field(accessType='inputOnly',appinfo='durationActivePoints is in seconds default initialization value is totalDuration.',name='durationActivePoints',type='SFTime'),
        field(accessType='inputOnly',appinfo='timeLatestActivePoint is in seconds default initialization value is final point time.',name='timeLatestActivePoint',type='SFTime'),
        field(accessType='outputOnly',name='getStartTime',type='SFTime'),
        field(accessType='outputOnly',name='getStopTime',type='SFTime'),
        field(accessType='inputOnly',name='mappedColorPointCreator',type='SFTime'),
        field(accessType='inputOutput',name='auvName',type='MFString',value=["../../Robots/UnmannedUnderwaterVehicles/AriesExample.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/AriesExample.wrl"])]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Switch(DEF='PointsGeometrySwitch',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='displaypointsMode')]),
            children=[
            Shape(DEF='displaypointsMode_0',
              geometry=PointSet(DEF='ActivePointSet',
                coord=Coordinate(DEF='ActivePointSetCoordinateNode'),
                color=Color(DEF='ActivePointSetColorNode'))),
            Shape(DEF='displaypointsMode_1',
              geometry=PointSet(DEF='CompletePointSet',
                coord=Coordinate(DEF='CompletePointSetCoordinateNode'),
                color=Color(DEF='CompletePointSetColorNode'))),
            Group(DEF='displaypointsMode_2',
              children=[
              Shape(
                geometry=IndexedLineSet(DEF='ActiveLineSet',
                  coord=Coordinate(DEF='ActiveLineSetCoordinateNode'),
                  color=Color(DEF='ActiveLineSetColorNode'))),
              Transform(DEF='auvTransform',scale=(4,4,4),
                children=[
                Inline(DEF='AuvNameInline',
                  IS=IS(
                    connect=[
                    connect(nodeField='url',protoField='auvName')]))])])]),
          #  work on color mapping later... 
          ColorInterpolator(DEF='ColorMapInterpolator',key=[0,0.12,0.48,0.7,1],keyValue=[(1,1,1),(1,0,0),(0,1,0),(0,0,1),(0,0,0)]),
          ColorInterpolator(DEF='ColorMapInterpolatorForCompletePointsSet',key=[0,0.12,0.48,0.7,1],keyValue=[(1,1,1),(1,0,0),(0,1,0),(0,0,1),(0,0,0)]),
          TimeSensor(DEF='CompletePointSetTimeSensor',cycleInterval=0.01,loop=True),
          Script(DEF='DrawPointScript',directOutput=True,
            #  For proper operation, first insert newPoint and then newPointTimeStamp 
            field=[
            field(accessType='initializeOnly',name='pointPositionsArray',type='MFVec3f',
              #  no default initialization value 
              ),
            field(accessType='initializeOnly',name='pointTimesArray',type='MFTime',
              #  no default initialization value 
              ),
            field(accessType='initializeOnly',name='newPointPositionsArray',type='MFVec3f',
              #  no default initialization value 
              ),
            field(accessType='initializeOnly',name='newPointTimesArray',type='MFTime',
              #  no default initialization value 
              ),
            field(accessType='initializeOnly',name='lineIndex',type='SFInt32',value=1),
            field(accessType='inputOnly',name='mappedColorPointCreator',type='SFTime'),
            field(accessType='initializeOnly',name='index',type='SFInt32',value=0),
            field(accessType='initializeOnly',name='completeIndex',type='SFInt32',value=0),
            field(accessType='outputOnly',name='ConditionComplete',type='SFBool'),
            field(accessType='initializeOnly',name='ActivePointSetCoordinateNode',type='SFNode',
              children=[
              Coordinate(USE='ActivePointSetCoordinateNode')]),
            field(accessType='initializeOnly',name='ActivePointSetColorNode',type='SFNode',
              children=[
              Color(USE='ActivePointSetColorNode')]),
            field(accessType='initializeOnly',name='CompletePointSetCoordinateNode',type='SFNode',
              children=[
              Coordinate(USE='CompletePointSetCoordinateNode')]),
            field(accessType='initializeOnly',name='CompletePointSetColorNode',type='SFNode',
              children=[
              Color(USE='CompletePointSetColorNode')]),
            field(accessType='initializeOnly',name='ColorMapInterpolator',type='SFNode',
              children=[
              ColorInterpolator(USE='ColorMapInterpolator')]),
            field(accessType='initializeOnly',name='ColorMapInterpolatorForCompletePointsSet',type='SFNode',
              children=[
              ColorInterpolator(USE='ColorMapInterpolatorForCompletePointsSet')]),
            field(accessType='initializeOnly',name='ActiveLineSetCoordinateNode',type='SFNode',
              children=[
              Coordinate(USE='ActiveLineSetCoordinateNode')]),
            field(accessType='initializeOnly',name='ActiveLineSetColorNode',type='SFNode',
              children=[
              Color(USE='ActiveLineSetColorNode')]),
            field(accessType='initializeOnly',name='auvTransform',type='SFNode',
              children=[
              Transform(USE='auvTransform')]),
            field(accessType='outputOnly',name='totalDuration',type='SFTime'),
            field(accessType='outputOnly',name='getStartTime',type='SFTime'),
            field(accessType='outputOnly',name='getStopTime',type='SFTime'),
            field(accessType='outputOnly',name='coordIndex_changed',type='MFInt32'),
            field(accessType='inputOnly',name='durationActivePoints',type='SFTime'),
            field(accessType='inputOnly',name='timeLatestActivePoint',type='SFTime'),
            field(accessType='inputOnly',name='completePointSetValue_changed',type='SFTime'),
            field(accessType='inputOnly',name='set_completePointSetColorArray',type='SFColor')],
            IS=IS(
              connect=[
              connect(nodeField='pointPositionsArray',protoField='pointPositionsArray'),
              connect(nodeField='pointTimesArray',protoField='pointTimesArray'),
              connect(nodeField='totalDuration',protoField='totalDuration'),
              connect(nodeField='durationActivePoints',protoField='durationActivePoints'),
              connect(nodeField='timeLatestActivePoint',protoField='timeLatestActivePoint'),
              connect(nodeField='getStartTime',protoField='getStartTime'),
              connect(nodeField='getStopTime',protoField='getStopTime'),
              connect(nodeField='mappedColorPointCreator',protoField='mappedColorPointCreator')])),
          Script(DEF='Debugger',
            field=[
            field(accessType='inputOnly',name='set_debugcoordinate',type='MFVec3f'),
            field(accessType='inputOnly',name='set_debugcolor',type='MFColor'),
            field(accessType='inputOnly',name='set_debugcoordinateC',type='MFVec3f'),
            field(accessType='inputOnly',name='set_debugcolorC',type='MFColor'),
            field(accessType='inputOnly',name='set_debugcoord',type='MFVec3f'),
            field(accessType='inputOnly',name='set_debugcoordIndex_changed',type='MFInt32')])]),
        ROUTE(fromField='cycleTime',fromNode='CompletePointSetTimeSensor',toField='completePointSetValue_changed',toNode='DrawPointScript'),
        ROUTE(fromField='value_changed',fromNode='ColorMapInterpolatorForCompletePointsSet',toField='set_completePointSetColorArray',toNode='DrawPointScript'),
        ROUTE(fromField='coordIndex_changed',fromNode='DrawPointScript',toField='set_coordIndex',toNode='ActiveLineSet'),
        ROUTE(fromField='point_changed',fromNode='ActivePointSetCoordinateNode',toField='set_debugcoordinate',toNode='Debugger'),
        ROUTE(fromField='color_changed',fromNode='ActivePointSetColorNode',toField='set_debugcolor',toNode='Debugger'),
        ROUTE(fromField='point',fromNode='ActiveLineSetCoordinateNode',toField='set_debugcoord',toNode='Debugger'),
        ROUTE(fromField='coordIndex_changed',fromNode='DrawPointScript',toField='set_debugcoordIndex_changed',toNode='Debugger'),
        ROUTE(fromField='point_changed',fromNode='CompletePointSetCoordinateNode',toField='set_debugcoordinateC',toNode='Debugger'),
        ROUTE(fromField='color_changed',fromNode='CompletePointSetColorNode',toField='set_debugcolorC',toNode='Debugger')])),
    #  =================== 
    #  Example scene goes here 
    Viewpoint(description='MainView',position=(0,-50,200)),
    ProtoInstance(DEF='TrackGeneratorInstance',name='PointTrackGenerator',
      fieldValue=[
      fieldValue(name='displaypointsMode',value=2)]),
    TimeSensor(DEF='DisplayingTimer'),
    ROUTE(fromField='getStartTime',fromNode='TrackGeneratorInstance',toField='set_startTime',toNode='DisplayingTimer'),
    ROUTE(fromField='getStopTime',fromNode='TrackGeneratorInstance',toField='set_stopTime',toNode='DisplayingTimer'),
    ROUTE(fromField='totalDuration',fromNode='TrackGeneratorInstance',toField='set_cycleInterval',toNode='DisplayingTimer'),
    ROUTE(fromField='fraction_changed',fromNode='DisplayingTimer',toField='mappedColorPointCreator',toNode='TrackGeneratorInstance')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PointTrackGeneratorPrototype5.py")

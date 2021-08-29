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
    meta(content='ExclusionZonePrototype.x3d',name='title'),
    meta(content='ExclusionZone range markers (zero or three)',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='27 July 2006',name='created'),
    meta(content='2 April 2007',name='modified'),
    meta(content='change whichChoice field to enabled',name='warning'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/ExclusionZonePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='ExclusionZones',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Usually to raise ranges off the surface',name='translation',type='SFVec3f',value=(0,1,0)),
        field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='OutterRange',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='MiddleRange',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Length in Meters for the radius of the range',name='InnerRange',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Turns zones on and off',name='whichChoice',type='SFInt32',value=-1)]),
      ProtoBody=ProtoBody(
        children=[
        Switch(whichChoice=-1,
          IS=IS(
            connect=[
            connect(nodeField='whichChoice',protoField='whichChoice')]),
          children=[
          Transform(scale=(2,2,2),
            IS=IS(
              connect=[
              connect(nodeField='translation',protoField='translation')]),
            children=[
            Transform(DEF='OutterRange',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='OutterRange')]),
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)]),
                  color=Color(color=[(0,1,0)])))]),
            Transform(DEF='MiddleRange',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='MiddleRange')]),
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)]),
                  color=Color(color=[(1,1,0)])))]),
            Transform(DEF='InnerRange',
              IS=IS(
                connect=[
                connect(nodeField='scale',protoField='InnerRange')]),
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)]),
                  color=Color(color=[(1,0,0)])))])])])])),
    ProtoInstance(DEF='ZONESTEST',name='ExclusionZones',
      fieldValue=[
      fieldValue(name='translation',value=(0,0,0)),
      fieldValue(name='OutterRange',value=(100,100,100)),
      fieldValue(name='MiddleRange',value=(50,50,50)),
      fieldValue(name='InnerRange',value=(25,25,25))]),
    Group(DEF='SensorGroupDDG77',
      children=[
      TouchSensor(DEF='ZoneTouchSensor',description='Click for Exclusion Zone Display'),
      IntegerSequencer(DEF='SwitchSequencer',key=[0,1],keyValue=[0,-1]),
      ROUTE(fromField='isActive',fromNode='ZoneTouchSensor',toField='next',toNode='SwitchSequencer'),
      ROUTE(fromField='value_changed',fromNode='SwitchSequencer',toField='whichChoice',toNode='ZONESTEST')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExclusionZonePrototype.py")

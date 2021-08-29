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
    meta(content='TestPrototypeInterpolators.x3d',name='title'),
    meta(content='Test case for Prototype PositionInterpolator OrientationInterpolator, expected behavior: is for both sets of test Text to move identically.',name='description'),
    meta(content='Don Brutzman and Jeff Weekley',name='creator'),
    meta(content='4 April 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestPrototypeInterpolators.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestPrototypeInterpolators.x3d'),
    ProtoDeclare(appinfo='Test output of PositionInterpolator, OrientationInterpolator when within Protototype',name='InterpolatorTest',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
        field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
        field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation')]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        Group(DEF='PrototypeRootNode',
          children=[
          PositionInterpolator(DEF='WaypointPI',key=[0,0.5,1],keyValue=[(0,0,0),(1,1,1),(2,2,2)],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='value_changed',protoField='position_changed')])),
          OrientationInterpolator(DEF='WaypointOI',key=[0,0.5,1],keyValue=[(0,1,0,0),(0.7071,0.7071,0,3.1416),(0,1,0,0)],
            IS=IS(
              connect=[
              connect(nodeField='set_fraction',protoField='set_fraction'),
              connect(nodeField='value_changed',protoField='orientation_changed')]))]),
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        Script(DEF='InternalTraceScript',
          field=[
          field(accessType='inputOnly',name='set_position',type='SFVec3f'),
          field(accessType='inputOutput',name='holdPosition',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='inputOnly',name='set_rotation',type='SFRotation')]),
        ROUTE(fromField='value_changed',fromNode='WaypointPI',toField='set_position',toNode='InternalTraceScript'),
        ROUTE(fromField='value_changed',fromNode='WaypointOI',toField='set_rotation',toNode='InternalTraceScript')])),
    #  ===================================== 
    TimeSensor(DEF='Clock',cycleInterval=6,loop=True),
    #  ===================================== 
    ProtoInstance(DEF='InterpolatorTestInstance',name='InterpolatorTest'),
    Transform(DEF='LeftText',translation=(-3,0,0),
      children=[
      Transform(DEF='TrackingTransformLeft',
        children=[
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='InterpolatorTestInstance'),
        ROUTE(fromField='position_changed',fromNode='InterpolatorTestInstance',toField='translation',toNode='TrackingTransformLeft'),
        ROUTE(fromField='orientation_changed',fromNode='InterpolatorTestInstance',toField='rotation',toNode='TrackingTransformLeft'),
        Shape(
          geometry=Text(string=["prototype interpolators"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.2,0.2))))])]),
    #  ===================================== 
    PositionInterpolator(DEF='ActualPositionInterpolator',key=[0,0.5,1],keyValue=[(0,0,0),(1,1,1),(2,2,2)]),
    OrientationInterpolator(DEF='ActualOrientationInterpolator',key=[0,0.5,1],keyValue=[(0,1,0,0),(0.7071,0.7071,0,3.1416),(0,1,0,0)]),
    Transform(DEF='RightText',translation=(-3,-2,0),
      children=[
      Transform(DEF='TrackingTransformRight',
        children=[
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ActualPositionInterpolator'),
        ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ActualOrientationInterpolator'),
        ROUTE(fromField='value_changed',fromNode='ActualPositionInterpolator',toField='translation',toNode='TrackingTransformRight'),
        ROUTE(fromField='value_changed',fromNode='ActualOrientationInterpolator',toField='rotation',toNode='TrackingTransformRight'),
        Shape(
          geometry=Text(string=["native interpolators"]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.8,0.2))))])]),
    Script(DEF='ExternalTraceScript',
      field=[
      field(accessType='inputOnly',name='set_position',type='SFVec3f'),
      field(accessType='inputOutput',name='holdPosition',type='SFVec3f',value=(0.0,0.0,0.0)),
      field(accessType='inputOnly',name='set_rotation',type='SFRotation')]),
    ROUTE(fromField='value_changed',fromNode='ActualPositionInterpolator',toField='set_position',toNode='ExternalTraceScript'),
    ROUTE(fromField='value_changed',fromNode='ActualOrientationInterpolator',toField='set_rotation',toNode='ExternalTraceScript')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestPrototypeInterpolators.py")

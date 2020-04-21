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
    meta(name='creator',content='John W Carlson'),
    meta(name='created',content='December 13 2015'),
    meta(name='modified',content='April 18 2017'),
    meta(name='title',content='fors2.x3d'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/fors2.x3d'),
    meta(name='description',content='beginnings of a force directed graph in 3D'),
    meta(name='generator',content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='node',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='position',accessType='inputOutput',type='SFVec3f',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='transform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='position')]),
          children=[
          Shape(
            # comment before Sphere
            # comment after Sphere
            # comment after Appearance
            geometry=Sphere(),
            appearance=Appearance(
              # comment before Material
              # comment after Material
              material=Material(diffuseColor=(1,0,0))))]),
        PositionInterpolator(DEF='NodePosition',key=[0,1],keyValue=[(0,0,0),(0,5,0)]),
        Script(DEF='MoveBall',
          field=[
          field(name='translation',accessType='inputOutput',type='SFVec3f',value=(50,50,0)),
          field(name='old',accessType='inputOutput',type='SFVec3f',value=(0,0,0)),
          field(name='set_cycle',accessType='inputOnly',type='SFTime'),
          field(name='keyValue',accessType='outputOnly',type='MFVec3f')]),
        TimeSensor(DEF='nodeClock',cycleInterval=3,loop=True),
        ROUTE(fromNode='nodeClock',fromField='cycleTime',toNode='MoveBall',toField='set_cycle'),
        ROUTE(fromNode='nodeClock',fromField='fraction_changed',toNode='NodePosition',toField='set_fraction'),
        ROUTE(fromNode='MoveBall',fromField='keyValue',toNode='NodePosition',toField='keyValue'),
        ROUTE(fromNode='NodePosition',fromField='value_changed',toNode='transform',toField='set_translation')])),
    ProtoDeclare(name='cylinder',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='positionA',accessType='inputOnly',type='SFVec3f'),
        field(name='positionB',accessType='inputOnly',type='SFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        Shape(
          geometry=Extrusion(DEF='extrusion',creaseAngle=0.785,crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)],spine=[(0,-50,0),(0,0,0),(0,50,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0)))),
        Script(DEF='MoveCylinder',
          field=[
          field(name='spine',accessType='inputOutput',type='MFVec3f',value=[(0,-50,0),(0,0,0),(0,50,0)]),
          field(name='set_endA',accessType='inputOnly',type='SFVec3f'),
          field(name='set_endB',accessType='inputOnly',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='set_endA',protoField='positionA'),
            connect(nodeField='set_endB',protoField='positionB')])),
        ROUTE(fromNode='MoveCylinder',fromField='spine',toNode='extrusion',toField='set_spine')])),
    Transform(scale=(0.1,0.1,0.1),
      children=[
      ProtoInstance(name='node',DEF='nodeA',
        fieldValue=[
        fieldValue(name='position',value=(-50,-50,-50))]),
      ProtoInstance(name='node',DEF='nodeB',
        fieldValue=[
        fieldValue(name='position',value=(50,50,50))]),
      ProtoInstance(name='cylinder',DEF='linkA',
        fieldValue=[
        fieldValue(name='positionA',value=(0,0,0)),
        fieldValue(name='positionB',value=(50,50,50))])]),
    ROUTE(fromNode='nodeA',fromField='position',toNode='linkA',toField='positionA'),
    ROUTE(fromNode='nodeB',fromField='position',toNode='linkA',toField='positionB')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for fors2.py")

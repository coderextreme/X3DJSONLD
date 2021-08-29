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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Smoke',name='title'),
    meta(content='Animated smoke',name='description'),
    meta(content='Michael Martin',name='creator'),
    meta(content='10 September 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='smoke',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/TankManeuver/Smoke.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    TimeSensor(DEF='smokeClock',cycleInterval=3,loop=True),
    Transform(translation=(.1,0,.1),
      children=[
      PositionInterpolator(DEF='smokePos',key=[0,.99],keyValue=[(0,0,0),(0,2,0)]),
      PositionInterpolator(DEF='smokeScale',key=[0,.99],keyValue=[(1,1,1),(2,2,2)]),
      ScalarInterpolator(DEF='smokeTrans',key=[0,.99],keyValue=[0,1]),
      Transform(DEF='SmokeBall',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='SmokeMat',diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.5))]),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokePos'),
      ROUTE(fromField='value_changed',fromNode='smokePos',toField='set_translation',toNode='SmokeBall'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeTrans'),
      ROUTE(fromField='value_changed',fromNode='smokeTrans',toField='set_transparency',toNode='SmokeMat'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeScale'),
      ROUTE(fromField='value_changed',fromNode='smokeScale',toField='set_scale',toNode='SmokeBall')]),
    Transform(translation=(-.1,0,.1),
      children=[
      PositionInterpolator(DEF='smokePos2',key=[0,.5,.5,.99],keyValue=[(0,1,0),(0,2,0),(0,0,0),(0,1,0)]),
      PositionInterpolator(DEF='smokeScale2',key=[0,.5,.5,.99],keyValue=[(1.5,1.5,1.5),(2,2,2),(1,1,1),(1.5,1.5,1.5)]),
      ScalarInterpolator(DEF='smokeTrans2',key=[0,.5,.5,.99],keyValue=[.5,1.0,0,.5]),
      Transform(DEF='SmokeBall2',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='SmokeMat2',diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.5))]),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokePos2'),
      ROUTE(fromField='value_changed',fromNode='smokePos2',toField='set_translation',toNode='SmokeBall2'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeTrans2'),
      ROUTE(fromField='value_changed',fromNode='smokeTrans2',toField='set_transparency',toNode='SmokeMat2'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeScale2'),
      ROUTE(fromField='value_changed',fromNode='smokeScale2',toField='set_scale',toNode='SmokeBall2')]),
    Transform(translation=(-.1,0,-.1),
      children=[
      PositionInterpolator(DEF='smokePos3',key=[0,.25,.25,.99],keyValue=[(0,1.5,0),(0,2,0),(0,0,0),(0,1.5,0)]),
      PositionInterpolator(DEF='smokeScale3',key=[0,.25,.25,.99],keyValue=[(1.75,1.75,1.75),(2,2,2),(1,1,1),(1.75,1.75,1.75)]),
      ScalarInterpolator(DEF='smokeTrans3',key=[0,.25,.25,.99],keyValue=[.75,1.0,0,.75]),
      Transform(DEF='SmokeBall3',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='SmokeMat3',diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.5))]),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokePos3'),
      ROUTE(fromField='value_changed',fromNode='smokePos3',toField='set_translation',toNode='SmokeBall3'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeTrans3'),
      ROUTE(fromField='value_changed',fromNode='smokeTrans3',toField='set_transparency',toNode='SmokeMat3'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeScale3'),
      ROUTE(fromField='value_changed',fromNode='smokeScale3',toField='set_scale',toNode='SmokeBall3')]),
    Transform(translation=(.1,0,-.1),
      children=[
      PositionInterpolator(DEF='smokePos4',key=[0,.75,.75,.99],keyValue=[(0,.5,0),(0,2,0),(0,0,0),(0,.5,0)]),
      PositionInterpolator(DEF='smokeScale4',key=[0,.75,.75,.99],keyValue=[(1.25,1.25,1.25),(2,2,2),(1,1,1),(1.25,1.25,1.25)]),
      ScalarInterpolator(DEF='smokeTrans4',key=[0,.75,.75,.99],keyValue=[.25,1.0,0,.25]),
      Transform(DEF='SmokeBall4',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='SmokeMat4',diffuseColor=(0,0,0))),
          geometry=Sphere(radius=.5))]),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokePos4'),
      ROUTE(fromField='value_changed',fromNode='smokePos4',toField='set_translation',toNode='SmokeBall4'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeTrans4'),
      ROUTE(fromField='value_changed',fromNode='smokeTrans4',toField='set_transparency',toNode='SmokeMat4'),
      ROUTE(fromField='fraction_changed',fromNode='smokeClock',toField='set_fraction',toNode='smokeScale4'),
      ROUTE(fromField='value_changed',fromNode='smokeScale4',toField='set_scale',toNode='SmokeBall4')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")

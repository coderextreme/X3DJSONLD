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
    meta(content='Furuno.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Furuno.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    TouchSensor(DEF='ButtonTouch',description='touch to activate'),
    Transform(DEF='antenaSet',
      children=[
      Shape(DEF='antenna',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(-0.8,3.85),(-0.9,3.95),(-0.9,4.5),(-0.6,4.9),(0.5,5.3),(1.05,5.28),(1.3,5.1),(1.45,4.9),(1.51,4.6),(1.45,4.3),(1.32,4.1),(1.1,3.9),(0.8,3.85),(-0.7,3.85)],solid=False,spine=[(0,0,8),(0,0,-8)]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1)))),
      Shape(DEF='base1',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(-0.75,3.7),(-0.75,3.85),(0.75,3.85),(0.75,3.7),(-0.75,3.7)],solid=False,spine=[(0,0,1.25),(0,0,-1.25)]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1)))),
      Shape(DEF='base2',
        geometry=Extrusion(crossSection=[(-0.75,3.3),(-0.75,3.7),(0.75,3.7),(0.75,3.3),(-0.75,3.3)],solid=False,spine=[(0,0,0.75),(0,0,-0.75)]),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))))]),
    Shape(
      appearance=Appearance(DEF='mainBase',
        material=Material(diffuseColor=(1,1,1))),
      geometry=IndexedFaceSet(DEF='mainBaseIFS',convex=False,coordIndex=[4,1,2,3,-1,4,3,17,15,-1,2,0,3,-1,3,0,17,-1,17,0,18,-1,0,2,7,-1,7,8,0,-1,0,8,18,-1,2,1,10,7,-1,17,18,16,15,-1,8,7,10,-1,10,9,8,-1,18,8,9,16,-1,5,6,1,4,-1,4,15,13,5,-1,10,1,6,11,-1,9,10,11,12,-1,12,14,16,9,-1,5,13,14,12,11,6,-1,13,15,16,14,-1],solid=False,
        coord=Coordinate(point=[(0,3.5,0),(2.7,1.5,1.5),(2.4,2.3,1.3),(0,3,1.7),(0,1.5,2),(0,0.7,1.6),(1.9,0.7,1.3),(2.4,2.3,-1.3),(0,3,-1.7),(0,1.5,-2),(2.7,1.5,-1.5),(1.9,0.7,-1.3),(0,0.7,-1.6),(-1.9,0.7,1.3),(-1.9,0.7,-1.3),(-2.7,1.5,1.5),(-2.7,1.5,-1.5),(-2.4,2.3,1.3),(-2.4,2.3,-1.3)]))),
    Shape(DEF='base3',
      geometry=Extrusion(crossSection=[(-1.2,0.3),(-1.2,0.7),(1.2,0.7),(1.2,0.3),(-1.2,0.3)],solid=False,spine=[(0,0,1.2),(0,0,-1.2)]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1)))),
    Shape(DEF='base4',
      geometry=Extrusion(crossSection=[(-1.7,0.0),(-1.7,0.3),(1.7,0.3),(1.7,0.0),(-1.7,0)],solid=False,spine=[(0,0,1.7),(0,0,-1.7)]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1)))),
    OrientationInterpolator(DEF='antenaSpin',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,4.71),(0,1,0,6.28)]),
    TimeSensor(DEF='antenaCycle',cycleInterval=1.9,loop=True),
    ROUTE(fromField='touchTime',fromNode='ButtonTouch',toField='startTime',toNode='antenaCycle'),
    ROUTE(fromField='fraction_changed',fromNode='antenaCycle',toField='set_fraction',toNode='antenaSpin'),
    ROUTE(fromField='value_changed',fromNode='antenaSpin',toField='rotation',toNode='antenaSet')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Furuno.py")

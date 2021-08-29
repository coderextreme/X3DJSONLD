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
    meta(content='Ladder.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Ladder.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='base1',
      geometry=Extrusion(ccw=False,convex=False,crossSection=[(4.53,1.9),(4.6,1.9),(4.85,2.49),(4.85,2.6),(4.827,2.6)],solid=False,spine=[(0,0,0.5),(0,0,0.498)]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1)))),
    Shape(DEF='base2',
      geometry=Extrusion(ccw=False,convex=False,crossSection=[(4.53,1.9),(4.6,1.9),(4.85,2.49),(4.85,2.6),(4.827,2.6)],solid=False,spine=[(0,0,0.275),(0,0,0.273)]),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1)))),
    Shape(DEF='stair1',
      geometry=Extrusion(ccw=False,convex=False,crossSection=[(4.563,1.9778),(4.633,1.9778),(4.633,1.9678),(4.563,1.9678),(4.563,1.9778)],solid=False,spine=[(0,0,0.498),(0,0,0.275)]),
      appearance=Appearance(
        material=Material(diffuseColor=(0.82,0.78,0.74)))),
    Transform(translation=(0.033,0.0778,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.066,0.1556,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.099,0.2334,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.132,0.3112,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.165,0.389,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.198,0.4668,0),
      children=[
      Shape(USE='stair1')]),
    Transform(translation=(0.231,0.5446,0),
      children=[
      Shape(USE='stair1')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Ladder.py")

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
    meta(content='Engine.x3d',name='title'),
    meta(content='Engine component',name='description'),
    meta(content='1 September 2004',name='created'),
    meta(content='18 October 2004',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Engine.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='Engine',
      children=[
      Shape(
        geometry=Extrusion(crossSection=[(2.00,0.00),(1.92,-0.38),(1.71,-0.71),(1.38,-0.92),(1.00,-1.00),(0.00,-1.00),(-1,-1),(-1.38,-0.92),(-1.71,-0.71),(-1.92,-0.38),(-2.00,-0.00),(-1.92,0.38),(-1.71,0.71),(-1.38,0.92),(-1.00,1.00),(0.00,1.00),(1.00,1.00),(1.38,0.92),(1.71,0.71),(1.92,0.38),(2.00,0.00)],scale=[(0.6,0.6),(0.6,0.6),(0.4,0.4),(0.2,0.2),(0.1,0.1)],spine=[(0,0,8),(0,0,-2),(0,0,-4),(0,0,-6),(0,0,-8)]),
        appearance=Appearance(
          material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116)))),
      Shape(
        geometry=Extrusion(crossSection=[(2.00,0.00),(1.92,-0.38),(1.71,-0.71),(1.38,-0.92),(1.00,-1.00),(0.00,-1.00),(-1,-1),(-1.38,-0.92),(-1.71,-0.71),(-1.92,-0.38),(-2.00,-0.00),(-1.92,0.38),(-1.71,0.71),(-1.38,0.92),(-1.00,1.00),(0.00,1.00),(1.00,1.00),(1.38,0.92),(1.71,0.71),(1.92,0.38),(2.00,0.00)],scale=[(0.5,0.5),(0.5,0.5)],solid=False,spine=[(0,0,8.1),(0,0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Engine.py")

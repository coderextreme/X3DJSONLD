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
    meta(content='TEdge.x3d',name='title'),
    meta(content='Sketch of connecting edge for the TopFront section of the hovercraft',name='description'),
    meta(content='1 September 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/TEdge.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      geometry=Extrusion(crossSection=[(0,0),(-0.507,0),(0,0.507),(0,0)],scale=[(1,1),(0.6,0.6),(0.001,0.001)],spine=[(0,0,0),(0,1,0),(0,2.5,0)]),
      appearance=Appearance(
        material=Material(ambientIntensity=0.25,diffuseColor=(0.315152,0.07457,0.0),shininess=0.036364,specularColor=(0.508861,0.684007,0.326263))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TEdge.py")

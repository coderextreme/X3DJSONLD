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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport24-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[8,8,6,10,9,7,4,3,7,10,8,7,6,10,8,6,8,8,10,8,7,7,9,11,10,12,11,10,5,3,8,11,12,11,8,11,10,9,8,8,9,8,7,7,0,11,16,15,15,10,4,3,7,10,14,14,15,14,14,13,13,12,12,12,11,10,2,16,19,17,16,11,7,5,8,13,16,16,18,15,16,15,12,14,13,12,11,11,18,19,17,18,17,11,7,11,11,14,17,19,18,18,18,16,15,14,14,13,13,13,20,18,19,18,15,7,11,13,10,11,18,19,19,18,19,15,15,13,13,14,14,15,18,16,17,16,12,14,12,14,13,13,13,13,14,12,13,11,12,12,11,10,12,12,15,17,15,13,14,14,14,15,14,14,12,14,14,13,12,12,12,10,10,11,12,12,16,16,16,15,14,16,15,16,17,15,14,14,13,13,12,13,13,11,13,13,10,10,18,17,16,17,17,18,16,16,17,17,17,18,15,16,13,13,10,10,9,10,8,8,18,17,18,19,19,21,21,20,21,22,22,20,20,18,15,11,11,11,10,9,10,10,19,19,18,18,18,22,21,23,20,18,18,18,18,18,19,16,15,14,14,14,14,14,20,19,20,19,20,23,22,21,22,20,18,18,20,20,21,17,16,15,15,15,16,16,19,18,20,21,19,20,22,21,19,20,20,21,20,20,19,16,16,17,17,16,16,16,20,19,19,19,20,21,20,17,17,18,16,18,18,18,18,17,16,16,16,15,13,13,20,20,20,19,18,19,19,19,18,19,19,18,19,19,18,17,14,13,15,13,13,13,21,20,20,20,19,20,19,19,19,20,20,19,18,18,15,14,14,15,14,14,13,13,21,21,21,20,19,19,20,19,19,19,19,19,18,17,16,17,16,16,15,13,15,15,21,20,21,21,20,18,17,18,19,17,19,18,18,17,16,18,19,18,18,17,15,15,21,22,20,20,19,20,18,19,20,18,18,18,17,17,18,20,20,19,18,18,15,15,21,21,22,20,20,18,17,17,17,17,18,18,17,17,18,20,21,20,20,18,17,17,22,21,20,20,20,18,17,16,18,17,18,18,17,20,18,19,20,18,19,19,17,17,20,19,19,19,18,18,17,16,15,18,18,18,18,18,19,18,18,18,15,13,12,11,21,19,19,18,19,17,17,16,15,18,18,18,18,18,20,18,18,17,15,12,11,10],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")

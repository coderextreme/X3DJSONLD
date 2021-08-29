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
        texture=ImageTexture(url=['../../images/5/newport26-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,24,24,24,28,22,21,22,21,21,23,23,23,23,20,18,20,17,18,19,17,17,19,23,25,26,23,23,23,22,24,25,23,23,24,24,21,18,18,18,15,15,18,18,21,25,27,25,24,24,23,22,23,24,26,25,23,21,23,22,15,16,17,22,21,20,21,25,28,24,24,23,22,24,23,21,23,25,22,22,23,22,22,21,19,21,18,18,24,24,25,25,24,21,23,22,22,19,21,23,21,20,19,21,21,22,22,20,20,20,25,25,24,22,20,18,19,21,21,21,24,22,21,19,20,20,21,20,21,20,19,19,20,21,21,22,21,20,19,18,20,24,22,21,23,20,18,20,20,20,21,20,19,19,17,19,20,21,21,23,18,18,22,24,23,23,22,21,20,19,19,21,21,21,20,20,16,18,20,20,21,17,17,22,25,22,23,24,23,23,21,17,13,11,13,17,20,20,17,17,18,19,17,17,20,24,21,21,23,24,22,22,18,12,11,13,17,19,17,17,13,17,18,17,17,18,18,18,19,20,21,22,20,18,19,16,16,19,20,18,14,13,14,15,15,16,15,15,16,17,19,19,20,20,19,20,18,18,19,18,18,16,14,14,9,12,13,12,13,15,17,16,18,18,19,18,18,18,18,18,19,20,17,16,16,16,9,8,8,11,12,15,16,18,18,18,18,17,17,17,18,18,18,18,16,14,16,16,6,6,7,10,11,14,17,22,20,18,17,17,17,17,17,17,18,17,16,12,11,11,7,5,4,7,10,12,17,23,20,17,16,17,17,16,16,16,17,17,15,10,11,10,6,4,4,7,9,11,16,22,19,16,16,16,16,16,15,15,16,17,15,8,10,9,4,3,5,7,8,10,15,18,17,15,16,15,15,15,15,14,15,16,11,7,11,11,3,3,3,4,7,9,13,16,16,14,13,15,15,15,14,13,12,10,6,5,8,9,4,3,2,2,6,9,11,14,15,15,11,10,13,15,13,13,12,8,13,12,3,3,3,2,2,2,3,7,8,10,9,7,8,6,9,13,11,12,11,9,15,16,4,3,2,3,3,3,2,4,5,5,4,3,4,5,5,9,9,10,8,11,13,12,3,3,8,7,4,4,2,2,2,2,2,3,2,5,3,4,3,5,6,6,8,7,5,6,8,8,5,4,3,2,2,2,2,3,2,5,3,3,3,4,6,5,6,6,6,7],
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

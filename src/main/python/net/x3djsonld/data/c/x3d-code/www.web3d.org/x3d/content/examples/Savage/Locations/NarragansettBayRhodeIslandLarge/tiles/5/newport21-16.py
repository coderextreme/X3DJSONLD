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
        texture=ImageTexture(url=['../../images/5/newport21-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,15,19,22,23,17,15,13,14,12,15,11,13,11,14,15,17,18,17,16,17,17,15,17,18,21,18,19,16,14,14,14,13,13,15,16,15,16,17,20,18,17,13,13,17,14,19,18,18,19,15,18,16,15,14,14,15,16,15,15,14,12,18,14,10,9,14,14,13,18,24,22,22,17,15,17,14,17,16,17,15,13,14,13,11,8,11,10,11,14,16,17,19,24,26,23,19,17,17,15,15,11,13,12,12,10,7,8,4,4,10,14,18,17,19,25,32,28,25,15,15,15,14,12,14,11,9,8,7,3,3,2,15,18,15,18,21,22,24,32,31,26,16,14,13,14,14,9,9,4,3,6,5,6,14,16,20,23,25,25,25,25,24,24,20,16,17,14,13,10,6,7,9,8,7,8,17,20,22,24,25,25,24,25,24,20,20,17,15,15,10,8,8,9,8,11,10,9,21,23,27,27,28,27,22,22,20,19,17,15,14,11,9,9,12,11,11,8,11,11,20,25,30,32,33,30,26,20,16,16,14,15,12,10,11,12,11,10,10,10,8,9,23,24,25,31,33,35,28,21,20,14,14,11,9,8,9,11,11,11,12,13,11,10,27,26,23,28,32,33,32,24,17,15,13,11,10,6,9,11,12,14,15,12,14,13,27,24,23,27,28,30,32,31,23,16,15,9,7,9,11,12,12,16,14,12,12,12,28,26,25,25,30,29,29,27,24,18,12,12,10,11,11,12,16,14,16,14,13,13,24,27,29,29,27,28,29,29,25,20,13,13,13,15,15,13,15,13,17,17,12,12,24,30,32,33,30,25,25,22,22,19,15,14,14,16,15,13,13,14,14,13,13,14,26,29,32,32,31,32,25,20,18,19,17,15,14,15,14,15,15,14,13,13,13,13,23,30,32,33,31,30,27,21,20,19,19,19,16,12,13,13,14,14,13,15,16,16,25,26,30,30,33,34,30,27,24,22,21,19,17,13,13,13,13,13,15,18,17,16,23,27,28,27,32,34,33,31,27,22,19,16,16,15,15,14,14,15,16,14,15,15,21,24,28,30,32,33,34,33,29,23,18,14,15,15,17,17,14,15,18,19,15,14,19,21,27,30,34,33,32,32,30,23,18,15,14,14,16,16,17,17,19,19,14,14,18,21,27,30,34,33,31,32,30,24,18,15,13,14,16,16,18,18,18,18,15,15],
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

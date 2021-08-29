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
        texture=ImageTexture(url=['../../images/5/newport16-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,21,21,20,20,19,18,16,14,11,8,5,2,2,1,1,1,1,1,0,3,3,20,21,22,22,20,18,16,14,12,10,6,4,3,2,1,1,1,1,1,3,7,8,21,21,21,21,19,17,14,12,10,8,6,5,4,3,1,1,1,1,4,9,12,12,20,20,20,20,20,15,11,10,9,7,6,6,5,4,2,1,2,5,9,13,12,12,19,20,21,21,18,13,9,7,8,7,6,7,6,3,2,2,5,11,14,15,11,10,20,21,21,20,16,12,8,8,7,7,6,5,3,3,5,8,13,15,15,12,9,8,23,22,21,17,13,10,8,8,7,7,6,4,5,7,9,13,16,16,13,9,5,5,24,23,19,15,11,9,9,9,9,8,6,6,8,11,15,17,15,12,8,7,4,4,25,22,18,13,10,10,11,10,10,7,8,9,11,15,18,17,14,11,8,5,3,2,25,21,16,12,11,12,12,11,8,9,10,12,15,18,19,15,11,9,7,4,2,2,25,20,15,12,13,13,13,11,10,10,13,15,19,21,17,12,10,8,8,8,6,5,22,19,15,13,15,15,15,13,11,12,15,19,21,20,15,13,11,11,12,10,6,5,22,18,14,15,15,16,14,12,13,16,19,21,21,19,15,13,13,14,13,9,4,4,21,17,15,17,17,16,14,14,16,18,22,22,21,19,16,14,15,15,13,8,4,3,18,17,17,18,17,17,14,15,17,20,24,23,22,19,17,17,16,15,12,7,3,3,18,19,19,19,19,17,16,16,18,21,22,23,23,20,21,19,17,13,8,5,3,2,20,20,21,20,20,19,18,17,19,21,22,23,24,24,22,18,14,11,8,4,1,1,21,22,22,22,21,21,20,18,19,21,23,24,25,24,22,18,12,8,7,4,1,1,22,23,23,23,23,23,22,20,19,21,23,25,25,24,21,17,12,9,7,5,1,0,23,25,27,25,24,23,23,21,20,22,25,27,26,24,20,15,11,8,6,3,0,0,26,28,27,26,26,27,25,22,21,23,27,29,26,23,19,13,9,6,4,2,0,0,29,28,26,26,27,26,25,23,23,26,30,29,26,22,16,11,7,6,3,0,0,0,30,27,25,27,27,27,25,24,26,27,31,30,25,19,13,9,7,5,4,1,2,3,30,26,25,27,27,27,24,24,26,28,32,30,25,18,13,9,6,5,4,1,3,3],
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

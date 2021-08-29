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
        texture=ImageTexture(url=['../../images/5/newport15-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[3,5,10,17,24,30,35,35,31,20,8,0,0,0,0,0,0,0,1,8,11,12,1,5,11,17,24,30,34,34,27,17,7,0,0,0,0,0,0,0,4,10,15,15,2,7,12,18,23,29,32,31,23,14,5,0,0,0,0,0,0,0,1,8,14,15,4,9,14,20,24,26,28,27,19,10,3,0,0,0,0,0,0,0,1,9,15,16,7,10,16,20,24,28,29,22,13,6,0,0,0,0,0,0,0,0,1,8,11,12,10,12,18,25,27,26,23,16,10,5,1,0,0,0,0,0,0,0,0,5,8,8,11,15,21,27,27,27,22,15,8,3,0,0,0,0,0,0,0,0,0,2,5,6,14,19,23,26,27,26,22,16,8,3,2,0,0,0,0,0,0,0,0,0,2,2,16,19,24,25,26,27,22,15,9,5,0,0,0,0,0,0,0,0,0,0,1,1,15,21,26,25,27,28,22,15,9,6,5,4,1,1,1,1,3,4,3,2,0,0,13,21,24,27,29,29,24,17,10,6,6,5,3,3,9,9,8,7,4,2,0,0,14,22,27,30,29,27,24,19,11,7,7,7,7,6,10,15,14,10,6,3,0,0,15,22,28,28,27,26,23,18,14,9,8,5,5,10,13,17,16,12,7,4,0,0,13,21,28,29,30,25,21,17,12,9,8,8,8,12,16,17,18,15,10,5,0,0,11,18,25,26,27,26,23,17,13,9,8,8,8,10,13,18,20,16,12,6,0,0,12,19,26,28,29,28,22,17,12,8,6,7,9,13,17,19,20,19,14,7,0,0,11,19,25,28,27,27,25,20,16,11,5,8,13,16,21,23,22,21,15,9,0,0,10,19,26,29,29,29,28,23,18,13,9,10,16,22,27,28,27,24,16,11,2,0,10,16,24,29,28,30,28,24,20,17,17,17,18,23,27,33,32,26,18,12,0,0,11,17,25,30,30,29,29,25,22,21,21,20,23,28,33,35,33,27,18,7,0,0,9,15,23,26,28,29,30,28,26,27,27,24,23,27,31,34,33,28,19,0,0,0,9,17,21,27,30,30,32,31,31,30,28,26,26,26,28,32,33,27,17,2,0,0,10,17,24,29,33,33,33,32,30,30,30,28,28,26,29,31,30,23,15,4,0,0,9,17,24,30,35,34,33,33,32,30,30,28,28,26,29,30,29,23,14,4,0,0],
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

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
        texture=ImageTexture(url=['../../images/5/newport26-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,24,21,17,13,8,7,9,9,10,9,3,1,1,1,1,1,1,1,1,1,1,28,25,21,17,13,8,9,11,11,11,14,7,2,1,1,1,1,1,1,1,1,1,28,25,21,17,12,11,13,14,15,11,16,14,8,2,1,1,1,1,1,1,1,1,28,25,21,16,14,14,15,16,18,19,20,16,12,7,1,1,1,1,1,1,1,1,27,23,21,16,15,16,17,18,19,22,23,18,15,10,4,1,1,1,1,1,1,1,28,24,20,18,17,19,20,20,22,24,24,19,16,13,8,1,1,1,1,1,1,1,28,26,24,20,18,21,22,23,24,25,24,19,16,11,5,2,1,1,1,1,1,1,30,31,27,23,22,24,25,25,26,26,23,19,16,8,4,7,3,1,1,1,1,1,33,32,27,24,25,26,27,28,27,27,24,20,16,9,7,11,7,3,1,1,1,1,34,32,28,26,27,27,28,29,28,27,24,19,15,11,10,12,12,8,2,1,1,1,36,33,28,27,29,29,30,30,28,27,23,19,15,13,13,13,12,11,7,1,1,1,36,32,29,29,30,32,32,31,29,27,23,20,15,14,15,15,14,13,10,5,3,2,36,29,29,31,33,35,33,31,30,27,21,18,16,15,17,16,15,14,12,7,4,3,36,32,31,32,36,35,35,32,29,25,21,19,18,17,18,17,16,15,12,10,5,4,36,33,34,34,36,37,35,31,28,26,22,19,19,18,18,18,17,17,13,10,8,7,36,33,33,36,38,39,35,30,28,27,22,20,19,19,19,19,18,17,13,12,8,8,35,34,34,37,41,40,35,31,28,25,22,20,20,21,21,20,18,17,14,11,8,7,34,35,35,38,42,41,34,30,27,24,22,21,20,20,19,19,19,17,15,12,8,7,38,35,37,42,42,40,33,28,25,24,23,21,21,20,20,20,20,19,17,15,10,9,41,39,39,43,42,38,32,26,24,22,21,20,21,20,21,21,20,19,18,16,12,12,42,43,43,43,43,37,30,25,24,22,21,21,22,22,22,21,20,19,18,15,11,11,44,45,45,45,43,35,29,25,23,23,23,23,24,23,22,21,20,19,18,15,12,11,46,47,46,44,39,33,28,26,24,23,24,25,25,23,22,22,21,21,19,15,12,11,46,47,46,43,39,33,28,26,25,24,25,25,25,23,22,22,21,21,19,15,11,11],
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

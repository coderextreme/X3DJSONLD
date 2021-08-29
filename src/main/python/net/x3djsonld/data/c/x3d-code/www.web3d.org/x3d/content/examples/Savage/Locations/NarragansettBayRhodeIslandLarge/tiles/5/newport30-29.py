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
        texture=ImageTexture(url=['../../images/5/newport30-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,39,37,34,29,26,25,25,25,28,29,27,24,20,18,16,14,10,6,6,5,5,42,42,38,34,29,26,26,25,25,27,28,27,25,21,18,16,13,8,7,6,5,5,45,46,43,38,33,29,26,25,25,27,27,27,25,21,17,14,11,8,7,6,6,6,47,48,47,41,34,28,25,25,25,26,26,26,24,20,17,14,10,8,7,6,5,5,47,49,48,40,33,27,25,25,24,25,24,23,22,20,17,13,9,7,6,6,4,4,47,49,48,40,34,29,25,23,23,25,24,24,23,20,17,10,8,7,5,5,5,6,47,48,47,38,32,27,25,22,23,24,25,25,24,21,15,8,7,5,5,6,7,7,45,46,42,35,29,23,23,21,21,23,25,26,25,20,13,9,11,9,7,8,9,8,40,40,34,28,22,19,19,20,20,21,22,24,24,19,13,12,12,10,9,9,9,9,32,29,24,20,19,17,17,17,17,18,19,20,19,15,11,13,13,11,10,9,9,9,25,23,21,19,17,16,16,16,16,16,17,18,17,13,10,12,13,11,8,8,8,8,22,21,19,17,16,15,14,15,15,16,16,16,13,10,11,13,10,7,8,8,7,7,18,19,18,17,16,15,15,14,14,14,14,13,11,10,12,14,12,6,5,5,6,6,21,21,19,17,16,18,18,17,16,18,17,13,11,12,14,16,12,7,4,4,5,5,22,22,19,16,17,19,20,18,16,18,18,13,10,12,15,18,14,8,4,4,4,4,24,23,20,16,20,21,21,19,18,20,20,14,11,13,16,21,20,11,5,4,4,4,25,24,22,21,21,21,21,19,20,22,21,11,12,14,19,24,22,13,6,5,4,4,26,23,23,23,22,22,21,20,22,24,20,13,14,18,24,25,22,15,8,5,6,5,27,24,23,23,23,23,22,22,25,25,19,17,17,22,27,26,21,13,8,7,6,6,27,27,26,24,24,23,23,23,26,24,21,23,23,26,28,25,18,12,11,12,9,8,27,26,26,25,24,24,23,25,26,23,22,25,27,29,30,26,20,13,15,11,9,9,27,26,25,25,25,24,25,27,26,22,24,27,32,33,30,26,19,16,17,15,9,8,27,26,26,26,25,25,24,25,23,23,26,31,35,33,28,24,18,20,20,15,9,9,27,26,26,26,25,25,24,24,23,23,27,31,35,33,28,24,19,21,20,15,9,9],
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

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
        texture=ImageTexture(url=['../../images/5/newport12-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,20,20,24,24,26,28,31,35,39,38,38,34,33,33,28,19,15,13,9,11,12,18,18,20,20,21,22,23,25,30,35,38,41,40,39,37,35,28,20,17,14,11,11,21,20,20,17,19,19,22,23,29,36,41,46,47,42,40,42,40,33,25,21,17,16,21,20,21,22,23,22,24,26,29,34,42,47,47,45,45,48,50,46,40,36,27,26,28,25,22,21,19,19,22,30,35,41,47,48,47,50,48,48,52,51,46,44,37,36,35,34,28,24,22,23,27,34,42,49,49,50,49,54,57,53,56,56,50,48,42,40,36,38,30,22,19,22,28,35,42,51,54,58,58,58,57,53,54,56,55,48,42,42,29,31,26,18,16,20,26,34,43,51,55,61,61,61,56,56,51,52,48,46,44,43,23,23,21,17,17,18,24,33,41,49,52,54,54,54,54,54,49,48,46,42,41,40,17,18,20,18,12,12,21,30,38,44,48,47,47,46,43,41,39,38,37,35,32,32,16,16,17,16,13,14,18,26,33,39,40,40,38,36,34,30,27,25,29,29,24,23,14,14,15,12,10,13,16,23,31,33,34,36,35,31,28,27,25,21,20,18,14,13,12,11,12,12,11,12,16,21,26,27,31,32,31,27,24,22,24,24,17,13,12,12,12,12,11,12,11,13,16,21,28,29,30,31,29,26,21,14,13,17,15,13,14,14,10,10,9,10,11,11,13,19,22,26,26,27,26,21,19,15,11,13,16,16,13,12,9,9,10,10,12,12,12,13,19,24,24,22,20,18,15,13,12,15,18,21,20,19,12,12,12,11,11,15,16,13,15,18,19,18,19,16,14,11,14,16,21,25,27,27,12,11,12,13,15,13,14,15,14,15,18,17,18,21,20,17,18,20,20,24,26,26,16,18,17,14,13,10,12,11,12,10,12,15,14,17,19,22,25,23,27,26,26,25,17,19,16,15,13,11,10,11,13,12,12,15,16,19,19,23,24,28,32,28,28,28,18,20,19,17,14,12,13,13,13,16,18,15,15,14,18,25,30,34,36,38,37,37,12,16,22,22,22,20,18,20,22,20,22,20,20,17,19,25,34,39,47,49,47,48,17,17,20,22,22,22,21,21,21,21,21,23,23,23,25,34,44,45,47,52,54,54,17,16,19,22,22,22,21,21,20,20,20,23,24,24,27,36,46,46,47,52,55,54],
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

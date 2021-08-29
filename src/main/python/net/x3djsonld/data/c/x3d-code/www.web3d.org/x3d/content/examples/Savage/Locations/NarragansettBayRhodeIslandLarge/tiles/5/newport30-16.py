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
        texture=ImageTexture(url=['../../images/5/newport30-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,26,26,26,26,25,25,25,25,24,6,12,13,12,12,10,9,11,17,18,19,20,23,24,24,25,25,25,24,24,17,12,8,8,15,18,19,19,18,20,21,22,24,24,22,22,22,23,23,22,23,22,15,12,12,13,16,20,21,22,23,23,22,23,23,23,21,21,21,21,21,20,20,20,16,14,15,16,18,21,22,22,23,23,23,23,24,24,21,22,23,25,27,25,23,24,19,18,21,21,17,21,18,19,24,24,23,24,24,24,22,21,24,31,35,34,28,27,25,24,24,23,23,20,13,20,24,24,24,21,18,19,22,21,27,36,39,37,34,32,28,26,25,24,23,21,15,19,23,25,21,14,8,8,26,26,31,36,39,40,40,39,33,28,27,26,24,22,19,22,23,16,11,10,10,9,29,30,34,39,45,44,46,47,39,31,28,27,25,24,22,21,19,17,15,14,11,11,32,33,38,44,47,48,50,48,42,35,31,29,28,25,22,20,17,17,16,13,10,9,35,36,39,43,48,51,54,53,44,39,37,33,32,27,24,21,18,18,17,13,7,8,38,42,43,45,49,52,55,52,45,41,39,34,28,26,24,21,20,21,21,17,11,11,46,45,48,52,51,50,51,49,47,44,40,33,30,26,24,23,23,23,21,16,11,10,47,49,51,52,50,47,45,44,45,41,37,32,27,26,25,24,24,24,22,15,10,10,47,49,51,50,47,45,44,41,38,35,30,27,24,25,25,24,24,23,19,10,10,10,47,51,50,49,47,46,44,39,31,27,26,21,16,24,21,24,23,20,9,10,12,12,48,49,49,48,46,46,44,35,27,25,23,24,24,14,16,20,20,12,10,11,14,15,46,48,47,45,43,43,40,32,27,25,21,20,24,16,15,12,10,10,11,13,18,18,44,46,46,43,38,37,32,27,26,26,25,25,24,23,15,10,10,12,14,18,20,20,41,43,44,40,33,28,26,25,25,25,24,22,17,10,10,11,15,16,18,20,22,22,37,39,38,31,27,25,23,20,22,22,17,13,12,13,15,13,19,16,21,23,25,25,30,31,28,26,24,23,20,16,15,14,13,12,13,20,19,15,21,19,20,23,27,29,24,26,27,26,21,19,17,16,13,13,13,14,24,23,17,19,24,19,13,19,32,34,23,25,27,26,20,17,17,17,13,13,13,17,25,23,17,20,24,19,13,19,33,35],
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

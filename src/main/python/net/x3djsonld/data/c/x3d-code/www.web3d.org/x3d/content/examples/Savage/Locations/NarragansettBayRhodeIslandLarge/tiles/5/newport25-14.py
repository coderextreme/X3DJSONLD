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
        texture=ImageTexture(url=['../../images/5/newport25-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[42,43,49,57,57,52,52,48,45,39,30,27,20,20,14,14,15,15,16,21,28,27,42,43,50,62,65,58,57,54,48,36,31,22,20,16,14,14,16,17,20,23,28,28,43,42,48,49,52,55,55,51,44,41,30,20,18,20,19,20,19,19,23,23,26,28,38,42,45,47,49,53,50,47,40,36,29,23,22,21,17,16,21,20,20,21,26,28,31,36,39,40,44,46,46,40,34,27,23,24,23,19,19,18,17,20,18,19,21,22,29,32,37,37,40,38,34,30,29,20,17,17,20,17,21,13,10,11,16,24,25,24,26,26,28,30,38,39,30,23,18,12,12,9,9,11,18,19,12,10,16,25,25,25,22,22,23,24,27,25,22,12,8,7,11,15,15,13,7,11,12,17,25,23,25,26,20,21,19,21,17,16,7,12,14,14,13,14,12,12,12,6,16,25,23,26,28,28,17,17,18,16,15,9,11,15,11,10,13,14,12,9,7,14,25,23,26,29,31,31,13,14,11,7,4,10,16,13,15,23,14,8,5,9,15,25,25,28,24,27,29,29,6,6,9,8,11,15,13,15,18,20,13,7,6,10,17,22,23,20,20,19,22,24,5,7,6,14,15,11,14,15,18,17,10,9,6,12,16,13,12,17,15,13,15,16,6,5,10,18,14,15,15,12,16,13,11,13,13,8,7,8,8,11,13,12,12,11,9,11,19,12,13,13,15,14,13,11,13,14,15,13,13,15,15,11,14,14,10,10,13,18,16,13,15,12,13,18,18,16,19,19,18,17,19,16,16,17,16,13,11,10,19,17,15,15,15,13,17,20,18,20,27,25,24,23,22,20,20,20,18,15,12,12,20,16,17,15,12,19,16,21,23,26,29,29,29,28,25,23,24,20,18,18,15,14,26,19,13,13,12,15,19,24,24,28,30,30,31,28,28,26,26,25,20,23,24,24,24,22,16,14,16,15,19,19,25,28,31,32,31,28,30,29,28,26,28,26,25,26,25,24,19,14,15,18,19,23,24,29,31,31,32,34,32,32,30,30,33,32,31,30,27,22,22,19,15,17,19,23,28,29,30,32,33,35,32,35,35,39,39,37,34,33,24,23,21,19,16,18,22,27,30,31,34,38,39,39,39,37,40,42,40,38,36,35,24,24,21,19,16,17,22,26,31,33,35,39,40,39,39,38,40,42,40,38,36,35],
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

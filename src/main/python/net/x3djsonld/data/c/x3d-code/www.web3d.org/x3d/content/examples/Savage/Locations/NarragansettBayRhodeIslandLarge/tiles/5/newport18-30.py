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
        texture=ImageTexture(url=['../../images/5/newport18-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,28,33,37,43,46,45,45,44,38,30,20,11,6,3,1,0,0,0,0,0,0,30,33,38,42,46,46,45,43,39,31,21,12,7,4,3,1,0,0,0,0,0,0,34,36,42,46,47,46,40,37,31,19,10,8,5,3,3,1,0,0,0,0,0,0,37,42,45,47,47,42,36,29,20,9,6,5,4,3,2,0,0,0,0,1,1,1,42,46,48,46,42,35,29,20,12,9,6,4,2,1,0,0,0,1,1,2,4,5,45,48,46,42,37,30,20,13,10,7,4,1,0,1,1,1,1,1,3,5,10,10,48,48,42,35,29,24,13,11,8,4,1,0,1,2,2,2,1,2,7,11,12,12,49,44,35,30,26,16,12,10,8,5,1,0,1,3,4,4,2,7,11,13,13,13,46,38,32,26,20,13,11,9,8,5,2,0,1,4,4,5,5,8,13,16,16,16,40,32,27,22,14,10,8,7,5,3,2,1,2,6,6,6,8,11,17,21,21,20,33,25,24,18,11,9,7,4,1,1,2,3,4,6,7,8,11,17,20,25,23,22,24,20,18,14,11,9,8,6,3,2,2,5,6,7,7,8,15,21,23,25,22,21,16,16,14,12,11,9,8,5,5,4,6,8,9,7,8,12,16,22,27,25,24,24,14,13,12,11,10,8,8,6,5,6,9,10,10,9,12,16,19,26,26,25,26,25,13,13,12,11,10,11,9,7,5,9,11,13,13,13,18,19,23,28,28,28,27,27,13,12,11,12,13,13,8,7,8,11,14,17,14,19,22,23,28,30,31,32,31,30,14,12,13,14,11,10,9,10,11,13,17,18,19,21,22,26,30,32,35,34,33,32,13,14,13,11,12,12,12,13,14,15,17,18,19,21,24,29,33,36,38,37,33,33,14,14,13,13,15,15,15,14,14,16,18,19,20,21,26,31,34,39,41,38,33,33,15,15,14,14,15,16,17,16,17,18,19,20,21,24,28,32,37,40,42,39,35,34,17,16,15,15,15,16,17,18,18,19,20,20,22,26,30,35,39,42,42,39,35,34,18,17,17,17,16,17,17,18,20,20,20,21,23,27,32,37,41,42,40,37,34,34,19,19,18,16,17,18,18,19,21,22,22,24,25,27,32,38,42,40,38,35,34,34,20,19,17,16,17,18,19,20,21,22,22,24,26,28,33,38,41,40,38,35,35,35],
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

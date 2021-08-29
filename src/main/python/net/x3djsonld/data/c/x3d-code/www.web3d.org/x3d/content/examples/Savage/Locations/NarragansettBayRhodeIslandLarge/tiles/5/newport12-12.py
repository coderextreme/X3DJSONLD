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
        texture=ImageTexture(url=['../../images/5/newport12-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,17,17,16,17,18,17,17,16,15,13,12,14,11,11,1,0,0,0,0,0,0,18,18,18,16,15,18,18,19,18,16,14,12,12,11,11,6,0,0,0,0,0,0,20,19,17,19,17,19,21,23,22,18,18,13,9,7,8,4,0,0,0,0,0,0,20,21,20,22,20,19,23,26,23,23,16,12,13,11,9,2,0,0,0,1,0,0,20,22,23,22,20,19,23,25,22,21,15,13,16,17,14,3,0,0,0,0,0,0,20,22,24,21,19,21,23,25,23,22,16,16,19,15,12,4,0,0,0,0,0,0,21,21,23,21,19,20,22,26,26,22,18,17,20,16,12,10,6,0,2,0,0,0,23,23,23,20,19,20,20,23,26,23,18,18,22,19,13,11,11,7,4,0,0,0,24,24,23,23,23,22,20,24,25,23,18,20,23,15,12,9,9,5,4,1,0,0,24,25,24,26,27,26,23,26,25,21,15,18,18,12,9,9,6,5,8,5,2,0,26,27,27,27,29,28,25,26,27,21,17,16,14,10,8,7,4,0,2,0,0,0,28,30,31,27,29,28,26,27,25,18,17,14,11,11,9,5,0,0,0,0,0,0,30,32,34,33,29,27,27,26,22,15,14,13,10,9,7,1,0,0,0,0,0,0,36,39,38,36,30,25,27,27,23,15,13,10,9,6,6,8,3,3,5,2,0,0,40,41,38,36,33,29,27,23,18,13,12,10,9,8,8,9,7,4,3,6,0,0,42,41,40,37,34,32,28,20,14,12,12,11,10,9,11,13,12,5,5,7,4,3,42,42,42,38,34,31,29,23,19,17,13,10,9,9,12,13,10,6,0,0,0,0,42,41,40,37,34,33,32,25,20,21,8,10,9,10,13,10,5,8,2,0,0,0,39,37,37,36,36,34,30,25,20,15,8,8,9,9,10,9,5,6,0,0,0,0,37,37,39,38,36,32,28,24,21,15,8,8,10,13,12,11,3,0,0,6,4,4,39,38,39,38,36,29,27,24,21,16,15,18,13,13,11,11,1,2,6,8,4,4,40,38,37,37,37,30,28,22,20,21,19,21,20,17,13,9,3,6,7,7,6,6,38,38,37,33,33,30,29,27,23,21,20,24,19,16,14,9,7,7,8,8,8,7,38,37,36,33,33,30,29,27,23,21,20,24,19,16,14,9,7,8,8,8,7,7],
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

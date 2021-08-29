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
        texture=ImageTexture(url=['../../images/5/newport12-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[12,13,10,8,13,14,13,13,17,19,18,19,20,15,13,12,13,13,16,17,17,17,11,12,10,11,14,11,10,9,11,15,17,16,18,18,15,14,13,13,13,16,17,17,16,12,11,10,14,13,11,11,9,8,12,16,16,15,16,16,14,14,14,15,17,17,26,19,16,12,11,11,12,13,10,8,8,12,14,17,16,15,15,14,15,16,16,16,36,29,28,24,17,12,12,12,9,8,8,9,13,15,14,14,13,12,13,14,14,15,40,37,37,29,18,14,13,13,11,12,14,16,14,13,13,15,16,16,16,15,14,14,42,39,34,25,17,13,12,14,17,16,19,19,18,14,13,13,15,15,14,15,16,16,43,38,29,22,17,15,11,12,14,18,21,20,21,21,19,18,18,16,14,16,16,16,40,34,27,20,15,11,8,9,10,15,19,21,25,23,21,20,20,19,19,18,19,20,32,27,19,14,12,11,17,13,13,14,16,16,20,21,20,19,20,20,20,19,19,19,23,18,13,14,10,11,14,14,14,15,16,18,18,18,17,15,14,15,16,17,18,18,13,11,7,7,9,11,13,15,16,15,13,15,17,17,15,13,13,10,13,16,18,18,12,12,6,6,7,11,12,11,15,12,12,13,14,19,20,16,12,11,13,14,17,18,14,12,12,11,9,11,14,15,13,11,12,18,21,21,22,23,21,19,15,15,17,18,12,12,12,12,11,13,15,14,10,10,11,18,22,25,27,28,27,23,19,17,17,17,19,16,15,13,13,13,14,13,12,11,16,22,27,32,35,34,32,28,24,20,18,18,27,24,25,19,16,12,14,13,13,15,22,24,29,35,39,41,38,32,27,23,22,21,26,28,29,27,23,17,15,19,23,24,27,29,34,41,43,42,45,43,37,30,24,23,25,23,22,23,21,18,15,20,24,23,26,31,36,45,47,49,45,41,38,33,26,26,28,26,23,20,18,19,17,18,21,21,24,31,41,47,49,48,44,43,38,33,30,30,37,39,36,32,25,18,14,18,22,22,24,33,43,46,49,48,47,44,40,35,34,35,48,50,46,42,35,27,20,19,20,21,27,37,47,52,53,51,49,47,43,39,36,36,54,52,50,47,43,33,28,25,18,15,22,34,43,51,55,55,53,49,45,42,35,34,54,51,50,48,43,32,27,25,18,15,22,34,43,51,54,54,53,49,45,42,35,34],
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

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
        texture=ImageTexture(url=['../../images/5/newport12-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,11,11,11,11,11,11,11,11,16,13,16,14,15,17,16,25,34,29,26,27,27,11,12,12,12,11,12,12,12,17,18,13,12,12,13,16,22,33,41,40,39,37,38,14,15,14,17,19,23,23,23,22,23,20,16,15,15,16,27,38,44,46,48,46,45,16,17,13,19,25,30,32,31,34,31,26,23,19,17,19,30,40,44,48,52,52,52,14,13,12,18,24,32,36,41,40,44,35,26,22,17,19,25,38,44,48,50,51,52,13,14,14,20,27,38,42,45,48,48,43,32,30,20,19,23,31,37,43,45,48,48,15,15,13,20,30,42,45,51,55,53,51,43,45,34,24,23,28,31,37,42,45,46,16,16,15,20,32,42,50,56,58,57,56,52,50,41,34,30,33,34,37,41,46,47,16,17,16,19,30,40,51,56,60,60,59,59,53,50,40,40,40,37,43,42,51,52,16,16,17,17,27,38,47,54,59,60,61,60,55,52,47,46,46,42,43,40,51,52,15,17,14,15,22,31,40,49,53,53,56,56,55,57,54,53,52,51,48,45,47,47,16,15,15,16,17,24,34,42,45,45,50,49,54,62,64,62,58,60,59,60,51,48,20,19,18,17,16,20,30,36,33,38,42,44,56,63,67,67,63,65,67,66,54,51,23,26,23,18,16,18,23,27,25,33,37,43,56,62,67,66,63,64,69,64,46,44,27,31,28,24,22,23,19,18,23,31,35,46,53,59,62,62,62,65,68,63,42,38,29,31,33,32,31,29,20,19,21,26,32,44,53,56,57,60,62,65,65,59,44,42,29,31,38,39,34,28,22,20,19,23,30,42,50,53,53,59,60,63,62,55,47,45,30,33,38,37,34,28,24,19,20,21,31,42,46,48,50,57,60,61,58,53,45,44,27,32,34,33,33,30,24,19,21,23,31,41,41,44,50,56,60,63,60,54,50,51,22,29,32,33,32,26,20,22,26,25,30,35,36,41,47,54,59,62,61,57,56,55,18,27,34,38,30,21,19,24,33,27,25,28,33,39,46,53,57,60,60,58,57,56,20,28,34,38,25,22,21,28,35,26,19,23,31,36,45,54,56,59,59,58,56,55,20,27,33,29,20,21,24,31,34,22,18,20,27,34,42,53,56,58,56,57,53,52,20,26,33,28,20,20,24,31,34,21,18,20,27,34,41,52,55,57,56,57,52,51],
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

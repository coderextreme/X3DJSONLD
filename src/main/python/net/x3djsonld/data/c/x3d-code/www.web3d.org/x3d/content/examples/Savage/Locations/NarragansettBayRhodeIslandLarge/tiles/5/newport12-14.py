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
        texture=ImageTexture(url=['../../images/5/newport12-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,11,12,15,18,21,21,21,21,20,16,13,13,12,11,11,10,10,13,14,12,11,11,11,13,17,22,23,26,23,20,18,15,15,14,14,12,12,11,11,14,17,15,15,12,13,15,20,22,25,26,26,23,20,17,16,16,15,15,15,13,13,14,17,16,15,10,13,18,21,25,26,27,27,25,22,19,19,19,18,16,15,15,15,15,16,17,16,10,14,19,22,25,28,27,28,26,23,20,20,20,20,19,18,17,17,15,17,17,17,12,16,20,21,25,28,27,28,24,23,20,20,20,20,19,19,18,17,17,17,16,15,12,15,19,23,26,28,29,29,27,25,21,20,20,20,20,18,17,16,17,19,16,16,15,17,18,21,26,30,30,29,29,27,23,21,21,21,21,21,18,17,16,16,13,13,17,19,22,23,27,30,30,30,28,26,23,22,22,22,22,24,20,17,16,14,12,12,18,20,23,25,26,26,28,30,28,25,25,25,24,23,23,22,20,18,16,15,15,15,20,20,22,24,24,27,28,30,29,26,26,25,23,22,22,22,22,19,17,16,16,16,19,19,20,22,24,27,29,31,29,26,25,24,23,22,22,21,21,20,19,18,18,18,18,18,20,23,26,28,30,32,29,26,25,25,25,24,23,23,23,22,21,21,21,21,19,19,20,22,25,29,30,31,30,28,27,26,24,24,24,24,25,24,23,22,22,22,18,20,22,25,26,28,31,29,28,28,26,25,24,24,24,24,24,24,23,22,22,22,17,20,22,25,28,29,32,30,29,26,25,24,24,23,23,22,23,24,23,24,25,25,17,20,22,24,27,31,31,30,28,26,26,26,26,23,22,22,23,25,25,24,24,24,17,19,20,25,28,29,29,27,26,26,26,26,26,24,23,23,24,24,24,24,23,23,16,19,21,24,27,27,26,26,26,27,26,26,26,24,24,23,21,22,23,24,24,23,17,18,22,23,25,27,25,25,24,27,28,26,25,23,22,22,20,21,22,23,25,25,19,20,18,20,23,26,26,28,27,29,29,28,25,23,21,23,22,21,22,23,25,25,19,21,21,21,23,25,26,28,28,29,29,29,27,24,21,22,21,20,23,25,25,24,18,20,22,24,24,26,26,26,28,29,29,29,28,25,23,22,21,22,23,24,22,22,18,20,22,24,24,26,26,26,28,29,29,29,28,25,23,22,21,23,24,23,22,22],
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

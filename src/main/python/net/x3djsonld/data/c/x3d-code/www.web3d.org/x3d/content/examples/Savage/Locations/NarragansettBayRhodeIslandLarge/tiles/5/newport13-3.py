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
        texture=ImageTexture(url=['../../images/5/newport13-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,26,33,28,20,20,24,31,34,21,18,20,27,34,41,52,55,57,56,57,52,51,20,26,28,23,22,21,25,28,26,21,21,21,25,31,38,47,51,54,53,51,47,47,20,20,21,21,21,22,23,20,19,21,21,20,24,29,34,43,48,51,51,46,44,43,19,18,18,15,17,20,17,18,18,20,19,20,22,27,32,37,43,46,46,42,38,38,20,21,20,21,18,20,19,16,19,19,18,20,21,24,29,33,37,40,41,37,30,29,21,24,24,21,20,19,23,20,18,18,19,20,21,22,24,29,34,36,35,31,25,24,23,24,24,23,21,19,24,21,19,20,21,20,20,21,22,26,29,30,31,27,21,20,25,24,25,25,21,21,22,23,20,18,20,20,20,21,22,22,23,22,23,22,18,18,19,21,24,21,17,17,19,21,18,16,16,16,17,18,20,20,21,20,17,20,19,19,22,21,22,19,15,14,18,19,19,20,19,17,15,17,18,20,19,20,19,22,21,21,24,24,21,18,14,16,19,19,20,22,24,21,16,18,19,21,21,22,22,22,22,22,22,23,19,14,16,21,18,20,22,22,22,21,18,17,18,19,19,20,20,21,21,21,20,17,17,16,15,16,19,20,22,22,21,19,18,19,20,22,20,18,18,18,19,19,20,18,18,22,15,15,20,21,21,22,22,21,20,20,19,18,19,21,19,19,19,19,18,18,23,25,15,15,20,22,22,23,21,20,19,20,18,18,19,17,17,19,20,20,20,20,24,26,16,15,15,25,22,22,22,23,21,19,19,21,20,16,17,18,22,22,20,22,21,27,23,15,15,16,23,25,24,24,23,21,19,19,20,19,20,21,25,25,24,26,24,26,25,21,18,15,15,15,15,26,29,26,23,18,17,18,22,22,22,22,28,28,26,27,27,24,23,15,15,15,15,25,27,26,24,20,19,19,21,24,25,25,26,26,24,28,27,26,26,22,15,15,26,24,25,25,23,21,19,20,23,25,24,24,25,25,29,32,32,27,24,16,15,18,23,25,28,27,26,25,23,22,23,26,24,23,21,24,32,33,33,28,21,20,15,15,23,25,29,31,27,27,24,24,20,19,19,19,21,28,33,34,30,26,23,20,16,19,24,29,31,32,33,33,30,28,26,26,25,25,22,28,34,34,30,27,24,21,16,22,24,28,30,31,33,33,30,29,27,27,26,26],
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

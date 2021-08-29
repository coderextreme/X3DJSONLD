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
        texture=ImageTexture(url=['../../images/5/newport15-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,30,30,27,25,24,21,19,21,23,22,23,23,22,24,29,30,31,29,27,27,26,29,30,29,24,25,27,24,21,19,19,20,21,24,26,27,29,31,31,31,29,27,26,29,28,29,28,27,25,23,22,20,18,20,25,28,28,28,27,28,30,30,28,21,21,27,31,30,29,29,24,24,22,21,19,22,27,29,29,29,28,29,29,28,22,19,19,26,28,25,24,27,27,24,24,22,20,20,20,22,25,27,26,27,27,28,22,20,21,29,29,27,28,27,26,24,28,23,20,21,19,19,21,22,25,26,28,31,23,20,20,29,31,30,29,28,26,25,26,24,22,21,21,21,23,24,24,27,27,27,20,20,20,27,31,32,32,28,26,27,26,22,21,17,18,21,25,26,23,23,20,20,20,20,20,29,31,32,31,28,24,24,27,26,22,15,16,17,19,20,22,22,19,20,20,20,20,36,35,35,32,28,23,24,27,26,20,16,17,19,22,16,19,25,22,20,20,21,21,40,38,36,35,30,26,24,22,24,24,17,15,16,23,21,23,24,27,26,28,27,25,44,38,34,35,33,30,26,22,15,17,18,19,17,18,23,28,28,31,32,35,40,39,45,42,37,35,32,24,19,18,17,17,14,19,20,20,32,36,33,30,29,31,43,43,48,41,34,33,30,25,20,19,18,19,20,21,23,31,37,41,38,34,40,42,40,40,47,42,38,35,31,25,22,17,17,21,24,23,27,37,41,43,43,42,45,42,37,36,44,44,40,29,27,25,25,20,17,18,24,29,32,36,38,41,41,41,39,32,27,27,47,42,33,32,33,25,17,19,17,17,23,28,31,34,34,34,37,37,35,33,30,29,45,41,34,28,24,21,18,18,18,17,21,25,28,33,37,36,39,39,39,39,33,32,45,39,34,26,27,26,21,18,18,17,20,21,25,35,41,40,40,40,38,36,29,28,49,44,40,29,28,30,28,24,21,18,21,23,27,34,40,43,43,47,40,34,24,23,53,50,43,33,29,30,31,29,25,19,20,24,26,35,45,46,42,42,37,32,23,22,55,49,46,42,35,32,28,28,23,20,20,25,29,35,43,45,44,38,34,32,24,24,57,51,50,49,41,34,27,24,22,18,22,26,27,32,37,43,46,40,35,29,29,29,57,52,51,49,41,35,28,24,21,19,22,25,26,31,36,43,46,40,35,30,29,29],
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

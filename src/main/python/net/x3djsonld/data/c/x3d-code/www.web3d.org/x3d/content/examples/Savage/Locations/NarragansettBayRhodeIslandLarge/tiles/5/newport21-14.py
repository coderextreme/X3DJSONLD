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
        texture=ImageTexture(url=['../../images/5/newport21-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,26,32,31,28,17,17,23,23,23,19,18,21,21,23,24,24,21,21,22,18,17,19,34,32,34,29,18,23,22,21,23,19,20,21,22,22,22,21,20,19,21,19,19,21,31,33,35,28,24,24,22,22,24,24,23,19,22,22,23,22,19,19,19,15,15,19,27,32,30,30,27,26,24,23,23,27,25,22,25,22,18,18,18,18,17,19,18,18,19,24,27,27,28,27,26,26,28,25,24,22,23,23,20,19,24,20,18,15,14,20,17,14,23,30,27,28,26,30,29,26,22,22,22,23,23,22,21,22,19,16,16,27,17,19,19,26,26,28,27,28,27,26,26,28,23,21,25,23,20,20,19,20,19,29,24,16,16,16,23,28,29,27,25,26,29,29,26,27,24,22,22,18,16,17,17,28,25,23,18,18,18,19,24,28,29,28,29,27,23,25,25,25,22,21,18,18,17,26,24,21,19,18,16,17,21,26,28,30,28,22,24,25,25,24,24,24,23,20,20,29,23,22,17,15,16,19,21,24,26,29,27,22,22,22,23,24,24,25,24,21,21,28,26,23,19,17,15,16,18,22,26,25,23,23,22,21,19,22,24,25,24,21,21,26,21,20,18,17,16,18,18,17,21,22,21,20,19,16,17,24,24,21,21,21,21,26,22,19,18,18,17,16,16,18,20,16,15,17,16,15,18,23,23,21,20,20,20,26,25,22,20,18,16,15,15,17,15,14,14,14,16,17,17,20,22,23,20,19,19,27,23,23,21,20,19,21,22,20,17,18,21,19,21,25,23,17,18,21,20,17,17,30,27,26,28,24,21,19,19,19,20,25,23,19,17,19,20,16,16,19,21,17,16,30,33,30,31,28,24,24,23,23,28,29,28,24,20,17,17,14,12,15,17,18,17,33,32,33,30,30,30,31,30,31,31,31,28,28,23,18,15,15,14,15,15,15,15,33,33,33,33,34,35,36,36,38,37,35,31,28,24,21,17,17,17,14,11,16,16,34,32,37,37,36,35,33,33,34,35,34,32,31,27,23,22,21,20,18,17,16,16,34,35,38,37,36,35,33,32,31,29,33,37,38,33,26,21,18,20,19,24,21,21,39,39,38,38,36,35,33,33,30,30,34,38,37,32,28,22,19,21,21,23,18,18,39,40,38,38,36,34,33,33,30,30,35,38,37,33,28,22,20,22,20,21,18,17],
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

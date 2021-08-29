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
        texture=ImageTexture(url=['../../images/5/newport12-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[19,20,18,19,20,21,21,23,30,32,24,24,24,25,31,29,21,20,25,22,25,25,21,24,23,23,25,27,25,24,33,41,29,30,27,26,25,26,25,24,24,27,26,26,23,29,27,26,27,26,24,24,33,42,41,40,35,33,27,24,23,23,27,26,25,24,24,29,32,33,34,32,24,24,31,41,44,45,43,39,36,35,28,26,26,23,23,23,25,32,39,40,39,39,33,28,32,42,44,42,44,43,40,40,36,32,28,23,25,25,25,36,43,45,43,40,36,35,30,39,39,44,38,44,42,41,38,39,37,25,27,28,27,35,41,42,41,38,38,37,35,34,34,37,35,40,39,35,35,35,38,31,26,28,29,37,40,41,39,40,42,43,42,35,33,37,34,33,34,30,27,30,35,29,27,27,34,39,41,41,40,45,51,50,44,43,38,35,33,30,30,27,27,27,27,27,27,27,42,44,46,42,44,52,56,57,50,49,45,37,33,30,28,27,27,27,27,27,27,27,46,46,47,48,50,59,61,58,50,43,40,37,34,33,28,27,27,27,27,27,27,27,40,43,46,50,55,58,59,55,50,39,35,34,33,31,27,27,27,27,27,27,27,27,37,40,45,49,53,52,55,52,48,46,43,38,35,31,30,29,27,27,27,27,27,27,35,40,46,49,53,51,52,54,51,48,42,40,38,35,32,31,28,27,27,27,27,27,34,38,40,44,48,48,51,53,50,47,40,38,38,35,34,36,30,27,27,27,28,28,30,36,36,39,43,47,51,52,49,50,45,39,39,39,42,43,35,27,27,27,27,27,29,32,32,37,41,45,48,49,47,51,46,37,38,42,46,46,38,29,28,27,27,27,25,30,28,34,36,41,44,43,44,44,39,37,41,45,45,41,37,31,28,27,27,27,24,27,27,30,33,39,43,37,38,38,37,40,44,44,41,37,33,29,27,27,27,27,26,31,25,30,27,32,36,35,38,37,38,42,45,42,40,37,34,32,29,27,27,28,20,26,25,25,25,33,34,37,38,37,42,43,44,41,41,41,39,37,29,27,27,28,22,20,20,20,29,35,37,36,38,40,45,44,43,43,43,42,38,33,27,27,27,27,20,20,20,20,32,33,32,35,39,44,48,49,48,44,44,40,36,31,26,26,28,29,21,20,20,20,32,33,31,34,40,45,49,50,48,45,45,41,36,31,27,27,28,29],
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

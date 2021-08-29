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
        texture=ImageTexture(url=['../../images/5/newport31-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[27,26,26,26,25,25,24,24,23,23,27,31,35,33,28,24,19,21,20,15,9,9,28,26,27,26,25,24,24,23,22,23,28,32,33,30,26,22,20,22,20,14,14,14,28,26,28,26,26,25,24,23,22,25,30,31,31,28,26,23,22,22,22,13,15,15,28,26,28,27,26,25,24,23,23,26,29,29,28,25,24,22,23,25,24,16,14,15,28,29,31,29,27,25,24,22,22,25,26,26,23,22,22,22,25,27,26,18,14,14,29,32,33,30,28,27,24,22,23,25,25,24,22,22,23,24,27,29,27,20,13,13,31,33,34,30,28,26,24,24,24,25,24,23,22,23,25,27,30,31,29,21,14,14,31,35,34,29,26,25,25,25,26,26,24,23,23,24,27,30,33,35,28,20,16,16,32,35,32,29,26,25,25,26,28,26,24,23,24,26,29,34,36,34,26,20,16,15,33,33,29,28,26,25,26,28,29,27,25,25,27,28,32,36,36,32,25,22,18,17,33,33,31,29,26,25,27,30,30,28,26,28,32,33,36,36,35,29,26,23,19,19,33,32,30,28,26,26,30,32,30,28,27,30,33,36,37,37,34,30,26,23,21,20,32,30,28,26,28,30,33,34,31,28,28,31,34,36,37,37,33,29,25,24,22,21,29,28,27,28,30,31,35,35,31,29,29,32,34,35,36,34,31,27,23,22,22,22,29,28,28,29,31,32,36,34,31,30,30,32,34,34,34,32,29,24,22,22,24,24,28,28,29,32,31,33,34,32,31,30,30,33,33,34,33,30,26,23,22,22,23,23,30,30,31,32,33,33,32,32,31,31,31,33,33,32,31,29,24,20,21,24,23,23,32,32,32,32,32,35,33,32,31,31,31,32,31,30,30,25,20,20,22,24,22,22,33,35,35,34,33,33,32,32,32,31,30,30,28,27,25,21,19,19,20,22,22,22,32,33,35,34,34,34,32,32,32,31,29,28,26,24,20,17,17,18,19,19,20,19,32,32,32,33,35,34,35,34,32,31,28,25,23,20,17,15,15,17,15,15,16,16,31,31,32,33,36,37,36,34,32,32,27,24,21,18,17,15,14,14,15,14,12,12,32,32,33,34,36,38,36,34,33,31,28,23,20,19,18,17,16,16,15,14,12,12,32,32,33,34,36,38,36,34,33,31,28,23,20,19,18,17,17,16,15,14,12,12],
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

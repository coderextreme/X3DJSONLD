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
        texture=ImageTexture(url=['../../images/5/newport19-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,14,14,14,15,23,27,29,26,30,27,24,24,25,27,28,32,29,26,25,26,25,16,14,15,16,17,22,26,29,29,28,27,27,25,27,27,26,25,26,29,26,30,30,17,14,16,18,20,28,28,25,24,26,27,25,23,24,25,26,26,31,29,30,26,27,18,20,22,22,24,21,25,27,30,28,26,25,23,23,23,24,30,30,32,32,27,26,24,25,24,20,22,23,25,28,27,28,28,26,25,23,26,28,32,34,33,29,32,30,25,28,29,27,23,25,27,25,31,31,31,31,26,26,24,27,30,36,36,34,28,28,28,27,25,19,26,27,26,30,29,34,26,21,23,28,28,30,31,37,38,32,31,32,34,29,21,26,23,22,27,28,28,29,23,24,22,24,29,34,36,34,35,34,34,35,25,23,25,25,23,26,25,23,25,23,26,24,24,25,29,31,33,34,34,34,34,35,22,22,24,22,23,26,24,29,26,23,22,21,24,24,26,32,34,36,37,45,40,38,23,21,22,25,25,26,28,30,26,20,22,21,20,25,27,31,31,39,38,37,38,37,23,23,24,28,30,34,32,27,28,21,22,25,22,21,23,23,26,32,36,35,32,31,27,23,22,25,35,31,35,28,23,26,23,21,21,24,28,24,24,23,28,30,29,30,31,26,26,24,31,33,34,35,30,22,22,23,22,21,26,29,27,26,23,21,26,26,32,29,27,28,28,31,36,29,29,26,24,20,24,24,25,26,28,24,24,21,26,24,32,28,29,31,26,30,29,26,26,29,25,25,26,29,22,23,24,24,25,24,26,23,30,25,28,29,27,27,28,27,26,25,24,22,21,22,26,24,26,23,24,26,21,19,25,27,24,26,25,27,22,23,20,20,26,22,23,24,19,24,24,22,22,19,17,18,22,20,20,22,25,21,23,25,26,25,20,20,19,19,23,23,26,24,24,22,17,19,21,21,20,19,19,20,22,23,23,22,22,23,17,19,23,25,25,26,21,22,19,19,20,28,23,17,18,21,22,24,20,20,20,21,26,21,25,21,27,31,30,26,24,25,24,19,20,19,20,19,20,21,23,22,24,22,21,29,27,24,30,33,33,28,25,24,22,20,20,18,25,23,23,23,23,25,24,26,24,20,24,27,29,34,34,31,29,28,23,19,20,20,27,21,22,23,24,25,23,25,26,21,25,25,28,34,34,31,30,29],
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

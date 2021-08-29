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
        texture=ImageTexture(url=['../../images/5/newport14-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,31,30,34,33,33,35,33,32,31,31,30,29,28,28,27,27,28,27,26,33,33,29,26,25,28,30,30,32,30,30,30,30,30,30,29,29,27,26,26,26,30,34,35,30,29,25,28,29,30,30,30,28,29,32,32,31,29,26,26,26,26,29,29,32,34,30,29,28,28,27,27,28,30,32,32,32,33,32,27,26,26,26,29,28,28,35,36,30,29,28,27,27,27,28,30,30,29,33,33,32,26,26,26,27,28,27,28,32,33,31,29,27,26,25,27,28,30,31,31,30,29,29,28,26,26,27,27,26,27,31,32,28,28,26,26,26,26,29,28,28,30,32,31,30,30,30,27,26,27,27,27,28,29,30,29,28,28,28,28,27,28,28,32,32,32,32,32,32,32,27,26,29,30,30,30,29,28,28,27,27,27,26,27,28,33,34,32,31,31,33,31,31,29,26,27,28,28,30,31,32,32,30,29,31,31,31,31,33,34,33,32,32,31,33,34,32,26,27,28,32,31,30,30,29,28,28,28,28,31,32,32,32,31,33,33,33,33,33,32,26,26,31,32,33,32,31,29,29,29,29,29,31,31,34,31,32,33,35,33,32,32,31,30,31,29,30,31,31,30,29,34,32,33,31,31,30,29,32,32,32,32,32,32,31,30,31,30,29,28,28,27,28,30,32,33,33,33,33,34,33,33,33,32,32,32,29,29,33,32,28,29,28,28,28,30,31,31,33,35,33,33,31,30,31,32,32,33,31,30,32,30,29,28,28,28,29,30,31,33,33,33,32,33,32,33,33,33,33,32,31,30,31,29,31,31,31,31,31,32,31,33,32,33,33,33,32,31,31,31,31,31,31,31,33,30,31,31,32,32,32,33,33,33,33,34,34,34,33,32,33,34,34,33,33,32,32,30,30,30,31,31,32,33,33,33,32,31,31,31,32,32,33,33,32,32,30,30,34,32,31,31,32,31,32,32,33,33,33,33,33,33,35,34,31,31,32,32,34,34,31,31,30,31,32,32,32,32,32,32,32,32,33,31,31,30,29,31,31,33,31,31,32,31,31,32,31,32,33,34,34,33,32,31,31,31,31,29,29,29,29,30,31,31,32,33,33,33,33,33,33,34,34,34,33,30,31,30,30,29,29,30,31,31,31,31,32,33,34,33,33,33,33,34,34,34,33,30,31,30,30,29,29,31,32,32,31,31],
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

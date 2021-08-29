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
        texture=ImageTexture(url=['../../images/5/newport29-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[32,31,31,30,28,25,17,19,19,20,21,22,22,23,21,26,28,26,22,22,22,22,29,30,30,28,24,19,16,17,16,17,17,18,19,20,23,26,27,24,22,22,22,22,26,28,30,26,21,17,19,17,19,20,18,19,21,20,21,26,29,22,22,22,22,23,24,28,30,24,19,18,20,19,21,21,19,19,19,22,22,23,23,23,23,24,24,25,24,26,24,20,17,21,23,20,24,22,20,19,19,21,24,24,23,23,24,25,26,26,23,24,20,17,17,19,20,26,27,23,21,19,19,23,25,24,24,24,25,25,26,27,23,20,16,17,20,20,22,26,28,23,24,19,20,21,22,23,24,25,25,25,26,27,19,18,18,19,20,22,25,28,28,26,24,20,19,20,20,21,23,27,26,26,26,26,20,19,18,20,21,22,28,26,23,23,22,19,19,19,19,21,22,22,25,28,29,28,20,19,19,21,23,22,25,24,22,21,20,19,20,19,20,21,20,21,26,29,30,30,20,19,19,21,22,22,24,23,21,19,19,20,21,20,20,20,20,21,24,23,25,26,21,20,20,21,22,23,23,24,21,19,20,22,23,20,20,20,21,22,22,23,26,27,22,21,20,22,22,22,23,24,20,19,22,24,24,20,20,20,20,21,22,24,30,30,24,23,21,20,20,20,20,21,20,19,22,25,23,20,20,20,20,22,24,26,31,32,23,22,20,19,19,19,19,19,19,20,24,25,21,20,20,21,22,23,25,27,33,34,21,21,22,20,19,19,19,19,19,20,24,24,20,20,22,22,23,22,23,28,33,33,17,20,21,21,20,20,19,19,20,23,23,23,21,22,23,23,24,24,24,29,32,32,18,20,21,20,20,19,19,20,21,23,25,22,21,22,24,25,25,25,27,30,30,30,19,22,22,19,20,20,21,21,22,23,26,24,22,22,22,22,25,26,27,31,29,29,19,21,21,20,20,20,23,22,23,26,27,22,22,22,22,22,26,28,30,33,30,29,18,19,19,19,20,21,22,23,25,28,25,22,23,23,22,23,23,28,30,31,30,30,18,19,19,19,21,22,23,23,27,29,26,24,27,25,26,27,27,27,28,27,27,27,17,18,18,17,20,21,21,28,29,29,29,25,21,20,22,20,21,25,26,25,25,25,17,17,18,17,20,20,21,28,30,29,28,23,20,19,21,20,20,25,26,25,25,25],
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

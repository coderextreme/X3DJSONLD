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
        texture=ImageTexture(url=['../../images/5/newport20-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,19,20,20,27,21,22,23,24,25,23,25,26,21,25,25,28,34,34,31,30,29,24,20,21,19,22,23,29,26,27,23,24,26,25,22,23,24,25,30,35,35,29,29,22,23,17,22,21,28,25,28,30,27,27,27,22,19,19,16,28,31,36,37,36,35,21,20,20,23,22,27,27,31,28,30,25,24,24,23,22,25,26,27,34,40,37,37,23,20,20,20,21,24,29,25,28,30,28,25,23,23,24,27,26,29,33,38,37,36,21,20,19,19,22,26,27,30,29,26,23,27,22,23,25,30,27,29,31,33,37,37,22,21,20,20,22,27,23,27,26,25,26,25,24,22,22,26,28,32,34,36,39,40,22,21,19,19,18,20,22,25,23,23,22,22,23,24,22,20,25,28,34,40,37,37,24,20,20,19,20,20,21,22,22,23,24,24,22,19,17,17,22,26,33,38,38,38,23,21,20,21,19,23,20,20,19,19,20,19,28,18,17,18,19,23,28,30,36,37,24,23,23,24,23,19,18,19,22,19,16,20,16,19,19,18,21,23,24,27,32,33,26,25,26,19,19,19,18,20,21,19,19,16,17,15,17,17,19,24,25,25,29,30,21,25,23,23,22,22,22,19,19,20,20,16,15,15,17,18,19,20,23,29,20,20,20,25,21,24,22,21,25,21,18,17,19,16,15,16,18,19,18,17,18,22,27,25,18,24,28,24,24,22,22,22,19,19,17,16,15,17,17,17,19,19,21,20,20,21,23,22,21,26,27,25,24,23,22,20,17,17,16,16,17,19,20,20,19,21,17,17,20,22,22,23,27,27,23,22,24,20,18,19,16,19,17,23,18,18,20,21,19,19,20,22,25,33,29,28,25,25,22,23,22,18,19,20,20,20,22,21,16,21,20,19,22,24,33,30,30,26,24,22,23,23,21,19,22,23,25,23,23,22,16,21,23,23,22,29,31,24,30,28,26,26,24,22,23,22,23,24,25,24,24,26,19,17,22,21,28,22,21,26,27,26,27,25,21,22,23,25,25,25,25,28,27,25,18,9,20,20,31,28,28,24,24,19,20,19,25,22,24,24,23,23,24,26,26,24,26,16,10,12,28,26,31,29,26,18,16,23,23,22,18,19,21,22,24,23,24,22,21,22,17,17,27,26,32,31,28,17,17,23,23,23,19,18,21,21,23,24,24,21,21,22,18,17],
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

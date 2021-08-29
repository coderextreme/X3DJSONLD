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
        texture=ImageTexture(url=['../../images/5/newport28-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,24,24,24,23,21,18,12,12,17,19,20,21,22,22,23,23,23,21,21,22,22,24,24,21,23,21,21,13,13,19,21,21,21,22,23,22,22,24,23,23,23,19,19,24,24,24,23,21,15,14,16,21,22,22,22,23,24,24,24,24,24,24,19,14,14,25,24,23,23,18,12,12,20,21,22,23,24,24,25,25,25,25,25,21,17,12,12,25,24,24,24,16,15,14,20,21,21,21,23,23,26,26,26,25,20,12,12,12,12,25,24,23,21,18,17,19,22,23,23,23,23,22,23,23,24,24,20,14,12,12,12,25,24,23,20,17,16,19,24,24,24,24,23,21,21,20,17,14,15,16,12,12,12,25,24,22,19,17,16,23,24,24,23,23,22,21,18,16,14,14,14,16,12,12,12,26,25,24,20,18,20,25,26,25,23,22,21,20,17,17,15,16,18,20,15,12,12,25,26,25,22,20,22,26,27,26,24,25,26,22,18,18,18,17,19,21,21,13,12,24,26,25,20,20,23,27,28,28,28,30,31,29,20,19,18,18,17,19,21,17,14,26,26,26,20,20,23,27,29,32,35,37,38,28,24,20,20,19,18,17,23,18,15,24,24,21,20,21,21,27,32,36,40,43,43,33,28,23,21,20,20,22,24,17,17,24,24,20,20,20,20,26,33,40,45,48,47,44,36,26,23,23,22,19,16,16,17,27,25,21,21,24,20,25,36,43,50,52,50,47,43,29,24,24,23,20,18,17,17,27,27,27,27,25,20,26,38,47,52,53,52,49,41,27,25,24,23,23,19,17,17,27,27,27,26,23,20,27,38,47,52,54,52,50,45,29,26,24,22,22,21,19,19,26,28,26,27,23,21,29,39,48,52,53,52,49,44,37,27,21,21,22,21,21,21,21,25,25,26,20,23,28,38,45,49,52,51,49,43,35,25,22,22,24,24,19,20,20,20,20,19,23,24,28,35,43,47,50,49,46,39,33,26,24,23,20,23,20,17,21,21,24,24,24,25,28,33,39,44,47,47,41,34,28,26,25,24,21,16,16,16,25,24,23,24,24,24,27,29,35,40,44,42,37,31,27,26,25,25,24,20,15,15,28,24,24,24,25,25,24,27,31,36,39,38,34,29,27,26,25,25,24,23,19,17,29,24,24,24,25,25,24,27,30,35,38,37,33,28,27,26,25,25,24,23,20,18],
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

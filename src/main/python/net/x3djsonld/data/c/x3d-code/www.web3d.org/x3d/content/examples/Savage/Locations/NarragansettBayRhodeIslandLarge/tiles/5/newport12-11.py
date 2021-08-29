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
        texture=ImageTexture(url=['../../images/5/newport12-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,20,20,20,21,21,22,28,20,23,19,17,16,17,16,16,17,13,16,16,18,18,31,33,31,28,27,26,24,32,31,26,18,19,15,17,19,19,20,17,17,15,18,18,41,43,39,36,38,38,31,33,37,29,21,21,18,20,25,21,20,20,18,17,19,20,46,44,44,37,37,35,37,21,20,20,20,22,26,26,26,21,21,19,20,20,21,20,49,50,47,35,33,35,39,25,20,20,22,28,27,27,27,24,22,20,21,22,19,20,48,51,49,37,37,41,41,32,30,30,30,34,27,28,36,33,25,22,22,22,19,20,50,45,40,34,36,39,43,41,29,28,30,34,31,33,37,35,28,26,24,22,21,21,51,40,32,32,42,44,42,27,26,29,26,38,33,36,33,32,28,29,25,22,23,23,52,48,33,36,50,47,44,26,26,32,35,42,42,37,27,29,31,29,27,23,24,24,51,46,38,43,54,50,39,26,27,43,48,44,50,49,37,37,31,28,27,25,24,24,45,51,42,39,43,38,37,33,41,49,53,48,47,50,42,36,29,26,26,26,27,26,26,34,40,31,28,28,32,31,40,47,46,41,43,41,40,35,34,29,28,28,28,28,27,38,38,30,28,28,28,28,39,44,43,40,43,43,39,35,33,30,28,28,29,30,39,42,44,32,28,28,29,44,40,41,43,38,43,43,40,35,33,31,31,32,35,36,45,36,44,47,37,31,28,28,45,45,44,37,37,39,38,35,33,34,35,34,39,40,44,40,41,43,44,44,29,29,45,44,40,39,37,38,38,37,37,35,35,36,41,42,30,38,39,40,40,40,36,42,44,47,41,42,38,41,41,41,40,37,35,36,41,42,37,37,28,34,36,36,40,45,43,45,41,39,39,39,39,40,40,41,40,41,41,42,28,28,28,31,38,41,40,44,43,42,39,40,40,40,40,39,39,38,38,40,39,39,28,28,28,28,40,43,38,38,43,44,40,39,38,39,40,40,36,36,37,37,37,37,28,28,28,28,43,43,39,37,42,45,43,40,38,38,40,37,37,37,37,38,39,39,28,28,28,33,36,41,39,38,40,46,46,43,38,38,38,37,38,39,40,40,40,40,28,28,28,34,35,37,36,36,36,40,41,40,37,36,35,35,36,37,38,38,38,38,28,28,28,30,34,36,35,35,36,39,40,38,36,35,34,34,35,37,37,37,38,38],
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

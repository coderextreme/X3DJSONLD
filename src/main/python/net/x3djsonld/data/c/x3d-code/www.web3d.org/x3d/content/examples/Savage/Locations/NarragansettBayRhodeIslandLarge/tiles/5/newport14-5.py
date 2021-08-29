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
        texture=ImageTexture(url=['../../images/5/newport14-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,24,25,20,15,13,18,23,25,22,24,27,30,34,33,36,38,36,28,27,31,33,23,22,22,22,18,14,17,21,21,23,23,30,33,34,35,36,33,32,29,28,28,28,24,23,23,22,19,15,17,20,23,24,24,28,33,34,34,34,31,31,28,28,28,28,24,24,23,23,22,17,17,18,24,24,23,24,30,32,33,33,30,28,28,30,27,26,28,26,25,27,26,22,15,18,23,25,24,25,29,33,37,36,31,25,28,29,27,27,28,27,28,28,25,23,19,19,22,22,23,22,27,37,39,39,27,23,26,27,26,24,32,29,30,28,26,26,21,18,22,20,23,21,27,37,42,43,30,23,22,22,24,23,32,30,32,31,27,23,21,18,21,18,20,20,30,38,43,41,31,23,21,20,25,25,32,32,33,31,26,25,22,17,19,19,20,21,31,37,38,32,28,21,20,20,24,24,31,33,34,31,26,25,21,17,18,19,19,20,25,28,26,21,18,18,18,18,18,18,32,32,33,35,33,31,25,18,15,15,14,15,17,16,16,18,19,21,21,18,19,20,32,32,31,35,38,34,27,23,18,15,14,13,13,16,17,21,26,26,26,25,23,23,36,37,36,35,37,36,32,28,23,15,15,14,16,22,26,27,30,29,28,27,23,23,37,41,41,36,37,39,35,28,21,16,17,17,19,24,29,32,33,30,27,26,23,24,36,39,40,38,39,42,39,28,21,18,18,18,19,23,26,28,28,27,25,24,25,25,36,39,38,37,40,42,38,35,27,21,19,17,18,22,24,25,23,22,22,23,24,25,37,39,39,37,38,38,37,37,26,22,21,17,18,22,25,27,24,23,21,22,22,22,37,38,41,41,40,35,32,28,25,26,20,17,20,23,25,29,28,26,23,22,22,22,40,41,43,44,41,35,32,29,26,28,21,16,21,25,24,28,27,26,24,24,23,23,43,44,46,47,42,40,36,31,27,28,25,18,21,25,25,26,25,25,26,26,28,28,41,43,48,51,47,45,38,31,29,30,27,20,18,24,25,25,25,25,26,28,31,31,41,46,52,54,52,48,43,37,31,30,24,22,20,20,25,26,27,24,24,26,30,30,42,48,54,53,52,50,45,40,33,29,25,24,24,21,21,25,25,24,27,25,29,29,42,48,54,53,52,51,46,40,33,29,25,25,25,21,20,24,25,24,28,25,28,29],
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

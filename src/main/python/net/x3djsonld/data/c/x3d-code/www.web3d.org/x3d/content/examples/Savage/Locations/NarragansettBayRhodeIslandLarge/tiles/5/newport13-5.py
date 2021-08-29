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
        texture=ImageTexture(url=['../../images/5/newport13-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,14,16,16,17,17,17,16,16,16,16,16,16,16,16,16,17,20,23,23,24,21,15,16,17,18,19,20,18,17,17,16,16,16,17,16,18,19,20,21,23,25,23,21,16,17,18,19,22,21,19,18,18,20,19,17,19,18,17,21,22,23,23,23,22,21,14,16,16,18,20,20,20,20,24,27,24,20,21,19,18,20,22,23,23,22,22,21,16,16,17,17,20,22,21,22,32,36,33,26,20,20,21,19,20,23,24,24,22,21,19,18,19,18,19,20,21,28,37,42,45,38,30,26,25,22,21,20,23,21,20,20,20,19,19,20,19,19,18,27,37,44,48,44,40,34,32,29,21,20,20,20,20,20,21,20,19,19,19,20,19,23,31,40,44,44,43,40,33,29,26,24,21,20,20,20,20,20,20,22,22,23,21,22,28,35,41,45,46,44,43,36,31,26,23,25,27,27,20,21,22,25,25,25,23,23,26,34,40,45,47,47,46,41,38,35,34,33,30,30,21,22,25,25,25,23,24,23,24,33,39,44,48,48,45,47,44,41,44,44,36,36,20,24,24,25,26,24,23,23,21,28,37,46,53,53,43,39,44,45,48,49,42,40,21,23,23,23,23,23,24,23,22,27,37,47,54,57,51,42,41,46,52,52,47,44,23,23,23,21,22,22,23,23,24,25,35,43,52,57,56,53,46,44,53,58,52,49,24,24,23,23,24,24,22,23,25,26,32,40,48,52,54,56,52,45,50,55,51,51,19,20,23,24,29,27,25,22,22,23,30,37,43,48,49,48,46,47,52,54,52,51,22,19,18,27,30,31,34,31,25,24,28,34,40,46,49,47,37,40,48,49,58,59,18,16,20,26,29,34,38,38,24,22,27,29,32,38,37,35,34,36,43,42,42,43,17,17,19,22,27,31,38,38,25,22,23,25,27,27,26,27,27,29,36,41,40,40,16,16,19,21,25,29,34,33,22,20,23,22,22,23,26,27,28,34,40,40,38,38,23,15,14,16,21,23,27,23,18,20,27,25,25,27,29,29,29,30,37,37,38,39,24,22,19,15,18,18,18,22,22,23,25,26,29,32,30,30,31,29,28,29,34,37,24,24,25,19,15,13,18,23,25,22,24,27,30,34,32,35,38,35,28,27,31,33,24,24,25,20,15,13,18,23,25,22,24,27,30,34,33,36,38,36,28,27,31,33],
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

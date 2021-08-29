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
        texture=ImageTexture(url=['../../images/5/newport13-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,20,20,20,32,33,31,34,40,45,49,50,48,45,45,41,36,31,27,27,28,29,21,20,20,20,27,29,30,38,44,52,53,53,50,48,48,45,41,36,31,29,30,30,21,20,20,20,22,24,32,42,51,56,56,53,51,48,46,44,40,38,35,31,30,31,21,20,20,20,24,28,34,42,52,56,58,54,52,48,45,41,39,39,35,33,31,32,21,20,20,20,27,33,37,48,54,55,56,55,53,48,46,42,41,40,35,35,34,34,20,20,20,23,27,33,40,49,56,54,53,53,53,47,46,44,42,41,39,37,36,36,20,20,20,20,24,30,39,47,54,54,54,53,53,50,45,44,44,45,42,40,36,34,20,20,20,20,25,29,41,46,51,53,54,54,54,54,49,46,49,48,42,39,34,33,27,22,20,20,23,27,41,47,54,55,53,52,55,55,51,49,49,45,41,36,30,29,30,26,24,25,26,31,38,44,49,49,51,53,53,52,51,51,47,42,39,33,30,30,36,30,26,30,31,32,37,42,50,50,52,54,53,50,52,45,40,36,34,31,32,32,40,34,32,33,35,33,37,42,50,55,51,52,56,49,47,43,39,34,31,28,29,29,44,41,41,38,36,40,45,40,48,50,51,55,56,51,50,49,42,33,31,31,31,31,49,47,46,43,42,46,47,43,46,48,50,55,56,56,51,48,44,34,31,31,31,31,51,51,51,49,49,49,49,44,45,46,52,57,59,57,47,45,39,33,31,31,31,32,51,49,52,57,57,51,50,48,49,50,52,55,59,53,46,40,36,34,31,30,32,32,59,45,48,55,61,58,52,45,44,47,49,50,53,48,38,33,30,28,31,35,37,37,43,43,46,53,61,60,53,46,41,39,41,39,41,39,31,30,27,27,28,34,40,41,40,44,45,50,57,57,52,46,38,36,35,32,34,36,27,29,27,27,29,31,38,39,38,39,44,47,50,51,51,48,42,35,29,26,29,30,31,32,28,26,27,28,33,32,39,42,45,48,50,47,45,44,41,33,27,24,24,24,27,32,24,21,23,25,25,24,37,44,45,46,45,44,43,38,34,27,29,21,20,20,19,17,21,27,27,22,20,20,33,36,42,44,44,45,42,34,28,23,20,20,18,19,23,18,19,27,32,24,30,31,33,35,42,43,43,44,41,33,28,23,19,20,18,19,24,19,20,29,34,24,32,33],
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

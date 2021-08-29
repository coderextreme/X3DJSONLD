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
        texture=ImageTexture(url=['../../images/5/newport13-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,37,36,33,33,30,29,27,23,21,20,24,19,16,14,9,7,8,8,8,7,7,34,33,32,32,29,26,26,25,22,19,19,20,17,15,12,11,8,8,8,8,2,2,36,35,33,29,27,27,27,23,17,19,19,19,17,16,14,12,11,9,9,6,5,5,36,36,35,32,32,28,27,24,16,20,22,21,19,19,17,13,11,11,13,9,7,7,36,35,34,35,32,30,26,23,20,22,23,23,23,23,21,17,15,13,11,11,10,9,39,39,37,36,32,28,26,23,21,21,22,23,23,22,22,19,15,12,11,14,11,10,41,42,40,39,34,28,25,26,27,23,23,22,22,24,24,22,19,16,13,10,8,8,42,41,36,42,35,30,26,30,32,30,28,28,27,27,26,23,22,20,18,15,12,12,41,41,40,40,36,29,29,29,30,35,36,36,35,31,29,28,27,26,26,21,17,16,43,42,41,38,33,29,31,30,33,39,41,41,38,34,30,30,32,35,29,23,18,18,41,40,39,34,33,32,31,31,34,39,40,40,38,36,34,33,34,34,32,25,22,22,38,37,37,36,35,32,33,35,37,42,46,45,44,40,38,35,34,33,34,24,25,25,37,36,35,38,41,40,38,38,38,42,44,43,44,45,44,37,34,32,33,30,28,28,38,35,34,35,40,42,44,48,44,39,38,41,44,48,49,43,38,35,30,30,28,28,39,37,35,35,38,41,45,46,44,39,40,40,43,44,45,44,40,36,30,29,30,31,42,38,37,37,41,46,46,44,44,40,39,39,43,45,46,45,43,37,31,28,29,30,44,42,42,43,46,49,46,44,41,38,37,39,43,45,46,44,43,40,37,32,26,26,48,44,45,47,49,50,48,46,42,38,39,38,40,44,47,48,45,44,41,34,26,26,52,47,51,53,53,51,50,47,43,40,38,36,36,40,42,44,44,44,42,36,29,28,54,52,54,55,56,53,51,48,46,43,42,40,36,37,38,40,40,40,38,34,26,25,55,54,59,58,56,53,49,46,45,44,44,43,37,34,33,36,37,37,33,28,25,24,52,54,57,56,54,51,48,44,43,43,43,43,36,33,34,34,39,39,36,28,22,22,49,50,52,51,50,47,47,45,45,43,39,36,35,33,32,34,40,39,34,30,28,28,48,49,51,50,49,47,46,45,45,43,39,35,35,32,32,33,39,39,33,31,29,29],
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

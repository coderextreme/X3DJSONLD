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
        texture=ImageTexture(url=['../../images/5/newport13-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,20,22,24,24,26,26,26,28,29,29,29,28,25,23,22,21,23,24,23,22,22,16,16,21,23,26,26,24,25,27,28,27,27,26,25,24,23,22,24,25,23,21,21,15,19,21,23,24,23,21,22,23,24,25,25,25,25,24,24,24,23,23,21,20,19,16,17,18,22,23,24,20,19,18,17,19,22,24,27,25,24,22,21,20,21,21,21,15,14,17,20,23,24,22,19,18,16,16,19,23,25,24,23,22,20,22,21,20,20,16,15,18,21,22,22,23,22,19,16,16,17,18,21,22,24,24,21,19,19,19,19,21,22,18,19,24,25,24,24,22,20,18,15,16,18,21,22,24,24,20,18,15,15,20,22,22,21,22,23,23,23,24,24,22,19,15,15,17,20,20,20,19,18,16,15,17,19,23,21,20,23,24,24,22,22,22,22,20,15,15,16,18,17,16,16,16,15,16,14,18,17,15,18,23,23,23,22,22,22,21,18,16,14,13,12,11,12,14,14,14,14,16,17,12,11,15,20,22,22,20,20,19,18,15,13,10,11,12,13,15,16,15,15,16,17,15,13,13,13,19,20,20,16,14,14,15,11,9,8,9,9,12,13,22,19,16,18,22,15,13,12,12,12,11,9,10,10,11,8,7,7,8,8,10,11,25,25,24,25,29,29,26,22,17,14,8,6,0,0,0,0,5,5,5,5,6,7,27,28,30,31,33,36,35,34,29,20,14,9,1,0,0,0,0,0,3,4,5,5,24,27,30,33,37,41,42,44,43,33,23,15,7,0,0,0,0,0,0,0,2,2,24,27,29,33,36,41,44,49,47,46,37,22,14,8,4,3,2,3,0,0,0,0,20,26,30,34,34,37,44,44,49,52,46,40,34,26,17,14,7,4,3,0,0,0,16,21,25,29,33,39,43,48,50,55,53,47,42,37,32,28,20,11,5,2,1,0,13,13,22,25,30,35,41,47,53,57,57,53,47,43,41,35,28,22,14,6,3,3,25,15,13,18,26,30,36,43,52,55,56,53,49,46,42,39,34,29,24,16,8,7,30,28,20,15,21,25,31,36,43,48,52,52,49,44,38,39,39,35,30,24,17,15,31,32,29,20,16,22,26,31,36,41,45,47,45,40,40,40,40,39,36,30,22,20,31,33,30,22,17,21,26,30,34,39,43,45,45,40,40,40,40,39,37,30,22,21],
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

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
        texture=ImageTexture(url=['../../images/5/newport1-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.137688823068,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,7,4,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,17,17,16,19,23,21,22,0,0,0,0,0,0,0,0,0,0,0,6,8,15,19,18,18,19,27,36,36,35,0,0,0,0,0,0,0,0,0,0,7,17,19,20,19,21,22,24,31,41,38,35,0,0,0,0,0,0,0,1,5,14,18,16,19,21,23,26,32,33,38,40,34,33,0,0,0,0,0,0,6,11,13,17,17,17,19,23,27,29,36,42,38,36,33,32,0,0,0,0,0,8,12,16,17,17,17,18,20,26,31,33,41,45,41,33,27,27,0,0,0,0,0,13,14,17,18,16,15,18,22,26,32,35,45,47,45,33,28,28,0,0,0,0,5,14,16,17,19,19,17,19,26,28,26,33,44,45,45,39,34,35,0,0,0,0,7,16,17,19,21,20,18,17,20,20,27,36,40,42,44,37,32,33,0,0,0,0,10,16,17,22,23,22,18,17,14,19,30,34,38,37,38,38,30,30,0,0,0,1,14,16,16,21,25,21,17,15,14,24,28,28,35,39,39,37,27,26,0,0,0,0,7,17,19,18,22,21,17,17,17,23,26,25,29,39,39,36,34,34,0,0,0,0,0,14,16,12,15,17,21,23,18,20,25,30,28,28,35,36,39,40,0,0,0,0,0,13,15,11,14,16,21,23,19,20,25,30,28,26,33,36,39,40],
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

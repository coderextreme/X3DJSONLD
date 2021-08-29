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
        texture=ImageTexture(url=['../../images/5/newport14-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,24,22,16,13,10,6,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,26,27,25,20,14,11,8,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,27,27,25,22,15,12,11,9,8,5,0,0,0,0,0,0,0,0,0,0,0,0,25,25,23,20,15,13,12,11,9,6,3,0,0,0,0,0,0,0,0,0,0,0,23,21,21,19,14,13,12,12,12,9,6,0,0,0,0,0,0,0,0,0,0,0,19,19,18,15,14,13,12,12,10,9,8,6,2,0,0,0,0,0,0,0,0,0,20,16,15,13,12,12,12,12,11,11,11,9,8,6,1,0,0,0,0,0,0,0,19,16,14,12,12,12,12,12,13,13,13,11,11,9,4,0,0,0,0,0,0,0,17,18,15,13,13,14,13,15,15,15,14,14,11,11,5,0,0,0,0,0,0,0,16,16,15,14,14,15,16,18,19,18,17,14,11,8,0,0,0,0,0,0,0,0,16,16,15,15,15,17,19,21,21,21,18,15,8,0,0,0,0,0,0,0,0,0,15,15,15,15,16,19,22,26,26,23,17,12,0,0,0,0,0,0,0,0,0,0,12,13,15,15,16,18,21,26,27,23,17,2,0,0,0,0,0,0,0,0,0,0,11,12,14,15,14,16,20,24,26,24,17,1,0,0,0,0,0,0,0,0,0,0,9,10,12,13,14,17,21,24,26,23,15,0,0,0,0,0,0,0,0,0,0,0,8,10,11,11,14,18,24,25,25,22,9,0,0,0,0,0,0,0,0,0,0,0,7,10,11,11,14,18,25,27,27,21,6,0,0,0,0,0,0,0,0,0,0,0,6,9,11,13,16,20,26,28,29,20,6,0,0,0,0,0,0,0,0,0,0,0,6,9,11,14,17,22,28,32,30,22,12,0,0,0,0,0,0,0,0,0,0,0,6,9,12,16,21,26,32,36,32,22,12,0,0,0,0,0,0,0,0,0,0,0,3,8,13,18,25,29,33,37,34,24,13,0,0,0,0,0,0,0,0,0,2,1,4,6,12,19,26,31,34,37,33,22,10,0,0,0,0,0,0,0,0,4,9,9,3,5,10,17,25,30,35,35,32,21,9,0,0,0,0,0,0,0,0,7,11,12,3,5,10,17,24,30,35,35,31,20,8,0,0,0,0,0,0,0,1,8,11,12],
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

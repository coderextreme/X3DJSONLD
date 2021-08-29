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
        texture=ImageTexture(url=['../../images/5/newport22-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,21,27,30,34,33,31,32,30,24,18,15,13,14,16,16,18,18,18,18,15,15,14,17,24,28,33,34,35,30,27,24,18,14,13,15,16,17,20,18,15,16,19,18,2,13,22,29,29,33,32,32,30,23,18,16,14,12,14,18,22,19,20,16,14,13,3,13,16,21,27,28,29,32,27,24,18,13,13,10,13,14,18,17,18,19,13,13,8,14,16,16,18,24,27,28,25,19,13,12,12,16,16,15,15,15,15,16,18,18,2,4,13,14,15,19,20,22,21,16,13,14,12,13,11,12,13,16,17,16,15,15,13,2,2,15,16,17,14,16,16,16,15,12,10,11,9,8,14,16,16,14,14,14,12,7,4,1,7,13,14,12,13,14,13,11,10,2,3,11,14,16,17,15,16,16,13,13,10,6,2,1,3,5,9,9,11,10,8,8,10,11,13,14,14,17,16,17,15,14,12,9,6,4,0,0,1,5,3,0,1,4,8,11,13,17,18,17,15,15,16,14,13,13,14,7,2,0,0,0,0,0,0,0,0,1,11,15,16,15,15,15,13,16,19,17,14,12,9,6,7,4,1,2,1,0,0,0,0,2,13,16,15,15,15,18,18,20,18,15,13,12,10,11,9,7,2,2,0,0,0,0,2,2,11,12,19,19,20,21,22,22,18,15,14,11,11,7,4,4,1,0,0,0,0,0,0,0,20,19,20,21,21,22,20,17,14,11,11,11,12,8,8,5,1,0,0,0,0,0,14,21,20,19,18,19,18,17,14,13,14,13,11,10,10,8,6,6,8,5,4,3,5,20,22,18,19,20,20,17,15,15,14,14,14,14,11,11,14,11,13,14,9,8,0,17,21,19,19,17,17,19,18,15,12,12,13,16,14,15,16,16,13,14,10,10,0,14,18,21,19,16,16,16,15,15,15,13,11,12,14,17,19,17,16,13,10,10,0,10,20,21,21,19,17,16,15,15,14,12,12,12,14,15,16,17,14,13,10,10,0,2,16,21,23,26,24,17,15,13,12,13,14,15,15,15,14,14,12,14,16,16,0,7,17,19,26,27,26,20,16,13,13,16,18,19,15,15,13,13,15,12,13,13,0,2,14,23,21,23,24,23,20,17,19,18,18,22,17,13,14,13,14,3,12,12,0,1,14,23,21,22,21,22,20,17,20,19,18,20,18,15,15,13,14,1,9,11],
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

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
        texture=ImageTexture(url=['../../images/5/newport13-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[7,4,4,7,11,12,12,5,3,0,0,0,0,2,6,8,9,10,13,15,18,18,2,3,4,5,6,7,6,0,0,4,0,0,0,4,8,9,13,14,15,15,16,16,5,5,5,4,7,7,3,0,1,6,1,0,0,6,7,11,13,15,15,15,15,15,7,8,7,6,8,8,4,2,0,10,9,8,1,0,5,11,15,16,15,15,16,16,9,8,9,10,11,10,4,0,1,0,12,13,15,12,10,14,14,14,15,15,15,15,10,5,6,10,9,7,3,5,4,8,15,18,19,15,15,14,13,15,16,16,16,16,8,6,4,5,4,3,5,8,11,12,15,17,17,18,14,14,14,15,16,18,21,21,12,11,10,9,6,3,7,9,11,13,14,18,20,23,21,16,14,13,14,18,20,20,16,14,13,10,6,4,9,13,16,15,14,16,19,19,20,17,15,14,14,14,16,17,18,15,12,9,7,4,11,14,17,18,17,15,18,19,19,18,17,14,14,14,17,16,22,17,13,9,7,4,6,14,17,20,21,20,20,18,16,14,14,14,14,14,14,14,25,21,15,10,9,8,9,12,15,18,19,22,20,18,18,17,18,17,15,15,15,15,28,26,23,16,10,8,7,9,13,18,19,22,20,19,18,18,18,19,20,21,22,22,28,30,28,21,14,11,8,7,10,15,18,20,21,22,22,20,20,21,23,24,25,25,31,32,30,24,17,13,11,8,9,16,17,18,21,21,20,19,19,21,23,25,27,27,30,32,28,24,20,15,10,8,8,10,17,18,20,23,22,21,20,21,21,22,24,24,26,29,25,22,18,12,7,8,8,9,14,16,17,18,19,19,19,18,19,23,23,24,26,24,22,19,14,9,8,9,8,5,13,17,18,18,17,18,20,18,17,17,19,20,28,22,19,16,13,11,10,9,9,6,11,15,16,18,16,18,19,19,17,13,15,16,25,22,18,16,15,14,10,8,8,8,8,17,18,19,18,18,18,18,18,13,13,13,24,22,19,15,14,13,10,8,10,11,9,15,18,16,15,14,15,18,22,23,24,25,22,22,20,16,13,11,8,11,12,13,9,12,15,13,13,12,13,18,22,27,30,30,28,27,25,20,15,11,10,10,11,12,8,8,12,10,12,15,16,20,23,28,30,31,29,28,26,20,15,11,10,9,11,12,8,8,12,10,12,16,17,20,23,28,30,31],
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

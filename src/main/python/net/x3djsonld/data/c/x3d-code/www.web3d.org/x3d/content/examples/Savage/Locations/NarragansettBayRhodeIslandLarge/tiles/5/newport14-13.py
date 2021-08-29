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
        texture=ImageTexture(url=['../../images/5/newport14-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,28,26,20,15,11,10,9,11,12,8,8,12,10,12,16,17,20,23,28,30,31,29,28,27,24,16,12,9,6,7,10,10,7,11,11,12,16,19,22,27,30,30,30,30,29,26,22,18,10,9,9,8,8,9,8,11,11,13,16,20,25,30,33,33,33,24,24,23,20,18,13,12,14,12,9,9,9,11,12,15,17,20,26,32,37,36,35,21,19,18,17,15,11,13,13,14,11,10,9,8,13,17,19,21,28,34,36,37,37,20,17,16,13,11,11,12,13,14,13,13,12,8,9,14,21,26,32,32,34,34,34,19,19,15,14,11,15,11,13,12,13,15,16,13,11,13,21,27,31,33,32,28,28,19,18,16,14,13,12,12,12,11,15,18,19,15,9,12,19,23,28,31,29,29,28,22,21,19,15,12,10,11,10,11,15,17,20,16,13,8,15,19,24,27,27,26,26,21,20,19,16,12,11,11,11,13,13,14,14,15,15,12,14,18,21,23,24,24,24,24,20,18,16,14,12,12,13,13,11,11,11,12,14,14,11,17,18,21,23,24,24,26,21,19,19,16,14,14,14,12,11,8,7,13,12,10,11,17,18,21,24,24,24,27,24,19,17,17,16,16,15,14,13,11,10,9,11,11,12,17,19,21,24,24,24,30,24,18,16,18,19,18,16,17,15,12,12,9,9,8,13,14,16,21,23,25,25,28,25,19,17,18,18,18,18,18,17,15,13,13,11,11,11,11,16,19,23,26,27,31,29,22,20,19,19,17,17,18,18,16,14,14,14,11,10,12,15,18,22,26,26,30,29,23,20,20,20,19,19,17,17,14,14,12,12,11,10,10,13,18,22,23,23,29,27,25,24,23,21,21,17,17,16,16,13,13,12,12,13,13,14,18,22,22,22,29,27,23,23,20,20,20,18,17,18,17,14,13,14,14,14,15,13,16,21,23,23,29,29,25,22,20,21,17,16,17,16,18,18,18,15,14,15,12,12,16,21,24,24,28,28,23,22,23,20,16,14,15,15,19,23,23,18,13,14,15,13,13,19,22,23,27,25,24,24,23,18,17,15,15,17,21,25,25,20,16,14,16,14,14,17,20,21,26,23,23,23,20,18,18,17,18,20,22,23,22,18,16,16,18,18,17,15,19,19,25,23,22,23,20,18,18,17,18,21,22,23,21,17,16,16,18,19,17,15,18,19],
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

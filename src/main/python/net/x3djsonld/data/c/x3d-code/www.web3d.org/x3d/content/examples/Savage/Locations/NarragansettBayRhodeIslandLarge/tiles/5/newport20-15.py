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
        texture=ImageTexture(url=['../../images/5/newport20-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,24,27,27,26,24,19,14,13,8,8,7,9,4,10,9,13,16,20,14,17,15,29,22,27,31,30,28,20,15,12,11,7,10,7,4,7,12,13,14,15,18,14,13,35,28,25,27,28,27,23,18,15,9,11,12,7,3,3,5,12,12,14,15,12,13,37,31,28,19,24,26,24,18,17,15,15,8,7,8,6,7,8,8,10,8,12,12,36,31,26,25,23,25,27,22,17,15,16,9,8,11,7,7,7,8,7,7,7,8,37,34,27,25,24,24,26,22,23,20,13,13,8,9,11,12,10,10,9,7,7,7,40,33,29,26,23,25,30,29,21,23,16,14,12,11,2,10,9,7,9,12,11,9,37,37,34,29,27,27,32,30,23,20,22,14,11,11,8,8,10,10,10,8,8,9,38,39,34,29,27,28,27,31,29,23,17,10,9,9,12,9,7,9,10,10,9,9,37,40,34,30,26,25,25,32,27,21,11,11,10,8,9,7,9,10,11,11,9,9,33,35,31,31,27,25,22,23,20,15,11,12,10,9,10,9,12,11,7,6,10,10,30,29,29,25,21,17,17,19,18,15,14,11,13,11,11,11,13,9,7,7,8,9,20,21,25,24,24,20,16,15,14,14,15,13,12,14,14,14,9,7,8,10,8,8,25,21,21,22,20,17,17,10,10,10,12,14,17,18,18,12,16,8,9,6,8,10,21,20,19,15,18,15,11,9,11,15,14,15,16,19,18,12,11,10,6,10,9,8,17,16,15,15,15,10,8,10,13,17,17,18,17,14,16,12,8,10,8,9,11,11,19,20,19,13,13,11,14,10,14,17,17,17,16,16,15,11,11,13,10,8,9,10,19,20,21,17,15,18,19,17,17,14,17,18,13,14,14,15,15,16,11,8,9,9,23,22,21,19,16,23,18,18,13,15,17,19,13,13,12,15,13,14,15,12,10,11,21,18,18,19,23,22,20,20,15,12,17,12,13,14,16,13,14,16,16,12,14,15,20,20,19,22,24,21,20,15,16,15,13,13,17,14,10,15,16,15,16,18,20,18,12,17,20,20,21,18,17,18,19,16,14,13,13,14,14,15,17,16,18,22,19,17,17,15,15,14,17,19,19,23,23,19,18,12,11,11,12,17,16,18,18,23,20,21,17,14,15,15,17,20,18,23,23,20,18,12,13,11,10,17,16,18,17,23,19,20],
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

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
        texture=ImageTexture(url=['../../images/5/newport12-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,12,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,15,12,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,11,7,4,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,13,11,9,6,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,11,9,8,7,8,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,10,10,11,12,11,10,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,14,15,16,16,13,10,7,3,0,0,0,0,0,0,0,0,0,0,0,0,15,16,15,17,20,19,16,13,10,5,0,0,0,0,0,0,0,0,0,0,0,0,16,17,17,18,22,21,20,17,12,5,0,0,0,0,0,0,0,0,0,0,0,0,18,18,18,19,21,21,21,18,13,7,0,0,0,0,0,0,0,0,0,0,0,0,21,20,21,21,21,21,22,20,16,9,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,22,21,21,22,22,17,12,6,0,0,0,0,0,0,0,0,0,0,0,22,22,22,22,21,20,20,21,18,14,7,0,0,0,0,0,0,0,0,0,0,0,25,23,22,21,20,19,19,18,16,13,6,0,0,0,0,0,0,0,0,0,0,0,24,22,22,20,18,17,15,14,13,11,2,0,0,0,0,0,0,0,0,0,0,0,23,22,20,19,17,16,14,10,8,6,0,0,0,0,0,0,0,0,0,0,0,0,23,21,19,18,18,15,12,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,25,23,19,18,18,15,11,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,25,20,19,18,18,15,11,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,22,20,18,17,15,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,23,21,18,14,12,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,22,18,14,11,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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

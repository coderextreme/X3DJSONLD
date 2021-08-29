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
        texture=ImageTexture(url=['../../images/5/newport31-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[9,10,9,8,7,7,8,8,11,12,13,13,13,12,12,11,10,6,5,1,1,1,14,11,9,8,7,7,7,8,9,10,10,9,9,9,7,6,5,3,1,1,4,4,15,15,10,10,9,8,7,7,8,9,8,7,7,8,4,1,1,2,3,6,8,8,15,17,16,14,11,9,8,8,8,8,7,7,7,6,1,1,2,4,8,9,10,10,14,18,17,16,12,10,10,9,8,7,7,8,8,5,1,2,4,7,9,10,10,10,13,16,18,17,13,11,10,10,9,8,10,10,7,3,2,3,5,7,8,10,10,11,14,15,17,18,15,12,12,11,11,12,15,10,7,3,3,5,7,7,9,12,13,13,16,15,16,16,15,13,12,12,11,11,11,8,6,3,4,5,10,11,14,16,18,18,15,14,14,14,13,10,9,8,8,8,9,10,7,4,3,7,12,15,18,20,21,20,17,14,13,13,11,9,8,7,7,7,8,10,9,5,5,9,15,19,21,22,22,21,19,14,14,13,11,9,8,7,7,7,6,5,4,6,10,13,17,21,23,25,24,23,20,17,16,14,11,9,7,6,6,5,5,5,5,8,10,13,19,23,25,26,24,24,21,20,19,16,10,7,7,6,6,6,6,7,7,8,10,15,20,24,26,28,25,25,22,22,21,17,11,7,7,7,7,7,7,7,7,7,10,16,19,23,27,28,25,24,24,23,18,15,12,7,7,8,8,9,8,8,8,8,9,14,19,22,28,27,24,23,23,20,17,14,11,7,7,8,9,12,11,9,8,8,8,12,16,22,27,25,23,22,23,20,16,12,7,7,7,9,11,12,12,10,10,9,9,10,15,21,24,23,22,22,22,19,15,10,7,7,7,10,10,12,12,11,11,11,10,10,15,20,21,21,22,22,22,18,15,11,8,7,6,6,10,11,11,11,11,11,12,11,16,18,19,20,20,20,19,17,14,12,9,8,7,7,7,10,11,11,11,11,12,12,14,17,19,20,21,20,16,15,11,12,9,8,7,8,7,10,11,11,11,11,12,12,14,18,19,20,20,20,12,11,10,8,8,7,7,7,10,11,11,11,11,11,12,13,14,16,19,21,21,20,12,10,8,8,7,7,6,6,12,13,12,12,12,11,11,13,15,18,20,21,19,19,12,10,8,8,7,7,6,7,12,13,12,12,12,11,11,14,15,18,20,22,19,18],
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

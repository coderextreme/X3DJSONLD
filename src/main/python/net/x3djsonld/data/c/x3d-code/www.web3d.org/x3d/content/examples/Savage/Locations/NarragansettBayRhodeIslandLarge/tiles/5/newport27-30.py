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
        texture=ImageTexture(url=['../../images/5/newport27-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,7,3,2,2,2,2,1,1,1,0,6,6,5,10,23,27,28,31,38,41,42,10,6,2,2,2,2,2,1,1,1,0,1,2,3,2,11,17,18,21,31,36,37,11,5,2,2,2,2,2,1,1,1,1,1,2,2,2,4,11,17,19,21,23,24,10,3,2,2,2,2,2,2,1,2,1,1,1,2,2,1,2,9,16,22,26,26,9,3,2,2,2,2,2,2,2,1,1,1,2,2,1,1,1,1,7,13,16,17,7,2,2,4,7,9,8,4,3,2,1,1,1,1,1,1,1,1,1,1,3,3,8,2,2,3,10,11,12,10,6,3,1,1,2,1,1,1,1,1,1,1,1,1,7,3,2,2,6,7,7,7,4,2,1,1,2,1,1,1,1,1,1,1,1,1,4,2,2,2,2,2,2,5,8,7,4,2,2,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,6,13,13,10,2,1,1,1,1,1,1,1,1,1,1,4,2,2,3,3,2,2,10,17,16,9,4,0,1,1,1,1,1,1,1,1,1,2,2,2,4,6,4,5,13,19,19,14,7,2,1,1,1,1,1,1,1,1,1,2,2,3,6,7,5,5,14,21,21,16,12,6,2,2,2,1,1,1,1,1,1,2,2,3,7,8,8,8,15,20,21,18,15,11,4,2,3,1,1,1,1,1,1,3,4,6,9,11,11,11,15,17,19,18,16,12,7,5,3,2,1,1,1,1,1,4,6,8,11,13,12,13,15,16,18,18,17,12,9,6,3,1,1,1,1,1,1,5,8,11,14,16,14,14,13,15,18,19,18,13,8,5,2,1,1,1,1,1,1,16,8,12,17,18,17,16,16,18,18,20,18,14,9,3,2,1,1,1,1,1,1,16,14,13,17,18,18,17,18,19,20,23,19,16,11,3,2,1,1,1,1,1,1,16,16,15,18,16,16,16,18,20,22,22,19,16,9,3,1,1,1,1,1,1,1,16,16,16,15,14,14,15,18,20,21,20,16,10,7,3,1,1,1,1,1,1,1,16,16,14,12,12,11,13,17,19,20,16,10,6,3,2,1,1,1,1,1,1,1,16,16,10,9,10,10,13,16,18,17,13,8,4,1,2,1,1,1,1,1,1,1,16,16,10,9,10,10,12,16,17,17,13,8,4,1,2,1,1,1,1,1,1,1],
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

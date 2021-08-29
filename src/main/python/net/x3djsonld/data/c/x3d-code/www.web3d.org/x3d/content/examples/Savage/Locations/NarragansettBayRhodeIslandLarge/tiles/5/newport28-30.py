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
        texture=ImageTexture(url=['../../images/5/newport28-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[16,16,10,9,10,10,12,16,17,17,13,8,4,1,2,1,1,1,1,1,1,1,16,11,8,7,8,9,11,15,15,13,10,7,2,1,1,1,1,1,1,1,1,1,13,8,7,6,6,6,8,10,11,6,5,2,2,1,1,1,1,1,1,1,1,1,10,8,7,5,4,4,4,5,6,2,1,2,1,1,1,1,1,1,1,1,1,1,9,5,6,5,4,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,6,4,5,5,3,2,0,0,0,0,0,1,1,1,1,1,1,1,1,1,3,5,5,4,4,5,2,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,9,9,4,4,3,2,1,0,0,0,0,0,0,0,0,0,1,1,1,1,3,4,11,11,4,4,3,2,1,0,0,0,0,0,0,1,1,0,1,1,1,1,8,12,12,13,5,2,2,1,0,0,0,0,0,0,1,1,1,1,1,1,1,2,7,10,13,14,5,3,1,0,0,0,0,0,1,1,1,1,2,1,1,1,1,1,1,8,9,8,7,5,2,1,1,0,0,0,1,1,1,1,1,2,1,1,1,1,1,4,6,5,12,7,2,2,1,1,0,2,1,1,1,1,1,1,1,1,1,1,1,1,7,7,16,9,3,4,4,1,0,1,1,1,1,1,2,1,1,1,1,1,1,1,9,10,22,13,9,7,6,2,2,2,2,2,2,2,2,1,2,2,1,1,1,1,5,6,25,17,13,10,5,2,2,2,2,2,2,2,1,1,2,1,1,1,1,1,2,1,22,21,17,11,8,3,2,5,6,5,4,3,2,2,1,1,1,1,1,1,1,1,25,19,18,18,19,13,10,10,9,9,8,6,4,2,1,1,1,1,1,1,1,2,25,20,19,20,21,20,17,14,15,14,11,9,5,5,2,1,1,1,1,1,3,4,25,21,21,24,23,22,23,24,20,20,16,13,9,7,3,1,1,1,1,2,3,3,24,28,30,33,31,30,32,34,32,26,21,18,14,10,5,1,1,1,1,2,6,5,30,35,41,48,43,43,40,47,46,35,25,20,17,13,8,2,1,1,1,6,7,6,39,49,51,52,53,51,58,56,59,44,30,24,20,16,12,5,1,1,1,6,5,5,40,50,52,52,52,52,57,56,58,45,31,26,21,17,11,5,1,1,1,4,4,4],
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

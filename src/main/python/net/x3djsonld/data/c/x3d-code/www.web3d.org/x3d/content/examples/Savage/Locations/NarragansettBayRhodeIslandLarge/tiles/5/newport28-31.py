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
        texture=ImageTexture(url=['../../images/5/newport28-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,3,1,1,1,1,1,7,10,10,10,13,16,21,27,29,26,22,19,19,18,1,2,5,3,1,1,1,1,1,6,10,13,16,19,24,31,33,28,23,20,18,17,1,5,7,3,1,1,1,1,1,2,9,13,17,20,26,32,33,28,22,19,17,17,1,8,7,3,3,9,7,1,1,1,2,14,17,21,26,32,33,27,20,17,15,14,2,9,7,3,5,11,16,12,2,1,1,10,16,20,26,32,32,24,17,14,11,11,5,10,6,3,6,11,19,16,8,1,1,1,14,20,26,30,28,20,13,9,7,7,9,10,4,3,6,12,17,21,13,5,1,1,6,19,24,27,22,15,7,3,2,2,11,8,5,4,6,12,16,19,18,16,6,1,1,13,21,23,17,10,4,1,1,1,13,6,4,4,5,10,16,19,20,18,11,1,1,7,16,16,12,6,1,1,1,1,14,11,5,5,5,9,13,20,22,19,12,3,1,1,4,7,5,2,1,1,3,3,8,12,8,5,5,7,11,17,23,19,12,2,1,1,1,1,1,1,1,1,1,1,5,4,5,6,7,8,11,15,22,15,9,6,4,2,1,1,1,1,1,1,1,2,7,4,3,6,12,14,15,18,17,14,11,8,6,3,1,1,1,1,1,3,5,4,10,6,1,4,11,17,19,17,14,13,12,10,7,4,3,1,1,1,1,1,10,10,6,2,1,3,9,18,20,15,14,14,13,12,10,5,1,1,1,1,1,1,1,1,1,1,1,2,12,19,16,13,13,14,14,12,11,9,2,1,1,1,1,1,1,1,1,1,1,5,12,18,15,11,11,12,11,12,8,6,1,1,1,1,1,1,1,1,2,2,2,7,13,18,14,11,11,11,9,7,4,1,2,1,1,1,1,1,1,1,4,6,6,9,13,14,12,12,12,11,11,6,4,3,2,1,1,1,1,1,1,1,3,4,5,8,12,11,11,11,12,14,11,5,4,5,5,1,1,1,1,1,1,1,5,3,4,6,9,9,8,8,10,13,11,4,4,3,5,4,5,1,1,8,9,10,6,4,4,6,7,7,7,8,10,13,8,4,4,6,8,8,2,1,1,3,6,6,5,4,3,5,8,8,10,10,11,9,5,7,9,10,10,6,1,1,1,1,1,1,4,4,3,5,9,9,10,10,11,9,5,8,10,11,10,5,1,1,1,1,1,1],
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

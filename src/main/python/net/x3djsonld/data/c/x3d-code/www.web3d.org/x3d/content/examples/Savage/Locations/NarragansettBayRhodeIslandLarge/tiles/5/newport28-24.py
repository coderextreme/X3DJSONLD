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
        texture=ImageTexture(url=['../../images/5/newport28-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[3,2,3,4,5,5,5,5,5,5,5,5,5,5,5,5,5,6,11,15,15,14,4,3,3,5,5,5,5,5,5,5,5,5,5,6,6,6,5,4,9,13,15,15,5,5,5,5,5,5,6,6,5,5,5,5,6,7,7,7,5,8,10,13,15,15,5,5,5,5,5,5,6,7,5,5,5,5,6,6,7,6,5,7,11,16,16,16,5,5,6,5,5,4,5,6,5,4,5,5,5,5,5,5,5,7,11,17,18,18,5,5,5,5,5,5,5,5,5,4,5,5,5,5,5,5,6,8,12,15,19,19,5,5,4,5,6,6,6,6,5,5,4,5,5,5,6,5,6,9,14,15,16,16,4,4,5,6,7,7,7,7,6,5,5,4,5,5,5,6,6,9,13,16,17,17,5,5,6,7,8,8,8,8,7,7,6,5,5,5,5,5,7,8,12,15,16,16,6,7,8,8,9,10,9,9,9,9,8,6,5,5,5,6,7,8,9,14,16,16,7,8,8,9,12,11,13,13,12,12,14,11,8,6,5,6,6,8,11,15,16,17,8,9,9,12,11,14,14,15,14,13,14,14,9,6,5,6,6,9,12,15,17,17,8,14,15,14,15,15,15,16,15,15,16,14,8,6,5,6,8,9,11,15,19,20,14,14,15,13,15,16,17,12,17,16,15,15,8,7,5,6,8,10,12,16,20,21,14,15,12,11,12,14,17,16,10,12,16,9,8,7,6,6,7,8,11,16,21,21,16,14,11,11,11,13,15,18,8,6,7,7,7,7,6,6,7,9,14,20,23,23,8,10,9,8,10,11,12,14,10,7,6,6,6,7,7,7,8,9,18,22,23,24,9,11,10,9,9,9,11,13,9,7,6,6,6,7,7,8,8,10,17,22,23,23,9,8,7,13,10,7,8,14,7,6,6,6,6,7,7,8,9,12,17,21,22,23,10,7,7,9,11,10,7,10,7,6,6,6,7,7,8,9,11,18,20,21,25,26,10,6,5,6,5,11,6,12,7,6,6,7,7,7,8,9,14,19,20,23,28,29,13,7,5,6,6,6,7,11,9,7,7,7,7,7,8,10,13,17,20,24,30,31,13,10,8,7,5,5,9,10,8,8,8,9,8,7,8,9,13,16,20,27,32,32,13,10,6,7,4,6,9,12,9,8,9,9,7,7,7,9,13,16,20,27,32,32],
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

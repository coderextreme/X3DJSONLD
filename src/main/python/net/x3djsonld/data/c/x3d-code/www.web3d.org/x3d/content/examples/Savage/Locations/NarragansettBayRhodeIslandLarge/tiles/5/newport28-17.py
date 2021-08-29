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
        texture=ImageTexture(url=['../../images/5/newport28-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,15,16,14,8,8,8,9,10,11,16,15,11,9,8,11,13,15,16,15,15,15,16,17,17,16,11,7,13,9,8,8,8,8,8,11,14,15,14,15,16,15,15,15,16,19,19,15,10,9,14,16,13,8,8,9,9,14,15,16,16,16,16,16,16,16,16,14,16,11,9,10,15,17,17,15,15,15,14,14,15,16,17,17,17,17,16,16,15,14,11,10,10,11,15,18,19,18,17,17,17,16,16,17,18,17,17,17,17,17,10,8,9,11,11,12,15,20,20,20,19,19,18,18,17,17,18,18,18,18,18,18,10,9,11,11,11,11,16,21,22,21,20,19,18,17,17,17,17,17,17,18,18,18,12,12,12,11,11,12,12,12,13,16,16,16,17,17,16,15,15,16,15,15,17,17,13,13,13,11,11,16,17,18,15,17,14,18,18,18,16,14,14,15,14,15,16,16,13,14,17,11,12,15,17,18,18,17,15,17,17,18,15,12,11,12,12,13,12,12,14,15,17,17,16,15,16,17,17,18,16,12,11,11,11,12,9,9,8,8,7,7,15,17,18,18,18,17,18,18,18,18,15,11,10,10,10,10,4,5,5,5,5,5,17,18,18,18,18,18,18,18,16,14,11,11,12,13,12,8,5,5,5,4,4,4,18,18,19,19,19,19,18,17,17,16,16,15,14,14,13,14,10,4,4,4,3,3,18,19,20,20,20,19,18,18,18,18,18,17,16,15,15,15,17,7,4,3,3,3,19,20,20,21,20,20,19,19,19,18,18,18,17,17,18,17,14,8,4,3,2,2,20,20,20,20,20,20,20,19,19,19,18,18,18,17,18,10,10,5,3,2,1,1,21,21,21,21,20,20,20,20,19,19,19,18,18,17,10,5,6,4,3,2,1,0,21,21,21,21,20,20,20,20,20,19,19,18,18,16,11,8,6,4,2,1,0,0,21,21,21,21,21,21,21,20,20,20,19,18,18,16,14,9,5,3,2,1,0,0,21,21,21,21,21,21,21,21,20,20,19,19,18,18,17,9,4,3,2,0,0,0,22,21,21,21,21,21,21,20,20,20,20,20,18,16,9,6,3,2,1,0,0,0,22,22,21,21,21,20,19,18,17,18,20,19,18,12,8,4,2,1,0,0,0,0,22,22,21,21,20,20,19,18,17,17,19,18,18,12,8,4,2,1,0,0,0,0],
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

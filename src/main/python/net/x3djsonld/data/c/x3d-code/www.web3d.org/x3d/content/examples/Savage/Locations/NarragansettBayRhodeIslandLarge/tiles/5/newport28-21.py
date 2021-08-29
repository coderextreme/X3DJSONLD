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
        texture=ImageTexture(url=['../../images/5/newport28-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[5,3,2,1,1,1,5,6,7,8,7,5,3,6,8,8,8,8,8,8,8,8,4,3,2,1,1,1,6,8,8,9,9,8,5,7,9,9,9,8,9,9,9,9,4,2,2,1,2,0,0,7,9,10,10,9,8,6,8,9,9,9,9,9,8,8,5,2,1,1,1,0,5,9,10,10,10,10,10,9,9,9,8,8,8,8,8,8,4,3,1,1,4,8,9,14,12,15,15,16,11,10,8,8,8,8,8,9,9,9,2,2,1,1,5,6,9,11,16,15,15,16,12,13,12,9,8,8,8,9,9,9,2,2,1,3,6,7,8,9,10,10,11,13,16,10,17,14,12,9,8,9,10,10,1,1,2,5,6,8,10,12,14,15,14,16,17,15,15,16,15,13,9,9,10,10,1,1,6,8,7,8,14,14,14,14,15,16,15,18,17,17,17,15,11,11,11,11,2,2,5,10,9,11,13,13,13,14,15,16,17,18,19,19,17,13,11,11,11,11,2,2,7,11,12,11,12,12,12,14,16,17,17,19,20,20,17,14,12,11,11,11,4,7,10,11,12,11,11,12,11,14,17,18,18,17,18,18,18,16,15,14,11,11,5,10,12,11,11,11,11,11,13,17,19,20,19,17,19,20,18,17,18,18,15,14,7,10,12,11,11,11,11,14,18,20,20,20,17,18,20,20,18,17,16,16,17,16,7,10,12,12,11,11,11,16,18,19,21,19,18,19,20,18,18,17,16,15,15,15,7,9,11,12,12,11,12,16,21,20,20,18,17,18,19,20,19,18,18,15,14,14,8,8,10,12,11,13,15,17,22,20,18,17,16,19,20,20,19,18,17,16,15,15,8,8,9,12,12,14,15,18,21,19,15,16,16,21,21,20,18,16,14,14,15,15,9,8,10,14,14,15,16,18,17,16,14,14,17,20,21,19,18,15,14,12,12,11,11,12,12,13,14,15,17,17,15,14,13,14,17,20,20,19,18,16,15,17,13,12,10,11,12,12,14,18,17,16,15,14,13,13,16,18,19,19,18,16,15,12,10,10,13,12,14,14,14,17,18,16,13,13,14,15,17,18,19,19,17,15,15,12,10,10,16,14,17,15,15,16,16,15,14,13,14,18,18,18,19,18,17,14,14,14,12,11,16,14,16,14,15,16,16,15,14,13,14,18,19,18,19,18,17,14,15,14,12,11],
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

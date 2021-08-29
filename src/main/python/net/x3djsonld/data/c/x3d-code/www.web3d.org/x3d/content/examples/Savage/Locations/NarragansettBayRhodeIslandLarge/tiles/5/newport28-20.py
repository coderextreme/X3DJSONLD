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
        texture=ImageTexture(url=['../../images/5/newport28-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[13,8,10,9,8,9,9,10,9,9,10,10,10,10,10,9,8,9,9,7,5,5,13,10,11,11,10,9,9,10,10,10,10,11,11,10,10,9,9,9,8,8,5,4,16,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,9,9,8,5,4,17,14,11,11,11,11,11,11,11,11,12,13,13,14,8,13,8,9,8,7,5,5,21,18,11,11,11,11,11,11,11,12,14,14,14,13,7,14,13,9,14,9,4,4,24,14,13,11,12,11,11,11,12,14,14,14,14,13,14,14,13,12,13,5,2,2,24,18,15,14,13,12,12,12,12,13,13,11,11,12,15,13,10,7,4,3,2,2,27,22,17,15,14,14,14,13,13,12,12,12,11,11,11,9,5,4,2,1,1,1,29,25,21,17,17,17,15,13,11,11,13,14,13,13,10,7,5,3,2,1,1,1,26,24,22,17,18,18,18,13,11,9,11,13,16,17,14,10,4,1,1,2,2,2,25,23,21,18,19,20,19,15,12,8,8,12,13,13,5,3,1,2,2,2,2,2,26,22,20,18,19,18,17,13,9,7,7,2,3,2,2,3,2,2,2,3,4,4,28,20,17,18,20,19,18,16,13,10,6,3,5,4,3,2,2,3,3,4,5,5,28,20,14,16,20,16,18,19,14,8,4,2,3,3,2,3,3,3,3,5,7,7,23,18,14,16,13,14,17,25,18,11,5,3,2,2,2,3,4,4,5,5,7,7,26,17,14,18,14,14,16,16,17,10,4,3,2,2,3,2,3,5,6,6,7,7,31,19,18,21,16,15,11,9,8,6,6,4,2,2,2,3,4,5,6,7,8,8,34,23,24,26,25,24,17,10,8,9,9,7,3,2,3,4,5,6,6,7,8,8,27,24,24,26,27,23,18,17,13,11,10,7,4,3,3,5,6,7,7,8,9,9,26,25,25,27,27,24,22,21,16,13,11,7,4,3,2,4,6,6,7,9,12,11,27,26,26,27,27,26,24,21,15,14,14,9,4,4,4,5,5,6,11,8,10,10,26,27,29,30,29,26,24,18,18,16,13,6,5,5,5,5,7,10,13,12,13,13,27,29,27,28,30,25,22,20,19,18,13,7,6,5,5,6,9,12,14,15,16,16,28,29,27,28,29,24,21,19,19,18,14,7,7,6,5,6,9,12,14,16,17,16],
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

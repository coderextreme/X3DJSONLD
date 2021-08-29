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
        texture=ImageTexture(url=['../../images/5/newport20-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,11,13,12,12,10,13,12,12,10,10,12,13,11,12,17,12,16,10,8,8,8,13,11,10,13,11,15,12,14,11,9,10,11,12,11,16,16,13,15,12,12,8,8,13,10,10,8,10,12,10,7,11,8,8,12,12,16,14,15,11,11,10,14,10,9,12,11,7,5,7,7,5,8,9,10,10,9,14,16,11,11,11,9,11,12,10,11,8,9,8,6,8,6,5,7,7,10,10,12,11,13,11,11,9,7,8,8,9,10,7,5,6,9,6,5,8,8,9,8,9,13,13,15,12,13,13,12,8,4,6,6,9,8,9,9,6,15,12,8,9,13,14,17,17,14,14,11,12,12,7,7,6,6,9,10,10,10,16,11,11,10,21,13,14,19,21,17,15,12,14,12,13,11,9,8,9,11,10,17,16,15,13,17,14,16,15,17,20,20,25,16,12,13,11,12,10,10,9,10,10,14,14,13,18,17,15,18,18,21,20,21,18,16,11,11,11,11,9,9,10,13,12,11,13,13,17,13,17,17,18,17,19,16,15,17,13,9,3,0,8,9,9,9,11,13,11,13,15,14,14,14,15,10,9,11,15,15,14,6,1,6,9,8,8,12,10,7,12,10,8,16,12,14,11,11,10,8,8,7,11,9,11,9,5,4,10,8,10,11,11,12,13,13,14,11,11,7,8,9,12,9,10,6,9,7,6,8,8,10,7,13,12,18,14,12,11,11,12,10,7,12,10,9,9,11,6,10,10,9,11,9,12,16,12,13,13,13,13,9,13,10,8,9,10,12,15,7,12,10,9,8,10,10,12,15,14,14,14,14,13,13,11,11,10,10,5,4,4,15,14,12,15,14,9,13,14,14,15,13,14,15,14,11,10,9,14,4,4,5,9,13,13,18,13,14,11,14,17,19,16,15,13,11,12,11,9,12,11,9,5,4,7,10,12,15,15,15,15,14,17,18,17,17,16,11,11,11,10,11,11,10,9,12,12,11,10,11,14,13,18,24,15,15,19,16,15,17,13,11,14,11,12,11,12,14,12,13,15,16,17,17,17,20,18,14,20,19,14,13,12,13,13,14,13,12,13,17,14,17,17,15,15,16,21,16,20,21,21,17,15,15,13,13,15,11,12,11,14,16,17,18,17,17,17,17,20,15,19,22,23,17,15,13,14,12,15,11,13,11,14,15,17,18,17,16,17,17],
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

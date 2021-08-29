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
        texture=ImageTexture(url=['../../images/5/newport29-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[13,10,6,7,4,6,9,12,9,8,9,9,7,7,7,9,13,16,20,27,32,32,8,10,7,4,4,6,9,15,13,11,9,7,7,7,7,8,12,15,18,23,28,29,5,5,5,7,8,9,14,17,12,10,8,7,7,7,7,8,12,16,18,22,25,26,5,6,7,7,5,7,7,11,11,8,7,7,6,6,7,8,11,14,18,21,24,24,6,6,6,6,5,13,12,13,14,12,7,6,6,8,10,10,11,14,18,21,23,24,5,5,5,5,6,5,12,13,12,12,12,10,9,11,12,13,11,13,17,20,23,23,6,7,8,8,5,5,4,14,14,15,16,11,11,10,11,12,11,11,15,20,23,23,9,7,12,10,10,7,8,11,21,23,23,15,12,11,11,11,12,14,16,17,19,19,8,10,12,11,12,8,8,11,14,14,17,17,12,12,12,12,12,12,17,20,20,20,9,12,12,12,12,9,8,9,10,10,11,14,12,12,12,12,15,18,19,20,20,20,11,11,12,13,9,8,9,10,11,11,11,12,11,11,11,11,13,19,20,21,21,20,12,11,12,13,12,10,10,10,10,16,13,12,11,10,11,11,14,19,19,20,22,21,11,11,12,14,14,11,10,11,11,11,16,13,11,11,11,12,14,20,21,21,22,22,11,12,14,15,15,11,11,11,11,14,16,13,11,11,11,12,15,18,21,22,24,24,11,10,10,15,12,10,11,11,15,14,14,14,12,13,13,13,14,17,20,24,23,23,15,13,10,13,11,12,11,11,12,12,14,14,14,16,17,16,17,16,21,25,23,21,14,15,13,17,14,11,11,12,16,15,15,14,16,13,13,14,15,18,18,20,17,17,15,16,15,15,14,14,11,16,20,18,18,14,12,13,14,14,15,16,16,16,17,18,14,17,17,17,13,12,11,15,19,20,21,17,14,14,14,14,13,15,15,16,18,19,18,18,18,18,14,11,11,14,17,20,24,23,19,16,14,14,14,13,15,17,19,19,18,18,19,18,19,17,14,15,13,16,23,21,20,18,16,15,15,15,16,16,18,18,12,18,18,18,18,15,14,11,19,16,16,18,20,20,17,14,14,15,15,16,18,18,12,16,13,10,20,21,15,11,11,16,14,15,17,18,15,14,16,16,15,16,17,17,12,14,14,10,20,21,14,11,12,17,14,14,16,17,14,14,16,16,15,15,17,17],
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

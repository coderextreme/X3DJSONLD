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
        texture=ImageTexture(url=['../../images/5/newport29-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,18,20,22,23,23,24,24,24,23,23,22,21,20,21,22,22,22,22,22,22,22,17,16,19,21,22,23,24,24,24,24,23,22,21,21,21,23,23,23,22,22,22,22,15,14,16,19,24,24,24,24,24,24,23,23,22,21,22,23,23,23,22,22,22,22,14,11,16,21,24,24,24,24,24,24,23,23,23,22,24,24,23,23,22,22,21,21,10,10,16,22,24,24,24,24,24,24,24,23,23,23,23,23,23,22,21,21,20,20,8,9,11,19,25,25,24,24,24,24,24,23,23,23,23,23,23,22,21,20,19,18,7,7,11,14,23,24,25,25,24,24,24,24,24,24,24,24,23,22,21,20,18,18,7,7,8,11,19,23,25,25,25,25,24,24,24,24,24,23,23,22,21,20,20,20,8,7,6,11,21,24,25,25,25,24,24,24,24,23,23,24,24,23,22,22,21,21,8,7,7,15,18,23,24,25,25,24,24,24,24,23,22,22,21,21,21,21,21,21,8,8,8,8,9,23,24,24,24,24,24,24,24,23,22,21,21,20,20,18,19,19,8,8,7,11,11,17,23,24,24,24,24,24,23,23,22,22,21,21,21,19,16,15,7,6,5,7,8,8,20,22,23,23,23,24,24,24,23,23,22,22,21,19,16,16,6,5,5,5,5,6,10,19,21,22,23,24,24,24,24,23,22,22,21,20,16,16,11,7,5,4,4,4,6,13,17,19,22,23,23,23,23,23,22,22,21,20,16,15,12,9,6,3,3,3,4,6,12,15,17,20,20,23,23,23,20,19,19,18,6,5,14,9,6,3,2,2,3,4,5,5,7,10,11,14,17,16,13,9,8,6,2,2,24,19,7,3,2,2,2,3,3,4,4,5,5,6,7,5,5,5,5,4,4,4,25,25,10,6,5,4,4,2,2,2,3,3,3,4,4,4,4,4,3,3,3,3,26,25,19,12,12,12,11,5,4,3,3,2,2,2,2,3,3,2,2,2,3,3,26,25,25,23,24,24,22,19,11,5,4,4,4,4,3,3,3,3,2,4,8,9,26,26,26,26,26,25,26,25,25,24,19,8,5,7,7,6,6,6,7,10,13,13,25,26,26,26,26,25,25,25,25,24,8,9,13,12,11,9,8,10,15,16,18,19,25,26,26,26,26,25,25,25,25,24,6,12,13,12,12,10,9,11,17,18,19,20],
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

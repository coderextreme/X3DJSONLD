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
        texture=ImageTexture(url=['../../images/5/newport15-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[7,14,16,16,16,18,14,13,12,15,18,18,4,0,0,0,0,0,0,0,0,0,10,15,15,14,14,17,14,11,12,14,15,16,2,0,0,0,0,0,0,0,0,0,12,15,16,16,18,19,15,13,12,15,14,15,1,0,0,0,0,0,0,0,0,0,12,15,18,18,17,17,15,14,15,17,17,16,12,0,0,0,0,0,0,0,0,0,12,15,17,18,19,21,20,15,17,19,19,17,16,0,0,0,0,0,0,0,0,0,13,15,18,18,19,22,21,17,18,21,21,18,16,0,0,0,0,0,0,0,0,0,17,18,18,19,21,21,20,18,19,21,21,18,15,6,0,0,0,0,0,0,0,0,17,19,20,20,20,21,19,18,20,21,22,20,16,5,0,0,0,0,0,0,0,0,19,21,22,21,20,19,18,18,21,23,23,20,16,3,0,0,0,0,0,0,0,0,18,21,22,21,20,18,17,18,22,25,24,19,15,1,0,0,0,0,0,0,0,0,20,23,25,24,20,18,17,18,21,22,22,18,14,0,0,0,0,0,0,0,0,0,20,23,25,23,20,18,18,21,22,23,21,17,11,0,0,0,0,0,0,0,0,0,21,23,26,24,24,22,21,22,24,24,20,14,8,0,0,0,0,0,0,0,0,0,22,26,27,26,25,25,24,26,25,21,17,12,5,1,0,0,0,0,0,0,0,0,21,26,28,27,26,26,26,27,25,22,16,10,4,0,0,0,0,0,0,0,0,0,19,23,25,26,27,28,28,28,26,22,17,8,1,0,0,0,0,0,0,0,0,0,16,20,23,24,27,27,26,27,25,20,15,6,0,0,0,0,0,0,0,0,0,0,14,17,19,21,23,24,21,23,21,16,11,4,0,0,0,0,0,0,0,0,0,0,9,13,16,19,19,18,18,18,17,13,8,0,0,0,0,0,0,0,0,0,0,0,9,11,13,17,18,16,14,14,13,8,5,0,0,0,0,0,0,0,0,0,0,0,9,9,12,15,18,14,12,11,9,5,3,1,0,0,0,0,0,0,0,0,0,0,12,12,13,15,18,15,13,11,9,6,4,3,3,3,4,3,4,0,0,0,0,0,15,15,16,18,18,17,17,14,11,8,8,7,5,5,8,7,5,2,1,1,0,0,16,16,16,18,18,17,17,14,11,9,8,7,5,5,9,8,6,2,1,1,1,0],
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

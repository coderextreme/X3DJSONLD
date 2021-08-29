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
        texture=ImageTexture(url=['../../images/5/newport15-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,2,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,2,3,4,5,4,2,4,5,2,0,0,0,0,0,0,0,0,0,0,3,5,6,5,5,6,6,3,5,9,7,2,0,0,0,0,0,0,0,0,0,0,5,7,8,7,6,7,6,5,8,9,5,1,0,0,0,0,0,0,0,0,0,0,5,8,9,9,8,8,7,8,9,8,3,1,0,0,0,0,0,0,0,0,0,0,7,8,10,11,12,10,8,10,9,4,2,1,1,4,5,4,3,0,0,0,0,0,10,10,11,13,13,12,11,10,8,3,1,1,4,9,11,10,6,3,0,0,0,0,12,13,14,15,14,12,11,9,6,2,2,3,8,13,14,12,9,4,0,0,0,0,13,15,17,16,14,12,9,7,3,4,5,8,12,16,14,10,7,0,0,0,0,0,16,18,19,16,13,11,8,6,7,8,9,12,15,16,14,9,2,0,0,0,0,0,19,20,21,17,12,10,9,11,11,12,14,17,18,15,12,8,0,0,0,0,0,0,21,23,21,15,12,12,13,13,14,15,17,18,17,14,11,7,0,0,0,0,0,0,23,23,16,14,13,13,15,16,16,18,19,17,14,12,10,5,0,0,0,0,0,0,26,21,16,14,14,16,17,19,20,20,17,15,13,11,5,1,0,0,0,0,0,0,25,20,15,15,16,18,19,21,21,18,16,13,11,7,2,1,1,0,0,0,0,0,21,17,15,17,18,19,20,20,19,17,15,12,8,4,1,1,1,3,1,0,0,0,18,17,18,18,18,19,19,19,18,15,13,10,7,2,1,1,4,2,0,0,0,0,18,19,19,19,19,19,18,18,15,13,11,9,4,2,1,2,1,0,0,0,0,0,20,21,21,20,19,19,18,16,14,12,9,5,2,2,1,1,1,1,1,0,2,2,21,21,21,20,20,19,18,16,14,11,8,5,2,2,1,1,1,1,1,0,3,3],
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

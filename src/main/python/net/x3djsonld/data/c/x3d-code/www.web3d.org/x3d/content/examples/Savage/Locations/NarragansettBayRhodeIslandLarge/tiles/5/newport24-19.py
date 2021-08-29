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
        texture=ImageTexture(url=['../../images/5/newport24-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.37349911997524,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[32,25,20,17,12,7,5,2,5,10,0,0,0,0,0,0,0,0,0,0,0,0,28,22,19,17,13,12,8,7,4,11,16,0,0,0,0,0,0,0,0,0,0,0,27,23,21,19,18,15,12,10,8,10,6,3,2,0,0,0,0,0,0,0,0,0,25,25,24,19,21,19,20,16,10,7,4,2,0,0,0,0,0,0,0,0,0,0,24,23,21,21,23,24,23,19,13,5,2,0,0,0,0,0,0,0,0,0,0,0,23,20,19,17,22,27,25,19,17,7,1,0,0,0,0,0,0,0,0,0,0,0,18,17,18,20,22,23,24,25,18,3,0,0,0,0,0,0,0,0,0,0,0,0,17,15,16,20,21,21,22,22,15,7,0,0,0,0,0,0,0,0,0,0,0,0,14,15,14,15,18,21,22,20,16,10,0,0,0,0,0,0,0,0,0,0,0,0,14,13,13,17,16,22,20,18,13,10,0,0,0,0,0,0,0,0,0,0,0,0,15,15,16,18,18,20,19,16,11,7,0,0,0,0,0,0,0,0,0,0,0,0,17,18,18,18,21,20,20,17,11,4,3,0,0,0,0,0,0,0,0,0,0,0,19,19,20,20,23,23,21,15,13,8,2,1,0,0,0,0,0,0,0,0,0,0,21,20,20,22,24,23,20,18,13,10,2,1,0,0,0,0,0,0,0,0,0,0,20,20,22,24,22,23,18,17,13,9,2,1,0,0,0,0,0,0,0,0,0,0,24,22,22,21,22,20,17,15,12,6,2,0,0,0,0,0,0,0,0,0,0,0,23,21,21,21,19,19,17,15,9,4,2,0,0,0,0,0,0,0,0,0,0,0,19,21,22,20,19,17,15,12,7,2,2,0,0,0,0,0,0,0,0,0,0,0,14,21,21,20,19,16,12,9,8,5,0,0,0,0,0,0,0,0,0,0,0,0,11,16,18,15,15,13,10,7,5,1,0,0,0,0,0,0,0,0,0,0,0,0,9,13,11,12,12,7,12,6,5,3,0,0,0,0,0,0,0,0,0,0,0,0,5,7,9,9,6,8,5,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,2,2,7,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,4,2,1,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0],
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

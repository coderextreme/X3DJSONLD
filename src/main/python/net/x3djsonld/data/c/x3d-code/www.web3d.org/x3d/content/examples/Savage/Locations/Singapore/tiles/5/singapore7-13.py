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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore7-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.77655544367725,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,10,11,12,6,0,-3,-8,-7,-5,-4,-2,0,0,2,5,6,7,7,8,8,8,8,8,8,7,7,7,6,5,5,5,5,6,6,7,7,9,11,12,12,6,0,-3,-8,-7,-7,-5,-2,0,0,2,5,6,7,7,8,8,8,9,8,8,7,7,7,7,6,6,5,5,5,6,7,8,10,12,11,11,6,0,-2,-7,-8,-8,-6,-2,0,0,3,5,6,7,7,7,8,9,9,9,8,7,7,7,7,7,6,6,6,6,6,7,9,11,12,11,10,6,2,0,-5,-7,-8,-6,-4,-1,1,3,6,7,8,8,7,8,9,9,8,8,8,8,8,8,7,7,7,7,7,6,7,9,11,10,10,10,7,5,0,-4,-5,-5,-6,-8,-2,3,5,5,7,9,9,8,7,7,7,7,7,7,8,9,9,8,8,8,7,6,6,6,7,10,9,10,10,11,10,4,0,-1,-2,-4,-5,0,5,6,5,7,10,10,8,7,7,7,7,7,8,8,9,9,9,8,8,7,6,6,6,6,8,8,10,12,15,17,11,5,2,0,0,0,2,7,8,7,8,9,9,8,7,7,7,8,8,8,8,8,9,9,9,8,7,6,6,6,6,8,8,12,17,18,20,15,10,6,2,2,3,5,8,8,8,8,8,8,7,7,7,7,8,9,8,7,8,8,9,9,8,7,7,6,6,6,9,7,14,22,21,20,17,15,10,6,6,7,7,6,6,7,8,8,8,7,7,7,8,9,9,7,7,7,8,9,10,10,9,8,7,7,7,13,7,15,23,22,22,19,16,12,8,8,8,7,5,6,7,8,8,8,7,7,8,9,10,9,7,7,8,9,11,13,12,11,10,8,8,8,19,7,13,19,22,24,20,16,12,9,8,6,6,5,6,7,8,8,8,9,9,9,10,10,9,9,9,10,12,15,16,15,13,11,9,9,8,18,6,10,15,19,23,19,15,12,9,7,6,6,6,6,7,8,9,9,10,10,10,10,10,9,10,11,12,14,16,17,16,14,12,10,10,9,11,2,6,11,15,19,16,12,10,9,8,7,8,9,9,8,9,9,10,11,11,11,11,10,10,11,12,14,15,16,17,15,13,12,10,10,9,4,0,3,7,11,15,13,10,9,8,9,8,9,10,10,9,9,10,10,11,11,11,11,11,11,11,13,15,16,17,16,14,12,11,10,10,10,0,-4,0,5,9,12,10,8,7,6,8,9,10,10,10,9,10,11,12,11,11,11,11,11,12,13,14,15,16,16,15,12,9,10,10,10,12,-2,-5,0,5,8,11,9,7,7,6,8,10,9,9,9,8,10,12,13,12,11,11,11,13,14,14,15,16,17,15,13,11,9,9,10,12,14,-1,-4,1,7,8,10,9,8,9,10,9,9,8,7,6,6,8,11,13,13,14,13,14,17,18,16,16,17,16,14,12,11,9,9,10,14,18,0,-2,2,8,9,10,9,9,10,11,10,9,7,6,5,5,7,10,13,14,16,17,18,21,21,18,17,17,15,14,12,11,11,11,13,17,22,3,2,3,6,7,8,8,8,8,9,9,9,8,7,7,6,7,10,13,15,18,21,23,25,25,21,17,15,14,13,13,14,15,15,17,22,27,5,5,5,6,7,8,8,8,8,8,8,9,9,10,9,8,9,11,14,17,22,26,28,30,28,22,18,15,13,13,15,17,19,21,24,29,34,5,5,6,7,8,9,10,12,11,8,8,8,10,12,13,13,15,17,20,22,26,32,33,34,30,23,18,15,14,15,17,19,22,28,34,39,44,6,5,6,8,9,10,13,15,12,9,8,8,10,13,15,18,20,23,25,27,31,36,37,35,31,23,18,16,15,17,19,21,26,34,43,48,53],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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

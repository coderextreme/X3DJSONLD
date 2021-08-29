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
        texture=ImageTexture(url=['../../images/5/singapore7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.70474027303216,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[8,8,7,6,5,4,4,5,6,7,5,2,0,-1,0,4,6,6,6,7,7,7,8,10,11,11,11,10,9,8,8,9,10,10,11,11,9,9,8,6,3,2,2,2,3,4,4,2,0,0,0,3,6,6,7,8,8,8,9,12,13,13,12,11,10,9,9,9,10,10,10,10,11,10,8,5,2,0,0,0,0,1,2,3,3,2,2,4,6,8,9,10,10,9,10,14,16,15,14,12,11,10,9,10,10,10,10,10,12,11,8,5,1,-1,-4,-7,-6,-2,0,1,2,3,4,6,8,11,11,9,8,9,10,14,16,15,15,13,11,9,9,10,10,11,11,10,13,10,8,5,1,-3,-10,-15,-13,-7,-3,-1,0,2,5,8,12,16,15,8,5,8,11,12,14,16,16,13,10,9,8,9,10,10,11,10,12,10,7,4,0,-4,-11,-17,-15,-9,-5,-3,0,2,5,8,12,15,14,6,3,7,10,11,13,15,16,12,9,8,8,8,9,10,10,9,9,7,5,2,0,-4,-9,-13,-13,-9,-6,-2,0,2,5,9,11,12,10,3,2,6,9,10,11,13,14,11,8,7,7,8,8,10,10,9,6,4,2,0,0,-2,-5,-8,-8,-6,-3,0,5,10,14,16,17,16,12,8,7,9,12,14,15,15,14,11,9,8,7,7,7,9,9,8,4,1,0,0,0,0,-1,-3,-3,-2,0,6,15,25,30,30,28,24,20,18,17,17,18,21,22,18,15,12,11,9,8,6,6,7,8,7,2,0,-1,0,0,0,0,0,0,1,4,10,19,30,36,37,35,30,26,25,24,23,22,25,24,19,15,13,12,11,10,8,7,8,8,8,1,-1,-1,-1,0,0,2,3,4,5,7,10,17,25,32,37,38,33,30,29,28,27,25,24,22,18,15,14,14,14,14,12,10,10,10,10,1,0,-1,-1,0,1,3,5,6,7,8,10,14,20,27,32,34,33,31,30,30,28,26,23,20,18,16,14,13,15,16,14,12,11,11,10,2,0,0,-1,0,2,4,5,6,7,7,9,13,18,22,23,25,27,28,29,28,25,23,21,19,18,16,13,12,14,15,13,10,9,8,10,5,3,0,0,0,3,4,5,5,6,7,9,13,18,19,17,18,21,24,26,25,22,20,19,18,17,15,12,10,13,14,12,10,7,6,9,7,5,3,2,2,3,4,5,4,4,6,10,14,18,19,16,16,18,19,20,20,19,17,15,13,13,12,10,10,14,15,12,10,7,5,8,8,7,5,4,3,4,4,5,4,4,6,10,14,17,18,16,15,16,16,16,15,15,14,11,10,11,11,10,10,14,16,13,10,7,6,7,9,9,7,5,4,4,4,5,5,5,7,9,12,14,15,16,16,16,16,14,13,13,12,10,9,11,11,10,11,15,17,13,9,7,7,8,10,10,8,6,4,4,5,6,7,7,9,9,10,12,14,15,17,16,15,13,11,10,9,9,9,10,11,11,12,14,15,12,9,8,8,9,12,11,9,7,5,5,5,6,7,9,10,11,12,13,14,15,15,15,13,12,10,8,7,8,9,10,11,11,11,10,11,10,10,10,11,11,12,11,10,8,6,6,6,6,7,9,11,13,13,14,14,14,14,13,12,11,10,7,6,8,9,10,10,10,9,7,6,8,10,12,13,13,12,12,11,9,8,8,7,6,7,9,11,12,12,13,13,12,11,11,11,11,10,8,7,9,9,8,7,8,7,5,5,7,10,12,13,11,11,12,11,10,10,9,7,6,7,9,11,11,12,11,10,9,8,9,10,10,10,8,8,9,9,7,5,6,6,4,4,7,9,11,12,10],
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

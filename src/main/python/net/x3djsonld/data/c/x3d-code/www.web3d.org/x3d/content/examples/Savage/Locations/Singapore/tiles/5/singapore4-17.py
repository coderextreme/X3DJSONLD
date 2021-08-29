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
        texture=ImageTexture(url=['../../images/5/singapore4-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.83400758019333,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[39,43,43,40,33,25,24,26,29,31,27,21,16,11,8,5,2,0,1,3,3,3,4,5,6,8,8,8,4,-1,-6,-9,-7,-1,3,4,3,47,51,50,45,34,26,27,32,35,36,30,23,17,12,9,6,4,1,3,6,7,6,5,5,8,12,13,10,7,3,0,0,0,2,3,4,4,54,57,55,49,40,32,34,39,40,38,31,23,17,11,9,7,5,3,5,7,7,7,6,7,10,15,15,11,7,5,4,4,4,4,3,4,4,58,60,57,52,48,45,45,47,44,38,29,19,14,10,8,6,5,5,5,6,6,7,9,11,13,17,15,11,7,5,4,4,4,4,4,4,4,64,65,62,58,56,55,53,50,44,35,25,15,10,5,4,5,5,7,7,6,6,7,9,12,14,16,14,10,6,5,4,4,4,4,4,4,4,73,73,71,68,66,62,55,45,37,28,20,12,4,-1,0,1,4,8,8,7,6,7,7,8,9,11,10,8,6,5,4,4,4,4,4,3,3,79,78,76,73,69,62,51,39,30,23,16,9,2,-4,-3,0,4,8,9,8,7,6,6,6,6,6,7,7,6,5,4,4,4,4,4,3,3,80,80,75,69,61,52,41,30,23,18,14,9,3,-1,0,2,5,9,9,7,7,6,6,5,5,5,6,7,6,6,5,5,5,4,3,3,3,77,77,70,60,51,41,31,22,18,15,12,10,6,1,2,4,7,10,9,6,6,6,6,4,4,5,6,7,7,7,7,6,6,4,3,3,3,68,65,57,47,38,30,24,18,16,15,14,13,9,5,5,6,7,8,7,4,5,7,6,4,5,7,9,10,10,9,8,7,7,6,5,6,7,59,54,45,35,29,22,19,15,15,15,15,15,12,9,8,8,8,7,5,3,4,7,7,4,5,8,10,12,13,11,9,8,7,6,6,8,10,49,44,37,30,25,22,16,12,13,16,16,16,14,11,9,8,7,6,5,4,4,5,5,4,2,1,4,11,14,12,8,6,5,5,6,8,9,40,36,30,25,22,19,14,9,11,15,17,17,15,13,10,7,6,5,5,4,4,5,3,2,0,-2,0,9,14,12,8,5,4,5,6,7,8,32,29,27,24,21,15,9,4,7,11,14,17,15,12,9,7,6,5,5,5,4,3,1,0,0,0,2,8,11,10,8,5,4,5,5,6,7,24,22,23,23,17,11,5,1,2,6,11,16,14,11,9,6,6,5,5,5,3,1,0,-3,-2,0,3,6,7,8,8,6,5,5,5,5,6,22,20,18,16,11,6,2,0,1,3,6,9,9,9,7,4,4,6,6,5,3,0,-2,-3,-1,0,3,5,7,8,8,6,5,5,5,5,6,20,17,14,10,6,3,1,0,0,0,1,3,4,5,5,3,5,7,7,7,3,-2,-3,-1,0,0,3,5,6,7,7,6,5,5,5,5,6,14,12,10,8,5,3,1,0,0,1,2,3,4,4,4,5,7,10,10,10,9,6,6,7,7,8,8,8,7,7,6,6,6,5,5,5,6,8,7,7,7,6,4,1,0,0,2,3,3,4,3,5,7,10,12,14,15,15,16,16,15,15,15,14,10,8,7,6,6,6,5,5,5,6,7,7,7,8,9,9,7,6,6,5,5,4,4,5,7,9,11,13,14,15,16,16,17,16,15,15,13,12,10,8,7,6,5,5,5,5,5,7,7,7,9,12,15,15,14,12,10,6,3,5,7,10,11,12,13,14,16,16,17,17,16,15,13,13,12,11,9,7,6,5,5,5,5,5,5,5,7,10,13,15,17,17,16,13,10,7,8,11,11,10,11,13,15,18,18,17,15,14,12,12,11,11,11,13,14,16,17,17,16,16,17],
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

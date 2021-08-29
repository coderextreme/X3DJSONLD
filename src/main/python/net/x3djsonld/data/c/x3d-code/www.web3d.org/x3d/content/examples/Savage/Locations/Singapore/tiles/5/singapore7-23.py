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
        texture=ImageTexture(url=['../../images/5/singapore7-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.92018578496744,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[7,-2,-8,0,8,15,20,22,21,16,9,5,1,0,-2,-4,-4,-3,-1,1,6,10,12,11,4,1,4,5,3,1,1,1,0,1,5,8,4,6,-3,-8,-3,3,10,16,19,20,16,11,6,1,-1,-4,-5,-5,-4,-2,1,7,12,13,11,7,5,4,3,2,1,0,0,-1,0,4,8,4,3,-1,-5,-3,0,5,10,15,17,14,10,6,1,-2,-6,-7,-6,-5,-4,0,9,14,12,11,11,9,5,3,4,3,0,-2,-1,0,4,7,3,1,0,0,-1,0,3,9,14,16,16,13,6,-1,-5,-8,-9,-7,-5,-3,1,8,13,12,12,12,10,7,6,8,8,4,1,0,0,4,6,2,1,3,4,0,-1,3,11,15,17,19,17,7,-5,-10,-10,-9,-7,-4,-1,2,7,11,12,12,10,9,8,10,13,15,12,9,5,2,4,4,1,2,7,10,8,7,11,15,17,19,21,20,8,-5,-11,-9,-7,-5,-2,1,6,9,11,12,12,11,11,11,13,16,16,14,10,6,3,4,4,3,6,10,14,18,21,22,22,21,21,22,22,10,-3,-8,-6,-4,-2,1,7,11,12,12,12,12,12,13,14,16,16,15,12,8,4,1,3,5,5,12,16,20,24,25,23,19,16,15,18,20,12,0,-4,-3,-1,0,5,10,13,13,13,12,12,12,13,15,16,15,13,9,5,2,1,3,5,6,20,24,26,25,21,16,10,6,5,11,18,14,5,0,0,1,5,9,12,14,14,13,12,12,13,13,14,14,13,11,6,2,2,2,3,4,5,25,27,26,21,16,10,4,1,1,7,15,14,8,4,2,5,10,13,14,14,14,13,13,13,13,13,13,13,12,10,6,3,3,3,3,4,4,28,25,21,15,9,4,2,1,2,6,11,11,10,7,6,9,15,17,16,15,14,14,13,13,12,12,13,13,12,12,9,8,7,6,5,4,4,26,21,15,9,4,2,1,2,4,6,8,9,10,9,9,12,17,19,18,17,15,13,13,12,12,12,12,13,13,13,13,11,10,7,5,3,3,21,14,9,5,2,1,1,2,4,5,7,9,9,9,10,12,16,18,19,18,15,13,12,11,11,11,12,14,15,15,14,12,11,9,4,1,1,15,9,5,3,2,2,2,3,4,5,7,8,8,9,10,11,13,15,17,17,13,11,11,10,9,9,11,13,15,16,16,15,11,8,4,1,1,9,6,3,2,2,2,2,3,4,5,7,7,7,8,8,9,10,10,11,10,7,7,7,7,7,7,9,11,13,16,20,20,11,3,3,2,2,5,3,3,2,2,2,2,3,4,5,6,6,6,6,6,6,6,6,5,4,2,2,4,5,5,6,6,8,12,17,24,25,12,3,4,4,4,3,3,3,2,2,2,2,3,4,4,4,4,4,3,3,3,3,2,1,0,0,0,1,3,5,6,3,5,12,20,26,27,16,8,7,6,7,3,3,3,2,2,2,2,2,3,3,2,2,2,1,1,0,0,0,-1,-2,-3,-2,-1,2,6,8,5,6,13,21,26,28,20,13,10,9,11,3,2,2,2,2,2,2,2,2,1,1,0,0,0,0,0,0,-1,-2,-3,-3,-3,-2,1,9,14,15,15,18,21,23,23,19,15,13,12,14,3,2,2,2,2,2,1,1,0,0,0,0,0,0,0,0,-1,-2,-2,-3,-3,-2,-1,2,13,20,23,24,22,20,19,18,16,15,14,15,16,2,2,2,2,2,1,0,0,0,0,0,0,0,0,0,-1,-1,-2,-2,-2,-2,0,3,9,19,25,27,27,22,17,14,12,13,13,14,15,18,2,2,2,2,1,0,0,0,0,0,0,0,-1,-1,-1,-1,-2,-2,-2,-1,-1,2,9,17,24,28,29,27,21,15,10,8,10,12,14,15,17],
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

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
        texture=ImageTexture(url=['../../images/5/singapore7-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.76219240954823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[6,5,4,1,1,0,-2,-5,-8,-10,-13,-16,-15,-12,-7,0,2,5,7,10,13,19,21,21,21,19,15,9,4,2,1,2,3,3,5,7,6,5,3,1,0,-1,-3,-5,-7,-9,-11,-13,-11,-7,-2,2,5,7,9,11,14,18,21,22,22,20,16,9,4,3,3,3,4,5,7,9,5,4,2,1,0,-1,-2,-4,-6,-8,-9,-9,-5,0,2,5,7,10,11,11,14,17,21,23,23,22,18,9,4,5,5,5,6,7,9,10,4,3,2,0,0,-1,-2,-4,-5,-5,-5,-5,-2,1,4,6,8,10,11,12,13,15,18,21,22,21,18,11,7,7,7,7,7,8,10,11,2,3,1,0,-1,-2,-3,-4,-4,-3,-2,-1,0,3,5,7,9,10,10,10,11,13,16,18,20,19,17,14,11,9,8,8,8,10,11,11,0,2,2,3,1,-1,-2,-3,-3,-1,0,0,1,3,4,6,8,10,10,10,11,12,14,15,17,17,17,17,16,13,11,8,7,9,10,10,0,1,5,8,5,1,0,-3,-2,0,0,0,1,1,2,5,7,10,10,10,11,11,12,12,13,16,18,20,21,18,15,8,4,6,7,8,-4,-1,3,8,6,4,1,-1,-1,0,0,1,1,1,2,5,7,9,10,10,11,11,11,11,13,17,21,25,26,23,18,12,8,8,8,8,-8,-7,-1,3,6,8,5,1,0,0,0,0,1,1,2,5,6,7,8,10,10,10,11,11,14,20,25,30,32,27,21,17,14,13,12,9,-9,-10,-5,-1,3,8,7,5,2,0,0,0,1,2,4,6,8,10,11,10,10,10,10,11,13,19,24,28,30,26,23,23,24,23,20,13,-10,-10,-8,-7,-2,3,6,8,5,1,0,1,2,4,6,9,13,17,17,12,10,10,10,10,11,15,19,20,21,22,24,30,35,35,32,19,-6,-7,-9,-10,-6,-1,2,8,5,2,1,2,4,5,8,11,14,18,18,13,11,11,10,10,11,14,16,16,16,20,24,31,37,36,32,18,-1,-3,-6,-10,-8,-6,-2,3,3,3,3,4,5,6,8,10,11,12,13,13,13,11,10,10,11,14,16,16,16,20,23,27,28,25,20,11,7,4,0,-6,-8,-9,-6,-1,0,4,5,5,6,7,8,9,9,7,9,13,14,12,10,10,11,15,16,16,16,20,23,23,21,16,9,4,20,18,9,0,-3,-9,-8,-6,-1,3,6,6,6,6,7,7,6,6,7,12,13,12,10,10,11,14,16,16,16,20,23,22,19,12,3,0,29,27,19,10,2,-5,-7,-8,-3,3,5,6,6,6,6,5,5,5,7,11,12,12,10,10,11,14,15,16,17,20,22,20,17,9,0,-2,29,28,23,19,10,1,-2,-6,-2,2,4,5,5,5,5,5,5,6,7,10,12,12,11,10,11,12,13,14,15,16,17,15,12,7,1,-1,27,27,26,24,17,9,4,-1,0,3,4,5,5,5,5,5,6,7,8,10,11,12,12,11,11,11,12,12,12,14,14,11,8,6,2,0,26,25,25,24,21,17,12,7,7,8,8,9,7,5,5,5,6,7,8,8,9,12,13,13,12,11,11,10,11,12,12,9,6,5,5,3,24,24,24,24,22,21,18,14,12,12,12,12,11,9,8,7,7,7,7,7,8,10,13,14,14,11,10,10,10,10,11,8,6,6,6,5,23,23,23,23,22,21,18,15,14,13,14,15,17,19,17,13,10,7,6,6,7,7,10,14,15,13,11,10,10,9,8,7,7,7,7,5,21,22,22,22,21,19,17,15,14,14,15,17,21,26,25,19,13,9,6,6,6,5,8,14,16,13,12,11,10,8,7,8,9,9,8,6],
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

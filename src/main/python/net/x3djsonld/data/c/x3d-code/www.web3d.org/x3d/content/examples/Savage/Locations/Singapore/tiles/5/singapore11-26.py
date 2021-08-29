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
        texture=ImageTexture(url=['../../images/5/singapore11-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3083120993579338,103.9632748873545,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[18,15,12,8,5,4,4,3,2,2,0,-1,-5,-7,-9,-10,-10,-10,-9,-8,-6,-3,0,1,1,1,1,1,1,2,2,2,0,0,-1,-3,23,20,17,13,9,8,7,7,6,4,0,-2,-7,-9,-10,-10,-9,-9,-9,-6,-3,-1,0,1,1,1,0,0,0,0,0,1,0,0,0,-2,25,24,22,20,17,17,16,16,15,10,4,-1,-7,-10,-10,-10,-9,-8,-6,-3,-1,0,0,1,1,0,0,0,0,0,1,2,2,1,0,0,26,26,26,25,24,24,23,23,22,17,11,5,0,-3,-6,-7,-7,-6,-3,-1,0,0,1,1,1,0,0,0,0,0,2,3,2,2,1,0,27,27,27,26,26,25,25,25,24,23,21,19,17,10,2,-1,-2,-2,0,0,0,1,1,0,0,0,0,0,0,1,2,3,3,3,2,1,27,27,27,26,26,25,25,25,25,27,29,30,30,21,10,4,3,1,1,1,1,1,1,0,0,0,0,0,1,2,2,2,4,3,3,2,28,27,27,26,26,25,25,26,28,31,34,33,29,21,13,8,8,6,5,3,1,0,0,0,0,0,0,0,1,1,2,2,3,4,3,3,28,28,27,26,26,25,25,28,31,33,34,30,23,17,13,11,11,10,8,6,3,2,0,0,0,0,0,0,1,1,2,2,3,4,4,4,29,28,28,26,26,26,27,31,34,33,29,24,18,14,13,12,12,12,11,10,8,5,2,0,0,0,0,0,1,2,3,4,4,4,4,5,30,29,28,26,26,27,30,32,34,30,22,18,14,12,13,13,13,13,13,13,11,9,4,1,1,1,1,1,3,5,6,6,6,6,5,6,32,29,27,26,26,30,33,32,29,24,17,14,12,12,13,13,13,13,13,13,12,9,6,4,4,4,4,4,6,8,9,10,9,8,6,6,32,28,25,26,27,32,34,29,22,17,13,12,13,13,13,13,14,14,13,12,11,9,8,7,7,7,7,8,9,10,12,13,12,10,8,6,24,22,21,26,31,31,29,23,16,13,12,12,13,13,13,13,13,13,13,11,10,9,9,9,9,9,9,9,9,10,12,13,13,12,10,8,13,14,17,26,33,28,21,16,12,11,12,12,13,13,14,14,13,12,12,10,9,9,9,9,9,9,9,9,9,9,10,11,14,14,13,11,9,11,13,21,26,21,16,12,10,10,12,12,13,13,14,13,13,12,11,9,9,9,9,9,9,9,9,9,9,9,10,11,12,13,13,13,9,10,11,14,16,14,11,10,9,10,11,13,14,14,13,13,12,11,10,9,9,9,9,9,9,9,9,9,9,10,10,10,11,11,13,14,9,10,11,11,11,10,8,9,9,10,11,11,12,12,12,12,11,11,10,9,9,9,9,9,9,9,9,9,9,10,10,11,10,10,11,13,10,11,11,10,9,8,7,8,9,10,10,9,9,10,10,11,11,11,10,9,9,9,10,10,9,9,9,9,9,10,11,11,10,9,9,10,10,11,11,10,9,8,7,8,8,8,8,8,8,8,9,9,10,10,9,9,8,8,9,10,9,9,9,9,9,10,10,10,9,8,8,9,9,10,11,10,10,9,8,7,6,6,6,7,7,7,7,7,8,8,8,8,8,8,9,9,9,9,10,10,10,9,9,8,8,8,8,8,9,10,11,11,10,10,10,8,6,7,7,8,8,8,8,8,8,8,8,8,8,8,9,9,9,9,10,11,11,10,9,8,8,8,8,8,10,10,10,10,10,11,11,9,7,9,10,11,11,11,11,10,9,8,8,8,8,9,10,10,9,10,11,13,12,11,10,9,7,7,8,8,8,9,9,10,10,11,11,9,8,10,11,12,12,12,11,10,10,10,9,8,9,9,9,9,9,10,12,13,12,11,10,9,7,7,8,8],
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

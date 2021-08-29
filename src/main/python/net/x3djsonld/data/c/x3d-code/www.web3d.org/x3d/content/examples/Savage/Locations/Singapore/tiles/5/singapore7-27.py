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
        texture=ImageTexture(url=['../../images/5/singapore7-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.273385249845958,103.97763792148352,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[2,3,4,3,2,0,-3,2,8,11,14,12,11,9,7,6,4,7,12,14,12,10,6,7,13,20,27,30,29,29,26,23,19,16,8,1,0,4,6,7,5,3,0,-1,1,6,7,8,6,4,4,4,4,3,7,12,13,11,8,3,5,15,22,27,29,27,26,25,22,19,15,9,4,4,6,7,9,6,3,0,0,1,3,1,0,-2,-5,-3,0,2,3,8,13,14,11,7,1,4,16,24,25,25,24,23,24,23,17,12,13,13,11,6,8,10,6,3,2,1,0,0,0,-1,-4,-7,-5,-2,0,3,6,10,11,11,8,5,9,20,27,26,25,24,23,24,22,12,7,10,14,13,5,9,11,7,4,4,5,2,0,0,0,-3,-6,-5,-4,0,3,4,4,6,10,11,11,16,26,30,29,27,27,25,23,19,7,1,5,9,10,3,8,12,7,4,5,8,3,0,0,0,1,0,-1,-1,1,6,9,11,14,17,18,18,21,27,30,29,28,27,25,20,14,5,0,4,8,10,0,6,11,7,5,6,9,4,0,1,4,7,9,7,4,7,11,18,27,30,28,27,24,25,27,28,27,26,26,23,15,8,4,2,6,10,13,1,6,11,8,5,7,9,5,0,2,5,8,12,10,6,8,12,19,28,32,32,30,26,25,25,25,25,25,24,21,13,6,5,6,9,12,13,2,7,12,9,6,8,10,5,0,2,3,6,11,9,4,5,9,13,18,24,29,29,24,21,22,22,23,22,21,19,12,8,8,9,12,14,14,4,9,13,9,6,9,12,7,1,2,3,5,9,8,4,5,8,10,13,18,24,24,20,19,20,21,22,21,19,16,12,9,9,10,11,12,12,6,10,13,7,3,10,16,10,3,2,3,5,7,7,7,7,8,10,13,16,18,17,16,16,18,20,21,20,17,13,11,8,9,8,7,7,8,6,9,12,6,1,9,18,13,6,5,4,6,7,7,8,8,8,10,14,15,13,13,13,15,17,18,19,18,14,10,6,4,7,8,5,3,7,3,7,11,5,0,7,17,14,10,9,5,6,6,6,6,6,5,7,11,12,12,12,13,14,15,15,14,12,9,5,1,0,6,11,5,2,6,2,6,10,4,1,7,15,14,13,10,7,6,7,6,6,5,5,6,8,9,10,12,13,13,13,12,9,7,8,6,0,0,7,12,7,3,5,3,6,9,7,6,8,11,11,11,10,8,9,11,10,9,7,5,5,4,6,9,12,13,12,12,10,5,5,10,13,9,8,12,14,10,7,7,4,6,9,11,12,11,10,10,10,10,10,10,11,10,9,7,5,4,2,3,7,9,11,11,11,9,4,4,11,16,15,14,14,15,11,8,7,5,8,13,15,17,15,12,10,9,10,11,10,8,6,4,3,3,2,2,2,3,5,7,9,10,8,4,4,9,13,12,11,13,15,10,7,4,5,9,13,17,20,18,16,12,9,11,12,10,5,1,0,0,0,0,1,1,0,1,4,7,8,7,3,3,6,9,7,6,11,14,10,6,2,4,5,7,15,21,21,20,15,10,11,11,8,3,0,-4,-4,-3,-2,0,0,0,0,2,4,4,4,3,2,2,3,2,4,10,14,10,6,2,3,2,1,10,18,21,21,16,10,10,10,6,2,-2,-8,-9,-8,-6,-2,-1,0,0,1,2,3,3,2,1,0,0,0,2,9,13,10,6,2,6,1,-2,3,8,11,13,11,7,8,9,5,2,-3,-10,-11,-10,-7,-3,-1,0,0,1,2,4,4,1,0,-1,-1,0,2,8,11,10,7,2,9,1,-4,-2,0,2,4,4,4,5,6,3,0,-5,-11,-12,-10,-7,-3,-1,0,0,0,2,5,5,1,0,-1,-1,0,3,6,9,9,8,3],
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

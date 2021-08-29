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
        texture=ImageTexture(url=['../../images/5/singapore28-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4567512097838313,103.86273364845137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[13,11,8,6,7,12,18,24,27,29,30,30,30,29,29,26,22,17,13,9,5,6,13,19,25,25,20,14,10,8,7,7,8,8,9,9,8,13,13,11,9,7,9,13,18,23,26,28,29,30,30,29,26,22,20,19,15,7,6,10,15,21,21,15,12,10,9,10,10,10,9,9,9,8,14,14,13,11,9,7,7,12,18,23,26,28,29,30,29,26,23,23,25,20,9,6,8,11,16,16,10,8,10,12,12,12,11,10,9,8,7,14,14,13,13,11,9,7,9,13,17,21,25,27,28,28,26,23,21,20,16,8,6,6,8,11,11,8,7,8,9,10,11,10,9,8,7,7,14,14,14,13,13,11,9,7,7,11,16,20,24,26,27,25,22,18,13,10,7,6,4,4,5,6,6,6,6,6,8,9,9,8,7,6,6,13,14,14,14,14,12,11,9,7,8,11,14,17,19,21,21,20,16,11,9,8,7,5,4,5,5,6,6,6,6,6,6,7,7,7,6,6,13,13,14,14,14,13,13,11,8,7,6,7,8,11,15,16,17,15,10,8,10,9,6,5,5,5,6,6,5,4,4,4,4,5,6,6,6,13,13,13,14,14,14,13,12,10,8,5,5,5,6,8,10,12,11,8,7,8,7,5,5,6,6,6,6,5,4,4,4,5,5,6,6,6,13,13,13,13,14,14,14,13,13,10,6,4,2,1,0,2,6,6,6,5,4,4,4,4,6,6,5,5,5,5,5,6,6,6,6,6,5,12,12,13,13,13,13,14,14,13,10,5,1,-2,-3,-3,0,2,3,4,5,4,4,4,5,6,6,6,5,6,7,8,9,8,8,7,6,6,11,11,12,12,12,12,13,13,12,9,3,-2,-9,-9,-6,-3,0,1,2,4,5,5,6,6,7,7,6,6,7,9,11,12,11,10,8,7,7,11,11,11,11,12,12,12,12,11,8,2,-4,-10,-10,-6,-2,0,2,2,3,3,4,6,7,7,7,6,6,7,9,11,13,12,10,9,8,7,10,10,10,11,11,11,11,11,10,7,2,-3,-8,-7,-3,0,2,3,3,2,1,2,6,7,6,6,6,6,7,8,10,11,12,11,9,8,7,10,10,10,10,10,10,10,10,9,7,4,0,-3,-4,-1,1,3,4,4,3,1,3,6,7,6,6,6,6,6,7,8,9,10,10,8,7,6,9,9,9,9,9,9,9,9,9,8,6,3,0,0,0,2,5,6,6,6,5,5,8,8,7,6,5,5,5,6,7,8,9,8,7,5,5,9,9,9,9,9,9,9,9,9,8,8,8,7,5,3,3,4,5,6,6,5,6,8,8,7,6,5,5,5,6,7,7,7,7,6,5,5,9,9,9,9,9,9,9,8,8,9,11,14,17,13,5,3,3,4,5,5,5,6,8,8,7,6,6,6,7,7,7,7,7,6,6,5,6,9,9,9,9,9,9,9,8,10,11,15,18,20,15,7,3,3,4,4,5,5,6,7,8,7,7,7,7,8,8,7,7,7,6,6,6,6,9,9,9,9,9,8,8,10,12,16,20,20,18,14,8,6,5,4,4,5,5,6,7,7,7,7,8,8,8,8,8,7,7,7,6,6,7,9,9,9,9,9,8,8,10,14,18,21,21,19,15,11,9,7,6,5,5,5,6,7,7,7,7,8,9,9,8,8,8,8,7,7,7,7,9,9,9,9,9,9,9,11,13,16,19,21,22,20,16,13,10,8,5,4,5,6,7,7,7,7,8,9,8,8,7,7,7,7,7,7,7,10,10,10,10,10,10,10,11,12,13,15,19,22,22,20,17,14,10,6,5,5,6,7,7,7,7,8,9,8,8,7,7,7,7,7,7,7,9,10,11,11,11,11,10,11,11,11,11,14,17,20,22,21,19,15,9,7,6,6,7,7,7,7,8,9,8,8,7,7,7,7,6,6,6],
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

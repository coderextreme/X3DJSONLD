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
        texture=ImageTexture(url=['../../images/5/singapore9-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[5,8,10,12,5,0,2,7,9,11,8,4,3,2,3,6,5,3,2,2,2,3,6,8,10,9,8,7,7,9,10,13,13,10,8,6,4,6,10,12,13,7,1,5,9,10,11,9,6,4,2,3,5,4,2,1,1,2,3,6,10,11,10,8,6,6,7,9,12,12,9,5,3,2,6,11,12,13,8,3,7,11,12,12,10,7,5,2,1,1,1,0,0,0,1,3,5,10,12,12,10,5,3,4,7,9,9,7,5,3,1,7,11,12,11,6,2,6,10,13,15,12,8,5,1,1,1,1,0,0,0,0,1,4,8,11,12,10,4,1,3,4,6,7,6,5,3,3,7,12,10,7,2,0,2,6,13,20,15,8,5,1,2,4,2,0,0,0,0,0,0,4,7,9,8,4,2,1,2,4,6,5,5,6,6,9,13,10,5,1,0,1,4,12,21,15,8,4,1,3,7,5,1,0,1,0,0,0,1,3,6,5,3,1,0,1,5,8,8,7,9,9,13,15,11,7,3,0,2,4,10,17,13,7,3,0,4,11,8,3,3,4,3,2,0,0,0,2,2,1,0,0,2,9,14,13,12,11,10,13,11,11,11,7,2,3,4,9,14,10,6,3,1,5,12,10,6,6,7,7,5,2,0,0,1,1,0,0,0,3,12,19,18,16,13,11,6,2,10,18,12,5,4,4,8,12,10,6,5,4,7,11,10,8,9,13,11,7,3,1,1,2,2,0,-1,0,4,14,20,20,18,15,12,4,-1,8,18,12,6,5,4,7,10,9,7,7,7,7,9,9,9,12,16,13,9,5,3,3,4,3,0,0,1,6,14,21,21,20,17,13,12,4,7,10,7,4,3,3,5,8,8,9,8,7,7,7,9,9,12,15,14,9,6,5,4,3,3,6,7,7,9,16,21,21,19,16,12,17,9,5,2,2,2,2,2,4,6,8,10,9,7,6,5,7,9,12,13,12,8,5,4,3,1,2,10,14,12,13,17,20,19,17,13,10,15,7,3,0,0,0,0,1,3,4,6,8,7,6,5,4,6,8,9,10,7,3,1,0,-1,-3,0,10,16,15,15,17,18,17,14,10,7,9,2,0,-1,-1,0,0,0,2,3,4,6,6,6,5,4,5,6,6,6,3,0,-1,-3,-5,-6,-1,9,15,16,16,16,15,14,11,7,4,0,-6,-5,-3,-2,-1,0,0,1,2,3,3,5,6,5,5,5,5,4,2,0,-1,-3,-4,-4,-4,0,6,12,15,16,14,12,9,7,5,4,-6,-11,-8,-4,-2,-1,0,0,1,2,2,1,3,6,6,6,5,5,2,0,-1,-2,-3,-4,-3,-1,1,5,9,13,15,11,8,6,4,4,4,0,-5,-4,-2,-1,0,0,0,0,2,2,1,1,2,3,4,5,5,3,1,0,-2,-2,-3,-2,0,1,4,7,10,11,7,5,3,3,3,5,8,3,1,0,0,0,0,0,0,1,1,1,0,0,0,3,4,6,5,3,0,-1,-2,-2,-1,0,2,5,7,8,7,5,2,2,2,4,6,11,5,4,2,3,4,3,1,0,0,0,2,0,0,1,6,7,7,6,6,2,0,-2,-3,-1,0,3,7,8,9,8,5,3,2,2,4,6,12,6,6,6,8,9,6,3,0,-1,0,2,1,0,3,9,9,8,7,7,4,0,-3,-4,-2,1,5,8,9,10,9,7,5,3,2,3,6,12,8,9,10,12,15,9,2,0,-3,-3,-3,-3,-2,0,6,8,9,8,5,0,-5,-7,-5,-2,1,4,7,9,10,10,8,7,5,3,3,5,12,10,11,12,15,18,10,2,-1,-4,-6,-9,-8,-5,-2,1,5,9,6,1,-4,-11,-11,-7,-2,0,3,7,9,9,9,9,9,7,5,3,3],
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

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
        texture=ImageTexture(url=['../../images/5/singapore29-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4654829221618253,103.83400758019333,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[9,13,12,11,10,10,9,8,6,5,4,4,4,4,3,2,1,0,-1,-3,-4,-3,-3,-2,0,0,1,4,6,8,9,7,5,4,3,2,2,13,16,16,14,13,13,11,10,8,6,5,4,4,4,3,3,2,0,0,-2,-3,-4,-4,-3,-2,-1,0,1,4,6,7,5,5,4,3,3,3,9,12,15,17,16,15,14,13,11,8,6,4,4,4,4,4,3,2,0,0,-2,-3,-4,-3,-3,-2,0,0,1,3,4,4,4,4,4,3,3,5,7,12,17,17,17,17,16,14,11,8,5,4,4,4,4,3,3,2,0,0,-2,-3,-4,-3,-1,0,0,0,1,2,2,2,3,4,4,4,0,2,6,11,15,18,18,18,17,15,12,8,6,4,4,4,4,4,3,2,0,0,-1,-1,0,1,3,4,5,4,4,2,2,2,3,4,4,-4,-1,1,5,11,17,19,18,18,18,15,12,8,5,4,4,4,4,3,3,2,0,0,0,2,4,6,8,8,7,5,3,2,2,2,3,4,-4,-4,-2,0,4,10,15,18,19,19,18,16,12,8,6,4,4,4,4,4,3,2,3,4,5,7,8,9,9,9,7,5,4,2,2,2,3,-6,-6,-5,-4,0,3,10,17,19,19,19,19,16,12,8,5,4,4,4,4,4,5,6,8,9,9,10,10,10,9,9,7,5,3,2,2,2,-6,-7,-6,-6,-4,0,4,10,15,19,20,20,18,16,11,7,5,3,4,6,6,6,7,8,8,9,10,10,10,10,9,9,7,5,3,2,2,-6,-6,-6,-7,-6,-5,-1,2,9,17,19,20,19,19,15,9,5,3,4,7,7,7,7,8,8,8,9,10,10,10,10,9,9,7,5,3,2,-6,-6,-6,-7,-7,-6,-5,-1,3,10,15,19,20,20,14,6,2,1,2,4,6,7,8,8,8,8,8,9,10,10,10,10,9,8,7,5,3,-6,-7,-7,-7,-7,-7,-7,-5,-2,2,10,18,20,20,12,3,0,0,0,2,4,7,8,8,8,8,8,8,9,10,10,10,9,9,8,6,4,-4,-6,-7,-7,-7,-7,-7,-7,-5,-1,4,11,15,19,14,7,3,0,0,1,2,4,6,7,8,8,8,8,8,9,10,10,10,9,8,7,6,-3,-5,-6,-7,-7,-7,-7,-7,-7,-5,0,4,11,18,16,12,7,2,0,0,0,2,4,7,8,8,8,8,8,8,9,10,10,9,9,8,7,0,-3,-5,-6,-7,-7,-7,-7,-7,-7,-1,3,10,18,18,15,11,6,3,0,0,1,2,4,6,7,8,8,8,8,8,9,10,10,9,9,7,1,-1,-4,-6,-7,-8,-7,-7,-7,-7,-1,3,10,18,19,18,15,11,6,2,0,0,0,2,4,7,8,8,8,8,8,8,9,9,10,9,8,0,0,0,-4,-6,-7,-7,-7,-5,-3,0,5,10,15,17,18,17,15,11,6,3,1,0,1,2,4,6,7,8,8,8,8,8,9,9,9,8,0,3,1,-1,-4,-6,-7,-7,-4,-1,3,7,11,13,16,19,19,18,15,11,6,2,0,0,0,2,4,7,8,8,8,8,8,8,8,9,9,-6,0,0,0,0,-3,-2,-1,0,2,5,7,9,11,13,16,17,18,17,15,10,6,3,1,0,1,2,5,6,7,8,8,8,8,8,8,8,-14,-6,0,3,2,0,2,5,6,6,6,7,7,9,11,13,16,19,19,17,14,10,6,2,0,0,1,3,5,7,8,8,8,8,8,7,7,-18,-13,-4,2,2,1,4,6,7,7,7,7,7,8,9,11,13,16,17,18,17,14,9,5,2,1,1,2,3,5,7,8,8,8,8,7,7,-20,-19,-9,0,2,2,3,4,6,7,7,7,7,7,7,9,11,13,16,19,18,16,13,9,5,2,1,1,2,4,5,7,8,8,8,7,7],
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

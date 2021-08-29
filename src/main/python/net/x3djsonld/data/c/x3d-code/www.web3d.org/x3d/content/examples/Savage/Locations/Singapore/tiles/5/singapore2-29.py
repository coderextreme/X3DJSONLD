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
        texture=ImageTexture(url=['../../images/5/singapore2-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.229726687955988,104.00636398974156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[1,4,1,-1,-7,-11,-4,2,3,3,5,7,10,14,12,8,5,2,5,10,13,14,12,6,5,6,8,11,12,8,7,7,6,1,-1,-2,-3,3,4,4,4,2,2,3,4,3,1,5,10,11,12,10,6,3,0,2,7,11,13,11,7,6,8,10,12,12,8,7,9,9,5,1,0,0,3,5,7,8,7,5,5,6,5,3,6,9,9,9,8,5,2,0,0,4,7,9,9,7,8,13,15,14,11,7,6,8,8,6,4,5,6,3,7,9,11,7,3,5,8,9,9,8,7,7,7,6,5,3,1,1,1,2,4,5,6,12,20,22,14,9,7,6,6,7,6,6,9,12,4,8,9,10,6,3,6,10,11,12,11,9,8,7,6,5,3,2,1,1,1,0,3,7,14,22,23,14,8,7,7,7,7,7,8,10,12,5,8,8,7,5,4,7,11,13,14,14,14,10,7,6,5,3,1,1,2,1,0,1,8,14,21,20,13,8,8,8,7,6,8,9,9,9,7,8,7,5,4,3,7,12,13,15,15,15,12,8,7,7,5,4,4,4,2,0,3,10,15,17,16,10,7,6,5,4,4,7,8,8,7,9,9,7,4,2,1,6,12,13,14,14,15,14,12,11,10,10,10,8,5,5,6,9,15,15,11,8,8,6,1,0,0,0,4,6,5,4,10,9,8,6,3,1,5,10,11,12,13,15,15,13,12,12,12,13,12,9,9,10,13,16,15,9,7,9,7,1,-1,-1,0,3,6,6,5,10,9,9,10,8,5,5,6,7,7,12,18,15,10,10,11,13,15,16,16,16,16,16,14,13,12,12,15,13,5,0,2,5,6,7,9,10,8,7,9,11,10,8,6,5,4,4,10,17,14,8,7,8,11,15,16,17,18,19,17,12,11,13,15,18,15,8,3,4,6,6,6,9,10,5,6,6,6,6,6,6,6,4,1,6,12,11,8,4,0,5,12,12,10,12,18,18,12,11,13,14,14,12,8,4,3,2,0,0,4,6,2,4,5,6,5,4,5,5,4,2,5,9,9,8,2,-2,1,10,10,7,10,17,17,11,10,10,11,11,11,10,7,3,0,-1,-1,0,1,0,1,6,10,6,1,2,3,6,8,9,10,10,8,4,0,2,8,9,9,12,16,15,9,6,4,5,8,11,13,11,4,0,0,0,-2,-3,0,1,9,16,8,1,2,4,8,12,12,9,8,8,5,1,3,6,9,10,13,15,13,6,3,0,1,7,12,15,14,7,1,2,2,-2,-6,4,8,15,21,15,9,9,10,10,9,6,4,4,6,4,0,2,6,9,10,11,11,8,2,1,1,4,8,11,13,13,9,7,9,10,3,-1,8,14,20,24,20,15,14,14,10,5,2,0,1,5,3,0,2,8,10,11,11,9,5,0,0,3,6,9,11,12,12,9,8,12,13,7,1,10,15,18,21,18,15,14,12,8,5,1,-2,0,2,2,1,7,15,15,12,11,12,9,2,2,3,6,9,11,11,10,5,3,6,7,3,1,11,15,16,16,16,15,12,8,6,5,0,-3,-1,0,2,4,11,20,18,12,11,13,12,6,5,5,7,9,11,11,8,2,0,1,2,0,0,7,9,9,8,10,12,8,4,3,3,0,0,0,4,7,9,13,16,14,8,7,10,11,12,13,13,12,10,9,8,7,7,6,4,2,0,0,4,4,2,0,5,9,5,0,0,1,1,0,3,7,10,13,14,14,10,6,6,6,11,17,18,18,15,10,7,5,5,9,11,7,2,0,-1,3,2,2,2,4,7,6,3,6,9,6,1,3,7,10,13,14,13,11,9,5,2,2,3,6,8,9,9,7,3,3,7,9,7,5,3,2],
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

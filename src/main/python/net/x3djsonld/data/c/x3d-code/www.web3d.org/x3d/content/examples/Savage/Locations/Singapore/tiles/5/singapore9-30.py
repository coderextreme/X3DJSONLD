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
        texture=ImageTexture(url=['../../images/5/singapore9-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.2908486746019459,104.02072702387058,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,1,0,0,-1,-1,-2,0,3,7,13,14,14,14,15,11,6,0,-7,-7,-5,-1,4,9,13,14,13,10,7,3,0,-2,-1,0,0,0,2,1,1,0,-1,-1,0,3,7,11,15,15,15,14,13,7,0,-4,-8,-5,0,5,9,13,17,18,16,13,10,6,0,-2,-1,0,0,1,1,1,2,0,-1,0,3,7,12,14,15,15,15,12,8,1,-6,-7,-3,1,7,11,13,16,19,19,18,15,14,10,4,0,-2,-2,0,3,3,4,4,1,0,3,7,11,15,15,15,15,15,12,9,1,-5,-4,0,6,11,14,16,17,18,17,16,15,15,13,9,4,0,-1,1,3,6,7,7,5,4,8,13,14,15,15,15,15,14,14,13,8,1,1,5,8,11,14,17,18,15,14,13,13,14,14,13,10,5,1,1,2,9,9,8,7,6,10,14,14,14,14,15,15,16,18,21,16,9,7,6,7,8,10,13,13,10,9,9,10,12,14,15,13,9,6,5,4,10,9,7,6,5,8,11,13,14,14,14,16,20,26,32,25,14,8,5,4,4,3,3,3,4,4,5,7,10,13,15,14,13,11,11,11,11,9,7,6,5,6,8,11,14,15,16,20,26,31,36,27,15,8,3,1,0,0,-3,-2,0,1,1,4,9,12,14,14,16,17,17,18,12,10,7,6,5,5,5,8,13,16,20,26,34,32,28,20,10,5,2,0,0,-2,-6,-5,-2,0,0,3,8,12,12,13,18,22,24,24,13,9,6,5,3,3,3,8,14,20,26,31,37,30,18,11,5,3,3,1,0,-2,-4,-4,-3,-1,0,2,8,12,12,14,19,24,26,26,12,8,5,2,0,0,1,9,18,25,34,34,32,21,8,4,3,4,5,4,2,1,2,1,0,-1,-1,1,9,14,16,17,19,21,23,24,10,6,3,0,-1,0,1,9,18,27,37,33,26,14,2,0,3,5,7,7,5,6,8,7,3,0,0,2,10,16,19,19,17,16,18,18,7,4,1,0,0,1,4,8,12,21,31,27,20,10,0,0,4,7,8,8,8,9,11,10,8,5,4,6,13,18,18,17,14,11,11,10,4,2,1,1,2,4,7,6,6,13,21,19,15,8,1,2,7,9,10,10,11,11,11,11,11,10,9,11,15,17,16,13,10,7,3,1,4,3,3,4,5,7,8,5,3,7,13,13,12,9,6,7,10,12,13,13,13,12,12,12,12,12,13,13,14,13,11,8,5,2,-3,-6,4,5,6,7,8,9,9,6,3,4,7,8,10,11,12,12,12,14,16,16,15,13,13,12,12,12,14,14,12,9,6,4,1,-1,-7,-10,5,6,8,9,9,9,9,8,8,6,4,7,10,13,15,14,12,13,15,16,16,15,14,13,12,12,14,13,10,7,4,2,0,0,-2,-4,6,8,9,10,10,10,9,11,14,10,4,7,11,14,16,14,11,11,12,14,16,16,15,14,12,12,13,12,9,6,3,1,0,1,3,4,6,9,11,11,10,9,9,11,13,10,6,7,9,11,13,12,9,9,10,11,14,14,13,12,10,9,11,11,11,9,5,3,2,3,7,9,6,10,12,10,8,8,8,9,10,10,8,7,6,8,10,10,8,8,8,9,11,11,11,9,7,7,9,10,12,12,8,5,4,5,9,12,5,10,13,10,5,5,5,7,8,8,7,7,6,7,9,9,8,8,8,8,10,10,8,7,6,6,7,9,11,12,11,9,6,5,8,11,3,9,15,8,2,2,3,4,6,6,6,6,7,7,8,8,8,8,8,8,10,9,7,6,6,6,6,7,10,12,13,11,7,4,6,8],
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

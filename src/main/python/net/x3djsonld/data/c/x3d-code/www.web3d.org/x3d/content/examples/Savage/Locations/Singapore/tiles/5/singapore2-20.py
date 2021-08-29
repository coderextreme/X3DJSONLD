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
        texture=ImageTexture(url=['../../images/5/singapore2-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.229726687955988,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=22,zSpacing=4.1579583E-4,height=[4,1,0,0,0,2,5,8,7,4,2,1,2,3,5,7,9,10,9,8,8,9,8,5,4,3,6,13,17,18,16,10,6,4,3,4,1,-3,-4,-3,0,4,6,7,4,2,1,1,1,2,4,7,8,8,8,9,9,10,8,3,2,4,11,21,27,27,23,14,7,5,5,5,2,0,-1,1,5,8,10,9,7,5,3,2,2,2,4,7,7,7,8,9,9,8,6,2,2,6,14,28,36,37,33,24,14,8,5,5,5,5,8,11,13,13,14,14,12,10,7,5,4,3,4,6,6,5,6,9,8,5,2,1,3,8,17,32,42,46,44,35,24,12,4,3,7,9,12,14,13,12,12,13,13,11,8,4,2,2,1,0,0,3,7,10,9,4,2,2,4,9,18,32,42,46,46,42,33,19,7,3,9,8,10,11,10,7,7,8,9,10,6,0,0,0,-3,-9,-6,2,8,11,9,4,2,3,6,11,18,27,34,38,41,45,42,28,14,4,9,7,7,8,6,4,3,5,7,8,4,-1,-2,-2,-6,-11,-8,2,8,10,9,6,4,5,8,13,17,22,25,26,29,36,37,27,15,5,8,3,3,3,3,2,3,4,6,7,4,0,-3,-6,-7,-7,-3,3,7,8,8,8,8,9,10,13,15,15,14,10,10,16,19,16,10,4,6,1,0,0,1,2,3,4,5,5,4,1,-1,-4,-4,-2,2,7,10,11,11,11,10,9,10,13,13,11,8,2,0,5,9,9,7,3,2,-1,-1,0,0,2,4,6,6,5,5,5,3,1,1,2,8,16,20,21,19,15,11,7,7,11,12,10,7,1,0,2,5,5,4,3,0,-3,-2,0,0,2,5,9,8,6,7,8,8,7,6,7,12,21,28,31,28,19,12,7,7,11,11,9,7,2,0,2,4,3,1,2,0,-3,-1,2,3,3,6,10,11,11,12,13,12,10,10,11,16,24,33,41,37,23,14,9,8,10,10,8,7,5,5,6,5,2,0,2,-1,-3,0,4,4,4,7,11,13,13,14,16,17,18,17,15,19,27,36,43,38,23,14,11,8,7,6,6,6,7,7,7,6,2,0,2,0,-1,0,4,3,3,6,10,13,14,14,16,23,32,29,20,22,31,33,30,24,17,12,11,6,0,-3,0,2,5,7,6,6,4,4,6,1,0,2,4,3,3,5,9,12,14,14,15,25,39,36,23,24,34,33,22,16,13,11,10,4,-9,-13,-7,-1,3,7,6,6,5,5,8,8,7,5,4,3,3,4,7,10,12,11,11,19,31,31,24,29,40,38,25,17,13,10,8,0,-16,-22,-15,-6,3,9,8,6,5,5,8,12,11,7,4,3,3,4,6,8,9,8,7,13,23,26,27,33,42,39,26,17,13,9,6,-2,-17,-23,-17,-7,3,10,9,7,5,5,7,7,6,4,2,3,5,6,7,8,7,5,4,7,13,22,33,36,33,27,18,13,10,8,7,3,0,-2,-2,0,6,10,9,6,4,3,6,4,3,1,1,3,6,8,9,7,5,4,4,4,6,19,37,37,25,16,11,8,9,9,9,10,12,13,10,9,11,11,8,5,3,2,5,6,5,3,2,3,5,7,9,7,4,5,7,9,12,20,31,28,16,8,3,3,8,12,14,15,14,15,19,20,16,11,5,1,0,1,4,9,8,6,3,3,3,6,8,6,3,5,9,13,18,22,24,19,8,1,-2,0,7,14,19,19,14,16,25,27,19,10,2,-2,-1,1,4,15,18,14,9,4,2,3,5,3,2,5,11,18,24,24,20,13,5,0,-2,-1,2,7,12,13,10,10,15,16,11,5,0,-3,-2,0,2],
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

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
        texture=ImageTexture(url=['../../images/5/singapore4-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.80528151193529,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[2,6,10,11,10,10,9,4,0,-4,-9,-10,-11,-9,-6,-4,-3,-1,0,0,0,2,5,6,7,7,7,7,6,6,5,5,5,5,5,5,5,0,2,6,9,11,11,10,8,5,0,-4,-7,-9,-8,-6,-4,-1,0,1,3,6,7,7,7,7,7,7,7,6,6,6,5,5,5,5,5,5,0,0,2,6,10,11,10,10,8,4,0,-2,-4,-4,-2,0,0,2,4,7,9,9,9,8,7,7,7,7,7,7,6,6,5,5,5,5,5,0,0,0,2,6,8,11,11,10,8,5,4,3,3,4,4,5,6,8,9,10,10,10,9,8,7,7,7,7,7,6,6,6,6,5,5,5,0,0,-1,0,2,6,10,10,9,8,8,8,8,8,8,8,8,9,9,10,10,11,10,10,9,8,7,7,7,7,7,7,7,6,6,5,5,1,0,0,0,0,2,6,7,7,7,6,7,8,9,9,9,9,9,9,10,10,11,11,10,10,9,9,8,7,7,7,7,7,7,7,7,6,1,1,0,0,-1,0,2,4,5,5,4,5,7,8,9,9,9,9,9,9,10,11,11,11,10,10,10,9,8,8,7,7,7,8,9,9,7,2,1,1,0,0,0,0,1,3,3,3,4,5,6,8,9,9,9,9,9,9,10,11,11,11,11,10,9,9,9,9,9,9,9,9,9,9,2,2,1,1,0,0,0,0,1,2,2,2,3,5,7,8,9,9,9,9,9,10,10,11,11,11,10,10,10,9,10,10,10,10,10,10,11,2,2,2,1,1,1,1,1,2,2,2,2,2,4,5,6,8,9,9,9,9,10,10,11,11,11,11,11,11,10,10,11,11,11,13,14,14,2,2,2,2,3,3,4,3,3,2,2,2,2,2,3,5,7,8,9,9,9,10,11,11,11,11,11,12,12,11,12,12,12,12,15,18,17,7,6,6,6,5,5,5,4,4,3,2,2,2,2,2,3,5,6,8,9,9,10,11,12,12,12,12,12,14,16,18,18,17,16,19,22,23,11,10,9,8,7,7,5,5,4,4,3,2,2,2,2,2,3,5,7,8,9,10,11,12,13,13,13,14,18,21,25,25,23,21,24,26,28,15,13,10,9,9,8,6,6,5,4,4,3,3,2,2,2,2,3,5,7,8,10,12,13,14,15,17,21,28,32,34,34,31,28,29,31,33,20,15,12,11,10,9,8,7,5,5,4,4,4,3,2,2,2,2,3,5,7,10,12,13,14,17,21,28,36,42,44,42,38,34,34,34,35,24,20,16,13,10,9,9,8,6,6,5,5,4,4,3,3,2,2,3,4,6,9,11,14,16,20,25,31,38,44,46,45,42,37,33,30,30,28,24,20,15,11,10,10,9,8,7,5,5,5,5,5,4,3,3,2,3,6,8,11,15,19,23,28,34,39,45,48,48,45,39,32,26,25,27,26,24,20,16,13,11,10,9,8,6,6,5,5,6,6,5,4,3,5,8,12,16,22,27,31,35,38,42,46,48,47,42,36,28,22,19,26,28,28,25,20,16,11,10,10,9,8,7,5,6,8,8,7,6,5,7,11,16,23,29,35,38,40,42,46,48,48,45,39,31,25,19,14,25,27,27,26,24,20,15,13,11,10,9,8,6,6,7,8,10,10,9,12,16,21,27,33,39,43,42,43,44,45,44,41,36,30,24,19,14,24,25,26,28,28,25,20,15,11,10,10,9,8,7,5,8,13,14,13,17,21,27,32,38,44,47,46,45,43,42,40,37,33,28,24,19,15,19,22,25,27,28,27,24,20,16,13,11,10,9,8,7,10,14,16,18,22,27,33,40,46,51,52,48,45,41,38,36,33,27,22,19,16,12],
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

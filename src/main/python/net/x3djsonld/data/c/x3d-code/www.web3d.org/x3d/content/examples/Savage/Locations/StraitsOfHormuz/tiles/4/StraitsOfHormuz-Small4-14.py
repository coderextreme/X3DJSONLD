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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small4-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,-9,1,1,3,0,-1,1,0,2,-4,8,7,9,11,12,64,32,37,74,25,23,-7,-7,1,0,5,7,7,1,3,3,7,7,5,10,17,18,32,29,44,77,27,28,-9,0,1,5,7,0,0,0,4,1,2,10,10,8,16,20,23,29,35,77,27,26,7,-5,0,6,10,7,20,3,6,2,4,6,8,7,47,30,24,28,38,100,29,29,-4,-5,2,10,10,4,0,-3,5,3,6,4,8,3,15,81,29,35,43,56,30,29,-3,0,0,7,10,-4,-3,2,4,2,4,8,8,16,23,122,32,37,42,42,28,33,-4,10,0,0,1,-7,0,5,1,4,5,6,10,9,28,66,31,36,49,50,36,33,9,-1,-2,0,6,3,1,5,5,7,9,10,7,10,73,70,38,41,81,44,39,40,-1,1,3,1,-2,2,4,3,2,5,3,8,10,16,60,56,39,56,121,48,39,38,9,1,-1,4,2,1,4,3,7,6,6,8,11,22,97,64,53,92,153,80,39,36,4,0,2,0,4,0,5,28,4,9,8,9,11,60,94,109,47,178,120,124,32,39,-1,2,0,2,2,5,5,11,7,7,10,8,11,41,158,58,59,220,136,62,48,46,0,2,0,3,0,3,21,20,16,7,13,11,15,57,211,78,114,165,94,62,42,41,3,-6,2,0,3,6,35,25,21,7,9,12,18,80,106,62,148,77,74,48,41,42,3,1,3,3,6,48,56,15,14,7,9,12,18,106,130,70,151,65,58,46,46,47,3,2,5,1,3,9,32,25,13,9,11,12,28,141,86,75,115,62,43,86,49,63,0,2,-7,1,7,93,39,16,11,9,10,13,67,127,84,94,65,53,52,68,62,70,0,-3,1,6,13,64,34,20,19,9,12,24,139,91,77,79,62,53,54,50,72,86,4,1,2,9,67,34,47,19,22,15,15,50,123,102,71,76,60,56,50,50,57,63,1,3,11,14,23,55,23,20,37,12,19,49,126,97,67,72,61,58,47,54,52,64,1,1,12,10,68,89,19,17,19,15,19,28,126,145,66,75,64,60,57,54,52,53,0,4,7,26,64,80,20,12,18,19,20,31,97,152,59,72,66,59,61,62,57,57,0,5,7,24,65,74,19,13,16,20,19,31,108,152,60,71,66,59,62,62,57,56],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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

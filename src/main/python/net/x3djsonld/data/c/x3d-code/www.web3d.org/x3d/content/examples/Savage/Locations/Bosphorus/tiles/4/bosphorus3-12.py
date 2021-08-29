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
        texture=ImageTexture(url=['../../images/4/bosphorus3-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.788909617338845,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,-3,-1,-1,13,13,3,14,18,35,47,47,46,50,51,60,38,36,42,44,52,52,0,1,0,1,4,15,1,5,14,19,36,44,60,60,48,55,32,37,40,47,51,55,2,1,-3,-8,1,3,0,-2,5,26,27,42,62,61,40,35,30,38,42,47,59,60,0,4,-2,-5,-9,1,-5,-7,10,21,29,41,49,49,36,28,29,32,39,48,59,63,1,0,-1,-3,0,3,1,1,9,12,26,25,40,50,27,27,29,36,49,46,54,56,-2,0,-1,3,6,8,1,5,15,9,17,19,39,44,19,25,31,37,51,71,62,63,0,0,1,3,3,-1,0,3,4,5,8,9,27,16,18,23,33,42,53,74,75,80,-2,1,4,0,-1,-9,0,4,4,3,5,8,16,20,17,21,28,43,66,77,105,110,-2,1,3,4,4,0,0,1,2,7,8,7,11,13,15,21,27,32,45,72,104,117,0,1,-33,0,9,-3,1,3,4,7,9,11,12,15,20,28,52,48,41,64,86,92,-28,-2,-40,-22,7,3,4,9,6,14,13,14,15,14,20,46,61,76,65,58,78,83,-3,-41,-24,-8,7,6,7,21,15,32,19,15,25,25,22,63,102,90,108,63,100,108,-6,-7,0,1,21,15,14,27,30,37,32,13,29,43,21,59,136,120,121,85,83,89,3,2,5,24,35,28,27,25,39,46,27,14,28,55,32,51,91,141,128,108,93,97,8,9,22,36,35,41,31,31,47,44,35,22,35,51,45,38,69,87,97,111,107,116,22,15,25,30,39,43,44,39,45,50,34,21,47,62,52,58,54,70,88,115,121,123,18,19,28,35,43,49,56,46,55,49,43,21,38,71,58,58,80,71,93,120,135,136,20,22,25,33,45,58,56,55,60,58,42,32,32,72,54,52,70,80,107,134,132,135,24,32,25,33,48,87,64,59,67,59,45,57,27,60,56,67,66,99,117,127,121,128,28,35,30,28,33,68,55,52,65,70,57,58,41,42,63,68,78,92,109,114,119,124,35,41,39,43,49,41,34,40,61,75,62,53,65,31,65,70,87,101,113,99,125,131,37,46,51,59,75,57,49,38,49,75,69,57,59,34,69,65,80,93,110,111,136,143,41,50,65,73,73,76,64,52,39,61,75,71,56,51,40,47,56,94,89,124,139,143,41,53,65,75,73,81,67,54,39,57,76,73,54,55,39,45,57,96,83,124,138,142],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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

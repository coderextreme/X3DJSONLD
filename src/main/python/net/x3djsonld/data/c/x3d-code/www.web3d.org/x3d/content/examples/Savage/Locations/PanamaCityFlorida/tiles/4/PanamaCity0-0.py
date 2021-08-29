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

newModel=X3D(profile='Immersive',version='3.0',
  Scene=Scene(
    children=[
    Group(
      children=[
      LOD(center=(27056.14,0.0,18037.428),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity0-0.x3d']),
          Inline(url=['../../tiles/5/PanamaCity0-1.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[70,69,65,83,67,51,25,34,45,46,63,39,37,28,63,62,57,41,36,66,75,79,72,61,61,62,67,60,63,28,30,32,59,72,62,54,48,70,68,31,70,73,69,69,68,60,61,58,69,58,66,65,17,39,61,60,35,45,40,67,54,43,59,52,60,70,69,68,46,59,63,62,63,63,52,27,49,65,29,32,46,59,56,35,50,66,72,72,63,62,40,66,55,45,67,63,71,11,65,55,34,33,54,50,37,32,37,66,49,62,63,64,45,59,59,54,39,55,51,23,65,41,27,32,24,24,19,32,62,67,68,68,55,56,45,58,61,52,36,42,55,21,33,14,11,22,31,34,59,62,61,66,64,64,54,60,58,41,53,53,57,42,54,14,24,8,23,30,59,53,50,65,27,41,37,46,37,57,65,37,57,52,57,51,16,21,10,44,53,48,56,60,51,33,25,14,25,14,46,52,64,36,48,48,46,22,13,16,61,45,57,47,25,50,40,16,16,27,25,26,31,51,56,28,33,53,38,9,0,43,44,49,48,49,21,32,16,18,33,38,48,44,21,41,52,48,15,28,25,-2,29,42,51,42,44,34,24,13,23,35,28,44,44,44,16,26,40,55,42,28,9,3,12,24,41,45,22,16,17,14,29,47,34,56,62,59,2,13,25,43,40,32,23,16,8,8,21,19,17,26,15,43,46,46,42,58,58,63,2,0,16,29,41,33,20,9,-1,8,3,13,17,12,36,45,55,59,57,54,59,57,2,0,-1,11,14,20,10,3,-1,2,4,12,20,33,26,32,52,51,50,54,53,51,2,2,-2,-1,12,9,8,2,0,-1,10,21,41,46,19,10,21,48,51,46,48,49,35,-1,-2,1,2,2,7,-2,-1,13,15,37,37,44,42,25,41,42,51,44,46,46,29,23,-2,-2,-1,9,8,-2,0,14,28,35,40,39,36,37,39,38,46,43,23,34,34,33,-2,-2,-2,5,13,-2,4,10,27,32,36,37,39,38,37,35,40,35,27,24,28,34,-2,-2,-2,3,0,-2,-2,0,12,22,29,26,38,39,38,43,39,37,27,25,29,34,-2,-3,-2,3,0,-2,-2,0,13,23,29,24,40,39,37,41,38,36,26,24]))])])])])])
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

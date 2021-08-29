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
      LOD(center=(81168.42,0.0,18037.428),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity0-2.x3d']),
          Inline(url=['../../tiles/5/PanamaCity0-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(54112.28,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[79,76,65,41,30,81,80,83,60,64,36,52,66,42,59,70,51,52,51,47,57,53,69,77,66,51,40,41,82,67,50,39,64,40,50,40,67,49,63,76,60,52,45,40,70,74,62,34,35,57,72,62,49,39,61,54,54,70,69,64,73,81,75,61,69,67,72,47,64,38,34,55,72,51,46,51,72,73,75,75,77,58,84,89,84,78,80,79,62,56,44,33,32,69,67,45,41,60,65,72,60,75,75,77,83,84,71,76,73,73,68,56,50,34,63,44,48,42,40,48,65,55,57,71,69,72,72,83,64,59,80,75,64,42,32,28,45,37,40,39,33,37,34,55,61,47,47,53,63,89,67,61,65,60,46,25,34,28,33,29,34,40,50,37,46,35,49,52,69,70,68,75,74,56,45,47,14,25,25,43,61,41,45,58,61,58,57,46,55,66,70,73,64,79,68,76,74,73,26,34,43,48,48,40,48,67,60,72,70,65,57,64,67,66,57,74,79,62,77,74,44,55,44,44,68,59,66,74,63,75,71,66,70,75,57,37,61,78,60,68,74,76,44,52,48,55,55,77,57,62,62,69,67,69,63,72,57,46,63,61,74,67,63,56,59,61,55,61,65,66,58,56,59,52,63,62,53,42,66,45,45,74,78,59,48,63,63,58,67,59,54,58,58,44,31,38,58,44,53,54,60,32,31,53,65,48,38,33,57,56,62,56,38,56,47,38,26,48,47,54,48,44,46,53,54,57,57,49,55,56,51,51,43,54,55,56,50,37,29,44,45,51,51,40,26,44,40,33,38,33,35,35,49,50,35,58,61,54,55,34,18,44,29,41,39,28,34,43,34,31,39,36,30,29,46,45,35,48,48,46,43,44,34,28,24,23,26,34,36,41,37,20,28,22,26,30,34,38,39,38,44,37,36,36,35,16,23,28,24,15,26,34,35,26,32,26,12,23,24,36,28,33,22,31,33,37,23,17,10,0,14,23,26,31,28,27,27,15,15,18,25,25,22,31,27,21,33,34,30,15,0,-1,22,25,23,34,25,20,8,-2,14,15,24,26,25,30,24,19,31,34,30,17,-1,-2,21,23,22,33,24,20,10,-2,15,16]))])])])])])
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

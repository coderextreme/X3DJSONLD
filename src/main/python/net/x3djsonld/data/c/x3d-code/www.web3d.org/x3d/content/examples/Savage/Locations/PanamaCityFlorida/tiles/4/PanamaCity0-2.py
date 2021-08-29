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
      LOD(center=(135280.7,0.0,18037.428),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity0-4.x3d']),
          Inline(url=['../../tiles/5/PanamaCity0-5.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity0-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[53,66,65,71,87,71,86,63,82,61,45,29,28,30,25,19,15,17,30,30,41,41,40,64,53,78,87,82,63,54,72,54,45,44,25,31,22,20,15,15,30,30,40,35,67,70,62,79,60,67,54,51,40,35,60,30,30,30,25,18,15,16,29,30,30,30,79,76,72,69,76,53,72,47,56,29,45,45,30,28,23,16,14,30,26,30,30,30,73,71,85,78,83,59,74,64,64,35,27,30,28,21,22,17,12,14,30,30,30,30,75,60,72,64,84,80,86,80,68,52,44,39,15,23,18,15,12,14,21,30,30,30,60,58,55,53,64,65,60,63,84,56,36,30,18,15,15,14,9,15,20,30,30,30,47,50,59,51,56,64,61,72,61,67,67,35,21,15,13,9,17,17,19,29,21,22,73,55,54,62,56,41,56,50,56,56,60,53,29,14,9,10,15,23,37,30,29,30,74,43,44,48,62,57,43,45,70,35,44,60,21,14,9,20,37,26,27,15,28,15,76,71,34,47,35,65,41,42,63,41,22,46,18,9,9,15,15,26,15,15,15,15,56,66,58,40,64,58,56,49,40,33,15,15,14,9,9,15,14,14,14,14,14,14,63,55,28,40,38,68,50,47,38,42,18,12,12,9,14,15,14,11,13,14,14,13,33,42,69,22,47,66,56,58,64,56,21,34,22,9,14,30,13,14,14,15,14,14,56,43,47,34,53,60,60,55,63,67,43,43,45,9,8,15,13,24,20,28,29,32,35,40,25,38,44,48,41,61,62,50,30,33,28,14,9,15,14,38,27,60,45,45,29,30,19,31,31,37,31,48,51,51,30,16,15,12,6,8,21,41,32,45,41,41,30,32,27,28,28,27,26,35,38,46,39,30,15,9,6,9,26,33,34,30,28,29,23,20,23,25,32,27,28,30,30,33,24,30,28,12,5,9,30,24,25,30,31,30,18,-1,27,19,22,25,29,32,36,45,21,16,15,11,6,6,15,14,29,19,18,18,15,-1,23,27,21,23,22,21,25,27,9,8,15,8,7,6,30,30,13,30,39,38,16,0,24,28,22,24,24,22,27,26,8,8,14,8,7,7,30,30,13,30,39,37]))])])])])])
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

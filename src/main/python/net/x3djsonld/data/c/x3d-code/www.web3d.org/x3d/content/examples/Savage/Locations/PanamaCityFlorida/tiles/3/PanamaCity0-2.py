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
      LOD(center=(135280.7,0.0,36074.855),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity0-2.x3d']),
          Inline(url=['../../tiles/4/PanamaCity1-2.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity0-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[53,66,65,71,87,71,86,63,82,61,45,29,28,30,25,19,15,17,30,30,41,41,70,70,62,77,57,67,59,50,43,38,60,29,30,30,25,18,15,16,29,30,30,30,68,71,84,83,84,61,65,65,52,34,26,29,28,18,21,17,12,14,30,30,30,30,61,54,55,47,66,65,61,69,88,71,40,37,18,15,15,15,9,14,21,30,32,30,76,60,45,47,67,45,47,52,55,48,52,60,29,15,9,12,15,28,27,30,25,30,65,69,48,50,41,75,46,44,57,51,27,60,15,9,9,15,15,16,14,14,15,15,60,53,40,31,33,64,63,59,46,45,15,15,14,9,14,14,12,10,12,14,14,14,47,38,30,38,44,55,49,63,54,53,30,45,45,11,7,15,12,45,29,30,44,54,33,36,22,33,32,36,29,33,43,52,33,30,15,12,6,7,23,31,42,45,30,30,17,19,13,23,28,26,32,35,37,36,22,24,24,13,5,7,14,15,30,30,21,19,0,1,12,24,22,22,16,15,21,15,7,10,13,7,6,14,27,25,30,45,21,21,-4,-3,-2,9,13,11,15,8,14,21,7,5,3,4,14,15,12,22,28,22,30,30,10,-2,-3,-2,0,3,8,16,20,19,3,3,5,15,13,14,23,27,28,28,28,27,8,6,9,2,0,5,6,7,11,20,4,7,7,14,18,22,24,24,21,20,16,16,-1,15,10,14,14,10,15,16,16,17,12,12,12,16,16,14,14,14,15,15,7,9,-21,-18,-19,-16,-6,11,17,20,19,18,7,7,7,6,4,7,10,2,4,1,6,6,-26,-22,-20,-22,-21,-20,-17,-15,-5,14,3,7,9,8,6,1,-1,-1,-1,-3,0,0,-28,-26,-27,-22,-24,-23,-22,-22,-19,-19,-18,-13,7,8,7,2,-2,0,1,-2,-4,-3,-31,-31,-28,-28,-27,-25,-25,-25,-25,-23,-21,-20,-19,-19,-9,7,3,2,3,1,0,-1,-32,-32,-32,-30,-28,-28,-26,-28,-26,-25,-24,-24,-22,-21,-19,-19,-14,5,3,3,-15,-6,-32,-32,-32,-30,-28,-28,-26,-28,-25,-25,-24,-24,-23,-20,-19,-19,-15,5,3,3,-14,-6]))])])])])])
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

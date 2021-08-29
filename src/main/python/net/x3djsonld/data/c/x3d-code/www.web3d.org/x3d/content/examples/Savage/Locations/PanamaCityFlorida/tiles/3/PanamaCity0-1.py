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
      LOD(center=(81168.42,0.0,36074.855),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity0-1.x3d']),
          Inline(url=['../../tiles/4/PanamaCity1-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(54112.28,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[79,76,65,41,30,81,80,83,60,64,36,52,66,42,59,70,51,52,51,47,57,53,70,69,61,38,39,57,73,58,51,38,59,69,54,71,67,65,73,83,76,64,70,70,67,51,38,25,34,73,70,44,37,66,66,63,58,74,78,78,82,83,66,76,76,68,64,32,33,31,29,30,37,35,34,34,40,52,59,49,53,59,62,80,60,66,63,61,30,22,44,44,50,54,48,60,72,61,53,40,59,66,71,73,61,66,78,81,76,76,47,46,31,44,59,64,71,72,62,73,70,69,73,72,61,58,64,70,53,49,70,65,69,52,63,59,63,68,63,31,35,43,52,61,47,44,62,53,58,61,73,73,52,60,56,53,57,52,58,58,40,27,24,46,48,53,57,45,44,49,56,54,47,45,52,47,46,45,36,54,55,55,55,48,19,38,19,34,33,28,28,43,36,29,34,27,28,33,37,40,33,37,40,33,36,34,28,22,20,-2,-1,18,32,33,36,24,28,26,16,17,27,23,23,29,27,-1,26,30,21,12,-7,-4,12,16,12,30,-4,19,-3,-3,0,0,21,15,16,17,14,0,13,-3,-9,-10,-10,-9,-9,-8,-7,-6,-6,-6,-5,-5,-4,-4,7,9,9,8,9,11,-7,-7,-4,10,5,0,-2,-5,-5,-6,0,0,-1,0,10,10,-19,-19,-20,-18,-18,-16,-12,-8,-8,-13,-15,-14,-10,-4,10,8,4,10,10,10,6,8,-23,-22,-24,-22,-22,-24,-20,-23,-18,-19,-20,-22,-23,-21,-20,-22,-21,-21,-17,-15,-2,-1,-23,-23,-23,-21,-23,-26,-21,-23,-23,-23,-25,-23,-24,-25,-24,-21,-22,-23,-23,-22,-20,-21,-24,-25,-23,-24,-25,-28,-21,-23,-22,-22,-20,-23,-22,-24,-25,-25,-27,-25,-27,-24,-23,-26,-23,-22,-28,-23,-24,-24,-24,-22,-24,-27,-28,-27,-27,-29,-29,-30,-29,-31,-31,-30,-27,-28,-34,-26,-25,-27,-34,-34,-25,-27,-30,-29,-27,-26,-28,-29,-29,-30,-32,-30,-30,-31,-31,-31,-28,-29,-27,-29,-34,-33,-31,-29,-29,-30,-31,-31,-34,-32,-32,-33,-32,-31,-31,-30,-31,-32,-29,-30,-27,-28,-33,-32,-31,-29,-29,-29,-30,-31,-34,-31,-32,-34,-32,-32,-31,-30,-32,-32]))])])])])])
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

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
      LOD(center=(27056.14,0.0,36074.855),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity0-0.x3d']),
          Inline(url=['../../tiles/4/PanamaCity1-0.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[70,69,65,83,67,51,25,34,45,46,63,39,37,28,63,62,57,41,36,66,75,79,68,62,61,55,74,58,67,65,20,39,59,59,36,45,41,66,51,43,55,46,61,70,62,57,43,62,58,48,60,63,69,14,69,54,36,31,55,52,37,33,42,67,59,67,50,60,60,49,61,55,42,39,55,26,37,23,9,16,47,39,59,58,62,65,63,64,45,66,60,36,54,52,49,45,13,17,11,49,56,47,44,54,52,24,17,23,28,30,20,48,57,37,23,48,20,9,-1,37,47,49,49,49,36,21,15,27,33,43,45,47,9,24,34,50,39,28,3,-1,2,21,40,34,17,23,21,26,30,47,23,59,68,69,2,-1,-1,21,40,20,11,12,11,6,13,13,21,24,34,42,59,54,51,53,57,56,30,0,-2,0,3,8,7,-1,-1,2,15,31,41,50,41,29,40,43,54,51,43,46,33,25,-2,-2,-2,4,11,-2,17,15,28,33,37,37,37,37,37,38,51,39,23,37,28,29,-2,-3,-2,2,-2,-2,-2,-2,12,23,27,18,31,36,36,38,28,32,29,27,24,15,-4,-4,0,-2,-2,-3,-3,-3,0,12,-1,0,13,14,15,21,21,27,18,21,-4,-6,-6,-5,-6,-3,-4,-4,0,6,12,12,11,9,10,9,10,9,10,11,0,7,-6,-5,-5,7,7,-1,0,-3,-3,-3,-4,-2,0,2,-5,-13,-14,-16,-18,-20,-19,-19,-5,-4,-6,-4,-4,2,-5,-10,-15,-16,-18,-19,-21,-20,-21,-22,-21,-21,-21,-22,-21,-23,-11,-13,-15,-18,-20,-17,-18,-19,-21,-20,-24,-21,-22,-25,-22,-20,-21,-26,-22,-23,-22,-23,-19,-21,-22,-22,-19,-21,-21,-22,-23,-27,-24,-25,-26,-22,-22,-25,-23,-23,-23,-24,-22,-24,-21,-24,-25,-23,-21,-22,-23,-28,-29,-28,-28,-23,-21,-23,-21,-25,-26,-23,-28,-24,-22,-23,-24,-28,-29,-28,-24,-26,-26,-30,-27,-26,-26,-28,-28,-26,-27,-30,-29,-27,-31,-29,-28,-34,-26,-26,-28,-29,-26,-31,-33,-30,-30,-25,-28,-29,-31,-30,-33,-33,-31,-30,-30,-28,-29,-28,-26,-27,-28,-28,-26,-31,-34,-30,-29,-25,-28,-29,-30,-31,-35,-32,-31,-30,-30,-28,-29,-29]))])])])])])
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

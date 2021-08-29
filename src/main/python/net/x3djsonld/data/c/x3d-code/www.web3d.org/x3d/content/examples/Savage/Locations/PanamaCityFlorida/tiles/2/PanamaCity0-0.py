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
      LOD(center=(54112.28,0.0,36074.855),range=[108224.56],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/PanamaCity0-0.x3d']),
          Inline(url=['../../tiles/3/PanamaCity0-1.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=5153.551,zDimension=21,zSpacing=3607.4854,height=[70,65,67,25,45,63,37,63,57,36,75,74,39,81,53,45,74,58,52,50,67,53,68,61,74,67,20,59,36,41,51,55,61,73,29,78,44,51,65,74,73,65,66,70,62,43,58,60,69,69,36,55,37,42,59,39,34,52,37,67,74,75,78,74,76,68,50,60,61,42,55,37,9,47,59,62,63,32,34,36,33,34,60,54,57,73,60,61,45,60,54,49,13,11,56,44,52,17,28,31,39,51,56,63,59,74,70,86,75,76,20,57,23,20,-1,47,49,36,15,33,45,31,57,69,60,69,69,64,64,64,68,65,9,34,39,3,2,40,17,21,30,23,68,65,61,59,47,52,50,58,48,72,49,60,2,-1,40,11,11,13,21,34,59,51,57,63,61,48,48,45,53,41,59,52,44,47,30,-2,3,7,-1,15,41,41,40,54,43,36,54,55,28,30,37,28,36,31,31,33,33,-2,-2,11,17,28,37,37,37,51,23,28,39,27,22,19,-2,25,34,27,16,17,28,-2,-2,-2,-2,12,27,31,36,28,29,24,27,25,25,-2,6,14,-1,-3,8,0,24,-4,0,-2,-3,0,-1,13,15,21,18,22,11,11,-9,-10,-9,-7,-6,-5,-4,-4,-4,-6,-6,-4,0,12,11,10,10,10,0,10,7,-3,-4,12,-2,-6,-2,-1,12,10,-6,-5,7,0,-3,-4,0,-5,-14,-18,-19,-19,-21,-12,-8,-16,-11,8,5,10,8,8,-5,-6,-4,-5,-15,-18,-21,-21,-21,-21,-21,-21,-22,-20,-18,-21,-22,-21,-22,-19,-3,-1,-11,-15,-20,-18,-21,-24,-22,-22,-21,-22,-22,-22,-23,-22,-26,-25,-24,-24,-24,-23,-23,-21,-19,-22,-19,-21,-23,-24,-26,-22,-23,-23,-22,-27,-25,-26,-25,-20,-22,-23,-25,-24,-26,-26,-21,-25,-21,-23,-29,-28,-21,-21,-26,-28,-22,-26,-23,-24,-25,-24,-26,-31,-30,-30,-29,-28,-24,-29,-24,-26,-27,-26,-28,-27,-29,-31,-28,-29,-31,-25,-30,-27,-27,-28,-30,-30,-31,-31,-26,-28,-26,-33,-30,-28,-31,-33,-31,-30,-29,-27,-33,-32,-28,-32,-30,-32,-33,-32,-32,-32,-26,-28,-26,-34,-29,-28,-30,-35,-31,-30,-29,-27,-32,-32,-28,-32,-31,-31,-32,-33,-32,-32]))])])])])])
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

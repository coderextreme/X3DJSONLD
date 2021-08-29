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
      LOD(center=(135280.7,0.0,54112.28),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity1-4.x3d']),
          Inline(url=['../../tiles/5/PanamaCity1-5.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,36074.855),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity1-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[16,0,24,28,22,24,24,22,27,26,8,8,14,8,7,7,30,30,13,30,39,37,-3,-1,16,0,15,21,20,12,15,19,5,15,8,7,4,14,20,22,30,36,21,21,-4,-3,-2,7,14,18,13,13,-3,14,7,9,5,6,9,19,14,13,17,29,30,31,-4,-3,-2,5,18,4,16,9,20,19,7,3,3,3,14,14,16,26,30,30,28,29,0,-3,-3,-2,0,11,17,17,15,17,-2,3,7,15,14,13,22,26,30,30,27,28,11,-1,-3,-2,-2,7,15,16,15,19,3,4,6,9,11,12,22,24,26,26,27,27,8,5,5,-2,-2,0,10,13,22,21,3,7,9,14,15,22,23,26,22,22,22,22,11,9,6,7,9,2,7,15,7,14,10,10,10,14,19,21,24,23,20,17,15,13,16,16,9,11,8,8,16,18,10,13,7,11,15,15,17,16,15,15,17,18,16,15,-9,12,11,12,15,13,13,18,15,21,12,11,10,15,17,12,14,10,15,11,7,7,-18,-16,-12,6,6,14,19,20,22,17,9,8,7,10,12,14,10,6,7,0,7,8,-21,-19,-19,-17,-14,-1,13,17,21,18,7,7,7,5,3,5,7,2,3,0,5,5,-23,-21,-18,-19,-19,-19,-15,9,18,15,9,8,8,7,4,1,2,1,1,-2,2,3,-26,-23,-21,-22,-20,-20,-18,-16,-13,16,0,7,9,8,6,1,-2,-2,-2,-2,-1,0,-26,-27,-26,-23,-21,-22,-21,-18,-16,-17,-6,5,8,8,6,1,-2,-3,-3,-4,-1,0,-29,-25,-26,-23,-24,-23,-22,-22,-19,-19,-18,-15,7,8,7,2,-2,0,1,0,-4,-4,-28,-28,-27,-26,-26,-25,-24,-24,-22,-22,-20,-19,-17,-5,8,4,0,1,2,-1,-4,-6,-31,-31,-28,-30,-27,-26,-26,-26,-25,-22,-22,-21,-19,-19,-11,7,3,2,3,1,0,-1,-32,-31,-31,-29,-28,-29,-28,-27,-26,-25,-24,-22,-22,-20,-18,-14,7,3,3,3,-9,-11,-32,-32,-32,-30,-28,-28,-26,-28,-25,-25,-24,-24,-23,-20,-19,-19,-15,5,3,3,-14,-6,-31,-32,-33,-31,-29,-29,-27,-28,-27,-26,-25,-24,-24,-24,-21,-19,-19,-16,0,2,-1,-3,-31,-32,-33,-31,-29,-29,-28,-28,-27,-26,-25,-24,-25,-23,-20,-19,-19,-16,-1,2,0,-2]))])])])])])
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

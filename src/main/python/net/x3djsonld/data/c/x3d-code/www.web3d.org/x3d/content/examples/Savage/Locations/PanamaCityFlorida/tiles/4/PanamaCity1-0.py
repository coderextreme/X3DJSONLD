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
      LOD(center=(27056.14,0.0,54112.28),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity1-0.x3d']),
          Inline(url=['../../tiles/5/PanamaCity1-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(0.0,0.0,36074.855),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity1-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[29,34,-2,-3,-2,3,0,-2,-2,0,13,23,29,24,40,39,37,41,38,36,26,24,23,39,-3,-3,-2,2,-2,-2,-2,-2,-1,11,23,17,31,37,29,29,30,32,27,28,9,22,-4,-4,0,1,-2,-3,-3,-3,-2,12,12,15,27,23,13,17,21,20,23,19,22,12,-5,-4,-2,-2,-2,-3,-3,-3,2,13,11,5,6,7,7,15,17,22,24,24,4,-4,-5,-5,-4,-6,-4,-3,-3,2,9,12,14,14,18,11,14,13,16,16,16,16,-5,-7,-6,-5,-4,-1,0,0,6,8,11,11,9,7,4,-1,-4,0,-5,-2,-1,0,-8,-6,-5,0,9,7,4,7,1,-1,-5,-3,-2,-1,-1,3,4,-1,-8,-13,-15,-16,-5,3,-1,8,4,-2,-4,-4,-4,-2,-4,2,-2,-10,-14,-16,-18,-18,-19,-19,-19,-19,-2,6,-3,-5,-4,-1,-3,0,0,-9,-14,-17,-19,-19,-20,-19,-20,-21,-21,-21,-22,-21,-6,-5,0,-4,2,-5,-14,-15,-17,-20,-20,-21,-20,-20,-21,-21,-21,-21,-21,-22,-20,-21,2,-2,-8,-14,-16,-16,-17,-18,-18,-21,-23,-22,-21,-21,-23,-22,-21,-20,-24,-24,-21,-21,-14,-14,-16,-19,-20,-20,-18,-20,-22,-21,-23,-20,-23,-25,-22,-20,-23,-25,-24,-23,-24,-21,-16,-17,-20,-24,-20,-19,-21,-21,-24,-24,-23,-25,-26,-25,-21,-21,-24,-26,-24,-27,-24,-24,-20,-21,-22,-22,-19,-21,-22,-22,-22,-25,-26,-26,-26,-22,-22,-24,-23,-22,-24,-24,-23,-23,-21,-23,-24,-19,-19,-21,-22,-24,-23,-25,-27,-25,-23,-21,-21,-21,-20,-23,-25,-26,-24,-22,-21,-25,-26,-28,-21,-23,-22,-25,-31,-30,-26,-23,-23,-24,-22,-24,-26,-23,-26,-24,-22,-22,-22,-25,-26,-29,-23,-24,-28,-27,-27,-26,-24,-24,-24,-26,-24,-27,-25,-30,-24,-25,-25,-25,-24,-27,-29,-27,-25,-26,-28,-29,-28,-25,-26,-27,-30,-26,-28,-31,-29,-29,-29,-29,-27,-32,-28,-28,-27,-27,-25,-27,-30,-30,-28,-26,-25,-26,-28,-27,-28,-29,-32,-31,-30,-26,-26,-26,-26,-27,-28,-28,-26,-31,-34,-30,-29,-25,-28,-29,-30,-31,-35,-32,-31,-30,-30,-28,-29,-29,-28,-29,-26,-26,-28,-32,-30,-25,-26,-27,-31,-33,-37,-30,-32,-32,-33,-30,-31,-33,-33,-32,-29,-30,-26,-26,-28,-32,-29,-25,-26,-27,-31,-33,-37,-31,-33,-32,-32,-30,-32,-33,-33,-32]))])])])])])
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

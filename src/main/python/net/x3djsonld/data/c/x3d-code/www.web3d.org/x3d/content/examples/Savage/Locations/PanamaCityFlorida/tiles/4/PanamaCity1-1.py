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
      LOD(center=(81168.42,0.0,54112.28),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity1-2.x3d']),
          Inline(url=['../../tiles/5/PanamaCity1-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(54112.28,0.0,36074.855),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity1-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[24,26,25,30,24,19,31,34,30,17,-1,-2,21,23,22,33,24,20,10,-2,15,16,28,23,21,28,23,-5,20,25,13,8,-6,-7,11,8,13,0,-5,-2,-4,-4,-3,-3,19,21,25,18,18,-1,22,4,-6,-9,-7,-7,-1,-1,-7,-6,-6,-5,-5,-5,-4,-4,24,11,12,9,-3,-5,11,-8,-10,-11,-10,-10,-10,-9,-7,-6,-6,-5,-4,-3,-4,-4,16,15,18,12,13,8,-7,-10,-11,-1,-5,-7,-7,-7,-7,-6,-1,-1,-2,4,1,0,0,0,3,-2,-3,-3,-2,-2,-1,9,16,9,8,-1,-5,-6,0,0,-3,-3,13,11,-16,-16,-15,-16,-13,-10,-9,-2,0,3,9,9,10,12,6,0,0,10,9,4,6,8,-19,-20,-19,-18,-20,-21,-13,-12,-12,-18,-18,-18,-17,-16,-10,-2,7,11,11,9,9,11,-21,-21,-19,-20,-20,-22,-21,-19,-20,-20,-21,-21,-20,-20,-20,-19,-20,-17,-5,13,19,16,-21,-21,-21,-22,-23,-25,-21,-22,-19,-24,-22,-24,-22,-23,-22,-22,-21,-20,-20,-18,-12,-9,-21,-24,-21,-21,-23,-25,-22,-19,-26,-24,-23,-25,-24,-24,-24,-24,-23,-22,-22,-20,-19,-18,-21,-21,-22,-21,-24,-27,-21,-23,-28,-22,-26,-25,-25,-24,-23,-21,-25,-23,-21,-23,-21,-21,-24,-27,-23,-24,-25,-28,-23,-26,-22,-25,-22,-22,-21,-22,-22,-25,-26,-25,-26,-24,-25,-23,-23,-23,-26,-24,-24,-25,-22,-25,-24,-21,-20,-23,-22,-27,-24,-25,-27,-25,-27,-26,-24,-26,-22,-23,-20,-22,-26,-24,-24,-23,-22,-22,-25,-28,-26,-29,-30,-29,-27,-30,-29,-27,-28,-26,-22,-23,-27,-23,-24,-25,-24,-22,-24,-29,-26,-28,-27,-29,-30,-30,-30,-31,-29,-29,-27,-29,-25,-25,-31,-29,-30,-29,-28,-24,-27,-29,-29,-28,-28,-27,-28,-30,-30,-31,-32,-31,-30,-28,-32,-29,-28,-27,-34,-34,-26,-27,-31,-29,-27,-26,-27,-30,-30,-30,-31,-30,-30,-31,-32,-31,-26,-25,-26,-28,-32,-36,-29,-29,-28,-25,-27,-28,-33,-30,-33,-32,-32,-31,-33,-32,-32,-32,-29,-30,-27,-28,-33,-32,-31,-29,-29,-29,-30,-31,-34,-31,-32,-34,-32,-32,-31,-30,-32,-32,-32,-30,-28,-29,-31,-37,-32,-32,-32,-32,-30,-32,-34,-34,-34,-35,-32,-33,-33,-31,-31,-31,-32,-30,-28,-30,-31,-37,-32,-31,-31,-32,-30,-32,-34,-34,-35,-34,-32,-34,-32,-31,-31,-31]))])])])])])
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

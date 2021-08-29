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
      LOD(center=(135280.7,0.0,90187.14),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity2-4.x3d']),
          Inline(url=['../../tiles/5/PanamaCity2-5.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity2-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[-31,-32,-33,-31,-29,-29,-28,-28,-27,-26,-25,-24,-25,-23,-20,-19,-19,-16,-1,2,0,-2,-33,-32,-33,-32,-31,-29,-30,-28,-26,-26,-27,-25,-24,-23,-22,-22,-19,-17,-16,0,1,0,-34,-31,-32,-32,-30,-30,-30,-29,-27,-26,-27,-26,-26,-25,-24,-22,-20,-19,-18,-16,1,1,-34,-32,-33,-33,-31,-31,-30,-27,-28,-28,-27,-27,-27,-26,-24,-23,-21,-18,-18,-17,-9,-10,-34,-33,-33,-33,-32,-30,-29,-29,-27,-28,-29,-29,-28,-26,-25,-25,-23,-19,-19,-18,-14,-13,-35,-33,-34,-34,-34,-31,-31,-29,-30,-29,-29,-29,-29,-28,-26,-25,-25,-21,-20,-19,-18,-18,-37,-33,-33,-34,-33,-32,-30,-29,-29,-29,-29,-31,-29,-29,-28,-27,-25,-22,-22,-22,-20,-21,-38,-36,-34,-33,-32,-32,-30,-30,-30,-29,-31,-30,-30,-29,-29,-28,-24,-24,-22,-20,-20,-20,-38,-37,-37,-35,-34,-32,-31,-31,-30,-29,-31,-32,-31,-29,-27,-27,-24,-23,-23,-22,-21,-21,-40,-39,-37,-37,-35,-35,-32,-30,-30,-31,-32,-32,-30,-30,-29,-27,-25,-25,-24,-23,-21,-21,-43,-40,-38,-38,-37,-35,-31,-31,-31,-31,-33,-32,-31,-30,-29,-28,-27,-25,-23,-23,-21,-21,-45,-42,-39,-37,-37,-36,-33,-31,-32,-31,-32,-32,-31,-30,-29,-29,-25,-25,-26,-25,-23,-23,-46,-44,-41,-38,-38,-38,-36,-32,-32,-31,-31,-35,-33,-31,-30,-28,-28,-28,-27,-26,-25,-24,-49,-46,-42,-39,-39,-38,-37,-35,-33,-32,-31,-32,-35,-33,-31,-31,-30,-29,-28,-27,-25,-26,-51,-48,-43,-41,-39,-38,-38,-36,-35,-35,-34,-33,-35,-33,-32,-32,-31,-30,-28,-27,-27,-26,-53,-49,-44,-41,-39,-38,-38,-37,-35,-37,-37,-36,-35,-34,-34,-33,-31,-30,-29,-28,-28,-28,-54,-50,-45,-42,-40,-38,-38,-38,-38,-38,-37,-36,-35,-34,-34,-34,-32,-30,-30,-30,-29,-28,-54,-52,-45,-43,-40,-39,-39,-39,-40,-38,-37,-36,-36,-37,-35,-33,-33,-31,-31,-30,-29,-29,-55,-52,-46,-43,-41,-39,-39,-40,-39,-38,-38,-37,-37,-37,-35,-35,-33,-32,-32,-31,-30,-29,-54,-52,-46,-43,-41,-40,-39,-40,-39,-39,-38,-39,-37,-37,-36,-35,-33,-32,-32,-31,-29,-29,-55,-51,-47,-44,-42,-40,-40,-40,-40,-40,-39,-38,-38,-37,-36,-35,-33,-34,-33,-31,-30,-30,-55,-50,-47,-44,-42,-40,-40,-40,-40,-40,-39,-38,-38,-37,-36,-35,-33,-34,-33,-30,-29,-30]))])])])])])
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

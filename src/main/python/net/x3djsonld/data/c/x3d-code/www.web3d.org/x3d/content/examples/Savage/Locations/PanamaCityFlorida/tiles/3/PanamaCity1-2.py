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
      LOD(center=(135280.7,0.0,108224.56),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity2-2.x3d']),
          Inline(url=['../../tiles/4/PanamaCity3-2.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity1-2.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[-32,-32,-32,-30,-28,-28,-26,-28,-25,-25,-24,-24,-23,-20,-19,-19,-15,5,3,3,-14,-6,-33,-32,-33,-32,-31,-29,-30,-28,-26,-26,-27,-25,-24,-23,-22,-22,-19,-17,-16,0,1,0,-34,-32,-33,-33,-31,-31,-30,-28,-28,-28,-26,-28,-27,-26,-24,-23,-21,-18,-18,-17,-10,-10,-36,-34,-34,-34,-33,-31,-30,-30,-29,-28,-29,-29,-29,-28,-26,-26,-25,-21,-20,-19,-18,-18,-38,-36,-35,-33,-32,-32,-29,-31,-30,-29,-31,-30,-30,-29,-28,-27,-26,-23,-22,-20,-20,-20,-41,-39,-37,-37,-35,-33,-30,-29,-31,-30,-32,-33,-31,-29,-28,-27,-26,-26,-23,-23,-22,-21,-45,-43,-39,-37,-38,-37,-33,-32,-31,-30,-33,-33,-31,-30,-31,-28,-26,-26,-26,-25,-23,-23,-50,-46,-42,-39,-39,-38,-38,-35,-33,-33,-31,-31,-34,-33,-31,-31,-30,-29,-28,-27,-27,-25,-53,-51,-45,-42,-39,-38,-38,-37,-37,-37,-38,-36,-35,-34,-34,-33,-32,-30,-30,-29,-28,-28,-55,-52,-46,-42,-40,-39,-39,-39,-40,-38,-37,-38,-37,-36,-35,-34,-32,-32,-31,-30,-29,-29,-54,-51,-46,-43,-42,-40,-40,-41,-40,-39,-38,-38,-37,-37,-36,-36,-33,-34,-32,-31,-30,-29,-55,-51,-46,-44,-43,-42,-41,-40,-40,-40,-40,-38,-39,-38,-36,-35,-35,-34,-33,-32,-31,-31,-57,-51,-47,-46,-44,-42,-42,-42,-41,-41,-41,-40,-39,-38,-36,-35,-36,-35,-34,-33,-32,-31,-56,-51,-49,-48,-46,-46,-45,-43,-43,-43,-42,-40,-39,-39,-37,-38,-37,-36,-35,-34,-32,-31,-56,-53,-49,-47,-47,-48,-46,-44,-43,-43,-42,-40,-39,-39,-40,-38,-36,-35,-35,-33,-30,-31,-58,-55,-51,-48,-47,-47,-46,-45,-44,-43,-42,-41,-40,-40,-40,-37,-37,-36,-35,-31,-28,-29,-61,-59,-58,-56,-53,-49,-45,-45,-43,-43,-42,-42,-41,-40,-38,-38,-37,-35,-34,-32,-30,-30,-64,-65,-68,-72,-68,-62,-57,-47,-42,-42,-43,-42,-41,-40,-39,-38,-37,-36,-34,-33,-31,-31,-86,-90,-82,-79,-76,-73,-66,-58,-50,-44,-42,-42,-41,-40,-40,-39,-38,-36,-35,-33,-32,-31,-104,-98,-89,-84,-79,-76,-73,-66,-58,-51,-43,-42,-42,-42,-40,-39,-38,-37,-35,-34,-32,-32,-104,-98,-90,-84,-79,-76,-73,-66,-58,-51,-43,-42,-42,-42,-40,-39,-38,-37,-35,-34,-32,-32]))])])])])])
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

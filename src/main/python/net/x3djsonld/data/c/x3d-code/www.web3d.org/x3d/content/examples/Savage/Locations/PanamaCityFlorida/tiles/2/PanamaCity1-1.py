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
      LOD(center=(162336.84,0.0,108224.56),range=[108224.56],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/PanamaCity1-2.x3d']),
          Inline(url=['../../tiles/3/PanamaCity1-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/PanamaCity1-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=5153.551,zDimension=21,zSpacing=3607.4854,height=[-32,-32,-28,-26,-25,-24,-23,-19,-15,3,-14,5,10,13,8,16,15,15,19,18,15,15,-33,-33,-31,-30,-26,-27,-24,-22,-19,-16,1,-5,1,7,7,7,9,7,17,14,14,12,-34,-33,-31,-30,-28,-26,-27,-24,-21,-18,-10,-8,1,1,-4,3,9,7,9,12,12,12,-36,-34,-33,-30,-29,-29,-29,-26,-25,-20,-18,-8,-6,3,-1,-3,7,7,10,7,10,11,-38,-35,-32,-29,-30,-31,-30,-28,-26,-22,-20,-19,-12,-1,3,-2,2,0,4,3,9,9,-41,-37,-35,-30,-31,-32,-31,-28,-26,-23,-22,-21,-20,-8,0,3,1,1,3,3,7,7,-45,-39,-38,-33,-31,-33,-31,-31,-26,-26,-23,-22,-21,-19,-6,0,5,2,3,3,5,5,-50,-42,-39,-38,-33,-31,-34,-31,-30,-28,-27,-23,-23,-21,-13,-4,-4,3,3,3,4,4,-53,-45,-39,-38,-37,-38,-35,-34,-32,-30,-28,-24,-24,-22,-18,-8,-8,-6,5,4,3,4,-55,-46,-40,-39,-40,-37,-37,-35,-32,-31,-29,-25,-25,-22,-20,-11,-6,-9,1,4,3,3,-54,-46,-42,-40,-40,-38,-37,-36,-33,-32,-30,-26,-25,-23,-20,-13,-7,4,-8,6,3,3,-55,-46,-43,-41,-40,-40,-39,-36,-35,-33,-31,-27,-25,-25,-22,-16,-8,-3,-9,3,5,4,-57,-47,-44,-42,-41,-41,-39,-36,-36,-34,-32,-27,-27,-25,-22,-20,-11,0,-9,-1,3,2,-56,-49,-46,-45,-43,-42,-39,-37,-37,-35,-32,-29,-27,-25,-23,-20,-13,0,-8,0,3,2,-56,-49,-47,-46,-43,-42,-39,-40,-36,-35,-30,-29,-27,-25,-25,-22,-13,-9,-4,0,2,3,-58,-51,-47,-46,-44,-42,-40,-40,-37,-35,-28,-30,-28,-26,-24,-22,-14,-10,-1,1,3,2,-61,-58,-53,-45,-43,-42,-41,-38,-37,-34,-30,-29,-27,-25,-24,-20,-13,-10,-2,-8,-7,-7,-64,-68,-68,-57,-42,-43,-41,-39,-37,-34,-31,-29,-27,-25,-23,-20,-13,-9,-3,-10,-11,-11,-86,-82,-76,-66,-50,-42,-41,-40,-38,-35,-32,-29,-26,-24,-22,-19,-14,-11,-7,-9,-10,-9,-104,-89,-79,-73,-58,-43,-42,-40,-38,-35,-32,-29,-25,-23,-22,-17,-15,-12,-11,-12,-11,-11,-104,-90,-79,-73,-58,-43,-42,-40,-38,-35,-32,-29,-25,-23,-22,-17,-14,-13,-12,-12,-11,-11]))])])])])])
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

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
      LOD(center=(162336.84,0.0,72149.71),range=[151514.39],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/2/PanamaCity0-1.x3d']),
          Inline(url=['../../tiles/2/PanamaCity1-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/1/PanamaCity0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=5153.551,zDimension=21,zSpacing=7214.9707,height=[53,65,87,86,82,45,28,25,15,30,41,45,32,22,28,31,35,40,53,51,30,30,68,84,84,65,52,26,28,21,12,30,30,30,17,27,45,51,44,37,45,44,42,39,76,45,67,47,55,52,29,9,15,27,25,14,12,15,35,76,47,45,48,28,23,22,60,40,33,63,46,15,14,14,12,12,14,18,75,45,30,70,98,80,91,91,75,65,33,22,32,29,43,33,15,6,23,42,30,27,30,30,29,63,30,69,61,54,34,30,0,12,22,16,21,7,13,6,27,30,21,41,30,18,30,32,53,45,56,45,46,50,10,-3,0,8,20,3,5,13,23,28,28,20,29,12,6,30,30,35,42,45,35,41,-1,10,14,15,16,12,12,16,14,15,7,15,18,6,6,15,14,23,25,27,28,28,-26,-20,-21,-17,-5,3,9,6,-1,-1,0,4,0,-1,6,21,22,22,24,23,15,15,-31,-28,-27,-25,-25,-21,-19,-9,3,3,0,1,7,8,15,15,16,20,21,20,20,20,-33,-32,-32,-29,-27,-27,-25,-21,-19,-15,1,-3,1,7,7,8,10,7,17,14,15,12,-36,-34,-33,-31,-29,-29,-29,-26,-25,-20,-18,-8,-8,2,-2,-3,7,8,10,7,10,11,-41,-37,-35,-31,-30,-32,-31,-28,-27,-23,-22,-21,-20,-8,0,3,0,1,3,3,7,7,-49,-42,-39,-38,-33,-31,-34,-31,-30,-28,-26,-23,-23,-21,-13,-4,-4,3,3,3,4,4,-55,-46,-40,-39,-40,-38,-37,-35,-33,-31,-30,-25,-25,-22,-20,-11,-6,-9,2,4,3,3,-55,-46,-43,-41,-40,-40,-39,-36,-35,-33,-31,-27,-25,-25,-21,-16,-8,-3,-9,3,5,4,-56,-49,-46,-45,-43,-42,-39,-37,-38,-35,-32,-29,-27,-25,-23,-20,-12,0,-8,0,3,2,-58,-51,-47,-46,-43,-42,-40,-40,-38,-35,-28,-30,-29,-26,-24,-22,-14,-10,-1,1,2,2,-64,-68,-67,-56,-42,-43,-41,-39,-37,-34,-31,-29,-27,-25,-23,-20,-13,-9,-2,-10,-11,-11,-104,-89,-79,-73,-58,-43,-42,-40,-38,-35,-32,-29,-25,-23,-22,-18,-14,-13,-10,-12,-11,-11,-104,-89,-79,-73,-58,-43,-42,-40,-38,-35,-32,-29,-25,-23,-22,-17,-15,-12,-11,-12,-11,-11]))])])])])])
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

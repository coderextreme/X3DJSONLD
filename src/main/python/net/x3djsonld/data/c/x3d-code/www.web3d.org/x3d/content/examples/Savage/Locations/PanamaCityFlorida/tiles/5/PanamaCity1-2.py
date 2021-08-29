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
      Transform(translation=(54112.28,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[24,23,25,24,28,24,29,27,26,27,12,10,32,34,33,34,31,30,27,12,6,-1,28,23,21,22,22,26,29,26,23,-1,8,20,19,24,26,23,13,12,10,8,-2,-6,19,20,20,22,26,24,18,17,16,-1,-7,-3,19,20,12,-1,-6,-4,-7,-9,-8,-8,24,28,12,16,12,15,14,11,11,9,-2,3,12,7,0,-9,-10,-10,-11,-11,-11,-10,16,16,15,18,20,12,14,12,13,8,4,-1,-5,-9,-9,-10,-11,-11,-3,0,0,-6,0,-3,-1,-1,0,-2,-2,-1,-2,7,-1,-2,-3,-3,-4,-1,-1,0,9,10,9,17,-16,-15,-16,-16,-15,-16,-16,-16,-14,-13,-10,-10,-9,-7,-3,0,0,0,6,4,6,8,-19,-20,-20,-20,-19,-18,-19,-19,-22,-20,-20,-17,-13,-12,-13,-10,-12,-12,-18,-18,-19,-17,-21,-20,-21,-22,-20,-20,-19,-20,-20,-21,-22,-23,-20,-21,-21,-19,-21,-20,-20,-20,-20,-21,-21,-20,-21,-20,-20,-20,-22,-22,-23,-24,-24,-23,-23,-21,-20,-21,-24,-19,-21,-20,-23,-20,-21,-21,-24,-23,-21,-25,-20,-21,-23,-23,-25,-25,-21,-21,-24,-20,-22,-22,-22,-21,-24,-21,-21,-20,-21,-23,-21,-22,-21,-22,-24,-24,-27,-23,-23,-23,-24,-24,-23,-25,-26,-27,-25,-25,-24,-21,-27,-26,-22,-23,-23,-25,-24,-27,-28,-24,-28,-22,-22,-23,-25,-25,-23,-22,-22,-21,-23,-23,-23,-23,-26,-24,-25,-23,-23,-26,-26,-24,-25,-22,-23,-24,-26,-26,-21,-21,-22,-22,-22,-22,-23,-22,-20,-21,-21,-24,-23,-22,-24,-23,-26,-24,-24,-23,-24,-22,-21,-22,-23,-24,-22,-23,-23,-23,-26,-21,-24,-26,-24,-28,-28,-26,-25,-22,-24,-22,-24,-25,-25,-28,-26,-28,-25,-28,-26,-23,-30,-24,-34,-28,-27,-27,-30,-27,-25,-24,-23,-24,-24,-27,-31,-28,-29,-27,-32,-27,-29,-27,-28,-31,-28,-29,-31,-30,-31,-27,-25,-27,-29,-26,-31,-29,-29,-28,-26,-28,-26,-26,-25,-25,-26,-34,-29,-31,-31,-32,-33,-31,-28,-31,-28,-35,-28,-28,-29,-28,-29,-28,-29,-27,-30,-32,-27,-28,-28,-32,-32,-35,-35,-29,-31,-28,-28,-28,-32,-29,-29,-34,-32,-30,-32,-32,-30,-30,-28,-29,-29,-30,-31,-32,-36,-32,-31,-33,-32,-32,-32,-33,-31,-31,-34,-30,-32,-33,-30,-30,-28,-29,-29,-30,-31,-32,-36,-31,-31,-32,-32,-33,-32,-33,-31,-31,-33,-30]))])])])
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

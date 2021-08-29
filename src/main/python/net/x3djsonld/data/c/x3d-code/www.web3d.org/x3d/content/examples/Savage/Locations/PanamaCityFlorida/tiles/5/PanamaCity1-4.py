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
      Transform(translation=(108224.56,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[16,17,0,22,22,26,29,25,8,23,29,28,26,16,19,24,24,26,28,27,11,11,-3,-3,-2,18,16,13,15,0,7,17,23,24,19,17,17,19,16,22,22,20,5,6,-4,-4,-3,-1,-2,-2,4,3,13,21,20,15,13,-2,15,9,10,15,18,16,7,7,-4,-4,-3,-3,-2,-2,0,12,13,19,16,14,16,11,18,17,18,17,17,18,7,7,0,-3,-3,-3,-3,-2,-2,-2,0,4,7,4,6,20,-2,19,19,12,13,15,4,3,11,9,0,-2,-3,-3,-2,-2,-2,-1,7,-1,-4,17,16,22,8,23,22,20,3,3,8,6,6,5,8,-1,-2,-2,-2,-1,0,2,8,15,7,15,17,22,21,22,3,3,11,8,9,9,6,6,6,7,8,6,3,7,7,9,16,16,8,11,15,13,10,10,16,15,16,14,10,8,10,10,9,11,8,7,9,19,17,15,13,9,14,15,7,7,-9,-2,13,13,10,9,12,14,13,12,13,11,12,17,18,18,16,16,20,21,12,12,-18,-18,-16,-16,-13,-7,-1,1,6,9,13,14,18,18,20,21,20,22,21,20,9,9,-21,-20,-19,-18,-19,-18,-17,-16,-15,-11,-1,12,8,18,17,17,20,18,20,18,7,7,-23,-21,-21,-19,-18,-19,-19,-19,-19,-19,-19,-18,-14,-11,-2,8,17,15,19,16,10,9,-26,-24,-23,-22,-21,-22,-21,-20,-23,-19,-19,-17,-20,-19,-16,-16,-14,-9,-1,14,1,0,-26,-26,-27,-25,-26,-25,-23,-25,-23,-20,-21,-20,-20,-20,-18,-18,-19,-18,-17,-16,-13,-3,-29,-30,-26,-26,-26,-24,-22,-25,-23,-24,-23,-23,-23,-22,-22,-21,-20,-19,-19,-19,-18,-18,-28,-28,-29,-27,-26,-26,-24,-24,-24,-24,-23,-25,-24,-24,-24,-23,-23,-22,-21,-23,-22,-21,-31,-30,-30,-30,-29,-28,-28,-26,-26,-26,-27,-26,-26,-25,-25,-25,-25,-24,-23,-25,-23,-23,-32,-31,-31,-31,-32,-30,-29,-29,-28,-28,-28,-28,-27,-27,-26,-27,-27,-25,-25,-25,-25,-23,-32,-32,-32,-32,-31,-31,-29,-29,-29,-28,-28,-28,-27,-29,-29,-26,-26,-27,-25,-24,-25,-25,-31,-32,-31,-33,-32,-31,-30,-30,-29,-30,-29,-28,-28,-27,-28,-27,-26,-26,-24,-26,-25,-26,-31,-31,-32,-33,-32,-32,-30,-30,-29,-30,-29,-28,-28,-27,-27,-27,-27,-26,-24,-26,-25,-26]))])])])
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

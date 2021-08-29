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
      Transform(translation=(0.0,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[29,31,33,22,-2,-2,-3,-2,-2,1,2,4,6,-2,-2,-2,-2,-2,-2,10,11,15,23,27,37,24,-3,-3,-3,-3,-2,9,3,3,-2,-2,-2,-2,-3,-2,-2,-2,-1,0,9,18,17,-3,-4,-4,-4,-3,-1,4,1,1,-2,-2,-3,-3,-3,-3,-3,-3,-2,-2,22,5,12,-4,-5,-5,-4,-3,-3,-1,-2,-2,-2,-2,-3,-3,-3,-3,-3,-3,0,6,4,0,-3,-6,-6,-5,-5,-4,-5,-5,-6,-5,-4,-4,-3,-3,-3,-3,0,2,9,10,-5,-7,-7,-7,-6,-5,-5,-6,-4,-1,-1,-1,-1,0,0,0,2,2,7,8,10,11,-8,-7,-6,-6,-5,-4,0,10,10,6,8,7,8,4,2,13,5,0,0,-1,-4,-5,-5,0,0,0,-1,2,8,7,4,0,-2,-4,-4,-5,-5,-3,-4,-3,-4,-2,-1,-4,-2,5,6,8,-2,-6,-5,-5,-6,-5,-5,-5,-3,2,-2,1,1,-2,-6,-10,-12,-15,-6,-8,-5,-7,0,-3,-4,0,1,3,-3,-9,-12,-15,-14,-16,-16,-17,-18,-20,-18,-20,2,1,-2,-6,-8,-11,-13,-14,-14,-16,-17,-16,-17,-18,-18,-19,-18,-18,-20,-21,-20,-22,-14,-14,-15,-15,-16,-16,-18,-20,-20,-21,-20,-17,-19,-20,-19,-21,-21,-23,-22,-22,-22,-24,-16,-16,-17,-19,-20,-20,-24,-22,-20,-18,-20,-18,-20,-19,-20,-21,-22,-22,-23,-23,-23,-24,-20,-18,-21,-24,-21,-23,-24,-20,-19,-20,-20,-22,-21,-21,-21,-23,-21,-23,-23,-29,-25,-25,-21,-20,-23,-26,-24,-25,-21,-19,-20,-20,-21,-22,-22,-22,-23,-23,-22,-23,-24,-29,-27,-28,-21,-22,-25,-24,-28,-25,-27,-20,-21,-21,-24,-23,-23,-24,-31,-25,-26,-33,-29,-27,-26,-27,-22,-25,-24,-28,-26,-26,-28,-22,-23,-23,-23,-26,-25,-30,-27,-29,-27,-29,-28,-27,-25,-24,-24,-25,-25,-28,-28,-27,-27,-27,-25,-25,-25,-26,-28,-29,-28,-28,-29,-29,-26,-26,-26,-25,-28,-27,-28,-27,-26,-27,-26,-24,-24,-27,-26,-28,-29,-28,-29,-30,-30,-28,-27,-26,-28,-25,-26,-30,-27,-27,-27,-26,-28,-26,-27,-28,-28,-30,-30,-31,-31,-32,-32,-29,-26,-26,-26,-28,-28,-30,-30,-29,-26,-28,-26,-28,-29,-31,-33,-32,-28,-27,-25,-26,-25,-25,-27,-28,-30,-30,-29,-29,-31,-29,-26,-28,-27,-27,-29,-30,-33,-31,-28,-27,-25,-25,-25,-26,-27,-28,-30,-31]))])])])
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

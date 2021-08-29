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
      Transform(translation=(81168.42,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[-1,-2,-1,10,21,24,23,20,22,25,34,27,25,29,26,13,14,0,-1,0,13,16,-6,-4,-7,-1,11,12,10,12,11,12,0,-3,-5,-5,-2,-4,-4,-4,-4,-4,-3,-3,-8,-8,-7,-7,-1,-6,-1,-6,-7,-7,-6,-6,-6,-6,-6,-6,-5,-5,-5,-5,-4,-4,-10,-10,-10,-11,-10,-9,-9,-8,-7,-7,-6,-6,-6,-6,-6,-5,-5,-4,-4,-2,-4,-4,-6,-7,-7,-1,-7,-7,-7,-7,-7,-6,-6,-6,-4,0,0,-4,-3,0,2,3,7,0,17,9,9,10,8,4,-1,-4,-5,-6,-6,-6,0,6,8,0,-1,-2,-3,-2,5,11,8,10,10,10,10,10,11,10,9,0,0,0,-1,7,9,8,10,9,6,7,7,8,-17,-18,-18,-17,-17,-16,-16,-14,-11,-7,-2,8,4,9,10,11,9,10,10,10,11,11,-21,-21,-22,-21,-20,-22,-20,-20,-20,-21,-19,-20,-19,-20,-18,-15,-8,-1,13,12,19,16,-20,-23,-24,-23,-22,-22,-23,-22,-23,-22,-23,-21,-23,-20,-23,-19,-19,-18,-18,-17,-15,-9,-21,-23,-25,-23,-24,-24,-25,-23,-22,-23,-24,-21,-21,-21,-21,-22,-20,-21,-19,-19,-20,-18,-25,-27,-25,-25,-25,-25,-24,-22,-25,-21,-21,-22,-25,-21,-24,-24,-23,-23,-22,-23,-23,-21,-21,-21,-23,-20,-21,-22,-22,-21,-21,-23,-24,-23,-25,-27,-25,-25,-27,-23,-23,-24,-23,-23,-22,-22,-24,-22,-22,-23,-27,-25,-23,-24,-25,-25,-25,-26,-25,-24,-25,-26,-26,-27,-25,-26,-24,-27,-27,-26,-26,-26,-27,-27,-29,-28,-28,-28,-28,-26,-30,-29,-29,-27,-29,-26,-28,-26,-28,-29,-27,-28,-27,-30,-30,-28,-30,-30,-29,-31,-31,-31,-30,-30,-31,-29,-29,-31,-29,-29,-27,-28,-28,-28,-28,-29,-27,-31,-30,-29,-29,-29,-30,-31,-29,-31,-32,-31,-30,-30,-32,-28,-28,-27,-27,-28,-27,-28,-29,-28,-30,-28,-29,-29,-31,-30,-30,-30,-29,-32,-32,-30,-30,-31,-28,-27,-28,-30,-33,-30,-30,-31,-33,-32,-32,-32,-30,-30,-32,-32,-32,-31,-30,-30,-31,-32,-30,-33,-31,-32,-34,-30,-31,-32,-32,-33,-34,-34,-32,-32,-31,-33,-33,-30,-31,-30,-31,-32,-30,-31,-31,-31,-34,-33,-34,-34,-34,-35,-34,-35,-33,-31,-31,-33,-33,-32,-31,-31,-32,-31,-30,-32,-31,-31,-34,-32,-34,-34,-34,-35,-34,-35,-33,-31,-32,-33,-33,-31,-31,-31,-32,-31]))])])])
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

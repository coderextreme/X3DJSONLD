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
      Transform(translation=(27056.14,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[15,18,24,26,29,29,22,32,39,43,41,35,35,41,45,41,32,39,39,35,29,24,0,5,9,10,23,20,16,25,30,39,40,33,23,33,29,31,27,28,29,23,24,28,-2,0,12,-1,12,11,16,17,23,26,23,22,13,16,16,18,19,24,21,26,32,19,6,10,13,11,11,9,5,9,8,9,6,8,10,4,13,14,14,19,19,18,21,24,10,10,12,13,14,10,12,10,16,12,11,11,13,13,13,14,15,15,15,19,18,16,11,9,11,13,9,7,7,7,4,3,0,0,-5,-2,-1,-3,-5,-1,-1,-4,0,0,-5,-5,-3,-1,-2,-3,-1,-1,-1,-1,0,3,3,2,-1,-4,-6,-10,-12,-13,-14,-16,-4,0,2,2,-2,-6,-10,-13,-14,-16,-16,-17,-18,-18,-19,-18,-18,-21,-18,-20,-20,-19,-15,-15,-17,-17,-19,-19,-19,-20,-19,-20,-19,-20,-20,-21,-20,-21,-21,-21,-20,-20,-20,-21,-20,-20,-21,-21,-20,-23,-20,-21,-20,-21,-21,-23,-21,-20,-20,-21,-21,-21,-21,-21,-22,-21,-22,-19,-23,-20,-21,-21,-20,-22,-22,-24,-23,-19,-20,-20,-21,-21,-22,-22,-22,-23,-20,-21,-24,-22,-20,-24,-23,-25,-25,-22,-24,-21,-19,-20,-21,-23,-23,-23,-25,-24,-25,-22,-23,-21,-24,-24,-25,-26,-26,-26,-25,-26,-21,-19,-21,-24,-24,-24,-24,-25,-26,-24,-25,-24,-22,-24,-25,-25,-26,-27,-26,-23,-22,-23,-22,-24,-24,-25,-24,-23,-24,-22,-22,-22,-23,-25,-23,-23,-28,-27,-25,-23,-23,-24,-21,-21,-21,-22,-20,-21,-21,-22,-23,-26,-24,-24,-24,-23,-24,-22,-27,-25,-23,-26,-23,-21,-25,-22,-22,-21,-24,-21,-24,-24,-23,-28,-24,-28,-24,-26,-24,-22,-24,-26,-25,-25,-24,-23,-27,-24,-25,-24,-30,-25,-25,-24,-26,-26,-24,-23,-30,-27,-24,-25,-25,-28,-28,-26,-30,-25,-28,-30,-29,-29,-30,-29,-30,-27,-30,-28,-27,-26,-27,-31,-26,-32,-25,-30,-26,-29,-28,-30,-27,-32,-28,-28,-29,-31,-31,-32,-30,-30,-33,-34,-29,-26,-26,-26,-28,-28,-29,-28,-30,-31,-32,-29,-34,-32,-31,-30,-31,-31,-30,-30,-29,-30,-30,-29,-27,-29,-30,-32,-33,-35,-37,-35,-31,-34,-34,-33,-31,-31,-33,-33,-30,-33,-33,-32,-30,-31,-32,-32,-31,-32,-34,-35,-37,-35,-32,-33,-34,-33,-31,-31,-32,-32,-31,-32,-34,-33,-31,-31,-32,-32]))])])])
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

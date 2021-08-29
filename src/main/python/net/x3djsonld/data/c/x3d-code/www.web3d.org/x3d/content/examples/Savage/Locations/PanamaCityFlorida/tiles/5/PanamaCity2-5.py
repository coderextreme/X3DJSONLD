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
      Transform(translation=(135280.7,0.0,72149.71),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[-26,-24,-24,-24,-24,-23,-23,-23,-22,-21,-19,-19,-19,-18,-15,-13,-5,1,3,1,1,-2,-25,-26,-25,-24,-25,-23,-23,-21,-22,-23,-21,-21,-20,-20,-18,-18,-15,-14,-5,1,0,0,-27,-26,-26,-26,-27,-25,-25,-24,-24,-23,-22,-21,-20,-21,-19,-18,-17,-18,-17,-14,-3,1,-27,-27,-28,-26,-27,-26,-26,-26,-24,-25,-22,-22,-21,-22,-19,-17,-18,-18,-17,-15,-11,-10,-27,-28,-29,-28,-28,-27,-26,-26,-24,-25,-26,-24,-22,-22,-21,-19,-19,-20,-19,-18,-16,-13,-29,-30,-30,-29,-29,-29,-28,-27,-26,-26,-25,-24,-24,-23,-21,-20,-20,-20,-19,-21,-20,-18,-29,-29,-31,-30,-29,-29,-29,-27,-28,-27,-27,-25,-27,-24,-23,-22,-22,-21,-23,-22,-21,-21,-30,-31,-30,-31,-30,-31,-29,-28,-30,-27,-28,-26,-24,-23,-24,-23,-22,-22,-21,-20,-20,-20,-32,-32,-31,-30,-31,-31,-29,-29,-28,-28,-26,-25,-25,-24,-24,-25,-22,-23,-23,-21,-21,-21,-32,-33,-33,-32,-30,-31,-30,-30,-29,-27,-28,-26,-25,-25,-24,-23,-22,-23,-22,-22,-22,-21,-33,-33,-32,-31,-32,-30,-30,-29,-30,-27,-29,-27,-26,-26,-25,-26,-23,-22,-22,-22,-22,-21,-33,-34,-34,-32,-32,-30,-30,-30,-29,-29,-29,-28,-26,-27,-26,-25,-25,-25,-26,-24,-24,-23,-33,-34,-35,-33,-33,-32,-31,-30,-30,-32,-29,-29,-29,-28,-28,-27,-27,-26,-26,-26,-25,-24,-32,-32,-32,-35,-34,-33,-33,-32,-31,-31,-31,-30,-30,-29,-28,-28,-28,-28,-28,-26,-26,-26,-35,-34,-33,-36,-35,-33,-33,-33,-32,-32,-32,-32,-31,-30,-29,-29,-28,-28,-28,-27,-27,-26,-37,-38,-36,-36,-35,-34,-34,-34,-33,-34,-32,-32,-31,-31,-29,-29,-29,-29,-28,-29,-28,-28,-36,-37,-36,-36,-36,-36,-34,-36,-34,-34,-34,-33,-33,-32,-31,-30,-30,-30,-30,-30,-29,-28,-37,-38,-37,-37,-36,-36,-37,-35,-35,-34,-35,-34,-32,-32,-32,-31,-31,-31,-31,-30,-30,-29,-37,-38,-38,-38,-36,-36,-37,-37,-35,-35,-34,-34,-33,-32,-32,-31,-33,-31,-31,-31,-29,-29,-38,-38,-38,-39,-37,-37,-37,-37,-35,-36,-35,-35,-33,-33,-32,-33,-32,-32,-31,-31,-30,-29,-38,-38,-38,-37,-38,-38,-37,-37,-36,-36,-35,-34,-33,-33,-34,-33,-33,-31,-31,-30,-30,-30,-39,-39,-38,-37,-38,-38,-37,-36,-35,-36,-35,-34,-33,-33,-34,-33,-33,-31,-31,-30,-30,-30]))])])])
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

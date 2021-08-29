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
      LOD(center=(189392.98,0.0,126261.99),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity3-6.x3d']),
          Inline(url=['../../tiles/5/PanamaCity3-7.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,108224.56),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity3-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[-30,-28,-26,-24,-24,-24,-24,-23,-20,-19,-13,-11,-8,-9,-1,-10,-8,1,8,4,3,3,-30,-29,-26,-25,-25,-25,-24,-22,-21,-19,-15,-11,-8,-8,-10,-10,-9,-6,5,5,3,3,-31,-29,-26,-26,-26,-26,-25,-24,-21,-18,-16,-12,-8,-7,-10,-10,-9,-6,3,6,6,5,-31,-29,-27,-27,-26,-26,-25,-24,-21,-20,-18,-13,-10,-8,-10,-9,-9,-7,0,6,3,3,-32,-31,-27,-27,-27,-26,-25,-24,-22,-21,-19,-14,-11,-8,0,-6,-8,-7,0,3,2,2,-32,-30,-29,-28,-28,-28,-25,-23,-22,-21,-19,-15,-11,-8,-1,-8,-8,-6,1,3,2,2,-33,-31,-29,-29,-27,-26,-25,-22,-24,-21,-20,-16,-12,-9,3,-5,-7,-5,0,3,2,2,-31,-31,-29,-29,-27,-27,-26,-23,-23,-21,-21,-17,-13,-10,-5,-7,-3,0,0,3,3,3,-30,-31,-28,-28,-27,-27,-25,-25,-23,-21,-22,-17,-13,-10,-9,-1,-1,-1,0,2,2,3,-29,-30,-28,-29,-28,-27,-25,-24,-23,-21,-21,-18,-13,-11,-9,0,0,0,1,1,3,2,-28,-29,-29,-30,-28,-26,-26,-25,-23,-22,-21,-18,-14,-10,-10,0,0,0,2,1,0,0,-30,-29,-29,-28,-27,-26,-25,-25,-24,-21,-19,-17,-13,-11,-10,-7,2,-4,-6,-6,-4,-4,-30,-30,-29,-28,-27,-26,-25,-24,-23,-21,-19,-16,-13,-11,-10,-7,-2,-7,-8,-8,-7,-7,-31,-30,-29,-28,-27,-26,-25,-24,-23,-21,-19,-17,-12,-12,-10,-7,-3,-8,-9,-10,-10,-10,-31,-30,-29,-28,-26,-25,-24,-23,-22,-21,-20,-17,-12,-13,-8,-10,-4,-9,-11,-11,-11,-11,-31,-30,-29,-27,-26,-25,-24,-23,-22,-21,-20,-17,-12,-14,-9,-9,-6,-12,-11,-11,-11,-11,-32,-30,-29,-27,-26,-25,-24,-23,-22,-20,-19,-17,-12,-11,-11,-7,-11,-9,-10,-11,-10,-9,-32,-30,-29,-27,-25,-24,-23,-22,-22,-19,-18,-17,-12,-13,-14,-13,-11,-10,-11,-10,-11,-9,-32,-30,-29,-27,-25,-23,-22,-22,-22,-19,-17,-17,-14,-10,-13,-8,-10,-12,-12,-11,-12,-11,-32,-30,-29,-27,-25,-23,-21,-21,-22,-19,-14,-15,-9,-11,-7,-13,-15,-12,-12,-14,-14,-14,-33,-31,-29,-26,-24,-22,-20,-20,-19,-19,-16,-13,-12,-10,-12,-15,-16,-17,-16,-17,-14,-14,-33,-31,-29,-26,-24,-22,-20,-19,-19,-19,-15,-13,-11,-11,-12,-15,-15,-17,-16,-17,-14,-14]))])])])])])
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

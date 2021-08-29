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
      LOD(center=(189392.98,0.0,108224.56),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity2-3.x3d']),
          Inline(url=['../../tiles/4/PanamaCity3-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity1-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[-6,3,7,9,10,11,13,10,8,12,16,18,16,18,13,16,20,18,17,18,15,15,0,0,-10,-5,1,6,8,7,6,7,6,4,11,13,8,15,18,18,14,15,15,12,-10,1,-4,1,1,-9,-2,-1,-2,1,4,9,9,7,7,10,11,13,11,10,12,12,-18,-11,-7,0,-5,4,1,1,-1,-5,-1,3,7,5,8,8,10,9,7,9,11,11,-20,-21,-19,-18,-9,-4,-1,7,1,1,-2,1,1,-1,1,2,4,4,3,8,9,9,-21,-21,-20,-20,-20,-17,-7,-2,0,2,1,1,1,1,1,1,3,3,3,7,7,7,-23,-23,-22,-22,-20,-20,-19,-10,-6,0,0,4,4,2,2,2,3,3,4,4,5,5,-25,-24,-22,-23,-23,-22,-21,-18,-11,-7,-4,-3,-3,3,3,3,3,3,3,4,4,4,-28,-25,-24,-23,-23,-23,-22,-21,-17,-11,-7,-5,-8,-7,-6,3,6,6,4,3,4,4,-29,-27,-25,-25,-25,-24,-22,-21,-20,-14,-11,-8,-6,-6,-9,-8,6,4,4,3,3,3,-29,-28,-26,-24,-25,-25,-23,-23,-20,-18,-13,-10,-7,-7,0,-9,-8,3,5,3,3,3,-31,-29,-26,-26,-25,-25,-25,-23,-21,-19,-15,-12,-8,-6,-11,-10,-9,-9,3,5,4,4,-31,-29,-27,-27,-27,-26,-25,-24,-21,-21,-19,-13,-11,-8,-1,-8,-9,-7,0,6,3,2,-31,-30,-29,-29,-28,-26,-25,-23,-23,-21,-19,-15,-12,-9,4,-7,-8,-6,1,3,2,2,-31,-31,-29,-29,-27,-28,-25,-24,-25,-22,-22,-17,-13,-10,-8,-1,-3,0,0,3,2,3,-29,-30,-30,-30,-28,-27,-26,-26,-23,-22,-21,-18,-13,-11,-11,3,0,0,1,1,2,2,-30,-30,-29,-28,-27,-26,-25,-24,-23,-21,-19,-16,-12,-11,-10,-7,-1,-7,-8,-7,-7,-7,-31,-30,-29,-28,-26,-25,-24,-24,-22,-21,-20,-17,-12,-12,-8,-9,-3,-9,-11,-11,-11,-11,-31,-30,-29,-27,-26,-25,-24,-23,-22,-21,-19,-17,-11,-11,-10,-8,-7,-10,-10,-11,-10,-9,-32,-30,-29,-27,-25,-24,-22,-22,-21,-19,-18,-17,-12,-10,-14,-8,-9,-11,-12,-11,-11,-11,-32,-30,-29,-27,-25,-23,-22,-22,-21,-19,-18,-17,-14,-10,-14,-8,-10,-12,-12,-11,-11,-11]))])])])])])
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

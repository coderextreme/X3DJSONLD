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
      LOD(center=(189392.98,0.0,90187.14),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity2-6.x3d']),
          Inline(url=['../../tiles/5/PanamaCity2-7.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,72149.71),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity2-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[-2,-12,2,7,7,8,8,7,7,11,12,15,15,14,7,15,18,15,18,18,11,11,0,0,-10,-5,1,6,8,7,6,7,6,4,11,13,8,15,18,18,14,15,15,12,1,-9,-9,-3,-4,-2,5,1,1,1,2,7,10,11,9,14,14,15,15,13,12,12,-10,1,-4,1,1,-9,-1,0,-2,1,4,9,9,8,7,11,11,13,11,11,12,12,-13,-6,-5,-3,1,-4,-9,-6,-5,1,2,4,8,4,8,7,9,12,8,9,11,12,-18,-11,-6,1,-1,3,1,1,-3,-5,-2,4,8,3,7,8,10,10,7,9,11,11,-21,-19,-13,-8,-2,-2,8,2,1,-3,0,2,3,3,2,6,8,7,5,9,10,10,-20,-20,-19,-18,-8,-3,0,6,1,0,-3,2,1,1,1,2,4,5,3,8,9,9,-21,-20,-20,-19,-17,-7,-4,0,5,1,-4,1,-1,1,0,3,4,3,6,7,8,8,-21,-20,-20,-20,-19,-15,-6,0,0,2,1,-1,-2,1,1,1,3,3,3,7,7,7,-21,-21,-21,-21,-20,-20,-11,-6,0,1,4,0,4,3,1,1,2,3,4,5,6,6,-23,-22,-22,-22,-20,-20,-17,-8,-6,0,2,3,5,2,2,2,3,3,4,4,5,5,-24,-24,-22,-22,-21,-21,-20,-14,-7,-3,0,3,4,3,4,3,3,3,3,4,5,5,-26,-23,-22,-22,-23,-22,-20,-17,-10,-7,-4,0,2,3,3,3,3,3,3,4,4,4,-26,-24,-23,-22,-23,-22,-21,-19,-14,-8,-6,-5,-6,-6,3,3,5,4,3,3,4,4,-28,-25,-23,-23,-24,-23,-22,-20,-16,-10,-7,-5,-6,-7,-5,3,6,6,3,3,4,4,-28,-26,-24,-23,-23,-23,-22,-21,-18,-13,-8,-6,-7,-8,-7,0,4,6,6,3,3,3,-29,-27,-25,-24,-24,-23,-22,-21,-20,-14,-10,-7,-6,-11,-9,-7,6,4,6,3,3,3,-29,-28,-26,-25,-26,-24,-22,-22,-20,-15,-11,-8,-6,-5,-5,-8,0,5,4,4,3,3,-29,-28,-26,-24,-24,-23,-23,-22,-21,-17,-12,-9,-7,-6,3,-9,-7,5,4,4,3,3,-30,-28,-26,-24,-25,-24,-23,-22,-20,-19,-13,-11,-8,-9,0,-9,-8,1,8,4,3,3,-30,-28,-26,-24,-24,-24,-24,-23,-20,-19,-13,-11,-8,-9,-1,-10,-8,1,8,4,3,3]))])])])])])
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

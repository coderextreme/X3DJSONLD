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
      Transform(translation=(189392.98,0.0,108224.56),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[-13,-12,-10,-9,-8,-7,-9,3,0,-10,-10,-9,-8,-7,0,3,8,3,4,3,3,3,-14,-12,-11,-9,-8,-10,-8,3,-10,-10,-10,-10,-9,-8,-7,0,3,6,5,5,3,3,-15,-13,-12,-10,-8,-9,-7,3,-10,-10,-10,-10,-9,-8,-7,0,2,3,6,5,5,5,-18,-14,-12,-11,-10,-9,-8,3,-10,-9,-9,-9,-9,-8,-8,-6,-2,1,5,6,4,3,-18,-16,-14,-12,-11,-9,-8,-2,0,-7,-7,-9,-8,-8,-7,-6,0,3,3,6,3,2,-19,-17,-15,-12,-11,-10,-8,-7,-3,-2,-8,-8,-8,-7,-7,-5,0,3,3,6,4,2,-20,-19,-16,-14,-12,-10,-9,-8,1,-1,-6,-6,-7,-7,-6,-1,0,3,3,6,4,2,-21,-19,-17,-14,-12,-11,-10,-9,-6,0,-7,-5,-3,-5,-1,0,0,2,3,4,3,3,-21,-19,-17,-15,-13,-12,-10,-10,-9,3,0,-5,-2,-1,-1,0,0,2,3,2,2,3,-21,-19,-18,-15,-13,-12,-11,-11,-9,-6,0,-5,0,0,0,0,0,2,1,1,3,2,-21,-19,-17,-15,-13,-12,-10,-11,-10,-9,-1,0,0,0,0,0,2,1,1,2,0,0,-19,-18,-16,-15,-13,-11,-11,-10,-10,-9,-8,-1,2,-2,-4,-5,-6,-6,-6,-5,-5,-4,-19,-18,-16,-14,-13,-12,-11,-10,-10,-9,-7,-5,-2,-4,-7,-7,-7,-8,-8,-7,-7,-7,-19,-18,-17,-14,-12,-13,-12,-10,-10,-10,-8,-5,-4,-5,-8,-9,-9,-10,-10,-10,-10,-10,-20,-19,-17,-14,-12,-12,-13,-10,-8,-10,-10,-7,-3,-4,-9,-10,-11,-11,-11,-11,-11,-11,-20,-18,-17,-14,-11,-12,-14,-13,-10,-7,-10,-10,-6,-5,-11,-12,-10,-11,-11,-11,-11,-11,-19,-18,-17,-14,-12,-10,-11,-13,-11,-9,-8,-9,-12,-12,-9,-8,-9,-11,-11,-11,-10,-9,-18,-18,-17,-14,-13,-9,-13,-11,-14,-13,-11,-12,-11,-9,-9,-10,-12,-11,-11,-10,-9,-9,-17,-17,-16,-13,-14,-12,-10,-12,-13,-16,-9,-7,-12,-10,-13,-11,-12,-12,-12,-11,-12,-11,-17,-15,-17,-14,-10,-13,-11,-8,-7,-9,-13,-9,-14,-14,-13,-15,-12,-14,-14,-13,-15,-14,-16,-15,-14,-16,-10,-8,-10,-11,-12,-13,-15,-14,-15,-15,-16,-14,-17,-16,-15,-15,-15,-14,-17,-14,-13,-16,-10,-8,-11,-11,-11,-13,-15,-15,-15,-16,-16,-14,-18,-16,-16,-16,-15,-14]))])])])
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

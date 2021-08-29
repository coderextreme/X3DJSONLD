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
      Transform(translation=(162336.84,0.0,72149.71),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity2-6.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[-2,-4,-11,0,1,7,7,8,7,7,8,8,9,9,8,6,7,8,8,12,15,15,0,1,1,-3,-6,-12,-6,1,1,-3,4,5,7,8,7,7,7,7,7,7,8,7,1,-4,-6,-10,-9,0,1,-10,-6,-5,-12,1,7,6,1,-1,3,2,2,-1,1,3,-10,1,1,-4,-7,1,1,1,1,1,-1,-8,1,0,0,-3,-3,-4,-3,1,3,5,-13,-9,-6,1,-1,-6,-9,1,2,1,-3,-5,-10,-3,-6,-4,-5,-5,-1,1,2,1,-18,-13,-11,-9,-7,-3,1,0,-9,3,2,2,2,1,1,1,-2,-3,-7,-4,-2,0,-21,-19,-19,-17,-13,-13,-9,-6,-3,-1,-2,0,7,7,3,2,1,1,0,-3,-3,1,-20,-20,-20,-19,-19,-18,-18,-16,-9,-4,-2,-2,-1,0,5,5,3,1,1,0,-2,-2,-21,-20,-20,-20,-20,-20,-19,-19,-18,-13,-8,-5,-5,-3,1,1,7,3,1,1,-1,-2,-21,-21,-20,-20,-20,-20,-20,-20,-20,-19,-18,-11,-7,-5,-2,0,0,0,1,3,2,1,-21,-21,-21,-21,-21,-21,-21,-21,-20,-20,-20,-18,-14,-9,-7,-5,1,0,0,1,5,3,-23,-23,-22,-22,-22,-22,-22,-21,-21,-20,-20,-20,-19,-16,-10,-7,-6,-4,0,0,0,3,-24,-24,-24,-23,-22,-22,-22,-22,-22,-21,-21,-20,-20,-19,-16,-12,-8,-7,-5,-1,0,0,-26,-24,-23,-23,-22,-23,-22,-23,-22,-22,-22,-21,-21,-20,-19,-16,-12,-9,-7,-6,-4,-3,-26,-25,-24,-24,-23,-23,-23,-22,-22,-23,-22,-22,-21,-20,-20,-18,-16,-12,-9,-8,-7,-6,-28,-26,-25,-24,-23,-23,-23,-24,-23,-23,-23,-22,-22,-21,-21,-20,-18,-16,-13,-9,-8,-7,-28,-28,-26,-25,-24,-24,-24,-25,-24,-23,-23,-22,-23,-21,-21,-20,-19,-17,-15,-12,-9,-8,-29,-28,-27,-26,-25,-24,-25,-25,-24,-24,-23,-23,-23,-21,-21,-21,-21,-19,-15,-13,-12,-10,-29,-28,-28,-26,-25,-25,-26,-26,-25,-24,-25,-24,-23,-22,-22,-22,-21,-19,-16,-13,-11,-11,-29,-28,-27,-27,-26,-25,-25,-24,-25,-25,-25,-23,-23,-22,-23,-22,-21,-20,-18,-15,-13,-12,-30,-29,-28,-27,-26,-25,-25,-25,-24,-24,-24,-24,-23,-23,-23,-22,-21,-20,-20,-17,-14,-13,-30,-29,-28,-27,-26,-25,-25,-25,-25,-24,-24,-24,-23,-23,-23,-22,-21,-20,-20,-17,-15,-13]))])])])
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

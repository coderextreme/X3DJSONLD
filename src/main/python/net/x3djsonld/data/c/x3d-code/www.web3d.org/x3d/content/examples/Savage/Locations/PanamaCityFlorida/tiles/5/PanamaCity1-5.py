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
      Transform(translation=(135280.7,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[11,10,8,14,14,12,8,7,7,5,7,30,30,24,22,30,13,15,28,37,41,37,6,9,14,11,8,7,7,6,4,5,15,25,21,16,18,30,30,30,36,31,21,21,7,8,9,7,5,7,6,4,7,15,20,16,15,12,14,14,15,19,26,30,30,31,7,-2,3,3,3,3,3,8,14,14,14,11,14,22,25,30,30,30,30,26,26,29,3,3,3,3,7,10,15,14,14,14,12,14,22,23,25,28,30,30,30,29,27,28,3,3,4,3,6,8,9,10,11,13,13,14,22,24,24,27,26,25,26,26,28,27,3,3,7,7,9,13,14,14,15,18,22,22,23,24,26,25,23,22,22,22,22,22,10,12,11,11,9,12,14,16,19,20,21,23,24,23,23,22,21,18,17,16,15,13,7,7,12,14,15,15,15,16,17,17,16,15,15,15,15,15,16,18,18,17,16,15,12,12,11,10,11,12,15,15,17,15,12,14,14,10,14,11,14,15,11,10,7,7,9,8,8,7,7,7,10,10,12,13,15,15,13,8,4,9,7,7,1,4,6,8,7,7,7,8,7,6,5,4,3,2,5,7,7,6,5,3,3,2,1,0,4,5,9,8,8,8,8,8,7,7,5,2,1,0,2,2,1,0,1,1,0,0,1,3,0,7,7,9,9,9,8,8,6,4,2,1,0,-2,-2,-2,-2,-1,-3,-1,0,0,-3,7,3,7,8,8,8,9,6,4,2,0,-2,-2,-2,-3,-2,-3,-4,-4,-2,0,-18,-17,-15,-6,7,7,8,8,7,5,2,1,-2,-3,-1,1,1,1,0,-1,-5,-4,-21,-19,-19,-20,-17,-15,-5,7,7,7,4,1,0,0,1,2,3,2,1,-1,-3,-6,-23,-21,-20,-21,-19,-19,-19,-18,-11,-3,7,7,4,2,2,3,3,2,1,1,1,-1,-23,-23,-21,-22,-21,-19,-20,-19,-19,-17,-15,-7,7,4,3,3,3,3,3,2,0,-11,-25,-24,-24,-23,-22,-22,-20,-21,-19,-19,-19,-19,-16,-11,0,4,3,3,3,1,-5,-6,-26,-25,-24,-24,-24,-22,-24,-23,-22,-21,-19,-19,-19,-18,-15,-12,-3,1,3,1,1,-3,-26,-24,-24,-24,-24,-23,-23,-23,-22,-21,-19,-19,-19,-18,-15,-13,-5,1,3,1,1,-2]))])])])
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

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
      LOD(center=(162336.84,0.0,36074.855),range=[108224.56],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/PanamaCity0-2.x3d']),
          Inline(url=['../../tiles/3/PanamaCity0-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(108224.56,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/PanamaCity0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=5153.551,zDimension=21,zSpacing=3607.4854,height=[53,65,87,86,82,45,28,25,15,30,41,45,32,22,28,31,35,40,53,51,30,30,70,62,57,59,43,60,30,25,15,29,30,45,30,24,30,38,39,40,30,50,44,45,68,84,84,65,52,26,28,21,12,30,30,30,17,27,45,51,44,37,45,44,42,39,61,55,66,61,88,40,18,15,9,21,32,30,15,30,39,45,52,43,40,30,24,23,76,45,67,47,55,52,29,9,15,27,25,14,12,15,35,76,47,45,48,28,23,22,65,48,41,46,57,27,15,9,15,14,15,14,28,30,30,30,75,91,76,38,60,91,60,40,33,63,46,15,14,14,12,12,14,18,75,45,30,70,98,80,91,91,75,65,47,30,44,49,54,30,45,7,12,29,44,60,61,75,70,72,75,49,60,60,30,28,33,22,32,29,43,33,15,6,23,42,30,27,30,30,29,63,30,69,61,54,34,30,17,13,28,32,37,22,24,5,14,30,21,20,45,25,45,28,58,60,60,60,45,61,0,12,22,16,21,7,13,6,27,30,21,41,30,18,30,32,53,45,56,45,46,50,-4,-2,13,15,14,7,3,14,12,28,30,31,19,30,31,34,48,44,45,45,45,37,10,-3,0,8,20,3,5,13,23,28,28,20,29,12,6,30,30,35,42,45,35,41,8,9,0,6,11,4,7,18,24,21,16,22,18,26,15,30,23,32,35,37,28,22,-1,10,14,15,16,12,12,16,14,15,7,15,18,6,6,15,14,23,25,27,28,28,-21,-19,-6,17,19,7,7,4,10,4,6,12,12,2,12,7,13,23,24,22,24,24,-26,-20,-21,-17,-5,3,9,6,-1,-1,0,4,0,-1,6,21,22,22,24,23,15,15,-28,-27,-24,-22,-19,-18,7,7,-2,1,-4,-3,1,7,7,15,17,22,23,23,22,20,-31,-28,-27,-25,-25,-21,-19,-9,3,3,0,1,7,8,15,15,16,20,21,20,20,20,-32,-32,-28,-26,-26,-24,-22,-19,-14,3,-15,6,10,12,7,16,15,15,19,18,15,15,-32,-32,-28,-26,-25,-24,-23,-19,-15,3,-14,5,10,13,8,16,15,15,19,18,15,15]))])])])])])
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

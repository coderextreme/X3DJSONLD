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
      LOD(center=(189392.98,0.0,54112.28),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity1-6.x3d']),
          Inline(url=['../../tiles/5/PanamaCity1-7.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,36074.855),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity1-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[37,24,33,35,30,29,18,30,30,19,30,50,56,48,45,51,63,49,45,47,55,56,21,39,30,30,15,30,30,30,44,38,42,58,52,52,49,42,46,55,50,44,45,45,31,18,33,27,24,15,30,30,32,30,40,45,52,45,46,48,43,45,54,47,30,30,29,32,34,15,22,37,30,27,9,32,36,31,45,45,38,45,45,45,39,49,46,45,28,25,21,15,15,23,26,20,9,31,34,30,30,41,30,34,44,46,40,35,45,46,27,22,26,27,30,30,30,18,16,30,30,30,32,40,32,32,43,43,44,29,36,37,22,20,22,23,24,27,26,15,18,15,32,32,21,32,30,33,41,39,40,35,30,30,13,10,19,22,19,15,23,18,16,24,28,30,16,28,31,31,33,31,34,32,32,29,15,7,14,20,20,10,14,15,13,23,19,26,13,26,20,28,28,30,29,29,29,29,7,11,15,19,17,15,5,7,8,18,13,21,20,23,22,24,25,24,25,25,27,27,8,15,15,15,15,12,5,1,5,14,7,14,15,15,23,24,24,23,22,22,25,25,5,9,11,11,10,8,-1,6,14,7,15,16,14,21,23,24,24,23,22,22,23,23,3,6,7,6,5,5,-1,0,14,16,15,22,17,19,22,24,24,23,22,15,22,22,0,4,3,1,1,1,-1,1,11,17,21,22,22,22,22,24,24,24,23,23,19,15,0,3,-1,-3,-2,-2,1,8,7,15,15,18,22,23,23,23,24,24,23,23,22,21,-4,1,-4,1,1,1,8,14,9,10,14,14,15,19,22,23,23,23,22,22,21,20,-6,-4,0,1,4,5,7,15,15,15,14,15,17,19,22,22,22,22,22,22,20,19,-1,-5,1,4,7,8,9,14,15,15,14,15,18,20,19,20,21,20,20,20,20,19,-11,1,3,7,8,9,8,14,14,15,18,18,18,18,18,18,20,19,19,18,18,18,-6,3,7,9,10,11,13,10,8,12,16,18,16,18,13,16,20,18,17,18,15,15,-3,-12,3,7,7,8,9,8,7,11,14,15,15,15,7,15,18,15,18,17,11,12,-2,-12,2,7,7,8,8,7,7,11,12,15,15,14,7,15,18,15,18,18,11,11]))])])])])])
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

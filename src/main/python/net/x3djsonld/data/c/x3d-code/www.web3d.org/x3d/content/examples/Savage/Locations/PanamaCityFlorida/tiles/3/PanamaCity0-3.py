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
      LOD(center=(189392.98,0.0,36074.855),range=[75757.195],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/4/PanamaCity0-3.x3d']),
          Inline(url=['../../tiles/4/PanamaCity1-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/3/PanamaCity0-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=21,zSpacing=3607.4854,height=[41,45,45,30,31,29,24,28,28,30,30,30,36,41,37,43,49,42,45,32,30,30,30,40,45,30,30,18,27,30,30,42,39,43,39,42,38,40,45,35,52,47,45,45,30,21,29,30,15,15,30,30,51,46,56,53,45,38,37,35,42,30,45,42,41,39,30,30,30,20,15,19,30,30,30,34,49,49,46,48,37,30,39,37,30,28,24,23,30,30,15,18,14,15,15,29,34,60,59,49,45,35,45,31,48,41,31,30,22,22,15,14,15,16,29,30,30,21,30,39,35,38,72,74,86,60,88,60,35,30,85,91,14,14,19,45,75,75,31,76,30,32,60,45,96,77,91,76,76,91,91,76,76,65,54,46,60,60,76,52,76,75,69,61,68,66,76,76,45,75,60,76,60,45,31,28,30,30,27,30,30,45,30,30,30,58,61,47,33,68,68,68,62,53,60,47,30,30,19,27,24,45,30,21,22,30,30,40,35,50,60,60,60,48,60,60,60,60,61,61,21,30,39,31,15,30,18,30,33,22,30,52,53,51,45,50,54,60,42,45,46,50,30,32,30,19,25,35,30,30,25,15,37,43,50,41,43,46,45,36,45,55,45,37,27,27,20,19,24,29,25,15,14,15,32,30,30,39,32,32,44,44,37,28,40,41,16,14,22,19,14,20,24,17,16,23,30,30,19,35,31,31,37,31,36,35,22,22,9,9,15,21,18,15,7,10,9,21,17,24,18,23,23,25,26,26,26,26,28,28,6,11,12,12,11,9,0,4,15,7,8,15,15,21,24,24,24,23,17,22,24,24,0,5,3,1,1,1,-1,1,8,17,22,22,22,18,22,24,24,24,23,22,15,15,-3,1,-5,1,1,1,7,14,7,7,15,15,16,22,23,23,23,23,22,22,21,20,-1,-6,1,3,7,8,10,14,15,15,14,15,18,20,20,21,21,21,21,20,20,20,-6,3,7,9,10,12,12,10,8,13,16,18,17,18,13,16,20,19,17,18,15,15,-6,3,7,9,10,11,13,10,8,12,16,18,16,18,13,16,20,18,17,18,15,15]))])])])])])
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

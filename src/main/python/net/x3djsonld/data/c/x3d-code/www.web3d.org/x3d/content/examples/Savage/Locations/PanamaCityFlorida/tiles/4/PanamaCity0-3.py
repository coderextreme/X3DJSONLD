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
      LOD(center=(189392.98,0.0,18037.428),range=[54112.28],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/5/PanamaCity0-6.x3d']),
          Inline(url=['../../tiles/5/PanamaCity0-7.x3d'])]),
        Group(
          children=[
          Transform(translation=(162336.84,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/4/PanamaCity0-3.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=22,xSpacing=2576.7754,zDimension=22,zSpacing=1717.8502,height=[41,45,45,30,31,29,24,28,28,30,30,30,36,41,37,43,49,42,45,32,30,30,35,37,45,30,30,28,25,22,30,30,30,37,36,41,42,40,45,46,45,60,45,45,30,40,45,30,30,18,26,30,30,40,39,42,38,42,38,40,45,39,51,47,45,45,30,30,33,25,29,16,29,38,44,45,50,49,41,41,36,37,34,30,45,53,53,52,30,21,29,30,15,14,30,30,49,46,56,53,45,37,37,38,41,30,45,45,41,39,30,34,30,32,30,15,30,33,52,46,53,51,45,42,40,36,40,37,40,36,37,38,30,29,30,30,15,17,30,30,30,37,47,48,44,46,38,30,39,37,31,30,25,23,22,30,20,23,12,28,23,22,29,37,59,60,45,44,32,22,24,37,29,18,15,15,30,22,17,28,13,14,17,30,30,44,64,52,45,32,45,22,44,39,30,30,20,20,15,15,12,11,14,30,23,30,76,76,30,45,41,42,70,49,75,45,30,43,39,41,15,14,13,15,24,30,28,19,40,44,30,38,60,56,87,45,75,71,29,44,70,77,14,12,15,28,30,30,27,30,30,30,30,38,86,84,91,90,60,76,75,35,85,79,13,14,14,49,74,73,29,69,30,30,60,45,93,75,91,76,91,91,60,49,76,73,14,24,30,45,42,49,50,76,76,70,92,84,76,94,78,76,75,86,74,45,67,79,32,45,60,45,51,45,75,75,60,76,76,76,76,70,59,90,61,61,56,50,31,32,45,45,39,43,51,48,45,65,76,60,77,60,60,67,45,45,69,60,45,45,45,29,41,27,27,30,30,30,30,28,44,62,71,64,46,68,60,71,68,45,38,30,24,23,29,46,30,30,45,40,45,34,26,45,47,49,53,61,71,68,60,60,46,37,38,38,30,30,28,37,33,21,21,28,29,35,33,46,58,55,50,58,60,60,52,34,46,45,18,30,30,44,32,21,18,29,21,26,44,49,58,60,57,61,53,60,60,68,68,68,38,24,33,35,30,26,18,30,30,18,30,50,56,49,46,51,63,47,45,48,55,56,37,24,33,35,30,29,18,30,30,19,30,50,56,48,45,51,63,49,45,47,55,56]))])])])])])
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

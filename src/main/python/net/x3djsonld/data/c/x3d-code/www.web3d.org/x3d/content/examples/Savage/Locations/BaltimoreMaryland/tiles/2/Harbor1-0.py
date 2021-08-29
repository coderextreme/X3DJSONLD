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
      LOD(center=(4308.9585,0.0,9666.25),range=[9037.25],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/Harbor1-0.x3d']),
          Inline(url=['../../tiles/3/Harbor1-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(0.0,0.0,6444.167),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/Harbor1-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=11,zSpacing=644.4167,height=[28,37,7,4,4,1,8,5,4,4,1,41,17,21,24,0,0,5,0,0,0,0,38,26,33,9,24,9,0,0,0,0,0,49,38,34,20,30,11,2,0,0,0,0,17,42,32,27,13,10,0,1,3,3,3,18,31,27,19,1,15,4,21,10,8,6,6,4,12,9,2,10,21,27,23,11,1,10,5,1,2,0,21,34,26,41,18,2,28,14,7,5,10,26,41,46,40,12,4,46,50,21,38,40,51,47,28,14,4,0,47,51,22,42,41,50,46,32,12,2,1]))])])])])])
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

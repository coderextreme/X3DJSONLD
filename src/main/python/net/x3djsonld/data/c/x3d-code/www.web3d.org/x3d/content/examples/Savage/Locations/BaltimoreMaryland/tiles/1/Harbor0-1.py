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
      LOD(center=(12926.875,0.0,6444.167),range=[12903.75],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/2/Harbor0-1.x3d']),
          Inline(url=['../../tiles/2/Harbor1-1.x3d'])]),
        Group(
          children=[
          Transform(translation=(8617.917,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/1/Harbor0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=12,zSpacing=1171.6667,height=[49,38,46,17,18,30,9,32,23,15,17,46,28,21,18,12,6,10,7,4,4,14,19,17,11,17,17,16,11,20,35,15,10,11,21,24,18,18,25,16,27,35,15,14,0,0,6,7,11,19,9,9,19,27,8,3,0,2,2,5,3,5,5,12,11,6,0,0,0,0,0,0,2,4,5,4,2,5,3,1,0,0,0,0,0,0,5,2,3,3,3,0,0,0,0,0,0,0,0,1,0,0,0,5,0,0,0,0,0,0,0,8,10,21,11,7,0,0,0,0,0,0,7,11,17,11,8,0,0,0,0,0]))])])])])])
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

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
      LOD(center=(12926.875,0.0,9666.25),range=[9037.25],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/Harbor1-2.x3d']),
          Inline(url=['../../tiles/3/Harbor1-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(8617.917,0.0,6444.167),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/Harbor1-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=11,zSpacing=644.4167,height=[1,0,3,5,5,3,5,5,20,24,6,0,0,2,0,3,5,5,7,11,6,5,0,0,0,0,0,0,1,7,11,5,0,0,0,0,0,0,0,2,3,4,4,0,3,3,0,0,0,0,3,3,3,3,1,6,3,3,0,0,0,0,0,0,5,0,1,5,3,0,0,0,0,0,0,1,0,2,0,3,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,0,0,0,0,0,0,1,0,4,7,8,0,0,0,0,0,0]))])])])])])
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

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
      LOD(center=(12926.875,0.0,3222.0835),range=[9037.25],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/Harbor0-2.x3d']),
          Inline(url=['../../tiles/3/Harbor0-3.x3d'])]),
        Group(
          children=[
          Transform(translation=(8617.917,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/Harbor0-1.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=11,zSpacing=644.4167,height=[49,38,46,17,18,30,9,32,23,15,17,51,45,43,13,9,15,9,31,15,12,23,45,28,22,16,13,6,10,5,4,4,12,23,27,22,29,30,12,4,5,10,12,5,18,16,11,17,24,17,11,21,37,19,10,23,13,23,18,43,31,23,47,38,31,13,11,21,24,19,19,23,15,26,40,11,12,0,8,13,11,10,35,10,14,29,24,15,0,0,5,6,10,13,11,12,18,21,10,1,0,3,5,5,3,5,6,21,25,6,1,0,3,5,5,3,5,5,20,24,6]))])])])])])
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

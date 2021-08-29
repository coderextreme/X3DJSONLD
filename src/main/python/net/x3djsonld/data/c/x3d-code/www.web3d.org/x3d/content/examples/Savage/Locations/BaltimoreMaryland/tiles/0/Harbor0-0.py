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
      LOD(center=(8617.917,0.0,6444.167),range=[18074.5],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/1/Harbor0-0.x3d']),
          Inline(url=['../../tiles/1/Harbor0-1.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/0/Harbor0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=1723.5834,zDimension=12,zSpacing=1171.6667,height=[78,75,33,48,41,49,46,18,9,23,17,64,63,41,31,33,46,21,12,10,4,14,45,48,31,7,18,19,11,17,11,35,10,39,32,14,0,4,11,24,18,16,35,14,23,12,5,13,0,0,6,11,9,19,8,43,24,0,4,0,3,2,5,5,12,6,45,40,32,0,0,0,0,0,2,5,2,27,27,1,8,9,5,1,0,0,0,2,13,0,1,32,28,3,3,0,0,0,0,31,16,23,48,23,1,0,5,0,0,0,51,50,34,13,26,0,10,11,0,0,0,52,50,36,15,27,0,11,11,0,0,0]))])])])])])
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

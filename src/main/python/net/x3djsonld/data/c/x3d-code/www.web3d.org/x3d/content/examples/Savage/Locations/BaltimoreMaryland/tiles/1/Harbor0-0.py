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
      LOD(center=(4308.9585,0.0,6444.167),range=[12903.75],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/2/Harbor0-0.x3d']),
          Inline(url=['../../tiles/2/Harbor1-0.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/1/Harbor0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=12,zSpacing=1171.6667,height=[78,98,75,69,33,49,48,44,41,46,49,64,62,63,50,41,27,31,36,33,32,46,45,42,48,46,31,30,7,10,18,35,19,39,35,32,22,14,10,0,1,4,5,11,23,12,12,7,5,2,13,7,0,0,0,43,17,24,17,0,0,4,0,0,1,3,45,40,40,12,32,12,0,0,0,0,0,27,35,27,17,1,18,8,17,9,6,5,13,0,0,6,1,21,32,23,28,15,3,31,27,16,21,23,43,48,45,23,15,1,51,48,50,42,34,30,13,11,26,19,0,52,45,50,41,36,29,15,11,27,20,0]))])])])])])
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

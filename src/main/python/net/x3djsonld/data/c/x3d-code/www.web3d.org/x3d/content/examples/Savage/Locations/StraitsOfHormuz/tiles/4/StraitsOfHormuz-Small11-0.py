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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[0,1,0,0,0,1,-1,3,2,2,4,0,0,3,0,1,6,0,0,1,2,2,0,2,0,0,0,2,0,0,1,0,0,1,0,0,3,2,0,0,1,1,1,1,2,0,3,1,0,7,6,3,0,1,2,2,0,-2,0,1,0,0,0,0,1,0,2,3,3,1,1,0,5,2,0,0,0,1,0,0,2,0,2,1,2,0,-1,1,1,0,4,1,1,0,0,0,1,0,1,0,1,0,0,1,0,0,-1,2,1,-1,-1,1,0,0,3,1,0,2,0,-1,0,0,0,0,1,-1,0,0,2,0,1,2,5,8,7,2,1,0,2,2,0,3,0,3,4,0,0,0,3,2,-2,0,0,0,57,29,12,3,0,0,0,0,0,0,2,1,1,0,0,0,1,-1,3,0,2,0,110,48,23,-9,-6,6,0,0,-1,0,0,-1,0,2,0,0,2,-2,1,2,1,0,163,58,21,6,0,-4,1,6,0,0,-1,0,2,0,0,0,1,1,2,2,2,3,144,170,112,20,7,3,1,5,4,0,-3,0,0,0,0,0,0,2,0,2,0,0,142,324,209,177,78,24,7,5,7,4,2,-1,0,1,1,3,2,1,0,0,0,1,333,272,172,208,113,59,12,10,9,4,8,5,5,0,0,4,0,1,3,0,3,0,290,333,281,133,73,39,17,10,9,8,10,7,9,1,5,0,0,1,0,1,0,5,402,284,181,79,46,24,15,13,12,13,11,18,12,5,-2,1,8,0,0,2,0,5,321,217,83,53,40,31,86,60,21,50,24,32,18,6,1,4,1,0,3,2,1,0,175,179,146,173,165,85,54,121,18,26,29,19,10,8,2,0,5,3,5,2,2,3,140,136,78,78,76,57,74,43,26,35,27,20,16,9,7,6,-5,4,-2,2,1,11,104,92,99,70,63,40,39,65,50,44,31,26,29,11,6,5,0,-5,4,0,-17,0,99,76,81,84,71,64,45,71,56,56,49,38,25,19,16,6,6,-4,-1,14,14,0,115,90,88,83,82,75,75,68,72,68,57,46,32,42,23,6,3,3,24,12,15,17,102,92,95,91,91,89,86,77,93,88,73,101,124,102,95,83,25,14,3,16,18,14,101,92,96,91,92,90,87,77,95,91,75,126,128,106,100,85,36,21,3,16,18,14],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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

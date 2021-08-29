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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[60,17,15,12,6,8,13,4,2,1,3,0,1,1,4,0,1,4,2,2,1,3,78,84,17,15,10,20,25,18,3,4,1,2,1,3,2,2,3,2,2,2,1,4,109,66,25,72,28,14,10,11,9,2,0,1,2,2,0,3,3,2,2,1,3,1,133,106,35,133,74,14,8,5,-1,0,5,2,2,2,1,1,3,3,2,2,1,3,31,25,137,142,120,8,10,10,5,1,3,3,4,0,3,2,4,1,0,2,2,2,24,35,22,21,19,9,9,11,9,1,0,3,1,2,2,3,3,0,2,2,4,0,27,23,22,19,21,8,7,6,7,2,2,2,2,1,0,3,2,2,1,1,4,2,44,27,32,13,12,46,7,6,3,3,2,2,4,2,0,2,1,1,1,0,3,4,40,48,34,42,16,29,8,7,4,4,3,4,2,2,3,0,3,4,2,0,0,3,22,24,41,54,38,16,7,5,6,5,3,5,4,4,1,1,0,2,2,4,0,1,26,38,50,62,58,31,11,2,6,6,6,5,5,8,17,2,1,4,2,1,2,1,18,28,31,66,12,17,14,10,5,5,7,6,4,9,4,5,1,0,1,2,1,1,35,22,19,11,12,16,8,8,6,18,8,6,15,19,9,5,1,4,7,0,3,3,31,28,35,14,12,9,9,10,9,7,8,7,8,17,12,12,7,3,3,2,1,2,31,36,32,45,17,12,12,16,12,10,14,11,7,11,23,13,11,6,2,2,1,1,33,39,39,36,17,16,16,130,74,19,7,12,11,17,19,7,17,4,1,4,-4,1,35,35,40,30,20,51,53,124,130,160,13,11,20,52,54,9,9,5,0,4,3,1,33,37,40,47,41,79,63,66,129,85,16,18,77,30,15,8,9,9,1,1,0,1,35,38,41,47,49,51,55,64,129,74,17,25,35,17,19,14,8,4,0,0,0,0,38,37,43,47,52,57,68,88,126,40,26,44,101,56,100,33,13,6,2,1,3,4,44,46,43,47,57,65,84,116,130,39,65,104,42,117,56,55,12,12,5,2,1,1,42,45,45,53,55,63,85,107,120,37,118,127,103,113,100,60,67,27,4,5,0,1,41,45,47,54,53,63,88,104,122,34,129,126,105,114,104,55,73,26,6,5,0,2],
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

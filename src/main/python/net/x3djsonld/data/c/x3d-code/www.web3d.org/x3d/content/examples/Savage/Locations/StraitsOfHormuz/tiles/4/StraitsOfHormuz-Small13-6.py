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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small13-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.906134432197852,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[41,45,47,54,53,63,88,104,122,34,129,126,105,114,104,55,73,26,6,5,0,2,51,50,52,54,50,60,82,98,92,147,151,76,116,71,76,102,89,71,28,2,4,2,56,62,59,26,42,58,90,120,134,153,63,95,39,35,23,16,10,8,2,7,0,0,77,75,73,26,21,37,31,34,42,59,55,116,73,45,23,14,9,6,5,2,4,3,65,83,34,33,18,21,34,39,61,58,43,52,57,36,22,21,9,6,4,5,16,0,72,99,19,18,14,18,22,51,66,59,80,59,55,58,28,49,16,7,4,7,31,34,121,57,15,14,12,15,13,62,122,17,45,25,35,42,24,17,9,8,5,7,4,16,32,37,14,12,12,13,13,33,14,11,17,19,28,52,30,11,12,13,11,8,10,5,10,32,11,9,6,12,12,21,12,15,18,19,16,66,35,11,18,23,16,10,10,7,8,5,10,9,7,8,8,50,11,6,16,15,18,16,15,14,16,56,23,23,13,14,6,2,7,6,6,7,6,18,9,10,20,13,17,27,16,19,27,44,21,25,18,29,6,4,1,4,6,6,7,7,18,10,11,9,13,20,28,15,9,8,15,30,14,17,4,5,4,5,12,14,7,7,19,7,7,8,12,16,13,10,9,8,7,16,28,15,2,4,2,7,15,46,16,3,4,11,7,11,6,13,12,5,9,6,8,7,20,8,0,9,3,18,5,6,8,7,9,7,5,8,1,6,6,7,7,6,8,7,0,7,9,8,5,0,4,0,0,2,6,10,7,18,4,5,8,6,4,9,6,8,9,13,9,5,7,1,1,0,6,2,6,53,4,4,12,6,6,8,7,8,8,7,2,24,6,8,1,1,0,0,1,6,1,4,3,4,3,5,4,3,4,3,9,8,7,2,6,1,1,0,0,3,3,0,3,0,5,2,4,2,7,3,0,5,3,5,2,2,2,1,0,0,3,2,1,1,0,4,4,-8,4,0,14,8,7,38,7,1,1,0,1,1,0,0,2,6,2,2,4,4,-9,5,1,16,12,7,8,18,3,2,2,3,0,0,0,0,0,0,1,6,6,6,6,6,6,6,6,6,6,8,1,0,5,3,0,0,0,0,0,0,0,6,6,6,6,6,6,6,6,6,6,7,4,0,4,2],
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

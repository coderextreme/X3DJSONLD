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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,55.729040188915306,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[4,3,5,0,0,5,3,0,2,1,4,0,0,0,0,0,3,1,2,1,-1,12,2,-1,0,4,0,2,0,0,0,1,1,0,2,1,0,0,0,1,0,1,0,8,-1,-1,1,0,1,-2,2,1,2,2,1,0,0,2,2,1,0,5,1,0,2,4,7,13,13,29,23,18,1,-1,0,1,0,4,1,0,5,0,3,0,0,-2,3,0,6,13,12,18,28,39,17,13,0,-2,2,1,2,0,4,0,3,1,1,2,0,1,24,26,12,26,54,53,15,46,8,1,1,7,3,3,1,6,0,1,1,0,0,2,49,48,15,18,19,50,46,18,13,19,8,6,9,0,-1,0,2,0,0,0,0,1,71,72,20,33,30,25,16,7,9,13,24,0,0,4,0,2,0,3,1,0,0,0,79,80,71,22,42,48,60,37,17,13,8,6,5,1,2,2,0,1,0,1,3,3,84,79,81,22,47,65,80,76,36,17,17,13,11,0,-1,3,1,0,2,0,0,0,146,110,80,28,39,58,87,96,43,37,12,12,10,14,0,7,0,1,2,1,2,7,74,95,72,37,53,65,63,74,80,83,26,57,21,32,14,4,1,-1,-1,6,0,0,110,68,50,29,63,99,27,84,43,38,29,65,47,13,8,10,5,1,0,0,0,-1,42,56,21,40,23,29,26,152,143,119,28,88,49,18,42,21,5,6,1,0,2,2,49,45,17,29,14,23,20,54,92,19,55,95,68,63,26,12,9,4,3,2,1,0,37,46,27,12,14,13,19,45,54,21,22,34,35,39,33,23,11,7,4,4,4,2,18,19,9,10,10,6,17,30,14,20,24,16,27,20,15,14,25,7,3,2,3,3,8,6,9,12,7,5,8,8,9,12,21,24,38,29,19,18,20,14,5,4,4,5,7,-8,4,5,3,5,3,3,9,12,11,13,39,16,31,38,33,17,8,8,4,9,1,-14,3,34,1,10,-3,3,8,6,6,10,7,11,33,48,33,16,8,12,13,8,3,3,2,5,3,7,5,2,7,7,8,8,10,30,61,17,32,12,10,15,18,21,3,2,4,9,2,1,2,0,1,0,0,5,13,18,20,13,19,14,13,19,24,27,3,2,4,10,2,1,2,0,1,1,0,4,14,20,17,13,17,14,13,20,24,27],
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

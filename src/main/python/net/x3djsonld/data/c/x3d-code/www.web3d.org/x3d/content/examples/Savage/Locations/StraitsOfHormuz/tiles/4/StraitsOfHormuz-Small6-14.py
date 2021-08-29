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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small6-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.1214698558067,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[6,9,8,20,17,25,24,23,25,31,204,57,54,57,63,52,52,45,48,53,64,57,6,10,12,13,24,27,22,25,52,63,50,44,52,58,66,57,53,52,50,52,57,59,5,9,9,13,17,36,26,25,29,246,40,46,57,89,61,68,55,59,50,52,60,64,5,2,9,10,13,20,44,36,60,229,51,41,48,61,55,59,63,58,54,52,59,69,3,6,4,10,8,17,56,41,127,95,54,46,48,50,51,57,66,61,58,57,65,77,1,5,6,10,12,18,78,107,231,86,64,52,53,52,52,57,60,60,58,57,68,74,0,1,6,11,6,16,84,172,226,86,68,60,53,60,58,55,62,66,64,59,64,67,2,0,5,7,10,20,120,193,200,96,70,71,55,70,59,58,58,63,65,69,77,67,1,1,6,8,13,37,37,159,172,95,107,74,62,74,62,63,66,61,69,66,83,72,0,0,3,8,15,67,75,272,153,97,83,70,64,72,68,70,70,69,71,70,79,71,1,4,4,9,20,40,149,272,129,100,87,75,77,75,64,66,72,74,77,83,78,78,2,2,8,11,25,60,171,333,131,113,94,78,86,74,68,72,73,76,78,104,79,79,2,1,9,9,27,55,138,506,156,107,96,89,80,70,69,67,74,82,86,97,89,84,3,5,9,10,23,43,193,307,148,116,106,88,78,72,70,76,75,85,83,85,90,97,3,6,8,15,25,45,282,169,127,110,110,92,80,74,72,75,71,79,81,88,95,95,3,3,11,11,22,61,295,124,107,101,93,78,84,75,99,83,77,82,91,87,102,99,8,7,13,15,29,60,116,96,87,77,85,71,75,83,79,81,82,85,93,104,96,102,7,10,11,12,70,119,70,89,73,63,115,68,60,70,70,71,79,85,91,94,98,106,10,12,15,13,56,146,111,71,63,59,98,64,55,63,70,68,78,95,107,96,105,109,8,10,15,19,87,146,131,62,53,63,59,56,52,62,60,67,81,103,95,102,109,127,10,13,12,18,41,107,45,48,46,52,69,50,53,56,62,76,81,87,113,104,119,123,9,12,24,51,27,38,35,43,43,43,52,48,58,61,76,77,101,130,138,133,147,144,10,11,29,49,24,34,34,43,43,43,51,46,59,61,78,76,104,133,138,132,145,144],
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

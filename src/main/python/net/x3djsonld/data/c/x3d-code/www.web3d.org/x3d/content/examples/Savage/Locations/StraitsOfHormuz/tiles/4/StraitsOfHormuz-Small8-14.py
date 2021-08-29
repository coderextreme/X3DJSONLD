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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small8-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[24,24,24,84,28,32,36,48,52,53,49,55,46,41,46,47,49,54,59,81,116,94,22,25,22,60,25,32,33,57,36,36,38,40,41,42,41,43,45,49,53,65,59,76,24,23,43,25,26,28,32,32,33,33,35,36,37,40,42,43,48,48,56,60,73,124,23,26,34,25,31,30,28,33,30,34,35,38,42,47,41,47,47,51,72,57,86,84,18,29,83,31,33,34,40,29,33,33,38,39,41,47,45,45,54,55,51,56,99,81,20,26,106,35,36,40,48,34,31,34,36,39,42,46,56,53,59,57,66,63,70,70,20,20,38,39,42,60,47,36,32,36,36,42,44,47,58,62,63,70,84,78,57,62,20,21,29,37,49,64,44,38,76,37,38,41,48,47,49,54,61,70,96,77,79,63,19,22,28,36,45,53,53,86,98,36,42,46,53,52,53,64,70,67,96,93,109,88,20,23,30,32,58,47,74,47,51,110,43,44,47,53,58,61,66,81,87,104,92,111,21,22,28,39,54,40,42,62,50,89,43,46,49,52,54,58,83,68,75,93,103,111,20,26,28,36,49,50,51,55,65,79,44,47,49,50,55,62,73,89,90,110,108,120,25,27,31,37,35,44,71,68,78,109,46,47,52,53,58,64,67,87,110,118,124,121,24,26,29,53,36,44,55,64,64,91,52,49,57,55,59,66,146,140,137,120,128,139,28,32,38,63,40,45,65,55,59,88,52,54,55,61,67,70,74,128,139,136,144,148,27,34,44,60,46,49,49,53,52,79,53,57,56,61,68,73,81,118,132,143,144,158,34,41,44,60,60,56,45,49,49,60,55,57,60,62,66,72,86,93,150,160,162,168,57,54,58,52,45,45,44,46,48,54,55,59,65,63,67,78,88,98,159,208,197,194,61,91,55,48,50,41,42,43,42,53,65,63,65,71,75,94,132,127,212,165,199,218,52,84,49,41,40,39,41,44,44,54,65,82,75,75,85,133,124,119,148,166,227,232,33,73,44,40,36,38,45,41,45,51,79,97,94,90,158,164,199,166,185,191,220,321,33,44,36,37,33,34,37,38,43,49,76,76,96,111,198,209,217,228,216,186,228,268,33,42,34,36,33,35,37,38,44,49,78,75,90,112,208,205,209,221,215,186,231,275],
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

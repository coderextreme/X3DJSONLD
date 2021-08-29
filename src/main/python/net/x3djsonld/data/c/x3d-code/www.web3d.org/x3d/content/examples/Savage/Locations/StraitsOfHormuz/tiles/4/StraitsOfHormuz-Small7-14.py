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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small7-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.23356479529115,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[10,11,29,49,24,34,34,43,43,43,51,46,59,61,78,76,104,133,138,132,145,144,9,11,17,63,44,131,37,42,41,45,42,49,67,70,83,105,96,120,134,135,157,150,8,9,37,68,66,107,49,40,41,59,53,50,68,69,107,101,109,128,135,154,133,155,9,8,47,54,84,113,54,46,47,51,61,55,69,106,93,113,116,133,128,153,156,168,9,16,52,26,96,146,69,52,50,61,80,67,105,88,83,91,112,103,124,113,123,118,12,12,29,37,63,126,80,72,54,86,78,76,92,89,77,85,97,128,97,95,98,104,11,15,17,27,52,124,85,86,76,81,71,69,89,77,95,96,106,112,88,101,117,115,9,16,33,51,51,167,118,88,70,75,66,72,75,74,93,97,112,86,89,89,93,104,6,14,55,71,39,118,110,78,67,69,62,70,91,77,88,90,83,78,78,86,92,100,13,15,46,87,49,170,87,82,61,62,57,63,68,68,81,79,98,77,77,83,90,99,15,14,42,85,77,190,82,69,61,58,67,60,68,74,88,71,72,78,93,113,94,90,14,17,40,42,76,171,87,64,56,54,58,59,67,78,91,68,75,84,93,88,85,109,12,18,18,27,82,149,70,63,55,50,52,54,82,69,75,68,75,83,107,97,88,101,16,19,28,38,78,150,59,55,60,47,47,57,70,67,69,63,73,71,93,76,88,81,15,19,27,42,67,113,57,54,51,49,49,101,56,67,68,61,63,79,73,74,82,88,16,16,32,64,81,69,49,47,46,42,46,49,59,62,57,59,64,85,64,73,92,94,12,20,19,62,53,53,41,38,46,40,42,48,50,56,53,65,84,59,62,74,95,119,19,16,23,37,56,45,37,36,38,38,42,45,48,55,104,86,55,61,65,87,101,118,20,21,25,44,62,36,33,36,36,43,43,46,50,56,61,55,52,64,77,77,102,103,21,24,24,34,64,32,35,33,40,38,43,44,65,73,48,49,52,59,71,81,101,97,19,23,27,30,31,27,33,37,39,50,45,56,66,46,48,47,106,65,83,85,96,92,25,23,23,67,28,31,36,46,51,52,50,55,47,41,45,46,49,55,59,78,122,90,24,24,24,84,28,32,36,48,52,53,49,55,46,41,46,47,49,54,59,81,116,94],
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

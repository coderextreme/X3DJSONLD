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
        texture=ImageTexture(url=['../../images/4/bosphorus8-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.956771138722615,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[68,99,95,85,78,45,61,85,112,117,87,64,46,56,97,102,97,57,67,24,86,94,75,70,85,96,94,61,55,94,105,125,99,83,70,52,75,114,94,102,48,33,55,71,73,74,42,70,104,89,91,74,105,121,111,107,93,77,106,102,116,104,71,42,60,83,14,44,28,86,113,106,94,106,98,116,124,117,119,94,119,127,129,102,107,46,96,106,3,12,27,72,97,114,106,114,115,111,123,120,122,117,120,129,128,125,111,52,110,115,36,17,4,8,58,80,111,115,122,121,121,112,109,118,108,121,136,126,90,87,128,132,59,61,28,5,19,90,88,115,123,104,103,96,97,111,89,107,121,134,118,99,138,141,61,78,70,11,10,69,68,106,107,106,79,64,107,67,105,119,130,134,137,111,137,142,74,100,75,50,6,21,70,87,87,55,56,56,58,80,95,110,138,143,140,132,144,140,40,94,81,60,4,9,13,74,93,29,37,88,102,116,122,124,139,136,135,138,143,144,58,57,63,79,49,13,6,55,59,22,93,102,93,106,120,128,131,130,128,133,132,129,23,25,74,75,38,30,8,10,13,25,92,80,99,126,126,129,129,123,113,130,128,128,12,42,73,87,81,47,10,7,12,40,36,44,85,113,130,130,119,107,101,120,114,114,14,69,79,88,92,30,37,15,10,19,70,89,84,96,128,124,117,109,86,102,110,108,23,38,76,84,95,53,76,47,10,37,72,107,121,125,129,127,121,93,86,75,90,80,36,66,77,97,102,91,89,68,11,60,41,102,113,108,124,122,114,105,78,57,71,72,56,104,100,95,110,87,77,40,14,59,69,71,93,111,123,108,97,99,79,69,50,47,79,102,90,81,90,70,65,10,53,76,100,95,92,105,118,111,93,81,85,82,65,70,81,83,70,59,62,42,40,13,61,72,102,103,101,110,104,101,89,76,68,65,73,61,84,72,54,52,31,23,13,11,21,46,72,67,94,107,93,96,91,92,79,82,95,100,78,63,49,53,65,77,45,47,16,12,44,47,87,85,84,92,99,88,98,96,105,106,82,60,68,81,81,53,74,77,55,12,30,32,75,77,82,79,92,101,114,112,123,125,79,66,97,94,81,28,24,36,33,16,16,16,41,45,55,75,83,100,109,120,133,141,78,68,99,95,75,23,15,24,23,16,15,22,38,38,60,77,81,95,105,115,132,139],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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

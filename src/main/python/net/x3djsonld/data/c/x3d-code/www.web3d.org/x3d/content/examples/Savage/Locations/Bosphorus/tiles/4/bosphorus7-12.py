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
        texture=ImageTexture(url=['../../images/4/bosphorus7-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[102,127,119,88,75,63,61,64,71,115,93,85,73,85,106,97,102,91,88,74,88,96,100,124,103,72,72,84,58,69,110,121,105,98,79,82,112,121,100,85,77,65,87,95,91,90,98,76,64,69,55,66,100,137,117,97,93,94,120,142,103,87,95,76,77,82,85,72,79,70,55,67,59,74,120,104,109,104,118,116,129,128,117,104,86,87,67,65,77,74,79,74,71,59,61,87,100,76,111,101,130,147,138,118,136,122,94,84,72,69,64,64,65,66,64,59,57,64,63,91,108,90,135,152,127,110,110,111,110,95,80,77,60,59,63,62,57,58,57,67,75,95,111,96,116,129,124,99,110,89,111,89,95,92,80,86,84,68,62,66,58,63,83,76,89,84,82,93,122,93,110,87,89,94,75,82,87,106,97,95,73,99,68,56,61,74,87,105,68,77,108,81,86,77,88,74,69,70,91,100,81,123,103,97,86,63,59,66,60,66,64,68,80,76,65,71,64,75,57,58,96,112,90,118,110,95,74,77,69,62,58,60,61,76,77,66,62,64,59,58,57,56,125,128,111,124,93,107,103,106,78,68,87,62,57,81,90,74,64,57,64,67,66,70,146,137,139,104,136,124,116,115,92,87,62,61,71,84,86,68,61,65,94,83,83,80,153,144,117,139,117,109,129,115,89,68,54,63,79,86,64,58,63,96,108,98,103,90,144,135,130,99,109,124,116,113,94,72,63,72,84,79,61,61,66,96,129,117,102,88,164,139,113,119,82,96,102,94,85,67,59,71,78,72,69,62,74,82,109,110,88,84,153,134,117,95,79,70,73,75,64,66,65,63,63,75,64,66,88,103,72,99,106,103,190,145,108,91,99,90,111,107,92,113,82,60,61,84,63,59,69,74,54,72,99,103,175,146,115,122,123,99,101,96,115,99,65,57,62,73,58,66,62,56,64,65,72,73,137,152,184,145,126,119,115,115,112,77,62,60,64,62,62,59,58,54,62,62,58,56,159,168,150,130,109,90,85,114,101,71,57,75,65,62,59,58,61,63,72,68,71,68,133,166,105,115,73,68,54,110,78,65,59,72,64,62,62,61,61,58,69,82,91,94,108,155,105,69,48,45,42,48,32,53,66,69,61,58,60,59,53,59,59,77,117,131,104,152,103,70,46,40,45,33,27,49,66,65,59,58,61,61,48,59,56,75,113,127],
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

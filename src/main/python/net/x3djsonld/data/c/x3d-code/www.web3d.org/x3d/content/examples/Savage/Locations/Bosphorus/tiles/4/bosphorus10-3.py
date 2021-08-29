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
        texture=ImageTexture(url=['../../images/4/bosphorus10-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[19,20,39,56,77,101,89,66,79,86,103,115,97,106,72,99,67,84,41,89,103,125,10,20,38,53,73,104,90,73,92,86,94,96,80,88,50,47,47,42,60,102,125,128,15,19,33,49,71,102,97,85,96,86,83,83,70,70,52,78,88,56,98,103,140,131,15,26,30,46,67,99,103,105,96,84,71,67,55,61,65,102,106,49,121,65,98,99,13,27,39,46,70,98,125,115,99,84,69,56,55,75,87,86,62,55,126,117,72,88,17,29,45,49,72,103,136,119,96,80,66,54,66,83,76,55,74,91,86,131,86,83,28,27,43,62,75,112,132,119,96,81,71,54,70,78,65,61,93,97,68,119,137,130,36,32,46,65,88,118,123,115,90,78,64,57,75,74,59,70,98,106,87,109,137,140,37,46,42,64,89,121,113,107,85,70,59,62,83,74,62,77,93,109,91,89,112,124,37,57,46,62,92,120,109,98,75,65,60,64,92,75,65,79,96,116,93,89,108,115,36,56,68,62,95,119,109,80,82,80,62,65,98,76,74,82,104,130,99,95,109,119,33,55,81,80,110,112,95,96,99,78,65,63,99,77,83,95,113,138,101,109,133,134,38,52,78,103,124,104,113,127,104,96,74,64,102,81,85,123,132,144,121,133,155,154,65,47,92,130,125,133,130,140,127,129,93,73,121,92,79,113,114,146,141,148,144,145,96,62,88,145,131,146,149,136,110,99,80,70,115,98,110,87,106,110,139,157,139,129,118,84,77,134,145,151,140,126,112,88,68,70,102,119,129,105,94,119,138,157,140,140,110,117,78,114,139,147,111,96,83,75,65,72,91,113,142,112,97,105,119,159,155,143,120,131,114,96,117,144,128,106,100,85,65,69,84,110,143,136,106,132,136,150,128,121,119,116,123,112,135,123,120,114,94,78,66,69,80,95,118,146,117,150,141,133,134,127,119,86,111,142,144,122,94,108,85,70,72,91,77,106,128,146,143,151,128,106,110,111,98,62,109,141,130,109,99,91,91,67,81,102,78,99,128,130,125,130,134,113,88,84,52,62,83,113,132,106,83,75,74,71,84,108,79,104,125,120,106,133,103,99,94,90,45,63,63,79,118,114,87,88,74,77,85,103,84,101,124,116,97,116,134,101,76,74,48,69,68,86,119,112,91,93,73,78,86,102,85,104,124,113,96,113,132,104,75,73],
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

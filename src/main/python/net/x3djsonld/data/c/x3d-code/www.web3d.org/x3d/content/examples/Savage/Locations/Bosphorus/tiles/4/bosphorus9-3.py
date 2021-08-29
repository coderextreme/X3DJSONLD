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
        texture=ImageTexture(url=['../../images/4/bosphorus9-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[76,96,122,130,154,141,139,154,157,128,121,102,84,32,25,16,15,11,22,72,67,68,73,88,108,141,161,145,161,123,104,109,66,84,51,22,17,10,11,11,-2,12,24,28,84,92,115,142,173,164,148,97,67,65,40,46,24,15,14,11,15,15,18,11,16,24,94,101,120,157,171,148,127,109,53,36,21,20,12,16,18,22,21,24,19,10,17,30,105,115,128,158,140,116,96,88,57,23,12,15,20,24,28,31,35,30,31,39,18,26,111,131,163,164,129,82,67,45,33,16,13,11,21,34,50,52,52,39,49,57,17,17,122,140,168,154,124,82,37,25,14,14,14,22,26,46,61,62,57,63,70,70,44,27,133,147,163,104,97,66,36,15,9,16,18,26,44,80,78,79,72,101,88,92,54,26,153,156,163,107,70,44,28,16,10,21,28,40,70,122,124,101,84,121,114,108,69,30,168,167,145,108,79,54,30,21,17,31,43,52,84,132,140,115,97,132,148,124,83,43,155,153,135,91,70,36,20,18,29,36,50,60,80,115,140,135,116,135,154,142,104,73,125,126,121,84,52,26,21,16,39,36,48,63,78,103,138,127,138,147,160,143,102,71,90,95,97,63,36,19,16,24,45,53,40,65,81,105,132,135,153,163,147,128,98,91,57,64,66,40,13,16,18,24,40,61,48,63,91,107,138,129,158,143,132,79,54,53,46,42,34,17,13,17,25,25,50,62,64,73,80,111,142,143,156,128,106,123,117,113,61,34,17,20,16,28,40,29,52,68,80,81,96,98,120,145,151,154,144,120,108,90,72,36,18,11,25,35,49,28,52,72,94,85,102,114,131,151,155,147,146,131,120,118,70,31,10,22,35,49,66,35,55,80,104,99,115,118,131,145,134,132,112,135,122,121,54,16,18,28,47,69,79,49,56,87,114,116,128,116,119,132,137,108,81,113,77,85,33,18,23,36,54,80,82,49,54,88,117,131,132,116,109,127,125,129,94,59,55,63,21,18,29,46,61,82,82,53,65,82,107,133,130,111,101,107,112,103,114,95,53,34,20,16,32,51,71,93,88,61,61,87,116,130,119,105,78,112,106,108,75,39,34,37,19,15,38,55,77,100,89,65,76,84,105,119,100,105,75,102,71,93,40,80,94,113,19,20,39,56,77,101,89,66,79,86,103,115,97,106,72,99,67,84,41,89,103,125],
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

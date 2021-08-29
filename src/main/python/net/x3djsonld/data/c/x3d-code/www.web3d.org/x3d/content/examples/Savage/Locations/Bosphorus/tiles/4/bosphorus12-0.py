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
        texture=ImageTexture(url=['../../images/4/bosphorus12-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[105,131,124,133,138,113,88,76,71,74,65,59,58,56,56,62,74,102,85,103,137,132,100,95,111,111,124,132,101,88,82,70,72,71,68,63,70,72,87,106,105,113,131,137,103,93,87,95,116,135,122,111,95,74,89,94,84,78,88,87,105,95,95,104,105,116,101,89,80,87,106,128,141,133,100,84,115,120,83,86,107,109,108,88,70,76,83,97,112,93,75,81,96,120,138,137,117,101,141,123,79,98,123,110,103,87,55,53,80,82,112,95,72,78,92,114,120,125,139,113,157,114,102,125,107,105,85,82,67,35,61,57,121,96,65,73,89,107,94,115,145,149,163,120,130,122,87,96,62,66,79,44,32,36,122,97,59,67,72,88,88,105,134,163,146,141,121,93,86,76,61,55,66,37,40,51,95,86,58,90,94,80,98,114,121,156,105,121,105,75,85,49,51,47,72,35,36,47,70,75,57,82,103,103,92,117,141,159,108,77,83,84,48,38,33,27,36,44,16,19,71,59,46,51,89,126,96,109,122,155,122,101,66,64,70,66,71,53,21,22,12,14,77,63,50,38,76,135,110,138,142,132,133,112,91,103,101,89,61,42,22,19,12,12,82,59,52,44,70,131,145,125,129,123,92,129,126,120,92,68,42,38,46,44,13,12,72,63,52,42,66,129,135,115,108,124,81,116,107,113,65,47,49,72,75,50,21,17,44,41,44,34,63,102,125,114,77,94,87,84,111,72,60,74,82,77,60,69,37,31,53,49,43,31,60,67,124,96,101,63,84,76,116,104,92,84,60,50,47,54,33,25,59,51,47,31,42,75,116,72,113,69,55,61,100,98,69,60,45,32,26,24,15,15,67,57,53,37,32,81,108,66,107,94,49,69,107,96,72,49,44,51,44,22,44,43,82,68,49,28,46,84,105,63,86,75,43,77,71,107,106,64,59,67,44,27,58,64,92,72,46,23,63,82,112,81,49,68,35,73,52,88,93,74,78,78,46,33,61,68,97,69,44,24,49,99,94,96,64,41,32,57,42,57,89,98,111,76,71,39,65,74,95,60,40,25,78,95,64,76,80,52,25,33,47,48,58,78,120,97,59,69,78,89,81,71,39,25,39,98,49,57,70,44,24,52,72,70,74,87,128,112,90,90,89,89,76,69,40,25,35,101,52,51,66,38,25,53,71,69,81,88,128,115,91,87,83,82],
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

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
        texture=ImageTexture(url=['../../images/4/Malacca6-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[270,192,178,95,89,78,72,58,97,80,79,68,45,43,51,44,46,50,43,45,30,23,167,104,140,143,96,66,87,70,68,85,57,49,49,42,67,98,67,51,31,35,43,41,161,135,78,112,75,100,98,47,77,48,82,108,73,81,94,74,44,38,49,63,30,52,181,122,75,78,127,65,70,54,49,49,78,72,59,111,86,53,39,57,77,99,68,62,135,126,127,84,65,48,66,71,54,68,40,39,48,71,48,42,46,68,79,90,66,60,142,104,112,86,51,67,64,53,46,81,67,56,61,73,49,77,88,78,71,180,86,65,84,65,68,90,79,70,62,59,76,67,61,46,63,84,69,98,85,58,122,84,79,76,100,98,91,88,83,63,76,71,80,63,50,77,94,115,91,97,120,85,82,74,83,61,91,93,88,79,84,84,82,80,55,62,68,54,89,96,125,131,159,104,105,62,53,50,87,72,87,90,82,83,83,52,53,68,89,80,78,152,135,248,393,309,152,85,166,126,93,88,96,86,72,75,54,54,78,108,104,97,130,102,132,208,472,281,114,151,122,90,83,69,78,70,63,55,91,87,93,117,80,117,113,182,305,286,263,180,181,214,156,140,76,93,84,61,75,71,117,116,125,104,110,243,392,358,306,387,268,233,162,132,176,206,109,105,97,108,112,66,100,110,127,189,557,259,279,189,310,218,237,177,156,122,39,44,117,118,114,131,149,106,95,162,162,251,559,305,236,158,299,213,124,58,65,26,16,17,108,127,144,142,139,111,152,171,177,449,173,194,122,229,271,143,71,50,32,28,25,24,131,163,158,314,308,125,137,136,399,128,218,173,137,423,150,68,64,134,23,23,28,25,108,107,183,136,132,111,92,134,156,136,176,204,318,165,120,32,27,22,15,22,26,22,141,161,134,140,123,85,61,53,107,135,321,145,221,131,64,50,28,27,17,4,18,16,119,127,104,124,130,92,85,49,109,227,284,64,80,99,48,28,39,27,17,10,5,1,73,80,104,85,101,96,87,40,55,151,278,92,64,29,28,14,17,16,5,9,6,6,80,86,107,88,95,93,87,40,49,145,268,82,64,28,24,17,19,17,5,9,6,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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

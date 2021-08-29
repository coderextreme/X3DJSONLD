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
        texture=ImageTexture(url=['../../images/4/Malacca8-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819594,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[725,882,894,1054,419,536,1504,1134,544,556,666,343,329,285,323,99,105,145,90,104,129,131,772,625,764,732,240,396,979,860,455,755,208,400,647,291,125,96,85,85,117,124,80,74,846,752,1146,587,216,510,776,659,797,760,183,265,182,134,129,98,155,128,114,59,66,112,1264,1419,949,368,216,794,649,802,600,192,216,302,131,120,123,108,187,131,66,48,46,52,1133,1491,707,298,215,651,268,790,435,140,379,279,112,100,152,225,144,66,43,49,50,45,1049,1084,664,257,383,434,385,601,137,160,140,107,107,140,137,80,65,58,40,42,53,54,773,599,362,318,720,377,642,239,343,251,97,89,201,100,67,58,64,55,59,107,57,47,1067,1287,796,296,586,340,253,143,483,303,215,85,87,77,72,71,67,60,54,57,49,45,1298,1317,641,865,596,231,216,560,591,251,226,158,102,64,75,76,57,51,44,65,42,42,1290,933,1055,860,353,480,1029,406,298,263,185,91,90,58,55,62,55,46,40,36,29,26,756,664,910,560,349,489,359,225,175,219,92,74,63,70,68,55,49,51,32,31,25,25,1211,472,478,280,243,342,146,69,65,80,72,63,88,148,74,66,51,39,30,27,39,28,468,549,257,170,117,98,84,76,65,77,54,63,49,68,63,58,57,48,54,43,41,41,556,392,118,122,116,95,85,73,61,56,65,68,44,74,55,40,29,30,53,43,52,51,145,122,107,118,86,94,72,79,70,57,49,38,46,54,38,50,47,41,25,50,38,30,137,118,111,82,71,82,72,62,76,52,48,39,40,30,35,28,35,30,30,21,42,49,185,162,163,121,103,98,80,69,69,79,50,42,37,35,36,22,34,36,20,19,32,42,184,172,100,90,92,86,111,67,68,55,57,40,35,28,26,28,30,37,34,29,40,37,165,152,189,182,148,146,127,77,67,49,54,44,35,30,35,35,32,35,38,25,40,38,236,214,187,163,101,102,101,49,55,48,34,36,34,30,43,35,32,35,43,34,31,14,169,175,155,109,97,78,96,73,41,46,41,24,26,26,43,36,17,31,42,32,21,35,163,168,153,105,90,83,100,73,40,45,41,24,25,24,40,35,18,30,41,37,19,32],
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

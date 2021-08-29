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
        texture=ImageTexture(url=['../../images/4/Malacca3-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-4.689706692856765,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[585,462,428,370,387,401,361,291,260,290,212,163,181,149,137,74,71,55,54,47,41,31,336,434,279,291,283,276,295,233,224,187,162,120,91,96,118,112,58,50,37,36,34,29,274,179,228,217,195,167,236,196,212,188,149,120,116,102,104,89,61,37,30,27,17,19,180,203,143,140,167,146,142,183,84,93,81,106,98,93,53,67,46,74,64,41,25,34,232,227,188,187,154,153,139,133,136,92,97,75,61,90,73,62,66,59,51,46,40,40,329,325,327,275,387,215,119,125,163,101,64,72,43,75,57,39,73,64,42,24,33,40,377,368,258,190,221,143,111,128,116,116,81,74,44,49,70,39,50,40,52,32,24,19,413,346,215,183,104,133,160,141,95,96,90,74,81,42,32,40,39,32,20,24,31,26,328,210,205,150,117,86,122,123,107,87,87,72,88,66,52,40,27,43,45,67,67,67,609,364,153,175,83,66,113,93,123,94,80,79,70,64,63,82,65,70,59,59,51,57,963,500,102,87,73,94,69,98,86,103,110,81,70,67,61,77,68,73,72,43,29,25,555,338,129,95,96,74,71,78,94,74,75,66,91,67,57,53,78,58,62,55,51,50,381,126,107,79,57,61,53,56,70,70,71,60,64,79,67,56,48,65,45,57,55,49,136,146,109,101,71,60,54,51,67,61,74,53,57,53,63,50,46,43,58,43,40,57,234,159,130,96,86,78,60,57,43,48,60,50,48,44,66,56,44,39,41,40,30,31,216,136,114,98,88,62,56,43,40,35,72,43,44,41,42,61,59,39,35,32,32,27,146,141,123,96,117,93,76,62,71,44,36,43,50,37,47,60,46,43,44,29,26,26,104,135,116,108,76,78,88,64,60,60,33,34,64,39,36,43,36,43,26,31,25,26,114,98,107,94,88,74,72,70,44,36,54,35,28,51,33,40,27,39,31,23,21,23,82,98,84,93,68,80,67,70,43,48,40,39,31,27,52,29,30,53,19,20,17,19,89,77,85,64,76,65,73,42,44,49,46,26,20,30,21,28,24,42,23,15,19,17,94,71,87,62,76,66,69,41,39,55,39,26,19,22,20,27,26,39,23,15,18,17],
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

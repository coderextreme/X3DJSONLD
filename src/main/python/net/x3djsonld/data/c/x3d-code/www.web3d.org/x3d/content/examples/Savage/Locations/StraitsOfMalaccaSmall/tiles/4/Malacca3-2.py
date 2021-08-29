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
        texture=ImageTexture(url=['../../images/4/Malacca3-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[100,96,74,98,94,80,69,75,80,74,58,51,46,39,41,77,52,44,50,71,89,91,100,78,101,103,91,81,97,84,87,76,73,53,51,39,35,41,47,40,56,67,77,71,105,81,108,104,91,99,84,87,84,75,75,58,50,43,37,38,44,45,42,60,57,67,94,113,125,110,93,91,81,85,69,73,61,61,55,56,58,48,33,31,40,39,55,65,114,136,103,96,102,88,68,76,73,69,53,46,63,66,43,48,36,37,32,36,45,50,201,163,122,126,102,87,87,72,66,65,59,52,56,42,43,51,64,38,31,33,49,65,267,174,148,126,104,106,116,89,84,72,69,55,61,54,64,55,65,68,31,39,35,34,599,300,344,250,163,93,109,97,95,92,80,72,71,68,56,58,57,62,53,29,29,38,459,387,490,212,177,98,91,83,99,82,85,74,68,67,58,49,57,57,42,30,36,26,412,488,357,191,160,87,74,65,78,85,74,69,75,67,60,51,42,53,58,35,27,31,669,659,268,233,125,112,81,64,63,68,60,57,61,58,63,53,51,46,58,43,29,33,572,206,256,176,114,150,93,77,66,57,57,129,53,60,51,54,40,44,47,53,32,30,654,324,225,174,172,145,99,75,65,55,113,115,54,44,54,45,44,34,44,42,36,37,659,513,231,322,173,164,161,79,72,65,180,112,68,43,56,51,33,34,42,47,43,50,518,558,494,249,329,159,109,88,191,200,134,81,65,46,51,49,40,27,28,46,41,51,556,346,249,171,449,369,114,105,212,162,129,78,61,52,40,41,32,26,29,50,25,48,551,249,465,629,390,337,127,305,127,127,109,68,63,45,59,54,44,22,25,40,25,39,480,775,742,731,388,201,173,171,137,102,64,48,51,49,53,48,29,26,26,29,21,35,503,839,810,592,301,356,230,132,126,91,65,51,44,43,62,37,45,42,46,28,19,33,685,437,494,201,129,182,214,142,105,100,74,51,50,43,56,68,61,76,55,42,35,17,380,499,291,214,180,250,172,87,100,59,62,70,53,50,74,69,54,87,76,101,45,24,552,427,379,193,272,239,229,169,83,99,127,114,108,53,72,100,56,81,133,120,99,21,583,431,369,179,263,244,235,139,90,102,124,120,115,47,66,101,56,75,141,127,100,19],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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

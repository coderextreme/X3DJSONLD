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
        texture=ImageTexture(url=['../../images/4/Malacca10-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[49,66,36,35,56,46,47,112,67,31,32,26,19,35,30,11,14,8,7,7,2,3,52,42,41,57,56,61,86,66,39,37,47,25,20,10,9,9,7,10,9,8,2,4,59,44,60,75,43,97,78,63,47,46,26,19,19,15,10,8,6,7,7,6,3,3,92,58,145,131,47,75,107,69,42,75,40,22,22,14,11,7,6,12,7,4,4,4,93,314,561,230,61,62,233,114,87,125,36,30,17,18,9,6,6,8,7,5,5,5,325,534,784,396,143,208,177,54,76,63,54,40,22,16,7,13,12,9,14,5,5,5,648,702,733,390,136,437,266,139,224,146,43,26,33,14,10,7,7,6,16,8,4,4,665,822,887,557,143,351,432,397,461,210,40,42,21,26,6,8,4,10,6,5,0,3,679,959,901,450,446,122,231,449,456,266,101,116,42,17,7,45,19,10,7,7,5,89,507,700,417,200,454,88,114,268,221,209,34,122,61,17,6,27,10,15,54,7,8,107,556,510,216,128,120,95,111,66,138,71,34,36,39,15,7,16,25,17,224,14,32,27,454,250,325,239,70,73,153,74,197,45,45,32,16,11,8,21,13,29,70,23,186,8,382,414,235,85,50,85,164,69,80,26,89,56,60,19,6,19,26,17,59,155,26,5,383,413,163,81,46,87,118,30,38,19,17,8,97,7,17,20,35,55,107,73,41,5,454,474,230,189,48,181,69,38,21,26,21,24,38,18,29,44,37,75,71,52,19,3,175,347,488,394,59,115,42,14,20,23,16,23,35,25,10,48,61,63,68,47,28,4,217,123,437,126,70,157,26,25,29,20,14,56,40,28,28,36,34,60,48,19,26,6,169,76,323,103,43,104,51,31,28,24,18,79,26,17,16,27,73,43,36,35,7,10,189,349,68,48,42,61,69,27,25,32,36,61,27,33,26,39,81,46,37,54,28,12,254,260,101,91,97,82,82,31,32,31,32,53,117,33,50,36,65,40,29,125,9,9,455,292,106,77,69,67,67,42,34,26,35,37,235,115,44,64,52,27,29,82,11,15,349,200,117,89,83,106,87,36,41,48,30,34,88,104,48,80,50,43,40,26,22,11,335,221,134,85,87,81,79,36,40,46,29,35,93,131,47,72,44,47,38,26,25,12],
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

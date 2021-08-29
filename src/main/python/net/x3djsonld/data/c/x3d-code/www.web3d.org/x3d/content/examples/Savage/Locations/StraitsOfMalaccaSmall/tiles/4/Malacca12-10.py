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
        texture=ImageTexture(url=['../../images/4/Malacca12-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[475,203,128,200,184,182,270,130,328,131,149,110,86,26,35,29,128,27,5,19,28,9,366,421,297,394,266,140,186,164,138,158,68,225,267,46,23,20,150,23,15,24,21,9,282,354,290,212,199,120,268,176,144,200,177,135,261,88,50,30,51,47,29,27,18,72,262,249,282,251,126,122,199,188,379,316,422,194,124,199,98,36,54,23,24,21,17,54,279,338,300,228,165,223,306,287,387,273,366,193,105,201,126,28,29,46,24,26,39,46,547,261,343,310,235,239,264,379,326,243,292,210,195,148,67,25,37,112,18,34,37,35,307,324,365,526,300,296,648,408,281,294,348,241,161,45,41,27,34,62,47,58,28,39,497,249,289,354,395,509,594,433,287,382,463,421,95,59,43,41,41,64,34,36,46,213,394,248,300,286,387,599,294,377,413,639,382,188,68,43,47,34,46,205,41,36,93,279,435,275,276,176,273,315,172,384,473,457,107,164,82,38,85,50,102,314,65,85,154,335,351,350,295,167,316,136,199,321,395,254,140,161,77,62,60,65,202,414,52,187,279,475,174,269,210,345,179,119,218,141,394,119,81,117,338,127,64,46,321,331,58,163,350,360,111,238,125,364,121,158,117,237,214,198,78,114,62,344,58,49,272,336,107,62,296,188,172,270,108,210,170,131,110,174,278,311,116,61,146,95,48,41,43,154,42,22,251,37,72,159,172,116,139,107,99,142,362,414,216,77,196,60,51,34,41,151,40,21,59,38,70,124,160,126,129,104,146,207,347,149,106,67,203,43,37,29,70,316,43,53,37,20,105,54,147,97,83,84,82,134,379,291,262,78,45,31,49,24,50,169,30,32,10,16,321,72,70,85,63,103,83,120,421,311,176,102,81,28,57,22,41,69,35,40,23,295,215,103,41,94,52,86,97,138,230,181,58,196,37,30,50,20,124,63,38,40,41,123,468,375,54,96,53,103,121,78,82,291,44,224,76,51,54,18,66,54,28,25,38,140,492,687,105,55,60,330,333,87,61,188,47,76,71,22,46,28,20,66,34,41,50,19,624,806,272,42,41,202,278,64,121,126,46,60,154,36,79,15,123,61,29,24,80,16,644,823,283,44,48,183,267,56,105,141,46,62,175,35,75,17,125,61,31,26,89,15],
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

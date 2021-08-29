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
        texture=ImageTexture(url=['../../images/4/world12-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,44.95834003882254,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=1.0714287,zDimension=24,zSpacing=0.48913044,height=[813,1364,895,-3,-29,-29,-29,-29,115,143,276,205,163,127,63,56,75,115,242,240,198,191,256,449,14,-25,-29,-29,-29,-122,97,218,246,201,126,146,54,53,60,94,141,148,169,170,189,95,-11,-29,-29,-29,-29,37,129,242,169,151,120,158,35,43,59,75,92,125,141,151,195,45,-18,-29,-29,-29,182,29,-26,186,102,169,193,29,29,29,57,78,97,114,134,141,119,21,-16,-29,-29,-29,-29,-24,-10,-29,51,68,167,167,48,30,48,79,96,114,124,130,108,12,-16,-28,-29,-29,-29,-29,-27,-28,5,94,81,147,29,31,61,81,98,107,119,152,71,-3,-17,-24,-27,-29,-29,-29,-29,-21,-38,33,83,177,30,37,70,77,87,188,103,110,90,-7,-10,-17,-27,-29,-29,-29,-29,-18,-7,64,32,153,80,39,52,75,178,78,123,215,143,-6,-3,-16,-17,-21,-27,-27,-28,-16,62,90,83,195,217,97,70,73,109,114,218,316,145,1,-3,-11,-16,-19,-20,-23,-22,-17,97,113,143,228,180,140,91,75,99,127,291,445,111,2,-18,-7,-17,-14,-16,-15,-16,13,126,169,255,255,190,199,91,62,75,137,350,549,78,-9,22,-16,-7,-9,-14,-7,-1,44,140,139,176,285,219,212,88,143,69,185,273,447,82,21,20,7,10,-6,-6,-2,4,40,118,197,208,251,297,231,203,146,96,175,334,382,55,32,22,34,11,1,1,1,12,66,123,235,274,354,325,187,174,105,104,185,261,356,173,131,27,30,18,5,8,10,22,104,165,178,261,363,350,253,227,177,123,119,153,314,211,164,47,66,32,12,14,13,68,128,160,253,259,437,327,303,251,207,150,110,213,272,166,295,57,70,79,60,45,44,93,79,204,250,310,263,260,326,241,259,248,127,264,273,200,281,29,88,100,54,96,51,53,83,143,116,207,319,327,360,260,265,225,211,268,284,224,207,125,15,80,86,133,76,153,193,196,228,444,370,279,324,249,239,215,131,262,241,151,255,296,142,93,112,146,98,90,212,228,333,573,453,342,336,268,213,212,177,210,240,221,245,278,240,23,26,105,55,126,212,296,249,417,615,414,342,232,210,188,182,212,189,228,221,274,162,71,149,118,72,132,233,327,221,603,791,456,332,232,205,175,162,197,186,144,169,279,243,181,95,172,205,219,214,108,206,445,551,436,337,204,137,128,87,167,162,184,251,306,175,126,61,135,91,248,308,108,208,479,878,531,277,188,130,142,87,158,157],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])))])
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

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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[44,47,71,80,79,91,110,130,307,404,596,449,398,677,935,1271,1235,948,835,790,801,818,39,37,74,114,149,92,111,124,181,451,529,316,296,687,955,980,1108,891,746,595,640,573,33,30,33,106,129,98,104,112,195,256,291,176,653,839,779,664,941,813,667,242,326,274,28,32,51,51,124,108,107,114,121,122,129,329,688,514,448,735,794,704,515,263,252,299,21,24,62,55,99,111,116,138,195,180,131,218,245,392,691,767,709,629,245,464,695,541,17,21,32,77,90,157,140,200,328,307,139,235,390,622,748,566,657,253,494,676,622,477,11,20,92,36,99,124,176,282,281,259,144,192,157,384,660,384,596,244,262,476,780,609,13,54,95,45,47,63,145,230,274,225,157,294,160,322,626,238,226,317,519,414,680,602,8,46,249,58,53,61,164,227,434,342,257,169,177,467,435,202,301,586,571,333,484,710,6,112,232,63,63,71,101,134,573,437,322,172,173,248,187,195,438,797,538,523,515,704,13,176,252,88,74,79,156,232,252,202,294,186,177,184,352,380,682,848,598,584,524,684,173,222,224,110,94,95,102,193,211,189,182,184,250,194,206,687,831,1042,694,618,691,789,132,198,349,152,174,112,168,280,370,225,196,200,320,240,215,491,855,1074,793,741,740,897,62,175,335,251,366,167,302,483,474,273,201,223,388,238,344,288,739,948,961,846,841,865,114,276,415,499,364,212,315,570,608,501,213,276,545,262,464,535,789,803,1132,1131,987,1177,241,203,221,253,514,317,359,558,574,481,228,465,445,384,518,748,808,862,1077,1249,1181,1166,103,45,119,76,260,597,567,606,595,425,341,574,416,496,656,882,941,910,1170,1295,1074,933,0,13,31,38,96,450,623,490,578,538,233,635,575,710,778,1104,1085,1019,1276,1097,851,773,3,2,7,15,16,234,662,482,520,519,242,653,764,686,757,815,968,1073,1348,1070,812,704,2,2,0,1,10,90,300,472,595,514,265,598,814,663,556,596,914,946,1119,1168,940,870,3,-1,0,0,9,19,211,409,686,547,368,262,781,562,370,429,887,853,950,1053,1073,908,9,-3,0,-2,7,27,139,322,672,631,397,306,382,295,511,462,828,631,888,834,914,1250,8,-2,-3,-3,6,30,161,314,671,638,415,324,341,303,540,479,801,639,872,849,906,1251],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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

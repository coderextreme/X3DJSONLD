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
        texture=ImageTexture(url=['../../images/4/Malacca12-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1999,2467,2108,1491,1403,921,681,809,863,1792,1718,1493,1126,1284,1065,814,441,76,175,138,26,27,1717,2087,1875,1723,995,790,542,754,526,1108,1445,1066,971,835,712,184,563,532,62,84,61,69,1601,1539,1219,665,931,519,540,409,375,1271,1643,1134,527,415,474,522,901,201,78,154,150,111,1392,1011,940,831,890,786,720,378,605,1395,1397,1295,1163,326,441,230,105,87,61,123,106,79,1401,1724,1492,1246,1313,1129,1144,542,901,1506,1057,947,1112,398,134,163,78,82,46,72,145,57,1459,1884,1761,1333,1358,1259,988,992,1065,1139,1091,924,819,1185,182,149,67,46,32,107,106,124,1255,1231,1237,1654,1975,935,925,888,465,809,1094,986,1720,290,177,83,30,29,41,36,91,45,1385,1780,1683,1408,1080,762,607,153,281,873,487,1441,656,249,141,59,54,36,17,50,43,41,1375,1331,1180,681,663,405,499,708,300,367,527,1003,306,145,94,72,112,33,12,21,9,11,1715,1508,1292,1260,1191,918,701,220,185,261,143,164,117,145,147,175,87,52,76,28,30,20,2572,1744,1434,1531,1681,1591,1292,367,274,259,191,82,45,70,60,107,54,57,26,20,11,8,1915,1381,1332,1038,819,1466,879,248,135,156,106,150,79,32,93,105,79,25,35,19,43,12,1247,1103,587,597,438,333,83,67,56,111,55,29,66,56,28,36,50,26,25,31,2,2,757,858,786,522,247,203,84,25,20,13,16,25,41,16,28,57,34,27,28,1,2,1,384,281,366,330,255,141,47,25,19,7,4,11,21,13,64,48,17,3,2,2,1,2,116,161,363,312,196,80,72,17,17,8,2,11,6,7,9,1,0,1,3,2,1,2,74,80,267,232,65,12,45,8,1,2,8,1,10,4,2,3,2,2,2,2,2,1,61,39,77,24,5,39,0,4,4,4,4,4,2,11,3,3,1,3,3,2,2,2,10,15,14,8,37,18,6,6,5,2,16,4,2,2,4,1,0,1,2,1,2,1,5,1,3,5,1,2,2,1,3,-3,8,2,4,0,1,2,3,1,0,0,0,1,2,3,3,3,3,3,3,0,3,1,0,4,6,2,2,2,1,1,2,3,0,0,2,3,3,2,2,3,2,2,5,2,0,3,4,2,2,1,2,0,2,0,0,0],
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

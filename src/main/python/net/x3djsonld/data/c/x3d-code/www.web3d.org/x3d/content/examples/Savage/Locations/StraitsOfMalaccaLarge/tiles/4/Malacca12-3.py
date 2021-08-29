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
        texture=ImageTexture(url=['../../images/4/Malacca12-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,95.84375014402414,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,2,5,8,23,22,15,19,17,126,97,70,163,570,1138,1366,1835,1057,1255,1979,1891,1999,2,4,12,17,13,35,31,21,37,64,123,138,304,1036,1338,2136,1611,1908,1846,1625,1579,1717,8,35,24,16,24,40,43,41,46,52,73,240,696,1602,1090,881,1327,1383,1387,1428,1721,1601,5,25,28,48,32,56,54,43,58,108,116,209,990,999,760,947,1391,1616,1616,1702,1542,1392,24,19,33,84,36,80,66,135,145,149,236,390,718,1195,1505,1416,1444,1431,1573,1819,1430,1401,72,48,52,273,371,465,259,195,281,347,509,561,1081,1445,1810,1844,1481,1217,994,1308,1322,1459,134,226,306,508,615,539,390,395,470,476,338,662,1189,1170,1521,1710,1246,1125,1147,1488,1332,1255,434,377,704,596,477,403,798,920,831,288,789,1302,954,957,828,936,1309,1089,1068,1720,1502,1385,647,390,417,566,582,652,846,877,859,479,891,1053,735,675,1174,1491,1147,873,924,1106,1352,1375,134,339,505,496,749,980,1015,912,926,979,684,810,582,1438,1333,1041,1210,647,945,1318,1795,1715,221,425,427,411,374,483,549,1321,1457,1142,1351,808,1158,1901,765,675,792,833,857,1763,2509,2572,502,373,680,276,461,418,688,1091,1346,1954,1757,1254,1475,1884,1042,623,624,387,862,1585,1946,1915,601,771,691,555,477,777,816,1243,1407,2292,2488,1967,2098,1804,952,580,636,298,758,969,1095,1247,893,925,1039,821,1348,1428,1350,1484,1365,1450,1852,1632,926,856,886,380,492,266,498,694,768,757,1536,1061,475,832,1580,1535,2022,1718,762,1797,1367,880,895,491,447,250,480,342,204,378,458,384,756,675,963,1216,1278,1402,1231,712,1059,1297,658,1407,521,371,516,155,165,126,171,124,151,116,1055,342,532,422,989,1022,735,497,748,741,483,342,325,160,90,31,179,65,55,73,85,74,447,341,149,377,369,162,245,143,98,35,44,77,173,14,10,100,81,115,75,34,68,61,215,65,69,52,50,44,51,82,35,16,7,5,12,2,1,3,4,15,9,10,12,10,197,80,33,24,9,8,21,6,5,2,1,2,2,2,4,3,5,1,1,5,4,5,152,24,19,9,4,2,3,2,1,2,2,1,1,2,2,1,2,4,1,3,2,2,128,21,17,9,4,2,3,2,1,1,2,2,1,3,2,2,3,5,0,3,2,2],
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

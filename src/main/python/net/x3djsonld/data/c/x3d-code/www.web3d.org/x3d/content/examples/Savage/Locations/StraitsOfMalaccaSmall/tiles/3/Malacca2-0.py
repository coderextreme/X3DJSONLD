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
    GeoViewpoint(description='GeoViewpoint_3_20',geoSystem=['GDC'],position=(2.116798394735791,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-0.x3d'],child2Url=['../../tiles/4/Malacca4-1.x3d'],child3Url=['../../tiles/4/Malacca5-0.x3d'],child4Url=['../../tiles/4/Malacca5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[248,587,631,745,790,902,1011,660,458,634,647,747,837,942,1247,1572,1112,795,1027,1245,652,364,395,584,578,668,843,1033,866,558,703,942,761,774,853,852,909,1243,1040,954,1289,815,843,580,466,380,531,687,907,939,838,560,1321,1005,869,877,1200,946,928,1200,1076,1050,1322,682,427,465,255,365,559,807,964,1163,823,658,1448,1243,1187,1356,1131,938,963,1157,963,1379,523,515,690,824,416,594,1132,1135,1006,1325,736,987,1519,1513,1417,1252,1073,965,1002,1121,932,1075,315,506,730,712,553,629,860,1040,1002,953,914,1354,1310,1311,1219,1157,1096,951,915,864,816,450,394,265,663,727,773,821,984,1083,1148,1171,1333,1249,1229,1235,1205,1286,1021,929,869,718,613,555,454,584,205,112,708,821,1001,1079,1078,939,1269,1311,1200,1207,1300,1328,950,884,848,710,600,534,772,323,857,866,446,819,1083,1437,1085,998,1186,1404,1162,1193,1089,1038,958,879,803,726,724,654,1259,1064,432,214,839,1091,1215,1210,954,1085,1166,1155,1184,1405,1084,1059,992,935,835,778,891,936,678,709,330,358,1087,1691,1375,1072,1106,1146,1134,1204,1203,1428,1318,1129,1034,929,899,1028,1039,935,1476,975,864,419,1286,1516,1473,1085,1086,1148,1128,1213,1219,1280,1595,1216,1091,956,996,1384,1226,1365,969,942,1144,880,1395,1435,1368,1188,1149,1172,1107,1186,1212,1330,1392,1247,1231,1344,1434,1456,828,670,810,764,932,667,1387,1619,1218,1164,1175,1198,1189,1252,1298,1441,1386,1273,1306,1302,2180,1679,777,790,680,588,595,382,1440,1490,1252,1329,1239,1240,1233,1300,1476,1480,1459,1404,1234,1271,1657,1479,925,573,487,451,231,347,1443,1366,1451,1377,1332,1356,1346,1319,1436,1494,1477,1308,1205,1150,1073,1104,1089,901,715,306,310,182,1521,1383,1400,1402,1436,1418,1390,1394,1456,1406,1370,1291,1164,1070,1010,795,893,987,734,801,197,194,1386,1431,1431,1436,1534,1511,1384,1148,1032,1375,1340,1276,1185,1066,940,837,614,445,618,468,170,120,1385,906,1343,953,1178,925,1015,943,949,989,1023,1350,1171,1088,1017,597,415,354,299,219,192,142,1435,1020,903,906,908,897,917,905,908,928,955,1336,1247,1186,1256,874,469,453,264,436,89,82,1607,904,902,915,895,901,909,908,900,917,942,1340,1450,1373,1381,698,317,371,188,403,265,211,1615,905,900,915,895,909,908,913,900,917,938,1326,1474,1368,1389,745,301,320,188,373,259,204],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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

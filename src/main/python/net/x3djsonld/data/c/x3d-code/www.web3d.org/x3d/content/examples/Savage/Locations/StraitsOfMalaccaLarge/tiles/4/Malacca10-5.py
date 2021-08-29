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
        texture=ImageTexture(url=['../../images/4/Malacca10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.361918642077449,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[19,34,35,21,34,46,204,400,514,326,639,603,784,963,1127,1419,1472,1412,1390,950,1421,1428,8,9,18,68,78,77,230,360,450,864,603,907,875,1066,1296,1408,1498,1441,1429,1358,905,902,22,38,11,42,124,156,292,295,559,498,746,873,1162,1362,1502,1656,1644,1645,1715,1202,904,905,21,43,66,49,90,200,217,434,597,1198,1252,1530,1344,1445,1685,1809,1831,1958,1688,902,970,973,33,25,80,56,56,235,416,454,679,1264,1016,1120,1359,1676,1888,1815,1920,1117,936,1019,1362,1401,36,67,55,142,108,259,606,508,717,924,910,1197,1581,1819,1727,1762,978,907,1210,1503,1555,1534,35,70,68,116,75,313,423,924,611,724,1171,1442,1554,1508,1764,1615,1640,966,1354,1532,1621,1490,22,35,56,74,173,347,329,443,638,867,1249,1464,1309,1581,1783,1453,904,1027,1409,1604,910,907,18,36,34,76,189,479,512,1151,1256,1133,1160,956,1321,1612,1765,905,903,1004,1368,934,917,913,31,104,119,100,496,459,1139,979,883,1041,918,1106,1381,1577,1554,904,901,895,899,912,1334,1335,27,146,108,100,512,803,855,692,835,847,943,1261,1529,1206,904,903,908,905,906,1186,1147,1135,81,118,436,719,436,460,761,638,592,679,978,1306,1567,1194,904,904,895,1324,1279,1146,1048,1021,127,173,113,305,401,699,630,508,492,699,1517,1916,1737,1472,1016,1398,1388,1294,1238,1088,963,951,202,222,87,773,661,1028,371,668,1272,892,1135,1713,1589,1443,1377,1642,1315,1221,1062,999,992,972,304,169,334,564,1076,284,431,888,697,724,938,1371,1407,1291,1264,1318,1235,1104,915,862,928,932,323,509,242,611,540,620,883,591,615,684,901,1030,1163,1203,1237,1258,1327,1039,837,714,508,511,851,118,352,183,280,643,888,817,601,761,845,989,1149,1218,1220,1452,1316,715,618,407,372,354,488,262,609,320,170,1301,943,701,837,848,1011,1433,1251,1334,1280,1689,692,508,457,399,260,321,283,573,488,136,931,1173,1399,531,1304,1588,1630,1396,1415,1486,1530,1012,899,504,368,283,183,199,431,140,118,378,857,917,1306,449,1177,1412,1373,1614,1644,1643,926,568,399,318,276,220,150,132,451,111,200,963,1009,837,360,342,580,628,971,808,732,705,634,449,357,218,209,166,129,114,437,106,214,999,1113,726,374,312,592,620,1021,776,705,650,587,461,351,224,198,158,125,111],
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

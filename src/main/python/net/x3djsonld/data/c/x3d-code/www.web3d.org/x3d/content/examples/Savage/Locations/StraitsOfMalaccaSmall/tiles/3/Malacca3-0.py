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
    GeoViewpoint(description='GeoViewpoint_3_30',geoSystem=['GDC'],position=(2.752923424950107,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-0.x3d'],child2Url=['../../tiles/4/Malacca6-1.x3d'],child3Url=['../../tiles/4/Malacca7-0.x3d'],child4Url=['../../tiles/4/Malacca7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[1615,905,900,915,895,909,908,913,900,917,938,1326,1474,1368,1389,745,301,320,188,373,259,204,1287,902,897,910,916,916,912,1016,925,905,942,1475,1465,1521,1747,1142,403,187,105,273,69,75,905,902,959,1013,934,917,915,1095,914,907,923,1369,1153,1343,1727,1042,251,179,59,129,74,49,907,948,1133,1194,1123,912,912,1040,963,921,1118,1132,996,1247,1285,670,149,80,93,72,29,29,1044,1217,1475,1291,1209,906,918,1067,1009,1481,1286,1056,921,843,425,562,268,151,55,161,46,44,1120,1492,1512,1379,904,928,1129,1092,1568,1675,1360,1127,840,802,423,374,184,129,106,21,35,31,1480,1571,1513,909,1284,1222,1214,1501,1666,1431,1013,868,591,676,333,275,189,134,81,53,31,29,1510,1605,1362,905,1302,1290,1467,2069,1523,1271,1110,778,680,538,212,171,128,106,74,52,55,48,1510,1667,991,909,1063,1403,1564,1441,1124,1031,1224,535,324,238,192,168,84,67,68,67,50,44,1518,1022,924,905,1003,1351,1626,1218,1080,905,619,382,304,218,177,152,103,64,47,46,38,30,1306,914,907,915,1382,1219,1218,1046,815,830,471,366,282,207,139,110,84,79,23,35,28,22,953,908,908,1294,1161,1107,966,806,679,567,455,342,267,203,151,142,120,59,50,28,26,31,906,972,1272,1141,1155,990,881,663,604,503,365,291,199,183,155,126,95,97,84,57,43,35,911,1217,1137,1061,999,877,737,649,486,411,333,244,192,180,140,70,104,93,59,35,39,15,1220,1157,1065,965,849,759,677,520,428,351,303,250,170,176,125,72,95,79,64,61,42,41,1217,1107,1023,881,783,661,566,459,386,310,257,216,202,185,126,101,79,46,61,60,43,35,1149,1035,966,846,732,626,543,432,350,284,226,220,203,125,140,116,93,51,46,30,31,19,1118,1018,923,844,727,615,487,413,328,264,220,182,168,153,101,69,95,54,37,34,23,24,1051,1019,956,880,737,576,464,378,302,256,209,171,155,148,120,93,54,51,40,34,26,25,1011,1002,1007,1058,855,474,452,350,281,239,186,164,115,113,97,96,79,47,34,27,19,18,837,886,952,977,961,456,389,296,253,200,181,145,119,102,111,71,60,47,34,19,18,16,833,886,951,974,988,465,391,297,255,198,180,146,121,101,116,65,61,47,34,17,16,21],
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

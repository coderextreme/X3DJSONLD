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
        texture=ImageTexture(url=['../../images/4/Malacca9-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.3545435942297044,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[28,11,353,12,42,348,189,148,831,266,499,644,290,174,264,335,83,78,94,140,153,163,22,85,37,97,488,664,293,418,308,304,664,412,252,306,231,107,125,99,74,100,86,114,24,16,36,51,69,432,601,556,487,394,597,301,420,111,88,70,85,62,51,52,63,76,21,13,24,38,85,304,730,1051,540,560,502,389,166,157,167,86,65,75,59,59,41,42,14,15,47,79,324,312,647,986,1056,747,430,283,361,309,173,102,108,106,90,69,50,48,7,88,156,161,647,490,496,965,1438,749,588,639,475,241,174,187,137,117,76,58,49,59,16,262,431,663,759,743,644,896,923,927,1274,543,640,805,339,614,303,102,66,80,70,70,4,279,795,1023,835,842,482,1061,921,927,1540,943,1482,845,279,806,253,138,75,77,48,50,166,564,923,852,933,606,520,1037,916,855,1577,1303,919,876,506,483,431,429,238,114,58,53,534,598,754,932,967,470,662,645,775,851,1563,1597,1065,644,1267,701,650,182,115,87,49,40,494,674,921,869,536,721,888,848,849,898,938,1151,995,1062,1105,1020,132,131,193,65,50,60,489,782,994,1065,658,1470,1213,1208,1303,954,943,1128,1130,941,719,548,298,442,202,163,110,136,844,1063,1023,1003,1173,1384,1400,1283,1104,1056,950,1077,508,490,285,907,473,301,132,122,152,144,996,1102,1482,1151,1285,1218,1225,1186,1264,914,872,691,574,419,589,154,138,130,119,63,112,122,1010,1317,975,1388,1311,1209,1209,1091,994,874,799,705,622,988,747,487,165,115,193,113,49,43,1336,1145,1062,1123,1196,1207,1531,1056,1010,937,851,766,683,1073,1195,426,114,108,85,336,30,39,1460,1092,1109,1140,1194,1193,1350,1404,1140,950,988,1580,1228,1108,1132,992,298,94,33,33,34,26,1328,1136,1159,1174,1180,1261,1397,1326,1251,1319,1580,1487,642,670,626,773,420,112,51,56,48,40,1266,1315,1254,1266,1307,1442,1492,1492,1253,1227,1543,1096,859,517,597,244,193,88,71,29,26,15,1415,1392,1455,1356,1414,1450,1429,1336,1231,1117,1018,773,1070,814,744,207,107,62,46,32,17,13,1428,1428,1571,1175,954,964,1090,1368,1242,1100,946,912,581,375,295,338,102,67,42,32,12,12,1428,1424,1571,1160,942,960,1029,1386,1246,1079,944,900,572,370,309,321,100,68,40,29,12,12],
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

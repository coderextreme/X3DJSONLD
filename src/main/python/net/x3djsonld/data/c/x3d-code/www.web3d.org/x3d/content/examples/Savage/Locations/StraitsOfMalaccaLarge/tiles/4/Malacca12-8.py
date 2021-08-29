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
        texture=ImageTexture(url=['../../images/4/Malacca12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[19,21,16,23,26,31,516,77,865,345,1084,1652,1539,876,451,169,226,240,205,139,245,123,18,63,23,81,16,27,727,87,619,681,1057,1349,1190,1028,898,564,206,177,164,131,147,133,27,79,13,65,19,34,54,647,1204,1043,1120,1158,1017,1070,705,307,216,168,153,175,184,187,26,33,44,53,43,49,68,255,539,1181,1525,1623,1152,1037,389,198,236,215,169,227,202,176,82,29,274,41,42,43,218,769,788,885,1821,1454,1299,617,620,418,864,328,178,186,199,215,59,69,76,88,39,55,189,722,602,906,1399,1702,1493,1390,1118,705,1053,259,201,190,368,260,36,84,226,228,54,77,429,918,901,1125,1732,1186,1184,1567,901,577,649,309,223,206,690,625,293,34,252,263,56,67,131,387,982,1321,1278,1070,802,748,339,313,336,432,212,259,532,688,304,74,158,574,165,76,293,658,1465,1464,1614,1011,977,654,404,289,242,363,268,330,314,555,83,52,69,351,450,96,272,1053,915,1229,1689,1173,694,1147,633,415,471,317,314,320,371,243,231,81,187,344,95,92,372,410,1088,895,895,1018,1370,1157,551,356,366,297,269,267,296,381,151,80,82,69,118,91,109,623,724,633,1172,1255,1512,1661,624,286,234,240,199,321,276,164,452,114,51,77,74,75,134,291,377,649,702,1301,1241,1061,593,431,371,361,185,303,167,184,933,83,96,707,157,73,135,164,493,1014,1270,1402,1005,980,440,344,366,306,165,388,661,650,987,136,67,578,814,374,235,310,318,1081,1233,1593,1226,832,718,255,422,390,208,445,898,668,476,424,75,474,1024,714,314,903,839,935,1216,1244,955,860,460,356,244,359,173,326,297,164,574,894,82,122,448,249,156,608,994,1152,1273,990,1526,1343,978,427,337,146,205,255,243,163,648,834,159,80,201,175,302,604,1448,1044,702,792,1646,1151,1535,623,349,246,580,396,238,289,1254,1233,717,221,133,164,146,1011,915,744,351,773,986,1607,1769,708,453,401,369,339,556,648,398,1140,1194,216,152,181,136,556,561,905,304,464,1272,1529,1477,689,771,355,736,1161,1572,1383,922,1387,782,175,169,208,135,193,593,389,332,816,1201,1041,1304,791,1003,645,811,843,1238,1279,920,1383,796,185,160,188,146,199,598,389,318,776,1133,998,1305,869,1070,669,838,820,1319,1335],
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

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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[44,56,70,144,194,321,361,747,469,833,1087,1313,1333,1143,1243,1329,1222,1272,1330,1119,989,987,45,56,66,159,127,319,368,678,616,892,1130,1342,1259,1005,1131,1133,1244,1264,1375,1140,1037,1096,48,58,68,109,159,331,430,713,767,995,1062,1270,1100,939,1101,1173,1252,1420,1344,1294,1098,1203,53,61,67,125,195,241,323,454,823,878,1031,1168,1067,968,1134,1150,1254,1460,1468,1281,1227,1245,53,60,71,89,180,235,508,542,723,827,835,1027,724,921,1053,1155,1347,1304,1447,1228,1283,1300,48,59,125,85,137,199,355,481,434,750,671,889,635,867,829,958,1270,1172,1235,1156,1359,1295,48,123,132,114,99,118,142,203,493,545,577,726,737,681,654,1166,1214,1039,1003,1055,1319,1356,42,111,163,157,197,205,125,236,387,276,429,573,604,467,871,1085,876,1096,822,1048,1103,1200,38,79,141,184,194,222,309,174,147,186,182,278,229,488,622,700,764,901,733,1234,1199,1134,75,96,157,193,202,230,312,551,250,313,254,306,365,251,314,647,676,609,969,1410,1296,1198,64,106,172,199,209,272,244,555,647,439,379,392,590,439,717,527,617,988,1077,1439,1307,1294,43,90,179,289,191,381,306,508,686,748,645,796,767,643,663,906,700,1072,1189,1466,1469,1320,34,113,183,345,320,341,480,611,664,736,732,896,924,818,931,1035,1076,1198,1246,1468,1502,1379,87,138,198,313,409,427,515,560,673,753,737,885,792,796,918,819,1009,1140,1089,1353,1367,1367,34,94,201,400,494,494,404,499,618,656,713,914,872,708,817,683,833,1016,1006,1231,1249,1260,46,106,263,428,500,552,563,579,593,586,682,631,664,472,462,536,828,826,981,1210,1145,1158,43,130,185,352,412,509,586,540,628,696,671,446,461,320,327,388,786,784,1032,1094,1054,1398,46,73,135,160,318,419,393,554,732,451,391,278,252,281,441,606,516,841,1049,996,1193,1248,46,112,215,387,264,216,212,324,495,303,202,225,355,340,727,878,802,1022,1086,1145,1159,1106,48,54,61,85,76,87,235,278,431,190,299,347,455,457,520,797,839,1158,1062,1003,965,1052,50,55,85,69,77,83,101,288,298,169,356,647,726,596,858,879,1308,1087,936,893,823,1006,44,56,73,76,79,91,109,132,279,392,594,464,404,641,922,1279,1236,960,838,798,797,839,44,47,71,80,79,91,110,130,307,404,596,449,398,677,935,1271,1235,948,835,790,801,818],
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

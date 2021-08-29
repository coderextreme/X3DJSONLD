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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small2-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.6730900978689,56.180963250426785,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[987,1124,976,691,318,103,75,252,155,53,144,125,-2,0,2,1,3,4,-1,1,0,3,1096,1149,1086,934,399,273,162,341,176,181,61,205,47,33,-1,-3,0,0,0,1,2,2,1203,1229,1186,802,641,513,155,512,414,345,86,200,237,247,139,0,6,1,2,3,4,4,1245,1418,1158,791,782,959,776,617,613,358,216,92,337,212,28,0,0,4,1,1,0,1,1300,1274,1175,1187,862,974,702,529,624,584,99,117,333,164,15,-7,2,0,4,1,3,2,1295,1344,1136,1308,1125,1063,596,837,592,552,151,186,157,88,87,-6,0,5,6,6,1,2,1356,1307,1112,1267,1155,1130,759,1020,657,276,215,287,62,0,3,4,3,3,4,5,2,1,1200,1238,1171,1231,1156,1254,1143,1114,665,343,153,528,157,5,5,0,0,1,1,2,0,0,1134,1200,1221,1259,1166,1283,1246,1180,775,457,175,567,387,50,1,0,3,2,10,4,5,2,1198,1258,1241,1339,1251,1309,1207,1234,987,755,594,604,597,309,16,0,-7,3,3,3,3,1,1294,1317,1276,1387,1320,1304,1198,1307,1171,920,689,633,610,337,202,41,2,3,4,2,4,0,1320,1298,1355,1384,1429,1288,1284,1268,1317,1100,877,677,562,516,290,54,-1,-10,-2,4,1,4,1379,1332,1365,1430,1376,1537,1485,1279,1138,1196,963,752,608,496,516,213,26,7,19,1,3,3,1367,1219,1360,1490,1523,1578,1449,1143,916,1143,995,891,692,497,580,240,139,28,29,3,-4,6,1260,1337,1296,1338,1514,1477,1374,1101,1028,963,1047,944,762,536,495,480,270,40,6,53,144,-2,1158,1327,1271,1218,1383,1488,1278,1171,1055,766,1042,923,538,532,452,481,315,217,35,43,219,20,1398,1228,1224,1170,1113,1421,1350,961,891,850,916,693,435,672,536,559,529,322,30,3,204,98,1248,1215,1048,1178,1046,1219,1287,1028,710,804,608,597,591,754,583,699,599,416,137,15,120,224,1106,1208,941,904,1044,1015,1205,1153,795,659,506,489,432,592,667,615,575,550,408,48,45,301,1052,1100,797,838,921,907,1189,969,845,606,578,562,543,576,564,671,571,370,284,273,105,262,1006,995,761,759,756,956,1120,1050,868,588,537,488,576,534,543,614,689,521,351,187,205,172,839,858,536,582,942,995,951,1021,876,674,546,624,742,628,611,591,666,664,519,348,181,85,818,846,523,565,939,990,940,1012,868,707,555,627,749,629,631,600,661,652,529,378,195,83],
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

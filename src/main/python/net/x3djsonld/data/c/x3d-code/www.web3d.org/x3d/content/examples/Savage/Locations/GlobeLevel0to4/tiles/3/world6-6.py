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
    GeoViewpoint(description='GeoViewpoint_3_66',geoSystem=['GDC'],position=(56.20833769188965,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-12.x3d'],child2Url=['../../tiles/4/world12-13.x3d'],child3Url=['../../tiles/4/world13-12.x3d'],child4Url=['../../tiles/4/world13-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[802,1348,1238,1351,1482,1142,1287,1409,1108,1005,1295,1054,1200,870,-34,300,465,1696,-2280,-3259,-2852,1133,1106,1280,2131,1350,990,932,831,1664,1573,1658,1296,1648,769,172,28,547,1173,-1146,-3184,-3455,-147,448,813,1502,1252,1017,1209,1442,996,1105,1188,1126,1366,856,405,112,348,1103,681,-392,-1309,1313,1829,1767,886,1266,1437,2186,1488,1106,989,913,1031,1245,742,254,156,254,389,710,254,1211,668,709,976,1393,2221,1905,1288,1219,1153,1023,1071,1372,915,1010,388,141,144,213,311,64,486,1052,1148,2234,1529,1627,1799,1623,1465,1427,983,926,1106,950,995,651,133,192,105,269,410,148,813,2880,1446,1631,2715,3141,1554,1425,1363,1123,1326,921,688,851,811,152,167,187,124,57,335,2697,1447,1205,2207,3025,2616,1634,1046,1912,1256,1043,764,507,763,1111,261,262,439,307,85,58,2084,1597,1152,1900,1940,1367,1323,877,1021,1384,903,875,712,607,724,541,341,302,95,844,88,2320,934,888,2210,2102,1736,1346,1220,1309,1236,1342,935,754,696,955,759,340,125,275,491,1404,1636,995,728,804,1987,1642,1744,1725,1023,751,1139,940,1006,953,962,885,429,232,223,434,877,1627,1709,1197,942,2025,1568,555,853,1235,989,1100,1049,738,644,1015,783,322,283,213,624,1594,632,259,1212,1198,1715,966,540,921,518,508,1112,1121,762,822,376,541,396,286,433,612,1485,439,471,1085,1124,931,572,709,499,800,716,1629,1144,890,972,609,609,806,337,437,522,72,297,538,515,494,359,458,513,566,566,449,1113,1191,1220,1339,672,800,757,1004,1420,1035,1081,219,249,532,293,382,440,350,672,593,1209,1004,1273,1729,1681,631,1009,766,738,1214,538,569,172,184,198,223,315,281,429,508,372,420,615,451,1414,759,834,740,1166,1123,716,730,400,173,82,425,415,216,334,339,497,459,435,379,1138,761,252,524,920,512,402,351,392,448,90,415,608,439,451,297,354,471,366,415,419,329,408,276,415,496,570,495,376,273,382,49,313,355,409,477,329,398,354,380,333,446,330,352,303,305,407,405,276,247,224,260,175,116,525,566,455,409,319,343,324,285,379,287,210,251,346,295,256,326,64,199,172,140,266,418,707,380,322,366,308,321,343,379,269,197,245,321,289,250,278,64,227,148],
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

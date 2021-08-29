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
        texture=ImageTexture(url=['../../images/4/Malacca5-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-2.674956597161275,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,3,3,2,4,4,5,3,27,53,58,145,289,224,383,583,611,907,1063,1846,1729,1618,3,3,4,4,3,3,13,25,18,62,102,131,360,199,409,841,514,872,1647,1264,1522,1480,3,3,4,3,5,5,18,21,48,74,111,138,261,295,693,504,1010,1681,1185,1242,1419,1357,1,5,3,3,1,26,22,26,62,93,182,265,231,260,622,1259,1389,1107,1197,1362,1446,1377,5,3,3,2,8,14,29,57,65,68,162,270,514,613,585,1083,819,1099,1327,1727,2356,2175,3,4,3,30,12,17,36,76,89,188,308,351,431,676,950,646,1044,1390,1645,1278,1714,1774,3,4,11,5,14,13,46,90,135,199,334,457,651,1574,1026,1051,1349,1754,1527,1088,931,944,4,21,11,12,31,29,47,258,224,411,569,654,789,1460,1405,1618,1368,974,989,858,751,726,3,17,32,9,14,29,58,241,356,434,719,865,1624,1211,1468,1371,1123,782,777,720,640,610,8,10,15,31,17,32,119,296,549,529,894,1576,1413,953,1133,992,834,733,634,546,517,454,19,14,29,35,18,33,259,315,746,1181,1429,1523,1160,1070,872,790,950,534,542,412,465,534,26,22,21,16,26,153,182,796,1082,1521,1355,1091,790,824,885,1016,1226,1014,586,626,388,354,9,14,11,11,142,152,665,546,1230,1833,1315,789,789,840,898,1543,1421,981,809,449,619,690,20,10,18,39,356,352,862,1140,1010,1363,831,789,838,1378,1553,1275,1156,1268,1069,1011,698,597,16,41,86,211,591,675,886,1351,1542,1162,800,1225,1243,1592,1471,832,974,461,869,470,532,384,6,20,294,227,673,810,1154,1558,1139,879,1411,1258,1639,1719,1320,1248,1589,695,361,791,262,603,9,83,515,426,789,1517,1240,1169,1107,1301,1960,1373,1388,1662,1646,1803,1184,710,1451,643,551,472,36,259,321,586,683,1213,1381,1167,1411,1392,1649,1290,1106,1007,1696,1111,1139,953,697,491,444,344,114,581,575,544,1089,1685,1448,1609,1464,1390,1792,1542,1296,1279,1159,1167,1230,1154,690,520,519,685,248,397,863,1183,1156,1665,1887,1855,1651,1406,1433,2040,1597,946,1230,1448,600,640,532,586,536,534,199,478,1056,1368,1841,2180,2071,2327,2818,1380,1940,2099,1153,778,488,560,537,411,205,199,178,231,241,422,1033,1337,1792,2221,2109,2330,2847,1373,1985,2100,1173,782,511,527,520,386,176,187,173,270],
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

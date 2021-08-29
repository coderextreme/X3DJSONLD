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
        texture=ImageTexture(url=['../../images/4/Malacca3-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-4.689706692856765,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,1,4,0,0,2,1,4,73,202,237,424,404,461,985,1470,1392,566,429,500,499,585,3,3,-5,0,0,1,2,76,125,143,384,532,596,1150,652,1270,1006,471,525,390,474,336,5,2,2,2,8,4,108,136,57,251,550,626,1124,1500,1171,1115,759,634,509,439,272,274,3,2,2,0,52,43,142,157,196,274,471,791,1205,1071,944,1043,893,542,456,301,210,180,5,1,44,69,63,128,134,241,207,445,406,816,669,760,966,863,776,549,391,317,240,232,23,52,42,66,144,198,372,304,391,511,478,718,872,953,1195,1287,1255,747,538,415,328,329,81,77,56,87,233,334,356,555,488,823,850,1172,1365,1258,1500,1190,1173,695,592,467,365,377,83,152,176,369,272,420,996,1279,1080,992,1569,1682,2308,1831,1758,1156,1325,675,608,460,423,413,51,144,279,233,350,729,1351,2237,2297,1958,2270,2197,1738,1499,1803,1611,1008,891,717,604,345,328,150,109,189,273,879,978,2028,2222,2579,2515,2002,1806,1507,1317,1400,1445,841,872,785,1072,548,609,220,273,243,493,705,1376,1612,1845,1684,1831,1685,1540,1606,1183,1074,1529,887,671,741,1290,922,963,306,615,1042,583,810,1221,1297,1306,1246,1268,1413,1353,1595,1258,929,817,847,458,540,759,528,555,839,1326,910,840,870,1280,1148,1002,857,856,954,1381,1426,1424,891,719,606,486,373,394,399,381,1282,1255,1254,1207,1534,1519,942,722,759,777,650,687,638,724,653,627,614,464,342,200,128,136,974,1647,1617,1482,2205,1940,924,723,641,603,500,462,426,596,1351,816,543,429,175,262,200,234,1365,1381,1159,850,1194,973,774,712,695,698,504,390,362,278,558,1188,609,260,143,186,189,216,858,978,574,601,686,678,932,1332,1016,877,659,414,357,345,516,583,558,338,102,132,130,146,415,365,406,457,600,1131,744,742,827,981,697,382,322,205,112,117,354,136,107,107,130,104,368,276,325,373,604,743,595,462,295,256,191,172,149,123,114,90,214,120,64,113,116,114,477,207,324,604,664,198,145,169,169,130,113,124,117,124,115,66,84,74,48,91,79,82,556,295,509,440,136,116,123,135,132,113,121,165,171,91,92,68,75,58,43,81,71,89,526,304,541,462,135,116,121,137,128,107,120,166,163,90,89,63,82,58,45,79,75,94],
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

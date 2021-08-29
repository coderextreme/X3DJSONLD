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
        texture=ImageTexture(url=['../../images/4/Malacca15-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.297423545807372,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[494,325,349,643,789,1152,1033,1473,1293,1582,1287,790,764,189,48,214,83,132,200,95,153,137,598,717,486,681,902,1163,1559,1222,1113,1020,1005,830,681,129,53,157,74,61,76,248,159,168,582,766,611,677,912,1132,1559,1361,1235,1036,1129,817,466,84,135,85,36,67,155,434,168,118,995,808,1121,908,828,1372,1232,1106,1390,1254,1406,939,375,506,71,69,76,124,130,93,118,108,1259,857,1287,1072,925,1604,946,563,734,760,1356,931,1222,701,121,63,105,177,247,101,98,88,1378,1173,1283,1018,1051,1543,730,500,432,618,1302,1225,1013,620,42,68,125,242,258,62,96,93,1141,1267,1535,1108,1615,1226,1113,799,224,363,1200,1034,952,312,111,80,48,71,143,52,51,180,1182,1356,1620,1327,1310,1334,914,585,240,515,961,892,711,139,85,59,56,308,51,52,171,181,1170,1404,1619,1205,1023,1028,774,458,180,462,487,715,239,90,213,54,94,52,49,45,237,284,1226,1356,1634,1082,895,1128,760,369,198,93,176,579,77,53,47,46,182,83,54,29,229,230,1144,1398,1377,1139,847,1086,840,774,388,288,62,100,102,54,78,76,136,68,76,158,59,110,1136,1146,1166,813,771,805,967,591,438,289,75,42,58,110,80,108,141,68,133,108,113,135,1012,1128,1177,1019,850,733,663,547,567,194,72,58,65,99,119,112,121,50,114,154,339,231,969,1223,1396,1258,1115,1019,783,583,175,176,56,205,161,67,137,209,122,100,161,388,339,215,975,1098,1316,1144,1019,723,661,396,81,83,70,61,165,197,174,173,89,94,201,297,204,134,1040,1378,1362,1106,893,923,640,431,243,78,102,65,75,107,199,124,150,138,194,474,272,165,1139,1542,1718,1242,1073,990,694,571,456,63,106,72,77,74,186,159,153,188,265,337,349,202,1221,1653,1431,898,649,922,762,730,767,120,104,57,134,165,172,218,247,221,188,279,178,88,1136,1369,1343,982,639,625,679,555,596,192,82,72,130,235,246,151,203,235,160,257,129,87,997,1124,1229,848,717,560,458,414,245,84,68,96,96,211,142,151,176,228,160,301,95,79,822,1150,985,1253,972,728,743,285,186,64,114,64,102,182,166,113,161,208,164,160,229,56,827,905,817,899,1025,800,764,473,205,62,202,71,218,251,101,147,119,53,168,168,240,57,819,897,823,892,1006,832,784,516,232,62,210,77,212,255,101,139,115,46,159,152,264,69],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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

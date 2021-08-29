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
        texture=ImageTexture(url=['../../images/4/Malacca0-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-7.7118318364,106.96200067211268,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,1,1,1,0,0,1,0,0,0,0,0,1,2,1,2,2,8,155,53,145,0,0,0,0,0,0,1,0,1,0,0,0,0,1,2,4,11,74,34,268,175,232,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,89,79,183,173,404,534,552,0,2,1,0,0,0,0,1,1,0,0,0,0,33,228,271,445,245,337,676,793,741,1,0,0,0,1,0,2,0,0,1,1,80,353,201,290,510,518,927,509,979,650,818,0,1,0,0,14,22,32,108,132,187,276,419,381,556,605,344,608,1154,1036,725,725,828,26,73,85,86,165,182,84,317,227,426,235,772,635,1131,792,586,1050,1568,1268,873,1073,1192,158,84,152,126,239,395,448,465,568,555,709,401,1333,1264,1309,1218,1519,1258,1367,1447,1041,890,144,209,362,488,493,359,651,903,525,1085,1039,873,995,1533,1751,1700,2057,1260,1585,1452,913,925,295,143,145,178,360,816,755,1077,1287,1210,1532,1259,1341,1474,1596,1875,2172,1143,932,840,938,1022,353,255,414,463,358,912,949,1177,1460,1751,1720,1559,1445,1545,2049,1590,1736,1127,945,754,732,759,580,622,699,809,608,732,1102,1429,1441,1926,1766,1731,1594,1479,2196,1294,1507,1557,1635,795,698,688,688,773,1006,1005,952,1239,1358,1468,1624,1825,1318,1120,1033,1086,1543,984,910,1226,1227,797,669,658,985,1019,1158,1124,1078,816,1158,1437,1196,1381,1236,1090,745,699,910,800,717,736,1131,946,700,694,584,1018,1037,960,1194,706,931,1037,1022,881,852,1065,683,664,662,663,665,666,749,848,876,850,486,675,591,616,556,770,942,936,937,673,643,829,664,674,670,665,664,676,732,1117,1304,1416,663,703,973,642,442,361,544,681,726,668,644,660,708,728,694,685,870,819,879,1206,714,592,941,1098,880,591,469,354,319,330,291,610,750,655,761,901,964,1124,1425,1090,889,692,459,567,1437,2284,1211,697,478,335,268,267,300,403,499,715,1073,1259,1189,1198,1794,1428,978,774,563,548,2083,1897,1248,1058,633,310,267,217,229,386,644,944,1668,1630,1399,1013,706,667,526,372,922,1070,1076,1356,1023,794,722,355,242,217,218,390,621,726,746,1243,839,662,457,366,383,390,381,383,1047,1317,1016,790,700,351,243,217,221,385,614,720,732,1164,824,660,453,362,375,406,368,354],
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

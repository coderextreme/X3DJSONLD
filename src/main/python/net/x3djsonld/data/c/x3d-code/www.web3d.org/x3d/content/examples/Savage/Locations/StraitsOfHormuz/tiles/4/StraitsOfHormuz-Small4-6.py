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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small4-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[8,-2,-3,-3,6,30,161,314,671,638,415,324,341,303,540,479,801,639,872,849,906,1251,0,3,0,0,1,30,97,196,461,799,718,544,469,573,630,573,478,486,645,631,838,1282,3,1,0,1,-1,70,122,297,550,770,898,749,720,770,649,514,469,748,935,756,852,1321,2,3,-1,1,0,13,108,253,474,674,1143,1024,912,1015,890,594,666,680,1057,954,896,1457,4,0,3,1,2,12,90,285,465,689,960,1271,1378,1104,863,559,800,915,1062,1047,1229,1504,1,2,5,-4,6,19,77,269,511,426,397,1337,1496,1194,959,709,572,669,903,1006,1536,1465,1,3,6,4,7,24,44,199,219,201,383,654,1481,1316,1001,777,859,748,838,927,1523,1469,0,1,3,1,3,14,113,116,350,365,649,1070,1462,1388,1050,908,947,933,896,1151,1513,1438,2,0,4,1,0,4,41,254,354,476,957,691,1387,1237,1199,1079,1120,1235,1126,1402,1445,1316,2,5,0,0,2,3,14,249,425,741,496,279,229,1120,1279,1336,1265,1569,1475,1688,1511,1344,3,0,1,5,1,4,14,205,362,658,310,181,188,217,1294,1474,1397,1623,1638,1769,1732,1434,3,0,2,3,-10,1,19,127,294,494,199,117,239,321,1464,1504,1472,1241,1692,1796,1815,1826,1,6,1,5,-4,4,23,116,249,436,163,95,232,443,1078,1049,1046,1157,1282,1626,1719,1785,3,0,3,6,3,8,18,103,239,325,98,104,308,297,286,883,853,630,1183,1331,1595,1670,0,0,2,3,8,13,22,43,42,47,60,105,401,286,513,801,758,392,1183,1447,1490,1548,0,4,0,3,6,13,24,41,64,112,59,70,96,118,240,655,373,219,355,1241,1053,1163,4,3,2,2,1,14,24,21,37,215,77,74,80,88,101,509,317,158,183,1017,965,856,0,0,3,6,4,5,12,14,56,232,244,100,154,99,104,130,134,199,211,246,432,440,2,0,1,-2,0,1,10,11,42,334,368,146,166,133,116,148,130,502,462,417,527,544,0,1,1,4,0,2,1,6,129,327,491,404,201,267,179,353,141,587,705,683,765,1442,5,2,2,0,4,1,4,5,50,225,431,743,333,396,368,538,261,181,811,1002,1288,1461,5,1,5,0,6,0,3,8,41,140,411,667,927,922,784,677,334,384,346,1053,1405,1594,5,1,5,0,5,0,3,7,40,147,417,670,917,919,810,699,359,407,346,1026,1406,1594],
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

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
    GeoViewpoint(description='GeoViewpoint_3_23',geoSystem=['GDC'],position=(26.00937491632225,56.180963250426785,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.00937491632225,56.180963250426785,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small4-6.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small4-7.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small5-6.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[2,0,10,332,868,260,696,413,730,920,886,920,575,631,425,889,656,636,526,814,888,889,0,2,0,170,535,638,489,616,436,630,1282,1106,809,687,529,756,1023,1133,1097,802,428,375,3,0,3,129,583,1129,923,741,650,1008,1492,1323,603,798,422,882,1172,786,760,853,370,361,1,1,11,115,462,343,1372,826,646,990,1452,1051,952,1105,676,501,504,487,512,821,1110,1094,1,7,4,173,458,936,1436,1008,1038,1079,1403,1184,1187,1040,899,780,488,837,623,1094,1107,1097,4,2,-6,101,516,265,189,1385,1514,1745,1338,1213,1333,895,1086,1132,552,570,1119,1186,1131,1132,3,0,1,73,353,106,408,1216,1285,1793,1863,1618,1473,1227,1339,1397,685,1247,1079,1135,1172,1141,4,3,7,21,166,68,376,628,599,1219,1611,1555,1437,1565,1746,1244,794,1500,1438,1174,1213,1176,1,2,10,30,53,65,89,454,182,1032,873,1662,1209,1635,1877,1317,833,1522,1470,1145,1247,1311,1,1,-1,12,167,175,128,111,177,336,614,1356,1144,1421,1397,1588,1104,1320,1374,1292,943,949,0,2,10,3,164,666,416,585,162,986,1499,1293,1318,1242,1205,1326,1626,1554,1395,1243,887,885,3,2,0,5,58,420,632,855,563,917,1584,1436,1307,1260,1294,1576,1595,1541,1434,1283,995,885,0,0,4,7,23,316,132,145,918,1074,1567,1449,1231,957,1043,1639,1297,1134,1198,366,468,468,0,3,1,1,10,53,64,89,191,991,1080,1422,873,577,705,808,1065,642,654,257,193,195,4,2,3,2,6,74,92,99,141,1217,764,1129,857,497,496,530,875,489,334,676,176,175,0,4,4,0,6,591,663,327,204,1227,767,929,528,495,358,544,805,335,199,639,196,160,1,1,0,2,5,430,53,322,533,984,531,569,247,784,180,452,672,198,318,226,142,144,2,1,0,2,4,5,38,336,673,1010,899,548,416,515,470,125,602,338,132,129,137,142,0,0,1,2,3,153,522,521,115,1006,992,408,586,136,131,232,106,119,344,393,296,255,2,4,1,2,4,0,431,219,60,581,1103,1069,606,159,183,93,527,607,595,272,129,86,1,2,2,2,0,5,4,17,76,391,1097,900,423,529,390,84,638,363,959,691,134,88,1,2,1,2,0,4,3,17,91,384,1081,866,448,557,447,83,645,323,946,720,133,93],
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

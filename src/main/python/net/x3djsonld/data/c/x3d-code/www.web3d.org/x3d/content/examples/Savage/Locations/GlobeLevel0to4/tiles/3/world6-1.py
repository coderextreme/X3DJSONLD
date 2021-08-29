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
    GeoViewpoint(description='GeoViewpoint_3_61',geoSystem=['GDC'],position=(56.20833769188965,-112.54166465504323,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,-112.54166465504323,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-2.x3d'],child2Url=['../../tiles/4/world12-3.x3d'],child3Url=['../../tiles/4/world13-2.x3d'],child4Url=['../../tiles/4/world13-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-135.0416653255955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-4326,-4072,-3573,-3267,-3124,808,2085,1416,1408,2238,2073,2406,1862,3328,1383,907,676,442,343,227,196,-3956,-3792,-3063,-3230,-2878,1099,2091,1854,1665,1772,1484,1962,2080,2160,1341,1071,679,411,388,270,178,-3907,-3735,-3468,-3223,-2459,1155,1603,1497,1496,961,1558,2288,2136,1978,1395,973,643,430,365,295,299,-3968,-3604,-3434,-2625,-3049,393,1302,1491,687,2685,1475,2535,1354,1606,1645,701,505,488,356,376,319,-3992,-3726,-2903,-2682,-2824,466,1101,968,894,1888,2077,2286,1342,1188,898,621,472,596,324,360,403,-3381,-3757,-2528,-2844,-2595,162,1077,99,1151,991,1803,2018,1024,918,942,685,599,333,374,288,469,-3941,-3490,-2880,-2697,-2545,81,1593,314,818,1500,1647,1784,863,938,800,675,544,268,428,413,179,-3966,-1351,-2896,-2604,-1584,698,525,292,731,1090,1423,864,796,627,561,589,435,255,365,426,512,-3870,-3347,-2808,-2476,-19,109,1871,1539,1626,1824,1188,924,875,861,591,475,454,282,337,400,488,-3647,-2994,-2451,-909,1200,1480,257,346,2398,1925,835,782,764,772,659,472,288,220,323,378,424,-3465,-2935,-1932,-89,1786,2037,1110,599,1203,1345,852,756,607,604,666,573,245,215,365,405,389,-3264,-2870,-166,57,1701,1097,796,1862,1813,992,779,703,705,528,605,645,272,235,362,366,341,-2941,477,-2,306,1238,1226,1004,2456,1065,827,664,603,723,493,313,318,217,249,272,274,257,-2669,-357,-58,332,1277,880,1825,1189,757,784,677,586,471,611,322,294,246,223,203,200,147,-412,368,742,474,812,738,918,849,593,701,617,595,441,375,449,308,246,213,167,115,141,245,366,590,1811,1107,1352,837,1018,516,753,475,495,451,535,358,375,279,260,147,42,55,96,1387,1478,1462,1076,1422,573,832,304,368,661,366,553,508,399,371,326,268,107,-32,-54,1325,1298,1180,1226,1353,622,576,369,421,764,245,207,355,281,418,377,255,204,-5,-80,-142,1496,818,1862,785,1058,232,517,588,327,305,230,329,438,485,447,388,320,204,-38,-110,-149,628,1251,1389,927,942,599,449,197,156,156,204,363,457,412,353,311,259,156,24,-111,-133,604,902,1117,1986,1917,915,199,657,213,156,229,304,453,426,309,305,242,152,53,-13,-151,933,1185,1225,1385,1587,818,208,656,232,156,226,304,370,340,305,280,195,152,42,-11,-149],
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

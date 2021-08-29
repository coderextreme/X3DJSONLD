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
    GeoViewpoint(description='GeoViewpoint_3_56',geoSystem=['GDC'],position=(33.7083370213374,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(33.7083370213374,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world10-12.x3d'],child2Url=['../../tiles/4/world10-13.x3d'],child3Url=['../../tiles/4/world11-12.x3d'],child4Url=['../../tiles/4/world11-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world5-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(22.458336686061273,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1950,-2008,-5,169,1276,201,1205,41,-193,452,-441,-2042,-3309,-3877,-1164,-4715,-5188,-5073,-5658,-5891,-5970,-1349,-1092,309,98,897,540,613,139,-210,77,-99,-685,-1299,-3204,-1458,-5199,-5285,-5422,-5946,-6001,-5795,-217,-172,639,652,465,1032,991,295,5,28,-47,-80,-263,-2637,-1525,-5608,-5854,-4895,-5641,-5973,-5881,-1,-59,372,614,909,544,1210,145,504,160,294,-12,-89,-1153,-1285,-5327,-5726,-5226,-5752,-5623,-5173,4,48,123,309,1031,1100,1044,431,350,40,44,15,21,-2,2203,-6316,-5967,-5642,-4564,-5698,-2650,10,115,1179,270,1613,1587,2004,1151,426,85,587,510,615,-69,1774,-530,-1879,-6204,-3968,-2408,-5050,23,1092,1168,414,1844,1596,1958,1503,967,807,1779,533,624,141,-109,-1602,-1235,-3365,-4795,-4911,-5340,43,51,107,212,2608,3006,2268,1746,858,424,111,360,705,80,-56,-110,-1929,19,-5509,-4630,-5211,3443,2308,1098,496,2933,2871,2600,1902,802,268,131,222,323,440,0,-102,-119,-592,-2978,-5142,-4692,5271,4643,3163,3310,3176,4247,2674,438,1188,651,191,602,23,740,309,-86,-107,-926,-666,-2404,-3760,4978,4992,4446,4091,4266,4605,1828,341,370,845,33,145,98,403,90,-64,-90,-783,-667,-5292,-4761,5055,5364,4541,5129,4234,4298,2535,372,664,585,54,21,39,235,5,-31,-70,-143,-283,-2789,-4477,4527,4849,4989,4272,3149,4268,3597,557,925,1332,113,234,62,26,4,-38,-54,-146,-62,-1966,-4595,5140,5143,4719,4466,3967,3975,3661,1468,606,925,140,62,25,42,-22,-38,-89,-164,26,-108,-1778,5540,5118,4719,4820,4485,4113,3700,1856,2303,982,1083,53,33,12,-29,-67,-88,-74,-30,442,297,5118,4779,4863,4524,4334,3814,3146,1578,1291,532,604,73,35,147,-37,-73,-43,124,-132,177,244,4950,4740,5065,4355,3920,2569,2205,1972,1415,1269,1071,97,62,216,-16,-87,-59,518,-1390,-1138,-918,4162,3862,2691,3361,4265,3713,2998,2087,1522,1111,736,320,23,1,200,-59,-4,93,-1659,-977,-2519,5030,2744,2746,4694,4473,2924,1468,1398,1320,1072,1480,116,11,-11,-3,-79,211,625,-1204,-2724,-1439,986,2100,3664,3976,3931,1664,1313,1165,1327,1464,1642,1559,14,5,-83,-21,9,-50,-1642,-2984,-1341,803,965,1031,1332,1387,1171,1277,1459,1109,1007,1931,1174,157,280,-69,207,646,1498,-2351,-3269,-2378,802,1348,1238,1351,1482,1142,1287,1409,1108,1005,1295,1054,1200,870,-34,300,465,1696,-2280,-3259,-2852],
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

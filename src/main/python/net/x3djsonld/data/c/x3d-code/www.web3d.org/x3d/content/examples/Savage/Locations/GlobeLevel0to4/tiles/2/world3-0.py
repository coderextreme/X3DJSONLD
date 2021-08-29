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
    GeoViewpoint(description='GeoViewpoint_2_30',geoSystem=['GDC'],position=(67.45833802716578,-135.0416653255955,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(67.45833802716578,-135.0416653255955,0.0),range=8991000.0,child1Url=['../../tiles/3/world6-0.x3d'],child2Url=['../../tiles/3/world6-1.x3d'],child3Url=['../../tiles/3/world7-0.x3d'],child4Url=['../../tiles/3/world7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-180.0416666667,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-5512,-5401,-5299,-5620,-5205,-5146,-5517,-5176,-5413,-4938,-4762,-4851,-4226,5,2080,2723,1822,1385,597,297,170,-5600,-5991,-5745,-5250,-5543,-5219,-5165,-5082,-4688,-4559,-4180,-3632,-3134,1298,1365,1283,2045,1363,647,382,207,-5544,-5941,-5197,-5647,-5525,-5126,-5111,-4989,-3806,-4223,-3994,-3475,-3056,1401,1598,1351,1616,1149,577,353,335,-5655,-5824,-5829,-5064,-5156,-5184,-5319,-5133,-4656,-4334,-3972,-2758,-2660,1265,1692,1602,1494,903,442,350,451,-4890,-5547,-5512,-5318,-4996,-5061,-5168,-4901,-4634,-4235,-3937,-2850,-1764,1208,787,1373,815,683,462,394,179,-5100,-5228,-5027,-5164,-4845,-4751,-4960,-4676,-4412,-3956,-3670,-2307,295,1142,1930,852,817,609,368,321,463,-613,-149,-3581,-6214,-4532,-4650,-4659,-3509,-3909,-3684,-3344,-394,2434,1108,2819,824,624,563,267,361,354,-1440,-3700,-2335,-1141,-73,-4543,-4323,-2195,-3902,-3374,-2813,-109,1176,832,925,651,467,375,228,211,181,-3805,-3616,-121,-96,-71,-94,-69,-4122,-3884,-3321,214,268,1771,729,527,504,455,413,311,141,84,-3586,-131,-84,-39,-42,-19,-127,-272,-3623,-207,-231,1504,1635,507,387,220,382,436,286,4,-144,-186,-110,-56,-21,7,329,2021,1225,426,2202,756,1822,854,472,191,204,460,364,305,11,-142,-61,-86,-48,-22,153,120,274,1405,1705,423,870,1589,1276,319,231,406,364,304,311,109,-62,41,382,1,124,224,39,370,286,365,1209,413,622,508,156,304,428,351,211,154,232,369,697,-13,-44,-56,248,425,757,1521,793,297,1,243,309,401,182,-78,122,49,-5,142,154,-91,-88,-44,-45,34,61,60,65,22,-60,-28,1,-29,-156,182,213,129,39,-29,213,-19,-45,-72,-59,-48,-37,-104,-2587,-3577,-3248,-2790,-2236,-873,-15,152,183,129,-155,-262,80,369,-57,-126,-211,-209,-368,-1600,-2849,-3751,-3704,-3631,-3528,-3254,-2492,-397,80,-432,183,-318,-195,-190,-155,-245,-1141,-1876,-2212,-580,-1033,-719,-3733,-3743,-3680,-3670,-3451,-2848,-627,-30,65,-376,-440,-271,-319,262,286,-1248,-1157,-2763,-2221,-1330,-3401,-3729,-3722,-3691,-3606,-3545,-3415,-3115,-2342,-488,-261,-419,152,-374,-382,309,-2188,-3160,-3228,-3234,-3401,-3698,-3620,-3422,-3675,-3655,-3674,-3518,-3422,-3106,-2665,-2396,-1223,-590,-380,-55,-81,-2229,-2677,-3215,-3199,-3600,-3600,-3548,-3599,-3659,-3650,-3667,-3532,-3427,-3109,-2684,-2434,-1512,-760,-369,-123,-238],
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

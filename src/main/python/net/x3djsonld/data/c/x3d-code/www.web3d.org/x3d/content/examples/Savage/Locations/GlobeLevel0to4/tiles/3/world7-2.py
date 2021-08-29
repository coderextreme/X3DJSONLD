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
    GeoViewpoint(description='GeoViewpoint_3_72',geoSystem=['GDC'],position=(78.7083383624419,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-4.x3d'],child2Url=['../../tiles/4/world14-5.x3d'],child3Url=['../../tiles/4/world15-4.x3d'],child4Url=['../../tiles/4/world15-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-149,-135,-143,-1,-195,-181,308,0,-308,-169,141,-275,-297,-666,-2105,-2533,-2670,-2415,8,1623,2387,-52,-114,-6,-118,-110,-186,-33,-326,-87,370,-3,598,-189,-385,-993,-1659,-1096,-79,811,2200,2677,137,19,62,188,-116,-221,285,-1,304,138,661,245,-267,-329,-714,-672,-159,1,226,2059,2589,316,142,51,-28,-138,-42,-12,-4,141,308,213,-44,-173,-291,-485,-689,-68,483,1049,1875,2591,454,285,3,175,-56,-49,-223,-43,50,30,77,1581,653,-369,-692,-337,-302,308,609,1714,2252,151,-88,340,334,-35,-33,39,-21,81,314,605,44,-91,-1527,-462,-143,-66,1,826,1394,2283,-92,-29,-6,276,-6,-2,-1,1,279,497,-15,-322,-1736,-1722,-325,-266,-275,-6,608,1588,2333,-22,-24,-3,-88,6,-19,156,340,536,958,96,-424,-2015,-1462,-316,-148,462,-109,860,1841,2382,-64,89,113,182,122,155,615,613,45,-273,-370,-2046,-2134,-1159,-387,-504,-669,568,1332,2139,2504,-38,205,69,450,45,-102,1096,149,-765,-1765,-2308,-2314,-2228,-1414,-305,-190,1839,1487,1996,2346,2596,-471,329,-397,322,556,1147,242,-888,-1101,-1747,-2278,-2313,-1767,-429,-763,-80,1027,1618,2047,2446,2781,-228,-420,-527,-690,-773,-819,-755,-734,-991,-1654,-2102,-1990,-737,-618,-355,-9,1288,1964,2227,2513,2826,305,331,539,1499,1451,-588,-376,-596,-695,-661,-375,-261,-159,-825,-173,775,1414,1825,1976,2310,2600,208,-89,145,-366,-322,-102,-171,-456,-569,-186,636,295,-1,377,738,992,1474,1743,1993,2337,2479,76,-74,31,151,113,440,-252,-703,369,-170,-384,720,1129,1231,1653,2116,2220,2288,2329,2436,2459,305,-51,579,626,861,1263,154,-329,14,287,734,931,1047,1170,1689,2115,2134,2289,2257,2294,2384,1247,566,282,482,355,982,883,707,-210,-164,-158,-314,265,826,1067,1387,1632,1758,1859,1912,2024,-719,-72,412,-108,496,565,997,1692,1211,1034,-316,11,311,324,895,1202,1196,1245,1232,1208,1284,321,243,335,1256,1224,520,914,1506,194,35,619,282,-635,54,280,538,388,139,89,609,48,-513,-333,-276,-161,1,225,1,306,298,931,224,39,-86,-101,-107,-176,-493,-572,-102,77,319,-1636,-1771,-1652,-1644,-1475,-1352,-952,-537,-218,-246,-279,-333,-536,-583,-470,-399,-318,-292,-300,-305,-319,-1590,-1642,-1632,-1672,-1552,-1416,-1206,-770,-338,-362,-369,-498,-743,-737,-604,-460,-352,-305,-301,-316,-352],
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

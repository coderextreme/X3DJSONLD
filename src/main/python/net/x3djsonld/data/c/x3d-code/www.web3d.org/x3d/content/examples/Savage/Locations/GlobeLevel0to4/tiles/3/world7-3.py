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
    GeoViewpoint(description='GeoViewpoint_3_73',geoSystem=['GDC'],position=(78.7083383624419,-22.54166197283422,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,-22.54166197283422,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-6.x3d'],child2Url=['../../tiles/4/world14-7.x3d'],child3Url=['../../tiles/4/world15-6.x3d'],child4Url=['../../tiles/4/world15-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-45.04166264338647,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[2387,1102,-567,-2237,-2674,-2920,-2519,-2029,-1359,-1329,-1473,-1616,-1554,-2203,-1429,-984,-537,384,-274,-1701,-847,2677,1948,-124,-1369,-2203,-2733,-2830,-1853,-1284,-307,-247,-4,-117,-874,-1268,-375,-455,-1288,-2369,-2544,-1893,2589,2333,510,-532,-141,-1784,-2557,-1714,-704,-236,-84,535,796,1449,-118,-400,-697,-2040,-2819,-2952,-2634,2591,2269,1337,-150,-268,-264,-649,-935,-478,-76,-1,-16,252,469,269,-459,-815,-1974,-3854,-3237,-3030,2252,2289,1874,1182,1177,-237,-467,-395,-426,-285,-56,-291,-109,-12,-130,-1400,-1516,-2233,-3631,-3373,-3202,2283,2578,2711,2802,2741,1216,-128,-108,-383,-1365,-651,-551,-815,-887,-1566,-1791,-1381,-2351,-3619,-3461,-3435,2333,2633,2893,3043,3222,1919,1879,2970,823,-445,-1485,-1257,-1301,-1519,-1691,-1847,-1926,-2316,-3490,-3687,-2186,2382,2600,2837,3050,3065,2916,2584,2063,1477,1255,-3,-312,-1564,-1013,-1611,-1866,-2014,-2435,-3213,-3046,-3309,2504,2744,2934,3056,3091,2992,2670,1432,-967,-348,305,-344,-1667,-1609,-606,-1380,-329,-432,-1556,-2845,-3326,2596,2780,2948,3069,3076,2869,2409,1527,1228,1795,-86,-342,-512,-1378,-1646,-2237,-2307,-2705,-1980,-2049,-2317,2781,2914,3060,3163,3050,2864,2732,2125,519,-207,-56,-176,-347,-1705,-2540,-2694,-2814,-2661,-2808,-2975,-2894,2826,2902,2934,2920,2819,2574,2349,2202,1502,791,563,371,-199,-217,-2099,-2946,-3116,-3309,-3415,-3343,-3243,2600,2770,2746,2671,2569,2510,2443,2244,1920,1909,1171,-297,1,-207,-206,-1517,-3026,-3376,-3552,-3654,-3714,2479,2595,2561,2487,2471,2353,2349,2200,2201,1730,108,284,-100,-295,-217,-261,-268,-1372,-2519,-3761,-3153,2459,2449,2437,2342,2241,2134,2011,1897,1738,1229,182,1,-121,-272,-266,-241,-138,-237,-1334,-3042,-3180,2384,2445,2400,2308,2208,2050,1877,1681,1511,1325,967,-25,-45,-155,-95,-185,-251,-227,-383,-2586,-2785,2024,2116,2126,2114,2063,1940,1501,995,841,861,682,360,-134,-200,-73,-237,-199,-300,-886,-2427,-2764,1284,1428,1773,1693,1409,1096,906,913,642,922,586,634,949,1,-46,-141,-126,-202,-2416,-3852,-2676,48,520,1202,1325,782,788,8,742,609,498,54,-102,-21,1,1,-170,-1583,-2961,-3918,-3352,-1696,319,327,3,1,287,1,101,649,447,137,141,-106,-114,-127,-2857,-3021,-3142,-3837,-2540,-3945,-3667,-319,-320,-296,-229,-165,-140,-164,-204,-278,-1050,-2918,-2052,-3409,-3587,-3741,-3934,-3690,-3060,-2889,-1867,-2751,-352,-371,-370,-273,-202,-166,-193,-265,-321,-627,-3106,-1808,-3567,-3605,-3770,-3916,-3611,-3209,-2846,-919,-3393],
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

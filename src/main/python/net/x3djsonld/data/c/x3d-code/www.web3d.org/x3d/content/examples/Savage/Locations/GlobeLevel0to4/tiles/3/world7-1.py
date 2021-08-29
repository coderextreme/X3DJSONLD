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
    GeoViewpoint(description='GeoViewpoint_3_71',geoSystem=['GDC'],position=(78.7083383624419,-112.54166465504323,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,-112.54166465504323,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-2.x3d'],child2Url=['../../tiles/4/world14-3.x3d'],child3Url=['../../tiles/4/world15-2.x3d'],child4Url=['../../tiles/4/world15-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-135.0416653255955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[933,1185,1225,1385,1587,818,208,656,232,156,226,304,370,340,305,280,195,152,42,-11,-149,914,668,1232,1761,1326,261,298,280,293,265,429,506,373,363,328,235,226,152,129,12,-52,1134,919,1574,2163,566,462,181,354,227,307,473,440,392,310,161,140,88,98,73,95,137,443,961,578,108,254,162,156,319,312,513,422,447,374,305,216,212,156,141,304,308,316,332,64,78,153,308,305,156,307,305,308,516,451,282,280,182,154,153,96,305,282,454,1,238,201,134,305,306,445,395,415,182,74,184,130,122,55,12,10,16,110,264,151,1,25,131,222,235,353,742,637,109,29,148,121,-54,127,-45,-24,-24,60,-3,208,-92,-23,-24,1,21,-50,-73,-27,-399,66,271,212,122,61,152,30,32,-34,-43,173,-54,-22,-355,-65,-42,-50,-349,-360,-265,-124,290,377,275,213,121,121,-31,-31,-23,-69,369,-122,-64,-1945,-1525,-432,-421,-26,274,165,-101,160,305,204,368,-3,134,-172,-90,72,69,33,-162,-38,-2762,-2471,-2038,-359,-83,161,107,201,-16,170,-202,-133,150,0,-334,-44,148,141,429,172,-471,-3120,-2957,-2163,-357,-158,61,308,9,-31,-479,-484,-514,-515,-498,-407,-241,-77,-203,-167,-169,-228,-3382,-3192,-1774,-375,-383,-465,-449,-401,308,412,30,147,79,-3,-50,-139,153,-173,151,155,305,-3462,-3030,-2485,-1558,-441,-140,25,157,23,42,-198,0,-5,-223,3,206,176,-295,52,152,208,-3478,-3403,-3208,-2742,-1440,-383,-249,-82,2,-141,-3,-254,-461,-48,-313,-251,-208,-203,-65,-435,76,-3548,-3469,-3334,-3009,-2605,-1986,-831,-414,-360,-286,1,129,-381,-496,1,152,-380,146,-246,75,305,-3570,-3526,-3470,-3412,-3012,-2719,-3080,-2184,-1429,-650,-529,-545,-486,-170,-432,-404,-563,-127,297,299,1247,-3680,-3629,-3543,-3145,-3131,-3229,-2870,-3017,-2268,-1855,-1276,-735,-613,-553,-486,-279,-294,-284,214,528,-719,-3649,-3579,-3598,-3565,-3401,-3310,-3128,-2501,-2793,-2815,-2760,-2509,-2156,-1930,-1144,-601,-654,-409,-328,-187,321,-3405,-3417,-3474,-3499,-2694,-3357,-3282,-3235,-3215,-3199,-3114,-2999,-2987,-2720,-2579,-2170,-1956,-1386,-876,-865,-513,-2816,-3191,-3250,-3219,-3240,-2813,-2823,-2788,-2317,-2314,-2417,-2257,-2111,-1695,-1707,-1728,-1724,-1994,-1997,-2077,-1636,-2837,-3019,-3226,-3086,-3230,-2812,-2843,-2811,-2174,-2162,-2345,-2158,-1961,-1594,-1671,-1792,-1418,-1997,-1627,-1866,-1590],
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

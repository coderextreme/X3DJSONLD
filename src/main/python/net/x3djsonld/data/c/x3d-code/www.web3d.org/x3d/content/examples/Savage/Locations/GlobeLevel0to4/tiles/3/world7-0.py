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
    GeoViewpoint(description='GeoViewpoint_3_70',geoSystem=['GDC'],position=(78.7083383624419,-157.54166599614774,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,-157.54166599614774,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-0.x3d'],child2Url=['../../tiles/4/world14-1.x3d'],child3Url=['../../tiles/4/world15-0.x3d'],child4Url=['../../tiles/4/world15-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-180.0416666667,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-11,-110,-83,-46,-46,-36,-21,16,45,17,243,243,1580,343,1706,669,1767,1082,868,1294,933,-63,-96,-84,-70,-46,-28,-15,-19,114,365,124,151,233,924,1333,1655,777,810,444,1252,914,-57,-72,-75,-6,-40,-39,-32,-51,-42,417,120,233,318,252,173,469,1157,855,666,1578,1134,41,31,382,265,1,-56,124,55,224,265,39,222,370,372,286,846,365,490,1209,1226,443,331,276,566,137,-82,-38,-34,3,1,1,112,236,198,497,283,120,162,323,609,543,332,830,219,26,-54,-44,-52,-49,1,401,260,877,694,957,610,995,610,501,784,307,999,1,171,-44,-39,-61,-64,-52,-35,147,332,610,452,398,589,524,546,1340,1341,1036,643,122,1,-118,-55,-81,-67,-48,-48,-45,-31,41,55,73,60,93,50,252,241,144,-30,-41,-50,-23,-90,-35,-41,-43,-42,-46,-41,-40,-39,-50,25,3,-3,-159,-336,-655,-671,-2045,-1877,-1466,-355,-51,-112,-77,-55,-55,-49,-47,-44,-36,-57,-97,-402,-1670,-2521,-3312,-3296,-3206,-2863,-2565,-2143,-1945,-65,-79,-117,-79,-65,-75,-59,-81,-121,-201,-2121,-3401,-3734,-3680,-3619,-3587,-3509,-3381,-3193,-2930,-2762,-116,-160,-198,-207,-185,-192,-215,-253,-1022,-812,-3747,-3751,-3753,-3733,-3697,-3651,-3605,-3568,-3429,-3326,-3120,-687,-693,-534,-389,-451,-205,-382,-702,-2015,-1251,-2188,-3746,-3744,-3819,-3717,-3790,-3684,-3626,-3599,-3421,-3382,-1111,-846,-2104,-2200,-2195,-1962,-406,-801,-1948,-1997,-1248,-1568,-3720,-3746,-3774,-3707,-3678,-3669,-3673,-3602,-3462,-1608,-1300,-1560,-2068,-2219,-1041,-619,-278,-2379,-1057,-1746,-1401,-2990,-3728,-3720,-3702,-3692,-3668,-3658,-3557,-3478,-1596,-1500,-1547,-2121,-2422,-1290,-544,-648,-933,-2005,-3556,-2327,-3289,-3724,-3720,-3719,-3701,-3688,-3617,-3571,-3548,-1640,-1612,-2202,-2233,-2808,-3141,-2799,-2792,-3417,-3415,-3369,-3717,-3725,-3726,-3714,-3725,-3709,-3681,-3621,-3587,-3570,-1583,-2210,-2461,-3202,-3216,-3237,-3222,-3028,-2849,-3668,-3633,-3698,-3704,-3725,-3703,-3696,-3695,-3681,-3715,-3715,-3680,-2248,-2269,-2497,-2893,-3136,-3282,-3415,-3660,-3703,-3757,-3794,-3700,-3559,-2663,-3256,-3365,-3198,-3217,-3620,-3642,-3649,-2633,-2465,-2590,-2973,-3206,-3397,-3515,-3376,-3694,-3357,-3625,-3590,-3216,-2996,-2744,-2737,-2604,-3025,-2956,-3341,-3405,-2654,-2466,-2236,-2063,-2357,-1518,-1709,-2627,-2465,-2395,-2167,-2335,-2209,-2625,-2598,-2587,-2219,-2324,-2416,-2414,-2816,-2474,-2189,-2113,-2115,-2389,-1792,-1609,-2696,-2561,-2408,-2393,-2329,-2146,-2602,-2565,-2537,-2211,-2246,-2411,-2551,-2837],
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

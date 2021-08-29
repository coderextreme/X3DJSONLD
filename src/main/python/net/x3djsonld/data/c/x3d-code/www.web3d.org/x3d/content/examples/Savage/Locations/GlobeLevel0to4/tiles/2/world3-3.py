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
    GeoViewpoint(description='GeoViewpoint_2_33',geoSystem=['GDC'],position=(67.45833802716578,134.95834272103156,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(67.45833802716578,134.95834272103156,0.0),range=8991000.0,child1Url=['../../tiles/3/world6-6.x3d'],child2Url=['../../tiles/3/world6-7.x3d'],child3Url=['../../tiles/3/world7-6.x3d'],child4Url=['../../tiles/3/world7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[3206,3283,4521,1368,1392,1821,7,-10,43,-2474,-2969,-46,-5490,-5704,-5674,-5690,-4480,-5380,-5728,-4400,-5500,922,1382,1587,1412,1035,1487,639,-28,605,-2718,-3153,-3114,-2633,-5432,-5525,-5583,-5637,-5622,-3228,-5642,-5624,427,3389,1564,1292,904,1090,1347,303,352,358,-419,-2936,339,-8178,-5162,-5520,-5412,-4806,-4787,-6117,-5338,1285,2363,2630,1373,1067,1088,930,332,130,320,577,-1542,-217,123,-9052,-5047,-5705,-5706,-5305,-5681,-5722,2655,1379,2998,1417,1615,1039,644,676,213,208,77,-154,-565,-3413,-146,-4833,-5393,-5916,-5990,-5347,-5571,3259,1178,1962,1035,808,1257,665,857,351,348,289,697,395,-1058,-1456,-2689,-5352,-5433,-5243,-4701,-4939,1185,984,2010,877,1058,988,589,796,360,252,1503,124,-351,-1198,-718,239,-6377,-3686,-4746,-798,219,886,865,734,562,965,1389,765,762,725,423,631,-94,-174,-847,-440,1013,-2704,-6393,-3783,-3889,-125,240,618,418,605,481,1284,1089,1087,1072,973,707,-317,-119,-133,-573,127,108,-3782,-2342,-3828,-3839,169,538,234,333,494,635,646,434,425,338,535,855,-188,-10,-62,-136,606,-3777,-449,-3615,-3671,117,296,435,393,284,458,388,339,313,340,165,1290,646,1082,1080,-249,-21,212,408,-1445,-152,421,510,306,389,350,362,204,135,198,136,201,1595,754,1364,467,949,635,338,354,406,-45,414,514,637,580,531,534,268,230,284,1056,680,1368,1609,758,168,393,776,753,158,133,155,427,1103,544,311,415,222,278,201,281,620,132,424,49,368,65,173,34,507,334,447,1067,485,756,756,295,486,154,159,245,90,756,615,337,141,109,136,19,-57,-133,566,-57,-94,28,65,103,8,239,85,65,97,111,-11,-20,5,11,2,-17,-21,-20,-26,-32,-38,-45,87,190,234,140,77,32,-10,-14,-32,-26,-18,-19,-14,-9,-10,-40,-43,-50,-55,-64,-120,-32,-23,-28,236,-8,-19,-45,-73,-69,-60,-29,-20,-34,-39,-43,-42,-84,-184,-304,-895,-1136,-109,-60,754,87,-234,-1930,-2467,-3006,-2971,-2959,-2445,-131,-97,-94,-93,-148,-312,-1645,-2423,-2193,-1402,-53,-119,-315,-2048,-3249,-3465,-3499,-4166,-3832,-3830,-3544,-1659,-1725,-2428,-2573,-2778,-2790,-2788,-2700,-2478,-2173,-49,-83,-434,-2387,-3272,-3471,-3503,-5053,-3830,-3836,-3596,-1635,-1616,-2454,-2592,-2790,-2768,-2798,-2692,-2591,-2218],
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

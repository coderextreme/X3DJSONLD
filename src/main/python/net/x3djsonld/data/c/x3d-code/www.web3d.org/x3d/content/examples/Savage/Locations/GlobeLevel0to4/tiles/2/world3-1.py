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
    GeoViewpoint(description='GeoViewpoint_2_31',geoSystem=['GDC'],position=(67.45833802716578,-45.04166264338647,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(67.45833802716578,-45.04166264338647,0.0),range=8991000.0,child1Url=['../../tiles/3/world6-2.x3d'],child2Url=['../../tiles/3/world6-3.x3d'],child3Url=['../../tiles/3/world7-2.x3d'],child4Url=['../../tiles/3/world7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[170,202,333,31,-2970,-4405,-3208,-5171,-5339,-5431,-5245,-4929,-3682,-975,-655,-4171,-5032,-3658,84,526,-52,207,245,326,218,-43,-81,-4456,-5028,-5089,-3722,-4709,-4787,-4092,-2215,-2620,-3727,-5091,-5394,-1,1106,604,335,243,267,170,474,-192,-204,-3760,-4424,-1175,-4688,-4859,-3797,-3286,-3189,-3268,-4246,-5292,399,1686,1349,451,175,175,182,203,66,91,-83,-78,-68,-4426,-4646,-4200,-3222,-3033,-3850,-4348,-4737,-4907,-4465,101,179,179,387,383,409,257,-55,-201,72,-96,-234,-4639,-4303,-3418,-2601,-4354,-4635,-4761,-3024,-110,43,463,217,257,299,447,425,72,-165,-1,-1210,-3763,-4370,-3921,-3651,-3530,-3961,-4754,-2736,-134,-74,-47,354,192,4,221,793,554,560,421,-281,-2871,-4252,-2980,-3604,-2850,-3838,-3070,-4620,-485,256,194,79,181,108,-17,195,434,562,472,110,-212,-3584,-3611,-3302,-2222,-2804,-3354,-3750,-2216,-3048,0,222,-23,84,-101,-141,0,393,376,341,-194,-3221,-3692,-3513,-3186,-2305,-2470,-2771,-2337,-1338,-1937,-390,821,-141,-144,-67,-169,136,251,-93,621,-2476,-3391,-3484,-2133,-3045,-2784,-1355,-2314,-2915,-576,-1230,-1709,-71,-135,-142,-190,-126,157,421,-432,-616,-2619,-2992,-701,552,-2160,-2946,-2346,-1428,-1898,-2555,-1696,-195,-1046,-151,-62,10,-141,-128,-87,-26,-186,-1073,-1193,816,2688,-231,-2352,-2713,-1337,-309,-148,-1034,-500,-2462,-1743,369,40,-133,-8,126,244,-165,-480,-62,1059,2606,1155,-183,-544,-367,-16,261,-102,-832,-3854,-3003,154,355,-59,55,101,599,-117,-347,-23,930,2286,2752,2696,-131,-424,-703,-956,-1571,-1771,-3619,-3573,-19,-77,-32,148,609,23,-2026,-407,337,879,2394,2867,3059,2559,1523,230,-1596,-1428,-1779,-3024,-3245,-57,-17,306,1267,-916,-2316,-2204,-316,271,2117,2661,3013,3080,2412,1834,301,-386,-2196,-2346,-2396,-1758,-245,-98,-638,-696,-1063,-2059,-281,-307,1084,2110,2790,2903,2719,2274,1792,1547,-189,-1755,-3218,-3524,-3686,286,630,935,-103,-462,334,1217,988,1730,2213,2452,2442,2308,2114,1972,3,-168,-208,-300,-2299,-3218,309,243,609,412,-234,23,664,1270,1844,2107,2286,2331,2145,1862,1375,956,73,-82,-269,-1533,-2500,-81,-50,631,808,557,959,-450,902,362,813,785,1365,1187,536,609,333,126,1,-108,-3167,-2569,-238,449,1537,914,522,170,-541,895,326,735,724,1279,1147,450,609,777,73,1,-97,-3443,-2536],
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

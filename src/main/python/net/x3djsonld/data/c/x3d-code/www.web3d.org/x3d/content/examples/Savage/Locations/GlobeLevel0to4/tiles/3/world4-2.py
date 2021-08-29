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
    GeoViewpoint(description='GeoViewpoint_3_42',geoSystem=['GDC'],position=(11.208336350785146,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(11.208336350785146,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world8-4.x3d'],child2Url=['../../tiles/4/world8-5.x3d'],child3Url=['../../tiles/4/world9-4.x3d'],child4Url=['../../tiles/4/world9-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world4-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-3133,-3238,-3218,-3153,-1062,2883,246,202,122,91,69,79,46,77,49,90,155,73,9,132,27,-3272,-2937,-2498,-2120,-370,2951,243,156,122,160,102,50,60,110,104,52,35,51,13,43,5,-101,-1573,-2254,-1395,-1999,3441,291,168,171,108,95,67,52,57,111,128,440,16,19,22,-24,-1452,-2595,-3198,-3186,-2336,877,284,216,198,155,99,86,39,48,185,227,285,73,6,-38,-165,-1883,-2520,-2892,-3523,-3207,10,2154,237,231,235,117,550,99,61,296,354,421,146,-26,-14,-3461,-1722,-2455,-2989,-3352,-3134,-1012,1749,366,204,182,108,365,558,84,207,304,210,217,-74,-1108,-3847,-2419,-1808,-2915,-2874,-1742,-3683,1848,2490,217,136,99,362,332,87,133,274,201,91,-84,-1794,-3868,-3160,-2049,-2465,-3173,-2492,-3203,89,1395,156,153,92,453,388,976,103,98,95,12,-1788,-2770,-3948,-3547,-2627,-1772,-3078,-3126,-3181,59,644,640,110,169,947,406,810,96,14,13,-57,-3430,-3723,-4071,-3619,-3221,-2521,-2028,-2662,-3270,255,206,2685,99,65,675,270,112,39,-138,-53,-2973,-3959,-4088,-4303,-3426,-3448,-2809,-1370,7,-219,27,802,1454,94,52,36,187,128,-4,-1983,-714,-3957,-4341,-4416,-4549,-3444,-3326,-2769,28,-49,1,-65,17,5,227,86,93,98,16,-1479,-3232,-1535,-4685,-4678,-4649,-4792,-3710,-3289,110,301,-3061,-1938,-2555,124,17,768,732,551,74,-47,-2161,-3790,-4553,-4918,-4953,-4855,-4721,-3688,-3254,52,-918,-3235,-3522,-3070,-140,14,305,-1492,-86,-196,-85,-1892,-4446,-4798,-5004,-4948,-4880,-4682,-4185,2,54,-61,-2429,-3494,-3568,-3735,-12,0,-521,-3817,-2539,-2021,-1708,-4455,-4708,-5032,-5056,-4368,-4261,-155,176,1377,-11,-1407,-3579,-3984,-4032,-2296,-3036,-4390,-4086,-1101,-1058,-2589,-4879,-5266,-5097,-4605,-3586,-3346,1554,897,597,9,-2,-2447,-4010,-4113,-3439,-4337,-5064,-4270,-1365,-1036,-3990,-5193,-5359,-5114,-4750,-3030,-2526,1775,31,986,-17,-10,-2300,-3356,-4193,-3363,-3752,-4627,-4454,-2322,-194,-4911,-5454,-5463,-5040,-3689,-3640,-3423,139,-1861,-667,-908,-256,-1328,-1962,-3272,-2785,-4209,-4725,-4421,-1460,-4557,-5758,-5873,-5512,-4673,-3859,-3549,-3788,205,-111,-4623,-5286,-1524,-368,-1759,-2746,-3872,-3687,-2834,-1605,-710,-4824,-5136,-5318,-5210,-4754,-4221,-3235,-4531,63,7,-4555,-1356,-4030,-4801,-3586,-773,89,42,-1171,-1354,-1856,-6615,-5681,-5631,-5043,-4737,-4247,-3957,-3275,61,1,-4567,-1521,-3965,-4935,-3603,-1985,441,45,-1454,-1688,-4929,-6935,-5535,-5631,-4951,-4782,-4375,-3269,-3197],
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

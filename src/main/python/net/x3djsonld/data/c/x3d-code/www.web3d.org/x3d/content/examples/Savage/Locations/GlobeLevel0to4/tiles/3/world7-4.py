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
    GeoViewpoint(description='GeoViewpoint_3_74',geoSystem=['GDC'],position=(78.7083383624419,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-8.x3d'],child2Url=['../../tiles/4/world14-9.x3d'],child3Url=['../../tiles/4/world15-8.x3d'],child4Url=['../../tiles/4/world15-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-847,-390,-183,1000,1205,820,688,309,-2,-4,170,124,181,157,212,162,23,128,73,71,69,-1893,-1240,-1273,-215,3,460,431,345,343,-37,0,182,96,212,179,110,106,175,142,80,171,-2634,-2535,-1671,-357,-227,160,740,462,462,244,-41,38,124,217,149,116,-7,31,10,100,70,-3030,-2865,-1111,-417,-355,-180,980,386,381,404,4,-3,136,229,200,92,-24,-95,134,140,27,-3202,-1825,-1334,-704,-325,-354,-15,973,451,223,142,131,164,343,61,-4,106,206,199,-17,16,-3435,-1803,-1247,-1334,-1697,-178,-174,640,439,580,313,238,206,297,143,749,223,225,210,-125,29,-2186,-3129,-3228,-3053,-2960,-2627,-154,-4,320,780,513,479,400,191,86,173,221,-119,-178,-84,-160,-3309,-3325,-3325,-3165,-2946,-2936,-2744,-2243,-216,0,467,552,390,230,-63,-197,-144,-99,-172,-51,-124,-3326,-3135,-3167,-3094,-2856,-2649,-2343,-2047,-420,-191,-210,9,90,-43,-288,-202,-165,-232,-264,-120,-84,-2317,-2598,-2830,-2810,-2573,-2186,-1628,-799,-299,-321,-362,-316,-265,-224,-314,-288,-243,-288,-327,-266,-227,-2894,-2787,-2298,-2450,-2382,-1994,-1373,-467,-433,-419,-432,-401,-389,-317,-286,-239,-232,-247,-316,-332,-338,-3243,-3328,-3112,-2965,-2943,-2289,-1998,-1447,-196,-86,-291,-419,-402,-373,-288,-291,-276,-225,-232,-272,-342,-3714,-2440,-2997,-2513,-2583,-2356,-1630,-241,-151,-41,-59,-146,-202,-341,-344,-192,-157,-197,-191,-240,-295,-3153,-3155,-3108,-2085,-1421,-2095,-1414,-212,-235,-243,-149,-58,-145,-178,-300,-277,-289,-243,-216,-261,-264,-3180,-3117,-2753,-2104,-1846,-961,-228,508,-17,-123,-20,-50,-186,-173,-188,-149,-186,-205,-207,-255,-289,-2785,-2389,-2322,-2299,-1128,-58,245,17,772,-32,-10,-111,-178,-195,-282,-208,-107,-151,-302,-230,-222,-2764,-2221,-3969,-1328,-404,64,318,-16,230,244,525,510,-132,-301,-160,-307,-303,-293,-327,-332,-149,-2676,-1763,-775,-683,-967,-1128,-898,-616,-139,-25,-146,-117,-131,-230,-150,-108,-192,-214,-279,-397,-167,-1696,-2480,-775,-768,-803,-1274,-1898,-2036,-3025,-3164,-3408,-3159,-2940,-2590,-2015,-647,-558,-379,-397,-394,-170,-3667,-3396,-3838,-3798,-3445,-2874,-2812,-1754,-3058,-4024,-4039,-4017,-4009,-3868,-3634,-3432,-3297,-3157,-2989,-3038,-2860,-2751,-2824,-3622,-3358,-3552,-3818,-3902,-3914,-3982,-3995,-3994,-3964,-3967,-4012,-3930,-3910,-3963,-3990,-3923,-3844,-3832,-3393,-2667,-3489,-3442,-3477,-3750,-3831,-3903,-3968,-3996,-3999,-3948,-3927,-3969,-3975,-3988,-3989,-3875,-3849,-3846,-3835],
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

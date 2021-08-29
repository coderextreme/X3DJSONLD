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
    GeoViewpoint(description='GeoViewpoint_2_21',geoSystem=['GDC'],position=(22.458336686061273,-45.04166264338647,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(22.458336686061273,-45.04166264338647,0.0),range=8991000.0,child1Url=['../../tiles/3/world4-2.x3d'],child2Url=['../../tiles/3/world4-3.x3d'],child3Url=['../../tiles/3/world5-2.x3d'],child4Url=['../../tiles/3/world5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-3629,-3563,222,146,106,93,21,49,195,70,59,184,-2337,-4552,-5261,-4911,-4792,-3654,-4210,-4617,-4705,-3225,-2649,-111,223,118,100,59,77,6,5,32,-807,-3725,-4494,-5025,-4496,-4587,-3511,-4138,-5097,-4667,-1521,-3061,-2605,308,186,95,42,183,303,-3,-245,-2635,-4571,-4169,-3356,-3695,-2884,-4410,-5237,-5123,-4945,-1798,-3034,-3001,1990,182,122,373,295,175,-64,-3858,-4249,-3634,-2649,-3876,-4598,-4968,-4982,-4754,-4816,-4838,-3086,-2346,-2397,218,154,130,358,114,115,-2102,-4129,-4499,-3975,-3278,-4089,-3736,-5039,-4718,-86,-2592,-3970,-3522,-2569,-1995,352,489,59,295,36,-25,-4057,-4383,-4766,-3699,-4082,-4045,-3484,-4865,-3916,249,124,126,-3460,-3321,-1000,-592,3,103,49,-2138,-2025,-4724,-4878,-3362,-4454,-4600,-5322,-4641,-3246,-3,545,303,154,-3709,31,-3068,-3182,14,-1920,-9,-1633,-4845,-4937,-3997,-4522,-5154,-5307,-5374,-5075,-3711,262,346,326,240,-119,839,-1199,-4045,-4245,-5055,-1084,-2624,-5333,-5096,-2834,-5222,-5770,-5845,-5055,-4506,-2950,39,352,270,303,158,-4,-258,-2759,-3443,-4706,-2201,-5488,-4944,-4142,-4352,-5327,-2927,-5323,-4709,-1266,-3025,41,199,281,309,174,-3261,-4259,214,-798,-653,-6,-5743,-4766,-4477,-3718,-5328,-5321,-4826,-4447,-3429,-2558,74,253,311,348,12,-4545,-3521,59,-4147,-5239,-5249,-5273,-5082,-4687,-3367,-4916,-5484,-4657,-4706,-4272,-1227,127,389,276,371,-113,-2043,38,-4,-4912,-5538,-5827,-5815,-5604,-4779,-3400,-5283,-5213,-5414,-5453,-4747,-2639,302,262,238,346,-3508,-3322,-2,-251,-5386,-5488,-5788,-5719,-5703,-4218,-3185,-4590,-5735,-5862,-5208,-4840,-2897,236,314,220,299,-2192,-3254,11,-4370,-5157,-5171,-5775,-6354,-5111,-5155,-3388,-4191,-4597,-5312,-5236,-4906,-3764,-177,473,401,166,0,-23,-14,-4955,-5252,-5175,-5163,-5510,-5408,-4947,-3678,-3251,-4166,-4425,-5128,-5041,-4129,-1037,1359,567,354,82,139,-3,-2659,-5408,-5121,-4772,-5442,-5638,-4816,-4463,-2814,-3758,-4235,-4886,-5240,-4628,-3395,477,914,761,49,222,76,-41,-4994,-5208,-4934,-4731,-5361,-5307,-4262,-3907,-2983,-3418,-4363,-5386,-4271,-4445,-3745,633,1041,76,322,353,14,-3942,-4971,-5044,-4624,-5473,-5206,-4636,-4469,-2905,-2891,-3340,-4915,-5391,-4526,-3466,-1075,-1373,174,204,354,11,-2835,-4370,-3796,-5179,-5348,-5399,-5270,-4919,-4394,-1024,-955,-4156,-4987,-3845,-73,677,-128,170,202,333,31,-2970,-4405,-3208,-5171,-5339,-5431,-5245,-4929,-3682,-975,-655,-4171,-5032,-3658,84,526,-52],
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

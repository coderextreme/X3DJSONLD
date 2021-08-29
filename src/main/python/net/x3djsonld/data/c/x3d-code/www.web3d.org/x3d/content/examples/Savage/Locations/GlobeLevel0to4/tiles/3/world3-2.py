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
    GeoViewpoint(description='GeoViewpoint_3_32',geoSystem=['GDC'],position=(-11.291664319767108,-67.54166331393873,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-11.291664319767108,-67.54166331393873,0.0),range=4495500.0,child1Url=['../../tiles/4/world6-4.x3d'],child2Url=['../../tiles/4/world6-5.x3d'],child3Url=['../../tiles/4/world7-4.x3d'],child4Url=['../../tiles/4/world7-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-22.541664655043235,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-2649,-3685,-3694,-3701,-3942,-4444,-4573,-3047,-4348,2071,3471,1226,245,143,86,172,251,986,1003,-50,-94,-4190,-3987,-3147,-3406,-3885,-4470,-4383,-4617,-4280,705,5271,2884,231,158,98,234,270,351,541,780,-112,-4123,-4098,-4060,-3119,-4309,-4676,-4552,-4222,-4084,1616,4444,3938,292,173,99,225,349,284,523,592,1471,-4051,-4199,-4186,-3748,-2803,-4419,-4785,-4738,-3481,969,4243,4099,451,180,101,310,381,269,420,689,1042,-4159,-4280,-4473,-4191,-2860,-4675,-4446,-5026,-3058,1136,3658,2934,747,213,92,123,476,317,470,1000,907,-4271,-4292,-4502,-4383,-3731,-3856,-4835,-4890,-5026,1277,3674,2982,670,270,132,106,352,486,642,1022,675,-4341,-4310,-4438,-4450,-4494,-3032,-4355,-4687,-3960,2120,4131,2443,491,287,350,120,326,803,578,799,566,-4416,-4412,-4500,-4621,-4641,-3366,-3873,-5458,-731,4902,3641,520,264,286,116,119,543,804,542,805,658,-4452,-4474,-4633,-4898,-4538,-4203,-2599,-1100,2515,3889,2490,182,223,324,201,134,371,337,784,980,547,-4243,-4374,-4652,-4810,-4717,-4335,-4375,2498,4735,3948,1045,155,221,201,567,208,675,268,645,555,795,-4036,-4129,-4601,-4911,-4871,-4464,-428,4191,3771,4131,208,144,162,621,569,386,512,292,363,1398,697,-4053,-4168,-4332,-4841,-4751,-4826,-89,3271,2396,255,175,163,154,359,343,401,311,370,266,413,738,-4305,-4099,-4383,-4634,-4505,-3989,3806,1731,427,345,222,165,222,190,309,338,296,348,188,320,542,-4208,-4280,-4279,-4533,-4269,-1596,4856,1221,430,280,166,140,204,190,237,311,379,211,193,336,543,-4184,-4110,-4478,-4475,-4898,-136,3903,240,361,243,169,123,121,170,248,266,305,325,218,259,412,-4147,-4200,-4317,-4274,-5285,-180,2816,145,250,199,130,113,99,123,171,459,348,486,272,273,529,-4111,-4206,-4219,-4263,-3883,1489,334,252,198,182,151,64,61,107,186,310,287,260,190,203,272,-4043,-4042,-4077,-4053,-909,2048,668,135,174,182,132,95,67,65,186,271,230,480,208,133,301,-3847,-3910,-4011,-3131,1,1282,224,105,135,169,132,98,29,55,65,80,218,232,152,271,202,-3602,-3553,-3614,-3757,-49,1564,165,115,121,97,101,90,58,39,41,105,277,223,70,128,55,-3217,-3283,-3219,-3182,-1132,2988,234,189,119,121,66,85,57,71,45,101,171,58,12,122,43,-3133,-3238,-3218,-3153,-1062,2883,246,202,122,91,69,79,46,77,49,90,155,73,9,132,27],
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

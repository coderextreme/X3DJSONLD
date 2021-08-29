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
    GeoViewpoint(description='GeoViewpoint_2_00',geoSystem=['GDC'],position=(-67.54166599614774,-135.0416653255955,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-67.54166599614774,-135.0416653255955,0.0),range=8991000.0,child1Url=['../../tiles/3/world0-0.x3d'],child2Url=['../../tiles/3/world0-1.x3d'],child3Url=['../../tiles/3/world1-0.x3d'],child4Url=['../../tiles/3/world1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-180.0416666667,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,3074,3056,3014,2970,2938,2908,2881,2817,2786,2783,2798,2831,2848,2821,2789,2761,2733,2639,2560,2557,2559,2557,2243,2624,2353,571,517,217,450,696,817,966,1255,1764,1996,2388,2394,2383,2399,2036,2230,2034,0,0,0,0,1,11,113,262,431,404,407,544,676,939,1300,1478,1752,2036,1985,1904,1702,0,1,0,1,1,0,0,115,283,357,622,864,1081,1290,1461,1686,1887,2075,2318,2137,1890,0,1,1,0,0,1,364,637,747,723,1102,1338,1539,1566,1693,1694,1702,1801,1840,1844,1905,-501,-578,-498,-399,-616,-325,-378,4,830,1595,2096,2174,2505,1906,1649,1287,1076,1111,1059,1172,1257,-397,-1846,-3138,-3382,-3681,-3804,-3935,-3783,-2979,-535,-465,-57,1,359,6,1,-147,-3,683,1114,1271,-2170,-1253,-3981,-4201,-4371,-4199,-4139,-4174,-4220,-4119,-4021,-3071,-2312,-2023,-1359,-1590,-1324,-549,-6,-512,-515,-3704,-4037,-4068,-4113,-3996,-4049,-4400,-4341,-4489,-4357,-4427,-3830,-2366,-3614,-3143,-3683,-3747,-3923,-4223,-3549,-3574,-1618,-2999,-3603,-3643,-3847,-3866,-4336,-4186,-4115,-4136,-4518,-4230,-4301,-4311,-4435,-4343,-4443,-4601,-4607,-4514,-4289,-3175,-2997,-2854,-2846,-3458,-3788,-3745,-4317,-3425,-4481,-4178,-4862,-4815,-4879,-4914,-4934,-4867,-4911,-4845,-4696,-3758,-3501,-3776,-3425,-2535,-2712,-2366,-2844,-3324,-3858,-4322,-4795,-4821,-4992,-5013,-5045,-5118,-5173,-5117,-4883,-4946,-4771,-4096,-3892,-4131,-4308,-3684,-3430,-2427,-3186,-3668,-3987,-4306,-4352,-4652,-4834,-5030,-5121,-4810,-5017,-5305,-4998,-5077,-4903,-4875,-4617,-4584,-4141,-3851,-2956,-2764,-3414,-3803,-4211,-3729,-4127,-4716,-4644,-5226,-5090,-4520,-4844,-4374,-4923,-5093,-5120,-4907,-4432,-3936,-4097,-3393,-3129,-3012,-2764,-3161,-3546,-3942,-4243,-3529,-3992,-4316,-4500,-4427,-5364,-5161,-5261,-5413,-5178,-4925,-4572,-4266,-3824,-3964,-3549,-2389,-2615,-3779,-3583,-2834,-2959,-3553,-3991,-4284,-4397,-5393,-4866,-4944,-5480,-5140,-5163,-4882,-4828,-4528,-4169,-3873,-4126,-4574,-4057,-3944,-3285,-2915,-3372,-3924,-3974,-4470,-4893,-4784,-2389,-4921,-5276,-5202,-4800,-5035,-4774,-4608,-4617,-4342,-4755,-4325,-4044,-3252,-2793,-2809,-3689,-4035,-4465,-4762,-4508,-1059,-5039,-5245,-5365,-4816,-4822,-4597,-5030,-5003,-4944,-4861,-4496,-4167,-3883,-3278,-2885,-3526,-4120,-4262,-4762,-3949,-1460,-4995,-5259,-5308,-5014,-4837,-4538,-4849,-5020,-5173,-4875,-4495,-4233,-3914,-3327,-2811,-3442,-4128,-4275,-4566,-3949],
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

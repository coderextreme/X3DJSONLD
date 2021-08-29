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
    GeoViewpoint(description='GeoViewpoint_2_02',geoSystem=['GDC'],position=(-67.54166599614774,44.95834003882254,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-67.54166599614774,44.95834003882254,0.0),range=8991000.0,child1Url=['../../tiles/3/world0-4.x3d'],child2Url=['../../tiles/3/world0-5.x3d'],child3Url=['../../tiles/3/world1-4.x3d'],child4Url=['../../tiles/3/world1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2602,2643,2692,2716,2726,2730,2739,2770,2827,2920,2992,3019,3041,3059,3072,3081,3086,3090,3091,3093,3094,2600,2628,2663,2694,2705,2729,2797,2912,3038,3150,3208,3266,3302,3322,3343,3360,3358,3339,3313,3297,3272,2371,2464,2516,2551,2598,2685,2801,2967,3101,3305,3395,3473,3561,3646,3732,3812,3802,3770,3711,3633,3567,2227,2428,2533,2617,2797,2952,3101,3282,3418,3544,3660,3709,3756,3805,3906,3947,3989,4031,4011,3907,3774,2427,2626,2813,3046,3182,3287,3410,3515,3613,3648,3610,3599,3511,3365,3407,3488,3479,3485,3574,3637,3737,2702,2989,3126,3290,3392,3510,3646,3722,3722,3708,3597,3464,3197,2903,2670,2505,2542,2725,3080,3418,3632,2722,2883,3254,3399,3404,3474,3379,3133,3253,3368,3376,3287,2990,2477,1785,1305,2060,2512,2967,3348,3519,892,1693,2355,2292,1825,1374,1301,1749,2340,2535,2703,2959,3072,2678,1895,154,1010,2101,2707,3024,3182,51,-1763,-161,14,46,-1810,-267,48,358,846,2163,2181,2616,2659,2081,798,-93,788,1994,2363,2505,-4717,-4056,-3797,-3358,-4420,-4410,-3884,-3407,-3245,-2676,-314,601,1412,697,-225,-271,-618,-359,-199,783,1215,-4000,-3443,-4487,-4030,-4725,-4805,-4935,-4554,-4196,-4674,-3844,-3182,-1896,-3713,-3612,-3031,-3160,-3522,-3304,-2793,-2271,-5269,-5235,-5168,-5340,-4884,-5080,-5118,-5102,-5057,-4988,-4725,-4910,-4974,-4616,-4133,-4194,-3943,-3794,-3315,-3508,-3855,-5388,-5187,-5208,-5204,-4891,-5269,-5243,-5233,-5254,-5273,-5260,-5259,-5146,-4905,-4713,-4410,-4071,-3385,-1899,-3731,-4257,-4506,-5332,-4514,-5612,-5006,-5199,-5458,-5388,-5382,-5158,-5320,-5372,-5211,-5036,-4812,-4302,-4612,-1225,-1647,-4334,-4708,-3314,-3322,-5189,-4959,-4832,-3868,-5387,-5441,-5340,-4965,-4836,-5318,-5088,-4605,-4895,-1998,-2511,-2727,-4185,-4613,-4074,-2569,-1632,-3593,-4326,-3315,-3149,-5850,-5555,-4774,-2427,-3782,-4509,-4586,-5026,-4739,-4497,-2140,-1451,-3577,-4402,-4538,-2485,-3274,-3966,-2853,-3125,-3565,-3659,-4844,-4460,-3220,-3005,-4545,-4313,-4831,-4803,-2347,-977,-96,-3663,-4118,-3949,-3592,-3656,-4190,-4458,-4028,-4241,-4793,-3513,-4498,-4300,-4984,-4192,-4280,-4498,-3513,-500,-600,-3075,-3802,-4166,-4045,-3765,-4754,-3569,-4655,-5713,-4852,-5251,-4745,-3302,-3739,-3429,-3741,-3756,-4421,-3876,-267,-488,-3245,-3470,-3567,-3609,-3596,-4682,-3544,-4747,-5671,-4924,-5206,-4388,-3384,-3679,-3420,-3753,-3754,-4359,-3886,-331,-977,-2517,-3494,-3537,-3534],
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

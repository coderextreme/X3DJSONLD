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
    GeoViewpoint(description='GeoViewpoint_3_00',geoSystem=['GDC'],position=(-78.79166633142387,-157.54166599614774,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-78.79166633142387,-157.54166599614774,0.0),range=4495500.0,child1Url=['../../tiles/4/world0-0.x3d'],child2Url=['../../tiles/4/world0-1.x3d'],child3Url=['../../tiles/4/world1-0.x3d'],child4Url=['../../tiles/4/world1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-180.0416666667,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,3028,3018,3006,2995,2985,2976,2968,2958,2950,2943,2935,2927,2922,2918,2916,2914,2912,2908,2905,2900,2895,3090,3087,3084,3077,3063,3044,3016,2992,2967,2951,2933,2921,2903,2882,2849,2824,2813,2810,2809,2810,2817,2945,2926,2895,2821,2680,2631,2449,2354,2365,2385,2427,2558,2118,1921,2069,3194,2398,2416,2467,2468,2469,2520,2403,2568,2692,2767,3002,2783,1175,787,572,997,712,474,899,766,989,1232,1178,1247,1686,1202,1152,1337,924,400,190,-4,0,0,0,0,5,16,36,87,165,199,210,349,426,558,654,1,0,1,0,0,0,0,0,1,1,29,82,156,220,396,344,291,328,362,399,407,0,1,1,0,1,0,0,0,0,0,0,1,0,116,199,200,216,313,371,536,592,0,1,0,0,0,0,0,1,0,1,0,101,358,380,395,267,290,339,380,480,602,0,0,0,0,0,1,1,1,1,1,1,1,0,0,29,173,259,342,565,620,663,1,1,1,1,1,1,1,1,368,1,1,0,-1,314,568,675,710,604,538,599,873,0,2,4,-124,-75,-590,-395,-598,-234,0,5,460,603,769,819,904,1018,1028,1140,1301,1428,-648,-600,-588,-540,-480,-551,-400,-497,-600,-603,-76,-394,-1254,0,5,1,792,1336,1503,1762,2008,-441,-599,-578,-501,-822,-886,-688,-1699,-2523,-3188,-3491,-3115,-1874,-277,-32,2,508,800,1215,1550,1180,-409,-781,-1986,-2162,-2493,-2814,-3183,-3471,-3606,-3554,-3685,-3743,-3807,-3860,-3795,-3191,-116,-282,-111,-77,342,-396,-591,-2546,-2931,-3632,-3707,-3909,-3865,-3733,-3801,-4035,-3943,-4191,-4082,-4046,-3850,-3738,-3438,-2347,-1111,-1429,-1658,-587,-1282,-3417,-3803,-3994,-4203,-4152,-4174,-4188,-4206,-4113,-4086,-4192,-4202,-4200,-4069,-4055,-3973,-3644,-3274,-1708,-919,-2547,-3766,-4053,-4057,-4326,-4193,-4204,-4274,-4300,-4290,-4251,-4221,-4218,-4231,-4262,-4293,-4194,-4179,-4116,-2867,-3109,-3965,-4194,-4065,-4121,-4186,-4228,-4236,-4247,-4242,-4400,-4374,-4359,-4289,-4313,-4323,-4338,-4323,-4383,-4388,-3783,-3877,-4025,-4150,-4161,-3966,-4021,-3994,-3901,-3954,-4027,-4222,-4466,-4373,-4373,-4336,-4364,-4332,-4415,-4466,-4390,-1332,-3406,-3862,-4211,-4079,-3525,-3749,-3775,-3817,-3956,-4341,-4198,-4403,-4382,-4290,-4310,-4394,-4257,-4392,-4435,-4355,-2282,-3384,-3918,-4237,-4015,-3483,-3737,-3737,-3784,-3880,-4220,-4207,-4533,-4324,-4239,-4357,-4328,-4282,-4367,-4496,-4407],
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

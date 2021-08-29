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
    GeoViewpoint(description='GeoViewpoint_2_11',geoSystem=['GDC'],position=(-22.541664655043235,-45.04166264338647,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-22.541664655043235,-45.04166264338647,0.0),range=8991000.0,child1Url=['../../tiles/3/world2-2.x3d'],child2Url=['../../tiles/3/world2-3.x3d'],child3Url=['../../tiles/3/world3-2.x3d'],child4Url=['../../tiles/3/world3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-45.04166532559549,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-3949,-4193,-3393,-3506,622,196,-126,-2422,-5977,-6090,-5734,-5771,-5884,-5120,-4622,-4228,-3370,-2087,-2437,-3458,-3596,-4185,-3710,-3274,-3235,1059,550,-97,-1951,-5739,-5503,-4994,-4843,-5485,-5113,-4469,-4280,-3214,-3488,-3740,-3856,-3976,-3854,-3392,-3380,-3455,1206,812,-71,-878,-5500,-5687,-5044,-5170,-5189,-4399,-4595,-4010,-3149,-3118,-3970,-4167,-3402,-3534,-3762,-4127,-3625,427,624,37,-82,-4659,-5445,-5105,-5188,-4903,-4648,-4264,-3936,-2657,-3185,-3403,-4101,-4477,-3333,-3872,-3895,-4031,636,311,229,69,-1200,-5173,-5136,-5064,-4895,-4471,-4226,-4005,-3149,-2851,-3271,-3999,-5323,-3911,-3971,-3738,-4027,125,531,100,18,-52,-4431,-4915,-4890,-4668,-4152,-4294,-3538,-2456,-3591,-3737,-3494,-5072,-3540,-3933,-3343,-4108,-676,500,126,8,18,-2646,-4201,-4577,-4407,-4497,-4696,-3991,-3391,-2994,-3998,-3766,-4211,-3402,-3967,-3933,-4068,-3005,597,156,61,156,-1217,-3564,-3740,-1773,-3472,-4614,-4273,-3815,-2447,-4039,-4582,-4157,-3330,-3734,-4240,-4234,-4512,1403,93,48,402,-19,-3571,-3746,-3574,-3378,-5172,-4478,-4150,-2420,-3786,-4349,-4655,-3643,-3836,-3861,-3603,-4636,4436,181,59,484,686,-2389,-3417,-4604,-4865,-5388,-5259,-4194,-3352,-4089,-4379,-5160,-3597,-1471,-4198,-4427,-4453,3476,237,91,261,873,-111,-2908,-4125,-5208,-5205,-4820,-4270,-2587,-4646,-4845,-5349,-4109,-4215,-4461,-4769,-4167,4538,295,97,367,584,1395,-123,-4189,-4635,-5624,-5433,-4981,-3254,-4208,-4637,-5499,-4116,-4439,-3213,-3724,-2941,3659,676,93,512,454,849,724,-2186,-4298,-5471,-5206,-4454,-3666,-3706,-4937,-5224,-4455,-4475,-4462,-4349,-2207,3728,386,333,338,596,542,264,-162,-4685,-5414,-4843,-4015,-3671,-2646,-4832,-5162,-4460,-4561,-4580,-3052,4025,1198,200,186,662,648,572,459,-4241,-4736,-5203,-4955,-4096,-2623,-3876,-4282,-5637,-3574,-4674,-4823,-142,3686,185,161,503,464,296,722,621,-4302,-5045,-5532,-5424,-4036,-3044,-3826,-4098,-5391,-4210,-4397,-4430,4612,536,179,279,315,349,193,517,521,-2857,-5145,-5464,-5257,-4044,-2972,-3949,-3838,-5629,-4217,-4380,-5483,2243,343,140,105,221,300,185,359,391,576,-5194,-5623,-5330,-4126,-2523,-3941,-4723,-4929,-4134,-4034,-726,690,205,143,79,144,272,183,432,649,481,-4923,-5670,-5055,-4412,-3185,-3899,-4336,-3851,-3686,-3559,193,143,120,117,59,55,195,79,52,188,-2376,-4534,-5340,-5043,-4311,-3239,-4110,-4544,-5114,-3629,-3563,222,146,106,93,21,49,195,70,59,184,-2337,-4552,-5261,-4911,-4792,-3654,-4210,-4617,-4705],
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

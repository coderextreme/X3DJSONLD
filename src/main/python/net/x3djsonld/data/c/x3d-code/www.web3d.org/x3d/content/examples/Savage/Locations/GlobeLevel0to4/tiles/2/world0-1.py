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
    GeoViewpoint(description='GeoViewpoint_2_01',geoSystem=['GDC'],position=(-67.54166599614774,-45.04166264338647,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-67.54166599614774,-45.04166264338647,0.0),range=8991000.0,child1Url=['../../tiles/3/world0-2.x3d'],child2Url=['../../tiles/3/world0-3.x3d'],child3Url=['../../tiles/3/world1-2.x3d'],child4Url=['../../tiles/3/world1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-90.0416666667,-90.04166398449098,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,2559,2550,2535,2527,2528,2532,2534,2533,2507,2461,2420,2409,2412,2431,2477,2507,2532,2553,2569,2586,2602,2034,1355,1402,1311,1343,1409,1559,1652,1714,1745,1772,1831,1962,2098,2145,2258,2388,2466,2519,2569,2600,1702,1437,1190,874,668,537,270,208,1247,1036,896,1313,1517,1629,1681,1723,1857,2018,2132,2252,2371,1890,1380,913,306,0,1,1,0,0,1,1,0,279,424,1004,1153,1507,1703,1902,2058,2227,1905,1231,2,1,1,-4,0,1,0,300,-11,1,172,476,468,1238,1446,1624,2000,2273,2427,1257,1033,878,1,385,1,1,0,1,-313,-323,-479,-865,-406,588,1391,1584,1980,2312,2501,2702,1271,1138,1026,988,1304,2000,717,-591,-424,-349,-518,-408,-1795,-1125,-2600,-5,1,613,1486,2779,2722,-515,-460,-417,-314,-14,48,849,-394,-754,-1110,-2377,-3313,-3748,-3991,-3950,-4182,-2831,-134,565,1349,892,-3574,-1501,-570,-3,-20,700,659,-413,-2575,-3464,-3878,-3994,-4249,-4466,-4627,-4549,-4683,-4601,-2363,-2386,51,-4289,-4130,-4089,-3284,-365,14,-216,-523,-2538,-3603,-4025,-4347,-4535,-4597,-4728,-4893,-4874,-4887,-4362,-4696,-4717,-3758,-4524,-4220,-4064,-3528,-398,496,-412,-1249,-3580,-4393,-4707,-4753,-4918,-4917,-5024,-5062,-5061,-5013,-5030,-4000,-4771,-4754,-4583,-4027,-3986,-3737,-727,-264,-304,-2543,-3511,-3786,-4509,-4652,-4703,-4953,-5164,-5121,-5142,-5270,-5269,-5077,-4834,-4943,-4699,-4187,-3889,-3743,-4355,-2018,-2332,189,-4799,-697,-1835,-3562,-3825,-4482,-4284,-4821,-5312,-5388,-4923,-5004,-4878,-4846,-3966,-3602,-3722,-3702,-4088,-3309,-2879,-3294,-2099,-2965,-2945,-5016,-4292,-4247,-4402,-4180,-4506,-5161,-5034,-4572,-4302,-4170,-117,-3982,-3854,-3577,-3655,-3821,-3175,-3802,-3170,-1528,-4264,-4772,-4633,-3451,-3429,-3314,-4866,-5019,-4551,-3984,189,53,-616,-144,-1675,-4233,-3370,-2626,-247,-4313,-5232,-3745,-4435,-3965,-3231,-2507,-2569,-4784,-4588,-4189,-3926,158,-87,-210,264,-1772,-2395,-2453,-3729,-4506,-3346,-3778,-4606,-4260,-3747,-2809,-2562,-2485,-4508,-4402,-4114,-2609,1005,-49,-157,-416,-1467,-4693,-5061,-2606,-4789,-5250,-4348,-4304,-4150,-3601,-2812,-3547,-3592,-3949,-4212,-3184,-3546,158,203,-130,-2503,-5972,-6107,-5765,-5815,-5837,-5036,-4628,-4219,-3581,-2230,-1505,-3785,-3765,-3949,-4193,-3393,-3506,622,196,-126,-2422,-5977,-6090,-5734,-5771,-5884,-5120,-4622,-4228,-3370,-2087,-2437,-3458,-3596],
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

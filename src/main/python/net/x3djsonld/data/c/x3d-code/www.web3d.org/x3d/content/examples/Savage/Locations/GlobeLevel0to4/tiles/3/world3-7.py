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
    GeoViewpoint(description='GeoViewpoint_3_37',geoSystem=['GDC'],position=(-11.291664319767108,157.4583433915838,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-11.291664319767108,157.4583433915838,0.0),range=4495500.0,child1Url=['../../tiles/4/world6-14.x3d'],child2Url=['../../tiles/4/world6-15.x3d'],child3Url=['../../tiles/4/world7-14.x3d'],child4Url=['../../tiles/4/world7-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world3-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-22.541664655043235,134.95834272103156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[355,154,68,134,281,346,781,198,-5,-4265,-2792,-2745,-1342,-2629,-3584,-557,-4012,-4007,-4523,-4429,-1920,623,215,115,103,210,297,210,234,-127,-1726,-2135,-2535,-1181,-2604,-3487,-1516,-2902,-4361,-4304,-4381,-3193,562,270,159,254,227,293,411,53,-111,-2252,-2117,-580,-1240,-2622,-2743,-2124,-5487,-4446,-4398,-4212,-3469,440,270,238,206,261,363,312,-5,-3,-2941,-1198,-333,-1318,-3597,141,-606,-2355,-2891,-2420,-3661,-3558,422,279,310,99,293,349,386,-2,-421,-3136,-1879,-1311,-1723,-3457,-2235,-4658,-2603,-3006,-2996,-3706,-3398,291,233,228,66,591,471,-3,-426,-329,-3029,-2830,-1122,-3256,-62,-3286,-4174,-2337,-2704,-3346,-3255,-2826,211,287,40,17,318,489,-1021,-1184,-2106,-2111,-2832,-4180,-2918,-3118,-4704,-2612,-2449,-3035,-2842,-2147,-1572,241,163,13,6,190,764,-936,-312,-1260,-3008,-2903,-3122,-4661,-4070,-4369,-1037,-3113,-2788,-2075,-1,-1636,219,22,-70,-89,155,-3,-1069,-984,-1776,-4055,-2342,-2640,-4560,-4651,-4354,-180,-3337,-3056,-2964,-3234,-1328,35,-37,-130,-130,131,-4,-1224,-1807,-4402,-4610,-4122,-3365,-4387,-3608,-5336,-718,-3199,-3311,-3105,-2629,-2379,67,16,-61,-73,49,-2872,-2919,-4606,-4633,-4164,-3047,-3058,-2840,-2906,-2728,-1942,-2847,-2615,-3105,-2421,-2170,107,-4,-74,-133,-1,-2781,-4164,-4551,-4519,-2975,-1860,-2211,-3004,-4045,-5651,-2973,-3278,-2333,-2495,-2758,-3233,-21,-10,-73,-64,-3,-2113,-3071,-3520,-3390,-2874,-2313,-4173,-4078,-4165,-5918,-2469,-3235,-4273,-3781,-3010,-813,-56,-54,-55,-29,-2,-1269,-2286,-25,-102,-2556,-3193,-2422,-1892,-2832,60,-3435,-3126,-3688,-4342,-4931,-3473,-81,-43,-38,-18,-28,-1725,667,-78,-590,-3338,-3613,-2637,68,-3475,-1946,-4050,-4209,-5120,-5063,-5040,-4634,-113,-38,-34,28,11,-457,40,-2,-3628,-2368,-3359,-1690,-4280,-2619,-4794,-3654,-5280,-5381,-5216,-4713,-3697,-34,-25,0,15,27,992,-3627,-4748,-4197,-5523,-1063,-1849,-1626,-3804,-3380,-4176,-5037,-5643,-5412,-1888,-3635,32,-54,25,68,1318,2015,-1315,-549,-5119,-1203,-3131,-2865,-2344,-3652,-3609,-3101,-4038,-5432,-5242,-4687,-5327,-54,-63,11,726,2836,277,-1824,-362,-3574,57,-1464,-336,-1775,-2749,-2626,-2880,-3329,-4543,-5586,-5558,-3383,-230,1609,2400,81,7,-1952,-1791,-2030,1,-3682,-1530,-1684,-2047,-2126,-2701,-3440,-3601,-4291,-5238,-5234,-5676,759,513,60,195,-1833,-2154,-703,-2433,-1448,-1359,-1681,-2100,-2464,-4185,-4175,-3648,-3872,-4148,-5092,-5255,-5217,442,437,88,182,-2159,-2212,-850,-2417,-1771,-1863,-1714,-2071,-2513,-4166,-4190,-3625,-3881,-4142,-5068,-5136,-5251],
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

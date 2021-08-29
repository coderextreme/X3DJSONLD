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
    GeoViewpoint(description='GeoViewpoint_3_46',geoSystem=['GDC'],position=(11.208336350785146,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(11.208336350785146,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world8-12.x3d'],child2Url=['../../tiles/4/world8-13.x3d'],child3Url=['../../tiles/4/world9-12.x3d'],child4Url=['../../tiles/4/world9-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world4-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-3206,-4799,-4785,-4809,-4994,-796,36,5,4,-33,16,6,-10,-345,-4,-3429,-4758,-1026,11,19,442,-3371,-4756,-4715,-4780,-3185,-9,49,23,-28,-19,58,40,-20,-1670,354,-11,217,-2232,128,20,-37,-2482,-4607,-4552,-4466,-627,882,22,-21,-44,3,233,90,436,-2501,-1,348,-2240,339,-132,402,-1381,-3190,-4527,-4457,-4695,-27,205,9,-35,-31,18,63,167,35,-2168,-208,-219,-2188,493,-228,-3912,-4067,-3069,-4363,-4332,-5239,-3,40,-20,-41,-31,40,605,529,312,-46,54,-1967,-2355,82,-3191,-3825,-4011,-2472,-4422,-4685,-2,1364,-9,66,-47,-81,-34,25,445,1060,-2813,-5314,-5446,-975,-1857,-4336,-4083,-4121,-3368,-4102,-1610,-785,94,-40,21,-67,-35,-76,-29,244,32,-2378,-4781,-4981,383,-2198,-4251,-3882,-4857,-3441,-3904,-1313,373,-54,197,147,-77,-95,-117,-75,7,226,0,-4335,-4894,-465,-2832,-4928,-2234,-4639,-3206,-3936,-869,-1162,-80,83,-4,-59,-69,-131,-219,-967,1156,-115,4,-4660,-630,-6875,-5490,-4608,-4393,-3286,-3645,-1764,-1051,-95,74,-53,-51,-59,-1381,-2031,-2847,-41,-1742,-990,-4056,-1127,-5699,-5475,-3571,-6006,-3565,-3891,-1947,-614,-2,-66,-68,-33,-52,-811,-1840,-608,-454,-1660,-4319,356,494,-5254,-5286,-4368,-1663,-3432,-2965,-3807,-461,168,-28,-48,2,-44,-1289,-1493,-1149,-1603,-1963,-3821,-339,68,-5926,-5970,-5123,-3531,-3337,-2316,-3458,-840,0,-76,-7,1,-18,-1421,-2291,-666,-1615,118,-1491,-23,37,-5878,-5959,-6106,-4043,-3247,-1823,-2249,-1695,0,-65,-26,3,97,-309,-4070,-267,-109,-471,-11,-4,-2,-5413,-5801,-5771,-5265,-3163,-2572,-1211,-2070,-3,-29,1446,79,830,-269,-4127,-4362,-3198,-1561,-150,-1,12,-5402,-5673,-5914,-4788,-2976,-3075,-1345,-1294,5,-9,16,31,151,-260,-2403,-4331,-4270,-3169,1640,-2,-7251,-5037,-5995,-5974,-2864,-2834,-2775,-505,-135,258,4,253,149,230,-342,-2166,-4320,-4344,-4100,113,-3,-6206,-5330,-5651,-6172,-3729,-2712,-2553,-123,-90,518,72,138,145,1220,-437,-1455,-1476,-4288,-3541,41,-3321,-4748,-5355,-5293,-4657,-3898,-2478,-2424,-682,4,670,332,164,149,4,-973,-347,-2432,-4092,-4169,941,-4473,-3408,-5530,-5753,-5906,-5169,-2240,-2234,-1390,34,1116,1093,177,313,-162,-107,-1613,-3496,-3894,-4049,818,-3114,-4231,-5091,-5396,-6032,-5671,-1989,-2038,-4,268,1514,201,591,371,-177,58,-571,-2354,-3641,-3854,-333,-4671,-4767,-4974,-5773,-6084,-5601,-1950,-2008,-5,169,1276,201,1205,41,-193,452,-441,-2042,-3309,-3877,-1164,-4715,-5188,-5073,-5658,-5891,-5970],
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

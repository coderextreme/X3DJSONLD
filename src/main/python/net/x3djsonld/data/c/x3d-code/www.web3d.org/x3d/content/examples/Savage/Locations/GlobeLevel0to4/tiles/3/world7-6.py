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
    GeoViewpoint(description='GeoViewpoint_3_76',geoSystem=['GDC'],position=(78.7083383624419,112.4583420504793,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(78.7083383624419,112.4583420504793,0.0),range=4495500.0,child1Url=['../../tiles/4/world14-12.x3d'],child2Url=['../../tiles/4/world14-13.x3d'],child3Url=['../../tiles/4/world15-12.x3d'],child4Url=['../../tiles/4/world15-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world7-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(67.45833802716578,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[140,266,418,707,380,322,366,308,321,343,379,269,197,245,321,289,250,278,64,227,148,113,354,381,247,286,542,303,201,264,344,448,296,198,94,141,176,149,100,81,132,210,379,311,350,516,525,511,492,375,450,371,415,342,217,186,157,164,56,550,443,1097,1282,438,477,401,567,643,378,459,429,574,598,670,357,373,219,229,143,202,375,1178,814,995,221,415,557,645,780,340,481,456,395,587,505,407,305,278,213,81,249,1490,792,480,434,344,90,923,790,853,525,289,410,413,448,242,367,105,279,255,122,375,664,856,496,195,118,237,994,581,1236,370,240,250,245,323,325,284,150,256,171,101,253,580,1029,543,77,748,1139,480,805,725,356,178,498,641,527,143,93,82,160,247,72,90,253,704,95,469,91,44,20,27,41,80,454,555,510,515,163,159,175,171,77,394,146,319,234,68,68,53,51,136,42,42,106,22,173,349,131,68,105,98,40,88,104,195,192,-39,-14,-32,88,104,115,42,69,154,58,67,1,29,12,15,55,4,-10,-4,3,1,-12,-14,-15,158,304,282,50,12,152,118,206,58,35,-5,-28,-10,-14,-11,-10,-16,-31,-14,-10,-8,79,316,376,111,121,212,252,37,286,625,200,-35,-19,-24,-38,-43,-34,-36,-42,-12,-26,-42,-28,-51,-26,-18,35,2,224,228,249,14,-30,-50,-46,-69,-69,-49,-48,-53,-44,-26,-17,-31,-72,-103,-89,-106,72,201,-25,-72,-57,-62,-68,-343,-516,-1229,-1369,-229,-77,-64,-52,-66,-47,-30,-104,-25,227,466,180,-55,-94,-194,-785,-1825,-2241,-2612,-2707,-2632,-2618,-2480,-1851,-1409,-124,-45,45,148,927,-179,-213,-390,-472,-1762,-2802,-3035,-3049,-3154,-3203,-3230,-3233,-3299,-3291,-3249,-3176,-190,-57,534,432,-27,-184,-834,-2334,-2779,-3201,-3400,-3416,-3425,-3416,-3398,-3617,-3665,-3792,-3798,-3799,-3537,-103,-143,-140,-1140,-1815,-2510,-2854,-3259,-3403,-3435,-3501,-3550,-3474,-4125,-3622,-3669,-3964,-3996,-4008,-3944,-3801,-2826,-3111,-3224,-3293,-3200,-3365,-3409,-3582,-3597,-3601,-3500,-3437,-4030,-4012,-3802,-3811,-4070,-4097,-4124,-4099,-4049,-3584,-3581,-3602,-3618,-3616,-3638,-3664,-3076,-3579,-3492,-3990,-4184,-3928,-3459,-3657,-4316,-4279,-4221,-4164,-4129,-4102,-3582,-3578,-3605,-3623,-3619,-3644,-3675,-2491,-3427,-3869,-4228,-4154,-3885,-3708,-3901,-4336,-4285,-4215,-4151,-4181,-4120],
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

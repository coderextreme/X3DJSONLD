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
    GeoViewpoint(description='GeoViewpoint_2_13',geoSystem=['GDC'],position=(-22.541664655043235,134.95834272103156,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-22.541664655043235,134.95834272103156,0.0),range=8991000.0,child1Url=['../../tiles/3/world2-6.x3d'],child2Url=['../../tiles/3/world2-7.x3d'],child3Url=['../../tiles/3/world3-6.x3d'],child4Url=['../../tiles/3/world3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-45.04166532559549,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-3534,-3273,-2880,-2714,-3457,-3948,-3787,-3971,-4159,-4117,-4049,-3607,-4824,-908,-4887,-4553,-4510,-2089,-1193,-1327,-1357,-3193,-3008,-3603,-3670,-3938,-4085,-4260,-4649,-4416,-4783,-4531,-4818,-4816,-4022,-4689,-4552,-4861,-3662,197,-1104,-2295,-2859,-3183,-3701,-4170,-4226,-4343,-4371,-4698,-4701,-5053,-4901,-4491,-4125,-102,-4650,-4687,-4901,-4058,-128,-1301,-1451,-3224,-3531,-3972,-4316,-4437,-4725,-4565,-4908,-5062,-4666,-5260,-4857,-143,76,-4910,-4371,-4758,-3565,-647,9,-2882,-3627,-3685,-4330,-4591,-4719,-4410,-5327,-4997,-5169,-5587,-5483,-2579,122,-57,-4567,-4958,-4837,-2404,-1071,71,-3183,-3984,-4297,-4705,-4764,-5153,-5488,-4222,-5121,-5312,-5163,-2990,-38,109,950,-4862,-4464,-3168,-1372,-2030,-123,-2498,-3862,-4418,-4521,-5338,-5130,-2648,243,58,-428,-1196,-35,195,80,318,-4977,-4673,-1598,-2763,-1724,-2800,-2415,-3464,-3757,-2350,-5082,-5485,-5089,222,397,146,75,143,172,80,216,10,-3303,-1435,-2360,-4167,-3651,-1801,-3649,-2870,-2005,-4434,-5098,-4962,373,433,223,239,194,21,133,151,346,-4541,-1448,-3266,-2940,-4243,-2284,-4697,-4507,-3817,-4821,-5211,-747,358,524,480,561,206,25,279,348,123,-3412,-1380,-3589,-4019,-4532,-3144,-4887,-5119,-5494,-5394,-3662,-444,394,548,450,486,303,77,193,323,-3,-2639,-1166,-3386,-3859,-4509,-2161,-4936,-5264,-5501,-5936,-3657,-4108,444,402,369,541,532,208,278,235,-95,-2220,-1548,-799,-3555,-4811,-3452,-4236,-5107,-6041,-5819,-5193,-1186,-46,142,228,339,369,356,441,35,-463,-2471,-3533,-1863,-2909,-3361,-3175,-4894,-5629,-6116,-5790,-5588,-4729,-1476,-115,121,345,216,17,282,-1062,-1928,-3134,-3633,-4417,-2811,-2217,-2596,-5243,-5756,-5536,-6160,-5735,-3716,-5754,-45,513,36,166,-96,208,-1064,-4273,-2982,-4574,-3719,-3545,-2989,-2126,-5270,-5887,-5731,-4632,-5399,-4795,-5646,-2178,-22,6,111,-103,-3,-4336,-4618,-2715,-3059,-5520,-3298,-2487,-4132,-5399,-4981,-5202,-5364,-5338,-4307,-5320,-2114,-36,-20,-46,-73,-3,-2036,136,-2014,-4789,-1414,-2925,-2637,-3015,-5253,-4771,-5283,-5460,-2454,-1174,9,-28,956,-1065,-96,-40,-55,524,-311,-3700,-2979,-3780,-5004,-4954,-4447,-3170,-5114,-5398,-2202,554,-41,-605,-28,-4348,-5804,10,34,951,-3718,-4593,-3510,-2410,-3681,-5047,-5491,-4904,-4009,-4984,-4674,434,-28,-37,-84,-1128,-4448,-3011,-179,2473,24,-1847,429,-1360,-2185,-3269,-3558,-5207,-5873,-3944,-4932,-4590,1206,-27,-36,-87,-950,-4482,-3814,-133,2644,20,-1893,594,-1461,-2067,-3233,-3625,-5235,-5809],
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

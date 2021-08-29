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
    GeoViewpoint(description='GeoViewpoint_2_23',geoSystem=['GDC'],position=(22.458336686061273,134.95834272103156,7492500.2232939005),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(22.458336686061273,134.95834272103156,0.0),range=8991000.0,child1Url=['../../tiles/3/world4-6.x3d'],child2Url=['../../tiles/3/world4-7.x3d'],child3Url=['../../tiles/3/world5-6.x3d'],child4Url=['../../tiles/3/world5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/world2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.041663984490980965,89.95834137992705,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=4.5,zDimension=21,zSpacing=2.25,height=[-3944,-4932,-4590,1206,-27,-36,-87,-950,-4482,-3814,-133,2644,20,-1893,594,-1461,-2067,-3233,-3625,-5235,-5809,-4607,-4628,-2299,80,-34,60,-22,394,-387,-4,-3,-3,-1507,-1308,-4341,-1591,-2785,-4166,-4241,-4542,-5438,-3892,-4434,1,7,-35,106,5,-404,-2449,-96,-2303,-3327,-3528,-4146,-4354,-2104,-4014,-4385,-4434,-4954,-5198,-2785,-4805,1725,222,-83,53,135,-5435,-1990,-3376,-4189,-4435,-4478,-4530,-3869,-2791,-3804,-4098,-4029,-5033,-5462,-3784,-1484,-57,22,-44,-111,481,-4558,-259,-4884,-4300,-4381,-3566,-3204,-4475,-3274,-3928,-4671,-4432,-5105,-5453,-3005,-1699,-80,-54,-51,-1916,52,-609,61,-5586,-5940,-3743,-2921,-3516,-257,-3887,-4888,-5093,-4335,-5845,-5430,-3181,-2936,329,-33,-54,-1218,-2317,-4091,1300,-5897,-2902,-3103,-4662,-922,-4930,-5135,-4801,-3880,-3433,-5335,-5764,-3166,-2205,65,12,815,-4207,-131,-240,-1557,-5869,-3467,-2796,-7575,-5762,-5877,-5851,-4003,-2959,-4689,-5419,-5696,-2894,-618,738,13,285,-1716,-4270,193,-6057,-5938,-3384,-4789,-3484,-5289,-5985,-6462,-5201,-5121,-5624,-3578,-5971,-2559,-8,775,160,628,-729,-2530,896,-3927,-4956,-4189,-4359,-3383,-4193,-5863,-6007,-5437,-5201,-5478,-4751,-5434,-2179,-13,912,172,-83,-2240,-3977,731,-5354,-5852,-5530,-4694,-4136,-6316,-5368,-5704,-5213,-4696,-2178,-3855,-2861,-146,158,1086,1300,-72,-82,-497,-3676,-5581,-5728,-5813,-4389,-3747,-2119,-5874,-5339,-5237,-5470,-5547,-3867,-4192,10,1056,1620,934,206,33,-29,-1112,-5164,-5514,-3253,-4531,-3795,-5668,-5373,-5475,-5234,-5353,-5768,-2507,-5230,17,1166,2408,1942,890,176,634,172,-383,-4580,-5126,-4818,-4570,-3239,-4359,-5736,-4473,-5886,-5928,-5839,-5709,2616,89,3478,1706,975,105,187,-84,-158,-5119,-4679,-3838,-6499,-5682,-6149,-6005,-5934,-6021,-6013,-5757,-5367,5443,4281,4182,1674,1303,31,53,598,-108,-474,-4682,-2933,-5633,-6195,-5450,-5624,-5952,-5865,-5598,-5414,-5262,4647,4381,4269,2737,1019,65,58,-1,-58,-13,-4281,-1290,-6036,-5889,-4778,-3855,-5889,-6269,-5648,-5351,-5426,5109,4728,4534,3571,2880,949,32,-29,-81,-50,-4,-1216,-4785,-5967,-6081,-5044,-5448,-5980,-5719,-3370,-2229,4769,3539,4525,1618,1190,862,123,-34,-55,-1582,-397,75,-4774,-5785,-5670,-4845,-4781,-5408,-5019,-5048,-4763,3468,2999,3988,1394,1391,1620,8,-10,9,-2070,-2986,-84,-5410,-5682,-5735,-5493,-4365,-5282,-4816,-4333,-5471,3206,3283,4521,1368,1392,1821,7,-10,43,-2474,-2969,-46,-5490,-5704,-5674,-5690,-4480,-5380,-5728,-4400,-5500],
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

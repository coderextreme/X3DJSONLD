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
    GeoViewpoint(description='GeoViewpoint_3_67',geoSystem=['GDC'],position=(56.20833769188965,157.4583433915838,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(56.20833769188965,157.4583433915838,0.0),range=4495500.0,child1Url=['../../tiles/4/world12-14.x3d'],child2Url=['../../tiles/4/world12-15.x3d'],child3Url=['../../tiles/4/world13-14.x3d'],child4Url=['../../tiles/4/world13-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world6-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(44.95833735661353,134.95834272103156,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-2852,-3118,-3129,205,-1834,-5425,-5322,-5409,-5631,-5572,-5550,-5530,-5545,-4737,-5541,-5617,-1541,-4392,-5332,-5721,-5183,-3455,-3474,-1763,-285,-464,-6318,-5175,-5299,-5413,-5505,-5531,-5638,-5665,-5146,-5391,-5513,-3287,-5334,-5600,-5625,-5343,-1309,-3609,-3650,528,113,-2313,-7914,-4875,-5153,-5195,-5427,-5523,-5490,-5157,-4935,-4841,-4312,-5153,-5439,-5614,-5497,1211,-3079,-3391,-325,413,-141,-2598,-7023,-4991,-5229,-5431,-5561,-5730,-5733,-5692,-5476,-4152,-4771,-5863,-5641,-5608,486,-3,-1611,-93,-190,-2797,-430,-3950,-7550,-5019,-5017,-5184,-5714,-5836,-5860,-5705,-3558,-5785,-5411,-5599,-5641,148,813,-1797,-232,-3,-3254,-2884,-26,-3409,-5160,-4927,-5178,-5702,-5597,-5696,-6048,-5665,-5458,-5733,-5641,-5713,335,599,-312,-997,-255,-3247,-3379,-3035,-658,-5900,-4787,-5097,-5554,-5737,-5812,-6344,-6353,-5559,-5552,-5665,-5572,58,426,489,-598,-280,-1273,-2071,-3240,-3201,-194,-5839,-5501,-5518,-5840,-5867,-6040,-6419,-5846,-5277,-5160,-5424,88,46,490,-545,-138,-581,-1161,-1217,-1678,-236,-5421,-5651,-5607,-5608,-5477,-2663,-5146,-5569,-5140,-5397,-5313,1404,53,559,-723,310,-515,-1201,-1176,-1343,-1027,-632,-6594,-5305,-5436,-5418,-2594,-4862,-5481,-4718,-5031,-6771,877,113,6,-177,2,-917,-1353,-1265,-970,-522,823,-2855,-5434,-5226,-4965,-3551,-4581,-5643,-4356,-3629,-78,1594,70,107,-21,-70,-1417,-1194,-1069,-677,-315,77,-2628,-5427,-5183,-3354,-4503,-6417,-2066,-880,-3858,-1363,1485,29,221,-16,-93,-1700,-1468,-1047,-451,-91,791,427,-3806,-3546,-4279,-5327,-2193,-3815,-3917,-3938,-2860,72,112,-84,-426,-725,-1314,-779,-526,-334,-301,743,528,296,-5900,-5423,-631,-3130,-3887,-3886,-1989,-1020,1081,232,-261,-220,-584,-161,-295,-263,-392,-280,249,134,559,-3146,-3421,-4076,-2499,-3847,-3848,-3852,-3821,569,874,-178,-213,-62,-104,-171,-162,-523,-343,58,655,528,-2486,-3603,-3851,-1764,-3746,-3806,-3837,-3796,400,337,922,-81,-4,-3,-74,-168,-229,-401,-31,208,68,-1134,-3580,-3747,-1037,-3553,-3704,-3779,-3781,448,685,883,184,-233,-53,-55,-3,-56,-107,-211,-200,728,-10,-4138,-3559,-833,-3297,-3592,-3680,-3652,382,783,855,645,546,187,80,237,669,-63,-237,-220,4,-4,-23,-832,268,-3000,-3505,-3493,-2513,260,803,855,1164,1150,542,1279,1097,1009,992,-131,-228,-11,325,213,147,142,-120,-845,-2566,-224,172,377,1456,1924,1769,913,570,870,651,754,902,340,441,-272,394,313,806,552,278,-49,-4,148,311,1064,1921,1759,1086,639,504,503,715,877,374,281,-184,392,340,1261,394,32,-128,-4],
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

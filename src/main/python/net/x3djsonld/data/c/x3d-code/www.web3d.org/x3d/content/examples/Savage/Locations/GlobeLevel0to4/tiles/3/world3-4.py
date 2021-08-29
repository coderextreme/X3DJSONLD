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
    GeoViewpoint(description='GeoViewpoint_3_34',geoSystem=['GDC'],position=(-11.291664319767108,22.458339368270288,3746250.1116469502),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.0,0.0,-6378137.0),geoSystem=['GDC'])),
    GeoLOD(center=(-11.291664319767108,22.458339368270288,0.0),range=4495500.0,child1Url=['../../tiles/4/world6-8.x3d'],child2Url=['../../tiles/4/world6-9.x3d'],child3Url=['../../tiles/4/world7-8.x3d'],child4Url=['../../tiles/4/world7-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/world3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-22.541664655043235,-0.04166130228196607,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=2.25,zDimension=22,zSpacing=1.0714287,height=[-5366,-5148,-4886,-891,-4710,-4173,-1204,657,1117,1082,1072,1159,1007,1042,519,15,-1044,-3193,-3614,-3716,248,-5651,-5235,-3907,-2404,-4814,-3808,-392,691,1271,1247,1151,1080,944,1056,318,55,-120,-2434,-3201,-3251,154,-5598,-5416,-4837,-2440,-4479,-3567,-282,859,1633,1268,1080,1000,1020,688,415,106,-216,-3286,-3185,-2885,539,-5374,-5507,-4771,-3373,-4174,-3022,-145,1104,1545,1338,1118,944,1084,758,449,143,-309,-3096,-3165,-2581,286,-5001,-5480,-5348,-4586,-1977,-1510,-60,919,1314,1186,944,927,998,1125,709,184,-62,-2519,-2846,-2275,58,-4622,-5598,-5364,-5265,-4999,-1256,286,1240,1444,1213,967,963,1016,1248,1341,602,-3,-1862,-2627,-2163,42,-5538,-5489,-5418,-5495,-5053,-2754,1041,1098,1147,1134,1017,983,744,1307,1455,507,42,-1508,-2537,-2076,397,-5062,-5493,-5575,-5375,-4772,-2395,974,1120,1172,1152,1012,1050,1256,698,1342,614,342,50,-1732,-2125,96,-5271,-5507,-5478,-5299,-4715,-2783,1296,1165,1129,1214,1035,1059,1046,416,347,150,622,299,-3,-2678,-147,-5122,-5410,-5517,-5245,-4584,-3110,882,1254,1379,1227,1035,1114,1149,1048,869,843,626,674,84,-3124,-3414,-5327,-5530,-5525,-5282,-4565,-3453,688,1467,1469,1238,1066,1142,1226,1208,888,1200,850,472,182,-3216,-3523,-5461,-5628,-5533,-5318,-4619,-3659,233,1811,1384,1376,1091,1230,1255,1284,1439,1029,1361,453,125,-3377,-3277,-5372,-5595,-5543,-5285,-4707,-3715,-1117,1310,1265,1350,1077,1341,1376,1222,1329,1208,746,328,32,-3178,-3313,-5458,-5624,-5541,-5230,-4726,-3633,-459,1312,1106,1283,1097,1253,1128,1166,1233,1185,1182,428,16,-2794,-3431,-4064,-5643,-5483,-5073,-4691,-2922,-49,889,816,1097,1076,991,1140,1011,1467,1151,984,467,-1651,-3143,-3834,-4763,-5460,-5360,-4944,-4514,-2921,-80,1392,731,1050,1032,1107,568,921,1156,1395,1501,525,-1676,-3584,-4103,-4794,-5429,-5291,-4766,-4188,-2134,124,1184,740,744,884,970,819,1424,1735,1337,1086,112,-1114,-3623,-4214,-4164,-5395,-5216,-4609,-3905,-1564,166,842,882,621,674,773,620,1117,1153,1232,1077,353,-1545,-3587,-4247,-3547,-4795,-3048,-4610,-3784,-1670,367,580,481,545,538,566,700,1264,1058,1176,1131,785,-1444,-3603,-4398,-5058,-4660,-4916,-4570,-3777,-95,178,270,421,340,494,592,535,929,1159,1250,1429,1302,-772,-3476,-4518,-4384,-3956,-4608,-4273,-1964,322,430,401,352,373,480,577,537,2866,1240,1236,2374,820,-2,-3353,-4138,-4342,-4253,-4480,-4338,-1921,149,450,499,336,377,523,567,562,2183,1339,1237,2846,735,3,-3313,-4112],
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

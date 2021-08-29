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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small4-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[537,718,773,898,1225,935,329,508,621,462,287,28,-6,-1,0,-1,-2,-1,3,0,-4,-3,455,505,557,890,983,963,893,579,395,320,201,10,-10,0,-2,3,0,1,2,-9,7,-2,346,272,569,620,700,889,884,819,336,95,9,26,0,-7,1,-2,1,1,4,0,0,-3,369,314,512,531,381,545,867,847,98,9,0,-14,0,1,0,2,3,0,-6,-15,-1,-9,593,255,333,346,174,269,575,125,40,0,0,-3,-5,4,0,-1,0,-1,0,-8,-1,0,1103,727,241,302,382,144,126,170,204,0,-4,1,0,1,12,8,0,0,-4,5,4,-4,1136,716,503,300,317,147,123,198,204,189,-24,7,-1,-8,7,13,3,0,0,3,-6,13,1101,383,464,482,352,456,122,93,193,122,12,-4,4,122,50,159,10,1,0,0,-2,1,1102,734,774,629,473,548,101,91,115,12,14,209,136,105,28,23,42,1,7,-3,0,0,1107,998,1094,826,686,577,104,73,251,119,228,50,6,6,0,6,58,41,-3,3,0,0,1145,1103,1046,1086,517,304,101,74,61,53,97,18,8,2,8,-5,8,1,9,4,4,1,1155,1216,1077,1118,1177,394,156,256,225,61,33,20,11,1,13,0,0,-18,4,0,0,0,1214,1208,1178,1196,1136,440,417,458,487,96,29,64,132,96,10,-1,0,-4,0,-2,-2,0,1222,1230,1237,1214,746,444,725,380,368,79,45,170,83,117,2,0,1,-2,-3,0,0,-5,1237,1248,1302,1256,803,524,818,887,81,99,84,20,22,-3,11,-5,-1,0,-3,-3,0,0,1247,1347,1340,1381,991,758,1069,734,280,403,34,11,18,7,-7,0,2,0,-4,0,2,0,1153,1364,1283,1366,1259,1281,1154,806,665,706,366,24,-24,-23,0,-1,0,1,-3,-1,0,0,1158,1044,1304,1455,1254,1303,1116,933,739,765,704,679,-7,-1,-4,-1,-1,-1,-4,0,3,0,941,1101,1338,1378,1290,1350,984,733,748,748,696,701,41,9,54,7,0,3,-2,6,-1,0,1100,1187,1386,1366,1253,1345,945,807,649,655,605,675,551,104,27,2,0,-4,-3,-3,-1,-4,871,1269,1259,1344,1293,1292,986,719,540,482,641,639,582,56,18,6,1,0,0,0,-4,0,1084,902,1152,1093,1127,1315,589,424,263,352,526,602,514,517,-1,0,0,5,0,-1,-1,0,1083,896,1136,1071,1087,1307,591,413,233,276,536,597,520,517,-1,0,2,6,1,-2,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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

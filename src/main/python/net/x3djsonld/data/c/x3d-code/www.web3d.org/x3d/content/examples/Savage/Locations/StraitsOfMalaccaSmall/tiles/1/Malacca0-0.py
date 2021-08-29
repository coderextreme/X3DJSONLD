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
    GeoViewpoint(description='GeoViewpoint_1_00',geoSystem=['GDC'],position=(1.7987358796286328,100.45856257932074,326589.76551218075),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.7987358796286328,100.45856257932074,0.0),range=391907.72,child1Url=['../../tiles/2/Malacca0-0.x3d'],child2Url=['../../tiles/2/Malacca0-1.x3d'],child3Url=['../../tiles/2/Malacca1-0.x3d'],child4Url=['../../tiles/2/Malacca1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.16700001,zDimension=22,zSpacing=0.12116667,height=[0,0,28,44,317,1256,1160,1064,811,123,107,128,43,77,27,31,17,35,45,28,30,0,0,26,267,623,941,673,971,378,242,150,70,58,40,28,11,36,5,24,16,24,0,0,34,1251,1343,919,1304,762,1121,195,66,60,39,22,15,44,60,10,19,9,14,7,4,155,489,879,1169,714,262,93,63,61,58,50,53,24,37,20,20,32,30,21,4,28,215,150,166,908,197,101,93,55,33,48,37,50,37,6,15,58,32,34,11,1,222,36,574,1121,517,146,138,90,63,36,20,34,42,20,30,26,35,37,35,9,5,443,36,604,307,281,143,129,103,49,31,34,42,34,39,23,34,37,35,25,18,5,20,474,381,382,69,47,86,142,54,20,14,17,19,12,19,13,42,34,9,2,45,233,420,1001,252,137,57,34,94,74,28,20,20,14,21,12,21,8,36,4,25,4,639,797,869,1084,609,65,31,74,75,48,35,10,22,23,26,5,0,0,3,4,390,834,692,1107,934,562,116,73,46,44,18,25,13,7,29,9,8,30,5,3,3,553,1006,1310,1075,528,726,189,47,9,14,7,27,21,22,31,8,32,26,3,3,1,810,952,1183,964,594,473,141,31,9,10,27,4,14,24,30,-1,26,3,4,5,4,1378,1183,1424,1267,739,325,41,13,7,20,28,-6,3,23,0,4,8,4,6,2,5,1153,1515,1010,1183,613,249,37,10,10,27,0,1,-3,1,2,50,1,5,4,4,67,988,909,905,1325,438,66,9,1,7,23,2,4,0,0,9,0,1,0,1,7,22,1356,905,1497,777,169,44,10,1,4,4,0,1,3,4,0,3,2,0,3,45,46,1540,1647,896,253,107,29,9,0,0,0,1,-2,1,2,-3,1,4,31,64,93,654,1229,886,441,160,81,40,10,0,1,1,0,1,0,-3,6,2,10,10,50,309,336,1068,726,304,143,52,18,4,9,0,0,0,2,-5,-12,-5,5,11,21,61,491,263,662,514,183,91,49,6,6,0,1,2,1,-3,-12,-2,1,1,14,20,79,902,280,707,534,183,94,46,8,7,0,0,2,1,0,0,-2,1,0,10,19,75,852,254],
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

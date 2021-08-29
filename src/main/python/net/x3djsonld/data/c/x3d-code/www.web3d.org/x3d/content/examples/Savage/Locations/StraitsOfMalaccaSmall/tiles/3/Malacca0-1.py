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
    GeoViewpoint(description='GeoViewpoint_3_01',geoSystem=['GDC'],position=(0.8445483343071585,100.04106255949056,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,100.04106255949056,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-2.x3d'],child2Url=['../../tiles/4/Malacca0-3.x3d'],child3Url=['../../tiles/4/Malacca1-2.x3d'],child4Url=['../../tiles/4/Malacca1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[1264,1445,1499,1261,1093,1551,1221,1131,1343,423,246,223,923,380,391,432,206,131,431,262,123,113,961,949,1276,771,1282,1651,960,848,723,427,275,416,623,264,1041,394,156,150,244,91,92,97,1155,1394,1393,678,997,1266,741,786,504,272,297,555,303,416,673,248,133,357,154,98,93,99,1413,1117,865,719,819,1020,970,597,473,408,256,574,359,576,293,128,416,210,103,126,219,152,894,786,668,504,568,861,987,1147,859,597,387,644,595,443,222,129,448,274,200,148,131,148,763,510,604,629,956,1459,1474,1742,932,589,579,1017,263,232,160,199,312,271,218,130,146,104,550,491,581,1191,1412,1594,1484,1039,1245,532,972,592,241,243,504,339,522,176,256,217,117,87,484,680,757,941,1207,1828,1427,874,417,1046,1255,431,286,840,806,750,443,198,172,138,82,84,618,743,794,1338,1425,1319,1147,800,1038,1058,728,335,912,760,420,248,156,204,269,80,79,68,383,691,1016,1416,1444,969,773,760,664,1189,433,330,697,613,194,374,208,142,85,76,66,59,705,925,1477,1403,1784,1584,981,767,305,494,425,340,448,300,245,79,95,79,68,67,60,65,592,1292,1620,1924,1361,1093,917,578,452,442,147,259,296,99,94,59,55,70,55,53,53,54,867,922,1517,1695,990,1151,731,425,286,181,266,134,100,86,77,79,75,83,68,50,63,72,1489,1622,1692,817,627,526,749,690,230,154,153,118,102,94,72,62,69,51,45,50,48,50,1361,1097,832,439,348,236,524,234,153,159,120,110,103,102,86,69,65,54,58,48,67,52,1228,1017,417,257,263,198,357,127,100,128,109,103,93,80,82,86,66,61,49,65,43,35,786,684,213,202,182,170,124,114,97,123,133,98,87,76,79,67,69,56,47,55,54,44,904,301,153,161,163,143,137,118,108,89,84,71,65,58,61,59,67,49,60,43,35,38,521,273,146,132,136,194,133,115,114,107,113,91,80,75,86,72,47,73,77,50,41,39,337,432,162,117,207,203,193,172,174,141,105,94,84,71,69,88,89,84,50,45,40,37,771,525,386,116,135,206,170,175,123,98,104,82,98,82,74,91,66,57,70,42,40,37,781,523,369,121,134,204,165,169,123,101,108,83,98,82,72,87,66,57,68,42,40,37],
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

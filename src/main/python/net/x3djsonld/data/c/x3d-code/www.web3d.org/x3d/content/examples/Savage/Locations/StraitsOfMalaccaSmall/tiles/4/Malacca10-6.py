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
        texture=ImageTexture(url=['../../images/4/Malacca10-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[14,20,10,24,49,33,50,234,221,51,62,54,49,86,272,461,1063,806,788,707,901,996,15,29,13,21,30,56,178,86,78,36,36,43,61,72,108,359,490,902,948,1031,1186,1115,18,35,12,20,21,53,91,41,111,37,56,67,85,121,142,273,750,874,1339,1177,1143,1271,19,22,18,26,42,43,76,115,32,47,89,99,57,108,305,358,504,1184,1618,1370,1116,1061,40,25,16,44,68,64,79,44,37,56,52,48,75,229,889,542,1022,939,1599,1197,973,989,30,30,17,34,33,52,53,54,64,50,112,46,79,444,961,1075,1014,1520,1286,1180,1074,726,23,27,15,19,39,38,130,60,52,64,75,68,143,433,1111,1253,987,1229,913,845,987,850,23,22,73,26,36,39,75,77,62,60,193,69,302,525,948,1296,1378,1158,1000,673,756,753,23,27,38,28,32,54,42,45,64,99,101,142,402,1004,1097,1718,1489,1037,983,761,550,615,39,65,40,68,58,28,25,44,64,88,59,202,509,767,1085,1451,1360,993,763,843,726,599,65,45,57,49,120,48,108,37,40,65,87,155,818,884,1371,1839,1539,949,939,861,1183,1064,39,181,78,48,69,50,73,70,37,54,57,273,640,1249,1251,1315,1429,953,1069,1341,1201,1131,51,241,64,68,57,52,310,81,41,86,119,245,463,697,842,1458,1287,1226,1356,1389,1270,1038,46,250,144,48,67,82,117,161,58,81,153,143,304,487,785,1124,1224,1156,1438,1114,1137,1057,40,165,328,55,48,95,73,76,63,104,196,161,347,815,968,1148,958,868,1251,934,1045,1049,128,70,88,66,66,48,91,130,112,178,225,104,422,644,1054,1432,1029,811,1067,747,947,1003,42,55,75,85,98,70,68,126,225,573,421,65,293,721,878,1053,1035,765,629,588,655,753,32,48,68,83,51,93,96,91,477,908,545,146,196,885,1047,895,1004,717,366,764,712,534,32,47,37,68,55,108,155,269,616,673,320,183,572,523,827,886,856,464,336,489,940,660,58,41,72,76,78,106,140,561,782,767,364,239,666,978,933,726,492,425,226,556,753,520,42,39,54,68,84,85,299,539,786,735,508,268,827,1053,1254,1100,789,306,229,454,429,568,42,51,51,85,66,75,256,694,708,1014,768,373,692,1137,1355,1214,1025,663,369,305,241,289,42,52,55,79,71,80,248,652,742,970,772,380,679,1142,1327,1221,1027,700,330,293,238,281],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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

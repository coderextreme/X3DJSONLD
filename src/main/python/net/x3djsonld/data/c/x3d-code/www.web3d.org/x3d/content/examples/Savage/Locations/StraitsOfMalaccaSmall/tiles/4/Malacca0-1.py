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
        texture=ImageTexture(url=['../../images/4/Malacca0-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[21,37,61,75,63,41,66,65,146,103,119,184,228,317,553,571,785,425,763,1089,1235,1278,24,35,51,49,42,26,72,46,89,93,150,245,320,523,515,721,580,707,585,594,1090,1307,30,34,26,51,96,51,87,86,108,136,215,242,466,492,468,771,750,858,667,929,722,874,43,14,21,40,92,135,55,97,190,238,219,202,531,459,681,595,975,909,836,1074,1338,765,10,15,94,49,92,97,113,213,166,348,373,418,381,385,685,781,1261,799,1371,1369,1348,1044,10,23,107,132,91,104,119,260,238,382,640,585,517,451,715,730,1057,876,1487,1408,1354,1422,10,53,89,123,81,105,166,264,340,519,975,929,658,656,1101,954,1054,1114,1539,1614,1323,1466,67,124,132,62,86,107,183,182,264,535,1079,1171,692,755,903,1071,1254,1313,1536,1243,1136,884,98,96,91,115,208,93,231,316,264,484,879,802,479,665,791,1090,1456,1726,1674,1489,1018,906,60,107,182,170,225,179,268,379,357,447,485,511,468,586,771,1381,1494,1915,1523,1229,1174,962,64,177,176,189,191,210,136,135,272,198,260,479,601,608,1088,1271,1650,2033,1380,1104,1099,822,83,84,166,239,182,130,249,132,180,291,583,763,1031,1098,877,1215,1612,1721,1253,964,887,649,171,320,205,198,302,195,248,279,344,257,490,549,865,1024,1123,1164,1323,1251,1049,861,834,626,270,270,357,534,533,333,282,447,633,420,431,601,664,946,1118,1397,1104,891,771,754,642,533,161,304,562,1154,781,527,474,835,1181,575,599,478,582,792,1076,1358,1111,631,632,599,563,508,127,579,1109,1379,1258,682,805,1129,1049,804,959,821,728,962,1102,1198,925,538,453,500,514,431,288,819,1493,1566,1313,1114,954,1023,906,951,1156,992,940,1136,1103,912,626,457,377,383,399,488,189,325,817,1208,1236,1177,1148,1002,705,904,1062,1278,1321,1256,1058,879,480,390,320,347,532,935,148,603,887,1048,1001,1260,1499,1160,668,943,1217,1239,1354,1036,1019,622,431,320,295,270,769,622,233,603,1133,1205,725,1054,1277,979,845,1019,1145,1508,1351,883,678,576,256,237,223,291,315,360,642,663,692,1189,755,1047,1087,680,719,965,1444,1546,1463,1160,668,331,225,208,227,269,274,440,592,461,465,985,832,795,732,532,833,1206,1394,1320,1037,919,619,301,217,205,225,246,503,514,581,437,471,968,839,766,710,532,883,1182,1393,1270,993,910,582,297,216,205,226,248,542,495],
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

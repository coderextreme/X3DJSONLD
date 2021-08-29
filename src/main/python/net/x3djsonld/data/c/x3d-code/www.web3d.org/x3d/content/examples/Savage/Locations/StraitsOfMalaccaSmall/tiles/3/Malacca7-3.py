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
    GeoViewpoint(description='GeoViewpoint_3_73',geoSystem=['GDC'],position=(5.297423545807372,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.297423545807372,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca14-6.x3d'],child2Url=['../../tiles/4/Malacca14-7.x3d'],child3Url=['../../tiles/4/Malacca15-6.x3d'],child4Url=['../../tiles/4/Malacca15-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[595,648,1095,882,1183,1539,1316,1089,370,324,190,256,190,215,176,133,113,137,298,777,164,201,479,853,703,1160,1520,1459,1278,795,292,407,414,245,187,173,177,151,151,155,148,167,181,152,265,763,704,1030,1567,982,644,1002,423,552,491,297,142,359,504,126,139,136,109,166,183,156,600,1114,1378,1338,1210,936,782,553,394,312,435,364,157,393,652,502,108,117,191,150,146,162,791,1199,1129,1491,1802,1059,497,345,351,226,279,450,180,363,791,313,115,169,157,95,127,145,547,938,1060,1542,1489,676,1148,691,243,210,184,301,198,343,327,178,214,160,103,77,161,105,803,1019,1092,1815,1173,1189,756,472,540,365,534,355,200,367,203,126,320,141,160,67,180,95,573,993,1097,1339,1202,1503,1068,707,382,370,463,361,116,159,157,226,337,127,124,88,76,106,910,1118,1112,875,1071,1599,1604,923,612,279,341,248,232,220,210,429,794,161,107,171,97,111,1314,1133,942,793,1424,1670,1203,1088,665,426,387,155,342,195,301,525,328,250,106,121,136,90,1537,956,462,472,1063,1700,1445,1559,829,325,706,242,457,309,321,428,237,718,90,88,70,85,897,721,448,481,1231,1232,1749,1869,818,291,622,226,330,339,768,1027,585,667,83,164,131,191,655,1091,366,893,687,1546,1518,1750,1356,271,947,453,544,856,1533,992,331,474,55,166,115,154,473,740,311,551,972,1341,1528,1669,916,600,589,583,867,1357,1251,1081,637,49,78,132,157,141,508,399,248,545,874,1196,1190,1446,1060,906,818,884,747,1216,1591,1423,269,56,128,172,149,167,231,497,270,410,852,728,1046,1166,1107,1556,1276,1199,985,860,497,1204,1051,48,94,401,172,122,343,244,518,348,670,660,601,1149,1154,1304,1140,1584,1356,877,257,940,504,124,83,64,216,192,190,248,420,362,409,520,913,1125,1001,1088,1138,1732,871,721,221,210,80,43,334,78,237,213,278,241,326,316,342,715,1282,948,882,1353,1112,1273,798,967,454,78,52,83,182,120,201,185,358,244,281,268,785,905,1240,921,868,1038,996,1481,1083,789,160,55,156,219,220,101,202,162,463,432,336,276,562,842,710,528,673,1030,1120,1365,943,634,240,125,76,204,160,252,276,150,484,446,356,270,596,791,710,526,698,1056,1150,1376,951,614,235,148,71,176,159,259,254,174],
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

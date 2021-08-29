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
    GeoViewpoint(description='GeoViewpoint_3_63',geoSystem=['GDC'],position=(4.661298515593056,101.7110626388113,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.661298515593056,101.7110626388113,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca12-6.x3d'],child2Url=['../../tiles/4/Malacca12-7.x3d'],child3Url=['../../tiles/4/Malacca13-6.x3d'],child4Url=['../../tiles/4/Malacca13-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.343236000485898,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[283,448,591,1152,1523,878,501,848,672,189,114,252,110,100,80,111,81,93,107,89,109,93,796,360,771,892,1215,778,527,562,292,191,272,163,137,97,114,134,191,108,125,87,107,126,971,342,998,1144,1840,1493,867,646,191,170,207,182,200,119,154,127,212,160,116,107,124,135,1219,719,865,1335,1519,1243,1393,920,650,263,304,221,123,105,489,137,158,162,130,120,119,124,575,675,745,968,1366,1250,1484,702,498,230,220,261,170,138,147,171,129,439,242,150,147,146,978,1055,1188,1106,956,649,1274,856,281,537,186,239,171,153,192,157,139,247,295,201,177,139,1013,1462,1282,1699,1086,750,867,562,335,240,223,192,161,186,166,122,121,141,585,144,155,167,499,1105,1454,1622,1187,1320,1164,518,269,282,253,244,170,184,153,153,136,116,273,182,213,185,1065,847,1520,1642,1486,1344,785,434,664,923,514,304,191,143,202,266,130,127,144,202,238,182,1022,1304,1858,1587,1121,1076,891,850,891,1091,481,208,182,198,234,331,320,146,149,176,221,224,588,879,1462,1304,1484,1653,1475,1218,959,859,503,246,194,191,310,279,481,149,165,196,289,281,838,1078,1497,1419,1507,1267,1716,1174,488,899,534,314,206,300,272,593,295,150,172,190,219,225,900,925,1758,1348,974,1410,1380,896,619,470,464,381,215,158,321,608,503,143,195,219,178,212,829,1127,1611,1348,1043,755,914,471,322,320,333,361,205,223,212,389,573,214,174,207,210,235,1611,1797,1118,1116,819,665,574,366,288,393,310,261,234,250,223,403,781,169,195,186,340,636,1236,1477,1527,1215,1111,644,512,389,425,304,416,222,254,336,337,467,639,296,214,321,672,764,1339,1446,1582,1294,1005,570,780,556,390,374,414,222,336,299,259,175,520,245,205,373,945,791,991,1532,1368,981,592,1284,1471,827,414,424,373,305,298,254,277,234,197,211,231,720,908,1190,1230,937,962,1241,1087,1320,1115,556,447,311,379,269,286,227,298,261,121,380,239,524,885,1003,965,635,1058,1516,1132,1245,1465,997,415,300,344,258,176,255,194,927,103,115,259,1014,528,389,614,623,1112,893,1152,1516,1270,1055,344,331,191,254,190,210,174,135,127,145,289,796,172,188,595,648,1095,882,1183,1539,1316,1089,370,324,190,256,190,215,176,133,113,137,298,777,164,201],
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

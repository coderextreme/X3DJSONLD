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
        texture=ImageTexture(url=['../../images/4/Malacca11-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[42,52,55,79,71,80,248,652,742,970,772,380,679,1142,1327,1221,1027,700,330,293,238,281,33,47,71,56,65,162,173,475,737,948,709,627,988,1118,1194,1087,1014,635,256,223,164,222,43,53,53,96,79,247,180,667,791,966,985,860,645,986,1143,816,736,531,272,300,251,240,34,48,53,105,191,757,450,463,511,583,1039,871,844,953,1145,1037,880,727,426,326,189,388,34,53,91,113,309,900,731,227,519,637,1048,846,879,808,1082,986,808,768,433,261,253,363,50,63,73,84,358,692,653,329,552,731,931,973,931,828,1153,1183,1205,958,500,384,258,469,50,80,61,168,257,601,936,690,427,966,1103,1141,962,1011,1389,1232,885,1001,467,274,250,262,37,64,80,240,400,1028,1045,713,511,1015,820,1287,984,1172,1386,1244,880,915,434,370,243,226,44,55,92,198,482,961,1054,949,832,768,930,1178,1117,1025,1373,870,878,553,345,285,229,180,52,69,69,144,483,598,1134,1221,939,840,1153,1393,1036,949,959,1045,853,801,233,305,206,166,87,63,64,254,545,667,733,1368,1084,783,1278,1215,918,787,948,927,722,698,187,284,200,190,89,85,241,303,307,480,631,1065,1276,843,1138,1142,939,893,654,496,333,306,205,176,178,279,96,89,327,279,326,587,815,1248,1334,1236,1055,1251,1293,970,855,758,433,501,191,223,188,273,57,85,326,567,582,580,790,1332,1463,1482,1054,1499,1232,991,1014,546,763,701,191,205,149,168,78,83,129,215,333,502,1083,1471,1644,1655,1196,1414,1104,987,902,735,756,370,211,153,189,261,141,321,81,334,643,578,1097,1336,1994,1325,1137,1060,1087,696,1010,1156,985,590,241,194,144,132,337,204,185,430,746,562,1047,1650,1617,1554,1086,825,691,584,1096,1307,875,643,240,222,201,154,524,427,249,306,621,935,823,1169,1421,1817,1159,840,614,433,773,962,951,483,162,176,135,153,747,417,205,339,732,1118,747,1056,1568,1211,989,736,812,550,400,739,737,553,188,180,165,166,765,722,283,592,784,1128,943,1146,1434,988,891,743,596,552,313,696,275,331,314,193,210,212,672,764,368,772,1063,1130,1028,1416,1662,1301,1194,1007,1042,751,352,305,406,185,300,147,223,221,849,779,445,667,1025,1214,1032,1514,1916,1602,1811,1571,1000,898,423,383,369,248,211,232,215,228,834,769,472,687,1029,1164,1022,1475,1900,1631,1806,1574,1036,932,443,393,387,259,208,242,210,219],
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

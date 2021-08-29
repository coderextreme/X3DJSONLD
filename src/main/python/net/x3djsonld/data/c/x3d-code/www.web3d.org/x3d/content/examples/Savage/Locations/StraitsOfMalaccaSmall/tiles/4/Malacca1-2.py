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
        texture=ImageTexture(url=['../../images/4/Malacca1-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[495,667,839,1122,1594,1668,1469,1754,1742,1588,1546,1093,1041,1200,870,664,354,284,389,395,594,269,686,919,1266,1368,1549,1579,1676,1965,1974,1874,1292,973,1218,977,705,520,489,235,534,523,221,140,694,890,1078,1536,1700,1658,1892,1744,1334,1571,1196,1162,1007,927,409,667,600,343,333,213,133,131,633,1036,977,1295,1724,1774,1724,1310,993,1175,1145,913,990,465,334,261,516,442,271,167,147,310,999,1051,1103,1089,1369,1761,1751,1096,992,777,1104,1108,567,416,580,551,414,304,161,174,150,229,1027,1611,1291,1373,1550,1629,1307,1114,718,870,995,567,433,827,949,665,470,314,136,149,263,227,1548,1401,1552,1675,1671,1459,1207,833,572,698,579,317,667,818,657,389,341,134,122,125,242,133,1646,1443,1524,1443,1282,740,662,474,394,351,328,418,733,543,386,385,189,145,135,152,130,125,1303,1438,1150,1235,787,691,434,340,339,297,334,405,557,472,408,300,123,132,112,125,105,118,1047,1092,1389,998,898,476,311,291,256,240,374,225,437,377,268,128,126,109,102,134,110,100,1269,1342,1073,717,567,280,253,243,261,250,200,183,349,207,127,119,111,93,139,127,120,105,1123,1050,673,501,337,211,211,222,255,190,204,271,217,121,116,124,114,97,120,128,132,111,749,804,656,352,216,182,193,201,224,174,159,213,150,122,118,107,103,96,87,120,120,126,1022,541,507,231,175,162,175,185,176,243,218,182,138,122,130,121,105,112,92,96,112,112,928,657,332,180,158,151,160,167,161,160,159,187,139,136,128,118,111,117,111,78,85,90,780,423,219,176,163,145,149,150,147,149,149,197,195,127,105,96,105,97,86,113,92,93,557,297,194,327,160,143,132,139,136,139,192,201,162,133,106,115,103,107,103,110,111,98,254,220,463,307,159,130,126,132,130,152,202,201,176,144,129,123,128,136,146,164,164,121,245,396,403,317,166,171,121,157,195,208,207,194,195,186,177,181,153,155,148,146,115,106,747,586,413,337,255,214,115,121,158,215,216,212,231,188,178,150,164,167,118,127,105,98,883,673,577,285,265,202,136,112,139,195,206,199,203,169,154,175,128,113,114,111,101,97,493,614,521,385,225,223,137,109,120,144,208,201,190,181,140,161,154,146,100,112,92,95,482,632,502,412,237,224,146,108,117,146,207,202,190,178,148,153,160,150,99,102,94,99],
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

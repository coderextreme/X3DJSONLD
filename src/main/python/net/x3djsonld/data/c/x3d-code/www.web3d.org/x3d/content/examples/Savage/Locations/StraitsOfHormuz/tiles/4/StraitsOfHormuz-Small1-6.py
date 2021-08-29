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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small1-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.56099515838445,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[325,270,144,220,141,174,158,164,164,169,228,206,240,296,245,336,319,412,477,502,330,208,271,267,199,146,142,147,159,160,169,186,174,310,210,262,432,299,363,411,609,597,498,506,270,303,264,249,186,148,151,156,170,219,313,296,321,208,288,273,347,581,779,776,649,536,287,282,224,296,317,175,237,202,210,280,386,402,367,215,294,290,387,684,766,729,626,409,203,167,272,252,321,260,425,369,397,192,319,572,475,267,329,283,382,477,593,712,653,536,287,311,421,390,368,259,419,458,501,432,276,465,606,277,266,269,256,361,763,793,566,429,272,329,380,442,451,309,426,481,526,601,534,424,469,346,272,276,254,419,573,830,709,653,275,290,384,381,504,503,423,555,574,610,624,561,494,540,413,374,266,420,539,866,910,832,232,211,326,404,528,404,424,556,645,627,677,612,434,477,505,442,273,406,432,592,858,876,143,290,400,439,555,503,388,542,678,603,735,584,387,426,406,305,343,312,359,514,698,851,146,271,335,488,486,509,368,474,691,601,592,468,427,455,486,424,281,343,302,526,659,757,172,250,310,302,461,547,445,526,580,615,571,633,614,632,600,565,516,342,357,430,464,589,162,203,273,323,471,632,458,479,570,603,583,825,814,850,800,755,771,363,596,397,406,387,90,206,254,284,400,621,496,473,634,611,627,836,930,947,924,958,950,779,503,712,371,488,82,202,252,246,330,518,500,479,537,693,832,955,1083,940,1110,1168,993,942,596,769,687,631,52,186,209,250,282,385,595,514,490,678,905,1063,1169,1096,1368,1222,993,1012,809,788,705,567,77,102,157,135,238,258,586,478,464,790,1011,1141,1213,1201,1414,1254,1176,1071,918,877,694,748,35,56,143,153,219,279,473,322,392,775,1088,1193,1165,1356,1458,1401,1236,1218,1023,977,897,863,37,49,91,95,169,211,186,268,333,753,1097,1208,1219,1267,1386,1291,1320,1284,1206,1045,1042,939,39,47,72,130,114,245,342,271,402,771,1072,1213,1363,1213,1156,1226,1289,1320,1265,1094,1045,1037,43,50,60,107,123,204,386,523,461,727,1059,1277,1340,1151,1185,1438,1329,1265,1291,1100,975,1095,43,55,70,137,187,323,385,741,450,800,1075,1312,1341,1137,1280,1327,1227,1271,1327,1128,985,980,44,56,70,144,194,321,361,747,469,833,1087,1313,1333,1143,1243,1329,1222,1272,1330,1119,989,987],
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

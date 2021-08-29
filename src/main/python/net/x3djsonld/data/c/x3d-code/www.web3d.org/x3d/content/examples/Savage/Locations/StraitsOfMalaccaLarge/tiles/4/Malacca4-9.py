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
        texture=ImageTexture(url=['../../images/4/Malacca4-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,101.90825043207244,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,3,2,2,4,3,3,6,21,60,46,60,127,268,671,661,375,380,473,465,639,526,4,2,3,3,3,5,6,7,19,49,98,121,264,735,510,584,602,601,660,845,795,790,5,1,0,4,6,13,50,66,32,76,163,310,318,595,786,1086,962,862,800,875,1472,1355,2,4,3,5,16,50,46,78,93,194,360,849,708,644,1081,1375,1082,914,928,1231,926,755,3,6,12,46,52,69,106,125,183,489,796,794,623,703,1292,1541,980,725,828,1229,751,659,7,31,11,46,72,73,126,239,286,699,1048,845,692,684,901,1094,924,554,450,415,333,247,35,21,34,56,119,131,150,251,699,1963,1491,950,852,827,977,1448,955,475,294,231,171,173,44,60,56,37,146,220,287,627,1171,1632,1426,1019,946,900,1324,1542,782,405,258,200,144,135,33,55,90,127,208,317,494,1284,1275,1031,1035,825,1221,1083,1141,1078,674,416,241,157,131,124,45,99,150,210,282,488,872,1922,978,918,866,1107,1708,1012,527,831,423,314,204,154,116,107,68,142,163,262,388,863,1068,743,552,640,1173,925,1798,1318,724,161,226,200,130,93,100,75,130,126,239,319,424,499,550,361,427,1601,1664,874,1666,921,533,258,92,83,73,75,535,286,183,126,241,231,296,818,406,417,1420,1447,1201,1094,1693,1282,1221,951,579,209,94,69,54,47,270,146,222,227,499,440,387,1606,1613,1401,1578,1178,1190,432,797,554,423,95,58,53,52,45,336,395,539,424,912,689,1279,1734,809,786,1245,601,792,1085,274,108,195,74,55,56,57,51,346,692,806,795,855,740,1267,1567,1294,780,1279,688,477,548,503,97,80,75,72,62,50,45,484,906,1326,1012,1098,1629,1733,1793,1725,986,634,525,240,156,126,101,80,62,68,60,43,45,687,654,1072,671,888,1795,1550,1091,1273,656,587,446,586,236,129,110,73,69,56,52,53,47,998,1099,801,1292,1953,1410,1402,1304,359,685,368,331,374,190,258,96,70,98,53,46,44,44,1651,1917,1545,1953,1723,1638,580,953,409,282,315,250,174,193,162,161,90,73,66,65,41,38,1668,1554,1409,1246,1448,986,717,425,279,204,216,255,272,502,178,133,116,91,69,56,40,41,1618,1623,1365,1227,1469,944,714,436,292,177,172,336,294,530,164,130,138,93,67,60,40,40],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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

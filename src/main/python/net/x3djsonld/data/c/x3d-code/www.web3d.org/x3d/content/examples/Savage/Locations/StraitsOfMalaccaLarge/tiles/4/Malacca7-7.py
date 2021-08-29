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
        texture=ImageTexture(url=['../../images/4/Malacca7-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[4,2,2,0,2,14,13,7,17,41,615,845,938,977,358,640,706,785,447,216,197,214,5,5,2,0,0,1,20,34,53,40,362,972,1423,389,356,644,520,277,312,247,217,198,0,5,5,7,3,9,57,39,72,337,670,1128,736,358,532,496,449,277,497,203,185,195,9,0,0,2,10,33,63,144,101,154,467,1045,697,376,385,434,368,352,326,192,365,304,4,9,3,0,33,73,196,311,317,447,828,806,657,626,523,457,358,572,255,369,288,318,0,1,0,78,155,231,444,516,678,1789,1156,921,1042,832,549,600,542,597,332,696,690,663,-6,4,39,100,210,418,913,813,815,2412,1322,1486,2331,1154,710,612,1074,640,414,683,473,402,1,14,38,91,226,655,455,470,1352,1247,996,1202,1718,1158,926,1092,2009,1050,466,800,1006,1224,6,10,37,80,238,622,463,470,1186,969,908,908,963,825,578,709,1072,704,582,716,729,840,7,10,38,25,241,1504,470,780,949,788,933,862,1185,829,584,523,544,517,650,390,311,267,9,17,27,59,221,882,1211,904,613,775,1033,902,832,572,521,507,496,599,812,589,756,774,10,13,26,34,236,335,468,439,721,870,1405,1016,691,735,518,715,501,546,568,344,317,313,11,21,22,29,140,163,252,520,1672,1200,995,894,543,531,532,812,816,723,475,322,265,402,26,45,84,107,99,427,561,386,859,894,868,940,786,869,932,929,1007,1235,513,360,301,203,79,406,390,316,167,898,362,229,776,1036,1063,768,381,572,1137,1029,1042,390,617,238,383,474,177,795,1746,782,356,744,676,582,1577,1593,1826,1416,505,395,602,614,397,195,207,291,313,245,166,539,1618,1066,783,624,551,760,1393,1562,1033,1267,562,299,186,162,148,178,419,209,124,114,116,376,598,817,1056,931,605,2107,867,1551,795,623,417,169,242,191,186,227,122,170,271,157,244,342,728,890,1131,491,1134,1310,968,774,677,644,338,482,130,174,283,170,168,89,306,281,184,691,611,1235,883,433,1512,803,859,694,484,300,180,151,176,226,196,165,182,221,90,93,739,888,907,1092,496,506,1506,1099,603,638,609,334,242,267,271,102,112,140,101,122,160,158,725,882,894,1054,419,536,1504,1134,544,556,666,343,329,285,323,99,105,145,90,104,129,131],
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

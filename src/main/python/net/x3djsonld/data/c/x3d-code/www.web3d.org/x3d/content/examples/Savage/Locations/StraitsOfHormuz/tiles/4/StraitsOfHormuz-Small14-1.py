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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.27711712740383,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[149,166,224,202,263,170,193,180,260,261,198,209,269,281,293,345,390,341,303,377,459,550,146,261,278,283,245,190,206,199,264,314,271,237,276,305,331,337,441,365,640,625,506,624,163,300,309,308,236,265,333,228,369,315,298,247,282,369,375,392,565,545,586,919,575,778,312,343,344,332,367,445,484,242,340,260,274,437,391,489,580,533,795,822,563,921,623,801,339,364,394,366,446,429,483,305,277,296,394,535,646,688,568,746,898,920,591,753,717,667,391,404,421,369,459,463,332,329,333,503,567,671,787,830,683,923,1048,895,619,595,650,691,377,454,543,409,443,446,442,327,565,588,688,652,790,896,869,1053,1201,808,689,617,708,747,374,455,465,462,446,378,493,549,552,550,579,708,851,962,1042,954,1101,819,832,704,811,912,380,413,529,542,584,479,518,542,498,578,576,796,895,981,1126,1141,1241,948,876,810,979,1014,378,414,579,633,617,594,431,492,508,657,604,783,1008,1128,1200,1160,1290,1070,1026,978,1090,1202,382,416,608,682,578,537,439,535,677,762,626,761,988,1110,1143,1175,1303,1322,1280,1294,1343,1383,558,481,572,636,570,507,489,591,695,791,704,791,1011,1109,1094,1164,1335,1354,1418,1363,1309,1258,502,485,729,709,585,494,506,593,655,873,812,946,1033,1141,1171,981,1311,1217,1262,1249,1153,1107,617,547,681,684,586,509,552,602,807,943,1014,975,1122,1203,1170,910,1197,1123,1116,1111,963,951,588,575,648,676,557,530,567,640,670,1029,918,968,1129,1169,1168,1048,964,1012,932,958,912,737,728,645,681,618,570,589,576,622,764,1035,1000,819,993,1040,1038,914,831,875,791,895,868,775,916,770,698,744,594,643,622,934,1014,1107,946,834,842,907,984,887,694,764,688,759,778,672,941,947,869,953,795,878,859,1001,954,992,981,785,695,809,868,846,702,690,696,603,861,792,892,938,968,996,948,904,871,884,832,866,883,851,647,764,745,839,653,567,612,494,711,645,731,832,983,931,835,745,798,890,729,779,879,732,647,667,631,837,713,462,511,440,522,430,669,686,845,891,772,667,694,801,663,711,745,741,500,672,500,742,740,670,393,425,287,243,531,738,741,715,710,635,645,730,589,493,695,670,439,669,492,567,500,422,328,259,269,249,525,727,740,708,695,634,641,708,569,474,673,645,431,652,493,554,477,403,318,253,271,249],
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

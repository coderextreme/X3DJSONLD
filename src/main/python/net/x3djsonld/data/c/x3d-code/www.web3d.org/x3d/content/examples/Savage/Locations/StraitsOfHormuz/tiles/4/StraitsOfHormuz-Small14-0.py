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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small14-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[558,503,542,527,436,337,272,248,223,205,188,178,181,175,143,142,134,127,134,142,145,149,594,633,677,532,484,365,297,266,236,210,192,182,179,195,153,146,148,148,146,227,233,146,796,608,569,512,542,395,328,285,244,215,201,202,182,158,167,172,212,180,189,245,265,163,665,674,628,538,449,384,335,288,249,229,204,202,189,194,206,179,206,214,244,255,277,312,687,701,696,614,466,430,321,283,252,223,223,215,201,199,211,220,217,252,295,309,341,339,696,655,730,612,497,358,319,277,249,230,227,224,214,201,222,250,239,278,301,353,390,391,711,665,671,659,481,337,303,273,247,240,233,230,220,215,229,250,264,279,304,336,353,377,574,647,632,598,458,338,293,267,250,246,238,228,233,226,239,247,268,281,303,329,357,374,546,602,605,473,384,336,296,269,261,250,236,235,244,238,238,257,268,289,311,331,363,380,520,524,461,413,362,320,292,278,266,253,253,247,256,252,250,261,273,293,317,345,364,378,427,410,402,364,343,311,311,298,276,267,268,256,270,265,255,275,274,301,314,331,373,382,438,447,409,360,347,341,399,318,390,330,322,309,294,281,283,305,367,346,349,429,424,558,466,555,525,437,462,424,369,353,461,359,354,343,354,344,438,404,354,359,453,561,650,502,593,699,482,552,443,430,461,362,535,463,434,546,415,432,377,567,462,390,423,549,603,617,684,706,566,613,540,491,511,407,626,556,484,635,453,517,416,582,593,438,588,700,716,588,807,766,564,592,693,604,598,551,583,721,555,691,609,638,610,575,732,574,690,779,807,728,917,751,776,783,795,672,687,643,572,718,683,774,788,640,701,675,866,739,860,926,955,916,938,841,938,921,877,665,758,730,659,808,864,890,745,753,683,801,862,920,1003,925,980,941,1005,970,1005,966,899,776,883,846,808,976,871,977,883,908,791,901,974,983,1075,1020,774,892,1155,1046,975,1047,952,840,898,918,1010,885,925,1089,1033,1068,926,1008,966,944,1040,952,724,731,1117,1077,1017,968,1075,1004,1031,923,909,832,915,1066,923,954,1065,1017,875,869,962,945,727,669,1159,1114,966,871,1032,956,1041,842,850,795,826,983,813,870,979,904,895,736,813,872,686,531,1147,1124,965,868,1021,951,1032,855,845,793,832,974,806,861,972,887,891,724,798,870,677,525],
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

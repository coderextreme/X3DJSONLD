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
        texture=ImageTexture(url=['../../images/4/Malacca14-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[1119,681,625,95,70,152,239,358,266,148,91,73,62,82,73,86,147,373,491,174,278,481,1080,856,342,84,67,74,408,675,698,467,340,108,81,74,97,131,353,231,120,256,599,563,948,846,679,88,70,66,478,469,957,776,246,475,246,72,202,94,154,154,143,378,466,881,834,866,440,71,81,66,146,735,896,456,530,820,469,118,134,164,137,127,117,373,466,662,723,962,607,145,72,94,72,413,495,938,676,768,540,282,108,284,287,329,253,166,262,352,806,884,861,223,90,69,78,246,549,975,890,466,590,552,108,212,249,271,444,470,222,592,738,955,634,631,69,96,71,390,608,821,862,599,860,675,179,235,345,396,511,461,431,573,559,822,706,319,101,92,76,156,347,718,838,937,832,727,296,265,368,515,836,733,722,701,163,548,856,496,192,93,73,110,661,747,1004,1070,1067,559,270,261,185,464,769,853,510,875,194,824,800,595,216,93,97,101,172,666,705,1053,831,458,299,202,227,190,440,545,496,610,445,765,805,817,318,168,76,80,114,376,448,609,849,412,340,345,149,300,599,623,967,593,428,395,703,965,455,85,97,84,94,261,439,445,291,261,265,235,230,511,521,816,887,895,216,396,815,810,776,111,88,66,84,116,300,347,275,206,222,184,352,370,725,810,1058,1047,102,142,760,938,434,183,78,101,75,183,137,192,233,182,167,174,280,584,797,845,1067,1050,793,499,335,938,896,356,83,111,83,100,282,220,311,168,142,197,476,799,677,956,1227,1341,936,792,920,516,443,304,138,134,136,80,137,157,382,188,157,158,227,659,508,888,1274,1570,1274,1119,1042,776,369,285,249,200,151,108,116,242,354,197,204,192,224,331,672,1290,1395,1293,1051,1557,1132,1175,671,659,490,353,194,126,89,232,137,146,181,167,159,529,774,1010,981,1156,744,1057,1322,1132,966,935,591,652,216,169,83,172,131,159,159,160,160,393,794,968,862,828,654,823,1011,1193,1295,859,954,525,266,267,111,242,136,188,157,155,197,276,500,871,795,667,336,654,1000,1129,1553,1024,1058,909,321,204,111,193,132,143,138,124,191,311,633,787,557,657,507,424,712,1052,1751,1077,821,755,237,134,100,141,255,186,112,142,159,253,461,707,554,597,534,417,765,1007,1742,1054,806,721,231,141,98,155,269,184,116,138,156,260,419,711,527,583],
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

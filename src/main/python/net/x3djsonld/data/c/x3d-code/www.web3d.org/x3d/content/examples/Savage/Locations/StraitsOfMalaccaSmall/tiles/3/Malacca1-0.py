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
    GeoViewpoint(description='GeoViewpoint_3_10',geoSystem=['GDC'],position=(1.4806733645214747,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.4806733645214747,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca2-0.x3d'],child2Url=['../../tiles/4/Malacca2-1.x3d'],child3Url=['../../tiles/4/Malacca3-0.x3d'],child4Url=['../../tiles/4/Malacca3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[-1,3,6,5,23,186,262,78,43,47,308,281,710,1139,796,301,357,1162,669,548,987,781,3,0,5,19,180,73,221,24,43,205,804,325,471,990,514,219,1054,1010,571,613,505,691,3,6,5,73,186,206,245,24,34,623,288,539,881,938,339,557,1071,634,1005,1033,631,476,6,3,27,188,286,200,185,179,86,625,683,368,550,489,221,536,954,682,803,821,332,384,7,1,31,6,41,356,224,36,618,152,125,313,933,280,221,681,575,569,327,396,559,302,0,0,22,8,410,309,116,112,336,101,254,581,630,247,276,784,383,176,195,322,270,241,0,2,36,27,11,12,235,274,367,447,310,451,674,248,539,583,227,180,331,264,186,146,1,2,28,41,39,18,101,245,677,426,279,336,296,322,608,485,251,377,263,308,100,113,2,29,93,19,31,32,153,147,366,812,590,398,361,427,729,298,283,316,107,102,81,86,5,22,34,15,18,25,29,152,314,548,1096,508,406,521,593,339,378,189,146,117,100,76,23,28,16,15,20,23,31,191,271,636,1404,735,702,527,509,340,275,133,150,161,91,97,161,28,242,15,28,26,55,271,283,663,1370,852,802,687,555,397,275,279,361,160,113,99,5,6,235,22,50,112,331,374,390,514,832,1172,1114,722,500,401,361,268,235,203,140,92,374,8,7,19,123,239,299,614,528,374,782,1430,1131,700,509,575,276,408,174,140,176,178,6,122,3,155,422,578,501,428,637,562,862,1488,960,797,970,646,616,445,381,272,409,616,1,4,21,287,365,849,551,807,744,767,681,1052,878,1175,1258,882,1065,778,452,498,596,461,0,1,161,267,434,1003,833,852,837,757,770,1014,851,1074,1300,781,906,905,410,528,718,469,0,4,79,399,677,916,830,863,817,439,950,979,870,894,1380,1418,1143,1209,735,324,875,586,61,11,171,573,828,890,868,898,624,448,821,1084,868,894,1534,1370,1271,756,870,445,579,362,59,258,324,580,681,862,915,952,489,702,666,938,857,850,1397,1589,1587,791,606,915,563,362,234,579,603,707,791,914,1009,669,456,627,638,761,827,978,1271,1602,1133,820,1011,1257,677,391,248,587,631,745,790,902,1011,660,458,634,647,747,837,942,1247,1572,1112,795,1027,1245,652,364],
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

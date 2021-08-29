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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small5-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.00937491632225,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[5,1,5,0,5,0,3,7,40,147,417,670,917,919,810,699,359,407,346,1026,1406,1594,4,2,4,2,1,-3,0,1,31,101,255,731,399,472,563,734,788,598,535,868,1335,1588,0,2,2,3,-1,4,-1,2,14,214,363,677,235,228,176,946,1134,1004,981,888,1179,1542,0,0,3,1,4,-2,4,0,9,93,340,438,182,109,129,504,914,831,1130,1108,1317,1530,0,3,2,0,-3,2,1,1,12,122,116,159,175,82,95,235,505,442,1122,1116,1400,1427,2,3,0,2,3,1,1,3,10,12,30,41,54,64,76,103,185,151,320,1005,1129,981,2,1,2,3,1,4,0,3,4,19,26,37,52,81,90,93,114,341,680,1130,1045,915,0,0,0,5,0,4,3,1,5,149,221,54,75,262,217,108,120,231,811,1189,856,762,1,1,0,1,0,3,1,4,5,287,516,112,255,379,280,176,161,192,1034,1278,930,690,0,1,1,2,0,1,2,1,0,201,534,310,566,744,414,292,201,220,1148,1221,844,827,0,0,0,0,2,4,2,2,0,186,465,515,194,284,720,508,475,296,1001,1037,920,724,0,2,0,0,0,1,1,0,2,52,456,269,68,71,201,564,693,462,1067,939,758,567,0,4,3,2,4,2,1,6,0,129,266,243,24,56,170,612,1036,1039,1091,1014,794,766,0,1,3,1,1,0,4,3,0,4,23,8,24,73,197,596,830,847,1084,1000,1016,919,1,0,0,0,2,0,3,3,2,0,4,59,157,79,295,562,419,240,1014,988,993,998,0,0,3,1,3,1,2,3,5,3,8,398,640,336,454,351,324,159,295,993,981,991,2,2,5,1,3,3,1,3,4,3,1,195,485,742,775,210,89,177,600,954,972,973,1,2,1,2,0,3,5,5,1,4,3,3,379,377,409,344,70,99,440,746,1053,1021,0,1,0,0,0,2,2,2,2,4,2,3,130,161,292,149,97,108,196,553,1284,1333,0,2,0,0,1,4,1,4,4,3,1,2,28,112,223,22,37,48,110,418,1095,1172,0,0,0,1,2,1,2,0,2,4,1,3,-1,69,10,203,182,180,255,840,842,929,2,1,0,2,3,0,1,2,0,1,3,4,5,0,153,307,283,290,209,519,875,738,2,2,0,1,3,0,1,2,0,1,3,3,6,-1,158,301,263,276,182,487,892,748],
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

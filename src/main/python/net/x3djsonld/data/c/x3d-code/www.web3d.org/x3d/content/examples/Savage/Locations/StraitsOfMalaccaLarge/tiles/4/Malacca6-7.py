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
        texture=ImageTexture(url=['../../images/4/Malacca6-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[3,-2,14,12,-10,15,8,5,5,7,7,2,5,6,4,6,2,5,19,72,445,241,4,2,-1,-10,-8,14,6,6,6,4,2,6,10,5,7,6,2,10,132,552,707,769,2,12,15,-8,-8,-8,7,1,4,8,18,5,3,6,3,4,8,48,117,748,1007,1063,3,20,0,-8,-8,10,1,6,10,10,4,10,7,7,7,2,89,432,172,726,849,1041,2,9,0,-8,10,25,12,5,10,8,8,0,-3,1,4,8,214,308,453,592,1094,1001,15,-1,10,10,25,12,11,15,12,4,10,25,5,9,15,14,237,560,350,1026,1069,1179,8,15,-1,25,12,12,18,6,10,7,9,8,6,3,186,322,504,969,492,1556,1886,2004,5,8,15,12,12,18,6,4,30,17,3,8,4,3,8,442,559,1251,1375,1116,1764,1901,6,5,8,11,18,6,4,29,1,5,8,4,3,5,47,109,959,1102,1732,2500,2017,1960,4,6,5,18,6,4,30,1,5,-6,2,5,7,16,175,379,886,1352,1762,1937,1089,1036,-4,4,7,6,4,0,-4,17,0,8,21,3,368,615,119,1300,1772,1931,1876,1649,1352,1643,-4,-4,4,4,0,0,0,-4,17,0,11,678,340,311,891,597,694,1708,1804,1656,1873,1744,-4,-4,-4,0,0,0,0,0,-4,0,48,586,222,347,1333,1810,1482,1730,1529,1830,1109,1191,-4,-4,-4,0,0,0,0,0,1,3,1,274,712,463,1345,1859,1643,1610,1521,1539,1676,1560,2,1,1,7,8,4,17,-17,0,15,1,196,842,1448,1207,1132,1901,1455,1608,1483,1121,1020,2,2,2,10,8,8,5,16,-18,11,9,61,228,723,1123,1061,1275,1287,1291,1334,733,671,2,2,2,9,10,7,9,5,17,-16,9,32,436,1574,1433,699,699,715,965,791,607,655,2,2,2,16,9,10,7,8,5,9,29,631,780,1102,1193,597,432,647,604,788,609,461,2,2,2,15,15,9,10,7,9,2,178,374,1124,1320,1162,463,398,584,453,399,380,311,2,2,2,0,15,16,10,10,7,56,1104,1245,1371,1143,778,382,509,518,588,300,192,201,0,2,2,0,1,15,16,9,18,25,653,802,952,957,364,636,693,825,461,204,196,229,4,2,2,0,2,14,13,7,17,41,615,845,938,977,358,640,706,785,447,216,197,214],
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

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
    GeoViewpoint(description='GeoViewpoint_3_52',geoSystem=['GDC'],position=(3.3692936899251933,97.86525024004024,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3692936899251933,97.86525024004024,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca10-4.x3d'],child2Url=['../../tiles/4/Malacca10-5.x3d'],child3Url=['../../tiles/4/Malacca11-4.x3d'],child4Url=['../../tiles/4/Malacca11-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.3619186420774487,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[0,2,3,4,4,2,3,4,3,13,8,17,36,189,627,279,702,1021,1493,1427,1424,1426,1,5,3,2,3,2,1,1,5,26,18,11,122,291,511,997,1041,1447,1608,1675,905,906,13,7,2,4,4,4,2,0,0,27,22,74,88,211,773,1179,1301,1846,1922,906,1320,1294,1,2,1,1,3,3,2,2,-2,33,36,89,79,514,724,1012,1641,1736,1688,1318,1600,1552,0,2,2,3,2,2,4,6,23,37,37,27,214,534,912,1197,1283,1740,901,1335,902,913,4,3,2,3,3,7,2,6,30,38,28,204,286,660,1003,859,1454,903,906,887,1187,1120,3,3,2,2,2,4,-1,10,24,295,85,219,436,697,471,1171,1781,1075,1351,1264,988,953,1,3,4,4,4,3,29,104,558,376,249,254,950,367,654,1109,1426,1324,1255,1007,933,1005,1,3,3,4,6,10,26,562,633,324,670,503,451,984,601,820,1103,1167,1522,674,479,382,2,2,1,3,3,58,88,576,872,882,363,629,598,1528,1282,1513,1357,1488,965,385,241,192,1,2,3,8,656,668,754,1008,1947,1461,404,140,1112,462,727,1367,913,744,384,219,139,109,0,1,4,284,340,752,1341,2099,1402,1537,131,1655,1006,221,201,312,277,258,142,122,67,79,1,1,101,778,1395,1593,2512,2549,1265,739,293,1617,815,124,93,81,87,89,56,50,30,24,1,25,459,1564,1174,1905,2482,2382,1584,318,1997,1729,481,87,90,45,39,30,22,19,9,12,17,582,454,2099,1952,1697,2381,1984,468,1641,1680,941,254,61,80,33,18,12,7,0,4,3,349,577,2180,1850,3079,2459,2191,743,1501,2172,1649,809,118,93,32,12,5,7,2,0,0,0,375,760,1004,2377,1736,1474,1452,1392,1284,1400,695,1173,66,68,12,5,7,2,2,1,0,2,1142,1163,1356,2130,1217,898,1637,1851,1441,595,1556,142,83,34,2,2,3,2,1,2,1,1,1662,800,844,1428,1051,1670,1224,939,997,1168,328,36,50,19,6,1,2,0,1,2,3,4,2104,1129,2524,1847,2024,1857,2310,819,157,398,118,29,43,10,4,2,3,1,1,2,4,4,2253,2309,1007,659,1119,2073,1120,911,282,108,27,43,14,49,4,2,1,2,3,3,0,2,2185,2303,1078,612,1045,2007,1104,854,222,114,25,37,12,50,4,2,2,2,2,1,2,2],
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

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
    GeoViewpoint(description='GeoViewpoint_3_00',geoSystem=['GDC'],position=(0.8445483343071585,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-0.x3d'],child2Url=['../../tiles/4/Malacca0-1.x3d'],child3Url=['../../tiles/4/Malacca1-0.x3d'],child4Url=['../../tiles/4/Malacca1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[0,-1,0,0,0,-1,0,0,26,26,24,49,79,75,134,123,228,566,736,829,1301,1264,2,-2,2,0,0,0,2,0,31,26,23,25,82,89,118,226,460,471,664,542,609,961,1,6,0,0,-1,0,0,0,2,7,17,94,89,98,190,403,349,703,1216,1328,1125,1155,0,0,0,0,0,-1,-1,2,21,13,21,107,76,115,362,1106,737,930,1158,1618,1320,1413,1,-7,2,0,0,2,3,16,30,34,54,113,201,234,248,678,544,879,1465,1533,957,894,5,-4,-2,0,-1,0,2,25,1,27,65,133,195,203,189,328,739,1066,1755,1227,1028,763,8,0,0,0,0,0,0,24,19,63,333,251,368,255,502,391,781,1247,1214,964,689,550,2,0,0,0,0,1,0,11,31,219,120,646,998,605,1165,791,673,1223,908,554,532,484,1,0,-1,0,0,0,0,41,105,111,133,965,1273,1164,726,1203,1135,1236,508,372,431,618,0,1,0,1,1,3,24,29,33,40,85,1056,790,1317,719,1133,1335,811,319,245,529,383,3,1,0,0,0,16,23,30,42,79,427,571,639,987,689,1455,1148,811,212,245,460,705,0,3,1,0,-1,12,33,27,12,455,684,576,589,455,694,1432,899,328,193,229,514,592,1,3,1,4,1,26,29,20,147,173,199,457,464,825,907,1090,1159,324,187,324,667,867,1,2,1,5,6,30,24,42,125,162,305,170,210,754,991,721,861,195,234,534,1130,1489,2,6,5,2,8,33,43,32,43,247,192,78,574,810,628,679,253,171,287,804,1287,1361,2,3,6,0,24,31,148,91,267,219,66,156,550,423,470,306,161,168,237,628,1409,1228,3,3,4,5,18,25,212,76,196,142,21,317,250,499,182,646,163,179,331,1007,922,786,3,3,5,5,16,23,116,223,198,42,42,305,134,336,274,404,170,384,678,1288,950,904,3,5,1,5,41,17,64,275,148,42,39,821,88,643,676,360,173,428,1142,898,540,521,2,3,3,-3,29,77,32,59,38,42,39,768,313,538,978,264,193,801,937,745,320,337,0,3,6,6,22,181,263,78,43,45,283,294,718,1156,784,316,369,1118,708,531,949,771,-1,3,6,5,23,186,262,78,43,47,308,281,710,1139,796,301,357,1162,669,548,987,781],
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

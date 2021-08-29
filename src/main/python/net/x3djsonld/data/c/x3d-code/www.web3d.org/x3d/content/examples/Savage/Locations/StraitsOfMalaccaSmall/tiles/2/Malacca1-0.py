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
    GeoViewpoint(description='GeoViewpoint_2_10',geoSystem=['GDC'],position=(2.434860909842949,99.62356253966037,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.434860909842949,99.62356253966037,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca2-0.x3d'],child2Url=['../../tiles/3/Malacca2-1.x3d'],child3Url=['../../tiles/3/Malacca3-0.x3d'],child4Url=['../../tiles/3/Malacca3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[519,793,812,940,562,730,963,1013,971,1452,541,263,74,97,65,18,65,72,47,40,20,22,258,611,966,837,1546,1055,1191,959,1125,780,442,333,180,114,77,60,24,29,30,33,14,15,517,1011,1020,879,1379,1287,1021,971,648,368,676,241,120,153,59,52,16,22,16,12,11,13,738,982,1141,1312,1204,1219,953,848,647,727,334,57,68,53,69,72,13,9,9,10,24,9,566,1087,955,1184,1199,1055,992,836,729,597,319,162,78,34,52,45,16,6,8,12,28,34,1405,1430,1089,1165,1239,1519,1066,909,1177,1621,905,104,82,32,21,10,8,4,8,26,31,31,1396,1239,1171,1195,1288,1323,1433,1665,950,659,746,191,49,54,10,9,9,13,9,31,24,21,1407,1422,1319,1290,1440,1505,1215,1118,982,681,196,89,64,11,7,6,8,5,16,27,24,10,1340,1428,1525,1315,1040,1334,1156,879,549,431,133,89,40,12,10,5,9,4,27,20,3,0,1428,899,908,910,913,940,1240,985,420,240,88,59,26,9,7,7,7,6,28,5,0,2,1485,910,915,912,901,933,1734,1569,416,115,73,14,8,10,2,11,5,3,26,3,0,0,911,1127,1091,906,964,1096,981,1258,159,178,29,19,7,1,1,5,1,4,17,-6,1,-1,1131,1506,903,1043,1457,1104,794,393,174,58,26,19,3,7,2,2,2,15,14,-1,0,-1,1510,1334,1296,1572,1589,942,528,209,108,58,43,11,20,5,1,0,5,20,2,0,-2,-2,1523,924,1051,1591,1038,492,255,173,87,44,30,20,8,9,1,1,0,14,2,1,-1,-5,927,930,1161,927,700,422,247,147,109,33,29,10,9,15,1,4,1,1,0,1,4,1,907,1126,975,730,468,312,197,133,100,71,16,10,4,14,2,-1,1,0,0,2,1,-2,1218,1004,762,550,375,250,189,134,78,44,36,8,2,1,8,0,0,2,3,0,1,1,1120,947,725,479,328,202,126,113,79,46,21,12,4,7,6,1,0,1,0,2,0,0,976,1023,758,435,265,171,118,99,77,35,23,10,2,3,-8,0,0,1,1,1,1,0,732,519,482,283,200,139,105,77,57,19,17,12,9,-1,-1,0,0,2,1,1,1,0,719,479,489,277,200,138,105,75,56,20,16,12,12,0,-1,-1,1,1,2,0,2,1],
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

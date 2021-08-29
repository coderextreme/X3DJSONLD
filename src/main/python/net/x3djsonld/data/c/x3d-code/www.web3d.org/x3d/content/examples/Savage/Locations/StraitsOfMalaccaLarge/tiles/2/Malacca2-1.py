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
    GeoViewpoint(description='GeoViewpoint_2_21',geoSystem=['GDC'],position=(2.3619186420774487,98.87600028804829,448023.77127998625),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.3619186420774487,98.87600028804829,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca4-2.x3d'],child2Url=['../../tiles/3/Malacca4-3.x3d'],child3Url=['../../tiles/3/Malacca5-2.x3d'],child4Url=['../../tiles/3/Malacca5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638195915,96.85450019203219,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.19252382,zDimension=22,zSpacing=0.19188096,height=[-99,3,2,2,5,1,3,4,4,6,-1,1,31,36,109,649,332,470,238,117,80,84,-99,3,3,2,1,0,0,1,4,2,0,0,58,423,1718,1321,277,387,111,156,57,60,-99,0,0,4,-1,61,3,4,5,3,0,12,171,832,672,1529,854,602,68,55,45,46,-99,1,3,5,393,81,3,4,1,6,4,14,492,369,1118,622,156,70,51,51,43,45,-99,10,3,112,236,3,2,2,1,0,4,251,95,462,193,133,102,62,37,38,41,44,-99,2,25,111,3,3,1,1,1,2,17,103,908,288,82,145,124,51,33,29,34,33,-99,2,0,3,4,3,2,2,3,3,244,220,904,252,97,48,99,74,12,37,16,23,-99,-4,0,2,1,5,2,2,173,0,26,915,877,793,351,47,28,67,49,35,3,3,-99,5,2,3,3,4,5,2,1,24,1173,928,1114,1206,367,110,37,15,8,31,3,3,8,3,2,3,4,4,5,12,202,842,1318,1178,1077,1195,193,25,21,6,33,6,28,29,0,3,0,2,4,25,31,349,730,1443,1432,1240,1197,467,107,10,4,25,0,-1,4,4,2,3,3,2,23,25,100,1022,1365,1978,1256,1047,1141,61,22,2,2,20,2,2,1,1,0,2,2,5,28,34,257,921,1396,900,934,1119,284,70,13,4,2,1,0,0,3,3,2,2,2,3,8,152,688,505,1674,1142,951,421,197,70,18,7,1,1,1,1,0,3,3,3,4,148,894,608,222,665,1143,1222,391,204,80,42,1,1,2,1,1,0,-1,-1,2,2,752,812,1593,658,982,888,1151,293,137,43,21,2,0,0,0,1,1,1,0,0,2,109,1630,2305,1506,463,871,101,102,57,24,14,0,1,1,0,0,1,1,1,2,2,3,560,2033,2407,536,1835,194,64,18,9,7,1,0,0,0,1,1,0,1,1,0,0,455,1252,1973,1631,1352,741,71,37,9,4,1,1,0,2,1,0,1,1,1,3,4,5,1666,966,1066,1022,1411,299,32,3,2,2,0,-99,-99,-99,-99,-99,2,1,0,0,3,4,2431,1060,1070,1291,197,24,13,1,2,2,2,-99,-99,-99,-99,-99,2,0,0,10,19,15,2413,979,963,1255,162,26,13,3,2,2,1,-99,-99,-99,-99,-99,2,0,0,8,19,19],
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

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
    GeoViewpoint(description='GeoViewpoint_3_61',geoSystem=['GDC'],position=(5.384043785620683,95.84375014402414,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.384043785620683,95.84375014402414,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca12-2.x3d'],child2Url=['../../tiles/4/Malacca12-3.x3d'],child3Url=['../../tiles/4/Malacca13-2.x3d'],child4Url=['../../tiles/4/Malacca13-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772938,94.8330000960161,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[-99,-99,0,0,0,-1,2,0,0,1,1,2,17,29,21,107,113,908,1618,1544,2327,2185,-99,-99,0,0,0,0,0,1,0,2,3,23,29,37,52,89,487,1531,1034,1502,1476,1490,-99,-99,0,0,0,0,3,1,1,2,19,42,26,112,86,216,832,1318,1563,1466,1421,1308,-99,-99,0,0,0,0,0,0,8,36,170,43,476,440,302,608,1033,1478,1354,1099,1296,1577,-99,-99,-1,0,0,0,3,81,33,122,536,662,542,945,1056,854,910,911,1574,972,1245,1319,-99,-99,0,0,0,4,1,31,63,84,120,407,298,760,1107,1090,1084,918,936,769,2487,2335,-99,-99,2,1,0,1,23,293,241,1020,574,654,694,741,1287,2355,1886,1308,596,696,1231,1255,0,0,0,0,-2,8,199,517,1006,1338,1435,455,1435,2051,848,1342,930,452,636,261,581,354,0,0,1,-1,-6,8,137,586,1267,1203,1442,733,606,796,707,705,449,131,216,93,84,103,0,1,-1,-4,-6,647,1138,1096,726,517,531,76,80,109,157,15,10,5,10,22,12,18,1,4,0,-2,168,914,304,84,99,173,273,31,5,3,2,2,1,2,4,1,2,1,2,3,1,1,3,1178,59,52,275,381,18,4,2,1,2,3,0,1,2,3,2,2,2,2,4,4,26,19,23,391,328,313,39,0,1,1,1,1,0,0,1,2,2,1,2,3,4,153,2,1,190,8,32,0,0,0,2,2,2,0,2,1,2,1,1,1,2,3,5,3,2,3,2,2,0,0,1,1,0,0,1,1,0,1,1,0,1,3,2,2,2,1,3,69,2,3,4,0,1,0,1,1,1,0,0,0,1,0,0,0,2,2,3,1,19,4,2,1,3,0,0,1,0,1,2,0,1,0,0,0,0,0,-99,-99,2,2,3,3,2,1,3,0,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,2,1,2,3,1,0,2,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,1,2,2,2,1,1,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,2,1,2,2,2,2,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,1,2,2,1,3,2,2,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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

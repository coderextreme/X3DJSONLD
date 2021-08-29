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
    GeoViewpoint(description='GeoViewpoint_3_43',geoSystem=['GDC'],position=(1.3545435942297035,99.88675033605634,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.3545435942297035,99.88675033605634,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca8-6.x3d'],child2Url=['../../tiles/4/Malacca8-7.x3d'],child3Url=['../../tiles/4/Malacca9-6.x3d'],child4Url=['../../tiles/4/Malacca9-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.3471685463819587,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[0,17,1,32,29,21,41,62,104,296,598,974,639,1319,814,536,202,386,197,96,182,143,0,12,0,7,12,23,76,314,619,1035,800,953,220,821,690,277,261,138,96,94,63,130,1,0,1,27,51,81,375,751,1813,1337,1387,828,214,469,477,376,115,138,136,53,57,55,0,0,1,8,146,269,604,1304,1213,869,896,457,648,862,136,114,146,78,51,55,57,48,0,0,25,63,177,184,1004,1002,749,1108,1489,881,564,177,608,188,93,82,54,47,44,45,0,0,29,79,1104,859,1028,281,667,1387,1053,598,508,364,132,106,64,75,50,34,25,24,1,0,13,150,581,1032,572,370,956,1397,768,438,208,76,66,55,54,68,57,51,36,44,1,39,82,148,418,283,167,801,728,236,276,120,96,82,70,53,55,39,36,42,57,52,4,29,220,39,65,878,299,825,356,127,157,142,110,85,68,51,39,32,33,25,37,43,1,227,29,384,590,435,1041,974,545,113,176,168,157,124,58,53,36,24,37,38,33,38,29,322,46,107,1003,360,328,458,78,112,158,141,123,90,39,53,29,42,23,42,14,35,65,25,207,613,340,624,342,110,81,56,67,99,139,111,72,42,34,25,18,13,20,17,143,52,132,775,924,421,298,172,99,94,50,56,115,61,66,47,17,50,47,13,13,26,14,631,658,519,938,1190,525,454,318,82,62,55,67,118,114,36,35,31,21,15,25,24,77,1019,926,579,885,1401,756,407,316,293,59,30,28,58,79,61,50,30,34,12,5,4,662,936,548,881,850,1412,1004,752,154,94,81,89,25,53,54,25,13,11,15,33,28,25,1038,1055,961,1459,1154,1018,1003,432,403,196,135,43,49,28,27,23,14,20,34,31,3,2,1034,950,1246,1199,987,784,601,650,120,178,29,67,39,10,9,15,29,17,16,27,9,10,1370,1204,1198,1507,1097,916,1155,931,287,46,26,23,18,8,6,30,29,2,6,5,23,28,1255,1223,1254,1466,1230,1826,608,369,251,67,18,11,4,7,15,34,6,0,9,4,23,22,1427,1542,1250,1352,1224,913,417,433,93,43,15,10,4,8,18,21,0,-1,1,-3,1,2,1426,1547,1214,1333,1226,913,462,400,77,39,15,10,4,8,18,24,0,-1,0,-1,0,0],
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

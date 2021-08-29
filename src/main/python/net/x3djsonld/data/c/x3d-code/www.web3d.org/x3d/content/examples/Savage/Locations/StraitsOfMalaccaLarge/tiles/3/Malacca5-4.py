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
    GeoViewpoint(description='GeoViewpoint_3_54',geoSystem=['GDC'],position=(3.3692936899251933,101.90825043207244,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3692936899251933,101.90825043207244,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca10-8.x3d'],child2Url=['../../tiles/4/Malacca10-9.x3d'],child3Url=['../../tiles/4/Malacca11-8.x3d'],child4Url=['../../tiles/4/Malacca11-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.3619186420774487,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[0,3,0,2,39,3,2,2,2,1,2,3,41,35,62,38,30,42,24,14,40,179,1,0,0,13,0,1,0,0,2,3,2,13,35,47,51,74,42,176,44,10,13,15,2,-2,3,1,8,1,2,4,1,3,32,30,51,80,114,85,55,70,23,35,40,61,1,2,-2,0,3,0,3,3,3,7,71,41,50,183,198,100,74,29,34,50,60,78,5,0,7,2,2,1,9,30,7,80,76,90,629,143,173,119,62,58,34,36,77,103,-2,-3,-3,4,1,0,9,8,10,26,91,94,587,222,92,166,84,85,49,152,71,61,-3,-13,0,-3,2,13,10,10,26,39,83,542,232,583,113,88,61,77,54,46,43,53,-3,-3,0,1,8,6,8,10,96,38,65,372,135,177,107,84,52,60,93,60,84,77,-1,0,0,0,0,12,56,27,36,83,262,563,178,189,173,52,45,67,86,59,63,46,0,0,1,1,0,11,32,57,46,216,361,560,655,203,62,53,56,67,71,311,46,74,2,0,1,3,6,7,29,52,239,399,536,868,149,122,56,59,31,55,324,68,45,46,1,0,1,5,8,7,27,82,268,1033,190,791,89,81,76,45,40,55,52,137,116,35,2,3,2,6,20,19,70,181,129,792,159,95,74,51,46,39,47,30,41,80,64,49,1,3,4,20,24,41,160,89,303,840,200,101,109,121,69,44,48,164,34,35,130,89,0,5,7,11,20,54,38,470,1188,1051,146,97,149,96,73,50,123,94,382,77,98,89,7,8,7,10,26,46,77,1753,820,333,159,344,1522,425,156,53,70,102,521,113,75,112,4,5,10,11,50,123,131,1071,1081,322,113,188,981,108,418,69,76,85,140,134,519,692,4,7,7,25,43,66,693,1103,279,149,121,110,103,93,149,74,536,118,144,355,687,1177,4,3,13,31,42,906,974,1337,220,160,172,105,157,132,80,78,447,311,332,214,291,427,13,17,25,33,62,580,1095,533,149,107,133,123,78,86,157,68,201,381,214,375,333,375,25,22,28,582,828,1201,1110,463,292,103,133,109,114,170,260,77,146,474,713,768,667,1075,23,10,27,598,780,1154,1113,399,307,102,137,100,109,185,361,77,145,536,631,722,712,1079],
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

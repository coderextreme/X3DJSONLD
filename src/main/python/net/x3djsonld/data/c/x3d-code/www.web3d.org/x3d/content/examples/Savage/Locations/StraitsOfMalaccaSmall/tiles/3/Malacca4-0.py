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
    GeoViewpoint(description='GeoViewpoint_3_40',geoSystem=['GDC'],position=(3.3890484551644233,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3890484551644233,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca8-0.x3d'],child2Url=['../../tiles/4/Malacca8-1.x3d'],child3Url=['../../tiles/4/Malacca9-0.x3d'],child4Url=['../../tiles/4/Malacca9-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[833,886,951,974,988,465,391,297,255,198,180,146,121,101,116,65,61,47,34,17,16,21,782,845,724,819,529,453,308,272,210,181,146,144,87,89,98,74,61,35,25,15,15,14,705,808,441,511,337,244,230,215,187,164,134,122,95,79,72,51,45,39,19,11,7,8,497,494,356,302,236,192,196,195,146,147,121,97,74,69,75,56,33,27,21,13,7,3,446,347,321,279,207,161,149,142,150,119,103,85,71,53,60,46,30,25,18,2,0,0,401,280,297,241,185,156,123,113,112,106,83,80,72,40,43,42,18,23,10,0,5,6,307,239,186,177,142,114,104,87,101,87,74,63,53,36,42,27,14,12,2,2,4,6,259,250,175,146,130,100,51,70,62,47,63,60,40,42,19,18,6,1,3,2,1,0,220,186,140,138,86,84,55,40,44,56,52,24,31,42,11,11,15,4,0,0,1,1,193,155,137,118,90,83,71,42,26,42,40,32,14,18,13,7,3,4,0,0,0,1,184,114,112,86,73,62,54,41,26,24,28,29,26,13,12,9,2,2,1,1,0,0,149,121,96,75,78,57,42,34,27,18,18,13,9,5,2,3,2,5,0,0,1,1,120,90,72,60,63,50,45,32,20,14,13,11,3,2,3,4,0,0,0,0,2,1,82,73,69,48,50,37,32,24,16,11,6,3,1,3,1,5,2,2,0,1,0,0,77,50,45,44,35,34,31,23,8,8,4,3,2,-1,0,1,5,1,0,0,0,0,53,43,31,31,28,30,25,21,4,4,2,2,0,0,0,2,2,2,1,1,0,1,34,20,21,22,28,30,20,22,11,3,4,6,0,0,1,3,2,0,3,1,0,1,20,11,24,19,21,21,18,8,3,0,2,0,0,3,1,0,2,1,-1,1,0,0,25,13,14,16,18,16,11,5,4,0,1,0,3,3,2,0,1,1,1,1,0,0,11,15,12,12,12,9,5,4,0,2,3,3,0,0,1,2,0,0,0,-1,0,0,8,6,7,5,8,5,0,0,1,1,3,2,2,0,1,0,3,0,0,0,0,-1,10,7,10,5,7,4,1,0,1,2,0,1,2,0,2,0,2,0,-1,1,0,-1],
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

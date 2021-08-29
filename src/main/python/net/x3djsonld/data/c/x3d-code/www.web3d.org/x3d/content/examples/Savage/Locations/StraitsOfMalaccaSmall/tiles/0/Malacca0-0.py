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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(3.070985940057265,102.12856265864148,653179.5310243615),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.070985940057265,102.12856265864148,0.0),range=783815.44,child1Url=['../../tiles/1/Malacca0-0.x3d'],child2Url=['../../tiles/1/Malacca0-1.x3d'],child3Url=['../../tiles/1/Malacca1-0.x3d'],child4Url=['../../tiles/1/Malacca1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/Malacca0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.33400002,zDimension=22,zSpacing=0.24233334,height=[0,28,317,1160,811,107,43,27,17,45,30,20,28,7,4,1,3,7,3,-99,-99,0,34,1343,1304,1121,66,39,15,60,19,12,6,5,5,17,13,4,-4,0,-99,-99,4,215,166,197,93,33,37,37,15,32,11,5,4,3,3,10,2,-33,4,-99,-99,5,36,307,143,103,31,42,39,34,35,20,6,0,4,4,21,4,4,1,-99,-99,45,420,252,57,94,28,20,21,21,36,26,3,0,2,15,33,11,2,2,-99,-99,390,692,934,116,46,18,13,29,8,5,2,3,5,13,51,37,5,3,1,-99,-99,810,1183,594,141,9,27,14,30,26,4,4,4,31,32,69,42,2,2,2,3,0,1153,1010,613,37,10,0,-3,2,1,4,61,38,9,89,56,46,116,4,3,1,3,1356,1497,169,10,4,0,3,0,2,3,46,51,18,148,157,86,3,4,1,2,4,1229,441,81,10,1,0,0,6,10,50,327,60,133,44,20,3,-1,1,6,2,1,662,183,49,6,1,1,-12,1,14,79,280,47,48,42,7,6,-99,-99,-99,2,7,184,28,4,0,0,0,0,3,82,886,112,37,88,48,3,7,-99,-99,-99,1,6,22,12,1,0,-1,0,3,7,154,1065,86,50,111,13,3,5,-99,-99,-99,1,2,0,-1,0,0,1,0,0,7,53,262,1471,75,63,119,4,6,-99,-99,-99,4,3,3,-99,-99,-99,0,-5,10,13,624,155,213,149,262,63,6,5,-99,-99,-99,-99,-99,1,-99,-99,-99,3,-1,24,22,1673,174,144,160,465,120,7,6,-99,-99,-99,-99,-99,1,-99,-99,-99,-1,0,740,49,1680,222,224,131,474,216,6,5,-99,-99,-99,-99,-99,2,-99,-99,-99,0,3,709,83,987,204,306,155,463,39,5,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,153,560,1324,250,101,225,160,10,4,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,8,505,398,985,1391,241,536,63,9,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,36,70,646,683,636,53,152,9,8,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,28,53,675,664,669,43,161,9,7,3,5,-99,-99,-99,-99,-99],
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

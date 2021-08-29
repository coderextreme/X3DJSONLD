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
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(1.7987358796286328,103.79856273796223,326589.76551218075),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(1.7987358796286328,103.79856273796223,0.0),range=391907.72,child1Url=['../../tiles/2/Malacca0-2.x3d'],child2Url=['../../tiles/2/Malacca0-3.x3d'],child3Url=['../../tiles/2/Malacca1-2.x3d'],child4Url=['../../tiles/2/Malacca1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/Malacca0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.16700001,zDimension=22,zSpacing=0.12116667,height=[30,36,18,28,28,27,5,10,4,10,2,1,6,0,8,1,4,3,-99,-99,-99,24,33,26,24,27,6,11,5,8,4,5,2,4,5,-4,10,0,2,-99,-99,-99,14,26,8,10,4,11,2,3,16,2,11,5,1,4,-3,2,0,1,-99,-99,-99,21,27,19,5,15,7,11,5,9,5,3,9,29,-9,17,18,0,0,-99,-99,-99,11,32,6,5,4,23,5,3,1,2,10,3,19,4,-36,9,3,1,-99,-99,-99,9,25,8,3,4,0,2,6,2,3,8,12,25,10,2,1,3,2,-99,-99,-99,18,22,6,4,1,1,4,3,4,8,27,17,16,10,3,1,2,8,-99,-99,-99,2,-1,6,4,1,3,3,2,12,24,43,5,5,2,6,2,2,3,-99,-99,-99,25,6,4,4,1,3,2,3,14,41,26,27,8,3,2,4,3,2,-99,-99,-99,4,4,2,3,1,3,12,11,23,74,62,18,20,2,5,1,0,2,-99,-99,-99,3,5,1,7,4,32,12,26,51,27,39,35,6,2,2,4,3,2,-99,-99,-99,1,5,7,7,12,9,12,47,88,78,48,38,4,1,4,3,2,2,-99,-99,-99,4,4,6,13,31,3,31,27,71,119,42,39,3,4,2,4,3,0,3,0,0,5,9,23,9,21,186,40,74,54,47,127,73,2,1,1,3,5,4,1,3,2,67,31,39,30,8,22,85,183,50,46,49,3,149,2,3,2,4,3,0,0,3,22,66,81,85,11,43,337,919,37,14,28,1,3,3,1,5,2,1,0,4,5,46,175,46,55,16,42,135,309,183,22,57,1,2,1,3,5,2,5,4,4,4,654,159,92,44,28,64,90,79,62,5,5,2,6,5,5,3,3,4,1,2,2,336,105,61,59,107,56,44,52,14,7,3,5,1,1,2,5,6,2,3,1,0,263,98,50,77,53,49,44,31,5,5,5,3,5,2,4,2,2,6,2,3,0,280,199,47,51,50,32,39,34,7,4,7,3,-99,-99,-99,-99,-99,-99,3,7,6,254,245,48,45,40,36,45,32,7,3,6,4,-99,-99,-99,-99,-99,-99,2,8,6],
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

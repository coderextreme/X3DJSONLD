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
    GeoViewpoint(description='GeoViewpoint_3_06',geoSystem=['GDC'],position=(0.8445483343071585,104.21606275779241,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,104.21606275779241,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-12.x3d'],child2Url=['../../tiles/4/Malacca0-13.x3d'],child3Url=['../../tiles/4/Malacca1-12.x3d'],child4Url=['../../tiles/4/Malacca1-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[4,7,2,2,4,0,0,2,4,4,-1,0,3,4,3,3,12,8,7,9,2,-2,0,4,7,7,5,0,0,0,0,3,3,0,1,0,1,2,0,11,4,4,3,3,4,2,1,3,6,5,4,-1,0,3,10,-3,1,0,1,5,1,7,9,3,8,4,4,4,0,2,2,7,6,2,-2,0,3,0,7,0,3,1,0,0,9,8,0,-6,6,4,6,2,5,2,5,7,1,3,0,0,4,0,4,0,-4,0,1,2,0,-1,5,5,7,6,7,0,1,5,4,0,0,39,8,4,0,-2,-1,1,4,6,-13,0,5,5,8,5,6,7,3,3,2,11,2,32,22,-3,-4,-3,0,-3,0,7,2,0,6,-1,4,7,5,7,2,4,0,2,72,40,-4,-1,-2,2,-4,0,3,1,-1,0,0,6,7,6,3,8,6,7,0,0,4,35,7,6,-3,-4,2,-4,0,0,9,2,30,45,8,33,6,4,6,8,4,3,0,6,13,5,-5,-4,0,-2,-3,-5,0,6,114,5,100,0,2,7,3,3,4,85,73,8,-3,-4,10,0,-2,0,8,8,-1,0,1,102,78,0,2,3,6,5,24,6,20,-1,-7,-3,-4,-1,5,4,15,86,2,30,5,5,3,8,10,5,13,10,58,6,17,15,-7,0,-5,-3,-13,12,10,14,12,4,5,3,1,10,6,4,12,5,29,9,14,1,-1,-3,-5,-3,-2,9,16,52,15,2,18,5,23,18,23,10,5,4,13,13,7,-1,4,-4,-6,19,29,8,5,18,6,8,11,5,24,14,11,0,4,3,53,6,0,7,9,3,1,1,5,8,12,38,11,4,14,3,17,-15,13,15,57,4,1,16,0,5,20,3,8,0,8,7,7,9,4,6,1,4,16,13,23,23,16,5,74,8,12,16,6,1,9,3,5,12,9,11,57,12,0,4,8,4,133,95,11,29,28,9,10,39,10,13,13,7,25,6,25,15,6,4,0,4,8,8,14,9,28,17,26,7,5,10,42,19,20,30,27,18,26,35,7,5,3,8,6,2,4,12,7,-5,6,5,13,9,9,5,33,14,21,26,26,14,1,1,8,7,5,2,6,5,4,-7,6,4,9,13,6,5,28,22,22,24,17,14,2,1],
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

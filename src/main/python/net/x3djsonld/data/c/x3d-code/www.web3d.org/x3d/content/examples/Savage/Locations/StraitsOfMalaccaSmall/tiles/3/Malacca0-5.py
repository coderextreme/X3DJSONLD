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
    GeoViewpoint(description='GeoViewpoint_3_05',geoSystem=['GDC'],position=(0.8445483343071585,103.38106271813204,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,103.38106271813204,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-10.x3d'],child2Url=['../../tiles/4/Malacca0-11.x3d'],child3Url=['../../tiles/4/Malacca1-10.x3d'],child4Url=['../../tiles/4/Malacca1-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[25,23,21,6,5,10,12,8,18,8,13,6,5,6,3,5,6,4,5,3,4,4,22,20,7,8,11,24,22,9,8,6,7,4,8,3,4,6,5,10,6,5,3,0,23,14,7,10,8,8,30,18,6,4,7,8,4,0,5,5,5,4,4,5,4,4,25,4,10,0,3,10,27,11,11,4,2,4,7,6,4,4,6,3,13,4,6,4,22,2,6,4,3,6,11,8,3,3,5,22,12,13,6,4,6,6,4,6,6,6,6,0,0,4,6,12,6,11,4,5,3,14,10,7,5,8,5,6,4,2,6,5,0,10,6,4,7,6,6,4,7,5,8,16,10,10,5,6,3,4,10,3,8,5,13,24,19,4,5,6,6,3,3,3,10,44,14,18,5,6,5,2,3,1,3,6,10,10,18,7,8,4,5,5,3,3,18,39,19,7,10,4,4,6,24,2,7,0,25,22,17,6,4,13,0,4,4,4,12,38,6,63,3,3,3,7,3,1,33,30,17,16,0,7,10,5,2,1,3,6,19,20,29,13,2,2,5,17,9,11,28,114,10,-4,14,9,18,4,2,3,1,4,5,8,33,2,5,4,5,7,4,7,10,1,-1,16,22,14,20,9,3,2,4,4,18,11,9,23,2,4,4,5,5,2,2,5,25,25,28,24,11,9,6,5,2,5,3,2,18,3,1,2,3,2,2,4,5,5,11,23,29,25,6,5,6,2,0,4,4,0,0,2,2,1,1,1,3,4,6,18,22,28,27,7,7,5,2,3,2,3,4,2,4,0,1,0,2,4,3,2,5,11,22,25,10,2,4,3,7,6,5,4,16,13,0,4,1,1,3,5,0,2,15,14,21,10,0,-1,0,3,6,5,1,54,9,0,2,1,2,2,1,3,1,2,3,1,13,5,1,1,1,1,3,4,6,12,150,2,2,3,4,2,0,2,2,3,2,0,6,0,9,2,3,1,3,4,6,2,60,6,3,0,5,0,1,1,4,5,6,0,1,0,2,4,5,3,5,6,4,4,5,5,1,4,0,2,5,3,2,-2,7,3,1,0,1,3,6,2,2,6,6,5,5,6,2,5,0,-2,3,3,0,0,6,8],
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

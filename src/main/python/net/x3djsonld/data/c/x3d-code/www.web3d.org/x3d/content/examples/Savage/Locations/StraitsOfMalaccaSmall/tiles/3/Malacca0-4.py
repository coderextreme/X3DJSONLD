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
    GeoViewpoint(description='GeoViewpoint_3_04',geoSystem=['GDC'],position=(0.8445483343071585,102.54606267847167,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(0.8445483343071585,102.54606267847167,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca0-8.x3d'],child2Url=['../../tiles/4/Malacca0-9.x3d'],child3Url=['../../tiles/4/Malacca1-8.x3d'],child4Url=['../../tiles/4/Malacca1-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca0-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[34,23,38,37,37,28,23,21,19,18,28,24,29,29,23,25,26,25,25,27,23,25,36,35,38,36,39,29,22,19,20,20,21,28,29,27,25,28,26,25,24,22,26,22,33,32,36,33,35,31,21,20,21,19,21,24,27,20,28,28,25,24,25,25,23,23,30,31,38,32,29,30,30,24,21,23,24,28,29,29,29,28,26,27,27,25,25,25,29,24,16,17,34,23,35,28,25,26,29,24,27,28,27,29,25,25,24,25,23,22,30,31,30,19,36,33,33,30,29,30,25,26,26,22,28,29,28,24,25,29,6,6,32,36,32,18,25,26,29,31,31,26,30,27,23,25,26,26,29,21,24,6,2,0,31,34,34,29,26,28,23,26,25,14,6,-4,4,27,25,4,5,6,5,4,1,13,23,30,29,24,27,31,25,23,17,0,15,6,9,2,5,1,6,8,7,0,9,10,16,24,32,25,26,30,31,11,1,25,27,27,31,11,13,11,7,9,11,10,9,25,24,11,24,16,25,1,22,-2,24,25,26,27,17,28,32,32,26,10,10,36,16,17,17,14,21,24,3,3,1,12,23,25,27,31,10,26,33,17,31,20,34,26,12,10,11,27,36,28,6,2,0,1,22,28,24,26,10,24,16,6,8,26,32,22,0,-1,29,24,9,25,25,3,3,9,10,5,16,22,12,11,4,11,6,28,24,8,16,25,24,18,30,1,13,1,11,22,7,1,6,13,8,10,6,12,9,16,0,5,6,11,8,11,25,4,9,24,21,24,10,8,11,5,7,4,7,8,7,6,9,19,17,22,19,30,8,28,22,33,10,11,10,9,23,6,3,6,0,-4,7,6,13,24,22,22,10,29,9,-9,28,12,7,7,4,16,3,16,0,5,13,14,9,6,4,6,25,21,0,15,5,18,36,33,19,3,1,15,11,4,3,0,9,20,10,4,5,29,8,13,1,13,2,23,23,29,12,11,4,20,7,3,3,3,3,9,24,9,19,14,6,6,8,3,4,6,18,25,27,19,7,1,5,3,4,5,2,5,8,0,5,6,1,1,9,3,6,5,19,31,28,21,7,0,4,4,3,5,2,4,8,0,3,6,0,1],
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

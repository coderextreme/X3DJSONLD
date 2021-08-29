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
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],position=(41.500539965587954,-71.43945518210546,82007.5640554569),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.500539965587954,-71.43945518210546,0.0),range=98409.08,child1Url=['../../tiles/1/newport0-0.x3d'],child2Url=['../../tiles/1/newport0-1.x3d'],child3Url=['../../tiles/1/newport1-0.x3d'],child4Url=['../../tiles/1/newport1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/0/newport0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.1134987469,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03350149,zDimension=21,zSpacing=0.038704123,height=[0,0,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,24,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,0,0,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,24,26,0,0,0,0,0,0,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,10,43,44,11,9,5,7,8,0,0,0,0,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,12,49,22,14,39,43,36,43,7,29,0,0,0,0,0,0,0,0,0,0,0,0,62,54,18,29,32,29,33,37,30,23,14,0,0,14,0,0,0,1,0,0,0,0,107,51,44,41,57,69,39,30,69,34,26,0,18,0,22,31,0,14,19,1,0,0,119,64,93,56,133,119,54,51,54,16,14,0,26,0,45,86,0,30,37,48,10,14,89,82,45,102,147,121,86,67,60,21,0,0,0,0,0,74,0,4,48,38,49,45,135,80,68,122,116,99,99,124,70,18,16,0,0,0,0,5,0,33,65,46,36,33,104,144,137,172,131,107,98,120,69,34,20,0,0,0,18,16,1,69,64,39,41,41,112,133,161,131,104,76,74,76,39,47,18,6,24,0,0,30,1,1,65,54,64,63,135,140,189,141,124,116,86,48,81,31,26,17,0,5,11,1,11,6,24,55,50,52,167,166,177,142,162,86,98,158,106,21,16,11,0,7,4,8,18,30,37,2,23,26,197,197,145,163,147,147,110,122,89,62,16,4,18,18,9,7,27,32,34,27,1,1,222,209,142,162,170,111,113,85,83,34,49,20,0,20,34,10,19,40,25,21,17,18,221,210,142,162,170,114,114,85,85,35,49,18,0,20,35,10,19,40,25,21,17,18],
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

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
    GeoViewpoint(description='GeoViewpoint_3_31',geoSystem=['GDC'],position=(2.752923424950107,100.04106255949056,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.752923424950107,100.04106255949056,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca6-2.x3d'],child2Url=['../../tiles/4/Malacca6-3.x3d'],child3Url=['../../tiles/4/Malacca7-2.x3d'],child4Url=['../../tiles/4/Malacca7-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.434860909842949,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[204,105,21,16,18,17,8,4,3,9,11,1,3,1,1,10,24,20,7,0,2,2,75,56,9,12,12,7,10,8,1,8,11,3,5,6,8,6,26,10,2,0,0,0,49,15,8,7,4,6,6,6,3,5,6,0,1,6,3,9,6,7,0,0,0,4,29,22,18,7,7,2,1,2,2,2,8,2,0,3,5,6,20,7,-2,-1,0,0,44,21,16,8,4,2,3,3,6,2,3,1,3,14,6,19,22,9,-4,0,-4,-7,31,34,17,14,3,8,8,4,1,1,1,1,2,5,12,19,12,11,-1,-3,-1,3,29,20,30,18,14,7,7,4,1,2,1,1,4,6,15,23,5,0,-2,0,1,-2,48,30,9,7,22,4,5,16,1,0,1,3,5,8,22,14,4,0,0,-1,1,-3,44,37,13,11,7,6,4,8,0,1,1,1,0,7,16,5,1,0,1,-1,-4,0,30,18,24,6,7,6,10,1,1,0,2,1,2,2,15,0,0,1,1,1,0,2,22,17,7,12,15,7,6,0,0,-3,1,1,-2,9,4,1,1,1,2,2,5,-1,31,12,7,19,15,7,12,0,2,-2,2,2,0,0,0,2,1,2,2,1,1,0,35,18,6,20,14,13,11,7,2,-1,0,0,1,0,0,2,2,2,2,1,1,0,15,10,8,6,3,12,9,2,3,4,-1,0,0,1,1,1,2,0,2,1,1,3,41,28,22,5,6,2,5,22,2,2,0,0,2,1,2,2,1,0,0,2,2,0,35,29,16,3,2,9,2,3,10,0,0,0,0,0,0,1,0,1,0,2,0,1,19,30,24,3,3,4,1,7,6,-3,0,0,1,0,0,1,0,2,0,0,1,2,24,12,13,6,6,3,6,7,8,0,1,0,-1,1,1,2,1,0,2,0,0,0,25,16,10,6,3,3,10,7,4,12,-1,0,1,1,1,0,1,0,0,1,1,0,18,12,7,3,1,7,5,10,-3,0,0,0,0,0,2,1,1,0,0,1,1,0,16,13,11,6,10,10,2,-1,0,0,0,2,1,0,0,4,1,2,0,0,0,1,21,14,9,8,10,9,2,0,0,0,0,1,1,2,1,2,1,1,1,0,0,0],
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

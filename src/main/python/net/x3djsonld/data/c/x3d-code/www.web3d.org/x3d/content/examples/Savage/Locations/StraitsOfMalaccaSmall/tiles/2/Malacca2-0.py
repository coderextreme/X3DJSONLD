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
    GeoViewpoint(description='GeoViewpoint_2_20',geoSystem=['GDC'],position=(3.7071109702715814,99.62356253966037,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.7071109702715814,99.62356253966037,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca4-0.x3d'],child2Url=['../../tiles/3/Malacca4-1.x3d'],child3Url=['../../tiles/3/Malacca5-0.x3d'],child4Url=['../../tiles/3/Malacca5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[719,479,489,277,200,138,105,75,56,20,16,12,12,0,-1,-1,1,1,2,0,2,1,412,370,230,186,148,113,74,69,26,18,3,0,1,-1,2,3,1,2,1,2,1,0,377,195,154,116,116,79,58,49,24,0,5,0,0,0,2,3,0,2,1,1,0,1,273,173,97,50,69,48,28,20,1,7,1,2,0,0,1,1,0,0,1,0,0,1,182,105,96,58,26,37,13,14,2,0,2,0,0,0,1,4,2,2,1,1,1,0,138,100,75,49,22,11,3,5,4,0,2,0,0,1,2,3,3,3,1,1,0,1,77,52,47,23,11,4,1,2,0,1,1,0,0,0,0,7,1,0,1,0,0,0,39,23,31,18,5,2,3,2,3,0,0,0,0,0,0,0,0,0,0,0,1,2,23,15,19,12,9,0,3,3,2,0,0,0,0,0,0,0,-1,1,0,1,1,0,11,10,10,3,0,2,2,0,0,0,0,0,0,0,0,0,0,1,-1,0,1,0,1,2,2,1,2,0,0,0,0,2,1,-1,1,0,1,0,1,-1,1,0,1,1,5,0,-3,0,1,0,0,2,1,1,0,0,0,2,1,1,1,0,1,5,1,0,-2,0,0,-2,-2,-1,0,0,1,1,0,-1,2,3,0,2,0,0,0,0,0,0,0,0,2,3,0,0,0,0,0,0,0,0,0,0,0,0,2,2,-1,0,0,0,0,0,3,3,1,2,0,1,1,1,1,2,3,0,1,0,0,0,0,0,0,0,0,0,0,2,4,1,0,3,0,1,0,0,0,0,1,0,0,1,1,0,-1,0,0,1,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,2,-8,0,5,0,3,2,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,0,2,1,0,0,2,2,9,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,1,3,-2,-3,-3,2,0,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,1,0,-2,-1,0,0,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,0,0,0,0,0,-2,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,0,0,1,0,0],
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

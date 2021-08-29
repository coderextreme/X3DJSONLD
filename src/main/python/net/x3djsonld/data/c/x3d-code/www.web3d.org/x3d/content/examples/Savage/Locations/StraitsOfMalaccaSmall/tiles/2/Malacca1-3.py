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
    GeoViewpoint(description='GeoViewpoint_2_13',geoSystem=['GDC'],position=(2.434860909842949,104.6335627776226,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.434860909842949,104.6335627776226,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca2-6.x3d'],child2Url=['../../tiles/3/Malacca2-7.x3d'],child3Url=['../../tiles/3/Malacca3-6.x3d'],child4Url=['../../tiles/3/Malacca3-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[27,29,22,46,11,4,4,3,3,3,3,0,1,0,2,-99,-99,-99,-99,-99,-99,-99,430,255,8,49,7,4,4,3,4,2,3,3,2,2,1,-99,-99,-99,-99,-99,-99,-99,42,9,64,8,3,3,4,3,3,5,2,4,4,4,1,-99,-99,-99,-99,-99,-99,-99,55,23,45,10,3,1,1,2,4,5,3,0,4,2,2,-99,-99,-99,-99,-99,-99,-99,37,16,62,8,2,1,3,3,3,3,2,1,4,2,3,3,3,3,1,0,0,1,50,45,38,3,3,3,1,3,4,2,4,3,3,3,3,2,2,3,2,0,1,0,102,54,100,4,3,2,3,2,1,4,2,2,3,2,1,1,3,0,2,0,1,1,54,35,4,4,2,2,3,2,1,2,4,2,3,5,0,1,2,0,3,0,5,0,61,49,3,3,129,2,4,5,5,2,0,6,4,3,2,2,2,1,0,1,3,5,29,29,5,4,4,5,3,2,3,3,3,3,2,4,5,2,0,2,4,1,3,1,25,1,2,1,5,4,4,2,4,0,2,3,3,0,4,1,0,1,0,1,0,0,27,2,1,3,2,3,2,3,6,2,2,4,2,3,3,0,5,4,1,1,0,4,63,3,2,3,3,3,3,4,5,3,2,3,4,2,5,2,4,2,4,3,3,5,0,3,2,2,2,3,5,4,1,3,2,3,4,2,4,7,4,2,0,1,0,0,2,0,3,3,0,2,5,3,4,3,4,2,2,1,0,1,6,4,1,1,1,4,3,5,2,4,-1,288,1,2,3,5,4,4,1,2,1,4,4,4,1,2,1,0,3,3,3,2,0,28,3,3,3,4,4,3,1,6,0,2,0,1,4,2,3,-3,4,4,3,4,4,0,3,1,4,5,4,5,3,4,4,3,2,2,1,2,0,1,6,5,1,3,5,3,0,5,1,1,5,3,1,5,4,3,2,2,0,2,-3,1,5,5,8,2,2,1,4,1,4,1,2,4,-1,3,2,4,5,5,1,-1,0,2,4,3,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,6,1,4,0,5,-1,3,3,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,2,1,8,3,0],
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

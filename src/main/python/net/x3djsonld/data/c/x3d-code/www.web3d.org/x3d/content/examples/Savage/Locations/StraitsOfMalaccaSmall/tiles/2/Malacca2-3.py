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
    GeoViewpoint(description='GeoViewpoint_2_23',geoSystem=['GDC'],position=(3.7071109702715814,104.6335627776226,163294.88275609037),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.7071109702715814,104.6335627776226,0.0),range=195953.86,child1Url=['../../tiles/3/Malacca4-6.x3d'],child2Url=['../../tiles/3/Malacca4-7.x3d'],child3Url=['../../tiles/3/Malacca5-6.x3d'],child4Url=['../../tiles/3/Malacca5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,103.79856273796223,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.07952382,zDimension=22,zSpacing=0.060583334,height=[3,3,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,2,1,8,3,0,4,4,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,3,1,4,0,7,0,4,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,2,7,13,5,0,0,4,6,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,1,5,7,7,0,5,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,1,4,0,3,3,5,6,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,1,3,3,3,2,3,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,1,3,1,1,3,7,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,1,0,4,2,1,4,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,5,0,5,1,1,2,5,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,3,3,4,4,3,2,5,6,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,7,4,2,3,5,2,5,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,1,5,0,3,0,1,4,4,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,4,2,2,2,2,1,5,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,1,4,2,0,2,2,5,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,4,2,2,1,1,1,4,5,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,3,2,2,2,3,2,6,3,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,8,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,6,8,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,7,8,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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

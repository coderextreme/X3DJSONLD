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
    GeoViewpoint(description='GeoViewpoint_3_50',geoSystem=['GDC'],position=(4.0251734853787395,99.20606251983018,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(4.0251734853787395,99.20606251983018,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca10-0.x3d'],child2Url=['../../tiles/4/Malacca10-1.x3d'],child3Url=['../../tiles/4/Malacca11-0.x3d'],child4Url=['../../tiles/4/Malacca11-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.7071109702715814,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[10,7,10,5,7,4,1,0,1,2,0,1,2,0,2,0,2,0,-1,1,0,-1,0,2,2,4,3,-7,0,1,0,2,1,2,0,0,2,0,0,0,0,1,1,0,0,1,9,0,-1,-3,0,0,3,3,1,0,0,1,0,0,0,0,0,0,0,0,3,0,0,-1,0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,2,0,0,0,0,0,-2,0,0,0,0,2,2,3,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,-1,0,0,1,0,1,0,0,0,0,0,2,0,0,0,0,2,0,0,0,1,0,0,0,0,-1,0,0,0,1,1,0,1,1,0,0,1,1,2,2,0,-1,0,0,0,0,3,0,1,0,1,0,0,0,0,0,0,2,1,3,0,2,2,0,1,0,-1,-2,0,-1,-1,0,1,0,0,0,0,0,1,1,1,2,0,0,0,0,0,2,1,0,1,0,0,0,0,0,0,0,0,0,0,2,2,3,0,2,0,3,0,0,0,2,2,2,0,3,2,0,0,3,2,0,0,0,0,1,3,0,2,4,0,0,2,0,8,2,1,2,0,0,2,0,1,1,0,0,0,4,3,0,0,0,0,0,0,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,3,0,1,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,0,2,4,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,4,1,0,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,-1,5,4,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,4,1,0,-1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,3,0,8,0,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,2,4,3,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,3,3,1,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,4,4,0,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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

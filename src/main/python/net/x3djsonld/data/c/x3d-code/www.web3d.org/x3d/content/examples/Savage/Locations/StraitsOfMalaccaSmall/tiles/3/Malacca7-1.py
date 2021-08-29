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
    GeoViewpoint(description='GeoViewpoint_3_71',geoSystem=['GDC'],position=(5.297423545807372,100.04106255949056,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(5.297423545807372,100.04106255949056,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca14-2.x3d'],child2Url=['../../tiles/4/Malacca14-3.x3d'],child3Url=['../../tiles/4/Malacca15-2.x3d'],child4Url=['../../tiles/4/Malacca15-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca7-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-7,0,5,0,3,5,0,3,3,2,1,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-6,-3,0,5,1,3,1,-1,4,3,3,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,8,5,0,0,0,2,3,2,2,3,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,10,0,2,0,1,1,0,2,2,0,3,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,4,2,0,2,1,3,2,2,7,4,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,5,0,0,2,4,1,0,3,4,4,7,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-3,-1,3,0,2,4,2,0,6,1,1,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-3,-5,-5,-5,1,0,4,1,2,4,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,-3,-1,1,1,2,1,0,4,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,-1,2,-3,5,2,0,1,7,-1,5,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,0,0,2,1,2,8,1,0,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,7,13,2,1,0,3,3,2,0,3,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-2,0,1,0,0,0,1,1,1,0,4,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,7,5,0,12,-2,21,4,0,13,9,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,-4,-6,0,13,146,30,2,1,-1,12,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-5,1,4,1,7,154,28,5,7,-3,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,-4,2,3,8,217,95,0,2,4,7,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-7,5,2,6,7,497,23,7,0,5,6,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,12,-8,2,9,322,400,394,4,10,6,18,10,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,8,-1,1,1,170,65,15,3,-11,5,4,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,4,4,2,-2,0,5,7,2,3,10,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,3,3,3,0,0,-2,8,2,2,10,8],
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

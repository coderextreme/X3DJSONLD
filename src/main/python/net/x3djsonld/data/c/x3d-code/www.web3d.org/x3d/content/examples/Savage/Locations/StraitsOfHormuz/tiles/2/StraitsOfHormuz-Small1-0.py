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
    GeoViewpoint(description='GeoViewpoint_2_10',geoSystem=['GDC'],position=(26.1214698558067,55.42775814790765,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.1214698558067,55.42775814790765,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small2-0.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small2-1.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small3-0.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.8972799768378,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[8,1,1,2,2,3,3,3,5,5,1,2,2,2,1,2,0,0,1,0,0,0,4,0,4,1,3,5,0,1,1,3,2,3,4,4,2,1,1,2,0,0,0,0,3,6,5,2,5,3,3,3,4,1,2,5,4,3,3,2,1,-1,0,0,1,0,7,3,5,2,5,1,5,2,4,3,3,5,2,2,3,0,0,1,0,0,0,2,3,3,3,4,5,4,4,5,5,4,2,4,3,0,1,3,1,0,1,0,0,0,3,6,0,5,2,7,4,1,2,5,1,5,2,4,0,2,1,0,0,1,0,0,5,4,2,4,4,6,5,5,3,6,4,0,1,1,2,2,1,0,1,0,0,1,5,3,0,1,4,7,1,4,1,2,0,1,0,2,0,2,1,0,1,1,2,1,0,0,4,2,4,0,4,6,2,2,3,1,2,4,2,3,2,0,1,1,0,0,5,3,1,0,4,4,7,2,4,4,3,1,3,3,1,2,3,2,0,2,0,0,1,3,2,-2,5,6,0,1,3,6,2,0,0,2,2,1,1,0,0,1,0,0,2,1,-1,2,8,3,-2,1,2,1,0,3,4,3,4,0,0,2,0,0,0,0,2,5,6,-3,14,2,1,0,4,0,2,4,3,1,3,2,0,1,-1,0,2,0,6,5,4,11,0,5,-1,1,5,0,4,1,0,8,2,1,0,0,0,0,0,0,6,1,2,4,6,3,0,3,5,0,0,0,3,2,0,0,0,0,0,1,1,1,2,1,4,5,0,2,0,0,1,0,5,4,1,2,0,0,0,0,0,1,0,1,4,-2,2,3,0,6,14,6,2,0,0,0,1,0,2,3,1,4,2,1,2,1,7,6,14,4,15,0,25,2,-1,0,0,3,3,0,2,1,0,1,2,0,1,1,0,11,4,-2,71,-8,7,8,0,0,7,1,2,3,0,0,0,0,1,0,2,0,0,1,4,-3,-6,-3,-2,11,-4,-2,0,0,3,1,2,4,0,1,2,0,3,2,1,3,7,1,1,14,0,-9,10,5,2,-1,0,3,2,4,3,0,0,3,2,2,2,2,5,0,2,14,0,-9,9,6,3,-2,0,1,2,3,3,1,0,3,1,2],
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

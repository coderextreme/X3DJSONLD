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
    GeoViewpoint(description='GeoViewpoint_2_03',geoSystem=['GDC'],position=(25.6730900978689,57.23545039395357,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.6730900978689,57.23545039395357,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small0-6.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small0-7.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small1-6.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small1-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[1,3,3,0,2,2,3,1,0,1,2,2,0,1,2,1,2,1,2,2,0,0,2,0,3,2,3,2,4,3,0,1,2,2,1,1,2,2,4,2,1,3,3,3,1,2,1,1,3,4,3,2,1,1,0,1,0,1,1,1,3,2,4,0,1,2,0,1,1,3,0,2,2,4,3,1,1,2,0,1,3,4,1,1,1,0,1,2,1,1,2,1,0,0,2,4,3,4,0,0,1,3,1,2,3,1,0,0,0,2,0,0,2,1,1,1,2,3,1,4,0,0,1,-1,0,0,0,1,1,0,6,5,0,2,1,1,0,1,2,2,1,4,2,3,0,0,-5,0,3,0,1,4,5,2,2,2,2,2,2,0,1,2,0,3,0,1,0,-14,0,1,3,2,6,4,2,2,0,0,1,3,1,0,4,4,2,0,0,2,10,-3,2,-4,3,4,3,2,1,0,1,2,0,3,0,2,3,5,0,0,0,-11,0,0,-1,4,5,2,0,2,1,1,0,2,0,0,0,3,2,4,-1,-3,-3,4,0,0,0,6,3,0,1,1,1,2,2,1,2,0,3,1,1,1,0,3,7,-4,2,-3,-1,2,-4,2,1,0,2,1,2,0,2,2,0,-1,-4,0,-2,7,0,0,-1,4,-1,2,6,0,2,2,2,0,4,0,1,-8,0,-1,0,5,0,-5,0,-3,4,4,3,-23,2,0,4,3,0,0,0,1,0,-2,-4,4,-3,0,3,0,0,17,0,11,0,0,0,0,1,0,0,1,-1,-3,0,-5,0,-1,1,8,-1,-1,1,2,-1,-2,0,2,3,2,0,0,1,3,0,0,0,1,0,6,-15,2,0,0,0,0,2,0,2,6,8,6,6,8,10,30,-1,-1,0,2,2,7,5,12,1,0,0,0,0,2,7,11,9,9,10,13,14,11,0,0,0,2,6,6,0,0,0,-1,0,2,1,1,9,11,17,18,17,19,20,18,0,0,2,4,0,5,0,0,0,0,1,2,2,7,19,24,123,25,27,33,30,25,1,1,3,1,0,-3,0,-2,-2,5,-7,5,1,10,30,22,44,47,78,32,45,44,1,2,4,2,0,-1,0,-3,0,5,-7,5,1,10,30,22,52,46,75,33,43,46],
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

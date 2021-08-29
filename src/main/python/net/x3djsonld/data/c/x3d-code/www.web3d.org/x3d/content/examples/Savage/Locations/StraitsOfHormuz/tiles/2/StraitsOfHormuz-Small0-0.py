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
    GeoViewpoint(description='GeoViewpoint_2_00',geoSystem=['GDC'],position=(25.6730900978689,55.42775814790765,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.6730900978689,55.42775814790765,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small0-0.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small0-1.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small1-0.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[4,1,2,1,4,2,4,1,0,1,1,0,-3,0,13,15,22,35,29,33,49,55,1,2,0,1,2,1,0,1,2,3,2,3,1,2,6,15,17,21,36,40,47,51,0,2,2,1,3,0,0,2,2,0,2,1,2,3,2,9,15,24,25,18,45,39,3,2,2,0,3,3,4,2,3,1,7,3,3,2,1,3,1,12,22,20,43,28,2,1,0,1,2,3,2,4,2,3,4,3,2,3,0,-2,2,1,11,22,19,26,0,2,4,0,3,3,4,6,4,4,3,5,1,0,3,1,3,1,8,12,19,13,2,3,3,2,4,2,3,3,1,4,4,5,1,5,3,2,0,0,2,8,13,15,3,4,2,3,3,2,3,4,2,3,3,4,4,2,4,0,1,1,0,6,8,9,2,4,4,4,4,5,3,4,3,5,5,4,3,4,1,4,4,2,2,3,6,7,2,2,4,5,1,4,3,3,6,4,5,2,2,1,2,3,0,0,1,0,3,3,5,3,2,4,3,5,5,4,5,6,4,8,2,3,1,2,3,2,1,1,3,2,5,2,4,4,4,4,6,5,4,3,2,4,3,3,3,2,0,1,3,3,2,1,4,1,3,3,2,4,3,4,2,5,4,2,3,1,0,3,0,5,2,0,1,1,3,2,2,5,5,3,1,5,2,4,3,3,3,6,2,0,-4,1,2,1,0,2,6,4,5,5,2,3,4,5,2,3,5,3,2,3,2,2,1,1,2,1,1,0,3,4,4,2,4,3,2,2,2,3,4,2,3,3,4,0,1,0,3,3,0,0,4,4,1,4,5,3,3,1,1,0,4,5,4,3,0,0,3,-1,2,2,0,0,3,5,4,1,5,3,5,3,3,5,3,4,2,3,2,3,2,1,0,1,1,0,1,4,3,3,3,4,4,3,3,3,5,3,2,3,1,2,2,1,1,1,0,1,3,3,3,4,1,3,4,3,4,4,2,3,3,2,2,0,0,0,0,1,1,0,10,3,2,2,2,4,3,4,5,5,2,2,1,2,1,2,0,1,2,0,0,0,8,1,1,2,2,3,3,3,5,5,1,2,2,2,1,2,0,0,1,0,0,0],
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

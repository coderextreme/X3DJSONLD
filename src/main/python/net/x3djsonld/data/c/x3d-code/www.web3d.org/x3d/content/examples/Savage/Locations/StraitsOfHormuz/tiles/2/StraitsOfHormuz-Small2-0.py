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
    GeoViewpoint(description='GeoViewpoint_2_20',geoSystem=['GDC'],position=(26.569849613744502,55.42775814790765,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.569849613744502,55.42775814790765,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small4-0.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small4-1.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small5-0.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,55.1264761069,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[2,2,5,0,2,14,0,-9,9,6,3,-2,0,1,2,3,3,1,0,3,1,2,2,8,4,5,-2,0,0,1,-4,6,-1,1,0,1,1,3,1,2,1,1,0,2,2,2,0,0,0,-3,-2,0,0,33,16,2,8,5,2,5,4,2,0,0,0,0,0,4,4,3,0,-2,2,6,16,5,2,0,0,0,0,4,3,4,2,0,0,-2,0,0,2,1,0,5,5,4,-2,22,-12,7,-4,2,5,0,1,0,0,0,0,0,0,3,4,3,4,0,7,1,0,-1,0,-3,0,11,0,0,3,3,1,1,1,2,4,0,0,-5,5,5,8,1,8,1,1,0,-7,4,-2,-1,-2,3,1,0,0,0,3,2,6,3,0,-3,6,-2,2,3,8,2,5,12,2,0,2,0,0,2,1,0,0,4,2,3,-5,0,-1,0,-4,0,0,0,0,-3,0,8,-1,0,0,1,2,0,-1,0,0,0,-1,0,0,0,0,3,-13,9,0,4,0,0,0,4,0,0,-1,2,0,0,2,0,0,13,32,0,5,6,-2,3,-4,0,0,0,4,0,0,0,1,0,0,0,0,0,0,8,35,10,18,9,25,-14,79,0,1,-6,2,-1,3,0,1,1,0,0,0,4,3,0,20,101,27,20,31,18,143,17,0,8,10,7,0,4,1,5,0,2,-5,4,0,2,29,8,20,13,63,103,180,185,11,11,14,2,2,0,1,1,0,2,1,0,3,8,1,2,0,4,6,54,167,139,126,21,2,5,0,2,0,1,0,0,1,2,1,1,1,3,5,9,10,10,49,28,174,131,62,19,5,5,1,0,0,1,4,1,0,0,2,2,-2,0,5,6,-2,24,14,71,175,134,31,51,30,33,151,1,3,2,0,0,1,2,1,3,4,-8,-3,13,3,4,6,40,63,174,94,112,378,56,13,10,1,4,0,1,3,-1,4,1,-5,5,0,4,-4,11,19,19,22,69,107,62,48,22,-1,-2,0,0,3,2,0,4,4,0,0,-8,-2,0,-7,3,5,6,126,109,126,238,198,57,29,6,4,5,4,4,0,3,-12,2,0,0,4,4,0,0,130,111,132,250,210,66,37,7,4,6,5,4,1,3,-13,0,0,0,3,4,0,0],
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

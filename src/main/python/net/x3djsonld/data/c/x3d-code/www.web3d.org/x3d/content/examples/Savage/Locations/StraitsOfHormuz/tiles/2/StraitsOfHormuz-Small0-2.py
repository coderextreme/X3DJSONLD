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
    GeoViewpoint(description='GeoViewpoint_2_02',geoSystem=['GDC'],position=(25.6730900978689,56.632886311938265,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.6730900978689,56.632886311938265,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small0-4.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small0-5.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small1-4.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small1-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[93,0,0,0,-1,1,0,0,0,-1,0,0,0,2,2,1,3,3,3,1,0,1,313,15,1,4,1,0,0,1,0,0,0,0,2,2,0,2,2,1,1,2,2,2,157,6,2,2,1,0,0,0,0,0,0,3,2,0,3,2,3,2,0,3,2,1,36,79,3,0,2,0,0,1,0,1,3,0,0,3,1,1,1,3,0,3,3,0,30,3,0,1,1,0,0,2,1,2,2,4,0,1,1,1,2,0,0,2,2,1,89,0,2,1,1,0,4,2,4,1,1,2,1,4,2,1,1,1,1,0,0,0,228,0,0,2,0,-1,1,3,3,3,1,3,0,3,1,2,2,2,2,4,2,0,0,2,2,2,3,-1,3,0,3,4,3,2,2,2,2,1,1,1,0,1,0,2,2,2,4,5,6,1,4,1,2,0,2,2,1,0,-1,2,2,1,2,1,2,0,0,4,2,5,3,1,2,1,3,2,3,1,3,0,0,1,0,0,0,1,0,1,1,1,4,2,2,4,1,6,5,4,3,0,2,1,1,0,0,0,2,2,2,0,3,4,4,2,1,0,4,0,1,1,1,2,2,0,1,0,0,0,1,0,1,2,1,-1,0,2,6,3,7,4,0,0,0,0,1,2,1,0,0,3,0,0,3,2,0,2,3,2,4,4,0,3,-3,0,2,2,2,3,0,0,2,0,0,1,2,4,250,3,4,5,5,4,6,3,4,-6,-2,1,2,4,0,1,0,0,0,0,-3,0,98,1,3,3,4,1,-5,8,4,0,-3,0,1,2,3,0,0,0,1,0,0,-1,425,1,3,6,5,-2,4,-1,1,1,2,0,2,2,0,1,-1,0,0,0,-1,0,424,120,5,-13,-4,0,2,-2,-6,7,2,-1,2,0,1,0,-1,0,-2,-2,-1,-1,480,139,15,10,-3,3,11,-2,0,6,6,9,2,1,-1,1,-2,0,0,-3,-1,0,755,810,257,4,2,8,4,-3,-6,3,0,-13,0,-2,0,0,-3,-7,-3,-2,0,0,506,1188,410,2,0,18,-3,1,5,15,5,-11,0,0,-2,-2,-3,2,-1,0,2,1,486,1178,404,5,0,13,-3,1,4,14,5,-10,0,1,-1,-3,-4,2,-1,0,2,1],
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

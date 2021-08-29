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
    GeoViewpoint(description='GeoViewpoint_2_22',geoSystem=['GDC'],position=(26.569849613744502,56.632886311938265,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.569849613744502,56.632886311938265,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small4-4.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small4-5.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small5-4.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small5-5.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small2-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[3,-2,143,27,6,1,3,-2,0,0,0,-4,-2,0,3,2,0,0,-4,0,0,0,7,2,7,-2,3,4,0,-3,0,1,0,-1,0,1,0,4,4,2,0,0,0,0,0,2,0,0,3,2,2,12,2,0,1,0,0,2,1,1,0,3,0,1,4,2,1,2,3,4,1,1,0,0,0,0,0,2,1,0,3,0,1,3,2,1,0,0,3,3,2,2,4,0,0,0,0,0,1,1,1,2,1,0,0,3,1,1,0,2,0,0,5,5,-1,1,0,0,0,0,2,1,0,3,2,0,1,2,2,1,3,2,0,2,2,1,2,-2,0,1,1,0,2,1,0,0,1,4,0,3,2,0,2,3,1,2,0,0,1,0,1,0,-1,0,1,1,0,1,0,2,3,2,4,0,2,2,1,3,2,2,3,2,-2,1,1,0,1,3,1,2,1,4,2,0,2,1,4,0,0,1,1,1,2,0,0,0,0,-2,1,1,0,2,3,5,4,2,2,1,1,0,0,2,3,3,2,0,0,0,0,0,0,0,4,7,3,6,0,1,0,2,1,0,0,2,2,1,2,4,0,0,1,-1,1,2,4,2,3,3,2,1,3,2,2,0,1,0,3,0,2,2,1,0,1,2,1,3,3,1,3,1,1,2,2,1,1,2,0,1,2,3,1,3,4,1,0,6,5,2,0,3,4,0,2,2,2,2,1,2,3,1,0,2,1,2,1,0,3,4,5,3,3,3,3,1,2,2,2,3,3,2,0,1,2,1,1,3,3,2,3,3,4,5,0,3,1,0,3,3,3,0,0,2,1,0,0,3,2,4,4,1,3,0,2,4,2,3,1,1,3,1,4,2,0,0,3,4,2,1,1,3,5,3,4,1,2,7,1,4,5,3,1,4,3,0,1,3,1,2,2,3,2,2,5,4,4,5,2,3,5,0,2,3,3,2,2,2,0,0,0,3,2,3,3,5,4,4,3,3,2,3,4,2,3,4,1,2,1,1,1,0,3,4,2,2,5,3,4,2,1,2,3,2,3,0,2,3,1,1,1,0,1,1,4,3,1,3,4,3,5,3,2,3,2,2,3,0,2,2,1,2,2,1,0,1],
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
